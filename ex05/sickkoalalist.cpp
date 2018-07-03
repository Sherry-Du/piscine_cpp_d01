#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "sickkoalalist.h" 

SickKoalaList::SickKoalaList(SickKoala *sk)
{
    this->node = sk;
    this->next = NULL;
}

SickKoalaList::~SickKoalaList(SickKoala *sk)
{
}


bool SickKoalaList::isEnd()
{
    return (this->next == NULL);
}
	
void SickKoalaList::append(SickKoalaList *skl)
{
    SickKoalaList *elem = this;
    while (elem->next)
    {
        if (elem == skl)
	    return;
        elem = elem->next;
    }
    skl->next = NULL;
    elem->next = skl;
}

SickKoala* SickKoalaList::getFromName(std::string name)
{
    SickKoalaList *elem = this;

    while (elem)
    {
        if (elem->node->getName() == name)
	  return (elem->node);
        elem = elem->next;
    }
  return (NULL);
}

SickKoalaList*	SickKoalaList::remove(SickKoalaList *skl)
{
    SickKoalaList *elem = this;
    SickKoalaList *prev = this;

    while (elem)
    {
        if (elem == skl)
	{
	    if (prev == elem)
	        return (this->next);
	    else
	    {
	        prev->next = elem->next;
	        return (this);
	    }
	}
        prev = elem;
        elem = elem->next;
    }
  return this;
}

SickKoalaList* SickKoalaList::removeFromName(std::string name)
{
    SickKoalaList *elem = this;
    SickKoalaList *prev = this;
    while (elem)
    {
        if (elem->node->getName() == name)
	{
	    if (prev == elem)
	        return (this->next);
	    else
	    {
	        prev->next = elem->next;
	        return (this);
	    }
	}
        prev = elem;
        elem = elem->next;
    }
  return this;  
}

void SickKoalaList::dump()
{
    SickKoalaList *elem = this;
    std::cout << "Liste des patients : ";
    while (elem)
    {
        if (elem->node->getName().c_str() == NULL)
	    std::cout << "[NULL]";
        else
	    std::cout << elem->node->getName();
        if (elem->next)
	    std::cout << ", ";
        else
	    std::cout << "." << std::endl;
        elem = elem->next;
    }
}

SickKoala* SickKoalaList::getContent()
{
    return this->node;
}

SickKoalaList* SickKoalaList::getNext()
{
    return this->next;
}


