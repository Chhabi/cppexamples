#pragma once

#include <memory>
#include "MeshFactory.hpp"

class MeshOGL;

class MeshFactoryOGL : public MeshFactory
{
public:
	virtual std::shared_ptr<Mesh> CreateMesh();
};