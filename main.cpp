#include <iostream>
#include<cmath>
using namespace std;

class Vector3d;
class Vector2d;

class Vector2d
{
private:
    double x;
    double y;
public:

    Vector2d()
    {
        x = 12;
        y = 5;
        getCoordinates();
    }

    void setCoordinates(double x1 ,double y1)
    {
        x = x1;
        y = y1;
    }

    void getCoordinates()
    {
        cout<<"("<<x<<","<<y<<")"<<endl;
    }

    void setCoordinatesNew()
    {
        double x1 = x;
        double y1 = y;
        double z1 = 0;
        cout<<"("<<x1<<","<<y1<<","<<z1<<")"<<endl;
    }

    void right()
    {
        setCoordinates( 1 , 0);
        getCoordinates();
    }

    void left()
    {
        setCoordinates( -1 , 0);
        getCoordinates();
    }

    void up()
    {
        setCoordinates( 0 , 1);
        getCoordinates();
    }

    void down()
    {
        setCoordinates( -1 , 0);
        getCoordinates();
    }

    void zero()
    {
        setCoordinates( 0 , 0);
        getCoordinates();
    }

    int length()
    {
        double len;
        len = sqrt (x*x+y*y);
        cout<<"Длина вектора - "<<len<<endl;
        return 0 ;
    }

      void turn( int degree )
    {
        double x1 , y1;
        x1=x*cos(degree) - y*sin(degree);
        y1=x*sin(degree) + y*cos(degree);
        setCoordinates( x1 , y1);
        getCoordinates();
    }

    void normal()
    {
        double invlen, x1 , y1;
        invlen = 1/(sqrt (x*x+y*y));
        x1 = x*invlen;
        y1 = y*invlen;
        setCoordinates( x1 , y1);
        getCoordinates();
    }

    void comparing ()
    {
        double len1 , len2 , x1 , y1;
        cout << "Введите координаты второго вектора для сравнения" <<endl;
        cin>>x1>>y1;
        len1 = sqrt (x*x+y*y);
        len2 = sqrt (x1*x1+y1*y1);
        if (len1>=len2)  {
        setCoordinates( x , y);
        getCoordinates();}
        else {
        setCoordinates( x1 , y1);
        getCoordinates();  }
    }

    void Acts(double x1 , double y1)
    {
        cout<<"Сложение векторов:"<<endl;
        setCoordinates( x+x1 , y+y1);
        getCoordinates();
        cout<<"Вычетание векторов"<<endl;
        setCoordinates( x-x1 , y-y1);
        getCoordinates();
        cout<<"Умножение на константу"<<endl;
        setCoordinates( x*2 , y*2);
        getCoordinates();
    }

    ~Vector2d()
    {
        cout<<" yep "<<endl;
    }

};

class Vector3d
{
private:
    double x;
    double y;
    double z;
public:

    Vector3d()
    {
        x = 1;
        y = 2;
        z = 2;
        getCoordinates();
    }

    void setCoordinates(double x1 ,double y1 , double z1)
    {
        x = x1;
        y = y1;
        z = z1;
    }

    void getCoordinates()
    {
        cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
    }

        void setCoordinatesNew()
    {
        double x1 = x;
        double y1 = y;
        cout<<"("<<x1<<","<<y1<<")"<<endl;
    }


    void right()
    {
        setCoordinates( 1 , 0 , 0);
        getCoordinates();
    }

    void left()
    {
        setCoordinates( -1 , 0 , 0);
        getCoordinates();
    }

    void up()
    {
        setCoordinates( 0 , 1, 0);
        getCoordinates();
    }

    void down()
    {
        setCoordinates( -1 , 0 , 0);
        getCoordinates();
    }

    void zero()
    {
        setCoordinates( 0 , 0 , 0);
        getCoordinates();
    }

    int length()
    {
        double len;
        len = sqrt (x*x+y*y+z*z);
        cout<<"Длина вектора - "<<len<<endl;
        return 0 ;
    }

    void normal()
    {
        double invlen, x1 , y1 ,z1;
        invlen = 1/(sqrt (x*x+y*y+z*z));
        x1 = x*invlen;
        y1 = y*invlen;
        z1 = z*invlen;
        setCoordinates( x1 , y1 , z1);
        getCoordinates();
    }

