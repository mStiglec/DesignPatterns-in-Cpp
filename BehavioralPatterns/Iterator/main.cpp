#include <iostream>

#include "inc/tree_iterator.h"
#include "inc/tree.h"
#include "inc/node.h"

class Student{
	private:
		std::string name;
	public:
		Student(){this->name = "student";}
		void implementTraverseForTreeStructure(std::shared_ptr<TreeIterator> iterator){
			while(!iterator->isStackEmpty()){
				std::shared_ptr<Node> node = iterator->getNext();
				std::cout << node->data << " ";
			}
		}
};

int main(){
	Student student;
	
	std::vector<int> treeData{1,2,3,4,5,6,7,8,9,10};

	// client creates collection (he does not know how structure is created - he is only giving data)
	std::shared_ptr<Tree> tree = Tree::createTree(treeData);

	// client chooses traverse algorithm
	std::shared_ptr<TreeIterator> preorderIterator = tree->getPreorderIterator();
	std::shared_ptr<TreeIterator> inorderIterator = tree->getInorderIterator();

	student.implementTraverseForTreeStructure(preorderIterator);
	std::cout << std::endl;
	student.implementTraverseForTreeStructure(inorderIterator);
	std::cout << std::endl;
};
