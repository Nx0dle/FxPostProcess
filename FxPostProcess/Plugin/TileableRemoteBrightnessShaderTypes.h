//
//  TileableRemoteBrightnessShaderTypes.h
//  FxPostProcess
//
//  Created by MotionVFX on 06/03/2024.
//

#ifndef TileableRemoteBrightnessShaderTypes_h
#define TileableRemoteBrightnessShaderTypes_h

#import <simd/simd.h>

typedef enum BrightnessVertexInputIndex {
    BVI_Vertices        = 0,
    BVI_ViewportSize    = 1
} BrightnessVertexInputIndex;

typedef enum BrightnessTextureIndex {
    BTI_InputImage  = 0
} BrightnessTextureIndex;

typedef enum BrightnessFragmentIndex {
    BFI_index  = 0
} FragmentIndex;

typedef struct Vertex2D {
    vector_float2   position;
    vector_float2   textureCoordinate;
} Vertex2D;


#endif /* TileableRemoteBrightnessShaderTypes_h */
