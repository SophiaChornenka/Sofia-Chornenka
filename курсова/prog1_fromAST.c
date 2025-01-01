#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int _aAAAAAAAA;
   int _bBBBBBBBB;
   int _xXXXXXXXX;
   int _yYYYYYYYY;
   printf("Enter _aAAAAAAAA:");
   scanf("%d", &_aAAAAAAAA);
   printf("Enter _bBBBBBBBB:");
   scanf("%d", &_bBBBBBBBB);
   printf("%d\n", (_aAAAAAAAA + _bBBBBBBBB));
   printf("%d\n", (_aAAAAAAAA - _bBBBBBBBB));
   printf("%d\n", (_aAAAAAAAA * _bBBBBBBBB));
   printf("%d\n", (_aAAAAAAAA / _bBBBBBBBB));
   printf("%d\n", (_aAAAAAAAA % _bBBBBBBBB));
   _xXXXXXXXX = (((_aAAAAAAAA - _bBBBBBBBB) * 10) + ((_aAAAAAAAA + _bBBBBBBBB) / 10));
   _yYYYYYYYY = (_xXXXXXXXX + (_xXXXXXXXX % 10));
   printf("%d\n", _xXXXXXXXX);
   printf("%d\n", _yYYYYYYYY);
   system("pause");
    return 0;
}
