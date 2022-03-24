Bit Manipulation Techniques:
This are Algorithm that modifies the data at the binary
representation level.

Why do we use them?
Faster compare to nonbitwise operators
------------------------------------------
------------------------------------------
Operators:
Binary AND &
BInary OR |
Binary XOR ^
BInary One's complement ~
Binary Left Shift <<
Binary Right Shift >>
------------------------------------------
Binary And & = If one of bit is 0 then result is 0 else 1
------------------------------------------
0&0 = 0
0&1 = 0
1&0 = 0
1&1 = 1
------------------------------------------
Binary OR | = If one of bit is 1 then result is 1 else 0
------------------------------------------
0|0 = 0
0|1 = 1
1|0 = 1
1|1 = 1
------------------------------------------
Binary XOR | = If both bits are same result will be zero
------------------------------------------
0^0 = 0
0^1 = 1
1^0 = 1
1^1 = 0
------------------------------------------
Binary ~ Not = If  not is done to any bit its value will reverse, if not is done for byte all the bits of the byte will reverse. 
-------------------------------------------
int a =0;
cout<<(~a);

Above code will print -1 as the after inversion of all the bits of integer type MSB also changes
which makes it negative number, negative numbers are stored in 2's complement form,
to get the number you can add 1 after inverting the number to get value according to 2's complement form
However for the single digit it's value will just invert. for example 1-->0 or 0-->1

--------------------------------------------
Left Shift <<
--------------------------------------------
For example : 
5<<2

Before shift:
0000 0101 = 5

After Shift:
0001 0100 = 20

a<<b= a*2^b
5*2^2=20
--------------------------------------------
 Binary Right Shift >>
-------------------------------------------
10 >> 1
Before Shift
0000 1010 =10

After Shift 
0000 0010= 2
a>>b= a/2^b
10>>1 = 10/2^1=5
---------------------------------------------
