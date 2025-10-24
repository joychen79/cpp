/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 19:43:38 by jingchen          #+#    #+#             */
/*   Updated: 2025/10/24 17:07:40 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*#include <iostream>
#include "MutantStack.hpp"
#include <cstdlib>
#include <ctime>
#include <vector>

static void original_main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

    std::stack<int> s(mstack); // 测试拷贝
}

static void altered_main()
{
    std::vector<int> mstack;
    mstack.push_back(5);
    mstack.push_back(17);
    std::cout << mstack.back() << std::endl;
    mstack.pop_back();
    std::cout << mstack.size() << std::endl;
    mstack.push_back(3);
    mstack.push_back(5);
    mstack.push_back(737);
    mstack.push_back(0);

    std::vector<int>::iterator it = mstack.begin();
    std::vector<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

    std::vector<int> s = mstack;
}

static void differentTests()
{
    MutantStack<int> mstack;
    srand(time(NULL));
    for (int i = 0; i < rand() % 21; i++)
        mstack.push(rand() % 100);

    std::cout << "Length: " << mstack.size() << std::endl
              << "reverse iterator:" << std::endl;

    for (MutantStack<int>::reverse_iterator it = mstack.rbegin(); it != mstack.rend(); ++it)
        std::cout << *it << ", ";
    std::cout << std::endl
              << "normal iterator:" << std::endl;
    for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
        std::cout << *it << ", ";
    std::cout << std::endl;
}

int main()
{
    std::cout << "Original main:" << std::endl;
    original_main();
    std::cout << "_____________________" << std::endl
              << "Altered main:" << std::endl;
    altered_main();
    std::cout << "_____________________" << std::endl
              << "Different main:" << std::endl;
    differentTests();
    return 0;
}*/

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "MutantStack.hpp"

int main()
{
    // ---------------- Original main example ----------------
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "Top element: " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "Size after pop: " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    std::cout << "Iterating through MutantStack:" << std::endl;
    for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
        std::cout << *it << std::endl;

    // ---------------- Reverse iterator test ----------------
    std::cout << "Reverse iteration:" << std::endl;
    for (MutantStack<int>::reverse_iterator rit = mstack.rbegin(); rit != mstack.rend(); ++rit)
        std::cout << *rit << std::endl;

    // ---------------- Random test ----------------
    std::cout << "Random MutantStack test:" << std::endl;
    MutantStack<int> randomStack;
    srand(time(NULL));
    for (int i = 0; i < rand() % 21; ++i)
        randomStack.push(rand() % 100);

    std::cout << "Length: " << randomStack.size() << std::endl;
    std::cout << "Elements: ";
    for (MutantStack<int>::iterator it = randomStack.begin(); it != randomStack.end(); ++it)
        std::cout << *it << ", ";
    std::cout << std::endl;

    return 0;
}
