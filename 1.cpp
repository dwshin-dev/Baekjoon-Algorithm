#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	char srcFile[100];
	cout << "Input file name: "; cin >> srcFile;
	char insFile[100];
	cout << "Input file to insert: "; cin >> insFile;
	char destFile[100];
	cout << "Output file name: "; cin >> destFile;

	ifstream fsrc(srcFile, ios::in | ios::binary);
	if (!fsrc) {
		cout << srcFile << " 열기 오류" << endl;
		return 0;
	}

	ifstream fins(insFile, ios::in | ios::binary);
	if (!fins) {
		cout << insFile << " 열기 오류" << endl;
		return 0;
	}

	ofstream fdest(destFile, ios::out | ios::binary);
	if (!fdest) {
		cout << destFile << " 열기 오류" << endl;
		return 0;
	}

	// 소스 파일에서 목적 파일로 복사하기
	char magic[3];
	int width, height, maxlevel, channel = 1;
	int w, h;
	fsrc >> magic >> width >> height >> maxlevel;
	cout << magic << " " << width << " " << height << endl;
	fdest << magic << " " << width << " " << height << " " << maxlevel << endl;
	if (string(magic) == string("P6")) channel = 3;
	fins >> magic >> w >> h;
	cout << magic << " " << w << " " << h << endl;
	fsrc.seekg(-width * height * channel, ios::end);
	unsigned char** buf = new unsigned char* [height];
	for (int i = 0;i < height;i++)
		buf[i] = new unsigned char[width * channel];
	for (int i = 0;i < height;i++)
		fsrc.read((char*)buf[i], width * channel);

	fins.seekg(-w * h * channel, ios::end);
	unsigned char** insbuf = new unsigned char* [h];
	for (int i = 0;i < h;i++)
		insbuf[i] = new unsigned char[w * channel];
	for (int i = 0;i < h;i++)
		fins.read((char*)insbuf[i], w * channel);

	cout << "Input mosaic positon x, y: ";
	int x, y;
	cin >> x >> y;
	for (int i = y, k = 0; i < y + h; i++, k++)
		for (int j = x, m = 0; j < x + w;j++, m++)
			for (int q = 0;q < channel;q++)
				buf[i][j * channel + q] = insbuf[k][m * channel + q];

	for (int i = 0;i < height;i++)
		fdest.write((char*)buf[i], width * channel);
	for (int i = 0;i < height;i++)
		delete buf[i];
	delete[] buf;

	fsrc.close();
	fins.close();
	fdest.close();

}