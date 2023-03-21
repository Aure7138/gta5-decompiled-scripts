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
	unk_0x330AFE43E1483B3F();
	unk_0xEB79FECD9022AAF0(&Global_2313, 17);
	unk_0x21E7933CCC7B3724(&Global_2314, 18);
	unk_0x21E7933CCC7B3724(&Global_2314, 20);
	uLocal_306 = Global_101700.f_27009[12 /*29*/].f_1;
	uLocal_307 = Global_101700.f_27009[2 /*29*/].f_1;
	uLocal_308 = Global_101700.f_27009[0 /*29*/].f_1;
	iLocal_107 = unk_0x3DF2C10FD29336A3();
	if (Global_69702)
	{
		func_267();
	}
	else
	{
		func_257();
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
	iLocal_134 = unk_0x94E3E074F38DF86C();
	Global_101700.f_27009[147 /*29*/].f_1 = 1320;
	Global_101700.f_27009[74 /*29*/].f_1 = 180;
	Global_101700.f_27009[75 /*29*/].f_1 = 190;
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x48B8265059381CD0(Global_2314, 18))
		{
			func_256();
			if (Global_14443.f_1 > 3)
			{
				Global_14443.f_1 = 8;
			}
			unk_0x21E7933CCC7B3724(&Global_2314, 18);
			func_255();
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
					if (unk_0x48B8265059381CD0(Global_2313, 16))
					{
						func_169();
					}
					else
					{
						func_166();
						if (unk_0x48B8265059381CD0(Global_2314, 0))
						{
							iLocal_135 = unk_0x94E3E074F38DF86C();
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
					if (!unk_0x48B8265059381CD0(Global_2313, 9))
					{
						if (func_145(2, Global_14415, 0))
						{
							if (unk_0x48B8265059381CD0(Global_2314, 0))
							{
							}
							else if (Global_14386 == 0)
							{
								if (!unk_0x48B8265059381CD0(Global_2314, 19))
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
										unk_0xEB79FECD9022AAF0(&Global_2313, 17);
										func_139(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
									}
									else
									{
										func_139(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
										func_139(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
										unk_0xEB79FECD9022AAF0(&Global_2313, 17);
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
								if (unk_0x6A7B0D91FD88D9EE(&(Global_101700.f_27009[Global_1628 /*29*/].f_3), &(Global_2151[iLocal_332 /*16*/])))
								{
									if (!unk_0x6A7B0D91FD88D9EE(&(Global_2151[iLocal_332 /*16*/].f_8), "CELL_SFUN_NULL"))
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
								unk_0xEAC9A8A194DF8F91(Global_14424, "GET_CURRENT_SELECTION");
								uLocal_102 = unk_0x2B5EF283DBE89739();
								while (!unk_0x78FB53FF5C2D4903(uLocal_102))
								{
									unk_0x4EDE34FBADD967A6(0);
								}
								iLocal_103 = unk_0x38CC180A8259BCD8(uLocal_102);
								func_120();
							}
						}
						func_166();
						if (bLocal_330 == 1)
						{
							if (!Global_101700.f_17062.f_396)
							{
								if (!func_116(Global_14443, Global_1628))
								{
									Global_101700.f_17062.f_396 = 1;
								}
							}
						}
						if (func_116(Global_14443, Global_1628))
						{
							if (!Global_101700.f_17062.f_397)
							{
								if (bLocal_329 == 1)
								{
									if (func_115(Global_87671))
									{
										switch (func_113("AM_H_BBUDDY"))
										{
											case 2:
												func_111("AM_H_BBUDDY", 2, 500, 10000, 10000, 7, 0, 0, 0);
												break;
											
											case 1:
												Global_101700.f_17062.f_397 = 1;
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
												Global_101700.f_17062.f_397 = 1;
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
						if (Global_69702)
						{
							func_267();
						}
						else
						{
							func_257();
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
					func_255();
					break;
				
				default:
					break;
			}
			if (!Global_14443.f_1 == 8)
			{
				if ((Global_2921 - Global_2920) > Global_2922)
				{
					if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
					{
						if (unk_0x94A5DEE82C898FDF(unk_0xBE369BE1BC57A796()))
						{
							if (func_145(2, Global_14411, 0))
							{
								if (unk_0x48B8265059381CD0(Global_2314, 0))
								{
									func_75();
								}
								else
								{
									func_75();
									if (!Global_14443.f_1 == 10)
									{
										func_255();
									}
									else if (Global_1628 == 132)
									{
										if (Global_2499540.f_1 || unk_0x48B8265059381CD0(Global_2314, 20))
										{
											Global_14443.f_1 = 7;
											func_142(Global_14424, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
											if (unk_0x48B8265059381CD0(Global_2314, 0))
											{
												func_140(Global_14424, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
											}
											else
											{
												func_140(Global_14424, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
											}
											unk_0x2EB37CDED0E516F3(iLocal_107);
											iLocal_130 = 0;
										}
									}
									else
									{
										func_256();
										Global_14443.f_1 = 7;
										func_2();
										func_142(Global_14424, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
										if (unk_0x48B8265059381CD0(Global_2314, 0))
										{
											func_140(Global_14424, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
										}
										else
										{
											func_140(Global_14424, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
										}
										unk_0x2EB37CDED0E516F3(iLocal_107);
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
			func_255();
		}
		if (func_1())
		{
			func_255();
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
		if (unk_0x48B8265059381CD0(Global_2313, 9))
		{
			unk_0x4EDE34FBADD967A6(750);
		}
		if (Global_14443.f_1 > 6)
		{
			func_142(Global_14424, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
			if (unk_0x48B8265059381CD0(Global_2314, 0))
			{
				func_140(Global_14424, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
			}
			else
			{
				func_140(Global_14424, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
			}
			Global_2316 = 99;
			if (unk_0x48B8265059381CD0(Global_2313, 9))
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
				unk_0x21E7933CCC7B3724(&Global_2313, 17);
			}
			else if (unk_0x48B8265059381CD0(Global_2314, 0))
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
					unk_0xEB79FECD9022AAF0(&Global_2313, 17);
				}
				else
				{
					func_139(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0xEB79FECD9022AAF0(&Global_2313, 17);
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
				unk_0xEB79FECD9022AAF0(&Global_2313, 17);
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
				if (Global_1573336 == 0)
				{
					Global_1573336 = 1;
				}
				if (unk_0x45028EC213071A32("LOWCAAU"))
				{
					unk_0xCCF06EFB1D1BBFE7("LOWCAAU", 15);
					while (!unk_0x657558590DD37F85(15))
					{
						unk_0x4EDE34FBADD967A6(0);
					}
				}
				StringCopy(&cLocal_137, "LOWCA_CALL10_1", 16);
			}
			else
			{
				if (unk_0x45028EC213071A32(&Global_16768))
				{
					unk_0xA73AE78D2491E6E1(&Global_16768, 1);
					while (!unk_0x657558590DD37F85(1))
					{
						unk_0x4EDE34FBADD967A6(0);
					}
				}
				cLocal_137 = { Global_117[Global_1628 /*10*/] };
				StringConCat(&cLocal_137, "_1", 16);
			}
			if (unk_0x63A528817609801B(&cLocal_137) || iLocal_309 == 1)
			{
				iLocal_131 = Global_16765;
				if (func_74(129))
				{
					iLocal_131 = Global_88252;
				}
			}
			else
			{
				iLocal_131 = Global_16764;
			}
			if ((iLocal_309 == 1 && unk_0x6A7B0D91FD88D9EE(&cLocal_310, "CELLPHONE_CHEAT")) && Global_69702 == 0)
			{
				if ((unk_0x6A7B0D91FD88D9EE(&Local_314, "CHEAT_SEAPLANE") || unk_0x6A7B0D91FD88D9EE(&Local_314, "CHEAT_DUELC")) || unk_0x6A7B0D91FD88D9EE(&Local_314, "CHEAT_BUBBLE"))
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
					iLocal_132 = unk_0x94E3E074F38DF86C();
					unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
					unk_0xDF18CF55301CEB8B(4);
					unk_0xDF18CF55301CEB8B(0);
					unk_0xDF18CF55301CEB8B(3);
					unk_0xDCEB60B79ECB219E("STRING");
					unk_0xBB17A6086E49F98F(&cLocal_112, -1);
					unk_0x1798EBF9408190D3();
					func_72("CELL_300");
					if (unk_0x6A7B0D91FD88D9EE(&Local_314, "CHEAT_MONOC"))
					{
						func_72("CELL_MONOSIGNAL");
					}
					else if (unk_0x6A7B0D91FD88D9EE(&Local_314, "CHEAT_DIRECTOR"))
					{
						func_72("CELL_DRCT");
					}
					else
					{
						func_72("CELL_CHEAT");
					}
					func_72("CELL_195");
					unk_0x44983883E630A945();
					func_142(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
					iLocal_130 = 1;
				}
				else
				{
					iLocal_130 = 2;
					iLocal_132 = unk_0x94E3E074F38DF86C();
				}
			}
			else
			{
				iLocal_130 = 2;
				iLocal_132 = unk_0x94E3E074F38DF86C();
			}
			break;
		
		case 1:
			iLocal_133 = unk_0x94E3E074F38DF86C();
			if ((iLocal_133 - iLocal_132) > 1500)
			{
				iLocal_130 = 3;
			}
			break;
		
		case 2:
			iLocal_133 = unk_0x94E3E074F38DF86C();
			if (iLocal_131 != Global_16764)
			{
				if (unk_0x7DFE463FA760D738(iLocal_107))
				{
					if (Global_2499540.f_37 == 0)
					{
						if (Global_14386)
						{
							unk_0x4988C48537D1AE4F(iLocal_107, "Dial_and_Remote_Ring", &Global_14432, 1);
						}
						else if ((iLocal_133 - iLocal_132) > 1700)
						{
							unk_0x4988C48537D1AE4F(iLocal_107, "Remote_Ring", &Global_14432, 1);
						}
					}
				}
			}
			else if ((func_74(130) || func_74(132)) || func_74(128))
			{
				if (unk_0x7DFE463FA760D738(iLocal_107))
				{
					if (Global_2499540.f_37 == 0)
					{
						if (Global_14386)
						{
							unk_0x4988C48537D1AE4F(iLocal_107, "Dial_and_Remote_Ring", &Global_14432, 1);
						}
						else if ((iLocal_133 - iLocal_132) > 1700)
						{
							unk_0x4988C48537D1AE4F(iLocal_107, "Remote_Ring", &Global_14432, 1);
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
						if (!unk_0x48B8265059381CD0(Global_2314, 20))
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
						unk_0x2EB37CDED0E516F3(iLocal_107);
						iLocal_121 = 0;
						unk_0x5AE11BC36633DE4E(0);
						if (Global_101700.f_27009[Global_1628 /*29*/].f_24[Global_14443] == 0)
						{
							if (Global_1628 == 132)
							{
								unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
								unk_0xDF18CF55301CEB8B(4);
								unk_0xDF18CF55301CEB8B(0);
								unk_0xDF18CF55301CEB8B(2);
								unk_0xDCEB60B79ECB219E("CELL_CONDFON");
								unk_0xBAB00B98D1E61BEE(&Global_15760);
								unk_0x1798EBF9408190D3();
								func_72("CELL_300");
								func_72("CELL_220");
								func_72("CELL_219");
								unk_0x44983883E630A945();
							}
							else
							{
								func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(5), -1f, -1f, &(Global_117[Global_1628 /*10*/].f_4), "CELL_300", "CELL_220", "CELL_195", 0);
							}
						}
						else
						{
							func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(5), -1f, -1f, &(Global_101700.f_27009[Global_1628 /*29*/].f_3), &(Global_101700.f_27009[Global_1628 /*29*/].f_7), "CELL_220", &(Global_101700.f_27009[Global_1628 /*29*/].f_3), 0);
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
				if (unk_0x6A7B0D91FD88D9EE(&cLocal_310, "CELLPHONE_CHEAT") && Global_69702 == 0)
				{
					if (unk_0x6A7B0D91FD88D9EE(&Local_314, "CHEAT_MONOC"))
					{
						if (Global_3117 == 0)
						{
							Global_3117 = 1;
							Global_101700.f_13010[0 /*20*/].f_6 = 5;
							Global_101700.f_13010[2 /*20*/].f_6 = 5;
							Global_101700.f_13010[1 /*20*/].f_6 = 5;
							if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
							{
								if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
								{
									if (!unk_0x3C04DDC5730997E5(4, unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), 40f))
									{
										unk_0x3F46E145DB7AB5E4(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) + Vector(2f, 0f, 0f), 4, 0.1f, 1, 0, 1065353216, 0);
									}
								}
							}
						}
						else
						{
							Global_3117 = 0;
						}
					}
					if (unk_0x6A7B0D91FD88D9EE(&Local_314, "CHEAT_SUPJUM"))
					{
						func_71(0, 0);
					}
					if (unk_0x6A7B0D91FD88D9EE(&Local_314, "CHEAT_HEALA"))
					{
						func_71(6, 0);
					}
					if (unk_0x6A7B0D91FD88D9EE(&Local_314, "CHEAT_SLIDEYC"))
					{
						func_71(1, 0);
					}
					if (unk_0x6A7B0D91FD88D9EE(&Local_314, "CHEAT_FASTR"))
					{
						func_71(2, 0);
					}
					if (unk_0x6A7B0D91FD88D9EE(&Local_314, "CHEAT_WANTDN"))
					{
						func_71(9, 0);
					}
					if (unk_0x6A7B0D91FD88D9EE(&Local_314, "CHEAT_WANTUP"))
					{
						func_71(8, 0);
					}
					if (unk_0x6A7B0D91FD88D9EE(&Local_314, "CHEAT_WEATHER"))
					{
						func_71(5, 0);
					}
					if (unk_0x6A7B0D91FD88D9EE(&Local_314, "CHEAT_FASTS"))
					{
						func_71(3, 0);
					}
					if (unk_0x6A7B0D91FD88D9EE(&Local_314, "CHEAT_POWER"))
					{
						func_71(7, 0);
					}
					if (unk_0x6A7B0D91FD88D9EE(&Local_314, "CHEAT_CHUTE"))
					{
						func_71(10, 0);
					}
					if (unk_0x6A7B0D91FD88D9EE(&Local_314, "CHEAT_BANG"))
					{
						func_71(11, 0);
					}
					if (unk_0x6A7B0D91FD88D9EE(&Local_314, "CHEAT_FLAMB"))
					{
						func_71(12, 0);
					}
					if (unk_0x6A7B0D91FD88D9EE(&Local_314, "CHEAT_EXPMEL"))
					{
						func_71(13, 0);
					}
					if (unk_0x6A7B0D91FD88D9EE(&Local_314, "CHEAT_ZEROG"))
					{
						func_71(14, 0);
					}
					if (unk_0x6A7B0D91FD88D9EE(&Local_314, "CHEAT_INVINC"))
					{
						func_71(15, 0);
					}
					if (unk_0x6A7B0D91FD88D9EE(&Local_314, "CHEAT_SLOWMO"))
					{
						func_71(16, 0);
					}
					if (unk_0x6A7B0D91FD88D9EE(&Local_314, "CHEAT_SKYFA"))
					{
						func_71(17, 0);
					}
					if (unk_0x6A7B0D91FD88D9EE(&Local_314, "CHEAT_DRUNK"))
					{
						func_71(18, 0);
					}
					if (unk_0x6A7B0D91FD88D9EE(&Local_314, "CHEAT_DEADEYE"))
					{
						func_71(19, 0);
					}
					if (unk_0x6A7B0D91FD88D9EE(&Local_314, "CHEAT_WEAPONS"))
					{
						func_71(4, 0);
					}
					if (unk_0x6A7B0D91FD88D9EE(&Local_314, "CHEAT_BUZZARD"))
					{
						func_71(20, joaat("buzzard"));
					}
					if (unk_0x6A7B0D91FD88D9EE(&Local_314, "CHEAT_COMET2"))
					{
						func_71(20, joaat("comet2"));
					}
					if (unk_0x6A7B0D91FD88D9EE(&Local_314, "CHEAT_BMX"))
					{
						func_71(20, joaat("bmx"));
					}
					if (unk_0x6A7B0D91FD88D9EE(&Local_314, "CHEAT_CADDY"))
					{
						func_71(20, joaat("caddy"));
					}
					if (unk_0x6A7B0D91FD88D9EE(&Local_314, "CHEAT_DUSTER"))
					{
						func_71(20, joaat("duster"));
					}
					if (unk_0x6A7B0D91FD88D9EE(&Local_314, "CHEAT_PCJ"))
					{
						func_71(20, joaat("pcj"));
					}
					if (unk_0x6A7B0D91FD88D9EE(&Local_314, "CHEAT_RAPIDGT"))
					{
						func_71(20, joaat("rapidgt"));
					}
					if (unk_0x6A7B0D91FD88D9EE(&Local_314, "CHEAT_STRETCH"))
					{
						func_71(20, joaat("stretch"));
					}
					if (unk_0x6A7B0D91FD88D9EE(&Local_314, "CHEAT_STUNT"))
					{
						func_71(20, joaat("stunt"));
					}
					if (unk_0x6A7B0D91FD88D9EE(&Local_314, "CHEAT_TRASH"))
					{
						func_71(20, joaat("trash"));
					}
					if (unk_0x6A7B0D91FD88D9EE(&Local_314, "CHEAT_SANCHEZ"))
					{
						func_71(20, joaat("sanchez"));
					}
					if (func_73())
					{
						if (unk_0x6A7B0D91FD88D9EE(&Local_314, "CHEAT_SEAPLANE"))
						{
							func_71(20, joaat("dodo"));
						}
						if (unk_0x6A7B0D91FD88D9EE(&Local_314, "CHEAT_DUELC"))
						{
							func_71(20, joaat("dukes2"));
						}
						if (unk_0x6A7B0D91FD88D9EE(&Local_314, "CHEAT_BUBBLE"))
						{
							func_71(20, joaat("submersible2"));
						}
					}
					if (unk_0x6A7B0D91FD88D9EE(&Local_314, "CHEAT_DIRECTOR"))
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
				else if (unk_0x6A7B0D91FD88D9EE(&cLocal_310, "CELLPHONE_CHEAT"))
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
						iVar7 = unk_0x80BC37C67CB292E5();
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
						if (Global_69702)
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
						iLocal_333 = unk_0x0E29C61F26D96FDB(0, 100);
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
						iLocal_333 = unk_0x0E29C61F26D96FDB(0, 100);
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
						iLocal_333 = unk_0x0E29C61F26D96FDB(0, 100);
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
				unk_0xEB79FECD9022AAF0(&Global_2314, 31);
			}
			break;
		
		case 4:
			if (unk_0x7DFE463FA760D738(iLocal_107))
			{
				unk_0x4988C48537D1AE4F(iLocal_107, "Remote_Engaged", &Global_14432, 1);
			}
			if (unk_0xC9D9444186B5A374() > 1500)
			{
				if (iLocal_121 == 0)
				{
					if (Global_14443 == 2)
					{
						if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
						{
							func_4(unk_0x17B5CC8A8615737D(), "PHONE_CALL_NOT_CONNECTED", 24);
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
	unk_0xE4C6605BC74297B4(uParam0, sParam1, func_5(iParam2), 1);
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
	return unk_0x48B8265059381CD0(Global_101700.f_17533[iParam0 /*6*/], 3);
}

int func_7(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101700.f_8044.f_99.f_58[iParam0];
}

int func_8(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101700.f_8044.f_330[iParam0 /*6*/];
}

void func_9(var uParam0, int iParam1, char* sParam2, char[4] cParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	if (Global_69702 || func_27())
	{
		if (Global_1628 == 81)
		{
			if (Global_1573336 == 0)
			{
				Global_1573336 = 1;
			}
			func_10(uParam0, iParam1, sParam2, cParam3, iParam4, iParam5, iParam6, iParam7, bParam8);
		}
		else if (Global_1573336 == 1)
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
					unk_0x660E8E7836E95077(0);
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
		if (unk_0x55C74612BE548D78())
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
			unk_0x21E7933CCC7B3724(&Global_2313, 20);
			unk_0x21E7933CCC7B3724(&Global_2314, 17);
			unk_0x21E7933CCC7B3724(&Global_2315, 0);
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
			if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
			{
				if (unk_0x658CF746EFCB633E(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (func_15())
				{
					return 0;
				}
				if (unk_0x9D317EC24D9CDD2F(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0xC3B1F1C9A58948C2(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0xBA11591586E3ABFF(unk_0x17B5CC8A8615737D(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69702)
				{
					if (unk_0xA77EE6C138A588EB(unk_0x17B5CC8A8615737D()))
					{
						return 0;
					}
					if (unk_0xA4FEB0448027296A(unk_0xBE369BE1BC57A796()))
					{
						return 0;
					}
					if (unk_0x95E290AF7BCBF364(unk_0x17B5CC8A8615737D()))
					{
						return 0;
					}
					if (unk_0xDB3C032119056A8B(unk_0xBE369BE1BC57A796()))
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
				if (unk_0x48B8265059381CD0(Global_2313, 9))
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
	unk_0x660E8E7836E95077(0);
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
	unk_0x21E7933CCC7B3724(&Global_2314, 16);
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
	
	if (Global_69702)
	{
		iVar0 = 0;
		unk_0x5CD8291F2C5E0AD1(unk_0x17B5CC8A8615737D(), &iVar1, 1);
		if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5053725CE851B850() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		if (unk_0x780A193B53AF21CF(unk_0x17B5CC8A8615737D(), 78, 1))
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
		if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
		{
			if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[2 /*29*/])
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
		if (Global_69702)
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
	return Global_101700.f_2095.f_539.f_3549;
}

void func_18()
{
	int iVar0;
	
	if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
	{
		if (func_21(Global_101700.f_2095.f_539.f_3549) != unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()))
		{
			iVar0 = func_20(unk_0x17B5CC8A8615737D());
			if (func_19(iVar0) && (!func_22(14) || Global_100652))
			{
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_19(Global_101700.f_2095.f_539.f_3549))
				{
					Global_101700.f_2095.f_539.f_3550 = Global_101700.f_2095.f_539.f_3549;
				}
				Global_101700.f_2095.f_539.f_3551 = iVar0;
				Global_101700.f_2095.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101700.f_2095.f_539.f_3549 != 145)
			{
				Global_101700.f_2095.f_539.f_3551 = Global_101700.f_2095.f_539.f_3549;
			}
			return;
		}
	}
	Global_101700.f_2095.f_539.f_3549 = 145;
}

bool func_19(int iParam0)
{
	return iParam0 < 3;
}

int func_20(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x23E9113C762466ED(uParam0))
	{
		iVar1 = unk_0x0324EEB10F81965F(uParam0);
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
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_22(int iParam0)
{
	return Global_35781 == iParam0;
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
				return Global_1353070.f_203[iParam1];
			}
			break;
	}
	return unk_0x48B8265059381CD0(Global_1353070.f_1015, iParam0);
}

void func_25()
{
	unk_0x5FB0B609B3A49840();
	Global_16756 = 0;
	if ((unk_0x3ED8A07C6FA41E1B() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x660E8E7836E95077(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x55C74612BE548D78())
	{
		unk_0x660E8E7836E95077(1);
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
	return Global_1315210;
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
	if (!Global_69702)
	{
		if (!unk_0xCA41A00932714525(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xFB616ABA635A95B3(iParam2, 0);
			}
			else
			{
				unk_0xFB616ABA635A95B3(iParam2, 1);
			}
		}
		if (!unk_0xCA41A00932714525(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x8E601051A3FDE8ED(iParam2, 0);
			}
			else
			{
				unk_0x8E601051A3FDE8ED(iParam2, 1);
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
		unk_0xEB79FECD9022AAF0(&Global_2314, 16);
	}
	if (unk_0x3ED8A07C6FA41E1B())
	{
		unk_0x660E8E7836E95077(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xEB79FECD9022AAF0(&Global_2313, 30);
	}
	else
	{
		unk_0x21E7933CCC7B3724(&Global_2313, 30);
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
				unk_0x4EA69F96033BA4FB(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0xBB4FC17174B4A105(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0xBB4FC17174B4A105(Global_14380);
		}
		else
		{
			unk_0xBB4FC17174B4A105(Global_14371);
		}
	}
}

int func_32(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x48B8265059381CD0(Global_2313, 14))
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
	if (unk_0x82F1A060D8F4583B(joaat("cellphone_flashhand")) > 0)
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
	
	unk_0xD278B72A700DC2DC(1);
	unk_0x28EAA5C7C54BD253(2, 201);
	unk_0x28EAA5C7C54BD253(2, 202);
	fVar0 = 0f;
	while ((!unk_0x4B972043966C2EB8(2, 201) && !unk_0x4B972043966C2EB8(2, 202)) || fVar0 < 1f)
	{
		unk_0xDC38CC1E35B6A5D7("VEUI_HDR_ALERT", "VE_DIR_MODE_SURE", 18, 0, 0, -1, 0, 0, 1);
		unk_0x4EDE34FBADD967A6(0);
		fVar0 = (fVar0 + unk_0xE9F97E1BC0CACE24());
	}
	unk_0xD278B72A700DC2DC(0);
	if (unk_0x4B972043966C2EB8(2, 201))
	{
		unk_0x50FD1894558DE186(0);
		Global_100647 = 1;
	}
}

void func_34(int iParam0)
{
	float fVar0;
	char* sVar1;
	
	unk_0xD278B72A700DC2DC(1);
	unk_0x28EAA5C7C54BD253(2, 201);
	fVar0 = 0f;
	while (!unk_0x4B972043966C2EB8(2, 201) || fVar0 < 1f)
	{
		sVar1 = func_35(iParam0, 119);
		unk_0x7B1776B3B53F8D74("FBR_GENERIC", 16384, 0, 0, -1, "FBR_DIR_MODE", sVar1, 1);
		unk_0x4EDE34FBADD967A6(0);
		fVar0 = (fVar0 + unk_0xE9F97E1BC0CACE24());
	}
	unk_0xD278B72A700DC2DC(0);
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
	if (unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		return 13;
	}
	if (bParam1)
	{
		if (unk_0x82F1A060D8F4583B(unk_0xBDF22BDA553CBEE4()) > 1)
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
	if (Global_88744)
	{
		return 3;
	}
	if (Global_25443)
	{
		return 8;
	}
	if (Global_25338)
	{
		return 8;
	}
	if (Global_2621550)
	{
		if (unk_0x82F1A060D8F4583B(-1516147206) > 0)
		{
			return 3;
		}
	}
	else if (Global_2621549)
	{
		if (unk_0x82F1A060D8F4583B(2006115718) > 0)
		{
			return 3;
		}
	}
	else if (unk_0x82F1A060D8F4583B(joaat("mission_stat_watcher")) > 0)
	{
		return 3;
	}
	if (unk_0x82F1A060D8F4583B(joaat("finale_choice")) > 0)
	{
		return 3;
	}
	if (unk_0x82F1A060D8F4583B(joaat("creator")) > 0)
	{
		return 3;
	}
	if (unk_0x82F1A060D8F4583B(joaat("respawn_controller")) > 0)
	{
		return 13;
	}
	if (func_66(bParam1))
	{
		return 3;
	}
	if (unk_0xA9969D6750AB48B7(unk_0x17B5CC8A8615737D()) || unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D()))
	{
		return 12;
	}
	if (func_65(Global_100725, 256))
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
	if (func_51() && !Global_100651)
	{
		return 8;
	}
	if (func_55())
	{
		return 5;
	}
	if (unk_0xE9E6B5364105A000() || func_50())
	{
		return 4;
	}
	if (func_49())
	{
		return 4;
	}
	if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
	{
		if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
		{
			iVar0 = func_40(60);
			if (iVar0 != 0)
			{
				return iVar0;
			}
			if (unk_0xC3B1F1C9A58948C2(unk_0x17B5CC8A8615737D()) || unk_0xD4337557D3DEFC11(unk_0x17B5CC8A8615737D()) != -1)
			{
				return 11;
			}
			if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1) || Global_100747)
			{
				return 10;
			}
		}
	}
	if (Global_25441)
	{
		return 8;
	}
	if (Global_69700)
	{
		return 4;
	}
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		if (unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796()) > 0 || unk_0x5078D2C096A3D8E4(unk_0xBE369BE1BC57A796(), 1))
		{
			return 6;
		}
		if (unk_0xA4FEB0448027296A(unk_0xBE369BE1BC57A796()))
		{
			return 8;
		}
		if (unk_0x7276DD47CA44085D(unk_0x17B5CC8A8615737D()))
		{
			return 8;
		}
	}
	if (unk_0x63C468D583002D23())
	{
		return 7;
	}
	if (func_39())
	{
		return 8;
	}
	if (Global_25192)
	{
		return 3;
	}
	if (unk_0xAB01297DD4A8577F())
	{
		return 4;
	}
	if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 439.4357f, -997.4747f, 28.9584f, 428.3288f, -997.0398f, 24.8372f, 8f, 0, 1, 0))
	{
		return 9;
	}
	if (unk_0xA77EE6C138A588EB(unk_0x17B5CC8A8615737D()))
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
	if (unk_0x284A003388A8DDB2(unk_0x17B5CC8A8615737D()))
	{
		return 9;
	}
	return 0;
}

int func_37(bool bParam0)
{
	if (unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		return 0;
	}
	if ((((((((((!unk_0x94A5DEE82C898FDF(unk_0xBE369BE1BC57A796()) || !unk_0x3D6EEB2BAADEC759(unk_0xBE369BE1BC57A796())) || unk_0x1B30FA4AAC96F398(unk_0x17B5CC8A8615737D())) || unk_0x018477A7947BC4B4(unk_0x17B5CC8A8615737D(), 0)) || unk_0x658CF746EFCB633E(unk_0x17B5CC8A8615737D())) || unk_0x4FF557C7B233F003(unk_0x17B5CC8A8615737D())) || unk_0x9172DCBCA2E183EC(unk_0x17B5CC8A8615737D())) || unk_0x7276DD47CA44085D(unk_0x17B5CC8A8615737D())) || unk_0x14E01C4EC4170496(unk_0x17B5CC8A8615737D())) || unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D())) || unk_0x5078D2C096A3D8E4(unk_0xBE369BE1BC57A796(), 1))
	{
		return 0;
	}
	if ((((((func_49() || Global_17151.f_4) || func_38()) || unk_0x8B15021863F761E4()) || unk_0xF4F87C6CDA931EF1()) || func_50()) || func_69())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (unk_0xE6235D8850CC396F())
		{
			return 0;
		}
	}
	return 1;
}

int func_38()
{
	if (!unk_0x63C468D583002D23())
	{
		return Global_89302.f_44 == 1;
	}
	return 0;
}

bool func_39()
{
	return Global_53003;
}

int func_40(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0) && unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
	{
		return 5;
	}
	Var0 = { func_48(unk_0xBE369BE1BC57A796()) };
	if (Global_100787[10 /*10*/].f_1)
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
			if (unk_0x3D559A6AF62756C4(Var0, -61.26628f, -1096.505f, 25.52088f, -58.43333f, -1101.147f, 29.24937f, 1.25f, 0, 1))
			{
				return 9;
			}
		}
	}
	if (unk_0xB7A628320EFF8E47(Var0, -740.9346f, 5599.426f, 40.71515f) < 11f)
	{
		if (unk_0x3D559A6AF62756C4(Var0, -746.1299f, 5599.226f, 40.47561f, -737.632f, 5599.364f, 44.1693f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (unk_0xB7A628320EFF8E47(Var0, -740.9346f, 5590.426f, 40.71515f) < 11f)
	{
		if (unk_0x3D559A6AF62756C4(Var0, -746.1299f, 5590.667f, 40.4392f, -737.6585f, 5590.592f, 44.52327f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (unk_0xB7A628320EFF8E47(Var0, 446.3265f, 5566.35f, 780.2151f) < 11f)
	{
		if (unk_0x3D559A6AF62756C4(Var0, 451.1661f, 5566.451f, 780.1703f, 442.5211f, 5566.374f, 783.9819f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (unk_0xB7A628320EFF8E47(Var0, 446.3265f, 5577.35f, 780.2151f) < 11f)
	{
		if (unk_0x3D559A6AF62756C4(Var0, 451.1661f, 5577.867f, 780.1899f, 442.5765f, 5577.579f, 783.9086f, 3.375f, 0, 1))
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
	iVar3 = unk_0xF34287B610CF02CA(unk_0x17B5CC8A8615737D());
	if (iVar3 == 0)
	{
		return 0;
	}
	else if ((iVar3 == Global_100663 || iVar3 == Global_100664) || iVar3 == Global_100665)
	{
		return 9;
	}
	else if (iVar3 == Global_100654)
	{
		return 9;
	}
	else if (iVar3 == Global_100655)
	{
		return 9;
	}
	else if (iVar3 == Global_100658)
	{
		return 9;
	}
	else if (iVar3 == Global_100657)
	{
		return 9;
	}
	else if (iVar3 == Global_100659)
	{
		return 9;
	}
	else if (iVar3 == Global_100660)
	{
		return 9;
	}
	else if (iVar3 == Global_100661)
	{
		return 9;
	}
	else if (iVar3 == Global_100662)
	{
		return 9;
	}
	else if (iVar3 == Global_100666)
	{
		return 9;
	}
	else if (iVar3 == Global_100667)
	{
		return 9;
	}
	else if (iVar3 == Global_100668)
	{
		return 9;
	}
	else if (iVar3 == Global_100669)
	{
		return 9;
	}
	else if (iVar3 == Global_100670)
	{
		return 9;
	}
	else if ((iVar3 == Global_100671 || iVar3 == Global_100672) && func_8(67))
	{
		return 9;
	}
	iVar4 = 0;
	while (iVar4 <= (19 - 1))
	{
		if (iVar3 == Global_100673[iVar4])
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
	func_44(24, &Global_100654);
	func_44(47, &Global_100655);
	func_44(10, &Global_100663);
	func_44(9, &Global_100664);
	func_44(8, &Global_100665);
	func_44(21, &Global_100666);
	func_44(11, &Global_100667);
	func_44(18, &Global_100671);
	func_44(19, &Global_100672);
	Global_100658 = unk_0xCA0D2B42E97CB506(-76.6618f, 6222.191f, 32.2412f, "V_factory1");
	Global_100657 = unk_0xCA0D2B42E97CB506(-98.2637f, 6210.022f, 31.924f, "V_factory2");
	Global_100659 = unk_0xCA0D2B42E97CB506(-115.8956f, 6179.749f, 32.4102f, "V_factory3");
	Global_100660 = unk_0xCA0D2B42E97CB506(-149.8199f, 6144.978f, 31.3353f, "V_factory4");
	Global_100661 = unk_0xCA0D2B42E97CB506(16.3605f, -1100.259f, 28.797f, "v_gun");
	Global_100662 = unk_0xCA0D2B42E97CB506(125.1948f, -1284.13f, 28.2847f, "v_strip3");
	Global_100668 = unk_0xCA0D2B42E97CB506(-545.5717f, 1987.145f, 126.0262f, "cs6_08_mine_int");
	Global_100669 = unk_0xCA0D2B42E97CB506(2330.598f, 2571.935f, 45.6802f, "ch3_01_trlr_int");
	Global_100670 = unk_0xCA0D2B42E97CB506(-54.7f, -1092.7f, 26.4f, "v_carshowroom");
	iVar0 = 0;
	while (iVar0 <= (19 - 1))
	{
		Global_100673[iVar0] = unk_0x1A4C1C534F86E06A(func_42(iVar0));
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
	*uParam1 = unk_0xCA0D2B42E97CB506(Var0, Var0.f_3);
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
			Var5 = { func_46(1, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			Var5 = { func_46(2, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			Var5 = { func_46(3, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			Var5 = { func_46(4, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			Var5 = { func_46(5, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			Var5 = { func_46(6, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			Var5 = { func_46(7, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1049427[34 /*1942*/].f_146.f_1517 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			Var5 = { func_46(35, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			Var5 = { func_46(36, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			Var5 = { func_46(37, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			Var5 = { func_46(38, 0) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			Var5 = { func_46(39, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			Var5 = { func_46(40, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			Var5 = { func_46(41, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			Var5 = { func_46(42, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			Var5 = { func_46(43, 0) };
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
			Var5 = { func_46(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			Var5 = { func_46(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			Var5 = { func_46(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			Var5 = { func_46(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			Var5 = { func_46(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			Var5 = { func_46(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			Var5 = { func_46(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			Var5 = { func_46(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			Var5 = { func_46(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			Var5 = { func_46(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			Var5 = { func_46(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			Var5 = { func_46(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			Var5 = { func_46(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			Var5 = { func_46(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			Var5 = { func_46(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			Var5 = { func_46(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			Var5 = { func_46(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			Var5 = { func_46(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			Var5 = { func_46(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			Var5 = { func_46(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			Var5 = { func_46(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			Var5 = { func_46(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			Var5 = { func_46(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			Var5 = { func_46(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			Var5 = { func_46(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			Var5 = { func_46(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			Var5 = { func_46(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			Var5 = { func_46(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			Var5 = { func_46(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			Var5 = { func_46(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			Var5 = { func_46(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			Var5 = { func_46(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			Var5 = { func_46(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			Var5 = { func_46(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			Var5 = { func_46(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			Var5 = { func_46(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 119:
			Var5 = { func_46(91, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 120:
			Var5 = { func_46(97, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 121:
			Var5 = { func_46(103, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 122:
			Var5 = { func_46(104, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 123:
			Var5 = { func_46(105, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 124:
			Var5 = { func_46(106, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 125:
			Var5 = { func_46(107, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 126:
			Var5 = { func_46(108, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 127:
			Var5 = { func_46(109, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 128:
			Var5 = { func_46(110, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 129:
			Var5 = { func_46(111, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 130:
			Var5 = { func_46(112, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 131:
			Var5 = { func_46(113, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 132:
			Var5 = { func_46(114, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 133:
			Var5 = { func_46(103, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 134:
			Var5 = { func_46(106, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 135:
			Var5 = { func_46(109, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 136:
			Var5 = { func_46(112, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		default:
			break;
	}
	return Var0;
}

struct<6> func_46(int iParam0, bool bParam1)
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
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576.571f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571.254f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568.098f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384.518f, -475.8657f, 56.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384.538f, -475.8829f, 48.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378.994f, -477.2481f, 56.1f };
				Var0.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186.5683f, -576.4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113.886f, -564.3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134.6568f, -635.1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79.0479f, -822.6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70.3086f, -819.5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79.9861f, -818.425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
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
	if (Global_85809[iParam0 /*2*/])
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_82576)
	{
		if (Global_82576[iVar0 /*5*/] != -1)
		{
			if (Global_69971.f_109[Global_82576[iVar0 /*5*/] /*4*/] == iParam0)
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
	return unk_0x57240623C1BC6E88(unk_0xDF7CE83326F434E9(iParam0), 0);
}

bool func_49()
{
	return Global_1315233;
}

int func_50()
{
	if (unk_0x82F1A060D8F4583B(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_51()
{
	return unk_0x94E3E074F38DF86C() <= Global_17290.f_5745 + 100;
}

bool func_52()
{
	return unk_0x48B8265059381CD0(Global_69950, 9);
}

bool func_53()
{
	return unk_0x48B8265059381CD0(Global_69950, 8);
}

int func_54()
{
	if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0) && !unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		if (((((((((((((((unk_0x5132972D2BBC5A62(unk_0x17B5CC8A8615737D(), "misshair_shop@barbers", "player_intro", 3) || unk_0x5132972D2BBC5A62(unk_0x17B5CC8A8615737D(), "misshair_shop@barbers", "player_base", 3)) || unk_0x5132972D2BBC5A62(unk_0x17B5CC8A8615737D(), "misshair_shop@barbers", "player_enterchair", 3)) || unk_0x5132972D2BBC5A62(unk_0x17B5CC8A8615737D(), "misshair_shop@barbers", "player_exitchair", 3)) || unk_0x5132972D2BBC5A62(unk_0x17B5CC8A8615737D(), "misshair_shop@barbers", "player_idle_a", 3)) || unk_0x5132972D2BBC5A62(unk_0x17B5CC8A8615737D(), "misshair_shop@barbers", "player_idle_b", 3)) || unk_0x5132972D2BBC5A62(unk_0x17B5CC8A8615737D(), "misshair_shop@barbers", "player_idle_c", 3)) || unk_0x5132972D2BBC5A62(unk_0x17B5CC8A8615737D(), "misshair_shop@barbers", "player_idle_d", 3)) || unk_0x5132972D2BBC5A62(unk_0x17B5CC8A8615737D(), "misshair_shop@hair_dressers", "player_intro", 3)) || unk_0x5132972D2BBC5A62(unk_0x17B5CC8A8615737D(), "misshair_shop@hair_dressers", "player_base", 3)) || unk_0x5132972D2BBC5A62(unk_0x17B5CC8A8615737D(), "misshair_shop@hair_dressers", "player_enterchair", 3)) || unk_0x5132972D2BBC5A62(unk_0x17B5CC8A8615737D(), "misshair_shop@hair_dressers", "player_exitchair", 3)) || unk_0x5132972D2BBC5A62(unk_0x17B5CC8A8615737D(), "misshair_shop@hair_dressers", "player_idle_a", 3)) || unk_0x5132972D2BBC5A62(unk_0x17B5CC8A8615737D(), "misshair_shop@hair_dressers", "player_idle_b", 3)) || unk_0x5132972D2BBC5A62(unk_0x17B5CC8A8615737D(), "misshair_shop@hair_dressers", "player_idle_c", 3)) || unk_0x5132972D2BBC5A62(unk_0x17B5CC8A8615737D(), "misshair_shop@hair_dressers", "player_idle_d", 3))
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
		return unk_0x48B8265059381CD0(Global_91543.f_1308[iParam0], iParam1);
	}
	else if (unk_0x63C468D583002D23())
	{
		if (func_62() == 0)
		{
			return unk_0x48B8265059381CD0(func_58(func_61(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x48B8265059381CD0(Global_101700.f_668[iParam0], iParam1);
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
	uVar0 = Global_2503826[iParam0 /*3*/][func_59(iParam1)];
	if (unk_0x7FE4F330D3D74809(uVar0, &uVar1, -1))
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
			Global_2503539 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2503539 = 1;
		}
	}
	return iVar0;
}

int func_60()
{
	return Global_1312735;
}

int func_61(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 822;
			break;
		
		case 1:
			return 823;
			break;
		
		case 2:
			return 824;
			break;
		
		case 3:
			return 825;
			break;
		
		case 4:
			return 826;
			break;
		
		case 5:
			return 827;
			break;
		
		case 6:
			return 828;
			break;
		
		case 7:
			return 829;
			break;
		
		case 8:
			return 830;
			break;
		
		case 9:
			return 831;
			break;
		
		case 10:
			return 832;
			break;
		
		case 11:
			return 833;
			break;
		
		case 12:
			return 834;
			break;
		
		case 13:
			return 835;
			break;
		
		case 14:
			return 836;
			break;
		
		case 15:
			return 838;
			break;
		
		case 16:
			return 839;
			break;
		
		case 17:
			return 840;
			break;
		
		case 18:
			return 841;
			break;
		
		case 19:
			return 842;
			break;
		
		case 20:
			return 843;
			break;
		
		case 21:
			return 844;
			break;
		
		case 22:
			return 845;
			break;
		
		case 23:
			return 846;
			break;
		
		case 24:
			return 847;
			break;
		
		case 25:
			return 848;
			break;
		
		case 26:
			return 849;
			break;
		
		case 27:
			return 850;
			break;
		
		case 28:
			return 851;
			break;
		
		case 29:
			return 852;
			break;
		
		case 30:
			return 853;
			break;
		
		case 31:
			return 854;
			break;
		
		case 32:
			return 855;
			break;
		
		case 33:
			return 856;
			break;
		
		case 34:
			return 857;
			break;
		
		case 35:
			return 858;
			break;
		
		case 36:
			return 859;
			break;
		
		case 37:
			return 860;
			break;
		
		case 38:
			return 861;
			break;
		
		case 39:
			return 862;
			break;
		
		case 40:
			return 866;
			break;
		
		case 41:
			return 867;
			break;
		
		case 42:
			return 868;
			break;
		
		case 43:
			return 869;
			break;
		
		case 44:
			return 5847;
			break;
		
		case 45:
			return 3780;
			break;
		
		default:
			break;
	}
	return 6022;
}

int func_62()
{
	return Global_25190;
}

bool func_63()
{
	return Global_91543.f_304 > 0;
}

bool func_64()
{
	return Global_91543.f_303 > 0;
}

bool func_65(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_66(bool bParam0)
{
	if (!bParam0 && unk_0x82F1A060D8F4583B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x48B8265059381CD0(Global_69950, 0);
}

bool func_67()
{
	return Global_91530.f_1;
}

bool func_68()
{
	return Global_69969;
}

int func_69()
{
	if (Global_69962)
	{
		return 1;
	}
	else if (Global_55816 && !Global_55822)
	{
		return 1;
	}
	return 0;
}

int func_70()
{
	if (Global_35781 == 15)
	{
		return 0;
	}
	return 1;
}

void func_71(int iParam0, int iParam1)
{
	unk_0xEB79FECD9022AAF0(&Global_25437, iParam0);
	Global_25438 = iParam1;
}

void func_72(char* sParam0)
{
	unk_0xDCEB60B79ECB219E(sParam0);
	unk_0x1798EBF9408190D3();
}

int func_73()
{
	var uVar0;
	
	if (unk_0x98ECB3AD32B89920())
	{
		if (unk_0xA50BC4F5AE68D0BA())
		{
			if (unk_0x017971300978783B())
			{
				unk_0x7FE4F330D3D74809(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xEB79FECD9022AAF0(&uVar0, 2);
				unk_0xEB79FECD9022AAF0(&uVar0, 4);
				unk_0xEB79FECD9022AAF0(&uVar0, 6);
				unk_0xEB79FECD9022AAF0(&Global_25, 2);
				unk_0xEB79FECD9022AAF0(&Global_25, 4);
				unk_0xEB79FECD9022AAF0(&Global_25, 6);
				unk_0x731753D8494ABECD(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x8B57B9443E19F940())
				{
					uVar0 = unk_0xBE675F7A607B46B0(866);
					unk_0xEB79FECD9022AAF0(&uVar0, 0);
					unk_0x0D1285E5ED89254D(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_139179 == 2)
	{
		return 1;
	}
	else if (Global_139179 == 3)
	{
		return 0;
	}
	if (unk_0x8B57B9443E19F940())
	{
		if (unk_0x48B8265059381CD0(unk_0xBE675F7A607B46B0(866), 0))
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
	if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		unk_0x4988C48537D1AE4F(-1, "Menu_Back", &Global_14432, 1);
	}
}

void func_76()
{
	if (Global_14421 == 0)
	{
		if (func_145(2, Global_14412, 0))
		{
			unk_0x21E7933CCC7B3724(&Global_2314, 0);
			iLocal_118 = 0;
			func_143();
			Global_14421 = 1;
			unk_0xEAC9A8A194DF8F91(Global_14424, "GET_CURRENT_SELECTION");
			uLocal_102 = unk_0x2B5EF283DBE89739();
			while (!unk_0x78FB53FF5C2D4903(uLocal_102))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_106 = unk_0x38CC180A8259BCD8(uLocal_102);
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
	unk_0x21E7933CCC7B3724(&Global_2313, 17);
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
		return Global_87680[iParam0 /*2*/];
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
		return Global_101700.f_27009[iParam0 /*29*/].f_11;
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
	if (Global_35781 == 15)
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
	return func_85(iParam0, Global_35781);
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
		if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
		{
			if (!unk_0xA77EE6C138A588EB(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0x6A67A9A75CEBC97E(unk_0x17B5CC8A8615737D(), 0))
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
	if (Global_101700.f_27009[Global_1628 /*29*/].f_24[Global_14443] == 0)
	{
		func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_1628 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
	}
	else
	{
		func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_101700.f_27009[Global_1628 /*29*/].f_3), &(Global_101700.f_27009[Global_1628 /*29*/].f_7), "CELL_211", &(Global_101700.f_27009[Global_1628 /*29*/].f_3), 0);
	}
	func_91();
	if (Global_69702)
	{
		func_87(1910, 1, -1);
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
	
	iVar0 = Global_2503826[iParam0 /*3*/][func_59(uParam2)];
	if (iVar0 != 0)
	{
		unk_0x731753D8494ABECD(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 782:
			Global_1363219[func_59(uParam2)] = iParam1;
			break;
		
		case 783:
			Global_1363225[func_59(uParam2)] = iParam1;
			break;
		
		case 784:
			Global_1363231[func_59(uParam2)] = iParam1;
			break;
		
		case 785:
			Global_1363237[func_59(uParam2)] = iParam1;
			break;
		
		case 772:
			Global_1363195[func_59(uParam2)] = iParam1;
			break;
		
		case 773:
			Global_1363201[func_59(uParam2)] = iParam1;
			break;
		
		case 774:
			Global_1363207[func_59(uParam2)] = iParam1;
			break;
		
		case 775:
			Global_1363213[func_59(uParam2)] = iParam1;
			break;
		
		case 762:
			Global_1363171[func_59(uParam2)] = iParam1;
			break;
		
		case 763:
			Global_1363177[func_59(uParam2)] = iParam1;
			break;
		
		case 764:
			Global_1363183[func_59(uParam2)] = iParam1;
			break;
		
		case 765:
			Global_1363189[func_59(uParam2)] = iParam1;
			break;
		
		case 752:
			Global_1363243[func_59(uParam2)] = iParam1;
			break;
		
		case 753:
			Global_1363249[func_59(uParam2)] = iParam1;
			break;
		
		case 754:
			Global_1363255[func_59(uParam2)] = iParam1;
			break;
		
		case 755:
			Global_1363261[func_59(uParam2)] = iParam1;
			break;
		
		case 1298:
			Global_1363267[func_59(uParam2)] = iParam1;
			break;
		
		case 634:
			Global_1363273[func_59(uParam2)] = iParam1;
			break;
		
		case 1273:
			Global_1363279[func_59(uParam2)] = iParam1;
			break;
		
		case 1870:
			Global_2524277[0 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 2261:
			Global_2524277[1 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 2911:
			Global_2524277[2 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3040:
			Global_2524277[3 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 5886:
			Global_2524348[func_59(uParam2)] = iParam1;
			break;
		
		case 759:
			Global_1363285[func_59(uParam2)] = iParam1;
			break;
		
		case 760:
			Global_1363291[func_59(uParam2)] = iParam1;
			break;
		
		case 761:
			Global_1363297[func_59(uParam2)] = iParam1;
			break;
		
		case 1231:
			Global_1363303[func_59(uParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2524311[0 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2524311[1 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3037:
			Global_2524311[2 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3038:
			Global_2524311[3 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3039:
			Global_2524311[4 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3618:
			Global_2524351[0 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3619:
			Global_2524351[1 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3620:
			Global_2524351[2 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3621:
			Global_2524351[3 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3622:
			Global_2524351[4 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2524367[0 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2524367[1 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2524367[2 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2524367[3 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2524367[4 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3203:
			Global_2524311[5 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3209:
			Global_2524277[4 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2524383[func_59(uParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2524392[func_59(uParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2524386[func_59(uParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2524395[func_59(uParam2)] = iParam1;
			break;
		
		case 3649:
			Global_2524389[func_59(uParam2)] = iParam1;
			break;
		
		case 3650:
			Global_2524398[func_59(uParam2)] = iParam1;
			break;
		
		case 3671:
			Global_2524401[func_59(uParam2)] = iParam1;
			break;
		
		case 3211:
			Global_2524311[6 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3212:
			Global_2524277[5 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2524311[7 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2524277[6 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3991:
			Global_2524311[8 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3992:
			Global_2524277[7 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3994:
			Global_2524311[9 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3995:
			Global_2524277[8 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3997:
			Global_2524311[10 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3998:
			Global_2524277[9 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 4000:
			Global_2524311[11 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 4001:
			Global_2524277[10 /*3*/][func_59(uParam2)] = iParam1;
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
	iVar0 = Global_2503826[iParam0 /*3*/][func_59(uParam2)];
	if (iVar0 != 0)
	{
		unk_0x731753D8494ABECD(iVar0, iParam1, iParam3);
	}
}

int func_90(int iParam0)
{
	if (Global_1363152)
	{
		switch (iParam0)
		{
			case 782:
			case 783:
			case 784:
			case 785:
			case 772:
			case 773:
			case 774:
			case 775:
			case 762:
			case 763:
			case 764:
			case 765:
			case 752:
			case 753:
			case 754:
			case 755:
			case 1298:
			case 634:
			case 1273:
			case 759:
			case 760:
			case 761:
			case 1231:
			case 1870:
			case 2261:
			case 2911:
			case 3040:
			case 5886:
			case 3035:
			case 3036:
			case 3037:
			case 3038:
			case 3039:
			case 3214:
			case 3216:
			case 3618:
			case 3619:
			case 3620:
			case 3621:
			case 3622:
			case 3623:
			case 3624:
			case 3625:
			case 3626:
			case 3627:
			case 3209:
			case 3203:
			case 3645:
			case 3646:
			case 3647:
			case 3648:
			case 3649:
			case 3650:
			case 3671:
			case 3212:
			case 3211:
			case 3992:
			case 3991:
			case 3995:
			case 3994:
			case 3998:
			case 3997:
			case 4001:
			case 4000:
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
	while (!unk_0xFF84A94166FBB351(Global_14424))
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
				unk_0x21E7933CCC7B3724(&Global_2313, 17);
			}
			else if (Global_69702)
			{
				func_139(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x21E7933CCC7B3724(&Global_2313, 17);
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
				unk_0xEB79FECD9022AAF0(&Global_2313, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_142(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_139(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_139(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x21E7933CCC7B3724(&Global_2313, 17);
			if (unk_0x48B8265059381CD0(Global_2313, 20))
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
				func_142(Global_14424, "SET_THEME", unk_0xBBDA792448DB5A89(Global_101700.f_13010[Global_14443 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15758)
				{
					unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
					unk_0xDF18CF55301CEB8B(4);
					unk_0xDF18CF55301CEB8B(0);
					unk_0xDF18CF55301CEB8B(2);
					unk_0xDCEB60B79ECB219E("CELL_CONDFON");
					unk_0xBAB00B98D1E61BEE(&Global_15760);
					unk_0x1798EBF9408190D3();
					func_72("CELL_300");
					func_72("CELL_217");
					func_72("CELL_217");
					unk_0x44983883E630A945();
				}
				else if (Global_101700.f_27009[Global_1628 /*29*/].f_24[Global_14443] == 0)
				{
					func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_117[Global_1628 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_101700.f_27009[Global_1628 /*29*/].f_3), &(Global_101700.f_27009[Global_1628 /*29*/].f_7), "CELL_217", &(Global_101700.f_27009[Global_1628 /*29*/].f_3), 0);
				}
				func_142(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15745 == 4 || Global_15745 == 3)
			{
				func_142(Global_14424, "SET_THEME", unk_0xBBDA792448DB5A89(Global_101700.f_13010[Global_14443 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_93();
				if (Global_15758)
				{
					unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
					unk_0xDF18CF55301CEB8B(4);
					unk_0xDF18CF55301CEB8B(0);
					unk_0xDF18CF55301CEB8B(2);
					unk_0xDCEB60B79ECB219E("CELL_CONDFON");
					unk_0xBAB00B98D1E61BEE(&Global_15760);
					unk_0x1798EBF9408190D3();
					func_72("CELL_300");
					func_72("CELL_219");
					func_72("CELL_219");
					unk_0x44983883E630A945();
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
					if (Global_101700.f_27009[Global_1628 /*29*/].f_24[Global_14443] == 0)
					{
						func_142(Global_14424, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_1628 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_142(Global_14424, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_101700.f_27009[Global_1628 /*29*/].f_3), &(Global_101700.f_27009[Global_1628 /*29*/].f_7), &cVar0, &(Global_101700.f_27009[Global_1628 /*29*/].f_3), 0);
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
	if (unk_0xFF84A94166FBB351(Global_14424))
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
			else if (unk_0x48B8265059381CD0(Global_2313, 20))
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
			unk_0x21E7933CCC7B3724(&Global_2313, 17);
		}
		else
		{
			func_139(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_139(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x21E7933CCC7B3724(&Global_2313, 17);
			if (unk_0x48B8265059381CD0(Global_2313, 20))
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
	if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		if (Global_14443 == 0)
		{
			switch (Global_101700.f_13010[Global_14443 /*20*/].f_6)
			{
				case 1:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 0);
					break;
				
				case 2:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 1);
					break;
				
				case 3:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 2);
					break;
				
				case 4:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 3);
					break;
				
				case 5:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 4);
					break;
				
				case 6:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 5);
					break;
				
				case 7:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14443 == 1)
		{
			switch (Global_101700.f_13010[Global_14443 /*20*/].f_6)
			{
				case 1:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 6);
					break;
				
				case 2:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 0);
					break;
				
				case 3:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 1);
					break;
				
				case 4:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 2);
					break;
				
				case 5:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 3);
					break;
				
				case 6:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 4);
					break;
				
				case 7:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14443 == 2)
		{
			switch (Global_101700.f_13010[Global_14443 /*20*/].f_6)
			{
				case 1:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 5);
					break;
				
				case 2:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 6);
					break;
				
				case 3:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 1);
					break;
				
				case 4:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 0);
					break;
				
				case 5:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 2);
					break;
				
				case 6:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 3);
					break;
				
				case 7:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14443 == 3)
		{
			switch (Global_2595530)
			{
				case 1:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 0);
					break;
				
				case 2:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 1);
					break;
				
				case 3:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 2);
					break;
				
				case 4:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 3);
					break;
				
				case 5:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 4);
					break;
				
				case 6:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 5);
					break;
				
				case 7:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 6);
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
								if (unk_0x48B8265059381CD0(Global_2314, 3))
								{
									iVar2 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14608 = 0;
								}
								unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
								unk_0xDF18CF55301CEB8B(1);
								unk_0xDF18CF55301CEB8B(iVar0);
								unk_0xDF18CF55301CEB8B(Global_2320[iVar1 /*15*/].f_10);
								unk_0xDF18CF55301CEB8B(0);
								func_72(&(Global_2320[iVar1 /*15*/]));
								unk_0xDF18CF55301CEB8B(iVar2);
								unk_0x44983883E630A945();
							}
							if (Global_2452520)
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
									if (Global_101700.f_13100[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_101700.f_13100[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_101700.f_13100[iVar3 /*104*/].f_99[Global_14443] == 1)
											{
												Global_16813 = (Global_16813 + 1);
											}
										}
									}
									iVar3++;
								}
								func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16813), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69702)
								{
									iVar4 = 0;
									iVar4 = Global_2594052;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_2594053[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_2594053[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_2594053[iVar5 /*104*/].f_99[Global_14443] == 1)
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
											iVar6 = Global_36917;
											break;
										
										case 1:
											iVar6 = Global_36918;
											break;
										
										case 2:
											iVar6 = Global_36919;
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
								unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
								unk_0xDF18CF55301CEB8B(1);
								unk_0xDF18CF55301CEB8B(iVar0);
								unk_0xDF18CF55301CEB8B(Global_2320[iVar1 /*15*/].f_10);
								unk_0xDF18CF55301CEB8B(0);
								func_72(&(Global_2320[iVar1 /*15*/]));
								unk_0xDF18CF55301CEB8B(Global_2319);
								unk_0x44983883E630A945();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x48B8265059381CD0(Global_2314, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
								unk_0xDF18CF55301CEB8B(1);
								unk_0xDF18CF55301CEB8B(iVar0);
								unk_0xDF18CF55301CEB8B(Global_2320[iVar1 /*15*/].f_10);
								unk_0xDF18CF55301CEB8B(0);
								func_72(&(Global_2320[iVar1 /*15*/]));
								unk_0xDF18CF55301CEB8B(iVar7);
								unk_0x44983883E630A945();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x48B8265059381CD0(Global_2314, 3))
								{
									iVar8 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14608 = 0;
								}
								unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
								unk_0xDF18CF55301CEB8B(1);
								unk_0xDF18CF55301CEB8B(iVar0);
								unk_0xDF18CF55301CEB8B(Global_2320[iVar1 /*15*/].f_10);
								unk_0xDF18CF55301CEB8B(0);
								func_72(&(Global_2320[iVar1 /*15*/]));
								unk_0xDF18CF55301CEB8B(iVar8);
								unk_0x44983883E630A945();
							}
							else if (iVar1 == 8)
							{
								unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
								unk_0xDF18CF55301CEB8B(1);
								unk_0xDF18CF55301CEB8B(iVar0);
								unk_0xDF18CF55301CEB8B(Global_2320[iVar1 /*15*/].f_10);
								unk_0xDF18CF55301CEB8B(0);
								func_72(&(Global_2320[iVar1 /*15*/]));
								unk_0xDF18CF55301CEB8B(42);
								unk_0x44983883E630A945();
							}
							else if ((iVar1 == 23 && unk_0x6A7B0D91FD88D9EE(&(Global_2320[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x48B8265059381CD0(Global_2314, 6))
							{
								unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
								unk_0xDF18CF55301CEB8B(1);
								unk_0xDF18CF55301CEB8B(iVar0);
								unk_0xDF18CF55301CEB8B(Global_2320[iVar1 /*15*/].f_10);
								unk_0xDF18CF55301CEB8B(0);
								func_72(&(Global_2320[iVar1 /*15*/]));
								unk_0xDF18CF55301CEB8B(42);
								unk_0x44983883E630A945();
							}
							else if (Global_2320[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1618161.f_1;
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
	unk_0x21E7933CCC7B3724(&Global_2313, 25);
	unk_0xEB79FECD9022AAF0(&Global_2314, 11);
}

int func_96()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
		{
			if (Global_14386 == 0)
			{
				if (Global_1628 != 128)
				{
					if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
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
		if (unk_0x6A67A9A75CEBC97E(unk_0x17B5CC8A8615737D(), 0))
		{
			return 0;
		}
		if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
		{
			if (!unk_0xC448AAB174DBB233())
			{
				if (unk_0xA77EE6C138A588EB(unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x5FD7D852A3EAF133(unk_0x17B5CC8A8615737D()) || unk_0x3AD4FC6271B0E925(unk_0x17B5CC8A8615737D())) || unk_0xA4FEB0448027296A(unk_0xBE369BE1BC57A796())) || unk_0x73D75E5206725CCD(unk_0x17B5CC8A8615737D()))
		{
			return 0;
		}
		if (Global_100748)
		{
			return 0;
		}
	}
	if (Global_69702)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0xB2CED41F4337ED8B();
	iVar1 = unk_0xB866C0EABE959340(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0xC448AAB174DBB233()))
	{
		iVar2 = 1;
		if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
		{
			if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
			{
				uVar3 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
				if ((((((((unk_0xD28959FE5BC2D14D(unk_0x0324EEB10F81965F(uVar3)) || unk_0x4A0388DBE0CE87AA(unk_0x0324EEB10F81965F(uVar3))) || unk_0xBA3A0947FBDD9ADD(unk_0x0324EEB10F81965F(uVar3))) || unk_0x0324EEB10F81965F(uVar3) == joaat("seashark")) || unk_0x0324EEB10F81965F(uVar3) == joaat("seashark2")) || unk_0x0324EEB10F81965F(uVar3) == joaat("rhino")) || unk_0x0324EEB10F81965F(uVar3) == joaat("submersible")) || unk_0x0324EEB10F81965F(uVar3) == joaat("submersible2")) || unk_0x0324EEB10F81965F(uVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_2595532 || iVar2 == 1)
	{
		if (unk_0x82F1A060D8F4583B(joaat("apptrackify")) > 0 || Global_101700.f_13010.f_89)
		{
			if (unk_0x82F1A060D8F4583B(joaat("michael2")) > 0)
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
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		if (func_98() && unk_0x6A67A9A75CEBC97E(unk_0x17B5CC8A8615737D(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_69702)
	{
		if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()) && iVar1 == 0)
		{
			iVar2 = unk_0xB50239D338267F95(unk_0x17B5CC8A8615737D(), 0);
			if (Global_69702)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || unk_0x697A7F59AC98FE0F(unk_0x17B5CC8A8615737D()))
				{
					iVar0 = 1;
				}
			}
			else if (unk_0x697A7F59AC98FE0F(unk_0x17B5CC8A8615737D()))
			{
				iVar0 = 1;
			}
			if (!Global_14386)
			{
				if (Global_1628 != 128)
				{
					if (iVar0 == 0)
					{
						if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
						{
							if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
							{
							}
							else
							{
								if (Global_69702)
								{
									unk_0x6018E338F7ABCE75(unk_0x17B5CC8A8615737D(), 244, 0);
									unk_0x6018E338F7ABCE75(unk_0x17B5CC8A8615737D(), 243, 0);
									unk_0x6018E338F7ABCE75(unk_0x17B5CC8A8615737D(), 242, 0);
								}
								unk_0xEB79FECD9022AAF0(&Global_2313, 11);
								unk_0xD11C043590A1D7B7(unk_0x17B5CC8A8615737D(), 1, 1);
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
	
	uVar0 = unk_0xB2CED41F4337ED8B();
	iVar1 = unk_0xB866C0EABE959340(uVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_99()
{
	struct<2> Var0;
	
	unk_0x4EA69F96033BA4FB(&Var0);
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
	while (iVar0 < Global_101700.f_6647.f_650)
	{
		if (Global_101700.f_6647.f_199[iVar0 /*15*/].f_6 == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101700.f_6647.f_136)
	{
		if (Global_101700.f_6647[iVar0 /*15*/].f_6 == iParam0)
		{
			if (unk_0x48B8265059381CD0(Global_101700.f_6647[iVar0 /*15*/].f_1, 7))
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
		iVar1 = Global_82576[iVar0 /*5*/];
		if (iVar1 != -1)
		{
			iVar2 = -1;
			iVar2 = Global_69971.f_109[Global_82576[iVar0 /*5*/] /*4*/];
			if (iVar2 != -1)
			{
				if (func_102(Global_82612[iVar2 /*34*/].f_12, iParam0))
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
			return unk_0x48B8265059381CD0(uParam0, iParam1);
		
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
			unk_0x21E7933CCC7B3724(&Global_2314, 0);
			func_143();
			Global_14421 = 1;
			unk_0xEAC9A8A194DF8F91(Global_14424, "GET_CURRENT_SELECTION");
			uLocal_102 = unk_0x2B5EF283DBE89739();
			while (!unk_0x78FB53FF5C2D4903(uLocal_102))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_106 = unk_0x38CC180A8259BCD8(uLocal_102);
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
	
	if (Global_100342 && iParam1)
	{
		if (func_110(sParam0) && !unk_0x70F6041CE3E701CC())
		{
			unk_0x2E2945F5602A744F(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_101700.f_19369.f_145)
	{
		if (unk_0x6A7B0D91FD88D9EE(sParam0, &(Global_101700.f_19369[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_101700.f_19369.f_145 - 2))
			{
				func_109(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_108((Global_101700.f_19369.f_145 - 1));
			Global_101700.f_19369.f_145 = (Global_101700.f_19369.f_145 - 1);
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
		Global_101700.f_19369.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101700.f_19369.f_145)
	{
		if (unk_0x48B8265059381CD0(Global_101700.f_19369[iVar0 /*16*/].f_11, 0))
		{
			if (Global_101700.f_19369[iVar0 /*16*/].f_12 > Global_101700.f_19369.f_146[0])
			{
				Global_101700.f_19369.f_146[0] = Global_101700.f_19369[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x48B8265059381CD0(Global_101700.f_19369[iVar0 /*16*/].f_11, 1))
		{
			if (Global_101700.f_19369[iVar0 /*16*/].f_12 > Global_101700.f_19369.f_146[1])
			{
				Global_101700.f_19369.f_146[1] = Global_101700.f_19369[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x48B8265059381CD0(Global_101700.f_19369[iVar0 /*16*/].f_11, 2))
		{
			if (Global_101700.f_19369[iVar0 /*16*/].f_12 > Global_101700.f_19369.f_146[2])
			{
				Global_101700.f_19369.f_146[2] = Global_101700.f_19369[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_108(int iParam0)
{
	StringCopy(&(Global_101700.f_19369[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_101700.f_19369[iParam0 /*16*/].f_4), "", 16);
	Global_101700.f_19369[iParam0 /*16*/].f_8 = 0;
	Global_101700.f_19369[iParam0 /*16*/].f_9 = 0;
	Global_101700.f_19369[iParam0 /*16*/].f_11 = 0;
	Global_101700.f_19369[iParam0 /*16*/].f_10 = -1;
	Global_101700.f_19369[iParam0 /*16*/].f_12 = 0;
	Global_101700.f_19369[iParam0 /*16*/].f_13 = 0;
	Global_101700.f_19369[iParam0 /*16*/].f_14 = 0;
	Global_101700.f_19369[iParam0 /*16*/].f_15 = 0;
}

void func_109(int iParam0, int iParam1)
{
	Global_101700.f_19369[iParam0 /*16*/] = { Global_101700.f_19369[iParam1 /*16*/] };
	Global_101700.f_19369[iParam0 /*16*/].f_4 = { Global_101700.f_19369[iParam1 /*16*/].f_4 };
	Global_101700.f_19369[iParam0 /*16*/].f_8 = Global_101700.f_19369[iParam1 /*16*/].f_8;
	Global_101700.f_19369[iParam0 /*16*/].f_10 = Global_101700.f_19369[iParam1 /*16*/].f_10;
	Global_101700.f_19369[iParam0 /*16*/].f_9 = Global_101700.f_19369[iParam1 /*16*/].f_9;
	Global_101700.f_19369[iParam0 /*16*/].f_11 = Global_101700.f_19369[iParam1 /*16*/].f_11;
	Global_101700.f_19369[iParam0 /*16*/].f_12 = Global_101700.f_19369[iParam1 /*16*/].f_12;
	Global_101700.f_19369[iParam0 /*16*/].f_13 = Global_101700.f_19369[iParam1 /*16*/].f_13;
	Global_101700.f_19369[iParam0 /*16*/].f_14 = Global_101700.f_19369[iParam1 /*16*/].f_14;
	Global_101700.f_19369[iParam0 /*16*/].f_15 = Global_101700.f_19369[iParam1 /*16*/].f_15;
}

var func_110(var uParam0)
{
	unk_0x1B345BEADF0C82A0(uParam0);
	return unk_0xCF2B4FB18449D099(0);
}

void func_111(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_112(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_112(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x6A7B0D91FD88D9EE(sParam0, ""))
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
	while (iVar0 < Global_101700.f_19369.f_145)
	{
		if (unk_0x6A7B0D91FD88D9EE(&(Global_101700.f_19369[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_101700.f_19369.f_145 < 9)
	{
		StringCopy(&(Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_4), sParam1, 16);
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_8 = (unk_0x94E3E074F38DF86C() + iParam3);
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_9 = iParam5;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_11 = iParam6;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_12 = uParam2;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_13 = iParam7;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_14 = iParam8;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_10 = ((unk_0x94E3E074F38DF86C() + iParam3) + iParam4);
		}
		else
		{
			Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_10 = -1;
		}
		Global_101700.f_19369.f_145++;
		func_107();
	}
}

int func_113(char* sParam0)
{
	if (unk_0x6A7B0D91FD88D9EE(sParam0, &Global_100345))
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
	while (iVar0 < Global_101700.f_19369.f_145)
	{
		if (unk_0x6A7B0D91FD88D9EE(sParam0, &(Global_101700.f_19369[iVar0 /*16*/])))
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
	if ((Global_87671 != -1 && unk_0x48B8265059381CD0(Global_82612[Global_87671 /*34*/].f_15, 15)) && unk_0x48B8265059381CD0(Global_87672, iParam1))
	{
		if (Global_87670 != 5 || func_119() == Global_87671)
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
	return unk_0x48B8265059381CD0(Global_87679, iParam0);
}

int func_119()
{
	return Global_69964;
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
	unk_0x21E7933CCC7B3724(&Global_2313, 17);
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
	func_140(Global_14424, "SET_HEADER", &(Global_101700.f_27009[Global_1628 /*29*/].f_3), 0, 0, 0, 0);
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
	
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		unk_0xD1BB2AD73E7FC3A7(0, 22, 1);
	}
	if (func_145(2, Global_14412, 0))
	{
		func_143();
		Global_14421 = 1;
		unk_0xEAC9A8A194DF8F91(Global_14424, "GET_CURRENT_SELECTION");
		uLocal_102 = unk_0x2B5EF283DBE89739();
		while (!unk_0x78FB53FF5C2D4903(uLocal_102))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		iVar0 = unk_0x38CC180A8259BCD8(uLocal_102);
		iLocal_108 = Global_3104[iVar0];
		uLocal_110[0] = unk_0xC7E52B74A3B4973C(&(Global_3021[iLocal_108 /*5*/]));
		if (unk_0x6A7B0D91FD88D9EE(uLocal_110[0], "*"))
		{
			cLocal_112 = { Global_3087[Global_14443 /*4*/] };
			iLocal_109 = unk_0xF9108830F4935563(&cLocal_112);
		}
		else if (unk_0xF9108830F4935563(&cLocal_112) < 14)
		{
			StringConCat(&cLocal_112, uLocal_110[0], 16);
			iLocal_109++;
		}
		unk_0xEAC9A8A194DF8F91(Global_14424, "SET_HEADER");
		unk_0xDCEB60B79ECB219E("STRING");
		unk_0xBB17A6086E49F98F(&cLocal_112, -1);
		unk_0x1798EBF9408190D3();
		unk_0x44983883E630A945();
	}
	if (func_145(2, 178, 0))
	{
		func_75();
		Global_14421 = 1;
		if (unk_0xF9108830F4935563(&cLocal_112) > 0)
		{
			StringCopy(&cLocal_112, unk_0xCF2B6C8AD32541B9(&cLocal_112, 0, (iLocal_109 - 1)), 16);
			iLocal_109 = (iLocal_109 - 1);
		}
		unk_0xEAC9A8A194DF8F91(Global_14424, "SET_HEADER");
		unk_0xDCEB60B79ECB219E("STRING");
		unk_0xBB17A6086E49F98F(&cLocal_112, -1);
		unk_0x1798EBF9408190D3();
		unk_0x44983883E630A945();
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
				if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
				{
					if (!unk_0xA77EE6C138A588EB(unk_0x17B5CC8A8615737D()))
					{
						if (unk_0x6A67A9A75CEBC97E(unk_0x17B5CC8A8615737D(), 0))
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
					sVar2 = unk_0xC7E52B74A3B4973C(&(Global_117[iVar1 /*10*/].f_4));
					if (unk_0x6A7B0D91FD88D9EE(sVar2, &cLocal_112))
					{
						if ((Global_101700.f_27009[iVar1 /*29*/].f_12[Global_14443] == 1 || Global_101700.f_27009[iVar1 /*29*/].f_12[Global_14443] == 2) || unk_0x6A7B0D91FD88D9EE(sVar2, unk_0xC7E52B74A3B4973C(&(Global_117[130 /*10*/].f_4))))
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
				unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
				unk_0xDF18CF55301CEB8B(4);
				unk_0xDF18CF55301CEB8B(0);
				unk_0xDF18CF55301CEB8B(3);
				unk_0xDCEB60B79ECB219E("STRING");
				unk_0xBB17A6086E49F98F(&cLocal_112, -1);
				unk_0x1798EBF9408190D3();
				func_72("CELL_300");
				func_72("CELL_211");
				func_72("CELL_195");
				unk_0x44983883E630A945();
				func_142(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
				iLocal_309 = 0;
				iVar3 = 0;
				while (iVar3 < 37)
				{
					sVar4 = unk_0xC7E52B74A3B4973C(&(Global_1632[iVar3 /*14*/]));
					if (unk_0x6A7B0D91FD88D9EE(sVar4, &cLocal_112))
					{
						iLocal_309 = 1;
						cLocal_310 = { Global_1632[iVar3 /*14*/].f_4 };
						Local_314 = { Global_1632[iVar3 /*14*/].f_8 };
					}
					iVar3++;
				}
				if (iLocal_309 == 0)
				{
					iLocal_116 = unk_0xF9108830F4935563(&cLocal_112);
					if (iLocal_116 > 6)
					{
						StringCopy(&(uLocal_320[0]), unk_0xCF2B6C8AD32541B9(&cLocal_112, 0, 1), 4);
						StringCopy(&(uLocal_320[1]), unk_0xCF2B6C8AD32541B9(&cLocal_112, 1, 2), 4);
						StringCopy(&(uLocal_320[2]), unk_0xCF2B6C8AD32541B9(&cLocal_112, 2, 3), 4);
						StringCopy(&(uLocal_320[3]), unk_0xCF2B6C8AD32541B9(&cLocal_112, 3, 4), 4);
						StringCopy(&(uLocal_320[4]), unk_0xCF2B6C8AD32541B9(&cLocal_112, 4, 5), 4);
						StringCopy(&(uLocal_320[5]), unk_0xCF2B6C8AD32541B9(&cLocal_112, 5, 6), 4);
						if (((unk_0x6A7B0D91FD88D9EE(&(uLocal_320[0]), "1") && unk_0x6A7B0D91FD88D9EE(&(uLocal_320[1]), "9")) && unk_0x6A7B0D91FD88D9EE(&(uLocal_320[2]), "9")) && unk_0x6A7B0D91FD88D9EE(&(uLocal_320[3]), "9"))
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
									StringCopy(&(uLocal_320[0]), unk_0xCF2B6C8AD32541B9(&cLocal_112, 3, 4), 4);
									StringCopy(&(uLocal_320[1]), unk_0xCF2B6C8AD32541B9(&cLocal_112, 4, 5), 4);
									StringCopy(&(uLocal_320[2]), unk_0xCF2B6C8AD32541B9(&cLocal_112, 5, 6), 4);
									StringCopy(&(uLocal_320[3]), unk_0xCF2B6C8AD32541B9(&cLocal_112, 6, 7), 4);
									StringCopy(&(uLocal_320[4]), unk_0xCF2B6C8AD32541B9(&cLocal_112, 7, 8), 4);
									StringCopy(&(uLocal_320[5]), unk_0xCF2B6C8AD32541B9(&cLocal_112, 8, 9), 4);
									StringCopy(&(uLocal_320[6]), unk_0xCF2B6C8AD32541B9(&cLocal_112, 9, 10), 4);
								}
								else
								{
									StringCopy(&(uLocal_320[0]), unk_0xCF2B6C8AD32541B9(&cLocal_112, 0, 1), 4);
									StringCopy(&(uLocal_320[1]), unk_0xCF2B6C8AD32541B9(&cLocal_112, 1, 2), 4);
									StringCopy(&(uLocal_320[2]), unk_0xCF2B6C8AD32541B9(&cLocal_112, 2, 3), 4);
									StringCopy(&(uLocal_320[3]), unk_0xCF2B6C8AD32541B9(&cLocal_112, 3, 4), 4);
									StringCopy(&(uLocal_320[4]), unk_0xCF2B6C8AD32541B9(&cLocal_112, 4, 5), 4);
									StringCopy(&(uLocal_320[5]), unk_0xCF2B6C8AD32541B9(&cLocal_112, 5, 6), 4);
									StringCopy(&(uLocal_320[6]), unk_0xCF2B6C8AD32541B9(&cLocal_112, 6, 7), 4);
								}
								if ((((unk_0x6A7B0D91FD88D9EE(&(uLocal_320[0]), "5") && unk_0x6A7B0D91FD88D9EE(&(uLocal_320[1]), "5")) && unk_0x6A7B0D91FD88D9EE(&(uLocal_320[2]), "5")) && unk_0x6A7B0D91FD88D9EE(&(uLocal_320[3]), "0")) && unk_0x6A7B0D91FD88D9EE(&(uLocal_320[4]), "1"))
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
				if (Global_101700.f_27009[Global_1628 /*29*/].f_12[Global_14443] == 2 || Global_1628 == 130)
				{
					Global_101700.f_27009[Global_1628 /*29*/].f_24[Global_14443] = 1;
					if (Global_1628 == 130)
					{
						if (!Global_101700.f_27009[130 /*29*/].f_12[0] == 1)
						{
							func_124(130, 4, 1);
							func_124(130, 3, 0);
						}
						if (Global_69702)
						{
							if (!func_123(130, 3))
							{
								func_124(130, 3, 1);
							}
						}
					}
				}
				if (Global_101700.f_27009[Global_1628 /*29*/].f_24[Global_14443] == 0)
				{
					func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_1628 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_101700.f_27009[Global_1628 /*29*/].f_3), &(Global_101700.f_27009[Global_1628 /*29*/].f_7), "CELL_211", &(Global_101700.f_27009[Global_1628 /*29*/].f_3), 0);
				}
			}
			func_91();
		}
	}
}

int func_123(int iParam0, int iParam1)
{
	if (Global_101700.f_27009[iParam0 /*29*/].f_12[iParam1] == 1)
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
			Global_101700.f_27009[iParam0 /*29*/].f_12[0] = 1;
			Global_101700.f_27009[iParam0 /*29*/].f_12[1] = 1;
			Global_101700.f_27009[iParam0 /*29*/].f_12[2] = 1;
			Global_101700.f_27009[iParam0 /*29*/].f_24[0] = 1;
			Global_101700.f_27009[iParam0 /*29*/].f_24[1] = 1;
			Global_101700.f_27009[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_101700.f_27009[iParam0 /*29*/].f_12[iParam1] == 1 && Global_101700.f_27009[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_101700.f_27009[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_101700.f_27009[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_69702)
			{
				if (iParam1 != 4)
				{
					if (Global_14443 != iParam1)
					{
						Global_2972[iParam1 /*4*/] = { Global_101700.f_27009[iParam0 /*29*/].f_3 };
						Global_2989[iParam1] = 1;
						Global_2994[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14443)
					{
					}
					else
					{
						Global_2923[1 /*6*/] = { Global_101700.f_27009[iParam0 /*29*/].f_3 };
						Global_2923[1 /*6*/].f_5 = iParam1;
						func_125();
					}
				}
				else
				{
					Global_2923[1 /*6*/] = { Global_101700.f_27009[iParam0 /*29*/].f_3 };
					Global_2923[1 /*6*/].f_5 = iParam1;
					func_125();
				}
			}
			else
			{
				Global_2923[1 /*6*/] = { Global_101700.f_27009[iParam0 /*29*/].f_3 };
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
	
	StringCopy(&cVar0, unk_0xC7E52B74A3B4973C(&(Global_101700.f_27009[Global_2999 /*29*/].f_7)), 64);
	if (Global_3018 == 0)
	{
		unk_0xBD18006F0815A298("");
		StringCopy(&cVar16, unk_0xC7E52B74A3B4973C(&(Global_2923[1 /*6*/])), 64);
		sVar32 = unk_0xC7E52B74A3B4973C("CELL_253");
		unk_0x6132B0FB7289E50A(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0xBD18006F0815A298("CELL_255");
		unk_0x34D84D73B5DF8E80(&(Global_2923[1 /*6*/]));
		unk_0x6132B0FB7289E50A(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0x21E7933CCC7B3724(&Global_2313, 0);
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
	if (unk_0x6A7B0D91FD88D9EE(sParam0, "0"))
	{
		return 0;
	}
	if (unk_0x6A7B0D91FD88D9EE(sParam0, "1"))
	{
		return 1;
	}
	if (unk_0x6A7B0D91FD88D9EE(sParam0, "2"))
	{
		return 2;
	}
	if (unk_0x6A7B0D91FD88D9EE(sParam0, "3"))
	{
		return 3;
	}
	if (unk_0x6A7B0D91FD88D9EE(sParam0, "4"))
	{
		return 4;
	}
	if (unk_0x6A7B0D91FD88D9EE(sParam0, "5"))
	{
		return 5;
	}
	if (unk_0x6A7B0D91FD88D9EE(sParam0, "6"))
	{
		return 6;
	}
	if (unk_0x6A7B0D91FD88D9EE(sParam0, "7"))
	{
		return 7;
	}
	if (unk_0x6A7B0D91FD88D9EE(sParam0, "8"))
	{
		return 8;
	}
	if (unk_0x6A7B0D91FD88D9EE(sParam0, "9"))
	{
		return 9;
	}
	if (unk_0x6A7B0D91FD88D9EE(sParam0, "A"))
	{
		return 10;
	}
	if (unk_0x6A7B0D91FD88D9EE(sParam0, "B"))
	{
		return 11;
	}
	if (unk_0x6A7B0D91FD88D9EE(sParam0, "C"))
	{
		return 12;
	}
	if (unk_0x6A7B0D91FD88D9EE(sParam0, "D"))
	{
		return 13;
	}
	if (unk_0x6A7B0D91FD88D9EE(sParam0, "E"))
	{
		return 14;
	}
	if (unk_0x6A7B0D91FD88D9EE(sParam0, "F"))
	{
		return 15;
	}
	if (unk_0x6A7B0D91FD88D9EE(sParam0, "G"))
	{
		return 16;
	}
	if (unk_0x6A7B0D91FD88D9EE(sParam0, "H"))
	{
		return 17;
	}
	if (unk_0x6A7B0D91FD88D9EE(sParam0, "I"))
	{
		return 18;
	}
	if (unk_0x6A7B0D91FD88D9EE(sParam0, "J"))
	{
		return 19;
	}
	if (unk_0x6A7B0D91FD88D9EE(sParam0, "K"))
	{
		return 20;
	}
	if (unk_0x6A7B0D91FD88D9EE(sParam0, "L"))
	{
		return 21;
	}
	if (unk_0x6A7B0D91FD88D9EE(sParam0, "M"))
	{
		return 22;
	}
	if (unk_0x6A7B0D91FD88D9EE(sParam0, "N"))
	{
		return 23;
	}
	if (unk_0x6A7B0D91FD88D9EE(sParam0, "O"))
	{
		return 24;
	}
	if (unk_0x6A7B0D91FD88D9EE(sParam0, "P"))
	{
		return 25;
	}
	if (unk_0x6A7B0D91FD88D9EE(sParam0, "Q"))
	{
		return 26;
	}
	if (unk_0x6A7B0D91FD88D9EE(sParam0, "R"))
	{
		return 27;
	}
	if (unk_0x6A7B0D91FD88D9EE(sParam0, "S"))
	{
		return 28;
	}
	if (unk_0x6A7B0D91FD88D9EE(sParam0, "T"))
	{
		return 29;
	}
	if (unk_0x6A7B0D91FD88D9EE(sParam0, "U"))
	{
		return 30;
	}
	if (unk_0x6A7B0D91FD88D9EE(sParam0, "V"))
	{
		return 31;
	}
	if (unk_0x6A7B0D91FD88D9EE(sParam0, "W"))
	{
		return 32;
	}
	if (unk_0x6A7B0D91FD88D9EE(sParam0, "X"))
	{
		return 33;
	}
	if (unk_0x6A7B0D91FD88D9EE(sParam0, "Y"))
	{
		return 34;
	}
	if (unk_0x6A7B0D91FD88D9EE(sParam0, "Z"))
	{
		return 35;
	}
	if (unk_0x6A7B0D91FD88D9EE(sParam0, "z"))
	{
		return -1;
	}
	return -1;
}

int func_128()
{
	if (Global_69702)
	{
		return 0;
	}
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		if (unk_0xA4FEB0448027296A(unk_0xBE369BE1BC57A796()))
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
	if (unk_0xF23B2033129FFCF0(2))
	{
		if (unk_0x4B972043966C2EB8(2, 180))
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
		if (unk_0x4B972043966C2EB8(2, 181))
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
	unk_0x4988C48537D1AE4F(-1, "Menu_Navigate", &Global_14432, 1);
	func_131();
}

void func_131()
{
	if (func_132())
	{
		if (Global_14609 == 0)
		{
			unk_0xCC21A1BB2C60F0A4(1);
		}
		else
		{
			unk_0xCC21A1BB2C60F0A4(2);
		}
	}
}

int func_132()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69702)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0xB2CED41F4337ED8B();
	iVar1 = unk_0xB866C0EABE959340(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_2595532 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_133()
{
	func_142(Global_14424, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(4), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4988C48537D1AE4F(-1, "Menu_Navigate", &Global_14432, 1);
	func_134();
}

void func_134()
{
	if (func_132())
	{
		if (Global_14609 == 0)
		{
			unk_0xCC21A1BB2C60F0A4(3);
		}
		else
		{
			unk_0xCC21A1BB2C60F0A4(4);
		}
	}
}

void func_135()
{
	func_142(Global_14424, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4988C48537D1AE4F(-1, "Menu_Navigate", &Global_14432, 1);
	func_136();
}

void func_136()
{
	if (func_132())
	{
		if (Global_14609 == 0)
		{
			unk_0xCC21A1BB2C60F0A4(2);
		}
		else
		{
			unk_0xCC21A1BB2C60F0A4(1);
		}
	}
}

void func_137()
{
	func_142(Global_14424, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(2), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4988C48537D1AE4F(-1, "Menu_Navigate", &Global_14432, 1);
	func_138();
}

void func_138()
{
	if (func_132())
	{
		if (Global_14609 == 0)
		{
			unk_0xCC21A1BB2C60F0A4(4);
		}
		else
		{
			unk_0xCC21A1BB2C60F0A4(3);
		}
	}
}

void func_139(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, int iParam10, int iParam11)
{
	unk_0xEAC9A8A194DF8F91(uParam0, sParam1);
	unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x9C88EB7B70229335(sParam7))
	{
		func_72(sParam7);
	}
	if (!unk_0x9C88EB7B70229335(sParam8))
	{
		func_72(sParam8);
	}
	if (!unk_0x9C88EB7B70229335(sParam9))
	{
		func_72(sParam9);
	}
	if (!unk_0x9C88EB7B70229335(iParam10))
	{
		func_72(iParam10);
	}
	if (!unk_0x9C88EB7B70229335(iParam11))
	{
		func_72(iParam11);
	}
	unk_0x44983883E630A945();
}

void func_140(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0xEAC9A8A194DF8F91(uParam0, sParam1);
	func_72(sParam2);
	if (!unk_0x9C88EB7B70229335(sParam3))
	{
		func_72(sParam3);
	}
	if (!unk_0x9C88EB7B70229335(sParam4))
	{
		func_72(sParam4);
	}
	if (!unk_0x9C88EB7B70229335(sParam5))
	{
		func_72(sParam5);
	}
	if (!unk_0x9C88EB7B70229335(sParam6))
	{
		func_72(sParam6);
	}
	unk_0x44983883E630A945();
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
					unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
					unk_0xDF18CF55301CEB8B(11);
					unk_0xDF18CF55301CEB8B(iVar13);
					func_72(&(Global_3021[iVar14 /*5*/]));
					unk_0x44983883E630A945();
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
	unk_0xEAC9A8A194DF8F91(uParam0, sParam1);
	unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x44983883E630A945();
}

void func_143()
{
	if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		unk_0x4988C48537D1AE4F(-1, "Menu_Accept", &Global_14432, 1);
		func_144();
	}
}

void func_144()
{
	if (func_132())
	{
		unk_0xCC21A1BB2C60F0A4(5);
	}
}

int func_145(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x4B972043966C2EB8(iParam0, iParam1) || (iParam2 == 1 && unk_0x698C9A4C14BF3957(iParam0, iParam1)))
	{
		if (unk_0xEF4E5E47AF0D4480())
		{
			if (unk_0x8F013F929677E75D() == 0 || (unk_0x349B6C82BE3EF6DD() && unk_0xF23B2033129FFCF0(2)))
			{
				return 0;
			}
		}
		if (unk_0x95DBE123BC2DB80B() || unk_0x1CB39616BED2D488())
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
		unk_0xEB79FECD9022AAF0(&Global_2314, 0);
		func_75();
		Global_14421 = 1;
		if (Global_69702)
		{
			func_267();
		}
		else
		{
			func_257();
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
					unk_0xEAC9A8A194DF8F91(Global_14424, "GET_CURRENT_SELECTION");
					uLocal_102 = unk_0x2B5EF283DBE89739();
					while (!unk_0x78FB53FF5C2D4903(uLocal_102))
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					iLocal_105 = unk_0x38CC180A8259BCD8(uLocal_102);
					bVar0 = false;
					if (unk_0x6C119F3638AC7ABE())
					{
						if (Global_69702)
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
					if (unk_0x48B8265059381CD0(Global_2314, 0))
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
							if (unk_0x48B8265059381CD0(Global_2313, 9))
							{
								if (!unk_0x48B8265059381CD0(Global_2313, 29))
								{
									Global_101700.f_27009[Global_1628 /*29*/].f_18 = 1;
									if (Global_101700.f_27009[Global_1628 /*29*/].f_24[Global_14443] == 0)
									{
										func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(1), -1f, -1f, "CELL_288", "CELL_300", &(Global_117[Global_1628 /*10*/].f_4), "CELL_195", 0);
									}
									else
									{
										func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(1), -1f, -1f, "CELL_288", &(Global_101700.f_27009[Global_1628 /*29*/].f_7), &(Global_101700.f_27009[Global_1628 /*29*/].f_3), &(Global_101700.f_27009[Global_1628 /*29*/].f_3), 0);
									}
									func_139(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
									func_142(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
									unk_0xEB79FECD9022AAF0(&Global_2313, 29);
								}
							}
							else
							{
								bLocal_329 = false;
								bLocal_330 = false;
								if (Global_69702)
								{
									iVar1 = 0;
									while (iVar1 < 4)
									{
										if (unk_0x6A7B0D91FD88D9EE(&(Global_101700.f_27009[Global_1628 /*29*/].f_3), &(Global_2216[iVar1 /*24*/])))
										{
											if (!unk_0x6A7B0D91FD88D9EE(&(Global_2216[iVar1 /*24*/].f_8), "CELL_SFUN_NULL"))
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
										if (unk_0x6A7B0D91FD88D9EE(&(Global_101700.f_27009[Global_1628 /*29*/].f_3), &(Global_2151[iVar2 /*16*/])))
										{
											if (!unk_0x6A7B0D91FD88D9EE(&(Global_2151[iVar2 /*16*/].f_8), "CELL_SFUN_NULL"))
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
								if (func_149(Global_1628) && unk_0x48B8265059381CD0(Global_2314, 0) == 0)
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
								if (unk_0x48B8265059381CD0(Global_2314, 0))
								{
									func_148();
									iLocal_136 = 1;
								}
								else if (bLocal_330 == 0 && bLocal_329 == 0)
								{
									Global_16859 = 0;
									Global_16858 = 0;
									Global_16860 = 0;
									if (unk_0x48B8265059381CD0(Global_2314, 19) && Global_1628 == 129)
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
	iLocal_134 = unk_0x94E3E074F38DF86C();
	func_142(Global_14424, "SET_DATA_SLOT_EMPTY", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4EDE34FBADD967A6(0);
	switch (Global_1628)
	{
		case 2:
			func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), 0f, -1f, -1f, "CELL_7001", &(Global_101700.f_27009[Global_1628 /*29*/].f_3), &(Global_101700.f_27009[Global_1628 /*29*/].f_7), 0, 0);
			break;
		
		case 0:
			func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), 0f, -1f, -1f, "CELL_7002", &(Global_101700.f_27009[Global_1628 /*29*/].f_3), &(Global_101700.f_27009[Global_1628 /*29*/].f_7), 0, 0);
			break;
		
		case 12:
			func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), 0f, -1f, -1f, "CELL_7003", &(Global_101700.f_27009[Global_1628 /*29*/].f_3), "CELL_E_311", 0, 0);
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
	unk_0x21E7933CCC7B3724(&Global_2313, 17);
	func_142(Global_14424, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_208", 0, 0, 0, 0);
	func_155(&Local_334);
	if (Global_14443.f_1 > 3)
	{
		func_142(Global_14424, "DISPLAY_VIEW", 18f, unk_0xBBDA792448DB5A89(iLocal_103), -1082130432, -1082130432, -1082130432);
		iLocal_103 = 0;
		if (func_154(&Local_334))
		{
			uVar0 = unk_0x592E5DF66777D40F(Local_334[Local_334.f_2936]);
		}
		else
		{
			uVar0 = func_152(&(Local_334.f_34[func_153(Local_334.f_2936, &Local_334) /*29*/].f_13));
		}
		unk_0xEAC9A8A194DF8F91(Global_14424, "SET_HEADER");
		unk_0xDCEB60B79ECB219E("CELL_CONDFNH");
		unk_0xBAB00B98D1E61BEE(uVar0);
		unk_0x1798EBF9408190D3();
		unk_0x44983883E630A945();
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
	struct<13> Var39;
	
	iVar0 = 0;
	if (func_164(uParam0, &uVar36))
	{
		if (func_154(uParam0))
		{
			uParam0->f_2963 = { func_163((*uParam0)[uParam0->f_2936]) };
			sVar37 = unk_0x592E5DF66777D40F((*uParam0)[uParam0->f_2936]);
		}
		else
		{
			uParam0->f_2963 = { uParam0->f_34[func_153(uParam0->f_2936, uParam0) /*29*/] };
			sVar37 = func_152(&(uParam0->f_34[func_153(uParam0->f_2936, uParam0) /*29*/].f_13));
		}
		StringCopy(&(uParam0->f_2983), sVar37, 64);
		bVar38 = false;
		if (unk_0xAB37E5254B72592C())
		{
			if (!Global_1574309)
			{
				if (func_162(unk_0xBE369BE1BC57A796()))
				{
					bVar38 = true;
				}
			}
		}
		if (func_154(uParam0))
		{
			if (((unk_0x77113BB81E6537DC((*uParam0)[uParam0->f_2936]) || unk_0x70807A8FA2F0CAE8((*uParam0)[uParam0->f_2936])) || unk_0x8C97DAE550853CC6((*uParam0)[uParam0->f_2936])) || unk_0x8C89DAD59408D3BD((*uParam0)[uParam0->f_2936]))
			{
				bVar38 = false;
			}
		}
		if (!unk_0x8AB33CE0431CEDCB())
		{
			bVar38 = false;
		}
		if (unk_0x3D9CE3EC27F94B62(0))
		{
			bVar38 = false;
		}
		if (unk_0x1A0BD443C067F484(&(uParam0->f_2963)) || unk_0xA34410C46A032614(&(uParam0->f_2963)))
		{
			bVar38 = false;
		}
		if (unk_0x58C801D1650F3780(&(uParam0->f_2963)) || unk_0x0C97B9684E5567A8(&(uParam0->f_2963)))
		{
			bVar38 = false;
		}
		if (unk_0x27F5A01680175AC9())
		{
			if (unk_0x8EA3D5407E9F4AF0())
			{
				if (unk_0x5F5E265152672306())
				{
					bVar38 = false;
				}
			}
			else if (unk_0x7C2F31E78C33DE0F())
			{
				bVar38 = false;
			}
		}
		if (bVar38)
		{
			if (Global_69702)
			{
				unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT_EMPTY");
				unk_0xDF18CF55301CEB8B(iVar0);
				unk_0x44983883E630A945();
				unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
				unk_0xDF18CF55301CEB8B(18);
				unk_0xDF18CF55301CEB8B(iVar0);
				unk_0xDF18CF55301CEB8B(0);
				if (!Global_2499540.f_1 || Global_2499540.f_38)
				{
					unk_0xDCEB60B79ECB219E("CELL_MP_1000");
					unk_0x1798EBF9408190D3();
				}
				else
				{
					unk_0xDCEB60B79ECB219E("CELL_MP_1000b");
					unk_0x1798EBF9408190D3();
				}
				unk_0x44983883E630A945();
				uParam0->f_2937[iVar0] = 1;
				iVar0++;
			}
			else if (Global_35781 == 15)
			{
				unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT_EMPTY");
				unk_0xDF18CF55301CEB8B(iVar0);
				unk_0x44983883E630A945();
				unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
				unk_0xDF18CF55301CEB8B(18);
				unk_0xDF18CF55301CEB8B(iVar0);
				unk_0xDF18CF55301CEB8B(0);
				if (!Global_2499540.f_1 || Global_2499540.f_38)
				{
					unk_0xDCEB60B79ECB219E("CELL_MP_1000");
					unk_0x1798EBF9408190D3();
				}
				else
				{
					unk_0xDCEB60B79ECB219E("CELL_MP_1000b");
					unk_0x1798EBF9408190D3();
				}
				unk_0x44983883E630A945();
				uParam0->f_2937[iVar0] = 1;
				iVar0++;
			}
		}
		bVar38 = false;
		if (func_154(uParam0))
		{
			Var39 = { func_163((*uParam0)[uParam0->f_2936]) };
			if ((func_162(unk_0xBE369BE1BC57A796()) && func_162((*uParam0)[uParam0->f_2936])) && unk_0x600AC8051FFDB784(&Var39))
			{
				bVar38 = true;
			}
		}
		if (bVar38)
		{
			unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT_EMPTY");
			unk_0xDF18CF55301CEB8B(iVar0);
			unk_0x44983883E630A945();
			unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
			unk_0xDF18CF55301CEB8B(18);
			unk_0xDF18CF55301CEB8B(iVar0);
			unk_0xDF18CF55301CEB8B(0);
			unk_0xDCEB60B79ECB219E("CELL_MP_1009");
			unk_0x1798EBF9408190D3();
			unk_0x44983883E630A945();
			uParam0->f_2937[iVar0] = 2;
			iVar0++;
		}
		bVar38 = false;
		if (func_154(uParam0))
		{
			if (unk_0x54F10BD9D7FA4465() < unk_0x215F7BA6AB38BE32())
			{
				if (!unk_0x2D5BDD3304DD4725(&(uParam0->f_2963)))
				{
					bVar38 = true;
				}
			}
		}
		if (bVar38)
		{
			unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
			unk_0xDF18CF55301CEB8B(18);
			unk_0xDF18CF55301CEB8B(iVar0);
			unk_0xDF18CF55301CEB8B(0);
			unk_0xDCEB60B79ECB219E("PIM_DFRQ2");
			unk_0x1798EBF9408190D3();
			unk_0x44983883E630A945();
			uParam0->f_2937[iVar0] = 3;
			iVar0++;
		}
		bVar38 = false;
		bVar38 = true;
		if (bVar38)
		{
			unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
			unk_0xDF18CF55301CEB8B(18);
			unk_0xDF18CF55301CEB8B(iVar0);
			unk_0xDF18CF55301CEB8B(0);
			unk_0xDCEB60B79ECB219E("CELL_MP_1007");
			unk_0x1798EBF9408190D3();
			unk_0x44983883E630A945();
			uParam0->f_2937[iVar0] = 4;
			iVar0++;
		}
		bVar38 = false;
		if (unk_0x749CE7B33672D350())
		{
			if (unk_0x3B13D05FD2D29D80(&(uParam0->f_2963)))
			{
				unk_0x7E1D32162078314A(&Var1, 35, &(uParam0->f_2963));
			}
		}
		if (Var1.f_0 != -1)
		{
			if (Var1.f_21 == 1)
			{
				if (unk_0x0A607CC604F09A55() && !func_161(Var1.f_0))
				{
					bVar38 = true;
					uParam0->f_2947 = { Var1.f_1 };
				}
			}
		}
		if (bVar38)
		{
			unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
			unk_0xDF18CF55301CEB8B(18);
			unk_0xDF18CF55301CEB8B(iVar0);
			unk_0xDF18CF55301CEB8B(0);
			unk_0xDCEB60B79ECB219E("CELL_MP_1003");
			unk_0x1798EBF9408190D3();
			unk_0x44983883E630A945();
			uParam0->f_2937[iVar0] = 5;
			iVar0++;
		}
		unk_0x21E7933CCC7B3724(&Global_2315, 6);
		bVar38 = false;
		if (func_154(uParam0))
		{
			if (func_160(unk_0xBE369BE1BC57A796(), 1, 1))
			{
				if (unk_0xECE6499178490DE1(unk_0xBE369BE1BC57A796(), (*uParam0)[uParam0->f_2936]))
				{
					if (!func_159((*uParam0)[uParam0->f_2936], 0))
					{
						if (!unk_0x48B8265059381CD0(Global_2421664[(*uParam0)[uParam0->f_2936] /*358*/].f_198, 2))
						{
							bVar38 = true;
							unk_0xEB79FECD9022AAF0(&Global_2315, 6);
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
		if (Global_1574279 || Global_1574280)
		{
			bVar38 = false;
		}
		if (bVar38)
		{
			unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
			unk_0xDF18CF55301CEB8B(18);
			unk_0xDF18CF55301CEB8B(iVar0);
			unk_0xDF18CF55301CEB8B(0);
			if (!unk_0x48B8265059381CD0(Global_2433125.f_693, (*uParam0)[uParam0->f_2936]))
			{
				unk_0xDCEB60B79ECB219E("CELL_MP_1008");
			}
			else
			{
				unk_0xDCEB60B79ECB219E("CELL_MP_1008b");
			}
			unk_0x1798EBF9408190D3();
			unk_0x44983883E630A945();
			uParam0->f_2937[iVar0] = 7;
			iVar0++;
		}
	}
	else
	{
		unk_0xBD18006F0815A298("CELL_LEFT_SESS");
		unk_0x23048DD0C6E21613(1, 1);
		func_30(0);
		return;
	}
}

int func_156(int iParam0, int iParam1)
{
	if (Global_1619421[iParam0 /*390*/] == iParam1)
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
		return unk_0x48B8265059381CD0(Global_1619421[iVar0 /*390*/].f_1, 0);
	}
	return 0;
}

int func_158()
{
	return -1;
}

bool func_159(int iParam0, int iParam1)
{
	return unk_0x48B8265059381CD0(Global_2421664[iParam0 /*358*/].f_211, iParam1);
}

int func_160(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x7268A1112372AA44(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xCF7855B965948E97(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2433125.f_3[iVar0])
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
	
	if (unk_0x749CE7B33672D350() && unk_0x0A607CC604F09A55())
	{
		iVar0 = unk_0x4ADD10F465B53E3C();
		if (iVar0 > 0)
		{
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				unk_0x113AF801A3B4DD40(&Global_2481983, iVar1);
				if (iParam0 == Global_2481983)
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
	
	if (unk_0xBEF1C6430F4D8B14() == 0)
	{
		return 0;
	}
	iVar0 = -1;
	if (iParam0 != unk_0xBE369BE1BC57A796())
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	if (unk_0xF20D8448F6AFC86C() || unk_0x7C2F31E78C33DE0F())
	{
		if (unk_0xD4AA13DCCEC54C48(0, iVar0))
		{
			if (unk_0x8AB33CE0431CEDCB())
			{
				return 1;
			}
		}
	}
	if (unk_0xB15049400DCD8DC9() || unk_0x8EA3D5407E9F4AF0())
	{
		if (iParam0 == unk_0xBE369BE1BC57A796())
		{
			if (unk_0xF96D9E5EB6A76AB7(0, -3, 1) || unk_0xD4AA13DCCEC54C48(1, -1))
			{
				return 1;
			}
		}
		else
		{
			Var1 = { func_163(iParam0) };
			if (unk_0xD4AA13DCCEC54C48(0, -1) || (unk_0xD4AA13DCCEC54C48(1, -1) && unk_0x2D5BDD3304DD4725(&Var1)))
			{
				return 1;
			}
		}
	}
	if (unk_0xEF4E5E47AF0D4480())
	{
		if (unk_0xD4AA13DCCEC54C48(0, iVar0))
		{
			if (unk_0x8AB33CE0431CEDCB())
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
	
	unk_0xF3EE72618DF96AF7(iParam0, &Var0, 13);
	return Var0;
}

int func_164(var uParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x6C119F3638AC7ABE())
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
		if (unk_0x00F8BCD915B03B62(&(uParam0->f_34[iVar0 /*29*/])))
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
		unk_0x21E7933CCC7B3724(&Global_2314, 0);
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
	if (unk_0xF23B2033129FFCF0(2))
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
			unk_0x4988C48537D1AE4F(-1, "Menu_Navigate", &Global_14432, 1);
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
			unk_0x4988C48537D1AE4F(-1, "Menu_Navigate", &Global_14432, 1);
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
		unk_0x21E7933CCC7B3724(&Global_2313, 16);
	}
	func_135();
	unk_0xEAC9A8A194DF8F91(Global_14424, "GET_CURRENT_SELECTION");
	uLocal_102 = unk_0x2B5EF283DBE89739();
	while (!unk_0x78FB53FF5C2D4903(uLocal_102))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	iLocal_105 = unk_0x38CC180A8259BCD8(uLocal_102);
	if (iLocal_105 < 0)
	{
		iLocal_105 = 0;
	}
	if (Global_16776 == Global_14449[iLocal_105])
	{
		unk_0x21E7933CCC7B3724(&Global_2313, 16);
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
	struct<13> Var67;
	
	if (unk_0x48B8265059381CD0(Global_2315, 6))
	{
		if (!unk_0xBD6B478BC887CAC6(&(Local_334.f_2963)))
		{
			unk_0x21E7933CCC7B3724(&Global_2315, 6);
			StringCopy(&cLocal_112, "", 16);
			Global_14443.f_1 = 3;
		}
	}
	switch (Local_334.f_2999)
	{
		case 0:
			if (unk_0x48B8265059381CD0(uLocal_328, 1))
			{
				if (!Global_91543.f_1361)
				{
					unk_0x21E7933CCC7B3724(&uLocal_328, 0);
					unk_0x21E7933CCC7B3724(&uLocal_328, 1);
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
						if (func_145(2, Global_14412, 0) || unk_0x79888727131C6854(2, 201))
						{
							Global_14443.f_1 = 3;
						}
					}
					else if (func_145(2, Global_14412, 0) || unk_0x79888727131C6854(2, 201))
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
							if (!Global_2499540.f_1)
							{
								if (!unk_0x42DEB42B49D342CC() && !unk_0xF4BAEC8602BC9FDB())
								{
									Local_334.f_2976 = 0;
									func_254();
									Local_334.f_2977 = 0;
									if (func_154(&Local_334))
									{
										sVar53 = unk_0x592E5DF66777D40F(Local_334[Local_334.f_2936]);
									}
									else
									{
										sVar53 = func_152(&(Local_334.f_34[func_153(Local_334.f_2936, &Local_334) /*29*/].f_13));
									}
									func_253(sVar53);
									Local_334.f_2999 = 1;
									func_252(&(Local_334.f_2979));
									func_251(0);
									if (Global_69702)
									{
										if (func_250(1) >= Global_262145.f_161)
										{
											Var40 = { func_163(unk_0xBE369BE1BC57A796()) };
											if (func_249())
											{
												func_240(1654961868, Global_262145.f_161, &iVar0, 1, 1, 0);
												Global_2590252[iVar0 /*76*/].f_8.f_3 = { Var40 };
											}
											else
											{
												unk_0x362A2566E7FDF171(Global_262145.f_161, &Var40, 1, 1);
											}
										}
										else
										{
											Var40 = { func_163(unk_0xBE369BE1BC57A796()) };
											if (func_249())
											{
											}
											else
											{
												unk_0x362A2566E7FDF171(func_250(1), &Var40, 1, 1);
											}
										}
										func_87(1909, 1, -1);
									}
								}
								else if (unk_0x42DEB42B49D342CC())
								{
								}
								else if (unk_0xF4BAEC8602BC9FDB())
								{
									if (!Global_2499540.f_59)
									{
										Global_2499540 = 1;
										Global_2499540.f_2 = 1;
										Global_2499540.f_59 = 1;
									}
								}
							}
							else if (Global_2499540.f_38)
							{
							}
							else
							{
								func_239();
								unk_0x4988C48537D1AE4F(-1, "Hang_Up", &Global_14432, 1);
								if (Global_2499540.f_1)
								{
									func_237();
								}
								Global_14443.f_1 = 3;
							}
							return;
							break;
						
						case 2:
							if (func_236(&(Global_2494199.f_286[Local_334[Local_334.f_2936] /*2*/])))
							{
								if (!func_235(&(Global_2494199.f_286[Local_334[Local_334.f_2936] /*2*/]), 30000, 0))
								{
									if (func_224(0, 0, 1, 1))
									{
										func_213("CELL_MP_1009H", unk_0x592E5DF66777D40F(Local_334[Local_334.f_2936]), func_214(Local_334[Local_334.f_2936], -2, 0, 0), -1);
									}
									Local_334.f_2976 = 0;
									return;
								}
							}
							Var54 = { func_163(Local_334[Local_334.f_2936]) };
							if ((!func_162(unk_0xBE369BE1BC57A796()) || !func_162(Local_334[Local_334.f_2936])) || !unk_0x600AC8051FFDB784(&Var54))
							{
								if (func_224(1, 1, 1, 1))
								{
									if (!unk_0x6A7B0D91FD88D9EE(unk_0x592E5DF66777D40F(Local_334[Local_334.f_2936]), "**Invalid**"))
									{
										func_213("CELL_MP_1009M", unk_0x592E5DF66777D40F(Local_334[Local_334.f_2936]), func_214(Local_334[Local_334.f_2936], -2, 0, 0), -1);
									}
									else
									{
										func_212("CELL_MP_1009N", -1);
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
							if (!unk_0x567F47BBEBB58B73())
							{
								if (unk_0xF20D8448F6AFC86C() && !unk_0x2D5BDD3304DD4725(&(Local_334.f_2963)))
								{
									if (unk_0x70765F78489B397D(&(Local_334.f_2963), ""))
									{
										Local_334.f_2976 = 0;
										Global_14443.f_1 = 3;
									}
								}
								else
								{
									unk_0x67BD5B0BE920F912(&(Local_334.f_2963));
									Local_334.f_2976 = 0;
									Global_14443.f_1 = 3;
								}
							}
							break;
						
						case 5:
							if (unk_0x749CE7B33672D350())
							{
								if (unk_0x3B13D05FD2D29D80(&(Local_334.f_2963)))
								{
									unk_0x7E1D32162078314A(&Var4, 35, &(Local_334.f_2963));
								}
							}
							if (Var4.f_0 != -1)
							{
								if (Var4.f_21 == 1)
								{
									if (!func_161(Var4.f_0))
									{
										if (unk_0xFC4298DB9DC3C728(Var4.f_0))
										{
											Local_334.f_2976 = 0;
											unk_0xBD18006F0815A298("CREW_JOIN");
											unk_0xBAB00B98D1E61BEE(&(Var4.f_1));
											unk_0x23048DD0C6E21613(1, 1);
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
							unk_0x67BD5B0BE920F912(&(Local_334.f_2963));
							break;
						
						case 7:
							if (unk_0x48B8265059381CD0(Global_2433125.f_693, Local_334[Local_334.f_2936]))
							{
								unk_0x21E7933CCC7B3724(&(Global_2433125.f_693), Local_334[Local_334.f_2936]);
							}
							else
							{
								Global_2433125.f_693 = 0;
								unk_0xEB79FECD9022AAF0(&(Global_2433125.f_693), Local_334[Local_334.f_2936]);
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
					unk_0x21E7933CCC7B3724(&Global_2314, 0);
					iLocal_118 = 0;
					func_143();
					Global_14421 = 1;
					unk_0xEAC9A8A194DF8F91(Global_14424, "GET_CURRENT_SELECTION");
					uLocal_102 = unk_0x2B5EF283DBE89739();
					while (!unk_0x78FB53FF5C2D4903(uLocal_102))
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					Local_334.f_2946 = unk_0x38CC180A8259BCD8(uLocal_102);
					if (!func_164(&Local_334, &iVar3))
					{
						switch (iVar3)
						{
							case 0:
								func_211("PLAYER_N_ON", 7500, 1);
								break;
							
							case 1:
								func_211("PLAYERLEFT", 7500, 1);
								break;
							
							case 2:
								Global_2499540.f_59 = 0;
								Local_334.f_2981 = 1;
								Local_334.f_2976 = 1;
								return;
								break;
						}
						Global_14443.f_1 = 3;
						return;
					}
					Global_2499540.f_59 = 0;
					Local_334.f_2976 = 1;
				}
			}
			break;
		
		case 1:
			if (!func_164(&Local_334, &iVar3))
			{
				func_251(1);
				func_239();
				Local_334.f_2978 = 1;
				Local_334.f_2977 = 1;
				return;
			}
			else if (Local_334.f_2977)
			{
				if (!Local_334.f_2978)
				{
					if (!Global_2499540.f_1 || !unk_0x462BB6BF1879A145())
					{
						func_251(1);
						func_239();
						Local_334.f_2978 = 1;
						Local_334.f_2977 = 1;
						return;
					}
					if (unk_0x6C119F3638AC7ABE())
					{
						if (func_145(2, Global_14413, 0))
						{
							func_239();
							Local_334.f_2976 = 0;
							return;
						}
						if (func_210(Global_2499540.f_20))
						{
							if (unk_0x2D5BDD3304DD4725(&(Global_2499540.f_20)))
							{
								if (!unk_0x00F8BCD915B03B62(&(Global_2499540.f_20)))
								{
									func_251(1);
									func_239();
									Local_334.f_2978 = 1;
									Local_334.f_2977 = 1;
									return;
								}
							}
						}
						else
						{
							func_251(1);
							func_239();
							Local_334.f_2978 = 1;
							Local_334.f_2977 = 1;
							return;
						}
					}
					else
					{
						func_239();
						Local_334.f_2976 = 0;
						func_151();
						return;
					}
					if (!Global_2499540.f_37)
					{
						if (Global_2499540.f_33 == -1)
						{
							if (func_235(&(Local_334.f_2979), 40000, 1))
							{
								func_251(1);
								func_239();
								Local_334.f_2978 = 1;
								Local_334.f_2977 = 1;
								return;
							}
						}
						else
						{
							switch (Global_2499540.f_33)
							{
								case 1:
									func_209();
									func_208();
									if (unk_0x63C468D583002D23())
									{
										if (iVar1 == iVar2)
										{
										}
									}
									unk_0x2EB37CDED0E516F3(iLocal_107);
									return;
									break;
								
								case 2:
									func_251(1);
									func_239();
									Local_334.f_2978 = 1;
									return;
									break;
								
								default:
									func_251(1);
									func_239();
									Local_334.f_2978 = 1;
									return;
									break;
								}
							}
						}
				}
			}
			else if (!func_236(&(Local_334.f_2979)))
			{
				func_252(&(Local_334.f_2979));
				func_207(&(Local_334.f_2979), 1, 0);
			}
			else
			{
				if (func_235(&(Local_334.f_2979), 15000, 1))
				{
					func_239();
					func_75();
					func_256();
					Global_14443.f_1 = 3;
					return;
				}
				if (Global_2499540.f_1 || unk_0x48B8265059381CD0(Global_2314, 20))
				{
					if (func_145(2, Global_14413, 0))
					{
						func_239();
						Global_14443.f_1 = 3;
						return;
					}
				}
				if (Global_2499540.f_1)
				{
					if (func_206(&Local_334, &(Local_334.f_2983)))
					{
						func_205(&(Local_334.f_2979), 1, 0);
						Local_334.f_2978 = 0;
						Local_334.f_2977 = 1;
						if (Global_69702)
						{
							func_203(105, 1, -1, 1);
						}
					}
					else
					{
						func_251(1);
						func_239();
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
				if (func_197(&Local_3334, &(Local_3334.f_1), &(Local_3334.f_2), 0, 0, &cLocal_3337, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0))
				{
					StringCopy(&cLocal_3337, unk_0xE26771A3D90DD1DF(), 64);
					Local_3334.f_0 = 0;
					Local_3334.f_2 = 0;
					Local_3334.f_1 = 0;
					iLocal_3353 = 0;
					uLocal_3354 = unk_0xF9108830F4935563(&cLocal_3337);
					StringCopy(&cLocal_3337, unk_0xA3E25E419FAD44C1(&cLocal_3337, 0, uLocal_3354, 63), 64);
					func_205(&(Global_2494199.f_286[Local_334[Local_334.f_2936] /*2*/]), 0, 0);
					if (unk_0x9C88EB7B70229335(func_196(&cLocal_3337)))
					{
					}
					else
					{
						Var67 = { func_163(Local_334[Local_334.f_2936]) };
						unk_0x33B33E8F3AF3F058(&cLocal_3337, &Var67);
						func_171("CP_TM_SENT", Local_334[Local_334.f_2936], 0, 0, 0, 1, 1, 0);
						func_87(1908, 1, -1);
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
	iVar1 = unk_0xB58DEBB81964A4E9(iParam1);
	if (unk_0xECE6499178490DE1(unk_0xBE369BE1BC57A796(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, unk_0x592E5DF66777D40F(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, unk_0x592E5DF66777D40F(iParam1), 64);
		}
		if (unk_0x9C88EB7B70229335(&Var2))
		{
		}
		unk_0xBD18006F0815A298(sParam0);
		if ((iVar1 != -1 && unk_0xF7271A9481CAC8E3()) && iVar1 < 4)
		{
			if (Global_1633501.f_85058[iVar1] != -1)
			{
				unk_0x80A171A436807CA0(func_181(iVar1, iParam1, 0));
			}
			else
			{
				unk_0x80A171A436807CA0(func_214(iParam1, -2, 1, 0));
			}
		}
		else
		{
			unk_0x80A171A436807CA0(func_214(iParam1, -2, 1, 0));
		}
		unk_0xBAB00B98D1E61BEE(func_179(&Var2));
		if (!bParam4)
		{
			iVar0 = unk_0x23048DD0C6E21613(0, 1);
		}
		else
		{
			Global_2482053 = { func_163(iParam1) };
			if (unk_0x7E1D32162078314A(&Global_2481983, 35, &Global_2482053))
			{
				iVar18 = 0;
				if (unk_0x6A7B0D91FD88D9EE(&(Global_2481983.f_22), "Leader") && Global_2481983.f_30 == 0)
				{
					iVar18 = 1;
				}
				if (Global_2481983.f_21 > 0)
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
					iVar0 = unk_0x484290510553BCE9(iVar19, unk_0x1A03CEC7A8F6CCA0(&Global_2481983, 35), &(Global_2481983.f_17), Global_2481983.f_30, iVar18, 0, Global_2481983, &Var2, Global_1316390, Global_1316391, Global_1316392);
				}
				else
				{
					iVar0 = unk_0xDFBD23CE6CF19FDE(iVar19, unk_0x1A03CEC7A8F6CCA0(&Global_2481983, 35), &(Global_2481983.f_17), Global_2481983.f_30, iVar18, 0, Global_2481983, Global_1316390, Global_1316391, Global_1316392);
				}
			}
			else
			{
				iVar0 = unk_0x23048DD0C6E21613(0, 1);
			}
		}
		func_172(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_172(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_177() || !unk_0xF7271A9481CAC8E3()) || !func_175(unk_0xBE369BE1BC57A796(), 0))
	{
		return;
	}
	iVar0 = func_173(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1759864.f_5[iVar0 /*53*/] = iParam0;
		Global_1759864.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1759864.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1759864.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1759864.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1759864.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1759864.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1759864.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1759864.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1759864.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1759864.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1759864.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_173(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1759864 - 1))
	{
		if (iParam0 > Global_1759864.f_5[iVar0 /*53*/].f_1)
		{
			func_174(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1759864++;
	if (Global_1759864 > 5)
	{
		Global_1759864 = 5;
		return Global_1759864;
	}
	return (Global_1759864 - 1);
}

void func_174(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1759864.f_5[iVar0 /*53*/] = { Global_1759864.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_175(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xBE369BE1BC57A796())
	{
		bVar0 = func_176(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1591201[iParam0 /*602*/].f_203 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x7268A1112372AA44(iParam0))
		{
			bVar0 = unk_0xB58DEBB81964A4E9(iParam0) == 8;
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
	if (Global_1315213[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312729[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

bool func_177()
{
	return unk_0x6948821CC8D52AC2(-1762644250);
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
	int iVar1;
	
	if (func_195())
	{
		iVar1 = func_191(iParam1);
		if (!iVar1 == -1)
		{
			return func_189(iVar1);
		}
	}
	if (Global_1633501.f_85058[iParam0] != -1 && Global_1633501.f_85058[iParam0] <= 4)
	{
		if (Global_1633501.f_85058[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1633501.f_85058[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1633501.f_85058[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1633501.f_85058[iParam0] == 4)
		{
			if (unk_0x48B8265059381CD0(Global_1633501.f_15, 29))
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
			iVar0 = Global_1633501.f_85058[iParam0];
		}
	}
	else
	{
		iVar0 = func_183(iParam1, !bParam2, iParam0, 0);
	}
	if (unk_0x48B8265059381CD0(Global_1633501.f_21, 13))
	{
		iVar0 = func_182(iParam0);
	}
	return iVar0;
}

int func_182(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_1633501.f_107616;
			break;
		
		case 1:
			iVar0 = Global_1633501.f_107617;
			break;
		
		case 2:
			iVar0 = Global_1633501.f_107618;
			break;
		
		case 3:
			iVar0 = Global_1633501.f_107619;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

int func_183(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x7268A1112372AA44(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0xB58DEBB81964A4E9(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_188(iVar0, iParam2, 0) && !unk_0x48B8265059381CD0(Global_1633501.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_187(1);
				}
				else
				{
					return func_187(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0x48B8265059381CD0(Global_1633501.f_4, 20))
			{
				return func_184(iVar0, iParam2, 1);
			}
			else
			{
				return func_184(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_187(1);
	}
	return func_187(0);
}

int func_184(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_186(iParam0, iParam1);
	if (func_185(Global_1633501.f_88646))
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

int func_185(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7845[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_186(int iParam0, int iParam1)
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
			if (!func_188(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_187(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_188(int iParam0, int iParam1, int iParam2)
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
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 0);
				
				case 1:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 1);
				
				case 2:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 2);
				
				case 3:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 4);
				
				case 1:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 5);
				
				case 2:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 6);
				
				case 3:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 8);
				
				case 1:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 9);
				
				case 2:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 10);
				
				case 3:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 12);
				
				case 1:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 13);
				
				case 2:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 14);
				
				case 3:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_189(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_190(iParam0);
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

var func_190(int iParam0)
{
	return Global_2415716.f_1946.f_44[iParam0 /*2*/].f_1;
}

int func_191(int iParam0)
{
	if (!iParam0 == func_158())
	{
		if (func_193(iParam0, 1))
		{
			return Global_2415716.f_1946.f_11[func_192(iParam0)];
		}
	}
	return -1;
}

int func_192(int iParam0)
{
	if (iParam0 != func_158())
	{
		return Global_1619421[iParam0 /*390*/].f_11;
	}
	return func_158();
}

bool func_193(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_194(iParam0))
		{
			return 0;
		}
	}
	return Global_1619421[iParam0 /*390*/].f_11 != func_158();
}

int func_194(int iParam0)
{
	if (iParam0 != func_158())
	{
		if (Global_1619421[iParam0 /*390*/].f_11 != func_158())
		{
			return Global_1619421[iParam0 /*390*/].f_11 == iParam0;
		}
	}
	return 0;
}

bool func_195()
{
	return Global_2443134.f_12;
}

var func_196(char[4] cParam0)
{
	return cParam0;
}

int func_197(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, char* sParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, char* sParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16, bool bParam17, int iParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
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
	
	if (unk_0x46EEE08565CE19CA() || unk_0x25BD4C26D84038CD())
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
				else if (func_202())
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
						if (func_202())
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
						if (unk_0x82F1A060D8F4583B(joaat("fm_capture_creator")) > 0)
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
						if (unk_0x82F1A060D8F4583B(joaat("fm_capture_creator")) > 0)
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
				else if (func_202())
				{
					sVar4 = "FMMC_KEY_TIS2FJ";
				}
				else
				{
					sVar4 = "FMMC_KEY_TIP2F";
				}
				if (unk_0xB15049400DCD8DC9() || unk_0x8EA3D5407E9F4AF0())
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
				if (unk_0xEF4E5E47AF0D4480())
				{
					iVar7 = 6;
				}
				else if (unk_0xB8EB22F9350F13DC() == 0)
				{
					iVar7 = 0;
				}
				else
				{
					iVar7 = 1;
				}
				if (bParam24)
				{
					sVar4 = "WEB_SEARCH";
				}
				if (unk_0x9C88EB7B70229335(sParam5))
				{
					unk_0xBD3B904ED0023B7F(iVar7, sVar4, sVar5, "", "", "", "", iVar6);
				}
				else
				{
					unk_0xBD3B904ED0023B7F(iVar7, sVar4, sVar5, sParam5, sParam10, "", "", iVar6);
				}
			}
			else
			{
				if (unk_0xEF4E5E47AF0D4480())
				{
					iVar8 = 6;
				}
				else if (unk_0xB8EB22F9350F13DC() == 0)
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
					if (unk_0xB15049400DCD8DC9() || unk_0x8EA3D5407E9F4AF0())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M19";
					}
					if (unk_0xB8EB22F9350F13DC() == 10)
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
					unk_0x1EAE7A06BF9A9990(2);
					if (unk_0x9C88EB7B70229335(&(Global_1633501.f_88653)))
					{
						unk_0xBD3B904ED0023B7F(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xBD3B904ED0023B7F(iVar8, sVar4, sVar5, &(Global_1633501.f_88653), "", "", "", iVar9);
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
					if (unk_0xB15049400DCD8DC9())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M19";
					}
					iVar9 = 63;
					unk_0x1EAE7A06BF9A9990(2);
					if (unk_0x9C88EB7B70229335(sParam5))
					{
						unk_0xBD3B904ED0023B7F(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xBD3B904ED0023B7F(iVar8, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam9)
				{
					if (unk_0xB8EB22F9350F13DC() == 0)
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
					if (unk_0xB15049400DCD8DC9() || unk_0x8EA3D5407E9F4AF0())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M36";
					}
					iVar10 = 0;
					while (iVar10 <= 7)
					{
						if (unk_0xD3115E7F7876D6E6(&(Global_1633501.f_88804[iVar10 /*16*/])))
						{
							StringCopy(&(Global_1633501.f_88804[iVar10 /*16*/]), "", 64);
						}
						iVar10++;
					}
					unk_0xCB91C0BA3439C5BF(iVar8, sVar4, sVar5, &(Global_1633501.f_88804[0 /*16*/]), &(Global_1633501.f_88804[1 /*16*/]), &(Global_1633501.f_88804[2 /*16*/]), &(Global_1633501.f_88804[3 /*16*/]), &(Global_1633501.f_88804[4 /*16*/]), &(Global_1633501.f_88804[5 /*16*/]), &(Global_1633501.f_88804[6 /*16*/]), &(Global_1633501.f_88804[7 /*16*/]), iVar9);
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
					if (unk_0xB15049400DCD8DC9() || unk_0x8EA3D5407E9F4AF0())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_SMS3";
					}
					if (unk_0x9C88EB7B70229335(&(Global_1633501.f_35487[iParam16 /*38*/].f_4[0 /*16*/])))
					{
						unk_0xBD3B904ED0023B7F(iVar8, sVar4, sVar5, "", "", "", "", 126);
					}
					else
					{
						iVar11 = 0;
						while (iVar11 <= 1)
						{
							if (unk_0xD3115E7F7876D6E6(&(Global_1633501.f_35487[iParam16 /*38*/].f_4[iVar11 /*16*/])))
							{
								StringCopy(&(Global_1633501.f_35487[iParam16 /*38*/].f_4[iVar11 /*16*/]), "", 64);
							}
							iVar11++;
						}
						unk_0xBD3B904ED0023B7F(iVar8, sVar4, sVar5, &(Global_1633501.f_35487[iParam16 /*38*/].f_4[0 /*16*/]), &(Global_1633501.f_35487[iParam16 /*38*/].f_4[1 /*16*/]), "", "", 126);
					}
				}
				else if (bParam8)
				{
					iVar9 = 61;
					if (bParam11)
					{
						if (func_202())
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
						if (unk_0xB15049400DCD8DC9() || unk_0x8EA3D5407E9F4AF0())
						{
							sVar5 = sVar4;
							sVar4 = "CELL_EMAIL_DESC";
						}
					}
					else if (func_202())
					{
						if (*uParam1 == 0)
						{
							sVar4 = "FMMC_KEY_TIP8S";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIP8FS";
						}
						if (unk_0xB15049400DCD8DC9() || unk_0x8EA3D5407E9F4AF0())
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
						if (unk_0xB15049400DCD8DC9())
						{
							sVar5 = sVar4;
							sVar4 = "FMMC_SMS4";
						}
					}
					if (unk_0x9C88EB7B70229335(sParam5))
					{
						unk_0xBD3B904ED0023B7F(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xBD3B904ED0023B7F(iVar8, sVar4, sVar5, sParam5, "", "", "", iVar9);
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
					if (unk_0xB15049400DCD8DC9())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_KEY_TIP9N";
					}
					if (unk_0x9C88EB7B70229335(sParam5))
					{
						unk_0xBD3B904ED0023B7F(iVar8, sVar4, sVar5, "", "", "", "", 16);
					}
					else
					{
						unk_0xBD3B904ED0023B7F(iVar8, sVar4, sVar5, sParam5, "", "", "", 16);
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
					if (unk_0xB15049400DCD8DC9())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_KEY_TIP12N";
					}
					if (unk_0x9C88EB7B70229335(sParam5))
					{
						unk_0xBD3B904ED0023B7F(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xBD3B904ED0023B7F(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
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
					if (unk_0x9C88EB7B70229335(sParam5))
					{
						unk_0xBD3B904ED0023B7F(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xBD3B904ED0023B7F(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam17)
				{
					if (unk_0x8EA3D5407E9F4AF0())
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
					if (unk_0xB15049400DCD8DC9())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_KEY_TIP14N";
					}
					if (unk_0x9C88EB7B70229335(sParam5))
					{
						unk_0xBD3B904ED0023B7F(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xBD3B904ED0023B7F(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (iParam18 > 0)
				{
					if (unk_0xB15049400DCD8DC9() || unk_0x8EA3D5407E9F4AF0())
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
					if (unk_0x9C88EB7B70229335(sParam5))
					{
						unk_0xBD3B904ED0023B7F(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xBD3B904ED0023B7F(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else
				{
					if (unk_0xB8EB22F9350F13DC() == 0)
					{
						iVar9 = 501;
						if (bParam11)
						{
							if (func_202())
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
						if (func_202())
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
						else if (func_202())
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
					if (unk_0xB15049400DCD8DC9() || unk_0x8EA3D5407E9F4AF0())
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
						if (unk_0xD3115E7F7876D6E6(&(Global_1633501.f_88675[iVar12 /*16*/])))
						{
							StringCopy(&(Global_1633501.f_88675[iVar12 /*16*/]), "", 64);
						}
						iVar12++;
					}
					if (bParam11)
					{
						unk_0xCB91C0BA3439C5BF(iVar8, sVar4, sVar5, sParam5, sParam10, "", "", "", "", "", "", iVar9);
					}
					else
					{
						unk_0xCB91C0BA3439C5BF(iVar8, sVar4, sVar5, &(Global_1633501.f_88675[0 /*16*/]), &(Global_1633501.f_88675[1 /*16*/]), &(Global_1633501.f_88675[2 /*16*/]), &(Global_1633501.f_88675[3 /*16*/]), &(Global_1633501.f_88675[4 /*16*/]), &(Global_1633501.f_88675[5 /*16*/]), &(Global_1633501.f_88675[6 /*16*/]), &(Global_1633501.f_88675[7 /*16*/]), iVar9);
					}
				}
			}
			StringCopy(&Global_1741452, "", 64);
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		
		case 1:
			*uParam0 = unk_0x8F013F929677E75D();
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
						if (unk_0x9C88EB7B70229335(&Global_1741452))
						{
							StringCopy(&Global_1741452, unk_0xE26771A3D90DD1DF(), 64);
							if (unk_0x9C88EB7B70229335(&Global_1741452))
							{
								*uParam1 = 0;
								return 1;
							}
							iVar1 = unk_0xF9108830F4935563(unk_0xE26771A3D90DD1DF());
							iVar3 = 0;
							while (iVar3 <= (iVar1 - 1))
							{
								if (*uParam2 != 0)
								{
									if (!unk_0x9C88EB7B70229335(&Global_1741452))
									{
										if (unk_0x6A7B0D91FD88D9EE(" ", unk_0xCF2B6C8AD32541B9(&Global_1741452, 0, 1)))
										{
											iVar2 = unk_0xF9108830F4935563(&Global_1741452);
											StringCopy(&Global_1741452, unk_0xCF2B6C8AD32541B9(&Global_1741452, 1, iVar2), 64);
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
					if (unk_0x20F731E58C38D75F(*uParam1))
					{
						if (!unk_0xD4C3848DF46DA552(*uParam1))
						{
							unk_0xF9E752009D9D07AB();
							iVar0 = unk_0xFDC8410B17CBB5A8(*uParam1);
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
									func_201(1);
									return 0;
									break;
							}
						}
						else if (bParam11)
						{
							if (unk_0x82F1A060D8F4583B(joaat("appinternet")) == 0)
							{
								unk_0xF9E752009D9D07AB();
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
							unk_0x81C1A4488D8A3AE8(&Global_1741452, uParam1);
						}
						else
						{
							unk_0x659B6BDD1275003E(&Global_1741452, uParam1);
						}
					}
					else if (unk_0x9C88EB7B70229335(unk_0xE26771A3D90DD1DF()))
					{
						*uParam1 = -2;
						*uParam2 = 0;
						*uParam0 = 0;
						unk_0xF9E752009D9D07AB();
						return 0;
					}
					else if (bParam22)
					{
						unk_0x81C1A4488D8A3AE8(unk_0xE26771A3D90DD1DF(), uParam1);
					}
					else
					{
						unk_0x659B6BDD1275003E(unk_0xE26771A3D90DD1DF(), uParam1);
					}
					if (unk_0x8EA3D5407E9F4AF0())
					{
						if ((!unk_0x6C119F3638AC7ABE() || func_199() == 0) || func_198() == 1)
						{
							*uParam1 = 0;
							*uParam2 = 0;
							*uParam0 = 3;
							return 0;
						}
					}
					if (bParam17)
					{
						unk_0x67D9DFC4D91122DD("ERROR_CHECKYACHTNAME");
						unk_0x168CD266B6A65426(1);
					}
					else
					{
						unk_0x67D9DFC4D91122DD("ERROR_CHECKPROFANITY");
						unk_0x168CD266B6A65426(1);
					}
					if (!unk_0x20F731E58C38D75F(*uParam1))
					{
						if (!unk_0x9C88EB7B70229335(&Global_1741452))
						{
							*uParam1 = -1;
						}
						else
						{
							*uParam1 = -2;
						}
						*uParam2 = 0;
						*uParam0 = 0;
						unk_0xF9E752009D9D07AB();
						return 0;
					}
				
				default:
			}
			break;
	}
	return 0;
}

int func_198()
{
	if (!func_199())
	{
		return 1;
	}
	return 0;
}

int func_199()
{
	if (func_200())
	{
		return 0;
	}
	if (unk_0x877FC5FAF7DC9BC5() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_200()
{
	return Global_2453019;
}

void func_201(int iParam0)
{
	Global_2453019 = iParam0;
}

int func_202()
{
	if (((unk_0xB8EB22F9350F13DC() == 7 || unk_0xB8EB22F9350F13DC() == 8) || unk_0xB8EB22F9350F13DC() == 9) || unk_0xB8EB22F9350F13DC() == 10)
	{
		return 1;
	}
	return 0;
}

void func_203(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_204())
	{
		iVar0 = Global_2522581[iParam0 /*3*/][func_59(iParam2)];
		if (iVar0 != 0)
		{
			unk_0xCE46AC18A4A47E2D(iVar0, iParam1, iParam3);
		}
	}
}

int func_204()
{
	return 1;
	return 0;
}

void func_205(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x63C468D583002D23() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0xCB150A8B81012128();
		}
		else
		{
			*uParam0 = unk_0x8F8F2E80A7DA4D64();
		}
	}
	else
	{
		*uParam0 = unk_0x94E3E074F38DF86C();
	}
	uParam0->f_1 = 1;
}

int func_206(var uParam0, char* sParam1)
{
	if (Global_2499540.f_1)
	{
		if (unk_0x462BB6BF1879A145())
		{
			unk_0xBBD8EC1AFF021747(&(uParam0->f_2963));
			Global_2499540.f_20 = { uParam0->f_2963 };
			StringCopy(&(Global_2499540.f_4), sParam1, 64);
			return 1;
		}
	}
	return 0;
}

void func_207(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x63C468D583002D23() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xCB150A8B81012128();
			}
			else
			{
				*uParam0 = unk_0x8F8F2E80A7DA4D64();
			}
		}
		else
		{
			*uParam0 = unk_0x94E3E074F38DF86C();
		}
		uParam0->f_1 = 1;
	}
}

void func_208()
{
	if (Global_14443.f_1 > 3)
	{
		Global_14443.f_1 = 9;
		Global_15758 = 1;
		if (Global_69702)
		{
			if (!unk_0xEF4E5E47AF0D4480())
			{
				func_139(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				unk_0xEB79FECD9022AAF0(&(Global_2494199.f_1640), 15);
			}
		}
	}
}

void func_209()
{
	unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
	unk_0xDF18CF55301CEB8B(4);
	unk_0xDF18CF55301CEB8B(0);
	unk_0xDF18CF55301CEB8B(2);
	unk_0xDCEB60B79ECB219E("CELL_CONDFON");
	unk_0xBAB00B98D1E61BEE(&Global_15760);
	unk_0x1798EBF9408190D3();
	func_72("CELL_300");
	func_72("CELL_219");
	func_72("CELL_219");
	unk_0x44983883E630A945();
	Global_2499540.f_37 = 1;
	unk_0x21E7933CCC7B3724(&Global_2313, 27);
	func_91();
}

bool func_210(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x7BC6F3BBFEAB9958(&uParam0, 13);
}

void func_211(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x7F755B97D75D9B44(sParam0);
	unk_0x6EBC181C75DC822D(iParam1, 1);
}

void func_212(char* sParam0, int iParam1)
{
	unk_0x252D021C9D92DBA9(sParam0);
	unk_0x8B1500AADBA665BD(0, 0, 1, iParam1);
}

void func_213(char* sParam0, var uParam1, int iParam2, int iParam3)
{
	unk_0x252D021C9D92DBA9(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x80A171A436807CA0(iParam2);
	}
	unk_0xBAB00B98D1E61BEE(uParam1);
	unk_0x8B1500AADBA665BD(0, 0, 1, iParam3);
}

int func_214(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	var uVar1;
	
	if (func_222(iParam0))
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
		iVar0 = unk_0xB58DEBB81964A4E9(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_1633501.f_85058[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if ((func_222(unk_0xBE369BE1BC57A796()) || (func_221() && func_220())) && !unk_0x48B8265059381CD0(Global_2494199.f_4449, 31))
	{
		uVar1 = func_219();
		if (unk_0x23E9113C762466ED(uVar1))
		{
			if (unk_0x0764AC92F08BEC9E(uVar1))
			{
				if (unk_0xDE881A032F5BA110(uVar1) != -1)
				{
					if (func_160(unk_0xDE881A032F5BA110(uVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xF7271A9481CAC8E3()) && iParam1 < 4)
						{
							if (Global_1633501.f_85058[iParam1] != -1)
							{
								return func_181(iParam1, iParam0, 0);
							}
							else
							{
								return func_216(iParam0, unk_0xDE881A032F5BA110(uVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_216(iParam0, unk_0xDE881A032F5BA110(uVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xF7271A9481CAC8E3()) && iParam1 < 4)
			{
				if (Global_1633501.f_85058[iParam1] != -1)
				{
					return func_181(iParam1, iParam0, 0);
				}
				else
				{
					return func_215(0, -1, 0);
				}
			}
			else
			{
				return func_215(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0xF7271A9481CAC8E3()) && iParam1 < 4)
	{
		if (Global_1633501.f_85058[iParam1] != -1)
		{
			return func_181(iParam1, iParam0, 0);
		}
		else
		{
			return func_216(iParam0, unk_0xBE369BE1BC57A796(), iParam1, bParam2, bParam3);
		}
	}
	return func_216(iParam0, unk_0xBE369BE1BC57A796(), iParam1, bParam2, bParam3);
}

int func_215(bool bParam0, int iParam1, bool bParam2)
{
	return func_183(unk_0xBE369BE1BC57A796(), bParam0, iParam1, bParam2);
}

int func_216(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0xB58DEBB81964A4E9(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1591201[unk_0xBE369BE1BC57A796() /*602*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1591201[iVar2 /*602*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_195())
			{
				iVar3 = func_191(iParam0);
				if (!iVar3 == -1)
				{
					return func_189(iVar3);
				}
			}
			if ((func_218(iParam1, iParam0, iVar0, 0) && !unk_0x48B8265059381CD0(Global_1633501.f_15, 18)) || ((func_188(unk_0xB58DEBB81964A4E9(iParam1), unk_0xB58DEBB81964A4E9(iParam0), 0) && unk_0x48B8265059381CD0(Global_1633501.f_15, 23)) && !unk_0x48B8265059381CD0(Global_1633501.f_15, 18)))
			{
				return func_187(1);
			}
			else if (unk_0x48B8265059381CD0(Global_1633501.f_15, 26))
			{
				return func_217(1);
			}
			else
			{
				return func_183(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574288 || Global_1574279) || Global_1591201[iParam0 /*602*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574288 == 1 && Global_1574298 == 0))
			{
				return func_187(1);
			}
			else
			{
				return func_183(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574283 && Global_1573825.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_191(iParam0);
	if (!iVar4 == -1)
	{
		return func_189(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_217(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_218(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0xB58DEBB81964A4E9(iParam0) == -1 && unk_0xB58DEBB81964A4E9(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0xB58DEBB81964A4E9(iParam0) == unk_0xB58DEBB81964A4E9(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0xB58DEBB81964A4E9(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0xB58DEBB81964A4E9(iParam0) == iParam2;
	}
	return unk_0xB58DEBB81964A4E9(iParam0) == iParam2;
}

var func_219()
{
	return Global_2359301.f_2;
}

bool func_220()
{
	return unk_0x48B8265059381CD0(Global_2359301, 4);
}

bool func_221()
{
	return unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_39.f_18, 14);
}

int func_222(int iParam0)
{
	if (func_175(iParam0, 0))
	{
		return 1;
	}
	if (func_223())
	{
		if (iParam0 == unk_0xBE369BE1BC57A796())
		{
			return 1;
		}
	}
	if (unk_0x48B8265059381CD0(Global_2421664[iParam0 /*358*/].f_198, 2))
	{
		return 1;
	}
	return 0;
}

bool func_223()
{
	return unk_0x48B8265059381CD0(Global_2359301, 3);
}

int func_224(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0x9E123D5FF2973C60())
	{
		return 0;
	}
	if (func_234())
	{
		return 0;
	}
	if (!unk_0x30F06AB0772AFB80())
	{
		return 0;
	}
	if (func_51())
	{
		return 0;
	}
	if (func_233())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_230(unk_0xBE369BE1BC57A796(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_229(unk_0xBE369BE1BC57A796()))
		{
			return 0;
		}
	}
	if (func_228())
	{
		return 0;
	}
	if (unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		return 0;
	}
	if (unk_0x95DBE123BC2DB80B())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0x94A5DEE82C898FDF(unk_0xBE369BE1BC57A796()))
		{
			return 0;
		}
	}
	if (Global_1574102)
	{
		return 0;
	}
	if (func_227())
	{
		return 0;
	}
	if (func_226())
	{
		return 0;
	}
	if (func_225())
	{
		return 0;
	}
	if (Global_68131)
	{
		return 0;
	}
	if (Global_2502455)
	{
		return 0;
	}
	return 1;
}

bool func_225()
{
	return Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_188 != 0;
}

bool func_226()
{
	return Global_2443134.f_570;
}

bool func_227()
{
	return Global_2443134.f_722;
}

bool func_228()
{
	return Global_2433125.f_2506.f_577;
}

int func_229(int iParam0)
{
	if (Global_2421664[iParam0 /*358*/].f_211 == 0)
	{
		return 0;
	}
	return 1;
}

int func_230(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_231(iParam0))
		{
			return 1;
		}
	}
	if (Global_1591201[iParam0 /*602*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_231(int iParam0)
{
	return func_232(iParam0);
}

bool func_232(int iParam0)
{
	return unk_0x48B8265059381CD0(Global_1591201[iParam0 /*602*/].f_13.f_1, 0);
}

bool func_233()
{
	return unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_39.f_18, 0);
}

int func_234()
{
	if (Global_15745 != 0 || unk_0x55C74612BE548D78())
	{
		return 1;
	}
	return 0;
}

int func_235(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_207(uParam0, bParam2, 0);
	if (unk_0x63C468D583002D23() && !bParam2)
	{
		if (unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(unk_0x94E3E074F38DF86C(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_236(var uParam0)
{
	return uParam0->f_1;
}

void func_237()
{
	Global_2499540.f_1 = 0;
	Global_2499540 = 0;
	Global_2499540.f_2 = 0;
	Global_2499540.f_33 = -1;
	Global_2499540.f_34 = -1;
	StringCopy(&(Global_2499540.f_4), "", 64);
	StringCopy(&(Global_2499540.f_39[0 /*16*/]), "", 64);
	Global_2499540.f_38 = 0;
	Global_2499540.f_56 = 0;
	Global_2499540.f_57 = 0;
	Global_2499540.f_58 = -2;
	Global_2499540.f_3 = 0;
	func_238(&(Global_2499540.f_20));
}

void func_238(var uParam0)
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

void func_239()
{
	Global_2499540.f_2 = 1;
	Global_2499540.f_38 = 1;
	if (unk_0x6C119F3638AC7ABE())
	{
		if (unk_0x462BB6BF1879A145())
		{
			while (unk_0x42DEB42B49D342CC())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0x8F6CF1874D6F6F16();
			Global_2499540 = 0;
			Global_2499540.f_2 = 0;
		}
		else if (func_210(Global_2499540.f_20))
		{
			if (unk_0x2D5BDD3304DD4725(&(Global_2499540.f_20)))
			{
				if (!unk_0x00F8BCD915B03B62(&(Global_2499540.f_20)))
				{
					func_237();
				}
			}
		}
		else
		{
			func_237();
		}
	}
	else
	{
		func_237();
	}
	if (Global_2499540.f_37)
	{
		func_30(0);
	}
	Global_2499540.f_37 = 0;
	Global_2499540.f_3 = 0;
}

void func_240(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_249())
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
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
			if (iParam1 > 0)
			{
				func_241(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
		case -1426920838:
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
		case -293060240:
			func_241(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_241(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_249())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0xAE2B681D784C7E64(func_60()) || unk_0xB4EE84164EB16A6B())
		{
			Global_2590762 = 1;
			return 0;
		}
		if (Global_2453677)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2590763 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2590252[iVar1 /*76*/].f_2 == 0)
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
	if (bVar0 || unk_0x1EB4A371BFB0E524(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0x0F0045367541BC90(iVar3))
		{
			*uParam0 = func_248(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2590252[*uParam0 /*76*/].f_69 = 1;
				}
			}
			Global_2590752 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2590761 = 1;
			Global_2590764 = iParam4;
			Global_2590766 = iParam3;
			Global_2590767 = 1;
			Global_2590765 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2590764 = iParam4;
			Global_2590766 = iParam3;
			Global_2590767 = 1;
			Global_2590765 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_247(1, iParam4);
			Global_2590761 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_242(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_242(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xEB79FECD9022AAF0(&(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_125.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_243(iParam0);
	}
}

void func_243(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_249())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_246(iParam0))
		{
			if (!bVar0)
			{
				unk_0x9B9AF9D22D9F6313();
			}
		}
		else if (!bVar0)
		{
			unk_0x2A618463FE332188(Global_2590252[iParam0 /*76*/]);
		}
		func_244(&(Global_2590252[iParam0 /*76*/]));
	}
}

void func_244(var uParam0)
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
	func_245(&(uParam0->f_8.f_3));
	func_245(&(uParam0->f_8.f_16));
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
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
}

void func_245(var uParam0)
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

int func_246(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2590252[iParam0 /*76*/].f_5 == 1;
	}
	return 0;
}

void func_247(int iParam0, var uParam1)
{
	Global_2454840 = uParam1;
	Global_2454839 = iParam0;
}

int func_248(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2590252[iVar0 /*76*/].f_2 == 0)
		{
			if (!func_249())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2590252[iVar0 /*76*/].f_2 = 1;
			Global_2590252[iVar0 /*76*/].f_1 = uParam5;
			Global_2590252[iVar0 /*76*/].f_3 = uParam1;
			Global_2590252[iVar0 /*76*/].f_4 = uParam2;
			Global_2590252[iVar0 /*76*/].f_7 = uParam3;
			Global_2590252[iVar0 /*76*/].f_5 = 0;
			Global_2590252[iVar0 /*76*/] = iParam0;
			Global_2590252[iVar0 /*76*/].f_6 = iParam4;
			Global_2590252[iVar0 /*76*/].f_72 = uParam8;
			Global_2590252[iVar0 /*76*/].f_71 = uParam7;
			Global_2590252[iVar0 /*76*/].f_75 = 0;
			Global_2590752 = 0;
			if (bParam6)
			{
				Global_2590252[iVar0 /*76*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_249()
{
	if (unk_0xEF4E5E47AF0D4480())
	{
		return 1;
	}
	return 0;
}

int func_250(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		iVar0 = unk_0xFB77422520228B28();
	}
	iVar0 = (iVar0 + unk_0x06BA26F22D42BC26(-1));
	return iVar0;
}

void func_251(bool bParam0)
{
	if (bParam0)
	{
		unk_0xEB79FECD9022AAF0(&Global_2314, 20);
	}
	else
	{
		unk_0x21E7933CCC7B3724(&Global_2314, 20);
	}
}

void func_252(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_253(char* sParam0)
{
	Global_1628 = 132;
	StringCopy(&Global_15760, sParam0, 64);
	if (Global_14443.f_1 > 3)
	{
		Global_14443.f_1 = 10;
		func_97();
	}
	unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
	unk_0xDF18CF55301CEB8B(4);
	unk_0xDF18CF55301CEB8B(0);
	unk_0xDF18CF55301CEB8B(2);
	unk_0xDCEB60B79ECB219E("CELL_CONDFON");
	unk_0xBAB00B98D1E61BEE(&Global_15760);
	unk_0x1798EBF9408190D3();
	func_72("CELL_300");
	func_72("CELL_211");
	func_72("CELL_211");
	unk_0x44983883E630A945();
	unk_0xEB79FECD9022AAF0(&Global_2313, 20);
	func_91();
	unk_0x21E7933CCC7B3724(&Global_2313, 20);
}

void func_254()
{
	unk_0xEA442DB136EE090F();
	Global_2499540 = 1;
	Global_2499540.f_2 = 0;
	Global_2499540.f_33 = -1;
	Global_2499540.f_34 = -1;
	Global_2499540.f_38 = 0;
}

void func_255()
{
	unk_0x2EB37CDED0E516F3(iLocal_107);
	unk_0xB47CC6339ADB0B67(iLocal_107);
	Local_334.f_2978 = 0;
	unk_0x21E7933CCC7B3724(&Global_2313, 9);
	unk_0x21E7933CCC7B3724(&Global_2313, 29);
	unk_0x21E7933CCC7B3724(&Global_2314, 20);
	unk_0x21E7933CCC7B3724(&Global_2314, 0);
	unk_0x21E7933CCC7B3724(&Global_2314, 18);
	Global_101700.f_27009[12 /*29*/].f_1 = uLocal_306;
	Global_101700.f_27009[2 /*29*/].f_1 = uLocal_307;
	Global_101700.f_27009[0 /*29*/].f_1 = uLocal_308;
	if (Local_334.f_2999 == 1)
	{
		if (unk_0x6C119F3638AC7ABE())
		{
			if (Global_2499540.f_33 == -1)
			{
				func_239();
			}
		}
	}
	unk_0x921053BAF754303D();
}

void func_256()
{
	if (!Global_69702)
	{
		if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
		{
			if (unk_0x48B8265059381CD0(Global_2313, 11))
			{
				if (!Global_14386)
				{
					unk_0xD11C043590A1D7B7(unk_0x17B5CC8A8615737D(), 0, 1);
				}
				if (Global_69702)
				{
					unk_0x6018E338F7ABCE75(unk_0x17B5CC8A8615737D(), 244, 1);
					unk_0x6018E338F7ABCE75(unk_0x17B5CC8A8615737D(), 243, 1);
					unk_0x6018E338F7ABCE75(unk_0x17B5CC8A8615737D(), 242, 1);
				}
				unk_0x21E7933CCC7B3724(&Global_2313, 11);
			}
		}
	}
}

void func_257()
{
	int iVar0[151];
	int iVar152;
	int iVar153;
	int iVar154;
	
	Global_101700.f_27009[147 /*29*/].f_1 = 1320;
	Global_101700.f_27009[74 /*29*/].f_1 = 180;
	Global_101700.f_27009[75 /*29*/].f_1 = 190;
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
		Global_101700.f_27009[iVar154 /*29*/].f_1 = 5000;
		func_16();
		while (iVar153 < 150)
		{
			if (unk_0x48B8265059381CD0(Global_2314, 0))
			{
				if ((iVar153 == 2 || iVar153 == 0) || iVar153 == 12)
				{
					Global_101700.f_27009[12 /*29*/].f_1 = 3;
					Global_101700.f_27009[2 /*29*/].f_1 = 1;
					Global_101700.f_27009[0 /*29*/].f_1 = 2;
					bLocal_94 = true;
				}
				else
				{
					bLocal_94 = false;
				}
			}
			else if (Global_101700.f_27009[iVar153 /*29*/].f_12[Global_14443] == 1)
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
						if (Global_101700.f_27009[iVar153 /*29*/].f_19[Global_14443] == 1 || func_79(iVar153, Global_14443))
						{
							fLocal_95 = (unk_0xBBDA792448DB5A89(Global_101700.f_27009[iVar153 /*29*/].f_1) / 100f);
						}
						else
						{
							fLocal_95 = unk_0xBBDA792448DB5A89(Global_101700.f_27009[iVar153 /*29*/].f_1);
						}
						if (Global_101700.f_27009[iVar154 /*29*/].f_19[Global_14443] == 1 || func_79(iVar154, Global_14443))
						{
							fLocal_96 = (unk_0xBBDA792448DB5A89(Global_101700.f_27009[iVar154 /*29*/].f_1) / 100f);
						}
						else
						{
							fLocal_96 = unk_0xBBDA792448DB5A89(Global_101700.f_27009[iVar154 /*29*/].f_1);
						}
						if (fLocal_95 < fLocal_96)
						{
							iVar154 = iVar153;
							if (unk_0x48B8265059381CD0(Global_2314, 0))
							{
								if (iVar154 == 2)
								{
									func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar152), 0f, -1f, -1f, "CELL_7001", &(Global_101700.f_27009[iVar154 /*29*/].f_3), &(Global_101700.f_27009[iVar154 /*29*/].f_7), 0, 0);
								}
								if (iVar154 == 0)
								{
									func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar152), 0f, -1f, -1f, "CELL_7002", &(Global_101700.f_27009[iVar154 /*29*/].f_3), &(Global_101700.f_27009[iVar154 /*29*/].f_7), 0, 0);
								}
								if (iVar154 == 12)
								{
									func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar152), 0f, -1f, -1f, "CELL_7003", &(Global_101700.f_27009[iVar154 /*29*/].f_3), "CELL_E_311", 0, 0);
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
		if (!unk_0x48B8265059381CD0(Global_2314, 0))
		{
			if (Global_101700.f_27009[iVar154 /*29*/].f_12[Global_14443] == 1)
			{
				if (iVar153 != Global_14443)
				{
					if (Global_101700.f_27009[iVar154 /*29*/].f_24[Global_14443] == 0)
					{
						if (Global_101700.f_27009[iVar154 /*29*/].f_19[Global_14443] == 1 || func_79(iVar154, Global_14443))
						{
							func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar152), 1f, -1f, -1f, &(Global_117[iVar154 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
						else
						{
							func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar152), 0f, -1f, -1f, &(Global_117[iVar154 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
					}
					else if (Global_101700.f_27009[iVar154 /*29*/].f_19[Global_14443] == 1 || func_79(iVar154, Global_14443))
					{
						func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar152), 1f, -1f, -1f, &(Global_101700.f_27009[iVar154 /*29*/].f_3), &(Global_101700.f_27009[iVar154 /*29*/].f_3), &(Global_101700.f_27009[iVar154 /*29*/].f_7), 0, 0);
					}
					else
					{
						func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar152), 0f, -1f, -1f, &(Global_101700.f_27009[iVar154 /*29*/].f_3), &(Global_101700.f_27009[iVar154 /*29*/].f_3), &(Global_101700.f_27009[iVar154 /*29*/].f_7), 0, 0);
					}
				}
			}
		}
		if (Global_101700.f_27009[iVar152 /*29*/].f_12[Global_14443] == 1)
		{
			if (iVar152 != Global_14443)
			{
				iLocal_97++;
			}
		}
		iVar152++;
	}
	if (!unk_0x48B8265059381CD0(Global_2314, 0))
	{
		if (unk_0x6C119F3638AC7ABE())
		{
			if (Global_14386 == 0)
			{
				func_259();
			}
		}
	}
	func_258();
}

void func_258()
{
	if (!Global_14443.f_1 == 10 && !Global_14443.f_1 == 9)
	{
		if (unk_0x48B8265059381CD0(Global_2313, 9))
		{
			unk_0x4EDE34FBADD967A6(750);
		}
		if (Global_14443.f_1 > 6)
		{
			func_142(Global_14424, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
			if (unk_0x48B8265059381CD0(Global_2314, 0))
			{
				func_140(Global_14424, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
			}
			else
			{
				func_140(Global_14424, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
			}
			Global_2316 = 99;
			if (unk_0x48B8265059381CD0(Global_2313, 9))
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
				unk_0x21E7933CCC7B3724(&Global_2313, 17);
			}
			else if (unk_0x48B8265059381CD0(Global_2314, 0))
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
					unk_0xEB79FECD9022AAF0(&Global_2313, 17);
				}
				else
				{
					func_139(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0xEB79FECD9022AAF0(&Global_2313, 17);
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
				unk_0xEB79FECD9022AAF0(&Global_2313, 17);
				func_139(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
	Global_101700.f_27009[12 /*29*/].f_1 = uLocal_306;
	Global_101700.f_27009[2 /*29*/].f_1 = uLocal_307;
	Global_101700.f_27009[0 /*29*/].f_1 = uLocal_308;
}

void func_259()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar16;
	int iVar17;
	
	Global_101700.f_27009[147 /*29*/].f_1 = 1320;
	Global_101700.f_27009[74 /*29*/].f_1 = 180;
	Global_101700.f_27009[75 /*29*/].f_1 = 190;
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iLocal_98 = iLocal_97;
	iLocal_99 = iLocal_98;
	func_266(&Local_334);
	iVar16 = 0;
	if (Global_69702)
	{
		if (func_262() == 0)
		{
			iVar16 = 1;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar0 = unk_0x0C36F33B3F746611(iVar2);
		if (func_160(iVar0, 0, 1))
		{
			if (iVar16 == 0)
			{
				if (!iVar0 == unk_0xBE369BE1BC57A796())
				{
					Local_334[iVar1] = iVar0;
					func_261(unk_0x592E5DF66777D40F(iVar0));
					iVar1++;
				}
			}
		}
		iVar2++;
	}
	Local_334.f_33 = iVar1;
	iVar2 = 0;
	iVar1 = 0;
	if (func_162(unk_0xBE369BE1BC57A796()))
	{
		iVar17 = unk_0x54F10BD9D7FA4465();
		if (iVar17 > 100)
		{
			iVar17 = 100;
		}
		iVar2 = 0;
		while (iVar2 <= (iVar17 - 1))
		{
			if (unk_0x9AE76F60790E7E8E(unk_0x95DD8CCEC5BEC12A(iVar2)))
			{
				if (unk_0x9360B6049759486E(unk_0x95DD8CCEC5BEC12A(iVar2)))
				{
					Var3 = { func_260(iVar2) };
					if (!unk_0xBD6B478BC887CAC6(&Var3))
					{
						if (iVar16 == 0)
						{
							if (iVar1 < 100)
							{
								Local_334.f_34[iVar1 /*29*/] = { Var3 };
								if (unk_0x8EA3D5407E9F4AF0())
								{
									StringCopy(&(Local_334.f_34[iVar1 /*29*/].f_13), unk_0x74FDAE0E79E3F35D(iVar2), 64);
								}
								else
								{
									StringCopy(&(Local_334.f_34[iVar1 /*29*/].f_13), unk_0x95DD8CCEC5BEC12A(iVar2), 64);
								}
								func_261(&(Local_334.f_34[iVar1 /*29*/].f_13));
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

struct<13> func_260(int iParam0)
{
	struct<13> Var0;
	
	unk_0x2872F55A505C079E(iParam0, &Var0, 13);
	return Var0;
}

void func_261(var uParam0)
{
	unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
	unk_0x584CF9CAE83942E5(unk_0xBBDA792448DB5A89(2));
	unk_0x584CF9CAE83942E5(unk_0xBBDA792448DB5A89(iLocal_98));
	unk_0x584CF9CAE83942E5(0f);
	unk_0xDCEB60B79ECB219E("STRING");
	unk_0xBAB00B98D1E61BEE(uParam0);
	unk_0x1798EBF9408190D3();
	func_72("CELL_MP_999");
	func_72("CELL_MP_999");
	unk_0x44983883E630A945();
	iLocal_98++;
	iLocal_97++;
}

int func_262()
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_265())
	{
		return 1;
	}
	if (func_264())
	{
		return 1;
	}
	return func_263(120, -1);
}

int func_263(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2522581[iParam0 /*3*/][func_59(iParam1)];
	if (unk_0x70BD7CFD9F825957(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_264()
{
	return Global_1315221;
}

bool func_265()
{
	return Global_1315223;
}

void func_266(var uParam0)
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
	func_252(&(uParam0->f_2979));
	uParam0->f_2999 = 0;
	StringCopy(&(uParam0->f_2983), "", 64);
}

void func_267()
{
	int iVar0[151];
	int iVar152;
	int iVar153;
	int iVar154;
	
	Global_101700.f_27009[147 /*29*/].f_1 = 1320;
	Global_101700.f_27009[74 /*29*/].f_1 = 180;
	Global_101700.f_27009[75 /*29*/].f_1 = 190;
	func_142(Global_14424, "SET_DATA_SLOT_EMPTY", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4EDE34FBADD967A6(0);
	func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), 0f, -1f, -1f, "CELL_232", "CELL_233", "CELL_393", 0, 0);
	iLocal_97 = 0;
	if (!unk_0x48B8265059381CD0(Global_2314, 0))
	{
		if (unk_0x6C119F3638AC7ABE())
		{
			if (Global_14386 == 0)
			{
				func_268();
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
		Global_101700.f_27009[iVar154 /*29*/].f_1 = 5000;
		func_16();
		while (iVar153 < 150)
		{
			if (unk_0x48B8265059381CD0(Global_2314, 0))
			{
				if ((iVar153 == 2 || iVar153 == 0) || iVar153 == 12)
				{
					Global_101700.f_27009[12 /*29*/].f_1 = 3;
					Global_101700.f_27009[2 /*29*/].f_1 = 1;
					Global_101700.f_27009[0 /*29*/].f_1 = 2;
					bLocal_94 = true;
				}
				else
				{
					bLocal_94 = false;
				}
			}
			else if (Global_101700.f_27009[iVar153 /*29*/].f_12[Global_14443] == 1)
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
						if (Global_101700.f_27009[iVar153 /*29*/].f_19[Global_14443] == 1 || func_79(iVar153, Global_14443))
						{
							fLocal_95 = (unk_0xBBDA792448DB5A89(Global_101700.f_27009[iVar153 /*29*/].f_1) / 100f);
						}
						else
						{
							fLocal_95 = unk_0xBBDA792448DB5A89(Global_101700.f_27009[iVar153 /*29*/].f_1);
						}
						if (Global_101700.f_27009[iVar154 /*29*/].f_19[Global_14443] == 1 || func_79(iVar154, Global_14443))
						{
							fLocal_96 = (unk_0xBBDA792448DB5A89(Global_101700.f_27009[iVar154 /*29*/].f_1) / 100f);
						}
						else
						{
							fLocal_96 = unk_0xBBDA792448DB5A89(Global_101700.f_27009[iVar154 /*29*/].f_1);
						}
						if (fLocal_95 < fLocal_96)
						{
							iVar154 = iVar153;
							if (unk_0x48B8265059381CD0(Global_2314, 0))
							{
								if (iVar154 == 2)
								{
									func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar152), 0f, -1f, -1f, "CELL_7001", &(Global_101700.f_27009[iVar154 /*29*/].f_3), &(Global_101700.f_27009[iVar154 /*29*/].f_7), 0, 0);
								}
								if (iVar154 == 0)
								{
									func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar152), 0f, -1f, -1f, "CELL_7002", &(Global_101700.f_27009[iVar154 /*29*/].f_3), &(Global_101700.f_27009[iVar154 /*29*/].f_7), 0, 0);
								}
								if (iVar154 == 12)
								{
									func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar152), 0f, -1f, -1f, "CELL_7003", &(Global_101700.f_27009[iVar154 /*29*/].f_3), "CELL_E_311", 0, 0);
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
		if (!unk_0x48B8265059381CD0(Global_2314, 0))
		{
			if (Global_101700.f_27009[iVar154 /*29*/].f_12[Global_14443] == 1)
			{
				if (iVar153 != Global_14443)
				{
					if (Global_101700.f_27009[iVar154 /*29*/].f_24[Global_14443] == 0)
					{
						if (Global_101700.f_27009[iVar154 /*29*/].f_19[Global_14443] == 1 || func_79(iVar154, Global_14443))
						{
							func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar152), 1f, -1f, -1f, &(Global_117[iVar154 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
						else
						{
							func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar152), 0f, -1f, -1f, &(Global_117[iVar154 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
					}
					else if (Global_101700.f_27009[iVar154 /*29*/].f_19[Global_14443] == 1 || func_79(iVar154, Global_14443))
					{
						func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar152), 1f, -1f, -1f, &(Global_101700.f_27009[iVar154 /*29*/].f_3), &(Global_101700.f_27009[iVar154 /*29*/].f_3), &(Global_101700.f_27009[iVar154 /*29*/].f_7), 0, 0);
					}
					else
					{
						func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar152), 0f, -1f, -1f, &(Global_101700.f_27009[iVar154 /*29*/].f_3), &(Global_101700.f_27009[iVar154 /*29*/].f_3), &(Global_101700.f_27009[iVar154 /*29*/].f_7), 0, 0);
					}
				}
			}
		}
		if (Global_101700.f_27009[iVar152 /*29*/].f_12[Global_14443] == 1)
		{
			if (iVar152 != Global_14443)
			{
				iLocal_97++;
			}
		}
		iVar152++;
	}
	func_258();
}

void func_268()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar16;
	int iVar17;
	
	Global_101700.f_27009[147 /*29*/].f_1 = 1320;
	Global_101700.f_27009[74 /*29*/].f_1 = 180;
	Global_101700.f_27009[75 /*29*/].f_1 = 190;
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iLocal_98 = iLocal_97;
	iLocal_99 = iLocal_98;
	func_266(&Local_334);
	iVar16 = 0;
	if (Global_69702)
	{
		if (func_262() == 0)
		{
			iVar16 = 1;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar0 = unk_0x0C36F33B3F746611(iVar2);
		if (func_160(iVar0, 0, 1))
		{
			if (iVar16 == 0)
			{
				if (!iVar0 == unk_0xBE369BE1BC57A796())
				{
					Local_334[iVar1] = iVar0;
					func_269(unk_0x592E5DF66777D40F(iVar0));
					iVar1++;
				}
			}
		}
		iVar2++;
	}
	Local_334.f_33 = iVar1;
	iVar1 = 0;
	iVar2 = 0;
	if (func_162(unk_0xBE369BE1BC57A796()))
	{
		iVar17 = unk_0x54F10BD9D7FA4465();
		if (iVar17 > 100)
		{
			iVar17 = 100;
		}
		iVar2 = 0;
		while (iVar2 <= (iVar17 - 1))
		{
			if (unk_0x9AE76F60790E7E8E(unk_0x95DD8CCEC5BEC12A(iVar2)))
			{
				if (unk_0x9360B6049759486E(unk_0x95DD8CCEC5BEC12A(iVar2)))
				{
					Var3 = { func_260(iVar2) };
					if (!unk_0xBD6B478BC887CAC6(&Var3))
					{
						if (iVar16 == 0)
						{
							if (iVar1 < 100)
							{
								Local_334.f_34[iVar1 /*29*/] = { Var3 };
								if (unk_0x8EA3D5407E9F4AF0())
								{
									StringCopy(&(Local_334.f_34[iVar1 /*29*/].f_13), unk_0x74FDAE0E79E3F35D(iVar2), 64);
								}
								else
								{
									StringCopy(&(Local_334.f_34[iVar1 /*29*/].f_13), unk_0x95DD8CCEC5BEC12A(iVar2), 64);
								}
								func_269(&(Local_334.f_34[iVar1 /*29*/].f_13));
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

void func_269(var uParam0)
{
	unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
	unk_0x584CF9CAE83942E5(unk_0xBBDA792448DB5A89(2));
	unk_0x584CF9CAE83942E5(unk_0xBBDA792448DB5A89(iLocal_98));
	unk_0x584CF9CAE83942E5(0f);
	unk_0xDCEB60B79ECB219E("STRING");
	unk_0xBAB00B98D1E61BEE(uParam0);
	unk_0x1798EBF9408190D3();
	func_72("CELL_MP_999");
	func_72("CELL_MP_999");
	unk_0x44983883E630A945();
	iLocal_98++;
	iLocal_97++;
}

