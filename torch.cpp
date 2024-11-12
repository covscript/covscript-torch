#include <torch/torch.h>
#include <covscript/dll.hpp>
#include <covscript/cni.hpp>

CNI_ROOT_NAMESPACE {
	CNI_NAMESPACE(cuda)
	{
		CNI_V(is_available, torch::cuda::is_available)
		CNI_V(cudnn_is_available, torch::cuda::cudnn_is_available)
	}
}