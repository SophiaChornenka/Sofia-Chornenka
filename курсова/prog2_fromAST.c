#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int _aAAAAAAAA;
   int _bBBBBBBBB;
   int _cCCCCCCCC;
   printf("Enter _aAAAAAAAA:");
   scanf("%d", &_aAAAAAAAA);
   printf("Enter _bBBBBBBBB:");
   scanf("%d", &_bBBBBBBBB);
   printf("Enter _cCCCCCCCC:");
   scanf("%d", &_cCCCCCCCC);
   if (_aAAAAAAAA > _bBBBBBBBB) 
   {
   if (_aAAAAAAAA > _cCCCCCCCC) 
   {
   goto Abigger;
   }
   else
   {
   printf("%d\n", _cCCCCCCCC);
   goto Outofif;
Abigger:
   printf("%d\n", _aAAAAAAAA);
   goto Outofif;
   }
   }
   if (_bBBBBBBBB < _cCCCCCCCC) 
   {
   printf("%d\n", _cCCCCCCCC);
   }
   else
   {
   printf("%d\n", _bBBBBBBBB);
   }
Outofif:
   if (((_aAAAAAAAA == _bBBBBBBBB && _aAAAAAAAA == _cCCCCCCCC) && _bBBBBBBBB == _cCCCCCCCC)) 
   {
   printf("%d\n", 1);
   }
   else
   {
   printf("%d\n", 0);
   }
   if (((_aAAAAAAAA < 0 || _bBBBBBBBB < 0) || _cCCCCCCCC < 0)) 
   {
   printf("%d\n", (0 - 1));
   }
   else
   {
   printf("%d\n", 0);
   }
   if (!(_aAAAAAAAA < (_bBBBBBBBB + _cCCCCCCCC))) 
   {
   printf("%d\n", 10);
   }
   else
   {
   printf("%d\n", 0);
   }
   system("pause");
    return 0;
}
