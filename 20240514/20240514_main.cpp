#include<stdio.h>
#pragma warning(disable:4996)

typedef struct Person
{
    char name[128];
    int age;
    float height;
    float weight;

}Person;

int main(void)
{
    //�\���̂�ϐ��ɂ��Ă�����
    Person person;

    //���O�̓���
    printf("���O����͂��Ă��������B\n");
    scanf("%s", &person.name);
    printf("�N�����͂��Ă��������B\n");
    scanf("%d", &person.age);
    printf("�g������͂��Ă��������B\n");
    scanf("%f", &person.height);
    printf("�̏d����͂��Ă��������B\n");
    scanf("%f", &person.weight);

    printf("���O:%s\n�N��:%d\n�g��:%f\n�̏d:%f\n", person.name, person.age, person.height, person.weight);

    return 0;
}