    void comparing ()
    {
        double len1 , len2 , x1 , y1 , z1;
        cout << "Введите координаты второго вектора для сравнения" <<endl;
        cin>>x1>>y1>>z1;
        len1 = sqrt (x*x+y*y+z*z);
        len2 = sqrt (x1*x1+y1*y1+z1*z1);
        if (len1>=len2)  {
        setCoordinates( x , y , z);
        getCoordinates();}
        else {
        setCoordinates( x1 , y1 , z1);
        getCoordinates();  }
    }


    void Acts(double x1 , double y1 , double z1)
    {
        cout<<"Сложение векторов:"<<endl;
        setCoordinates( x+x1 , y+y1 , z+z1);
        getCoordinates();
        cout<<"Вычетание векторов"<<endl;
        setCoordinates( x-x1 , y-y1 , z-z1);
        getCoordinates();
        cout<<"Умножение на константу"<<endl;
        setCoordinates( x*2 , y*2 , z*2);
        getCoordinates();
    }

    ~Vector3d()
    {
        cout<<" yep "<<endl;
    }
};

void foo()
{
                double x,x1,x2,x3,y,y1,y2,y3,z,z1,z2,z3;
                cout<<"Введите координаты (х,у,z) для вектора"<<endl;
                cin>>x>>y>>z;
                cout<<"Введите координаты (х,у,z) для трех точек, котооые находятся в плоскости"<<endl;
                cin>>x1>>y1>>z1>>x2>>y2>>z2>>x3>>y3>>z3;
                int n1=(z3-z1)*(y2-y1) - (y3-y1)*(z2-z1);
                int n2=(x2-x1)*(z3-z1) - (z2-z1)*(x3-x1);
                int n3=(x2-x1)*(y3-y1) - (x3-x1)*(y2-y1);
                if ((x/n1)==(y/n2)==(z/n3)) cout<<"Вектор паралельный к плоскости"<<endl;
                else cout<<"Вектор пересекает плоскость"<<endl;

}

int main()
{
    setlocale(LC_ALL, "rus");
    int angle;
Vector3d NewVector;
Vector2d NewVector1;//с 2д в 3д
    void foo();


    cout<<"Работа с вектором 2Д"<<endl<<endl;
    Vector2d Vector;
    Vector.getCoordinates();
    cout<<"function right"<<endl;
    Vector.right();
    cout<<"function left"<<endl;
    Vector.left();
    cout<<"function up"<<endl;
    Vector.up();
    cout<<"function down"<<endl;
    Vector.down();
    cout<<"function zero"<<endl;
    Vector.zero();
    Vector.setCoordinates(12 , 5);
    cout<<"function length "<<endl;
    Vector.length();
    cout<<"Для функии поворота на градус, укажите градус поворота - ";
    cin>>angle;
    cout<<"function turn "<<endl;
    Vector.turn(angle);
    Vector.setCoordinates(12 , 5);
    cout<<"function normal "<<endl;
    Vector.normal();
    Vector.setCoordinates(12 , 5);
    cout<<"function comparing "<<endl;
    Vector.comparing();
    Vector.setCoordinates(12 , 5);
    cout<<"function Acts "<<endl;
    Vector.Acts(1,2);
    cout<<"function Convert "<<endl;
    NewVector1.setCoordinatesNew();


    cout<<"Работа с вектором 3Д"<<endl<<endl;
    Vector3d Vector1;
    Vector1.getCoordinates();
    cout<<"function right"<<endl;
    Vector1.right();
    cout<<"function left"<<endl;
    Vector1.left();
    cout<<"function up"<<endl;
    Vector1.up();
    cout<<"function down"<<endl;
    Vector1.down();
    cout<<"function zero"<<endl;
    Vector1.zero();
    Vector1.setCoordinates(1 , 2 , 2);
    cout<<"function length "<<endl;
    Vector1.length();
    Vector1.setCoordinates(1 , 2 , 2);
    cout<<"function normal "<<endl;
    Vector1.normal();
    Vector1.setCoordinates(1 , 2 ,2 );
    cout<<"function comparing "<<endl;
    Vector1.comparing();
    Vector1.setCoordinates(1 , 2 , 2);
    cout<<"function Acts "<<endl;
    Vector1.Acts(1,2,3);
    cout<<"function Convert "<<endl;
    NewVector.setCoordinatesNew();

    return 0;
}
