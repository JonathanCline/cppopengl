#pragma once

#include <cppopengl/detail/gl.hpp>

namespace gl
{

struct context
{
	void APIENTRY CullFace (GLenum mode) const noexcept
	{
		return glCullFace(mode);
	};
	void APIENTRY FrontFace (GLenum mode) const noexcept
	{
		return glFrontFace(mode);
	};
	void APIENTRY Hint (GLenum target, GLenum mode) const noexcept
	{
		return glHint(target, mode);
	};
	void APIENTRY LineWidth (GLfloat width) const noexcept
	{
		return glLineWidth(width);
	};
	void APIENTRY PointSize (GLfloat size) const noexcept
	{
		return glPointSize(size);
	};
	void APIENTRY PolygonMode (GLenum face, GLenum mode) const noexcept
	{
		return glPolygonMode(face, mode);
	};
	void APIENTRY Scissor (GLint x, GLint y, GLsizei width, GLsizei height) const noexcept
	{
		return glScissor(x, y, width, height);
	};
	void APIENTRY TexParameterf (GLenum target, GLenum pname, GLfloat param) const noexcept
	{
		return glTexParameterf(target, pname, param);
	};
	void APIENTRY TexParameterfv (GLenum target, GLenum pname, const GLfloat * params) const noexcept
	{
		return glTexParameterfv(target, pname, params);
	};
	void APIENTRY TexParameteri (GLenum target, GLenum pname, GLint param) const noexcept
	{
		return glTexParameteri(target, pname, param);
	};
	void APIENTRY TexParameteriv (GLenum target, GLenum pname, const GLint * params) const noexcept
	{
		return glTexParameteriv(target, pname, params);
	};
	void APIENTRY TexImage1D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels) const noexcept
	{
		return glTexImage1D(target, level, internalformat, width, border, format, type, pixels);
	};
	void APIENTRY TexImage2D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels) const noexcept
	{
		return glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
	};
	void APIENTRY DrawBuffer (GLenum buf) const noexcept
	{
		return glDrawBuffer(buf);
	};
	void APIENTRY Clear (GLbitfield mask) const noexcept
	{
		return glClear(mask);
	};
	void APIENTRY ClearColor (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) const noexcept
	{
		return glClearColor(red, green, blue, alpha);
	};
	void APIENTRY ClearStencil (GLint s) const noexcept
	{
		return glClearStencil(s);
	};
	void APIENTRY ClearDepth (GLdouble depth) const noexcept
	{
		return glClearDepth(depth);
	};
	void APIENTRY StencilMask (GLuint mask) const noexcept
	{
		return glStencilMask(mask);
	};
	void APIENTRY ColorMask (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha) const noexcept
	{
		return glColorMask(red, green, blue, alpha);
	};
	void APIENTRY DepthMask (GLboolean flag) const noexcept
	{
		return glDepthMask(flag);
	};
	void APIENTRY Disable (GLenum cap) const noexcept
	{
		return glDisable(cap);
	};
	void APIENTRY Enable (GLenum cap) const noexcept
	{
		return glEnable(cap);
	};
	void APIENTRY Finish ( ) const noexcept
	{
		return glFinish();
	};
	void APIENTRY Flush ( ) const noexcept
	{
		return glFlush();
	};
	void APIENTRY BlendFunc (GLenum sfactor, GLenum dfactor) const noexcept
	{
		return glBlendFunc(sfactor, dfactor);
	};
	void APIENTRY LogicOp (GLenum opcode) const noexcept
	{
		return glLogicOp(opcode);
	};
	void APIENTRY StencilFunc (GLenum func, GLint ref, GLuint mask) const noexcept
	{
		return glStencilFunc(func, ref, mask);
	};
	void APIENTRY StencilOp (GLenum fail, GLenum zfail, GLenum zpass) const noexcept
	{
		return glStencilOp(fail, zfail, zpass);
	};
	void APIENTRY DepthFunc (GLenum func) const noexcept
	{
		return glDepthFunc(func);
	};
	void APIENTRY PixelStoref (GLenum pname, GLfloat param) const noexcept
	{
		return glPixelStoref(pname, param);
	};
	void APIENTRY PixelStorei (GLenum pname, GLint param) const noexcept
	{
		return glPixelStorei(pname, param);
	};
	void APIENTRY ReadBuffer (GLenum src) const noexcept
	{
		return glReadBuffer(src);
	};
	void APIENTRY ReadPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void * pixels) const noexcept
	{
		return glReadPixels(x, y, width, height, format, type, pixels);
	};
	void APIENTRY GetBooleanv (GLenum pname, GLboolean * data) const noexcept
	{
		return glGetBooleanv(pname, data);
	};
	void APIENTRY GetDoublev (GLenum pname, GLdouble * data) const noexcept
	{
		return glGetDoublev(pname, data);
	};
	GLenum APIENTRY GetError ( ) const noexcept
	{
		return glGetError();
	};
	void APIENTRY GetFloatv (GLenum pname, GLfloat * data) const noexcept
	{
		return glGetFloatv(pname, data);
	};
	void APIENTRY GetIntegerv (GLenum pname, GLint * data) const noexcept
	{
		return glGetIntegerv(pname, data);
	};
	const GLubyte * APIENTRY GetString (GLenum name) const noexcept
	{
		return glGetString(name);
	};
	void APIENTRY GetTexImage (GLenum target, GLint level, GLenum format, GLenum type, void * pixels) const noexcept
	{
		return glGetTexImage(target, level, format, type, pixels);
	};
	void APIENTRY GetTexParameterfv (GLenum target, GLenum pname, GLfloat * params) const noexcept
	{
		return glGetTexParameterfv(target, pname, params);
	};
	void APIENTRY GetTexParameteriv (GLenum target, GLenum pname, GLint * params) const noexcept
	{
		return glGetTexParameteriv(target, pname, params);
	};
	void APIENTRY GetTexLevelParameterfv (GLenum target, GLint level, GLenum pname, GLfloat * params) const noexcept
	{
		return glGetTexLevelParameterfv(target, level, pname, params);
	};
	void APIENTRY GetTexLevelParameteriv (GLenum target, GLint level, GLenum pname, GLint * params) const noexcept
	{
		return glGetTexLevelParameteriv(target, level, pname, params);
	};
	GLboolean APIENTRY IsEnabled (GLenum cap) const noexcept
	{
		return glIsEnabled(cap);
	};
	void APIENTRY DepthRange (GLdouble n, GLdouble f) const noexcept
	{
		return glDepthRange(n, f);
	};
	void APIENTRY Viewport (GLint x, GLint y, GLsizei width, GLsizei height) const noexcept
	{
		return glViewport(x, y, width, height);
	};
	void APIENTRY DrawArrays (GLenum mode, GLint first, GLsizei count) const noexcept
	{
		return glDrawArrays(mode, first, count);
	};
	void APIENTRY DrawElements (GLenum mode, GLsizei count, GLenum type, const void * indices) const noexcept
	{
		return glDrawElements(mode, count, type, indices);
	};
	void APIENTRY GetPointerv (GLenum pname, void * * params) const noexcept
	{
		return glGetPointerv(pname, params);
	};
	void APIENTRY PolygonOffset (GLfloat factor, GLfloat units) const noexcept
	{
		return glPolygonOffset(factor, units);
	};
	void APIENTRY CopyTexImage1D (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border) const noexcept
	{
		return glCopyTexImage1D(target, level, internalformat, x, y, width, border);
	};
	void APIENTRY CopyTexImage2D (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) const noexcept
	{
		return glCopyTexImage2D(target, level, internalformat, x, y, width, height, border);
	};
	void APIENTRY CopyTexSubImage1D (GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width) const noexcept
	{
		return glCopyTexSubImage1D(target, level, xoffset, x, y, width);
	};
	void APIENTRY CopyTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) const noexcept
	{
		return glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
	};
	void APIENTRY TexSubImage1D (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels) const noexcept
	{
		return glTexSubImage1D(target, level, xoffset, width, format, type, pixels);
	};
	void APIENTRY TexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels) const noexcept
	{
		return glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
	};
	void APIENTRY BindTexture (GLenum target, GLuint texture) const noexcept
	{
		return glBindTexture(target, texture);
	};
	void APIENTRY DeleteTextures (GLsizei n, const GLuint * textures) const noexcept
	{
		return glDeleteTextures(n, textures);
	};
	void APIENTRY GenTextures (GLsizei n, GLuint * textures) const noexcept
	{
		return glGenTextures(n, textures);
	};
	GLboolean APIENTRY IsTexture (GLuint texture) const noexcept
	{
		return glIsTexture(texture);
	};
	void APIENTRY DrawRangeElements (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices) const noexcept
	{
		return glDrawRangeElements(mode, start, end, count, type, indices);
	};
	void APIENTRY TexImage3D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels) const noexcept
	{
		return glTexImage3D(target, level, internalformat, width, height, depth, border, format, type, pixels);
	};
	void APIENTRY TexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels) const noexcept
	{
		return glTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
	};
	void APIENTRY CopyTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) const noexcept
	{
		return glCopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height);
	};
	void APIENTRY ActiveTexture (GLenum texture) const noexcept
	{
		return glActiveTexture(texture);
	};
	void APIENTRY SampleCoverage (GLfloat value, GLboolean invert) const noexcept
	{
		return glSampleCoverage(value, invert);
	};
	void APIENTRY CompressedTexImage3D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data) const noexcept
	{
		return glCompressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data);
	};
	void APIENTRY CompressedTexImage2D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data) const noexcept
	{
		return glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
	};
	void APIENTRY CompressedTexImage1D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * data) const noexcept
	{
		return glCompressedTexImage1D(target, level, internalformat, width, border, imageSize, data);
	};
	void APIENTRY CompressedTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data) const noexcept
	{
		return glCompressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
	};
	void APIENTRY CompressedTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data) const noexcept
	{
		return glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
	};
	void APIENTRY CompressedTexSubImage1D (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data) const noexcept
	{
		return glCompressedTexSubImage1D(target, level, xoffset, width, format, imageSize, data);
	};
	void APIENTRY GetCompressedTexImage (GLenum target, GLint level, void * img) const noexcept
	{
		return glGetCompressedTexImage(target, level, img);
	};
	void APIENTRY BlendFuncSeparate (GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha) const noexcept
	{
		return glBlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
	};
	void APIENTRY MultiDrawArrays (GLenum mode, const GLint * first, const GLsizei * count, GLsizei drawcount) const noexcept
	{
		return glMultiDrawArrays(mode, first, count, drawcount);
	};
	void APIENTRY MultiDrawElements (GLenum mode, const GLsizei * count, GLenum type, const void * const * indices, GLsizei drawcount) const noexcept
	{
		return glMultiDrawElements(mode, count, type, indices, drawcount);
	};
	void APIENTRY PointParameterf (GLenum pname, GLfloat param) const noexcept
	{
		return glPointParameterf(pname, param);
	};
	void APIENTRY PointParameterfv (GLenum pname, const GLfloat * params) const noexcept
	{
		return glPointParameterfv(pname, params);
	};
	void APIENTRY PointParameteri (GLenum pname, GLint param) const noexcept
	{
		return glPointParameteri(pname, param);
	};
	void APIENTRY PointParameteriv (GLenum pname, const GLint * params) const noexcept
	{
		return glPointParameteriv(pname, params);
	};
	void APIENTRY BlendColor (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) const noexcept
	{
		return glBlendColor(red, green, blue, alpha);
	};
	void APIENTRY BlendEquation (GLenum mode) const noexcept
	{
		return glBlendEquation(mode);
	};
	void APIENTRY GenQueries (GLsizei n, GLuint * ids) const noexcept
	{
		return glGenQueries(n, ids);
	};
	void APIENTRY DeleteQueries (GLsizei n, const GLuint * ids) const noexcept
	{
		return glDeleteQueries(n, ids);
	};
	GLboolean APIENTRY IsQuery (GLuint id) const noexcept
	{
		return glIsQuery(id);
	};
	void APIENTRY BeginQuery (GLenum target, GLuint id) const noexcept
	{
		return glBeginQuery(target, id);
	};
	void APIENTRY EndQuery (GLenum target) const noexcept
	{
		return glEndQuery(target);
	};
	void APIENTRY GetQueryiv (GLenum target, GLenum pname, GLint * params) const noexcept
	{
		return glGetQueryiv(target, pname, params);
	};
	void APIENTRY GetQueryObjectiv (GLuint id, GLenum pname, GLint * params) const noexcept
	{
		return glGetQueryObjectiv(id, pname, params);
	};
	void APIENTRY GetQueryObjectuiv (GLuint id, GLenum pname, GLuint * params) const noexcept
	{
		return glGetQueryObjectuiv(id, pname, params);
	};
	void APIENTRY BindBuffer (GLenum target, GLuint buffer) const noexcept
	{
		return glBindBuffer(target, buffer);
	};
	void APIENTRY DeleteBuffers (GLsizei n, const GLuint * buffers) const noexcept
	{
		return glDeleteBuffers(n, buffers);
	};
	void APIENTRY GenBuffers (GLsizei n, GLuint * buffers) const noexcept
	{
		return glGenBuffers(n, buffers);
	};
	GLboolean APIENTRY IsBuffer (GLuint buffer) const noexcept
	{
		return glIsBuffer(buffer);
	};
	void APIENTRY BufferData (GLenum target, GLsizeiptr size, const void * data, GLenum usage) const noexcept
	{
		return glBufferData(target, size, data, usage);
	};
	void APIENTRY BufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, const void * data) const noexcept
	{
		return glBufferSubData(target, offset, size, data);
	};
	void APIENTRY GetBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, void * data) const noexcept
	{
		return glGetBufferSubData(target, offset, size, data);
	};
	void * APIENTRY MapBuffer (GLenum target, GLenum access) const noexcept
	{
		return glMapBuffer(target, access);
	};
	GLboolean APIENTRY UnmapBuffer (GLenum target) const noexcept
	{
		return glUnmapBuffer(target);
	};
	void APIENTRY GetBufferParameteriv (GLenum target, GLenum pname, GLint * params) const noexcept
	{
		return glGetBufferParameteriv(target, pname, params);
	};
	void APIENTRY GetBufferPointerv (GLenum target, GLenum pname, void * * params) const noexcept
	{
		return glGetBufferPointerv(target, pname, params);
	};
	void APIENTRY BlendEquationSeparate (GLenum modeRGB, GLenum modeAlpha) const noexcept
	{
		return glBlendEquationSeparate(modeRGB, modeAlpha);
	};
	void APIENTRY DrawBuffers (GLsizei n, const GLenum * bufs) const noexcept
	{
		return glDrawBuffers(n, bufs);
	};
	void APIENTRY StencilOpSeparate (GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass) const noexcept
	{
		return glStencilOpSeparate(face, sfail, dpfail, dppass);
	};
	void APIENTRY StencilFuncSeparate (GLenum face, GLenum func, GLint ref, GLuint mask) const noexcept
	{
		return glStencilFuncSeparate(face, func, ref, mask);
	};
	void APIENTRY StencilMaskSeparate (GLenum face, GLuint mask) const noexcept
	{
		return glStencilMaskSeparate(face, mask);
	};
	void APIENTRY AttachShader (GLuint program, GLuint shader) const noexcept
	{
		return glAttachShader(program, shader);
	};
	void APIENTRY BindAttribLocation (GLuint program, GLuint index, const GLchar * name) const noexcept
	{
		return glBindAttribLocation(program, index, name);
	};
	void APIENTRY CompileShader (GLuint shader) const noexcept
	{
		return glCompileShader(shader);
	};
	GLuint APIENTRY CreateProgram ( ) const noexcept
	{
		return glCreateProgram();
	};
	GLuint APIENTRY CreateShader (GLenum type) const noexcept
	{
		return glCreateShader(type);
	};
	void APIENTRY DeleteProgram (GLuint program) const noexcept
	{
		return glDeleteProgram(program);
	};
	void APIENTRY DeleteShader (GLuint shader) const noexcept
	{
		return glDeleteShader(shader);
	};
	void APIENTRY DetachShader (GLuint program, GLuint shader) const noexcept
	{
		return glDetachShader(program, shader);
	};
	void APIENTRY DisableVertexAttribArray (GLuint index) const noexcept
	{
		return glDisableVertexAttribArray(index);
	};
	void APIENTRY EnableVertexAttribArray (GLuint index) const noexcept
	{
		return glEnableVertexAttribArray(index);
	};
	void APIENTRY GetActiveAttrib (GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name) const noexcept
	{
		return glGetActiveAttrib(program, index, bufSize, length, size, type, name);
	};
	void APIENTRY GetActiveUniform (GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name) const noexcept
	{
		return glGetActiveUniform(program, index, bufSize, length, size, type, name);
	};
	void APIENTRY GetAttachedShaders (GLuint program, GLsizei maxCount, GLsizei * count, GLuint * shaders) const noexcept
	{
		return glGetAttachedShaders(program, maxCount, count, shaders);
	};
	GLint APIENTRY GetAttribLocation (GLuint program, const GLchar * name) const noexcept
	{
		return glGetAttribLocation(program, name);
	};
	void APIENTRY GetProgramiv (GLuint program, GLenum pname, GLint * params) const noexcept
	{
		return glGetProgramiv(program, pname, params);
	};
	void APIENTRY GetProgramInfoLog (GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog) const noexcept
	{
		return glGetProgramInfoLog(program, bufSize, length, infoLog);
	};
	void APIENTRY GetShaderiv (GLuint shader, GLenum pname, GLint * params) const noexcept
	{
		return glGetShaderiv(shader, pname, params);
	};
	void APIENTRY GetShaderInfoLog (GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog) const noexcept
	{
		return glGetShaderInfoLog(shader, bufSize, length, infoLog);
	};
	void APIENTRY GetShaderSource (GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source) const noexcept
	{
		return glGetShaderSource(shader, bufSize, length, source);
	};
	GLint APIENTRY GetUniformLocation (GLuint program, const GLchar * name) const noexcept
	{
		return glGetUniformLocation(program, name);
	};
	void APIENTRY GetUniformfv (GLuint program, GLint location, GLfloat * params) const noexcept
	{
		return glGetUniformfv(program, location, params);
	};
	void APIENTRY GetUniformiv (GLuint program, GLint location, GLint * params) const noexcept
	{
		return glGetUniformiv(program, location, params);
	};
	void APIENTRY GetVertexAttribdv (GLuint index, GLenum pname, GLdouble * params) const noexcept
	{
		return glGetVertexAttribdv(index, pname, params);
	};
	void APIENTRY GetVertexAttribfv (GLuint index, GLenum pname, GLfloat * params) const noexcept
	{
		return glGetVertexAttribfv(index, pname, params);
	};
	void APIENTRY GetVertexAttribiv (GLuint index, GLenum pname, GLint * params) const noexcept
	{
		return glGetVertexAttribiv(index, pname, params);
	};
	void APIENTRY GetVertexAttribPointerv (GLuint index, GLenum pname, void * * pointer) const noexcept
	{
		return glGetVertexAttribPointerv(index, pname, pointer);
	};
	GLboolean APIENTRY IsProgram (GLuint program) const noexcept
	{
		return glIsProgram(program);
	};
	GLboolean APIENTRY IsShader (GLuint shader) const noexcept
	{
		return glIsShader(shader);
	};
	void APIENTRY LinkProgram (GLuint program) const noexcept
	{
		return glLinkProgram(program);
	};
	void APIENTRY ShaderSource (GLuint shader, GLsizei count, const GLchar * const * string, const GLint * length) const noexcept
	{
		return glShaderSource(shader, count, string, length);
	};
	void APIENTRY UseProgram (GLuint program) const noexcept
	{
		return glUseProgram(program);
	};
	void APIENTRY Uniform1f (GLint location, GLfloat v0) const noexcept
	{
		return glUniform1f(location, v0);
	};
	void APIENTRY Uniform2f (GLint location, GLfloat v0, GLfloat v1) const noexcept
	{
		return glUniform2f(location, v0, v1);
	};
	void APIENTRY Uniform3f (GLint location, GLfloat v0, GLfloat v1, GLfloat v2) const noexcept
	{
		return glUniform3f(location, v0, v1, v2);
	};
	void APIENTRY Uniform4f (GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) const noexcept
	{
		return glUniform4f(location, v0, v1, v2, v3);
	};
	void APIENTRY Uniform1i (GLint location, GLint v0) const noexcept
	{
		return glUniform1i(location, v0);
	};
	void APIENTRY Uniform2i (GLint location, GLint v0, GLint v1) const noexcept
	{
		return glUniform2i(location, v0, v1);
	};
	void APIENTRY Uniform3i (GLint location, GLint v0, GLint v1, GLint v2) const noexcept
	{
		return glUniform3i(location, v0, v1, v2);
	};
	void APIENTRY Uniform4i (GLint location, GLint v0, GLint v1, GLint v2, GLint v3) const noexcept
	{
		return glUniform4i(location, v0, v1, v2, v3);
	};
	void APIENTRY Uniform1fv (GLint location, GLsizei count, const GLfloat * value) const noexcept
	{
		return glUniform1fv(location, count, value);
	};
	void APIENTRY Uniform2fv (GLint location, GLsizei count, const GLfloat * value) const noexcept
	{
		return glUniform2fv(location, count, value);
	};
	void APIENTRY Uniform3fv (GLint location, GLsizei count, const GLfloat * value) const noexcept
	{
		return glUniform3fv(location, count, value);
	};
	void APIENTRY Uniform4fv (GLint location, GLsizei count, const GLfloat * value) const noexcept
	{
		return glUniform4fv(location, count, value);
	};
	void APIENTRY Uniform1iv (GLint location, GLsizei count, const GLint * value) const noexcept
	{
		return glUniform1iv(location, count, value);
	};
	void APIENTRY Uniform2iv (GLint location, GLsizei count, const GLint * value) const noexcept
	{
		return glUniform2iv(location, count, value);
	};
	void APIENTRY Uniform3iv (GLint location, GLsizei count, const GLint * value) const noexcept
	{
		return glUniform3iv(location, count, value);
	};
	void APIENTRY Uniform4iv (GLint location, GLsizei count, const GLint * value) const noexcept
	{
		return glUniform4iv(location, count, value);
	};
	void APIENTRY UniformMatrix2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) const noexcept
	{
		return glUniformMatrix2fv(location, count, transpose, value);
	};
	void APIENTRY UniformMatrix3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) const noexcept
	{
		return glUniformMatrix3fv(location, count, transpose, value);
	};
	void APIENTRY UniformMatrix4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) const noexcept
	{
		return glUniformMatrix4fv(location, count, transpose, value);
	};
	void APIENTRY ValidateProgram (GLuint program) const noexcept
	{
		return glValidateProgram(program);
	};
	void APIENTRY VertexAttrib1d (GLuint index, GLdouble x) const noexcept
	{
		return glVertexAttrib1d(index, x);
	};
	void APIENTRY VertexAttrib1dv (GLuint index, const GLdouble * v) const noexcept
	{
		return glVertexAttrib1dv(index, v);
	};
	void APIENTRY VertexAttrib1f (GLuint index, GLfloat x) const noexcept
	{
		return glVertexAttrib1f(index, x);
	};
	void APIENTRY VertexAttrib1fv (GLuint index, const GLfloat * v) const noexcept
	{
		return glVertexAttrib1fv(index, v);
	};
	void APIENTRY VertexAttrib1s (GLuint index, GLshort x) const noexcept
	{
		return glVertexAttrib1s(index, x);
	};
	void APIENTRY VertexAttrib1sv (GLuint index, const GLshort * v) const noexcept
	{
		return glVertexAttrib1sv(index, v);
	};
	void APIENTRY VertexAttrib2d (GLuint index, GLdouble x, GLdouble y) const noexcept
	{
		return glVertexAttrib2d(index, x, y);
	};
	void APIENTRY VertexAttrib2dv (GLuint index, const GLdouble * v) const noexcept
	{
		return glVertexAttrib2dv(index, v);
	};
	void APIENTRY VertexAttrib2f (GLuint index, GLfloat x, GLfloat y) const noexcept
	{
		return glVertexAttrib2f(index, x, y);
	};
	void APIENTRY VertexAttrib2fv (GLuint index, const GLfloat * v) const noexcept
	{
		return glVertexAttrib2fv(index, v);
	};
	void APIENTRY VertexAttrib2s (GLuint index, GLshort x, GLshort y) const noexcept
	{
		return glVertexAttrib2s(index, x, y);
	};
	void APIENTRY VertexAttrib2sv (GLuint index, const GLshort * v) const noexcept
	{
		return glVertexAttrib2sv(index, v);
	};
	void APIENTRY VertexAttrib3d (GLuint index, GLdouble x, GLdouble y, GLdouble z) const noexcept
	{
		return glVertexAttrib3d(index, x, y, z);
	};
	void APIENTRY VertexAttrib3dv (GLuint index, const GLdouble * v) const noexcept
	{
		return glVertexAttrib3dv(index, v);
	};
	void APIENTRY VertexAttrib3f (GLuint index, GLfloat x, GLfloat y, GLfloat z) const noexcept
	{
		return glVertexAttrib3f(index, x, y, z);
	};
	void APIENTRY VertexAttrib3fv (GLuint index, const GLfloat * v) const noexcept
	{
		return glVertexAttrib3fv(index, v);
	};
	void APIENTRY VertexAttrib3s (GLuint index, GLshort x, GLshort y, GLshort z) const noexcept
	{
		return glVertexAttrib3s(index, x, y, z);
	};
	void APIENTRY VertexAttrib3sv (GLuint index, const GLshort * v) const noexcept
	{
		return glVertexAttrib3sv(index, v);
	};
	void APIENTRY VertexAttrib4Nbv (GLuint index, const GLbyte * v) const noexcept
	{
		return glVertexAttrib4Nbv(index, v);
	};
	void APIENTRY VertexAttrib4Niv (GLuint index, const GLint * v) const noexcept
	{
		return glVertexAttrib4Niv(index, v);
	};
	void APIENTRY VertexAttrib4Nsv (GLuint index, const GLshort * v) const noexcept
	{
		return glVertexAttrib4Nsv(index, v);
	};
	void APIENTRY VertexAttrib4Nub (GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w) const noexcept
	{
		return glVertexAttrib4Nub(index, x, y, z, w);
	};
	void APIENTRY VertexAttrib4Nubv (GLuint index, const GLubyte * v) const noexcept
	{
		return glVertexAttrib4Nubv(index, v);
	};
	void APIENTRY VertexAttrib4Nuiv (GLuint index, const GLuint * v) const noexcept
	{
		return glVertexAttrib4Nuiv(index, v);
	};
	void APIENTRY VertexAttrib4Nusv (GLuint index, const GLushort * v) const noexcept
	{
		return glVertexAttrib4Nusv(index, v);
	};
	void APIENTRY VertexAttrib4bv (GLuint index, const GLbyte * v) const noexcept
	{
		return glVertexAttrib4bv(index, v);
	};
	void APIENTRY VertexAttrib4d (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) const noexcept
	{
		return glVertexAttrib4d(index, x, y, z, w);
	};
	void APIENTRY VertexAttrib4dv (GLuint index, const GLdouble * v) const noexcept
	{
		return glVertexAttrib4dv(index, v);
	};
	void APIENTRY VertexAttrib4f (GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) const noexcept
	{
		return glVertexAttrib4f(index, x, y, z, w);
	};
	void APIENTRY VertexAttrib4fv (GLuint index, const GLfloat * v) const noexcept
	{
		return glVertexAttrib4fv(index, v);
	};
	void APIENTRY VertexAttrib4iv (GLuint index, const GLint * v) const noexcept
	{
		return glVertexAttrib4iv(index, v);
	};
	void APIENTRY VertexAttrib4s (GLuint index, GLshort x, GLshort y, GLshort z, GLshort w) const noexcept
	{
		return glVertexAttrib4s(index, x, y, z, w);
	};
	void APIENTRY VertexAttrib4sv (GLuint index, const GLshort * v) const noexcept
	{
		return glVertexAttrib4sv(index, v);
	};
	void APIENTRY VertexAttrib4ubv (GLuint index, const GLubyte * v) const noexcept
	{
		return glVertexAttrib4ubv(index, v);
	};
	void APIENTRY VertexAttrib4uiv (GLuint index, const GLuint * v) const noexcept
	{
		return glVertexAttrib4uiv(index, v);
	};
	void APIENTRY VertexAttrib4usv (GLuint index, const GLushort * v) const noexcept
	{
		return glVertexAttrib4usv(index, v);
	};
	void APIENTRY VertexAttribPointer (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * pointer) const noexcept
	{
		return glVertexAttribPointer(index, size, type, normalized, stride, pointer);
	};
	void APIENTRY UniformMatrix2x3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) const noexcept
	{
		return glUniformMatrix2x3fv(location, count, transpose, value);
	};
	void APIENTRY UniformMatrix3x2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) const noexcept
	{
		return glUniformMatrix3x2fv(location, count, transpose, value);
	};
	void APIENTRY UniformMatrix2x4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) const noexcept
	{
		return glUniformMatrix2x4fv(location, count, transpose, value);
	};
	void APIENTRY UniformMatrix4x2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) const noexcept
	{
		return glUniformMatrix4x2fv(location, count, transpose, value);
	};
	void APIENTRY UniformMatrix3x4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) const noexcept
	{
		return glUniformMatrix3x4fv(location, count, transpose, value);
	};
	void APIENTRY UniformMatrix4x3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) const noexcept
	{
		return glUniformMatrix4x3fv(location, count, transpose, value);
	};
	void APIENTRY ColorMaski (GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a) const noexcept
	{
		return glColorMaski(index, r, g, b, a);
	};
	void APIENTRY GetBooleani_v (GLenum target, GLuint index, GLboolean * data) const noexcept
	{
		return glGetBooleani_v(target, index, data);
	};
	void APIENTRY GetIntegeri_v (GLenum target, GLuint index, GLint * data) const noexcept
	{
		return glGetIntegeri_v(target, index, data);
	};
	void APIENTRY Enablei (GLenum target, GLuint index) const noexcept
	{
		return glEnablei(target, index);
	};
	void APIENTRY Disablei (GLenum target, GLuint index) const noexcept
	{
		return glDisablei(target, index);
	};
	GLboolean APIENTRY IsEnabledi (GLenum target, GLuint index) const noexcept
	{
		return glIsEnabledi(target, index);
	};
	void APIENTRY BeginTransformFeedback (GLenum primitiveMode) const noexcept
	{
		return glBeginTransformFeedback(primitiveMode);
	};
	void APIENTRY EndTransformFeedback ( ) const noexcept
	{
		return glEndTransformFeedback();
	};
	void APIENTRY BindBufferRange (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size) const noexcept
	{
		return glBindBufferRange(target, index, buffer, offset, size);
	};
	void APIENTRY BindBufferBase (GLenum target, GLuint index, GLuint buffer) const noexcept
	{
		return glBindBufferBase(target, index, buffer);
	};
	void APIENTRY TransformFeedbackVaryings (GLuint program, GLsizei count, const GLchar * const * varyings, GLenum bufferMode) const noexcept
	{
		return glTransformFeedbackVaryings(program, count, varyings, bufferMode);
	};
	void APIENTRY GetTransformFeedbackVarying (GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name) const noexcept
	{
		return glGetTransformFeedbackVarying(program, index, bufSize, length, size, type, name);
	};
	void APIENTRY ClampColor (GLenum target, GLenum clamp) const noexcept
	{
		return glClampColor(target, clamp);
	};
	void APIENTRY BeginConditionalRender (GLuint id, GLenum mode) const noexcept
	{
		return glBeginConditionalRender(id, mode);
	};
	void APIENTRY EndConditionalRender ( ) const noexcept
	{
		return glEndConditionalRender();
	};
	void APIENTRY VertexAttribIPointer (GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer) const noexcept
	{
		return glVertexAttribIPointer(index, size, type, stride, pointer);
	};
	void APIENTRY GetVertexAttribIiv (GLuint index, GLenum pname, GLint * params) const noexcept
	{
		return glGetVertexAttribIiv(index, pname, params);
	};
	void APIENTRY GetVertexAttribIuiv (GLuint index, GLenum pname, GLuint * params) const noexcept
	{
		return glGetVertexAttribIuiv(index, pname, params);
	};
	void APIENTRY VertexAttribI1i (GLuint index, GLint x) const noexcept
	{
		return glVertexAttribI1i(index, x);
	};
	void APIENTRY VertexAttribI2i (GLuint index, GLint x, GLint y) const noexcept
	{
		return glVertexAttribI2i(index, x, y);
	};
	void APIENTRY VertexAttribI3i (GLuint index, GLint x, GLint y, GLint z) const noexcept
	{
		return glVertexAttribI3i(index, x, y, z);
	};
	void APIENTRY VertexAttribI4i (GLuint index, GLint x, GLint y, GLint z, GLint w) const noexcept
	{
		return glVertexAttribI4i(index, x, y, z, w);
	};
	void APIENTRY VertexAttribI1ui (GLuint index, GLuint x) const noexcept
	{
		return glVertexAttribI1ui(index, x);
	};
	void APIENTRY VertexAttribI2ui (GLuint index, GLuint x, GLuint y) const noexcept
	{
		return glVertexAttribI2ui(index, x, y);
	};
	void APIENTRY VertexAttribI3ui (GLuint index, GLuint x, GLuint y, GLuint z) const noexcept
	{
		return glVertexAttribI3ui(index, x, y, z);
	};
	void APIENTRY VertexAttribI4ui (GLuint index, GLuint x, GLuint y, GLuint z, GLuint w) const noexcept
	{
		return glVertexAttribI4ui(index, x, y, z, w);
	};
	void APIENTRY VertexAttribI1iv (GLuint index, const GLint * v) const noexcept
	{
		return glVertexAttribI1iv(index, v);
	};
	void APIENTRY VertexAttribI2iv (GLuint index, const GLint * v) const noexcept
	{
		return glVertexAttribI2iv(index, v);
	};
	void APIENTRY VertexAttribI3iv (GLuint index, const GLint * v) const noexcept
	{
		return glVertexAttribI3iv(index, v);
	};
	void APIENTRY VertexAttribI4iv (GLuint index, const GLint * v) const noexcept
	{
		return glVertexAttribI4iv(index, v);
	};
	void APIENTRY VertexAttribI1uiv (GLuint index, const GLuint * v) const noexcept
	{
		return glVertexAttribI1uiv(index, v);
	};
	void APIENTRY VertexAttribI2uiv (GLuint index, const GLuint * v) const noexcept
	{
		return glVertexAttribI2uiv(index, v);
	};
	void APIENTRY VertexAttribI3uiv (GLuint index, const GLuint * v) const noexcept
	{
		return glVertexAttribI3uiv(index, v);
	};
	void APIENTRY VertexAttribI4uiv (GLuint index, const GLuint * v) const noexcept
	{
		return glVertexAttribI4uiv(index, v);
	};
	void APIENTRY VertexAttribI4bv (GLuint index, const GLbyte * v) const noexcept
	{
		return glVertexAttribI4bv(index, v);
	};
	void APIENTRY VertexAttribI4sv (GLuint index, const GLshort * v) const noexcept
	{
		return glVertexAttribI4sv(index, v);
	};
	void APIENTRY VertexAttribI4ubv (GLuint index, const GLubyte * v) const noexcept
	{
		return glVertexAttribI4ubv(index, v);
	};
	void APIENTRY VertexAttribI4usv (GLuint index, const GLushort * v) const noexcept
	{
		return glVertexAttribI4usv(index, v);
	};
	void APIENTRY GetUniformuiv (GLuint program, GLint location, GLuint * params) const noexcept
	{
		return glGetUniformuiv(program, location, params);
	};
	void APIENTRY BindFragDataLocation (GLuint program, GLuint color, const GLchar * name) const noexcept
	{
		return glBindFragDataLocation(program, color, name);
	};
	GLint APIENTRY GetFragDataLocation (GLuint program, const GLchar * name) const noexcept
	{
		return glGetFragDataLocation(program, name);
	};
	void APIENTRY Uniform1ui (GLint location, GLuint v0) const noexcept
	{
		return glUniform1ui(location, v0);
	};
	void APIENTRY Uniform2ui (GLint location, GLuint v0, GLuint v1) const noexcept
	{
		return glUniform2ui(location, v0, v1);
	};
	void APIENTRY Uniform3ui (GLint location, GLuint v0, GLuint v1, GLuint v2) const noexcept
	{
		return glUniform3ui(location, v0, v1, v2);
	};
	void APIENTRY Uniform4ui (GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) const noexcept
	{
		return glUniform4ui(location, v0, v1, v2, v3);
	};
	void APIENTRY Uniform1uiv (GLint location, GLsizei count, const GLuint * value) const noexcept
	{
		return glUniform1uiv(location, count, value);
	};
	void APIENTRY Uniform2uiv (GLint location, GLsizei count, const GLuint * value) const noexcept
	{
		return glUniform2uiv(location, count, value);
	};
	void APIENTRY Uniform3uiv (GLint location, GLsizei count, const GLuint * value) const noexcept
	{
		return glUniform3uiv(location, count, value);
	};
	void APIENTRY Uniform4uiv (GLint location, GLsizei count, const GLuint * value) const noexcept
	{
		return glUniform4uiv(location, count, value);
	};
	void APIENTRY TexParameterIiv (GLenum target, GLenum pname, const GLint * params) const noexcept
	{
		return glTexParameterIiv(target, pname, params);
	};
	void APIENTRY TexParameterIuiv (GLenum target, GLenum pname, const GLuint * params) const noexcept
	{
		return glTexParameterIuiv(target, pname, params);
	};
	void APIENTRY GetTexParameterIiv (GLenum target, GLenum pname, GLint * params) const noexcept
	{
		return glGetTexParameterIiv(target, pname, params);
	};
	void APIENTRY GetTexParameterIuiv (GLenum target, GLenum pname, GLuint * params) const noexcept
	{
		return glGetTexParameterIuiv(target, pname, params);
	};
	void APIENTRY ClearBufferiv (GLenum buffer, GLint drawbuffer, const GLint * value) const noexcept
	{
		return glClearBufferiv(buffer, drawbuffer, value);
	};
	void APIENTRY ClearBufferuiv (GLenum buffer, GLint drawbuffer, const GLuint * value) const noexcept
	{
		return glClearBufferuiv(buffer, drawbuffer, value);
	};
	void APIENTRY ClearBufferfv (GLenum buffer, GLint drawbuffer, const GLfloat * value) const noexcept
	{
		return glClearBufferfv(buffer, drawbuffer, value);
	};
	void APIENTRY ClearBufferfi (GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil) const noexcept
	{
		return glClearBufferfi(buffer, drawbuffer, depth, stencil);
	};
	const GLubyte * APIENTRY GetStringi (GLenum name, GLuint index) const noexcept
	{
		return glGetStringi(name, index);
	};
	GLboolean APIENTRY IsRenderbuffer (GLuint renderbuffer) const noexcept
	{
		return glIsRenderbuffer(renderbuffer);
	};
	void APIENTRY BindRenderbuffer (GLenum target, GLuint renderbuffer) const noexcept
	{
		return glBindRenderbuffer(target, renderbuffer);
	};
	void APIENTRY DeleteRenderbuffers (GLsizei n, const GLuint * renderbuffers) const noexcept
	{
		return glDeleteRenderbuffers(n, renderbuffers);
	};
	void APIENTRY GenRenderbuffers (GLsizei n, GLuint * renderbuffers) const noexcept
	{
		return glGenRenderbuffers(n, renderbuffers);
	};
	void APIENTRY RenderbufferStorage (GLenum target, GLenum internalformat, GLsizei width, GLsizei height) const noexcept
	{
		return glRenderbufferStorage(target, internalformat, width, height);
	};
	void APIENTRY GetRenderbufferParameteriv (GLenum target, GLenum pname, GLint * params) const noexcept
	{
		return glGetRenderbufferParameteriv(target, pname, params);
	};
	GLboolean APIENTRY IsFramebuffer (GLuint framebuffer) const noexcept
	{
		return glIsFramebuffer(framebuffer);
	};
	void APIENTRY BindFramebuffer (GLenum target, GLuint framebuffer) const noexcept
	{
		return glBindFramebuffer(target, framebuffer);
	};
	void APIENTRY DeleteFramebuffers (GLsizei n, const GLuint * framebuffers) const noexcept
	{
		return glDeleteFramebuffers(n, framebuffers);
	};
	void APIENTRY GenFramebuffers (GLsizei n, GLuint * framebuffers) const noexcept
	{
		return glGenFramebuffers(n, framebuffers);
	};
	GLenum APIENTRY CheckFramebufferStatus (GLenum target) const noexcept
	{
		return glCheckFramebufferStatus(target);
	};
	void APIENTRY FramebufferTexture1D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) const noexcept
	{
		return glFramebufferTexture1D(target, attachment, textarget, texture, level);
	};
	void APIENTRY FramebufferTexture2D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) const noexcept
	{
		return glFramebufferTexture2D(target, attachment, textarget, texture, level);
	};
	void APIENTRY FramebufferTexture3D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset) const noexcept
	{
		return glFramebufferTexture3D(target, attachment, textarget, texture, level, zoffset);
	};
	void APIENTRY FramebufferRenderbuffer (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) const noexcept
	{
		return glFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
	};
	void APIENTRY GetFramebufferAttachmentParameteriv (GLenum target, GLenum attachment, GLenum pname, GLint * params) const noexcept
	{
		return glGetFramebufferAttachmentParameteriv(target, attachment, pname, params);
	};
	void APIENTRY GenerateMipmap (GLenum target) const noexcept
	{
		return glGenerateMipmap(target);
	};
	void APIENTRY BlitFramebuffer (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter) const noexcept
	{
		return glBlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
	};
	void APIENTRY RenderbufferStorageMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) const noexcept
	{
		return glRenderbufferStorageMultisample(target, samples, internalformat, width, height);
	};
	void APIENTRY FramebufferTextureLayer (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer) const noexcept
	{
		return glFramebufferTextureLayer(target, attachment, texture, level, layer);
	};
	void * APIENTRY MapBufferRange (GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access) const noexcept
	{
		return glMapBufferRange(target, offset, length, access);
	};
	void APIENTRY FlushMappedBufferRange (GLenum target, GLintptr offset, GLsizeiptr length) const noexcept
	{
		return glFlushMappedBufferRange(target, offset, length);
	};
	void APIENTRY BindVertexArray (GLuint array) const noexcept
	{
		return glBindVertexArray(array);
	};
	void APIENTRY DeleteVertexArrays (GLsizei n, const GLuint * arrays) const noexcept
	{
		return glDeleteVertexArrays(n, arrays);
	};
	void APIENTRY GenVertexArrays (GLsizei n, GLuint * arrays) const noexcept
	{
		return glGenVertexArrays(n, arrays);
	};
	GLboolean APIENTRY IsVertexArray (GLuint array) const noexcept
	{
		return glIsVertexArray(array);
	};
	void APIENTRY DrawArraysInstanced (GLenum mode, GLint first, GLsizei count, GLsizei instancecount) const noexcept
	{
		return glDrawArraysInstanced(mode, first, count, instancecount);
	};
	void APIENTRY DrawElementsInstanced (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount) const noexcept
	{
		return glDrawElementsInstanced(mode, count, type, indices, instancecount);
	};
	void APIENTRY TexBuffer (GLenum target, GLenum internalformat, GLuint buffer) const noexcept
	{
		return glTexBuffer(target, internalformat, buffer);
	};
	void APIENTRY PrimitiveRestartIndex (GLuint index) const noexcept
	{
		return glPrimitiveRestartIndex(index);
	};
	void APIENTRY CopyBufferSubData (GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size) const noexcept
	{
		return glCopyBufferSubData(readTarget, writeTarget, readOffset, writeOffset, size);
	};
	void APIENTRY GetUniformIndices (GLuint program, GLsizei uniformCount, const GLchar * const * uniformNames, GLuint * uniformIndices) const noexcept
	{
		return glGetUniformIndices(program, uniformCount, uniformNames, uniformIndices);
	};
	void APIENTRY GetActiveUniformsiv (GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, GLenum pname, GLint * params) const noexcept
	{
		return glGetActiveUniformsiv(program, uniformCount, uniformIndices, pname, params);
	};
	void APIENTRY GetActiveUniformName (GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformName) const noexcept
	{
		return glGetActiveUniformName(program, uniformIndex, bufSize, length, uniformName);
	};
	GLuint APIENTRY GetUniformBlockIndex (GLuint program, const GLchar * uniformBlockName) const noexcept
	{
		return glGetUniformBlockIndex(program, uniformBlockName);
	};
	void APIENTRY GetActiveUniformBlockiv (GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint * params) const noexcept
	{
		return glGetActiveUniformBlockiv(program, uniformBlockIndex, pname, params);
	};
	void APIENTRY GetActiveUniformBlockName (GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName) const noexcept
	{
		return glGetActiveUniformBlockName(program, uniformBlockIndex, bufSize, length, uniformBlockName);
	};
	void APIENTRY UniformBlockBinding (GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding) const noexcept
	{
		return glUniformBlockBinding(program, uniformBlockIndex, uniformBlockBinding);
	};
	void APIENTRY DrawElementsBaseVertex (GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex) const noexcept
	{
		return glDrawElementsBaseVertex(mode, count, type, indices, basevertex);
	};
	void APIENTRY DrawRangeElementsBaseVertex (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex) const noexcept
	{
		return glDrawRangeElementsBaseVertex(mode, start, end, count, type, indices, basevertex);
	};
	void APIENTRY DrawElementsInstancedBaseVertex (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex) const noexcept
	{
		return glDrawElementsInstancedBaseVertex(mode, count, type, indices, instancecount, basevertex);
	};
	void APIENTRY MultiDrawElementsBaseVertex (GLenum mode, const GLsizei * count, GLenum type, const void * const * indices, GLsizei drawcount, const GLint * basevertex) const noexcept
	{
		return glMultiDrawElementsBaseVertex(mode, count, type, indices, drawcount, basevertex);
	};
	void APIENTRY ProvokingVertex (GLenum mode) const noexcept
	{
		return glProvokingVertex(mode);
	};
	GLsync APIENTRY FenceSync (GLenum condition, GLbitfield flags) const noexcept
	{
		return glFenceSync(condition, flags);
	};
	GLboolean APIENTRY IsSync (GLsync sync) const noexcept
	{
		return glIsSync(sync);
	};
	void APIENTRY DeleteSync (GLsync sync) const noexcept
	{
		return glDeleteSync(sync);
	};
	GLenum APIENTRY ClientWaitSync (GLsync sync, GLbitfield flags, GLuint64 timeout) const noexcept
	{
		return glClientWaitSync(sync, flags, timeout);
	};
	void APIENTRY WaitSync (GLsync sync, GLbitfield flags, GLuint64 timeout) const noexcept
	{
		return glWaitSync(sync, flags, timeout);
	};
	void APIENTRY GetInteger64v (GLenum pname, GLint64 * data) const noexcept
	{
		return glGetInteger64v(pname, data);
	};
	void APIENTRY GetSynciv (GLsync sync, GLenum pname, GLsizei count, GLsizei * length, GLint * values) const noexcept
	{
		return glGetSynciv(sync, pname, count, length, values);
	};
	void APIENTRY GetInteger64i_v (GLenum target, GLuint index, GLint64 * data) const noexcept
	{
		return glGetInteger64i_v(target, index, data);
	};
	void APIENTRY GetBufferParameteri64v (GLenum target, GLenum pname, GLint64 * params) const noexcept
	{
		return glGetBufferParameteri64v(target, pname, params);
	};
	void APIENTRY FramebufferTexture (GLenum target, GLenum attachment, GLuint texture, GLint level) const noexcept
	{
		return glFramebufferTexture(target, attachment, texture, level);
	};
	void APIENTRY TexImage2DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) const noexcept
	{
		return glTexImage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
	};
	void APIENTRY TexImage3DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations) const noexcept
	{
		return glTexImage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations);
	};
	void APIENTRY GetMultisamplefv (GLenum pname, GLuint index, GLfloat * val) const noexcept
	{
		return glGetMultisamplefv(pname, index, val);
	};
	void APIENTRY SampleMaski (GLuint maskNumber, GLbitfield mask) const noexcept
	{
		return glSampleMaski(maskNumber, mask);
	};
	void APIENTRY BindFragDataLocationIndexed (GLuint program, GLuint colorNumber, GLuint index, const GLchar * name) const noexcept
	{
		return glBindFragDataLocationIndexed(program, colorNumber, index, name);
	};
	GLint APIENTRY GetFragDataIndex (GLuint program, const GLchar * name) const noexcept
	{
		return glGetFragDataIndex(program, name);
	};
	void APIENTRY GenSamplers (GLsizei count, GLuint * samplers) const noexcept
	{
		return glGenSamplers(count, samplers);
	};
	void APIENTRY DeleteSamplers (GLsizei count, const GLuint * samplers) const noexcept
	{
		return glDeleteSamplers(count, samplers);
	};
	GLboolean APIENTRY IsSampler (GLuint sampler) const noexcept
	{
		return glIsSampler(sampler);
	};
	void APIENTRY BindSampler (GLuint unit, GLuint sampler) const noexcept
	{
		return glBindSampler(unit, sampler);
	};
	void APIENTRY SamplerParameteri (GLuint sampler, GLenum pname, GLint param) const noexcept
	{
		return glSamplerParameteri(sampler, pname, param);
	};
	void APIENTRY SamplerParameteriv (GLuint sampler, GLenum pname, const GLint * param) const noexcept
	{
		return glSamplerParameteriv(sampler, pname, param);
	};
	void APIENTRY SamplerParameterf (GLuint sampler, GLenum pname, GLfloat param) const noexcept
	{
		return glSamplerParameterf(sampler, pname, param);
	};
	void APIENTRY SamplerParameterfv (GLuint sampler, GLenum pname, const GLfloat * param) const noexcept
	{
		return glSamplerParameterfv(sampler, pname, param);
	};
	void APIENTRY SamplerParameterIiv (GLuint sampler, GLenum pname, const GLint * param) const noexcept
	{
		return glSamplerParameterIiv(sampler, pname, param);
	};
	void APIENTRY SamplerParameterIuiv (GLuint sampler, GLenum pname, const GLuint * param) const noexcept
	{
		return glSamplerParameterIuiv(sampler, pname, param);
	};
	void APIENTRY GetSamplerParameteriv (GLuint sampler, GLenum pname, GLint * params) const noexcept
	{
		return glGetSamplerParameteriv(sampler, pname, params);
	};
	void APIENTRY GetSamplerParameterIiv (GLuint sampler, GLenum pname, GLint * params) const noexcept
	{
		return glGetSamplerParameterIiv(sampler, pname, params);
	};
	void APIENTRY GetSamplerParameterfv (GLuint sampler, GLenum pname, GLfloat * params) const noexcept
	{
		return glGetSamplerParameterfv(sampler, pname, params);
	};
	void APIENTRY GetSamplerParameterIuiv (GLuint sampler, GLenum pname, GLuint * params) const noexcept
	{
		return glGetSamplerParameterIuiv(sampler, pname, params);
	};
	void APIENTRY QueryCounter (GLuint id, GLenum target) const noexcept
	{
		return glQueryCounter(id, target);
	};
	void APIENTRY GetQueryObjecti64v (GLuint id, GLenum pname, GLint64 * params) const noexcept
	{
		return glGetQueryObjecti64v(id, pname, params);
	};
	void APIENTRY GetQueryObjectui64v (GLuint id, GLenum pname, GLuint64 * params) const noexcept
	{
		return glGetQueryObjectui64v(id, pname, params);
	};
	void APIENTRY VertexAttribDivisor (GLuint index, GLuint divisor) const noexcept
	{
		return glVertexAttribDivisor(index, divisor);
	};
	void APIENTRY VertexAttribP1ui (GLuint index, GLenum type, GLboolean normalized, GLuint value) const noexcept
	{
		return glVertexAttribP1ui(index, type, normalized, value);
	};
	void APIENTRY VertexAttribP1uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint * value) const noexcept
	{
		return glVertexAttribP1uiv(index, type, normalized, value);
	};
	void APIENTRY VertexAttribP2ui (GLuint index, GLenum type, GLboolean normalized, GLuint value) const noexcept
	{
		return glVertexAttribP2ui(index, type, normalized, value);
	};
	void APIENTRY VertexAttribP2uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint * value) const noexcept
	{
		return glVertexAttribP2uiv(index, type, normalized, value);
	};
	void APIENTRY VertexAttribP3ui (GLuint index, GLenum type, GLboolean normalized, GLuint value) const noexcept
	{
		return glVertexAttribP3ui(index, type, normalized, value);
	};
	void APIENTRY VertexAttribP3uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint * value) const noexcept
	{
		return glVertexAttribP3uiv(index, type, normalized, value);
	};
	void APIENTRY VertexAttribP4ui (GLuint index, GLenum type, GLboolean normalized, GLuint value) const noexcept
	{
		return glVertexAttribP4ui(index, type, normalized, value);
	};
	void APIENTRY VertexAttribP4uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint * value) const noexcept
	{
		return glVertexAttribP4uiv(index, type, normalized, value);
	};
	void APIENTRY MinSampleShading (GLfloat value) const noexcept
	{
		return glMinSampleShading(value);
	};
	void APIENTRY BlendEquationi (GLuint buf, GLenum mode) const noexcept
	{
		return glBlendEquationi(buf, mode);
	};
	void APIENTRY BlendEquationSeparatei (GLuint buf, GLenum modeRGB, GLenum modeAlpha) const noexcept
	{
		return glBlendEquationSeparatei(buf, modeRGB, modeAlpha);
	};
	void APIENTRY BlendFunci (GLuint buf, GLenum src, GLenum dst) const noexcept
	{
		return glBlendFunci(buf, src, dst);
	};
	void APIENTRY BlendFuncSeparatei (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha) const noexcept
	{
		return glBlendFuncSeparatei(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
	};
	void APIENTRY DrawArraysIndirect (GLenum mode, const void * indirect) const noexcept
	{
		return glDrawArraysIndirect(mode, indirect);
	};
	void APIENTRY DrawElementsIndirect (GLenum mode, GLenum type, const void * indirect) const noexcept
	{
		return glDrawElementsIndirect(mode, type, indirect);
	};
	void APIENTRY Uniform1d (GLint location, GLdouble x) const noexcept
	{
		return glUniform1d(location, x);
	};
	void APIENTRY Uniform2d (GLint location, GLdouble x, GLdouble y) const noexcept
	{
		return glUniform2d(location, x, y);
	};
	void APIENTRY Uniform3d (GLint location, GLdouble x, GLdouble y, GLdouble z) const noexcept
	{
		return glUniform3d(location, x, y, z);
	};
	void APIENTRY Uniform4d (GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w) const noexcept
	{
		return glUniform4d(location, x, y, z, w);
	};
	void APIENTRY Uniform1dv (GLint location, GLsizei count, const GLdouble * value) const noexcept
	{
		return glUniform1dv(location, count, value);
	};
	void APIENTRY Uniform2dv (GLint location, GLsizei count, const GLdouble * value) const noexcept
	{
		return glUniform2dv(location, count, value);
	};
	void APIENTRY Uniform3dv (GLint location, GLsizei count, const GLdouble * value) const noexcept
	{
		return glUniform3dv(location, count, value);
	};
	void APIENTRY Uniform4dv (GLint location, GLsizei count, const GLdouble * value) const noexcept
	{
		return glUniform4dv(location, count, value);
	};
	void APIENTRY UniformMatrix2dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) const noexcept
	{
		return glUniformMatrix2dv(location, count, transpose, value);
	};
	void APIENTRY UniformMatrix3dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) const noexcept
	{
		return glUniformMatrix3dv(location, count, transpose, value);
	};
	void APIENTRY UniformMatrix4dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) const noexcept
	{
		return glUniformMatrix4dv(location, count, transpose, value);
	};
	void APIENTRY UniformMatrix2x3dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) const noexcept
	{
		return glUniformMatrix2x3dv(location, count, transpose, value);
	};
	void APIENTRY UniformMatrix2x4dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) const noexcept
	{
		return glUniformMatrix2x4dv(location, count, transpose, value);
	};
	void APIENTRY UniformMatrix3x2dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) const noexcept
	{
		return glUniformMatrix3x2dv(location, count, transpose, value);
	};
	void APIENTRY UniformMatrix3x4dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) const noexcept
	{
		return glUniformMatrix3x4dv(location, count, transpose, value);
	};
	void APIENTRY UniformMatrix4x2dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) const noexcept
	{
		return glUniformMatrix4x2dv(location, count, transpose, value);
	};
	void APIENTRY UniformMatrix4x3dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) const noexcept
	{
		return glUniformMatrix4x3dv(location, count, transpose, value);
	};
	void APIENTRY GetUniformdv (GLuint program, GLint location, GLdouble * params) const noexcept
	{
		return glGetUniformdv(program, location, params);
	};
	GLint APIENTRY GetSubroutineUniformLocation (GLuint program, GLenum shadertype, const GLchar * name) const noexcept
	{
		return glGetSubroutineUniformLocation(program, shadertype, name);
	};
	GLuint APIENTRY GetSubroutineIndex (GLuint program, GLenum shadertype, const GLchar * name) const noexcept
	{
		return glGetSubroutineIndex(program, shadertype, name);
	};
	void APIENTRY GetActiveSubroutineUniformiv (GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint * values) const noexcept
	{
		return glGetActiveSubroutineUniformiv(program, shadertype, index, pname, values);
	};
	void APIENTRY GetActiveSubroutineUniformName (GLuint program, GLenum shadertype, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name) const noexcept
	{
		return glGetActiveSubroutineUniformName(program, shadertype, index, bufSize, length, name);
	};
	void APIENTRY GetActiveSubroutineName (GLuint program, GLenum shadertype, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name) const noexcept
	{
		return glGetActiveSubroutineName(program, shadertype, index, bufSize, length, name);
	};
	void APIENTRY UniformSubroutinesuiv (GLenum shadertype, GLsizei count, const GLuint * indices) const noexcept
	{
		return glUniformSubroutinesuiv(shadertype, count, indices);
	};
	void APIENTRY GetUniformSubroutineuiv (GLenum shadertype, GLint location, GLuint * params) const noexcept
	{
		return glGetUniformSubroutineuiv(shadertype, location, params);
	};
	void APIENTRY GetProgramStageiv (GLuint program, GLenum shadertype, GLenum pname, GLint * values) const noexcept
	{
		return glGetProgramStageiv(program, shadertype, pname, values);
	};
	void APIENTRY PatchParameteri (GLenum pname, GLint value) const noexcept
	{
		return glPatchParameteri(pname, value);
	};
	void APIENTRY PatchParameterfv (GLenum pname, const GLfloat * values) const noexcept
	{
		return glPatchParameterfv(pname, values);
	};
	void APIENTRY BindTransformFeedback (GLenum target, GLuint id) const noexcept
	{
		return glBindTransformFeedback(target, id);
	};
	void APIENTRY DeleteTransformFeedbacks (GLsizei n, const GLuint * ids) const noexcept
	{
		return glDeleteTransformFeedbacks(n, ids);
	};
	void APIENTRY GenTransformFeedbacks (GLsizei n, GLuint * ids) const noexcept
	{
		return glGenTransformFeedbacks(n, ids);
	};
	GLboolean APIENTRY IsTransformFeedback (GLuint id) const noexcept
	{
		return glIsTransformFeedback(id);
	};
	void APIENTRY PauseTransformFeedback ( ) const noexcept
	{
		return glPauseTransformFeedback();
	};
	void APIENTRY ResumeTransformFeedback ( ) const noexcept
	{
		return glResumeTransformFeedback();
	};
	void APIENTRY DrawTransformFeedback (GLenum mode, GLuint id) const noexcept
	{
		return glDrawTransformFeedback(mode, id);
	};
	void APIENTRY DrawTransformFeedbackStream (GLenum mode, GLuint id, GLuint stream) const noexcept
	{
		return glDrawTransformFeedbackStream(mode, id, stream);
	};
	void APIENTRY BeginQueryIndexed (GLenum target, GLuint index, GLuint id) const noexcept
	{
		return glBeginQueryIndexed(target, index, id);
	};
	void APIENTRY EndQueryIndexed (GLenum target, GLuint index) const noexcept
	{
		return glEndQueryIndexed(target, index);
	};
	void APIENTRY GetQueryIndexediv (GLenum target, GLuint index, GLenum pname, GLint * params) const noexcept
	{
		return glGetQueryIndexediv(target, index, pname, params);
	};
	void APIENTRY ReleaseShaderCompiler ( ) const noexcept
	{
		return glReleaseShaderCompiler();
	};
	void APIENTRY ShaderBinary (GLsizei count, const GLuint * shaders, GLenum binaryFormat, const void * binary, GLsizei length) const noexcept
	{
		return glShaderBinary(count, shaders, binaryFormat, binary, length);
	};
	void APIENTRY GetShaderPrecisionFormat (GLenum shadertype, GLenum precisiontype, GLint * range, GLint * precision) const noexcept
	{
		return glGetShaderPrecisionFormat(shadertype, precisiontype, range, precision);
	};
	void APIENTRY DepthRangef (GLfloat n, GLfloat f) const noexcept
	{
		return glDepthRangef(n, f);
	};
	void APIENTRY ClearDepthf (GLfloat d) const noexcept
	{
		return glClearDepthf(d);
	};
	void APIENTRY GetProgramBinary (GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary) const noexcept
	{
		return glGetProgramBinary(program, bufSize, length, binaryFormat, binary);
	};
	void APIENTRY ProgramBinary (GLuint program, GLenum binaryFormat, const void * binary, GLsizei length) const noexcept
	{
		return glProgramBinary(program, binaryFormat, binary, length);
	};
	void APIENTRY ProgramParameteri (GLuint program, GLenum pname, GLint value) const noexcept
	{
		return glProgramParameteri(program, pname, value);
	};
	void APIENTRY UseProgramStages (GLuint pipeline, GLbitfield stages, GLuint program) const noexcept
	{
		return glUseProgramStages(pipeline, stages, program);
	};
	void APIENTRY ActiveShaderProgram (GLuint pipeline, GLuint program) const noexcept
	{
		return glActiveShaderProgram(pipeline, program);
	};
	GLuint APIENTRY CreateShaderProgramv (GLenum type, GLsizei count, const GLchar * const * strings) const noexcept
	{
		return glCreateShaderProgramv(type, count, strings);
	};
	void APIENTRY BindProgramPipeline (GLuint pipeline) const noexcept
	{
		return glBindProgramPipeline(pipeline);
	};
	void APIENTRY DeleteProgramPipelines (GLsizei n, const GLuint * pipelines) const noexcept
	{
		return glDeleteProgramPipelines(n, pipelines);
	};
	void APIENTRY GenProgramPipelines (GLsizei n, GLuint * pipelines) const noexcept
	{
		return glGenProgramPipelines(n, pipelines);
	};
	GLboolean APIENTRY IsProgramPipeline (GLuint pipeline) const noexcept
	{
		return glIsProgramPipeline(pipeline);
	};
	void APIENTRY GetProgramPipelineiv (GLuint pipeline, GLenum pname, GLint * params) const noexcept
	{
		return glGetProgramPipelineiv(pipeline, pname, params);
	};
	void APIENTRY ProgramUniform1i (GLuint program, GLint location, GLint v0) const noexcept
	{
		return glProgramUniform1i(program, location, v0);
	};
	void APIENTRY ProgramUniform1iv (GLuint program, GLint location, GLsizei count, const GLint * value) const noexcept
	{
		return glProgramUniform1iv(program, location, count, value);
	};
	void APIENTRY ProgramUniform1f (GLuint program, GLint location, GLfloat v0) const noexcept
	{
		return glProgramUniform1f(program, location, v0);
	};
	void APIENTRY ProgramUniform1fv (GLuint program, GLint location, GLsizei count, const GLfloat * value) const noexcept
	{
		return glProgramUniform1fv(program, location, count, value);
	};
	void APIENTRY ProgramUniform1d (GLuint program, GLint location, GLdouble v0) const noexcept
	{
		return glProgramUniform1d(program, location, v0);
	};
	void APIENTRY ProgramUniform1dv (GLuint program, GLint location, GLsizei count, const GLdouble * value) const noexcept
	{
		return glProgramUniform1dv(program, location, count, value);
	};
	void APIENTRY ProgramUniform1ui (GLuint program, GLint location, GLuint v0) const noexcept
	{
		return glProgramUniform1ui(program, location, v0);
	};
	void APIENTRY ProgramUniform1uiv (GLuint program, GLint location, GLsizei count, const GLuint * value) const noexcept
	{
		return glProgramUniform1uiv(program, location, count, value);
	};
	void APIENTRY ProgramUniform2i (GLuint program, GLint location, GLint v0, GLint v1) const noexcept
	{
		return glProgramUniform2i(program, location, v0, v1);
	};
	void APIENTRY ProgramUniform2iv (GLuint program, GLint location, GLsizei count, const GLint * value) const noexcept
	{
		return glProgramUniform2iv(program, location, count, value);
	};
	void APIENTRY ProgramUniform2f (GLuint program, GLint location, GLfloat v0, GLfloat v1) const noexcept
	{
		return glProgramUniform2f(program, location, v0, v1);
	};
	void APIENTRY ProgramUniform2fv (GLuint program, GLint location, GLsizei count, const GLfloat * value) const noexcept
	{
		return glProgramUniform2fv(program, location, count, value);
	};
	void APIENTRY ProgramUniform2d (GLuint program, GLint location, GLdouble v0, GLdouble v1) const noexcept
	{
		return glProgramUniform2d(program, location, v0, v1);
	};
	void APIENTRY ProgramUniform2dv (GLuint program, GLint location, GLsizei count, const GLdouble * value) const noexcept
	{
		return glProgramUniform2dv(program, location, count, value);
	};
	void APIENTRY ProgramUniform2ui (GLuint program, GLint location, GLuint v0, GLuint v1) const noexcept
	{
		return glProgramUniform2ui(program, location, v0, v1);
	};
	void APIENTRY ProgramUniform2uiv (GLuint program, GLint location, GLsizei count, const GLuint * value) const noexcept
	{
		return glProgramUniform2uiv(program, location, count, value);
	};
	void APIENTRY ProgramUniform3i (GLuint program, GLint location, GLint v0, GLint v1, GLint v2) const noexcept
	{
		return glProgramUniform3i(program, location, v0, v1, v2);
	};
	void APIENTRY ProgramUniform3iv (GLuint program, GLint location, GLsizei count, const GLint * value) const noexcept
	{
		return glProgramUniform3iv(program, location, count, value);
	};
	void APIENTRY ProgramUniform3f (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2) const noexcept
	{
		return glProgramUniform3f(program, location, v0, v1, v2);
	};
	void APIENTRY ProgramUniform3fv (GLuint program, GLint location, GLsizei count, const GLfloat * value) const noexcept
	{
		return glProgramUniform3fv(program, location, count, value);
	};
	void APIENTRY ProgramUniform3d (GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2) const noexcept
	{
		return glProgramUniform3d(program, location, v0, v1, v2);
	};
	void APIENTRY ProgramUniform3dv (GLuint program, GLint location, GLsizei count, const GLdouble * value) const noexcept
	{
		return glProgramUniform3dv(program, location, count, value);
	};
	void APIENTRY ProgramUniform3ui (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2) const noexcept
	{
		return glProgramUniform3ui(program, location, v0, v1, v2);
	};
	void APIENTRY ProgramUniform3uiv (GLuint program, GLint location, GLsizei count, const GLuint * value) const noexcept
	{
		return glProgramUniform3uiv(program, location, count, value);
	};
	void APIENTRY ProgramUniform4i (GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3) const noexcept
	{
		return glProgramUniform4i(program, location, v0, v1, v2, v3);
	};
	void APIENTRY ProgramUniform4iv (GLuint program, GLint location, GLsizei count, const GLint * value) const noexcept
	{
		return glProgramUniform4iv(program, location, count, value);
	};
	void APIENTRY ProgramUniform4f (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) const noexcept
	{
		return glProgramUniform4f(program, location, v0, v1, v2, v3);
	};
	void APIENTRY ProgramUniform4fv (GLuint program, GLint location, GLsizei count, const GLfloat * value) const noexcept
	{
		return glProgramUniform4fv(program, location, count, value);
	};
	void APIENTRY ProgramUniform4d (GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3) const noexcept
	{
		return glProgramUniform4d(program, location, v0, v1, v2, v3);
	};
	void APIENTRY ProgramUniform4dv (GLuint program, GLint location, GLsizei count, const GLdouble * value) const noexcept
	{
		return glProgramUniform4dv(program, location, count, value);
	};
	void APIENTRY ProgramUniform4ui (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) const noexcept
	{
		return glProgramUniform4ui(program, location, v0, v1, v2, v3);
	};
	void APIENTRY ProgramUniform4uiv (GLuint program, GLint location, GLsizei count, const GLuint * value) const noexcept
	{
		return glProgramUniform4uiv(program, location, count, value);
	};
	void APIENTRY ProgramUniformMatrix2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) const noexcept
	{
		return glProgramUniformMatrix2fv(program, location, count, transpose, value);
	};
	void APIENTRY ProgramUniformMatrix3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) const noexcept
	{
		return glProgramUniformMatrix3fv(program, location, count, transpose, value);
	};
	void APIENTRY ProgramUniformMatrix4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) const noexcept
	{
		return glProgramUniformMatrix4fv(program, location, count, transpose, value);
	};
	void APIENTRY ProgramUniformMatrix2dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) const noexcept
	{
		return glProgramUniformMatrix2dv(program, location, count, transpose, value);
	};
	void APIENTRY ProgramUniformMatrix3dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) const noexcept
	{
		return glProgramUniformMatrix3dv(program, location, count, transpose, value);
	};
	void APIENTRY ProgramUniformMatrix4dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) const noexcept
	{
		return glProgramUniformMatrix4dv(program, location, count, transpose, value);
	};
	void APIENTRY ProgramUniformMatrix2x3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) const noexcept
	{
		return glProgramUniformMatrix2x3fv(program, location, count, transpose, value);
	};
	void APIENTRY ProgramUniformMatrix3x2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) const noexcept
	{
		return glProgramUniformMatrix3x2fv(program, location, count, transpose, value);
	};
	void APIENTRY ProgramUniformMatrix2x4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) const noexcept
	{
		return glProgramUniformMatrix2x4fv(program, location, count, transpose, value);
	};
	void APIENTRY ProgramUniformMatrix4x2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) const noexcept
	{
		return glProgramUniformMatrix4x2fv(program, location, count, transpose, value);
	};
	void APIENTRY ProgramUniformMatrix3x4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) const noexcept
	{
		return glProgramUniformMatrix3x4fv(program, location, count, transpose, value);
	};
	void APIENTRY ProgramUniformMatrix4x3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) const noexcept
	{
		return glProgramUniformMatrix4x3fv(program, location, count, transpose, value);
	};
	void APIENTRY ProgramUniformMatrix2x3dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) const noexcept
	{
		return glProgramUniformMatrix2x3dv(program, location, count, transpose, value);
	};
	void APIENTRY ProgramUniformMatrix3x2dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) const noexcept
	{
		return glProgramUniformMatrix3x2dv(program, location, count, transpose, value);
	};
	void APIENTRY ProgramUniformMatrix2x4dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) const noexcept
	{
		return glProgramUniformMatrix2x4dv(program, location, count, transpose, value);
	};
	void APIENTRY ProgramUniformMatrix4x2dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) const noexcept
	{
		return glProgramUniformMatrix4x2dv(program, location, count, transpose, value);
	};
	void APIENTRY ProgramUniformMatrix3x4dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) const noexcept
	{
		return glProgramUniformMatrix3x4dv(program, location, count, transpose, value);
	};
	void APIENTRY ProgramUniformMatrix4x3dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) const noexcept
	{
		return glProgramUniformMatrix4x3dv(program, location, count, transpose, value);
	};
	void APIENTRY ValidateProgramPipeline (GLuint pipeline) const noexcept
	{
		return glValidateProgramPipeline(pipeline);
	};
	void APIENTRY GetProgramPipelineInfoLog (GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog) const noexcept
	{
		return glGetProgramPipelineInfoLog(pipeline, bufSize, length, infoLog);
	};
	void APIENTRY VertexAttribL1d (GLuint index, GLdouble x) const noexcept
	{
		return glVertexAttribL1d(index, x);
	};
	void APIENTRY VertexAttribL2d (GLuint index, GLdouble x, GLdouble y) const noexcept
	{
		return glVertexAttribL2d(index, x, y);
	};
	void APIENTRY VertexAttribL3d (GLuint index, GLdouble x, GLdouble y, GLdouble z) const noexcept
	{
		return glVertexAttribL3d(index, x, y, z);
	};
	void APIENTRY VertexAttribL4d (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) const noexcept
	{
		return glVertexAttribL4d(index, x, y, z, w);
	};
	void APIENTRY VertexAttribL1dv (GLuint index, const GLdouble * v) const noexcept
	{
		return glVertexAttribL1dv(index, v);
	};
	void APIENTRY VertexAttribL2dv (GLuint index, const GLdouble * v) const noexcept
	{
		return glVertexAttribL2dv(index, v);
	};
	void APIENTRY VertexAttribL3dv (GLuint index, const GLdouble * v) const noexcept
	{
		return glVertexAttribL3dv(index, v);
	};
	void APIENTRY VertexAttribL4dv (GLuint index, const GLdouble * v) const noexcept
	{
		return glVertexAttribL4dv(index, v);
	};
	void APIENTRY VertexAttribLPointer (GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer) const noexcept
	{
		return glVertexAttribLPointer(index, size, type, stride, pointer);
	};
	void APIENTRY GetVertexAttribLdv (GLuint index, GLenum pname, GLdouble * params) const noexcept
	{
		return glGetVertexAttribLdv(index, pname, params);
	};
	void APIENTRY ViewportArrayv (GLuint first, GLsizei count, const GLfloat * v) const noexcept
	{
		return glViewportArrayv(first, count, v);
	};
	void APIENTRY ViewportIndexedf (GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h) const noexcept
	{
		return glViewportIndexedf(index, x, y, w, h);
	};
	void APIENTRY ViewportIndexedfv (GLuint index, const GLfloat * v) const noexcept
	{
		return glViewportIndexedfv(index, v);
	};
	void APIENTRY ScissorArrayv (GLuint first, GLsizei count, const GLint * v) const noexcept
	{
		return glScissorArrayv(first, count, v);
	};
	void APIENTRY ScissorIndexed (GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height) const noexcept
	{
		return glScissorIndexed(index, left, bottom, width, height);
	};
	void APIENTRY ScissorIndexedv (GLuint index, const GLint * v) const noexcept
	{
		return glScissorIndexedv(index, v);
	};
	void APIENTRY DepthRangeArrayv (GLuint first, GLsizei count, const GLdouble * v) const noexcept
	{
		return glDepthRangeArrayv(first, count, v);
	};
	void APIENTRY DepthRangeIndexed (GLuint index, GLdouble n, GLdouble f) const noexcept
	{
		return glDepthRangeIndexed(index, n, f);
	};
	void APIENTRY GetFloati_v (GLenum target, GLuint index, GLfloat * data) const noexcept
	{
		return glGetFloati_v(target, index, data);
	};
	void APIENTRY GetDoublei_v (GLenum target, GLuint index, GLdouble * data) const noexcept
	{
		return glGetDoublei_v(target, index, data);
	};
	void APIENTRY DrawArraysInstancedBaseInstance (GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance) const noexcept
	{
		return glDrawArraysInstancedBaseInstance(mode, first, count, instancecount, baseinstance);
	};
	void APIENTRY DrawElementsInstancedBaseInstance (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLuint baseinstance) const noexcept
	{
		return glDrawElementsInstancedBaseInstance(mode, count, type, indices, instancecount, baseinstance);
	};
	void APIENTRY DrawElementsInstancedBaseVertexBaseInstance (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance) const noexcept
	{
		return glDrawElementsInstancedBaseVertexBaseInstance(mode, count, type, indices, instancecount, basevertex, baseinstance);
	};
	void APIENTRY GetInternalformativ (GLenum target, GLenum internalformat, GLenum pname, GLsizei count, GLint * params) const noexcept
	{
		return glGetInternalformativ(target, internalformat, pname, count, params);
	};
	void APIENTRY GetActiveAtomicCounterBufferiv (GLuint program, GLuint bufferIndex, GLenum pname, GLint * params) const noexcept
	{
		return glGetActiveAtomicCounterBufferiv(program, bufferIndex, pname, params);
	};
	void APIENTRY BindImageTexture (GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format) const noexcept
	{
		return glBindImageTexture(unit, texture, level, layered, layer, access, format);
	};
	void APIENTRY MemoryBarrier (GLbitfield barriers) const noexcept
	{
		return glMemoryBarrier(barriers);
	};
	void APIENTRY TexStorage1D (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width) const noexcept
	{
		return glTexStorage1D(target, levels, internalformat, width);
	};
	void APIENTRY TexStorage2D (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height) const noexcept
	{
		return glTexStorage2D(target, levels, internalformat, width, height);
	};
	void APIENTRY TexStorage3D (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth) const noexcept
	{
		return glTexStorage3D(target, levels, internalformat, width, height, depth);
	};
	void APIENTRY DrawTransformFeedbackInstanced (GLenum mode, GLuint id, GLsizei instancecount) const noexcept
	{
		return glDrawTransformFeedbackInstanced(mode, id, instancecount);
	};
	void APIENTRY DrawTransformFeedbackStreamInstanced (GLenum mode, GLuint id, GLuint stream, GLsizei instancecount) const noexcept
	{
		return glDrawTransformFeedbackStreamInstanced(mode, id, stream, instancecount);
	};
	void APIENTRY ClearBufferData (GLenum target, GLenum internalformat, GLenum format, GLenum type, const void * data) const noexcept
	{
		return glClearBufferData(target, internalformat, format, type, data);
	};
	void APIENTRY ClearBufferSubData (GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data) const noexcept
	{
		return glClearBufferSubData(target, internalformat, offset, size, format, type, data);
	};
	void APIENTRY DispatchCompute (GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z) const noexcept
	{
		return glDispatchCompute(num_groups_x, num_groups_y, num_groups_z);
	};
	void APIENTRY DispatchComputeIndirect (GLintptr indirect) const noexcept
	{
		return glDispatchComputeIndirect(indirect);
	};
	void APIENTRY CopyImageSubData (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth) const noexcept
	{
		return glCopyImageSubData(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
	};
	void APIENTRY FramebufferParameteri (GLenum target, GLenum pname, GLint param) const noexcept
	{
		return glFramebufferParameteri(target, pname, param);
	};
	void APIENTRY GetFramebufferParameteriv (GLenum target, GLenum pname, GLint * params) const noexcept
	{
		return glGetFramebufferParameteriv(target, pname, params);
	};
	void APIENTRY GetInternalformati64v (GLenum target, GLenum internalformat, GLenum pname, GLsizei count, GLint64 * params) const noexcept
	{
		return glGetInternalformati64v(target, internalformat, pname, count, params);
	};
	void APIENTRY InvalidateTexSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth) const noexcept
	{
		return glInvalidateTexSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth);
	};
	void APIENTRY InvalidateTexImage (GLuint texture, GLint level) const noexcept
	{
		return glInvalidateTexImage(texture, level);
	};
	void APIENTRY InvalidateBufferSubData (GLuint buffer, GLintptr offset, GLsizeiptr length) const noexcept
	{
		return glInvalidateBufferSubData(buffer, offset, length);
	};
	void APIENTRY InvalidateBufferData (GLuint buffer) const noexcept
	{
		return glInvalidateBufferData(buffer);
	};
	void APIENTRY InvalidateFramebuffer (GLenum target, GLsizei numAttachments, const GLenum * attachments) const noexcept
	{
		return glInvalidateFramebuffer(target, numAttachments, attachments);
	};
	void APIENTRY InvalidateSubFramebuffer (GLenum target, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height) const noexcept
	{
		return glInvalidateSubFramebuffer(target, numAttachments, attachments, x, y, width, height);
	};
	void APIENTRY MultiDrawArraysIndirect (GLenum mode, const void * indirect, GLsizei drawcount, GLsizei stride) const noexcept
	{
		return glMultiDrawArraysIndirect(mode, indirect, drawcount, stride);
	};
	void APIENTRY MultiDrawElementsIndirect (GLenum mode, GLenum type, const void * indirect, GLsizei drawcount, GLsizei stride) const noexcept
	{
		return glMultiDrawElementsIndirect(mode, type, indirect, drawcount, stride);
	};
	void APIENTRY GetProgramInterfaceiv (GLuint program, GLenum programInterface, GLenum pname, GLint * params) const noexcept
	{
		return glGetProgramInterfaceiv(program, programInterface, pname, params);
	};
	GLuint APIENTRY GetProgramResourceIndex (GLuint program, GLenum programInterface, const GLchar * name) const noexcept
	{
		return glGetProgramResourceIndex(program, programInterface, name);
	};
	void APIENTRY GetProgramResourceName (GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name) const noexcept
	{
		return glGetProgramResourceName(program, programInterface, index, bufSize, length, name);
	};
	void APIENTRY GetProgramResourceiv (GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei count, GLsizei * length, GLint * params) const noexcept
	{
		return glGetProgramResourceiv(program, programInterface, index, propCount, props, count, length, params);
	};
	GLint APIENTRY GetProgramResourceLocation (GLuint program, GLenum programInterface, const GLchar * name) const noexcept
	{
		return glGetProgramResourceLocation(program, programInterface, name);
	};
	GLint APIENTRY GetProgramResourceLocationIndex (GLuint program, GLenum programInterface, const GLchar * name) const noexcept
	{
		return glGetProgramResourceLocationIndex(program, programInterface, name);
	};
	void APIENTRY ShaderStorageBlockBinding (GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding) const noexcept
	{
		return glShaderStorageBlockBinding(program, storageBlockIndex, storageBlockBinding);
	};
	void APIENTRY TexBufferRange (GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size) const noexcept
	{
		return glTexBufferRange(target, internalformat, buffer, offset, size);
	};
	void APIENTRY TexStorage2DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) const noexcept
	{
		return glTexStorage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
	};
	void APIENTRY TexStorage3DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations) const noexcept
	{
		return glTexStorage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations);
	};
	void APIENTRY TextureView (GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers) const noexcept
	{
		return glTextureView(texture, target, origtexture, internalformat, minlevel, numlevels, minlayer, numlayers);
	};
	void APIENTRY BindVertexBuffer (GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride) const noexcept
	{
		return glBindVertexBuffer(bindingindex, buffer, offset, stride);
	};
	void APIENTRY VertexAttribFormat (GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset) const noexcept
	{
		return glVertexAttribFormat(attribindex, size, type, normalized, relativeoffset);
	};
	void APIENTRY VertexAttribIFormat (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) const noexcept
	{
		return glVertexAttribIFormat(attribindex, size, type, relativeoffset);
	};
	void APIENTRY VertexAttribLFormat (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) const noexcept
	{
		return glVertexAttribLFormat(attribindex, size, type, relativeoffset);
	};
	void APIENTRY VertexAttribBinding (GLuint attribindex, GLuint bindingindex) const noexcept
	{
		return glVertexAttribBinding(attribindex, bindingindex);
	};
	void APIENTRY VertexBindingDivisor (GLuint bindingindex, GLuint divisor) const noexcept
	{
		return glVertexBindingDivisor(bindingindex, divisor);
	};
	void APIENTRY DebugMessageControl (GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled) const noexcept
	{
		return glDebugMessageControl(source, type, severity, count, ids, enabled);
	};
	void APIENTRY DebugMessageInsert (GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf) const noexcept
	{
		return glDebugMessageInsert(source, type, id, severity, length, buf);
	};
	void APIENTRY DebugMessageCallback (GLDEBUGPROC callback, const void * userParam) const noexcept
	{
		return glDebugMessageCallback(callback, userParam);
	};
	GLuint APIENTRY GetDebugMessageLog (GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog) const noexcept
	{
		return glGetDebugMessageLog(count, bufSize, sources, types, ids, severities, lengths, messageLog);
	};
	void APIENTRY PushDebugGroup (GLenum source, GLuint id, GLsizei length, const GLchar * message) const noexcept
	{
		return glPushDebugGroup(source, id, length, message);
	};
	void APIENTRY PopDebugGroup ( ) const noexcept
	{
		return glPopDebugGroup();
	};
	void APIENTRY ObjectLabel (GLenum identifier, GLuint name, GLsizei length, const GLchar * label) const noexcept
	{
		return glObjectLabel(identifier, name, length, label);
	};
	void APIENTRY GetObjectLabel (GLenum identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label) const noexcept
	{
		return glGetObjectLabel(identifier, name, bufSize, length, label);
	};
	void APIENTRY ObjectPtrLabel (const void * ptr, GLsizei length, const GLchar * label) const noexcept
	{
		return glObjectPtrLabel(ptr, length, label);
	};
	void APIENTRY GetObjectPtrLabel (const void * ptr, GLsizei bufSize, GLsizei * length, GLchar * label) const noexcept
	{
		return glGetObjectPtrLabel(ptr, bufSize, length, label);
	};
	void APIENTRY BufferStorage (GLenum target, GLsizeiptr size, const void * data, GLbitfield flags) const noexcept
	{
		return glBufferStorage(target, size, data, flags);
	};
	void APIENTRY ClearTexImage (GLuint texture, GLint level, GLenum format, GLenum type, const void * data) const noexcept
	{
		return glClearTexImage(texture, level, format, type, data);
	};
	void APIENTRY ClearTexSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * data) const noexcept
	{
		return glClearTexSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, data);
	};
	void APIENTRY BindBuffersBase (GLenum target, GLuint first, GLsizei count, const GLuint * buffers) const noexcept
	{
		return glBindBuffersBase(target, first, count, buffers);
	};
	void APIENTRY BindBuffersRange (GLenum target, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizeiptr * sizes) const noexcept
	{
		return glBindBuffersRange(target, first, count, buffers, offsets, sizes);
	};
	void APIENTRY BindTextures (GLuint first, GLsizei count, const GLuint * textures) const noexcept
	{
		return glBindTextures(first, count, textures);
	};
	void APIENTRY BindSamplers (GLuint first, GLsizei count, const GLuint * samplers) const noexcept
	{
		return glBindSamplers(first, count, samplers);
	};
	void APIENTRY BindImageTextures (GLuint first, GLsizei count, const GLuint * textures) const noexcept
	{
		return glBindImageTextures(first, count, textures);
	};
	void APIENTRY BindVertexBuffers (GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides) const noexcept
	{
		return glBindVertexBuffers(first, count, buffers, offsets, strides);
	};
	void APIENTRY ClipControl (GLenum origin, GLenum depth) const noexcept
	{
		return glClipControl(origin, depth);
	};
	void APIENTRY CreateTransformFeedbacks (GLsizei n, GLuint * ids) const noexcept
	{
		return glCreateTransformFeedbacks(n, ids);
	};
	void APIENTRY TransformFeedbackBufferBase (GLuint xfb, GLuint index, GLuint buffer) const noexcept
	{
		return glTransformFeedbackBufferBase(xfb, index, buffer);
	};
	void APIENTRY TransformFeedbackBufferRange (GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size) const noexcept
	{
		return glTransformFeedbackBufferRange(xfb, index, buffer, offset, size);
	};
	void APIENTRY GetTransformFeedbackiv (GLuint xfb, GLenum pname, GLint * param) const noexcept
	{
		return glGetTransformFeedbackiv(xfb, pname, param);
	};
	void APIENTRY GetTransformFeedbacki_v (GLuint xfb, GLenum pname, GLuint index, GLint * param) const noexcept
	{
		return glGetTransformFeedbacki_v(xfb, pname, index, param);
	};
	void APIENTRY GetTransformFeedbacki64_v (GLuint xfb, GLenum pname, GLuint index, GLint64 * param) const noexcept
	{
		return glGetTransformFeedbacki64_v(xfb, pname, index, param);
	};
	void APIENTRY CreateBuffers (GLsizei n, GLuint * buffers) const noexcept
	{
		return glCreateBuffers(n, buffers);
	};
	void APIENTRY NamedBufferStorage (GLuint buffer, GLsizeiptr size, const void * data, GLbitfield flags) const noexcept
	{
		return glNamedBufferStorage(buffer, size, data, flags);
	};
	void APIENTRY NamedBufferData (GLuint buffer, GLsizeiptr size, const void * data, GLenum usage) const noexcept
	{
		return glNamedBufferData(buffer, size, data, usage);
	};
	void APIENTRY NamedBufferSubData (GLuint buffer, GLintptr offset, GLsizeiptr size, const void * data) const noexcept
	{
		return glNamedBufferSubData(buffer, offset, size, data);
	};
	void APIENTRY CopyNamedBufferSubData (GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size) const noexcept
	{
		return glCopyNamedBufferSubData(readBuffer, writeBuffer, readOffset, writeOffset, size);
	};
	void APIENTRY ClearNamedBufferData (GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void * data) const noexcept
	{
		return glClearNamedBufferData(buffer, internalformat, format, type, data);
	};
	void APIENTRY ClearNamedBufferSubData (GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data) const noexcept
	{
		return glClearNamedBufferSubData(buffer, internalformat, offset, size, format, type, data);
	};
	void * APIENTRY MapNamedBuffer (GLuint buffer, GLenum access) const noexcept
	{
		return glMapNamedBuffer(buffer, access);
	};
	void * APIENTRY MapNamedBufferRange (GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access) const noexcept
	{
		return glMapNamedBufferRange(buffer, offset, length, access);
	};
	GLboolean APIENTRY UnmapNamedBuffer (GLuint buffer) const noexcept
	{
		return glUnmapNamedBuffer(buffer);
	};
	void APIENTRY FlushMappedNamedBufferRange (GLuint buffer, GLintptr offset, GLsizeiptr length) const noexcept
	{
		return glFlushMappedNamedBufferRange(buffer, offset, length);
	};
	void APIENTRY GetNamedBufferParameteriv (GLuint buffer, GLenum pname, GLint * params) const noexcept
	{
		return glGetNamedBufferParameteriv(buffer, pname, params);
	};
	void APIENTRY GetNamedBufferParameteri64v (GLuint buffer, GLenum pname, GLint64 * params) const noexcept
	{
		return glGetNamedBufferParameteri64v(buffer, pname, params);
	};
	void APIENTRY GetNamedBufferPointerv (GLuint buffer, GLenum pname, void * * params) const noexcept
	{
		return glGetNamedBufferPointerv(buffer, pname, params);
	};
	void APIENTRY GetNamedBufferSubData (GLuint buffer, GLintptr offset, GLsizeiptr size, void * data) const noexcept
	{
		return glGetNamedBufferSubData(buffer, offset, size, data);
	};
	void APIENTRY CreateFramebuffers (GLsizei n, GLuint * framebuffers) const noexcept
	{
		return glCreateFramebuffers(n, framebuffers);
	};
	void APIENTRY NamedFramebufferRenderbuffer (GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) const noexcept
	{
		return glNamedFramebufferRenderbuffer(framebuffer, attachment, renderbuffertarget, renderbuffer);
	};
	void APIENTRY NamedFramebufferParameteri (GLuint framebuffer, GLenum pname, GLint param) const noexcept
	{
		return glNamedFramebufferParameteri(framebuffer, pname, param);
	};
	void APIENTRY NamedFramebufferTexture (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level) const noexcept
	{
		return glNamedFramebufferTexture(framebuffer, attachment, texture, level);
	};
	void APIENTRY NamedFramebufferTextureLayer (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer) const noexcept
	{
		return glNamedFramebufferTextureLayer(framebuffer, attachment, texture, level, layer);
	};
	void APIENTRY NamedFramebufferDrawBuffer (GLuint framebuffer, GLenum buf) const noexcept
	{
		return glNamedFramebufferDrawBuffer(framebuffer, buf);
	};
	void APIENTRY NamedFramebufferDrawBuffers (GLuint framebuffer, GLsizei n, const GLenum * bufs) const noexcept
	{
		return glNamedFramebufferDrawBuffers(framebuffer, n, bufs);
	};
	void APIENTRY NamedFramebufferReadBuffer (GLuint framebuffer, GLenum src) const noexcept
	{
		return glNamedFramebufferReadBuffer(framebuffer, src);
	};
	void APIENTRY InvalidateNamedFramebufferData (GLuint framebuffer, GLsizei numAttachments, const GLenum * attachments) const noexcept
	{
		return glInvalidateNamedFramebufferData(framebuffer, numAttachments, attachments);
	};
	void APIENTRY InvalidateNamedFramebufferSubData (GLuint framebuffer, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height) const noexcept
	{
		return glInvalidateNamedFramebufferSubData(framebuffer, numAttachments, attachments, x, y, width, height);
	};
	void APIENTRY ClearNamedFramebufferiv (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLint * value) const noexcept
	{
		return glClearNamedFramebufferiv(framebuffer, buffer, drawbuffer, value);
	};
	void APIENTRY ClearNamedFramebufferuiv (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLuint * value) const noexcept
	{
		return glClearNamedFramebufferuiv(framebuffer, buffer, drawbuffer, value);
	};
	void APIENTRY ClearNamedFramebufferfv (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLfloat * value) const noexcept
	{
		return glClearNamedFramebufferfv(framebuffer, buffer, drawbuffer, value);
	};
	void APIENTRY ClearNamedFramebufferfi (GLuint framebuffer, GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil) const noexcept
	{
		return glClearNamedFramebufferfi(framebuffer, buffer, drawbuffer, depth, stencil);
	};
	void APIENTRY BlitNamedFramebuffer (GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter) const noexcept
	{
		return glBlitNamedFramebuffer(readFramebuffer, drawFramebuffer, srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
	};
	GLenum APIENTRY CheckNamedFramebufferStatus (GLuint framebuffer, GLenum target) const noexcept
	{
		return glCheckNamedFramebufferStatus(framebuffer, target);
	};
	void APIENTRY GetNamedFramebufferParameteriv (GLuint framebuffer, GLenum pname, GLint * param) const noexcept
	{
		return glGetNamedFramebufferParameteriv(framebuffer, pname, param);
	};
	void APIENTRY GetNamedFramebufferAttachmentParameteriv (GLuint framebuffer, GLenum attachment, GLenum pname, GLint * params) const noexcept
	{
		return glGetNamedFramebufferAttachmentParameteriv(framebuffer, attachment, pname, params);
	};
	void APIENTRY CreateRenderbuffers (GLsizei n, GLuint * renderbuffers) const noexcept
	{
		return glCreateRenderbuffers(n, renderbuffers);
	};
	void APIENTRY NamedRenderbufferStorage (GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height) const noexcept
	{
		return glNamedRenderbufferStorage(renderbuffer, internalformat, width, height);
	};
	void APIENTRY NamedRenderbufferStorageMultisample (GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) const noexcept
	{
		return glNamedRenderbufferStorageMultisample(renderbuffer, samples, internalformat, width, height);
	};
	void APIENTRY GetNamedRenderbufferParameteriv (GLuint renderbuffer, GLenum pname, GLint * params) const noexcept
	{
		return glGetNamedRenderbufferParameteriv(renderbuffer, pname, params);
	};
	void APIENTRY CreateTextures (GLenum target, GLsizei n, GLuint * textures) const noexcept
	{
		return glCreateTextures(target, n, textures);
	};
	void APIENTRY TextureBuffer (GLuint texture, GLenum internalformat, GLuint buffer) const noexcept
	{
		return glTextureBuffer(texture, internalformat, buffer);
	};
	void APIENTRY TextureBufferRange (GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size) const noexcept
	{
		return glTextureBufferRange(texture, internalformat, buffer, offset, size);
	};
	void APIENTRY TextureStorage1D (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width) const noexcept
	{
		return glTextureStorage1D(texture, levels, internalformat, width);
	};
	void APIENTRY TextureStorage2D (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height) const noexcept
	{
		return glTextureStorage2D(texture, levels, internalformat, width, height);
	};
	void APIENTRY TextureStorage3D (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth) const noexcept
	{
		return glTextureStorage3D(texture, levels, internalformat, width, height, depth);
	};
	void APIENTRY TextureStorage2DMultisample (GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) const noexcept
	{
		return glTextureStorage2DMultisample(texture, samples, internalformat, width, height, fixedsamplelocations);
	};
	void APIENTRY TextureStorage3DMultisample (GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations) const noexcept
	{
		return glTextureStorage3DMultisample(texture, samples, internalformat, width, height, depth, fixedsamplelocations);
	};
	void APIENTRY TextureSubImage1D (GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels) const noexcept
	{
		return glTextureSubImage1D(texture, level, xoffset, width, format, type, pixels);
	};
	void APIENTRY TextureSubImage2D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels) const noexcept
	{
		return glTextureSubImage2D(texture, level, xoffset, yoffset, width, height, format, type, pixels);
	};
	void APIENTRY TextureSubImage3D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels) const noexcept
	{
		return glTextureSubImage3D(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
	};
	void APIENTRY CompressedTextureSubImage1D (GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data) const noexcept
	{
		return glCompressedTextureSubImage1D(texture, level, xoffset, width, format, imageSize, data);
	};
	void APIENTRY CompressedTextureSubImage2D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data) const noexcept
	{
		return glCompressedTextureSubImage2D(texture, level, xoffset, yoffset, width, height, format, imageSize, data);
	};
	void APIENTRY CompressedTextureSubImage3D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data) const noexcept
	{
		return glCompressedTextureSubImage3D(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
	};
	void APIENTRY CopyTextureSubImage1D (GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width) const noexcept
	{
		return glCopyTextureSubImage1D(texture, level, xoffset, x, y, width);
	};
	void APIENTRY CopyTextureSubImage2D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) const noexcept
	{
		return glCopyTextureSubImage2D(texture, level, xoffset, yoffset, x, y, width, height);
	};
	void APIENTRY CopyTextureSubImage3D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) const noexcept
	{
		return glCopyTextureSubImage3D(texture, level, xoffset, yoffset, zoffset, x, y, width, height);
	};
	void APIENTRY TextureParameterf (GLuint texture, GLenum pname, GLfloat param) const noexcept
	{
		return glTextureParameterf(texture, pname, param);
	};
	void APIENTRY TextureParameterfv (GLuint texture, GLenum pname, const GLfloat * param) const noexcept
	{
		return glTextureParameterfv(texture, pname, param);
	};
	void APIENTRY TextureParameteri (GLuint texture, GLenum pname, GLint param) const noexcept
	{
		return glTextureParameteri(texture, pname, param);
	};
	void APIENTRY TextureParameterIiv (GLuint texture, GLenum pname, const GLint * params) const noexcept
	{
		return glTextureParameterIiv(texture, pname, params);
	};
	void APIENTRY TextureParameterIuiv (GLuint texture, GLenum pname, const GLuint * params) const noexcept
	{
		return glTextureParameterIuiv(texture, pname, params);
	};
	void APIENTRY TextureParameteriv (GLuint texture, GLenum pname, const GLint * param) const noexcept
	{
		return glTextureParameteriv(texture, pname, param);
	};
	void APIENTRY GenerateTextureMipmap (GLuint texture) const noexcept
	{
		return glGenerateTextureMipmap(texture);
	};
	void APIENTRY BindTextureUnit (GLuint unit, GLuint texture) const noexcept
	{
		return glBindTextureUnit(unit, texture);
	};
	void APIENTRY GetTextureImage (GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * pixels) const noexcept
	{
		return glGetTextureImage(texture, level, format, type, bufSize, pixels);
	};
	void APIENTRY GetCompressedTextureImage (GLuint texture, GLint level, GLsizei bufSize, void * pixels) const noexcept
	{
		return glGetCompressedTextureImage(texture, level, bufSize, pixels);
	};
	void APIENTRY GetTextureLevelParameterfv (GLuint texture, GLint level, GLenum pname, GLfloat * params) const noexcept
	{
		return glGetTextureLevelParameterfv(texture, level, pname, params);
	};
	void APIENTRY GetTextureLevelParameteriv (GLuint texture, GLint level, GLenum pname, GLint * params) const noexcept
	{
		return glGetTextureLevelParameteriv(texture, level, pname, params);
	};
	void APIENTRY GetTextureParameterfv (GLuint texture, GLenum pname, GLfloat * params) const noexcept
	{
		return glGetTextureParameterfv(texture, pname, params);
	};
	void APIENTRY GetTextureParameterIiv (GLuint texture, GLenum pname, GLint * params) const noexcept
	{
		return glGetTextureParameterIiv(texture, pname, params);
	};
	void APIENTRY GetTextureParameterIuiv (GLuint texture, GLenum pname, GLuint * params) const noexcept
	{
		return glGetTextureParameterIuiv(texture, pname, params);
	};
	void APIENTRY GetTextureParameteriv (GLuint texture, GLenum pname, GLint * params) const noexcept
	{
		return glGetTextureParameteriv(texture, pname, params);
	};
	void APIENTRY CreateVertexArrays (GLsizei n, GLuint * arrays) const noexcept
	{
		return glCreateVertexArrays(n, arrays);
	};
	void APIENTRY DisableVertexArrayAttrib (GLuint vaobj, GLuint index) const noexcept
	{
		return glDisableVertexArrayAttrib(vaobj, index);
	};
	void APIENTRY EnableVertexArrayAttrib (GLuint vaobj, GLuint index) const noexcept
	{
		return glEnableVertexArrayAttrib(vaobj, index);
	};
	void APIENTRY VertexArrayElementBuffer (GLuint vaobj, GLuint buffer) const noexcept
	{
		return glVertexArrayElementBuffer(vaobj, buffer);
	};
	void APIENTRY VertexArrayVertexBuffer (GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride) const noexcept
	{
		return glVertexArrayVertexBuffer(vaobj, bindingindex, buffer, offset, stride);
	};
	void APIENTRY VertexArrayVertexBuffers (GLuint vaobj, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides) const noexcept
	{
		return glVertexArrayVertexBuffers(vaobj, first, count, buffers, offsets, strides);
	};
	void APIENTRY VertexArrayAttribBinding (GLuint vaobj, GLuint attribindex, GLuint bindingindex) const noexcept
	{
		return glVertexArrayAttribBinding(vaobj, attribindex, bindingindex);
	};
	void APIENTRY VertexArrayAttribFormat (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset) const noexcept
	{
		return glVertexArrayAttribFormat(vaobj, attribindex, size, type, normalized, relativeoffset);
	};
	void APIENTRY VertexArrayAttribIFormat (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) const noexcept
	{
		return glVertexArrayAttribIFormat(vaobj, attribindex, size, type, relativeoffset);
	};
	void APIENTRY VertexArrayAttribLFormat (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) const noexcept
	{
		return glVertexArrayAttribLFormat(vaobj, attribindex, size, type, relativeoffset);
	};
	void APIENTRY VertexArrayBindingDivisor (GLuint vaobj, GLuint bindingindex, GLuint divisor) const noexcept
	{
		return glVertexArrayBindingDivisor(vaobj, bindingindex, divisor);
	};
	void APIENTRY GetVertexArrayiv (GLuint vaobj, GLenum pname, GLint * param) const noexcept
	{
		return glGetVertexArrayiv(vaobj, pname, param);
	};
	void APIENTRY GetVertexArrayIndexediv (GLuint vaobj, GLuint index, GLenum pname, GLint * param) const noexcept
	{
		return glGetVertexArrayIndexediv(vaobj, index, pname, param);
	};
	void APIENTRY GetVertexArrayIndexed64iv (GLuint vaobj, GLuint index, GLenum pname, GLint64 * param) const noexcept
	{
		return glGetVertexArrayIndexed64iv(vaobj, index, pname, param);
	};
	void APIENTRY CreateSamplers (GLsizei n, GLuint * samplers) const noexcept
	{
		return glCreateSamplers(n, samplers);
	};
	void APIENTRY CreateProgramPipelines (GLsizei n, GLuint * pipelines) const noexcept
	{
		return glCreateProgramPipelines(n, pipelines);
	};
	void APIENTRY CreateQueries (GLenum target, GLsizei n, GLuint * ids) const noexcept
	{
		return glCreateQueries(target, n, ids);
	};
	void APIENTRY GetQueryBufferObjecti64v (GLuint id, GLuint buffer, GLenum pname, GLintptr offset) const noexcept
	{
		return glGetQueryBufferObjecti64v(id, buffer, pname, offset);
	};
	void APIENTRY GetQueryBufferObjectiv (GLuint id, GLuint buffer, GLenum pname, GLintptr offset) const noexcept
	{
		return glGetQueryBufferObjectiv(id, buffer, pname, offset);
	};
	void APIENTRY GetQueryBufferObjectui64v (GLuint id, GLuint buffer, GLenum pname, GLintptr offset) const noexcept
	{
		return glGetQueryBufferObjectui64v(id, buffer, pname, offset);
	};
	void APIENTRY GetQueryBufferObjectuiv (GLuint id, GLuint buffer, GLenum pname, GLintptr offset) const noexcept
	{
		return glGetQueryBufferObjectuiv(id, buffer, pname, offset);
	};
	void APIENTRY MemoryBarrierByRegion (GLbitfield barriers) const noexcept
	{
		return glMemoryBarrierByRegion(barriers);
	};
	void APIENTRY GetTextureSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void * pixels) const noexcept
	{
		return glGetTextureSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, bufSize, pixels);
	};
	void APIENTRY GetCompressedTextureSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void * pixels) const noexcept
	{
		return glGetCompressedTextureSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, bufSize, pixels);
	};
	GLenum APIENTRY GetGraphicsResetStatus ( ) const noexcept
	{
		return glGetGraphicsResetStatus();
	};
	void APIENTRY GetnCompressedTexImage (GLenum target, GLint lod, GLsizei bufSize, void * pixels) const noexcept
	{
		return glGetnCompressedTexImage(target, lod, bufSize, pixels);
	};
	void APIENTRY GetnTexImage (GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * pixels) const noexcept
	{
		return glGetnTexImage(target, level, format, type, bufSize, pixels);
	};
	void APIENTRY GetnUniformdv (GLuint program, GLint location, GLsizei bufSize, GLdouble * params) const noexcept
	{
		return glGetnUniformdv(program, location, bufSize, params);
	};
	void APIENTRY GetnUniformfv (GLuint program, GLint location, GLsizei bufSize, GLfloat * params) const noexcept
	{
		return glGetnUniformfv(program, location, bufSize, params);
	};
	void APIENTRY GetnUniformiv (GLuint program, GLint location, GLsizei bufSize, GLint * params) const noexcept
	{
		return glGetnUniformiv(program, location, bufSize, params);
	};
	void APIENTRY GetnUniformuiv (GLuint program, GLint location, GLsizei bufSize, GLuint * params) const noexcept
	{
		return glGetnUniformuiv(program, location, bufSize, params);
	};
	void APIENTRY ReadnPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data) const noexcept
	{
		return glReadnPixels(x, y, width, height, format, type, bufSize, data);
	};
	void APIENTRY TextureBarrier ( ) const noexcept
	{
		return glTextureBarrier();
	};
	void APIENTRY SpecializeShader (GLuint shader, const GLchar * pEntryPoint, GLuint numSpecializationConstants, const GLuint * pConstantIndex, const GLuint * pConstantValue) const noexcept
	{
		return glSpecializeShader(shader, pEntryPoint, numSpecializationConstants, pConstantIndex, pConstantValue);
	};
	void APIENTRY MultiDrawArraysIndirectCount (GLenum mode, const void * indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride) const noexcept
	{
		return glMultiDrawArraysIndirectCount(mode, indirect, drawcount, maxdrawcount, stride);
	};
	void APIENTRY MultiDrawElementsIndirectCount (GLenum mode, GLenum type, const void * indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride) const noexcept
	{
		return glMultiDrawElementsIndirectCount(mode, type, indirect, drawcount, maxdrawcount, stride);
	};
	void APIENTRY PolygonOffsetClamp (GLfloat factor, GLfloat units, GLfloat clamp) const noexcept
	{
		return glPolygonOffsetClamp(factor, units, clamp);
	};

	context() = default;
};

};
