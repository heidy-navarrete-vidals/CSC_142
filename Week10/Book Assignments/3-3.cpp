#include <iostream>


class Link
{
    public:
    short number;
    Link(const short on);
    void insert_after(Link* new_element);
    Link* insert_before(Link* new_element);

    void traverse_forward(Link* main_trooper) const;
    void traverse_backwards(Link* main_trooper) const;

    Link* get_next() const
    {
        return next;
    }

    Link* get_prev() const
    { 
        return prev;
    }


    private:
    Link *next;
    Link *prev;
    
};

Link::Link(const short on)
    :number(on),
    next(nullptr),
    prev(nullptr) {}

void Link::insert_after(Link* new_element)
{
    if(!new_element)
    {
        return;
    }
    if(!this)
    {
        return;
    }

    new_element->prev = this;

    if(this->next)
    {
        this->next->prev = new_element;
    }

    new_element->next = this->next;
    this->next = new_element;
}

Link* Link::insert_before(Link* new_element)
{
    if(!new_element)
    {
        return this;
    }
    if(!this)
    {
        return new_element;
    }

    new_element->next = this;

    if(this->prev)
    {
        this->prev->next = this;
    }

    new_element->prev = this->prev;
    this->prev = new_element;

    return new_element;
}

void Link::traverse_forward(Link* main_trooper) const
{
    if(!main_trooper)
    {
        return;
    }

    const Link* curr(main_trooper);
    std::cout<<"{ ";
    while(curr)
    {
        std::cout<<curr->number;
        if(curr = curr->get_next())
        {
            std::cout<<" <=> ";
        }
    }

    std::cout<<" }\n";
}

void Link::traverse_backwards(Link *main_trooper) const
{
    if(!main_trooper)
    {
        return;
    }

    const Link* tail(main_trooper);

    while(tail->get_next())
    {
        tail = tail->get_next();
    }

    std::cout<<"{ ";
    while(tail)
    {
        std::cout<<tail->number;
        if(tail = tail->get_prev())
        {
            std::cout<<" <=> ";
        }
    }
    std::cout<<" }\n";
}

int main() {
    Link *main_trooper(new Link{2187});

    main_trooper = main_trooper->insert_before(new Link{421});
    main_trooper = main_trooper->insert_before(new Link{500});
    main_trooper = main_trooper->insert_before(new Link{16});
    main_trooper = main_trooper->insert_before(new Link{348});
    main_trooper->insert_after(new Link{111});
    main_trooper->traverse_forward(main_trooper);
    main_trooper->traverse_backwards(main_trooper);

    return 0;
}