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
	void APIENTRY PrimitiveBoundingBoxARB (GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW) const noexcept
	{
		return glPrimitiveBoundingBoxARB(minX, minY, minZ, minW, maxX, maxY, maxZ, maxW);
	};
	GLuint64 APIENTRY GetTextureHandleARB (GLuint texture) const noexcept
	{
		return glGetTextureHandleARB(texture);
	};
	GLuint64 APIENTRY GetTextureSamplerHandleARB (GLuint texture, GLuint sampler) const noexcept
	{
		return glGetTextureSamplerHandleARB(texture, sampler);
	};
	void APIENTRY MakeTextureHandleResidentARB (GLuint64 handle) const noexcept
	{
		return glMakeTextureHandleResidentARB(handle);
	};
	void APIENTRY MakeTextureHandleNonResidentARB (GLuint64 handle) const noexcept
	{
		return glMakeTextureHandleNonResidentARB(handle);
	};
	GLuint64 APIENTRY GetImageHandleARB (GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format) const noexcept
	{
		return glGetImageHandleARB(texture, level, layered, layer, format);
	};
	void APIENTRY MakeImageHandleResidentARB (GLuint64 handle, GLenum access) const noexcept
	{
		return glMakeImageHandleResidentARB(handle, access);
	};
	void APIENTRY MakeImageHandleNonResidentARB (GLuint64 handle) const noexcept
	{
		return glMakeImageHandleNonResidentARB(handle);
	};
	void APIENTRY UniformHandleui64ARB (GLint location, GLuint64 value) const noexcept
	{
		return glUniformHandleui64ARB(location, value);
	};
	void APIENTRY UniformHandleui64vARB (GLint location, GLsizei count, const GLuint64 * value) const noexcept
	{
		return glUniformHandleui64vARB(location, count, value);
	};
	void APIENTRY ProgramUniformHandleui64ARB (GLuint program, GLint location, GLuint64 value) const noexcept
	{
		return glProgramUniformHandleui64ARB(program, location, value);
	};
	void APIENTRY ProgramUniformHandleui64vARB (GLuint program, GLint location, GLsizei count, const GLuint64 * values) const noexcept
	{
		return glProgramUniformHandleui64vARB(program, location, count, values);
	};
	GLboolean APIENTRY IsTextureHandleResidentARB (GLuint64 handle) const noexcept
	{
		return glIsTextureHandleResidentARB(handle);
	};
	GLboolean APIENTRY IsImageHandleResidentARB (GLuint64 handle) const noexcept
	{
		return glIsImageHandleResidentARB(handle);
	};
	void APIENTRY VertexAttribL1ui64ARB (GLuint index, GLuint64EXT x) const noexcept
	{
		return glVertexAttribL1ui64ARB(index, x);
	};
	void APIENTRY VertexAttribL1ui64vARB (GLuint index, const GLuint64EXT * v) const noexcept
	{
		return glVertexAttribL1ui64vARB(index, v);
	};
	void APIENTRY GetVertexAttribLui64vARB (GLuint index, GLenum pname, GLuint64EXT * params) const noexcept
	{
		return glGetVertexAttribLui64vARB(index, pname, params);
	};
	GLsync APIENTRY CreateSyncFromCLeventARB (struct _cl_context * context, struct _cl_event * event, GLbitfield flags) const noexcept
	{
		return glCreateSyncFromCLeventARB(context, event, flags);
	};
	void APIENTRY DispatchComputeGroupSizeARB (GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z, GLuint group_size_x, GLuint group_size_y, GLuint group_size_z) const noexcept
	{
		return glDispatchComputeGroupSizeARB(num_groups_x, num_groups_y, num_groups_z, group_size_x, group_size_y, group_size_z);
	};
	void APIENTRY DebugMessageControlARB (GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled) const noexcept
	{
		return glDebugMessageControlARB(source, type, severity, count, ids, enabled);
	};
	void APIENTRY DebugMessageInsertARB (GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf) const noexcept
	{
		return glDebugMessageInsertARB(source, type, id, severity, length, buf);
	};
	void APIENTRY DebugMessageCallbackARB (GLDEBUGPROCARB callback, const void * userParam) const noexcept
	{
		return glDebugMessageCallbackARB(callback, userParam);
	};
	GLuint APIENTRY GetDebugMessageLogARB (GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog) const noexcept
	{
		return glGetDebugMessageLogARB(count, bufSize, sources, types, ids, severities, lengths, messageLog);
	};
	void APIENTRY BlendEquationiARB (GLuint buf, GLenum mode) const noexcept
	{
		return glBlendEquationiARB(buf, mode);
	};
	void APIENTRY BlendEquationSeparateiARB (GLuint buf, GLenum modeRGB, GLenum modeAlpha) const noexcept
	{
		return glBlendEquationSeparateiARB(buf, modeRGB, modeAlpha);
	};
	void APIENTRY BlendFunciARB (GLuint buf, GLenum src, GLenum dst) const noexcept
	{
		return glBlendFunciARB(buf, src, dst);
	};
	void APIENTRY BlendFuncSeparateiARB (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha) const noexcept
	{
		return glBlendFuncSeparateiARB(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
	};
	void APIENTRY DrawArraysInstancedARB (GLenum mode, GLint first, GLsizei count, GLsizei primcount) const noexcept
	{
		return glDrawArraysInstancedARB(mode, first, count, primcount);
	};
	void APIENTRY DrawElementsInstancedARB (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount) const noexcept
	{
		return glDrawElementsInstancedARB(mode, count, type, indices, primcount);
	};
	void APIENTRY ProgramParameteriARB (GLuint program, GLenum pname, GLint value) const noexcept
	{
		return glProgramParameteriARB(program, pname, value);
	};
	void APIENTRY FramebufferTextureARB (GLenum target, GLenum attachment, GLuint texture, GLint level) const noexcept
	{
		return glFramebufferTextureARB(target, attachment, texture, level);
	};
	void APIENTRY FramebufferTextureLayerARB (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer) const noexcept
	{
		return glFramebufferTextureLayerARB(target, attachment, texture, level, layer);
	};
	void APIENTRY FramebufferTextureFaceARB (GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face) const noexcept
	{
		return glFramebufferTextureFaceARB(target, attachment, texture, level, face);
	};
	void APIENTRY SpecializeShaderARB (GLuint shader, const GLchar * pEntryPoint, GLuint numSpecializationConstants, const GLuint * pConstantIndex, const GLuint * pConstantValue) const noexcept
	{
		return glSpecializeShaderARB(shader, pEntryPoint, numSpecializationConstants, pConstantIndex, pConstantValue);
	};
	void APIENTRY Uniform1i64ARB (GLint location, GLint64 x) const noexcept
	{
		return glUniform1i64ARB(location, x);
	};
	void APIENTRY Uniform2i64ARB (GLint location, GLint64 x, GLint64 y) const noexcept
	{
		return glUniform2i64ARB(location, x, y);
	};
	void APIENTRY Uniform3i64ARB (GLint location, GLint64 x, GLint64 y, GLint64 z) const noexcept
	{
		return glUniform3i64ARB(location, x, y, z);
	};
	void APIENTRY Uniform4i64ARB (GLint location, GLint64 x, GLint64 y, GLint64 z, GLint64 w) const noexcept
	{
		return glUniform4i64ARB(location, x, y, z, w);
	};
	void APIENTRY Uniform1i64vARB (GLint location, GLsizei count, const GLint64 * value) const noexcept
	{
		return glUniform1i64vARB(location, count, value);
	};
	void APIENTRY Uniform2i64vARB (GLint location, GLsizei count, const GLint64 * value) const noexcept
	{
		return glUniform2i64vARB(location, count, value);
	};
	void APIENTRY Uniform3i64vARB (GLint location, GLsizei count, const GLint64 * value) const noexcept
	{
		return glUniform3i64vARB(location, count, value);
	};
	void APIENTRY Uniform4i64vARB (GLint location, GLsizei count, const GLint64 * value) const noexcept
	{
		return glUniform4i64vARB(location, count, value);
	};
	void APIENTRY Uniform1ui64ARB (GLint location, GLuint64 x) const noexcept
	{
		return glUniform1ui64ARB(location, x);
	};
	void APIENTRY Uniform2ui64ARB (GLint location, GLuint64 x, GLuint64 y) const noexcept
	{
		return glUniform2ui64ARB(location, x, y);
	};
	void APIENTRY Uniform3ui64ARB (GLint location, GLuint64 x, GLuint64 y, GLuint64 z) const noexcept
	{
		return glUniform3ui64ARB(location, x, y, z);
	};
	void APIENTRY Uniform4ui64ARB (GLint location, GLuint64 x, GLuint64 y, GLuint64 z, GLuint64 w) const noexcept
	{
		return glUniform4ui64ARB(location, x, y, z, w);
	};
	void APIENTRY Uniform1ui64vARB (GLint location, GLsizei count, const GLuint64 * value) const noexcept
	{
		return glUniform1ui64vARB(location, count, value);
	};
	void APIENTRY Uniform2ui64vARB (GLint location, GLsizei count, const GLuint64 * value) const noexcept
	{
		return glUniform2ui64vARB(location, count, value);
	};
	void APIENTRY Uniform3ui64vARB (GLint location, GLsizei count, const GLuint64 * value) const noexcept
	{
		return glUniform3ui64vARB(location, count, value);
	};
	void APIENTRY Uniform4ui64vARB (GLint location, GLsizei count, const GLuint64 * value) const noexcept
	{
		return glUniform4ui64vARB(location, count, value);
	};
	void APIENTRY GetUniformi64vARB (GLuint program, GLint location, GLint64 * params) const noexcept
	{
		return glGetUniformi64vARB(program, location, params);
	};
	void APIENTRY GetUniformui64vARB (GLuint program, GLint location, GLuint64 * params) const noexcept
	{
		return glGetUniformui64vARB(program, location, params);
	};
	void APIENTRY GetnUniformi64vARB (GLuint program, GLint location, GLsizei bufSize, GLint64 * params) const noexcept
	{
		return glGetnUniformi64vARB(program, location, bufSize, params);
	};
	void APIENTRY GetnUniformui64vARB (GLuint program, GLint location, GLsizei bufSize, GLuint64 * params) const noexcept
	{
		return glGetnUniformui64vARB(program, location, bufSize, params);
	};
	void APIENTRY ProgramUniform1i64ARB (GLuint program, GLint location, GLint64 x) const noexcept
	{
		return glProgramUniform1i64ARB(program, location, x);
	};
	void APIENTRY ProgramUniform2i64ARB (GLuint program, GLint location, GLint64 x, GLint64 y) const noexcept
	{
		return glProgramUniform2i64ARB(program, location, x, y);
	};
	void APIENTRY ProgramUniform3i64ARB (GLuint program, GLint location, GLint64 x, GLint64 y, GLint64 z) const noexcept
	{
		return glProgramUniform3i64ARB(program, location, x, y, z);
	};
	void APIENTRY ProgramUniform4i64ARB (GLuint program, GLint location, GLint64 x, GLint64 y, GLint64 z, GLint64 w) const noexcept
	{
		return glProgramUniform4i64ARB(program, location, x, y, z, w);
	};
	void APIENTRY ProgramUniform1i64vARB (GLuint program, GLint location, GLsizei count, const GLint64 * value) const noexcept
	{
		return glProgramUniform1i64vARB(program, location, count, value);
	};
	void APIENTRY ProgramUniform2i64vARB (GLuint program, GLint location, GLsizei count, const GLint64 * value) const noexcept
	{
		return glProgramUniform2i64vARB(program, location, count, value);
	};
	void APIENTRY ProgramUniform3i64vARB (GLuint program, GLint location, GLsizei count, const GLint64 * value) const noexcept
	{
		return glProgramUniform3i64vARB(program, location, count, value);
	};
	void APIENTRY ProgramUniform4i64vARB (GLuint program, GLint location, GLsizei count, const GLint64 * value) const noexcept
	{
		return glProgramUniform4i64vARB(program, location, count, value);
	};
	void APIENTRY ProgramUniform1ui64ARB (GLuint program, GLint location, GLuint64 x) const noexcept
	{
		return glProgramUniform1ui64ARB(program, location, x);
	};
	void APIENTRY ProgramUniform2ui64ARB (GLuint program, GLint location, GLuint64 x, GLuint64 y) const noexcept
	{
		return glProgramUniform2ui64ARB(program, location, x, y);
	};
	void APIENTRY ProgramUniform3ui64ARB (GLuint program, GLint location, GLuint64 x, GLuint64 y, GLuint64 z) const noexcept
	{
		return glProgramUniform3ui64ARB(program, location, x, y, z);
	};
	void APIENTRY ProgramUniform4ui64ARB (GLuint program, GLint location, GLuint64 x, GLuint64 y, GLuint64 z, GLuint64 w) const noexcept
	{
		return glProgramUniform4ui64ARB(program, location, x, y, z, w);
	};
	void APIENTRY ProgramUniform1ui64vARB (GLuint program, GLint location, GLsizei count, const GLuint64 * value) const noexcept
	{
		return glProgramUniform1ui64vARB(program, location, count, value);
	};
	void APIENTRY ProgramUniform2ui64vARB (GLuint program, GLint location, GLsizei count, const GLuint64 * value) const noexcept
	{
		return glProgramUniform2ui64vARB(program, location, count, value);
	};
	void APIENTRY ProgramUniform3ui64vARB (GLuint program, GLint location, GLsizei count, const GLuint64 * value) const noexcept
	{
		return glProgramUniform3ui64vARB(program, location, count, value);
	};
	void APIENTRY ProgramUniform4ui64vARB (GLuint program, GLint location, GLsizei count, const GLuint64 * value) const noexcept
	{
		return glProgramUniform4ui64vARB(program, location, count, value);
	};
	void APIENTRY MultiDrawArraysIndirectCountARB (GLenum mode, const void * indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride) const noexcept
	{
		return glMultiDrawArraysIndirectCountARB(mode, indirect, drawcount, maxdrawcount, stride);
	};
	void APIENTRY MultiDrawElementsIndirectCountARB (GLenum mode, GLenum type, const void * indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride) const noexcept
	{
		return glMultiDrawElementsIndirectCountARB(mode, type, indirect, drawcount, maxdrawcount, stride);
	};
	void APIENTRY VertexAttribDivisorARB (GLuint index, GLuint divisor) const noexcept
	{
		return glVertexAttribDivisorARB(index, divisor);
	};
	void APIENTRY MaxShaderCompilerThreadsARB (GLuint count) const noexcept
	{
		return glMaxShaderCompilerThreadsARB(count);
	};
	GLenum APIENTRY GetGraphicsResetStatusARB ( ) const noexcept
	{
		return glGetGraphicsResetStatusARB();
	};
	void APIENTRY GetnTexImageARB (GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * img) const noexcept
	{
		return glGetnTexImageARB(target, level, format, type, bufSize, img);
	};
	void APIENTRY ReadnPixelsARB (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data) const noexcept
	{
		return glReadnPixelsARB(x, y, width, height, format, type, bufSize, data);
	};
	void APIENTRY GetnCompressedTexImageARB (GLenum target, GLint lod, GLsizei bufSize, void * img) const noexcept
	{
		return glGetnCompressedTexImageARB(target, lod, bufSize, img);
	};
	void APIENTRY GetnUniformfvARB (GLuint program, GLint location, GLsizei bufSize, GLfloat * params) const noexcept
	{
		return glGetnUniformfvARB(program, location, bufSize, params);
	};
	void APIENTRY GetnUniformivARB (GLuint program, GLint location, GLsizei bufSize, GLint * params) const noexcept
	{
		return glGetnUniformivARB(program, location, bufSize, params);
	};
	void APIENTRY GetnUniformuivARB (GLuint program, GLint location, GLsizei bufSize, GLuint * params) const noexcept
	{
		return glGetnUniformuivARB(program, location, bufSize, params);
	};
	void APIENTRY GetnUniformdvARB (GLuint program, GLint location, GLsizei bufSize, GLdouble * params) const noexcept
	{
		return glGetnUniformdvARB(program, location, bufSize, params);
	};
	void APIENTRY FramebufferSampleLocationsfvARB (GLenum target, GLuint start, GLsizei count, const GLfloat * v) const noexcept
	{
		return glFramebufferSampleLocationsfvARB(target, start, count, v);
	};
	void APIENTRY NamedFramebufferSampleLocationsfvARB (GLuint framebuffer, GLuint start, GLsizei count, const GLfloat * v) const noexcept
	{
		return glNamedFramebufferSampleLocationsfvARB(framebuffer, start, count, v);
	};
	void APIENTRY EvaluateDepthValuesARB ( ) const noexcept
	{
		return glEvaluateDepthValuesARB();
	};
	void APIENTRY MinSampleShadingARB (GLfloat value) const noexcept
	{
		return glMinSampleShadingARB(value);
	};
	void APIENTRY NamedStringARB (GLenum type, GLint namelen, const GLchar * name, GLint stringlen, const GLchar * string) const noexcept
	{
		return glNamedStringARB(type, namelen, name, stringlen, string);
	};
	void APIENTRY DeleteNamedStringARB (GLint namelen, const GLchar * name) const noexcept
	{
		return glDeleteNamedStringARB(namelen, name);
	};
	void APIENTRY CompileShaderIncludeARB (GLuint shader, GLsizei count, const GLchar * const * path, const GLint * length) const noexcept
	{
		return glCompileShaderIncludeARB(shader, count, path, length);
	};
	GLboolean APIENTRY IsNamedStringARB (GLint namelen, const GLchar * name) const noexcept
	{
		return glIsNamedStringARB(namelen, name);
	};
	void APIENTRY GetNamedStringARB (GLint namelen, const GLchar * name, GLsizei bufSize, GLint * stringlen, GLchar * string) const noexcept
	{
		return glGetNamedStringARB(namelen, name, bufSize, stringlen, string);
	};
	void APIENTRY GetNamedStringivARB (GLint namelen, const GLchar * name, GLenum pname, GLint * params) const noexcept
	{
		return glGetNamedStringivARB(namelen, name, pname, params);
	};
	void APIENTRY BufferPageCommitmentARB (GLenum target, GLintptr offset, GLsizeiptr size, GLboolean commit) const noexcept
	{
		return glBufferPageCommitmentARB(target, offset, size, commit);
	};
	void APIENTRY NamedBufferPageCommitmentEXT (GLuint buffer, GLintptr offset, GLsizeiptr size, GLboolean commit) const noexcept
	{
		return glNamedBufferPageCommitmentEXT(buffer, offset, size, commit);
	};
	void APIENTRY NamedBufferPageCommitmentARB (GLuint buffer, GLintptr offset, GLsizeiptr size, GLboolean commit) const noexcept
	{
		return glNamedBufferPageCommitmentARB(buffer, offset, size, commit);
	};
	void APIENTRY TexPageCommitmentARB (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit) const noexcept
	{
		return glTexPageCommitmentARB(target, level, xoffset, yoffset, zoffset, width, height, depth, commit);
	};
	void APIENTRY TexBufferARB (GLenum target, GLenum internalformat, GLuint buffer) const noexcept
	{
		return glTexBufferARB(target, internalformat, buffer);
	};
	void APIENTRY DepthRangeArraydvNV (GLuint first, GLsizei count, const GLdouble * v) const noexcept
	{
		return glDepthRangeArraydvNV(first, count, v);
	};
	void APIENTRY DepthRangeIndexeddNV (GLuint index, GLdouble n, GLdouble f) const noexcept
	{
		return glDepthRangeIndexeddNV(index, n, f);
	};
	void APIENTRY BlendBarrierKHR ( ) const noexcept
	{
		return glBlendBarrierKHR();
	};
	void APIENTRY MaxShaderCompilerThreadsKHR (GLuint count) const noexcept
	{
		return glMaxShaderCompilerThreadsKHR(count);
	};
	void APIENTRY RenderbufferStorageMultisampleAdvancedAMD (GLenum target, GLsizei samples, GLsizei storageSamples, GLenum internalformat, GLsizei width, GLsizei height) const noexcept
	{
		return glRenderbufferStorageMultisampleAdvancedAMD(target, samples, storageSamples, internalformat, width, height);
	};
	void APIENTRY NamedRenderbufferStorageMultisampleAdvancedAMD (GLuint renderbuffer, GLsizei samples, GLsizei storageSamples, GLenum internalformat, GLsizei width, GLsizei height) const noexcept
	{
		return glNamedRenderbufferStorageMultisampleAdvancedAMD(renderbuffer, samples, storageSamples, internalformat, width, height);
	};
	void APIENTRY GetPerfMonitorGroupsAMD (GLint * numGroups, GLsizei groupsSize, GLuint * groups) const noexcept
	{
		return glGetPerfMonitorGroupsAMD(numGroups, groupsSize, groups);
	};
	void APIENTRY GetPerfMonitorCountersAMD (GLuint group, GLint * numCounters, GLint * maxActiveCounters, GLsizei counterSize, GLuint * counters) const noexcept
	{
		return glGetPerfMonitorCountersAMD(group, numCounters, maxActiveCounters, counterSize, counters);
	};
	void APIENTRY GetPerfMonitorGroupStringAMD (GLuint group, GLsizei bufSize, GLsizei * length, GLchar * groupString) const noexcept
	{
		return glGetPerfMonitorGroupStringAMD(group, bufSize, length, groupString);
	};
	void APIENTRY GetPerfMonitorCounterStringAMD (GLuint group, GLuint counter, GLsizei bufSize, GLsizei * length, GLchar * counterString) const noexcept
	{
		return glGetPerfMonitorCounterStringAMD(group, counter, bufSize, length, counterString);
	};
	void APIENTRY GetPerfMonitorCounterInfoAMD (GLuint group, GLuint counter, GLenum pname, void * data) const noexcept
	{
		return glGetPerfMonitorCounterInfoAMD(group, counter, pname, data);
	};
	void APIENTRY GenPerfMonitorsAMD (GLsizei n, GLuint * monitors) const noexcept
	{
		return glGenPerfMonitorsAMD(n, monitors);
	};
	void APIENTRY DeletePerfMonitorsAMD (GLsizei n, GLuint * monitors) const noexcept
	{
		return glDeletePerfMonitorsAMD(n, monitors);
	};
	void APIENTRY SelectPerfMonitorCountersAMD (GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint * counterList) const noexcept
	{
		return glSelectPerfMonitorCountersAMD(monitor, enable, group, numCounters, counterList);
	};
	void APIENTRY BeginPerfMonitorAMD (GLuint monitor) const noexcept
	{
		return glBeginPerfMonitorAMD(monitor);
	};
	void APIENTRY EndPerfMonitorAMD (GLuint monitor) const noexcept
	{
		return glEndPerfMonitorAMD(monitor);
	};
	void APIENTRY GetPerfMonitorCounterDataAMD (GLuint monitor, GLenum pname, GLsizei dataSize, GLuint * data, GLint * bytesWritten) const noexcept
	{
		return glGetPerfMonitorCounterDataAMD(monitor, pname, dataSize, data, bytesWritten);
	};
	void APIENTRY EGLImageTargetTexStorageEXT (GLenum target, GLeglImageOES image, const GLint * attrib_list) const noexcept
	{
		return glEGLImageTargetTexStorageEXT(target, image, attrib_list);
	};
	void APIENTRY EGLImageTargetTextureStorageEXT (GLuint texture, GLeglImageOES image, const GLint * attrib_list) const noexcept
	{
		return glEGLImageTargetTextureStorageEXT(texture, image, attrib_list);
	};
	void APIENTRY LabelObjectEXT (GLenum type, GLuint object, GLsizei length, const GLchar * label) const noexcept
	{
		return glLabelObjectEXT(type, object, length, label);
	};
	void APIENTRY GetObjectLabelEXT (GLenum type, GLuint object, GLsizei bufSize, GLsizei * length, GLchar * label) const noexcept
	{
		return glGetObjectLabelEXT(type, object, bufSize, length, label);
	};
	void APIENTRY InsertEventMarkerEXT (GLsizei length, const GLchar * marker) const noexcept
	{
		return glInsertEventMarkerEXT(length, marker);
	};
	void APIENTRY PushGroupMarkerEXT (GLsizei length, const GLchar * marker) const noexcept
	{
		return glPushGroupMarkerEXT(length, marker);
	};
	void APIENTRY PopGroupMarkerEXT ( ) const noexcept
	{
		return glPopGroupMarkerEXT();
	};
	void APIENTRY MatrixLoadfEXT (GLenum mode, const GLfloat * m) const noexcept
	{
		return glMatrixLoadfEXT(mode, m);
	};
	void APIENTRY MatrixLoaddEXT (GLenum mode, const GLdouble * m) const noexcept
	{
		return glMatrixLoaddEXT(mode, m);
	};
	void APIENTRY MatrixMultfEXT (GLenum mode, const GLfloat * m) const noexcept
	{
		return glMatrixMultfEXT(mode, m);
	};
	void APIENTRY MatrixMultdEXT (GLenum mode, const GLdouble * m) const noexcept
	{
		return glMatrixMultdEXT(mode, m);
	};
	void APIENTRY MatrixLoadIdentityEXT (GLenum mode) const noexcept
	{
		return glMatrixLoadIdentityEXT(mode);
	};
	void APIENTRY MatrixRotatefEXT (GLenum mode, GLfloat angle, GLfloat x, GLfloat y, GLfloat z) const noexcept
	{
		return glMatrixRotatefEXT(mode, angle, x, y, z);
	};
	void APIENTRY MatrixRotatedEXT (GLenum mode, GLdouble angle, GLdouble x, GLdouble y, GLdouble z) const noexcept
	{
		return glMatrixRotatedEXT(mode, angle, x, y, z);
	};
	void APIENTRY MatrixScalefEXT (GLenum mode, GLfloat x, GLfloat y, GLfloat z) const noexcept
	{
		return glMatrixScalefEXT(mode, x, y, z);
	};
	void APIENTRY MatrixScaledEXT (GLenum mode, GLdouble x, GLdouble y, GLdouble z) const noexcept
	{
		return glMatrixScaledEXT(mode, x, y, z);
	};
	void APIENTRY MatrixTranslatefEXT (GLenum mode, GLfloat x, GLfloat y, GLfloat z) const noexcept
	{
		return glMatrixTranslatefEXT(mode, x, y, z);
	};
	void APIENTRY MatrixTranslatedEXT (GLenum mode, GLdouble x, GLdouble y, GLdouble z) const noexcept
	{
		return glMatrixTranslatedEXT(mode, x, y, z);
	};
	void APIENTRY MatrixFrustumEXT (GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar) const noexcept
	{
		return glMatrixFrustumEXT(mode, left, right, bottom, top, zNear, zFar);
	};
	void APIENTRY MatrixOrthoEXT (GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar) const noexcept
	{
		return glMatrixOrthoEXT(mode, left, right, bottom, top, zNear, zFar);
	};
	void APIENTRY MatrixPopEXT (GLenum mode) const noexcept
	{
		return glMatrixPopEXT(mode);
	};
	void APIENTRY MatrixPushEXT (GLenum mode) const noexcept
	{
		return glMatrixPushEXT(mode);
	};
	void APIENTRY ClientAttribDefaultEXT (GLbitfield mask) const noexcept
	{
		return glClientAttribDefaultEXT(mask);
	};
	void APIENTRY PushClientAttribDefaultEXT (GLbitfield mask) const noexcept
	{
		return glPushClientAttribDefaultEXT(mask);
	};
	void APIENTRY TextureParameterfEXT (GLuint texture, GLenum target, GLenum pname, GLfloat param) const noexcept
	{
		return glTextureParameterfEXT(texture, target, pname, param);
	};
	void APIENTRY TextureParameterfvEXT (GLuint texture, GLenum target, GLenum pname, const GLfloat * params) const noexcept
	{
		return glTextureParameterfvEXT(texture, target, pname, params);
	};
	void APIENTRY TextureParameteriEXT (GLuint texture, GLenum target, GLenum pname, GLint param) const noexcept
	{
		return glTextureParameteriEXT(texture, target, pname, param);
	};
	void APIENTRY TextureParameterivEXT (GLuint texture, GLenum target, GLenum pname, const GLint * params) const noexcept
	{
		return glTextureParameterivEXT(texture, target, pname, params);
	};
	void APIENTRY TextureImage1DEXT (GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels) const noexcept
	{
		return glTextureImage1DEXT(texture, target, level, internalformat, width, border, format, type, pixels);
	};
	void APIENTRY TextureImage2DEXT (GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels) const noexcept
	{
		return glTextureImage2DEXT(texture, target, level, internalformat, width, height, border, format, type, pixels);
	};
	void APIENTRY TextureSubImage1DEXT (GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels) const noexcept
	{
		return glTextureSubImage1DEXT(texture, target, level, xoffset, width, format, type, pixels);
	};
	void APIENTRY TextureSubImage2DEXT (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels) const noexcept
	{
		return glTextureSubImage2DEXT(texture, target, level, xoffset, yoffset, width, height, format, type, pixels);
	};
	void APIENTRY CopyTextureImage1DEXT (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border) const noexcept
	{
		return glCopyTextureImage1DEXT(texture, target, level, internalformat, x, y, width, border);
	};
	void APIENTRY CopyTextureImage2DEXT (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) const noexcept
	{
		return glCopyTextureImage2DEXT(texture, target, level, internalformat, x, y, width, height, border);
	};
	void APIENTRY CopyTextureSubImage1DEXT (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width) const noexcept
	{
		return glCopyTextureSubImage1DEXT(texture, target, level, xoffset, x, y, width);
	};
	void APIENTRY CopyTextureSubImage2DEXT (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) const noexcept
	{
		return glCopyTextureSubImage2DEXT(texture, target, level, xoffset, yoffset, x, y, width, height);
	};
	void APIENTRY GetTextureImageEXT (GLuint texture, GLenum target, GLint level, GLenum format, GLenum type, void * pixels) const noexcept
	{
		return glGetTextureImageEXT(texture, target, level, format, type, pixels);
	};
	void APIENTRY GetTextureParameterfvEXT (GLuint texture, GLenum target, GLenum pname, GLfloat * params) const noexcept
	{
		return glGetTextureParameterfvEXT(texture, target, pname, params);
	};
	void APIENTRY GetTextureParameterivEXT (GLuint texture, GLenum target, GLenum pname, GLint * params) const noexcept
	{
		return glGetTextureParameterivEXT(texture, target, pname, params);
	};
	void APIENTRY GetTextureLevelParameterfvEXT (GLuint texture, GLenum target, GLint level, GLenum pname, GLfloat * params) const noexcept
	{
		return glGetTextureLevelParameterfvEXT(texture, target, level, pname, params);
	};
	void APIENTRY GetTextureLevelParameterivEXT (GLuint texture, GLenum target, GLint level, GLenum pname, GLint * params) const noexcept
	{
		return glGetTextureLevelParameterivEXT(texture, target, level, pname, params);
	};
	void APIENTRY TextureImage3DEXT (GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels) const noexcept
	{
		return glTextureImage3DEXT(texture, target, level, internalformat, width, height, depth, border, format, type, pixels);
	};
	void APIENTRY TextureSubImage3DEXT (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels) const noexcept
	{
		return glTextureSubImage3DEXT(texture, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
	};
	void APIENTRY CopyTextureSubImage3DEXT (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) const noexcept
	{
		return glCopyTextureSubImage3DEXT(texture, target, level, xoffset, yoffset, zoffset, x, y, width, height);
	};
	void APIENTRY BindMultiTextureEXT (GLenum texunit, GLenum target, GLuint texture) const noexcept
	{
		return glBindMultiTextureEXT(texunit, target, texture);
	};
	void APIENTRY MultiTexCoordPointerEXT (GLenum texunit, GLint size, GLenum type, GLsizei stride, const void * pointer) const noexcept
	{
		return glMultiTexCoordPointerEXT(texunit, size, type, stride, pointer);
	};
	void APIENTRY MultiTexEnvfEXT (GLenum texunit, GLenum target, GLenum pname, GLfloat param) const noexcept
	{
		return glMultiTexEnvfEXT(texunit, target, pname, param);
	};
	void APIENTRY MultiTexEnvfvEXT (GLenum texunit, GLenum target, GLenum pname, const GLfloat * params) const noexcept
	{
		return glMultiTexEnvfvEXT(texunit, target, pname, params);
	};
	void APIENTRY MultiTexEnviEXT (GLenum texunit, GLenum target, GLenum pname, GLint param) const noexcept
	{
		return glMultiTexEnviEXT(texunit, target, pname, param);
	};
	void APIENTRY MultiTexEnvivEXT (GLenum texunit, GLenum target, GLenum pname, const GLint * params) const noexcept
	{
		return glMultiTexEnvivEXT(texunit, target, pname, params);
	};
	void APIENTRY MultiTexGendEXT (GLenum texunit, GLenum coord, GLenum pname, GLdouble param) const noexcept
	{
		return glMultiTexGendEXT(texunit, coord, pname, param);
	};
	void APIENTRY MultiTexGendvEXT (GLenum texunit, GLenum coord, GLenum pname, const GLdouble * params) const noexcept
	{
		return glMultiTexGendvEXT(texunit, coord, pname, params);
	};
	void APIENTRY MultiTexGenfEXT (GLenum texunit, GLenum coord, GLenum pname, GLfloat param) const noexcept
	{
		return glMultiTexGenfEXT(texunit, coord, pname, param);
	};
	void APIENTRY MultiTexGenfvEXT (GLenum texunit, GLenum coord, GLenum pname, const GLfloat * params) const noexcept
	{
		return glMultiTexGenfvEXT(texunit, coord, pname, params);
	};
	void APIENTRY MultiTexGeniEXT (GLenum texunit, GLenum coord, GLenum pname, GLint param) const noexcept
	{
		return glMultiTexGeniEXT(texunit, coord, pname, param);
	};
	void APIENTRY MultiTexGenivEXT (GLenum texunit, GLenum coord, GLenum pname, const GLint * params) const noexcept
	{
		return glMultiTexGenivEXT(texunit, coord, pname, params);
	};
	void APIENTRY GetMultiTexEnvfvEXT (GLenum texunit, GLenum target, GLenum pname, GLfloat * params) const noexcept
	{
		return glGetMultiTexEnvfvEXT(texunit, target, pname, params);
	};
	void APIENTRY GetMultiTexEnvivEXT (GLenum texunit, GLenum target, GLenum pname, GLint * params) const noexcept
	{
		return glGetMultiTexEnvivEXT(texunit, target, pname, params);
	};
	void APIENTRY GetMultiTexGendvEXT (GLenum texunit, GLenum coord, GLenum pname, GLdouble * params) const noexcept
	{
		return glGetMultiTexGendvEXT(texunit, coord, pname, params);
	};
	void APIENTRY GetMultiTexGenfvEXT (GLenum texunit, GLenum coord, GLenum pname, GLfloat * params) const noexcept
	{
		return glGetMultiTexGenfvEXT(texunit, coord, pname, params);
	};
	void APIENTRY GetMultiTexGenivEXT (GLenum texunit, GLenum coord, GLenum pname, GLint * params) const noexcept
	{
		return glGetMultiTexGenivEXT(texunit, coord, pname, params);
	};
	void APIENTRY MultiTexParameteriEXT (GLenum texunit, GLenum target, GLenum pname, GLint param) const noexcept
	{
		return glMultiTexParameteriEXT(texunit, target, pname, param);
	};
	void APIENTRY MultiTexParameterivEXT (GLenum texunit, GLenum target, GLenum pname, const GLint * params) const noexcept
	{
		return glMultiTexParameterivEXT(texunit, target, pname, params);
	};
	void APIENTRY MultiTexParameterfEXT (GLenum texunit, GLenum target, GLenum pname, GLfloat param) const noexcept
	{
		return glMultiTexParameterfEXT(texunit, target, pname, param);
	};
	void APIENTRY MultiTexParameterfvEXT (GLenum texunit, GLenum target, GLenum pname, const GLfloat * params) const noexcept
	{
		return glMultiTexParameterfvEXT(texunit, target, pname, params);
	};
	void APIENTRY MultiTexImage1DEXT (GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels) const noexcept
	{
		return glMultiTexImage1DEXT(texunit, target, level, internalformat, width, border, format, type, pixels);
	};
	void APIENTRY MultiTexImage2DEXT (GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels) const noexcept
	{
		return glMultiTexImage2DEXT(texunit, target, level, internalformat, width, height, border, format, type, pixels);
	};
	void APIENTRY MultiTexSubImage1DEXT (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels) const noexcept
	{
		return glMultiTexSubImage1DEXT(texunit, target, level, xoffset, width, format, type, pixels);
	};
	void APIENTRY MultiTexSubImage2DEXT (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels) const noexcept
	{
		return glMultiTexSubImage2DEXT(texunit, target, level, xoffset, yoffset, width, height, format, type, pixels);
	};
	void APIENTRY CopyMultiTexImage1DEXT (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border) const noexcept
	{
		return glCopyMultiTexImage1DEXT(texunit, target, level, internalformat, x, y, width, border);
	};
	void APIENTRY CopyMultiTexImage2DEXT (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) const noexcept
	{
		return glCopyMultiTexImage2DEXT(texunit, target, level, internalformat, x, y, width, height, border);
	};
	void APIENTRY CopyMultiTexSubImage1DEXT (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width) const noexcept
	{
		return glCopyMultiTexSubImage1DEXT(texunit, target, level, xoffset, x, y, width);
	};
	void APIENTRY CopyMultiTexSubImage2DEXT (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) const noexcept
	{
		return glCopyMultiTexSubImage2DEXT(texunit, target, level, xoffset, yoffset, x, y, width, height);
	};
	void APIENTRY GetMultiTexImageEXT (GLenum texunit, GLenum target, GLint level, GLenum format, GLenum type, void * pixels) const noexcept
	{
		return glGetMultiTexImageEXT(texunit, target, level, format, type, pixels);
	};
	void APIENTRY GetMultiTexParameterfvEXT (GLenum texunit, GLenum target, GLenum pname, GLfloat * params) const noexcept
	{
		return glGetMultiTexParameterfvEXT(texunit, target, pname, params);
	};
	void APIENTRY GetMultiTexParameterivEXT (GLenum texunit, GLenum target, GLenum pname, GLint * params) const noexcept
	{
		return glGetMultiTexParameterivEXT(texunit, target, pname, params);
	};
	void APIENTRY GetMultiTexLevelParameterfvEXT (GLenum texunit, GLenum target, GLint level, GLenum pname, GLfloat * params) const noexcept
	{
		return glGetMultiTexLevelParameterfvEXT(texunit, target, level, pname, params);
	};
	void APIENTRY GetMultiTexLevelParameterivEXT (GLenum texunit, GLenum target, GLint level, GLenum pname, GLint * params) const noexcept
	{
		return glGetMultiTexLevelParameterivEXT(texunit, target, level, pname, params);
	};
	void APIENTRY MultiTexImage3DEXT (GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels) const noexcept
	{
		return glMultiTexImage3DEXT(texunit, target, level, internalformat, width, height, depth, border, format, type, pixels);
	};
	void APIENTRY MultiTexSubImage3DEXT (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels) const noexcept
	{
		return glMultiTexSubImage3DEXT(texunit, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
	};
	void APIENTRY CopyMultiTexSubImage3DEXT (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) const noexcept
	{
		return glCopyMultiTexSubImage3DEXT(texunit, target, level, xoffset, yoffset, zoffset, x, y, width, height);
	};
	void APIENTRY EnableClientStateIndexedEXT (GLenum array, GLuint index) const noexcept
	{
		return glEnableClientStateIndexedEXT(array, index);
	};
	void APIENTRY DisableClientStateIndexedEXT (GLenum array, GLuint index) const noexcept
	{
		return glDisableClientStateIndexedEXT(array, index);
	};
	void APIENTRY GetFloatIndexedvEXT (GLenum target, GLuint index, GLfloat * data) const noexcept
	{
		return glGetFloatIndexedvEXT(target, index, data);
	};
	void APIENTRY GetDoubleIndexedvEXT (GLenum target, GLuint index, GLdouble * data) const noexcept
	{
		return glGetDoubleIndexedvEXT(target, index, data);
	};
	void APIENTRY GetPointerIndexedvEXT (GLenum target, GLuint index, void * * data) const noexcept
	{
		return glGetPointerIndexedvEXT(target, index, data);
	};
	void APIENTRY EnableIndexedEXT (GLenum target, GLuint index) const noexcept
	{
		return glEnableIndexedEXT(target, index);
	};
	void APIENTRY DisableIndexedEXT (GLenum target, GLuint index) const noexcept
	{
		return glDisableIndexedEXT(target, index);
	};
	GLboolean APIENTRY IsEnabledIndexedEXT (GLenum target, GLuint index) const noexcept
	{
		return glIsEnabledIndexedEXT(target, index);
	};
	void APIENTRY GetIntegerIndexedvEXT (GLenum target, GLuint index, GLint * data) const noexcept
	{
		return glGetIntegerIndexedvEXT(target, index, data);
	};
	void APIENTRY GetBooleanIndexedvEXT (GLenum target, GLuint index, GLboolean * data) const noexcept
	{
		return glGetBooleanIndexedvEXT(target, index, data);
	};
	void APIENTRY CompressedTextureImage3DEXT (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * bits) const noexcept
	{
		return glCompressedTextureImage3DEXT(texture, target, level, internalformat, width, height, depth, border, imageSize, bits);
	};
	void APIENTRY CompressedTextureImage2DEXT (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * bits) const noexcept
	{
		return glCompressedTextureImage2DEXT(texture, target, level, internalformat, width, height, border, imageSize, bits);
	};
	void APIENTRY CompressedTextureImage1DEXT (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * bits) const noexcept
	{
		return glCompressedTextureImage1DEXT(texture, target, level, internalformat, width, border, imageSize, bits);
	};
	void APIENTRY CompressedTextureSubImage3DEXT (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * bits) const noexcept
	{
		return glCompressedTextureSubImage3DEXT(texture, target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, bits);
	};
	void APIENTRY CompressedTextureSubImage2DEXT (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * bits) const noexcept
	{
		return glCompressedTextureSubImage2DEXT(texture, target, level, xoffset, yoffset, width, height, format, imageSize, bits);
	};
	void APIENTRY CompressedTextureSubImage1DEXT (GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * bits) const noexcept
	{
		return glCompressedTextureSubImage1DEXT(texture, target, level, xoffset, width, format, imageSize, bits);
	};
	void APIENTRY GetCompressedTextureImageEXT (GLuint texture, GLenum target, GLint lod, void * img) const noexcept
	{
		return glGetCompressedTextureImageEXT(texture, target, lod, img);
	};
	void APIENTRY CompressedMultiTexImage3DEXT (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * bits) const noexcept
	{
		return glCompressedMultiTexImage3DEXT(texunit, target, level, internalformat, width, height, depth, border, imageSize, bits);
	};
	void APIENTRY CompressedMultiTexImage2DEXT (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * bits) const noexcept
	{
		return glCompressedMultiTexImage2DEXT(texunit, target, level, internalformat, width, height, border, imageSize, bits);
	};
	void APIENTRY CompressedMultiTexImage1DEXT (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * bits) const noexcept
	{
		return glCompressedMultiTexImage1DEXT(texunit, target, level, internalformat, width, border, imageSize, bits);
	};
	void APIENTRY CompressedMultiTexSubImage3DEXT (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * bits) const noexcept
	{
		return glCompressedMultiTexSubImage3DEXT(texunit, target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, bits);
	};
	void APIENTRY CompressedMultiTexSubImage2DEXT (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * bits) const noexcept
	{
		return glCompressedMultiTexSubImage2DEXT(texunit, target, level, xoffset, yoffset, width, height, format, imageSize, bits);
	};
	void APIENTRY CompressedMultiTexSubImage1DEXT (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * bits) const noexcept
	{
		return glCompressedMultiTexSubImage1DEXT(texunit, target, level, xoffset, width, format, imageSize, bits);
	};
	void APIENTRY GetCompressedMultiTexImageEXT (GLenum texunit, GLenum target, GLint lod, void * img) const noexcept
	{
		return glGetCompressedMultiTexImageEXT(texunit, target, lod, img);
	};
	void APIENTRY MatrixLoadTransposefEXT (GLenum mode, const GLfloat * m) const noexcept
	{
		return glMatrixLoadTransposefEXT(mode, m);
	};
	void APIENTRY MatrixLoadTransposedEXT (GLenum mode, const GLdouble * m) const noexcept
	{
		return glMatrixLoadTransposedEXT(mode, m);
	};
	void APIENTRY MatrixMultTransposefEXT (GLenum mode, const GLfloat * m) const noexcept
	{
		return glMatrixMultTransposefEXT(mode, m);
	};
	void APIENTRY MatrixMultTransposedEXT (GLenum mode, const GLdouble * m) const noexcept
	{
		return glMatrixMultTransposedEXT(mode, m);
	};
	void APIENTRY NamedBufferDataEXT (GLuint buffer, GLsizeiptr size, const void * data, GLenum usage) const noexcept
	{
		return glNamedBufferDataEXT(buffer, size, data, usage);
	};
	void APIENTRY NamedBufferSubDataEXT (GLuint buffer, GLintptr offset, GLsizeiptr size, const void * data) const noexcept
	{
		return glNamedBufferSubDataEXT(buffer, offset, size, data);
	};
	void * APIENTRY MapNamedBufferEXT (GLuint buffer, GLenum access) const noexcept
	{
		return glMapNamedBufferEXT(buffer, access);
	};
	GLboolean APIENTRY UnmapNamedBufferEXT (GLuint buffer) const noexcept
	{
		return glUnmapNamedBufferEXT(buffer);
	};
	void APIENTRY GetNamedBufferParameterivEXT (GLuint buffer, GLenum pname, GLint * params) const noexcept
	{
		return glGetNamedBufferParameterivEXT(buffer, pname, params);
	};
	void APIENTRY GetNamedBufferPointervEXT (GLuint buffer, GLenum pname, void * * params) const noexcept
	{
		return glGetNamedBufferPointervEXT(buffer, pname, params);
	};
	void APIENTRY GetNamedBufferSubDataEXT (GLuint buffer, GLintptr offset, GLsizeiptr size, void * data) const noexcept
	{
		return glGetNamedBufferSubDataEXT(buffer, offset, size, data);
	};
	void APIENTRY ProgramUniform1fEXT (GLuint program, GLint location, GLfloat v0) const noexcept
	{
		return glProgramUniform1fEXT(program, location, v0);
	};
	void APIENTRY ProgramUniform2fEXT (GLuint program, GLint location, GLfloat v0, GLfloat v1) const noexcept
	{
		return glProgramUniform2fEXT(program, location, v0, v1);
	};
	void APIENTRY ProgramUniform3fEXT (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2) const noexcept
	{
		return glProgramUniform3fEXT(program, location, v0, v1, v2);
	};
	void APIENTRY ProgramUniform4fEXT (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) const noexcept
	{
		return glProgramUniform4fEXT(program, location, v0, v1, v2, v3);
	};
	void APIENTRY ProgramUniform1iEXT (GLuint program, GLint location, GLint v0) const noexcept
	{
		return glProgramUniform1iEXT(program, location, v0);
	};
	void APIENTRY ProgramUniform2iEXT (GLuint program, GLint location, GLint v0, GLint v1) const noexcept
	{
		return glProgramUniform2iEXT(program, location, v0, v1);
	};
	void APIENTRY ProgramUniform3iEXT (GLuint program, GLint location, GLint v0, GLint v1, GLint v2) const noexcept
	{
		return glProgramUniform3iEXT(program, location, v0, v1, v2);
	};
	void APIENTRY ProgramUniform4iEXT (GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3) const noexcept
	{
		return glProgramUniform4iEXT(program, location, v0, v1, v2, v3);
	};
	void APIENTRY ProgramUniform1fvEXT (GLuint program, GLint location, GLsizei count, const GLfloat * value) const noexcept
	{
		return glProgramUniform1fvEXT(program, location, count, value);
	};
	void APIENTRY ProgramUniform2fvEXT (GLuint program, GLint location, GLsizei count, const GLfloat * value) const noexcept
	{
		return glProgramUniform2fvEXT(program, location, count, value);
	};
	void APIENTRY ProgramUniform3fvEXT (GLuint program, GLint location, GLsizei count, const GLfloat * value) const noexcept
	{
		return glProgramUniform3fvEXT(program, location, count, value);
	};
	void APIENTRY ProgramUniform4fvEXT (GLuint program, GLint location, GLsizei count, const GLfloat * value) const noexcept
	{
		return glProgramUniform4fvEXT(program, location, count, value);
	};
	void APIENTRY ProgramUniform1ivEXT (GLuint program, GLint location, GLsizei count, const GLint * value) const noexcept
	{
		return glProgramUniform1ivEXT(program, location, count, value);
	};
	void APIENTRY ProgramUniform2ivEXT (GLuint program, GLint location, GLsizei count, const GLint * value) const noexcept
	{
		return glProgramUniform2ivEXT(program, location, count, value);
	};
	void APIENTRY ProgramUniform3ivEXT (GLuint program, GLint location, GLsizei count, const GLint * value) const noexcept
	{
		return glProgramUniform3ivEXT(program, location, count, value);
	};
	void APIENTRY ProgramUniform4ivEXT (GLuint program, GLint location, GLsizei count, const GLint * value) const noexcept
	{
		return glProgramUniform4ivEXT(program, location, count, value);
	};
	void APIENTRY ProgramUniformMatrix2fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) const noexcept
	{
		return glProgramUniformMatrix2fvEXT(program, location, count, transpose, value);
	};
	void APIENTRY ProgramUniformMatrix3fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) const noexcept
	{
		return glProgramUniformMatrix3fvEXT(program, location, count, transpose, value);
	};
	void APIENTRY ProgramUniformMatrix4fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) const noexcept
	{
		return glProgramUniformMatrix4fvEXT(program, location, count, transpose, value);
	};
	void APIENTRY ProgramUniformMatrix2x3fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) const noexcept
	{
		return glProgramUniformMatrix2x3fvEXT(program, location, count, transpose, value);
	};
	void APIENTRY ProgramUniformMatrix3x2fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) const noexcept
	{
		return glProgramUniformMatrix3x2fvEXT(program, location, count, transpose, value);
	};
	void APIENTRY ProgramUniformMatrix2x4fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) const noexcept
	{
		return glProgramUniformMatrix2x4fvEXT(program, location, count, transpose, value);
	};
	void APIENTRY ProgramUniformMatrix4x2fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) const noexcept
	{
		return glProgramUniformMatrix4x2fvEXT(program, location, count, transpose, value);
	};
	void APIENTRY ProgramUniformMatrix3x4fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) const noexcept
	{
		return glProgramUniformMatrix3x4fvEXT(program, location, count, transpose, value);
	};
	void APIENTRY ProgramUniformMatrix4x3fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) const noexcept
	{
		return glProgramUniformMatrix4x3fvEXT(program, location, count, transpose, value);
	};
	void APIENTRY TextureBufferEXT (GLuint texture, GLenum target, GLenum internalformat, GLuint buffer) const noexcept
	{
		return glTextureBufferEXT(texture, target, internalformat, buffer);
	};
	void APIENTRY MultiTexBufferEXT (GLenum texunit, GLenum target, GLenum internalformat, GLuint buffer) const noexcept
	{
		return glMultiTexBufferEXT(texunit, target, internalformat, buffer);
	};
	void APIENTRY TextureParameterIivEXT (GLuint texture, GLenum target, GLenum pname, const GLint * params) const noexcept
	{
		return glTextureParameterIivEXT(texture, target, pname, params);
	};
	void APIENTRY TextureParameterIuivEXT (GLuint texture, GLenum target, GLenum pname, const GLuint * params) const noexcept
	{
		return glTextureParameterIuivEXT(texture, target, pname, params);
	};
	void APIENTRY GetTextureParameterIivEXT (GLuint texture, GLenum target, GLenum pname, GLint * params) const noexcept
	{
		return glGetTextureParameterIivEXT(texture, target, pname, params);
	};
	void APIENTRY GetTextureParameterIuivEXT (GLuint texture, GLenum target, GLenum pname, GLuint * params) const noexcept
	{
		return glGetTextureParameterIuivEXT(texture, target, pname, params);
	};
	void APIENTRY MultiTexParameterIivEXT (GLenum texunit, GLenum target, GLenum pname, const GLint * params) const noexcept
	{
		return glMultiTexParameterIivEXT(texunit, target, pname, params);
	};
	void APIENTRY MultiTexParameterIuivEXT (GLenum texunit, GLenum target, GLenum pname, const GLuint * params) const noexcept
	{
		return glMultiTexParameterIuivEXT(texunit, target, pname, params);
	};
	void APIENTRY GetMultiTexParameterIivEXT (GLenum texunit, GLenum target, GLenum pname, GLint * params) const noexcept
	{
		return glGetMultiTexParameterIivEXT(texunit, target, pname, params);
	};
	void APIENTRY GetMultiTexParameterIuivEXT (GLenum texunit, GLenum target, GLenum pname, GLuint * params) const noexcept
	{
		return glGetMultiTexParameterIuivEXT(texunit, target, pname, params);
	};
	void APIENTRY ProgramUniform1uiEXT (GLuint program, GLint location, GLuint v0) const noexcept
	{
		return glProgramUniform1uiEXT(program, location, v0);
	};
	void APIENTRY ProgramUniform2uiEXT (GLuint program, GLint location, GLuint v0, GLuint v1) const noexcept
	{
		return glProgramUniform2uiEXT(program, location, v0, v1);
	};
	void APIENTRY ProgramUniform3uiEXT (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2) const noexcept
	{
		return glProgramUniform3uiEXT(program, location, v0, v1, v2);
	};
	void APIENTRY ProgramUniform4uiEXT (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) const noexcept
	{
		return glProgramUniform4uiEXT(program, location, v0, v1, v2, v3);
	};
	void APIENTRY ProgramUniform1uivEXT (GLuint program, GLint location, GLsizei count, const GLuint * value) const noexcept
	{
		return glProgramUniform1uivEXT(program, location, count, value);
	};
	void APIENTRY ProgramUniform2uivEXT (GLuint program, GLint location, GLsizei count, const GLuint * value) const noexcept
	{
		return glProgramUniform2uivEXT(program, location, count, value);
	};
	void APIENTRY ProgramUniform3uivEXT (GLuint program, GLint location, GLsizei count, const GLuint * value) const noexcept
	{
		return glProgramUniform3uivEXT(program, location, count, value);
	};
	void APIENTRY ProgramUniform4uivEXT (GLuint program, GLint location, GLsizei count, const GLuint * value) const noexcept
	{
		return glProgramUniform4uivEXT(program, location, count, value);
	};
	void APIENTRY NamedProgramLocalParameters4fvEXT (GLuint program, GLenum target, GLuint index, GLsizei count, const GLfloat * params) const noexcept
	{
		return glNamedProgramLocalParameters4fvEXT(program, target, index, count, params);
	};
	void APIENTRY NamedProgramLocalParameterI4iEXT (GLuint program, GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w) const noexcept
	{
		return glNamedProgramLocalParameterI4iEXT(program, target, index, x, y, z, w);
	};
	void APIENTRY NamedProgramLocalParameterI4ivEXT (GLuint program, GLenum target, GLuint index, const GLint * params) const noexcept
	{
		return glNamedProgramLocalParameterI4ivEXT(program, target, index, params);
	};
	void APIENTRY NamedProgramLocalParametersI4ivEXT (GLuint program, GLenum target, GLuint index, GLsizei count, const GLint * params) const noexcept
	{
		return glNamedProgramLocalParametersI4ivEXT(program, target, index, count, params);
	};
	void APIENTRY NamedProgramLocalParameterI4uiEXT (GLuint program, GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w) const noexcept
	{
		return glNamedProgramLocalParameterI4uiEXT(program, target, index, x, y, z, w);
	};
	void APIENTRY NamedProgramLocalParameterI4uivEXT (GLuint program, GLenum target, GLuint index, const GLuint * params) const noexcept
	{
		return glNamedProgramLocalParameterI4uivEXT(program, target, index, params);
	};
	void APIENTRY NamedProgramLocalParametersI4uivEXT (GLuint program, GLenum target, GLuint index, GLsizei count, const GLuint * params) const noexcept
	{
		return glNamedProgramLocalParametersI4uivEXT(program, target, index, count, params);
	};
	void APIENTRY GetNamedProgramLocalParameterIivEXT (GLuint program, GLenum target, GLuint index, GLint * params) const noexcept
	{
		return glGetNamedProgramLocalParameterIivEXT(program, target, index, params);
	};
	void APIENTRY GetNamedProgramLocalParameterIuivEXT (GLuint program, GLenum target, GLuint index, GLuint * params) const noexcept
	{
		return glGetNamedProgramLocalParameterIuivEXT(program, target, index, params);
	};
	void APIENTRY EnableClientStateiEXT (GLenum array, GLuint index) const noexcept
	{
		return glEnableClientStateiEXT(array, index);
	};
	void APIENTRY DisableClientStateiEXT (GLenum array, GLuint index) const noexcept
	{
		return glDisableClientStateiEXT(array, index);
	};
	void APIENTRY GetFloati_vEXT (GLenum pname, GLuint index, GLfloat * params) const noexcept
	{
		return glGetFloati_vEXT(pname, index, params);
	};
	void APIENTRY GetDoublei_vEXT (GLenum pname, GLuint index, GLdouble * params) const noexcept
	{
		return glGetDoublei_vEXT(pname, index, params);
	};
	void APIENTRY GetPointeri_vEXT (GLenum pname, GLuint index, void * * params) const noexcept
	{
		return glGetPointeri_vEXT(pname, index, params);
	};
	void APIENTRY NamedProgramStringEXT (GLuint program, GLenum target, GLenum format, GLsizei len, const void * string) const noexcept
	{
		return glNamedProgramStringEXT(program, target, format, len, string);
	};
	void APIENTRY NamedProgramLocalParameter4dEXT (GLuint program, GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) const noexcept
	{
		return glNamedProgramLocalParameter4dEXT(program, target, index, x, y, z, w);
	};
	void APIENTRY NamedProgramLocalParameter4dvEXT (GLuint program, GLenum target, GLuint index, const GLdouble * params) const noexcept
	{
		return glNamedProgramLocalParameter4dvEXT(program, target, index, params);
	};
	void APIENTRY NamedProgramLocalParameter4fEXT (GLuint program, GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) const noexcept
	{
		return glNamedProgramLocalParameter4fEXT(program, target, index, x, y, z, w);
	};
	void APIENTRY NamedProgramLocalParameter4fvEXT (GLuint program, GLenum target, GLuint index, const GLfloat * params) const noexcept
	{
		return glNamedProgramLocalParameter4fvEXT(program, target, index, params);
	};
	void APIENTRY GetNamedProgramLocalParameterdvEXT (GLuint program, GLenum target, GLuint index, GLdouble * params) const noexcept
	{
		return glGetNamedProgramLocalParameterdvEXT(program, target, index, params);
	};
	void APIENTRY GetNamedProgramLocalParameterfvEXT (GLuint program, GLenum target, GLuint index, GLfloat * params) const noexcept
	{
		return glGetNamedProgramLocalParameterfvEXT(program, target, index, params);
	};
	void APIENTRY GetNamedProgramivEXT (GLuint program, GLenum target, GLenum pname, GLint * params) const noexcept
	{
		return glGetNamedProgramivEXT(program, target, pname, params);
	};
	void APIENTRY GetNamedProgramStringEXT (GLuint program, GLenum target, GLenum pname, void * string) const noexcept
	{
		return glGetNamedProgramStringEXT(program, target, pname, string);
	};
	void APIENTRY NamedRenderbufferStorageEXT (GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height) const noexcept
	{
		return glNamedRenderbufferStorageEXT(renderbuffer, internalformat, width, height);
	};
	void APIENTRY GetNamedRenderbufferParameterivEXT (GLuint renderbuffer, GLenum pname, GLint * params) const noexcept
	{
		return glGetNamedRenderbufferParameterivEXT(renderbuffer, pname, params);
	};
	void APIENTRY NamedRenderbufferStorageMultisampleEXT (GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) const noexcept
	{
		return glNamedRenderbufferStorageMultisampleEXT(renderbuffer, samples, internalformat, width, height);
	};
	void APIENTRY NamedRenderbufferStorageMultisampleCoverageEXT (GLuint renderbuffer, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height) const noexcept
	{
		return glNamedRenderbufferStorageMultisampleCoverageEXT(renderbuffer, coverageSamples, colorSamples, internalformat, width, height);
	};
	GLenum APIENTRY CheckNamedFramebufferStatusEXT (GLuint framebuffer, GLenum target) const noexcept
	{
		return glCheckNamedFramebufferStatusEXT(framebuffer, target);
	};
	void APIENTRY NamedFramebufferTexture1DEXT (GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level) const noexcept
	{
		return glNamedFramebufferTexture1DEXT(framebuffer, attachment, textarget, texture, level);
	};
	void APIENTRY NamedFramebufferTexture2DEXT (GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level) const noexcept
	{
		return glNamedFramebufferTexture2DEXT(framebuffer, attachment, textarget, texture, level);
	};
	void APIENTRY NamedFramebufferTexture3DEXT (GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset) const noexcept
	{
		return glNamedFramebufferTexture3DEXT(framebuffer, attachment, textarget, texture, level, zoffset);
	};
	void APIENTRY NamedFramebufferRenderbufferEXT (GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) const noexcept
	{
		return glNamedFramebufferRenderbufferEXT(framebuffer, attachment, renderbuffertarget, renderbuffer);
	};
	void APIENTRY GetNamedFramebufferAttachmentParameterivEXT (GLuint framebuffer, GLenum attachment, GLenum pname, GLint * params) const noexcept
	{
		return glGetNamedFramebufferAttachmentParameterivEXT(framebuffer, attachment, pname, params);
	};
	void APIENTRY GenerateTextureMipmapEXT (GLuint texture, GLenum target) const noexcept
	{
		return glGenerateTextureMipmapEXT(texture, target);
	};
	void APIENTRY GenerateMultiTexMipmapEXT (GLenum texunit, GLenum target) const noexcept
	{
		return glGenerateMultiTexMipmapEXT(texunit, target);
	};
	void APIENTRY FramebufferDrawBufferEXT (GLuint framebuffer, GLenum mode) const noexcept
	{
		return glFramebufferDrawBufferEXT(framebuffer, mode);
	};
	void APIENTRY FramebufferDrawBuffersEXT (GLuint framebuffer, GLsizei n, const GLenum * bufs) const noexcept
	{
		return glFramebufferDrawBuffersEXT(framebuffer, n, bufs);
	};
	void APIENTRY FramebufferReadBufferEXT (GLuint framebuffer, GLenum mode) const noexcept
	{
		return glFramebufferReadBufferEXT(framebuffer, mode);
	};
	void APIENTRY GetFramebufferParameterivEXT (GLuint framebuffer, GLenum pname, GLint * params) const noexcept
	{
		return glGetFramebufferParameterivEXT(framebuffer, pname, params);
	};
	void APIENTRY NamedCopyBufferSubDataEXT (GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size) const noexcept
	{
		return glNamedCopyBufferSubDataEXT(readBuffer, writeBuffer, readOffset, writeOffset, size);
	};
	void APIENTRY NamedFramebufferTextureEXT (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level) const noexcept
	{
		return glNamedFramebufferTextureEXT(framebuffer, attachment, texture, level);
	};
	void APIENTRY NamedFramebufferTextureLayerEXT (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer) const noexcept
	{
		return glNamedFramebufferTextureLayerEXT(framebuffer, attachment, texture, level, layer);
	};
	void APIENTRY NamedFramebufferTextureFaceEXT (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLenum face) const noexcept
	{
		return glNamedFramebufferTextureFaceEXT(framebuffer, attachment, texture, level, face);
	};
	void APIENTRY TextureRenderbufferEXT (GLuint texture, GLenum target, GLuint renderbuffer) const noexcept
	{
		return glTextureRenderbufferEXT(texture, target, renderbuffer);
	};
	void APIENTRY MultiTexRenderbufferEXT (GLenum texunit, GLenum target, GLuint renderbuffer) const noexcept
	{
		return glMultiTexRenderbufferEXT(texunit, target, renderbuffer);
	};
	void APIENTRY VertexArrayVertexOffsetEXT (GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset) const noexcept
	{
		return glVertexArrayVertexOffsetEXT(vaobj, buffer, size, type, stride, offset);
	};
	void APIENTRY VertexArrayColorOffsetEXT (GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset) const noexcept
	{
		return glVertexArrayColorOffsetEXT(vaobj, buffer, size, type, stride, offset);
	};
	void APIENTRY VertexArrayEdgeFlagOffsetEXT (GLuint vaobj, GLuint buffer, GLsizei stride, GLintptr offset) const noexcept
	{
		return glVertexArrayEdgeFlagOffsetEXT(vaobj, buffer, stride, offset);
	};
	void APIENTRY VertexArrayIndexOffsetEXT (GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset) const noexcept
	{
		return glVertexArrayIndexOffsetEXT(vaobj, buffer, type, stride, offset);
	};
	void APIENTRY VertexArrayNormalOffsetEXT (GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset) const noexcept
	{
		return glVertexArrayNormalOffsetEXT(vaobj, buffer, type, stride, offset);
	};
	void APIENTRY VertexArrayTexCoordOffsetEXT (GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset) const noexcept
	{
		return glVertexArrayTexCoordOffsetEXT(vaobj, buffer, size, type, stride, offset);
	};
	void APIENTRY VertexArrayMultiTexCoordOffsetEXT (GLuint vaobj, GLuint buffer, GLenum texunit, GLint size, GLenum type, GLsizei stride, GLintptr offset) const noexcept
	{
		return glVertexArrayMultiTexCoordOffsetEXT(vaobj, buffer, texunit, size, type, stride, offset);
	};
	void APIENTRY VertexArrayFogCoordOffsetEXT (GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset) const noexcept
	{
		return glVertexArrayFogCoordOffsetEXT(vaobj, buffer, type, stride, offset);
	};
	void APIENTRY VertexArraySecondaryColorOffsetEXT (GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset) const noexcept
	{
		return glVertexArraySecondaryColorOffsetEXT(vaobj, buffer, size, type, stride, offset);
	};
	void APIENTRY VertexArrayVertexAttribOffsetEXT (GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLintptr offset) const noexcept
	{
		return glVertexArrayVertexAttribOffsetEXT(vaobj, buffer, index, size, type, normalized, stride, offset);
	};
	void APIENTRY VertexArrayVertexAttribIOffsetEXT (GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset) const noexcept
	{
		return glVertexArrayVertexAttribIOffsetEXT(vaobj, buffer, index, size, type, stride, offset);
	};
	void APIENTRY EnableVertexArrayEXT (GLuint vaobj, GLenum array) const noexcept
	{
		return glEnableVertexArrayEXT(vaobj, array);
	};
	void APIENTRY DisableVertexArrayEXT (GLuint vaobj, GLenum array) const noexcept
	{
		return glDisableVertexArrayEXT(vaobj, array);
	};
	void APIENTRY EnableVertexArrayAttribEXT (GLuint vaobj, GLuint index) const noexcept
	{
		return glEnableVertexArrayAttribEXT(vaobj, index);
	};
	void APIENTRY DisableVertexArrayAttribEXT (GLuint vaobj, GLuint index) const noexcept
	{
		return glDisableVertexArrayAttribEXT(vaobj, index);
	};
	void APIENTRY GetVertexArrayIntegervEXT (GLuint vaobj, GLenum pname, GLint * param) const noexcept
	{
		return glGetVertexArrayIntegervEXT(vaobj, pname, param);
	};
	void APIENTRY GetVertexArrayPointervEXT (GLuint vaobj, GLenum pname, void * * param) const noexcept
	{
		return glGetVertexArrayPointervEXT(vaobj, pname, param);
	};
	void APIENTRY GetVertexArrayIntegeri_vEXT (GLuint vaobj, GLuint index, GLenum pname, GLint * param) const noexcept
	{
		return glGetVertexArrayIntegeri_vEXT(vaobj, index, pname, param);
	};
	void APIENTRY GetVertexArrayPointeri_vEXT (GLuint vaobj, GLuint index, GLenum pname, void * * param) const noexcept
	{
		return glGetVertexArrayPointeri_vEXT(vaobj, index, pname, param);
	};
	void * APIENTRY MapNamedBufferRangeEXT (GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access) const noexcept
	{
		return glMapNamedBufferRangeEXT(buffer, offset, length, access);
	};
	void APIENTRY FlushMappedNamedBufferRangeEXT (GLuint buffer, GLintptr offset, GLsizeiptr length) const noexcept
	{
		return glFlushMappedNamedBufferRangeEXT(buffer, offset, length);
	};
	void APIENTRY NamedBufferStorageEXT (GLuint buffer, GLsizeiptr size, const void * data, GLbitfield flags) const noexcept
	{
		return glNamedBufferStorageEXT(buffer, size, data, flags);
	};
	void APIENTRY ClearNamedBufferDataEXT (GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void * data) const noexcept
	{
		return glClearNamedBufferDataEXT(buffer, internalformat, format, type, data);
	};
	void APIENTRY ClearNamedBufferSubDataEXT (GLuint buffer, GLenum internalformat, GLsizeiptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data) const noexcept
	{
		return glClearNamedBufferSubDataEXT(buffer, internalformat, offset, size, format, type, data);
	};
	void APIENTRY NamedFramebufferParameteriEXT (GLuint framebuffer, GLenum pname, GLint param) const noexcept
	{
		return glNamedFramebufferParameteriEXT(framebuffer, pname, param);
	};
	void APIENTRY GetNamedFramebufferParameterivEXT (GLuint framebuffer, GLenum pname, GLint * params) const noexcept
	{
		return glGetNamedFramebufferParameterivEXT(framebuffer, pname, params);
	};
	void APIENTRY ProgramUniform1dEXT (GLuint program, GLint location, GLdouble x) const noexcept
	{
		return glProgramUniform1dEXT(program, location, x);
	};
	void APIENTRY ProgramUniform2dEXT (GLuint program, GLint location, GLdouble x, GLdouble y) const noexcept
	{
		return glProgramUniform2dEXT(program, location, x, y);
	};
	void APIENTRY ProgramUniform3dEXT (GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z) const noexcept
	{
		return glProgramUniform3dEXT(program, location, x, y, z);
	};
	void APIENTRY ProgramUniform4dEXT (GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w) const noexcept
	{
		return glProgramUniform4dEXT(program, location, x, y, z, w);
	};
	void APIENTRY ProgramUniform1dvEXT (GLuint program, GLint location, GLsizei count, const GLdouble * value) const noexcept
	{
		return glProgramUniform1dvEXT(program, location, count, value);
	};
	void APIENTRY ProgramUniform2dvEXT (GLuint program, GLint location, GLsizei count, const GLdouble * value) const noexcept
	{
		return glProgramUniform2dvEXT(program, location, count, value);
	};
	void APIENTRY ProgramUniform3dvEXT (GLuint program, GLint location, GLsizei count, const GLdouble * value) const noexcept
	{
		return glProgramUniform3dvEXT(program, location, count, value);
	};
	void APIENTRY ProgramUniform4dvEXT (GLuint program, GLint location, GLsizei count, const GLdouble * value) const noexcept
	{
		return glProgramUniform4dvEXT(program, location, count, value);
	};
	void APIENTRY ProgramUniformMatrix2dvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) const noexcept
	{
		return glProgramUniformMatrix2dvEXT(program, location, count, transpose, value);
	};
	void APIENTRY ProgramUniformMatrix3dvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) const noexcept
	{
		return glProgramUniformMatrix3dvEXT(program, location, count, transpose, value);
	};
	void APIENTRY ProgramUniformMatrix4dvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) const noexcept
	{
		return glProgramUniformMatrix4dvEXT(program, location, count, transpose, value);
	};
	void APIENTRY ProgramUniformMatrix2x3dvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) const noexcept
	{
		return glProgramUniformMatrix2x3dvEXT(program, location, count, transpose, value);
	};
	void APIENTRY ProgramUniformMatrix2x4dvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) const noexcept
	{
		return glProgramUniformMatrix2x4dvEXT(program, location, count, transpose, value);
	};
	void APIENTRY ProgramUniformMatrix3x2dvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) const noexcept
	{
		return glProgramUniformMatrix3x2dvEXT(program, location, count, transpose, value);
	};
	void APIENTRY ProgramUniformMatrix3x4dvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) const noexcept
	{
		return glProgramUniformMatrix3x4dvEXT(program, location, count, transpose, value);
	};
	void APIENTRY ProgramUniformMatrix4x2dvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) const noexcept
	{
		return glProgramUniformMatrix4x2dvEXT(program, location, count, transpose, value);
	};
	void APIENTRY ProgramUniformMatrix4x3dvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) const noexcept
	{
		return glProgramUniformMatrix4x3dvEXT(program, location, count, transpose, value);
	};
	void APIENTRY TextureBufferRangeEXT (GLuint texture, GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size) const noexcept
	{
		return glTextureBufferRangeEXT(texture, target, internalformat, buffer, offset, size);
	};
	void APIENTRY TextureStorage1DEXT (GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width) const noexcept
	{
		return glTextureStorage1DEXT(texture, target, levels, internalformat, width);
	};
	void APIENTRY TextureStorage2DEXT (GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height) const noexcept
	{
		return glTextureStorage2DEXT(texture, target, levels, internalformat, width, height);
	};
	void APIENTRY TextureStorage3DEXT (GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth) const noexcept
	{
		return glTextureStorage3DEXT(texture, target, levels, internalformat, width, height, depth);
	};
	void APIENTRY TextureStorage2DMultisampleEXT (GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) const noexcept
	{
		return glTextureStorage2DMultisampleEXT(texture, target, samples, internalformat, width, height, fixedsamplelocations);
	};
	void APIENTRY TextureStorage3DMultisampleEXT (GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations) const noexcept
	{
		return glTextureStorage3DMultisampleEXT(texture, target, samples, internalformat, width, height, depth, fixedsamplelocations);
	};
	void APIENTRY VertexArrayBindVertexBufferEXT (GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride) const noexcept
	{
		return glVertexArrayBindVertexBufferEXT(vaobj, bindingindex, buffer, offset, stride);
	};
	void APIENTRY VertexArrayVertexAttribFormatEXT (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset) const noexcept
	{
		return glVertexArrayVertexAttribFormatEXT(vaobj, attribindex, size, type, normalized, relativeoffset);
	};
	void APIENTRY VertexArrayVertexAttribIFormatEXT (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) const noexcept
	{
		return glVertexArrayVertexAttribIFormatEXT(vaobj, attribindex, size, type, relativeoffset);
	};
	void APIENTRY VertexArrayVertexAttribLFormatEXT (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) const noexcept
	{
		return glVertexArrayVertexAttribLFormatEXT(vaobj, attribindex, size, type, relativeoffset);
	};
	void APIENTRY VertexArrayVertexAttribBindingEXT (GLuint vaobj, GLuint attribindex, GLuint bindingindex) const noexcept
	{
		return glVertexArrayVertexAttribBindingEXT(vaobj, attribindex, bindingindex);
	};
	void APIENTRY VertexArrayVertexBindingDivisorEXT (GLuint vaobj, GLuint bindingindex, GLuint divisor) const noexcept
	{
		return glVertexArrayVertexBindingDivisorEXT(vaobj, bindingindex, divisor);
	};
	void APIENTRY VertexArrayVertexAttribLOffsetEXT (GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset) const noexcept
	{
		return glVertexArrayVertexAttribLOffsetEXT(vaobj, buffer, index, size, type, stride, offset);
	};
	void APIENTRY TexturePageCommitmentEXT (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit) const noexcept
	{
		return glTexturePageCommitmentEXT(texture, level, xoffset, yoffset, zoffset, width, height, depth, commit);
	};
	void APIENTRY VertexArrayVertexAttribDivisorEXT (GLuint vaobj, GLuint index, GLuint divisor) const noexcept
	{
		return glVertexArrayVertexAttribDivisorEXT(vaobj, index, divisor);
	};
	void APIENTRY DrawArraysInstancedEXT (GLenum mode, GLint start, GLsizei count, GLsizei primcount) const noexcept
	{
		return glDrawArraysInstancedEXT(mode, start, count, primcount);
	};
	void APIENTRY DrawElementsInstancedEXT (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount) const noexcept
	{
		return glDrawElementsInstancedEXT(mode, count, type, indices, primcount);
	};
	void APIENTRY PolygonOffsetClampEXT (GLfloat factor, GLfloat units, GLfloat clamp) const noexcept
	{
		return glPolygonOffsetClampEXT(factor, units, clamp);
	};
	void APIENTRY RasterSamplesEXT (GLuint samples, GLboolean fixedsamplelocations) const noexcept
	{
		return glRasterSamplesEXT(samples, fixedsamplelocations);
	};
	void APIENTRY UseShaderProgramEXT (GLenum type, GLuint program) const noexcept
	{
		return glUseShaderProgramEXT(type, program);
	};
	void APIENTRY ActiveProgramEXT (GLuint program) const noexcept
	{
		return glActiveProgramEXT(program);
	};
	GLuint APIENTRY CreateShaderProgramEXT (GLenum type, const GLchar * string) const noexcept
	{
		return glCreateShaderProgramEXT(type, string);
	};
	void APIENTRY FramebufferFetchBarrierEXT ( ) const noexcept
	{
		return glFramebufferFetchBarrierEXT();
	};
	void APIENTRY TexStorage1DEXT (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width) const noexcept
	{
		return glTexStorage1DEXT(target, levels, internalformat, width);
	};
	void APIENTRY TexStorage2DEXT (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height) const noexcept
	{
		return glTexStorage2DEXT(target, levels, internalformat, width, height);
	};
	void APIENTRY TexStorage3DEXT (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth) const noexcept
	{
		return glTexStorage3DEXT(target, levels, internalformat, width, height, depth);
	};
	void APIENTRY WindowRectanglesEXT (GLenum mode, GLsizei count, const GLint * box) const noexcept
	{
		return glWindowRectanglesEXT(mode, count, box);
	};
	void APIENTRY ApplyFramebufferAttachmentCMAAINTEL ( ) const noexcept
	{
		return glApplyFramebufferAttachmentCMAAINTEL();
	};
	void APIENTRY BeginPerfQueryINTEL (GLuint queryHandle) const noexcept
	{
		return glBeginPerfQueryINTEL(queryHandle);
	};
	void APIENTRY CreatePerfQueryINTEL (GLuint queryId, GLuint * queryHandle) const noexcept
	{
		return glCreatePerfQueryINTEL(queryId, queryHandle);
	};
	void APIENTRY DeletePerfQueryINTEL (GLuint queryHandle) const noexcept
	{
		return glDeletePerfQueryINTEL(queryHandle);
	};
	void APIENTRY EndPerfQueryINTEL (GLuint queryHandle) const noexcept
	{
		return glEndPerfQueryINTEL(queryHandle);
	};
	void APIENTRY GetFirstPerfQueryIdINTEL (GLuint * queryId) const noexcept
	{
		return glGetFirstPerfQueryIdINTEL(queryId);
	};
	void APIENTRY GetNextPerfQueryIdINTEL (GLuint queryId, GLuint * nextQueryId) const noexcept
	{
		return glGetNextPerfQueryIdINTEL(queryId, nextQueryId);
	};
	void APIENTRY GetPerfCounterInfoINTEL (GLuint queryId, GLuint counterId, GLuint counterNameLength, GLchar * counterName, GLuint counterDescLength, GLchar * counterDesc, GLuint * counterOffset, GLuint * counterDataSize, GLuint * counterTypeEnum, GLuint * counterDataTypeEnum, GLuint64 * rawCounterMaxValue) const noexcept
	{
		return glGetPerfCounterInfoINTEL(queryId, counterId, counterNameLength, counterName, counterDescLength, counterDesc, counterOffset, counterDataSize, counterTypeEnum, counterDataTypeEnum, rawCounterMaxValue);
	};
	void APIENTRY GetPerfQueryDataINTEL (GLuint queryHandle, GLuint flags, GLsizei dataSize, void * data, GLuint * bytesWritten) const noexcept
	{
		return glGetPerfQueryDataINTEL(queryHandle, flags, dataSize, data, bytesWritten);
	};
	void APIENTRY GetPerfQueryIdByNameINTEL (GLchar * queryName, GLuint * queryId) const noexcept
	{
		return glGetPerfQueryIdByNameINTEL(queryName, queryId);
	};
	void APIENTRY GetPerfQueryInfoINTEL (GLuint queryId, GLuint queryNameLength, GLchar * queryName, GLuint * dataSize, GLuint * noCounters, GLuint * noInstances, GLuint * capsMask) const noexcept
	{
		return glGetPerfQueryInfoINTEL(queryId, queryNameLength, queryName, dataSize, noCounters, noInstances, capsMask);
	};
	void APIENTRY FramebufferParameteriMESA (GLenum target, GLenum pname, GLint param) const noexcept
	{
		return glFramebufferParameteriMESA(target, pname, param);
	};
	void APIENTRY GetFramebufferParameterivMESA (GLenum target, GLenum pname, GLint * params) const noexcept
	{
		return glGetFramebufferParameterivMESA(target, pname, params);
	};
	void APIENTRY MultiDrawArraysIndirectBindlessNV (GLenum mode, const void * indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount) const noexcept
	{
		return glMultiDrawArraysIndirectBindlessNV(mode, indirect, drawCount, stride, vertexBufferCount);
	};
	void APIENTRY MultiDrawElementsIndirectBindlessNV (GLenum mode, GLenum type, const void * indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount) const noexcept
	{
		return glMultiDrawElementsIndirectBindlessNV(mode, type, indirect, drawCount, stride, vertexBufferCount);
	};
	void APIENTRY MultiDrawArraysIndirectBindlessCountNV (GLenum mode, const void * indirect, GLsizei drawCount, GLsizei maxDrawCount, GLsizei stride, GLint vertexBufferCount) const noexcept
	{
		return glMultiDrawArraysIndirectBindlessCountNV(mode, indirect, drawCount, maxDrawCount, stride, vertexBufferCount);
	};
	void APIENTRY MultiDrawElementsIndirectBindlessCountNV (GLenum mode, GLenum type, const void * indirect, GLsizei drawCount, GLsizei maxDrawCount, GLsizei stride, GLint vertexBufferCount) const noexcept
	{
		return glMultiDrawElementsIndirectBindlessCountNV(mode, type, indirect, drawCount, maxDrawCount, stride, vertexBufferCount);
	};
	GLuint64 APIENTRY GetTextureHandleNV (GLuint texture) const noexcept
	{
		return glGetTextureHandleNV(texture);
	};
	GLuint64 APIENTRY GetTextureSamplerHandleNV (GLuint texture, GLuint sampler) const noexcept
	{
		return glGetTextureSamplerHandleNV(texture, sampler);
	};
	void APIENTRY MakeTextureHandleResidentNV (GLuint64 handle) const noexcept
	{
		return glMakeTextureHandleResidentNV(handle);
	};
	void APIENTRY MakeTextureHandleNonResidentNV (GLuint64 handle) const noexcept
	{
		return glMakeTextureHandleNonResidentNV(handle);
	};
	GLuint64 APIENTRY GetImageHandleNV (GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format) const noexcept
	{
		return glGetImageHandleNV(texture, level, layered, layer, format);
	};
	void APIENTRY MakeImageHandleResidentNV (GLuint64 handle, GLenum access) const noexcept
	{
		return glMakeImageHandleResidentNV(handle, access);
	};
	void APIENTRY MakeImageHandleNonResidentNV (GLuint64 handle) const noexcept
	{
		return glMakeImageHandleNonResidentNV(handle);
	};
	void APIENTRY UniformHandleui64NV (GLint location, GLuint64 value) const noexcept
	{
		return glUniformHandleui64NV(location, value);
	};
	void APIENTRY UniformHandleui64vNV (GLint location, GLsizei count, const GLuint64 * value) const noexcept
	{
		return glUniformHandleui64vNV(location, count, value);
	};
	void APIENTRY ProgramUniformHandleui64NV (GLuint program, GLint location, GLuint64 value) const noexcept
	{
		return glProgramUniformHandleui64NV(program, location, value);
	};
	void APIENTRY ProgramUniformHandleui64vNV (GLuint program, GLint location, GLsizei count, const GLuint64 * values) const noexcept
	{
		return glProgramUniformHandleui64vNV(program, location, count, values);
	};
	GLboolean APIENTRY IsTextureHandleResidentNV (GLuint64 handle) const noexcept
	{
		return glIsTextureHandleResidentNV(handle);
	};
	GLboolean APIENTRY IsImageHandleResidentNV (GLuint64 handle) const noexcept
	{
		return glIsImageHandleResidentNV(handle);
	};
	void APIENTRY BlendParameteriNV (GLenum pname, GLint value) const noexcept
	{
		return glBlendParameteriNV(pname, value);
	};
	void APIENTRY BlendBarrierNV ( ) const noexcept
	{
		return glBlendBarrierNV();
	};
	void APIENTRY ViewportPositionWScaleNV (GLuint index, GLfloat xcoeff, GLfloat ycoeff) const noexcept
	{
		return glViewportPositionWScaleNV(index, xcoeff, ycoeff);
	};
	void APIENTRY CreateStatesNV (GLsizei n, GLuint * states) const noexcept
	{
		return glCreateStatesNV(n, states);
	};
	void APIENTRY DeleteStatesNV (GLsizei n, const GLuint * states) const noexcept
	{
		return glDeleteStatesNV(n, states);
	};
	GLboolean APIENTRY IsStateNV (GLuint state) const noexcept
	{
		return glIsStateNV(state);
	};
	void APIENTRY StateCaptureNV (GLuint state, GLenum mode) const noexcept
	{
		return glStateCaptureNV(state, mode);
	};
	GLuint APIENTRY GetCommandHeaderNV (GLenum tokenID, GLuint size) const noexcept
	{
		return glGetCommandHeaderNV(tokenID, size);
	};
	GLushort APIENTRY GetStageIndexNV (GLenum shadertype) const noexcept
	{
		return glGetStageIndexNV(shadertype);
	};
	void APIENTRY DrawCommandsNV (GLenum primitiveMode, GLuint buffer, const GLintptr * indirects, const GLsizei * sizes, GLuint count) const noexcept
	{
		return glDrawCommandsNV(primitiveMode, buffer, indirects, sizes, count);
	};
	void APIENTRY DrawCommandsAddressNV (GLenum primitiveMode, const GLuint64 * indirects, const GLsizei * sizes, GLuint count) const noexcept
	{
		return glDrawCommandsAddressNV(primitiveMode, indirects, sizes, count);
	};
	void APIENTRY DrawCommandsStatesNV (GLuint buffer, const GLintptr * indirects, const GLsizei * sizes, const GLuint * states, const GLuint * fbos, GLuint count) const noexcept
	{
		return glDrawCommandsStatesNV(buffer, indirects, sizes, states, fbos, count);
	};
	void APIENTRY DrawCommandsStatesAddressNV (const GLuint64 * indirects, const GLsizei * sizes, const GLuint * states, const GLuint * fbos, GLuint count) const noexcept
	{
		return glDrawCommandsStatesAddressNV(indirects, sizes, states, fbos, count);
	};
	void APIENTRY CreateCommandListsNV (GLsizei n, GLuint * lists) const noexcept
	{
		return glCreateCommandListsNV(n, lists);
	};
	void APIENTRY DeleteCommandListsNV (GLsizei n, const GLuint * lists) const noexcept
	{
		return glDeleteCommandListsNV(n, lists);
	};
	GLboolean APIENTRY IsCommandListNV (GLuint list) const noexcept
	{
		return glIsCommandListNV(list);
	};
	void APIENTRY ListDrawCommandsStatesClientNV (GLuint list, GLuint segment, const void * * indirects, const GLsizei * sizes, const GLuint * states, const GLuint * fbos, GLuint count) const noexcept
	{
		return glListDrawCommandsStatesClientNV(list, segment, indirects, sizes, states, fbos, count);
	};
	void APIENTRY CommandListSegmentsNV (GLuint list, GLuint segments) const noexcept
	{
		return glCommandListSegmentsNV(list, segments);
	};
	void APIENTRY CompileCommandListNV (GLuint list) const noexcept
	{
		return glCompileCommandListNV(list);
	};
	void APIENTRY CallCommandListNV (GLuint list) const noexcept
	{
		return glCallCommandListNV(list);
	};
	void APIENTRY BeginConditionalRenderNV (GLuint id, GLenum mode) const noexcept
	{
		return glBeginConditionalRenderNV(id, mode);
	};
	void APIENTRY EndConditionalRenderNV ( ) const noexcept
	{
		return glEndConditionalRenderNV();
	};
	void APIENTRY SubpixelPrecisionBiasNV (GLuint xbits, GLuint ybits) const noexcept
	{
		return glSubpixelPrecisionBiasNV(xbits, ybits);
	};
	void APIENTRY ConservativeRasterParameterfNV (GLenum pname, GLfloat value) const noexcept
	{
		return glConservativeRasterParameterfNV(pname, value);
	};
	void APIENTRY ConservativeRasterParameteriNV (GLenum pname, GLint param) const noexcept
	{
		return glConservativeRasterParameteriNV(pname, param);
	};
	void APIENTRY DepthRangedNV (GLdouble zNear, GLdouble zFar) const noexcept
	{
		return glDepthRangedNV(zNear, zFar);
	};
	void APIENTRY ClearDepthdNV (GLdouble depth) const noexcept
	{
		return glClearDepthdNV(depth);
	};
	void APIENTRY DepthBoundsdNV (GLdouble zmin, GLdouble zmax) const noexcept
	{
		return glDepthBoundsdNV(zmin, zmax);
	};
	void APIENTRY DrawVkImageNV (GLuint64 vkImage, GLuint sampler, GLfloat x0, GLfloat y0, GLfloat x1, GLfloat y1, GLfloat z, GLfloat s0, GLfloat t0, GLfloat s1, GLfloat t1) const noexcept
	{
		return glDrawVkImageNV(vkImage, sampler, x0, y0, x1, y1, z, s0, t0, s1, t1);
	};
	GLVULKANPROCNV APIENTRY GetVkProcAddrNV (const GLchar * name) const noexcept
	{
		return glGetVkProcAddrNV(name);
	};
	void APIENTRY WaitVkSemaphoreNV (GLuint64 vkSemaphore) const noexcept
	{
		return glWaitVkSemaphoreNV(vkSemaphore);
	};
	void APIENTRY SignalVkSemaphoreNV (GLuint64 vkSemaphore) const noexcept
	{
		return glSignalVkSemaphoreNV(vkSemaphore);
	};
	void APIENTRY SignalVkFenceNV (GLuint64 vkFence) const noexcept
	{
		return glSignalVkFenceNV(vkFence);
	};
	void APIENTRY FragmentCoverageColorNV (GLuint color) const noexcept
	{
		return glFragmentCoverageColorNV(color);
	};
	void APIENTRY CoverageModulationTableNV (GLsizei n, const GLfloat * v) const noexcept
	{
		return glCoverageModulationTableNV(n, v);
	};
	void APIENTRY GetCoverageModulationTableNV (GLsizei bufSize, GLfloat * v) const noexcept
	{
		return glGetCoverageModulationTableNV(bufSize, v);
	};
	void APIENTRY CoverageModulationNV (GLenum components) const noexcept
	{
		return glCoverageModulationNV(components);
	};
	void APIENTRY RenderbufferStorageMultisampleCoverageNV (GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height) const noexcept
	{
		return glRenderbufferStorageMultisampleCoverageNV(target, coverageSamples, colorSamples, internalformat, width, height);
	};
	void APIENTRY Uniform1i64NV (GLint location, GLint64EXT x) const noexcept
	{
		return glUniform1i64NV(location, x);
	};
	void APIENTRY Uniform2i64NV (GLint location, GLint64EXT x, GLint64EXT y) const noexcept
	{
		return glUniform2i64NV(location, x, y);
	};
	void APIENTRY Uniform3i64NV (GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z) const noexcept
	{
		return glUniform3i64NV(location, x, y, z);
	};
	void APIENTRY Uniform4i64NV (GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w) const noexcept
	{
		return glUniform4i64NV(location, x, y, z, w);
	};
	void APIENTRY Uniform1i64vNV (GLint location, GLsizei count, const GLint64EXT * value) const noexcept
	{
		return glUniform1i64vNV(location, count, value);
	};
	void APIENTRY Uniform2i64vNV (GLint location, GLsizei count, const GLint64EXT * value) const noexcept
	{
		return glUniform2i64vNV(location, count, value);
	};
	void APIENTRY Uniform3i64vNV (GLint location, GLsizei count, const GLint64EXT * value) const noexcept
	{
		return glUniform3i64vNV(location, count, value);
	};
	void APIENTRY Uniform4i64vNV (GLint location, GLsizei count, const GLint64EXT * value) const noexcept
	{
		return glUniform4i64vNV(location, count, value);
	};
	void APIENTRY Uniform1ui64NV (GLint location, GLuint64EXT x) const noexcept
	{
		return glUniform1ui64NV(location, x);
	};
	void APIENTRY Uniform2ui64NV (GLint location, GLuint64EXT x, GLuint64EXT y) const noexcept
	{
		return glUniform2ui64NV(location, x, y);
	};
	void APIENTRY Uniform3ui64NV (GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z) const noexcept
	{
		return glUniform3ui64NV(location, x, y, z);
	};
	void APIENTRY Uniform4ui64NV (GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w) const noexcept
	{
		return glUniform4ui64NV(location, x, y, z, w);
	};
	void APIENTRY Uniform1ui64vNV (GLint location, GLsizei count, const GLuint64EXT * value) const noexcept
	{
		return glUniform1ui64vNV(location, count, value);
	};
	void APIENTRY Uniform2ui64vNV (GLint location, GLsizei count, const GLuint64EXT * value) const noexcept
	{
		return glUniform2ui64vNV(location, count, value);
	};
	void APIENTRY Uniform3ui64vNV (GLint location, GLsizei count, const GLuint64EXT * value) const noexcept
	{
		return glUniform3ui64vNV(location, count, value);
	};
	void APIENTRY Uniform4ui64vNV (GLint location, GLsizei count, const GLuint64EXT * value) const noexcept
	{
		return glUniform4ui64vNV(location, count, value);
	};
	void APIENTRY GetUniformi64vNV (GLuint program, GLint location, GLint64EXT * params) const noexcept
	{
		return glGetUniformi64vNV(program, location, params);
	};
	void APIENTRY ProgramUniform1i64NV (GLuint program, GLint location, GLint64EXT x) const noexcept
	{
		return glProgramUniform1i64NV(program, location, x);
	};
	void APIENTRY ProgramUniform2i64NV (GLuint program, GLint location, GLint64EXT x, GLint64EXT y) const noexcept
	{
		return glProgramUniform2i64NV(program, location, x, y);
	};
	void APIENTRY ProgramUniform3i64NV (GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z) const noexcept
	{
		return glProgramUniform3i64NV(program, location, x, y, z);
	};
	void APIENTRY ProgramUniform4i64NV (GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w) const noexcept
	{
		return glProgramUniform4i64NV(program, location, x, y, z, w);
	};
	void APIENTRY ProgramUniform1i64vNV (GLuint program, GLint location, GLsizei count, const GLint64EXT * value) const noexcept
	{
		return glProgramUniform1i64vNV(program, location, count, value);
	};
	void APIENTRY ProgramUniform2i64vNV (GLuint program, GLint location, GLsizei count, const GLint64EXT * value) const noexcept
	{
		return glProgramUniform2i64vNV(program, location, count, value);
	};
	void APIENTRY ProgramUniform3i64vNV (GLuint program, GLint location, GLsizei count, const GLint64EXT * value) const noexcept
	{
		return glProgramUniform3i64vNV(program, location, count, value);
	};
	void APIENTRY ProgramUniform4i64vNV (GLuint program, GLint location, GLsizei count, const GLint64EXT * value) const noexcept
	{
		return glProgramUniform4i64vNV(program, location, count, value);
	};
	void APIENTRY ProgramUniform1ui64NV (GLuint program, GLint location, GLuint64EXT x) const noexcept
	{
		return glProgramUniform1ui64NV(program, location, x);
	};
	void APIENTRY ProgramUniform2ui64NV (GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y) const noexcept
	{
		return glProgramUniform2ui64NV(program, location, x, y);
	};
	void APIENTRY ProgramUniform3ui64NV (GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z) const noexcept
	{
		return glProgramUniform3ui64NV(program, location, x, y, z);
	};
	void APIENTRY ProgramUniform4ui64NV (GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w) const noexcept
	{
		return glProgramUniform4ui64NV(program, location, x, y, z, w);
	};
	void APIENTRY ProgramUniform1ui64vNV (GLuint program, GLint location, GLsizei count, const GLuint64EXT * value) const noexcept
	{
		return glProgramUniform1ui64vNV(program, location, count, value);
	};
	void APIENTRY ProgramUniform2ui64vNV (GLuint program, GLint location, GLsizei count, const GLuint64EXT * value) const noexcept
	{
		return glProgramUniform2ui64vNV(program, location, count, value);
	};
	void APIENTRY ProgramUniform3ui64vNV (GLuint program, GLint location, GLsizei count, const GLuint64EXT * value) const noexcept
	{
		return glProgramUniform3ui64vNV(program, location, count, value);
	};
	void APIENTRY ProgramUniform4ui64vNV (GLuint program, GLint location, GLsizei count, const GLuint64EXT * value) const noexcept
	{
		return glProgramUniform4ui64vNV(program, location, count, value);
	};
	void APIENTRY GetInternalformatSampleivNV (GLenum target, GLenum internalformat, GLsizei samples, GLenum pname, GLsizei count, GLint * params) const noexcept
	{
		return glGetInternalformatSampleivNV(target, internalformat, samples, pname, count, params);
	};
	void APIENTRY GetMemoryObjectDetachedResourcesuivNV (GLuint memory, GLenum pname, GLint first, GLsizei count, GLuint * params) const noexcept
	{
		return glGetMemoryObjectDetachedResourcesuivNV(memory, pname, first, count, params);
	};
	void APIENTRY ResetMemoryObjectParameterNV (GLuint memory, GLenum pname) const noexcept
	{
		return glResetMemoryObjectParameterNV(memory, pname);
	};
	void APIENTRY TexAttachMemoryNV (GLenum target, GLuint memory, GLuint64 offset) const noexcept
	{
		return glTexAttachMemoryNV(target, memory, offset);
	};
	void APIENTRY BufferAttachMemoryNV (GLenum target, GLuint memory, GLuint64 offset) const noexcept
	{
		return glBufferAttachMemoryNV(target, memory, offset);
	};
	void APIENTRY TextureAttachMemoryNV (GLuint texture, GLuint memory, GLuint64 offset) const noexcept
	{
		return glTextureAttachMemoryNV(texture, memory, offset);
	};
	void APIENTRY NamedBufferAttachMemoryNV (GLuint buffer, GLuint memory, GLuint64 offset) const noexcept
	{
		return glNamedBufferAttachMemoryNV(buffer, memory, offset);
	};
	void APIENTRY BufferPageCommitmentMemNV (GLenum target, GLintptr offset, GLsizeiptr size, GLuint memory, GLuint64 memOffset, GLboolean commit) const noexcept
	{
		return glBufferPageCommitmentMemNV(target, offset, size, memory, memOffset, commit);
	};
	void APIENTRY TexPageCommitmentMemNV (GLenum target, GLint layer, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset, GLboolean commit) const noexcept
	{
		return glTexPageCommitmentMemNV(target, layer, level, xoffset, yoffset, zoffset, width, height, depth, memory, offset, commit);
	};
	void APIENTRY NamedBufferPageCommitmentMemNV (GLuint buffer, GLintptr offset, GLsizeiptr size, GLuint memory, GLuint64 memOffset, GLboolean commit) const noexcept
	{
		return glNamedBufferPageCommitmentMemNV(buffer, offset, size, memory, memOffset, commit);
	};
	void APIENTRY TexturePageCommitmentMemNV (GLuint texture, GLint layer, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset, GLboolean commit) const noexcept
	{
		return glTexturePageCommitmentMemNV(texture, layer, level, xoffset, yoffset, zoffset, width, height, depth, memory, offset, commit);
	};
	void APIENTRY DrawMeshTasksNV (GLuint first, GLuint count) const noexcept
	{
		return glDrawMeshTasksNV(first, count);
	};
	void APIENTRY DrawMeshTasksIndirectNV (GLintptr indirect) const noexcept
	{
		return glDrawMeshTasksIndirectNV(indirect);
	};
	void APIENTRY MultiDrawMeshTasksIndirectNV (GLintptr indirect, GLsizei drawcount, GLsizei stride) const noexcept
	{
		return glMultiDrawMeshTasksIndirectNV(indirect, drawcount, stride);
	};
	void APIENTRY MultiDrawMeshTasksIndirectCountNV (GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride) const noexcept
	{
		return glMultiDrawMeshTasksIndirectCountNV(indirect, drawcount, maxdrawcount, stride);
	};
	GLuint APIENTRY GenPathsNV (GLsizei range) const noexcept
	{
		return glGenPathsNV(range);
	};
	void APIENTRY DeletePathsNV (GLuint path, GLsizei range) const noexcept
	{
		return glDeletePathsNV(path, range);
	};
	GLboolean APIENTRY IsPathNV (GLuint path) const noexcept
	{
		return glIsPathNV(path);
	};
	void APIENTRY PathCommandsNV (GLuint path, GLsizei numCommands, const GLubyte * commands, GLsizei numCoords, GLenum coordType, const void * coords) const noexcept
	{
		return glPathCommandsNV(path, numCommands, commands, numCoords, coordType, coords);
	};
	void APIENTRY PathCoordsNV (GLuint path, GLsizei numCoords, GLenum coordType, const void * coords) const noexcept
	{
		return glPathCoordsNV(path, numCoords, coordType, coords);
	};
	void APIENTRY PathSubCommandsNV (GLuint path, GLsizei commandStart, GLsizei commandsToDelete, GLsizei numCommands, const GLubyte * commands, GLsizei numCoords, GLenum coordType, const void * coords) const noexcept
	{
		return glPathSubCommandsNV(path, commandStart, commandsToDelete, numCommands, commands, numCoords, coordType, coords);
	};
	void APIENTRY PathSubCoordsNV (GLuint path, GLsizei coordStart, GLsizei numCoords, GLenum coordType, const void * coords) const noexcept
	{
		return glPathSubCoordsNV(path, coordStart, numCoords, coordType, coords);
	};
	void APIENTRY PathStringNV (GLuint path, GLenum format, GLsizei length, const void * pathString) const noexcept
	{
		return glPathStringNV(path, format, length, pathString);
	};
	void APIENTRY PathGlyphsNV (GLuint firstPathName, GLenum fontTarget, const void * fontName, GLbitfield fontStyle, GLsizei numGlyphs, GLenum type, const void * charcodes, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale) const noexcept
	{
		return glPathGlyphsNV(firstPathName, fontTarget, fontName, fontStyle, numGlyphs, type, charcodes, handleMissingGlyphs, pathParameterTemplate, emScale);
	};
	void APIENTRY PathGlyphRangeNV (GLuint firstPathName, GLenum fontTarget, const void * fontName, GLbitfield fontStyle, GLuint firstGlyph, GLsizei numGlyphs, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale) const noexcept
	{
		return glPathGlyphRangeNV(firstPathName, fontTarget, fontName, fontStyle, firstGlyph, numGlyphs, handleMissingGlyphs, pathParameterTemplate, emScale);
	};
	void APIENTRY WeightPathsNV (GLuint resultPath, GLsizei numPaths, const GLuint * paths, const GLfloat * weights) const noexcept
	{
		return glWeightPathsNV(resultPath, numPaths, paths, weights);
	};
	void APIENTRY CopyPathNV (GLuint resultPath, GLuint srcPath) const noexcept
	{
		return glCopyPathNV(resultPath, srcPath);
	};
	void APIENTRY InterpolatePathsNV (GLuint resultPath, GLuint pathA, GLuint pathB, GLfloat weight) const noexcept
	{
		return glInterpolatePathsNV(resultPath, pathA, pathB, weight);
	};
	void APIENTRY TransformPathNV (GLuint resultPath, GLuint srcPath, GLenum transformType, const GLfloat * transformValues) const noexcept
	{
		return glTransformPathNV(resultPath, srcPath, transformType, transformValues);
	};
	void APIENTRY PathParameterivNV (GLuint path, GLenum pname, const GLint * value) const noexcept
	{
		return glPathParameterivNV(path, pname, value);
	};
	void APIENTRY PathParameteriNV (GLuint path, GLenum pname, GLint value) const noexcept
	{
		return glPathParameteriNV(path, pname, value);
	};
	void APIENTRY PathParameterfvNV (GLuint path, GLenum pname, const GLfloat * value) const noexcept
	{
		return glPathParameterfvNV(path, pname, value);
	};
	void APIENTRY PathParameterfNV (GLuint path, GLenum pname, GLfloat value) const noexcept
	{
		return glPathParameterfNV(path, pname, value);
	};
	void APIENTRY PathDashArrayNV (GLuint path, GLsizei dashCount, const GLfloat * dashArray) const noexcept
	{
		return glPathDashArrayNV(path, dashCount, dashArray);
	};
	void APIENTRY PathStencilFuncNV (GLenum func, GLint ref, GLuint mask) const noexcept
	{
		return glPathStencilFuncNV(func, ref, mask);
	};
	void APIENTRY PathStencilDepthOffsetNV (GLfloat factor, GLfloat units) const noexcept
	{
		return glPathStencilDepthOffsetNV(factor, units);
	};
	void APIENTRY StencilFillPathNV (GLuint path, GLenum fillMode, GLuint mask) const noexcept
	{
		return glStencilFillPathNV(path, fillMode, mask);
	};
	void APIENTRY StencilStrokePathNV (GLuint path, GLint reference, GLuint mask) const noexcept
	{
		return glStencilStrokePathNV(path, reference, mask);
	};
	void APIENTRY StencilFillPathInstancedNV (GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum transformType, const GLfloat * transformValues) const noexcept
	{
		return glStencilFillPathInstancedNV(numPaths, pathNameType, paths, pathBase, fillMode, mask, transformType, transformValues);
	};
	void APIENTRY StencilStrokePathInstancedNV (GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLint reference, GLuint mask, GLenum transformType, const GLfloat * transformValues) const noexcept
	{
		return glStencilStrokePathInstancedNV(numPaths, pathNameType, paths, pathBase, reference, mask, transformType, transformValues);
	};
	void APIENTRY PathCoverDepthFuncNV (GLenum func) const noexcept
	{
		return glPathCoverDepthFuncNV(func);
	};
	void APIENTRY CoverFillPathNV (GLuint path, GLenum coverMode) const noexcept
	{
		return glCoverFillPathNV(path, coverMode);
	};
	void APIENTRY CoverStrokePathNV (GLuint path, GLenum coverMode) const noexcept
	{
		return glCoverStrokePathNV(path, coverMode);
	};
	void APIENTRY CoverFillPathInstancedNV (GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat * transformValues) const noexcept
	{
		return glCoverFillPathInstancedNV(numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues);
	};
	void APIENTRY CoverStrokePathInstancedNV (GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat * transformValues) const noexcept
	{
		return glCoverStrokePathInstancedNV(numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues);
	};
	void APIENTRY GetPathParameterivNV (GLuint path, GLenum pname, GLint * value) const noexcept
	{
		return glGetPathParameterivNV(path, pname, value);
	};
	void APIENTRY GetPathParameterfvNV (GLuint path, GLenum pname, GLfloat * value) const noexcept
	{
		return glGetPathParameterfvNV(path, pname, value);
	};
	void APIENTRY GetPathCommandsNV (GLuint path, GLubyte * commands) const noexcept
	{
		return glGetPathCommandsNV(path, commands);
	};
	void APIENTRY GetPathCoordsNV (GLuint path, GLfloat * coords) const noexcept
	{
		return glGetPathCoordsNV(path, coords);
	};
	void APIENTRY GetPathDashArrayNV (GLuint path, GLfloat * dashArray) const noexcept
	{
		return glGetPathDashArrayNV(path, dashArray);
	};
	void APIENTRY GetPathMetricsNV (GLbitfield metricQueryMask, GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLsizei stride, GLfloat * metrics) const noexcept
	{
		return glGetPathMetricsNV(metricQueryMask, numPaths, pathNameType, paths, pathBase, stride, metrics);
	};
	void APIENTRY GetPathMetricRangeNV (GLbitfield metricQueryMask, GLuint firstPathName, GLsizei numPaths, GLsizei stride, GLfloat * metrics) const noexcept
	{
		return glGetPathMetricRangeNV(metricQueryMask, firstPathName, numPaths, stride, metrics);
	};
	void APIENTRY GetPathSpacingNV (GLenum pathListMode, GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLfloat advanceScale, GLfloat kerningScale, GLenum transformType, GLfloat * returnedSpacing) const noexcept
	{
		return glGetPathSpacingNV(pathListMode, numPaths, pathNameType, paths, pathBase, advanceScale, kerningScale, transformType, returnedSpacing);
	};
	GLboolean APIENTRY IsPointInFillPathNV (GLuint path, GLuint mask, GLfloat x, GLfloat y) const noexcept
	{
		return glIsPointInFillPathNV(path, mask, x, y);
	};
	GLboolean APIENTRY IsPointInStrokePathNV (GLuint path, GLfloat x, GLfloat y) const noexcept
	{
		return glIsPointInStrokePathNV(path, x, y);
	};
	GLfloat APIENTRY GetPathLengthNV (GLuint path, GLsizei startSegment, GLsizei numSegments) const noexcept
	{
		return glGetPathLengthNV(path, startSegment, numSegments);
	};
	GLboolean APIENTRY PointAlongPathNV (GLuint path, GLsizei startSegment, GLsizei numSegments, GLfloat distance, GLfloat * x, GLfloat * y, GLfloat * tangentX, GLfloat * tangentY) const noexcept
	{
		return glPointAlongPathNV(path, startSegment, numSegments, distance, x, y, tangentX, tangentY);
	};
	void APIENTRY MatrixLoad3x2fNV (GLenum matrixMode, const GLfloat * m) const noexcept
	{
		return glMatrixLoad3x2fNV(matrixMode, m);
	};
	void APIENTRY MatrixLoad3x3fNV (GLenum matrixMode, const GLfloat * m) const noexcept
	{
		return glMatrixLoad3x3fNV(matrixMode, m);
	};
	void APIENTRY MatrixLoadTranspose3x3fNV (GLenum matrixMode, const GLfloat * m) const noexcept
	{
		return glMatrixLoadTranspose3x3fNV(matrixMode, m);
	};
	void APIENTRY MatrixMult3x2fNV (GLenum matrixMode, const GLfloat * m) const noexcept
	{
		return glMatrixMult3x2fNV(matrixMode, m);
	};
	void APIENTRY MatrixMult3x3fNV (GLenum matrixMode, const GLfloat * m) const noexcept
	{
		return glMatrixMult3x3fNV(matrixMode, m);
	};
	void APIENTRY MatrixMultTranspose3x3fNV (GLenum matrixMode, const GLfloat * m) const noexcept
	{
		return glMatrixMultTranspose3x3fNV(matrixMode, m);
	};
	void APIENTRY StencilThenCoverFillPathNV (GLuint path, GLenum fillMode, GLuint mask, GLenum coverMode) const noexcept
	{
		return glStencilThenCoverFillPathNV(path, fillMode, mask, coverMode);
	};
	void APIENTRY StencilThenCoverStrokePathNV (GLuint path, GLint reference, GLuint mask, GLenum coverMode) const noexcept
	{
		return glStencilThenCoverStrokePathNV(path, reference, mask, coverMode);
	};
	void APIENTRY StencilThenCoverFillPathInstancedNV (GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat * transformValues) const noexcept
	{
		return glStencilThenCoverFillPathInstancedNV(numPaths, pathNameType, paths, pathBase, fillMode, mask, coverMode, transformType, transformValues);
	};
	void APIENTRY StencilThenCoverStrokePathInstancedNV (GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLint reference, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat * transformValues) const noexcept
	{
		return glStencilThenCoverStrokePathInstancedNV(numPaths, pathNameType, paths, pathBase, reference, mask, coverMode, transformType, transformValues);
	};
	GLenum APIENTRY PathGlyphIndexRangeNV (GLenum fontTarget, const void * fontName, GLbitfield fontStyle, GLuint pathParameterTemplate, GLfloat emScale, GLuint * baseAndCount) const noexcept
	{
		return glPathGlyphIndexRangeNV(fontTarget, fontName, fontStyle, pathParameterTemplate, emScale, baseAndCount);
	};
	GLenum APIENTRY PathGlyphIndexArrayNV (GLuint firstPathName, GLenum fontTarget, const void * fontName, GLbitfield fontStyle, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale) const noexcept
	{
		return glPathGlyphIndexArrayNV(firstPathName, fontTarget, fontName, fontStyle, firstGlyphIndex, numGlyphs, pathParameterTemplate, emScale);
	};
	GLenum APIENTRY PathMemoryGlyphIndexArrayNV (GLuint firstPathName, GLenum fontTarget, GLsizeiptr fontSize, const void * fontData, GLsizei faceIndex, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale) const noexcept
	{
		return glPathMemoryGlyphIndexArrayNV(firstPathName, fontTarget, fontSize, fontData, faceIndex, firstGlyphIndex, numGlyphs, pathParameterTemplate, emScale);
	};
	void APIENTRY ProgramPathFragmentInputGenNV (GLuint program, GLint location, GLenum genMode, GLint components, const GLfloat * coeffs) const noexcept
	{
		return glProgramPathFragmentInputGenNV(program, location, genMode, components, coeffs);
	};
	void APIENTRY GetProgramResourcefvNV (GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei count, GLsizei * length, GLfloat * params) const noexcept
	{
		return glGetProgramResourcefvNV(program, programInterface, index, propCount, props, count, length, params);
	};
	void APIENTRY FramebufferSampleLocationsfvNV (GLenum target, GLuint start, GLsizei count, const GLfloat * v) const noexcept
	{
		return glFramebufferSampleLocationsfvNV(target, start, count, v);
	};
	void APIENTRY NamedFramebufferSampleLocationsfvNV (GLuint framebuffer, GLuint start, GLsizei count, const GLfloat * v) const noexcept
	{
		return glNamedFramebufferSampleLocationsfvNV(framebuffer, start, count, v);
	};
	void APIENTRY ResolveDepthValuesNV ( ) const noexcept
	{
		return glResolveDepthValuesNV();
	};
	void APIENTRY ScissorExclusiveNV (GLint x, GLint y, GLsizei width, GLsizei height) const noexcept
	{
		return glScissorExclusiveNV(x, y, width, height);
	};
	void APIENTRY ScissorExclusiveArrayvNV (GLuint first, GLsizei count, const GLint * v) const noexcept
	{
		return glScissorExclusiveArrayvNV(first, count, v);
	};
	void APIENTRY MakeBufferResidentNV (GLenum target, GLenum access) const noexcept
	{
		return glMakeBufferResidentNV(target, access);
	};
	void APIENTRY MakeBufferNonResidentNV (GLenum target) const noexcept
	{
		return glMakeBufferNonResidentNV(target);
	};
	GLboolean APIENTRY IsBufferResidentNV (GLenum target) const noexcept
	{
		return glIsBufferResidentNV(target);
	};
	void APIENTRY MakeNamedBufferResidentNV (GLuint buffer, GLenum access) const noexcept
	{
		return glMakeNamedBufferResidentNV(buffer, access);
	};
	void APIENTRY MakeNamedBufferNonResidentNV (GLuint buffer) const noexcept
	{
		return glMakeNamedBufferNonResidentNV(buffer);
	};
	GLboolean APIENTRY IsNamedBufferResidentNV (GLuint buffer) const noexcept
	{
		return glIsNamedBufferResidentNV(buffer);
	};
	void APIENTRY GetBufferParameterui64vNV (GLenum target, GLenum pname, GLuint64EXT * params) const noexcept
	{
		return glGetBufferParameterui64vNV(target, pname, params);
	};
	void APIENTRY GetNamedBufferParameterui64vNV (GLuint buffer, GLenum pname, GLuint64EXT * params) const noexcept
	{
		return glGetNamedBufferParameterui64vNV(buffer, pname, params);
	};
	void APIENTRY GetIntegerui64vNV (GLenum value, GLuint64EXT * result) const noexcept
	{
		return glGetIntegerui64vNV(value, result);
	};
	void APIENTRY Uniformui64NV (GLint location, GLuint64EXT value) const noexcept
	{
		return glUniformui64NV(location, value);
	};
	void APIENTRY Uniformui64vNV (GLint location, GLsizei count, const GLuint64EXT * value) const noexcept
	{
		return glUniformui64vNV(location, count, value);
	};
	void APIENTRY GetUniformui64vNV (GLuint program, GLint location, GLuint64EXT * params) const noexcept
	{
		return glGetUniformui64vNV(program, location, params);
	};
	void APIENTRY ProgramUniformui64NV (GLuint program, GLint location, GLuint64EXT value) const noexcept
	{
		return glProgramUniformui64NV(program, location, value);
	};
	void APIENTRY ProgramUniformui64vNV (GLuint program, GLint location, GLsizei count, const GLuint64EXT * value) const noexcept
	{
		return glProgramUniformui64vNV(program, location, count, value);
	};
	void APIENTRY BindShadingRateImageNV (GLuint texture) const noexcept
	{
		return glBindShadingRateImageNV(texture);
	};
	void APIENTRY GetShadingRateImagePaletteNV (GLuint viewport, GLuint entry, GLenum * rate) const noexcept
	{
		return glGetShadingRateImagePaletteNV(viewport, entry, rate);
	};
	void APIENTRY GetShadingRateSampleLocationivNV (GLenum rate, GLuint samples, GLuint index, GLint * location) const noexcept
	{
		return glGetShadingRateSampleLocationivNV(rate, samples, index, location);
	};
	void APIENTRY ShadingRateImageBarrierNV (GLboolean synchronize) const noexcept
	{
		return glShadingRateImageBarrierNV(synchronize);
	};
	void APIENTRY ShadingRateImagePaletteNV (GLuint viewport, GLuint first, GLsizei count, const GLenum * rates) const noexcept
	{
		return glShadingRateImagePaletteNV(viewport, first, count, rates);
	};
	void APIENTRY ShadingRateSampleOrderNV (GLenum order) const noexcept
	{
		return glShadingRateSampleOrderNV(order);
	};
	void APIENTRY ShadingRateSampleOrderCustomNV (GLenum rate, GLuint samples, const GLint * locations) const noexcept
	{
		return glShadingRateSampleOrderCustomNV(rate, samples, locations);
	};
	void APIENTRY TextureBarrierNV ( ) const noexcept
	{
		return glTextureBarrierNV();
	};
	void APIENTRY VertexAttribL1i64NV (GLuint index, GLint64EXT x) const noexcept
	{
		return glVertexAttribL1i64NV(index, x);
	};
	void APIENTRY VertexAttribL2i64NV (GLuint index, GLint64EXT x, GLint64EXT y) const noexcept
	{
		return glVertexAttribL2i64NV(index, x, y);
	};
	void APIENTRY VertexAttribL3i64NV (GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z) const noexcept
	{
		return glVertexAttribL3i64NV(index, x, y, z);
	};
	void APIENTRY VertexAttribL4i64NV (GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w) const noexcept
	{
		return glVertexAttribL4i64NV(index, x, y, z, w);
	};
	void APIENTRY VertexAttribL1i64vNV (GLuint index, const GLint64EXT * v) const noexcept
	{
		return glVertexAttribL1i64vNV(index, v);
	};
	void APIENTRY VertexAttribL2i64vNV (GLuint index, const GLint64EXT * v) const noexcept
	{
		return glVertexAttribL2i64vNV(index, v);
	};
	void APIENTRY VertexAttribL3i64vNV (GLuint index, const GLint64EXT * v) const noexcept
	{
		return glVertexAttribL3i64vNV(index, v);
	};
	void APIENTRY VertexAttribL4i64vNV (GLuint index, const GLint64EXT * v) const noexcept
	{
		return glVertexAttribL4i64vNV(index, v);
	};
	void APIENTRY VertexAttribL1ui64NV (GLuint index, GLuint64EXT x) const noexcept
	{
		return glVertexAttribL1ui64NV(index, x);
	};
	void APIENTRY VertexAttribL2ui64NV (GLuint index, GLuint64EXT x, GLuint64EXT y) const noexcept
	{
		return glVertexAttribL2ui64NV(index, x, y);
	};
	void APIENTRY VertexAttribL3ui64NV (GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z) const noexcept
	{
		return glVertexAttribL3ui64NV(index, x, y, z);
	};
	void APIENTRY VertexAttribL4ui64NV (GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w) const noexcept
	{
		return glVertexAttribL4ui64NV(index, x, y, z, w);
	};
	void APIENTRY VertexAttribL1ui64vNV (GLuint index, const GLuint64EXT * v) const noexcept
	{
		return glVertexAttribL1ui64vNV(index, v);
	};
	void APIENTRY VertexAttribL2ui64vNV (GLuint index, const GLuint64EXT * v) const noexcept
	{
		return glVertexAttribL2ui64vNV(index, v);
	};
	void APIENTRY VertexAttribL3ui64vNV (GLuint index, const GLuint64EXT * v) const noexcept
	{
		return glVertexAttribL3ui64vNV(index, v);
	};
	void APIENTRY VertexAttribL4ui64vNV (GLuint index, const GLuint64EXT * v) const noexcept
	{
		return glVertexAttribL4ui64vNV(index, v);
	};
	void APIENTRY GetVertexAttribLi64vNV (GLuint index, GLenum pname, GLint64EXT * params) const noexcept
	{
		return glGetVertexAttribLi64vNV(index, pname, params);
	};
	void APIENTRY GetVertexAttribLui64vNV (GLuint index, GLenum pname, GLuint64EXT * params) const noexcept
	{
		return glGetVertexAttribLui64vNV(index, pname, params);
	};
	void APIENTRY VertexAttribLFormatNV (GLuint index, GLint size, GLenum type, GLsizei stride) const noexcept
	{
		return glVertexAttribLFormatNV(index, size, type, stride);
	};
	void APIENTRY BufferAddressRangeNV (GLenum pname, GLuint index, GLuint64EXT address, GLsizeiptr length) const noexcept
	{
		return glBufferAddressRangeNV(pname, index, address, length);
	};
	void APIENTRY VertexFormatNV (GLint size, GLenum type, GLsizei stride) const noexcept
	{
		return glVertexFormatNV(size, type, stride);
	};
	void APIENTRY NormalFormatNV (GLenum type, GLsizei stride) const noexcept
	{
		return glNormalFormatNV(type, stride);
	};
	void APIENTRY ColorFormatNV (GLint size, GLenum type, GLsizei stride) const noexcept
	{
		return glColorFormatNV(size, type, stride);
	};
	void APIENTRY IndexFormatNV (GLenum type, GLsizei stride) const noexcept
	{
		return glIndexFormatNV(type, stride);
	};
	void APIENTRY TexCoordFormatNV (GLint size, GLenum type, GLsizei stride) const noexcept
	{
		return glTexCoordFormatNV(size, type, stride);
	};
	void APIENTRY EdgeFlagFormatNV (GLsizei stride) const noexcept
	{
		return glEdgeFlagFormatNV(stride);
	};
	void APIENTRY SecondaryColorFormatNV (GLint size, GLenum type, GLsizei stride) const noexcept
	{
		return glSecondaryColorFormatNV(size, type, stride);
	};
	void APIENTRY FogCoordFormatNV (GLenum type, GLsizei stride) const noexcept
	{
		return glFogCoordFormatNV(type, stride);
	};
	void APIENTRY VertexAttribFormatNV (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride) const noexcept
	{
		return glVertexAttribFormatNV(index, size, type, normalized, stride);
	};
	void APIENTRY VertexAttribIFormatNV (GLuint index, GLint size, GLenum type, GLsizei stride) const noexcept
	{
		return glVertexAttribIFormatNV(index, size, type, stride);
	};
	void APIENTRY GetIntegerui64i_vNV (GLenum value, GLuint index, GLuint64EXT * result) const noexcept
	{
		return glGetIntegerui64i_vNV(value, index, result);
	};
	void APIENTRY ViewportSwizzleNV (GLuint index, GLenum swizzlex, GLenum swizzley, GLenum swizzlez, GLenum swizzlew) const noexcept
	{
		return glViewportSwizzleNV(index, swizzlex, swizzley, swizzlez, swizzlew);
	};
	void APIENTRY FramebufferTextureMultiviewOVR (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint baseViewIndex, GLsizei numViews) const noexcept
	{
		return glFramebufferTextureMultiviewOVR(target, attachment, texture, level, baseViewIndex, numViews);
	};

	context() = default;
};

};
