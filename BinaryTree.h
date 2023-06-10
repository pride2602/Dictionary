#include <iostream>
#pragma once

class BinaryTree {
    struct node // ��������� ��� ������������� ����� ������
    {
        int t;
        char* key;
        int len;
        node* link;
        node* next;
        node(char* x, int n) : len(n), link(0), next(0)
        {
            key = new char[n];
            strncpy(key, x, n);
        }
        ~node() { delete[] key; }
    };
};