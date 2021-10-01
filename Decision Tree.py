from sklearn.tree import DecisionTreeClassifier
from sklearn.model_selection import train_test_split
import pandas as pd

from sklearn.metrics import accuracy_score

data= pd.read_csv('Computer_DTree.csv')
print(data)

data2=data.copy()
data_t = {"buys_computer": {"yes": 1, "no": 0}}
data2.replace(data_t, inplace=True)
print(data2)

x=data2.iloc[:,0:4]
y=data2.iloc[:,4]

x1=pd.get_dummies(x)
x1

x_train, x_test, y_train, y_test = train_test_split(x1,y,test_size=0.2)

clf = DecisionTreeClassifier()
clf.fit(x_train,y_train)

y_pred=clf.predict(x_test)

print("\nAccuracy score: %f" %(accuracy_score(y_test,y_pred) * 100))

print(y_test.values)

print(y_pred)

from sklearn import tree
tree.plot_tree(clf.fit(x1, y)) 
