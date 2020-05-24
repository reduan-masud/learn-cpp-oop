# Constructors
A constructor in c++ is a **special method** that is automatically called when an object of a clas is created.

To create a constructor, use the same name as the class, followed by prentheses ():


**NOTE:** The constructor has the same name as the class, it always *public*, and it dows not have any return value.

# Constructor Parameters
Constructors can also take parameters (just like regular functions), whih can be useful ro setting initial values for attributes.

The following class have *brand*, *model* and *year* attributes, and a constructor with different parameters. Inside the constructor we set the attributes equal to the constructor parameters (brand = x, etc). When we call the constructor (by creating and object to the class), we pass parameters teo the consttuctor, which will set the value of he corresponding attributes to the same:



Just like functions, constructors can also be defined outside the class. First, declare the constructor inside the class,and the ndefine it outside of the class by specifyind teh name of the class, followed by the scope resolation :: operatio, followed by athe name of the constructor (which is the same as the class):

