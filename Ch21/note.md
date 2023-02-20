# 单例模式
保证一个类有且仅有一个实例，并提供一个访问它的全局访问点。该类自身负责保存它的唯一实例。这个类可以保证没有其他实例可以被创建，并且它可以提供一个访问该实例的方法

```
class Singleton
{
    private static Singleton instance;

    private Singleton();
    {
        // 构造函数私有，使外界想要调用new方法来创建实例成为不可能
    }

    public static Singleton GetInstance()
    {
        if(instance == null)
        {
            instance = new Singleton();
        }
        return instance;
    }
}
```

## 好处
严格控制用户怎样访问它以及何时访问它。简单来说就是对唯一实例的受控访问。

## 多线程中的单例
对临界区加锁，单例模式中的临界区就是GetInstance()函数内部

## 双重锁定
在实例未被创建的时候加锁处理，如果实例已经创建，就不用加锁的了。