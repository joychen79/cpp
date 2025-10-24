/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 19:41:33 by jingchen          #+#    #+#             */
/*   Updated: 2025/10/24 17:07:09 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*#ifndef MUTANTSTACK_HPP_
#define MUTANTSTACK_HPP_

#include <stack>
#include <deque> // 默认 std::stack 底层容器是 deque
#include <iterator>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
    // Canonical Form
    MutantStack() {}
    MutantStack(const MutantStack &copy) { *this = copy; }
    MutantStack &operator=(const MutantStack &assign)
    {
        if (this != &assign)
            this->c = assign.c; // 正确拷贝底层容器
        return *this;
    }
    virtual ~MutantStack() {}

    // 迭代器类型
    typedef typename Container::iterator iterator;
    typedef typename Container::const_iterator const_iterator;
    typedef typename Container::reverse_iterator reverse_iterator;
    typedef typename Container::const_reverse_iterator const_reverse_iterator;

    // 迭代器方法
    iterator begin() { return this->c.begin(); }
    iterator end() { return this->c.end(); }
    const_iterator begin() const { return this->c.begin(); }
    const_iterator end() const { return this->c.end(); }

    reverse_iterator rbegin() { return this->c.rbegin(); }
    reverse_iterator rend() { return this->c.rend(); }
    const_reverse_iterator rbegin() const { return this->c.rbegin(); }
    const_reverse_iterator rend() const { return this->c.rend(); }
};

#endif*/

#ifndef MUTANTSTACK_HPP_
#define MUTANTSTACK_HPP_

#include <stack>
#include <deque>
#include <iterator>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
    // Canonical Form
    MutantStack() {}
    MutantStack(const MutantStack &copy) { *this = copy; }
    MutantStack &operator=(const MutantStack &assign)
    {
        if (this != &assign)
            this->c = assign.c; // copy underlying container
        return *this;
    }
    virtual ~MutantStack() {}

    // Iterator types
    typedef typename Container::iterator iterator;
    typedef typename Container::const_iterator const_iterator;
    typedef typename Container::reverse_iterator reverse_iterator;
    typedef typename Container::const_reverse_iterator const_reverse_iterator;

    // Iterator methods
    iterator begin() { return this->c.begin(); }
    iterator end() { return this->c.end(); }
    const_iterator begin() const { return this->c.begin(); }
    const_iterator end() const { return this->c.end(); }

    reverse_iterator rbegin() { return this->c.rbegin(); }
    reverse_iterator rend() { return this->c.rend(); }
    const_reverse_iterator rbegin() const { return this->c.rbegin(); }
    const_reverse_iterator rend() const { return this->c.rend(); }
};

#endif // MUTANTSTACK_HPP_
