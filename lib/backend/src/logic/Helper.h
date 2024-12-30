#include <llvm/IR/IRBuilder.h>

//#TODO этот файл для примера и он так и не помпилится

namespace FooLang
{
namespace Helpers
{

llvm::Value *printf(
    const std::unique_ptr<llvm::Module> &llvm_module,
    llvm::IRBuilder<> &builder,
    const std::string &format,
    const std::vector<llvm::Value *> &values = {});

} // namespace Helpers
} // namespace FooLang