//  ���� ����
//  ��ȣ�� �ٸ��� ¦�������ٴ� ���� '(' ���ڷ� �������� �ݵ�� ¦��� 
//  ')' ���ڷ� ������ �Ѵٴ� ���Դϴ�.���� ���
//
//  "()()" �Ǵ� "(())()" �� �ùٸ� ��ȣ�Դϴ�.
//  ")()(" �Ǵ� "(()(" �� �ùٸ��� ���� ��ȣ�Դϴ�.
//  '(' �Ǵ� ')' �θ� �̷���� ���ڿ� s�� �־����� ��, ���ڿ� s�� �ùٸ� ��ȣ�̸� true�� return �ϰ�, 
//  �ùٸ��� ���� ��ȣ�̸� false�� return �ϴ� solution �Լ��� �ϼ��� �ּ���.
// 
//  ���ѻ���
//  ���ڿ� s�� ���� : 100, 000 ������ �ڿ���
//  ���ڿ� s�� '(' �Ǵ� ')' �θ� �̷���� �ֽ��ϴ�.


#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.

bool solution(const char* s) {
    int count = 0;
    int arr = strlen(s);
    for (int i = 0; i < arr; i++) {
        count += s[i] == '(' ? 1 : -1;
        if (count < 0) return false;
    }
    return count == 0 ? true : false;
}

int main()
{

    return 0;
}