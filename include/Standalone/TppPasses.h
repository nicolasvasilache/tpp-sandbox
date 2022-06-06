//===- TppPasses.h ----------------------------------------------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef TPP_PASSES_H
#define TPP_PASSES_H

#include "mlir/Pass/Pass.h"

namespace mlir {

namespace func {
class FuncOp;
} // end namespace func

namespace tpp {

std::unique_ptr<OperationPass<func::FuncOp>> createConvertLinalgToTppPass();

} // end namespace tpp
} // end namespace mlir

#define GEN_PASS_REGISTRATION
#include "Standalone/TppPasses.h.inc"

#endif // TPP_PASSES_H