//OCCURENCES OF EACH ALPHABET IN A STRING
#include<stdio.h>
#include<string.h>
int main()
{
    char ch[20];
    printf("Enter String of your choice:");
    gets(ch);
    int x1;
    x1=strlen(ch);
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0;
    do
    {
        switch (ch[x1])
        {
        case 'a':
                    a++;
                 break;
        case 'A':
                    a++;
                 break;
        case 'b':
                    b++;
                 break;
        case 'B':
                    b++;
                 break;
        case 'c':
                    c++;
                 break;
        case 'C':
                    c++;
                 break;
        case 'd':
                    d++;
                 break;
        case 'D':
                    d++;
                 break;
        case 'e':
                    e++;
                 break;
        case 'E':
                    e++;
                 break;
        case 'f':
                    f++;
                 break;
        case 'F':
                    f++;
                 break;
        case 'g':
                    g++;
                 break;
        case 'G':
                    g++;
                 break;
        case 'h':
                    h++;
                 break;
        case 'H':
                    h++;
                 break;
        case 'i':
                    i++;
                 break;
        case 'I':
                    i++;
                 break;
        case 'j':
                    j++;
                 break;
        case 'J':
                    j++;
                 break;
        case 'k':
                    k++;
                 break;
        case 'K':
                    k++;
                 break;
        case 'l':
                    l++;
                 break;
        case 'L':
                    l++;
                 break;
        case 'm':
                    m++;
                 break;
        case 'M':
                    m++;
                 break;
        case 'n':
                    n++;
                 break;
        case 'N':
                    n++;
                 break;
        case 'o':
                    o++;
                 break;
        case 'O':
                    o++;
                 break;
        case 'p':
                    p++;
                 break;
        case 'P':
                    p++;
                 break;
        case 'q':
                    q++;
                 break;
        case 'Q':
                    q++;
                 break;
        case 'r':
                    r++;
                 break;
        case 'R':
                    r++;
                 break;
        case 's':
                    s++;
                 break;
        case 'S':
                    s++;
                 break;
        case 't':
                    t++;
                 break;
        case 'T':
                    t++;
                 break;
        case 'u':
                    u++;
                 break;
        case 'U':
                    u++;
                 break;
        case 'v':
                    v++;
                 break;
        case 'V':
                    v++;
                 break;
        case 'w':
                    w++;
                 break;
        case 'W':
                    w++;
                 break;
        case 'x':
                    x++;
                 break;
        case 'X':
                    x++;
                 break;
        case 'y':
                    y++;
                 break;
        case 'Y':
                    y++;
                 break;
        case 'z':
                    z++;
                 break;
        case 'Z':
                    z++;
                 break;
        default:
            break;
        }
           
        x1--;
    } while (x1!=-1);
    printf("A-%d\nB-%d\nC-%d\nD-%d\nE-%d\nF-%d\nG-%d\nH-%d\nI-%d\nJ-%d\nK-%d\nL-%d\nM-%d\nN-%d\nO-%d\nP-%d\nQ-%d\nR-%d\nS-%d\nT-%d\nU-%d\nV-%d\nW-%d\nX-%d\nY-%d\nZ-%d\n",a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z);
    

    return 0;
}