//4�����帡��������Ԫ�������������帡��������Ԫ����ͺ��������帡��������Ԫ����ƽ�������������帡�������������ֵ������
//����������������������һ����n��ѧ���ĳɼ�������(n��ֵ���û��Ӽ�������)��
// Ȼ��Ӽ�������ÿһ��ѧ���ĳɼ������ú�����ѧ���ĳɼ���С����������򣬲��������Ļ�ϡ�Ȼ��������ѧ�����ܳɼ���ƽ���ɼ���ʾ����Ļ�ϡ�
#include<iostream>
#include<vector>
using namespace std;

//������
void mysort(vector<double>&arr, int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] > arr[j]) {
				double temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

//��ͺ���
double mysum(vector<double>& arr, int n) {
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	return sum;
}

//��ƽ��������
double myavg(vector<double>& arr, int n) {
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	double avg = sum / n;
	return avg;
}

//�����ֵ����
double mymax(vector<double>& arr, int n) {
	double max = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

int main() {
	int n;
	cout << "������ѧ��������" << endl;
	cin >> n;
	vector<double> arr(n);
	for (int i = 0; i < n; i++) {
		cout << "�������" << i + 1 << "��ѧ���ɼ���" << endl;
		cin >> arr[i];
	}
	//������
	mysort(arr, n);
	cout << "������ѧ���ɼ���" << endl;
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	//��ͺ���
	double sum = mysum(arr, n);
	cout << "ѧ���ɼ��ĺ�Ϊ��" << sum << endl;
	//��ƽ��������
	double avg = myavg(arr, n);
	cout << "ѧ���ɼ���ƽ����Ϊ��" << avg << endl;
	//�����ֵ����
	double max = mymax(arr, n);
	cout << "ѧ���ɼ������ֵΪ��" << max << endl;

	return 0;
}