#include "postfix.h"
#include <gtest.h>

TEST(TPostfix, can_create_postfix)
{
  ASSERT_NO_THROW(TPostfix p);
}

TEST(TPostfix, can_create_postfix_with_given_string)
{
  ASSERT_NO_THROW(TPostfix p("a-b"));
}

TEST(TPostfix, can_get_infix)
{
  TPostfix pos("a-b");
  EXPECT_EQ("a-b", pos.GetInfix());
}

TEST(TPostfix, can_get_postfix)
{
  TPostfix pos("a-b");
  EXPECT_EQ("ab-", pos.ToPostfix());
}

TEST(TPostfix, can_get_operations)
{
  TPostfix pos("a-b");
  string post;
  post = pos.GetInfix();
  EXPECT_EQ(true, pos.ChechOper(post[1]));
}

TEST(TPostfix, can_get_operand)
{
  TPostfix pos("a-b");
  string post;
  post = pos.GetInfix();
  EXPECT_EQ(false, pos.ChechOper(post[0]));
}

TEST(TPostfix, can_get_priority)
{
  TPostfix pos("a-b");
  string post;
  post = pos.GetInfix();
  EXPECT_EQ(1, pos.GetPriority(post[1]));
}
