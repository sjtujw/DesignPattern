# Ch1
## UML类图
* 继承关系<br>
空心三角形+实线表示；实现接口用空心三角形+虚线表示
```C++
Class Bird : Animal{}; //继承动物类
Class WideGoose : IFly{}; //实现飞行接口
```
* 关联关系<br>
实线箭头表示；当一个类“知道”另一个类时，可以用关联关系表示
```C++
Class Penguin : Bird
{
    Climate climate; //在企鹅penguin中，引用到气候Climate对象
}
```
* 聚合关系<br>
聚合表示一种弱的拥有关系，体现的是A对象可以包含B对象，但B对象不是A对象的一部分；用空心菱形+实线箭头表示
```C++
Class WideGooseAggregate//雁群类
{
    std::vector<WideGoose> arrayWideGoose;//大雁数组对象，包含每一只大雁
}
```
* 合成关系<br>
合成表示一种强的拥有关系，体现了严格的部分和整体的关系，部分和整体的生命周期一样；用实心菱形+实线箭头表示
```C++
Class Bird
{
    public:
        Wing wing;
    Bird()
    {
        wing = new Wing(); //在鸟Bird类中，初始化同时生成Wing类对象
    }
}
```
* 依赖关系<br>
动物依赖于氧气和水；用虚线箭头表示
```C++
Class Animal
{
    public:
        void Metabolism(Oxygen oxygen, Water water); //Animal类中的一个方法依赖于氧气Oxygen类和水Water类
}
```