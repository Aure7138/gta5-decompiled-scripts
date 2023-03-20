#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 10;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 2;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 8;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 8;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	float fLocal_90 = 0f;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	int iLocal_93 = 0;
	bool bLocal_94 = 0;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	var uLocal_102 = 0;
	int iLocal_103 = 0;
	var uLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	var uLocal_110[1] = { 0 };
	char cLocal_112[16] = "";
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	bool bLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	bool bLocal_123 = 0;
	int iLocal_124 = 0;
	float fLocal_125 = 0f;
	float fLocal_126 = 0f;
	float fLocal_127 = 0f;
	float fLocal_128 = 0f;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	char cLocal_137[16] = "";
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 16;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	int iLocal_309 = 0;
	char cLocal_310[16] = "";
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	struct<3> Local_314 = { 0, 0, 0 } ;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320[7] = { 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_328 = 0;
	bool bLocal_329 = 0;
	bool bLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	struct<3000> Local_334 = { 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_3334 = { 0, 0, 0 } ;
	char cLocal_3337[64] = "";
	var uLocal_3345 = 0;
	var uLocal_3346 = 0;
	var uLocal_3347 = 0;
	var uLocal_3348 = 0;
	var uLocal_3349 = 0;
	var uLocal_3350 = 0;
	var uLocal_3351 = 0;
	var uLocal_3352 = 0;
	int iLocal_3353 = 0;
	var uLocal_3354 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_90 = ((0.05f + 0.275f) - 0.01f);
	iLocal_99 = 9999;
	iLocal_100 = 9999;
	fLocal_125 = 0.82f;
	fLocal_126 = 0.42f;
	fLocal_127 = 0f;
	fLocal_128 = 0f;
	unk_0xB64A6F2B8046CEF8();
	unk_0x88B0F0DC270164B7(&Global_2313, 17);
	unk_0x09C86C0C5CA26B1E(&Global_2314, 18);
	unk_0x09C86C0C5CA26B1E(&Global_2314, 20);
	uLocal_306 = Global_101553.f_32740[12 /*29*/].f_1;
	uLocal_307 = Global_101553.f_32740[2 /*29*/].f_1;
	uLocal_308 = Global_101553.f_32740[0 /*29*/].f_1;
	iLocal_107 = unk_0x2657E29E0DD8087E();
	if (Global_69617)
	{
		func_265();
	}
	else
	{
		func_255();
	}
	if (!Global_14443.f_1 == 10)
	{
		if (Global_14443.f_1 > 3)
		{
			if (Global_14443.f_1 != 9)
			{
				Global_14443.f_1 = 7;
			}
		}
	}
	iLocal_134 = unk_0xDF658EB6CA91DFBC();
	Global_101553.f_32740[147 /*29*/].f_1 = 1320;
	Global_101553.f_32740[74 /*29*/].f_1 = 180;
	Global_101553.f_32740[75 /*29*/].f_1 = 190;
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x08BA6DD398CA197C(Global_2314, 18))
		{
			func_254();
			if (Global_14443.f_1 > 3)
			{
				Global_14443.f_1 = 8;
			}
			unk_0x09C86C0C5CA26B1E(&Global_2314, 18);
			func_253();
		}
		if ((iLocal_119 == 1 && Global_14443.f_1 == 10) && Local_334.f_2999 == 1)
		{
			func_170();
		}
		if (Global_14443.f_1 != 9)
		{
			switch (Global_14443.f_1)
			{
				case 7:
					if (unk_0x08BA6DD398CA197C(Global_2313, 16))
					{
						func_169();
					}
					else
					{
						func_166();
						if (unk_0x08BA6DD398CA197C(Global_2314, 0))
						{
							iLocal_135 = unk_0xDF658EB6CA91DFBC();
							if ((iLocal_135 - iLocal_134) > 1000)
							{
								if (iLocal_136)
								{
									func_165();
								}
								else
								{
									func_147();
								}
							}
							if (iLocal_136)
							{
								func_146();
							}
						}
						else
						{
							func_147();
						}
					}
					if (!unk_0x08BA6DD398CA197C(Global_2313, 9))
					{
						if (func_145(2, Global_14415, 0))
						{
							if (unk_0x08BA6DD398CA197C(Global_2314, 0))
							{
							}
							else if (Global_14386 == 0)
							{
								if (!unk_0x08BA6DD398CA197C(Global_2314, 19))
								{
									func_143();
									func_142(Global_14424, "SET_DATA_SLOT_EMPTY", 11f, -1082130432, -1082130432, -1082130432, -1082130432);
									iLocal_109 = 0;
									StringCopy(&cLocal_112, "", 16);
									func_141();
									Global_14423 = 0;
									iLocal_119 = 0;
									func_142(Global_14424, "DISPLAY_VIEW", 11f, -1082130432, -1082130432, -1082130432, -1082130432);
									func_140(Global_14424, "SET_HEADER", "CELL_221", 0, 0, 0, 0);
									if (Global_14431)
									{
										func_139(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
										func_139(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
										unk_0x88B0F0DC270164B7(&Global_2313, 17);
										func_139(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
									}
									else
									{
										func_139(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
										func_139(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
										unk_0x88B0F0DC270164B7(&Global_2313, 17);
										func_139(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
									}
									if (Global_14443.f_1 > 3)
									{
										Global_14443.f_1 = 8;
									}
								}
							}
						}
					}
					break;
				
				case 8:
					if (iLocal_119 == 1)
					{
						func_166();
						func_170();
					}
					else if (iLocal_117 == 0)
					{
						func_129();
						func_122();
					}
					else
					{
						if (unk_0x83666F9FB8FEBD4B() > 1500)
						{
							iLocal_332 = 0;
							while (iLocal_332 < 4)
							{
								if (unk_0x28C1B9853548BD8E(&(Global_101553.f_32740[Global_1628 /*29*/].f_3), &(Global_2151[iLocal_332 /*16*/])))
								{
									if (!unk_0x28C1B9853548BD8E(&(Global_2151[iLocal_332 /*16*/].f_8), "CELL_SFUN_NULL"))
									{
										bLocal_329 = true;
										iLocal_331 = iLocal_332;
									}
									else
									{
										bLocal_329 = false;
									}
								}
								iLocal_332++;
							}
							if (iLocal_118 == 0)
							{
								unk_0xB9D4F4DE7E7EC038(Global_14424, "GET_CURRENT_SELECTION");
								uLocal_102 = unk_0xC23FC7D89C4FAF05();
								while (!unk_0x6F61AEBF81DF1A16(uLocal_102))
								{
									unk_0x4EDE34FBADD967A6(0);
								}
								iLocal_103 = unk_0xD93E20F39826C097(uLocal_102);
								func_120();
							}
						}
						func_166();
						if (bLocal_330 == 1)
						{
							if (!Global_101553.f_16958.f_396)
							{
								if (!func_116(Global_14443, Global_1628))
								{
									Global_101553.f_16958.f_396 = 1;
								}
							}
						}
						if (func_116(Global_14443, Global_1628))
						{
							if (!Global_101553.f_16958.f_397)
							{
								if (bLocal_329 == 1)
								{
									if (func_115(Global_87586))
									{
										switch (func_113("AM_H_BBUDDY"))
										{
											case 2:
												func_111("AM_H_BBUDDY", 2, 500, 10000, 10000, 7, 0, 0, 0);
												break;
											
											case 1:
												Global_101553.f_16958.f_397 = 1;
												break;
										}
										if (func_113("AM_H_BBUDDY1") == 0)
										{
											func_106("AM_H_BBUDDY1", 1);
										}
									}
									else
									{
										switch (func_113("AM_H_BBUDDY1"))
										{
											case 2:
												func_111("AM_H_BBUDDY1", 2, 500, 10000, 10000, 7, 0, 0, 0);
												break;
											
											case 1:
												Global_101553.f_16958.f_397 = 1;
												break;
										}
										if (func_113("AM_H_BBUDDY") == 0)
										{
											func_106("AM_H_BBUDDY", 1);
										}
									}
								}
							}
						}
						if (iLocal_118)
						{
							func_105();
						}
						else
						{
							func_76();
						}
					}
					if (func_145(2, Global_14411, 0))
					{
						func_75();
						Global_14421 = 1;
						if (Global_69617)
						{
							func_265();
						}
						else
						{
							func_255();
						}
						unk_0x4EDE34FBADD967A6(0);
						if (Global_14443.f_1 > 3)
						{
							Global_14443.f_1 = 7;
						}
						StringCopy(&cLocal_112, "", 16);
						if (iLocal_117 == 1)
						{
							iLocal_117 = 0;
						}
						if (iLocal_118 == 1)
						{
							iLocal_118 = 0;
						}
						iLocal_119 = 0;
					}
					break;
				
				case 10:
					if (iLocal_130 == 4)
					{
					}
					func_3();
					break;
				
				case 6:
					func_253();
					break;
				
				default:
					break;
			}
			if (!Global_14443.f_1 == 8)
			{
				if ((Global_2921 - Global_2920) > Global_2922)
				{
					if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
					{
						if (unk_0xDC48E9E2CC7437D3(unk_0x0C1D3C552325765B()))
						{
							if (func_145(2, Global_14411, 0))
							{
								if (unk_0x08BA6DD398CA197C(Global_2314, 0))
								{
									func_75();
								}
								else
								{
									func_75();
									if (!Global_14443.f_1 == 10)
									{
										func_253();
									}
									else if (Global_1628 == 132)
									{
										if (Global_2487434.f_1 || unk_0x08BA6DD398CA197C(Global_2314, 20))
										{
											Global_14443.f_1 = 7;
											func_142(Global_14424, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
											if (unk_0x08BA6DD398CA197C(Global_2314, 0))
											{
												func_140(Global_14424, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
											}
											else
											{
												func_140(Global_14424, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
											}
											unk_0x15761381A3072BFA(iLocal_107);
											iLocal_130 = 0;
										}
									}
									else
									{
										func_254();
										Global_14443.f_1 = 7;
										func_2();
										func_142(Global_14424, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
										if (unk_0x08BA6DD398CA197C(Global_2314, 0))
										{
											func_140(Global_14424, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
										}
										else
										{
											func_140(Global_14424, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
										}
										unk_0x15761381A3072BFA(iLocal_107);
										iLocal_130 = 0;
									}
								}
							}
						}
					}
				}
			}
		}
		else
		{
			Global_14445 = 6;
			func_253();
		}
		if (func_1())
		{
			func_253();
		}
	}
}

int func_1()
{
	if (((Global_14443.f_1 == 1 || Global_14443.f_1 == 3) || Global_14443.f_1 == 0) || Global_14387 == 1)
	{
		Global_14430 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	if (!Global_14443.f_1 == 10 && !Global_14443.f_1 == 9)
	{
		if (unk_0x08BA6DD398CA197C(Global_2313, 9))
		{
			unk_0x4EDE34FBADD967A6(750);
		}
		if (Global_14443.f_1 > 6)
		{
			func_142(Global_14424, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
			if (unk_0x08BA6DD398CA197C(Global_2314, 0))
			{
				func_140(Global_14424, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
			}
			else
			{
				func_140(Global_14424, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
			}
			Global_2316 = 99;
			if (unk_0x08BA6DD398CA197C(Global_2313, 9))
			{
				if (Global_14431)
				{
					func_139(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
					func_139(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_139(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
					func_139(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_139(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x09C86C0C5CA26B1E(&Global_2313, 17);
			}
			else if (unk_0x08BA6DD398CA197C(Global_2314, 0))
			{
				if (Global_14431)
				{
					func_139(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
					func_139(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_139(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
					func_139(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_139(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14431)
			{
				if (iLocal_97 > 0)
				{
					func_139(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				}
				else
				{
					func_139(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				}
				if (Global_14386 == 0)
				{
					func_139(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, "CELL_207", 0, 0, 0, 0);
					unk_0x88B0F0DC270164B7(&Global_2313, 17);
				}
				else
				{
					func_139(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0x88B0F0DC270164B7(&Global_2313, 17);
				}
				func_139(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				if (iLocal_97 > 0)
				{
					func_139(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				else
				{
					func_139(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_139(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x88B0F0DC270164B7(&Global_2313, 17);
				func_139(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_3()
{
	int iVar0;
	struct<3> Var1;
	int iVar7;
	
	switch (iLocal_130)
	{
		case 0:
			if (Global_1628 == 81)
			{
				if (Global_1572930 == 0)
				{
					Global_1572930 = 1;
				}
				if (unk_0x6F8CE3FB00C438BF("LOWCAAU"))
				{
					unk_0x56E509B4C2EA3ADA("LOWCAAU", 15);
					while (!unk_0x985A6C5313B2276C(15))
					{
						unk_0x4EDE34FBADD967A6(0);
					}
				}
				StringCopy(&cLocal_137, "LOWCA_CALL10_1", 16);
			}
			else
			{
				if (unk_0x6F8CE3FB00C438BF(&Global_16768))
				{
					unk_0x7BCE93123FE81E45(&Global_16768, 1);
					while (!unk_0x985A6C5313B2276C(1))
					{
						unk_0x4EDE34FBADD967A6(0);
					}
				}
				cLocal_137 = { Global_117[Global_1628 /*10*/] };
				StringConCat(&cLocal_137, "_1", 16);
			}
			if (unk_0x7179DC5DD4B8EEBC(&cLocal_137) || iLocal_309 == 1)
			{
				iLocal_131 = Global_16765;
				if (func_74(129))
				{
					iLocal_131 = Global_88167;
				}
			}
			else
			{
				iLocal_131 = Global_16764;
			}
			if ((iLocal_309 == 1 && unk_0x28C1B9853548BD8E(&cLocal_310, "CELLPHONE_CHEAT")) && Global_69617 == 0)
			{
				if ((unk_0x28C1B9853548BD8E(&Local_314, "CHEAT_SEAPLANE") || unk_0x28C1B9853548BD8E(&Local_314, "CHEAT_DUELC")) || unk_0x28C1B9853548BD8E(&Local_314, "CHEAT_BUBBLE"))
				{
					bLocal_123 = true;
				}
				if (bLocal_123)
				{
					if (func_73())
					{
						iLocal_124 = 0;
					}
					else
					{
						iLocal_124 = 1;
					}
				}
				if (iLocal_124 == 0)
				{
					iLocal_132 = unk_0xDF658EB6CA91DFBC();
					unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
					unk_0x7CBFB9F4AF33C67E(4);
					unk_0x7CBFB9F4AF33C67E(0);
					unk_0x7CBFB9F4AF33C67E(3);
					unk_0x709662CF2BD061A4("STRING");
					unk_0xAACCC88E8429891E(&cLocal_112, -1);
					unk_0x1E77BE8F4283FA05();
					func_72("CELL_300");
					if (unk_0x28C1B9853548BD8E(&Local_314, "CHEAT_MONOC"))
					{
						func_72("CELL_MONOSIGNAL");
					}
					else if (unk_0x28C1B9853548BD8E(&Local_314, "CHEAT_DIRECTOR"))
					{
						func_72("CELL_DRCT");
					}
					else
					{
						func_72("CELL_CHEAT");
					}
					func_72("CELL_195");
					unk_0xE73340DA551C95E1();
					func_142(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
					iLocal_130 = 1;
				}
				else
				{
					iLocal_130 = 2;
					iLocal_132 = unk_0xDF658EB6CA91DFBC();
				}
			}
			else
			{
				iLocal_130 = 2;
				iLocal_132 = unk_0xDF658EB6CA91DFBC();
			}
			break;
		
		case 1:
			iLocal_133 = unk_0xDF658EB6CA91DFBC();
			if ((iLocal_133 - iLocal_132) > 1500)
			{
				iLocal_130 = 3;
			}
			break;
		
		case 2:
			iLocal_133 = unk_0xDF658EB6CA91DFBC();
			if (iLocal_131 != Global_16764)
			{
				if (unk_0x7DFD3CAC2CF49957(iLocal_107))
				{
					if (Global_2487434.f_37 == 0)
					{
						if (Global_14386)
						{
							unk_0xAB16AADE80707D47(iLocal_107, "Dial_and_Remote_Ring", &Global_14432, 1);
						}
						else if ((iLocal_133 - iLocal_132) > 1700)
						{
							unk_0xAB16AADE80707D47(iLocal_107, "Remote_Ring", &Global_14432, 1);
						}
					}
				}
			}
			else if ((func_74(130) || func_74(132)) || func_74(128))
			{
				if (unk_0x7DFD3CAC2CF49957(iLocal_107))
				{
					if (Global_2487434.f_37 == 0)
					{
						if (Global_14386)
						{
							unk_0xAB16AADE80707D47(iLocal_107, "Dial_and_Remote_Ring", &Global_14432, 1);
						}
						else if ((iLocal_133 - iLocal_132) > 1700)
						{
							unk_0xAB16AADE80707D47(iLocal_107, "Remote_Ring", &Global_14432, 1);
						}
					}
				}
			}
			if ((iLocal_133 - iLocal_132) > iLocal_131)
			{
				if (iLocal_131 == Global_16764)
				{
					bLocal_120 = false;
					if ((Global_1628 == 130 || Global_1628 == 132) || Global_1628 == 128)
					{
						if (!unk_0x08BA6DD398CA197C(Global_2314, 20))
						{
							bLocal_120 = true;
							if ((iLocal_133 - iLocal_132) > iLocal_131 + 10000)
							{
								if (Global_14443.f_1 == 10)
								{
									if (Global_1628 == 130)
									{
										Global_14443.f_1 = 3;
									}
								}
							}
						}
					}
					if (!bLocal_120)
					{
						iLocal_130 = 4;
						unk_0x15761381A3072BFA(iLocal_107);
						iLocal_121 = 0;
						unk_0x5AE11BC36633DE4E(0);
						if (Global_101553.f_32740[Global_1628 /*29*/].f_24[Global_14443] == 0)
						{
							if (Global_1628 == 132)
							{
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(4);
								unk_0x7CBFB9F4AF33C67E(0);
								unk_0x7CBFB9F4AF33C67E(2);
								unk_0x709662CF2BD061A4("CELL_CONDFON");
								unk_0xDA35BDB37E728640(&Global_15760);
								unk_0x1E77BE8F4283FA05();
								func_72("CELL_300");
								func_72("CELL_220");
								func_72("CELL_219");
								unk_0xE73340DA551C95E1();
							}
							else
							{
								func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(5), -1f, -1f, &(Global_117[Global_1628 /*10*/].f_4), "CELL_300", "CELL_220", "CELL_195", 0);
							}
						}
						else
						{
							func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(5), -1f, -1f, &(Global_101553.f_32740[Global_1628 /*29*/].f_3), &(Global_101553.f_32740[Global_1628 /*29*/].f_7), "CELL_220", &(Global_101553.f_32740[Global_1628 /*29*/].f_3), 0);
						}
						func_142(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					iLocal_130 = 3;
				}
			}
			break;
		
		case 3:
			if (iLocal_309 == 1)
			{
				if (unk_0x28C1B9853548BD8E(&cLocal_310, "CELLPHONE_CHEAT") && Global_69617 == 0)
				{
					if (unk_0x28C1B9853548BD8E(&Local_314, "CHEAT_MONOC"))
					{
						if (Global_3117 == 0)
						{
							Global_3117 = 1;
							Global_101553.f_12906[0 /*20*/].f_6 = 5;
							Global_101553.f_12906[2 /*20*/].f_6 = 5;
							Global_101553.f_12906[1 /*20*/].f_6 = 5;
							if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
							{
								if (!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1))
								{
									if (!unk_0xA0BE515094F295FB(4, unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), 40f))
									{
										unk_0x7AA0DACDC0A1EDA3(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1) + Vector(2f, 0f, 0f), 4, 0.1f, 1, 0, 1065353216);
									}
								}
							}
						}
						else
						{
							Global_3117 = 0;
						}
					}
					if (unk_0x28C1B9853548BD8E(&Local_314, "CHEAT_SUPJUM"))
					{
						func_71(0, 0);
					}
					if (unk_0x28C1B9853548BD8E(&Local_314, "CHEAT_HEALA"))
					{
						func_71(6, 0);
					}
					if (unk_0x28C1B9853548BD8E(&Local_314, "CHEAT_SLIDEYC"))
					{
						func_71(1, 0);
					}
					if (unk_0x28C1B9853548BD8E(&Local_314, "CHEAT_FASTR"))
					{
						func_71(2, 0);
					}
					if (unk_0x28C1B9853548BD8E(&Local_314, "CHEAT_WANTDN"))
					{
						func_71(9, 0);
					}
					if (unk_0x28C1B9853548BD8E(&Local_314, "CHEAT_WANTUP"))
					{
						func_71(8, 0);
					}
					if (unk_0x28C1B9853548BD8E(&Local_314, "CHEAT_WEATHER"))
					{
						func_71(5, 0);
					}
					if (unk_0x28C1B9853548BD8E(&Local_314, "CHEAT_FASTS"))
					{
						func_71(3, 0);
					}
					if (unk_0x28C1B9853548BD8E(&Local_314, "CHEAT_POWER"))
					{
						func_71(7, 0);
					}
					if (unk_0x28C1B9853548BD8E(&Local_314, "CHEAT_CHUTE"))
					{
						func_71(10, 0);
					}
					if (unk_0x28C1B9853548BD8E(&Local_314, "CHEAT_BANG"))
					{
						func_71(11, 0);
					}
					if (unk_0x28C1B9853548BD8E(&Local_314, "CHEAT_FLAMB"))
					{
						func_71(12, 0);
					}
					if (unk_0x28C1B9853548BD8E(&Local_314, "CHEAT_EXPMEL"))
					{
						func_71(13, 0);
					}
					if (unk_0x28C1B9853548BD8E(&Local_314, "CHEAT_ZEROG"))
					{
						func_71(14, 0);
					}
					if (unk_0x28C1B9853548BD8E(&Local_314, "CHEAT_INVINC"))
					{
						func_71(15, 0);
					}
					if (unk_0x28C1B9853548BD8E(&Local_314, "CHEAT_SLOWMO"))
					{
						func_71(16, 0);
					}
					if (unk_0x28C1B9853548BD8E(&Local_314, "CHEAT_SKYFA"))
					{
						func_71(17, 0);
					}
					if (unk_0x28C1B9853548BD8E(&Local_314, "CHEAT_DRUNK"))
					{
						func_71(18, 0);
					}
					if (unk_0x28C1B9853548BD8E(&Local_314, "CHEAT_DEADEYE"))
					{
						func_71(19, 0);
					}
					if (unk_0x28C1B9853548BD8E(&Local_314, "CHEAT_WEAPONS"))
					{
						func_71(4, 0);
					}
					if (unk_0x28C1B9853548BD8E(&Local_314, "CHEAT_BUZZARD"))
					{
						func_71(20, joaat("buzzard"));
					}
					if (unk_0x28C1B9853548BD8E(&Local_314, "CHEAT_COMET2"))
					{
						func_71(20, joaat("comet2"));
					}
					if (unk_0x28C1B9853548BD8E(&Local_314, "CHEAT_BMX"))
					{
						func_71(20, joaat("bmx"));
					}
					if (unk_0x28C1B9853548BD8E(&Local_314, "CHEAT_CADDY"))
					{
						func_71(20, joaat("caddy"));
					}
					if (unk_0x28C1B9853548BD8E(&Local_314, "CHEAT_DUSTER"))
					{
						func_71(20, joaat("duster"));
					}
					if (unk_0x28C1B9853548BD8E(&Local_314, "CHEAT_PCJ"))
					{
						func_71(20, joaat("pcj"));
					}
					if (unk_0x28C1B9853548BD8E(&Local_314, "CHEAT_RAPIDGT"))
					{
						func_71(20, joaat("rapidgt"));
					}
					if (unk_0x28C1B9853548BD8E(&Local_314, "CHEAT_STRETCH"))
					{
						func_71(20, joaat("stretch"));
					}
					if (unk_0x28C1B9853548BD8E(&Local_314, "CHEAT_STUNT"))
					{
						func_71(20, joaat("stunt"));
					}
					if (unk_0x28C1B9853548BD8E(&Local_314, "CHEAT_TRASH"))
					{
						func_71(20, joaat("trash"));
					}
					if (unk_0x28C1B9853548BD8E(&Local_314, "CHEAT_SANCHEZ"))
					{
						func_71(20, joaat("sanchez"));
					}
					if (func_73())
					{
						if (unk_0x28C1B9853548BD8E(&Local_314, "CHEAT_SEAPLANE"))
						{
							func_71(20, joaat("dodo"));
						}
						if (unk_0x28C1B9853548BD8E(&Local_314, "CHEAT_DUELC"))
						{
							func_71(20, joaat("dukes2"));
						}
						if (unk_0x28C1B9853548BD8E(&Local_314, "CHEAT_BUBBLE"))
						{
							func_71(20, joaat("submersible2"));
						}
					}
					if (unk_0x28C1B9853548BD8E(&Local_314, "CHEAT_DIRECTOR"))
					{
						iVar0 = func_36(0, 0, 119);
						if (iVar0 != 0)
						{
							func_34(iVar0);
						}
						else
						{
							func_33();
						}
					}
					func_30(0);
				}
				else if (unk_0x28C1B9853548BD8E(&cLocal_310, "CELLPHONE_CHEAT"))
				{
					func_30(0);
				}
				else
				{
					func_29(&uLocal_141, 1, 0, &Local_314, 0, 1);
					Global_16766 = 0;
					func_28(&uLocal_141, Global_1628, &Global_16768, &cLocal_310, 2, 0, 0, 0, 0);
				}
			}
			else
			{
				switch (Global_1628)
				{
					case 81:
						StringCopy(&Var1, "BENNY", 24);
						break;
					
					case 0:
						StringCopy(&Var1, "MICHAEL", 24);
						break;
					
					case 2:
						StringCopy(&Var1, "TREVOR", 24);
						break;
					
					case 1:
						StringCopy(&Var1, "FRANKLIN", 24);
						break;
					
					case 12:
						StringCopy(&Var1, "LESTER", 24);
						break;
					
					case 13:
						StringCopy(&Var1, "LESTER", 24);
						break;
					
					case 15:
						StringCopy(&Var1, "TRACEY", 24);
						break;
					
					case 19:
						StringCopy(&Var1, "LAMAR", 24);
						break;
					
					case 17:
						StringCopy(&Var1, "AMANDA", 24);
						break;
					
					case 45:
						StringCopy(&Var1, "MALEEXECASSIST", 24);
						break;
					
					case 29:
						StringCopy(&Var1, "FEMEXECASSIST", 24);
						break;
					
					case 35:
						StringCopy(&Var1, "CHENGSR", 24);
						break;
					
					case 14:
						StringCopy(&Var1, "JIMMY", 24);
						break;
					
					case 103:
						StringCopy(&Var1, "TONYA", 24);
						break;
					
					case 50:
						StringCopy(&Var1, "BEVERLY", 24);
						break;
					
					case 64:
						StringCopy(&Var1, "NIGEL", 24);
						break;
					
					case 34:
						StringCopy(&Var1, "OSCAR", 24);
						break;
					
					case 49:
						StringCopy(&Var1, "BARRY", 24);
						break;
					
					case 33:
						StringCopy(&Var1, "GAYMILITARY", 24);
						break;
					
					case 20:
						StringCopy(&Var1, "NervousRon", 24);
						break;
					
					case 24:
						StringCopy(&Var1, "Wade", 24);
						break;
					
					case 69:
						StringCopy(&Var1, "OMEGA", 24);
						break;
					
					case 60:
						StringCopy(&Var1, "MARNIE", 24);
						break;
					
					case 37:
						StringCopy(&Var1, "STRETCH", 24);
						break;
					
					case 23:
						StringCopy(&Var1, "STEVE", 24);
						break;
					
					case 51:
						StringCopy(&Var1, "CRIS", 24);
						break;
					
					case 30:
						StringCopy(&Var1, "Dave", 24);
						break;
					
					case 58:
						StringCopy(&Var1, "JOSH", 24);
						break;
					
					case 36:
						StringCopy(&Var1, "FRIEDLANDER", 24);
						break;
					
					case 62:
						StringCopy(&Var1, "MAUDE", 24);
						break;
					
					case 55:
						StringCopy(&Var1, "JIMMYBOSTON", 24);
						break;
					
					case 56:
						StringCopy(&Var1, "JOE", 24);
						break;
					
					case 26:
						StringCopy(&Var1, "SOLOMON", 24);
						break;
					
					case 54:
						StringCopy(&Var1, "CLETUS", 24);
						break;
					
					case 43:
						StringCopy(&Var1, "TANISHA", 24);
						break;
					
					case 16:
						StringCopy(&Var1, "ABIGAIL", 24);
						break;
					
					case 44:
						StringCopy(&Var1, "DENISE", 24);
						break;
					
					case 84:
						StringCopy(&Var1, "BRUCIE", 24);
						break;
					
					case 70:
						StringCopy(&Var1, "BikerBoss", 24);
						break;
					
					case 72:
						StringCopy(&Var1, "MexicanBoss", 24);
						break;
					
					case 89:
						StringCopy(&Var1, "MECHANIC", 24);
						break;
					
					case 91:
						StringCopy(&Var1, "MorsMutual", 24);
						break;
					
					case 85:
						StringCopy(&Var1, "FM_MERRYWEATHER", 24);
						break;
					
					case 41:
						StringCopy(&Var1, "PEGASUS", 24);
						break;
					
					case 18:
						StringCopy(&Var1, "SIMEON", 24);
						break;
					
					case 31:
						StringCopy(&Var1, "MARTIN", 24);
						break;
					
					case 52:
						StringCopy(&Var1, "DOM", 24);
						break;
					
					case 86:
						StringCopy(&Var1, "GERALD", 24);
						break;
					
					default:
						StringCopy(&Var1, "MICHAEL", 24);
						break;
				}
				func_29(&uLocal_141, 1, 0, &Var1, 0, 1);
				Global_16766 = 0;
				switch (Global_1628)
				{
					case 81:
						func_9(&uLocal_141, 81, "LOWCAAU", "LOWCA_CALL10", 2, 0, 0, 0, 0);
						break;
					
					case 13:
						func_9(&uLocal_141, 12, &Global_16768, "LES_APH2", 2, 0, 0, 0, 0);
						break;
					
					case 36:
						iVar7 = unk_0x7C42343912622BB6();
						if (iVar7 > 17 || iVar7 < 9)
						{
							func_9(&uLocal_141, Global_1628, &Global_16768, "SHR_APH3", 2, 0, 0, 0, 0);
						}
						if (iVar7 > 8 && iVar7 < 13)
						{
							func_9(&uLocal_141, Global_1628, &Global_16768, "SHR_APH1", 2, 0, 0, 0, 0);
						}
						if (iVar7 > 12 && iVar7 < 18)
						{
							func_9(&uLocal_141, Global_1628, &Global_16768, "SHR_APH2", 2, 0, 0, 0, 0);
						}
						break;
					
					case 17:
						if (func_8(21) && !func_8(22))
						{
							func_9(&uLocal_141, Global_1628, &Global_16768, "AMA_APH2", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_141, Global_1628, &Global_16768, &(Global_117[Global_1628 /*10*/]), 2, 0, 0, 0, 0);
						}
						break;
					
					case 20:
						if (Global_69617)
						{
							func_9(&uLocal_141, Global_1628, &Global_16768, "ANS_RBusy", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_141, Global_1628, &Global_16768, &(Global_117[Global_1628 /*10*/]), 2, 0, 0, 0, 0);
						}
						break;
					
					case 44:
						if (func_7(126))
						{
							func_9(&uLocal_141, Global_1628, &Global_16768, "DEN_APH3", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_141, Global_1628, &Global_16768, &(Global_117[Global_1628 /*10*/]), 2, 0, 0, 0, 0);
						}
						break;
					
					case 15:
						if (!func_8(19))
						{
							func_9(&uLocal_141, Global_1628, &Global_16768, "TRA_APH1", 2, 0, 0, 0, 0);
						}
						else if (!func_8(20))
						{
							func_9(&uLocal_141, Global_1628, &Global_16768, "TRA_APH2", 2, 0, 0, 0, 0);
						}
						else if (!func_8(22))
						{
							func_9(&uLocal_141, Global_1628, &Global_16768, "TRA_APH3", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_141, Global_1628, &Global_16768, "TRA_APH4", 2, 0, 0, 0, 0);
						}
						break;
					
					case 19:
						if (!func_8(19))
						{
							func_9(&uLocal_141, Global_1628, &Global_16768, "LAM_APH1", 2, 0, 0, 0, 0);
						}
						else if (!func_8(20))
						{
							func_9(&uLocal_141, Global_1628, &Global_16768, "LAM_APH2", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_141, Global_1628, &Global_16768, "LAM_APH3", 2, 0, 0, 0, 0);
						}
						break;
					
					case 14:
						if (!func_8(19))
						{
							func_9(&uLocal_141, Global_1628, &Global_16768, "JIM_APH1", 2, 0, 0, 0, 0);
						}
						else if (!func_8(21))
						{
							func_9(&uLocal_141, Global_1628, &Global_16768, "JIM_APH3", 2, 0, 0, 0, 0);
						}
						else if (!func_8(22))
						{
							func_9(&uLocal_141, Global_1628, &Global_16768, "JIM_APH2", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_141, Global_1628, &Global_16768, "JIM_APH4", 2, 0, 0, 0, 0);
						}
						break;
					
					case 49:
						if (func_6(7))
						{
							func_9(&uLocal_141, Global_1628, &Global_16768, "BAR_APH2", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_141, Global_1628, &Global_16768, "BAR_APH1", 2, 0, 0, 0, 0);
						}
						break;
					
					case 85:
						iLocal_333 = unk_0xB5BF1B58C833F7A9(0, 100);
						if (iLocal_333 <= 50)
						{
							func_9(&uLocal_141, Global_1628, &Global_16768, "ANS_MWBusy", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_141, Global_1628, &Global_16768, "ANS_MWBusy2", 2, 0, 0, 0, 0);
						}
						break;
					
					case 41:
						iLocal_333 = unk_0xB5BF1B58C833F7A9(0, 100);
						if (iLocal_333 <= 50)
						{
							func_9(&uLocal_141, Global_1628, &Global_16768, "ANS_PGbusy", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_141, Global_1628, &Global_16768, "ANS_PGbusy2", 2, 0, 0, 0, 0);
						}
						break;
					
					case 91:
						iLocal_333 = unk_0xB5BF1B58C833F7A9(0, 100);
						if (iLocal_333 <= 50)
						{
							func_9(&uLocal_141, Global_1628, &Global_16768, "ANS_INSbusy", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_141, Global_1628, &Global_16768, "ANS_INSbusy2", 2, 0, 0, 0, 0);
						}
						break;
					
					case 86:
						func_9(&uLocal_141, Global_1628, &Global_16768, "ANS_GBusy", 2, 0, 0, 0, 0);
						break;
					
					default:
						func_9(&uLocal_141, Global_1628, &Global_16768, &(Global_117[Global_1628 /*10*/]), 2, 0, 0, 0, 0);
				}
				unk_0x88B0F0DC270164B7(&Global_2314, 31);
			}
			break;
		
		case 4:
			if (unk_0x7DFD3CAC2CF49957(iLocal_107))
			{
				unk_0xAB16AADE80707D47(iLocal_107, "Remote_Engaged", &Global_14432, 1);
			}
			if (unk_0xC9D9444186B5A374() > 1500)
			{
				if (iLocal_121 == 0)
				{
					if (Global_14443 == 2)
					{
						if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
						{
							func_4(unk_0xA0081090911D13E5(), "PHONE_CALL_NOT_CONNECTED", 24);
							iLocal_121 = 1;
						}
					}
				}
			}
			break;
	}
}

void func_4(var uParam0, char* sParam1, int iParam2)
{
	unk_0xD8A7A2C7456E47C9(uParam0, sParam1, func_5(iParam2), 1);
}

int func_5(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

bool func_6(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return unk_0x08BA6DD398CA197C(Global_101553.f_17429[iParam0 /*6*/], 3);
}

int func_7(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101553.f_7940.f_99.f_58[iParam0];
}

int func_8(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101553.f_7940.f_330[iParam0 /*6*/];
}

void func_9(var uParam0, int iParam1, char* sParam2, char[4] cParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	if (Global_69617 || func_27())
	{
		if (Global_1628 == 81)
		{
			if (Global_1572930 == 0)
			{
				Global_1572930 = 1;
			}
			func_10(uParam0, iParam1, sParam2, cParam3, iParam4, iParam5, iParam6, iParam7, bParam8);
		}
		else if (Global_1572930 == 1)
		{
			func_28(uParam0, iParam1, &Global_16768, cParam3, iParam4, iParam5, iParam6, iParam7, bParam8);
		}
		else
		{
			func_10(uParam0, iParam1, &Global_16768, cParam3, iParam4, iParam5, iParam6, iParam7, bParam8);
		}
	}
	else
	{
		func_10(uParam0, iParam1, &Global_16768, cParam3, iParam4, iParam5, iParam6, iParam7, bParam8);
	}
}

int func_10(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_26(uParam0, uParam1, sParam2, iParam6, iParam7, 0);
	Global_15793 = 0;
	Global_15752 = 1;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_15750 = 0;
	Global_15797 = 0;
	Global_15799 = 0;
	if (iParam5 == 1)
	{
		Global_15757 = 1;
	}
	else
	{
		Global_15757 = 0;
	}
	Global_2621441 = 0;
	return func_11(sParam3, iParam4, bParam8);
}

int func_11(char* sParam0, int iParam1, bool bParam2)
{
	Global_15746 = 0;
	if (Global_15745 == 0 || Global_15747 == 2)
	{
		if (Global_15745 != 0)
		{
			if (iParam1 > Global_15747)
			{
				if (Global_15752 == 0)
				{
					unk_0x588D9B1F6CF36C3C(0);
					Global_14443.f_1 = 3;
					Global_15745 = 0;
					Global_15746 = 1;
					Global_15798 = 0;
					Global_15741 = 0;
					Global_15742 = 0;
					Global_15756 = 0;
					Global_15755 = 0;
					Global_14442 = 0;
				}
				else
				{
					func_25();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xE80581DE0ACF1F8A())
		{
			return 0;
		}
		if (func_24(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_23();
		Global_15034 = { Global_15199 };
		Global_15751 = Global_15752;
		Global_15758 = Global_15759;
		Global_2621442 = Global_2621441;
		Global_15760 = { Global_15776 };
		Global_15753 = Global_15754;
		Global_16735 = Global_16736;
		Global_16743 = { Global_16749 };
		Global_16737 = Global_16738;
		Global_16739 = Global_16740;
		Global_16741 = Global_16742;
		Global_15364.f_370 = Global_16734;
		Global_15364.f_368 = Global_16732;
		Global_15364.f_369 = Global_16733;
		Global_15741 = Global_15742;
		if (Global_15751)
		{
			unk_0x09C86C0C5CA26B1E(&Global_2313, 20);
			unk_0x09C86C0C5CA26B1E(&Global_2314, 17);
			unk_0x09C86C0C5CA26B1E(&Global_2315, 0);
			if (bParam2)
			{
				func_16();
				if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14443.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14409 == 1)
			{
				return 0;
			}
			if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
			{
				if (unk_0x7B5A014A9AC61FB3(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (func_15())
				{
					return 0;
				}
				if (unk_0x8E30A8C5F10F6DD2(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (unk_0xFFE4F37124DBE6D9(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (unk_0xAE4B87F710B7DE76(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (unk_0xB057BAEE46DEDD89(unk_0xA0081090911D13E5(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69617)
				{
					if (unk_0xB46E03E529421E99(unk_0xA0081090911D13E5()))
					{
						return 0;
					}
					if (unk_0x2FFAB3D2307F1BA7(unk_0x0C1D3C552325765B()))
					{
						return 0;
					}
					if (unk_0x7DF282A008F6DC55(unk_0xA0081090911D13E5()))
					{
						return 0;
					}
					if (unk_0x7B09C8C1D3D1F427(unk_0x0C1D3C552325765B()))
					{
						return 0;
					}
				}
			}
			if (func_14())
			{
				return 0;
			}
			else
			{
				switch (Global_14443.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0x08BA6DD398CA197C(Global_2313, 9))
				{
					return 0;
				}
			}
			func_13();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_12();
		return 1;
	}
	if (Global_15745 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15747 || iParam1 == Global_15747)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_25();
	}
	return 0;
}

void func_12()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x588D9B1F6CF36C3C(0);
	Global_15745 = 1;
}

void func_13()
{
	Global_15798 = Global_15797;
	Global_15792 = Global_15793;
	Global_15839 = { Global_15827 };
	Global_15845 = { Global_15833 };
	Global_15800 = Global_15799;
	Global_15869 = { Global_15851 };
	Global_15875 = { Global_15857 };
	Global_15881 = { Global_15863 };
	Global_15887 = { Global_15893 };
	Global_1628 = Global_1629;
	Global_1630 = Global_1631;
	Global_15756 = Global_15757;
	Global_15758 = Global_15759;
	Global_15760 = { Global_15776 };
	Global_15749 = Global_15750;
	Global_16761 = 0;
	Global_15794 = 0;
	Global_15795 = 0;
	unk_0x09C86C0C5CA26B1E(&Global_2314, 16);
}

int func_14()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_15()
{
	int iVar0;
	int iVar1;
	
	if (Global_69617)
	{
		iVar0 = 0;
		unk_0x79DEFA3570360EAF(unk_0xA0081090911D13E5(), &iVar1, 1);
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x62B4986EA88E929B() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
	{
		if (unk_0x8B99D63EA8B2E230(unk_0xA0081090911D13E5(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_16()
{
	if (func_22(14))
	{
		if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
		{
			if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[2 /*29*/])
			{
				Global_14443 = 2;
			}
			else
			{
				Global_14443 = 0;
			}
		}
	}
	else
	{
		Global_14443 = func_17();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69617)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

var func_17()
{
	func_18();
	return Global_101553.f_1991.f_539.f_3549;
}

void func_18()
{
	int iVar0;
	
	if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()))
	{
		if (func_21(Global_101553.f_1991.f_539.f_3549) != unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()))
		{
			iVar0 = func_20(unk_0xA0081090911D13E5());
			if (func_19(iVar0) && (!func_22(14) || Global_100505))
			{
				if (Global_101553.f_1991.f_539.f_3549 != iVar0 && func_19(Global_101553.f_1991.f_539.f_3549))
				{
					Global_101553.f_1991.f_539.f_3550 = Global_101553.f_1991.f_539.f_3549;
				}
				Global_101553.f_1991.f_539.f_3551 = iVar0;
				Global_101553.f_1991.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101553.f_1991.f_539.f_3549 != 145)
			{
				Global_101553.f_1991.f_539.f_3551 = Global_101553.f_1991.f_539.f_3549;
			}
			return;
		}
	}
	Global_101553.f_1991.f_539.f_3549 = 145;
}

bool func_19(int iParam0)
{
	return iParam0 < 3;
}

int func_20(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		iVar1 = unk_0x705BC1BB91F530B5(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_21(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_21(int iParam0)
{
	if (func_19(iParam0))
	{
		return Global_101553.f_32740[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_22(int iParam0)
{
	return Global_35775 == iParam0;
}

void func_23()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15034[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15034[iVar0 /*10*/].f_1), "", 24);
		Global_15034[iVar0 /*10*/].f_7 = 0;
		Global_15034[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15034.f_161 = -99;
	Global_15034.f_162 = { 0f, 0f, 0f };
}

bool func_24(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1342783.f_203[iParam1];
			}
			break;
	}
	return unk_0x08BA6DD398CA197C(Global_1342783.f_982, iParam0);
}

void func_25()
{
	unk_0x8C620099CBB45602();
	Global_16756 = 0;
	if ((unk_0xC6CB0C1523C73C77() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x588D9B1F6CF36C3C(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0xE80581DE0ACF1F8A())
	{
		unk_0x588D9B1F6CF36C3C(1);
		Global_15745 = 6;
		return;
	}
}

void func_26(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15199 = { *uParam0 };
	Global_1629 = uParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = iParam5;
	if (iParam3 == 0)
	{
		Global_16732 = 1;
		Global_16730 = 0;
	}
	else
	{
		Global_16732 = 0;
		Global_16730 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16733 = 1;
		Global_16731 = 0;
	}
	else
	{
		Global_16733 = 0;
		Global_16731 = 1;
	}
}

var func_27()
{
	return Global_1315206;
}

int func_28(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_26(uParam0, uParam1, sParam2, iParam6, iParam7, 0);
	Global_15793 = 0;
	Global_15752 = 1;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_15750 = 0;
	Global_15797 = 0;
	Global_15799 = 0;
	if (iParam5 == 1)
	{
		Global_15757 = 1;
	}
	else
	{
		Global_15757 = 0;
	}
	Global_2621441 = 1;
	return func_11(sParam3, iParam4, bParam8);
}

void func_29(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69617)
	{
		if (!unk_0xEB361B4BD195A4D3(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xD20DF430E654B489(iParam2, 0);
			}
			else
			{
				unk_0xD20DF430E654B489(iParam2, 1);
			}
		}
		if (!unk_0xEB361B4BD195A4D3(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xD69C027BC6C4334F(iParam2, 0);
			}
			else
			{
				unk_0xD69C027BC6C4334F(iParam2, 1);
			}
		}
	}
}

void func_30(int iParam0)
{
	if (Global_14604)
	{
		func_31(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0x88B0F0DC270164B7(&Global_2314, 16);
	}
	if (unk_0xC6CB0C1523C73C77())
	{
		unk_0x588D9B1F6CF36C3C(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0x88B0F0DC270164B7(&Global_2313, 30);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&Global_2313, 30);
	}
	if (!func_14())
	{
		Global_14443.f_1 = 3;
	}
}

void func_31(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_32(0))
		{
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0x4788913DF846A969(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x6D68EB69A9260608(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x6D68EB69A9260608(Global_14380);
		}
		else
		{
			unk_0x6D68EB69A9260608(Global_14371);
		}
	}
}

int func_32(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x08BA6DD398CA197C(Global_2313, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xA96867DD0A63C62C(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_33()
{
	float fVar0;
	
	unk_0x6B0F857FD4BCD4AB(1);
	unk_0xCEEF85C0FC6A898F(2, 201);
	unk_0xCEEF85C0FC6A898F(2, 202);
	fVar0 = 0f;
	while ((!unk_0x2A57AED61E15C7C7(2, 201) && !unk_0x2A57AED61E15C7C7(2, 202)) || fVar0 < 1f)
	{
		unk_0xDC38CC1E35B6A5D7("VEUI_HDR_ALERT", "VE_DIR_MODE_SURE", 18, 0, 0, -1, 0, 0, 1);
		unk_0x4EDE34FBADD967A6(0);
		fVar0 = (fVar0 + unk_0x62E2FDDFDA7A731D());
	}
	unk_0x6B0F857FD4BCD4AB(0);
	if (unk_0x2A57AED61E15C7C7(2, 201))
	{
		unk_0xF215E3B07B7990BC(0);
		Global_100500 = 1;
	}
}

void func_34(int iParam0)
{
	float fVar0;
	char* sVar1;
	
	unk_0x6B0F857FD4BCD4AB(1);
	unk_0xCEEF85C0FC6A898F(2, 201);
	fVar0 = 0f;
	while (!unk_0x2A57AED61E15C7C7(2, 201) || fVar0 < 1f)
	{
		sVar1 = func_35(iParam0, 119);
		unk_0x7B1776B3B53F8D74("FBR_GENERIC", 16384, 0, 0, -1, "FBR_DIR_MODE", sVar1, 1);
		unk_0x4EDE34FBADD967A6(0);
		fVar0 = (fVar0 + unk_0x62E2FDDFDA7A731D());
	}
	unk_0x6B0F857FD4BCD4AB(0);
}

char* func_35(int iParam0, int iParam1)
{
	iParam1 = iParam1;
	switch (iParam0)
	{
		case 1:
			return "FBR_BLK_CLEAN";
			break;
		
		case 2:
			return "FBR_BLK_RNNNG";
			break;
		
		case 13:
			return "FBR_BLK_DEAD";
			break;
		
		case 3:
			return "FBR_BLK_MISS";
			break;
		
		case 5:
			return "FBR_BLK_SHOP";
			break;
		
		case 4:
			return "FBR_BLK_CUTS";
			break;
		
		case 6:
			return "FBR_BLK_WANT";
			break;
		
		case 7:
			return "FBR_BLK_ONLI";
			break;
		
		case 8:
			return "FBR_BLK_ACT";
			break;
		
		case 9:
			return "FBR_BLK_LOC";
			break;
		
		case 10:
			return "FBR_BLK_VEH";
			break;
		
		case 11:
			return "FBR_BLK_PARA";
			break;
		
		case 12:
			return "FBR_BLK_FALL";
			break;
		
		default:
			return "ERROR";
			break;
	}
	return "ERROR";
}

int func_36(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iParam2 = iParam2;
	if (unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
	{
		return 13;
	}
	if (bParam1)
	{
		if (unk_0xA96867DD0A63C62C(unk_0xD24F6522EB082914()) > 1)
		{
			return 2;
		}
	}
	if (func_70() && !func_22(14))
	{
		return 3;
	}
	if (func_69())
	{
		return 3;
	}
	if (func_68())
	{
		return 8;
	}
	if (bParam1)
	{
		if (func_67())
		{
			return 8;
		}
	}
	if (Global_88659)
	{
		return 3;
	}
	if (Global_25438)
	{
		return 8;
	}
	if (Global_25333)
	{
		return 8;
	}
	if (Global_2621550)
	{
		if (unk_0xA96867DD0A63C62C(-1516147206) > 0)
		{
			return 3;
		}
	}
	else if (Global_2621549)
	{
		if (unk_0xA96867DD0A63C62C(2006115718) > 0)
		{
			return 3;
		}
	}
	else if (unk_0xA96867DD0A63C62C(joaat("mission_stat_watcher")) > 0)
	{
		return 3;
	}
	if (unk_0xA96867DD0A63C62C(joaat("finale_choice")) > 0)
	{
		return 3;
	}
	if (unk_0xA96867DD0A63C62C(joaat("creator")) > 0)
	{
		return 3;
	}
	if (unk_0xA96867DD0A63C62C(joaat("respawn_controller")) > 0)
	{
		return 13;
	}
	if (func_66(bParam1))
	{
		return 3;
	}
	if (unk_0x96E535A40E0E0B83(unk_0xA0081090911D13E5()) || unk_0xFFE4F37124DBE6D9(unk_0xA0081090911D13E5()))
	{
		return 12;
	}
	if (func_65(Global_100578, 256))
	{
		return 3;
	}
	if (((func_64() || func_63()) || func_55()) || func_54())
	{
		return 5;
	}
	if (func_54())
	{
		return 5;
	}
	if (func_53())
	{
		return 5;
	}
	if (func_52())
	{
		return 5;
	}
	if (func_63())
	{
		return 5;
	}
	if (func_51() && !Global_100504)
	{
		return 8;
	}
	if (func_55())
	{
		return 5;
	}
	if (unk_0xC740F8182E7E9681() || func_50())
	{
		return 4;
	}
	if (func_49())
	{
		return 4;
	}
	if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()))
	{
		if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
		{
			iVar0 = func_40(60);
			if (iVar0 != 0)
			{
				return iVar0;
			}
			if (unk_0xAE4B87F710B7DE76(unk_0xA0081090911D13E5()) || unk_0xC4E0C3DEFA9F32C8(unk_0xA0081090911D13E5()) != -1)
			{
				return 11;
			}
			if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1) || Global_100600)
			{
				return 10;
			}
		}
	}
	if (Global_25436)
	{
		return 8;
	}
	if (Global_69615)
	{
		return 4;
	}
	if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
	{
		if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) > 0 || unk_0xE7B06BF48958E63C(unk_0x0C1D3C552325765B(), 1))
		{
			return 6;
		}
		if (unk_0x2FFAB3D2307F1BA7(unk_0x0C1D3C552325765B()))
		{
			return 8;
		}
		if (unk_0x5AE21A1C30DF235D(unk_0xA0081090911D13E5()))
		{
			return 8;
		}
	}
	if (unk_0xA86CA03D9749EEB3())
	{
		return 7;
	}
	if (func_39())
	{
		return 8;
	}
	if (Global_25187)
	{
		return 3;
	}
	if (unk_0xFA597181B01136F0())
	{
		return 4;
	}
	if (unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), 439.4357f, -997.4747f, 28.9584f, 428.3288f, -997.0398f, 24.8372f, 8f, 0, 1, 0))
	{
		return 9;
	}
	if (unk_0xB46E03E529421E99(unk_0xA0081090911D13E5()))
	{
		return 9;
	}
	if (bParam1)
	{
		if (!func_37(0))
		{
			return 8;
		}
	}
	if (unk_0xBE7699DE338079B3(unk_0xA0081090911D13E5()))
	{
		return 9;
	}
	return 0;
}

int func_37(bool bParam0)
{
	if (unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		return 0;
	}
	if ((((((((((!unk_0xDC48E9E2CC7437D3(unk_0x0C1D3C552325765B()) || !unk_0xB8E921FDBC0BA08C(unk_0x0C1D3C552325765B())) || unk_0x4B626BBA5EE1CFF0(unk_0xA0081090911D13E5())) || unk_0x019E78F3A1071807(unk_0xA0081090911D13E5(), 0)) || unk_0x7B5A014A9AC61FB3(unk_0xA0081090911D13E5())) || unk_0x12AE3D700F6A2545(unk_0xA0081090911D13E5())) || unk_0x69FEFE28E1352842(unk_0xA0081090911D13E5())) || unk_0x5AE21A1C30DF235D(unk_0xA0081090911D13E5())) || unk_0x630BD2AFB0686BBA(unk_0xA0081090911D13E5())) || unk_0xFFE4F37124DBE6D9(unk_0xA0081090911D13E5())) || unk_0xE7B06BF48958E63C(unk_0x0C1D3C552325765B(), 1))
	{
		return 0;
	}
	if ((((((func_49() || Global_17151.f_4) || func_38()) || unk_0x665790CF5316ACE3()) || unk_0xE15EE59EAB50C114()) || func_50()) || func_69())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (unk_0x914490E7407A12A1())
		{
			return 0;
		}
	}
	return 1;
}

int func_38()
{
	if (!unk_0xA86CA03D9749EEB3())
	{
		return Global_89217.f_44 == 1;
	}
	return 0;
}

bool func_39()
{
	return Global_52997;
}

int func_40(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	if (unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0) && unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1))
	{
		return 5;
	}
	Var0 = { func_48(unk_0x0C1D3C552325765B()) };
	if (Global_100640[10 /*10*/].f_1)
	{
		if (unk_0xB7A628320EFF8E47(Var0, 241.9889f, 360.4732f, 105.6166f) < 2f)
		{
			return 3;
		}
	}
	if (func_8(2) && !func_8(17))
	{
		if (unk_0xB7A628320EFF8E47(Var0, -59.96629f, -1099.005f, 25.52088f) < 8f)
		{
			if (unk_0xDFC5B758BDC9546F(Var0, -61.26628f, -1096.505f, 25.52088f, -58.43333f, -1101.147f, 29.24937f, 1.25f, 0, 1))
			{
				return 9;
			}
		}
	}
	if (unk_0xB7A628320EFF8E47(Var0, -740.9346f, 5599.426f, 40.71515f) < 11f)
	{
		if (unk_0xDFC5B758BDC9546F(Var0, -746.1299f, 5599.226f, 40.47561f, -737.632f, 5599.364f, 44.1693f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (unk_0xB7A628320EFF8E47(Var0, -740.9346f, 5590.426f, 40.71515f) < 11f)
	{
		if (unk_0xDFC5B758BDC9546F(Var0, -746.1299f, 5590.667f, 40.4392f, -737.6585f, 5590.592f, 44.52327f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (unk_0xB7A628320EFF8E47(Var0, 446.3265f, 5566.35f, 780.2151f) < 11f)
	{
		if (unk_0xDFC5B758BDC9546F(Var0, 451.1661f, 5566.451f, 780.1703f, 442.5211f, 5566.374f, 783.9819f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (unk_0xB7A628320EFF8E47(Var0, 446.3265f, 5577.35f, 780.2151f) < 11f)
	{
		if (unk_0xDFC5B758BDC9546F(Var0, 451.1661f, 5577.867f, 780.1899f, 442.5765f, 5577.579f, 783.9086f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (unk_0xB7A628320EFF8E47(Var0, 128.83f, -1297.98f, 29.3f) < 2f || unk_0xB7A628320EFF8E47(Var0, 95.07f, -1284.98f, 29.3f) < 2f)
	{
		return 9;
	}
	if (unk_0xB7A628320EFF8E47(Var0, 1081.951f, -1976.762f, 30.47218f) < 6f && func_47(26))
	{
		return 9;
	}
	if (!iLocal_27)
	{
		func_41(iParam0);
	}
	iVar3 = unk_0x16A396814EC162D8(unk_0xA0081090911D13E5());
	if (iVar3 == 0)
	{
		return 0;
	}
	else if ((iVar3 == Global_100516 || iVar3 == Global_100517) || iVar3 == Global_100518)
	{
		return 9;
	}
	else if (iVar3 == Global_100507)
	{
		return 9;
	}
	else if (iVar3 == Global_100508)
	{
		return 9;
	}
	else if (iVar3 == Global_100511)
	{
		return 9;
	}
	else if (iVar3 == Global_100510)
	{
		return 9;
	}
	else if (iVar3 == Global_100512)
	{
		return 9;
	}
	else if (iVar3 == Global_100513)
	{
		return 9;
	}
	else if (iVar3 == Global_100514)
	{
		return 9;
	}
	else if (iVar3 == Global_100515)
	{
		return 9;
	}
	else if (iVar3 == Global_100519)
	{
		return 9;
	}
	else if (iVar3 == Global_100520)
	{
		return 9;
	}
	else if (iVar3 == Global_100521)
	{
		return 9;
	}
	else if (iVar3 == Global_100522)
	{
		return 9;
	}
	else if (iVar3 == Global_100523)
	{
		return 9;
	}
	else if ((iVar3 == Global_100524 || iVar3 == Global_100525) && func_8(67))
	{
		return 9;
	}
	iVar4 = 0;
	while (iVar4 <= (19 - 1))
	{
		if (iVar3 == Global_100526[iVar4])
		{
			return 9;
		}
		iVar4++;
	}
	return 0;
}

void func_41(var uParam0)
{
	int iVar0;
	
	uParam0 = uParam0;
	func_44(24, &Global_100507);
	func_44(47, &Global_100508);
	func_44(10, &Global_100516);
	func_44(9, &Global_100517);
	func_44(8, &Global_100518);
	func_44(21, &Global_100519);
	func_44(11, &Global_100520);
	func_44(18, &Global_100524);
	func_44(19, &Global_100525);
	Global_100511 = unk_0x07BE5BF18FEF759E(-76.6618f, 6222.191f, 32.2412f, "V_factory1");
	Global_100510 = unk_0x07BE5BF18FEF759E(-98.2637f, 6210.022f, 31.924f, "V_factory2");
	Global_100512 = unk_0x07BE5BF18FEF759E(-115.8956f, 6179.749f, 32.4102f, "V_factory3");
	Global_100513 = unk_0x07BE5BF18FEF759E(-149.8199f, 6144.978f, 31.3353f, "V_factory4");
	Global_100514 = unk_0x07BE5BF18FEF759E(16.3605f, -1100.259f, 28.797f, "v_gun");
	Global_100515 = unk_0x07BE5BF18FEF759E(125.1948f, -1284.13f, 28.2847f, "v_strip3");
	Global_100521 = unk_0x07BE5BF18FEF759E(-545.5717f, 1987.145f, 126.0262f, "cs6_08_mine_int");
	Global_100522 = unk_0x07BE5BF18FEF759E(2330.598f, 2571.935f, 45.6802f, "ch3_01_trlr_int");
	Global_100523 = unk_0x07BE5BF18FEF759E(-54.7f, -1092.7f, 26.4f, "v_carshowroom");
	iVar0 = 0;
	while (iVar0 <= (19 - 1))
	{
		Global_100526[iVar0] = unk_0xDACF94AE8FA53F42(func_42(iVar0));
		iVar0++;
	}
	iLocal_27 = 1;
}

Vector3 func_42(int iParam0)
{
	if (!func_43(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return -711.8212f, -915.9057f, 18.2377f;
		
		case 1:
			return -52.7185f, -1756.175f, 28.4432f;
		
		case 2:
			return 1159.441f, -325.6666f, 68.2272f;
		
		case 3:
			return 1699.429f, 4928.642f, 41.0858f;
		
		case 4:
			return -1822.926f, 788.9531f, 137.212f;
		
		case 5:
			return 1166.427f, 2703.528f, 37.1574f;
		
		case 6:
			return -2973.414f, 390.6885f, 14.0433f;
		
		case 7:
			return -1225.86f, -903.5782f, 11.3263f;
		
		case 8:
			return 1140.659f, -981.0806f, 45.4158f;
		
		case 9:
			return -1490.275f, -382.8514f, 39.1634f;
		
		case 10:
			return -3240.719f, 1004.508f, 11.8468f;
		
		case 11:
			return -3039.249f, 589.3831f, 6.9251f;
		
		case 12:
			return 544.4275f, 2672.061f, 41.1726f;
		
		case 13:
			return 2558.754f, 385.599f, 107.6391f;
		
		case 14:
			return 2681.511f, 3282.763f, 54.2573f;
		
		case 15:
			return 1731.153f, 6411.633f, 34.0373f;
		
		case 16:
			return 1964.931f, 3741.207f, 31.3599f;
		
		case 17:
			return 29.0707f, -1348.773f, 28.5101f;
		
		case 18:
			return 376.8503f, 323.9777f, 102.5825f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_43(int iParam0)
{
	if (iParam0 >= 19)
	{
		return 0;
	}
	else if (iParam0 <= -1)
	{
		return 0;
	}
	return 1;
}

var func_44(int iParam0, var uParam1)
{
	struct<5> Var0;
	
	Var0 = { func_45(iParam0) };
	*uParam1 = unk_0x07BE5BF18FEF759E(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_45(int iParam0)
{
	struct<5> Var0;
	struct<3> Var5;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -447.4833f, 280.3197f, 77.5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 1:
			Var0 = { -1906.786f, -573.7576f, 19.0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 2:
			Var0 = { 1399.973f, 1148.756f, 113.3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 3:
			Var0 = { -598.6379f, -1608.399f, 26.0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 4:
			Var0 = { -556.5089f, 286.3181f, 81.1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 5:
			Var0 = { -111.7116f, -11.912f, 69.5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 6:
			Var0 = { 1274.934f, -1714.726f, 53.7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 7:
			Var0 = { 147.433f, -2201.37f, 3.688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 8:
			Var0 = { 320.9934f, 265.2515f, 82.1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 9:
			Var0 = { -1425.564f, -244.3f, 15.8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 10:
			Var0 = { 377.153f, -717.567f, 10.0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 11:
			Var0 = { 245.1564f, 370.211f, 104.7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 12:
			Var0 = { 173.1176f, -1003.279f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 13:
			Var0 = { 199.9715f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 14:
			Var0 = { 228.6058f, -992.0537f, -99.9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 15:
			Var0 = { 1854.254f, 3686.739f, 33.2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 16:
			Var0 = { -444.8907f, 6013.587f, 30.7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 17:
			Var0 = { 3522.845f, 3707.965f, 19.9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 18:
			Var0 = { 717.2994f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 19:
			Var0 = { 717.299f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 20:
			Var0 = { 2449.785f, 4983.825f, 45.8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1087.195f, -1988.445f, 28.649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 23:
			Var0 = { 982.233f, -2160.382f, 28.4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 21:
			Var0 = { 479.0568f, -1316.825f, 28.2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 24:
			Var0 = { -1005.663f, -478.3461f, 49.0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 25:
			Var5 = { func_46(1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			Var5 = { func_46(2) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			Var5 = { func_46(3) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			Var5 = { func_46(4) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			Var5 = { func_46(5) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			Var5 = { func_46(6) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			Var5 = { func_46(7) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1049287[34 /*1908*/].f_146.f_1517 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			Var5 = { func_46(35) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			Var5 = { func_46(36) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			Var5 = { func_46(37) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			Var5 = { func_46(38) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			Var5 = { func_46(39) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			Var5 = { func_46(40) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			Var5 = { func_46(41) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			Var5 = { func_46(42) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			Var5 = { func_46(43) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 42:
			Var0 = { -470.3754f, -698.5207f, 51.5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 43:
			Var0 = { -460.6133f, -691.5562f, 69.9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 44:
			Var0 = { 300.633f, -997.4288f, -99.9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 49:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		
		case 50:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		
		case 51:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		
		case 52:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		
		case 53:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		
		case 54:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		
		case 55:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		
		case 56:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		
		case 57:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		
		case 58:
			Var0 = { 374.2012f, 416.9688f, 142.5991f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		
		case 45:
			Var0 = { -16.29585f, -684.0385f, 33.50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 46:
			Var0 = { 341.1f, -1000f, -99.2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 47:
			Var0 = { 199.9716f, -1018.954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 48:
			Var0 = { -1388.001f, -618.4197f, 30.8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
	}
	switch (iParam0)
	{
		case 59:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 60:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 61:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 62:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 63:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 64:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 65:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 66:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 67:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 68:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 69:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 70:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 71:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 72:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 73:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 74:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 75:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 76:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 77:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 78:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case joaat("mpsv_lp0_31"):
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 80:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 81:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 82:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 83:
			Var5 = { func_46(87) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			Var5 = { func_46(87) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			Var5 = { func_46(87) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			Var5 = { func_46(87) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			Var5 = { func_46(87) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			Var5 = { func_46(87) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			Var5 = { func_46(87) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			Var5 = { func_46(87) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			Var5 = { func_46(87) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			Var5 = { func_46(88) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			Var5 = { func_46(88) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			Var5 = { func_46(88) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			Var5 = { func_46(88) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			Var5 = { func_46(88) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			Var5 = { func_46(88) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			Var5 = { func_46(88) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			Var5 = { func_46(88) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			Var5 = { func_46(88) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			Var5 = { func_46(89) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			Var5 = { func_46(89) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			Var5 = { func_46(89) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			Var5 = { func_46(89) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			Var5 = { func_46(89) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			Var5 = { func_46(89) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			Var5 = { func_46(89) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			Var5 = { func_46(89) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			Var5 = { func_46(89) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			Var5 = { func_46(90) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			Var5 = { func_46(90) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			Var5 = { func_46(90) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			Var5 = { func_46(90) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			Var5 = { func_46(90) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			Var5 = { func_46(90) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			Var5 = { func_46(90) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			Var5 = { func_46(90) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			Var5 = { func_46(90) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 119:
			Var5 = { func_46(91) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 120:
			Var5 = { func_46(97) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		default:
			break;
	}
	return Var0;
}

struct<6> func_46(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761.0982f, 317.6259f, 169.5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471.882f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471.882f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		
		case 36:
			Var0 = { -913.0385f, -438.4284f, 114.3997f };
			Var0.f_3 = { 0f, 0f, -153.3093f };
			break;
		
		case 37:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		
		case 38:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		
		case 40:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		
		case 41:
			Var0 = { -929.483f, -374.5104f, 102.2329f };
			Var0.f_3 = { 0f, 0f, -152.5531f };
			break;
		
		case 63:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = { 0f, 0f, -63.5f };
			break;
		
		case 75:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = { 0f, 0f, -71.5f };
			break;
		
		case 76:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = { 0f, 0f, 40.5f };
			break;
		
		case 77:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = { 0f, 0f, -14.5f };
			break;
		
		case joaat("mpsv_lp0_31"):
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = { 0f, 0f, 4.5f };
			break;
		
		case 81:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374.2012f, 416.9688f, 142.6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573.098f, -4085.806f, 9.7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 87:
			Var0 = { -1572.187f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383.954f, -476.7112f, 73.507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138.0029f, -629.739f, 170.2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74.8895f, -817.6883f, 244.8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100.764f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005.806f, -3157.67f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_47(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	if (Global_85724[iParam0 /*2*/])
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_82491)
	{
		if (Global_82491[iVar0 /*5*/] != -1)
		{
			if (Global_69886.f_109[Global_82491[iVar0 /*5*/] /*4*/] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_48(int iParam0)
{
	return unk_0xC59DF10B4FC39DF8(unk_0x21F191D9AFF98B5E(iParam0), 0);
}

bool func_49()
{
	return Global_1315229;
}

int func_50()
{
	if (unk_0xA96867DD0A63C62C(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_51()
{
	return unk_0xDF658EB6CA91DFBC() <= Global_17290.f_5745 + 100;
}

bool func_52()
{
	return unk_0x08BA6DD398CA197C(Global_69865, 9);
}

bool func_53()
{
	return unk_0x08BA6DD398CA197C(Global_69865, 8);
}

int func_54()
{
	if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0) && !unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		if (((((((((((((((unk_0x2FB5C9A04733E5EF(unk_0xA0081090911D13E5(), "misshair_shop@barbers", "player_intro", 3) || unk_0x2FB5C9A04733E5EF(unk_0xA0081090911D13E5(), "misshair_shop@barbers", "player_base", 3)) || unk_0x2FB5C9A04733E5EF(unk_0xA0081090911D13E5(), "misshair_shop@barbers", "player_enterchair", 3)) || unk_0x2FB5C9A04733E5EF(unk_0xA0081090911D13E5(), "misshair_shop@barbers", "player_exitchair", 3)) || unk_0x2FB5C9A04733E5EF(unk_0xA0081090911D13E5(), "misshair_shop@barbers", "player_idle_a", 3)) || unk_0x2FB5C9A04733E5EF(unk_0xA0081090911D13E5(), "misshair_shop@barbers", "player_idle_b", 3)) || unk_0x2FB5C9A04733E5EF(unk_0xA0081090911D13E5(), "misshair_shop@barbers", "player_idle_c", 3)) || unk_0x2FB5C9A04733E5EF(unk_0xA0081090911D13E5(), "misshair_shop@barbers", "player_idle_d", 3)) || unk_0x2FB5C9A04733E5EF(unk_0xA0081090911D13E5(), "misshair_shop@hair_dressers", "player_intro", 3)) || unk_0x2FB5C9A04733E5EF(unk_0xA0081090911D13E5(), "misshair_shop@hair_dressers", "player_base", 3)) || unk_0x2FB5C9A04733E5EF(unk_0xA0081090911D13E5(), "misshair_shop@hair_dressers", "player_enterchair", 3)) || unk_0x2FB5C9A04733E5EF(unk_0xA0081090911D13E5(), "misshair_shop@hair_dressers", "player_exitchair", 3)) || unk_0x2FB5C9A04733E5EF(unk_0xA0081090911D13E5(), "misshair_shop@hair_dressers", "player_idle_a", 3)) || unk_0x2FB5C9A04733E5EF(unk_0xA0081090911D13E5(), "misshair_shop@hair_dressers", "player_idle_b", 3)) || unk_0x2FB5C9A04733E5EF(unk_0xA0081090911D13E5(), "misshair_shop@hair_dressers", "player_idle_c", 3)) || unk_0x2FB5C9A04733E5EF(unk_0xA0081090911D13E5(), "misshair_shop@hair_dressers", "player_idle_d", 3))
		{
			return 1;
		}
	}
	return 0;
}

int func_55()
{
	int iVar0;
	
	if (func_64())
	{
		iVar0 = 0;
		while (iVar0 < 46)
		{
			if (func_56(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_56(int iParam0)
{
	return func_57(iParam0, 20, 1);
}

int func_57(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x08BA6DD398CA197C(Global_91458.f_1308[iParam0], iParam1);
	}
	else if (unk_0xA86CA03D9749EEB3())
	{
		if (func_62() == 0)
		{
			return unk_0x08BA6DD398CA197C(func_58(func_61(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x08BA6DD398CA197C(Global_101553.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_58(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2491469[iParam0 /*3*/][func_59(iParam1)];
	if (unk_0x8A3351ECF43DB941(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_59(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_60();
		if (iVar1 > -1)
		{
			Global_2491182 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2491182 = 1;
		}
	}
	return iVar0;
}

int func_60()
{
	return Global_1312731;
}

int func_61(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 820;
			break;
		
		case 1:
			return 821;
			break;
		
		case 2:
			return 822;
			break;
		
		case 3:
			return 823;
			break;
		
		case 4:
			return 824;
			break;
		
		case 5:
			return 825;
			break;
		
		case 6:
			return 826;
			break;
		
		case 7:
			return 827;
			break;
		
		case 8:
			return 828;
			break;
		
		case 9:
			return 829;
			break;
		
		case 10:
			return 830;
			break;
		
		case 11:
			return 831;
			break;
		
		case 12:
			return 832;
			break;
		
		case 13:
			return 833;
			break;
		
		case 14:
			return 834;
			break;
		
		case 15:
			return 836;
			break;
		
		case 16:
			return 837;
			break;
		
		case 17:
			return 838;
			break;
		
		case 18:
			return 839;
			break;
		
		case 19:
			return 840;
			break;
		
		case 20:
			return 841;
			break;
		
		case 21:
			return 842;
			break;
		
		case 22:
			return 843;
			break;
		
		case 23:
			return 844;
			break;
		
		case 24:
			return 845;
			break;
		
		case 25:
			return 846;
			break;
		
		case 26:
			return 847;
			break;
		
		case 27:
			return 848;
			break;
		
		case 28:
			return 849;
			break;
		
		case 29:
			return 850;
			break;
		
		case 30:
			return 851;
			break;
		
		case 31:
			return 852;
			break;
		
		case 32:
			return 853;
			break;
		
		case 33:
			return 854;
			break;
		
		case 34:
			return 855;
			break;
		
		case 35:
			return 856;
			break;
		
		case 36:
			return 857;
			break;
		
		case 37:
			return 858;
			break;
		
		case 38:
			return 859;
			break;
		
		case 39:
			return 860;
			break;
		
		case 40:
			return 864;
			break;
		
		case 41:
			return 865;
			break;
		
		case 42:
			return 866;
			break;
		
		case 43:
			return 867;
			break;
		
		case 44:
			return 4442;
			break;
		
		case 45:
			return 3776;
			break;
		
		default:
			break;
	}
	return 4617;
}

int func_62()
{
	return Global_25185;
}

bool func_63()
{
	return Global_91458.f_304 > 0;
}

bool func_64()
{
	return Global_91458.f_303 > 0;
}

bool func_65(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_66(bool bParam0)
{
	if (!bParam0 && unk_0xA96867DD0A63C62C(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x08BA6DD398CA197C(Global_69865, 0);
}

bool func_67()
{
	return Global_91445.f_1;
}

bool func_68()
{
	return Global_69884;
}

int func_69()
{
	if (Global_69877)
	{
		return 1;
	}
	else if (Global_55810 && !Global_55816)
	{
		return 1;
	}
	return 0;
}

int func_70()
{
	if (Global_35775 == 15)
	{
		return 0;
	}
	return 1;
}

void func_71(int iParam0, int iParam1)
{
	unk_0x88B0F0DC270164B7(&Global_25432, iParam0);
	Global_25433 = iParam1;
}

void func_72(char* sParam0)
{
	unk_0x709662CF2BD061A4(sParam0);
	unk_0x1E77BE8F4283FA05();
}

int func_73()
{
	var uVar0;
	
	if (unk_0x446ED6C2B9B18A21())
	{
		if (unk_0x941A660B39C95F30())
		{
			if (unk_0x6FC368894467C692())
			{
				unk_0x8A3351ECF43DB941(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x88B0F0DC270164B7(&uVar0, 2);
				unk_0x88B0F0DC270164B7(&uVar0, 4);
				unk_0x88B0F0DC270164B7(&uVar0, 6);
				unk_0x88B0F0DC270164B7(&Global_25, 2);
				unk_0x88B0F0DC270164B7(&Global_25, 4);
				unk_0x88B0F0DC270164B7(&Global_25, 6);
				unk_0x10CE8769EE2626C7(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x3F59EA61B56AFBC2())
				{
					uVar0 = unk_0x680A5FBB1F20F775(866);
					unk_0x88B0F0DC270164B7(&uVar0, 0);
					unk_0xDA842F3F06329D8C(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_138925 == 2)
	{
		return 1;
	}
	else if (Global_138925 == 3)
	{
		return 0;
	}
	if (unk_0x3F59EA61B56AFBC2())
	{
		if (unk_0x08BA6DD398CA197C(unk_0x680A5FBB1F20F775(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_74(int iParam0)
{
	if ((Global_16859 || Global_16858) || Global_16860)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_117[iParam0 /*10*/].f_8 != 140)
	{
		if (Global_14443.f_1 == 10)
		{
			if (Global_1628 == iParam0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_75()
{
	if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
	{
		unk_0xAB16AADE80707D47(-1, "Menu_Back", &Global_14432, 1);
	}
}

void func_76()
{
	if (Global_14421 == 0)
	{
		if (func_145(2, Global_14412, 0))
		{
			unk_0x09C86C0C5CA26B1E(&Global_2314, 0);
			iLocal_118 = 0;
			func_143();
			Global_14421 = 1;
			unk_0xB9D4F4DE7E7EC038(Global_14424, "GET_CURRENT_SELECTION");
			uLocal_102 = unk_0xC23FC7D89C4FAF05();
			while (!unk_0x6F61AEBF81DF1A16(uLocal_102))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_106 = unk_0xD93E20F39826C097(uLocal_102);
			if (func_100(Global_1628))
			{
				if (iLocal_106 == 0)
				{
					if (bLocal_329)
					{
						Global_16859 = 0;
						Global_16858 = 0;
						Global_16860 = 1;
						func_86();
					}
					else
					{
						Global_16859 = 0;
						Global_16858 = 0;
						Global_16860 = 0;
						func_86();
					}
				}
				if (iLocal_106 == 1)
				{
					if (bLocal_329)
					{
						Global_16859 = 0;
						Global_16858 = 0;
						Global_16860 = 0;
						func_86();
					}
					else if (func_78(Global_1628, Global_14443))
					{
						func_77();
						iLocal_118 = 1;
					}
					else
					{
						Global_16859 = 1;
						Global_16858 = 0;
						Global_16860 = 0;
						func_86();
					}
				}
				if (iLocal_106 == 2)
				{
					if (func_78(Global_1628, Global_14443))
					{
						func_77();
						iLocal_118 = 1;
					}
					else
					{
						Global_16859 = 1;
						Global_16858 = 0;
						Global_16860 = 0;
						func_86();
					}
				}
			}
			else
			{
				if (iLocal_106 == 0)
				{
					if (bLocal_329)
					{
						Global_16859 = 0;
						Global_16858 = 0;
						Global_16860 = 1;
						func_86();
					}
					else if (func_78(Global_1628, Global_14443))
					{
						func_77();
						iLocal_118 = 1;
					}
					else
					{
						Global_16859 = 1;
						Global_16858 = 0;
						Global_16860 = 0;
						func_86();
					}
				}
				if (iLocal_106 == 1)
				{
					if (func_78(Global_1628, Global_14443))
					{
						func_77();
						iLocal_118 = 1;
					}
					else
					{
						Global_16859 = 1;
						Global_16858 = 0;
						Global_16860 = 0;
						func_86();
					}
				}
			}
		}
	}
}

void func_77()
{
	func_142(Global_14424, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (Global_14431)
	{
		func_139(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
		func_139(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_139(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_139(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_139(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x09C86C0C5CA26B1E(&Global_2313, 17);
	func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_270", 0, 0, 0, 0);
	func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_271", 0, 0, 0, 0);
	func_142(Global_14424, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_140(Global_14424, "SET_HEADER", "CELL_269", 0, 0, 0, 0);
}

int func_78(int iParam0, int iParam1)
{
	if ((iParam0 >= 150 || iParam1 >= 150) || iParam0 == iParam1)
	{
		return 0;
	}
	if (!func_22(6) && !func_22(7))
	{
		if (func_79(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_79(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((iParam0 >= 150 || iParam1 >= 150) || iParam0 == iParam1)
	{
		return 0;
	}
	if (!func_83(6))
	{
		iVar0 = func_82(iParam0);
		iVar1 = func_82(iParam1);
		if (iVar0 != 7 && iVar1 != 7)
		{
			iVar2 = func_81(iVar0, iVar1);
			if (iVar2 != 10)
			{
				iVar3 = func_80(iVar2);
				if (iVar3 == 3 || iVar3 == 4)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_80(int iParam0)
{
	if (iParam0 < 9)
	{
		return Global_87595[iParam0 /*2*/];
	}
	return -1;
}

int func_81(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((iParam0 != 0 && iParam0 != 1) && iParam0 != 2)
	{
		if ((iParam1 == 0 || iParam1 == 1) || iParam1 == 2)
		{
			iVar0 = iParam1;
			iParam1 = iParam0;
			iParam0 = iVar0;
		}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 2;
					break;
				
				case 3:
					return 10;
					break;
				
				case 4:
					return 5;
					break;
				
				case 5:
					return 8;
					break;
				
				default:
					return 10;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 10;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 3;
					break;
				
				case 4:
					return 6;
					break;
				
				case 5:
					return 10;
					break;
				
				default:
					return 10;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 10;
					break;
				
				case 3:
					return 4;
					break;
				
				case 4:
					return 7;
					break;
				
				case 5:
					return 10;
					break;
				
				default:
					return 10;
					break;
			}
			break;
	}
	return 10;
}

int func_82(int iParam0)
{
	if (iParam0 == 145)
	{
		return 7;
	}
	if (iParam0 < 150)
	{
		return Global_101553.f_32740[iParam0 /*29*/].f_11;
	}
	if (iParam0 == 144)
	{
		return 7;
	}
	if (iParam0 == 150)
	{
		return 6;
	}
	if (iParam0 == 151)
	{
		return 6;
	}
	return 6;
}

int func_83(int iParam0)
{
	if (Global_35775 == 15)
	{
		return 0;
	}
	if (func_84(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_84(int iParam0)
{
	return func_85(iParam0, Global_35775);
}

int func_85(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_86()
{
	if (Global_14443.f_1 > 3)
	{
		Global_14443.f_1 = 10;
		func_99();
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
		{
			if (!unk_0xB46E03E529421E99(unk_0xA0081090911D13E5()))
			{
				if (unk_0xFA1068B6E2F3F22A(unk_0xA0081090911D13E5(), 0))
				{
					if (!func_98())
					{
						func_97();
					}
				}
				else if (func_96() == 0)
				{
					func_97();
				}
			}
		}
		if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2)
		{
			func_95();
			func_142(Global_14424, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_101553.f_32740[Global_1628 /*29*/].f_24[Global_14443] == 0)
	{
		func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_1628 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
	}
	else
	{
		func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_101553.f_32740[Global_1628 /*29*/].f_3), &(Global_101553.f_32740[Global_1628 /*29*/].f_7), "CELL_211", &(Global_101553.f_32740[Global_1628 /*29*/].f_3), 0);
	}
	func_91();
	if (Global_69617)
	{
		func_87(1908, 1, -1);
	}
}

void func_87(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_58(iParam0, func_59(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_90(iParam0))
	{
		func_89(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_88(iParam0, iVar0, iParam2, 1);
	}
}

void func_88(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2491469[iParam0 /*3*/][func_59(uParam2)];
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 780:
			Global_1352283[func_59(uParam2)] = iParam1;
			break;
		
		case 781:
			Global_1352289[func_59(uParam2)] = iParam1;
			break;
		
		case 782:
			Global_1352295[func_59(uParam2)] = iParam1;
			break;
		
		case 783:
			Global_1352301[func_59(uParam2)] = iParam1;
			break;
		
		case 770:
			Global_1352259[func_59(uParam2)] = iParam1;
			break;
		
		case 771:
			Global_1352265[func_59(uParam2)] = iParam1;
			break;
		
		case 772:
			Global_1352271[func_59(uParam2)] = iParam1;
			break;
		
		case 773:
			Global_1352277[func_59(uParam2)] = iParam1;
			break;
		
		case 760:
			Global_1352235[func_59(uParam2)] = iParam1;
			break;
		
		case 761:
			Global_1352241[func_59(uParam2)] = iParam1;
			break;
		
		case 762:
			Global_1352247[func_59(uParam2)] = iParam1;
			break;
		
		case 763:
			Global_1352253[func_59(uParam2)] = iParam1;
			break;
		
		case 750:
			Global_1352307[func_59(uParam2)] = iParam1;
			break;
		
		case 751:
			Global_1352313[func_59(uParam2)] = iParam1;
			break;
		
		case 752:
			Global_1352319[func_59(uParam2)] = iParam1;
			break;
		
		case 753:
			Global_1352325[func_59(uParam2)] = iParam1;
			break;
		
		case 1296:
			Global_1352331[func_59(uParam2)] = iParam1;
			break;
		
		case 632:
			Global_1352337[func_59(uParam2)] = iParam1;
			break;
		
		case 1271:
			Global_1352343[func_59(uParam2)] = iParam1;
			break;
		
		case 1868:
			Global_2507705[0 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 2259:
			Global_2507705[1 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 2909:
			Global_2507705[2 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3038:
			Global_2507705[3 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 4481:
			Global_2507752[func_59(uParam2)] = iParam1;
			break;
		
		case 757:
			Global_1352349[func_59(uParam2)] = iParam1;
			break;
		
		case 758:
			Global_1352355[func_59(uParam2)] = iParam1;
			break;
		
		case 759:
			Global_1352361[func_59(uParam2)] = iParam1;
			break;
		
		case 1229:
			Global_1352367[func_59(uParam2)] = iParam1;
			break;
		
		case 3033:
			Global_2507727[0 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3034:
			Global_2507727[1 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2507727[2 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2507727[3 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3037:
			Global_2507727[4 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3616:
			Global_2507755[0 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3617:
			Global_2507755[1 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3618:
			Global_2507755[2 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3619:
			Global_2507755[3 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3620:
			Global_2507755[4 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3621:
			Global_2507771[0 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3622:
			Global_2507771[1 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2507771[2 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2507771[3 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2507771[4 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3201:
			Global_2507727[5 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3207:
			Global_2507705[4 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2507787[func_59(uParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2507796[func_59(uParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2507790[func_59(uParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2507799[func_59(uParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2507793[func_59(uParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2507802[func_59(uParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2507805[func_59(uParam2)] = iParam1;
			break;
		
		case 3209:
			Global_2507727[6 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3210:
			Global_2507705[5 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2507727[7 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3212:
			Global_2507705[6 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_89(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2491469[iParam0 /*3*/][func_59(uParam2)];
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, iParam1, iParam3);
	}
}

int func_90(int iParam0)
{
	if (Global_1352216)
	{
		switch (iParam0)
		{
			case 780:
			case 781:
			case 782:
			case 783:
			case 770:
			case 771:
			case 772:
			case 773:
			case 760:
			case 761:
			case 762:
			case 763:
			case 750:
			case 751:
			case 752:
			case 753:
			case 1296:
			case 632:
			case 1271:
			case 757:
			case 758:
			case 759:
			case 1229:
			case 1868:
			case 2259:
			case 2909:
			case 3038:
			case 4481:
			case 3033:
			case 3034:
			case 3035:
			case 3036:
			case 3037:
			case 3212:
			case 3214:
			case 3616:
			case 3617:
			case 3618:
			case 3619:
			case 3620:
			case 3621:
			case 3622:
			case 3623:
			case 3624:
			case 3625:
			case 3207:
			case 3201:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3647:
			case 3648:
			case 3669:
			case 3210:
			case 3209:
				return 1;
				break;
			}
	}
	return 0;
}

void func_91()
{
	char cVar0[24];
	
	if (Global_14426 == 1)
	{
		return;
	}
	if (Global_14443.f_1 < 4)
	{
		return;
	}
	while (!unk_0x1E3F61C2C1E29520(Global_14424))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	switch (Global_14443.f_1)
	{
		case 6:
			func_142(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_94(Global_2918);
			if (Global_2918 == 1)
			{
				func_142(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14447), -1082130432, -1082130432, -1082130432);
				Global_14423 = Global_14447;
			}
			else
			{
				func_142(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14448), -1082130432, -1082130432, -1082130432);
				Global_14423 = Global_14448;
			}
			if (Global_14431)
			{
				func_139(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_139(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_139(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_139(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14606 == 0)
			{
				func_139(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x09C86C0C5CA26B1E(&Global_2313, 17);
			}
			else if (Global_69617)
			{
				func_139(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x09C86C0C5CA26B1E(&Global_2313, 17);
			}
			else
			{
				if (Global_14605 == 1)
				{
					if (Global_14431)
					{
						func_139(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_139(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14431)
				{
					func_139(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_139(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0x88B0F0DC270164B7(&Global_2313, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_142(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_139(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_139(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x09C86C0C5CA26B1E(&Global_2313, 17);
			if (unk_0x08BA6DD398CA197C(Global_2313, 20))
			{
				func_139(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14431)
			{
				func_139(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14386)
				{
					func_139(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_139(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14442 == 1)
			{
				func_93();
				func_142(Global_14424, "SET_THEME", unk_0xBBDA792448DB5A89(Global_101553.f_12906[Global_14443 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15758)
				{
					unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
					unk_0x7CBFB9F4AF33C67E(4);
					unk_0x7CBFB9F4AF33C67E(0);
					unk_0x7CBFB9F4AF33C67E(2);
					unk_0x709662CF2BD061A4("CELL_CONDFON");
					unk_0xDA35BDB37E728640(&Global_15760);
					unk_0x1E77BE8F4283FA05();
					func_72("CELL_300");
					func_72("CELL_217");
					func_72("CELL_217");
					unk_0xE73340DA551C95E1();
				}
				else if (Global_101553.f_32740[Global_1628 /*29*/].f_24[Global_14443] == 0)
				{
					func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_117[Global_1628 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_101553.f_32740[Global_1628 /*29*/].f_3), &(Global_101553.f_32740[Global_1628 /*29*/].f_7), "CELL_217", &(Global_101553.f_32740[Global_1628 /*29*/].f_3), 0);
				}
				func_142(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15745 == 4 || Global_15745 == 3)
			{
				func_142(Global_14424, "SET_THEME", unk_0xBBDA792448DB5A89(Global_101553.f_12906[Global_14443 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_93();
				if (Global_15758)
				{
					unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
					unk_0x7CBFB9F4AF33C67E(4);
					unk_0x7CBFB9F4AF33C67E(0);
					unk_0x7CBFB9F4AF33C67E(2);
					unk_0x709662CF2BD061A4("CELL_CONDFON");
					unk_0xDA35BDB37E728640(&Global_15760);
					unk_0x1E77BE8F4283FA05();
					func_72("CELL_300");
					func_72("CELL_219");
					func_72("CELL_219");
					unk_0xE73340DA551C95E1();
				}
				else
				{
					if (Global_16003)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (Global_101553.f_32740[Global_1628 /*29*/].f_24[Global_14443] == 0)
					{
						func_142(Global_14424, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_1628 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_142(Global_14424, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_101553.f_32740[Global_1628 /*29*/].f_3), &(Global_101553.f_32740[Global_1628 /*29*/].f_7), &cVar0, &(Global_101553.f_32740[Global_1628 /*29*/].f_3), 0);
					}
				}
				func_142(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_92();
			break;
		
		default:
			break;
	}
}

void func_92()
{
	if (unk_0x1E3F61C2C1E29520(Global_14424))
	{
		if (Global_14442 == 1)
		{
			if (Global_14431)
			{
				func_139(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_139(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15792)
			{
				func_139(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0x08BA6DD398CA197C(Global_2313, 20))
			{
				func_139(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14431)
			{
				func_139(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_139(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_139(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x09C86C0C5CA26B1E(&Global_2313, 17);
		}
		else
		{
			func_139(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_139(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x09C86C0C5CA26B1E(&Global_2313, 17);
			if (unk_0x08BA6DD398CA197C(Global_2313, 20))
			{
				func_139(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14431)
			{
				func_139(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14386)
				{
					func_139(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_139(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_93()
{
	if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
	{
		if (Global_14443 == 0)
		{
			switch (Global_101553.f_12906[Global_14443 /*20*/].f_6)
			{
				case 1:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 0);
					break;
				
				case 2:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 1);
					break;
				
				case 3:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 2);
					break;
				
				case 4:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 3);
					break;
				
				case 5:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 4);
					break;
				
				case 6:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 5);
					break;
				
				case 7:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14443 == 1)
		{
			switch (Global_101553.f_12906[Global_14443 /*20*/].f_6)
			{
				case 1:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 6);
					break;
				
				case 2:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 0);
					break;
				
				case 3:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 1);
					break;
				
				case 4:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 2);
					break;
				
				case 5:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 3);
					break;
				
				case 6:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 4);
					break;
				
				case 7:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14443 == 2)
		{
			switch (Global_101553.f_12906[Global_14443 /*20*/].f_6)
			{
				case 1:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 5);
					break;
				
				case 2:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 6);
					break;
				
				case 3:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 1);
					break;
				
				case 4:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 0);
					break;
				
				case 5:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 2);
					break;
				
				case 6:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 3);
					break;
				
				case 7:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14443 == 3)
		{
			switch (Global_2578133)
			{
				case 1:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 0);
					break;
				
				case 2:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 1);
					break;
				
				case 3:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 2);
					break;
				
				case 4:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 3);
					break;
				
				case 5:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 4);
					break;
				
				case 6:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 5);
					break;
				
				case 7:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_94(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Global_16813 = 0;
	Global_2918 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2882[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_22(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2320[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2320[iVar1 /*15*/].f_4)
					{
						if (Global_2882[iVar0] == 0)
						{
							Global_2846[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0x08BA6DD398CA197C(Global_2314, 3))
								{
									iVar2 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14608 = 0;
								}
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_72(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(iVar2);
								unk_0xE73340DA551C95E1();
							}
							if (Global_2451773)
							{
								if (iVar1 == 14)
								{
									func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2882[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2320[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2320[iVar1 /*15*/].f_4)
					{
						if (Global_2882[iVar0] == 0)
						{
							Global_2846[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_101553.f_12996[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_101553.f_12996[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_101553.f_12996[iVar3 /*104*/].f_99[Global_14443] == 1)
											{
												Global_16813++;
											}
										}
									}
									iVar3++;
								}
								func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16813), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69617)
								{
									iVar4 = 0;
									iVar4 = Global_2576655;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_2576656[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_2576656[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_2576656[iVar5 /*104*/].f_99[Global_14443] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14443)
									{
										case 0:
											iVar6 = Global_36911;
											break;
										
										case 1:
											iVar6 = Global_36912;
											break;
										
										case 2:
											iVar6 = Global_36913;
											break;
										
										default:
											break;
									}
									func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_72(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(Global_2319);
								unk_0xE73340DA551C95E1();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x08BA6DD398CA197C(Global_2314, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_72(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(iVar7);
								unk_0xE73340DA551C95E1();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x08BA6DD398CA197C(Global_2314, 3))
								{
									iVar8 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14608 = 0;
								}
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_72(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(iVar8);
								unk_0xE73340DA551C95E1();
							}
							else if (iVar1 == 8)
							{
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_72(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(42);
								unk_0xE73340DA551C95E1();
							}
							else if ((iVar1 == 23 && unk_0x28C1B9853548BD8E(&(Global_2320[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x08BA6DD398CA197C(Global_2314, 6))
							{
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_72(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(42);
								unk_0xE73340DA551C95E1();
							}
							else if (Global_2320[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1613316.f_1;
								func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2882[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_95()
{
	if (Global_3118[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3118[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3118[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3118[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3118[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3118[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0x09C86C0C5CA26B1E(&Global_2313, 25);
	unk_0x88B0F0DC270164B7(&Global_2314, 11);
}

int func_96()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
	{
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
		{
			if (Global_14386 == 0)
			{
				if (Global_1628 != 128)
				{
					if (!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
					{
						if (Global_15745 != 2)
						{
						}
					}
				}
			}
		}
		if (func_22(14))
		{
			return 0;
		}
		if (unk_0xFA1068B6E2F3F22A(unk_0xA0081090911D13E5(), 0))
		{
			return 0;
		}
		if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
		{
			if (!unk_0x7CC73BBA898B4C38())
			{
				if (unk_0xB46E03E529421E99(unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x019057DADA219C94(unk_0xA0081090911D13E5()) || unk_0x2CCFE2A750B8D80F(unk_0xA0081090911D13E5())) || unk_0x2FFAB3D2307F1BA7(unk_0x0C1D3C552325765B())) || unk_0xBA27A740ED6E91CC(unk_0xA0081090911D13E5()))
		{
			return 0;
		}
		if (Global_100601)
		{
			return 0;
		}
	}
	if (Global_69617)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0xCCC8FE2C71D0E93E();
	iVar1 = unk_0x819C3E64C255229B(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0x7CC73BBA898B4C38()))
	{
		iVar2 = 1;
		if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
		{
			if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
			{
				uVar3 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
				if ((((((((unk_0xBFD32C1D4D54E09B(unk_0x705BC1BB91F530B5(uVar3)) || unk_0xC388189407833D70(unk_0x705BC1BB91F530B5(uVar3))) || unk_0xA727EEDD175A1189(unk_0x705BC1BB91F530B5(uVar3))) || unk_0x705BC1BB91F530B5(uVar3) == joaat("seashark")) || unk_0x705BC1BB91F530B5(uVar3) == joaat("seashark2")) || unk_0x705BC1BB91F530B5(uVar3) == joaat("rhino")) || unk_0x705BC1BB91F530B5(uVar3) == joaat("submersible")) || unk_0x705BC1BB91F530B5(uVar3) == joaat("submersible2")) || unk_0x705BC1BB91F530B5(uVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_2578135 || iVar2 == 1)
	{
		if (unk_0xA96867DD0A63C62C(joaat("apptrackify")) > 0 || Global_101553.f_12906.f_89)
		{
			if (unk_0xA96867DD0A63C62C(joaat("michael2")) > 0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_97()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		if (func_98() && unk_0xFA1068B6E2F3F22A(unk_0xA0081090911D13E5(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_69617)
	{
		if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()) && iVar1 == 0)
		{
			iVar2 = unk_0x9C84A6C416EAB87E(unk_0xA0081090911D13E5(), 0);
			if (Global_69617)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || unk_0x42F7F3EE791EDE08(unk_0xA0081090911D13E5()))
				{
					iVar0 = 1;
				}
			}
			else if (unk_0x42F7F3EE791EDE08(unk_0xA0081090911D13E5()))
			{
				iVar0 = 1;
			}
			if (!Global_14386)
			{
				if (Global_1628 != 128)
				{
					if (iVar0 == 0)
					{
						if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
						{
							if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
							{
							}
							else
							{
								if (Global_69617)
								{
									unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 244, 0);
									unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 243, 0);
									unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 242, 0);
								}
								unk_0x88B0F0DC270164B7(&Global_2313, 11);
								unk_0xC29813E4A3FD0772(unk_0xA0081090911D13E5(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

int func_98()
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0xCCC8FE2C71D0E93E();
	iVar1 = unk_0x819C3E64C255229B(uVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_99()
{
	struct<2> Var0;
	
	unk_0x4788913DF846A969(&Var0);
	if (Global_14396[Global_14388 /*3*/].f_1 == Var0.f_1)
	{
	}
	else
	{
		Global_14383 = 1;
	}
}

int func_100(int iParam0)
{
	int iVar0;
	
	if (func_101(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_101553.f_6543.f_650)
	{
		if (Global_101553.f_6543.f_199[iVar0 /*15*/].f_6 == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101553.f_6543.f_136)
	{
		if (Global_101553.f_6543[iVar0 /*15*/].f_6 == iParam0)
		{
			if (unk_0x08BA6DD398CA197C(Global_101553.f_6543[iVar0 /*15*/].f_1, 7))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_101(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar1 = Global_82491[iVar0 /*5*/];
		if (iVar1 != -1)
		{
			iVar2 = -1;
			iVar2 = Global_69886.f_109[Global_82491[iVar0 /*5*/] /*4*/];
			if (iVar2 != -1)
			{
				if (func_102(Global_82527[iVar2 /*34*/].f_12, iParam0))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_102(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 19:
			return func_104(uParam0, 8);
			break;
		
		case 14:
			return func_104(uParam0, 16);
			break;
		
		case 17:
			return func_104(uParam0, 32);
			break;
	}
	return func_103(uParam0, iParam1);
}

int func_103(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
			return unk_0x08BA6DD398CA197C(uParam0, iParam1);
		
		default:
	}
	return 0;
}

bool func_104(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_105()
{
	if (Global_14421 == 0)
	{
		if (func_145(2, Global_14412, 0))
		{
			unk_0x09C86C0C5CA26B1E(&Global_2314, 0);
			func_143();
			Global_14421 = 1;
			unk_0xB9D4F4DE7E7EC038(Global_14424, "GET_CURRENT_SELECTION");
			uLocal_102 = unk_0xC23FC7D89C4FAF05();
			while (!unk_0x6F61AEBF81DF1A16(uLocal_102))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_106 = unk_0xD93E20F39826C097(uLocal_102);
			if (iLocal_106 == 0)
			{
				Global_16854[Global_14443] = 1;
				iLocal_117 = 0;
				Global_16859 = 0;
				Global_16858 = 1;
				Global_16860 = 0;
				func_86();
			}
			else
			{
				iLocal_118 = 0;
				func_120();
			}
		}
	}
}

void func_106(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_100195 && iParam1)
	{
		if (func_110(sParam0) && !unk_0x9A450B8B8FEC3CA9())
		{
			unk_0x94724F7C938EBE34(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_101553.f_25100.f_145)
	{
		if (unk_0x28C1B9853548BD8E(sParam0, &(Global_101553.f_25100[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_101553.f_25100.f_145 - 2))
			{
				func_109(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_108((Global_101553.f_25100.f_145 - 1));
			Global_101553.f_25100.f_145 = (Global_101553.f_25100.f_145 - 1);
			func_107();
			return;
		}
		iVar0++;
	}
}

void func_107()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_101553.f_25100.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101553.f_25100.f_145)
	{
		if (unk_0x08BA6DD398CA197C(Global_101553.f_25100[iVar0 /*16*/].f_11, 0))
		{
			if (Global_101553.f_25100[iVar0 /*16*/].f_12 > Global_101553.f_25100.f_146[0])
			{
				Global_101553.f_25100.f_146[0] = Global_101553.f_25100[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x08BA6DD398CA197C(Global_101553.f_25100[iVar0 /*16*/].f_11, 1))
		{
			if (Global_101553.f_25100[iVar0 /*16*/].f_12 > Global_101553.f_25100.f_146[1])
			{
				Global_101553.f_25100.f_146[1] = Global_101553.f_25100[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x08BA6DD398CA197C(Global_101553.f_25100[iVar0 /*16*/].f_11, 2))
		{
			if (Global_101553.f_25100[iVar0 /*16*/].f_12 > Global_101553.f_25100.f_146[2])
			{
				Global_101553.f_25100.f_146[2] = Global_101553.f_25100[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_108(int iParam0)
{
	StringCopy(&(Global_101553.f_25100[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_101553.f_25100[iParam0 /*16*/].f_4), "", 16);
	Global_101553.f_25100[iParam0 /*16*/].f_8 = 0;
	Global_101553.f_25100[iParam0 /*16*/].f_9 = 0;
	Global_101553.f_25100[iParam0 /*16*/].f_11 = 0;
	Global_101553.f_25100[iParam0 /*16*/].f_10 = -1;
	Global_101553.f_25100[iParam0 /*16*/].f_12 = 0;
	Global_101553.f_25100[iParam0 /*16*/].f_13 = 0;
	Global_101553.f_25100[iParam0 /*16*/].f_14 = 0;
	Global_101553.f_25100[iParam0 /*16*/].f_15 = 0;
}

void func_109(int iParam0, int iParam1)
{
	Global_101553.f_25100[iParam0 /*16*/] = { Global_101553.f_25100[iParam1 /*16*/] };
	Global_101553.f_25100[iParam0 /*16*/].f_4 = { Global_101553.f_25100[iParam1 /*16*/].f_4 };
	Global_101553.f_25100[iParam0 /*16*/].f_8 = Global_101553.f_25100[iParam1 /*16*/].f_8;
	Global_101553.f_25100[iParam0 /*16*/].f_10 = Global_101553.f_25100[iParam1 /*16*/].f_10;
	Global_101553.f_25100[iParam0 /*16*/].f_9 = Global_101553.f_25100[iParam1 /*16*/].f_9;
	Global_101553.f_25100[iParam0 /*16*/].f_11 = Global_101553.f_25100[iParam1 /*16*/].f_11;
	Global_101553.f_25100[iParam0 /*16*/].f_12 = Global_101553.f_25100[iParam1 /*16*/].f_12;
	Global_101553.f_25100[iParam0 /*16*/].f_13 = Global_101553.f_25100[iParam1 /*16*/].f_13;
	Global_101553.f_25100[iParam0 /*16*/].f_14 = Global_101553.f_25100[iParam1 /*16*/].f_14;
	Global_101553.f_25100[iParam0 /*16*/].f_15 = Global_101553.f_25100[iParam1 /*16*/].f_15;
}

var func_110(var uParam0)
{
	unk_0xA277242E6FB38513(uParam0);
	return unk_0x52387FFD63E8D8FC(0);
}

void func_111(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_112(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_112(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x28C1B9853548BD8E(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_101553.f_25100.f_145)
	{
		if (unk_0x28C1B9853548BD8E(&(Global_101553.f_25100[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_101553.f_25100.f_145 < 9)
	{
		StringCopy(&(Global_101553.f_25100[Global_101553.f_25100.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_101553.f_25100[Global_101553.f_25100.f_145 /*16*/].f_4), sParam1, 16);
		Global_101553.f_25100[Global_101553.f_25100.f_145 /*16*/].f_8 = (unk_0xDF658EB6CA91DFBC() + iParam3);
		Global_101553.f_25100[Global_101553.f_25100.f_145 /*16*/].f_9 = iParam5;
		Global_101553.f_25100[Global_101553.f_25100.f_145 /*16*/].f_11 = iParam6;
		Global_101553.f_25100[Global_101553.f_25100.f_145 /*16*/].f_12 = uParam2;
		Global_101553.f_25100[Global_101553.f_25100.f_145 /*16*/].f_13 = iParam7;
		Global_101553.f_25100[Global_101553.f_25100.f_145 /*16*/].f_14 = iParam8;
		Global_101553.f_25100[Global_101553.f_25100.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_101553.f_25100[Global_101553.f_25100.f_145 /*16*/].f_10 = ((unk_0xDF658EB6CA91DFBC() + iParam3) + iParam4);
		}
		else
		{
			Global_101553.f_25100[Global_101553.f_25100.f_145 /*16*/].f_10 = -1;
		}
		Global_101553.f_25100.f_145++;
		func_107();
	}
}

int func_113(char* sParam0)
{
	if (unk_0x28C1B9853548BD8E(sParam0, &Global_100198))
	{
		return 1;
	}
	if (func_114(sParam0))
	{
		return 0;
	}
	return 2;
}

int func_114(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_101553.f_25100.f_145)
	{
		if (unk_0x28C1B9853548BD8E(sParam0, &(Global_101553.f_25100[iVar0 /*16*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_115(int iParam0)
{
	return 0;
	if (((iParam0 == 92 || iParam0 == 68) || iParam0 == 79) || iParam0 == 34)
	{
		return 0;
	}
	return 1;
}

int func_116(int iParam0, int iParam1)
{
	int iVar0;
	
	return 0;
	if ((iParam0 >= 150 || iParam1 >= 150) || iParam0 == iParam1)
	{
		return 0;
	}
	if ((Global_87586 != -1 && unk_0x08BA6DD398CA197C(Global_82527[Global_87586 /*34*/].f_15, 15)) && unk_0x08BA6DD398CA197C(Global_87587, iParam1))
	{
		if (Global_87585 != 5 || func_119() == Global_87586)
		{
			if (!func_118(12))
			{
				if (func_117(iParam0, iParam1, &iVar0) && func_80(iVar0) == 0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_117(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_82(iParam0);
	iVar1 = func_82(iParam1);
	if (iVar0 != 7 && iVar1 != 7)
	{
		*uParam2 = func_81(iVar0, iVar1);
		if (*uParam2 != 10)
		{
			return 1;
		}
	}
	*uParam2 = 10;
	return 0;
}

bool func_118(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_87594, iParam0);
}

int func_119()
{
	return Global_69879;
}

void func_120()
{
	unk_0xC1B1E9A034A63A62(0);
	if (Global_14443.f_1 > 3)
	{
		Global_14443.f_1 = 8;
	}
	if (Global_14431)
	{
		func_139(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
		func_139(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_139(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_139(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_139(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x09C86C0C5CA26B1E(&Global_2313, 17);
	iLocal_117 = 1;
	func_142(Global_14424, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (func_100(Global_1628))
	{
		if (bLocal_329)
		{
			func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(0), -1f, -1f, &(Global_2151[iLocal_331 /*16*/].f_8), 0, 0, 0, 0);
			func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_208", 0, 0, 0, 0);
			if (bLocal_330)
			{
				if (func_121(Global_1628, Global_14443))
				{
					func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_209", 0, 0, 0, 0);
				}
				if (func_78(Global_1628, Global_14443))
				{
					func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_222", 0, 0, 0, 0);
				}
			}
		}
		else
		{
			func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_208", 0, 0, 0, 0);
			if (bLocal_330)
			{
				if (func_121(Global_1628, Global_14443))
				{
					func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_209", 0, 0, 0, 0);
				}
				if (func_78(Global_1628, Global_14443))
				{
					func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_222", 0, 0, 0, 0);
				}
			}
		}
	}
	else if (bLocal_329)
	{
		func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(0), -1f, -1f, &(Global_2151[iLocal_331 /*16*/].f_8), 0, 0, 0, 0);
		if (bLocal_330)
		{
			if (func_121(Global_1628, Global_14443))
			{
				func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_209", 0, 0, 0, 0);
			}
			if (func_78(Global_1628, Global_14443))
			{
				func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_222", 0, 0, 0, 0);
			}
		}
	}
	else if (bLocal_330)
	{
		if (func_121(Global_1628, Global_14443))
		{
			func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_209", 0, 0, 0, 0);
		}
		if (func_78(Global_1628, Global_14443))
		{
			func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_222", 0, 0, 0, 0);
		}
	}
	func_142(Global_14424, "DISPLAY_VIEW", 18f, unk_0xBBDA792448DB5A89(iLocal_103), -1082130432, -1082130432, -1082130432);
	func_140(Global_14424, "SET_HEADER", &(Global_101553.f_32740[Global_1628 /*29*/].f_3), 0, 0, 0, 0);
}

int func_121(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((iParam0 >= 150 || iParam1 >= 150) || iParam0 == iParam1)
	{
		return 0;
	}
	if ((iParam0 == 1 && iParam1 == 0) || (iParam0 == 0 && iParam1 == 1))
	{
		if (func_8(90) && !func_8(20))
		{
			return 0;
		}
	}
	if (!func_83(6))
	{
		if (func_117(iParam0, iParam1, &iVar0) && func_80(iVar0) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_122()
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		unk_0xABC36CFE4F3421A0(0, 22, 1);
	}
	if (func_145(2, Global_14412, 0))
	{
		func_143();
		Global_14421 = 1;
		unk_0xB9D4F4DE7E7EC038(Global_14424, "GET_CURRENT_SELECTION");
		uLocal_102 = unk_0xC23FC7D89C4FAF05();
		while (!unk_0x6F61AEBF81DF1A16(uLocal_102))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		iVar0 = unk_0xD93E20F39826C097(uLocal_102);
		iLocal_108 = Global_3104[iVar0];
		uLocal_110[0] = unk_0xFFC9DE7E93AEAE21(&(Global_3021[iLocal_108 /*5*/]));
		if (unk_0x28C1B9853548BD8E(uLocal_110[0], "*"))
		{
			cLocal_112 = { Global_3087[Global_14443 /*4*/] };
			iLocal_109 = unk_0x3ACC64D0951B9D26(&cLocal_112);
		}
		else if (unk_0x3ACC64D0951B9D26(&cLocal_112) < 14)
		{
			StringConCat(&cLocal_112, uLocal_110[0], 16);
			iLocal_109++;
		}
		unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_HEADER");
		unk_0x709662CF2BD061A4("STRING");
		unk_0xAACCC88E8429891E(&cLocal_112, -1);
		unk_0x1E77BE8F4283FA05();
		unk_0xE73340DA551C95E1();
	}
	if (func_145(2, 178, 0))
	{
		func_75();
		Global_14421 = 1;
		if (unk_0x3ACC64D0951B9D26(&cLocal_112) > 0)
		{
			StringCopy(&cLocal_112, unk_0x15BAFA3B5F3ABB22(&cLocal_112, 0, (iLocal_109 - 1)), 16);
			iLocal_109 = (iLocal_109 - 1);
		}
		unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_HEADER");
		unk_0x709662CF2BD061A4("STRING");
		unk_0xAACCC88E8429891E(&cLocal_112, -1);
		unk_0x1E77BE8F4283FA05();
		unk_0xE73340DA551C95E1();
	}
	if (func_145(2, Global_14415, 0))
	{
		if (!func_128())
		{
			func_143();
			Global_3087[Global_14443 /*4*/] = { cLocal_112 };
			Global_1628 = 144;
			iLocal_309 = 0;
			if (Global_14443.f_1 > 3)
			{
				Global_14443.f_1 = 10;
				func_99();
				if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
				{
					if (!unk_0xB46E03E529421E99(unk_0xA0081090911D13E5()))
					{
						if (unk_0xFA1068B6E2F3F22A(unk_0xA0081090911D13E5(), 0))
						{
							if (!func_98())
							{
								func_97();
							}
						}
						else if (func_96() == 0)
						{
							func_97();
						}
					}
				}
			}
			iVar1 = 0;
			iLocal_122 = 0;
			while (iVar1 < 150)
			{
				if (iVar1 != 146)
				{
					sVar2 = unk_0xFFC9DE7E93AEAE21(&(Global_117[iVar1 /*10*/].f_4));
					if (unk_0x28C1B9853548BD8E(sVar2, &cLocal_112))
					{
						if ((Global_101553.f_32740[iVar1 /*29*/].f_12[Global_14443] == 1 || Global_101553.f_32740[iVar1 /*29*/].f_12[Global_14443] == 2) || unk_0x28C1B9853548BD8E(sVar2, unk_0xFFC9DE7E93AEAE21(&(Global_117[130 /*10*/].f_4))))
						{
							Global_1628 = iVar1;
						}
						else
						{
							iLocal_122 = 1;
						}
					}
				}
				iVar1++;
			}
			if ((Global_1628 == 144 && iLocal_309 == 0) && iLocal_122 == 0)
			{
				unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
				unk_0x7CBFB9F4AF33C67E(4);
				unk_0x7CBFB9F4AF33C67E(0);
				unk_0x7CBFB9F4AF33C67E(3);
				unk_0x709662CF2BD061A4("STRING");
				unk_0xAACCC88E8429891E(&cLocal_112, -1);
				unk_0x1E77BE8F4283FA05();
				func_72("CELL_300");
				func_72("CELL_211");
				func_72("CELL_195");
				unk_0xE73340DA551C95E1();
				func_142(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
				iLocal_309 = 0;
				iVar3 = 0;
				while (iVar3 < 37)
				{
					sVar4 = unk_0xFFC9DE7E93AEAE21(&(Global_1632[iVar3 /*14*/]));
					if (unk_0x28C1B9853548BD8E(sVar4, &cLocal_112))
					{
						iLocal_309 = 1;
						cLocal_310 = { Global_1632[iVar3 /*14*/].f_4 };
						Local_314 = { Global_1632[iVar3 /*14*/].f_8 };
					}
					iVar3++;
				}
				if (iLocal_309 == 0)
				{
					iLocal_116 = unk_0x3ACC64D0951B9D26(&cLocal_112);
					if (iLocal_116 > 6)
					{
						StringCopy(&(uLocal_320[0]), unk_0x15BAFA3B5F3ABB22(&cLocal_112, 0, 1), 4);
						StringCopy(&(uLocal_320[1]), unk_0x15BAFA3B5F3ABB22(&cLocal_112, 1, 2), 4);
						StringCopy(&(uLocal_320[2]), unk_0x15BAFA3B5F3ABB22(&cLocal_112, 2, 3), 4);
						StringCopy(&(uLocal_320[3]), unk_0x15BAFA3B5F3ABB22(&cLocal_112, 3, 4), 4);
						StringCopy(&(uLocal_320[4]), unk_0x15BAFA3B5F3ABB22(&cLocal_112, 4, 5), 4);
						StringCopy(&(uLocal_320[5]), unk_0x15BAFA3B5F3ABB22(&cLocal_112, 5, 6), 4);
						if (((unk_0x28C1B9853548BD8E(&(uLocal_320[0]), "1") && unk_0x28C1B9853548BD8E(&(uLocal_320[1]), "9")) && unk_0x28C1B9853548BD8E(&(uLocal_320[2]), "9")) && unk_0x28C1B9853548BD8E(&(uLocal_320[3]), "9"))
						{
							iVar5 = func_127(&(uLocal_320[4]));
							iVar6 = func_127(&(uLocal_320[5]));
							func_126(iVar5, iVar6);
							iLocal_309 = 1;
						}
						if (iLocal_309 == 0)
						{
							if (iLocal_116 == 10 || iLocal_116 == 7)
							{
								if (iLocal_116 == 10)
								{
									StringCopy(&(uLocal_320[0]), unk_0x15BAFA3B5F3ABB22(&cLocal_112, 3, 4), 4);
									StringCopy(&(uLocal_320[1]), unk_0x15BAFA3B5F3ABB22(&cLocal_112, 4, 5), 4);
									StringCopy(&(uLocal_320[2]), unk_0x15BAFA3B5F3ABB22(&cLocal_112, 5, 6), 4);
									StringCopy(&(uLocal_320[3]), unk_0x15BAFA3B5F3ABB22(&cLocal_112, 6, 7), 4);
									StringCopy(&(uLocal_320[4]), unk_0x15BAFA3B5F3ABB22(&cLocal_112, 7, 8), 4);
									StringCopy(&(uLocal_320[5]), unk_0x15BAFA3B5F3ABB22(&cLocal_112, 8, 9), 4);
									StringCopy(&(uLocal_320[6]), unk_0x15BAFA3B5F3ABB22(&cLocal_112, 9, 10), 4);
								}
								else
								{
									StringCopy(&(uLocal_320[0]), unk_0x15BAFA3B5F3ABB22(&cLocal_112, 0, 1), 4);
									StringCopy(&(uLocal_320[1]), unk_0x15BAFA3B5F3ABB22(&cLocal_112, 1, 2), 4);
									StringCopy(&(uLocal_320[2]), unk_0x15BAFA3B5F3ABB22(&cLocal_112, 2, 3), 4);
									StringCopy(&(uLocal_320[3]), unk_0x15BAFA3B5F3ABB22(&cLocal_112, 3, 4), 4);
									StringCopy(&(uLocal_320[4]), unk_0x15BAFA3B5F3ABB22(&cLocal_112, 4, 5), 4);
									StringCopy(&(uLocal_320[5]), unk_0x15BAFA3B5F3ABB22(&cLocal_112, 5, 6), 4);
									StringCopy(&(uLocal_320[6]), unk_0x15BAFA3B5F3ABB22(&cLocal_112, 6, 7), 4);
								}
								if ((((unk_0x28C1B9853548BD8E(&(uLocal_320[0]), "5") && unk_0x28C1B9853548BD8E(&(uLocal_320[1]), "5")) && unk_0x28C1B9853548BD8E(&(uLocal_320[2]), "5")) && unk_0x28C1B9853548BD8E(&(uLocal_320[3]), "0")) && unk_0x28C1B9853548BD8E(&(uLocal_320[4]), "1"))
								{
									iVar7 = func_127(&(uLocal_320[5]));
									iVar8 = func_127(&(uLocal_320[6]));
									func_126(iVar7, iVar8);
									iLocal_309 = 1;
								}
							}
						}
					}
				}
			}
			else
			{
				if (Global_101553.f_32740[Global_1628 /*29*/].f_12[Global_14443] == 2 || Global_1628 == 130)
				{
					Global_101553.f_32740[Global_1628 /*29*/].f_24[Global_14443] = 1;
					if (Global_1628 == 130)
					{
						if (!Global_101553.f_32740[130 /*29*/].f_12[0] == 1)
						{
							func_124(130, 4, 1);
							func_124(130, 3, 0);
						}
						if (Global_69617)
						{
							if (!func_123(130, 3))
							{
								func_124(130, 3, 1);
							}
						}
					}
				}
				if (Global_101553.f_32740[Global_1628 /*29*/].f_24[Global_14443] == 0)
				{
					func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_1628 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_101553.f_32740[Global_1628 /*29*/].f_3), &(Global_101553.f_32740[Global_1628 /*29*/].f_7), "CELL_211", &(Global_101553.f_32740[Global_1628 /*29*/].f_3), 0);
				}
			}
			func_91();
		}
	}
}

int func_123(int iParam0, int iParam1)
{
	if (Global_101553.f_32740[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

void func_124(int iParam0, int iParam1, bool bParam2)
{
	Global_2999 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 140)
	{
		func_16();
		if (iParam1 == 4)
		{
			Global_101553.f_32740[iParam0 /*29*/].f_12[0] = 1;
			Global_101553.f_32740[iParam0 /*29*/].f_12[1] = 1;
			Global_101553.f_32740[iParam0 /*29*/].f_12[2] = 1;
			Global_101553.f_32740[iParam0 /*29*/].f_24[0] = 1;
			Global_101553.f_32740[iParam0 /*29*/].f_24[1] = 1;
			Global_101553.f_32740[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_101553.f_32740[iParam0 /*29*/].f_12[iParam1] == 1 && Global_101553.f_32740[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_101553.f_32740[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_101553.f_32740[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_69617)
			{
				if (iParam1 != 4)
				{
					if (Global_14443 != iParam1)
					{
						Global_2972[iParam1 /*4*/] = { Global_101553.f_32740[iParam0 /*29*/].f_3 };
						Global_2989[iParam1] = 1;
						Global_2994[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14443)
					{
					}
					else
					{
						Global_2923[1 /*6*/] = { Global_101553.f_32740[iParam0 /*29*/].f_3 };
						Global_2923[1 /*6*/].f_5 = iParam1;
						func_125();
					}
				}
				else
				{
					Global_2923[1 /*6*/] = { Global_101553.f_32740[iParam0 /*29*/].f_3 };
					Global_2923[1 /*6*/].f_5 = iParam1;
					func_125();
				}
			}
			else
			{
				Global_2923[1 /*6*/] = { Global_101553.f_32740[iParam0 /*29*/].f_3 };
				Global_2923[1 /*6*/].f_5 = iParam1;
				func_125();
			}
		}
	}
}

void func_125()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, unk_0xFFC9DE7E93AEAE21(&(Global_101553.f_32740[Global_2999 /*29*/].f_7)), 64);
	if (Global_3018 == 0)
	{
		unk_0x754E61FE98961B39("");
		StringCopy(&cVar16, unk_0xFFC9DE7E93AEAE21(&(Global_2923[1 /*6*/])), 64);
		sVar32 = unk_0xFFC9DE7E93AEAE21("CELL_253");
		unk_0xDAB775768F2B11B1(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0x754E61FE98961B39("CELL_255");
		unk_0xBDE6EEC5F6BDC060(&(Global_2923[1 /*6*/]));
		unk_0xDAB775768F2B11B1(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0x09C86C0C5CA26B1E(&Global_2313, 0);
}

void func_126(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (iParam0 + iParam1);
	iVar0 = (20 - iVar0);
	iVar0 += 5;
	switch (iVar0)
	{
		case 7:
			StringCopy(&cLocal_310, "ANS_RAN1", 16);
			StringCopy(&Local_314, "ANS_M_USA1", 24);
			break;
		
		case 8:
			StringCopy(&cLocal_310, "ANS_RAN2", 16);
			StringCopy(&Local_314, "ANS_F_USA1", 24);
			break;
		
		case 9:
			StringCopy(&cLocal_310, "ANS_RAN3", 16);
			StringCopy(&Local_314, "ANS_M_ENG1", 24);
			break;
		
		case 10:
			StringCopy(&cLocal_310, "ANS_RAN4", 16);
			StringCopy(&Local_314, "ANS_M_USA2", 24);
			break;
		
		case 11:
			StringCopy(&cLocal_310, "ANS_RAN5", 16);
			StringCopy(&Local_314, "ANS_M_ASIAN", 24);
			break;
		
		case 12:
			StringCopy(&cLocal_310, "ANS_RAN6", 16);
			StringCopy(&Local_314, "ANS_F_USA2", 24);
			break;
		
		case 13:
			StringCopy(&cLocal_310, "ANS_RAN7", 16);
			StringCopy(&Local_314, "ANSWER_FX", 24);
			break;
		
		case 14:
			StringCopy(&cLocal_310, "ANS_RAN8", 16);
			StringCopy(&Local_314, "ANSWER_FX", 24);
			break;
		
		case 15:
			StringCopy(&cLocal_310, "ANS_RAN9", 16);
			StringCopy(&Local_314, "ANSWER_FX", 24);
			break;
		
		case 16:
			StringCopy(&cLocal_310, "ANS_RAN10", 16);
			StringCopy(&Local_314, "ANSWER_FX", 24);
			break;
		
		case 17:
			StringCopy(&cLocal_310, "ANS_RAN1", 16);
			StringCopy(&Local_314, "ANS_M_USA1", 24);
			break;
		
		case 18:
			StringCopy(&cLocal_310, "ANS_RAN2", 16);
			StringCopy(&Local_314, "ANS_F_USA1", 24);
			break;
		
		case 19:
			StringCopy(&cLocal_310, "ANS_RAN3", 16);
			StringCopy(&Local_314, "ANS_M_ENG1", 24);
			break;
		
		case 20:
			StringCopy(&cLocal_310, "ANS_RAN4", 16);
			StringCopy(&Local_314, "ANS_M_USA2", 24);
			break;
		
		case 21:
			StringCopy(&cLocal_310, "ANS_RAN5", 16);
			StringCopy(&Local_314, "ANS_M_ASIAN", 24);
			break;
		
		case 22:
			StringCopy(&cLocal_310, "ANS_RAN6", 16);
			StringCopy(&Local_314, "ANS_F_USA2", 24);
			break;
		
		case 23:
			StringCopy(&cLocal_310, "ANS_RAN7", 16);
			StringCopy(&Local_314, "ANSWER_FX", 24);
			break;
		
		case 24:
			StringCopy(&cLocal_310, "ANS_RAN8", 16);
			StringCopy(&Local_314, "ANSWER_FX", 24);
			break;
		
		case 25:
			StringCopy(&cLocal_310, "ANS_RAN9", 16);
			StringCopy(&Local_314, "ANSWER_FX", 24);
			break;
		
		default:
			StringCopy(&cLocal_310, "ANS_RAN8", 16);
			StringCopy(&Local_314, "ANSWER_FX", 24);
			break;
	}
}

int func_127(char* sParam0)
{
	if (unk_0x28C1B9853548BD8E(sParam0, "0"))
	{
		return 0;
	}
	if (unk_0x28C1B9853548BD8E(sParam0, "1"))
	{
		return 1;
	}
	if (unk_0x28C1B9853548BD8E(sParam0, "2"))
	{
		return 2;
	}
	if (unk_0x28C1B9853548BD8E(sParam0, "3"))
	{
		return 3;
	}
	if (unk_0x28C1B9853548BD8E(sParam0, "4"))
	{
		return 4;
	}
	if (unk_0x28C1B9853548BD8E(sParam0, "5"))
	{
		return 5;
	}
	if (unk_0x28C1B9853548BD8E(sParam0, "6"))
	{
		return 6;
	}
	if (unk_0x28C1B9853548BD8E(sParam0, "7"))
	{
		return 7;
	}
	if (unk_0x28C1B9853548BD8E(sParam0, "8"))
	{
		return 8;
	}
	if (unk_0x28C1B9853548BD8E(sParam0, "9"))
	{
		return 9;
	}
	if (unk_0x28C1B9853548BD8E(sParam0, "A"))
	{
		return 10;
	}
	if (unk_0x28C1B9853548BD8E(sParam0, "B"))
	{
		return 11;
	}
	if (unk_0x28C1B9853548BD8E(sParam0, "C"))
	{
		return 12;
	}
	if (unk_0x28C1B9853548BD8E(sParam0, "D"))
	{
		return 13;
	}
	if (unk_0x28C1B9853548BD8E(sParam0, "E"))
	{
		return 14;
	}
	if (unk_0x28C1B9853548BD8E(sParam0, "F"))
	{
		return 15;
	}
	if (unk_0x28C1B9853548BD8E(sParam0, "G"))
	{
		return 16;
	}
	if (unk_0x28C1B9853548BD8E(sParam0, "H"))
	{
		return 17;
	}
	if (unk_0x28C1B9853548BD8E(sParam0, "I"))
	{
		return 18;
	}
	if (unk_0x28C1B9853548BD8E(sParam0, "J"))
	{
		return 19;
	}
	if (unk_0x28C1B9853548BD8E(sParam0, "K"))
	{
		return 20;
	}
	if (unk_0x28C1B9853548BD8E(sParam0, "L"))
	{
		return 21;
	}
	if (unk_0x28C1B9853548BD8E(sParam0, "M"))
	{
		return 22;
	}
	if (unk_0x28C1B9853548BD8E(sParam0, "N"))
	{
		return 23;
	}
	if (unk_0x28C1B9853548BD8E(sParam0, "O"))
	{
		return 24;
	}
	if (unk_0x28C1B9853548BD8E(sParam0, "P"))
	{
		return 25;
	}
	if (unk_0x28C1B9853548BD8E(sParam0, "Q"))
	{
		return 26;
	}
	if (unk_0x28C1B9853548BD8E(sParam0, "R"))
	{
		return 27;
	}
	if (unk_0x28C1B9853548BD8E(sParam0, "S"))
	{
		return 28;
	}
	if (unk_0x28C1B9853548BD8E(sParam0, "T"))
	{
		return 29;
	}
	if (unk_0x28C1B9853548BD8E(sParam0, "U"))
	{
		return 30;
	}
	if (unk_0x28C1B9853548BD8E(sParam0, "V"))
	{
		return 31;
	}
	if (unk_0x28C1B9853548BD8E(sParam0, "W"))
	{
		return 32;
	}
	if (unk_0x28C1B9853548BD8E(sParam0, "X"))
	{
		return 33;
	}
	if (unk_0x28C1B9853548BD8E(sParam0, "Y"))
	{
		return 34;
	}
	if (unk_0x28C1B9853548BD8E(sParam0, "Z"))
	{
		return 35;
	}
	if (unk_0x28C1B9853548BD8E(sParam0, "z"))
	{
		return -1;
	}
	return -1;
}

int func_128()
{
	if (Global_69617)
	{
		return 0;
	}
	if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
	{
		if (unk_0x2FFAB3D2307F1BA7(unk_0x0C1D3C552325765B()))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_129()
{
	if (Global_14422)
	{
		if (unk_0x83666F9FB8FEBD4B() > 50)
		{
			Global_14422 = 0;
		}
	}
	if (unk_0x4255B5ECB9D34344(2))
	{
		if (unk_0x2A57AED61E15C7C7(2, 180))
		{
			switch (Global_14423)
			{
				case 0:
					func_137();
					Global_14423 = 1;
					break;
				
				case 1:
					func_137();
					Global_14423 = 2;
					break;
				
				case 2:
					func_137();
					func_135();
					Global_14423 = 3;
					break;
				
				case 3:
					func_137();
					Global_14423 = 4;
					break;
				
				case 4:
					func_137();
					Global_14423 = 5;
					break;
				
				case 5:
					func_137();
					func_135();
					Global_14423 = 6;
					break;
				
				case 6:
					func_137();
					Global_14423 = 7;
					break;
				
				case 7:
					func_137();
					Global_14423 = 8;
					break;
				
				case 8:
					func_137();
					func_135();
					Global_14423 = 9;
					break;
				
				case 9:
					func_137();
					Global_14423 = 10;
					break;
				
				case 10:
					func_137();
					Global_14423 = 11;
					break;
				
				case 11:
					func_137();
					func_135();
					Global_14423 = 0;
					break;
				}
		}
		if (unk_0x2A57AED61E15C7C7(2, 181))
		{
			switch (Global_14423)
			{
				case 0:
					func_133();
					func_130();
					Global_14423 = 11;
					break;
				
				case 1:
					func_133();
					Global_14423 = 0;
					break;
				
				case 2:
					func_133();
					Global_14423 = 1;
					break;
				
				case 3:
					func_133();
					func_130();
					Global_14423 = 2;
					break;
				
				case 4:
					func_133();
					Global_14423 = 3;
					break;
				
				case 5:
					func_133();
					Global_14423 = 4;
					break;
				
				case 6:
					func_133();
					func_130();
					Global_14423 = 5;
					break;
				
				case 7:
					func_133();
					Global_14423 = 6;
					break;
				
				case 8:
					func_133();
					Global_14423 = 7;
					break;
				
				case 9:
					func_133();
					func_130();
					Global_14423 = 8;
					break;
				
				case 10:
					func_133();
					Global_14423 = 9;
					break;
				
				case 11:
					func_133();
					Global_14423 = 10;
					break;
				}
			}
	}
	if (Global_14422 == 0)
	{
		if (func_145(2, Global_14418, 0))
		{
			func_137();
			Global_14422 = 1;
			unk_0xC1B1E9A034A63A62(0);
			switch (Global_14443.f_1)
			{
				case 6:
					if (Global_14423 < (34 - 1))
					{
						Global_14423++;
					}
					break;
				
				case 5:
					if (Global_14423 < 3)
					{
						Global_14423++;
					}
					break;
				}
		}
		if (func_145(2, Global_14417, 0))
		{
			func_133();
			Global_14422 = 1;
			unk_0xC1B1E9A034A63A62(0);
			if (Global_14423 > 0)
			{
				Global_14423 = (Global_14423 - 1);
			}
		}
		if (func_145(2, Global_14419, 0))
		{
			func_130();
			Global_14422 = 1;
			unk_0xC1B1E9A034A63A62(0);
			if (Global_14423 > 3)
			{
				Global_14423 = (Global_14423 - 4);
			}
		}
		if (func_145(2, Global_14420, 0))
		{
			func_135();
			Global_14422 = 1;
			unk_0xC1B1E9A034A63A62(0);
			if (Global_14423 < 8)
			{
				Global_14423 += 4;
			}
		}
	}
}

void func_130()
{
	func_142(Global_14424, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xAB16AADE80707D47(-1, "Menu_Navigate", &Global_14432, 1);
	func_131();
}

void func_131()
{
	if (func_132())
	{
		if (Global_14609 == 0)
		{
			unk_0x8F24B7634E2C72BC(1);
		}
		else
		{
			unk_0x8F24B7634E2C72BC(2);
		}
	}
}

int func_132()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69617)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0xCCC8FE2C71D0E93E();
	iVar1 = unk_0x819C3E64C255229B(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_2578135 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_133()
{
	func_142(Global_14424, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(4), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xAB16AADE80707D47(-1, "Menu_Navigate", &Global_14432, 1);
	func_134();
}

void func_134()
{
	if (func_132())
	{
		if (Global_14609 == 0)
		{
			unk_0x8F24B7634E2C72BC(3);
		}
		else
		{
			unk_0x8F24B7634E2C72BC(4);
		}
	}
}

void func_135()
{
	func_142(Global_14424, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xAB16AADE80707D47(-1, "Menu_Navigate", &Global_14432, 1);
	func_136();
}

void func_136()
{
	if (func_132())
	{
		if (Global_14609 == 0)
		{
			unk_0x8F24B7634E2C72BC(2);
		}
		else
		{
			unk_0x8F24B7634E2C72BC(1);
		}
	}
}

void func_137()
{
	func_142(Global_14424, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(2), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xAB16AADE80707D47(-1, "Menu_Navigate", &Global_14432, 1);
	func_138();
}

void func_138()
{
	if (func_132())
	{
		if (Global_14609 == 0)
		{
			unk_0x8F24B7634E2C72BC(4);
		}
		else
		{
			unk_0x8F24B7634E2C72BC(3);
		}
	}
}

void func_139(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, int iParam10, int iParam11)
{
	unk_0xB9D4F4DE7E7EC038(uParam0, sParam1);
	unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x509383441597090D(sParam7))
	{
		func_72(sParam7);
	}
	if (!unk_0x509383441597090D(sParam8))
	{
		func_72(sParam8);
	}
	if (!unk_0x509383441597090D(sParam9))
	{
		func_72(sParam9);
	}
	if (!unk_0x509383441597090D(iParam10))
	{
		func_72(iParam10);
	}
	if (!unk_0x509383441597090D(iParam11))
	{
		func_72(iParam11);
	}
	unk_0xE73340DA551C95E1();
}

void func_140(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0xB9D4F4DE7E7EC038(uParam0, sParam1);
	func_72(sParam2);
	if (!unk_0x509383441597090D(sParam3))
	{
		func_72(sParam3);
	}
	if (!unk_0x509383441597090D(sParam4))
	{
		func_72(sParam4);
	}
	if (!unk_0x509383441597090D(sParam5))
	{
		func_72(sParam5);
	}
	if (!unk_0x509383441597090D(sParam6))
	{
		func_72(sParam6);
	}
	unk_0xE73340DA551C95E1();
}

void func_141()
{
	int iVar0[12];
	int iVar13;
	int iVar14;
	
	StringCopy(&(Global_3021[0 /*5*/]), "CELL_900", 16);
	Global_3021[0 /*5*/].f_4 = 10;
	StringCopy(&(Global_3021[1 /*5*/]), "CELL_901", 16);
	Global_3021[1 /*5*/].f_4 = 0;
	StringCopy(&(Global_3021[2 /*5*/]), "CELL_902", 16);
	Global_3021[2 /*5*/].f_4 = 1;
	StringCopy(&(Global_3021[3 /*5*/]), "CELL_903", 16);
	Global_3021[3 /*5*/].f_4 = 2;
	StringCopy(&(Global_3021[4 /*5*/]), "CELL_904", 16);
	Global_3021[4 /*5*/].f_4 = 3;
	StringCopy(&(Global_3021[5 /*5*/]), "CELL_905", 16);
	Global_3021[5 /*5*/].f_4 = 4;
	StringCopy(&(Global_3021[6 /*5*/]), "CELL_906", 16);
	Global_3021[6 /*5*/].f_4 = 5;
	StringCopy(&(Global_3021[7 /*5*/]), "CELL_907", 16);
	Global_3021[7 /*5*/].f_4 = 6;
	StringCopy(&(Global_3021[8 /*5*/]), "CELL_908", 16);
	Global_3021[8 /*5*/].f_4 = 7;
	StringCopy(&(Global_3021[9 /*5*/]), "CELL_909", 16);
	Global_3021[9 /*5*/].f_4 = 8;
	StringCopy(&(Global_3021[10 /*5*/]), "CELL_910", 16);
	Global_3021[10 /*5*/].f_4 = 9;
	StringCopy(&(Global_3021[11 /*5*/]), "CELL_911", 16);
	Global_3021[11 /*5*/].f_4 = 11;
	iVar13 = 0;
	while (iVar13 < 12)
	{
		iVar0[iVar13] = 0;
		iVar13++;
	}
	if (Global_3104[0] == 0)
	{
	}
	iVar13 = 0;
	while (iVar13 < 12)
	{
		iVar14 = 0;
		while (iVar14 < 12)
		{
			if (iVar13 == Global_3021[iVar14 /*5*/].f_4)
			{
				if (iVar0[iVar13] == 0)
				{
					Global_3104[iVar13] = iVar14;
					unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
					unk_0x7CBFB9F4AF33C67E(11);
					unk_0x7CBFB9F4AF33C67E(iVar13);
					func_72(&(Global_3021[iVar14 /*5*/]));
					unk_0xE73340DA551C95E1();
					iVar0[iVar13] = 1;
				}
			}
			iVar14++;
		}
		iVar13++;
	}
}

void func_142(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xB9D4F4DE7E7EC038(uParam0, sParam1);
	unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xE73340DA551C95E1();
}

void func_143()
{
	if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
	{
		unk_0xAB16AADE80707D47(-1, "Menu_Accept", &Global_14432, 1);
		func_144();
	}
}

void func_144()
{
	if (func_132())
	{
		unk_0x8F24B7634E2C72BC(5);
	}
}

int func_145(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x2A57AED61E15C7C7(iParam0, iParam1) || (iParam2 == 1 && unk_0x5E429C409D2CBD68(iParam0, iParam1)))
	{
		if (unk_0x955B8C8F89CC3AC0())
		{
			if (unk_0xC5400265B5C1CEB3() == 0 || (unk_0x04781D6F82022E77() && unk_0x4255B5ECB9D34344(2)))
			{
				return 0;
			}
		}
		if (unk_0x84C71F36E7D97756() || unk_0xCD755B20D2481736())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_146()
{
	if (func_145(2, Global_14411, 0))
	{
		iLocal_136 = 0;
		unk_0x88B0F0DC270164B7(&Global_2314, 0);
		func_75();
		Global_14421 = 1;
		if (Global_69617)
		{
			func_265();
		}
		else
		{
			func_255();
		}
		unk_0x4EDE34FBADD967A6(0);
		if (Global_14443.f_1 > 3)
		{
			Global_14443.f_1 = 7;
		}
		StringCopy(&cLocal_112, "", 16);
	}
}

void func_147()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (Global_14421 == 0)
	{
		if (func_145(2, Global_14412, 0))
		{
			if (!func_128())
			{
				Global_16859 = 0;
				Global_16858 = 0;
				Global_16860 = 0;
				iLocal_309 = 0;
				func_143();
				Global_14421 = 1;
				if (iLocal_97 > 0)
				{
					unk_0xB9D4F4DE7E7EC038(Global_14424, "GET_CURRENT_SELECTION");
					uLocal_102 = unk_0xC23FC7D89C4FAF05();
					while (!unk_0x6F61AEBF81DF1A16(uLocal_102))
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					iLocal_105 = unk_0xD93E20F39826C097(uLocal_102);
					bVar0 = false;
					if (unk_0x98C339BD475B043D())
					{
						if (Global_69617)
						{
							if (iLocal_105 < iLocal_100)
							{
								bVar0 = true;
							}
						}
						else if (iLocal_105 == iLocal_99 || iLocal_105 > iLocal_99)
						{
							bVar0 = true;
						}
					}
					if (unk_0x08BA6DD398CA197C(Global_2314, 0))
					{
						bVar0 = false;
					}
					if (bVar0)
					{
						Local_334.f_2936 = (iLocal_105 - iLocal_99);
						func_151();
					}
					else
					{
						if (iLocal_105 < 0)
						{
							iLocal_105 = 0;
						}
						Global_1628 = Global_14449[iLocal_105];
						if (Global_14601 != 145)
						{
							if (Global_1628 != Global_14601)
							{
								iLocal_93 = 1;
							}
							else
							{
								iLocal_93 = 0;
							}
						}
						else
						{
							iLocal_93 = 0;
						}
						if (iLocal_93 == 0)
						{
							if (unk_0x08BA6DD398CA197C(Global_2313, 9))
							{
								if (!unk_0x08BA6DD398CA197C(Global_2313, 29))
								{
									Global_101553.f_32740[Global_1628 /*29*/].f_18 = 1;
									if (Global_101553.f_32740[Global_1628 /*29*/].f_24[Global_14443] == 0)
									{
										func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(1), -1f, -1f, "CELL_288", "CELL_300", &(Global_117[Global_1628 /*10*/].f_4), "CELL_195", 0);
									}
									else
									{
										func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(1), -1f, -1f, "CELL_288", &(Global_101553.f_32740[Global_1628 /*29*/].f_7), &(Global_101553.f_32740[Global_1628 /*29*/].f_3), &(Global_101553.f_32740[Global_1628 /*29*/].f_3), 0);
									}
									func_139(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
									func_142(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
									unk_0x88B0F0DC270164B7(&Global_2313, 29);
								}
							}
							else
							{
								bLocal_329 = false;
								bLocal_330 = false;
								if (Global_69617)
								{
									iVar1 = 0;
									while (iVar1 < 4)
									{
										if (unk_0x28C1B9853548BD8E(&(Global_101553.f_32740[Global_1628 /*29*/].f_3), &(Global_2216[iVar1 /*24*/])))
										{
											if (!unk_0x28C1B9853548BD8E(&(Global_2216[iVar1 /*24*/].f_8), "CELL_SFUN_NULL"))
											{
												bLocal_329 = true;
												iLocal_331 = iVar1;
											}
										}
										iVar1++;
									}
								}
								else
								{
									iVar2 = 0;
									while (iVar2 < 4)
									{
										if (unk_0x28C1B9853548BD8E(&(Global_101553.f_32740[Global_1628 /*29*/].f_3), &(Global_2151[iVar2 /*16*/])))
										{
											if (!unk_0x28C1B9853548BD8E(&(Global_2151[iVar2 /*16*/].f_8), "CELL_SFUN_NULL"))
											{
												bLocal_329 = true;
												iLocal_331 = iVar2;
												if (iLocal_331 == iLocal_331)
												{
												}
											}
										}
										iVar2++;
									}
								}
								if (func_149(Global_1628) && unk_0x08BA6DD398CA197C(Global_2314, 0) == 0)
								{
									if (func_121(Global_1628, Global_14443) == 0 && func_78(Global_1628, Global_14443) == 0)
									{
										bLocal_330 = false;
									}
									else
									{
										bLocal_330 = true;
									}
								}
								if (unk_0x08BA6DD398CA197C(Global_2314, 0))
								{
									func_148();
									iLocal_136 = 1;
								}
								else if (bLocal_330 == 0 && bLocal_329 == 0)
								{
									Global_16859 = 0;
									Global_16858 = 0;
									Global_16860 = 0;
									if (unk_0x08BA6DD398CA197C(Global_2314, 19) && Global_1628 == 129)
									{
									}
									else
									{
										func_86();
									}
								}
								else
								{
									func_120();
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_148()
{
	iLocal_134 = unk_0xDF658EB6CA91DFBC();
	func_142(Global_14424, "SET_DATA_SLOT_EMPTY", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4EDE34FBADD967A6(0);
	switch (Global_1628)
	{
		case 2:
			func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), 0f, -1f, -1f, "CELL_7001", &(Global_101553.f_32740[Global_1628 /*29*/].f_3), &(Global_101553.f_32740[Global_1628 /*29*/].f_7), 0, 0);
			break;
		
		case 0:
			func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), 0f, -1f, -1f, "CELL_7002", &(Global_101553.f_32740[Global_1628 /*29*/].f_3), &(Global_101553.f_32740[Global_1628 /*29*/].f_7), 0, 0);
			break;
		
		case 12:
			func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), 0f, -1f, -1f, "CELL_7003", &(Global_101553.f_32740[Global_1628 /*29*/].f_3), "CELL_E_311", 0, 0);
			break;
	}
	if (Global_14431)
	{
		func_139(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
	}
	else
	{
		func_139(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	if (Global_14431)
	{
		func_139(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_139(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_139(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	func_142(Global_14424, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_140(Global_14424, "SET_HEADER", "CELL_249", 0, 0, 0, 0);
}

int func_149(int iParam0)
{
	switch (Global_14443)
	{
		case 0:
			if (func_150(iParam0, 0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (func_150(iParam0, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			if (func_150(iParam0, 2))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int func_150(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if ((iParam0 >= 150 || iParam1 >= 150) || iParam0 == iParam1)
	{
		return 0;
	}
	iVar0 = func_82(iParam0);
	iVar1 = func_82(iParam1);
	if (iVar0 != 7 && iVar1 != 7)
	{
		iVar2 = func_81(iVar0, iVar1);
		if (iVar2 != 10)
		{
			if (func_80(iVar2) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_151()
{
	var uVar0;
	
	if (Global_14443.f_1 > 3)
	{
		Global_14443.f_1 = 8;
	}
	if (Global_14431)
	{
		func_139(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
		func_139(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_139(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_139(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_139(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x09C86C0C5CA26B1E(&Global_2313, 17);
	func_142(Global_14424, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_208", 0, 0, 0, 0);
	func_155(&Local_334);
	if (Global_14443.f_1 > 3)
	{
		func_142(Global_14424, "DISPLAY_VIEW", 18f, unk_0xBBDA792448DB5A89(iLocal_103), -1082130432, -1082130432, -1082130432);
		iLocal_103 = 0;
		if (func_154(&Local_334))
		{
			uVar0 = unk_0xCF66111B26743875(Local_334[Local_334.f_2936]);
		}
		else
		{
			uVar0 = func_152(&(Local_334.f_34[func_153(Local_334.f_2936, &Local_334) /*29*/].f_13));
		}
		unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_HEADER");
		unk_0x709662CF2BD061A4("CELL_CONDFNH");
		unk_0xDA35BDB37E728640(uVar0);
		unk_0x1E77BE8F4283FA05();
		unk_0xE73340DA551C95E1();
		Local_334.f_2999 = 0;
		iLocal_119 = 1;
	}
}

var func_152(var uParam0)
{
	return uParam0;
}

int func_153(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = (iParam0 - uParam1->f_33);
	if (iVar0 >= 100)
	{
		iVar0 = 99;
	}
	return iVar0;
}

int func_154(var uParam0)
{
	if (uParam0->f_2936 < uParam0->f_33)
	{
		return 1;
	}
	return 0;
}

void func_155(var uParam0)
{
	int iVar0;
	struct<22> Var1;
	var uVar36;
	char* sVar37;
	bool bVar38;
	
	iVar0 = 0;
	if (func_164(uParam0, &uVar36))
	{
		if (func_154(uParam0))
		{
			uParam0->f_2963 = { func_163((*uParam0)[uParam0->f_2936]) };
			sVar37 = unk_0xCF66111B26743875((*uParam0)[uParam0->f_2936]);
		}
		else
		{
			uParam0->f_2963 = { uParam0->f_34[func_153(uParam0->f_2936, uParam0) /*29*/] };
			sVar37 = func_152(&(uParam0->f_34[func_153(uParam0->f_2936, uParam0) /*29*/].f_13));
		}
		StringCopy(&(uParam0->f_2983), sVar37, 64);
		bVar38 = false;
		if (unk_0x49CB54E9774A75CB())
		{
			if (!Global_1573869)
			{
				if (func_162(unk_0x0C1D3C552325765B()))
				{
					bVar38 = true;
				}
			}
		}
		if (func_154(uParam0))
		{
			if (((unk_0x64DF5AE52581188F((*uParam0)[uParam0->f_2936]) || unk_0x87E8A0685CAD279D((*uParam0)[uParam0->f_2936])) || unk_0x6D28E3A8AE4676C8((*uParam0)[uParam0->f_2936])) || unk_0x5E9A5E7623F91ED1((*uParam0)[uParam0->f_2936]))
			{
				bVar38 = false;
			}
		}
		if (!unk_0xF6AED1327F669066())
		{
			bVar38 = false;
		}
		if (unk_0x76EC6148B0460AE0(0))
		{
			bVar38 = false;
		}
		if (unk_0xBB824ACC814BB18A(&(uParam0->f_2963)) || unk_0xCE240013E73117E4(&(uParam0->f_2963)))
		{
			bVar38 = false;
		}
		if (unk_0x3B56801BE1DCE8AB(&(uParam0->f_2963)) || unk_0x71D8211F41A73B84(&(uParam0->f_2963)))
		{
			bVar38 = false;
		}
		if (unk_0xDB0B29203D08691F())
		{
			if (unk_0x15B0CAB107CFCDE1())
			{
				if (unk_0x9148927C48C4FF30())
				{
					bVar38 = false;
				}
			}
			else if (unk_0xD95D58B9AAC86D55())
			{
				bVar38 = false;
			}
		}
		if (bVar38)
		{
			if (Global_69617)
			{
				unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT_EMPTY");
				unk_0x7CBFB9F4AF33C67E(iVar0);
				unk_0xE73340DA551C95E1();
				unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
				unk_0x7CBFB9F4AF33C67E(18);
				unk_0x7CBFB9F4AF33C67E(iVar0);
				unk_0x7CBFB9F4AF33C67E(0);
				if (!Global_2487434.f_1 || Global_2487434.f_38)
				{
					unk_0x709662CF2BD061A4("CELL_MP_1000");
					unk_0x1E77BE8F4283FA05();
				}
				else
				{
					unk_0x709662CF2BD061A4("CELL_MP_1000b");
					unk_0x1E77BE8F4283FA05();
				}
				unk_0xE73340DA551C95E1();
				uParam0->f_2937[iVar0] = 1;
				iVar0++;
			}
			else if (Global_35775 == 15)
			{
				unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT_EMPTY");
				unk_0x7CBFB9F4AF33C67E(iVar0);
				unk_0xE73340DA551C95E1();
				unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
				unk_0x7CBFB9F4AF33C67E(18);
				unk_0x7CBFB9F4AF33C67E(iVar0);
				unk_0x7CBFB9F4AF33C67E(0);
				if (!Global_2487434.f_1 || Global_2487434.f_38)
				{
					unk_0x709662CF2BD061A4("CELL_MP_1000");
					unk_0x1E77BE8F4283FA05();
				}
				else
				{
					unk_0x709662CF2BD061A4("CELL_MP_1000b");
					unk_0x1E77BE8F4283FA05();
				}
				unk_0xE73340DA551C95E1();
				uParam0->f_2937[iVar0] = 1;
				iVar0++;
			}
		}
		bVar38 = false;
		if (func_154(uParam0))
		{
			if (((func_162(unk_0x0C1D3C552325765B()) && func_162((*uParam0)[uParam0->f_2936])) && !unk_0x87E8A0685CAD279D((*uParam0)[uParam0->f_2936])) && !unk_0x6D28E3A8AE4676C8((*uParam0)[uParam0->f_2936]))
			{
				bVar38 = true;
			}
		}
		if (bVar38)
		{
			unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT_EMPTY");
			unk_0x7CBFB9F4AF33C67E(iVar0);
			unk_0xE73340DA551C95E1();
			unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
			unk_0x7CBFB9F4AF33C67E(18);
			unk_0x7CBFB9F4AF33C67E(iVar0);
			unk_0x7CBFB9F4AF33C67E(0);
			unk_0x709662CF2BD061A4("CELL_MP_1009");
			unk_0x1E77BE8F4283FA05();
			unk_0xE73340DA551C95E1();
			uParam0->f_2937[iVar0] = 2;
			iVar0++;
		}
		bVar38 = false;
		if (func_154(uParam0))
		{
			if (unk_0xAAA965014060997C() < unk_0x8A114698D6B55690())
			{
				if (!unk_0x74A87F4BE7FE0199(&(uParam0->f_2963)))
				{
					bVar38 = true;
				}
			}
		}
		if (bVar38)
		{
			unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
			unk_0x7CBFB9F4AF33C67E(18);
			unk_0x7CBFB9F4AF33C67E(iVar0);
			unk_0x7CBFB9F4AF33C67E(0);
			unk_0x709662CF2BD061A4("PIM_DFRQ2");
			unk_0x1E77BE8F4283FA05();
			unk_0xE73340DA551C95E1();
			uParam0->f_2937[iVar0] = 3;
			iVar0++;
		}
		bVar38 = false;
		bVar38 = true;
		if (bVar38)
		{
			unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
			unk_0x7CBFB9F4AF33C67E(18);
			unk_0x7CBFB9F4AF33C67E(iVar0);
			unk_0x7CBFB9F4AF33C67E(0);
			unk_0x709662CF2BD061A4("CELL_MP_1007");
			unk_0x1E77BE8F4283FA05();
			unk_0xE73340DA551C95E1();
			uParam0->f_2937[iVar0] = 4;
			iVar0++;
		}
		bVar38 = false;
		if (unk_0x46E4D0D0168391A1())
		{
			if (unk_0xC1B41A655437AD93(&(uParam0->f_2963)))
			{
				unk_0x0ADE2D0C6811DC70(&Var1, 35, &(uParam0->f_2963));
			}
		}
		if (Var1.f_0 != -1)
		{
			if (Var1.f_21 == 1)
			{
				if (unk_0x1EC72E271ABEC1BA() && !func_161(Var1.f_0))
				{
					bVar38 = true;
					uParam0->f_2947 = { Var1.f_1 };
				}
			}
		}
		if (bVar38)
		{
			unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
			unk_0x7CBFB9F4AF33C67E(18);
			unk_0x7CBFB9F4AF33C67E(iVar0);
			unk_0x7CBFB9F4AF33C67E(0);
			unk_0x709662CF2BD061A4("CELL_MP_1003");
			unk_0x1E77BE8F4283FA05();
			unk_0xE73340DA551C95E1();
			uParam0->f_2937[iVar0] = 5;
			iVar0++;
		}
		unk_0x09C86C0C5CA26B1E(&Global_2315, 6);
		bVar38 = false;
		if (func_154(uParam0))
		{
			if (func_160(unk_0x0C1D3C552325765B(), 1, 1))
			{
				if (unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), (*uParam0)[uParam0->f_2936]))
				{
					if (!func_159((*uParam0)[uParam0->f_2936], 0))
					{
						if (!unk_0x08BA6DD398CA197C(Global_2421327[(*uParam0)[uParam0->f_2936] /*353*/].f_196, 2))
						{
							bVar38 = true;
							unk_0x88B0F0DC270164B7(&Global_2315, 6);
						}
					}
				}
			}
			if ((*uParam0)[uParam0->f_2936] != func_158() && func_160((*uParam0)[uParam0->f_2936], 0, 0))
			{
				if (func_156((*uParam0)[uParam0->f_2936], 146))
				{
					bVar38 = false;
				}
			}
		}
		if (Global_1573839 || Global_1573840)
		{
			bVar38 = false;
		}
		if (bVar38)
		{
			unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
			unk_0x7CBFB9F4AF33C67E(18);
			unk_0x7CBFB9F4AF33C67E(iVar0);
			unk_0x7CBFB9F4AF33C67E(0);
			if (!unk_0x08BA6DD398CA197C(Global_2432628.f_692, (*uParam0)[uParam0->f_2936]))
			{
				unk_0x709662CF2BD061A4("CELL_MP_1008");
			}
			else
			{
				unk_0x709662CF2BD061A4("CELL_MP_1008b");
			}
			unk_0x1E77BE8F4283FA05();
			unk_0xE73340DA551C95E1();
			uParam0->f_2937[iVar0] = 7;
			iVar0++;
		}
	}
	else
	{
		unk_0x754E61FE98961B39("CELL_LEFT_SESS");
		unk_0xBCD67D962E393B66(1, 1);
		func_30(0);
		return;
	}
}

int func_156(int iParam0, int iParam1)
{
	if (Global_1614576[iParam0 /*324*/] == iParam1)
	{
		return func_157(iParam0);
	}
	return 0;
}

int func_157(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x08BA6DD398CA197C(Global_1614576[iVar0 /*324*/].f_1, 0);
	}
	return 0;
}

int func_158()
{
	return -1;
}

bool func_159(int iParam0, int iParam1)
{
	return unk_0x08BA6DD398CA197C(Global_2421327[iParam0 /*353*/].f_208, iParam1);
}

int func_160(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xCB129F9A01D14082(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xC0691D80D21C989D(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2432628.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_161(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x46E4D0D0168391A1() && unk_0x1EC72E271ABEC1BA())
	{
		iVar0 = unk_0x319E6C6F7A0FD247();
		if (iVar0 > 0)
		{
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				unk_0xCCDF5AD490E56BCC(&Global_2471124, iVar1);
				if (iParam0 == Global_2471124)
				{
					return 1;
				}
				iVar1++;
			}
		}
	}
	return 0;
}

int func_162(int iParam0)
{
	int iVar0;
	struct<13> Var1;
	
	if (unk_0x577FA1A6B03F7513() == 0)
	{
		return 0;
	}
	iVar0 = -1;
	if (iParam0 != unk_0x0C1D3C552325765B())
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	if (unk_0xBECAD780226FC009() || unk_0xD95D58B9AAC86D55())
	{
		if (unk_0xBDDCB194366C769C(0, iVar0))
		{
			if (unk_0xF6AED1327F669066())
			{
				return 1;
			}
		}
	}
	if (unk_0x65121BA303717C5B() || unk_0x15B0CAB107CFCDE1())
	{
		if (iParam0 == unk_0x0C1D3C552325765B())
		{
			if (unk_0x3B476FDEAF993346(0, -3, 1) || unk_0xBDDCB194366C769C(1, -1))
			{
				return 1;
			}
		}
		else
		{
			Var1 = { func_163(iParam0) };
			if (unk_0xBDDCB194366C769C(0, -1) || (unk_0xBDDCB194366C769C(1, -1) && unk_0x74A87F4BE7FE0199(&Var1)))
			{
				return 1;
			}
		}
	}
	if (unk_0x955B8C8F89CC3AC0())
	{
		if (unk_0xBDDCB194366C769C(0, iVar0))
		{
			if (unk_0xF6AED1327F669066())
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_163(int iParam0)
{
	struct<13> Var0;
	
	unk_0xCA4A074601307AB8(iParam0, &Var0, 13);
	return Var0;
}

int func_164(var uParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x98C339BD475B043D())
	{
		*iParam1 = 2;
	}
	else if (uParam0->f_2936 < uParam0->f_33)
	{
		if (func_160((*uParam0)[uParam0->f_2936], 0, 1))
		{
			return 1;
		}
		else
		{
			*iParam1 = 2;
		}
	}
	else
	{
		iVar0 = func_153(uParam0->f_2936, uParam0);
		if (unk_0x51AC18677CE955C2(&(uParam0->f_34[iVar0 /*29*/])))
		{
			return 1;
		}
		else
		{
			*iParam1 = 0;
		}
	}
	return 0;
}

void func_165()
{
	if (func_145(2, Global_14412, 0))
	{
		unk_0x09C86C0C5CA26B1E(&Global_2314, 0);
		iLocal_136 = 0;
		func_143();
		Global_14421 = 1;
		Global_16859 = 0;
		Global_16858 = 0;
		Global_16860 = 0;
		func_86();
	}
}

void func_166()
{
	if (iLocal_129)
	{
		if (unk_0x83666F9FB8FEBD4B() > 150)
		{
			iLocal_129 = 0;
		}
	}
	if (unk_0x4255B5ECB9D34344(2))
	{
		if (func_145(2, 181, 0))
		{
			if (iLocal_101 > 0)
			{
				iLocal_101 = (iLocal_101 - 1);
			}
			else
			{
				iLocal_101 = (iLocal_97 - 1);
			}
			func_130();
			iLocal_129 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_145(2, 180, 0))
		{
			iLocal_101++;
			if (iLocal_101 == iLocal_97)
			{
				iLocal_101 = 0;
			}
			func_135();
		}
	}
	if (iLocal_129 == 0)
	{
		if (func_145(2, Global_14419, 0))
		{
			if (iLocal_101 > 0)
			{
				iLocal_101 = (iLocal_101 - 1);
			}
			else
			{
				iLocal_101 = (iLocal_97 - 1);
			}
			func_130();
			iLocal_129 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_145(2, Global_14420, 0))
		{
			iLocal_101++;
			if (iLocal_101 == iLocal_97)
			{
				iLocal_101 = 0;
			}
			func_135();
			iLocal_129 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_145(2, Global_14418, 0))
		{
			func_168();
			func_168();
			func_168();
			func_168();
			func_168();
			unk_0xAB16AADE80707D47(-1, "Menu_Navigate", &Global_14432, 1);
			iLocal_129 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_145(2, Global_14417, 0))
		{
			func_167();
			func_167();
			func_167();
			func_167();
			func_167();
			unk_0xAB16AADE80707D47(-1, "Menu_Navigate", &Global_14432, 1);
			iLocal_129 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
}

void func_167()
{
	if (iLocal_101 > 0)
	{
		iLocal_101 = (iLocal_101 - 1);
	}
	else
	{
		iLocal_101 = (iLocal_97 - 1);
	}
	func_142(Global_14424, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_168()
{
	iLocal_101++;
	if (iLocal_101 == iLocal_97)
	{
		iLocal_101 = 0;
	}
	func_142(Global_14424, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(3), -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_169()
{
	iLocal_101++;
	if (iLocal_101 == iLocal_97)
	{
		iLocal_101 = 0;
		unk_0x09C86C0C5CA26B1E(&Global_2313, 16);
	}
	func_135();
	unk_0xB9D4F4DE7E7EC038(Global_14424, "GET_CURRENT_SELECTION");
	uLocal_102 = unk_0xC23FC7D89C4FAF05();
	while (!unk_0x6F61AEBF81DF1A16(uLocal_102))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	iLocal_105 = unk_0xD93E20F39826C097(uLocal_102);
	if (iLocal_105 < 0)
	{
		iLocal_105 = 0;
	}
	if (Global_16776 == Global_14449[iLocal_105])
	{
		unk_0x09C86C0C5CA26B1E(&Global_2313, 16);
	}
}

void func_170()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<22> Var4;
	int iVar39;
	struct<13> Var40;
	char* sVar53;
	struct<13> Var54;
	
	if (unk_0x08BA6DD398CA197C(Global_2315, 6))
	{
		if (!unk_0x1B93DF2247DCC570(&(Local_334.f_2963)))
		{
			unk_0x09C86C0C5CA26B1E(&Global_2315, 6);
			StringCopy(&cLocal_112, "", 16);
			Global_14443.f_1 = 3;
		}
	}
	switch (Local_334.f_2999)
	{
		case 0:
			if (unk_0x08BA6DD398CA197C(uLocal_328, 1))
			{
				if (!Global_91458.f_1361)
				{
					unk_0x09C86C0C5CA26B1E(&uLocal_328, 0);
					unk_0x09C86C0C5CA26B1E(&uLocal_328, 1);
				}
				return;
			}
			if (Local_334.f_2976)
			{
				if (Local_334.f_2981)
				{
					iVar39 = 2;
					unk_0xDC38CC1E35B6A5D7("HUD_CONNPROB", "HUD_DISCON", iVar39, 0, 0, -1, 0, 0, 1);
					if (Local_334.f_2982)
					{
						if (func_145(2, Global_14412, 0) || unk_0x7F6103BD34B839B0(2, 201))
						{
							Global_14443.f_1 = 3;
						}
					}
					else if (func_145(2, Global_14412, 0) || unk_0x7F6103BD34B839B0(2, 201))
					{
					}
					else
					{
						Local_334.f_2982 = 1;
					}
				}
				else
				{
					iLocal_103 = Local_334.f_2946;
					switch (Local_334.f_2937[Local_334.f_2946])
					{
						case 1:
							if (!Global_2487434.f_1)
							{
								if (!unk_0xADF8F3CA9AE46784() && !unk_0xEBF6E88D34EA843B())
								{
									Local_334.f_2976 = 0;
									func_252();
									Local_334.f_2977 = 0;
									if (func_154(&Local_334))
									{
										sVar53 = unk_0xCF66111B26743875(Local_334[Local_334.f_2936]);
									}
									else
									{
										sVar53 = func_152(&(Local_334.f_34[func_153(Local_334.f_2936, &Local_334) /*29*/].f_13));
									}
									func_251(sVar53);
									Local_334.f_2999 = 1;
									func_250(&(Local_334.f_2979));
									func_249(0);
									if (Global_69617)
									{
										if (func_248(1) >= Global_262145.f_159)
										{
											Var40 = { func_163(unk_0x0C1D3C552325765B()) };
											if (func_247())
											{
												func_238(1654961868, Global_262145.f_159, &iVar0, 1, 1, 0);
												Global_2572880[iVar0 /*73*/].f_8.f_3 = { Var40 };
											}
											else
											{
												unk_0xA422D669593E1D2C(Global_262145.f_159, &Var40, 1, 1);
											}
										}
										else
										{
											Var40 = { func_163(unk_0x0C1D3C552325765B()) };
											if (func_247())
											{
											}
											else
											{
												unk_0xA422D669593E1D2C(func_248(1), &Var40, 1, 1);
											}
										}
										func_87(1907, 1, -1);
									}
								}
								else if (unk_0xADF8F3CA9AE46784())
								{
								}
								else if (unk_0xEBF6E88D34EA843B())
								{
									if (!Global_2487434.f_59)
									{
										Global_2487434 = 1;
										Global_2487434.f_2 = 1;
										Global_2487434.f_59 = 1;
									}
								}
							}
							else if (Global_2487434.f_38)
							{
							}
							else
							{
								func_237();
								unk_0xAB16AADE80707D47(-1, "Hang_Up", &Global_14432, 1);
								if (Global_2487434.f_1)
								{
									func_235();
								}
								Global_14443.f_1 = 3;
							}
							return;
							break;
						
						case 2:
							if (func_234(&(Global_2482149.f_286[Local_334[Local_334.f_2936] /*2*/])))
							{
								if (!func_233(&(Global_2482149.f_286[Local_334[Local_334.f_2936] /*2*/]), 30000, 0))
								{
									if (func_222(0, 0, 1, 1))
									{
										func_205("CELL_MP_1009H", unk_0xCF66111B26743875(Local_334[Local_334.f_2936]), func_206(Local_334[Local_334.f_2936], -2, 0, 0), -1);
									}
									Local_334.f_2976 = 0;
									return;
								}
							}
							if (((!func_162(unk_0x0C1D3C552325765B()) || !func_162(Local_334[Local_334.f_2936])) || unk_0x87E8A0685CAD279D(Local_334[Local_334.f_2936])) || unk_0x6D28E3A8AE4676C8(Local_334[Local_334.f_2936]))
							{
								if (func_222(1, 1, 1, 1))
								{
									if (!unk_0x28C1B9853548BD8E(unk_0xCF66111B26743875(Local_334[Local_334.f_2936]), "**Invalid**"))
									{
										func_205("CELL_MP_1009M", unk_0xCF66111B26743875(Local_334[Local_334.f_2936]), func_206(Local_334[Local_334.f_2936], -2, 0, 0), -1);
									}
									else
									{
										func_204("CELL_MP_1009N", -1);
									}
								}
								Local_334.f_2976 = 0;
								return;
							}
							Local_334.f_2976 = 0;
							Local_334.f_2999 = 2;
							iLocal_3353 = 1;
							return;
							break;
						
						case 3:
							if (!unk_0x3E888319CF64D20F())
							{
								if (unk_0xBECAD780226FC009() && !unk_0x74A87F4BE7FE0199(&(Local_334.f_2963)))
								{
									if (unk_0x3165D2C2985829ED(&(Local_334.f_2963), ""))
									{
										Local_334.f_2976 = 0;
										Global_14443.f_1 = 3;
									}
								}
								else
								{
									unk_0xBA8A6BD440CCF331(&(Local_334.f_2963));
									Local_334.f_2976 = 0;
									Global_14443.f_1 = 3;
								}
							}
							break;
						
						case 5:
							if (unk_0x46E4D0D0168391A1())
							{
								if (unk_0xC1B41A655437AD93(&(Local_334.f_2963)))
								{
									unk_0x0ADE2D0C6811DC70(&Var4, 35, &(Local_334.f_2963));
								}
							}
							if (Var4.f_0 != -1)
							{
								if (Var4.f_21 == 1)
								{
									if (!func_161(Var4.f_0))
									{
										if (unk_0x3F9645F82F513F29(Var4.f_0))
										{
											Local_334.f_2976 = 0;
											unk_0x754E61FE98961B39("CREW_JOIN");
											unk_0xDA35BDB37E728640(&(Var4.f_1));
											unk_0xBCD67D962E393B66(1, 1);
											Global_14443.f_1 = 3;
										}
										else
										{
											Global_14443.f_1 = 3;
											Local_334.f_2976 = 0;
											Global_14443.f_1 = 3;
										}
										return;
									}
								}
							}
							Local_334.f_2976 = 0;
							break;
						
						case 4:
							Local_334.f_2976 = 0;
							func_151();
							unk_0xBA8A6BD440CCF331(&(Local_334.f_2963));
							break;
						
						case 7:
							if (unk_0x08BA6DD398CA197C(Global_2432628.f_692, Local_334[Local_334.f_2936]))
							{
								unk_0x09C86C0C5CA26B1E(&(Global_2432628.f_692), Local_334[Local_334.f_2936]);
							}
							else
							{
								Global_2432628.f_692 = 0;
								unk_0x88B0F0DC270164B7(&(Global_2432628.f_692), Local_334[Local_334.f_2936]);
							}
							func_151();
							Local_334.f_2976 = 0;
							break;
						}
				}
			}
			else if (Global_14421 == 0)
			{
				if (func_145(2, Global_14412, 0))
				{
					Local_334.f_2982 = 0;
					Local_334.f_2981 = 0;
					unk_0x09C86C0C5CA26B1E(&Global_2314, 0);
					iLocal_118 = 0;
					func_143();
					Global_14421 = 1;
					unk_0xB9D4F4DE7E7EC038(Global_14424, "GET_CURRENT_SELECTION");
					uLocal_102 = unk_0xC23FC7D89C4FAF05();
					while (!unk_0x6F61AEBF81DF1A16(uLocal_102))
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					Local_334.f_2946 = unk_0xD93E20F39826C097(uLocal_102);
					if (!func_164(&Local_334, &iVar3))
					{
						switch (iVar3)
						{
							case 0:
								func_203("PLAYER_N_ON", 7500, 1);
								break;
							
							case 1:
								func_203("PLAYERLEFT", 7500, 1);
								break;
							
							case 2:
								Global_2487434.f_59 = 0;
								Local_334.f_2981 = 1;
								Local_334.f_2976 = 1;
								return;
								break;
						}
						Global_14443.f_1 = 3;
						return;
					}
					Global_2487434.f_59 = 0;
					Local_334.f_2976 = 1;
				}
			}
			break;
		
		case 1:
			if (!func_164(&Local_334, &iVar3))
			{
				func_249(1);
				func_237();
				Local_334.f_2978 = 1;
				Local_334.f_2977 = 1;
				return;
			}
			else if (Local_334.f_2977)
			{
				if (!Local_334.f_2978)
				{
					if (!Global_2487434.f_1 || !unk_0xA9FB2CCA53EFF610())
					{
						func_249(1);
						func_237();
						Local_334.f_2978 = 1;
						Local_334.f_2977 = 1;
						return;
					}
					if (unk_0x98C339BD475B043D())
					{
						if (func_145(2, Global_14413, 0))
						{
							func_237();
							Local_334.f_2976 = 0;
							return;
						}
						if (func_202(Global_2487434.f_20))
						{
							if (unk_0x74A87F4BE7FE0199(&(Global_2487434.f_20)))
							{
								if (!unk_0x51AC18677CE955C2(&(Global_2487434.f_20)))
								{
									func_249(1);
									func_237();
									Local_334.f_2978 = 1;
									Local_334.f_2977 = 1;
									return;
								}
							}
						}
						else
						{
							func_249(1);
							func_237();
							Local_334.f_2978 = 1;
							Local_334.f_2977 = 1;
							return;
						}
					}
					else
					{
						func_237();
						Local_334.f_2976 = 0;
						func_151();
						return;
					}
					if (!Global_2487434.f_37)
					{
						if (Global_2487434.f_33 == -1)
						{
							if (func_233(&(Local_334.f_2979), 40000, 1))
							{
								func_249(1);
								func_237();
								Local_334.f_2978 = 1;
								Local_334.f_2977 = 1;
								return;
							}
						}
						else
						{
							switch (Global_2487434.f_33)
							{
								case 1:
									func_201();
									func_200();
									if (unk_0xA86CA03D9749EEB3())
									{
										if (iVar1 == iVar2)
										{
										}
									}
									unk_0x15761381A3072BFA(iLocal_107);
									return;
									break;
								
								case 2:
									func_249(1);
									func_237();
									Local_334.f_2978 = 1;
									return;
									break;
								
								default:
									func_249(1);
									func_237();
									Local_334.f_2978 = 1;
									return;
									break;
								}
							}
						}
				}
			}
			else if (!func_234(&(Local_334.f_2979)))
			{
				func_250(&(Local_334.f_2979));
				func_199(&(Local_334.f_2979), 1, 0);
			}
			else
			{
				if (func_233(&(Local_334.f_2979), 15000, 1))
				{
					func_237();
					func_75();
					func_254();
					Global_14443.f_1 = 3;
					return;
				}
				if (Global_2487434.f_1 || unk_0x08BA6DD398CA197C(Global_2314, 20))
				{
					if (func_145(2, Global_14413, 0))
					{
						func_237();
						Global_14443.f_1 = 3;
						return;
					}
				}
				if (Global_2487434.f_1)
				{
					if (func_198(&Local_334, &(Local_334.f_2983)))
					{
						func_197(&(Local_334.f_2979), 1, 0);
						Local_334.f_2978 = 0;
						Local_334.f_2977 = 1;
						if (Global_69617)
						{
							func_195(105, 1, -1, 1);
						}
					}
					else
					{
						func_249(1);
						func_237();
						Local_334.f_2978 = 1;
						Local_334.f_2977 = 1;
						return;
					}
				}
			}
			break;
		
		case 2:
			if (iLocal_3353 == 1)
			{
				if (func_189(&Local_3334, &(Local_3334.f_1), &(Local_3334.f_2), 0, 0, &cLocal_3337, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0))
				{
					StringCopy(&cLocal_3337, unk_0x82DC5FE50D0BBF83(), 64);
					Local_3334.f_0 = 0;
					Local_3334.f_2 = 0;
					Local_3334.f_1 = 0;
					iLocal_3353 = 0;
					uLocal_3354 = unk_0x3ACC64D0951B9D26(&cLocal_3337);
					StringCopy(&cLocal_3337, unk_0x431F53B7A8FAAE33(&cLocal_3337, 0, uLocal_3354, 63), 64);
					func_197(&(Global_2482149.f_286[Local_334[Local_334.f_2936] /*2*/]), 0, 0);
					if (unk_0x509383441597090D(func_188(&cLocal_3337)))
					{
					}
					else
					{
						Var54 = { func_163(Local_334[Local_334.f_2936]) };
						unk_0xF2D8305DAF600809(&cLocal_3337, &Var54);
						func_171("CP_TM_SENT", Local_334[Local_334.f_2936], 0, 0, 0, 1, 1, 0);
						func_87(1906, 1, -1);
					}
					Local_334.f_2999 = 0;
				}
				if (Local_3334.f_0 == 2)
				{
					Local_3334.f_0 = 0;
					Local_3334.f_2 = 0;
					Local_3334.f_1 = 0;
					iLocal_3353 = 0;
					Local_334.f_2999 = 0;
				}
			}
			break;
	}
}

int func_171(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	int iVar18;
	int iVar19;
	
	iVar0 = -1;
	iVar1 = unk_0x10B1B072E9514664(iParam1);
	if (unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, unk_0xCF66111B26743875(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, unk_0xCF66111B26743875(iParam1), 64);
		}
		unk_0x754E61FE98961B39(sParam0);
		if ((iVar1 != -1 && unk_0x1504F110F2576375()) && iVar1 < 4)
		{
			if (Global_1626500.f_80279[iVar1] != -1)
			{
				unk_0x212C24688D441F9E(func_181(iVar1, iParam1, 0));
			}
			else
			{
				unk_0x212C24688D441F9E(func_206(iParam1, -2, 1, 0));
			}
		}
		else
		{
			unk_0x212C24688D441F9E(func_206(iParam1, -2, 1, 0));
		}
		unk_0xDA35BDB37E728640(func_179(&Var2));
		if (!bParam4)
		{
			iVar0 = unk_0xBCD67D962E393B66(0, 1);
		}
		else
		{
			Global_2471194 = { func_163(iParam1) };
			if (unk_0x0ADE2D0C6811DC70(&Global_2471124, 35, &Global_2471194))
			{
				iVar18 = 0;
				if (unk_0x28C1B9853548BD8E(&(Global_2471124.f_22), "Leader") && Global_2471124.f_30 == 0)
				{
					iVar18 = 1;
				}
				if (Global_2471124.f_21 > 0)
				{
					iVar19 = 0;
				}
				else
				{
					iVar19 = 1;
				}
				if (bParam6)
				{
					if (bParam7)
					{
						Var2 = { func_178(&Var2) };
					}
					iVar0 = unk_0xF02E9753777E6C9C(iVar19, unk_0xF337AAE985EE065E(&Global_2471124, 35), &(Global_2471124.f_17), Global_2471124.f_30, iVar18, 0, Global_2471124, &Var2, Global_1316386, Global_1316387, Global_1316388);
				}
				else
				{
					iVar0 = unk_0x44B40096A9C3C3F9(iVar19, unk_0xF337AAE985EE065E(&Global_2471124, 35), &(Global_2471124.f_17), Global_2471124.f_30, iVar18, 0, Global_2471124, Global_1316386, Global_1316387, Global_1316388);
				}
			}
			else
			{
				iVar0 = unk_0xBCD67D962E393B66(0, 1);
			}
		}
		func_172(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_172(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_177() || !unk_0x1504F110F2576375()) || !func_175(unk_0x0C1D3C552325765B(), 0))
	{
		return;
	}
	iVar0 = func_173(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1747376.f_5[iVar0 /*53*/] = iParam0;
		Global_1747376.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1747376.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1747376.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1747376.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1747376.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1747376.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_173(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1747376 - 1))
	{
		if (iParam0 > Global_1747376.f_5[iVar0 /*53*/].f_1)
		{
			func_174(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1747376++;
	if (Global_1747376 > 5)
	{
		Global_1747376 = 5;
		return Global_1747376;
	}
	return (Global_1747376 - 1);
}

void func_174(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1747376.f_5[iVar0 /*53*/] = { Global_1747376.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_175(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x0C1D3C552325765B())
	{
		bVar0 = func_176(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1588660[iParam0 /*532*/].f_201 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xCB129F9A01D14082(iParam0))
		{
			bVar0 = unk_0x10B1B072E9514664(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_176(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_60();
	}
	if (Global_1315209[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312725[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

bool func_177()
{
	return unk_0x6E373DDF41F95D44(-1762644250);
}

struct<16> func_178(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_179(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_180(&cVar0);
}

var func_180(char[4] cParam0)
{
	return cParam0;
}

int func_181(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (Global_1626500.f_80279[iParam0] != -1 && Global_1626500.f_80279[iParam0] <= 4)
	{
		if (Global_1626500.f_80279[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1626500.f_80279[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1626500.f_80279[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1626500.f_80279[iParam0] == 4)
		{
			if (unk_0x08BA6DD398CA197C(Global_1626500.f_15, 29))
			{
				iVar0 = 21;
			}
			else
			{
				iVar0 = 6;
			}
		}
		else
		{
			iVar0 = Global_1626500.f_80279[iParam0];
		}
	}
	else
	{
		iVar0 = func_182(iParam1, !bParam2, iParam0, 0);
	}
	return iVar0;
}

int func_182(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0x10B1B072E9514664(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_187(iVar0, iParam2, 0) && !unk_0x08BA6DD398CA197C(Global_1626500.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_186(1);
				}
				else
				{
					return func_186(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0x08BA6DD398CA197C(Global_1626500.f_4, 20))
			{
				return func_183(iVar0, iParam2, 1);
			}
			else
			{
				return func_183(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_186(1);
	}
	return func_186(0);
}

int func_183(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_185(iParam0, iParam1);
	if (func_184(Global_1626500.f_83867))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_184(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7751[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_185(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_187(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_186(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_187(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 0);
				
				case 1:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 1);
				
				case 2:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 2);
				
				case 3:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 4);
				
				case 1:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 5);
				
				case 2:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 6);
				
				case 3:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 8);
				
				case 1:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 9);
				
				case 2:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 10);
				
				case 3:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 12);
				
				case 1:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 13);
				
				case 2:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 14);
				
				case 3:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 15);
				
				default:
			}
			break;
	}
	return 0;
}

var func_188(char[4] cParam0)
{
	return cParam0;
}

int func_189(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, char* sParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, char* sParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16, bool bParam17, int iParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	char* sVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	if (unk_0x44F90FBF2C1E8021() || unk_0x2C22E7D1C80A53EF())
	{
		return 0;
	}
	switch (*uParam2)
	{
		case 0:
			if (bParam3)
			{
				if (iParam7 == 6)
				{
					iVar6 = 121;
				}
				else if (iParam7 == 7)
				{
					iVar6 = 63;
				}
				else if (func_194())
				{
					iVar6 = 21;
				}
				else
				{
					iVar6 = 51;
				}
				if (*uParam1 == 0)
				{
					if ((iParam7 == 0 || iParam7 == 1) || iParam7 == 2)
					{
						if (func_194())
						{
							sVar4 = "FMMC_KEY_TIS2SJ";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIP2";
						}
					}
					else if (iParam7 == 3)
					{
						sVar4 = "FMMC_KEY_TIP7";
						iVar6 = 21;
					}
					else if (iParam7 == 4)
					{
						sVar4 = "FMMC_KEY_TIP5";
						if (unk_0xA96867DD0A63C62C(joaat("fm_capture_creator")) > 0)
						{
							iVar6 = 21;
						}
						else
						{
							iVar6 = 23;
						}
					}
					else if (iParam7 == 5)
					{
						sVar4 = "FMMC_KEY_TIP6";
						if (unk_0xA96867DD0A63C62C(joaat("fm_capture_creator")) > 0)
						{
							iVar6 = 21;
						}
						else
						{
							iVar6 = 23;
						}
					}
					else if (iParam7 == 6)
					{
						sVar4 = "FMMC_KEY_TIP10";
					}
					else if (iParam7 == 8)
					{
						sVar4 = "FMMC_KEY_TXT7";
					}
					else if (iParam7 == 9)
					{
						sVar4 = "FMMC_KEY_TXT8";
					}
					else if (iParam7 == 10)
					{
						sVar4 = "FMMC_KEY_VSS";
					}
				}
				else if (func_194())
				{
					sVar4 = "FMMC_KEY_TIS2FJ";
				}
				else
				{
					sVar4 = "FMMC_KEY_TIP2F";
				}
				if (unk_0x65121BA303717C5B() || unk_0x15B0CAB107CFCDE1())
				{
					sVar5 = sVar4;
					if ((iParam7 == 0 || iParam7 == 1) || iParam7 == 2)
					{
						sVar4 = "FMMC_SS_RL_35";
					}
					else if (iParam7 == 3)
					{
						sVar4 = "FMMC_SS_RL_32";
					}
					else if (iParam7 == 4)
					{
						sVar4 = "FMMC_SS_RL_33";
					}
					else if (iParam7 == 5)
					{
						sVar4 = "FMMC_SS_RL_34";
					}
					else if (iParam7 == 6)
					{
						sVar4 = "FMMC_SS_RL_49";
					}
					else if (iParam7 == 7)
					{
						sVar4 = "FMMC_SS_RL_57";
					}
				}
				if (unk_0x955B8C8F89CC3AC0())
				{
					iVar7 = 6;
				}
				else if (unk_0x70C239EC67257485() == 0)
				{
					iVar7 = 0;
				}
				else
				{
					iVar7 = 1;
				}
				if (unk_0x509383441597090D(sParam5))
				{
					unk_0xD06A3758AD98020C(iVar7, sVar4, sVar5, "", "", "", "", iVar6);
				}
				else
				{
					unk_0xD06A3758AD98020C(iVar7, sVar4, sVar5, sParam5, sParam10, "", "", iVar6);
				}
			}
			else
			{
				if (unk_0x955B8C8F89CC3AC0())
				{
					iVar8 = 6;
				}
				else if (unk_0x70C239EC67257485() == 0)
				{
					iVar8 = 0;
				}
				else
				{
					iVar8 = 1;
				}
				if (bParam4)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIPF";
					}
					if (unk_0x65121BA303717C5B() || unk_0x15B0CAB107CFCDE1())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M19";
					}
					if (unk_0x70C239EC67257485() == 10)
					{
						iVar9 = 21;
					}
					else
					{
						iVar9 = 25;
					}
					if (func_177())
					{
						iVar9 = 64;
					}
					unk_0x01ECC03A40F2ED10(2);
					if (unk_0x509383441597090D(&(Global_1626500.f_83874)))
					{
						unk_0xD06A3758AD98020C(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xD06A3758AD98020C(iVar8, sVar4, sVar5, &(Global_1626500.f_83874), "", "", "", iVar9);
					}
				}
				else if (bParam13)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIPF";
					}
					if (unk_0x65121BA303717C5B())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M19";
					}
					iVar9 = 63;
					unk_0x01ECC03A40F2ED10(2);
					if (unk_0x509383441597090D(sParam5))
					{
						unk_0xD06A3758AD98020C(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xD06A3758AD98020C(iVar8, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam9)
				{
					if (unk_0x70C239EC67257485() == 0)
					{
						iVar9 = 200;
						if (*uParam1 == 0)
						{
							sVar4 = "FMMC_KEY_TIPT";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIPTF";
						}
					}
					else
					{
						iVar9 = 100;
						if (*uParam1 == 0)
						{
							sVar4 = "FMMC_KEY_ALTT";
						}
						else
						{
							sVar4 = "FMMC_KEY_ALTTF";
						}
					}
					if (unk_0x65121BA303717C5B() || unk_0x15B0CAB107CFCDE1())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M36";
					}
					iVar10 = 0;
					while (iVar10 <= 7)
					{
						if (unk_0xD28EDDD3F7264249(&(Global_1626500.f_84025[iVar10 /*16*/])))
						{
							StringCopy(&(Global_1626500.f_84025[iVar10 /*16*/]), "", 64);
						}
						iVar10++;
					}
					unk_0x6CA401843B681A82(iVar8, sVar4, sVar5, &(Global_1626500.f_84025[0 /*16*/]), &(Global_1626500.f_84025[1 /*16*/]), &(Global_1626500.f_84025[2 /*16*/]), &(Global_1626500.f_84025[3 /*16*/]), &(Global_1626500.f_84025[4 /*16*/]), &(Global_1626500.f_84025[5 /*16*/]), &(Global_1626500.f_84025[6 /*16*/]), &(Global_1626500.f_84025[7 /*16*/]), iVar9);
				}
				else if (bParam6)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP4";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP4F";
					}
					if (unk_0x65121BA303717C5B() || unk_0x15B0CAB107CFCDE1())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_SMS3";
					}
					if (unk_0x509383441597090D(&(Global_1626500.f_32044[iParam16 /*38*/].f_4[0 /*16*/])))
					{
						unk_0xD06A3758AD98020C(iVar8, sVar4, sVar5, "", "", "", "", 126);
					}
					else
					{
						iVar11 = 0;
						while (iVar11 <= 1)
						{
							if (unk_0xD28EDDD3F7264249(&(Global_1626500.f_32044[iParam16 /*38*/].f_4[iVar11 /*16*/])))
							{
								StringCopy(&(Global_1626500.f_32044[iParam16 /*38*/].f_4[iVar11 /*16*/]), "", 64);
							}
							iVar11++;
						}
						unk_0xD06A3758AD98020C(iVar8, sVar4, sVar5, &(Global_1626500.f_32044[iParam16 /*38*/].f_4[0 /*16*/]), &(Global_1626500.f_32044[iParam16 /*38*/].f_4[1 /*16*/]), "", "", 126);
					}
				}
				else if (bParam8)
				{
					iVar9 = 61;
					if (bParam11)
					{
						if (func_194())
						{
							if (*uParam1 == 0)
							{
								sVar4 = "CELL_EMASH_SOD";
							}
							else if (*uParam1 == -1)
							{
								sVar4 = "CELL_EMASH_SODE";
							}
							else
							{
								sVar4 = "CELL_EMASH_SODF";
							}
						}
						else if (*uParam1 == 0)
						{
							sVar4 = "CELL_EMAIL_SOD";
						}
						else if (*uParam1 == -1)
						{
							sVar4 = "CELL_EMAIL_SODE";
						}
						else
						{
							sVar4 = "CELL_EMAIL_SODF";
						}
						if (unk_0x65121BA303717C5B() || unk_0x15B0CAB107CFCDE1())
						{
							sVar5 = sVar4;
							sVar4 = "CELL_EMAIL_DESC";
						}
					}
					else if (func_194())
					{
						if (*uParam1 == 0)
						{
							sVar4 = "FMMC_KEY_TIP8S";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIP8FS";
						}
						if (unk_0x65121BA303717C5B() || unk_0x15B0CAB107CFCDE1())
						{
							sVar5 = sVar4;
							sVar4 = "FMMC_SMS4";
						}
						iVar9 = 21;
					}
					else
					{
						if (*uParam1 == 0)
						{
							sVar4 = "FMMC_KEY_TIP8";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIP8F";
						}
						if (unk_0x65121BA303717C5B())
						{
							sVar5 = sVar4;
							sVar4 = "FMMC_SMS4";
						}
					}
					if (unk_0x509383441597090D(sParam5))
					{
						unk_0xD06A3758AD98020C(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xD06A3758AD98020C(iVar8, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam12)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP9";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP9F";
					}
					if (unk_0x65121BA303717C5B())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_KEY_TIP9N";
					}
					if (unk_0x509383441597090D(sParam5))
					{
						unk_0xD06A3758AD98020C(iVar8, sVar4, sVar5, "", "", "", "", 16);
					}
					else
					{
						unk_0xD06A3758AD98020C(iVar8, sVar4, sVar5, sParam5, "", "", "", 16);
					}
				}
				else if (bParam14)
				{
					iVar9 = 16;
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP12";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP12F";
					}
					if (unk_0x65121BA303717C5B())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_KEY_TIP12N";
					}
					if (unk_0x509383441597090D(sParam5))
					{
						unk_0xD06A3758AD98020C(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xD06A3758AD98020C(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam15)
				{
					iVar9 = 61;
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP12";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP12F";
					}
					if (unk_0x509383441597090D(sParam5))
					{
						unk_0xD06A3758AD98020C(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xD06A3758AD98020C(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam17)
				{
					if (unk_0x15B0CAB107CFCDE1())
					{
						iVar9 = 21;
					}
					else
					{
						iVar9 = 20;
					}
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP14S";
					}
					else if (*uParam1 == -1)
					{
						sVar4 = "FMMC_KEY_TIP14ES";
					}
					else if (*uParam1 == -2)
					{
						sVar4 = "FMMC_KEY_TIP14OS";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP14FS";
					}
					if (unk_0x65121BA303717C5B())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_KEY_TIP14N";
					}
					if (unk_0x509383441597090D(sParam5))
					{
						unk_0xD06A3758AD98020C(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xD06A3758AD98020C(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (iParam18 > 0)
				{
					if (unk_0x65121BA303717C5B() || unk_0x15B0CAB107CFCDE1())
					{
						iVar9 = 16;
					}
					else
					{
						iVar9 = 15;
					}
					if (bParam20)
					{
						sVar4 = "FMMC_KEY_TIP15B";
					}
					else if (bParam21)
					{
						sVar4 = "FMMC_KEY_TIP15U";
					}
					else if (bParam19)
					{
						sVar4 = "FMMC_KEY_TIP15N";
					}
					else if (bParam23)
					{
						sVar4 = "FMMC_KEY_TIP15I";
					}
					else if (*uParam1 == 0)
					{
						if (iParam18 == 2)
						{
							sVar4 = "FMMC_MCK_TIP15";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIP15";
						}
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP15F";
					}
					if (unk_0x509383441597090D(sParam5))
					{
						unk_0xD06A3758AD98020C(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xD06A3758AD98020C(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else
				{
					if (unk_0x70C239EC67257485() == 0)
					{
						iVar9 = 501;
						if (bParam11)
						{
							if (func_194())
							{
								if (*uParam1 == 0)
								{
									sVar4 = "CELL_EMASH_BOD";
								}
								else if (*uParam1 == -1)
								{
									sVar4 = "CELL_EMASH_BODE";
								}
								else
								{
									sVar4 = "CELL_EMASH_BODF";
								}
							}
							else if (*uParam1 == 0)
							{
								sVar4 = "CELL_EMAIL_BOD";
							}
							else if (*uParam1 == -1)
							{
								sVar4 = "CELL_EMAIL_BODE";
							}
							else
							{
								sVar4 = "CELL_EMAIL_BODF";
							}
						}
						else if (*uParam1 == 0)
						{
							sVar4 = "FMMC_KEY_TIP3";
						}
						else if (*uParam1 == -1)
						{
							sVar4 = "FMMC_KEY_TIP3E";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIP3F";
						}
					}
					else
					{
						iVar9 = 251;
						if (func_194())
						{
							iVar9 = 150;
						}
						if (bParam11)
						{
							if (*uParam1 == 0)
							{
								sVar4 = "CELL_EMASH_BOD";
							}
							else if (*uParam1 == -1)
							{
								sVar4 = "CELL_EMASH_BODE";
							}
							else
							{
								sVar4 = "CELL_EMASH_BODF";
							}
						}
						else if (func_194())
						{
							if (*uParam1 == 0)
							{
								sVar4 = "FMMC_KEY_TIPSS";
							}
							else if (*uParam1 == -1)
							{
								sVar4 = "FMMC_KEY_TIPSSE";
							}
							else
							{
								sVar4 = "FMMC_KEY_TIPSSF";
							}
						}
						else if (*uParam1 == 0)
						{
							sVar4 = "FMMC_KEY_TIPS";
						}
						else if (*uParam1 == -1)
						{
							sVar4 = "FMMC_KEY_TIPSE";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIPSF";
						}
					}
					if (unk_0x65121BA303717C5B() || unk_0x15B0CAB107CFCDE1())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M20";
						if (bParam11)
						{
							sVar4 = "CELL_EMAIL_DESC";
						}
					}
					iVar12 = 0;
					while (iVar12 <= 7)
					{
						if (unk_0xD28EDDD3F7264249(&(Global_1626500.f_83896[iVar12 /*16*/])))
						{
							StringCopy(&(Global_1626500.f_83896[iVar12 /*16*/]), "", 64);
						}
						iVar12++;
					}
					if (bParam11)
					{
						unk_0x6CA401843B681A82(iVar8, sVar4, sVar5, sParam5, sParam10, "", "", "", "", "", "", iVar9);
					}
					else
					{
						unk_0x6CA401843B681A82(iVar8, sVar4, sVar5, &(Global_1626500.f_83896[0 /*16*/]), &(Global_1626500.f_83896[1 /*16*/]), &(Global_1626500.f_83896[2 /*16*/]), &(Global_1626500.f_83896[3 /*16*/]), &(Global_1626500.f_83896[4 /*16*/]), &(Global_1626500.f_83896[5 /*16*/]), &(Global_1626500.f_83896[6 /*16*/]), &(Global_1626500.f_83896[7 /*16*/]), iVar9);
					}
				}
			}
			StringCopy(&Global_1728965, "", 64);
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		
		case 1:
			*uParam0 = unk_0xC5400265B5C1CEB3();
			switch (*uParam0)
			{
				case 0:
					return 0;
				
				case 3:
					*uParam2 = 0;
					*uParam0 = 0;
					*uParam1 = 0;
					return 0;
				
				case 2:
					*uParam1 = 0;
					return 0;
				
				case 1:
					if (bParam4 || bParam13)
					{
						if (unk_0x509383441597090D(&Global_1728965))
						{
							StringCopy(&Global_1728965, unk_0x82DC5FE50D0BBF83(), 64);
							if (unk_0x509383441597090D(&Global_1728965))
							{
								*uParam1 = 0;
								return 1;
							}
							iVar1 = unk_0x3ACC64D0951B9D26(unk_0x82DC5FE50D0BBF83());
							iVar3 = 0;
							while (iVar3 <= (iVar1 - 1))
							{
								if (*uParam2 != 0)
								{
									if (!unk_0x509383441597090D(&Global_1728965))
									{
										if (unk_0x28C1B9853548BD8E(" ", unk_0x15BAFA3B5F3ABB22(&Global_1728965, 0, 1)))
										{
											iVar2 = unk_0x3ACC64D0951B9D26(&Global_1728965);
											StringCopy(&Global_1728965, unk_0x15BAFA3B5F3ABB22(&Global_1728965, 1, iVar2), 64);
										}
									}
									else
									{
										*uParam1 = 0;
										return 1;
									}
								}
								iVar3++;
							}
						}
					}
					if (func_177())
					{
						*uParam1 = 0;
						return 1;
					}
					if (unk_0xD697DEF4F5B18078(*uParam1))
					{
						if (!unk_0xDC02E8B4C3EE867B(*uParam1))
						{
							unk_0x39C6D32CD560BA7C();
							iVar0 = unk_0x267A6AB0C789F23E(*uParam1);
							switch (iVar0)
							{
								case 0:
									*uParam1 = 0;
									return 1;
									break;
								
								case 1:
									*uParam2 = 0;
									*uParam0 = 0;
									return 0;
									break;
								
								case -1:
									*uParam2 = 0;
									*uParam0 = 3;
									*uParam1 = 0;
									func_193(1);
									return 0;
									break;
							}
						}
						else if (bParam11)
						{
							if (unk_0xA96867DD0A63C62C(joaat("appinternet")) == 0)
							{
								unk_0x39C6D32CD560BA7C();
								*uParam1 = 0;
								return 1;
							}
						}
						break;
					}
					if (bParam4)
					{
						if (bParam22)
						{
							unk_0x51950A78C3C1116D(&Global_1728965, uParam1);
						}
						else
						{
							unk_0x6096A8ED0584E961(&Global_1728965, uParam1);
						}
					}
					else if (unk_0x509383441597090D(unk_0x82DC5FE50D0BBF83()))
					{
						*uParam1 = -2;
						*uParam2 = 0;
						*uParam0 = 0;
						unk_0x39C6D32CD560BA7C();
						return 0;
					}
					else if (bParam22)
					{
						unk_0x51950A78C3C1116D(unk_0x82DC5FE50D0BBF83(), uParam1);
					}
					else
					{
						unk_0x6096A8ED0584E961(unk_0x82DC5FE50D0BBF83(), uParam1);
					}
					if (unk_0x15B0CAB107CFCDE1())
					{
						if ((!unk_0x98C339BD475B043D() || func_191() == 0) || func_190() == 1)
						{
							*uParam1 = 0;
							*uParam2 = 0;
							*uParam0 = 3;
							return 0;
						}
					}
					if (bParam17)
					{
						unk_0xDC96797B53DF25D3("ERROR_CHECKYACHTNAME");
						unk_0x6349285C2B22C0E9(1);
					}
					else
					{
						unk_0xDC96797B53DF25D3("ERROR_CHECKPROFANITY");
						unk_0x6349285C2B22C0E9(1);
					}
					if (!unk_0xD697DEF4F5B18078(*uParam1))
					{
						if (!unk_0x509383441597090D(&Global_1728965))
						{
							*uParam1 = -1;
						}
						else
						{
							*uParam1 = -2;
						}
						*uParam2 = 0;
						*uParam0 = 0;
						unk_0x39C6D32CD560BA7C();
						return 0;
					}
				
				default:
			}
			break;
	}
	return 0;
}

int func_190()
{
	if (!func_191())
	{
		return 1;
	}
	return 0;
}

int func_191()
{
	if (func_192())
	{
		return 0;
	}
	if (unk_0x187CC7D5F9B002AA() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_192()
{
	return Global_2452243;
}

void func_193(int iParam0)
{
	Global_2452243 = iParam0;
}

int func_194()
{
	if (((unk_0x70C239EC67257485() == 7 || unk_0x70C239EC67257485() == 8) || unk_0x70C239EC67257485() == 9) || unk_0x70C239EC67257485() == 10)
	{
		return 1;
	}
	return 0;
}

void func_195(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_196())
	{
		iVar0 = Global_2506009[iParam0 /*3*/][func_59(iParam2)];
		if (iVar0 != 0)
		{
			unk_0xA75D835C91B77269(iVar0, iParam1, iParam3);
		}
	}
}

int func_196()
{
	return 1;
	return 0;
}

void func_197(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0xA86CA03D9749EEB3() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x4B50AAB32FBE0483();
		}
		else
		{
			*uParam0 = unk_0xB3FCCA0C64473451();
		}
	}
	else
	{
		*uParam0 = unk_0xDF658EB6CA91DFBC();
	}
	uParam0->f_1 = 1;
}

int func_198(var uParam0, char* sParam1)
{
	if (Global_2487434.f_1)
	{
		if (unk_0xA9FB2CCA53EFF610())
		{
			unk_0xFF46711DD31366C2(&(uParam0->f_2963));
			Global_2487434.f_20 = { uParam0->f_2963 };
			StringCopy(&(Global_2487434.f_4), sParam1, 64);
			return 1;
		}
	}
	return 0;
}

void func_199(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0xA86CA03D9749EEB3() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x4B50AAB32FBE0483();
			}
			else
			{
				*uParam0 = unk_0xB3FCCA0C64473451();
			}
		}
		else
		{
			*uParam0 = unk_0xDF658EB6CA91DFBC();
		}
		uParam0->f_1 = 1;
	}
}

void func_200()
{
	if (Global_14443.f_1 > 3)
	{
		Global_14443.f_1 = 9;
		Global_15758 = 1;
		if (Global_69617)
		{
			if (!unk_0x955B8C8F89CC3AC0())
			{
				func_139(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				unk_0x88B0F0DC270164B7(&(Global_2482149.f_1639), 15);
			}
		}
	}
}

void func_201()
{
	unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
	unk_0x7CBFB9F4AF33C67E(4);
	unk_0x7CBFB9F4AF33C67E(0);
	unk_0x7CBFB9F4AF33C67E(2);
	unk_0x709662CF2BD061A4("CELL_CONDFON");
	unk_0xDA35BDB37E728640(&Global_15760);
	unk_0x1E77BE8F4283FA05();
	func_72("CELL_300");
	func_72("CELL_219");
	func_72("CELL_219");
	unk_0xE73340DA551C95E1();
	Global_2487434.f_37 = 1;
	unk_0x09C86C0C5CA26B1E(&Global_2313, 27);
	func_91();
}

bool func_202(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xD478D67F6AAE84CA(&uParam0, 13);
}

void func_203(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x43ADD6E60AA2507B(sParam0);
	unk_0xAA85370CFA6D5384(iParam1, 1);
}

void func_204(char* sParam0, int iParam1)
{
	unk_0x55B5433015A91E85(sParam0);
	unk_0x85AE92859C5AADE3(0, 0, 1, iParam1);
}

void func_205(char* sParam0, var uParam1, int iParam2, int iParam3)
{
	unk_0x55B5433015A91E85(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x212C24688D441F9E(iParam2);
	}
	unk_0xDA35BDB37E728640(uParam1);
	unk_0x85AE92859C5AADE3(0, 0, 1, iParam3);
}

int func_206(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	var uVar1;
	
	if (func_220(iParam0))
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = unk_0x10B1B072E9514664(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_1626500.f_80279[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (func_220(unk_0x0C1D3C552325765B()) || (func_219() && func_218()))
	{
		uVar1 = func_217();
		if (unk_0xD3FACCDA4D66AEAD(uVar1))
		{
			if (unk_0x54F0AEFB11EA090A(uVar1))
			{
				if (unk_0xA43666ACD375E339(uVar1) != -1)
				{
					if (func_160(unk_0xA43666ACD375E339(uVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x1504F110F2576375()) && iParam1 < 4)
						{
							if (Global_1626500.f_80279[iParam1] != -1)
							{
								return func_181(iParam1, iParam0, 0);
							}
							else
							{
								return func_208(iParam0, unk_0xA43666ACD375E339(uVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_208(iParam0, unk_0xA43666ACD375E339(uVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x1504F110F2576375()) && iParam1 < 4)
			{
				if (Global_1626500.f_80279[iParam1] != -1)
				{
					return func_181(iParam1, iParam0, 0);
				}
				else
				{
					return func_207(0, -1, 0);
				}
			}
			else
			{
				return func_207(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x1504F110F2576375()) && iParam1 < 4)
	{
		if (Global_1626500.f_80279[iParam1] != -1)
		{
			return func_181(iParam1, iParam0, 0);
		}
		else
		{
			return func_208(iParam0, unk_0x0C1D3C552325765B(), iParam1, bParam2, bParam3);
		}
	}
	return func_208(iParam0, unk_0x0C1D3C552325765B(), iParam1, bParam2, bParam3);
}

int func_207(bool bParam0, int iParam1, bool bParam2)
{
	return func_182(unk_0x0C1D3C552325765B(), bParam0, iParam1, bParam2);
}

int func_208(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x10B1B072E9514664(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1588660[iVar2 /*532*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if ((func_216(iParam1, iParam0, iVar0, 0) && !unk_0x08BA6DD398CA197C(Global_1626500.f_15, 18)) || ((func_187(unk_0x10B1B072E9514664(iParam1), unk_0x10B1B072E9514664(iParam0), 0) && unk_0x08BA6DD398CA197C(Global_1626500.f_15, 23)) && !unk_0x08BA6DD398CA197C(Global_1626500.f_15, 18)))
			{
				return func_186(1);
			}
			else if (unk_0x08BA6DD398CA197C(Global_1626500.f_15, 26))
			{
				return func_215(1);
			}
			else
			{
				return func_182(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1573848 || Global_1573839) || Global_1588660[iParam0 /*532*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1573848 == 1 && Global_1573858 == 0))
			{
				return func_186(1);
			}
			else
			{
				return func_182(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1573843 && Global_1573418.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar3 = func_211(iParam0);
	if (!iVar3 == -1)
	{
		return func_209(iVar3);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_209(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_210(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_210(int iParam0)
{
	return Global_2415586.f_1946.f_44[iParam0 /*2*/].f_1;
}

int func_211(int iParam0)
{
	if (!iParam0 == func_158())
	{
		if (func_213(iParam0, 1))
		{
			return Global_2415586.f_1946.f_11[func_212(iParam0)];
		}
	}
	return -1;
}

int func_212(int iParam0)
{
	if (iParam0 != func_158())
	{
		return Global_1614576[iParam0 /*324*/].f_10;
	}
	return func_158();
}

bool func_213(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_214(iParam0))
		{
			return 0;
		}
	}
	return Global_1614576[iParam0 /*324*/].f_10 != func_158();
}

int func_214(int iParam0)
{
	if (iParam0 != func_158())
	{
		if (Global_1614576[iParam0 /*324*/].f_10 != func_158())
		{
			return Global_1614576[iParam0 /*324*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_215(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_216(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x10B1B072E9514664(iParam0) == -1 && unk_0x10B1B072E9514664(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x10B1B072E9514664(iParam0) == unk_0x10B1B072E9514664(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x10B1B072E9514664(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x10B1B072E9514664(iParam0) == iParam2;
	}
	return unk_0x10B1B072E9514664(iParam0) == iParam2;
}

var func_217()
{
	return Global_2359301.f_2;
}

bool func_218()
{
	return unk_0x08BA6DD398CA197C(Global_2359301, 4);
}

bool func_219()
{
	return unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_18, 14);
}

int func_220(int iParam0)
{
	if (func_175(iParam0, 0))
	{
		return 1;
	}
	if (func_221())
	{
		if (iParam0 == unk_0x0C1D3C552325765B())
		{
			return 1;
		}
	}
	if (unk_0x08BA6DD398CA197C(Global_2421327[iParam0 /*353*/].f_196, 2))
	{
		return 1;
	}
	return 0;
}

bool func_221()
{
	return unk_0x08BA6DD398CA197C(Global_2359301, 3);
}

int func_222(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0x598A9E990F05F82C())
	{
		return 0;
	}
	if (func_232())
	{
		return 0;
	}
	if (!unk_0xB20CA7A3EE29687A())
	{
		return 0;
	}
	if (func_51())
	{
		return 0;
	}
	if (func_231())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_228(unk_0x0C1D3C552325765B(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_227(unk_0x0C1D3C552325765B()))
		{
			return 0;
		}
	}
	if (func_226())
	{
		return 0;
	}
	if (unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		return 0;
	}
	if (unk_0x84C71F36E7D97756())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0xDC48E9E2CC7437D3(unk_0x0C1D3C552325765B()))
		{
			return 0;
		}
	}
	if (Global_1573695)
	{
		return 0;
	}
	if (func_225())
	{
		return 0;
	}
	if (func_224())
	{
		return 0;
	}
	if (func_223())
	{
		return 0;
	}
	if (Global_68125)
	{
		return 0;
	}
	if (Global_2490098)
	{
		return 0;
	}
	return 1;
}

bool func_223()
{
	return Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_186 != 0;
}

bool func_224()
{
	return Global_2442442.f_569;
}

bool func_225()
{
	return Global_2442442.f_721;
}

bool func_226()
{
	return Global_2432628.f_2489.f_585;
}

int func_227(int iParam0)
{
	if (Global_2421327[iParam0 /*353*/].f_208 == 0)
	{
		return 0;
	}
	return 1;
}

int func_228(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_229(iParam0))
		{
			return 1;
		}
	}
	if (Global_1588660[iParam0 /*532*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_229(int iParam0)
{
	return func_230(iParam0);
}

bool func_230(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_13.f_1, 0);
}

bool func_231()
{
	return unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_18, 0);
}

int func_232()
{
	if (Global_15745 != 0 || unk_0xE80581DE0ACF1F8A())
	{
		return 1;
	}
	return 0;
}

int func_233(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_199(uParam0, bParam2, 0);
	if (unk_0xA86CA03D9749EEB3() && !bParam2)
	{
		if (unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(unk_0xDF658EB6CA91DFBC(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_234(var uParam0)
{
	return uParam0->f_1;
}

void func_235()
{
	Global_2487434.f_1 = 0;
	Global_2487434 = 0;
	Global_2487434.f_2 = 0;
	Global_2487434.f_33 = -1;
	Global_2487434.f_34 = -1;
	StringCopy(&(Global_2487434.f_4), "", 64);
	StringCopy(&(Global_2487434.f_39[0 /*16*/]), "", 64);
	Global_2487434.f_38 = 0;
	Global_2487434.f_56 = 0;
	Global_2487434.f_57 = 0;
	Global_2487434.f_58 = -2;
	Global_2487434.f_3 = 0;
	func_236(&(Global_2487434.f_20));
}

void func_236(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

void func_237()
{
	Global_2487434.f_2 = 1;
	Global_2487434.f_38 = 1;
	if (unk_0x98C339BD475B043D())
	{
		if (unk_0xA9FB2CCA53EFF610())
		{
			while (unk_0xADF8F3CA9AE46784())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0x9DBE7B231DE55A00();
			Global_2487434 = 0;
			Global_2487434.f_2 = 0;
		}
		else if (func_202(Global_2487434.f_20))
		{
			if (unk_0x74A87F4BE7FE0199(&(Global_2487434.f_20)))
			{
				if (!unk_0x51AC18677CE955C2(&(Global_2487434.f_20)))
				{
					func_235();
				}
			}
		}
		else
		{
			func_235();
		}
	}
	else
	{
		func_235();
	}
	if (Global_2487434.f_37)
	{
		func_30(0);
	}
	Global_2487434.f_37 = 0;
	Global_2487434.f_3 = 0;
}

void func_238(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_247())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
			if (iParam1 > 0)
			{
				func_239(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
			func_239(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_239(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_247())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0xFCE85827D6C3F47A(func_60()) || unk_0x474B3F20E92EE4B9())
		{
			Global_2573372 = 1;
			return 0;
		}
		if (Global_2452901)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2573373 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2572880[iVar1 /*73*/].f_2 == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar3 = 2147483647;
	if (bVar0 || unk_0x6B7B1963D4E447A1(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0x1AF42FD94171E81B(iVar3))
		{
			*uParam0 = func_246(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2572880[*uParam0 /*73*/].f_66 = 1;
				}
			}
			Global_2573362 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2573371 = 1;
			Global_2573374 = iParam4;
			Global_2573376 = iParam3;
			Global_2573377 = 1;
			Global_2573375 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2573374 = iParam4;
			Global_2573376 = iParam3;
			Global_2573377 = 1;
			Global_2573375 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_245(1, iParam4);
			Global_2573371 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_240(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_240(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x88B0F0DC270164B7(&(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_123.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_241(iParam0);
	}
}

void func_241(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_247())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_244(iParam0))
		{
			if (!bVar0)
			{
				unk_0xC06B96599589EBBA();
			}
		}
		else if (!bVar0)
		{
			unk_0xF107756B7C40D5BD(Global_2572880[iParam0 /*73*/]);
		}
		func_242(&(Global_2572880[iParam0 /*73*/]));
	}
}

void func_242(var uParam0)
{
	*uParam0 = 0;
	*uParam0 = 2147483647;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1593119440;
	uParam0->f_4 = -2085313189;
	uParam0->f_5 = 0;
	uParam0->f_6 = 1227573907;
	uParam0->f_7 = -1161833819;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	func_243(&(uParam0->f_8.f_3));
	func_243(&(uParam0->f_8.f_16));
	StringCopy(&(uParam0->f_8.f_29), "", 32);
	StringCopy(&(uParam0->f_8.f_37), "", 24);
	StringCopy(&(uParam0->f_8.f_43), "", 16);
	StringCopy(&(uParam0->f_8.f_47), "", 16);
	uParam0->f_8.f_51 = 0;
	uParam0->f_8.f_52 = 0;
	uParam0->f_8.f_53 = 0;
	uParam0->f_8.f_54 = 0;
	uParam0->f_8.f_55 = 0;
	uParam0->f_8.f_56 = 0;
	uParam0->f_66 = 0;
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
}

void func_243(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_244(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2572880[iParam0 /*73*/].f_5 == 1;
	}
	return 0;
}

void func_245(int iParam0, var uParam1)
{
	Global_2454055 = uParam1;
	Global_2454054 = iParam0;
}

int func_246(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2572880[iVar0 /*73*/].f_2 == 0)
		{
			if (!func_247())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2572880[iVar0 /*73*/].f_2 = 1;
			Global_2572880[iVar0 /*73*/].f_1 = uParam5;
			Global_2572880[iVar0 /*73*/].f_3 = uParam1;
			Global_2572880[iVar0 /*73*/].f_4 = uParam2;
			Global_2572880[iVar0 /*73*/].f_7 = uParam3;
			Global_2572880[iVar0 /*73*/].f_5 = 0;
			Global_2572880[iVar0 /*73*/] = iParam0;
			Global_2572880[iVar0 /*73*/].f_6 = iParam4;
			Global_2572880[iVar0 /*73*/].f_69 = uParam8;
			Global_2572880[iVar0 /*73*/].f_68 = uParam7;
			Global_2572880[iVar0 /*73*/].f_72 = 0;
			Global_2573362 = 0;
			if (bParam6)
			{
				Global_2572880[iVar0 /*73*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_247()
{
	if (unk_0x955B8C8F89CC3AC0())
	{
		return 1;
	}
	return 0;
}

int func_248(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		iVar0 = unk_0xC4914549A395EF5E();
	}
	iVar0 = (iVar0 + unk_0x6F46EEAF5BB462EA(-1));
	return iVar0;
}

void func_249(bool bParam0)
{
	if (bParam0)
	{
		unk_0x88B0F0DC270164B7(&Global_2314, 20);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&Global_2314, 20);
	}
}

void func_250(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_251(char* sParam0)
{
	Global_1628 = 132;
	StringCopy(&Global_15760, sParam0, 64);
	if (Global_14443.f_1 > 3)
	{
		Global_14443.f_1 = 10;
		func_97();
	}
	unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
	unk_0x7CBFB9F4AF33C67E(4);
	unk_0x7CBFB9F4AF33C67E(0);
	unk_0x7CBFB9F4AF33C67E(2);
	unk_0x709662CF2BD061A4("CELL_CONDFON");
	unk_0xDA35BDB37E728640(&Global_15760);
	unk_0x1E77BE8F4283FA05();
	func_72("CELL_300");
	func_72("CELL_211");
	func_72("CELL_211");
	unk_0xE73340DA551C95E1();
	unk_0x88B0F0DC270164B7(&Global_2313, 20);
	func_91();
	unk_0x09C86C0C5CA26B1E(&Global_2313, 20);
}

void func_252()
{
	unk_0x0886FDD09A05F94F();
	Global_2487434 = 1;
	Global_2487434.f_2 = 0;
	Global_2487434.f_33 = -1;
	Global_2487434.f_34 = -1;
	Global_2487434.f_38 = 0;
}

void func_253()
{
	unk_0x15761381A3072BFA(iLocal_107);
	unk_0xC8656944A36C8E78(iLocal_107);
	Local_334.f_2978 = 0;
	unk_0x09C86C0C5CA26B1E(&Global_2313, 9);
	unk_0x09C86C0C5CA26B1E(&Global_2313, 29);
	unk_0x09C86C0C5CA26B1E(&Global_2314, 20);
	unk_0x09C86C0C5CA26B1E(&Global_2314, 0);
	unk_0x09C86C0C5CA26B1E(&Global_2314, 18);
	Global_101553.f_32740[12 /*29*/].f_1 = uLocal_306;
	Global_101553.f_32740[2 /*29*/].f_1 = uLocal_307;
	Global_101553.f_32740[0 /*29*/].f_1 = uLocal_308;
	if (Local_334.f_2999 == 1)
	{
		if (unk_0x98C339BD475B043D())
		{
			if (Global_2487434.f_33 == -1)
			{
				func_237();
			}
		}
	}
	unk_0x78C587487CD40B92();
}

void func_254()
{
	if (!Global_69617)
	{
		if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
		{
			if (unk_0x08BA6DD398CA197C(Global_2313, 11))
			{
				if (!Global_14386)
				{
					unk_0xC29813E4A3FD0772(unk_0xA0081090911D13E5(), 0, 1);
				}
				if (Global_69617)
				{
					unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 244, 1);
					unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 243, 1);
					unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 242, 1);
				}
				unk_0x09C86C0C5CA26B1E(&Global_2313, 11);
			}
		}
	}
}

void func_255()
{
	int iVar0[151];
	int iVar152;
	int iVar153;
	int iVar154;
	
	Global_101553.f_32740[147 /*29*/].f_1 = 1320;
	Global_101553.f_32740[74 /*29*/].f_1 = 180;
	Global_101553.f_32740[75 /*29*/].f_1 = 190;
	func_142(Global_14424, "SET_DATA_SLOT_EMPTY", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4EDE34FBADD967A6(0);
	iLocal_97 = 0;
	iLocal_136 = 0;
	iLocal_119 = 0;
	func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), 0f, -1f, -1f, "CELL_232", "CELL_233", "CELL_393", 0, 0);
	iVar152 = 0;
	while (iVar152 < 150)
	{
		iVar153 = 0;
		iVar154 = 150;
		Global_101553.f_32740[iVar154 /*29*/].f_1 = 5000;
		func_16();
		while (iVar153 < 150)
		{
			if (unk_0x08BA6DD398CA197C(Global_2314, 0))
			{
				if ((iVar153 == 2 || iVar153 == 0) || iVar153 == 12)
				{
					Global_101553.f_32740[12 /*29*/].f_1 = 3;
					Global_101553.f_32740[2 /*29*/].f_1 = 1;
					Global_101553.f_32740[0 /*29*/].f_1 = 2;
					bLocal_94 = true;
				}
				else
				{
					bLocal_94 = false;
				}
			}
			else if (Global_101553.f_32740[iVar153 /*29*/].f_12[Global_14443] == 1)
			{
				bLocal_94 = true;
			}
			else
			{
				bLocal_94 = false;
			}
			if (bLocal_94)
			{
				if (iVar153 != Global_14443)
				{
					if (iVar0[iVar153] == 0)
					{
						if (Global_101553.f_32740[iVar153 /*29*/].f_19[Global_14443] == 1 || func_79(iVar153, Global_14443))
						{
							fLocal_95 = (unk_0xBBDA792448DB5A89(Global_101553.f_32740[iVar153 /*29*/].f_1) / 100f);
						}
						else
						{
							fLocal_95 = unk_0xBBDA792448DB5A89(Global_101553.f_32740[iVar153 /*29*/].f_1);
						}
						if (Global_101553.f_32740[iVar154 /*29*/].f_19[Global_14443] == 1 || func_79(iVar154, Global_14443))
						{
							fLocal_96 = (unk_0xBBDA792448DB5A89(Global_101553.f_32740[iVar154 /*29*/].f_1) / 100f);
						}
						else
						{
							fLocal_96 = unk_0xBBDA792448DB5A89(Global_101553.f_32740[iVar154 /*29*/].f_1);
						}
						if (fLocal_95 < fLocal_96)
						{
							iVar154 = iVar153;
							if (unk_0x08BA6DD398CA197C(Global_2314, 0))
							{
								if (iVar154 == 2)
								{
									func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar152), 0f, -1f, -1f, "CELL_7001", &(Global_101553.f_32740[iVar154 /*29*/].f_3), &(Global_101553.f_32740[iVar154 /*29*/].f_7), 0, 0);
								}
								if (iVar154 == 0)
								{
									func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar152), 0f, -1f, -1f, "CELL_7002", &(Global_101553.f_32740[iVar154 /*29*/].f_3), &(Global_101553.f_32740[iVar154 /*29*/].f_7), 0, 0);
								}
								if (iVar154 == 12)
								{
									func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar152), 0f, -1f, -1f, "CELL_7003", &(Global_101553.f_32740[iVar154 /*29*/].f_3), "CELL_E_311", 0, 0);
								}
							}
						}
					}
				}
			}
			iVar153++;
		}
		Global_14449[iVar152] = iVar154;
		iVar0[iVar154] = 1;
		if (!unk_0x08BA6DD398CA197C(Global_2314, 0))
		{
			if (Global_101553.f_32740[iVar154 /*29*/].f_12[Global_14443] == 1)
			{
				if (iVar153 != Global_14443)
				{
					if (Global_101553.f_32740[iVar154 /*29*/].f_24[Global_14443] == 0)
					{
						if (Global_101553.f_32740[iVar154 /*29*/].f_19[Global_14443] == 1 || func_79(iVar154, Global_14443))
						{
							func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar152), 1f, -1f, -1f, &(Global_117[iVar154 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
						else
						{
							func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar152), 0f, -1f, -1f, &(Global_117[iVar154 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
					}
					else if (Global_101553.f_32740[iVar154 /*29*/].f_19[Global_14443] == 1 || func_79(iVar154, Global_14443))
					{
						func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar152), 1f, -1f, -1f, &(Global_101553.f_32740[iVar154 /*29*/].f_3), &(Global_101553.f_32740[iVar154 /*29*/].f_3), &(Global_101553.f_32740[iVar154 /*29*/].f_7), 0, 0);
					}
					else
					{
						func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar152), 0f, -1f, -1f, &(Global_101553.f_32740[iVar154 /*29*/].f_3), &(Global_101553.f_32740[iVar154 /*29*/].f_3), &(Global_101553.f_32740[iVar154 /*29*/].f_7), 0, 0);
					}
				}
			}
		}
		if (Global_101553.f_32740[iVar152 /*29*/].f_12[Global_14443] == 1)
		{
			if (iVar152 != Global_14443)
			{
				iLocal_97++;
			}
		}
		iVar152++;
	}
	if (!unk_0x08BA6DD398CA197C(Global_2314, 0))
	{
		if (unk_0x98C339BD475B043D())
		{
			if (Global_14386 == 0)
			{
				func_257();
			}
		}
	}
	func_256();
}

void func_256()
{
	if (!Global_14443.f_1 == 10 && !Global_14443.f_1 == 9)
	{
		if (unk_0x08BA6DD398CA197C(Global_2313, 9))
		{
			unk_0x4EDE34FBADD967A6(750);
		}
		if (Global_14443.f_1 > 6)
		{
			func_142(Global_14424, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
			if (unk_0x08BA6DD398CA197C(Global_2314, 0))
			{
				func_140(Global_14424, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
			}
			else
			{
				func_140(Global_14424, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
			}
			Global_2316 = 99;
			if (unk_0x08BA6DD398CA197C(Global_2313, 9))
			{
				if (Global_14431)
				{
					func_139(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
					func_139(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_139(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
					func_139(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_139(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x09C86C0C5CA26B1E(&Global_2313, 17);
			}
			else if (unk_0x08BA6DD398CA197C(Global_2314, 0))
			{
				if (Global_14431)
				{
					func_139(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
					func_139(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_139(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
					func_139(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_139(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14431)
			{
				if (iLocal_97 > 0)
				{
					func_139(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				}
				else
				{
					func_139(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				}
				if (Global_14386 == 0)
				{
					func_139(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, "CELL_207", 0, 0, 0, 0);
					unk_0x88B0F0DC270164B7(&Global_2313, 17);
				}
				else
				{
					func_139(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0x88B0F0DC270164B7(&Global_2313, 17);
				}
				func_139(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				if (iLocal_97 > 0)
				{
					func_139(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				else
				{
					func_139(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_139(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x88B0F0DC270164B7(&Global_2313, 17);
				func_139(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
	Global_101553.f_32740[12 /*29*/].f_1 = uLocal_306;
	Global_101553.f_32740[2 /*29*/].f_1 = uLocal_307;
	Global_101553.f_32740[0 /*29*/].f_1 = uLocal_308;
}

void func_257()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar16;
	int iVar17;
	
	Global_101553.f_32740[147 /*29*/].f_1 = 1320;
	Global_101553.f_32740[74 /*29*/].f_1 = 180;
	Global_101553.f_32740[75 /*29*/].f_1 = 190;
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iLocal_98 = iLocal_97;
	iLocal_99 = iLocal_98;
	func_264(&Local_334);
	iVar16 = 0;
	if (Global_69617)
	{
		if (func_260() == 0)
		{
			iVar16 = 1;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar0 = unk_0x81C85E54237F8A2E(iVar2);
		if (func_160(iVar0, 0, 1))
		{
			if (iVar16 == 0)
			{
				if (!iVar0 == unk_0x0C1D3C552325765B())
				{
					Local_334[iVar1] = iVar0;
					func_259(unk_0xCF66111B26743875(iVar0));
					iVar1++;
				}
			}
		}
		iVar2++;
	}
	Local_334.f_33 = iVar1;
	iVar2 = 0;
	iVar1 = 0;
	if (func_162(unk_0x0C1D3C552325765B()))
	{
		iVar17 = unk_0xAAA965014060997C();
		if (iVar17 > 100)
		{
			iVar17 = 100;
		}
		iVar2 = 0;
		while (iVar2 <= (iVar17 - 1))
		{
			if (unk_0x5DE7601164C44498(unk_0xE4A87FF89CCC1891(iVar2)))
			{
				if (unk_0x232E1B2D9290D408(unk_0xE4A87FF89CCC1891(iVar2)))
				{
					Var3 = { func_258(iVar2) };
					if (!unk_0x1B93DF2247DCC570(&Var3))
					{
						if (iVar16 == 0)
						{
							if (iVar1 < 100)
							{
								Local_334.f_34[iVar1 /*29*/] = { Var3 };
								if (unk_0x15B0CAB107CFCDE1())
								{
									StringCopy(&(Local_334.f_34[iVar1 /*29*/].f_13), unk_0x85885467F123CBD8(iVar2), 64);
								}
								else
								{
									StringCopy(&(Local_334.f_34[iVar1 /*29*/].f_13), unk_0xE4A87FF89CCC1891(iVar2), 64);
								}
								func_259(&(Local_334.f_34[iVar1 /*29*/].f_13));
								iVar1++;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	Local_334.f_2935 = (Local_334.f_33 + iVar1);
}

struct<13> func_258(int iParam0)
{
	struct<13> Var0;
	
	unk_0x71183557E2634E47(iParam0, &Var0, 13);
	return Var0;
}

void func_259(var uParam0)
{
	unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
	unk_0x0FFE3C1DBBA72236(unk_0xBBDA792448DB5A89(2));
	unk_0x0FFE3C1DBBA72236(unk_0xBBDA792448DB5A89(iLocal_98));
	unk_0x0FFE3C1DBBA72236(0f);
	unk_0x709662CF2BD061A4("STRING");
	unk_0xDA35BDB37E728640(uParam0);
	unk_0x1E77BE8F4283FA05();
	func_72("CELL_MP_999");
	func_72("CELL_MP_999");
	unk_0xE73340DA551C95E1();
	iLocal_98++;
	iLocal_97++;
}

int func_260()
{
	if (Global_1312442)
	{
		return 1;
	}
	if (func_263())
	{
		return 1;
	}
	if (func_262())
	{
		return 1;
	}
	return func_261(120, -1);
}

int func_261(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2506009[iParam0 /*3*/][func_59(iParam1)];
	if (unk_0x80FB5712A7C4B4B8(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_262()
{
	return Global_1315217;
}

bool func_263()
{
	return Global_1315219;
}

void func_264(var uParam0)
{
	int iVar0;
	struct<13> Var1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		(*uParam0)[iVar0] = func_158();
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		uParam0->f_34[iVar0 /*29*/] = { Var1 };
		iVar0++;
	}
	uParam0->f_2936 = 0;
	uParam0->f_33 = 0;
	uParam0->f_2935 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		uParam0->f_2937[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_2946 = 0;
	StringCopy(&(uParam0->f_2947), "", 64);
	uParam0->f_2963 = { Var1 };
	uParam0->f_2976 = 0;
	uParam0->f_2977 = 0;
	func_250(&(uParam0->f_2979));
	uParam0->f_2999 = 0;
	StringCopy(&(uParam0->f_2983), "", 64);
}

void func_265()
{
	int iVar0[151];
	int iVar152;
	int iVar153;
	int iVar154;
	
	Global_101553.f_32740[147 /*29*/].f_1 = 1320;
	Global_101553.f_32740[74 /*29*/].f_1 = 180;
	Global_101553.f_32740[75 /*29*/].f_1 = 190;
	func_142(Global_14424, "SET_DATA_SLOT_EMPTY", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4EDE34FBADD967A6(0);
	func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), 0f, -1f, -1f, "CELL_232", "CELL_233", "CELL_393", 0, 0);
	iLocal_97 = 0;
	if (!unk_0x08BA6DD398CA197C(Global_2314, 0))
	{
		if (unk_0x98C339BD475B043D())
		{
			if (Global_14386 == 0)
			{
				func_266();
			}
		}
	}
	iLocal_100 = iLocal_97;
	iLocal_136 = 0;
	iLocal_119 = 0;
	iVar152 = iLocal_97;
	while (iVar152 < 150)
	{
		iVar153 = 0;
		iVar154 = 150;
		Global_101553.f_32740[iVar154 /*29*/].f_1 = 5000;
		func_16();
		while (iVar153 < 150)
		{
			if (unk_0x08BA6DD398CA197C(Global_2314, 0))
			{
				if ((iVar153 == 2 || iVar153 == 0) || iVar153 == 12)
				{
					Global_101553.f_32740[12 /*29*/].f_1 = 3;
					Global_101553.f_32740[2 /*29*/].f_1 = 1;
					Global_101553.f_32740[0 /*29*/].f_1 = 2;
					bLocal_94 = true;
				}
				else
				{
					bLocal_94 = false;
				}
			}
			else if (Global_101553.f_32740[iVar153 /*29*/].f_12[Global_14443] == 1)
			{
				bLocal_94 = true;
			}
			else
			{
				bLocal_94 = false;
			}
			if (bLocal_94)
			{
				if (iVar153 != Global_14443)
				{
					if (iVar0[iVar153] == 0)
					{
						if (Global_101553.f_32740[iVar153 /*29*/].f_19[Global_14443] == 1 || func_79(iVar153, Global_14443))
						{
							fLocal_95 = (unk_0xBBDA792448DB5A89(Global_101553.f_32740[iVar153 /*29*/].f_1) / 100f);
						}
						else
						{
							fLocal_95 = unk_0xBBDA792448DB5A89(Global_101553.f_32740[iVar153 /*29*/].f_1);
						}
						if (Global_101553.f_32740[iVar154 /*29*/].f_19[Global_14443] == 1 || func_79(iVar154, Global_14443))
						{
							fLocal_96 = (unk_0xBBDA792448DB5A89(Global_101553.f_32740[iVar154 /*29*/].f_1) / 100f);
						}
						else
						{
							fLocal_96 = unk_0xBBDA792448DB5A89(Global_101553.f_32740[iVar154 /*29*/].f_1);
						}
						if (fLocal_95 < fLocal_96)
						{
							iVar154 = iVar153;
							if (unk_0x08BA6DD398CA197C(Global_2314, 0))
							{
								if (iVar154 == 2)
								{
									func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar152), 0f, -1f, -1f, "CELL_7001", &(Global_101553.f_32740[iVar154 /*29*/].f_3), &(Global_101553.f_32740[iVar154 /*29*/].f_7), 0, 0);
								}
								if (iVar154 == 0)
								{
									func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar152), 0f, -1f, -1f, "CELL_7002", &(Global_101553.f_32740[iVar154 /*29*/].f_3), &(Global_101553.f_32740[iVar154 /*29*/].f_7), 0, 0);
								}
								if (iVar154 == 12)
								{
									func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar152), 0f, -1f, -1f, "CELL_7003", &(Global_101553.f_32740[iVar154 /*29*/].f_3), "CELL_E_311", 0, 0);
								}
							}
						}
					}
				}
			}
			iVar153++;
		}
		Global_14449[iVar152] = iVar154;
		iVar0[iVar154] = 1;
		if (!unk_0x08BA6DD398CA197C(Global_2314, 0))
		{
			if (Global_101553.f_32740[iVar154 /*29*/].f_12[Global_14443] == 1)
			{
				if (iVar153 != Global_14443)
				{
					if (Global_101553.f_32740[iVar154 /*29*/].f_24[Global_14443] == 0)
					{
						if (Global_101553.f_32740[iVar154 /*29*/].f_19[Global_14443] == 1 || func_79(iVar154, Global_14443))
						{
							func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar152), 1f, -1f, -1f, &(Global_117[iVar154 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
						else
						{
							func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar152), 0f, -1f, -1f, &(Global_117[iVar154 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
					}
					else if (Global_101553.f_32740[iVar154 /*29*/].f_19[Global_14443] == 1 || func_79(iVar154, Global_14443))
					{
						func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar152), 1f, -1f, -1f, &(Global_101553.f_32740[iVar154 /*29*/].f_3), &(Global_101553.f_32740[iVar154 /*29*/].f_3), &(Global_101553.f_32740[iVar154 /*29*/].f_7), 0, 0);
					}
					else
					{
						func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar152), 0f, -1f, -1f, &(Global_101553.f_32740[iVar154 /*29*/].f_3), &(Global_101553.f_32740[iVar154 /*29*/].f_3), &(Global_101553.f_32740[iVar154 /*29*/].f_7), 0, 0);
					}
				}
			}
		}
		if (Global_101553.f_32740[iVar152 /*29*/].f_12[Global_14443] == 1)
		{
			if (iVar152 != Global_14443)
			{
				iLocal_97++;
			}
		}
		iVar152++;
	}
	func_256();
}

void func_266()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar16;
	int iVar17;
	
	Global_101553.f_32740[147 /*29*/].f_1 = 1320;
	Global_101553.f_32740[74 /*29*/].f_1 = 180;
	Global_101553.f_32740[75 /*29*/].f_1 = 190;
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iLocal_98 = iLocal_97;
	iLocal_99 = iLocal_98;
	func_264(&Local_334);
	iVar16 = 0;
	if (Global_69617)
	{
		if (func_260() == 0)
		{
			iVar16 = 1;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar0 = unk_0x81C85E54237F8A2E(iVar2);
		if (func_160(iVar0, 0, 1))
		{
			if (iVar16 == 0)
			{
				if (!iVar0 == unk_0x0C1D3C552325765B())
				{
					Local_334[iVar1] = iVar0;
					func_267(unk_0xCF66111B26743875(iVar0));
					iVar1++;
				}
			}
		}
		iVar2++;
	}
	Local_334.f_33 = iVar1;
	iVar1 = 0;
	iVar2 = 0;
	if (func_162(unk_0x0C1D3C552325765B()))
	{
		iVar17 = unk_0xAAA965014060997C();
		if (iVar17 > 100)
		{
			iVar17 = 100;
		}
		iVar2 = 0;
		while (iVar2 <= (iVar17 - 1))
		{
			if (unk_0x5DE7601164C44498(unk_0xE4A87FF89CCC1891(iVar2)))
			{
				if (unk_0x232E1B2D9290D408(unk_0xE4A87FF89CCC1891(iVar2)))
				{
					Var3 = { func_258(iVar2) };
					if (!unk_0x1B93DF2247DCC570(&Var3))
					{
						if (iVar16 == 0)
						{
							if (iVar1 < 100)
							{
								Local_334.f_34[iVar1 /*29*/] = { Var3 };
								if (unk_0x15B0CAB107CFCDE1())
								{
									StringCopy(&(Local_334.f_34[iVar1 /*29*/].f_13), unk_0x85885467F123CBD8(iVar2), 64);
								}
								else
								{
									StringCopy(&(Local_334.f_34[iVar1 /*29*/].f_13), unk_0xE4A87FF89CCC1891(iVar2), 64);
								}
								func_267(&(Local_334.f_34[iVar1 /*29*/].f_13));
								iVar1++;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	Local_334.f_2935 = (Local_334.f_33 + iVar1);
}

void func_267(var uParam0)
{
	unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
	unk_0x0FFE3C1DBBA72236(unk_0xBBDA792448DB5A89(2));
	unk_0x0FFE3C1DBBA72236(unk_0xBBDA792448DB5A89(iLocal_98));
	unk_0x0FFE3C1DBBA72236(0f);
	unk_0x709662CF2BD061A4("STRING");
	unk_0xDA35BDB37E728640(uParam0);
	unk_0x1E77BE8F4283FA05();
	func_72("CELL_MP_999");
	func_72("CELL_MP_999");
	unk_0xE73340DA551C95E1();
	iLocal_98++;
	iLocal_97++;
}

