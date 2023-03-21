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
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 10;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 2;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 8;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 8;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	float fLocal_93 = 0f;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	int iLocal_96 = 0;
	bool bLocal_97 = 0;
	float fLocal_98 = 0f;
	float fLocal_99 = 0f;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	var uLocal_105 = 0;
	int iLocal_106 = 0;
	var uLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	var uLocal_113[1] = { 0 };
	char cLocal_115[16] = "";
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	bool bLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	bool bLocal_126 = 0;
	int iLocal_127 = 0;
	float fLocal_128 = 0f;
	float fLocal_129 = 0f;
	float fLocal_130 = 0f;
	float fLocal_131 = 0f;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	char cLocal_140[16] = "";
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 16;
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
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	int iLocal_312 = 0;
	char cLocal_313[16] = "";
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	struct<3> Local_317 = { 0, 0, 0 } ;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323[7] = { 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_331 = 0;
	bool bLocal_332 = 0;
	bool bLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	struct<3000> Local_337 = { 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_3337 = { 0, 0, 0 } ;
	char cLocal_3340[64] = "";
	var uLocal_3348 = 0;
	var uLocal_3349 = 0;
	var uLocal_3350 = 0;
	var uLocal_3351 = 0;
	var uLocal_3352 = 0;
	var uLocal_3353 = 0;
	var uLocal_3354 = 0;
	var uLocal_3355 = 0;
	int iLocal_3356 = 0;
	var uLocal_3357 = 0;
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
	fLocal_93 = ((0.05f + 0.275f) - 0.01f);
	iLocal_102 = 9999;
	iLocal_103 = 9999;
	fLocal_128 = 0.82f;
	fLocal_129 = 0.42f;
	fLocal_130 = 0f;
	fLocal_131 = 0f;
	unk_0x945226432ACF160F();
	unk_0xF6082E2ADA1C795B(&Global_2313, 17);
	unk_0x507FE690B1271947(&Global_2314, 18);
	unk_0x507FE690B1271947(&Global_2314, 20);
	uLocal_309 = Global_103236.f_27831[12 /*29*/].f_1;
	uLocal_310 = Global_103236.f_27831[2 /*29*/].f_1;
	uLocal_311 = Global_103236.f_27831[0 /*29*/].f_1;
	iLocal_110 = unk_0x9FF6FFD9EB30D086();
	if (Global_69800)
	{
		func_269();
	}
	else
	{
		func_259();
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
	iLocal_137 = unk_0x3732B96D7A1859B4();
	Global_103236.f_27831[147 /*29*/].f_1 = 1320;
	Global_103236.f_27831[74 /*29*/].f_1 = 180;
	Global_103236.f_27831[75 /*29*/].f_1 = 190;
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xAA4F14DA15DB0B51(Global_2314, 18))
		{
			func_258();
			if (Global_14443.f_1 > 3)
			{
				Global_14443.f_1 = 8;
			}
			unk_0x507FE690B1271947(&Global_2314, 18);
			func_257();
		}
		if ((iLocal_122 == 1 && Global_14443.f_1 == 10) && Local_337.f_2999 == 1)
		{
			func_170();
		}
		if (Global_14443.f_1 != 9)
		{
			switch (Global_14443.f_1)
			{
				case 7:
					if (unk_0xAA4F14DA15DB0B51(Global_2313, 16))
					{
						func_169();
					}
					else
					{
						func_166();
						if (unk_0xAA4F14DA15DB0B51(Global_2314, 0))
						{
							iLocal_138 = unk_0x3732B96D7A1859B4();
							if ((iLocal_138 - iLocal_137) > 1000)
							{
								if (iLocal_139)
								{
									func_165();
								}
								else
								{
									func_147();
								}
							}
							if (iLocal_139)
							{
								func_146();
							}
						}
						else
						{
							func_147();
						}
					}
					if (!unk_0xAA4F14DA15DB0B51(Global_2313, 9))
					{
						if (func_145(2, Global_14415, 0))
						{
							if (unk_0xAA4F14DA15DB0B51(Global_2314, 0))
							{
							}
							else if (Global_14386 == 0)
							{
								if (!unk_0xAA4F14DA15DB0B51(Global_2314, 19))
								{
									func_143();
									func_142(Global_14424, "SET_DATA_SLOT_EMPTY", 11f, -1082130432, -1082130432, -1082130432, -1082130432);
									iLocal_112 = 0;
									StringCopy(&cLocal_115, "", 16);
									func_141();
									Global_14423 = 0;
									iLocal_122 = 0;
									func_142(Global_14424, "DISPLAY_VIEW", 11f, -1082130432, -1082130432, -1082130432, -1082130432);
									func_140(Global_14424, "SET_HEADER", "CELL_221", 0, 0, 0, 0);
									if (Global_14431)
									{
										func_139(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
										func_139(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
										unk_0xF6082E2ADA1C795B(&Global_2313, 17);
										func_139(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
									}
									else
									{
										func_139(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
										func_139(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
										unk_0xF6082E2ADA1C795B(&Global_2313, 17);
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
					if (iLocal_122 == 1)
					{
						func_166();
						func_170();
					}
					else if (iLocal_120 == 0)
					{
						func_129();
						func_122();
					}
					else
					{
						if (unk_0x83666F9FB8FEBD4B() > 1500)
						{
							iLocal_335 = 0;
							while (iLocal_335 < 4)
							{
								if (unk_0x35302CD5A5D37EED(&(Global_103236.f_27831[Global_1628 /*29*/].f_3), &(Global_2151[iLocal_335 /*16*/])))
								{
									if (!unk_0x35302CD5A5D37EED(&(Global_2151[iLocal_335 /*16*/].f_8), "CELL_SFUN_NULL"))
									{
										bLocal_332 = true;
										iLocal_334 = iLocal_335;
									}
									else
									{
										bLocal_332 = false;
									}
								}
								iLocal_335++;
							}
							if (iLocal_121 == 0)
							{
								unk_0xD1FCC52F87A98873(Global_14424, "GET_CURRENT_SELECTION");
								uLocal_105 = unk_0xCA19844C8EBF135B();
								while (!unk_0x49312763BCF4C85A(uLocal_105))
								{
									unk_0x4EDE34FBADD967A6(0);
								}
								iLocal_106 = unk_0x7E45511185E08C01(uLocal_105);
								func_120();
							}
						}
						func_166();
						if (bLocal_333 == 1)
						{
							if (!Global_103236.f_17884.f_396)
							{
								if (!func_116(Global_14443, Global_1628))
								{
									Global_103236.f_17884.f_396 = 1;
								}
							}
						}
						if (func_116(Global_14443, Global_1628))
						{
							if (!Global_103236.f_17884.f_397)
							{
								if (bLocal_332 == 1)
								{
									if (func_115(Global_87769))
									{
										switch (func_113("AM_H_BBUDDY"))
										{
											case 2:
												func_111("AM_H_BBUDDY", 2, 500, 10000, 10000, 7, 0, 0, 0);
												break;
											
											case 1:
												Global_103236.f_17884.f_397 = 1;
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
												Global_103236.f_17884.f_397 = 1;
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
						if (iLocal_121)
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
						if (Global_69800)
						{
							func_269();
						}
						else
						{
							func_259();
						}
						unk_0x4EDE34FBADD967A6(0);
						if (Global_14443.f_1 > 3)
						{
							Global_14443.f_1 = 7;
						}
						StringCopy(&cLocal_115, "", 16);
						if (iLocal_120 == 1)
						{
							iLocal_120 = 0;
						}
						if (iLocal_121 == 1)
						{
							iLocal_121 = 0;
						}
						iLocal_122 = 0;
					}
					break;
				
				case 10:
					if (iLocal_133 == 4)
					{
					}
					func_3();
					break;
				
				case 6:
					func_257();
					break;
				
				default:
					break;
			}
			if (!Global_14443.f_1 == 8)
			{
				if ((Global_2921 - Global_2920) > Global_2922)
				{
					if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
					{
						if (unk_0x7B0D0EA42CF4A6CC(unk_0x0FFED3E94261A832()))
						{
							if (func_145(2, Global_14411, 0))
							{
								if (unk_0xAA4F14DA15DB0B51(Global_2314, 0))
								{
									func_75();
								}
								else
								{
									func_75();
									if (!Global_14443.f_1 == 10)
									{
										func_257();
									}
									else if (Global_1628 == 132)
									{
										if (Global_2503090.f_1 || unk_0xAA4F14DA15DB0B51(Global_2314, 20))
										{
											Global_14443.f_1 = 7;
											func_142(Global_14424, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
											if (unk_0xAA4F14DA15DB0B51(Global_2314, 0))
											{
												func_140(Global_14424, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
											}
											else
											{
												func_140(Global_14424, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
											}
											unk_0xDC0343058D861402(iLocal_110);
											iLocal_133 = 0;
										}
									}
									else
									{
										func_258();
										Global_14443.f_1 = 7;
										func_2();
										func_142(Global_14424, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
										if (unk_0xAA4F14DA15DB0B51(Global_2314, 0))
										{
											func_140(Global_14424, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
										}
										else
										{
											func_140(Global_14424, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
										}
										unk_0xDC0343058D861402(iLocal_110);
										iLocal_133 = 0;
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
			func_257();
		}
		if (func_1())
		{
			func_257();
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
		if (unk_0xAA4F14DA15DB0B51(Global_2313, 9))
		{
			unk_0x4EDE34FBADD967A6(750);
		}
		if (Global_14443.f_1 > 6)
		{
			func_142(Global_14424, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
			if (unk_0xAA4F14DA15DB0B51(Global_2314, 0))
			{
				func_140(Global_14424, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
			}
			else
			{
				func_140(Global_14424, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
			}
			Global_2316 = 99;
			if (unk_0xAA4F14DA15DB0B51(Global_2313, 9))
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
				unk_0x507FE690B1271947(&Global_2313, 17);
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_2314, 0))
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
				if (iLocal_100 > 0)
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
					unk_0xF6082E2ADA1C795B(&Global_2313, 17);
				}
				else
				{
					func_139(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0xF6082E2ADA1C795B(&Global_2313, 17);
				}
				func_139(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				if (iLocal_100 > 0)
				{
					func_139(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				else
				{
					func_139(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_139(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xF6082E2ADA1C795B(&Global_2313, 17);
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
	
	switch (iLocal_133)
	{
		case 0:
			if (Global_1628 == 81)
			{
				if (Global_1573338 == 0)
				{
					Global_1573338 = 1;
				}
				if (unk_0x8B6A82A35983BFC8("LOWCAAU"))
				{
					unk_0x324D82949BFAAC9B("LOWCAAU", 15);
					while (!unk_0x44FB58EFDA8731B7(15))
					{
						unk_0x4EDE34FBADD967A6(0);
					}
				}
				StringCopy(&cLocal_140, "LOWCA_CALL10_1", 16);
			}
			else
			{
				if (unk_0x8B6A82A35983BFC8(&Global_16768))
				{
					unk_0xC9173FA08E7D8227(&Global_16768, 1);
					while (!unk_0x44FB58EFDA8731B7(1))
					{
						unk_0x4EDE34FBADD967A6(0);
					}
				}
				cLocal_140 = { Global_117[Global_1628 /*10*/] };
				StringConCat(&cLocal_140, "_1", 16);
			}
			if (unk_0x9418F0AE636D9770(&cLocal_140) || iLocal_312 == 1)
			{
				iLocal_134 = Global_16765;
				if (func_74(129))
				{
					iLocal_134 = Global_88350;
				}
			}
			else
			{
				iLocal_134 = Global_16764;
			}
			if ((iLocal_312 == 1 && unk_0x35302CD5A5D37EED(&cLocal_313, "CELLPHONE_CHEAT")) && Global_69800 == 0)
			{
				if ((unk_0x35302CD5A5D37EED(&Local_317, "CHEAT_SEAPLANE") || unk_0x35302CD5A5D37EED(&Local_317, "CHEAT_DUELC")) || unk_0x35302CD5A5D37EED(&Local_317, "CHEAT_BUBBLE"))
				{
					bLocal_126 = true;
				}
				if (bLocal_126)
				{
					if (func_73())
					{
						iLocal_127 = 0;
					}
					else
					{
						iLocal_127 = 1;
					}
				}
				if (iLocal_127 == 0)
				{
					iLocal_135 = unk_0x3732B96D7A1859B4();
					unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
					unk_0x4CECF13AF144A8F6(4);
					unk_0x4CECF13AF144A8F6(0);
					unk_0x4CECF13AF144A8F6(3);
					unk_0xADBDBA2DF8443753("STRING");
					unk_0xCF50F77421826072(&cLocal_115, -1);
					unk_0xF7D95CCE1364B5CE();
					func_72("CELL_300");
					if (unk_0x35302CD5A5D37EED(&Local_317, "CHEAT_MONOC"))
					{
						func_72("CELL_MONOSIGNAL");
					}
					else if (unk_0x35302CD5A5D37EED(&Local_317, "CHEAT_DIRECTOR"))
					{
						func_72("CELL_DRCT");
					}
					else
					{
						func_72("CELL_CHEAT");
					}
					func_72("CELL_195");
					unk_0x8123397DC676E794();
					func_142(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
					iLocal_133 = 1;
				}
				else
				{
					iLocal_133 = 2;
					iLocal_135 = unk_0x3732B96D7A1859B4();
				}
			}
			else
			{
				iLocal_133 = 2;
				iLocal_135 = unk_0x3732B96D7A1859B4();
			}
			break;
		
		case 1:
			iLocal_136 = unk_0x3732B96D7A1859B4();
			if ((iLocal_136 - iLocal_135) > 1500)
			{
				iLocal_133 = 3;
			}
			break;
		
		case 2:
			iLocal_136 = unk_0x3732B96D7A1859B4();
			if (iLocal_134 != Global_16764)
			{
				if (unk_0xBB6A424DD700764B(iLocal_110))
				{
					if (Global_2503090.f_37 == 0)
					{
						if (Global_14386)
						{
							unk_0x08BE237DBCD9CBD9(iLocal_110, "Dial_and_Remote_Ring", &Global_14432, 1);
						}
						else if ((iLocal_136 - iLocal_135) > 1700)
						{
							unk_0x08BE237DBCD9CBD9(iLocal_110, "Remote_Ring", &Global_14432, 1);
						}
					}
				}
			}
			else if ((func_74(130) || func_74(132)) || func_74(128))
			{
				if (unk_0xBB6A424DD700764B(iLocal_110))
				{
					if (Global_2503090.f_37 == 0)
					{
						if (Global_14386)
						{
							unk_0x08BE237DBCD9CBD9(iLocal_110, "Dial_and_Remote_Ring", &Global_14432, 1);
						}
						else if ((iLocal_136 - iLocal_135) > 1700)
						{
							unk_0x08BE237DBCD9CBD9(iLocal_110, "Remote_Ring", &Global_14432, 1);
						}
					}
				}
			}
			if ((iLocal_136 - iLocal_135) > iLocal_134)
			{
				if (iLocal_134 == Global_16764)
				{
					bLocal_123 = false;
					if ((Global_1628 == 130 || Global_1628 == 132) || Global_1628 == 128)
					{
						if (!unk_0xAA4F14DA15DB0B51(Global_2314, 20))
						{
							bLocal_123 = true;
							if ((iLocal_136 - iLocal_135) > iLocal_134 + 10000)
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
					if (!bLocal_123)
					{
						iLocal_133 = 4;
						unk_0xDC0343058D861402(iLocal_110);
						iLocal_124 = 0;
						unk_0x5AE11BC36633DE4E(0);
						if (Global_103236.f_27831[Global_1628 /*29*/].f_24[Global_14443] == 0)
						{
							if (Global_1628 == 132)
							{
								unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
								unk_0x4CECF13AF144A8F6(4);
								unk_0x4CECF13AF144A8F6(0);
								unk_0x4CECF13AF144A8F6(2);
								unk_0xADBDBA2DF8443753("CELL_CONDFON");
								unk_0xCF6846167A5EFE98(&Global_15760);
								unk_0xF7D95CCE1364B5CE();
								func_72("CELL_300");
								func_72("CELL_220");
								func_72("CELL_219");
								unk_0x8123397DC676E794();
							}
							else
							{
								func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(5), -1f, -1f, &(Global_117[Global_1628 /*10*/].f_4), "CELL_300", "CELL_220", "CELL_195", 0);
							}
						}
						else
						{
							func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(5), -1f, -1f, &(Global_103236.f_27831[Global_1628 /*29*/].f_3), &(Global_103236.f_27831[Global_1628 /*29*/].f_7), "CELL_220", &(Global_103236.f_27831[Global_1628 /*29*/].f_3), 0);
						}
						func_142(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					iLocal_133 = 3;
				}
			}
			break;
		
		case 3:
			if (iLocal_312 == 1)
			{
				if (unk_0x35302CD5A5D37EED(&cLocal_313, "CELLPHONE_CHEAT") && Global_69800 == 0)
				{
					if (unk_0x35302CD5A5D37EED(&Local_317, "CHEAT_MONOC"))
					{
						if (Global_3117 == 0)
						{
							Global_3117 = 1;
							Global_103236.f_13832[0 /*20*/].f_6 = 5;
							Global_103236.f_13832[2 /*20*/].f_6 = 5;
							Global_103236.f_13832[1 /*20*/].f_6 = 5;
							if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
							{
								if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
								{
									if (!unk_0x4A40D388873A536C(4, unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), 40f))
									{
										unk_0xBBB571ECEE421BCB(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1) + Vector(2f, 0f, 0f), 4, 0.1f, 1, 0, 1065353216, 0);
									}
								}
							}
						}
						else
						{
							Global_3117 = 0;
						}
					}
					if (unk_0x35302CD5A5D37EED(&Local_317, "CHEAT_SUPJUM"))
					{
						func_71(0, 0);
					}
					if (unk_0x35302CD5A5D37EED(&Local_317, "CHEAT_HEALA"))
					{
						func_71(6, 0);
					}
					if (unk_0x35302CD5A5D37EED(&Local_317, "CHEAT_SLIDEYC"))
					{
						func_71(1, 0);
					}
					if (unk_0x35302CD5A5D37EED(&Local_317, "CHEAT_FASTR"))
					{
						func_71(2, 0);
					}
					if (unk_0x35302CD5A5D37EED(&Local_317, "CHEAT_WANTDN"))
					{
						func_71(9, 0);
					}
					if (unk_0x35302CD5A5D37EED(&Local_317, "CHEAT_WANTUP"))
					{
						func_71(8, 0);
					}
					if (unk_0x35302CD5A5D37EED(&Local_317, "CHEAT_WEATHER"))
					{
						func_71(5, 0);
					}
					if (unk_0x35302CD5A5D37EED(&Local_317, "CHEAT_FASTS"))
					{
						func_71(3, 0);
					}
					if (unk_0x35302CD5A5D37EED(&Local_317, "CHEAT_POWER"))
					{
						func_71(7, 0);
					}
					if (unk_0x35302CD5A5D37EED(&Local_317, "CHEAT_CHUTE"))
					{
						func_71(10, 0);
					}
					if (unk_0x35302CD5A5D37EED(&Local_317, "CHEAT_BANG"))
					{
						func_71(11, 0);
					}
					if (unk_0x35302CD5A5D37EED(&Local_317, "CHEAT_FLAMB"))
					{
						func_71(12, 0);
					}
					if (unk_0x35302CD5A5D37EED(&Local_317, "CHEAT_EXPMEL"))
					{
						func_71(13, 0);
					}
					if (unk_0x35302CD5A5D37EED(&Local_317, "CHEAT_ZEROG"))
					{
						func_71(14, 0);
					}
					if (unk_0x35302CD5A5D37EED(&Local_317, "CHEAT_INVINC"))
					{
						func_71(15, 0);
					}
					if (unk_0x35302CD5A5D37EED(&Local_317, "CHEAT_SLOWMO"))
					{
						func_71(16, 0);
					}
					if (unk_0x35302CD5A5D37EED(&Local_317, "CHEAT_SKYFA"))
					{
						func_71(17, 0);
					}
					if (unk_0x35302CD5A5D37EED(&Local_317, "CHEAT_DRUNK"))
					{
						func_71(18, 0);
					}
					if (unk_0x35302CD5A5D37EED(&Local_317, "CHEAT_DEADEYE"))
					{
						func_71(19, 0);
					}
					if (unk_0x35302CD5A5D37EED(&Local_317, "CHEAT_WEAPONS"))
					{
						func_71(4, 0);
					}
					if (unk_0x35302CD5A5D37EED(&Local_317, "CHEAT_BUZZARD"))
					{
						func_71(20, joaat("buzzard"));
					}
					if (unk_0x35302CD5A5D37EED(&Local_317, "CHEAT_COMET2"))
					{
						func_71(20, joaat("comet2"));
					}
					if (unk_0x35302CD5A5D37EED(&Local_317, "CHEAT_BMX"))
					{
						func_71(20, joaat("bmx"));
					}
					if (unk_0x35302CD5A5D37EED(&Local_317, "CHEAT_CADDY"))
					{
						func_71(20, joaat("caddy"));
					}
					if (unk_0x35302CD5A5D37EED(&Local_317, "CHEAT_DUSTER"))
					{
						func_71(20, joaat("duster"));
					}
					if (unk_0x35302CD5A5D37EED(&Local_317, "CHEAT_PCJ"))
					{
						func_71(20, joaat("pcj"));
					}
					if (unk_0x35302CD5A5D37EED(&Local_317, "CHEAT_RAPIDGT"))
					{
						func_71(20, joaat("rapidgt"));
					}
					if (unk_0x35302CD5A5D37EED(&Local_317, "CHEAT_STRETCH"))
					{
						func_71(20, joaat("stretch"));
					}
					if (unk_0x35302CD5A5D37EED(&Local_317, "CHEAT_STUNT"))
					{
						func_71(20, joaat("stunt"));
					}
					if (unk_0x35302CD5A5D37EED(&Local_317, "CHEAT_TRASH"))
					{
						func_71(20, joaat("trash"));
					}
					if (unk_0x35302CD5A5D37EED(&Local_317, "CHEAT_SANCHEZ"))
					{
						func_71(20, joaat("sanchez"));
					}
					if (func_73())
					{
						if (unk_0x35302CD5A5D37EED(&Local_317, "CHEAT_SEAPLANE"))
						{
							func_71(20, joaat("dodo"));
						}
						if (unk_0x35302CD5A5D37EED(&Local_317, "CHEAT_DUELC"))
						{
							func_71(20, joaat("dukes2"));
						}
						if (unk_0x35302CD5A5D37EED(&Local_317, "CHEAT_BUBBLE"))
						{
							func_71(20, joaat("submersible2"));
						}
					}
					if (unk_0x35302CD5A5D37EED(&Local_317, "CHEAT_DIRECTOR"))
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
				else if (unk_0x35302CD5A5D37EED(&cLocal_313, "CELLPHONE_CHEAT"))
				{
					func_30(0);
				}
				else
				{
					func_29(&uLocal_144, 1, 0, &Local_317, 0, 1);
					Global_16766 = 0;
					func_28(&uLocal_144, Global_1628, &Global_16768, &cLocal_313, 2, 0, 0, 0, 0);
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
				func_29(&uLocal_144, 1, 0, &Var1, 0, 1);
				Global_16766 = 0;
				switch (Global_1628)
				{
					case 81:
						func_9(&uLocal_144, 81, "LOWCAAU", "LOWCA_CALL10", 2, 0, 0, 0, 0);
						break;
					
					case 13:
						func_9(&uLocal_144, 12, &Global_16768, "LES_APH2", 2, 0, 0, 0, 0);
						break;
					
					case 36:
						iVar7 = unk_0xDA870B7547A455EA();
						if (iVar7 > 17 || iVar7 < 9)
						{
							func_9(&uLocal_144, Global_1628, &Global_16768, "SHR_APH3", 2, 0, 0, 0, 0);
						}
						if (iVar7 > 8 && iVar7 < 13)
						{
							func_9(&uLocal_144, Global_1628, &Global_16768, "SHR_APH1", 2, 0, 0, 0, 0);
						}
						if (iVar7 > 12 && iVar7 < 18)
						{
							func_9(&uLocal_144, Global_1628, &Global_16768, "SHR_APH2", 2, 0, 0, 0, 0);
						}
						break;
					
					case 17:
						if (func_8(21) && !func_8(22))
						{
							func_9(&uLocal_144, Global_1628, &Global_16768, "AMA_APH2", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_144, Global_1628, &Global_16768, &(Global_117[Global_1628 /*10*/]), 2, 0, 0, 0, 0);
						}
						break;
					
					case 20:
						if (Global_69800)
						{
							func_9(&uLocal_144, Global_1628, &Global_16768, "ANS_RBusy", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_144, Global_1628, &Global_16768, &(Global_117[Global_1628 /*10*/]), 2, 0, 0, 0, 0);
						}
						break;
					
					case 44:
						if (func_7(126))
						{
							func_9(&uLocal_144, Global_1628, &Global_16768, "DEN_APH3", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_144, Global_1628, &Global_16768, &(Global_117[Global_1628 /*10*/]), 2, 0, 0, 0, 0);
						}
						break;
					
					case 15:
						if (!func_8(19))
						{
							func_9(&uLocal_144, Global_1628, &Global_16768, "TRA_APH1", 2, 0, 0, 0, 0);
						}
						else if (!func_8(20))
						{
							func_9(&uLocal_144, Global_1628, &Global_16768, "TRA_APH2", 2, 0, 0, 0, 0);
						}
						else if (!func_8(22))
						{
							func_9(&uLocal_144, Global_1628, &Global_16768, "TRA_APH3", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_144, Global_1628, &Global_16768, "TRA_APH4", 2, 0, 0, 0, 0);
						}
						break;
					
					case 19:
						if (!func_8(19))
						{
							func_9(&uLocal_144, Global_1628, &Global_16768, "LAM_APH1", 2, 0, 0, 0, 0);
						}
						else if (!func_8(20))
						{
							func_9(&uLocal_144, Global_1628, &Global_16768, "LAM_APH2", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_144, Global_1628, &Global_16768, "LAM_APH3", 2, 0, 0, 0, 0);
						}
						break;
					
					case 14:
						if (!func_8(19))
						{
							func_9(&uLocal_144, Global_1628, &Global_16768, "JIM_APH1", 2, 0, 0, 0, 0);
						}
						else if (!func_8(21))
						{
							func_9(&uLocal_144, Global_1628, &Global_16768, "JIM_APH3", 2, 0, 0, 0, 0);
						}
						else if (!func_8(22))
						{
							func_9(&uLocal_144, Global_1628, &Global_16768, "JIM_APH2", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_144, Global_1628, &Global_16768, "JIM_APH4", 2, 0, 0, 0, 0);
						}
						break;
					
					case 49:
						if (func_6(7))
						{
							func_9(&uLocal_144, Global_1628, &Global_16768, "BAR_APH2", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_144, Global_1628, &Global_16768, "BAR_APH1", 2, 0, 0, 0, 0);
						}
						break;
					
					case 85:
						iLocal_336 = unk_0x895FB9FE885E36ED(0, 100);
						if (iLocal_336 <= 50)
						{
							func_9(&uLocal_144, Global_1628, &Global_16768, "ANS_MWBusy", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_144, Global_1628, &Global_16768, "ANS_MWBusy2", 2, 0, 0, 0, 0);
						}
						break;
					
					case 41:
						iLocal_336 = unk_0x895FB9FE885E36ED(0, 100);
						if (iLocal_336 <= 50)
						{
							func_9(&uLocal_144, Global_1628, &Global_16768, "ANS_PGbusy", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_144, Global_1628, &Global_16768, "ANS_PGbusy2", 2, 0, 0, 0, 0);
						}
						break;
					
					case 91:
						iLocal_336 = unk_0x895FB9FE885E36ED(0, 100);
						if (iLocal_336 <= 50)
						{
							func_9(&uLocal_144, Global_1628, &Global_16768, "ANS_INSbusy", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_144, Global_1628, &Global_16768, "ANS_INSbusy2", 2, 0, 0, 0, 0);
						}
						break;
					
					case 86:
						func_9(&uLocal_144, Global_1628, &Global_16768, "ANS_GBusy", 2, 0, 0, 0, 0);
						break;
					
					default:
						func_9(&uLocal_144, Global_1628, &Global_16768, &(Global_117[Global_1628 /*10*/]), 2, 0, 0, 0, 0);
				}
				unk_0xF6082E2ADA1C795B(&Global_2314, 31);
			}
			break;
		
		case 4:
			if (unk_0xBB6A424DD700764B(iLocal_110))
			{
				unk_0x08BE237DBCD9CBD9(iLocal_110, "Remote_Engaged", &Global_14432, 1);
			}
			if (unk_0xC9D9444186B5A374() > 1500)
			{
				if (iLocal_124 == 0)
				{
					if (Global_14443 == 2)
					{
						if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
						{
							func_4(unk_0x2A5EB8B0FE590B91(), "PHONE_CALL_NOT_CONNECTED", 24);
							iLocal_124 = 1;
						}
					}
				}
			}
			break;
	}
}

void func_4(var uParam0, char* sParam1, int iParam2)
{
	unk_0x430053236FA97FB8(uParam0, sParam1, func_5(iParam2), 1);
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
	return unk_0xAA4F14DA15DB0B51(Global_103236.f_18355[iParam0 /*6*/], 3);
}

int func_7(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_103236.f_8866.f_99.f_58[iParam0];
}

int func_8(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_103236.f_8866.f_330[iParam0 /*6*/];
}

void func_9(var uParam0, int iParam1, char* sParam2, char[4] cParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	if (Global_69800 || func_27())
	{
		if (Global_1628 == 81)
		{
			if (Global_1573338 == 0)
			{
				Global_1573338 = 1;
			}
			func_10(uParam0, iParam1, sParam2, cParam3, iParam4, iParam5, iParam6, iParam7, bParam8);
		}
		else if (Global_1573338 == 1)
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
					unk_0xE40123A348A5FEDA(0);
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
		if (unk_0x4FF1AD2B1A443280())
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
			unk_0x507FE690B1271947(&Global_2313, 20);
			unk_0x507FE690B1271947(&Global_2314, 17);
			unk_0x507FE690B1271947(&Global_2315, 0);
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
			if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
			{
				if (unk_0x42B388A818F85EF4(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (func_15())
				{
					return 0;
				}
				if (unk_0xAD69F971BA14B65A(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (unk_0x7D8FA69AD9D01A2B(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (unk_0x508B126813F83326(unk_0x2A5EB8B0FE590B91(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69800)
				{
					if (unk_0xABCF7EB00A727656(unk_0x2A5EB8B0FE590B91()))
					{
						return 0;
					}
					if (unk_0x63949B600E6C0045(unk_0x0FFED3E94261A832()))
					{
						return 0;
					}
					if (unk_0x523BFA385406F50B(unk_0x2A5EB8B0FE590B91()))
					{
						return 0;
					}
					if (unk_0xE5F2CA90CEBD5F63(unk_0x0FFED3E94261A832()))
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
				if (unk_0xAA4F14DA15DB0B51(Global_2313, 9))
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
	unk_0xE40123A348A5FEDA(0);
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
	unk_0x507FE690B1271947(&Global_2314, 16);
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
	
	if (Global_69800)
	{
		iVar0 = 0;
		unk_0xE3B6C923999B844E(unk_0x2A5EB8B0FE590B91(), &iVar1, 1);
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x522AAFC27F0E320D() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
	{
		if (unk_0xEFB4328133A837C8(unk_0x2A5EB8B0FE590B91(), 78, 1))
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
		if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[2 /*29*/])
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
		if (Global_69800)
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
	return Global_103236.f_2164.f_539.f_4301;
}

void func_18()
{
	int iVar0;
	
	if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
	{
		if (func_21(Global_103236.f_2164.f_539.f_4301) != unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()))
		{
			iVar0 = func_20(unk_0x2A5EB8B0FE590B91());
			if (func_19(iVar0) && (!func_22(14) || Global_102188))
			{
				if (Global_103236.f_2164.f_539.f_4301 != iVar0 && func_19(Global_103236.f_2164.f_539.f_4301))
				{
					Global_103236.f_2164.f_539.f_4302 = Global_103236.f_2164.f_539.f_4301;
				}
				Global_103236.f_2164.f_539.f_4303 = iVar0;
				Global_103236.f_2164.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_103236.f_2164.f_539.f_4301 != 145)
			{
				Global_103236.f_2164.f_539.f_4303 = Global_103236.f_2164.f_539.f_4301;
			}
			return;
		}
	}
	Global_103236.f_2164.f_539.f_4301 = 145;
}

bool func_19(int iParam0)
{
	return iParam0 < 3;
}

int func_20(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x2137828D03306CAF(uParam0))
	{
		iVar1 = unk_0xD3B21CE53AA7BE51(uParam0);
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
		return Global_103236.f_27831[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_22(int iParam0)
{
	return Global_35813 == iParam0;
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
				return Global_1351508.f_203[iParam1];
			}
			break;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1351508.f_1048, iParam0);
}

void func_25()
{
	unk_0xA37D20A4B77452D4();
	Global_16756 = 0;
	if ((unk_0x3813EBE69CF8CAD2() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0xE40123A348A5FEDA(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x4FF1AD2B1A443280())
	{
		unk_0xE40123A348A5FEDA(1);
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
	return Global_1312829;
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
	if (!Global_69800)
	{
		if (!unk_0x769F0F6444C1ABE0(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x76DB40064D4A807D(iParam2, 0);
			}
			else
			{
				unk_0x76DB40064D4A807D(iParam2, 1);
			}
		}
		if (!unk_0x769F0F6444C1ABE0(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xD79CFA0051CBF471(iParam2, 0);
			}
			else
			{
				unk_0xD79CFA0051CBF471(iParam2, 1);
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
		unk_0xF6082E2ADA1C795B(&Global_2314, 16);
	}
	if (unk_0x3813EBE69CF8CAD2())
	{
		unk_0xE40123A348A5FEDA(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xF6082E2ADA1C795B(&Global_2313, 30);
	}
	else
	{
		unk_0x507FE690B1271947(&Global_2313, 30);
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
				unk_0xE3812E52897ABBA5(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x24E41EE5A159D7A3(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x24E41EE5A159D7A3(Global_14380);
		}
		else
		{
			unk_0x24E41EE5A159D7A3(Global_14371);
		}
	}
}

int func_32(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xAA4F14DA15DB0B51(Global_2313, 14))
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
	if (unk_0x09952BA662A7629B(joaat("cellphone_flashhand")) > 0)
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
	
	unk_0x8850034223654421(1);
	unk_0x712F381D6DC979A0(2, 201);
	unk_0x712F381D6DC979A0(2, 202);
	fVar0 = 0f;
	while ((!unk_0x92BC4A8239BDDACC(2, 201) && !unk_0x92BC4A8239BDDACC(2, 202)) || fVar0 < 1f)
	{
		unk_0xDC38CC1E35B6A5D7("VEUI_HDR_ALERT", "VE_DIR_MODE_SURE", 18, 0, 0, -1, 0, 0, 1);
		unk_0x4EDE34FBADD967A6(0);
		fVar0 = (fVar0 + unk_0xBCA469D44FBFAC80());
	}
	unk_0x8850034223654421(0);
	if (unk_0x92BC4A8239BDDACC(2, 201))
	{
		unk_0x5BFE0E837BA0AF60(0);
		Global_102183 = 1;
	}
}

void func_34(int iParam0)
{
	float fVar0;
	char* sVar1;
	
	unk_0x8850034223654421(1);
	unk_0x712F381D6DC979A0(2, 201);
	fVar0 = 0f;
	while (!unk_0x92BC4A8239BDDACC(2, 201) || fVar0 < 1f)
	{
		sVar1 = func_35(iParam0, 119);
		unk_0x7B1776B3B53F8D74("FBR_GENERIC", 16384, 0, 0, -1, "FBR_DIR_MODE", sVar1, 1);
		unk_0x4EDE34FBADD967A6(0);
		fVar0 = (fVar0 + unk_0xBCA469D44FBFAC80());
	}
	unk_0x8850034223654421(0);
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
	if (unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
	{
		return 13;
	}
	if (bParam1)
	{
		if (unk_0x09952BA662A7629B(unk_0x120DBC40E9E3D401()) > 1)
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
	if (Global_88842)
	{
		return 3;
	}
	if (Global_25475)
	{
		return 8;
	}
	if (Global_25370)
	{
		return 8;
	}
	if (Global_2621550)
	{
		if (unk_0x09952BA662A7629B(-1516147206) > 0)
		{
			return 3;
		}
	}
	else if (Global_2621549)
	{
		if (unk_0x09952BA662A7629B(2006115718) > 0)
		{
			return 3;
		}
	}
	else if (unk_0x09952BA662A7629B(joaat("mission_stat_watcher")) > 0)
	{
		return 3;
	}
	if (unk_0x09952BA662A7629B(joaat("finale_choice")) > 0)
	{
		return 3;
	}
	if (unk_0x09952BA662A7629B(joaat("creator")) > 0)
	{
		return 3;
	}
	if (unk_0x09952BA662A7629B(joaat("respawn_controller")) > 0)
	{
		return 13;
	}
	if (func_66(bParam1))
	{
		return 3;
	}
	if (unk_0x4A9CF3B18638900F(unk_0x2A5EB8B0FE590B91()) || unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91()))
	{
		return 12;
	}
	if (func_65(Global_102261, 256))
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
	if (func_51() && !Global_102187)
	{
		return 8;
	}
	if (func_55())
	{
		return 5;
	}
	if (unk_0x0AFBA1AD6DC1C540() || func_50())
	{
		return 4;
	}
	if (func_49())
	{
		return 4;
	}
	if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
	{
		if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
		{
			iVar0 = func_40(60);
			if (iVar0 != 0)
			{
				return iVar0;
			}
			if (unk_0x7D8FA69AD9D01A2B(unk_0x2A5EB8B0FE590B91()) || unk_0xE17D97D6D348472B(unk_0x2A5EB8B0FE590B91()) != -1)
			{
				return 11;
			}
			if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1) || Global_102283)
			{
				return 10;
			}
		}
	}
	if (Global_25473)
	{
		return 8;
	}
	if (Global_69798)
	{
		return 4;
	}
	if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
	{
		if (unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) > 0 || unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1))
		{
			return 6;
		}
		if (unk_0x63949B600E6C0045(unk_0x0FFED3E94261A832()))
		{
			return 8;
		}
		if (unk_0x96BD442529F76EE7(unk_0x2A5EB8B0FE590B91()))
		{
			return 8;
		}
	}
	if (unk_0x591AF4C50B46E014())
	{
		return 7;
	}
	if (func_39())
	{
		return 8;
	}
	if (Global_25224)
	{
		return 3;
	}
	if (unk_0x943D8B466B9BD1A3())
	{
		return 4;
	}
	if (unk_0x9A46207BB68ED2F0(unk_0x2A5EB8B0FE590B91(), 439.4357f, -997.4747f, 28.9584f, 428.3288f, -997.0398f, 24.8372f, 8f, 0, 1, 0))
	{
		return 9;
	}
	if (unk_0xABCF7EB00A727656(unk_0x2A5EB8B0FE590B91()))
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
	if (unk_0x1009F418CD70BDA1(unk_0x2A5EB8B0FE590B91()))
	{
		return 9;
	}
	return 0;
}

int func_37(bool bParam0)
{
	if (unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		return 0;
	}
	if ((((((((((!unk_0x7B0D0EA42CF4A6CC(unk_0x0FFED3E94261A832()) || !unk_0x08F7FBC16F351FEE(unk_0x0FFED3E94261A832())) || unk_0xAB211D8B129F26CB(unk_0x2A5EB8B0FE590B91())) || unk_0xC567CF20FD312AC1(unk_0x2A5EB8B0FE590B91(), 0)) || unk_0x42B388A818F85EF4(unk_0x2A5EB8B0FE590B91())) || unk_0xB833DDD4C8B30212(unk_0x2A5EB8B0FE590B91())) || unk_0xF5A478192BF88D01(unk_0x2A5EB8B0FE590B91())) || unk_0x96BD442529F76EE7(unk_0x2A5EB8B0FE590B91())) || unk_0xB54451B05F280358(unk_0x2A5EB8B0FE590B91())) || unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91())) || unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1))
	{
		return 0;
	}
	if ((((((func_49() || Global_17151.f_4) || func_38()) || unk_0x2163FDB3D9C26013()) || unk_0xB85D6490EC36F0F7()) || func_50()) || func_69())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (unk_0xB2F8D1B7C533483C())
		{
			return 0;
		}
	}
	return 1;
}

int func_38()
{
	if (!unk_0x591AF4C50B46E014())
	{
		return Global_89400.f_44 == 1;
	}
	return 0;
}

bool func_39()
{
	return Global_53035;
}

int func_40(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	if (unk_0x9A46207BB68ED2F0(unk_0x2A5EB8B0FE590B91(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0) && unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
	{
		return 5;
	}
	Var0 = { func_48(unk_0x0FFED3E94261A832()) };
	if (Global_102323[10 /*10*/].f_1)
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
			if (unk_0x19007189599EBBF5(Var0, -61.26628f, -1096.505f, 25.52088f, -58.43333f, -1101.147f, 29.24937f, 1.25f, 0, 1))
			{
				return 9;
			}
		}
	}
	if (unk_0xB7A628320EFF8E47(Var0, -740.9346f, 5599.426f, 40.71515f) < 11f)
	{
		if (unk_0x19007189599EBBF5(Var0, -746.1299f, 5599.226f, 40.47561f, -737.632f, 5599.364f, 44.1693f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (unk_0xB7A628320EFF8E47(Var0, -740.9346f, 5590.426f, 40.71515f) < 11f)
	{
		if (unk_0x19007189599EBBF5(Var0, -746.1299f, 5590.667f, 40.4392f, -737.6585f, 5590.592f, 44.52327f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (unk_0xB7A628320EFF8E47(Var0, 446.3265f, 5566.35f, 780.2151f) < 11f)
	{
		if (unk_0x19007189599EBBF5(Var0, 451.1661f, 5566.451f, 780.1703f, 442.5211f, 5566.374f, 783.9819f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (unk_0xB7A628320EFF8E47(Var0, 446.3265f, 5577.35f, 780.2151f) < 11f)
	{
		if (unk_0x19007189599EBBF5(Var0, 451.1661f, 5577.867f, 780.1899f, 442.5765f, 5577.579f, 783.9086f, 3.375f, 0, 1))
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
	iVar3 = unk_0xD05429D1ADB47D25(unk_0x2A5EB8B0FE590B91());
	if (iVar3 == 0)
	{
		return 0;
	}
	else if ((iVar3 == Global_102199 || iVar3 == Global_102200) || iVar3 == Global_102201)
	{
		return 9;
	}
	else if (iVar3 == Global_102190)
	{
		return 9;
	}
	else if (iVar3 == Global_102191)
	{
		return 9;
	}
	else if (iVar3 == Global_102194)
	{
		return 9;
	}
	else if (iVar3 == Global_102193)
	{
		return 9;
	}
	else if (iVar3 == Global_102195)
	{
		return 9;
	}
	else if (iVar3 == Global_102196)
	{
		return 9;
	}
	else if (iVar3 == Global_102197)
	{
		return 9;
	}
	else if (iVar3 == Global_102198)
	{
		return 9;
	}
	else if (iVar3 == Global_102202)
	{
		return 9;
	}
	else if (iVar3 == Global_102203)
	{
		return 9;
	}
	else if (iVar3 == Global_102204)
	{
		return 9;
	}
	else if (iVar3 == Global_102205)
	{
		return 9;
	}
	else if (iVar3 == Global_102206)
	{
		return 9;
	}
	else if ((iVar3 == Global_102207 || iVar3 == Global_102208) && func_8(67))
	{
		return 9;
	}
	iVar4 = 0;
	while (iVar4 <= (19 - 1))
	{
		if (iVar3 == Global_102209[iVar4])
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
	func_44(24, &Global_102190);
	func_44(47, &Global_102191);
	func_44(10, &Global_102199);
	func_44(9, &Global_102200);
	func_44(8, &Global_102201);
	func_44(21, &Global_102202);
	func_44(11, &Global_102203);
	func_44(18, &Global_102207);
	func_44(19, &Global_102208);
	Global_102194 = unk_0xD79C30F3A2706E90(-76.6618f, 6222.191f, 32.2412f, "V_factory1");
	Global_102193 = unk_0xD79C30F3A2706E90(-98.2637f, 6210.022f, 31.924f, "V_factory2");
	Global_102195 = unk_0xD79C30F3A2706E90(-115.8956f, 6179.749f, 32.4102f, "V_factory3");
	Global_102196 = unk_0xD79C30F3A2706E90(-149.8199f, 6144.978f, 31.3353f, "V_factory4");
	Global_102197 = unk_0xD79C30F3A2706E90(16.3605f, -1100.259f, 28.797f, "v_gun");
	Global_102198 = unk_0xD79C30F3A2706E90(125.1948f, -1284.13f, 28.2847f, "v_strip3");
	Global_102204 = unk_0xD79C30F3A2706E90(-545.5717f, 1987.145f, 126.0262f, "cs6_08_mine_int");
	Global_102205 = unk_0xD79C30F3A2706E90(2330.598f, 2571.935f, 45.6802f, "ch3_01_trlr_int");
	Global_102206 = unk_0xD79C30F3A2706E90(-54.7f, -1092.7f, 26.4f, "v_carshowroom");
	iVar0 = 0;
	while (iVar0 <= (19 - 1))
	{
		Global_102209[iVar0] = unk_0x65B447E36C1ED4C2(func_42(iVar0));
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
	*uParam1 = unk_0xD79C30F3A2706E90(Var0, Var0.f_3);
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
			Var0 = { Global_1049460[34 /*1943*/].f_146.f_1517 + Vector(1f, 0f, 0f) };
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
		
		case 137:
			Var0 = { 938.3077f, -3196.112f, -100f };
			Var0.f_3 = "gr_grdlc_int_02";
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
	if (Global_85907[iParam0 /*2*/])
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_82674)
	{
		if (Global_82674[iVar0 /*5*/] != -1)
		{
			if (Global_70069.f_109[Global_82674[iVar0 /*5*/] /*4*/] == iParam0)
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
	return unk_0xD1EE0E9FCD74A37B(unk_0x1E199569E0295838(iParam0), 0);
}

bool func_49()
{
	return Global_1312852;
}

int func_50()
{
	if (unk_0x09952BA662A7629B(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_51()
{
	return unk_0x3732B96D7A1859B4() <= Global_17290.f_5745 + 100;
}

bool func_52()
{
	return unk_0xAA4F14DA15DB0B51(Global_70048, 9);
}

bool func_53()
{
	return unk_0xAA4F14DA15DB0B51(Global_70048, 8);
}

int func_54()
{
	if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0) && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (((((((((((((((unk_0x453DB1DBE5D81637(unk_0x2A5EB8B0FE590B91(), "misshair_shop@barbers", "player_intro", 3) || unk_0x453DB1DBE5D81637(unk_0x2A5EB8B0FE590B91(), "misshair_shop@barbers", "player_base", 3)) || unk_0x453DB1DBE5D81637(unk_0x2A5EB8B0FE590B91(), "misshair_shop@barbers", "player_enterchair", 3)) || unk_0x453DB1DBE5D81637(unk_0x2A5EB8B0FE590B91(), "misshair_shop@barbers", "player_exitchair", 3)) || unk_0x453DB1DBE5D81637(unk_0x2A5EB8B0FE590B91(), "misshair_shop@barbers", "player_idle_a", 3)) || unk_0x453DB1DBE5D81637(unk_0x2A5EB8B0FE590B91(), "misshair_shop@barbers", "player_idle_b", 3)) || unk_0x453DB1DBE5D81637(unk_0x2A5EB8B0FE590B91(), "misshair_shop@barbers", "player_idle_c", 3)) || unk_0x453DB1DBE5D81637(unk_0x2A5EB8B0FE590B91(), "misshair_shop@barbers", "player_idle_d", 3)) || unk_0x453DB1DBE5D81637(unk_0x2A5EB8B0FE590B91(), "misshair_shop@hair_dressers", "player_intro", 3)) || unk_0x453DB1DBE5D81637(unk_0x2A5EB8B0FE590B91(), "misshair_shop@hair_dressers", "player_base", 3)) || unk_0x453DB1DBE5D81637(unk_0x2A5EB8B0FE590B91(), "misshair_shop@hair_dressers", "player_enterchair", 3)) || unk_0x453DB1DBE5D81637(unk_0x2A5EB8B0FE590B91(), "misshair_shop@hair_dressers", "player_exitchair", 3)) || unk_0x453DB1DBE5D81637(unk_0x2A5EB8B0FE590B91(), "misshair_shop@hair_dressers", "player_idle_a", 3)) || unk_0x453DB1DBE5D81637(unk_0x2A5EB8B0FE590B91(), "misshair_shop@hair_dressers", "player_idle_b", 3)) || unk_0x453DB1DBE5D81637(unk_0x2A5EB8B0FE590B91(), "misshair_shop@hair_dressers", "player_idle_c", 3)) || unk_0x453DB1DBE5D81637(unk_0x2A5EB8B0FE590B91(), "misshair_shop@hair_dressers", "player_idle_d", 3))
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
		while (iVar0 < 47)
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
		return unk_0xAA4F14DA15DB0B51(Global_91829.f_1315[iParam0], iParam1);
	}
	else if (unk_0x591AF4C50B46E014())
	{
		if (func_62() == 0)
		{
			return unk_0xAA4F14DA15DB0B51(func_58(func_61(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xAA4F14DA15DB0B51(Global_103236.f_668[iParam0], iParam1);
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
	uVar0 = Global_2507378[iParam0 /*3*/][func_59(iParam1)];
	if (unk_0xC225A90A8DE0D96B(uVar0, &uVar1, -1))
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
			Global_2507091 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2507091 = 1;
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
			return 823;
			break;
		
		case 1:
			return 824;
			break;
		
		case 2:
			return 825;
			break;
		
		case 3:
			return 826;
			break;
		
		case 4:
			return 827;
			break;
		
		case 5:
			return 828;
			break;
		
		case 6:
			return 829;
			break;
		
		case 7:
			return 830;
			break;
		
		case 8:
			return 831;
			break;
		
		case 9:
			return 832;
			break;
		
		case 10:
			return 833;
			break;
		
		case 11:
			return 834;
			break;
		
		case 12:
			return 835;
			break;
		
		case 13:
			return 836;
			break;
		
		case 14:
			return 837;
			break;
		
		case 15:
			return 839;
			break;
		
		case 16:
			return 840;
			break;
		
		case 17:
			return 841;
			break;
		
		case 18:
			return 842;
			break;
		
		case 19:
			return 843;
			break;
		
		case 20:
			return 844;
			break;
		
		case 21:
			return 845;
			break;
		
		case 22:
			return 846;
			break;
		
		case 23:
			return 847;
			break;
		
		case 24:
			return 848;
			break;
		
		case 25:
			return 849;
			break;
		
		case 26:
			return 850;
			break;
		
		case 27:
			return 851;
			break;
		
		case 28:
			return 852;
			break;
		
		case 29:
			return 853;
			break;
		
		case 30:
			return 854;
			break;
		
		case 31:
			return 855;
			break;
		
		case 32:
			return 856;
			break;
		
		case 33:
			return 857;
			break;
		
		case 34:
			return 858;
			break;
		
		case 35:
			return 859;
			break;
		
		case 36:
			return 860;
			break;
		
		case 37:
			return 861;
			break;
		
		case 38:
			return 862;
			break;
		
		case 39:
			return 863;
			break;
		
		case 40:
			return 867;
			break;
		
		case 41:
			return 868;
			break;
		
		case 42:
			return 869;
			break;
		
		case 43:
			return 870;
			break;
		
		case 44:
			return 6134;
			break;
		
		case 45:
			return 3783;
			break;
		
		case 46:
			return 5358;
			break;
		
		default:
			break;
	}
	return 6309;
}

int func_62()
{
	return Global_25222;
}

bool func_63()
{
	return Global_91829.f_310 > 0;
}

bool func_64()
{
	return Global_91829.f_309 > 0;
}

bool func_65(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_66(bool bParam0)
{
	if (!bParam0 && unk_0x09952BA662A7629B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xAA4F14DA15DB0B51(Global_70048, 0);
}

bool func_67()
{
	return Global_91816.f_1;
}

bool func_68()
{
	return Global_70067;
}

int func_69()
{
	if (Global_70060)
	{
		return 1;
	}
	else if (Global_55848 && !Global_55854)
	{
		return 1;
	}
	return 0;
}

int func_70()
{
	if (Global_35813 == 15)
	{
		return 0;
	}
	return 1;
}

void func_71(int iParam0, int iParam1)
{
	unk_0xF6082E2ADA1C795B(&Global_25469, iParam0);
	Global_25470 = iParam1;
}

void func_72(char* sParam0)
{
	unk_0xADBDBA2DF8443753(sParam0);
	unk_0xF7D95CCE1364B5CE();
}

int func_73()
{
	var uVar0;
	
	if (unk_0x473DD4DAC8F55B34())
	{
		if (unk_0x5D806CF6D2796CC3())
		{
			if (unk_0x103C975BDE64E3C6())
			{
				unk_0xC225A90A8DE0D96B(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xF6082E2ADA1C795B(&uVar0, 2);
				unk_0xF6082E2ADA1C795B(&uVar0, 4);
				unk_0xF6082E2ADA1C795B(&uVar0, 6);
				unk_0xF6082E2ADA1C795B(&Global_25, 2);
				unk_0xF6082E2ADA1C795B(&Global_25, 4);
				unk_0xF6082E2ADA1C795B(&Global_25, 6);
				unk_0xC94674712BED1A82(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x4ED4E0D471EA6680())
				{
					uVar0 = unk_0x29B06605BA5CF280(866);
					unk_0xF6082E2ADA1C795B(&uVar0, 0);
					unk_0x01D51AAE02B320BA(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_141537 == 2)
	{
		return 1;
	}
	else if (Global_141537 == 3)
	{
		return 0;
	}
	if (unk_0x4ED4E0D471EA6680())
	{
		if (unk_0xAA4F14DA15DB0B51(unk_0x29B06605BA5CF280(866), 0))
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
	if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
	{
		unk_0x08BE237DBCD9CBD9(-1, "Menu_Back", &Global_14432, 1);
	}
}

void func_76()
{
	if (Global_14421 == 0)
	{
		if (func_145(2, Global_14412, 0))
		{
			unk_0x507FE690B1271947(&Global_2314, 0);
			iLocal_121 = 0;
			func_143();
			Global_14421 = 1;
			unk_0xD1FCC52F87A98873(Global_14424, "GET_CURRENT_SELECTION");
			uLocal_105 = unk_0xCA19844C8EBF135B();
			while (!unk_0x49312763BCF4C85A(uLocal_105))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_109 = unk_0x7E45511185E08C01(uLocal_105);
			if (func_100(Global_1628))
			{
				if (iLocal_109 == 0)
				{
					if (bLocal_332)
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
				if (iLocal_109 == 1)
				{
					if (bLocal_332)
					{
						Global_16859 = 0;
						Global_16858 = 0;
						Global_16860 = 0;
						func_86();
					}
					else if (func_78(Global_1628, Global_14443))
					{
						func_77();
						iLocal_121 = 1;
					}
					else
					{
						Global_16859 = 1;
						Global_16858 = 0;
						Global_16860 = 0;
						func_86();
					}
				}
				if (iLocal_109 == 2)
				{
					if (func_78(Global_1628, Global_14443))
					{
						func_77();
						iLocal_121 = 1;
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
				if (iLocal_109 == 0)
				{
					if (bLocal_332)
					{
						Global_16859 = 0;
						Global_16858 = 0;
						Global_16860 = 1;
						func_86();
					}
					else if (func_78(Global_1628, Global_14443))
					{
						func_77();
						iLocal_121 = 1;
					}
					else
					{
						Global_16859 = 1;
						Global_16858 = 0;
						Global_16860 = 0;
						func_86();
					}
				}
				if (iLocal_109 == 1)
				{
					if (func_78(Global_1628, Global_14443))
					{
						func_77();
						iLocal_121 = 1;
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
	unk_0x507FE690B1271947(&Global_2313, 17);
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
		return Global_87778[iParam0 /*2*/];
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
		return Global_103236.f_27831[iParam0 /*29*/].f_11;
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
	if (Global_35813 == 15)
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
	return func_85(iParam0, Global_35813);
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
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
		{
			if (!unk_0xABCF7EB00A727656(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0xC8AAE02019F925E6(unk_0x2A5EB8B0FE590B91(), 0))
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
	if (Global_103236.f_27831[Global_1628 /*29*/].f_24[Global_14443] == 0)
	{
		func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_1628 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
	}
	else
	{
		func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_103236.f_27831[Global_1628 /*29*/].f_3), &(Global_103236.f_27831[Global_1628 /*29*/].f_7), "CELL_211", &(Global_103236.f_27831[Global_1628 /*29*/].f_3), 0);
	}
	func_91();
	if (Global_69800)
	{
		func_87(1911, 1, -1);
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
	
	iVar0 = Global_2507378[iParam0 /*3*/][func_59(uParam2)];
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 783:
			Global_1361948[func_59(uParam2)] = iParam1;
			break;
		
		case 784:
			Global_1361954[func_59(uParam2)] = iParam1;
			break;
		
		case 785:
			Global_1361960[func_59(uParam2)] = iParam1;
			break;
		
		case 786:
			Global_1361966[func_59(uParam2)] = iParam1;
			break;
		
		case 773:
			Global_1361924[func_59(uParam2)] = iParam1;
			break;
		
		case 774:
			Global_1361930[func_59(uParam2)] = iParam1;
			break;
		
		case 775:
			Global_1361936[func_59(uParam2)] = iParam1;
			break;
		
		case 776:
			Global_1361942[func_59(uParam2)] = iParam1;
			break;
		
		case 763:
			Global_1361900[func_59(uParam2)] = iParam1;
			break;
		
		case 764:
			Global_1361906[func_59(uParam2)] = iParam1;
			break;
		
		case 765:
			Global_1361912[func_59(uParam2)] = iParam1;
			break;
		
		case 766:
			Global_1361918[func_59(uParam2)] = iParam1;
			break;
		
		case 753:
			Global_1361972[func_59(uParam2)] = iParam1;
			break;
		
		case 754:
			Global_1361978[func_59(uParam2)] = iParam1;
			break;
		
		case 755:
			Global_1361984[func_59(uParam2)] = iParam1;
			break;
		
		case 756:
			Global_1361990[func_59(uParam2)] = iParam1;
			break;
		
		case 1299:
			Global_1361996[func_59(uParam2)] = iParam1;
			break;
		
		case 635:
			Global_1362002[func_59(uParam2)] = iParam1;
			break;
		
		case 1274:
			Global_1362008[func_59(uParam2)] = iParam1;
			break;
		
		case 1871:
			Global_2528699[0 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 2262:
			Global_2528699[1 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 2914:
			Global_2528699[2 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3043:
			Global_2528699[3 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 6173:
			Global_2528770[func_59(uParam2)] = iParam1;
			break;
		
		case 760:
			Global_1362014[func_59(uParam2)] = iParam1;
			break;
		
		case 761:
			Global_1362020[func_59(uParam2)] = iParam1;
			break;
		
		case 762:
			Global_1362026[func_59(uParam2)] = iParam1;
			break;
		
		case 1232:
			Global_1362032[func_59(uParam2)] = iParam1;
			break;
		
		case 3038:
			Global_2528733[0 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3039:
			Global_2528733[1 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3040:
			Global_2528733[2 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3041:
			Global_2528733[3 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3042:
			Global_2528733[4 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3621:
			Global_2528773[0 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3622:
			Global_2528773[1 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2528773[2 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2528773[3 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2528773[4 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2528789[0 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2528789[1 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3628:
			Global_2528789[2 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3629:
			Global_2528789[3 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3630:
			Global_2528789[4 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3206:
			Global_2528733[5 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3212:
			Global_2528699[4 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2528805[func_59(uParam2)] = iParam1;
			break;
		
		case 3649:
			Global_2528814[func_59(uParam2)] = iParam1;
			break;
		
		case 3650:
			Global_2528808[func_59(uParam2)] = iParam1;
			break;
		
		case 3651:
			Global_2528817[func_59(uParam2)] = iParam1;
			break;
		
		case 3652:
			Global_2528811[func_59(uParam2)] = iParam1;
			break;
		
		case 3653:
			Global_2528820[func_59(uParam2)] = iParam1;
			break;
		
		case 3674:
			Global_2528823[func_59(uParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2528733[6 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3215:
			Global_2528699[5 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2528733[7 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2528699[6 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3994:
			Global_2528733[8 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3995:
			Global_2528699[7 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3997:
			Global_2528733[9 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3998:
			Global_2528699[8 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 4000:
			Global_2528733[10 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 4001:
			Global_2528699[9 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 4003:
			Global_2528733[11 /*3*/][func_59(uParam2)] = iParam1;
			break;
		
		case 4004:
			Global_2528699[10 /*3*/][func_59(uParam2)] = iParam1;
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
	iVar0 = Global_2507378[iParam0 /*3*/][func_59(uParam2)];
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, iParam1, iParam3);
	}
}

int func_90(int iParam0)
{
	if (Global_1361881)
	{
		switch (iParam0)
		{
			case 783:
			case 784:
			case 785:
			case 786:
			case 773:
			case 774:
			case 775:
			case 776:
			case 763:
			case 764:
			case 765:
			case 766:
			case 753:
			case 754:
			case 755:
			case 756:
			case 1299:
			case 635:
			case 1274:
			case 760:
			case 761:
			case 762:
			case 1232:
			case 1871:
			case 2262:
			case 2914:
			case 3043:
			case 6173:
			case 3038:
			case 3039:
			case 3040:
			case 3041:
			case 3042:
			case 3217:
			case 3219:
			case 3621:
			case 3622:
			case 3623:
			case 3624:
			case 3625:
			case 3626:
			case 3627:
			case 3628:
			case 3629:
			case 3630:
			case 3212:
			case 3206:
			case 3648:
			case 3649:
			case 3650:
			case 3651:
			case 3652:
			case 3653:
			case 3674:
			case 3215:
			case 3214:
			case 3995:
			case 3994:
			case 3998:
			case 3997:
			case 4001:
			case 4000:
			case 4004:
			case 4003:
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
	while (!unk_0xA8AF99BD8D81CFB7(Global_14424))
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
				unk_0x507FE690B1271947(&Global_2313, 17);
			}
			else if (Global_69800)
			{
				func_139(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x507FE690B1271947(&Global_2313, 17);
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
				unk_0xF6082E2ADA1C795B(&Global_2313, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_142(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_139(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_139(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x507FE690B1271947(&Global_2313, 17);
			if (unk_0xAA4F14DA15DB0B51(Global_2313, 20))
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
				func_142(Global_14424, "SET_THEME", unk_0xBBDA792448DB5A89(Global_103236.f_13832[Global_14443 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15758)
				{
					unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
					unk_0x4CECF13AF144A8F6(4);
					unk_0x4CECF13AF144A8F6(0);
					unk_0x4CECF13AF144A8F6(2);
					unk_0xADBDBA2DF8443753("CELL_CONDFON");
					unk_0xCF6846167A5EFE98(&Global_15760);
					unk_0xF7D95CCE1364B5CE();
					func_72("CELL_300");
					func_72("CELL_217");
					func_72("CELL_217");
					unk_0x8123397DC676E794();
				}
				else if (Global_103236.f_27831[Global_1628 /*29*/].f_24[Global_14443] == 0)
				{
					func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_117[Global_1628 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_103236.f_27831[Global_1628 /*29*/].f_3), &(Global_103236.f_27831[Global_1628 /*29*/].f_7), "CELL_217", &(Global_103236.f_27831[Global_1628 /*29*/].f_3), 0);
				}
				func_142(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15745 == 4 || Global_15745 == 3)
			{
				func_142(Global_14424, "SET_THEME", unk_0xBBDA792448DB5A89(Global_103236.f_13832[Global_14443 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_93();
				if (Global_15758)
				{
					unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
					unk_0x4CECF13AF144A8F6(4);
					unk_0x4CECF13AF144A8F6(0);
					unk_0x4CECF13AF144A8F6(2);
					unk_0xADBDBA2DF8443753("CELL_CONDFON");
					unk_0xCF6846167A5EFE98(&Global_15760);
					unk_0xF7D95CCE1364B5CE();
					func_72("CELL_300");
					func_72("CELL_219");
					func_72("CELL_219");
					unk_0x8123397DC676E794();
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
					if (Global_103236.f_27831[Global_1628 /*29*/].f_24[Global_14443] == 0)
					{
						func_142(Global_14424, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_1628 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_142(Global_14424, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_103236.f_27831[Global_1628 /*29*/].f_3), &(Global_103236.f_27831[Global_1628 /*29*/].f_7), &cVar0, &(Global_103236.f_27831[Global_1628 /*29*/].f_3), 0);
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
	if (unk_0xA8AF99BD8D81CFB7(Global_14424))
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
			else if (unk_0xAA4F14DA15DB0B51(Global_2313, 20))
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
			unk_0x507FE690B1271947(&Global_2313, 17);
		}
		else
		{
			func_139(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_139(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x507FE690B1271947(&Global_2313, 17);
			if (unk_0xAA4F14DA15DB0B51(Global_2313, 20))
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
	if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
	{
		if (Global_14443 == 0)
		{
			switch (Global_103236.f_13832[Global_14443 /*20*/].f_6)
			{
				case 1:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 0);
					break;
				
				case 2:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 1);
					break;
				
				case 3:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 2);
					break;
				
				case 4:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 3);
					break;
				
				case 5:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 4);
					break;
				
				case 6:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 5);
					break;
				
				case 7:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14443 == 1)
		{
			switch (Global_103236.f_13832[Global_14443 /*20*/].f_6)
			{
				case 1:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 6);
					break;
				
				case 2:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 0);
					break;
				
				case 3:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 1);
					break;
				
				case 4:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 2);
					break;
				
				case 5:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 3);
					break;
				
				case 6:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 4);
					break;
				
				case 7:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14443 == 2)
		{
			switch (Global_103236.f_13832[Global_14443 /*20*/].f_6)
			{
				case 1:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 5);
					break;
				
				case 2:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 6);
					break;
				
				case 3:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 1);
					break;
				
				case 4:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 0);
					break;
				
				case 5:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 2);
					break;
				
				case 6:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 3);
					break;
				
				case 7:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14443 == 3)
		{
			switch (Global_2600897)
			{
				case 1:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 0);
					break;
				
				case 2:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 1);
					break;
				
				case 3:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 2);
					break;
				
				case 4:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 3);
					break;
				
				case 5:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 4);
					break;
				
				case 6:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 5);
					break;
				
				case 7:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 6);
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
								if (unk_0xAA4F14DA15DB0B51(Global_2314, 3))
								{
									iVar2 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14608 = 0;
								}
								unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
								unk_0x4CECF13AF144A8F6(1);
								unk_0x4CECF13AF144A8F6(iVar0);
								unk_0x4CECF13AF144A8F6(Global_2320[iVar1 /*15*/].f_10);
								unk_0x4CECF13AF144A8F6(0);
								func_72(&(Global_2320[iVar1 /*15*/]));
								unk_0x4CECF13AF144A8F6(iVar2);
								unk_0x8123397DC676E794();
							}
							if (Global_2454704)
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
									if (Global_103236.f_13922[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_103236.f_13922[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_103236.f_13922[iVar3 /*104*/].f_99[Global_14443] == 1)
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
								if (Global_69800)
								{
									iVar4 = 0;
									iVar4 = Global_2599419;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_2599420[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_2599420[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_2599420[iVar5 /*104*/].f_99[Global_14443] == 1)
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
											iVar6 = Global_36949;
											break;
										
										case 1:
											iVar6 = Global_36950;
											break;
										
										case 2:
											iVar6 = Global_36951;
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
								unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
								unk_0x4CECF13AF144A8F6(1);
								unk_0x4CECF13AF144A8F6(iVar0);
								unk_0x4CECF13AF144A8F6(Global_2320[iVar1 /*15*/].f_10);
								unk_0x4CECF13AF144A8F6(0);
								func_72(&(Global_2320[iVar1 /*15*/]));
								unk_0x4CECF13AF144A8F6(Global_2319);
								unk_0x8123397DC676E794();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xAA4F14DA15DB0B51(Global_2314, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
								unk_0x4CECF13AF144A8F6(1);
								unk_0x4CECF13AF144A8F6(iVar0);
								unk_0x4CECF13AF144A8F6(Global_2320[iVar1 /*15*/].f_10);
								unk_0x4CECF13AF144A8F6(0);
								func_72(&(Global_2320[iVar1 /*15*/]));
								unk_0x4CECF13AF144A8F6(iVar7);
								unk_0x8123397DC676E794();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xAA4F14DA15DB0B51(Global_2314, 3))
								{
									iVar8 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14608 = 0;
								}
								unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
								unk_0x4CECF13AF144A8F6(1);
								unk_0x4CECF13AF144A8F6(iVar0);
								unk_0x4CECF13AF144A8F6(Global_2320[iVar1 /*15*/].f_10);
								unk_0x4CECF13AF144A8F6(0);
								func_72(&(Global_2320[iVar1 /*15*/]));
								unk_0x4CECF13AF144A8F6(iVar8);
								unk_0x8123397DC676E794();
							}
							else if (iVar1 == 8)
							{
								unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
								unk_0x4CECF13AF144A8F6(1);
								unk_0x4CECF13AF144A8F6(iVar0);
								unk_0x4CECF13AF144A8F6(Global_2320[iVar1 /*15*/].f_10);
								unk_0x4CECF13AF144A8F6(0);
								func_72(&(Global_2320[iVar1 /*15*/]));
								unk_0x4CECF13AF144A8F6(42);
								unk_0x8123397DC676E794();
							}
							else if ((iVar1 == 23 && unk_0x35302CD5A5D37EED(&(Global_2320[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xAA4F14DA15DB0B51(Global_2314, 6))
							{
								unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
								unk_0x4CECF13AF144A8F6(1);
								unk_0x4CECF13AF144A8F6(iVar0);
								unk_0x4CECF13AF144A8F6(Global_2320[iVar1 /*15*/].f_10);
								unk_0x4CECF13AF144A8F6(0);
								func_72(&(Global_2320[iVar1 /*15*/]));
								unk_0x4CECF13AF144A8F6(42);
								unk_0x8123397DC676E794();
							}
							else if (Global_2320[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1621535.f_1;
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
	unk_0x507FE690B1271947(&Global_2313, 25);
	unk_0xF6082E2ADA1C795B(&Global_2314, 11);
}

int func_96()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
	{
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
		{
			if (Global_14386 == 0)
			{
				if (Global_1628 != 128)
				{
					if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
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
		if (unk_0xC8AAE02019F925E6(unk_0x2A5EB8B0FE590B91(), 0))
		{
			return 0;
		}
		if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (!unk_0xEC4D5A37A29CB49C())
			{
				if (unk_0xABCF7EB00A727656(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x9D4B91509A1B375B(unk_0x2A5EB8B0FE590B91()) || unk_0xFBCC401A3A7C9E1C(unk_0x2A5EB8B0FE590B91())) || unk_0x63949B600E6C0045(unk_0x0FFED3E94261A832())) || unk_0xABE7CC39119C8E2B(unk_0x2A5EB8B0FE590B91()))
		{
			return 0;
		}
		if (Global_102284)
		{
			return 0;
		}
	}
	if (Global_69800)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x8EEB10CA57B82F27();
	iVar1 = unk_0xC1A55CEDE7782B6F(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0xEC4D5A37A29CB49C()))
	{
		iVar2 = 1;
		if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
			{
				uVar3 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
				if ((((((((unk_0x4BD9974FDDE2D1EC(unk_0xD3B21CE53AA7BE51(uVar3)) || unk_0xB8B97965F826E07D(unk_0xD3B21CE53AA7BE51(uVar3))) || unk_0xD043D4D784E459B0(unk_0xD3B21CE53AA7BE51(uVar3))) || unk_0xD3B21CE53AA7BE51(uVar3) == joaat("seashark")) || unk_0xD3B21CE53AA7BE51(uVar3) == joaat("seashark2")) || unk_0xD3B21CE53AA7BE51(uVar3) == joaat("rhino")) || unk_0xD3B21CE53AA7BE51(uVar3) == joaat("submersible")) || unk_0xD3B21CE53AA7BE51(uVar3) == joaat("submersible2")) || unk_0xD3B21CE53AA7BE51(uVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_2600899 || iVar2 == 1)
	{
		if (unk_0x09952BA662A7629B(joaat("apptrackify")) > 0 || Global_103236.f_13832.f_89)
		{
			if (unk_0x09952BA662A7629B(joaat("michael2")) > 0)
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
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (func_98() && unk_0xC8AAE02019F925E6(unk_0x2A5EB8B0FE590B91(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_69800)
	{
		if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()) && iVar1 == 0)
		{
			iVar2 = unk_0x6FDEA34AE915A47D(unk_0x2A5EB8B0FE590B91(), 0);
			if (Global_69800)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || unk_0x766E73D267F62C4B(unk_0x2A5EB8B0FE590B91()))
				{
					iVar0 = 1;
				}
			}
			else if (unk_0x766E73D267F62C4B(unk_0x2A5EB8B0FE590B91()))
			{
				iVar0 = 1;
			}
			if (!Global_14386)
			{
				if (Global_1628 != 128)
				{
					if (iVar0 == 0)
					{
						if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
						{
							if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
							{
							}
							else
							{
								if (Global_69800)
								{
									unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 244, 0);
									unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 243, 0);
									unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 242, 0);
								}
								unk_0xF6082E2ADA1C795B(&Global_2313, 11);
								unk_0xA6EF4C7DCA806A90(unk_0x2A5EB8B0FE590B91(), 1, 1);
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
	
	uVar0 = unk_0x8EEB10CA57B82F27();
	iVar1 = unk_0xC1A55CEDE7782B6F(uVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_99()
{
	struct<2> Var0;
	
	unk_0xE3812E52897ABBA5(&Var0);
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
	while (iVar0 < Global_103236.f_7469.f_650)
	{
		if (Global_103236.f_7469.f_199[iVar0 /*15*/].f_6 == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_103236.f_7469.f_136)
	{
		if (Global_103236.f_7469[iVar0 /*15*/].f_6 == iParam0)
		{
			if (unk_0xAA4F14DA15DB0B51(Global_103236.f_7469[iVar0 /*15*/].f_1, 7))
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
		iVar1 = Global_82674[iVar0 /*5*/];
		if (iVar1 != -1)
		{
			iVar2 = -1;
			iVar2 = Global_70069.f_109[Global_82674[iVar0 /*5*/] /*4*/];
			if (iVar2 != -1)
			{
				if (func_102(Global_82710[iVar2 /*34*/].f_12, iParam0))
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
			return unk_0xAA4F14DA15DB0B51(uParam0, iParam1);
		
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
			unk_0x507FE690B1271947(&Global_2314, 0);
			func_143();
			Global_14421 = 1;
			unk_0xD1FCC52F87A98873(Global_14424, "GET_CURRENT_SELECTION");
			uLocal_105 = unk_0xCA19844C8EBF135B();
			while (!unk_0x49312763BCF4C85A(uLocal_105))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_109 = unk_0x7E45511185E08C01(uLocal_105);
			if (iLocal_109 == 0)
			{
				Global_16854[Global_14443] = 1;
				iLocal_120 = 0;
				Global_16859 = 0;
				Global_16858 = 1;
				Global_16860 = 0;
				func_86();
			}
			else
			{
				iLocal_121 = 0;
				func_120();
			}
		}
	}
}

void func_106(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_101878 && iParam1)
	{
		if (func_110(sParam0) && !unk_0x562C6F6FC5F97BF3())
		{
			unk_0x7D53B6FFAEDA810A(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_103236.f_20191.f_145)
	{
		if (unk_0x35302CD5A5D37EED(sParam0, &(Global_103236.f_20191[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_103236.f_20191.f_145 - 2))
			{
				func_109(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_108((Global_103236.f_20191.f_145 - 1));
			Global_103236.f_20191.f_145 = (Global_103236.f_20191.f_145 - 1);
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
		Global_103236.f_20191.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_103236.f_20191.f_145)
	{
		if (unk_0xAA4F14DA15DB0B51(Global_103236.f_20191[iVar0 /*16*/].f_11, 0))
		{
			if (Global_103236.f_20191[iVar0 /*16*/].f_12 > Global_103236.f_20191.f_146[0])
			{
				Global_103236.f_20191.f_146[0] = Global_103236.f_20191[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xAA4F14DA15DB0B51(Global_103236.f_20191[iVar0 /*16*/].f_11, 1))
		{
			if (Global_103236.f_20191[iVar0 /*16*/].f_12 > Global_103236.f_20191.f_146[1])
			{
				Global_103236.f_20191.f_146[1] = Global_103236.f_20191[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xAA4F14DA15DB0B51(Global_103236.f_20191[iVar0 /*16*/].f_11, 2))
		{
			if (Global_103236.f_20191[iVar0 /*16*/].f_12 > Global_103236.f_20191.f_146[2])
			{
				Global_103236.f_20191.f_146[2] = Global_103236.f_20191[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_108(int iParam0)
{
	StringCopy(&(Global_103236.f_20191[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_103236.f_20191[iParam0 /*16*/].f_4), "", 16);
	Global_103236.f_20191[iParam0 /*16*/].f_8 = 0;
	Global_103236.f_20191[iParam0 /*16*/].f_9 = 0;
	Global_103236.f_20191[iParam0 /*16*/].f_11 = 0;
	Global_103236.f_20191[iParam0 /*16*/].f_10 = -1;
	Global_103236.f_20191[iParam0 /*16*/].f_12 = 0;
	Global_103236.f_20191[iParam0 /*16*/].f_13 = 0;
	Global_103236.f_20191[iParam0 /*16*/].f_14 = 0;
	Global_103236.f_20191[iParam0 /*16*/].f_15 = 0;
}

void func_109(int iParam0, int iParam1)
{
	Global_103236.f_20191[iParam0 /*16*/] = { Global_103236.f_20191[iParam1 /*16*/] };
	Global_103236.f_20191[iParam0 /*16*/].f_4 = { Global_103236.f_20191[iParam1 /*16*/].f_4 };
	Global_103236.f_20191[iParam0 /*16*/].f_8 = Global_103236.f_20191[iParam1 /*16*/].f_8;
	Global_103236.f_20191[iParam0 /*16*/].f_10 = Global_103236.f_20191[iParam1 /*16*/].f_10;
	Global_103236.f_20191[iParam0 /*16*/].f_9 = Global_103236.f_20191[iParam1 /*16*/].f_9;
	Global_103236.f_20191[iParam0 /*16*/].f_11 = Global_103236.f_20191[iParam1 /*16*/].f_11;
	Global_103236.f_20191[iParam0 /*16*/].f_12 = Global_103236.f_20191[iParam1 /*16*/].f_12;
	Global_103236.f_20191[iParam0 /*16*/].f_13 = Global_103236.f_20191[iParam1 /*16*/].f_13;
	Global_103236.f_20191[iParam0 /*16*/].f_14 = Global_103236.f_20191[iParam1 /*16*/].f_14;
	Global_103236.f_20191[iParam0 /*16*/].f_15 = Global_103236.f_20191[iParam1 /*16*/].f_15;
}

var func_110(var uParam0)
{
	unk_0xCC4D66D4B9222F95(uParam0);
	return unk_0x95886DF60C19E1CC(0);
}

void func_111(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_112(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_112(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x35302CD5A5D37EED(sParam0, ""))
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
	while (iVar0 < Global_103236.f_20191.f_145)
	{
		if (unk_0x35302CD5A5D37EED(&(Global_103236.f_20191[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_103236.f_20191.f_145 < 9)
	{
		StringCopy(&(Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_4), sParam1, 16);
		Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_8 = (unk_0x3732B96D7A1859B4() + iParam3);
		Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_9 = iParam5;
		Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_11 = iParam6;
		Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_12 = uParam2;
		Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_13 = iParam7;
		Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_14 = iParam8;
		Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_10 = ((unk_0x3732B96D7A1859B4() + iParam3) + iParam4);
		}
		else
		{
			Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_10 = -1;
		}
		Global_103236.f_20191.f_145++;
		func_107();
	}
}

int func_113(char* sParam0)
{
	if (unk_0x35302CD5A5D37EED(sParam0, &Global_101881))
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
	while (iVar0 < Global_103236.f_20191.f_145)
	{
		if (unk_0x35302CD5A5D37EED(sParam0, &(Global_103236.f_20191[iVar0 /*16*/])))
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
	if ((Global_87769 != -1 && unk_0xAA4F14DA15DB0B51(Global_82710[Global_87769 /*34*/].f_15, 15)) && unk_0xAA4F14DA15DB0B51(Global_87770, iParam1))
	{
		if (Global_87768 != 5 || func_119() == Global_87769)
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
	return unk_0xAA4F14DA15DB0B51(Global_87777, iParam0);
}

int func_119()
{
	return Global_70062;
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
	unk_0x507FE690B1271947(&Global_2313, 17);
	iLocal_120 = 1;
	func_142(Global_14424, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (func_100(Global_1628))
	{
		if (bLocal_332)
		{
			func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(0), -1f, -1f, &(Global_2151[iLocal_334 /*16*/].f_8), 0, 0, 0, 0);
			func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_208", 0, 0, 0, 0);
			if (bLocal_333)
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
			if (bLocal_333)
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
	else if (bLocal_332)
	{
		func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(0), -1f, -1f, &(Global_2151[iLocal_334 /*16*/].f_8), 0, 0, 0, 0);
		if (bLocal_333)
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
	else if (bLocal_333)
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
	func_142(Global_14424, "DISPLAY_VIEW", 18f, unk_0xBBDA792448DB5A89(iLocal_106), -1082130432, -1082130432, -1082130432);
	func_140(Global_14424, "SET_HEADER", &(Global_103236.f_27831[Global_1628 /*29*/].f_3), 0, 0, 0, 0);
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
	
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		unk_0x4E6996123FABDB93(0, 22, 1);
	}
	if (func_145(2, Global_14412, 0))
	{
		func_143();
		Global_14421 = 1;
		unk_0xD1FCC52F87A98873(Global_14424, "GET_CURRENT_SELECTION");
		uLocal_105 = unk_0xCA19844C8EBF135B();
		while (!unk_0x49312763BCF4C85A(uLocal_105))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		iVar0 = unk_0x7E45511185E08C01(uLocal_105);
		iLocal_111 = Global_3104[iVar0];
		uLocal_113[0] = unk_0x91D2F083AE17E209(&(Global_3021[iLocal_111 /*5*/]));
		if (unk_0x35302CD5A5D37EED(uLocal_113[0], "*"))
		{
			cLocal_115 = { Global_3087[Global_14443 /*4*/] };
			iLocal_112 = unk_0x49828C486339D60D(&cLocal_115);
		}
		else if (unk_0x49828C486339D60D(&cLocal_115) < 14)
		{
			StringConCat(&cLocal_115, uLocal_113[0], 16);
			iLocal_112++;
		}
		unk_0xD1FCC52F87A98873(Global_14424, "SET_HEADER");
		unk_0xADBDBA2DF8443753("STRING");
		unk_0xCF50F77421826072(&cLocal_115, -1);
		unk_0xF7D95CCE1364B5CE();
		unk_0x8123397DC676E794();
	}
	if (func_145(2, 178, 0))
	{
		func_75();
		Global_14421 = 1;
		if (unk_0x49828C486339D60D(&cLocal_115) > 0)
		{
			StringCopy(&cLocal_115, unk_0xB016D23B4D241322(&cLocal_115, 0, (iLocal_112 - 1)), 16);
			iLocal_112 = (iLocal_112 - 1);
		}
		unk_0xD1FCC52F87A98873(Global_14424, "SET_HEADER");
		unk_0xADBDBA2DF8443753("STRING");
		unk_0xCF50F77421826072(&cLocal_115, -1);
		unk_0xF7D95CCE1364B5CE();
		unk_0x8123397DC676E794();
	}
	if (func_145(2, Global_14415, 0))
	{
		if (!func_128())
		{
			func_143();
			Global_3087[Global_14443 /*4*/] = { cLocal_115 };
			Global_1628 = 144;
			iLocal_312 = 0;
			if (Global_14443.f_1 > 3)
			{
				Global_14443.f_1 = 10;
				func_99();
				if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
				{
					if (!unk_0xABCF7EB00A727656(unk_0x2A5EB8B0FE590B91()))
					{
						if (unk_0xC8AAE02019F925E6(unk_0x2A5EB8B0FE590B91(), 0))
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
			iLocal_125 = 0;
			while (iVar1 < 150)
			{
				if (iVar1 != 146)
				{
					sVar2 = unk_0x91D2F083AE17E209(&(Global_117[iVar1 /*10*/].f_4));
					if (unk_0x35302CD5A5D37EED(sVar2, &cLocal_115))
					{
						if ((Global_103236.f_27831[iVar1 /*29*/].f_12[Global_14443] == 1 || Global_103236.f_27831[iVar1 /*29*/].f_12[Global_14443] == 2) || unk_0x35302CD5A5D37EED(sVar2, unk_0x91D2F083AE17E209(&(Global_117[130 /*10*/].f_4))))
						{
							Global_1628 = iVar1;
						}
						else
						{
							iLocal_125 = 1;
						}
					}
				}
				iVar1++;
			}
			if ((Global_1628 == 144 && iLocal_312 == 0) && iLocal_125 == 0)
			{
				unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
				unk_0x4CECF13AF144A8F6(4);
				unk_0x4CECF13AF144A8F6(0);
				unk_0x4CECF13AF144A8F6(3);
				unk_0xADBDBA2DF8443753("STRING");
				unk_0xCF50F77421826072(&cLocal_115, -1);
				unk_0xF7D95CCE1364B5CE();
				func_72("CELL_300");
				func_72("CELL_211");
				func_72("CELL_195");
				unk_0x8123397DC676E794();
				func_142(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
				iLocal_312 = 0;
				iVar3 = 0;
				while (iVar3 < 37)
				{
					sVar4 = unk_0x91D2F083AE17E209(&(Global_1632[iVar3 /*14*/]));
					if (unk_0x35302CD5A5D37EED(sVar4, &cLocal_115))
					{
						iLocal_312 = 1;
						cLocal_313 = { Global_1632[iVar3 /*14*/].f_4 };
						Local_317 = { Global_1632[iVar3 /*14*/].f_8 };
					}
					iVar3++;
				}
				if (iLocal_312 == 0)
				{
					iLocal_119 = unk_0x49828C486339D60D(&cLocal_115);
					if (iLocal_119 > 6)
					{
						StringCopy(&(uLocal_323[0]), unk_0xB016D23B4D241322(&cLocal_115, 0, 1), 4);
						StringCopy(&(uLocal_323[1]), unk_0xB016D23B4D241322(&cLocal_115, 1, 2), 4);
						StringCopy(&(uLocal_323[2]), unk_0xB016D23B4D241322(&cLocal_115, 2, 3), 4);
						StringCopy(&(uLocal_323[3]), unk_0xB016D23B4D241322(&cLocal_115, 3, 4), 4);
						StringCopy(&(uLocal_323[4]), unk_0xB016D23B4D241322(&cLocal_115, 4, 5), 4);
						StringCopy(&(uLocal_323[5]), unk_0xB016D23B4D241322(&cLocal_115, 5, 6), 4);
						if (((unk_0x35302CD5A5D37EED(&(uLocal_323[0]), "1") && unk_0x35302CD5A5D37EED(&(uLocal_323[1]), "9")) && unk_0x35302CD5A5D37EED(&(uLocal_323[2]), "9")) && unk_0x35302CD5A5D37EED(&(uLocal_323[3]), "9"))
						{
							iVar5 = func_127(&(uLocal_323[4]));
							iVar6 = func_127(&(uLocal_323[5]));
							func_126(iVar5, iVar6);
							iLocal_312 = 1;
						}
						if (iLocal_312 == 0)
						{
							if (iLocal_119 == 10 || iLocal_119 == 7)
							{
								if (iLocal_119 == 10)
								{
									StringCopy(&(uLocal_323[0]), unk_0xB016D23B4D241322(&cLocal_115, 3, 4), 4);
									StringCopy(&(uLocal_323[1]), unk_0xB016D23B4D241322(&cLocal_115, 4, 5), 4);
									StringCopy(&(uLocal_323[2]), unk_0xB016D23B4D241322(&cLocal_115, 5, 6), 4);
									StringCopy(&(uLocal_323[3]), unk_0xB016D23B4D241322(&cLocal_115, 6, 7), 4);
									StringCopy(&(uLocal_323[4]), unk_0xB016D23B4D241322(&cLocal_115, 7, 8), 4);
									StringCopy(&(uLocal_323[5]), unk_0xB016D23B4D241322(&cLocal_115, 8, 9), 4);
									StringCopy(&(uLocal_323[6]), unk_0xB016D23B4D241322(&cLocal_115, 9, 10), 4);
								}
								else
								{
									StringCopy(&(uLocal_323[0]), unk_0xB016D23B4D241322(&cLocal_115, 0, 1), 4);
									StringCopy(&(uLocal_323[1]), unk_0xB016D23B4D241322(&cLocal_115, 1, 2), 4);
									StringCopy(&(uLocal_323[2]), unk_0xB016D23B4D241322(&cLocal_115, 2, 3), 4);
									StringCopy(&(uLocal_323[3]), unk_0xB016D23B4D241322(&cLocal_115, 3, 4), 4);
									StringCopy(&(uLocal_323[4]), unk_0xB016D23B4D241322(&cLocal_115, 4, 5), 4);
									StringCopy(&(uLocal_323[5]), unk_0xB016D23B4D241322(&cLocal_115, 5, 6), 4);
									StringCopy(&(uLocal_323[6]), unk_0xB016D23B4D241322(&cLocal_115, 6, 7), 4);
								}
								if ((((unk_0x35302CD5A5D37EED(&(uLocal_323[0]), "5") && unk_0x35302CD5A5D37EED(&(uLocal_323[1]), "5")) && unk_0x35302CD5A5D37EED(&(uLocal_323[2]), "5")) && unk_0x35302CD5A5D37EED(&(uLocal_323[3]), "0")) && unk_0x35302CD5A5D37EED(&(uLocal_323[4]), "1"))
								{
									iVar7 = func_127(&(uLocal_323[5]));
									iVar8 = func_127(&(uLocal_323[6]));
									func_126(iVar7, iVar8);
									iLocal_312 = 1;
								}
							}
						}
					}
				}
			}
			else
			{
				if (Global_103236.f_27831[Global_1628 /*29*/].f_12[Global_14443] == 2 || Global_1628 == 130)
				{
					Global_103236.f_27831[Global_1628 /*29*/].f_24[Global_14443] = 1;
					if (Global_1628 == 130)
					{
						if (!Global_103236.f_27831[130 /*29*/].f_12[0] == 1)
						{
							func_124(130, 4, 1);
							func_124(130, 3, 0);
						}
						if (Global_69800)
						{
							if (!func_123(130, 3))
							{
								func_124(130, 3, 1);
							}
						}
					}
				}
				if (Global_103236.f_27831[Global_1628 /*29*/].f_24[Global_14443] == 0)
				{
					func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_1628 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_103236.f_27831[Global_1628 /*29*/].f_3), &(Global_103236.f_27831[Global_1628 /*29*/].f_7), "CELL_211", &(Global_103236.f_27831[Global_1628 /*29*/].f_3), 0);
				}
			}
			func_91();
		}
	}
}

int func_123(int iParam0, int iParam1)
{
	if (Global_103236.f_27831[iParam0 /*29*/].f_12[iParam1] == 1)
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
			Global_103236.f_27831[iParam0 /*29*/].f_12[0] = 1;
			Global_103236.f_27831[iParam0 /*29*/].f_12[1] = 1;
			Global_103236.f_27831[iParam0 /*29*/].f_12[2] = 1;
			Global_103236.f_27831[iParam0 /*29*/].f_24[0] = 1;
			Global_103236.f_27831[iParam0 /*29*/].f_24[1] = 1;
			Global_103236.f_27831[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_103236.f_27831[iParam0 /*29*/].f_12[iParam1] == 1 && Global_103236.f_27831[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_103236.f_27831[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_103236.f_27831[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_69800)
			{
				if (iParam1 != 4)
				{
					if (Global_14443 != iParam1)
					{
						Global_2972[iParam1 /*4*/] = { Global_103236.f_27831[iParam0 /*29*/].f_3 };
						Global_2989[iParam1] = 1;
						Global_2994[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14443)
					{
					}
					else
					{
						Global_2923[1 /*6*/] = { Global_103236.f_27831[iParam0 /*29*/].f_3 };
						Global_2923[1 /*6*/].f_5 = iParam1;
						func_125();
					}
				}
				else
				{
					Global_2923[1 /*6*/] = { Global_103236.f_27831[iParam0 /*29*/].f_3 };
					Global_2923[1 /*6*/].f_5 = iParam1;
					func_125();
				}
			}
			else
			{
				Global_2923[1 /*6*/] = { Global_103236.f_27831[iParam0 /*29*/].f_3 };
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
	
	StringCopy(&cVar0, unk_0x91D2F083AE17E209(&(Global_103236.f_27831[Global_2999 /*29*/].f_7)), 64);
	if (Global_3018 == 0)
	{
		unk_0xD05F099FEF4ED10A("");
		StringCopy(&cVar16, unk_0x91D2F083AE17E209(&(Global_2923[1 /*6*/])), 64);
		sVar32 = unk_0x91D2F083AE17E209("CELL_253");
		unk_0xF8DCA62B36D8BCE7(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0xD05F099FEF4ED10A("CELL_255");
		unk_0xD5DA3EC5EEC78358(&(Global_2923[1 /*6*/]));
		unk_0xF8DCA62B36D8BCE7(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0x507FE690B1271947(&Global_2313, 0);
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
			StringCopy(&cLocal_313, "ANS_RAN1", 16);
			StringCopy(&Local_317, "ANS_M_USA1", 24);
			break;
		
		case 8:
			StringCopy(&cLocal_313, "ANS_RAN2", 16);
			StringCopy(&Local_317, "ANS_F_USA1", 24);
			break;
		
		case 9:
			StringCopy(&cLocal_313, "ANS_RAN3", 16);
			StringCopy(&Local_317, "ANS_M_ENG1", 24);
			break;
		
		case 10:
			StringCopy(&cLocal_313, "ANS_RAN4", 16);
			StringCopy(&Local_317, "ANS_M_USA2", 24);
			break;
		
		case 11:
			StringCopy(&cLocal_313, "ANS_RAN5", 16);
			StringCopy(&Local_317, "ANS_M_ASIAN", 24);
			break;
		
		case 12:
			StringCopy(&cLocal_313, "ANS_RAN6", 16);
			StringCopy(&Local_317, "ANS_F_USA2", 24);
			break;
		
		case 13:
			StringCopy(&cLocal_313, "ANS_RAN7", 16);
			StringCopy(&Local_317, "ANSWER_FX", 24);
			break;
		
		case 14:
			StringCopy(&cLocal_313, "ANS_RAN8", 16);
			StringCopy(&Local_317, "ANSWER_FX", 24);
			break;
		
		case 15:
			StringCopy(&cLocal_313, "ANS_RAN9", 16);
			StringCopy(&Local_317, "ANSWER_FX", 24);
			break;
		
		case 16:
			StringCopy(&cLocal_313, "ANS_RAN10", 16);
			StringCopy(&Local_317, "ANSWER_FX", 24);
			break;
		
		case 17:
			StringCopy(&cLocal_313, "ANS_RAN1", 16);
			StringCopy(&Local_317, "ANS_M_USA1", 24);
			break;
		
		case 18:
			StringCopy(&cLocal_313, "ANS_RAN2", 16);
			StringCopy(&Local_317, "ANS_F_USA1", 24);
			break;
		
		case 19:
			StringCopy(&cLocal_313, "ANS_RAN3", 16);
			StringCopy(&Local_317, "ANS_M_ENG1", 24);
			break;
		
		case 20:
			StringCopy(&cLocal_313, "ANS_RAN4", 16);
			StringCopy(&Local_317, "ANS_M_USA2", 24);
			break;
		
		case 21:
			StringCopy(&cLocal_313, "ANS_RAN5", 16);
			StringCopy(&Local_317, "ANS_M_ASIAN", 24);
			break;
		
		case 22:
			StringCopy(&cLocal_313, "ANS_RAN6", 16);
			StringCopy(&Local_317, "ANS_F_USA2", 24);
			break;
		
		case 23:
			StringCopy(&cLocal_313, "ANS_RAN7", 16);
			StringCopy(&Local_317, "ANSWER_FX", 24);
			break;
		
		case 24:
			StringCopy(&cLocal_313, "ANS_RAN8", 16);
			StringCopy(&Local_317, "ANSWER_FX", 24);
			break;
		
		case 25:
			StringCopy(&cLocal_313, "ANS_RAN9", 16);
			StringCopy(&Local_317, "ANSWER_FX", 24);
			break;
		
		default:
			StringCopy(&cLocal_313, "ANS_RAN8", 16);
			StringCopy(&Local_317, "ANSWER_FX", 24);
			break;
	}
}

int func_127(char* sParam0)
{
	if (unk_0x35302CD5A5D37EED(sParam0, "0"))
	{
		return 0;
	}
	if (unk_0x35302CD5A5D37EED(sParam0, "1"))
	{
		return 1;
	}
	if (unk_0x35302CD5A5D37EED(sParam0, "2"))
	{
		return 2;
	}
	if (unk_0x35302CD5A5D37EED(sParam0, "3"))
	{
		return 3;
	}
	if (unk_0x35302CD5A5D37EED(sParam0, "4"))
	{
		return 4;
	}
	if (unk_0x35302CD5A5D37EED(sParam0, "5"))
	{
		return 5;
	}
	if (unk_0x35302CD5A5D37EED(sParam0, "6"))
	{
		return 6;
	}
	if (unk_0x35302CD5A5D37EED(sParam0, "7"))
	{
		return 7;
	}
	if (unk_0x35302CD5A5D37EED(sParam0, "8"))
	{
		return 8;
	}
	if (unk_0x35302CD5A5D37EED(sParam0, "9"))
	{
		return 9;
	}
	if (unk_0x35302CD5A5D37EED(sParam0, "A"))
	{
		return 10;
	}
	if (unk_0x35302CD5A5D37EED(sParam0, "B"))
	{
		return 11;
	}
	if (unk_0x35302CD5A5D37EED(sParam0, "C"))
	{
		return 12;
	}
	if (unk_0x35302CD5A5D37EED(sParam0, "D"))
	{
		return 13;
	}
	if (unk_0x35302CD5A5D37EED(sParam0, "E"))
	{
		return 14;
	}
	if (unk_0x35302CD5A5D37EED(sParam0, "F"))
	{
		return 15;
	}
	if (unk_0x35302CD5A5D37EED(sParam0, "G"))
	{
		return 16;
	}
	if (unk_0x35302CD5A5D37EED(sParam0, "H"))
	{
		return 17;
	}
	if (unk_0x35302CD5A5D37EED(sParam0, "I"))
	{
		return 18;
	}
	if (unk_0x35302CD5A5D37EED(sParam0, "J"))
	{
		return 19;
	}
	if (unk_0x35302CD5A5D37EED(sParam0, "K"))
	{
		return 20;
	}
	if (unk_0x35302CD5A5D37EED(sParam0, "L"))
	{
		return 21;
	}
	if (unk_0x35302CD5A5D37EED(sParam0, "M"))
	{
		return 22;
	}
	if (unk_0x35302CD5A5D37EED(sParam0, "N"))
	{
		return 23;
	}
	if (unk_0x35302CD5A5D37EED(sParam0, "O"))
	{
		return 24;
	}
	if (unk_0x35302CD5A5D37EED(sParam0, "P"))
	{
		return 25;
	}
	if (unk_0x35302CD5A5D37EED(sParam0, "Q"))
	{
		return 26;
	}
	if (unk_0x35302CD5A5D37EED(sParam0, "R"))
	{
		return 27;
	}
	if (unk_0x35302CD5A5D37EED(sParam0, "S"))
	{
		return 28;
	}
	if (unk_0x35302CD5A5D37EED(sParam0, "T"))
	{
		return 29;
	}
	if (unk_0x35302CD5A5D37EED(sParam0, "U"))
	{
		return 30;
	}
	if (unk_0x35302CD5A5D37EED(sParam0, "V"))
	{
		return 31;
	}
	if (unk_0x35302CD5A5D37EED(sParam0, "W"))
	{
		return 32;
	}
	if (unk_0x35302CD5A5D37EED(sParam0, "X"))
	{
		return 33;
	}
	if (unk_0x35302CD5A5D37EED(sParam0, "Y"))
	{
		return 34;
	}
	if (unk_0x35302CD5A5D37EED(sParam0, "Z"))
	{
		return 35;
	}
	if (unk_0x35302CD5A5D37EED(sParam0, "z"))
	{
		return -1;
	}
	return -1;
}

int func_128()
{
	if (Global_69800)
	{
		return 0;
	}
	if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
	{
		if (unk_0x63949B600E6C0045(unk_0x0FFED3E94261A832()))
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
	if (unk_0x3A473E888D0CF9FD(2))
	{
		if (unk_0x92BC4A8239BDDACC(2, 180))
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
		if (unk_0x92BC4A8239BDDACC(2, 181))
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
	unk_0x08BE237DBCD9CBD9(-1, "Menu_Navigate", &Global_14432, 1);
	func_131();
}

void func_131()
{
	if (func_132())
	{
		if (Global_14609 == 0)
		{
			unk_0xFDAF8983B14992F8(1);
		}
		else
		{
			unk_0xFDAF8983B14992F8(2);
		}
	}
}

int func_132()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69800)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0x8EEB10CA57B82F27();
	iVar1 = unk_0xC1A55CEDE7782B6F(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_2600899 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_133()
{
	func_142(Global_14424, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(4), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x08BE237DBCD9CBD9(-1, "Menu_Navigate", &Global_14432, 1);
	func_134();
}

void func_134()
{
	if (func_132())
	{
		if (Global_14609 == 0)
		{
			unk_0xFDAF8983B14992F8(3);
		}
		else
		{
			unk_0xFDAF8983B14992F8(4);
		}
	}
}

void func_135()
{
	func_142(Global_14424, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x08BE237DBCD9CBD9(-1, "Menu_Navigate", &Global_14432, 1);
	func_136();
}

void func_136()
{
	if (func_132())
	{
		if (Global_14609 == 0)
		{
			unk_0xFDAF8983B14992F8(2);
		}
		else
		{
			unk_0xFDAF8983B14992F8(1);
		}
	}
}

void func_137()
{
	func_142(Global_14424, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(2), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x08BE237DBCD9CBD9(-1, "Menu_Navigate", &Global_14432, 1);
	func_138();
}

void func_138()
{
	if (func_132())
	{
		if (Global_14609 == 0)
		{
			unk_0xFDAF8983B14992F8(4);
		}
		else
		{
			unk_0xFDAF8983B14992F8(3);
		}
	}
}

void func_139(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, int iParam10, int iParam11)
{
	unk_0xD1FCC52F87A98873(uParam0, sParam1);
	unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x58478145CAF8429C(sParam7))
	{
		func_72(sParam7);
	}
	if (!unk_0x58478145CAF8429C(sParam8))
	{
		func_72(sParam8);
	}
	if (!unk_0x58478145CAF8429C(sParam9))
	{
		func_72(sParam9);
	}
	if (!unk_0x58478145CAF8429C(iParam10))
	{
		func_72(iParam10);
	}
	if (!unk_0x58478145CAF8429C(iParam11))
	{
		func_72(iParam11);
	}
	unk_0x8123397DC676E794();
}

void func_140(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0xD1FCC52F87A98873(uParam0, sParam1);
	func_72(sParam2);
	if (!unk_0x58478145CAF8429C(sParam3))
	{
		func_72(sParam3);
	}
	if (!unk_0x58478145CAF8429C(sParam4))
	{
		func_72(sParam4);
	}
	if (!unk_0x58478145CAF8429C(sParam5))
	{
		func_72(sParam5);
	}
	if (!unk_0x58478145CAF8429C(sParam6))
	{
		func_72(sParam6);
	}
	unk_0x8123397DC676E794();
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
					unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
					unk_0x4CECF13AF144A8F6(11);
					unk_0x4CECF13AF144A8F6(iVar13);
					func_72(&(Global_3021[iVar14 /*5*/]));
					unk_0x8123397DC676E794();
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
	unk_0xD1FCC52F87A98873(uParam0, sParam1);
	unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x8123397DC676E794();
}

void func_143()
{
	if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
	{
		unk_0x08BE237DBCD9CBD9(-1, "Menu_Accept", &Global_14432, 1);
		func_144();
	}
}

void func_144()
{
	if (func_132())
	{
		unk_0xFDAF8983B14992F8(5);
	}
}

int func_145(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x92BC4A8239BDDACC(iParam0, iParam1) || (iParam2 == 1 && unk_0xBA36AFDE947F5C56(iParam0, iParam1)))
	{
		if (unk_0x5018862FF5D9F844())
		{
			if (unk_0x20CC52AB5EBEF40E() == 0 || (unk_0x2593BD27F8406EC2() && unk_0x3A473E888D0CF9FD(2)))
			{
				return 0;
			}
		}
		if (unk_0x9E5289F5D782437C() || unk_0x908783EBF098B817())
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
		iLocal_139 = 0;
		unk_0xF6082E2ADA1C795B(&Global_2314, 0);
		func_75();
		Global_14421 = 1;
		if (Global_69800)
		{
			func_269();
		}
		else
		{
			func_259();
		}
		unk_0x4EDE34FBADD967A6(0);
		if (Global_14443.f_1 > 3)
		{
			Global_14443.f_1 = 7;
		}
		StringCopy(&cLocal_115, "", 16);
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
				iLocal_312 = 0;
				func_143();
				Global_14421 = 1;
				if (iLocal_100 > 0)
				{
					unk_0xD1FCC52F87A98873(Global_14424, "GET_CURRENT_SELECTION");
					uLocal_105 = unk_0xCA19844C8EBF135B();
					while (!unk_0x49312763BCF4C85A(uLocal_105))
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					iLocal_108 = unk_0x7E45511185E08C01(uLocal_105);
					bVar0 = false;
					if (unk_0x822F3797A8B64786())
					{
						if (Global_69800)
						{
							if (iLocal_108 < iLocal_103)
							{
								bVar0 = true;
							}
						}
						else if (iLocal_108 == iLocal_102 || iLocal_108 > iLocal_102)
						{
							bVar0 = true;
						}
					}
					if (unk_0xAA4F14DA15DB0B51(Global_2314, 0))
					{
						bVar0 = false;
					}
					if (bVar0)
					{
						Local_337.f_2936 = (iLocal_108 - iLocal_102);
						func_151();
					}
					else
					{
						if (iLocal_108 < 0)
						{
							iLocal_108 = 0;
						}
						Global_1628 = Global_14449[iLocal_108];
						if (Global_14601 != 145)
						{
							if (Global_1628 != Global_14601)
							{
								iLocal_96 = 1;
							}
							else
							{
								iLocal_96 = 0;
							}
						}
						else
						{
							iLocal_96 = 0;
						}
						if (iLocal_96 == 0)
						{
							if (unk_0xAA4F14DA15DB0B51(Global_2313, 9))
							{
								if (!unk_0xAA4F14DA15DB0B51(Global_2313, 29))
								{
									Global_103236.f_27831[Global_1628 /*29*/].f_18 = 1;
									if (Global_103236.f_27831[Global_1628 /*29*/].f_24[Global_14443] == 0)
									{
										func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(1), -1f, -1f, "CELL_288", "CELL_300", &(Global_117[Global_1628 /*10*/].f_4), "CELL_195", 0);
									}
									else
									{
										func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(1), -1f, -1f, "CELL_288", &(Global_103236.f_27831[Global_1628 /*29*/].f_7), &(Global_103236.f_27831[Global_1628 /*29*/].f_3), &(Global_103236.f_27831[Global_1628 /*29*/].f_3), 0);
									}
									func_139(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
									func_142(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
									unk_0xF6082E2ADA1C795B(&Global_2313, 29);
								}
							}
							else
							{
								bLocal_332 = false;
								bLocal_333 = false;
								if (Global_69800)
								{
									iVar1 = 0;
									while (iVar1 < 4)
									{
										if (unk_0x35302CD5A5D37EED(&(Global_103236.f_27831[Global_1628 /*29*/].f_3), &(Global_2216[iVar1 /*24*/])))
										{
											if (!unk_0x35302CD5A5D37EED(&(Global_2216[iVar1 /*24*/].f_8), "CELL_SFUN_NULL"))
											{
												bLocal_332 = true;
												iLocal_334 = iVar1;
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
										if (unk_0x35302CD5A5D37EED(&(Global_103236.f_27831[Global_1628 /*29*/].f_3), &(Global_2151[iVar2 /*16*/])))
										{
											if (!unk_0x35302CD5A5D37EED(&(Global_2151[iVar2 /*16*/].f_8), "CELL_SFUN_NULL"))
											{
												bLocal_332 = true;
												iLocal_334 = iVar2;
												if (iLocal_334 == iLocal_334)
												{
												}
											}
										}
										iVar2++;
									}
								}
								if (func_149(Global_1628) && unk_0xAA4F14DA15DB0B51(Global_2314, 0) == 0)
								{
									if (func_121(Global_1628, Global_14443) == 0 && func_78(Global_1628, Global_14443) == 0)
									{
										bLocal_333 = false;
									}
									else
									{
										bLocal_333 = true;
									}
								}
								if (unk_0xAA4F14DA15DB0B51(Global_2314, 0))
								{
									func_148();
									iLocal_139 = 1;
								}
								else if (bLocal_333 == 0 && bLocal_332 == 0)
								{
									Global_16859 = 0;
									Global_16858 = 0;
									Global_16860 = 0;
									if (unk_0xAA4F14DA15DB0B51(Global_2314, 19) && Global_1628 == 129)
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
	iLocal_137 = unk_0x3732B96D7A1859B4();
	func_142(Global_14424, "SET_DATA_SLOT_EMPTY", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4EDE34FBADD967A6(0);
	switch (Global_1628)
	{
		case 2:
			func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), 0f, -1f, -1f, "CELL_7001", &(Global_103236.f_27831[Global_1628 /*29*/].f_3), &(Global_103236.f_27831[Global_1628 /*29*/].f_7), 0, 0);
			break;
		
		case 0:
			func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), 0f, -1f, -1f, "CELL_7002", &(Global_103236.f_27831[Global_1628 /*29*/].f_3), &(Global_103236.f_27831[Global_1628 /*29*/].f_7), 0, 0);
			break;
		
		case 12:
			func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), 0f, -1f, -1f, "CELL_7003", &(Global_103236.f_27831[Global_1628 /*29*/].f_3), "CELL_E_311", 0, 0);
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
	unk_0x507FE690B1271947(&Global_2313, 17);
	func_142(Global_14424, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_208", 0, 0, 0, 0);
	func_155(&Local_337);
	if (Global_14443.f_1 > 3)
	{
		func_142(Global_14424, "DISPLAY_VIEW", 18f, unk_0xBBDA792448DB5A89(iLocal_106), -1082130432, -1082130432, -1082130432);
		iLocal_106 = 0;
		if (func_154(&Local_337))
		{
			uVar0 = unk_0x4325D353D7D27B34(Local_337[Local_337.f_2936]);
		}
		else
		{
			uVar0 = func_152(&(Local_337.f_34[func_153(Local_337.f_2936, &Local_337) /*29*/].f_13));
		}
		unk_0xD1FCC52F87A98873(Global_14424, "SET_HEADER");
		unk_0xADBDBA2DF8443753("CELL_CONDFNH");
		unk_0xCF6846167A5EFE98(uVar0);
		unk_0xF7D95CCE1364B5CE();
		unk_0x8123397DC676E794();
		Local_337.f_2999 = 0;
		iLocal_122 = 1;
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
			sVar37 = unk_0x4325D353D7D27B34((*uParam0)[uParam0->f_2936]);
		}
		else
		{
			uParam0->f_2963 = { uParam0->f_34[func_153(uParam0->f_2936, uParam0) /*29*/] };
			sVar37 = func_152(&(uParam0->f_34[func_153(uParam0->f_2936, uParam0) /*29*/].f_13));
		}
		StringCopy(&(uParam0->f_2983), sVar37, 64);
		bVar38 = false;
		if (unk_0x20A0A3B8B604285B())
		{
			if (!Global_1574316)
			{
				if (func_162(unk_0x0FFED3E94261A832()))
				{
					bVar38 = true;
				}
			}
		}
		if (func_154(uParam0))
		{
			if (((unk_0x2E1132782E0890A8((*uParam0)[uParam0->f_2936]) || unk_0xC20181A2A599F20C((*uParam0)[uParam0->f_2936])) || unk_0xE8CC947BE7D55A18((*uParam0)[uParam0->f_2936])) || unk_0xA8B633B8B65AADC9((*uParam0)[uParam0->f_2936]))
			{
				bVar38 = false;
			}
		}
		if (!unk_0x891AE2B743A4DAE9())
		{
			bVar38 = false;
		}
		if (unk_0xEB57CF04C0A84208(0))
		{
			bVar38 = false;
		}
		if (unk_0x7F20205AFD1B2752(&(uParam0->f_2963)) || unk_0xBC4C4C1ED3F85241(&(uParam0->f_2963)))
		{
			bVar38 = false;
		}
		if (unk_0x68DEA649E32FFF6B(&(uParam0->f_2963)) || unk_0xF1E72A17D5F3FF84(&(uParam0->f_2963)))
		{
			bVar38 = false;
		}
		if (unk_0xA27665532BF5A794())
		{
			if (unk_0x97FFE0491AC179A2())
			{
				if (unk_0xFF77C1691B4D45CC())
				{
					bVar38 = false;
				}
			}
			else if (unk_0x429A1F8C699BEE23())
			{
				bVar38 = false;
			}
		}
		if (bVar38)
		{
			if (Global_69800)
			{
				unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT_EMPTY");
				unk_0x4CECF13AF144A8F6(iVar0);
				unk_0x8123397DC676E794();
				unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
				unk_0x4CECF13AF144A8F6(18);
				unk_0x4CECF13AF144A8F6(iVar0);
				unk_0x4CECF13AF144A8F6(0);
				if (!Global_2503090.f_1 || Global_2503090.f_38)
				{
					unk_0xADBDBA2DF8443753("CELL_MP_1000");
					unk_0xF7D95CCE1364B5CE();
				}
				else
				{
					unk_0xADBDBA2DF8443753("CELL_MP_1000b");
					unk_0xF7D95CCE1364B5CE();
				}
				unk_0x8123397DC676E794();
				uParam0->f_2937[iVar0] = 1;
				iVar0++;
			}
			else if (Global_35813 == 15)
			{
				unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT_EMPTY");
				unk_0x4CECF13AF144A8F6(iVar0);
				unk_0x8123397DC676E794();
				unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
				unk_0x4CECF13AF144A8F6(18);
				unk_0x4CECF13AF144A8F6(iVar0);
				unk_0x4CECF13AF144A8F6(0);
				if (!Global_2503090.f_1 || Global_2503090.f_38)
				{
					unk_0xADBDBA2DF8443753("CELL_MP_1000");
					unk_0xF7D95CCE1364B5CE();
				}
				else
				{
					unk_0xADBDBA2DF8443753("CELL_MP_1000b");
					unk_0xF7D95CCE1364B5CE();
				}
				unk_0x8123397DC676E794();
				uParam0->f_2937[iVar0] = 1;
				iVar0++;
			}
		}
		bVar38 = false;
		if (func_154(uParam0))
		{
			Var39 = { func_163((*uParam0)[uParam0->f_2936]) };
			if ((func_162(unk_0x0FFED3E94261A832()) && func_162((*uParam0)[uParam0->f_2936])) && unk_0x98F37FFF1359CA85(&Var39))
			{
				bVar38 = true;
			}
		}
		if (bVar38)
		{
			unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT_EMPTY");
			unk_0x4CECF13AF144A8F6(iVar0);
			unk_0x8123397DC676E794();
			unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
			unk_0x4CECF13AF144A8F6(18);
			unk_0x4CECF13AF144A8F6(iVar0);
			unk_0x4CECF13AF144A8F6(0);
			unk_0xADBDBA2DF8443753("CELL_MP_1009");
			unk_0xF7D95CCE1364B5CE();
			unk_0x8123397DC676E794();
			uParam0->f_2937[iVar0] = 2;
			iVar0++;
		}
		bVar38 = false;
		if (func_154(uParam0))
		{
			if (unk_0x8D99D63E8E34B52B() < unk_0x5351541171B9AC20())
			{
				if (!unk_0xC869A9FE1FE47589(&(uParam0->f_2963)))
				{
					bVar38 = true;
				}
			}
		}
		if (bVar38)
		{
			unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
			unk_0x4CECF13AF144A8F6(18);
			unk_0x4CECF13AF144A8F6(iVar0);
			unk_0x4CECF13AF144A8F6(0);
			unk_0xADBDBA2DF8443753("PIM_DFRQ2");
			unk_0xF7D95CCE1364B5CE();
			unk_0x8123397DC676E794();
			uParam0->f_2937[iVar0] = 3;
			iVar0++;
		}
		bVar38 = false;
		bVar38 = true;
		if (bVar38)
		{
			unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
			unk_0x4CECF13AF144A8F6(18);
			unk_0x4CECF13AF144A8F6(iVar0);
			unk_0x4CECF13AF144A8F6(0);
			unk_0xADBDBA2DF8443753("CELL_MP_1007");
			unk_0xF7D95CCE1364B5CE();
			unk_0x8123397DC676E794();
			uParam0->f_2937[iVar0] = 4;
			iVar0++;
		}
		bVar38 = false;
		if (unk_0x591BB87E287F24DC())
		{
			if (unk_0x3BE1A7ECC62DB032(&(uParam0->f_2963)))
			{
				unk_0x78823C36BAC4791B(&Var1, 35, &(uParam0->f_2963));
			}
		}
		if (Var1.f_0 != -1)
		{
			if (Var1.f_21 == 1)
			{
				if (unk_0x26BB1D4FDEDC41EC() && !func_161(Var1.f_0))
				{
					bVar38 = true;
					uParam0->f_2947 = { Var1.f_1 };
				}
			}
		}
		if (bVar38)
		{
			unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
			unk_0x4CECF13AF144A8F6(18);
			unk_0x4CECF13AF144A8F6(iVar0);
			unk_0x4CECF13AF144A8F6(0);
			unk_0xADBDBA2DF8443753("CELL_MP_1003");
			unk_0xF7D95CCE1364B5CE();
			unk_0x8123397DC676E794();
			uParam0->f_2937[iVar0] = 5;
			iVar0++;
		}
		unk_0x507FE690B1271947(&Global_2315, 6);
		bVar38 = false;
		if (func_154(uParam0))
		{
			if (func_160(unk_0x0FFED3E94261A832(), 1, 1))
			{
				if (unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), (*uParam0)[uParam0->f_2936]))
				{
					if (!func_159((*uParam0)[uParam0->f_2936], 0))
					{
						if (!unk_0xAA4F14DA15DB0B51(Global_2422215[(*uParam0)[uParam0->f_2936] /*387*/].f_204, 2))
						{
							bVar38 = true;
							unk_0xF6082E2ADA1C795B(&Global_2315, 6);
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
		if (Global_1574286 || Global_1574287)
		{
			bVar38 = false;
		}
		if (bVar38)
		{
			unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
			unk_0x4CECF13AF144A8F6(18);
			unk_0x4CECF13AF144A8F6(iVar0);
			unk_0x4CECF13AF144A8F6(0);
			if (!unk_0xAA4F14DA15DB0B51(Global_2434604.f_972, (*uParam0)[uParam0->f_2936]))
			{
				unk_0xADBDBA2DF8443753("CELL_MP_1008");
			}
			else
			{
				unk_0xADBDBA2DF8443753("CELL_MP_1008b");
			}
			unk_0xF7D95CCE1364B5CE();
			unk_0x8123397DC676E794();
			uParam0->f_2937[iVar0] = 7;
			iVar0++;
		}
	}
	else
	{
		unk_0xD05F099FEF4ED10A("CELL_LEFT_SESS");
		unk_0xEF731ED745A201C5(1, 1);
		func_30(0);
		return;
	}
}

int func_156(int iParam0, int iParam1)
{
	if (Global_1622795[iParam0 /*431*/] == iParam1)
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
		return unk_0xAA4F14DA15DB0B51(Global_1622795[iVar0 /*431*/].f_1, 0);
	}
	return 0;
}

int func_158()
{
	return -1;
}

bool func_159(int iParam0, int iParam1)
{
	return unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_217, iParam1);
}

int func_160(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x885F483F34E47503(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xB8B285A272E7A79E(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2434604.f_3[iVar0])
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
	
	if (unk_0x591BB87E287F24DC() && unk_0x26BB1D4FDEDC41EC())
	{
		iVar0 = unk_0xF5A191FB510FD6A5();
		if (iVar0 > 0)
		{
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				unk_0x9A6C6B5FF79743B2(&Global_2484502, iVar1);
				if (iParam0 == Global_2484502)
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
	
	if (unk_0xA0756E8FA66C2332() == 0)
	{
		return 0;
	}
	iVar0 = -1;
	if (iParam0 != unk_0x0FFED3E94261A832())
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	if (unk_0xCF690C88B391CFA3() || unk_0x429A1F8C699BEE23())
	{
		if (unk_0x8419EC950557907F(0, iVar0))
		{
			if (unk_0x891AE2B743A4DAE9())
			{
				return 1;
			}
		}
	}
	if (unk_0xC1A8588DDF7A118E() || unk_0x97FFE0491AC179A2())
	{
		if (iParam0 == unk_0x0FFED3E94261A832())
		{
			if (unk_0x6A7AADEBF909EF81(0, -3, 1) || unk_0x8419EC950557907F(1, -1))
			{
				return 1;
			}
		}
		else
		{
			Var1 = { func_163(iParam0) };
			if (unk_0x8419EC950557907F(0, -1) || (unk_0x8419EC950557907F(1, -1) && unk_0xC869A9FE1FE47589(&Var1)))
			{
				return 1;
			}
		}
	}
	if (unk_0x5018862FF5D9F844())
	{
		if (unk_0x8419EC950557907F(0, iVar0))
		{
			if (unk_0x891AE2B743A4DAE9())
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
	
	unk_0x3CE329346978C3A6(iParam0, &Var0, 13);
	return Var0;
}

int func_164(var uParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x822F3797A8B64786())
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
		if (unk_0xC45C6F8B191E9D29(&(uParam0->f_34[iVar0 /*29*/])))
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
		unk_0x507FE690B1271947(&Global_2314, 0);
		iLocal_139 = 0;
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
	if (iLocal_132)
	{
		if (unk_0x83666F9FB8FEBD4B() > 150)
		{
			iLocal_132 = 0;
		}
	}
	if (unk_0x3A473E888D0CF9FD(2))
	{
		if (func_145(2, 181, 0))
		{
			if (iLocal_104 > 0)
			{
				iLocal_104 = (iLocal_104 - 1);
			}
			else
			{
				iLocal_104 = (iLocal_100 - 1);
			}
			func_130();
			iLocal_132 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_145(2, 180, 0))
		{
			iLocal_104++;
			if (iLocal_104 == iLocal_100)
			{
				iLocal_104 = 0;
			}
			func_135();
		}
	}
	if (iLocal_132 == 0)
	{
		if (func_145(2, Global_14419, 0))
		{
			if (iLocal_104 > 0)
			{
				iLocal_104 = (iLocal_104 - 1);
			}
			else
			{
				iLocal_104 = (iLocal_100 - 1);
			}
			func_130();
			iLocal_132 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_145(2, Global_14420, 0))
		{
			iLocal_104++;
			if (iLocal_104 == iLocal_100)
			{
				iLocal_104 = 0;
			}
			func_135();
			iLocal_132 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_145(2, Global_14418, 0))
		{
			func_168();
			func_168();
			func_168();
			func_168();
			func_168();
			unk_0x08BE237DBCD9CBD9(-1, "Menu_Navigate", &Global_14432, 1);
			iLocal_132 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_145(2, Global_14417, 0))
		{
			func_167();
			func_167();
			func_167();
			func_167();
			func_167();
			unk_0x08BE237DBCD9CBD9(-1, "Menu_Navigate", &Global_14432, 1);
			iLocal_132 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
}

void func_167()
{
	if (iLocal_104 > 0)
	{
		iLocal_104 = (iLocal_104 - 1);
	}
	else
	{
		iLocal_104 = (iLocal_100 - 1);
	}
	func_142(Global_14424, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_168()
{
	iLocal_104++;
	if (iLocal_104 == iLocal_100)
	{
		iLocal_104 = 0;
	}
	func_142(Global_14424, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(3), -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_169()
{
	iLocal_104++;
	if (iLocal_104 == iLocal_100)
	{
		iLocal_104 = 0;
		unk_0x507FE690B1271947(&Global_2313, 16);
	}
	func_135();
	unk_0xD1FCC52F87A98873(Global_14424, "GET_CURRENT_SELECTION");
	uLocal_105 = unk_0xCA19844C8EBF135B();
	while (!unk_0x49312763BCF4C85A(uLocal_105))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	iLocal_108 = unk_0x7E45511185E08C01(uLocal_105);
	if (iLocal_108 < 0)
	{
		iLocal_108 = 0;
	}
	if (Global_16776 == Global_14449[iLocal_108])
	{
		unk_0x507FE690B1271947(&Global_2313, 16);
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
	
	if (unk_0xAA4F14DA15DB0B51(Global_2315, 6))
	{
		if (!unk_0xB8CB95DC79AC0689(&(Local_337.f_2963)))
		{
			unk_0x507FE690B1271947(&Global_2315, 6);
			StringCopy(&cLocal_115, "", 16);
			Global_14443.f_1 = 3;
		}
	}
	switch (Local_337.f_2999)
	{
		case 0:
			if (unk_0xAA4F14DA15DB0B51(uLocal_331, 1))
			{
				if (!Global_91829.f_1369)
				{
					unk_0x507FE690B1271947(&uLocal_331, 0);
					unk_0x507FE690B1271947(&uLocal_331, 1);
				}
				return;
			}
			if (Local_337.f_2976)
			{
				if (Local_337.f_2981)
				{
					iVar39 = 2;
					unk_0xDC38CC1E35B6A5D7("HUD_CONNPROB", "HUD_DISCON", iVar39, 0, 0, -1, 0, 0, 1);
					if (Local_337.f_2982)
					{
						if (func_145(2, Global_14412, 0) || unk_0x83F6A1E4E653AD75(2, 201))
						{
							Global_14443.f_1 = 3;
						}
					}
					else if (func_145(2, Global_14412, 0) || unk_0x83F6A1E4E653AD75(2, 201))
					{
					}
					else
					{
						Local_337.f_2982 = 1;
					}
				}
				else
				{
					iLocal_106 = Local_337.f_2946;
					switch (Local_337.f_2937[Local_337.f_2946])
					{
						case 1:
							if (!Global_2503090.f_1)
							{
								if (!unk_0x7089662F13ACB397() && !unk_0x41F04C0067EE1934())
								{
									Local_337.f_2976 = 0;
									func_256();
									Local_337.f_2977 = 0;
									if (func_154(&Local_337))
									{
										sVar53 = unk_0x4325D353D7D27B34(Local_337[Local_337.f_2936]);
									}
									else
									{
										sVar53 = func_152(&(Local_337.f_34[func_153(Local_337.f_2936, &Local_337) /*29*/].f_13));
									}
									func_255(sVar53);
									Local_337.f_2999 = 1;
									func_254(&(Local_337.f_2979));
									func_253(0);
									if (Global_69800)
									{
										if (func_252(1) >= Global_262145.f_161)
										{
											Var40 = { func_163(unk_0x0FFED3E94261A832()) };
											if (func_251())
											{
												func_242(1654961868, Global_262145.f_161, &iVar0, 1, 1, 0);
												Global_2595364[iVar0 /*76*/].f_8.f_3 = { Var40 };
											}
											else
											{
												unk_0xD70ADAE9B2F7E0CC(Global_262145.f_161, &Var40, 1, 1);
											}
										}
										else
										{
											Var40 = { func_163(unk_0x0FFED3E94261A832()) };
											if (func_251())
											{
											}
											else
											{
												unk_0xD70ADAE9B2F7E0CC(func_252(1), &Var40, 1, 1);
											}
										}
										func_87(1910, 1, -1);
									}
								}
								else if (unk_0x7089662F13ACB397())
								{
								}
								else if (unk_0x41F04C0067EE1934())
								{
									if (!Global_2503090.f_59)
									{
										Global_2503090 = 1;
										Global_2503090.f_2 = 1;
										Global_2503090.f_59 = 1;
									}
								}
							}
							else if (Global_2503090.f_38)
							{
							}
							else
							{
								func_241();
								unk_0x08BE237DBCD9CBD9(-1, "Hang_Up", &Global_14432, 1);
								if (Global_2503090.f_1)
								{
									func_239();
								}
								Global_14443.f_1 = 3;
							}
							return;
							break;
						
						case 2:
							if (func_238(&(Global_2497344.f_299[Local_337[Local_337.f_2936] /*2*/])))
							{
								if (!func_237(&(Global_2497344.f_299[Local_337[Local_337.f_2936] /*2*/]), 30000, 0))
								{
									if (func_226(0, 0, 1, 1))
									{
										func_215("CELL_MP_1009H", unk_0x4325D353D7D27B34(Local_337[Local_337.f_2936]), func_216(Local_337[Local_337.f_2936], -2, 0, 0), -1);
									}
									Local_337.f_2976 = 0;
									return;
								}
							}
							Var54 = { func_163(Local_337[Local_337.f_2936]) };
							if ((!func_162(unk_0x0FFED3E94261A832()) || !func_162(Local_337[Local_337.f_2936])) || !unk_0x98F37FFF1359CA85(&Var54))
							{
								if (func_226(1, 1, 1, 1))
								{
									if (!unk_0x35302CD5A5D37EED(unk_0x4325D353D7D27B34(Local_337[Local_337.f_2936]), "**Invalid**"))
									{
										func_215("CELL_MP_1009M", unk_0x4325D353D7D27B34(Local_337[Local_337.f_2936]), func_216(Local_337[Local_337.f_2936], -2, 0, 0), -1);
									}
									else
									{
										func_214("CELL_MP_1009N", -1);
									}
								}
								Local_337.f_2976 = 0;
								return;
							}
							Local_337.f_2976 = 0;
							Local_337.f_2999 = 2;
							iLocal_3356 = 1;
							return;
							break;
						
						case 3:
							if (!unk_0x6D494200877DDE8E())
							{
								if (unk_0xCF690C88B391CFA3() && !unk_0xC869A9FE1FE47589(&(Local_337.f_2963)))
								{
									if (unk_0x0BEE830FD2AAA4B6(&(Local_337.f_2963), ""))
									{
										Local_337.f_2976 = 0;
										Global_14443.f_1 = 3;
									}
								}
								else
								{
									unk_0xAB91CBFCF9901428(&(Local_337.f_2963));
									Local_337.f_2976 = 0;
									Global_14443.f_1 = 3;
								}
							}
							break;
						
						case 5:
							if (unk_0x591BB87E287F24DC())
							{
								if (unk_0x3BE1A7ECC62DB032(&(Local_337.f_2963)))
								{
									unk_0x78823C36BAC4791B(&Var4, 35, &(Local_337.f_2963));
								}
							}
							if (Var4.f_0 != -1)
							{
								if (Var4.f_21 == 1)
								{
									if (!func_161(Var4.f_0))
									{
										if (unk_0xBA3AECC335C5C23B(Var4.f_0))
										{
											Local_337.f_2976 = 0;
											unk_0xD05F099FEF4ED10A("CREW_JOIN");
											unk_0xCF6846167A5EFE98(&(Var4.f_1));
											unk_0xEF731ED745A201C5(1, 1);
											Global_14443.f_1 = 3;
										}
										else
										{
											Global_14443.f_1 = 3;
											Local_337.f_2976 = 0;
											Global_14443.f_1 = 3;
										}
										return;
									}
								}
							}
							Local_337.f_2976 = 0;
							break;
						
						case 4:
							Local_337.f_2976 = 0;
							func_151();
							unk_0xAB91CBFCF9901428(&(Local_337.f_2963));
							break;
						
						case 7:
							if (unk_0xAA4F14DA15DB0B51(Global_2434604.f_972, Local_337[Local_337.f_2936]))
							{
								unk_0x507FE690B1271947(&(Global_2434604.f_972), Local_337[Local_337.f_2936]);
							}
							else
							{
								Global_2434604.f_972 = 0;
								unk_0xF6082E2ADA1C795B(&(Global_2434604.f_972), Local_337[Local_337.f_2936]);
							}
							func_151();
							Local_337.f_2976 = 0;
							break;
						}
				}
			}
			else if (Global_14421 == 0)
			{
				if (func_145(2, Global_14412, 0))
				{
					Local_337.f_2982 = 0;
					Local_337.f_2981 = 0;
					unk_0x507FE690B1271947(&Global_2314, 0);
					iLocal_121 = 0;
					func_143();
					Global_14421 = 1;
					unk_0xD1FCC52F87A98873(Global_14424, "GET_CURRENT_SELECTION");
					uLocal_105 = unk_0xCA19844C8EBF135B();
					while (!unk_0x49312763BCF4C85A(uLocal_105))
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					Local_337.f_2946 = unk_0x7E45511185E08C01(uLocal_105);
					if (!func_164(&Local_337, &iVar3))
					{
						switch (iVar3)
						{
							case 0:
								func_213("PLAYER_N_ON", 7500, 1);
								break;
							
							case 1:
								func_213("PLAYERLEFT", 7500, 1);
								break;
							
							case 2:
								Global_2503090.f_59 = 0;
								Local_337.f_2981 = 1;
								Local_337.f_2976 = 1;
								return;
								break;
						}
						Global_14443.f_1 = 3;
						return;
					}
					Global_2503090.f_59 = 0;
					Local_337.f_2976 = 1;
				}
			}
			break;
		
		case 1:
			if (!func_164(&Local_337, &iVar3))
			{
				func_253(1);
				func_241();
				Local_337.f_2978 = 1;
				Local_337.f_2977 = 1;
				return;
			}
			else if (Local_337.f_2977)
			{
				if (!Local_337.f_2978)
				{
					if (!Global_2503090.f_1 || !unk_0x52C019BD1F155A98())
					{
						func_253(1);
						func_241();
						Local_337.f_2978 = 1;
						Local_337.f_2977 = 1;
						return;
					}
					if (unk_0x822F3797A8B64786())
					{
						if (func_145(2, Global_14413, 0))
						{
							func_241();
							Local_337.f_2976 = 0;
							return;
						}
						if (func_212(Global_2503090.f_20))
						{
							if (unk_0xC869A9FE1FE47589(&(Global_2503090.f_20)))
							{
								if (!unk_0xC45C6F8B191E9D29(&(Global_2503090.f_20)))
								{
									func_253(1);
									func_241();
									Local_337.f_2978 = 1;
									Local_337.f_2977 = 1;
									return;
								}
							}
						}
						else
						{
							func_253(1);
							func_241();
							Local_337.f_2978 = 1;
							Local_337.f_2977 = 1;
							return;
						}
					}
					else
					{
						func_241();
						Local_337.f_2976 = 0;
						func_151();
						return;
					}
					if (!Global_2503090.f_37)
					{
						if (Global_2503090.f_33 == -1)
						{
							if (func_237(&(Local_337.f_2979), 40000, 1))
							{
								func_253(1);
								func_241();
								Local_337.f_2978 = 1;
								Local_337.f_2977 = 1;
								return;
							}
						}
						else
						{
							switch (Global_2503090.f_33)
							{
								case 1:
									func_211();
									func_210();
									if (unk_0x591AF4C50B46E014())
									{
										if (iVar1 == iVar2)
										{
										}
									}
									unk_0xDC0343058D861402(iLocal_110);
									return;
									break;
								
								case 2:
									func_253(1);
									func_241();
									Local_337.f_2978 = 1;
									return;
									break;
								
								default:
									func_253(1);
									func_241();
									Local_337.f_2978 = 1;
									return;
									break;
								}
							}
						}
				}
			}
			else if (!func_238(&(Local_337.f_2979)))
			{
				func_254(&(Local_337.f_2979));
				func_209(&(Local_337.f_2979), 1, 0);
			}
			else
			{
				if (func_237(&(Local_337.f_2979), 15000, 1))
				{
					func_241();
					func_75();
					func_258();
					Global_14443.f_1 = 3;
					return;
				}
				if (Global_2503090.f_1 || unk_0xAA4F14DA15DB0B51(Global_2314, 20))
				{
					if (func_145(2, Global_14413, 0))
					{
						func_241();
						Global_14443.f_1 = 3;
						return;
					}
				}
				if (Global_2503090.f_1)
				{
					if (func_208(&Local_337, &(Local_337.f_2983)))
					{
						func_207(&(Local_337.f_2979), 1, 0);
						Local_337.f_2978 = 0;
						Local_337.f_2977 = 1;
						if (Global_69800)
						{
							func_205(105, 1, -1, 1);
						}
					}
					else
					{
						func_253(1);
						func_241();
						Local_337.f_2978 = 1;
						Local_337.f_2977 = 1;
						return;
					}
				}
			}
			break;
		
		case 2:
			if (iLocal_3356 == 1)
			{
				if (func_199(&Local_3337, &(Local_3337.f_1), &(Local_3337.f_2), 0, 0, &cLocal_3340, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0))
				{
					StringCopy(&cLocal_3340, unk_0x5EA1ACAF3A89B42C(), 64);
					Local_3337.f_0 = 0;
					Local_3337.f_2 = 0;
					Local_3337.f_1 = 0;
					iLocal_3356 = 0;
					uLocal_3357 = unk_0x49828C486339D60D(&cLocal_3340);
					StringCopy(&cLocal_3340, unk_0xA3CA71F129482548(&cLocal_3340, 0, uLocal_3357, 63), 64);
					func_207(&(Global_2497344.f_299[Local_337[Local_337.f_2936] /*2*/]), 0, 0);
					if (unk_0x58478145CAF8429C(func_198(&cLocal_3340)))
					{
					}
					else
					{
						Var67 = { func_163(Local_337[Local_337.f_2936]) };
						unk_0x80FC8C8A34EE5938(&cLocal_3340, &Var67);
						func_171("CP_TM_SENT", Local_337[Local_337.f_2936], 0, 0, 0, 1, 1, 0);
						func_87(1909, 1, -1);
					}
					Local_337.f_2999 = 0;
				}
				if (Local_3337.f_0 == 2)
				{
					Local_3337.f_0 = 0;
					Local_3337.f_2 = 0;
					Local_3337.f_1 = 0;
					iLocal_3356 = 0;
					Local_337.f_2999 = 0;
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
	iVar1 = unk_0x220AE8028FACE96A(iParam1);
	if (unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, unk_0x4325D353D7D27B34(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, unk_0x4325D353D7D27B34(iParam1), 64);
		}
		if (unk_0x58478145CAF8429C(&Var2))
		{
		}
		unk_0xD05F099FEF4ED10A(sParam0);
		if ((iVar1 != -1 && unk_0x1B154DE2D4606530()) && iVar1 < 4)
		{
			if (Global_1638223.f_89044[iVar1] != -1)
			{
				unk_0x95CE6D748899618C(func_181(iVar1, iParam1, 0));
			}
			else
			{
				unk_0x95CE6D748899618C(func_216(iParam1, -2, 1, 0));
			}
		}
		else
		{
			unk_0x95CE6D748899618C(func_216(iParam1, -2, 1, 0));
		}
		unk_0xCF6846167A5EFE98(func_179(&Var2));
		if (!bParam4)
		{
			iVar0 = unk_0xEF731ED745A201C5(0, 1);
		}
		else
		{
			Global_2484572 = { func_163(iParam1) };
			if (unk_0x78823C36BAC4791B(&Global_2484502, 35, &Global_2484572))
			{
				iVar18 = 0;
				if (unk_0x35302CD5A5D37EED(&(Global_2484502.f_22), "Leader") && Global_2484502.f_30 == 0)
				{
					iVar18 = 1;
				}
				if (Global_2484502.f_21 > 0)
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
					iVar0 = unk_0xCFCC273DCA662841(iVar19, unk_0x7A879D71A2140CC4(&Global_2484502, 35), &(Global_2484502.f_17), Global_2484502.f_30, iVar18, 0, Global_2484502, &Var2, Global_1314009, Global_1314010, Global_1314011);
				}
				else
				{
					iVar0 = unk_0xA390BEE87F567563(iVar19, unk_0x7A879D71A2140CC4(&Global_2484502, 35), &(Global_2484502.f_17), Global_2484502.f_30, iVar18, 0, Global_2484502, Global_1314009, Global_1314010, Global_1314011);
				}
			}
			else
			{
				iVar0 = unk_0xEF731ED745A201C5(0, 1);
			}
		}
		func_172(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_172(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_177() || !unk_0x1B154DE2D4606530()) || !func_175(unk_0x0FFED3E94261A832(), 0))
	{
		return;
	}
	iVar0 = func_173(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1769933.f_5[iVar0 /*53*/] = iParam0;
		Global_1769933.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1769933.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1769933.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1769933.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1769933.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1769933.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1769933.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1769933.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1769933.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1769933.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1769933.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_173(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1769933 - 1))
	{
		if (iParam0 > Global_1769933.f_5[iVar0 /*53*/].f_1)
		{
			func_174(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1769933++;
	if (Global_1769933 > 5)
	{
		Global_1769933 = 5;
		return Global_1769933;
	}
	return (Global_1769933 - 1);
}

void func_174(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1769933.f_5[iVar0 /*53*/] = { Global_1769933.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_175(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x0FFED3E94261A832())
	{
		bVar0 = func_176(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1592456[iParam0 /*635*/].f_204 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x885F483F34E47503(iParam0))
		{
			bVar0 = unk_0x220AE8028FACE96A(iParam0) == 8;
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
	if (Global_1312832[iVar1] == 1)
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
	return unk_0xA438D14FADC1185B(-1762644250);
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
	if (Global_1638223.f_89044[iParam0] != -1 && Global_1638223.f_89044[iParam0] <= 4)
	{
		if (Global_1638223.f_89044[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1638223.f_89044[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1638223.f_89044[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1638223.f_89044[iParam0] == 4)
		{
			if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 29))
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
			iVar0 = Global_1638223.f_89044[iParam0];
		}
	}
	else
	{
		iVar0 = func_183(iParam1, !bParam2, iParam0, 0);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_21, 13))
	{
		iVar0 = func_182(iParam0);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_24, 29))
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_182(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_1638223.f_112841;
			break;
		
		case 1:
			iVar0 = Global_1638223.f_112842;
			break;
		
		case 2:
			iVar0 = Global_1638223.f_112843;
			break;
		
		case 3:
			iVar0 = Global_1638223.f_112844;
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
	
	if (!unk_0x885F483F34E47503(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x220AE8028FACE96A(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_188(iVar0, iParam2, 0) && !unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 18))
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
			else if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_4, 20))
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
	if (func_185(Global_1638223.f_93532))
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
		if (iParam0 == Global_262145.f_7854[iVar0])
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
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 0);
				
				case 1:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 1);
				
				case 2:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 2);
				
				case 3:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 4);
				
				case 1:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 5);
				
				case 2:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 6);
				
				case 3:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 8);
				
				case 1:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 9);
				
				case 2:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 10);
				
				case 3:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 12);
				
				case 1:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 13);
				
				case 2:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 14);
				
				case 3:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 15);
				
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
	return Global_2416174.f_1947.f_44[iParam0 /*2*/].f_1;
}

int func_191(int iParam0)
{
	if (!iParam0 == func_158())
	{
		if (func_193(iParam0, 1))
		{
			return Global_2416174.f_1947.f_11[func_192(iParam0)];
		}
	}
	return -1;
}

int func_192(int iParam0)
{
	if (iParam0 != func_158())
	{
		return Global_1622795[iParam0 /*431*/].f_11;
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
	return Global_1622795[iParam0 /*431*/].f_11 != func_158();
}

int func_194(int iParam0)
{
	if (iParam0 != func_158())
	{
		if (Global_1622795[iParam0 /*431*/].f_11 != func_158())
		{
			return Global_1622795[iParam0 /*431*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_195()
{
	if (func_197() || func_196())
	{
		return 1;
	}
	return 0;
}

var func_196()
{
	return Global_2445217.f_13;
}

var func_197()
{
	return Global_2445217.f_12;
}

var func_198(char[4] cParam0)
{
	return cParam0;
}

int func_199(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, char* sParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, char* sParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16, bool bParam17, int iParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
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
	
	if (unk_0xEF08C8E0C4679477() || unk_0xF4EE9D6C8E60AE22())
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
				else if (func_204())
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
						if (func_204())
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
						if (unk_0x09952BA662A7629B(joaat("fm_capture_creator")) > 0)
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
						if (unk_0x09952BA662A7629B(joaat("fm_capture_creator")) > 0)
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
				else if (func_204())
				{
					sVar4 = "FMMC_KEY_TIS2FJ";
				}
				else
				{
					sVar4 = "FMMC_KEY_TIP2F";
				}
				if (unk_0xC1A8588DDF7A118E() || unk_0x97FFE0491AC179A2())
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
				if (unk_0x5018862FF5D9F844())
				{
					iVar7 = 6;
				}
				else if (unk_0xBC8CC6C19B70E1C4() == 0)
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
				if (unk_0x58478145CAF8429C(sParam5))
				{
					unk_0x75A2117BDE02A6E6(iVar7, sVar4, sVar5, "", "", "", "", iVar6);
				}
				else
				{
					unk_0x75A2117BDE02A6E6(iVar7, sVar4, sVar5, sParam5, sParam10, "", "", iVar6);
				}
			}
			else
			{
				if (unk_0x5018862FF5D9F844())
				{
					iVar8 = 6;
				}
				else if (unk_0xBC8CC6C19B70E1C4() == 0)
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
					if (unk_0xC1A8588DDF7A118E() || unk_0x97FFE0491AC179A2())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M19";
					}
					if (unk_0xBC8CC6C19B70E1C4() == 10)
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
					unk_0x1C34FBB689C5D473(2);
					if (unk_0x58478145CAF8429C(&(Global_1638223.f_93539)))
					{
						unk_0x75A2117BDE02A6E6(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0x75A2117BDE02A6E6(iVar8, sVar4, sVar5, &(Global_1638223.f_93539), "", "", "", iVar9);
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
					if (unk_0xC1A8588DDF7A118E())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M19";
					}
					iVar9 = 63;
					unk_0x1C34FBB689C5D473(2);
					if (unk_0x58478145CAF8429C(sParam5))
					{
						unk_0x75A2117BDE02A6E6(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0x75A2117BDE02A6E6(iVar8, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam9)
				{
					if (unk_0xBC8CC6C19B70E1C4() == 0)
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
					if (unk_0xC1A8588DDF7A118E() || unk_0x97FFE0491AC179A2())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M36";
					}
					iVar10 = 0;
					while (iVar10 <= 7)
					{
						if (unk_0x47988E04F8E2F0AD(&(Global_1638223.f_93690[iVar10 /*16*/])))
						{
							StringCopy(&(Global_1638223.f_93690[iVar10 /*16*/]), "", 64);
						}
						iVar10++;
					}
					unk_0x49D532612519495C(iVar8, sVar4, sVar5, &(Global_1638223.f_93690[0 /*16*/]), &(Global_1638223.f_93690[1 /*16*/]), &(Global_1638223.f_93690[2 /*16*/]), &(Global_1638223.f_93690[3 /*16*/]), &(Global_1638223.f_93690[4 /*16*/]), &(Global_1638223.f_93690[5 /*16*/]), &(Global_1638223.f_93690[6 /*16*/]), &(Global_1638223.f_93690[7 /*16*/]), iVar9);
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
					if (unk_0xC1A8588DDF7A118E() || unk_0x97FFE0491AC179A2())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_SMS3";
					}
					if (unk_0x58478145CAF8429C(&(Global_1638223.f_37769[iParam16 /*38*/].f_4[0 /*16*/])))
					{
						unk_0x75A2117BDE02A6E6(iVar8, sVar4, sVar5, "", "", "", "", 126);
					}
					else
					{
						iVar11 = 0;
						while (iVar11 <= 1)
						{
							if (unk_0x47988E04F8E2F0AD(&(Global_1638223.f_37769[iParam16 /*38*/].f_4[iVar11 /*16*/])))
							{
								StringCopy(&(Global_1638223.f_37769[iParam16 /*38*/].f_4[iVar11 /*16*/]), "", 64);
							}
							iVar11++;
						}
						unk_0x75A2117BDE02A6E6(iVar8, sVar4, sVar5, &(Global_1638223.f_37769[iParam16 /*38*/].f_4[0 /*16*/]), &(Global_1638223.f_37769[iParam16 /*38*/].f_4[1 /*16*/]), "", "", 126);
					}
				}
				else if (bParam8)
				{
					iVar9 = 61;
					if (bParam11)
					{
						if (func_204())
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
						if (unk_0xC1A8588DDF7A118E() || unk_0x97FFE0491AC179A2())
						{
							sVar5 = sVar4;
							sVar4 = "CELL_EMAIL_DESC";
						}
					}
					else if (func_204())
					{
						if (*uParam1 == 0)
						{
							sVar4 = "FMMC_KEY_TIP8S";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIP8FS";
						}
						if (unk_0xC1A8588DDF7A118E() || unk_0x97FFE0491AC179A2())
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
						if (unk_0xC1A8588DDF7A118E())
						{
							sVar5 = sVar4;
							sVar4 = "FMMC_SMS4";
						}
					}
					if (unk_0x58478145CAF8429C(sParam5))
					{
						unk_0x75A2117BDE02A6E6(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0x75A2117BDE02A6E6(iVar8, sVar4, sVar5, sParam5, "", "", "", iVar9);
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
					if (unk_0xC1A8588DDF7A118E())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_KEY_TIP9N";
					}
					if (unk_0x58478145CAF8429C(sParam5))
					{
						unk_0x75A2117BDE02A6E6(iVar8, sVar4, sVar5, "", "", "", "", 16);
					}
					else
					{
						unk_0x75A2117BDE02A6E6(iVar8, sVar4, sVar5, sParam5, "", "", "", 16);
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
					if (unk_0xC1A8588DDF7A118E())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_KEY_TIP12N";
					}
					if (unk_0x58478145CAF8429C(sParam5))
					{
						unk_0x75A2117BDE02A6E6(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0x75A2117BDE02A6E6(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
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
					if (unk_0x58478145CAF8429C(sParam5))
					{
						unk_0x75A2117BDE02A6E6(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0x75A2117BDE02A6E6(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam17)
				{
					if (unk_0x97FFE0491AC179A2())
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
					if (unk_0xC1A8588DDF7A118E())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_KEY_TIP14N";
					}
					if (unk_0x58478145CAF8429C(sParam5))
					{
						unk_0x75A2117BDE02A6E6(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0x75A2117BDE02A6E6(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (iParam18 > 0)
				{
					if (unk_0xC1A8588DDF7A118E() || unk_0x97FFE0491AC179A2())
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
					if (unk_0x58478145CAF8429C(sParam5))
					{
						unk_0x75A2117BDE02A6E6(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0x75A2117BDE02A6E6(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else
				{
					if (unk_0xBC8CC6C19B70E1C4() == 0)
					{
						iVar9 = 501;
						if (bParam11)
						{
							if (func_204())
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
						if (func_204())
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
						else if (func_204())
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
					if (unk_0xC1A8588DDF7A118E() || unk_0x97FFE0491AC179A2())
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
						if (unk_0x47988E04F8E2F0AD(&(Global_1638223.f_93561[iVar12 /*16*/])))
						{
							StringCopy(&(Global_1638223.f_93561[iVar12 /*16*/]), "", 64);
						}
						iVar12++;
					}
					if (bParam11)
					{
						unk_0x49D532612519495C(iVar8, sVar4, sVar5, sParam5, sParam10, "", "", "", "", "", "", iVar9);
					}
					else
					{
						unk_0x49D532612519495C(iVar8, sVar4, sVar5, &(Global_1638223.f_93561[0 /*16*/]), &(Global_1638223.f_93561[1 /*16*/]), &(Global_1638223.f_93561[2 /*16*/]), &(Global_1638223.f_93561[3 /*16*/]), &(Global_1638223.f_93561[4 /*16*/]), &(Global_1638223.f_93561[5 /*16*/]), &(Global_1638223.f_93561[6 /*16*/]), &(Global_1638223.f_93561[7 /*16*/]), iVar9);
					}
				}
			}
			StringCopy(&Global_1751519, "", 64);
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		
		case 1:
			*uParam0 = unk_0x20CC52AB5EBEF40E();
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
						if (unk_0x58478145CAF8429C(&Global_1751519))
						{
							StringCopy(&Global_1751519, unk_0x5EA1ACAF3A89B42C(), 64);
							if (unk_0x58478145CAF8429C(&Global_1751519))
							{
								*uParam1 = 0;
								return 1;
							}
							iVar1 = unk_0x49828C486339D60D(unk_0x5EA1ACAF3A89B42C());
							iVar3 = 0;
							while (iVar3 <= (iVar1 - 1))
							{
								if (*uParam2 != 0)
								{
									if (!unk_0x58478145CAF8429C(&Global_1751519))
									{
										if (unk_0x35302CD5A5D37EED(" ", unk_0xB016D23B4D241322(&Global_1751519, 0, 1)))
										{
											iVar2 = unk_0x49828C486339D60D(&Global_1751519);
											StringCopy(&Global_1751519, unk_0xB016D23B4D241322(&Global_1751519, 1, iVar2), 64);
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
					if (unk_0x81413AED096B1701(*uParam1))
					{
						if (!unk_0x627512B0AB0C0E0A(*uParam1))
						{
							unk_0xF07571B6B1209821();
							iVar0 = unk_0xC6C47980E99D8FBD(*uParam1);
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
									func_203(1);
									return 0;
									break;
							}
						}
						else if (bParam11)
						{
							if (unk_0x09952BA662A7629B(joaat("appinternet")) == 0)
							{
								unk_0xF07571B6B1209821();
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
							unk_0x076B9665F732FC0B(&Global_1751519, uParam1);
						}
						else
						{
							unk_0xA185379C8D504AD6(&Global_1751519, uParam1);
						}
					}
					else if (unk_0x58478145CAF8429C(unk_0x5EA1ACAF3A89B42C()))
					{
						*uParam1 = -2;
						*uParam2 = 0;
						*uParam0 = 0;
						unk_0xF07571B6B1209821();
						return 0;
					}
					else if (bParam22)
					{
						unk_0x076B9665F732FC0B(unk_0x5EA1ACAF3A89B42C(), uParam1);
					}
					else
					{
						unk_0xA185379C8D504AD6(unk_0x5EA1ACAF3A89B42C(), uParam1);
					}
					if (unk_0x97FFE0491AC179A2())
					{
						if ((!unk_0x822F3797A8B64786() || func_201() == 0) || func_200() == 1)
						{
							*uParam1 = 0;
							*uParam2 = 0;
							*uParam0 = 3;
							return 0;
						}
					}
					if (bParam17)
					{
						unk_0x4A1154920DC947F7("ERROR_CHECKYACHTNAME");
						unk_0x6B60B2318195A182(1);
					}
					else
					{
						unk_0x4A1154920DC947F7("ERROR_CHECKPROFANITY");
						unk_0x6B60B2318195A182(1);
					}
					if (!unk_0x81413AED096B1701(*uParam1))
					{
						if (!unk_0x58478145CAF8429C(&Global_1751519))
						{
							*uParam1 = -1;
						}
						else
						{
							*uParam1 = -2;
						}
						*uParam2 = 0;
						*uParam0 = 0;
						unk_0xF07571B6B1209821();
						return 0;
					}
				
				default:
			}
			break;
	}
	return 0;
}

int func_200()
{
	if (!func_201())
	{
		return 1;
	}
	return 0;
}

int func_201()
{
	if (func_202())
	{
		return 0;
	}
	if (unk_0xD49DD4AB66A964B2() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_202()
{
	return Global_2455203;
}

void func_203(int iParam0)
{
	Global_2455203 = iParam0;
}

int func_204()
{
	if (((unk_0xBC8CC6C19B70E1C4() == 7 || unk_0xBC8CC6C19B70E1C4() == 8) || unk_0xBC8CC6C19B70E1C4() == 9) || unk_0xBC8CC6C19B70E1C4() == 10)
	{
		return 1;
	}
	return 0;
}

void func_205(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_206())
	{
		iVar0 = Global_2526994[iParam0 /*3*/][func_59(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x0D7634B211BCB8B0(iVar0, iParam1, iParam3);
		}
	}
}

int func_206()
{
	return 1;
	return 0;
}

void func_207(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x591AF4C50B46E014() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x11ABC381A58DD5AB();
		}
		else
		{
			*uParam0 = unk_0xFD0C6B49DA615791();
		}
	}
	else
	{
		*uParam0 = unk_0x3732B96D7A1859B4();
	}
	uParam0->f_1 = 1;
}

int func_208(var uParam0, char* sParam1)
{
	if (Global_2503090.f_1)
	{
		if (unk_0x52C019BD1F155A98())
		{
			unk_0xAB4A2698694C2B2B(&(uParam0->f_2963));
			Global_2503090.f_20 = { uParam0->f_2963 };
			StringCopy(&(Global_2503090.f_4), sParam1, 64);
			return 1;
		}
	}
	return 0;
}

void func_209(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x591AF4C50B46E014() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x11ABC381A58DD5AB();
			}
			else
			{
				*uParam0 = unk_0xFD0C6B49DA615791();
			}
		}
		else
		{
			*uParam0 = unk_0x3732B96D7A1859B4();
		}
		uParam0->f_1 = 1;
	}
}

void func_210()
{
	if (Global_14443.f_1 > 3)
	{
		Global_14443.f_1 = 9;
		Global_15758 = 1;
		if (Global_69800)
		{
			if (!unk_0x5018862FF5D9F844())
			{
				func_139(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				unk_0xF6082E2ADA1C795B(&(Global_2497344.f_1695), 15);
			}
		}
	}
}

void func_211()
{
	unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
	unk_0x4CECF13AF144A8F6(4);
	unk_0x4CECF13AF144A8F6(0);
	unk_0x4CECF13AF144A8F6(2);
	unk_0xADBDBA2DF8443753("CELL_CONDFON");
	unk_0xCF6846167A5EFE98(&Global_15760);
	unk_0xF7D95CCE1364B5CE();
	func_72("CELL_300");
	func_72("CELL_219");
	func_72("CELL_219");
	unk_0x8123397DC676E794();
	Global_2503090.f_37 = 1;
	unk_0x507FE690B1271947(&Global_2313, 27);
	func_91();
}

bool func_212(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x6A68E91B1AC64FBD(&uParam0, 13);
}

void func_213(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x63EE614B6594E772(sParam0);
	unk_0x17C5AB14FA142F36(iParam1, 1);
}

void func_214(char* sParam0, int iParam1)
{
	unk_0x2D1CC533F8B39221(sParam0);
	unk_0xED95966D04271FDA(0, 0, 1, iParam1);
}

void func_215(char* sParam0, var uParam1, int iParam2, int iParam3)
{
	unk_0x2D1CC533F8B39221(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x95CE6D748899618C(iParam2);
	}
	unk_0xCF6846167A5EFE98(uParam1);
	unk_0xED95966D04271FDA(0, 0, 1, iParam3);
}

int func_216(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	var uVar1;
	
	if (func_224(iParam0))
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
		iVar0 = unk_0x220AE8028FACE96A(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_1638223.f_89044[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if ((func_224(unk_0x0FFED3E94261A832()) || (func_223() && func_222())) && !unk_0xAA4F14DA15DB0B51(Global_2497344.f_4507, 31))
	{
		uVar1 = func_221();
		if (unk_0x2137828D03306CAF(uVar1))
		{
			if (unk_0xDB61DD81432BD145(uVar1))
			{
				if (unk_0xB0BB7458627D389F(uVar1) != -1)
				{
					if (func_160(unk_0xB0BB7458627D389F(uVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x1B154DE2D4606530()) && iParam1 < 4)
						{
							if (Global_1638223.f_89044[iParam1] != -1)
							{
								return func_181(iParam1, iParam0, 0);
							}
							else
							{
								return func_218(iParam0, unk_0xB0BB7458627D389F(uVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_218(iParam0, unk_0xB0BB7458627D389F(uVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x1B154DE2D4606530()) && iParam1 < 4)
			{
				if (Global_1638223.f_89044[iParam1] != -1)
				{
					return func_181(iParam1, iParam0, 0);
				}
				else
				{
					return func_217(0, -1, 0);
				}
			}
			else
			{
				return func_217(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x1B154DE2D4606530()) && iParam1 < 4)
	{
		if (Global_1638223.f_89044[iParam1] != -1)
		{
			return func_181(iParam1, iParam0, 0);
		}
		else
		{
			return func_218(iParam0, unk_0x0FFED3E94261A832(), iParam1, bParam2, bParam3);
		}
	}
	return func_218(iParam0, unk_0x0FFED3E94261A832(), iParam1, bParam2, bParam3);
}

int func_217(bool bParam0, int iParam1, bool bParam2)
{
	return func_183(unk_0x0FFED3E94261A832(), bParam0, iParam1, bParam2);
}

int func_218(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x220AE8028FACE96A(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1592456[iVar2 /*635*/] == 148)
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
			if ((func_220(iParam1, iParam0, iVar0, 0) && !unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 18)) || ((func_188(unk_0x220AE8028FACE96A(iParam1), unk_0x220AE8028FACE96A(iParam0), 0) && unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 23)) && !unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 18)))
			{
				return func_187(1);
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 26))
			{
				return func_219(1);
			}
			else
			{
				return func_183(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574295 || Global_1574286) || Global_1592456[iParam0 /*635*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574295 == 1 && Global_1574305 == 0))
			{
				return func_187(1);
			}
			else
			{
				return func_183(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574290 && Global_1573830.f_14 == iParam0)
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

int func_219(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_220(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x220AE8028FACE96A(iParam0) == -1 && unk_0x220AE8028FACE96A(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x220AE8028FACE96A(iParam0) == unk_0x220AE8028FACE96A(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x220AE8028FACE96A(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x220AE8028FACE96A(iParam0) == iParam2;
	}
	return unk_0x220AE8028FACE96A(iParam0) == iParam2;
}

var func_221()
{
	return Global_2359301.f_2;
}

bool func_222()
{
	return unk_0xAA4F14DA15DB0B51(Global_2359301, 4);
}

bool func_223()
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_39.f_18, 14);
}

int func_224(int iParam0)
{
	if (func_175(iParam0, 0))
	{
		return 1;
	}
	if (func_225())
	{
		if (iParam0 == unk_0x0FFED3E94261A832())
		{
			return 1;
		}
	}
	if (unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_204, 2))
	{
		return 1;
	}
	return 0;
}

bool func_225()
{
	return unk_0xAA4F14DA15DB0B51(Global_2359301, 3);
}

int func_226(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0x6235C49EA2DBA22D())
	{
		return 0;
	}
	if (func_236())
	{
		return 0;
	}
	if (!unk_0x0B21CC5276C2CE1B())
	{
		return 0;
	}
	if (func_51())
	{
		return 0;
	}
	if (func_235())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_232(unk_0x0FFED3E94261A832(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_231(unk_0x0FFED3E94261A832()))
		{
			return 0;
		}
	}
	if (func_230())
	{
		return 0;
	}
	if (unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		return 0;
	}
	if (unk_0x9E5289F5D782437C())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0x7B0D0EA42CF4A6CC(unk_0x0FFED3E94261A832()))
		{
			return 0;
		}
	}
	if (Global_1574107)
	{
		return 0;
	}
	if (func_229())
	{
		return 0;
	}
	if (func_228())
	{
		return 0;
	}
	if (func_227())
	{
		return 0;
	}
	if (Global_68165)
	{
		return 0;
	}
	if (Global_2506007)
	{
		return 0;
	}
	return 1;
}

bool func_227()
{
	return Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_189 != 0;
}

bool func_228()
{
	return Global_2445217.f_571;
}

bool func_229()
{
	return Global_2445217.f_723;
}

bool func_230()
{
	return Global_2434604.f_2791.f_578;
}

int func_231(int iParam0)
{
	if (Global_2422215[iParam0 /*387*/].f_217 == 0)
	{
		return 0;
	}
	return 1;
}

int func_232(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_233(iParam0))
		{
			return 1;
		}
	}
	if (Global_1592456[iParam0 /*635*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_233(int iParam0)
{
	return func_234(iParam0);
}

bool func_234(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_13.f_1, 0);
}

bool func_235()
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_39.f_18, 0);
}

int func_236()
{
	if (Global_15745 != 0 || unk_0x4FF1AD2B1A443280())
	{
		return 1;
	}
	return 0;
}

int func_237(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_209(uParam0, bParam2, 0);
	if (unk_0x591AF4C50B46E014() && !bParam2)
	{
		if (unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x3732B96D7A1859B4(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_238(var uParam0)
{
	return uParam0->f_1;
}

void func_239()
{
	Global_2503090.f_1 = 0;
	Global_2503090 = 0;
	Global_2503090.f_2 = 0;
	Global_2503090.f_33 = -1;
	Global_2503090.f_34 = -1;
	StringCopy(&(Global_2503090.f_4), "", 64);
	StringCopy(&(Global_2503090.f_39[0 /*16*/]), "", 64);
	Global_2503090.f_38 = 0;
	Global_2503090.f_56 = 0;
	Global_2503090.f_57 = 0;
	Global_2503090.f_58 = -2;
	Global_2503090.f_3 = 0;
	func_240(&(Global_2503090.f_20));
}

void func_240(var uParam0)
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

void func_241()
{
	Global_2503090.f_2 = 1;
	Global_2503090.f_38 = 1;
	if (unk_0x822F3797A8B64786())
	{
		if (unk_0x52C019BD1F155A98())
		{
			while (unk_0x7089662F13ACB397())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0x1A5325EFA1C379C5();
			Global_2503090 = 0;
			Global_2503090.f_2 = 0;
		}
		else if (func_212(Global_2503090.f_20))
		{
			if (unk_0xC869A9FE1FE47589(&(Global_2503090.f_20)))
			{
				if (!unk_0xC45C6F8B191E9D29(&(Global_2503090.f_20)))
				{
					func_239();
				}
			}
		}
		else
		{
			func_239();
		}
	}
	else
	{
		func_239();
	}
	if (Global_2503090.f_37)
	{
		func_30(0);
	}
	Global_2503090.f_37 = 0;
	Global_2503090.f_3 = 0;
}

void func_242(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_251())
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
				func_243(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_243(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_243(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_251())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x34C4AEAA38B25021(func_60()) || unk_0x3227E797058C3C9A())
		{
			Global_2595874 = 1;
			return 0;
		}
		if (Global_2455861)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2595875 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2595364[iVar1 /*76*/].f_2 == 0)
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
	if (bVar0 || unk_0xA4924D1E6921DA1D(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0xB7E932E3159B0B10(iVar3))
		{
			*uParam0 = func_250(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2595364[*uParam0 /*76*/].f_69 = 1;
				}
			}
			Global_2595864 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2595873 = 1;
			Global_2595876 = iParam4;
			Global_2595878 = iParam3;
			Global_2595879 = 1;
			Global_2595877 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2595876 = iParam4;
			Global_2595878 = iParam3;
			Global_2595879 = 1;
			Global_2595877 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_249(1, iParam4);
			Global_2595873 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_244(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_244(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xF6082E2ADA1C795B(&(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_131.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_245(iParam0);
	}
}

void func_245(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_251())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_248(iParam0))
		{
			if (!bVar0)
			{
				unk_0x9C51DBB1481E20AE();
			}
		}
		else if (!bVar0)
		{
			unk_0x2605CD7011F296C8(Global_2595364[iParam0 /*76*/]);
		}
		func_246(&(Global_2595364[iParam0 /*76*/]));
	}
}

void func_246(var uParam0)
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
	func_247(&(uParam0->f_8.f_3));
	func_247(&(uParam0->f_8.f_16));
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

void func_247(var uParam0)
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

int func_248(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2595364[iParam0 /*76*/].f_5 == 1;
	}
	return 0;
}

void func_249(int iParam0, var uParam1)
{
	Global_2457026 = uParam1;
	Global_2457025 = iParam0;
}

int func_250(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2595364[iVar0 /*76*/].f_2 == 0)
		{
			if (!func_251())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2595364[iVar0 /*76*/].f_2 = 1;
			Global_2595364[iVar0 /*76*/].f_1 = uParam5;
			Global_2595364[iVar0 /*76*/].f_3 = uParam1;
			Global_2595364[iVar0 /*76*/].f_4 = uParam2;
			Global_2595364[iVar0 /*76*/].f_7 = uParam3;
			Global_2595364[iVar0 /*76*/].f_5 = 0;
			Global_2595364[iVar0 /*76*/] = iParam0;
			Global_2595364[iVar0 /*76*/].f_6 = iParam4;
			Global_2595364[iVar0 /*76*/].f_72 = uParam8;
			Global_2595364[iVar0 /*76*/].f_71 = uParam7;
			Global_2595364[iVar0 /*76*/].f_75 = 0;
			Global_2595864 = 0;
			if (bParam6)
			{
				Global_2595364[iVar0 /*76*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_251()
{
	if (unk_0x5018862FF5D9F844())
	{
		return 1;
	}
	return 0;
}

int func_252(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		iVar0 = unk_0x82157B4962CD9980();
	}
	iVar0 = (iVar0 + unk_0x0A157779750902D2(-1));
	return iVar0;
}

void func_253(bool bParam0)
{
	if (bParam0)
	{
		unk_0xF6082E2ADA1C795B(&Global_2314, 20);
	}
	else
	{
		unk_0x507FE690B1271947(&Global_2314, 20);
	}
}

void func_254(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_255(char* sParam0)
{
	Global_1628 = 132;
	StringCopy(&Global_15760, sParam0, 64);
	if (Global_14443.f_1 > 3)
	{
		Global_14443.f_1 = 10;
		func_97();
	}
	unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
	unk_0x4CECF13AF144A8F6(4);
	unk_0x4CECF13AF144A8F6(0);
	unk_0x4CECF13AF144A8F6(2);
	unk_0xADBDBA2DF8443753("CELL_CONDFON");
	unk_0xCF6846167A5EFE98(&Global_15760);
	unk_0xF7D95CCE1364B5CE();
	func_72("CELL_300");
	func_72("CELL_211");
	func_72("CELL_211");
	unk_0x8123397DC676E794();
	unk_0xF6082E2ADA1C795B(&Global_2313, 20);
	func_91();
	unk_0x507FE690B1271947(&Global_2313, 20);
}

void func_256()
{
	unk_0xC8796DFAECF76639();
	Global_2503090 = 1;
	Global_2503090.f_2 = 0;
	Global_2503090.f_33 = -1;
	Global_2503090.f_34 = -1;
	Global_2503090.f_38 = 0;
}

void func_257()
{
	unk_0xDC0343058D861402(iLocal_110);
	unk_0x15BA16B33BC155D8(iLocal_110);
	Local_337.f_2978 = 0;
	unk_0x507FE690B1271947(&Global_2313, 9);
	unk_0x507FE690B1271947(&Global_2313, 29);
	unk_0x507FE690B1271947(&Global_2314, 20);
	unk_0x507FE690B1271947(&Global_2314, 0);
	unk_0x507FE690B1271947(&Global_2314, 18);
	Global_103236.f_27831[12 /*29*/].f_1 = uLocal_309;
	Global_103236.f_27831[2 /*29*/].f_1 = uLocal_310;
	Global_103236.f_27831[0 /*29*/].f_1 = uLocal_311;
	if (Local_337.f_2999 == 1)
	{
		if (unk_0x822F3797A8B64786())
		{
			if (Global_2503090.f_33 == -1)
			{
				func_241();
			}
		}
	}
	unk_0xA232817B0B36F2E5();
}

void func_258()
{
	if (!Global_69800)
	{
		if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
		{
			if (unk_0xAA4F14DA15DB0B51(Global_2313, 11))
			{
				if (!Global_14386)
				{
					unk_0xA6EF4C7DCA806A90(unk_0x2A5EB8B0FE590B91(), 0, 1);
				}
				if (Global_69800)
				{
					unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 244, 1);
					unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 243, 1);
					unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 242, 1);
				}
				unk_0x507FE690B1271947(&Global_2313, 11);
			}
		}
	}
}

void func_259()
{
	int iVar0[151];
	int iVar152;
	int iVar153;
	int iVar154;
	
	Global_103236.f_27831[147 /*29*/].f_1 = 1320;
	Global_103236.f_27831[74 /*29*/].f_1 = 180;
	Global_103236.f_27831[75 /*29*/].f_1 = 190;
	func_142(Global_14424, "SET_DATA_SLOT_EMPTY", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4EDE34FBADD967A6(0);
	iLocal_100 = 0;
	iLocal_139 = 0;
	iLocal_122 = 0;
	func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), 0f, -1f, -1f, "CELL_232", "CELL_233", "CELL_393", 0, 0);
	iVar152 = 0;
	while (iVar152 < 150)
	{
		iVar153 = 0;
		iVar154 = 150;
		Global_103236.f_27831[iVar154 /*29*/].f_1 = 5000;
		func_16();
		while (iVar153 < 150)
		{
			if (unk_0xAA4F14DA15DB0B51(Global_2314, 0))
			{
				if ((iVar153 == 2 || iVar153 == 0) || iVar153 == 12)
				{
					Global_103236.f_27831[12 /*29*/].f_1 = 3;
					Global_103236.f_27831[2 /*29*/].f_1 = 1;
					Global_103236.f_27831[0 /*29*/].f_1 = 2;
					bLocal_97 = true;
				}
				else
				{
					bLocal_97 = false;
				}
			}
			else if (Global_103236.f_27831[iVar153 /*29*/].f_12[Global_14443] == 1)
			{
				bLocal_97 = true;
			}
			else
			{
				bLocal_97 = false;
			}
			if (bLocal_97)
			{
				if (iVar153 != Global_14443)
				{
					if (iVar0[iVar153] == 0)
					{
						if (Global_103236.f_27831[iVar153 /*29*/].f_19[Global_14443] == 1 || func_79(iVar153, Global_14443))
						{
							fLocal_98 = (unk_0xBBDA792448DB5A89(Global_103236.f_27831[iVar153 /*29*/].f_1) / 100f);
						}
						else
						{
							fLocal_98 = unk_0xBBDA792448DB5A89(Global_103236.f_27831[iVar153 /*29*/].f_1);
						}
						if (Global_103236.f_27831[iVar154 /*29*/].f_19[Global_14443] == 1 || func_79(iVar154, Global_14443))
						{
							fLocal_99 = (unk_0xBBDA792448DB5A89(Global_103236.f_27831[iVar154 /*29*/].f_1) / 100f);
						}
						else
						{
							fLocal_99 = unk_0xBBDA792448DB5A89(Global_103236.f_27831[iVar154 /*29*/].f_1);
						}
						if (fLocal_98 < fLocal_99)
						{
							iVar154 = iVar153;
							if (unk_0xAA4F14DA15DB0B51(Global_2314, 0))
							{
								if (iVar154 == 2)
								{
									func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar152), 0f, -1f, -1f, "CELL_7001", &(Global_103236.f_27831[iVar154 /*29*/].f_3), &(Global_103236.f_27831[iVar154 /*29*/].f_7), 0, 0);
								}
								if (iVar154 == 0)
								{
									func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar152), 0f, -1f, -1f, "CELL_7002", &(Global_103236.f_27831[iVar154 /*29*/].f_3), &(Global_103236.f_27831[iVar154 /*29*/].f_7), 0, 0);
								}
								if (iVar154 == 12)
								{
									func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar152), 0f, -1f, -1f, "CELL_7003", &(Global_103236.f_27831[iVar154 /*29*/].f_3), "CELL_E_311", 0, 0);
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
		if (!unk_0xAA4F14DA15DB0B51(Global_2314, 0))
		{
			if (Global_103236.f_27831[iVar154 /*29*/].f_12[Global_14443] == 1)
			{
				if (iVar153 != Global_14443)
				{
					if (Global_103236.f_27831[iVar154 /*29*/].f_24[Global_14443] == 0)
					{
						if (Global_103236.f_27831[iVar154 /*29*/].f_19[Global_14443] == 1 || func_79(iVar154, Global_14443))
						{
							func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar152), 1f, -1f, -1f, &(Global_117[iVar154 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
						else
						{
							func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar152), 0f, -1f, -1f, &(Global_117[iVar154 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
					}
					else if (Global_103236.f_27831[iVar154 /*29*/].f_19[Global_14443] == 1 || func_79(iVar154, Global_14443))
					{
						func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar152), 1f, -1f, -1f, &(Global_103236.f_27831[iVar154 /*29*/].f_3), &(Global_103236.f_27831[iVar154 /*29*/].f_3), &(Global_103236.f_27831[iVar154 /*29*/].f_7), 0, 0);
					}
					else
					{
						func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar152), 0f, -1f, -1f, &(Global_103236.f_27831[iVar154 /*29*/].f_3), &(Global_103236.f_27831[iVar154 /*29*/].f_3), &(Global_103236.f_27831[iVar154 /*29*/].f_7), 0, 0);
					}
				}
			}
		}
		if (Global_103236.f_27831[iVar152 /*29*/].f_12[Global_14443] == 1)
		{
			if (iVar152 != Global_14443)
			{
				iLocal_100++;
			}
		}
		iVar152++;
	}
	if (!unk_0xAA4F14DA15DB0B51(Global_2314, 0))
	{
		if (unk_0x822F3797A8B64786())
		{
			if (Global_14386 == 0)
			{
				func_261();
			}
		}
	}
	func_260();
}

void func_260()
{
	if (!Global_14443.f_1 == 10 && !Global_14443.f_1 == 9)
	{
		if (unk_0xAA4F14DA15DB0B51(Global_2313, 9))
		{
			unk_0x4EDE34FBADD967A6(750);
		}
		if (Global_14443.f_1 > 6)
		{
			func_142(Global_14424, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
			if (unk_0xAA4F14DA15DB0B51(Global_2314, 0))
			{
				func_140(Global_14424, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
			}
			else
			{
				func_140(Global_14424, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
			}
			Global_2316 = 99;
			if (unk_0xAA4F14DA15DB0B51(Global_2313, 9))
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
				unk_0x507FE690B1271947(&Global_2313, 17);
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_2314, 0))
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
				if (iLocal_100 > 0)
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
					unk_0xF6082E2ADA1C795B(&Global_2313, 17);
				}
				else
				{
					func_139(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0xF6082E2ADA1C795B(&Global_2313, 17);
				}
				func_139(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				if (iLocal_100 > 0)
				{
					func_139(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				else
				{
					func_139(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_139(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xF6082E2ADA1C795B(&Global_2313, 17);
				func_139(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
	Global_103236.f_27831[12 /*29*/].f_1 = uLocal_309;
	Global_103236.f_27831[2 /*29*/].f_1 = uLocal_310;
	Global_103236.f_27831[0 /*29*/].f_1 = uLocal_311;
}

void func_261()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar16;
	int iVar17;
	
	Global_103236.f_27831[147 /*29*/].f_1 = 1320;
	Global_103236.f_27831[74 /*29*/].f_1 = 180;
	Global_103236.f_27831[75 /*29*/].f_1 = 190;
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iLocal_101 = iLocal_100;
	iLocal_102 = iLocal_101;
	func_268(&Local_337);
	iVar16 = 0;
	if (Global_69800)
	{
		if (func_264() == 0)
		{
			iVar16 = 1;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar0 = unk_0x7C214DA899F05536(iVar2);
		if (func_160(iVar0, 0, 1))
		{
			if (iVar16 == 0)
			{
				if (!iVar0 == unk_0x0FFED3E94261A832())
				{
					Local_337[iVar1] = iVar0;
					func_263(unk_0x4325D353D7D27B34(iVar0));
					iVar1++;
				}
			}
		}
		iVar2++;
	}
	Local_337.f_33 = iVar1;
	iVar2 = 0;
	iVar1 = 0;
	if (func_162(unk_0x0FFED3E94261A832()))
	{
		iVar17 = unk_0x8D99D63E8E34B52B();
		if (iVar17 > 100)
		{
			iVar17 = 100;
		}
		iVar2 = 0;
		while (iVar2 <= (iVar17 - 1))
		{
			if (unk_0xF9D7DE46EBB3D608(unk_0xA89BED6F644214F9(iVar2)))
			{
				if (unk_0x8E16D9FA41BEEDD8(unk_0xA89BED6F644214F9(iVar2)))
				{
					Var3 = { func_262(iVar2) };
					if (!unk_0xB8CB95DC79AC0689(&Var3))
					{
						if (iVar16 == 0)
						{
							if (iVar1 < 100)
							{
								Local_337.f_34[iVar1 /*29*/] = { Var3 };
								if (unk_0x97FFE0491AC179A2())
								{
									StringCopy(&(Local_337.f_34[iVar1 /*29*/].f_13), unk_0x09827DCAF49A20C6(iVar2), 64);
								}
								else
								{
									StringCopy(&(Local_337.f_34[iVar1 /*29*/].f_13), unk_0xA89BED6F644214F9(iVar2), 64);
								}
								func_263(&(Local_337.f_34[iVar1 /*29*/].f_13));
								iVar1++;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	Local_337.f_2935 = (Local_337.f_33 + iVar1);
}

struct<13> func_262(int iParam0)
{
	struct<13> Var0;
	
	unk_0x8FECB9A3B90D6DA8(iParam0, &Var0, 13);
	return Var0;
}

void func_263(var uParam0)
{
	unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
	unk_0xD3A4A11E4FDC9D63(unk_0xBBDA792448DB5A89(2));
	unk_0xD3A4A11E4FDC9D63(unk_0xBBDA792448DB5A89(iLocal_101));
	unk_0xD3A4A11E4FDC9D63(0f);
	unk_0xADBDBA2DF8443753("STRING");
	unk_0xCF6846167A5EFE98(uParam0);
	unk_0xF7D95CCE1364B5CE();
	func_72("CELL_MP_999");
	func_72("CELL_MP_999");
	unk_0x8123397DC676E794();
	iLocal_101++;
	iLocal_100++;
}

int func_264()
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_267())
	{
		return 1;
	}
	if (func_266())
	{
		return 1;
	}
	return func_265(120, -1);
}

int func_265(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2526994[iParam0 /*3*/][func_59(iParam1)];
	if (unk_0x17DA8BAE529C4AC7(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_266()
{
	return Global_1312840;
}

bool func_267()
{
	return Global_1312842;
}

void func_268(var uParam0)
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
	func_254(&(uParam0->f_2979));
	uParam0->f_2999 = 0;
	StringCopy(&(uParam0->f_2983), "", 64);
}

void func_269()
{
	int iVar0[151];
	int iVar152;
	int iVar153;
	int iVar154;
	
	Global_103236.f_27831[147 /*29*/].f_1 = 1320;
	Global_103236.f_27831[74 /*29*/].f_1 = 180;
	Global_103236.f_27831[75 /*29*/].f_1 = 190;
	func_142(Global_14424, "SET_DATA_SLOT_EMPTY", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4EDE34FBADD967A6(0);
	func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), 0f, -1f, -1f, "CELL_232", "CELL_233", "CELL_393", 0, 0);
	iLocal_100 = 0;
	if (!unk_0xAA4F14DA15DB0B51(Global_2314, 0))
	{
		if (unk_0x822F3797A8B64786())
		{
			if (Global_14386 == 0)
			{
				func_270();
			}
		}
	}
	iLocal_103 = iLocal_100;
	iLocal_139 = 0;
	iLocal_122 = 0;
	iVar152 = iLocal_100;
	while (iVar152 < 150)
	{
		iVar153 = 0;
		iVar154 = 150;
		Global_103236.f_27831[iVar154 /*29*/].f_1 = 5000;
		func_16();
		while (iVar153 < 150)
		{
			if (unk_0xAA4F14DA15DB0B51(Global_2314, 0))
			{
				if ((iVar153 == 2 || iVar153 == 0) || iVar153 == 12)
				{
					Global_103236.f_27831[12 /*29*/].f_1 = 3;
					Global_103236.f_27831[2 /*29*/].f_1 = 1;
					Global_103236.f_27831[0 /*29*/].f_1 = 2;
					bLocal_97 = true;
				}
				else
				{
					bLocal_97 = false;
				}
			}
			else if (Global_103236.f_27831[iVar153 /*29*/].f_12[Global_14443] == 1)
			{
				bLocal_97 = true;
			}
			else
			{
				bLocal_97 = false;
			}
			if (bLocal_97)
			{
				if (iVar153 != Global_14443)
				{
					if (iVar0[iVar153] == 0)
					{
						if (Global_103236.f_27831[iVar153 /*29*/].f_19[Global_14443] == 1 || func_79(iVar153, Global_14443))
						{
							fLocal_98 = (unk_0xBBDA792448DB5A89(Global_103236.f_27831[iVar153 /*29*/].f_1) / 100f);
						}
						else
						{
							fLocal_98 = unk_0xBBDA792448DB5A89(Global_103236.f_27831[iVar153 /*29*/].f_1);
						}
						if (Global_103236.f_27831[iVar154 /*29*/].f_19[Global_14443] == 1 || func_79(iVar154, Global_14443))
						{
							fLocal_99 = (unk_0xBBDA792448DB5A89(Global_103236.f_27831[iVar154 /*29*/].f_1) / 100f);
						}
						else
						{
							fLocal_99 = unk_0xBBDA792448DB5A89(Global_103236.f_27831[iVar154 /*29*/].f_1);
						}
						if (fLocal_98 < fLocal_99)
						{
							iVar154 = iVar153;
							if (unk_0xAA4F14DA15DB0B51(Global_2314, 0))
							{
								if (iVar154 == 2)
								{
									func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar152), 0f, -1f, -1f, "CELL_7001", &(Global_103236.f_27831[iVar154 /*29*/].f_3), &(Global_103236.f_27831[iVar154 /*29*/].f_7), 0, 0);
								}
								if (iVar154 == 0)
								{
									func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar152), 0f, -1f, -1f, "CELL_7002", &(Global_103236.f_27831[iVar154 /*29*/].f_3), &(Global_103236.f_27831[iVar154 /*29*/].f_7), 0, 0);
								}
								if (iVar154 == 12)
								{
									func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar152), 0f, -1f, -1f, "CELL_7003", &(Global_103236.f_27831[iVar154 /*29*/].f_3), "CELL_E_311", 0, 0);
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
		if (!unk_0xAA4F14DA15DB0B51(Global_2314, 0))
		{
			if (Global_103236.f_27831[iVar154 /*29*/].f_12[Global_14443] == 1)
			{
				if (iVar153 != Global_14443)
				{
					if (Global_103236.f_27831[iVar154 /*29*/].f_24[Global_14443] == 0)
					{
						if (Global_103236.f_27831[iVar154 /*29*/].f_19[Global_14443] == 1 || func_79(iVar154, Global_14443))
						{
							func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar152), 1f, -1f, -1f, &(Global_117[iVar154 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
						else
						{
							func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar152), 0f, -1f, -1f, &(Global_117[iVar154 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
					}
					else if (Global_103236.f_27831[iVar154 /*29*/].f_19[Global_14443] == 1 || func_79(iVar154, Global_14443))
					{
						func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar152), 1f, -1f, -1f, &(Global_103236.f_27831[iVar154 /*29*/].f_3), &(Global_103236.f_27831[iVar154 /*29*/].f_3), &(Global_103236.f_27831[iVar154 /*29*/].f_7), 0, 0);
					}
					else
					{
						func_139(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar152), 0f, -1f, -1f, &(Global_103236.f_27831[iVar154 /*29*/].f_3), &(Global_103236.f_27831[iVar154 /*29*/].f_3), &(Global_103236.f_27831[iVar154 /*29*/].f_7), 0, 0);
					}
				}
			}
		}
		if (Global_103236.f_27831[iVar152 /*29*/].f_12[Global_14443] == 1)
		{
			if (iVar152 != Global_14443)
			{
				iLocal_100++;
			}
		}
		iVar152++;
	}
	func_260();
}

void func_270()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar16;
	int iVar17;
	
	Global_103236.f_27831[147 /*29*/].f_1 = 1320;
	Global_103236.f_27831[74 /*29*/].f_1 = 180;
	Global_103236.f_27831[75 /*29*/].f_1 = 190;
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iLocal_101 = iLocal_100;
	iLocal_102 = iLocal_101;
	func_268(&Local_337);
	iVar16 = 0;
	if (Global_69800)
	{
		if (func_264() == 0)
		{
			iVar16 = 1;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar0 = unk_0x7C214DA899F05536(iVar2);
		if (func_160(iVar0, 0, 1))
		{
			if (iVar16 == 0)
			{
				if (!iVar0 == unk_0x0FFED3E94261A832())
				{
					Local_337[iVar1] = iVar0;
					func_271(unk_0x4325D353D7D27B34(iVar0));
					iVar1++;
				}
			}
		}
		iVar2++;
	}
	Local_337.f_33 = iVar1;
	iVar1 = 0;
	iVar2 = 0;
	if (func_162(unk_0x0FFED3E94261A832()))
	{
		iVar17 = unk_0x8D99D63E8E34B52B();
		if (iVar17 > 100)
		{
			iVar17 = 100;
		}
		iVar2 = 0;
		while (iVar2 <= (iVar17 - 1))
		{
			if (unk_0xF9D7DE46EBB3D608(unk_0xA89BED6F644214F9(iVar2)))
			{
				if (unk_0x8E16D9FA41BEEDD8(unk_0xA89BED6F644214F9(iVar2)))
				{
					Var3 = { func_262(iVar2) };
					if (!unk_0xB8CB95DC79AC0689(&Var3))
					{
						if (iVar16 == 0)
						{
							if (iVar1 < 100)
							{
								Local_337.f_34[iVar1 /*29*/] = { Var3 };
								if (unk_0x97FFE0491AC179A2())
								{
									StringCopy(&(Local_337.f_34[iVar1 /*29*/].f_13), unk_0x09827DCAF49A20C6(iVar2), 64);
								}
								else
								{
									StringCopy(&(Local_337.f_34[iVar1 /*29*/].f_13), unk_0xA89BED6F644214F9(iVar2), 64);
								}
								func_271(&(Local_337.f_34[iVar1 /*29*/].f_13));
								iVar1++;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	Local_337.f_2935 = (Local_337.f_33 + iVar1);
}

void func_271(var uParam0)
{
	unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
	unk_0xD3A4A11E4FDC9D63(unk_0xBBDA792448DB5A89(2));
	unk_0xD3A4A11E4FDC9D63(unk_0xBBDA792448DB5A89(iLocal_101));
	unk_0xD3A4A11E4FDC9D63(0f);
	unk_0xADBDBA2DF8443753("STRING");
	unk_0xCF6846167A5EFE98(uParam0);
	unk_0xF7D95CCE1364B5CE();
	func_72("CELL_MP_999");
	func_72("CELL_MP_999");
	unk_0x8123397DC676E794();
	iLocal_101++;
	iLocal_100++;
}

