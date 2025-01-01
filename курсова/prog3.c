#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int _aAAAAAAAA, _aAAAAAAA2, _bBBBBBBBB, _xXXXXXXXX, _cCCCCCCC1, _cCCCCCCC2;
   printf("Enter _aAAAAAAAA:");
   scanf("%d", &_aAAAAAAAA);
   printf("Enter _bBBBBBBBB:");
   scanf("%d", &_bBBBBBBBB);
   for (int _aAAAAAAA2 = _aAAAAAAAA; _aAAAAAAA2 <= _bBBBBBBBB; _aAAAAAAA2++)
   printf("%d\n", _aAAAAAAA2 * _aAAAAAAA2);
   for (int _aAAAAAAA2 = _bBBBBBBBB; _aAAAAAAA2 <= _aAAAAAAAA; _aAAAAAAA2++)
   printf("%d\n", _aAAAAAAA2 * _aAAAAAAA2);
   _xXXXXXXXX = 0;
   _cCCCCCCC1 = 0;
   while (_cCCCCCCC1 < _aAAAAAAAA)
   {
   {
   _cCCCCCCC2 = 0;
   while (_cCCCCCCC2 < _bBBBBBBBB)
   {
   {
   _xXXXXXXXX = _xXXXXXXXX + 1;
   _cCCCCCCC2 = _cCCCCCCC2 + 1;
   }
   }
   _cCCCCCCC1 = _cCCCCCCC1 + 1;
   }
   }
   printf("%d\n", _xXXXXXXXX);
   _xXXXXXXXX = 0;
   _cCCCCCCC1 = 1;
   do
   {
   _cCCCCCCC2 = 1;
   do
   {
   _xXXXXXXXX = _xXXXXXXXX + 1;
   _cCCCCCCC2 = _cCCCCCCC2 + 1;
   }
   while (!(_cCCCCCCC2 > _bBBBBBBBB));
   _cCCCCCCC1 = _cCCCCCCC1 + 1;
   }
   while (!(_cCCCCCCC1 > _aAAAAAAAA));
   printf("%d\n", _xXXXXXXXX);
   system("pause");
    return 0;
}
