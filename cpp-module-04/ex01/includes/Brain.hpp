/**
 * @file Brain.hpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-16
 * @brief Brain of animals - ex01
 */

class Brain {
 private:
  std::string ideas_[100];

 public:
  Brian(void);
  Brian(const Brain& src);

  Brain& operator=(const Brain& rhs);

  std::string[] getIdeas(void) const;
}
