/*
��蕶
�e�X�g�̓_��������Ƃ��̕]�����o�͂��Ă����v���O�������쐬���Ă��������B
�v���O�����̎d�l�͈ȉ��̒ʂ�ł��B
�e�X�g�̓_���Ƃ��� 0 �ȏ� 100 �ȉ��̐������󂯎��B
�e�X�g�̓_���� 59 �_�ȉ��Ȃ�� Bad �Əo�́B
60 �_�ȏ� 89 �_�ȉ��Ȃ�� Good �Əo�́B
90 �_�ȏ� 99 �_�ȉ��Ȃ�� Great �Əo�́B
100 �_�Ȃ�� Perfect �Əo�́B
*/

#include<iostream>

int main() {
	int num;

	std::cin >> num;

	num < 60 ? std::cout << "Bad" << std::endl : num < 90 ? std::cout << "Good" << std::endl : num < 100 ? std::cout << "Great" << std::endl : std::cout << "Perfect" << std::endl;

	return 0;
}