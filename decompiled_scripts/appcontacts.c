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
	var uLocal_57 = 8;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 2;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 8;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 8;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	float fLocal_87 = 0f;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	int iLocal_90 = 0;
	bool bLocal_91 = 0;
	float fLocal_92 = 0f;
	float fLocal_93 = 0f;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	var uLocal_99 = 0;
	int iLocal_100 = 0;
	var uLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	var uLocal_107[1] = { 0 };
	char cLocal_109[16] = "";
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	bool bLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	bool bLocal_120 = 0;
	int iLocal_121 = 0;
	float fLocal_122 = 0f;
	float fLocal_123 = 0f;
	float fLocal_124 = 0f;
	float fLocal_125 = 0f;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	char cLocal_134[16] = "";
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 16;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
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
	int iLocal_306 = 0;
	char cLocal_307[16] = "";
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	struct<3> Local_311 = { 0, 0, 0 } ;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317[7] = { 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_325 = 0;
	bool bLocal_326 = 0;
	bool bLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	struct<3000> Local_331 = { 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_3331 = { 0, 0, 0 } ;
	char cLocal_3334[64] = "";
	var uLocal_3342 = 0;
	var uLocal_3343 = 0;
	var uLocal_3344 = 0;
	var uLocal_3345 = 0;
	var uLocal_3346 = 0;
	var uLocal_3347 = 0;
	var uLocal_3348 = 0;
	var uLocal_3349 = 0;
	int iLocal_3350 = 0;
	var uLocal_3351 = 0;
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
	fLocal_87 = ((0.05f + 0.275f) - 0.01f);
	iLocal_96 = 9999;
	iLocal_97 = 9999;
	fLocal_122 = 0.82f;
	fLocal_123 = 0.42f;
	fLocal_124 = 0f;
	fLocal_125 = 0f;
	unk_0x6516E26C513581FA();
	unk_0xE27C8E42A97895CF(&Global_2283, 17);
	unk_0x99BCB15F954AF579(&Global_2284, 18);
	unk_0x99BCB15F954AF579(&Global_2284, 20);
	uLocal_303 = Global_101186.f_32651[12 /*29*/].f_1;
	uLocal_304 = Global_101186.f_32651[2 /*29*/].f_1;
	uLocal_305 = Global_101186.f_32651[0 /*29*/].f_1;
	iLocal_104 = unk_0xD619EBCC6AD6E414();
	if (Global_69521)
	{
		func_265();
	}
	else
	{
		func_255();
	}
	if (!Global_14413.f_1 == 10)
	{
		if (Global_14413.f_1 > 3)
		{
			if (Global_14413.f_1 != 9)
			{
				Global_14413.f_1 = 7;
			}
		}
	}
	iLocal_131 = unk_0x1ADBAAC322D61F73();
	Global_101186.f_32651[74 /*29*/].f_1 = 180;
	Global_101186.f_32651[75 /*29*/].f_1 = 190;
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x7DA173D4FD42F36B(Global_2284, 18))
		{
			func_254();
			if (Global_14413.f_1 > 3)
			{
				Global_14413.f_1 = 8;
			}
			unk_0x99BCB15F954AF579(&Global_2284, 18);
			func_253();
		}
		if ((iLocal_116 == 1 && Global_14413.f_1 == 10) && Local_331.f_2999 == 1)
		{
			func_170();
		}
		if (Global_14413.f_1 != 9)
		{
			switch (Global_14413.f_1)
			{
				case 7:
					if (unk_0x7DA173D4FD42F36B(Global_2283, 16))
					{
						func_169();
					}
					else
					{
						func_166();
						if (unk_0x7DA173D4FD42F36B(Global_2284, 0))
						{
							iLocal_132 = unk_0x1ADBAAC322D61F73();
							if ((iLocal_132 - iLocal_131) > 1000)
							{
								if (iLocal_133)
								{
									func_165();
								}
								else
								{
									func_147();
								}
							}
							if (iLocal_133)
							{
								func_146();
							}
						}
						else
						{
							func_147();
						}
					}
					if (!unk_0x7DA173D4FD42F36B(Global_2283, 9))
					{
						if (func_145(2, Global_14385, 0))
						{
							if (unk_0x7DA173D4FD42F36B(Global_2284, 0))
							{
							}
							else if (Global_14356 == 0)
							{
								if (!unk_0x7DA173D4FD42F36B(Global_2284, 19))
								{
									func_143();
									func_142(Global_14394, "SET_DATA_SLOT_EMPTY", 11f, -1082130432, -1082130432, -1082130432, -1082130432);
									iLocal_106 = 0;
									StringCopy(&cLocal_109, "", 16);
									func_141();
									Global_14393 = 0;
									iLocal_116 = 0;
									func_142(Global_14394, "DISPLAY_VIEW", 11f, -1082130432, -1082130432, -1082130432, -1082130432);
									func_140(Global_14394, "SET_HEADER", "CELL_221", 0, 0, 0, 0);
									if (Global_14401)
									{
										func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
										func_139(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
										unk_0xE27C8E42A97895CF(&Global_2283, 17);
										func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
									}
									else
									{
										func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
										func_139(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
										unk_0xE27C8E42A97895CF(&Global_2283, 17);
										func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
									}
									if (Global_14413.f_1 > 3)
									{
										Global_14413.f_1 = 8;
									}
								}
							}
						}
					}
					break;
				
				case 8:
					if (iLocal_116 == 1)
					{
						func_166();
						func_170();
					}
					else if (iLocal_114 == 0)
					{
						func_129();
						func_122();
					}
					else
					{
						if (unk_0x83666F9FB8FEBD4B() > 1500)
						{
							iLocal_329 = 0;
							while (iLocal_329 < 4)
							{
								if (unk_0x2F6869889D97DFED(&(Global_101186.f_32651[Global_1598 /*29*/].f_3), &(Global_2121[iLocal_329 /*16*/])))
								{
									if (!unk_0x2F6869889D97DFED(&(Global_2121[iLocal_329 /*16*/].f_8), "CELL_SFUN_NULL"))
									{
										bLocal_326 = true;
										iLocal_328 = iLocal_329;
									}
									else
									{
										bLocal_326 = false;
									}
								}
								iLocal_329++;
							}
							if (iLocal_115 == 0)
							{
								unk_0x2B859AD680983623(Global_14394, "GET_CURRENT_SELECTION");
								uLocal_99 = unk_0x501E08A637882750();
								while (!unk_0xEC0EC22A8A43C76E(uLocal_99))
								{
									unk_0x4EDE34FBADD967A6(0);
								}
								iLocal_100 = unk_0xFD3CF387C866C665(uLocal_99);
								func_120();
							}
						}
						func_166();
						if (bLocal_327 == 1)
						{
							if (!Global_101186.f_16869.f_396)
							{
								if (!func_116(Global_14413, Global_1598))
								{
									Global_101186.f_16869.f_396 = 1;
								}
							}
						}
						if (func_116(Global_14413, Global_1598))
						{
							if (!Global_101186.f_16869.f_397)
							{
								if (bLocal_326 == 1)
								{
									if (func_115(Global_87490))
									{
										switch (func_113("AM_H_BBUDDY"))
										{
											case 2:
												func_111("AM_H_BBUDDY", 2, 500, 10000, 10000, 7, 0, 0, 0);
												break;
											
											case 1:
												Global_101186.f_16869.f_397 = 1;
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
												Global_101186.f_16869.f_397 = 1;
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
						if (iLocal_115)
						{
							func_105();
						}
						else
						{
							func_76();
						}
					}
					if (func_145(2, Global_14381, 0))
					{
						func_75();
						Global_14391 = 1;
						if (Global_69521)
						{
							func_265();
						}
						else
						{
							func_255();
						}
						unk_0x4EDE34FBADD967A6(0);
						if (Global_14413.f_1 > 3)
						{
							Global_14413.f_1 = 7;
						}
						StringCopy(&cLocal_109, "", 16);
						if (iLocal_114 == 1)
						{
							iLocal_114 = 0;
						}
						if (iLocal_115 == 1)
						{
							iLocal_115 = 0;
						}
						iLocal_116 = 0;
					}
					break;
				
				case 10:
					if (iLocal_127 == 4)
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
			if (!Global_14413.f_1 == 8)
			{
				if ((Global_2891 - Global_2890) > Global_2892)
				{
					if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
					{
						if (unk_0x6F54F6E4D3F3FD07(unk_0xE0BDAFA1A39552D6()))
						{
							if (func_145(2, Global_14381, 0))
							{
								if (unk_0x7DA173D4FD42F36B(Global_2284, 0))
								{
									func_75();
								}
								else
								{
									func_75();
									if (!Global_14413.f_1 == 10)
									{
										func_253();
									}
									else if (Global_1598 == 132)
									{
										if (Global_2469986.f_1 || unk_0x7DA173D4FD42F36B(Global_2284, 20))
										{
											Global_14413.f_1 = 7;
											func_142(Global_14394, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
											if (unk_0x7DA173D4FD42F36B(Global_2284, 0))
											{
												func_140(Global_14394, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
											}
											else
											{
												func_140(Global_14394, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
											}
											unk_0x8EBF150526027B8E(iLocal_104);
											iLocal_127 = 0;
										}
									}
									else
									{
										func_254();
										Global_14413.f_1 = 7;
										func_2();
										func_142(Global_14394, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
										if (unk_0x7DA173D4FD42F36B(Global_2284, 0))
										{
											func_140(Global_14394, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
										}
										else
										{
											func_140(Global_14394, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
										}
										unk_0x8EBF150526027B8E(iLocal_104);
										iLocal_127 = 0;
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
			Global_14415 = 6;
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
	if (((Global_14413.f_1 == 1 || Global_14413.f_1 == 3) || Global_14413.f_1 == 0) || Global_14357 == 1)
	{
		Global_14400 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	if (!Global_14413.f_1 == 10 && !Global_14413.f_1 == 9)
	{
		if (unk_0x7DA173D4FD42F36B(Global_2283, 9))
		{
			unk_0x4EDE34FBADD967A6(750);
		}
		if (Global_14413.f_1 > 6)
		{
			func_142(Global_14394, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
			if (unk_0x7DA173D4FD42F36B(Global_2284, 0))
			{
				func_140(Global_14394, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
			}
			else
			{
				func_140(Global_14394, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
			}
			Global_2286 = 99;
			if (unk_0x7DA173D4FD42F36B(Global_2283, 9))
			{
				if (Global_14401)
				{
					func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
					func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
					func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_139(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x99BCB15F954AF579(&Global_2283, 17);
			}
			else if (unk_0x7DA173D4FD42F36B(Global_2284, 0))
			{
				if (Global_14401)
				{
					func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
					func_139(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
					func_139(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_139(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14401)
			{
				if (iLocal_94 > 0)
				{
					func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				}
				else
				{
					func_139(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				}
				if (Global_14356 == 0)
				{
					func_139(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, "CELL_207", 0, 0, 0, 0);
					unk_0xE27C8E42A97895CF(&Global_2283, 17);
				}
				else
				{
					func_139(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0xE27C8E42A97895CF(&Global_2283, 17);
				}
				func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				if (iLocal_94 > 0)
				{
					func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				else
				{
					func_139(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_139(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xE27C8E42A97895CF(&Global_2283, 17);
				func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_3()
{
	int iVar0;
	struct<3> Var1;
	int iVar7;
	
	switch (iLocal_127)
	{
		case 0:
			if (Global_1598 == 81)
			{
				if (Global_1572930 == 0)
				{
					Global_1572930 = 1;
				}
				if (unk_0x4B656862029A01A6("LOWCAAU"))
				{
					unk_0x43ACA4D5479108DF("LOWCAAU", 14);
					while (!unk_0x7710127C9E7C52D8(14))
					{
						unk_0x4EDE34FBADD967A6(0);
					}
				}
				StringCopy(&cLocal_134, "LOWCA_CALL10_1", 16);
			}
			else
			{
				if (unk_0x4B656862029A01A6(&Global_16735))
				{
					unk_0x18DF389F542183A3(&Global_16735, 1);
					while (!unk_0x7710127C9E7C52D8(1))
					{
						unk_0x4EDE34FBADD967A6(0);
					}
				}
				cLocal_134 = { Global_117[Global_1598 /*10*/] };
				StringConCat(&cLocal_134, "_1", 16);
			}
			if (unk_0xDC1F9F222D09400F(&cLocal_134) || iLocal_306 == 1)
			{
				iLocal_128 = Global_16732;
				if (func_74(129))
				{
					iLocal_128 = Global_88071;
				}
			}
			else
			{
				iLocal_128 = Global_16731;
			}
			if ((iLocal_306 == 1 && unk_0x2F6869889D97DFED(&cLocal_307, "CELLPHONE_CHEAT")) && Global_69521 == 0)
			{
				if ((unk_0x2F6869889D97DFED(&Local_311, "CHEAT_SEAPLANE") || unk_0x2F6869889D97DFED(&Local_311, "CHEAT_DUELC")) || unk_0x2F6869889D97DFED(&Local_311, "CHEAT_BUBBLE"))
				{
					bLocal_120 = true;
				}
				if (bLocal_120)
				{
					if (func_73())
					{
						iLocal_121 = 0;
					}
					else
					{
						iLocal_121 = 1;
					}
				}
				if (iLocal_121 == 0)
				{
					iLocal_129 = unk_0x1ADBAAC322D61F73();
					unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
					unk_0x7AF283DA3BA078CD(4);
					unk_0x7AF283DA3BA078CD(0);
					unk_0x7AF283DA3BA078CD(3);
					unk_0x7291E2F821FCFC04("STRING");
					unk_0x4226D56D57A16C9F(&cLocal_109, -1);
					unk_0xD6360E18957BCDD3();
					func_72("CELL_300");
					if (unk_0x2F6869889D97DFED(&Local_311, "CHEAT_MONOC"))
					{
						func_72("CELL_MONOSIGNAL");
					}
					else if (unk_0x2F6869889D97DFED(&Local_311, "CHEAT_DIRECTOR"))
					{
						func_72("CELL_DRCT");
					}
					else
					{
						func_72("CELL_CHEAT");
					}
					func_72("CELL_195");
					unk_0xE97F1B22C5E8989F();
					func_142(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
					iLocal_127 = 1;
				}
				else
				{
					iLocal_127 = 2;
					iLocal_129 = unk_0x1ADBAAC322D61F73();
				}
			}
			else
			{
				iLocal_127 = 2;
				iLocal_129 = unk_0x1ADBAAC322D61F73();
			}
			break;
		
		case 1:
			iLocal_130 = unk_0x1ADBAAC322D61F73();
			if ((iLocal_130 - iLocal_129) > 1500)
			{
				iLocal_127 = 3;
			}
			break;
		
		case 2:
			iLocal_130 = unk_0x1ADBAAC322D61F73();
			if (iLocal_128 != Global_16731)
			{
				if (unk_0xC543EAF03B57467D(iLocal_104))
				{
					if (Global_2469986.f_37 == 0)
					{
						if (Global_14356)
						{
							unk_0x962E604CCA53388F(iLocal_104, "Dial_and_Remote_Ring", &Global_14402, 1);
						}
						else if ((iLocal_130 - iLocal_129) > 1700)
						{
							unk_0x962E604CCA53388F(iLocal_104, "Remote_Ring", &Global_14402, 1);
						}
					}
				}
			}
			else if ((func_74(130) || func_74(132)) || func_74(128))
			{
				if (unk_0xC543EAF03B57467D(iLocal_104))
				{
					if (Global_2469986.f_37 == 0)
					{
						if (Global_14356)
						{
							unk_0x962E604CCA53388F(iLocal_104, "Dial_and_Remote_Ring", &Global_14402, 1);
						}
						else if ((iLocal_130 - iLocal_129) > 1700)
						{
							unk_0x962E604CCA53388F(iLocal_104, "Remote_Ring", &Global_14402, 1);
						}
					}
				}
			}
			if ((iLocal_130 - iLocal_129) > iLocal_128)
			{
				if (iLocal_128 == Global_16731)
				{
					bLocal_117 = false;
					if ((Global_1598 == 130 || Global_1598 == 132) || Global_1598 == 128)
					{
						if (!unk_0x7DA173D4FD42F36B(Global_2284, 20))
						{
							bLocal_117 = true;
							if ((iLocal_130 - iLocal_129) > iLocal_128 + 10000)
							{
								if (Global_14413.f_1 == 10)
								{
									if (Global_1598 == 130)
									{
										Global_14413.f_1 = 3;
									}
								}
							}
						}
					}
					if (!bLocal_117)
					{
						iLocal_127 = 4;
						unk_0x8EBF150526027B8E(iLocal_104);
						iLocal_118 = 0;
						unk_0x5AE11BC36633DE4E(0);
						if (Global_101186.f_32651[Global_1598 /*29*/].f_24[Global_14413] == 0)
						{
							if (Global_1598 == 132)
							{
								unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
								unk_0x7AF283DA3BA078CD(4);
								unk_0x7AF283DA3BA078CD(0);
								unk_0x7AF283DA3BA078CD(2);
								unk_0x7291E2F821FCFC04("CELL_CONDFON");
								unk_0x9C174A0D56FFB64A(&Global_15727);
								unk_0xD6360E18957BCDD3();
								func_72("CELL_300");
								func_72("CELL_220");
								func_72("CELL_219");
								unk_0xE97F1B22C5E8989F();
							}
							else
							{
								func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(5), -1f, -1f, &(Global_117[Global_1598 /*10*/].f_4), "CELL_300", "CELL_220", "CELL_195", 0);
							}
						}
						else
						{
							func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(5), -1f, -1f, &(Global_101186.f_32651[Global_1598 /*29*/].f_3), &(Global_101186.f_32651[Global_1598 /*29*/].f_7), "CELL_220", &(Global_101186.f_32651[Global_1598 /*29*/].f_3), 0);
						}
						func_142(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					iLocal_127 = 3;
				}
			}
			break;
		
		case 3:
			if (iLocal_306 == 1)
			{
				if (unk_0x2F6869889D97DFED(&cLocal_307, "CELLPHONE_CHEAT") && Global_69521 == 0)
				{
					if (unk_0x2F6869889D97DFED(&Local_311, "CHEAT_MONOC"))
					{
						if (Global_3087 == 0)
						{
							Global_3087 = 1;
							Global_101186.f_12817[0 /*20*/].f_6 = 5;
							Global_101186.f_12817[2 /*20*/].f_6 = 5;
							Global_101186.f_12817[1 /*20*/].f_6 = 5;
							if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
							{
								if (!unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 1))
								{
									if (!unk_0x3A55B6AA596FF586(4, unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), 40f))
									{
										unk_0x94CED3A7C1249729(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1) + Vector(2f, 0f, 0f), 4, 0.1f, 1, 0, 1065353216);
									}
								}
							}
						}
						else
						{
							Global_3087 = 0;
						}
					}
					if (unk_0x2F6869889D97DFED(&Local_311, "CHEAT_SUPJUM"))
					{
						func_71(0, 0);
					}
					if (unk_0x2F6869889D97DFED(&Local_311, "CHEAT_HEALA"))
					{
						func_71(6, 0);
					}
					if (unk_0x2F6869889D97DFED(&Local_311, "CHEAT_SLIDEYC"))
					{
						func_71(1, 0);
					}
					if (unk_0x2F6869889D97DFED(&Local_311, "CHEAT_FASTR"))
					{
						func_71(2, 0);
					}
					if (unk_0x2F6869889D97DFED(&Local_311, "CHEAT_WANTDN"))
					{
						func_71(9, 0);
					}
					if (unk_0x2F6869889D97DFED(&Local_311, "CHEAT_WANTUP"))
					{
						func_71(8, 0);
					}
					if (unk_0x2F6869889D97DFED(&Local_311, "CHEAT_WEATHER"))
					{
						func_71(5, 0);
					}
					if (unk_0x2F6869889D97DFED(&Local_311, "CHEAT_FASTS"))
					{
						func_71(3, 0);
					}
					if (unk_0x2F6869889D97DFED(&Local_311, "CHEAT_POWER"))
					{
						func_71(7, 0);
					}
					if (unk_0x2F6869889D97DFED(&Local_311, "CHEAT_CHUTE"))
					{
						func_71(10, 0);
					}
					if (unk_0x2F6869889D97DFED(&Local_311, "CHEAT_BANG"))
					{
						func_71(11, 0);
					}
					if (unk_0x2F6869889D97DFED(&Local_311, "CHEAT_FLAMB"))
					{
						func_71(12, 0);
					}
					if (unk_0x2F6869889D97DFED(&Local_311, "CHEAT_EXPMEL"))
					{
						func_71(13, 0);
					}
					if (unk_0x2F6869889D97DFED(&Local_311, "CHEAT_ZEROG"))
					{
						func_71(14, 0);
					}
					if (unk_0x2F6869889D97DFED(&Local_311, "CHEAT_INVINC"))
					{
						func_71(15, 0);
					}
					if (unk_0x2F6869889D97DFED(&Local_311, "CHEAT_SLOWMO"))
					{
						func_71(16, 0);
					}
					if (unk_0x2F6869889D97DFED(&Local_311, "CHEAT_SKYFA"))
					{
						func_71(17, 0);
					}
					if (unk_0x2F6869889D97DFED(&Local_311, "CHEAT_DRUNK"))
					{
						func_71(18, 0);
					}
					if (unk_0x2F6869889D97DFED(&Local_311, "CHEAT_DEADEYE"))
					{
						func_71(19, 0);
					}
					if (unk_0x2F6869889D97DFED(&Local_311, "CHEAT_WEAPONS"))
					{
						func_71(4, 0);
					}
					if (unk_0x2F6869889D97DFED(&Local_311, "CHEAT_BUZZARD"))
					{
						func_71(20, joaat("buzzard"));
					}
					if (unk_0x2F6869889D97DFED(&Local_311, "CHEAT_COMET2"))
					{
						func_71(20, joaat("comet2"));
					}
					if (unk_0x2F6869889D97DFED(&Local_311, "CHEAT_BMX"))
					{
						func_71(20, joaat("bmx"));
					}
					if (unk_0x2F6869889D97DFED(&Local_311, "CHEAT_CADDY"))
					{
						func_71(20, joaat("caddy"));
					}
					if (unk_0x2F6869889D97DFED(&Local_311, "CHEAT_DUSTER"))
					{
						func_71(20, joaat("duster"));
					}
					if (unk_0x2F6869889D97DFED(&Local_311, "CHEAT_PCJ"))
					{
						func_71(20, joaat("pcj"));
					}
					if (unk_0x2F6869889D97DFED(&Local_311, "CHEAT_RAPIDGT"))
					{
						func_71(20, joaat("rapidgt"));
					}
					if (unk_0x2F6869889D97DFED(&Local_311, "CHEAT_STRETCH"))
					{
						func_71(20, joaat("stretch"));
					}
					if (unk_0x2F6869889D97DFED(&Local_311, "CHEAT_STUNT"))
					{
						func_71(20, joaat("stunt"));
					}
					if (unk_0x2F6869889D97DFED(&Local_311, "CHEAT_TRASH"))
					{
						func_71(20, joaat("trash"));
					}
					if (unk_0x2F6869889D97DFED(&Local_311, "CHEAT_SANCHEZ"))
					{
						func_71(20, joaat("sanchez"));
					}
					if (func_73())
					{
						if (unk_0x2F6869889D97DFED(&Local_311, "CHEAT_SEAPLANE"))
						{
							func_71(20, joaat("dodo"));
						}
						if (unk_0x2F6869889D97DFED(&Local_311, "CHEAT_DUELC"))
						{
							func_71(20, joaat("dukes2"));
						}
						if (unk_0x2F6869889D97DFED(&Local_311, "CHEAT_BUBBLE"))
						{
							func_71(20, joaat("submersible2"));
						}
					}
					if (unk_0x2F6869889D97DFED(&Local_311, "CHEAT_DIRECTOR"))
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
				else if (unk_0x2F6869889D97DFED(&cLocal_307, "CELLPHONE_CHEAT"))
				{
					func_30(0);
				}
				else
				{
					func_29(&uLocal_138, 1, 0, &Local_311, 0, 1);
					Global_16733 = 0;
					func_28(&uLocal_138, Global_1598, &Global_16735, &cLocal_307, 2, 0, 0, 0, 0);
				}
			}
			else
			{
				switch (Global_1598)
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
				func_29(&uLocal_138, 1, 0, &Var1, 0, 1);
				Global_16733 = 0;
				switch (Global_1598)
				{
					case 81:
						func_9(&uLocal_138, 81, "LOWCAAU", "LOWCA_CALL10", 2, 0, 0, 0, 0);
						break;
					
					case 13:
						func_9(&uLocal_138, 12, &Global_16735, "LES_APH2", 2, 0, 0, 0, 0);
						break;
					
					case 36:
						iVar7 = unk_0xEC5C0F25A9A364A0();
						if (iVar7 > 17 || iVar7 < 9)
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, "SHR_APH3", 2, 0, 0, 0, 0);
						}
						if (iVar7 > 8 && iVar7 < 13)
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, "SHR_APH1", 2, 0, 0, 0, 0);
						}
						if (iVar7 > 12 && iVar7 < 18)
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, "SHR_APH2", 2, 0, 0, 0, 0);
						}
						break;
					
					case 17:
						if (func_8(21) && !func_8(22))
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, "AMA_APH2", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, &(Global_117[Global_1598 /*10*/]), 2, 0, 0, 0, 0);
						}
						break;
					
					case 20:
						if (Global_69521)
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, "ANS_RBusy", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, &(Global_117[Global_1598 /*10*/]), 2, 0, 0, 0, 0);
						}
						break;
					
					case 44:
						if (func_7(126))
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, "DEN_APH3", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, &(Global_117[Global_1598 /*10*/]), 2, 0, 0, 0, 0);
						}
						break;
					
					case 15:
						if (!func_8(19))
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, "TRA_APH1", 2, 0, 0, 0, 0);
						}
						else if (!func_8(20))
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, "TRA_APH2", 2, 0, 0, 0, 0);
						}
						else if (!func_8(22))
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, "TRA_APH3", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, "TRA_APH4", 2, 0, 0, 0, 0);
						}
						break;
					
					case 19:
						if (!func_8(19))
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, "LAM_APH1", 2, 0, 0, 0, 0);
						}
						else if (!func_8(20))
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, "LAM_APH2", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, "LAM_APH3", 2, 0, 0, 0, 0);
						}
						break;
					
					case 14:
						if (!func_8(19))
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, "JIM_APH1", 2, 0, 0, 0, 0);
						}
						else if (!func_8(21))
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, "JIM_APH3", 2, 0, 0, 0, 0);
						}
						else if (!func_8(22))
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, "JIM_APH2", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, "JIM_APH4", 2, 0, 0, 0, 0);
						}
						break;
					
					case 49:
						if (func_6(7))
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, "BAR_APH2", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, "BAR_APH1", 2, 0, 0, 0, 0);
						}
						break;
					
					case 85:
						iLocal_330 = unk_0xA6055C735E3DD877(0, 100);
						if (iLocal_330 <= 50)
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, "ANS_MWBusy", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, "ANS_MWBusy2", 2, 0, 0, 0, 0);
						}
						break;
					
					case 41:
						iLocal_330 = unk_0xA6055C735E3DD877(0, 100);
						if (iLocal_330 <= 50)
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, "ANS_PGbusy", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, "ANS_PGbusy2", 2, 0, 0, 0, 0);
						}
						break;
					
					case 91:
						iLocal_330 = unk_0xA6055C735E3DD877(0, 100);
						if (iLocal_330 <= 50)
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, "ANS_INSbusy", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, "ANS_INSbusy2", 2, 0, 0, 0, 0);
						}
						break;
					
					case 86:
						func_9(&uLocal_138, Global_1598, &Global_16735, "ANS_GBusy", 2, 0, 0, 0, 0);
						break;
					
					default:
						func_9(&uLocal_138, Global_1598, &Global_16735, &(Global_117[Global_1598 /*10*/]), 2, 0, 0, 0, 0);
				}
				unk_0xE27C8E42A97895CF(&Global_2284, 31);
			}
			break;
		
		case 4:
			if (unk_0xC543EAF03B57467D(iLocal_104))
			{
				unk_0x962E604CCA53388F(iLocal_104, "Remote_Engaged", &Global_14402, 1);
			}
			if (unk_0xC9D9444186B5A374() > 1500)
			{
				if (iLocal_118 == 0)
				{
					if (Global_14413 == 2)
					{
						if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
						{
							func_4(unk_0x06736567F820A39E(), "PHONE_CALL_NOT_CONNECTED", 24);
							iLocal_118 = 1;
						}
					}
				}
			}
			break;
	}
}

void func_4(var uParam0, char* sParam1, int iParam2)
{
	unk_0x6057437695115495(uParam0, sParam1, func_5(iParam2), 1);
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
	return unk_0x7DA173D4FD42F36B(Global_101186.f_17340[iParam0 /*6*/], 3);
}

int func_7(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101186.f_7851.f_99.f_58[iParam0];
}

int func_8(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101186.f_7851.f_330[iParam0 /*6*/];
}

void func_9(var uParam0, int iParam1, char* sParam2, char[4] cParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	if (Global_69521 || func_27())
	{
		if (Global_1598 == 81)
		{
			if (Global_1572930 == 0)
			{
				Global_1572930 = 1;
			}
			func_10(uParam0, iParam1, sParam2, cParam3, iParam4, iParam5, iParam6, iParam7, bParam8);
		}
		else if (Global_1572930 == 1)
		{
			func_28(uParam0, iParam1, &Global_16735, cParam3, iParam4, iParam5, iParam6, iParam7, bParam8);
		}
		else
		{
			func_10(uParam0, iParam1, &Global_16735, cParam3, iParam4, iParam5, iParam6, iParam7, bParam8);
		}
	}
	else
	{
		func_10(uParam0, iParam1, &Global_16735, cParam3, iParam4, iParam5, iParam6, iParam7, bParam8);
	}
}

int func_10(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_26(uParam0, uParam1, sParam2, iParam6, iParam7, 0);
	Global_15760 = 0;
	Global_15719 = 1;
	Global_15726 = 0;
	Global_15721 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_15717 = 0;
	Global_15764 = 0;
	Global_15766 = 0;
	if (iParam5 == 1)
	{
		Global_15724 = 1;
	}
	else
	{
		Global_15724 = 0;
	}
	Global_2621441 = 0;
	return func_11(sParam3, iParam4, bParam8);
}

int func_11(char* sParam0, int iParam1, bool bParam2)
{
	Global_15713 = 0;
	if (Global_15712 == 0 || Global_15714 == 2)
	{
		if (Global_15712 != 0)
		{
			if (iParam1 > Global_15714)
			{
				if (Global_15719 == 0)
				{
					unk_0xC48487554D051523(0);
					Global_14413.f_1 = 3;
					Global_15712 = 0;
					Global_15713 = 1;
					Global_15765 = 0;
					Global_15708 = 0;
					Global_15709 = 0;
					Global_15723 = 0;
					Global_15722 = 0;
					Global_14412 = 0;
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
		if (unk_0x97D4BC3047CEF5DE())
		{
			return 0;
		}
		if (func_24(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_23();
		Global_15001 = { Global_15166 };
		Global_15718 = Global_15719;
		Global_15725 = Global_15726;
		Global_2621442 = Global_2621441;
		Global_15727 = { Global_15743 };
		Global_15720 = Global_15721;
		Global_16702 = Global_16703;
		Global_16710 = { Global_16716 };
		Global_16704 = Global_16705;
		Global_16706 = Global_16707;
		Global_16708 = Global_16709;
		Global_15331.f_370 = Global_16701;
		Global_15331.f_368 = Global_16699;
		Global_15331.f_369 = Global_16700;
		Global_15708 = Global_15709;
		if (Global_15718)
		{
			unk_0x99BCB15F954AF579(&Global_2283, 20);
			unk_0x99BCB15F954AF579(&Global_2284, 17);
			unk_0x99BCB15F954AF579(&Global_2285, 0);
			if (bParam2)
			{
				func_16();
				if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14413.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14379 == 1)
			{
				return 0;
			}
			if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
			{
				if (unk_0x29A1618738394E16(unk_0x06736567F820A39E()))
				{
					return 0;
				}
				if (func_15())
				{
					return 0;
				}
				if (unk_0x96E2A6D13B9C3420(unk_0x06736567F820A39E()))
				{
					return 0;
				}
				if (unk_0x9C4162CAC2B459EC(unk_0x06736567F820A39E()))
				{
					return 0;
				}
				if (unk_0x5378344F881C2B51(unk_0x06736567F820A39E()))
				{
					return 0;
				}
				if (unk_0x206A3BB6682CBCBD(unk_0x06736567F820A39E(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69521)
				{
					if (unk_0xC774E76B3D78AD45(unk_0x06736567F820A39E()))
					{
						return 0;
					}
					if (unk_0x57EEE01FD8B2618E(unk_0xE0BDAFA1A39552D6()))
					{
						return 0;
					}
					if (unk_0x973D428626B4A21D(unk_0x06736567F820A39E()))
					{
						return 0;
					}
					if (unk_0x4AEBCDB39031E1D4(unk_0xE0BDAFA1A39552D6()))
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
				switch (Global_14413.f_1)
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
				if (unk_0x7DA173D4FD42F36B(Global_2283, 9))
				{
					return 0;
				}
			}
			func_13();
			Global_15722 = bParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_12();
		return 1;
	}
	if (Global_15712 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15714 || iParam1 == Global_15714)
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
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xC48487554D051523(0);
	Global_15712 = 1;
}

void func_13()
{
	Global_15765 = Global_15764;
	Global_15759 = Global_15760;
	Global_15806 = { Global_15794 };
	Global_15812 = { Global_15800 };
	Global_15767 = Global_15766;
	Global_15836 = { Global_15818 };
	Global_15842 = { Global_15824 };
	Global_15848 = { Global_15830 };
	Global_15854 = { Global_15860 };
	Global_1598 = Global_1599;
	Global_1600 = Global_1601;
	Global_15723 = Global_15724;
	Global_15725 = Global_15726;
	Global_15727 = { Global_15743 };
	Global_15716 = Global_15717;
	Global_16728 = 0;
	Global_15761 = 0;
	Global_15762 = 0;
	unk_0x99BCB15F954AF579(&Global_2284, 16);
}

int func_14()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_15()
{
	int iVar0;
	int iVar1;
	
	if (Global_69521)
	{
		iVar0 = 0;
		unk_0x47BF380FF078FA9F(unk_0x06736567F820A39E(), &iVar1, 1);
		if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xEA0AA34E1398E91E() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
	{
		if (unk_0x8FE2FBDA23507F78(unk_0x06736567F820A39E(), 78, 1))
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
		if (!unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0))
		{
			if (unk_0x79469DA5833EACA8(unk_0x06736567F820A39E()) == Global_101186.f_32651[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0x79469DA5833EACA8(unk_0x06736567F820A39E()) == Global_101186.f_32651[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0x79469DA5833EACA8(unk_0x06736567F820A39E()) == Global_101186.f_32651[2 /*29*/])
			{
				Global_14413 = 2;
			}
			else
			{
				Global_14413 = 0;
			}
		}
	}
	else
	{
		Global_14413 = func_17();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69521)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

var func_17()
{
	func_18();
	return Global_101186.f_1902.f_539.f_3549;
}

void func_18()
{
	int iVar0;
	
	if (unk_0xC1EDB61CE0A4B94E(unk_0x06736567F820A39E()))
	{
		if (func_21(Global_101186.f_1902.f_539.f_3549) != unk_0x79469DA5833EACA8(unk_0x06736567F820A39E()))
		{
			iVar0 = func_20(unk_0x06736567F820A39E());
			if (func_19(iVar0) && (!func_22(14) || Global_100138))
			{
				if (Global_101186.f_1902.f_539.f_3549 != iVar0 && func_19(Global_101186.f_1902.f_539.f_3549))
				{
					Global_101186.f_1902.f_539.f_3550 = Global_101186.f_1902.f_539.f_3549;
				}
				Global_101186.f_1902.f_539.f_3551 = iVar0;
				Global_101186.f_1902.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101186.f_1902.f_539.f_3549 != 145)
			{
				Global_101186.f_1902.f_539.f_3551 = Global_101186.f_1902.f_539.f_3549;
			}
			return;
		}
	}
	Global_101186.f_1902.f_539.f_3549 = 145;
}

bool func_19(int iParam0)
{
	return iParam0 < 3;
}

int func_20(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC1EDB61CE0A4B94E(uParam0))
	{
		iVar1 = unk_0x79469DA5833EACA8(uParam0);
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
		return Global_101186.f_32651[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_22(int iParam0)
{
	return Global_35742 == iParam0;
}

void func_23()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15001[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15001[iVar0 /*10*/].f_1), "", 24);
		Global_15001[iVar0 /*10*/].f_7 = 0;
		Global_15001[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15001.f_161 = -99;
	Global_15001.f_162 = { 0f, 0f, 0f };
}

bool func_24(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338622.f_203[iParam1];
			}
			break;
	}
	return unk_0x7DA173D4FD42F36B(Global_1338622.f_949, iParam0);
}

void func_25()
{
	unk_0x0F9FE213495D2609();
	Global_16723 = 0;
	if ((unk_0x1FB728BC68674B71() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		unk_0xC48487554D051523(0);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (unk_0x97D4BC3047CEF5DE())
	{
		unk_0xC48487554D051523(1);
		Global_15712 = 6;
		return;
	}
}

void func_26(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15166 = { *uParam0 };
	Global_1599 = uParam1;
	StringCopy(&Global_15782, sParam2, 24);
	Global_16701 = iParam5;
	if (iParam3 == 0)
	{
		Global_16699 = 1;
		Global_16697 = 0;
	}
	else
	{
		Global_16699 = 0;
		Global_16697 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16700 = 1;
		Global_16698 = 0;
	}
	else
	{
		Global_16700 = 0;
		Global_16698 = 1;
	}
}

var func_27()
{
	return Global_1315888;
}

int func_28(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_26(uParam0, uParam1, sParam2, iParam6, iParam7, 0);
	Global_15760 = 0;
	Global_15719 = 1;
	Global_15726 = 0;
	Global_15721 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_15717 = 0;
	Global_15764 = 0;
	Global_15766 = 0;
	if (iParam5 == 1)
	{
		Global_15724 = 1;
	}
	else
	{
		Global_15724 = 0;
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
	if (!Global_69521)
	{
		if (!unk_0xCFC04A38F256EE06(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xCCE0A12014F4F2E9(iParam2, 0);
			}
			else
			{
				unk_0xCCE0A12014F4F2E9(iParam2, 1);
			}
		}
		if (!unk_0xCFC04A38F256EE06(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x5E0FA44E176DE736(iParam2, 0);
			}
			else
			{
				unk_0x5E0FA44E176DE736(iParam2, 1);
			}
		}
	}
}

void func_30(int iParam0)
{
	if (Global_14571)
	{
		func_31(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		unk_0xE27C8E42A97895CF(&Global_2284, 16);
	}
	if (unk_0x1FB728BC68674B71())
	{
		unk_0xC48487554D051523(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0xE27C8E42A97895CF(&Global_2283, 30);
	}
	else
	{
		unk_0x99BCB15F954AF579(&Global_2283, 30);
	}
	if (!func_14())
	{
		Global_14413.f_1 = 3;
	}
}

void func_31(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_32(0))
		{
			Global_14571 = 1;
			if (bParam1)
			{
				unk_0x3919EC2F8BB0A522(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0x362168BE71696AF1(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0x362168BE71696AF1(Global_14350);
		}
		else
		{
			unk_0x362168BE71696AF1(Global_14341);
		}
	}
}

int func_32(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0x7DA173D4FD42F36B(Global_2283, 14))
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
	if (unk_0x98934607F8D0FB03(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_33()
{
	float fVar0;
	
	unk_0x7A2BC6210CE2767E(1);
	unk_0xD3D729A98DEDDAFB(2, 201);
	unk_0xD3D729A98DEDDAFB(2, 202);
	fVar0 = 0f;
	while ((!unk_0xD471C64C0898A7BF(2, 201) && !unk_0xD471C64C0898A7BF(2, 202)) || fVar0 < 1f)
	{
		unk_0xDC38CC1E35B6A5D7("VEUI_HDR_ALERT", "VE_DIR_MODE_SURE", 18, 0, 0, -1, 0, 0, 1);
		unk_0x4EDE34FBADD967A6(0);
		fVar0 = (fVar0 + unk_0x487AF170F52A57F1());
	}
	unk_0x7A2BC6210CE2767E(0);
	if (unk_0xD471C64C0898A7BF(2, 201))
	{
		unk_0xEBA0934AA600C515(0);
		Global_100133 = 1;
	}
}

void func_34(int iParam0)
{
	float fVar0;
	char* sVar1;
	
	unk_0x7A2BC6210CE2767E(1);
	unk_0xD3D729A98DEDDAFB(2, 201);
	fVar0 = 0f;
	while (!unk_0xD471C64C0898A7BF(2, 201) || fVar0 < 1f)
	{
		sVar1 = func_35(iParam0, 119);
		unk_0x7B1776B3B53F8D74("FBR_GENERIC", 16384, 0, 0, -1, "FBR_DIR_MODE", sVar1, 1);
		unk_0x4EDE34FBADD967A6(0);
		fVar0 = (fVar0 + unk_0x487AF170F52A57F1());
	}
	unk_0x7A2BC6210CE2767E(0);
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
	if (unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0))
	{
		return 13;
	}
	if (bParam1)
	{
		if (unk_0x98934607F8D0FB03(unk_0xFC71FD0B03208C77()) > 1)
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
	if (Global_88563)
	{
		return 3;
	}
	if (Global_25405)
	{
		return 8;
	}
	if (Global_25300)
	{
		return 8;
	}
	if (Global_2621550)
	{
		if (unk_0x98934607F8D0FB03(-1516147206) > 0)
		{
			return 3;
		}
	}
	else if (Global_2621549)
	{
		if (unk_0x98934607F8D0FB03(2006115718) > 0)
		{
			return 3;
		}
	}
	else if (unk_0x98934607F8D0FB03(joaat("mission_stat_watcher")) > 0)
	{
		return 3;
	}
	if (unk_0x98934607F8D0FB03(joaat("finale_choice")) > 0)
	{
		return 3;
	}
	if (unk_0x98934607F8D0FB03(joaat("creator")) > 0)
	{
		return 3;
	}
	if (unk_0x98934607F8D0FB03(joaat("respawn_controller")) > 0)
	{
		return 13;
	}
	if (func_66(bParam1))
	{
		return 3;
	}
	if (unk_0x717A18E48FCBEA99(unk_0x06736567F820A39E()) || unk_0x9C4162CAC2B459EC(unk_0x06736567F820A39E()))
	{
		return 12;
	}
	if (func_65(Global_100211, 256))
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
	if (func_51() && !Global_100137)
	{
		return 8;
	}
	if (func_55())
	{
		return 5;
	}
	if (unk_0xAD79840A082ADD7F() || func_50())
	{
		return 4;
	}
	if (func_49())
	{
		return 4;
	}
	if (unk_0xC1EDB61CE0A4B94E(unk_0x06736567F820A39E()))
	{
		if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
		{
			iVar0 = func_40(60);
			if (iVar0 != 0)
			{
				return iVar0;
			}
			if (unk_0x5378344F881C2B51(unk_0x06736567F820A39E()) || unk_0xB92E52EBFE3CFE5A(unk_0x06736567F820A39E()) != -1)
			{
				return 11;
			}
			if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 1) || Global_100233)
			{
				return 10;
			}
		}
	}
	if (Global_25403)
	{
		return 8;
	}
	if (Global_69519)
	{
		return 4;
	}
	if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
	{
		if (unk_0xB0565BA1AD71378E(unk_0xE0BDAFA1A39552D6()) > 0 || unk_0x06919C12C3F93F0B(unk_0xE0BDAFA1A39552D6(), 1))
		{
			return 6;
		}
		if (unk_0x57EEE01FD8B2618E(unk_0xE0BDAFA1A39552D6()))
		{
			return 8;
		}
		if (unk_0x1514DF028FBE7449(unk_0x06736567F820A39E()))
		{
			return 8;
		}
	}
	if (unk_0x17CC0D5008835470())
	{
		return 7;
	}
	if (func_39())
	{
		return 8;
	}
	if (Global_25154)
	{
		return 3;
	}
	if (unk_0x4C0D45C16561CFBA())
	{
		return 4;
	}
	if (unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), 439.4357f, -997.4747f, 28.9584f, 428.3288f, -997.0398f, 24.8372f, 8f, 0, 1, 0))
	{
		return 9;
	}
	if (unk_0xC774E76B3D78AD45(unk_0x06736567F820A39E()))
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
	if (unk_0xD896F9CCB4F55A75(unk_0x06736567F820A39E()))
	{
		return 9;
	}
	return 0;
}

int func_37(bool bParam0)
{
	if (unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
		return 0;
	}
	if ((((((((((!unk_0x6F54F6E4D3F3FD07(unk_0xE0BDAFA1A39552D6()) || !unk_0x043F96EA2F7DC706(unk_0xE0BDAFA1A39552D6())) || unk_0x98D424FE7497139D(unk_0x06736567F820A39E())) || unk_0x7C6333A22EDB4BF7(unk_0x06736567F820A39E(), 0)) || unk_0x29A1618738394E16(unk_0x06736567F820A39E())) || unk_0x681E099FF604FDCE(unk_0x06736567F820A39E())) || unk_0xDA637881D427DB40(unk_0x06736567F820A39E())) || unk_0x1514DF028FBE7449(unk_0x06736567F820A39E())) || unk_0x1C3F1A4FF0A66BD0(unk_0x06736567F820A39E())) || unk_0x9C4162CAC2B459EC(unk_0x06736567F820A39E())) || unk_0x06919C12C3F93F0B(unk_0xE0BDAFA1A39552D6(), 1))
	{
		return 0;
	}
	if ((((((func_49() || Global_17118.f_4) || func_38()) || unk_0x950EB09CDE5DDCE9()) || unk_0xE1F210385246250E()) || func_50()) || func_69())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (unk_0x80C449C5D85C42A1())
		{
			return 0;
		}
	}
	return 1;
}

int func_38()
{
	if (!unk_0x17CC0D5008835470())
	{
		return Global_89121.f_44 == 1;
	}
	return 0;
}

bool func_39()
{
	return Global_52961;
}

int func_40(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	if (unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0) && unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 1))
	{
		return 5;
	}
	Var0 = { func_48(unk_0xE0BDAFA1A39552D6()) };
	if (Global_100273[10 /*10*/].f_1)
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
			if (unk_0x795DFAC3136F0C6E(Var0, -61.26628f, -1096.505f, 25.52088f, -58.43333f, -1101.147f, 29.24937f, 1.25f, 0, 1))
			{
				return 9;
			}
		}
	}
	if (unk_0xB7A628320EFF8E47(Var0, -740.9346f, 5599.426f, 40.71515f) < 11f)
	{
		if (unk_0x795DFAC3136F0C6E(Var0, -746.1299f, 5599.226f, 40.47561f, -737.632f, 5599.364f, 44.1693f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (unk_0xB7A628320EFF8E47(Var0, -740.9346f, 5590.426f, 40.71515f) < 11f)
	{
		if (unk_0x795DFAC3136F0C6E(Var0, -746.1299f, 5590.667f, 40.4392f, -737.6585f, 5590.592f, 44.52327f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (unk_0xB7A628320EFF8E47(Var0, 446.3265f, 5566.35f, 780.2151f) < 11f)
	{
		if (unk_0x795DFAC3136F0C6E(Var0, 451.1661f, 5566.451f, 780.1703f, 442.5211f, 5566.374f, 783.9819f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (unk_0xB7A628320EFF8E47(Var0, 446.3265f, 5577.35f, 780.2151f) < 11f)
	{
		if (unk_0x795DFAC3136F0C6E(Var0, 451.1661f, 5577.867f, 780.1899f, 442.5765f, 5577.579f, 783.9086f, 3.375f, 0, 1))
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
	iVar3 = unk_0x9F99187B9EC3128C(unk_0x06736567F820A39E());
	if (iVar3 == 0)
	{
		return 0;
	}
	else if ((iVar3 == Global_100149 || iVar3 == Global_100150) || iVar3 == Global_100151)
	{
		return 9;
	}
	else if (iVar3 == Global_100140)
	{
		return 9;
	}
	else if (iVar3 == Global_100141)
	{
		return 9;
	}
	else if (iVar3 == Global_100144)
	{
		return 9;
	}
	else if (iVar3 == Global_100143)
	{
		return 9;
	}
	else if (iVar3 == Global_100145)
	{
		return 9;
	}
	else if (iVar3 == Global_100146)
	{
		return 9;
	}
	else if (iVar3 == Global_100147)
	{
		return 9;
	}
	else if (iVar3 == Global_100148)
	{
		return 9;
	}
	else if (iVar3 == Global_100152)
	{
		return 9;
	}
	else if (iVar3 == Global_100153)
	{
		return 9;
	}
	else if (iVar3 == Global_100154)
	{
		return 9;
	}
	else if (iVar3 == Global_100155)
	{
		return 9;
	}
	else if (iVar3 == Global_100156)
	{
		return 9;
	}
	else if ((iVar3 == Global_100157 || iVar3 == Global_100158) && func_8(67))
	{
		return 9;
	}
	iVar4 = 0;
	while (iVar4 <= (19 - 1))
	{
		if (iVar3 == Global_100159[iVar4])
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
	func_44(24, &Global_100140);
	func_44(47, &Global_100141);
	func_44(10, &Global_100149);
	func_44(9, &Global_100150);
	func_44(8, &Global_100151);
	func_44(21, &Global_100152);
	func_44(11, &Global_100153);
	func_44(18, &Global_100157);
	func_44(19, &Global_100158);
	Global_100144 = unk_0xC9E9FBB6826F5158(-76.6618f, 6222.191f, 32.2412f, "V_factory1");
	Global_100143 = unk_0xC9E9FBB6826F5158(-98.2637f, 6210.022f, 31.924f, "V_factory2");
	Global_100145 = unk_0xC9E9FBB6826F5158(-115.8956f, 6179.749f, 32.4102f, "V_factory3");
	Global_100146 = unk_0xC9E9FBB6826F5158(-149.8199f, 6144.978f, 31.3353f, "V_factory4");
	Global_100147 = unk_0xC9E9FBB6826F5158(16.3605f, -1100.259f, 28.797f, "v_gun");
	Global_100148 = unk_0xC9E9FBB6826F5158(125.1948f, -1284.13f, 28.2847f, "v_strip3");
	Global_100154 = unk_0xC9E9FBB6826F5158(-545.5717f, 1987.145f, 126.0262f, "cs6_08_mine_int");
	Global_100155 = unk_0xC9E9FBB6826F5158(2330.598f, 2571.935f, 45.6802f, "ch3_01_trlr_int");
	Global_100156 = unk_0xC9E9FBB6826F5158(-54.7f, -1092.7f, 26.4f, "v_carshowroom");
	iVar0 = 0;
	while (iVar0 <= (19 - 1))
	{
		Global_100159[iVar0] = unk_0xED1A87B65DEE4375(func_42(iVar0));
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
	*uParam1 = unk_0xC9E9FBB6826F5158(Var0, Var0.f_3);
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
			Var0 = { Global_1049163[34 /*1924*/].f_146.f_1517 + Vector(1f, 0f, 0f) };
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
	if (Global_85628[iParam0 /*2*/])
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_82395)
	{
		if (Global_82395[iVar0 /*5*/] != -1)
		{
			if (Global_69790.f_109[Global_82395[iVar0 /*5*/] /*4*/] == iParam0)
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
	return unk_0xF4745590D18D14B8(unk_0x44A9253132E1DDE0(iParam0), 0);
}

bool func_49()
{
	return Global_1315913;
}

int func_50()
{
	if (unk_0x98934607F8D0FB03(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_51()
{
	return unk_0x1ADBAAC322D61F73() <= Global_17257.f_5745 + 100;
}

bool func_52()
{
	return unk_0x7DA173D4FD42F36B(Global_69769, 9);
}

bool func_53()
{
	return unk_0x7DA173D4FD42F36B(Global_69769, 8);
}

int func_54()
{
	if (!unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0) && !unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
		if (((((((((((((((unk_0x46E9388908C80483(unk_0x06736567F820A39E(), "misshair_shop@barbers", "player_intro", 3) || unk_0x46E9388908C80483(unk_0x06736567F820A39E(), "misshair_shop@barbers", "player_base", 3)) || unk_0x46E9388908C80483(unk_0x06736567F820A39E(), "misshair_shop@barbers", "player_enterchair", 3)) || unk_0x46E9388908C80483(unk_0x06736567F820A39E(), "misshair_shop@barbers", "player_exitchair", 3)) || unk_0x46E9388908C80483(unk_0x06736567F820A39E(), "misshair_shop@barbers", "player_idle_a", 3)) || unk_0x46E9388908C80483(unk_0x06736567F820A39E(), "misshair_shop@barbers", "player_idle_b", 3)) || unk_0x46E9388908C80483(unk_0x06736567F820A39E(), "misshair_shop@barbers", "player_idle_c", 3)) || unk_0x46E9388908C80483(unk_0x06736567F820A39E(), "misshair_shop@barbers", "player_idle_d", 3)) || unk_0x46E9388908C80483(unk_0x06736567F820A39E(), "misshair_shop@hair_dressers", "player_intro", 3)) || unk_0x46E9388908C80483(unk_0x06736567F820A39E(), "misshair_shop@hair_dressers", "player_base", 3)) || unk_0x46E9388908C80483(unk_0x06736567F820A39E(), "misshair_shop@hair_dressers", "player_enterchair", 3)) || unk_0x46E9388908C80483(unk_0x06736567F820A39E(), "misshair_shop@hair_dressers", "player_exitchair", 3)) || unk_0x46E9388908C80483(unk_0x06736567F820A39E(), "misshair_shop@hair_dressers", "player_idle_a", 3)) || unk_0x46E9388908C80483(unk_0x06736567F820A39E(), "misshair_shop@hair_dressers", "player_idle_b", 3)) || unk_0x46E9388908C80483(unk_0x06736567F820A39E(), "misshair_shop@hair_dressers", "player_idle_c", 3)) || unk_0x46E9388908C80483(unk_0x06736567F820A39E(), "misshair_shop@hair_dressers", "player_idle_d", 3))
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
		while (iVar0 < 45)
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
		return unk_0x7DA173D4FD42F36B(Global_91362.f_1300[iParam0], iParam1);
	}
	else if (unk_0x17CC0D5008835470())
	{
		if (func_62() == 0)
		{
			return unk_0x7DA173D4FD42F36B(func_58(func_61(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x7DA173D4FD42F36B(Global_101186.f_668[iParam0], iParam1);
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
	uVar0 = Global_2473854[iParam0 /*5*/][func_59(iParam1)];
	if (unk_0xFF4D252D25F54A29(uVar0, &uVar1, -1))
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
			Global_2473567 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2473567 = 1;
		}
	}
	return iVar0;
}

int func_60()
{
	return Global_1312747;
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
			return 3879;
			break;
		
		default:
			break;
	}
	return 3976;
}

int func_62()
{
	return Global_25152;
}

bool func_63()
{
	return Global_91362.f_297 > 0;
}

bool func_64()
{
	return Global_91362.f_296 > 0;
}

bool func_65(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_66(bool bParam0)
{
	if (!bParam0 && unk_0x98934607F8D0FB03(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x7DA173D4FD42F36B(Global_69769, 0);
}

bool func_67()
{
	return Global_91349.f_1;
}

bool func_68()
{
	return Global_69788;
}

int func_69()
{
	if (Global_69781)
	{
		return 1;
	}
	else if (Global_55774 && !Global_55780)
	{
		return 1;
	}
	return 0;
}

int func_70()
{
	if (Global_35742 == 15)
	{
		return 0;
	}
	return 1;
}

void func_71(int iParam0, int iParam1)
{
	unk_0xE27C8E42A97895CF(&Global_25399, iParam0);
	Global_25400 = iParam1;
}

void func_72(char* sParam0)
{
	unk_0x7291E2F821FCFC04(sParam0);
	unk_0xD6360E18957BCDD3();
}

int func_73()
{
	var uVar0;
	
	if (unk_0x37C879A6840008F2())
	{
		if (unk_0x8885412CB28B8667())
		{
			if (unk_0x85D4C81816DC7E73())
			{
				unk_0xFF4D252D25F54A29(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xE27C8E42A97895CF(&uVar0, 2);
				unk_0xE27C8E42A97895CF(&uVar0, 4);
				unk_0xE27C8E42A97895CF(&uVar0, 6);
				unk_0xE27C8E42A97895CF(&Global_25, 2);
				unk_0xE27C8E42A97895CF(&Global_25, 4);
				unk_0xE27C8E42A97895CF(&Global_25, 6);
				unk_0x57B5A527FBAC251E(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x68BFEB8408A751AF())
				{
					uVar0 = unk_0x424297F730B39FD1(866);
					unk_0xE27C8E42A97895CF(&uVar0, 0);
					unk_0x57EDFB763ADA5656(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_138382 == 2)
	{
		return 1;
	}
	else if (Global_138382 == 3)
	{
		return 0;
	}
	if (unk_0x68BFEB8408A751AF())
	{
		if (unk_0x7DA173D4FD42F36B(unk_0x424297F730B39FD1(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_74(int iParam0)
{
	if ((Global_16826 || Global_16825) || Global_16827)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_117[iParam0 /*10*/].f_8 != 138)
	{
		if (Global_14413.f_1 == 10)
		{
			if (Global_1598 == iParam0)
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
	if (!unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0))
	{
		unk_0x962E604CCA53388F(-1, "Menu_Back", &Global_14402, 1);
	}
}

void func_76()
{
	if (Global_14391 == 0)
	{
		if (func_145(2, Global_14382, 0))
		{
			unk_0x99BCB15F954AF579(&Global_2284, 0);
			iLocal_115 = 0;
			func_143();
			Global_14391 = 1;
			unk_0x2B859AD680983623(Global_14394, "GET_CURRENT_SELECTION");
			uLocal_99 = unk_0x501E08A637882750();
			while (!unk_0xEC0EC22A8A43C76E(uLocal_99))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_103 = unk_0xFD3CF387C866C665(uLocal_99);
			if (func_100(Global_1598))
			{
				if (iLocal_103 == 0)
				{
					if (bLocal_326)
					{
						Global_16826 = 0;
						Global_16825 = 0;
						Global_16827 = 1;
						func_86();
					}
					else
					{
						Global_16826 = 0;
						Global_16825 = 0;
						Global_16827 = 0;
						func_86();
					}
				}
				if (iLocal_103 == 1)
				{
					if (bLocal_326)
					{
						Global_16826 = 0;
						Global_16825 = 0;
						Global_16827 = 0;
						func_86();
					}
					else if (func_78(Global_1598, Global_14413))
					{
						func_77();
						iLocal_115 = 1;
					}
					else
					{
						Global_16826 = 1;
						Global_16825 = 0;
						Global_16827 = 0;
						func_86();
					}
				}
				if (iLocal_103 == 2)
				{
					if (func_78(Global_1598, Global_14413))
					{
						func_77();
						iLocal_115 = 1;
					}
					else
					{
						Global_16826 = 1;
						Global_16825 = 0;
						Global_16827 = 0;
						func_86();
					}
				}
			}
			else
			{
				if (iLocal_103 == 0)
				{
					if (bLocal_326)
					{
						Global_16826 = 0;
						Global_16825 = 0;
						Global_16827 = 1;
						func_86();
					}
					else if (func_78(Global_1598, Global_14413))
					{
						func_77();
						iLocal_115 = 1;
					}
					else
					{
						Global_16826 = 1;
						Global_16825 = 0;
						Global_16827 = 0;
						func_86();
					}
				}
				if (iLocal_103 == 1)
				{
					if (func_78(Global_1598, Global_14413))
					{
						func_77();
						iLocal_115 = 1;
					}
					else
					{
						Global_16826 = 1;
						Global_16825 = 0;
						Global_16827 = 0;
						func_86();
					}
				}
			}
		}
	}
}

void func_77()
{
	func_142(Global_14394, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (Global_14401)
	{
		func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
		func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_139(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x99BCB15F954AF579(&Global_2283, 17);
	func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_270", 0, 0, 0, 0);
	func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_271", 0, 0, 0, 0);
	func_142(Global_14394, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_140(Global_14394, "SET_HEADER", "CELL_269", 0, 0, 0, 0);
}

int func_78(int iParam0, int iParam1)
{
	if ((iParam0 >= 147 || iParam1 >= 147) || iParam0 == iParam1)
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
	
	if ((iParam0 >= 147 || iParam1 >= 147) || iParam0 == iParam1)
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
		return Global_87499[iParam0 /*2*/];
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
	if (iParam0 < 147)
	{
		return Global_101186.f_32651[iParam0 /*29*/].f_11;
	}
	if (iParam0 == 144)
	{
		return 7;
	}
	if (iParam0 == 147)
	{
		return 6;
	}
	if (iParam0 == 148)
	{
		return 6;
	}
	return 6;
}

int func_83(int iParam0)
{
	if (Global_35742 == 15)
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
	return func_85(iParam0, Global_35742);
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
	if (Global_14413.f_1 > 3)
	{
		Global_14413.f_1 = 10;
		func_99();
		if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
		{
			if (!unk_0xC774E76B3D78AD45(unk_0x06736567F820A39E()))
			{
				if (unk_0x55C761BDF0A5BB06(unk_0x06736567F820A39E(), 0))
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
		if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
		{
			func_95();
			func_142(Global_14394, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_101186.f_32651[Global_1598 /*29*/].f_24[Global_14413] == 0)
	{
		func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_1598 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
	}
	else
	{
		func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_101186.f_32651[Global_1598 /*29*/].f_3), &(Global_101186.f_32651[Global_1598 /*29*/].f_7), "CELL_211", &(Global_101186.f_32651[Global_1598 /*29*/].f_3), 0);
	}
	func_91();
	if (Global_69521)
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
		func_89(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_88(iParam0, iVar0, iParam2, 1);
	}
}

void func_88(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2473854[iParam0 /*5*/][func_59(uParam2)];
	if (iVar0 != 0)
	{
		unk_0x57B5A527FBAC251E(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 780:
			Global_1347761[func_59(uParam2)] = iParam1;
			break;
		
		case 781:
			Global_1347767[func_59(uParam2)] = iParam1;
			break;
		
		case 782:
			Global_1347773[func_59(uParam2)] = iParam1;
			break;
		
		case 783:
			Global_1347779[func_59(uParam2)] = iParam1;
			break;
		
		case 770:
			Global_1347737[func_59(uParam2)] = iParam1;
			break;
		
		case 771:
			Global_1347743[func_59(uParam2)] = iParam1;
			break;
		
		case 772:
			Global_1347749[func_59(uParam2)] = iParam1;
			break;
		
		case 773:
			Global_1347755[func_59(uParam2)] = iParam1;
			break;
		
		case 760:
			Global_1347713[func_59(uParam2)] = iParam1;
			break;
		
		case 761:
			Global_1347719[func_59(uParam2)] = iParam1;
			break;
		
		case 762:
			Global_1347725[func_59(uParam2)] = iParam1;
			break;
		
		case 763:
			Global_1347731[func_59(uParam2)] = iParam1;
			break;
		
		case 750:
			Global_1347785[func_59(uParam2)] = iParam1;
			break;
		
		case 751:
			Global_1347791[func_59(uParam2)] = iParam1;
			break;
		
		case 752:
			Global_1347797[func_59(uParam2)] = iParam1;
			break;
		
		case 753:
			Global_1347803[func_59(uParam2)] = iParam1;
			break;
		
		case 1296:
			Global_1347809[func_59(uParam2)] = iParam1;
			break;
		
		case 632:
			Global_1347815[func_59(uParam2)] = iParam1;
			break;
		
		case 1271:
			Global_1347821[func_59(uParam2)] = iParam1;
			break;
		
		case 1868:
			Global_2497579[0 /*6*/][func_59(uParam2)] = iParam1;
			break;
		
		case 2259:
			Global_2497579[1 /*6*/][func_59(uParam2)] = iParam1;
			break;
		
		case 2907:
			Global_2497579[2 /*6*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2497579[3 /*6*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3918:
			Global_2497641[func_59(uParam2)] = iParam1;
			break;
		
		case 757:
			Global_1347827[func_59(uParam2)] = iParam1;
			break;
		
		case 758:
			Global_1347833[func_59(uParam2)] = iParam1;
			break;
		
		case 759:
			Global_1347839[func_59(uParam2)] = iParam1;
			break;
		
		case 1229:
			Global_1347845[func_59(uParam2)] = iParam1;
			break;
		
		case 3031:
			Global_2497610[0 /*5*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3032:
			Global_2497610[1 /*5*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3033:
			Global_2497610[2 /*5*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3034:
			Global_2497610[3 /*5*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2497610[4 /*5*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2497646[0 /*5*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2497646[1 /*5*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2497646[2 /*5*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2497646[3 /*5*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3220:
			Global_2497646[4 /*5*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2497672[0 /*5*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3222:
			Global_2497672[1 /*5*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2497672[2 /*5*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2497672[3 /*5*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3225:
			Global_2497672[4 /*5*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3199:
			Global_2497610[5 /*5*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3205:
			Global_2497579[4 /*6*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3243:
			Global_2497698[func_59(uParam2)] = iParam1;
			break;
		
		case 3244:
			Global_2497713[func_59(uParam2)] = iParam1;
			break;
		
		case 3245:
			Global_2497703[func_59(uParam2)] = iParam1;
			break;
		
		case 3246:
			Global_2497718[func_59(uParam2)] = iParam1;
			break;
		
		case 3247:
			Global_2497708[func_59(uParam2)] = iParam1;
			break;
		
		case 3248:
			Global_2497723[func_59(uParam2)] = iParam1;
			break;
		
		case 3269:
			Global_2497728[func_59(uParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_89(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2473854[iParam0 /*5*/][func_59(uParam2)];
	if (iVar0 != 0)
	{
		unk_0x57B5A527FBAC251E(iVar0, iParam1, iParam3);
	}
}

int func_90(int iParam0)
{
	if (Global_1347694)
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
			case 2907:
			case 3036:
			case 3918:
			case 3031:
			case 3032:
			case 3033:
			case 3034:
			case 3035:
			case 3216:
			case 3217:
			case 3218:
			case 3219:
			case 3220:
			case 3221:
			case 3222:
			case 3223:
			case 3224:
			case 3225:
			case 3205:
			case 3199:
			case 3243:
			case 3244:
			case 3245:
			case 3246:
			case 3247:
			case 3248:
			case 3269:
				return 1;
				break;
			}
	}
	return 0;
}

void func_91()
{
	char cVar0[24];
	
	if (Global_14396 == 1)
	{
		return;
	}
	if (Global_14413.f_1 < 4)
	{
		return;
	}
	while (!unk_0x6A87921801178186(Global_14394))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	switch (Global_14413.f_1)
	{
		case 6:
			func_142(Global_14394, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_94(Global_2888);
			if (Global_2888 == 1)
			{
				func_142(Global_14394, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14417), -1082130432, -1082130432, -1082130432);
				Global_14393 = Global_14417;
			}
			else
			{
				func_142(Global_14394, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14418), -1082130432, -1082130432, -1082130432);
				Global_14393 = Global_14418;
			}
			if (Global_14401)
			{
				func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14573 == 0)
			{
				func_139(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x99BCB15F954AF579(&Global_2283, 17);
			}
			else if (Global_69521)
			{
				func_139(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x99BCB15F954AF579(&Global_2283, 17);
			}
			else
			{
				if (Global_14572 == 1)
				{
					if (Global_14401)
					{
						func_139(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_139(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14401)
				{
					func_139(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_139(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0xE27C8E42A97895CF(&Global_2283, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_142(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_139(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_139(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x99BCB15F954AF579(&Global_2283, 17);
			if (unk_0x7DA173D4FD42F36B(Global_2283, 20))
			{
				func_139(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14401)
			{
				func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14356)
				{
					func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14412 == 1)
			{
				func_93();
				func_142(Global_14394, "SET_THEME", unk_0xBBDA792448DB5A89(Global_101186.f_12817[Global_14413 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15725)
				{
					unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
					unk_0x7AF283DA3BA078CD(4);
					unk_0x7AF283DA3BA078CD(0);
					unk_0x7AF283DA3BA078CD(2);
					unk_0x7291E2F821FCFC04("CELL_CONDFON");
					unk_0x9C174A0D56FFB64A(&Global_15727);
					unk_0xD6360E18957BCDD3();
					func_72("CELL_300");
					func_72("CELL_217");
					func_72("CELL_217");
					unk_0xE97F1B22C5E8989F();
				}
				else if (Global_101186.f_32651[Global_1598 /*29*/].f_24[Global_14413] == 0)
				{
					func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_117[Global_1598 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_101186.f_32651[Global_1598 /*29*/].f_3), &(Global_101186.f_32651[Global_1598 /*29*/].f_7), "CELL_217", &(Global_101186.f_32651[Global_1598 /*29*/].f_3), 0);
				}
				func_142(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15712 == 4 || Global_15712 == 3)
			{
				func_142(Global_14394, "SET_THEME", unk_0xBBDA792448DB5A89(Global_101186.f_12817[Global_14413 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_93();
				if (Global_15725)
				{
					unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
					unk_0x7AF283DA3BA078CD(4);
					unk_0x7AF283DA3BA078CD(0);
					unk_0x7AF283DA3BA078CD(2);
					unk_0x7291E2F821FCFC04("CELL_CONDFON");
					unk_0x9C174A0D56FFB64A(&Global_15727);
					unk_0xD6360E18957BCDD3();
					func_72("CELL_300");
					func_72("CELL_219");
					func_72("CELL_219");
					unk_0xE97F1B22C5E8989F();
				}
				else
				{
					if (Global_15970)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (Global_101186.f_32651[Global_1598 /*29*/].f_24[Global_14413] == 0)
					{
						func_142(Global_14394, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_1598 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_142(Global_14394, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_101186.f_32651[Global_1598 /*29*/].f_3), &(Global_101186.f_32651[Global_1598 /*29*/].f_7), &cVar0, &(Global_101186.f_32651[Global_1598 /*29*/].f_3), 0);
					}
				}
				func_142(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_92();
			break;
		
		default:
			break;
	}
}

void func_92()
{
	if (unk_0x6A87921801178186(Global_14394))
	{
		if (Global_14412 == 1)
		{
			if (Global_14401)
			{
				func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15759)
			{
				func_139(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0x7DA173D4FD42F36B(Global_2283, 20))
			{
				func_139(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14401)
			{
				func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_139(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x99BCB15F954AF579(&Global_2283, 17);
		}
		else
		{
			func_139(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_139(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x99BCB15F954AF579(&Global_2283, 17);
			if (unk_0x7DA173D4FD42F36B(Global_2283, 20))
			{
				func_139(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14401)
			{
				func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14356)
				{
					func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_93()
{
	if (!unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0))
	{
		if (Global_14413 == 0)
		{
			switch (Global_101186.f_12817[Global_14413 /*20*/].f_6)
			{
				case 1:
					unk_0xDCD0EA7D3B891FC7(unk_0xE0BDAFA1A39552D6(), 0);
					break;
				
				case 2:
					unk_0xDCD0EA7D3B891FC7(unk_0xE0BDAFA1A39552D6(), 1);
					break;
				
				case 3:
					unk_0xDCD0EA7D3B891FC7(unk_0xE0BDAFA1A39552D6(), 2);
					break;
				
				case 4:
					unk_0xDCD0EA7D3B891FC7(unk_0xE0BDAFA1A39552D6(), 3);
					break;
				
				case 5:
					unk_0xDCD0EA7D3B891FC7(unk_0xE0BDAFA1A39552D6(), 4);
					break;
				
				case 6:
					unk_0xDCD0EA7D3B891FC7(unk_0xE0BDAFA1A39552D6(), 5);
					break;
				
				case 7:
					unk_0xDCD0EA7D3B891FC7(unk_0xE0BDAFA1A39552D6(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14413 == 1)
		{
			switch (Global_101186.f_12817[Global_14413 /*20*/].f_6)
			{
				case 1:
					unk_0xDCD0EA7D3B891FC7(unk_0xE0BDAFA1A39552D6(), 6);
					break;
				
				case 2:
					unk_0xDCD0EA7D3B891FC7(unk_0xE0BDAFA1A39552D6(), 0);
					break;
				
				case 3:
					unk_0xDCD0EA7D3B891FC7(unk_0xE0BDAFA1A39552D6(), 1);
					break;
				
				case 4:
					unk_0xDCD0EA7D3B891FC7(unk_0xE0BDAFA1A39552D6(), 2);
					break;
				
				case 5:
					unk_0xDCD0EA7D3B891FC7(unk_0xE0BDAFA1A39552D6(), 3);
					break;
				
				case 6:
					unk_0xDCD0EA7D3B891FC7(unk_0xE0BDAFA1A39552D6(), 4);
					break;
				
				case 7:
					unk_0xDCD0EA7D3B891FC7(unk_0xE0BDAFA1A39552D6(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14413 == 2)
		{
			switch (Global_101186.f_12817[Global_14413 /*20*/].f_6)
			{
				case 1:
					unk_0xDCD0EA7D3B891FC7(unk_0xE0BDAFA1A39552D6(), 5);
					break;
				
				case 2:
					unk_0xDCD0EA7D3B891FC7(unk_0xE0BDAFA1A39552D6(), 6);
					break;
				
				case 3:
					unk_0xDCD0EA7D3B891FC7(unk_0xE0BDAFA1A39552D6(), 1);
					break;
				
				case 4:
					unk_0xDCD0EA7D3B891FC7(unk_0xE0BDAFA1A39552D6(), 0);
					break;
				
				case 5:
					unk_0xDCD0EA7D3B891FC7(unk_0xE0BDAFA1A39552D6(), 2);
					break;
				
				case 6:
					unk_0xDCD0EA7D3B891FC7(unk_0xE0BDAFA1A39552D6(), 3);
					break;
				
				case 7:
					unk_0xDCD0EA7D3B891FC7(unk_0xE0BDAFA1A39552D6(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14413 == 3)
		{
			switch (Global_2568267)
			{
				case 1:
					unk_0xDCD0EA7D3B891FC7(unk_0xE0BDAFA1A39552D6(), 0);
					break;
				
				case 2:
					unk_0xDCD0EA7D3B891FC7(unk_0xE0BDAFA1A39552D6(), 1);
					break;
				
				case 3:
					unk_0xDCD0EA7D3B891FC7(unk_0xE0BDAFA1A39552D6(), 2);
					break;
				
				case 4:
					unk_0xDCD0EA7D3B891FC7(unk_0xE0BDAFA1A39552D6(), 3);
					break;
				
				case 5:
					unk_0xDCD0EA7D3B891FC7(unk_0xE0BDAFA1A39552D6(), 4);
					break;
				
				case 6:
					unk_0xDCD0EA7D3B891FC7(unk_0xE0BDAFA1A39552D6(), 5);
					break;
				
				case 7:
					unk_0xDCD0EA7D3B891FC7(unk_0xE0BDAFA1A39552D6(), 6);
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
	
	Global_16780 = 0;
	Global_2888 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2852[iVar0] = 0;
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
				if (iParam0 == Global_2290[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2290[iVar1 /*15*/].f_4)
					{
						if (Global_2852[iVar0] == 0)
						{
							Global_2816[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0x7DA173D4FD42F36B(Global_2284, 3))
								{
									iVar2 = 42;
									Global_14575 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14575 = 0;
								}
								unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
								unk_0x7AF283DA3BA078CD(1);
								unk_0x7AF283DA3BA078CD(iVar0);
								unk_0x7AF283DA3BA078CD(Global_2290[iVar1 /*15*/].f_10);
								unk_0x7AF283DA3BA078CD(0);
								func_72(&(Global_2290[iVar1 /*15*/]));
								unk_0x7AF283DA3BA078CD(iVar2);
								unk_0xE97F1B22C5E8989F();
							}
							if (Global_2444091)
							{
								if (iVar1 == 14)
								{
									func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2852[iVar0] = 1;
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
				if (iParam0 == Global_2290[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2290[iVar1 /*15*/].f_4)
					{
						if (Global_2852[iVar0] == 0)
						{
							Global_2816[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_101186.f_12907[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_101186.f_12907[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_101186.f_12907[iVar3 /*104*/].f_99[Global_14413] == 1)
											{
												Global_16780++;
											}
										}
									}
									iVar3++;
								}
								func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16780), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69521)
								{
									iVar4 = 0;
									iVar4 = Global_2566789;
									func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14413)
									{
										case 0:
											iVar5 = Global_36875;
											break;
										
										case 1:
											iVar5 = Global_36876;
											break;
										
										case 2:
											iVar5 = Global_36877;
											break;
										
										default:
											break;
									}
									func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar5), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
								unk_0x7AF283DA3BA078CD(1);
								unk_0x7AF283DA3BA078CD(iVar0);
								unk_0x7AF283DA3BA078CD(Global_2290[iVar1 /*15*/].f_10);
								unk_0x7AF283DA3BA078CD(0);
								func_72(&(Global_2290[iVar1 /*15*/]));
								unk_0x7AF283DA3BA078CD(Global_2289);
								unk_0xE97F1B22C5E8989F();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x7DA173D4FD42F36B(Global_2284, 6))
								{
									iVar6 = 42;
								}
								else
								{
									iVar6 = 255;
								}
								unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
								unk_0x7AF283DA3BA078CD(1);
								unk_0x7AF283DA3BA078CD(iVar0);
								unk_0x7AF283DA3BA078CD(Global_2290[iVar1 /*15*/].f_10);
								unk_0x7AF283DA3BA078CD(0);
								func_72(&(Global_2290[iVar1 /*15*/]));
								unk_0x7AF283DA3BA078CD(iVar6);
								unk_0xE97F1B22C5E8989F();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x7DA173D4FD42F36B(Global_2284, 3))
								{
									iVar7 = 42;
									Global_14575 = 1;
								}
								else
								{
									iVar7 = 255;
									Global_14575 = 0;
								}
								unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
								unk_0x7AF283DA3BA078CD(1);
								unk_0x7AF283DA3BA078CD(iVar0);
								unk_0x7AF283DA3BA078CD(Global_2290[iVar1 /*15*/].f_10);
								unk_0x7AF283DA3BA078CD(0);
								func_72(&(Global_2290[iVar1 /*15*/]));
								unk_0x7AF283DA3BA078CD(iVar7);
								unk_0xE97F1B22C5E8989F();
							}
							else if (iVar1 == 8)
							{
								unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
								unk_0x7AF283DA3BA078CD(1);
								unk_0x7AF283DA3BA078CD(iVar0);
								unk_0x7AF283DA3BA078CD(Global_2290[iVar1 /*15*/].f_10);
								unk_0x7AF283DA3BA078CD(0);
								func_72(&(Global_2290[iVar1 /*15*/]));
								unk_0x7AF283DA3BA078CD(42);
								unk_0xE97F1B22C5E8989F();
							}
							else if ((iVar1 == 23 && unk_0x2F6869889D97DFED(&(Global_2290[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x7DA173D4FD42F36B(Global_2284, 6))
							{
								unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
								unk_0x7AF283DA3BA078CD(1);
								unk_0x7AF283DA3BA078CD(iVar0);
								unk_0x7AF283DA3BA078CD(Global_2290[iVar1 /*15*/].f_10);
								unk_0x7AF283DA3BA078CD(0);
								func_72(&(Global_2290[iVar1 /*15*/]));
								unk_0x7AF283DA3BA078CD(42);
								unk_0xE97F1B22C5E8989F();
							}
							else if (Global_2290[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar8 = 0;
								iVar8 = Global_1609456.f_1;
								func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar8), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2852[iVar0] = 1;
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
	if (Global_3088[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3088[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3088[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3088[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3088[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3088[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0x99BCB15F954AF579(&Global_2283, 25);
	unk_0xE27C8E42A97895CF(&Global_2284, 11);
}

int func_96()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0))
	{
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			if (Global_14356 == 0)
			{
				if (Global_1598 != 128)
				{
					if (!unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
					{
						if (Global_15712 != 2)
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
		if (unk_0x55C761BDF0A5BB06(unk_0x06736567F820A39E(), 0))
		{
			return 0;
		}
		if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
		{
			if (!unk_0x8E3F9718BE8F9484())
			{
				if (unk_0xC774E76B3D78AD45(unk_0x34E1EF1E8BCD1BFC(unk_0x06736567F820A39E(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x8B69AEF6B3EE75BF(unk_0x06736567F820A39E()) || unk_0x0B755A8FB5904621(unk_0x06736567F820A39E())) || unk_0x57EEE01FD8B2618E(unk_0xE0BDAFA1A39552D6())) || unk_0x536CCB7E70758D8C(unk_0x06736567F820A39E()))
		{
			return 0;
		}
		if (Global_100234)
		{
			return 0;
		}
	}
	if (Global_69521)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x132F78245A5DBB0A();
	iVar1 = unk_0x20EC647BB13B981D(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0x8E3F9718BE8F9484()))
	{
		iVar2 = 1;
		if (!unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0))
		{
			if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
			{
				uVar3 = unk_0x34E1EF1E8BCD1BFC(unk_0x06736567F820A39E(), 0);
				if ((((((((unk_0x4040DD4BD789089F(unk_0x79469DA5833EACA8(uVar3)) || unk_0x6AC2CA535DF8275D(unk_0x79469DA5833EACA8(uVar3))) || unk_0xA5EFDF72A34C726E(unk_0x79469DA5833EACA8(uVar3))) || unk_0x79469DA5833EACA8(uVar3) == joaat("seashark")) || unk_0x79469DA5833EACA8(uVar3) == joaat("seashark2")) || unk_0x79469DA5833EACA8(uVar3) == joaat("rhino")) || unk_0x79469DA5833EACA8(uVar3) == joaat("submersible")) || unk_0x79469DA5833EACA8(uVar3) == joaat("submersible2")) || unk_0x79469DA5833EACA8(uVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_2568269 || iVar2 == 1)
	{
		if (unk_0x98934607F8D0FB03(joaat("apptrackify")) > 0 || Global_101186.f_12817.f_89)
		{
			if (unk_0x98934607F8D0FB03(joaat("michael2")) > 0)
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
	if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
		if (func_98() && unk_0x55C761BDF0A5BB06(unk_0x06736567F820A39E(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_69521)
	{
		if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()) && iVar1 == 0)
		{
			iVar2 = unk_0x8634500B8C17FF9F(unk_0x06736567F820A39E(), 0);
			if (Global_69521)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || unk_0x94ECEF15011F1A34(unk_0x06736567F820A39E()))
				{
					iVar0 = 1;
				}
			}
			else if (unk_0x94ECEF15011F1A34(unk_0x06736567F820A39E()))
			{
				iVar0 = 1;
			}
			if (!Global_14356)
			{
				if (Global_1598 != 128)
				{
					if (iVar0 == 0)
					{
						if (!unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0))
						{
							if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
							{
							}
							else
							{
								if (Global_69521)
								{
									unk_0x6553935614875699(unk_0x06736567F820A39E(), 244, 0);
									unk_0x6553935614875699(unk_0x06736567F820A39E(), 243, 0);
									unk_0x6553935614875699(unk_0x06736567F820A39E(), 242, 0);
								}
								unk_0xE27C8E42A97895CF(&Global_2283, 11);
								unk_0x3446D2517750B8F3(unk_0x06736567F820A39E(), 1, 1);
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
	
	uVar0 = unk_0x132F78245A5DBB0A();
	iVar1 = unk_0x20EC647BB13B981D(uVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_99()
{
	struct<2> Var0;
	
	unk_0x3919EC2F8BB0A522(&Var0);
	if (Global_14366[Global_14358 /*3*/].f_1 == Var0.f_1)
	{
	}
	else
	{
		Global_14353 = 1;
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
	while (iVar0 < Global_101186.f_6454.f_650)
	{
		if (Global_101186.f_6454.f_199[iVar0 /*15*/].f_6 == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101186.f_6454.f_136)
	{
		if (Global_101186.f_6454[iVar0 /*15*/].f_6 == iParam0)
		{
			if (unk_0x7DA173D4FD42F36B(Global_101186.f_6454[iVar0 /*15*/].f_1, 7))
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
		iVar1 = Global_82395[iVar0 /*5*/];
		if (iVar1 != -1)
		{
			iVar2 = -1;
			iVar2 = Global_69790.f_109[Global_82395[iVar0 /*5*/] /*4*/];
			if (iVar2 != -1)
			{
				if (func_102(Global_82431[iVar2 /*34*/].f_12, iParam0))
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
			return unk_0x7DA173D4FD42F36B(uParam0, iParam1);
		
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
	if (Global_14391 == 0)
	{
		if (func_145(2, Global_14382, 0))
		{
			unk_0x99BCB15F954AF579(&Global_2284, 0);
			func_143();
			Global_14391 = 1;
			unk_0x2B859AD680983623(Global_14394, "GET_CURRENT_SELECTION");
			uLocal_99 = unk_0x501E08A637882750();
			while (!unk_0xEC0EC22A8A43C76E(uLocal_99))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_103 = unk_0xFD3CF387C866C665(uLocal_99);
			if (iLocal_103 == 0)
			{
				Global_16821[Global_14413] = 1;
				iLocal_114 = 0;
				Global_16826 = 0;
				Global_16825 = 1;
				Global_16827 = 0;
				func_86();
			}
			else
			{
				iLocal_115 = 0;
				func_120();
			}
		}
	}
}

void func_106(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_99828 && iParam1)
	{
		if (func_110(sParam0) && !unk_0xB84210B019CE5C87())
		{
			unk_0x310F6B4E168A8F5D(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_101186.f_25011.f_145)
	{
		if (unk_0x2F6869889D97DFED(sParam0, &(Global_101186.f_25011[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_101186.f_25011.f_145 - 2))
			{
				func_109(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_108((Global_101186.f_25011.f_145 - 1));
			Global_101186.f_25011.f_145 = (Global_101186.f_25011.f_145 - 1);
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
		Global_101186.f_25011.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101186.f_25011.f_145)
	{
		if (unk_0x7DA173D4FD42F36B(Global_101186.f_25011[iVar0 /*16*/].f_11, 0))
		{
			if (Global_101186.f_25011[iVar0 /*16*/].f_12 > Global_101186.f_25011.f_146[0])
			{
				Global_101186.f_25011.f_146[0] = Global_101186.f_25011[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x7DA173D4FD42F36B(Global_101186.f_25011[iVar0 /*16*/].f_11, 1))
		{
			if (Global_101186.f_25011[iVar0 /*16*/].f_12 > Global_101186.f_25011.f_146[1])
			{
				Global_101186.f_25011.f_146[1] = Global_101186.f_25011[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x7DA173D4FD42F36B(Global_101186.f_25011[iVar0 /*16*/].f_11, 2))
		{
			if (Global_101186.f_25011[iVar0 /*16*/].f_12 > Global_101186.f_25011.f_146[2])
			{
				Global_101186.f_25011.f_146[2] = Global_101186.f_25011[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_108(int iParam0)
{
	StringCopy(&(Global_101186.f_25011[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_101186.f_25011[iParam0 /*16*/].f_4), "", 16);
	Global_101186.f_25011[iParam0 /*16*/].f_8 = 0;
	Global_101186.f_25011[iParam0 /*16*/].f_9 = 0;
	Global_101186.f_25011[iParam0 /*16*/].f_11 = 0;
	Global_101186.f_25011[iParam0 /*16*/].f_10 = -1;
	Global_101186.f_25011[iParam0 /*16*/].f_12 = 0;
	Global_101186.f_25011[iParam0 /*16*/].f_13 = 0;
	Global_101186.f_25011[iParam0 /*16*/].f_14 = 0;
	Global_101186.f_25011[iParam0 /*16*/].f_15 = 0;
}

void func_109(int iParam0, int iParam1)
{
	Global_101186.f_25011[iParam0 /*16*/] = { Global_101186.f_25011[iParam1 /*16*/] };
	Global_101186.f_25011[iParam0 /*16*/].f_4 = { Global_101186.f_25011[iParam1 /*16*/].f_4 };
	Global_101186.f_25011[iParam0 /*16*/].f_8 = Global_101186.f_25011[iParam1 /*16*/].f_8;
	Global_101186.f_25011[iParam0 /*16*/].f_10 = Global_101186.f_25011[iParam1 /*16*/].f_10;
	Global_101186.f_25011[iParam0 /*16*/].f_9 = Global_101186.f_25011[iParam1 /*16*/].f_9;
	Global_101186.f_25011[iParam0 /*16*/].f_11 = Global_101186.f_25011[iParam1 /*16*/].f_11;
	Global_101186.f_25011[iParam0 /*16*/].f_12 = Global_101186.f_25011[iParam1 /*16*/].f_12;
	Global_101186.f_25011[iParam0 /*16*/].f_13 = Global_101186.f_25011[iParam1 /*16*/].f_13;
	Global_101186.f_25011[iParam0 /*16*/].f_14 = Global_101186.f_25011[iParam1 /*16*/].f_14;
	Global_101186.f_25011[iParam0 /*16*/].f_15 = Global_101186.f_25011[iParam1 /*16*/].f_15;
}

var func_110(var uParam0)
{
	unk_0xC11856C04AAC5813(uParam0);
	return unk_0xBA2B1F42B35E6698(0);
}

void func_111(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_112(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_112(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x2F6869889D97DFED(sParam0, ""))
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
	while (iVar0 < Global_101186.f_25011.f_145)
	{
		if (unk_0x2F6869889D97DFED(&(Global_101186.f_25011[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_101186.f_25011.f_145 < 9)
	{
		StringCopy(&(Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/].f_4), sParam1, 16);
		Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/].f_8 = (unk_0x1ADBAAC322D61F73() + iParam3);
		Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/].f_9 = iParam5;
		Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/].f_11 = iParam6;
		Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/].f_12 = uParam2;
		Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/].f_13 = iParam7;
		Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/].f_14 = iParam8;
		Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/].f_10 = ((unk_0x1ADBAAC322D61F73() + iParam3) + iParam4);
		}
		else
		{
			Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/].f_10 = -1;
		}
		Global_101186.f_25011.f_145++;
		func_107();
	}
}

int func_113(char* sParam0)
{
	if (unk_0x2F6869889D97DFED(sParam0, &Global_99831))
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
	while (iVar0 < Global_101186.f_25011.f_145)
	{
		if (unk_0x2F6869889D97DFED(sParam0, &(Global_101186.f_25011[iVar0 /*16*/])))
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
	if ((iParam0 >= 147 || iParam1 >= 147) || iParam0 == iParam1)
	{
		return 0;
	}
	if ((Global_87490 != -1 && unk_0x7DA173D4FD42F36B(Global_82431[Global_87490 /*34*/].f_15, 15)) && unk_0x7DA173D4FD42F36B(Global_87491, iParam1))
	{
		if (Global_87489 != 5 || func_119() == Global_87490)
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
	return unk_0x7DA173D4FD42F36B(Global_87498, iParam0);
}

int func_119()
{
	return Global_69783;
}

void func_120()
{
	unk_0xC1B1E9A034A63A62(0);
	if (Global_14413.f_1 > 3)
	{
		Global_14413.f_1 = 8;
	}
	if (Global_14401)
	{
		func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
		func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_139(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x99BCB15F954AF579(&Global_2283, 17);
	iLocal_114 = 1;
	func_142(Global_14394, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (func_100(Global_1598))
	{
		if (bLocal_326)
		{
			func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(0), -1f, -1f, &(Global_2121[iLocal_328 /*16*/].f_8), 0, 0, 0, 0);
			func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_208", 0, 0, 0, 0);
			if (bLocal_327)
			{
				if (func_121(Global_1598, Global_14413))
				{
					func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_209", 0, 0, 0, 0);
				}
				if (func_78(Global_1598, Global_14413))
				{
					func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_222", 0, 0, 0, 0);
				}
			}
		}
		else
		{
			func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_208", 0, 0, 0, 0);
			if (bLocal_327)
			{
				if (func_121(Global_1598, Global_14413))
				{
					func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_209", 0, 0, 0, 0);
				}
				if (func_78(Global_1598, Global_14413))
				{
					func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_222", 0, 0, 0, 0);
				}
			}
		}
	}
	else if (bLocal_326)
	{
		func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(0), -1f, -1f, &(Global_2121[iLocal_328 /*16*/].f_8), 0, 0, 0, 0);
		if (bLocal_327)
		{
			if (func_121(Global_1598, Global_14413))
			{
				func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_209", 0, 0, 0, 0);
			}
			if (func_78(Global_1598, Global_14413))
			{
				func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_222", 0, 0, 0, 0);
			}
		}
	}
	else if (bLocal_327)
	{
		if (func_121(Global_1598, Global_14413))
		{
			func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_209", 0, 0, 0, 0);
		}
		if (func_78(Global_1598, Global_14413))
		{
			func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_222", 0, 0, 0, 0);
		}
	}
	func_142(Global_14394, "DISPLAY_VIEW", 18f, unk_0xBBDA792448DB5A89(iLocal_100), -1082130432, -1082130432, -1082130432);
	func_140(Global_14394, "SET_HEADER", &(Global_101186.f_32651[Global_1598 /*29*/].f_3), 0, 0, 0, 0);
}

int func_121(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((iParam0 >= 147 || iParam1 >= 147) || iParam0 == iParam1)
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
	
	if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
		unk_0xC80D2B3478FFF428(0, 22, 1);
	}
	if (func_145(2, Global_14382, 0))
	{
		func_143();
		Global_14391 = 1;
		unk_0x2B859AD680983623(Global_14394, "GET_CURRENT_SELECTION");
		uLocal_99 = unk_0x501E08A637882750();
		while (!unk_0xEC0EC22A8A43C76E(uLocal_99))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		iVar0 = unk_0xFD3CF387C866C665(uLocal_99);
		iLocal_105 = Global_3074[iVar0];
		uLocal_107[0] = unk_0x71DD68B05C4C8FA5(&(Global_2991[iLocal_105 /*5*/]));
		if (unk_0x2F6869889D97DFED(uLocal_107[0], "*"))
		{
			cLocal_109 = { Global_3057[Global_14413 /*4*/] };
			iLocal_106 = unk_0x1AF431622CC415A8(&cLocal_109);
		}
		else if (unk_0x1AF431622CC415A8(&cLocal_109) < 14)
		{
			StringConCat(&cLocal_109, uLocal_107[0], 16);
			iLocal_106++;
		}
		unk_0x2B859AD680983623(Global_14394, "SET_HEADER");
		unk_0x7291E2F821FCFC04("STRING");
		unk_0x4226D56D57A16C9F(&cLocal_109, -1);
		unk_0xD6360E18957BCDD3();
		unk_0xE97F1B22C5E8989F();
	}
	if (func_145(2, 178, 0))
	{
		func_75();
		Global_14391 = 1;
		if (unk_0x1AF431622CC415A8(&cLocal_109) > 0)
		{
			StringCopy(&cLocal_109, unk_0xBD6BA15744C7C620(&cLocal_109, 0, (iLocal_106 - 1)), 16);
			iLocal_106 = (iLocal_106 - 1);
		}
		unk_0x2B859AD680983623(Global_14394, "SET_HEADER");
		unk_0x7291E2F821FCFC04("STRING");
		unk_0x4226D56D57A16C9F(&cLocal_109, -1);
		unk_0xD6360E18957BCDD3();
		unk_0xE97F1B22C5E8989F();
	}
	if (func_145(2, Global_14385, 0))
	{
		if (!func_128())
		{
			func_143();
			Global_3057[Global_14413 /*4*/] = { cLocal_109 };
			Global_1598 = 144;
			iLocal_306 = 0;
			if (Global_14413.f_1 > 3)
			{
				Global_14413.f_1 = 10;
				func_99();
				if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
				{
					if (!unk_0xC774E76B3D78AD45(unk_0x06736567F820A39E()))
					{
						if (unk_0x55C761BDF0A5BB06(unk_0x06736567F820A39E(), 0))
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
			iLocal_119 = 0;
			while (iVar1 < 147)
			{
				if (iVar1 != 146)
				{
					sVar2 = unk_0x71DD68B05C4C8FA5(&(Global_117[iVar1 /*10*/].f_4));
					if (unk_0x2F6869889D97DFED(sVar2, &cLocal_109))
					{
						if ((Global_101186.f_32651[iVar1 /*29*/].f_12[Global_14413] == 1 || Global_101186.f_32651[iVar1 /*29*/].f_12[Global_14413] == 2) || unk_0x2F6869889D97DFED(sVar2, unk_0x71DD68B05C4C8FA5(&(Global_117[130 /*10*/].f_4))))
						{
							Global_1598 = iVar1;
						}
						else
						{
							iLocal_119 = 1;
						}
					}
				}
				iVar1++;
			}
			if ((Global_1598 == 144 && iLocal_306 == 0) && iLocal_119 == 0)
			{
				unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
				unk_0x7AF283DA3BA078CD(4);
				unk_0x7AF283DA3BA078CD(0);
				unk_0x7AF283DA3BA078CD(3);
				unk_0x7291E2F821FCFC04("STRING");
				unk_0x4226D56D57A16C9F(&cLocal_109, -1);
				unk_0xD6360E18957BCDD3();
				func_72("CELL_300");
				func_72("CELL_211");
				func_72("CELL_195");
				unk_0xE97F1B22C5E8989F();
				func_142(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
				iLocal_306 = 0;
				iVar3 = 0;
				while (iVar3 < 37)
				{
					sVar4 = unk_0x71DD68B05C4C8FA5(&(Global_1602[iVar3 /*14*/]));
					if (unk_0x2F6869889D97DFED(sVar4, &cLocal_109))
					{
						iLocal_306 = 1;
						cLocal_307 = { Global_1602[iVar3 /*14*/].f_4 };
						Local_311 = { Global_1602[iVar3 /*14*/].f_8 };
					}
					iVar3++;
				}
				if (iLocal_306 == 0)
				{
					iLocal_113 = unk_0x1AF431622CC415A8(&cLocal_109);
					if (iLocal_113 > 6)
					{
						StringCopy(&(uLocal_317[0]), unk_0xBD6BA15744C7C620(&cLocal_109, 0, 1), 4);
						StringCopy(&(uLocal_317[1]), unk_0xBD6BA15744C7C620(&cLocal_109, 1, 2), 4);
						StringCopy(&(uLocal_317[2]), unk_0xBD6BA15744C7C620(&cLocal_109, 2, 3), 4);
						StringCopy(&(uLocal_317[3]), unk_0xBD6BA15744C7C620(&cLocal_109, 3, 4), 4);
						StringCopy(&(uLocal_317[4]), unk_0xBD6BA15744C7C620(&cLocal_109, 4, 5), 4);
						StringCopy(&(uLocal_317[5]), unk_0xBD6BA15744C7C620(&cLocal_109, 5, 6), 4);
						if (((unk_0x2F6869889D97DFED(&(uLocal_317[0]), "1") && unk_0x2F6869889D97DFED(&(uLocal_317[1]), "9")) && unk_0x2F6869889D97DFED(&(uLocal_317[2]), "9")) && unk_0x2F6869889D97DFED(&(uLocal_317[3]), "9"))
						{
							iVar5 = func_127(&(uLocal_317[4]));
							iVar6 = func_127(&(uLocal_317[5]));
							func_126(iVar5, iVar6);
							iLocal_306 = 1;
						}
						if (iLocal_306 == 0)
						{
							if (iLocal_113 == 10 || iLocal_113 == 7)
							{
								if (iLocal_113 == 10)
								{
									StringCopy(&(uLocal_317[0]), unk_0xBD6BA15744C7C620(&cLocal_109, 3, 4), 4);
									StringCopy(&(uLocal_317[1]), unk_0xBD6BA15744C7C620(&cLocal_109, 4, 5), 4);
									StringCopy(&(uLocal_317[2]), unk_0xBD6BA15744C7C620(&cLocal_109, 5, 6), 4);
									StringCopy(&(uLocal_317[3]), unk_0xBD6BA15744C7C620(&cLocal_109, 6, 7), 4);
									StringCopy(&(uLocal_317[4]), unk_0xBD6BA15744C7C620(&cLocal_109, 7, 8), 4);
									StringCopy(&(uLocal_317[5]), unk_0xBD6BA15744C7C620(&cLocal_109, 8, 9), 4);
									StringCopy(&(uLocal_317[6]), unk_0xBD6BA15744C7C620(&cLocal_109, 9, 10), 4);
								}
								else
								{
									StringCopy(&(uLocal_317[0]), unk_0xBD6BA15744C7C620(&cLocal_109, 0, 1), 4);
									StringCopy(&(uLocal_317[1]), unk_0xBD6BA15744C7C620(&cLocal_109, 1, 2), 4);
									StringCopy(&(uLocal_317[2]), unk_0xBD6BA15744C7C620(&cLocal_109, 2, 3), 4);
									StringCopy(&(uLocal_317[3]), unk_0xBD6BA15744C7C620(&cLocal_109, 3, 4), 4);
									StringCopy(&(uLocal_317[4]), unk_0xBD6BA15744C7C620(&cLocal_109, 4, 5), 4);
									StringCopy(&(uLocal_317[5]), unk_0xBD6BA15744C7C620(&cLocal_109, 5, 6), 4);
									StringCopy(&(uLocal_317[6]), unk_0xBD6BA15744C7C620(&cLocal_109, 6, 7), 4);
								}
								if ((((unk_0x2F6869889D97DFED(&(uLocal_317[0]), "5") && unk_0x2F6869889D97DFED(&(uLocal_317[1]), "5")) && unk_0x2F6869889D97DFED(&(uLocal_317[2]), "5")) && unk_0x2F6869889D97DFED(&(uLocal_317[3]), "0")) && unk_0x2F6869889D97DFED(&(uLocal_317[4]), "1"))
								{
									iVar7 = func_127(&(uLocal_317[5]));
									iVar8 = func_127(&(uLocal_317[6]));
									func_126(iVar7, iVar8);
									iLocal_306 = 1;
								}
							}
						}
					}
				}
			}
			else
			{
				if (Global_101186.f_32651[Global_1598 /*29*/].f_12[Global_14413] == 2 || Global_1598 == 130)
				{
					Global_101186.f_32651[Global_1598 /*29*/].f_24[Global_14413] = 1;
					if (Global_1598 == 130)
					{
						if (!Global_101186.f_32651[130 /*29*/].f_12[0] == 1)
						{
							func_124(130, 4, 1);
							func_124(130, 3, 0);
						}
						if (Global_69521)
						{
							if (!func_123(130, 3))
							{
								func_124(130, 3, 1);
							}
						}
					}
				}
				if (Global_101186.f_32651[Global_1598 /*29*/].f_24[Global_14413] == 0)
				{
					func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_1598 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_101186.f_32651[Global_1598 /*29*/].f_3), &(Global_101186.f_32651[Global_1598 /*29*/].f_7), "CELL_211", &(Global_101186.f_32651[Global_1598 /*29*/].f_3), 0);
				}
			}
			func_91();
		}
	}
}

int func_123(int iParam0, int iParam1)
{
	if (Global_101186.f_32651[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

void func_124(int iParam0, int iParam1, bool bParam2)
{
	Global_2969 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 138)
	{
		func_16();
		if (iParam1 == 4)
		{
			Global_101186.f_32651[iParam0 /*29*/].f_12[0] = 1;
			Global_101186.f_32651[iParam0 /*29*/].f_12[1] = 1;
			Global_101186.f_32651[iParam0 /*29*/].f_12[2] = 1;
			Global_101186.f_32651[iParam0 /*29*/].f_24[0] = 1;
			Global_101186.f_32651[iParam0 /*29*/].f_24[1] = 1;
			Global_101186.f_32651[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_101186.f_32651[iParam0 /*29*/].f_12[iParam1] == 1 && Global_101186.f_32651[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_101186.f_32651[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_101186.f_32651[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_69521)
			{
				if (iParam1 != 4)
				{
					if (Global_14413 != iParam1)
					{
						Global_2942[iParam1 /*4*/] = { Global_101186.f_32651[iParam0 /*29*/].f_3 };
						Global_2959[iParam1] = 1;
						Global_2964[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14413)
					{
					}
					else
					{
						Global_2893[1 /*6*/] = { Global_101186.f_32651[iParam0 /*29*/].f_3 };
						Global_2893[1 /*6*/].f_5 = iParam1;
						func_125();
					}
				}
				else
				{
					Global_2893[1 /*6*/] = { Global_101186.f_32651[iParam0 /*29*/].f_3 };
					Global_2893[1 /*6*/].f_5 = iParam1;
					func_125();
				}
			}
			else
			{
				Global_2893[1 /*6*/] = { Global_101186.f_32651[iParam0 /*29*/].f_3 };
				Global_2893[1 /*6*/].f_5 = iParam1;
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
	
	StringCopy(&cVar0, unk_0x71DD68B05C4C8FA5(&(Global_101186.f_32651[Global_2969 /*29*/].f_7)), 64);
	if (Global_2988 == 0)
	{
		unk_0x999E5F6D1B49D87B("");
		StringCopy(&cVar16, unk_0x71DD68B05C4C8FA5(&(Global_2893[1 /*6*/])), 64);
		sVar32 = unk_0x71DD68B05C4C8FA5("CELL_253");
		unk_0x850E49B6757F562E(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0x999E5F6D1B49D87B("CELL_255");
		unk_0x4C5D86B5B659C953(&(Global_2893[1 /*6*/]));
		unk_0x850E49B6757F562E(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0x99BCB15F954AF579(&Global_2283, 0);
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
			StringCopy(&cLocal_307, "ANS_RAN1", 16);
			StringCopy(&Local_311, "ANS_M_USA1", 24);
			break;
		
		case 8:
			StringCopy(&cLocal_307, "ANS_RAN2", 16);
			StringCopy(&Local_311, "ANS_F_USA1", 24);
			break;
		
		case 9:
			StringCopy(&cLocal_307, "ANS_RAN3", 16);
			StringCopy(&Local_311, "ANS_M_ENG1", 24);
			break;
		
		case 10:
			StringCopy(&cLocal_307, "ANS_RAN4", 16);
			StringCopy(&Local_311, "ANS_M_USA2", 24);
			break;
		
		case 11:
			StringCopy(&cLocal_307, "ANS_RAN5", 16);
			StringCopy(&Local_311, "ANS_M_ASIAN", 24);
			break;
		
		case 12:
			StringCopy(&cLocal_307, "ANS_RAN6", 16);
			StringCopy(&Local_311, "ANS_F_USA2", 24);
			break;
		
		case 13:
			StringCopy(&cLocal_307, "ANS_RAN7", 16);
			StringCopy(&Local_311, "ANSWER_FX", 24);
			break;
		
		case 14:
			StringCopy(&cLocal_307, "ANS_RAN8", 16);
			StringCopy(&Local_311, "ANSWER_FX", 24);
			break;
		
		case 15:
			StringCopy(&cLocal_307, "ANS_RAN9", 16);
			StringCopy(&Local_311, "ANSWER_FX", 24);
			break;
		
		case 16:
			StringCopy(&cLocal_307, "ANS_RAN10", 16);
			StringCopy(&Local_311, "ANSWER_FX", 24);
			break;
		
		case 17:
			StringCopy(&cLocal_307, "ANS_RAN1", 16);
			StringCopy(&Local_311, "ANS_M_USA1", 24);
			break;
		
		case 18:
			StringCopy(&cLocal_307, "ANS_RAN2", 16);
			StringCopy(&Local_311, "ANS_F_USA1", 24);
			break;
		
		case 19:
			StringCopy(&cLocal_307, "ANS_RAN3", 16);
			StringCopy(&Local_311, "ANS_M_ENG1", 24);
			break;
		
		case 20:
			StringCopy(&cLocal_307, "ANS_RAN4", 16);
			StringCopy(&Local_311, "ANS_M_USA2", 24);
			break;
		
		case 21:
			StringCopy(&cLocal_307, "ANS_RAN5", 16);
			StringCopy(&Local_311, "ANS_M_ASIAN", 24);
			break;
		
		case 22:
			StringCopy(&cLocal_307, "ANS_RAN6", 16);
			StringCopy(&Local_311, "ANS_F_USA2", 24);
			break;
		
		case 23:
			StringCopy(&cLocal_307, "ANS_RAN7", 16);
			StringCopy(&Local_311, "ANSWER_FX", 24);
			break;
		
		case 24:
			StringCopy(&cLocal_307, "ANS_RAN8", 16);
			StringCopy(&Local_311, "ANSWER_FX", 24);
			break;
		
		case 25:
			StringCopy(&cLocal_307, "ANS_RAN9", 16);
			StringCopy(&Local_311, "ANSWER_FX", 24);
			break;
		
		default:
			StringCopy(&cLocal_307, "ANS_RAN8", 16);
			StringCopy(&Local_311, "ANSWER_FX", 24);
			break;
	}
}

int func_127(char* sParam0)
{
	if (unk_0x2F6869889D97DFED(sParam0, "0"))
	{
		return 0;
	}
	if (unk_0x2F6869889D97DFED(sParam0, "1"))
	{
		return 1;
	}
	if (unk_0x2F6869889D97DFED(sParam0, "2"))
	{
		return 2;
	}
	if (unk_0x2F6869889D97DFED(sParam0, "3"))
	{
		return 3;
	}
	if (unk_0x2F6869889D97DFED(sParam0, "4"))
	{
		return 4;
	}
	if (unk_0x2F6869889D97DFED(sParam0, "5"))
	{
		return 5;
	}
	if (unk_0x2F6869889D97DFED(sParam0, "6"))
	{
		return 6;
	}
	if (unk_0x2F6869889D97DFED(sParam0, "7"))
	{
		return 7;
	}
	if (unk_0x2F6869889D97DFED(sParam0, "8"))
	{
		return 8;
	}
	if (unk_0x2F6869889D97DFED(sParam0, "9"))
	{
		return 9;
	}
	if (unk_0x2F6869889D97DFED(sParam0, "A"))
	{
		return 10;
	}
	if (unk_0x2F6869889D97DFED(sParam0, "B"))
	{
		return 11;
	}
	if (unk_0x2F6869889D97DFED(sParam0, "C"))
	{
		return 12;
	}
	if (unk_0x2F6869889D97DFED(sParam0, "D"))
	{
		return 13;
	}
	if (unk_0x2F6869889D97DFED(sParam0, "E"))
	{
		return 14;
	}
	if (unk_0x2F6869889D97DFED(sParam0, "F"))
	{
		return 15;
	}
	if (unk_0x2F6869889D97DFED(sParam0, "G"))
	{
		return 16;
	}
	if (unk_0x2F6869889D97DFED(sParam0, "H"))
	{
		return 17;
	}
	if (unk_0x2F6869889D97DFED(sParam0, "I"))
	{
		return 18;
	}
	if (unk_0x2F6869889D97DFED(sParam0, "J"))
	{
		return 19;
	}
	if (unk_0x2F6869889D97DFED(sParam0, "K"))
	{
		return 20;
	}
	if (unk_0x2F6869889D97DFED(sParam0, "L"))
	{
		return 21;
	}
	if (unk_0x2F6869889D97DFED(sParam0, "M"))
	{
		return 22;
	}
	if (unk_0x2F6869889D97DFED(sParam0, "N"))
	{
		return 23;
	}
	if (unk_0x2F6869889D97DFED(sParam0, "O"))
	{
		return 24;
	}
	if (unk_0x2F6869889D97DFED(sParam0, "P"))
	{
		return 25;
	}
	if (unk_0x2F6869889D97DFED(sParam0, "Q"))
	{
		return 26;
	}
	if (unk_0x2F6869889D97DFED(sParam0, "R"))
	{
		return 27;
	}
	if (unk_0x2F6869889D97DFED(sParam0, "S"))
	{
		return 28;
	}
	if (unk_0x2F6869889D97DFED(sParam0, "T"))
	{
		return 29;
	}
	if (unk_0x2F6869889D97DFED(sParam0, "U"))
	{
		return 30;
	}
	if (unk_0x2F6869889D97DFED(sParam0, "V"))
	{
		return 31;
	}
	if (unk_0x2F6869889D97DFED(sParam0, "W"))
	{
		return 32;
	}
	if (unk_0x2F6869889D97DFED(sParam0, "X"))
	{
		return 33;
	}
	if (unk_0x2F6869889D97DFED(sParam0, "Y"))
	{
		return 34;
	}
	if (unk_0x2F6869889D97DFED(sParam0, "Z"))
	{
		return 35;
	}
	if (unk_0x2F6869889D97DFED(sParam0, "z"))
	{
		return -1;
	}
	return -1;
}

int func_128()
{
	if (Global_69521)
	{
		return 0;
	}
	if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
	{
		if (unk_0x57EEE01FD8B2618E(unk_0xE0BDAFA1A39552D6()))
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
	if (Global_14392)
	{
		if (unk_0x83666F9FB8FEBD4B() > 50)
		{
			Global_14392 = 0;
		}
	}
	if (unk_0x4A1EAF6BB2C862EA(2))
	{
		if (unk_0xD471C64C0898A7BF(2, 180))
		{
			switch (Global_14393)
			{
				case 0:
					func_137();
					Global_14393 = 1;
					break;
				
				case 1:
					func_137();
					Global_14393 = 2;
					break;
				
				case 2:
					func_137();
					func_135();
					Global_14393 = 3;
					break;
				
				case 3:
					func_137();
					Global_14393 = 4;
					break;
				
				case 4:
					func_137();
					Global_14393 = 5;
					break;
				
				case 5:
					func_137();
					func_135();
					Global_14393 = 6;
					break;
				
				case 6:
					func_137();
					Global_14393 = 7;
					break;
				
				case 7:
					func_137();
					Global_14393 = 8;
					break;
				
				case 8:
					func_137();
					func_135();
					Global_14393 = 9;
					break;
				
				case 9:
					func_137();
					Global_14393 = 10;
					break;
				
				case 10:
					func_137();
					Global_14393 = 11;
					break;
				
				case 11:
					func_137();
					func_135();
					Global_14393 = 0;
					break;
				}
		}
		if (unk_0xD471C64C0898A7BF(2, 181))
		{
			switch (Global_14393)
			{
				case 0:
					func_133();
					func_130();
					Global_14393 = 11;
					break;
				
				case 1:
					func_133();
					Global_14393 = 0;
					break;
				
				case 2:
					func_133();
					Global_14393 = 1;
					break;
				
				case 3:
					func_133();
					func_130();
					Global_14393 = 2;
					break;
				
				case 4:
					func_133();
					Global_14393 = 3;
					break;
				
				case 5:
					func_133();
					Global_14393 = 4;
					break;
				
				case 6:
					func_133();
					func_130();
					Global_14393 = 5;
					break;
				
				case 7:
					func_133();
					Global_14393 = 6;
					break;
				
				case 8:
					func_133();
					Global_14393 = 7;
					break;
				
				case 9:
					func_133();
					func_130();
					Global_14393 = 8;
					break;
				
				case 10:
					func_133();
					Global_14393 = 9;
					break;
				
				case 11:
					func_133();
					Global_14393 = 10;
					break;
				}
			}
	}
	if (Global_14392 == 0)
	{
		if (func_145(2, Global_14388, 0))
		{
			func_137();
			Global_14392 = 1;
			unk_0xC1B1E9A034A63A62(0);
			switch (Global_14413.f_1)
			{
				case 6:
					if (Global_14393 < (34 - 1))
					{
						Global_14393++;
					}
					break;
				
				case 5:
					if (Global_14393 < 3)
					{
						Global_14393++;
					}
					break;
				}
		}
		if (func_145(2, Global_14387, 0))
		{
			func_133();
			Global_14392 = 1;
			unk_0xC1B1E9A034A63A62(0);
			if (Global_14393 > 0)
			{
				Global_14393 = (Global_14393 - 1);
			}
		}
		if (func_145(2, Global_14389, 0))
		{
			func_130();
			Global_14392 = 1;
			unk_0xC1B1E9A034A63A62(0);
			if (Global_14393 > 3)
			{
				Global_14393 = (Global_14393 - 4);
			}
		}
		if (func_145(2, Global_14390, 0))
		{
			func_135();
			Global_14392 = 1;
			unk_0xC1B1E9A034A63A62(0);
			if (Global_14393 < 8)
			{
				Global_14393 += 4;
			}
		}
	}
}

void func_130()
{
	func_142(Global_14394, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x962E604CCA53388F(-1, "Menu_Navigate", &Global_14402, 1);
	func_131();
}

void func_131()
{
	if (func_132())
	{
		if (Global_14576 == 0)
		{
			unk_0x06C10E0D35194B7A(1);
		}
		else
		{
			unk_0x06C10E0D35194B7A(2);
		}
	}
}

int func_132()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69521)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0x132F78245A5DBB0A();
	iVar1 = unk_0x20EC647BB13B981D(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_2568269 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_133()
{
	func_142(Global_14394, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(4), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x962E604CCA53388F(-1, "Menu_Navigate", &Global_14402, 1);
	func_134();
}

void func_134()
{
	if (func_132())
	{
		if (Global_14576 == 0)
		{
			unk_0x06C10E0D35194B7A(3);
		}
		else
		{
			unk_0x06C10E0D35194B7A(4);
		}
	}
}

void func_135()
{
	func_142(Global_14394, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x962E604CCA53388F(-1, "Menu_Navigate", &Global_14402, 1);
	func_136();
}

void func_136()
{
	if (func_132())
	{
		if (Global_14576 == 0)
		{
			unk_0x06C10E0D35194B7A(2);
		}
		else
		{
			unk_0x06C10E0D35194B7A(1);
		}
	}
}

void func_137()
{
	func_142(Global_14394, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(2), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x962E604CCA53388F(-1, "Menu_Navigate", &Global_14402, 1);
	func_138();
}

void func_138()
{
	if (func_132())
	{
		if (Global_14576 == 0)
		{
			unk_0x06C10E0D35194B7A(4);
		}
		else
		{
			unk_0x06C10E0D35194B7A(3);
		}
	}
}

void func_139(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, int iParam10, int iParam11)
{
	unk_0x2B859AD680983623(uParam0, sParam1);
	unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x226FA58470A21AEF(sParam7))
	{
		func_72(sParam7);
	}
	if (!unk_0x226FA58470A21AEF(sParam8))
	{
		func_72(sParam8);
	}
	if (!unk_0x226FA58470A21AEF(sParam9))
	{
		func_72(sParam9);
	}
	if (!unk_0x226FA58470A21AEF(iParam10))
	{
		func_72(iParam10);
	}
	if (!unk_0x226FA58470A21AEF(iParam11))
	{
		func_72(iParam11);
	}
	unk_0xE97F1B22C5E8989F();
}

void func_140(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0x2B859AD680983623(uParam0, sParam1);
	func_72(sParam2);
	if (!unk_0x226FA58470A21AEF(sParam3))
	{
		func_72(sParam3);
	}
	if (!unk_0x226FA58470A21AEF(sParam4))
	{
		func_72(sParam4);
	}
	if (!unk_0x226FA58470A21AEF(sParam5))
	{
		func_72(sParam5);
	}
	if (!unk_0x226FA58470A21AEF(sParam6))
	{
		func_72(sParam6);
	}
	unk_0xE97F1B22C5E8989F();
}

void func_141()
{
	int iVar0[12];
	int iVar13;
	int iVar14;
	
	StringCopy(&(Global_2991[0 /*5*/]), "CELL_900", 16);
	Global_2991[0 /*5*/].f_4 = 10;
	StringCopy(&(Global_2991[1 /*5*/]), "CELL_901", 16);
	Global_2991[1 /*5*/].f_4 = 0;
	StringCopy(&(Global_2991[2 /*5*/]), "CELL_902", 16);
	Global_2991[2 /*5*/].f_4 = 1;
	StringCopy(&(Global_2991[3 /*5*/]), "CELL_903", 16);
	Global_2991[3 /*5*/].f_4 = 2;
	StringCopy(&(Global_2991[4 /*5*/]), "CELL_904", 16);
	Global_2991[4 /*5*/].f_4 = 3;
	StringCopy(&(Global_2991[5 /*5*/]), "CELL_905", 16);
	Global_2991[5 /*5*/].f_4 = 4;
	StringCopy(&(Global_2991[6 /*5*/]), "CELL_906", 16);
	Global_2991[6 /*5*/].f_4 = 5;
	StringCopy(&(Global_2991[7 /*5*/]), "CELL_907", 16);
	Global_2991[7 /*5*/].f_4 = 6;
	StringCopy(&(Global_2991[8 /*5*/]), "CELL_908", 16);
	Global_2991[8 /*5*/].f_4 = 7;
	StringCopy(&(Global_2991[9 /*5*/]), "CELL_909", 16);
	Global_2991[9 /*5*/].f_4 = 8;
	StringCopy(&(Global_2991[10 /*5*/]), "CELL_910", 16);
	Global_2991[10 /*5*/].f_4 = 9;
	StringCopy(&(Global_2991[11 /*5*/]), "CELL_911", 16);
	Global_2991[11 /*5*/].f_4 = 11;
	iVar13 = 0;
	while (iVar13 < 12)
	{
		iVar0[iVar13] = 0;
		iVar13++;
	}
	if (Global_3074[0] == 0)
	{
	}
	iVar13 = 0;
	while (iVar13 < 12)
	{
		iVar14 = 0;
		while (iVar14 < 12)
		{
			if (iVar13 == Global_2991[iVar14 /*5*/].f_4)
			{
				if (iVar0[iVar13] == 0)
				{
					Global_3074[iVar13] = iVar14;
					unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
					unk_0x7AF283DA3BA078CD(11);
					unk_0x7AF283DA3BA078CD(iVar13);
					func_72(&(Global_2991[iVar14 /*5*/]));
					unk_0xE97F1B22C5E8989F();
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
	unk_0x2B859AD680983623(uParam0, sParam1);
	unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xE97F1B22C5E8989F();
}

void func_143()
{
	if (!unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0))
	{
		unk_0x962E604CCA53388F(-1, "Menu_Accept", &Global_14402, 1);
		func_144();
	}
}

void func_144()
{
	if (func_132())
	{
		unk_0x06C10E0D35194B7A(5);
	}
}

int func_145(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xD471C64C0898A7BF(iParam0, iParam1) || (iParam2 == 1 && unk_0x36017A82F80B1E0E(iParam0, iParam1)))
	{
		if (unk_0x55812CD5A331E1F8())
		{
			if (unk_0xB2E6456B1BD1C186() == 0 || (unk_0x28E650D9BD8DC870() && unk_0x4A1EAF6BB2C862EA(2)))
			{
				return 0;
			}
		}
		if (unk_0x3DC360442A11BB38() || unk_0x526F2ADD5C54B89E())
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
	if (func_145(2, Global_14381, 0))
	{
		iLocal_133 = 0;
		unk_0xE27C8E42A97895CF(&Global_2284, 0);
		func_75();
		Global_14391 = 1;
		if (Global_69521)
		{
			func_265();
		}
		else
		{
			func_255();
		}
		unk_0x4EDE34FBADD967A6(0);
		if (Global_14413.f_1 > 3)
		{
			Global_14413.f_1 = 7;
		}
		StringCopy(&cLocal_109, "", 16);
	}
}

void func_147()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (Global_14391 == 0)
	{
		if (func_145(2, Global_14382, 0))
		{
			if (!func_128())
			{
				Global_16826 = 0;
				Global_16825 = 0;
				Global_16827 = 0;
				iLocal_306 = 0;
				func_143();
				Global_14391 = 1;
				if (iLocal_94 > 0)
				{
					unk_0x2B859AD680983623(Global_14394, "GET_CURRENT_SELECTION");
					uLocal_99 = unk_0x501E08A637882750();
					while (!unk_0xEC0EC22A8A43C76E(uLocal_99))
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					iLocal_102 = unk_0xFD3CF387C866C665(uLocal_99);
					bVar0 = false;
					if (unk_0x2CB436C59D8FC08B())
					{
						if (Global_69521)
						{
							if (iLocal_102 < iLocal_97)
							{
								bVar0 = true;
							}
						}
						else if (iLocal_102 == iLocal_96 || iLocal_102 > iLocal_96)
						{
							bVar0 = true;
						}
					}
					if (unk_0x7DA173D4FD42F36B(Global_2284, 0))
					{
						bVar0 = false;
					}
					if (bVar0)
					{
						Local_331.f_2936 = (iLocal_102 - iLocal_96);
						func_151();
					}
					else
					{
						if (iLocal_102 < 0)
						{
							iLocal_102 = 0;
						}
						Global_1598 = Global_14419[iLocal_102];
						if (Global_14568 != 145)
						{
							if (Global_1598 != Global_14568)
							{
								iLocal_90 = 1;
							}
							else
							{
								iLocal_90 = 0;
							}
						}
						else
						{
							iLocal_90 = 0;
						}
						if (iLocal_90 == 0)
						{
							if (unk_0x7DA173D4FD42F36B(Global_2283, 9))
							{
								if (!unk_0x7DA173D4FD42F36B(Global_2283, 29))
								{
									Global_101186.f_32651[Global_1598 /*29*/].f_18 = 1;
									if (Global_101186.f_32651[Global_1598 /*29*/].f_24[Global_14413] == 0)
									{
										func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(1), -1f, -1f, "CELL_288", "CELL_300", &(Global_117[Global_1598 /*10*/].f_4), "CELL_195", 0);
									}
									else
									{
										func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(1), -1f, -1f, "CELL_288", &(Global_101186.f_32651[Global_1598 /*29*/].f_7), &(Global_101186.f_32651[Global_1598 /*29*/].f_3), &(Global_101186.f_32651[Global_1598 /*29*/].f_3), 0);
									}
									func_139(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
									func_142(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
									unk_0xE27C8E42A97895CF(&Global_2283, 29);
								}
							}
							else
							{
								bLocal_326 = false;
								bLocal_327 = false;
								if (Global_69521)
								{
									iVar1 = 0;
									while (iVar1 < 4)
									{
										if (unk_0x2F6869889D97DFED(&(Global_101186.f_32651[Global_1598 /*29*/].f_3), &(Global_2186[iVar1 /*24*/])))
										{
											if (!unk_0x2F6869889D97DFED(&(Global_2186[iVar1 /*24*/].f_8), "CELL_SFUN_NULL"))
											{
												bLocal_326 = true;
												iLocal_328 = iVar1;
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
										if (unk_0x2F6869889D97DFED(&(Global_101186.f_32651[Global_1598 /*29*/].f_3), &(Global_2121[iVar2 /*16*/])))
										{
											if (!unk_0x2F6869889D97DFED(&(Global_2121[iVar2 /*16*/].f_8), "CELL_SFUN_NULL"))
											{
												bLocal_326 = true;
												iLocal_328 = iVar2;
												if (iLocal_328 == iLocal_328)
												{
												}
											}
										}
										iVar2++;
									}
								}
								if (func_149(Global_1598) && unk_0x7DA173D4FD42F36B(Global_2284, 0) == 0)
								{
									if (func_121(Global_1598, Global_14413) == 0 && func_78(Global_1598, Global_14413) == 0)
									{
										bLocal_327 = false;
									}
									else
									{
										bLocal_327 = true;
									}
								}
								if (unk_0x7DA173D4FD42F36B(Global_2284, 0))
								{
									func_148();
									iLocal_133 = 1;
								}
								else if (bLocal_327 == 0 && bLocal_326 == 0)
								{
									Global_16826 = 0;
									Global_16825 = 0;
									Global_16827 = 0;
									if (unk_0x7DA173D4FD42F36B(Global_2284, 19) && Global_1598 == 129)
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
	iLocal_131 = unk_0x1ADBAAC322D61F73();
	func_142(Global_14394, "SET_DATA_SLOT_EMPTY", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4EDE34FBADD967A6(0);
	switch (Global_1598)
	{
		case 2:
			func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), 0f, -1f, -1f, "CELL_7001", &(Global_101186.f_32651[Global_1598 /*29*/].f_3), &(Global_101186.f_32651[Global_1598 /*29*/].f_7), 0, 0);
			break;
		
		case 0:
			func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), 0f, -1f, -1f, "CELL_7002", &(Global_101186.f_32651[Global_1598 /*29*/].f_3), &(Global_101186.f_32651[Global_1598 /*29*/].f_7), 0, 0);
			break;
		
		case 12:
			func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), 0f, -1f, -1f, "CELL_7003", &(Global_101186.f_32651[Global_1598 /*29*/].f_3), "CELL_E_311", 0, 0);
			break;
	}
	if (Global_14401)
	{
		func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
	}
	else
	{
		func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	if (Global_14401)
	{
		func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_139(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	func_142(Global_14394, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_140(Global_14394, "SET_HEADER", "CELL_249", 0, 0, 0, 0);
}

int func_149(int iParam0)
{
	switch (Global_14413)
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
	
	if ((iParam0 >= 147 || iParam1 >= 147) || iParam0 == iParam1)
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
	
	if (Global_14413.f_1 > 3)
	{
		Global_14413.f_1 = 8;
	}
	if (Global_14401)
	{
		func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
		func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_139(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x99BCB15F954AF579(&Global_2283, 17);
	func_142(Global_14394, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_208", 0, 0, 0, 0);
	func_155(&Local_331);
	if (Global_14413.f_1 > 3)
	{
		func_142(Global_14394, "DISPLAY_VIEW", 18f, unk_0xBBDA792448DB5A89(iLocal_100), -1082130432, -1082130432, -1082130432);
		iLocal_100 = 0;
		if (func_154(&Local_331))
		{
			uVar0 = unk_0x3DB24415831CBC43(Local_331[Local_331.f_2936]);
		}
		else
		{
			uVar0 = func_152(&(Local_331.f_34[func_153(Local_331.f_2936, &Local_331) /*29*/].f_13));
		}
		unk_0x2B859AD680983623(Global_14394, "SET_HEADER");
		unk_0x7291E2F821FCFC04("CELL_CONDFNH");
		unk_0x9C174A0D56FFB64A(uVar0);
		unk_0xD6360E18957BCDD3();
		unk_0xE97F1B22C5E8989F();
		Local_331.f_2999 = 0;
		iLocal_116 = 1;
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
			sVar37 = unk_0x3DB24415831CBC43((*uParam0)[uParam0->f_2936]);
		}
		else
		{
			uParam0->f_2963 = { uParam0->f_34[func_153(uParam0->f_2936, uParam0) /*29*/] };
			sVar37 = func_152(&(uParam0->f_34[func_153(uParam0->f_2936, uParam0) /*29*/].f_13));
		}
		StringCopy(&(uParam0->f_2983), sVar37, 64);
		bVar38 = false;
		if (unk_0x490A9DDAF1D4FB11())
		{
			if (!Global_1573858)
			{
				if (func_162(unk_0xE0BDAFA1A39552D6()))
				{
					bVar38 = true;
				}
			}
		}
		if (func_154(uParam0))
		{
			if (((unk_0x87D3E43AEE1403B0((*uParam0)[uParam0->f_2936]) || unk_0x4958A9797978508F((*uParam0)[uParam0->f_2936])) || unk_0x8FE910A3DD03CC12((*uParam0)[uParam0->f_2936])) || unk_0x9CDB7315DFF33A64((*uParam0)[uParam0->f_2936]))
			{
				bVar38 = false;
			}
		}
		if (!unk_0xE454B9C63FEF41D4())
		{
			bVar38 = false;
		}
		if (unk_0x52081EEED6A6B914(0))
		{
			bVar38 = false;
		}
		if (unk_0x88BD5F6528137EC3(&(uParam0->f_2963)) || unk_0x3F56B7F918D77E95(&(uParam0->f_2963)))
		{
			bVar38 = false;
		}
		if (unk_0x56D44A38BFEBA8B3(&(uParam0->f_2963)) || unk_0x0566C3199D789F33(&(uParam0->f_2963)))
		{
			bVar38 = false;
		}
		if (unk_0xE0618347DA9238A5())
		{
			if (unk_0xB6FEE919E18FF45B())
			{
				if (unk_0xA5D7061F23E0F4FD())
				{
					bVar38 = false;
				}
			}
			else if (unk_0x8B003E1580113906())
			{
				bVar38 = false;
			}
		}
		if (bVar38)
		{
			if (Global_69521)
			{
				unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT_EMPTY");
				unk_0x7AF283DA3BA078CD(iVar0);
				unk_0xE97F1B22C5E8989F();
				unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
				unk_0x7AF283DA3BA078CD(18);
				unk_0x7AF283DA3BA078CD(iVar0);
				unk_0x7AF283DA3BA078CD(0);
				if (!Global_2469986.f_1 || Global_2469986.f_38)
				{
					unk_0x7291E2F821FCFC04("CELL_MP_1000");
					unk_0xD6360E18957BCDD3();
				}
				else
				{
					unk_0x7291E2F821FCFC04("CELL_MP_1000b");
					unk_0xD6360E18957BCDD3();
				}
				unk_0xE97F1B22C5E8989F();
				uParam0->f_2937[iVar0] = 1;
				iVar0++;
			}
			else if (Global_35742 == 15)
			{
				unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT_EMPTY");
				unk_0x7AF283DA3BA078CD(iVar0);
				unk_0xE97F1B22C5E8989F();
				unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
				unk_0x7AF283DA3BA078CD(18);
				unk_0x7AF283DA3BA078CD(iVar0);
				unk_0x7AF283DA3BA078CD(0);
				if (!Global_2469986.f_1 || Global_2469986.f_38)
				{
					unk_0x7291E2F821FCFC04("CELL_MP_1000");
					unk_0xD6360E18957BCDD3();
				}
				else
				{
					unk_0x7291E2F821FCFC04("CELL_MP_1000b");
					unk_0xD6360E18957BCDD3();
				}
				unk_0xE97F1B22C5E8989F();
				uParam0->f_2937[iVar0] = 1;
				iVar0++;
			}
		}
		bVar38 = false;
		if (func_154(uParam0))
		{
			if (((func_162(unk_0xE0BDAFA1A39552D6()) && func_162((*uParam0)[uParam0->f_2936])) && !unk_0x4958A9797978508F((*uParam0)[uParam0->f_2936])) && !unk_0x8FE910A3DD03CC12((*uParam0)[uParam0->f_2936]))
			{
				bVar38 = true;
			}
		}
		if (bVar38)
		{
			unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT_EMPTY");
			unk_0x7AF283DA3BA078CD(iVar0);
			unk_0xE97F1B22C5E8989F();
			unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
			unk_0x7AF283DA3BA078CD(18);
			unk_0x7AF283DA3BA078CD(iVar0);
			unk_0x7AF283DA3BA078CD(0);
			unk_0x7291E2F821FCFC04("CELL_MP_1009");
			unk_0xD6360E18957BCDD3();
			unk_0xE97F1B22C5E8989F();
			uParam0->f_2937[iVar0] = 2;
			iVar0++;
		}
		bVar38 = false;
		if (func_154(uParam0))
		{
			if (unk_0x41B2BDC5EBE2666D() < unk_0x901D029AE66D0F9A())
			{
				if (!unk_0xC1CBB5CA861EE944(&(uParam0->f_2963)))
				{
					bVar38 = true;
				}
			}
		}
		if (bVar38)
		{
			unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
			unk_0x7AF283DA3BA078CD(18);
			unk_0x7AF283DA3BA078CD(iVar0);
			unk_0x7AF283DA3BA078CD(0);
			unk_0x7291E2F821FCFC04("PIM_DFRQ2");
			unk_0xD6360E18957BCDD3();
			unk_0xE97F1B22C5E8989F();
			uParam0->f_2937[iVar0] = 3;
			iVar0++;
		}
		bVar38 = false;
		bVar38 = true;
		if (bVar38)
		{
			unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
			unk_0x7AF283DA3BA078CD(18);
			unk_0x7AF283DA3BA078CD(iVar0);
			unk_0x7AF283DA3BA078CD(0);
			unk_0x7291E2F821FCFC04("CELL_MP_1007");
			unk_0xD6360E18957BCDD3();
			unk_0xE97F1B22C5E8989F();
			uParam0->f_2937[iVar0] = 4;
			iVar0++;
		}
		bVar38 = false;
		if (unk_0x3D340893CA28EFFC())
		{
			if (unk_0x781D726C27D122E2(&(uParam0->f_2963)))
			{
				unk_0xAFAED23A75339868(&Var1, 35, &(uParam0->f_2963));
			}
		}
		if (Var1.f_0 != -1)
		{
			if (Var1.f_21 == 1)
			{
				if (unk_0x008343D21DFC7313() && !func_161(Var1.f_0))
				{
					bVar38 = true;
					uParam0->f_2947 = { Var1.f_1 };
				}
			}
		}
		if (bVar38)
		{
			unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
			unk_0x7AF283DA3BA078CD(18);
			unk_0x7AF283DA3BA078CD(iVar0);
			unk_0x7AF283DA3BA078CD(0);
			unk_0x7291E2F821FCFC04("CELL_MP_1003");
			unk_0xD6360E18957BCDD3();
			unk_0xE97F1B22C5E8989F();
			uParam0->f_2937[iVar0] = 5;
			iVar0++;
		}
		unk_0x99BCB15F954AF579(&Global_2285, 6);
		bVar38 = false;
		if (func_154(uParam0))
		{
			if (func_160(unk_0xE0BDAFA1A39552D6(), 1, 1))
			{
				if (unk_0x296D7F88818B62E7(unk_0xE0BDAFA1A39552D6(), (*uParam0)[uParam0->f_2936]))
				{
					if (!func_159((*uParam0)[uParam0->f_2936], 0))
					{
						if (!unk_0x7DA173D4FD42F36B(Global_2418529[(*uParam0)[uParam0->f_2936] /*313*/].f_194, 2))
						{
							bVar38 = true;
							unk_0xE27C8E42A97895CF(&Global_2285, 6);
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
		if (Global_1573828 || Global_1573829)
		{
			bVar38 = false;
		}
		if (bVar38)
		{
			unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
			unk_0x7AF283DA3BA078CD(18);
			unk_0x7AF283DA3BA078CD(iVar0);
			unk_0x7AF283DA3BA078CD(0);
			if (!unk_0x7DA173D4FD42F36B(Global_2428549.f_686, (*uParam0)[uParam0->f_2936]))
			{
				unk_0x7291E2F821FCFC04("CELL_MP_1008");
			}
			else
			{
				unk_0x7291E2F821FCFC04("CELL_MP_1008b");
			}
			unk_0xD6360E18957BCDD3();
			unk_0xE97F1B22C5E8989F();
			uParam0->f_2937[iVar0] = 7;
			iVar0++;
		}
	}
	else
	{
		unk_0x999E5F6D1B49D87B("CELL_LEFT_SESS");
		unk_0xB452F88B6A7B058D(1, 1);
		func_30(0);
		return;
	}
}

int func_156(int iParam0, int iParam1)
{
	if (Global_1610705[iParam0 /*178*/] == iParam1)
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
		return unk_0x7DA173D4FD42F36B(Global_1610705[iVar0 /*178*/].f_1, 0);
	}
	return 0;
}

int func_158()
{
	return -1;
}

bool func_159(int iParam0, int iParam1)
{
	return unk_0x7DA173D4FD42F36B(Global_2418529[iParam0 /*313*/].f_206, iParam1);
}

int func_160(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xA27C9E8196C79D22(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x7868479D9B6694C0(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2428549.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_161(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x3D340893CA28EFFC() && unk_0x008343D21DFC7313())
	{
		iVar0 = unk_0x7A5AD1F579AA55B4();
		if (iVar0 > 0)
		{
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				unk_0x5C980A53888A09E5(&Global_2460404, iVar1);
				if (iParam0 == Global_2460404)
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
	
	if (unk_0xE414AE803DFDBF93() == 0)
	{
		return 0;
	}
	iVar0 = -1;
	if (iParam0 != unk_0xE0BDAFA1A39552D6())
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	if (unk_0x7E8E236FA7C5423B() || unk_0x8B003E1580113906())
	{
		if (unk_0x787B6F3FDDC94F00(0, iVar0))
		{
			if (unk_0xE454B9C63FEF41D4())
			{
				return 1;
			}
		}
	}
	if (unk_0x438D260E2A787A5B() || unk_0xB6FEE919E18FF45B())
	{
		if (iParam0 == unk_0xE0BDAFA1A39552D6())
		{
			if (unk_0xBEED9F2DA1282BAD(0, -3, 1) || unk_0x787B6F3FDDC94F00(1, -1))
			{
				return 1;
			}
		}
		else
		{
			Var1 = { func_163(iParam0) };
			if (unk_0x787B6F3FDDC94F00(0, -1) || (unk_0x787B6F3FDDC94F00(1, -1) && unk_0xC1CBB5CA861EE944(&Var1)))
			{
				return 1;
			}
		}
	}
	if (unk_0x55812CD5A331E1F8())
	{
		if (unk_0x787B6F3FDDC94F00(0, iVar0))
		{
			if (unk_0xE454B9C63FEF41D4())
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
	
	unk_0x3C903E672223AE0B(iParam0, &Var0, 13);
	return Var0;
}

int func_164(var uParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x2CB436C59D8FC08B())
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
		if (unk_0x5297AB380BB36A2E(&(uParam0->f_34[iVar0 /*29*/])))
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
	if (func_145(2, Global_14382, 0))
	{
		unk_0x99BCB15F954AF579(&Global_2284, 0);
		iLocal_133 = 0;
		func_143();
		Global_14391 = 1;
		Global_16826 = 0;
		Global_16825 = 0;
		Global_16827 = 0;
		func_86();
	}
}

void func_166()
{
	if (iLocal_126)
	{
		if (unk_0x83666F9FB8FEBD4B() > 150)
		{
			iLocal_126 = 0;
		}
	}
	if (unk_0x4A1EAF6BB2C862EA(2))
	{
		if (func_145(2, 181, 0))
		{
			if (iLocal_98 > 0)
			{
				iLocal_98 = (iLocal_98 - 1);
			}
			else
			{
				iLocal_98 = (iLocal_94 - 1);
			}
			func_130();
			iLocal_126 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_145(2, 180, 0))
		{
			iLocal_98++;
			if (iLocal_98 == iLocal_94)
			{
				iLocal_98 = 0;
			}
			func_135();
		}
	}
	if (iLocal_126 == 0)
	{
		if (func_145(2, Global_14389, 0))
		{
			if (iLocal_98 > 0)
			{
				iLocal_98 = (iLocal_98 - 1);
			}
			else
			{
				iLocal_98 = (iLocal_94 - 1);
			}
			func_130();
			iLocal_126 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_145(2, Global_14390, 0))
		{
			iLocal_98++;
			if (iLocal_98 == iLocal_94)
			{
				iLocal_98 = 0;
			}
			func_135();
			iLocal_126 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_145(2, Global_14388, 0))
		{
			func_168();
			func_168();
			func_168();
			func_168();
			func_168();
			unk_0x962E604CCA53388F(-1, "Menu_Navigate", &Global_14402, 1);
			iLocal_126 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_145(2, Global_14387, 0))
		{
			func_167();
			func_167();
			func_167();
			func_167();
			func_167();
			unk_0x962E604CCA53388F(-1, "Menu_Navigate", &Global_14402, 1);
			iLocal_126 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
}

void func_167()
{
	if (iLocal_98 > 0)
	{
		iLocal_98 = (iLocal_98 - 1);
	}
	else
	{
		iLocal_98 = (iLocal_94 - 1);
	}
	func_142(Global_14394, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_168()
{
	iLocal_98++;
	if (iLocal_98 == iLocal_94)
	{
		iLocal_98 = 0;
	}
	func_142(Global_14394, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(3), -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_169()
{
	iLocal_98++;
	if (iLocal_98 == iLocal_94)
	{
		iLocal_98 = 0;
		unk_0x99BCB15F954AF579(&Global_2283, 16);
	}
	func_135();
	unk_0x2B859AD680983623(Global_14394, "GET_CURRENT_SELECTION");
	uLocal_99 = unk_0x501E08A637882750();
	while (!unk_0xEC0EC22A8A43C76E(uLocal_99))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	iLocal_102 = unk_0xFD3CF387C866C665(uLocal_99);
	if (iLocal_102 < 0)
	{
		iLocal_102 = 0;
	}
	if (Global_16743 == Global_14419[iLocal_102])
	{
		unk_0x99BCB15F954AF579(&Global_2283, 16);
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
	
	if (unk_0x7DA173D4FD42F36B(Global_2285, 6))
	{
		if (!unk_0x6732F309419E1AE1(&(Local_331.f_2963)))
		{
			unk_0x99BCB15F954AF579(&Global_2285, 6);
			StringCopy(&cLocal_109, "", 16);
			Global_14413.f_1 = 3;
		}
	}
	switch (Local_331.f_2999)
	{
		case 0:
			if (unk_0x7DA173D4FD42F36B(uLocal_325, 1))
			{
				if (!Global_91362.f_1352)
				{
					unk_0x99BCB15F954AF579(&uLocal_325, 0);
					unk_0x99BCB15F954AF579(&uLocal_325, 1);
				}
				return;
			}
			if (Local_331.f_2976)
			{
				if (Local_331.f_2981)
				{
					iVar39 = 2;
					unk_0xDC38CC1E35B6A5D7("HUD_CONNPROB", "HUD_DISCON", iVar39, 0, 0, -1, 0, 0, 1);
					if (Local_331.f_2982)
					{
						if (func_145(2, Global_14382, 0) || unk_0xE9F7E89BC2352535(2, 201))
						{
							Global_14413.f_1 = 3;
						}
					}
					else if (func_145(2, Global_14382, 0) || unk_0xE9F7E89BC2352535(2, 201))
					{
					}
					else
					{
						Local_331.f_2982 = 1;
					}
				}
				else
				{
					iLocal_100 = Local_331.f_2946;
					switch (Local_331.f_2937[Local_331.f_2946])
					{
						case 1:
							if (!Global_2469986.f_1)
							{
								if (!unk_0x3250CA0AD18A6E51() && !unk_0xE08BE6656A44E2A2())
								{
									Local_331.f_2976 = 0;
									func_252();
									Local_331.f_2977 = 0;
									if (func_154(&Local_331))
									{
										sVar53 = unk_0x3DB24415831CBC43(Local_331[Local_331.f_2936]);
									}
									else
									{
										sVar53 = func_152(&(Local_331.f_34[func_153(Local_331.f_2936, &Local_331) /*29*/].f_13));
									}
									func_251(sVar53);
									Local_331.f_2999 = 1;
									func_250(&(Local_331.f_2979));
									func_249(0);
									if (Global_69521)
									{
										if (func_248(1) >= Global_262145.f_159)
										{
											Var40 = { func_163(unk_0xE0BDAFA1A39552D6()) };
											if (func_247())
											{
												func_238(1654961868, Global_262145.f_159, &iVar0, 1, 1, 0);
												Global_2562803[iVar0 /*73*/].f_8.f_3 = { Var40 };
											}
											else
											{
												unk_0x6C1E04E3E885081B(Global_262145.f_159, &Var40, 1, 1);
											}
										}
										else
										{
											Var40 = { func_163(unk_0xE0BDAFA1A39552D6()) };
											if (func_247())
											{
											}
											else
											{
												unk_0x6C1E04E3E885081B(func_248(1), &Var40, 1, 1);
											}
										}
										func_87(1907, 1, -1);
									}
								}
								else if (unk_0x3250CA0AD18A6E51())
								{
								}
								else if (unk_0xE08BE6656A44E2A2())
								{
									if (!Global_2469986.f_59)
									{
										Global_2469986 = 1;
										Global_2469986.f_2 = 1;
										Global_2469986.f_59 = 1;
									}
								}
							}
							else if (Global_2469986.f_38)
							{
							}
							else
							{
								func_237();
								unk_0x962E604CCA53388F(-1, "Hang_Up", &Global_14402, 1);
								if (Global_2469986.f_1)
								{
									func_235();
								}
								Global_14413.f_1 = 3;
							}
							return;
							break;
						
						case 2:
							if (func_234(&(Global_2464975.f_286[Local_331[Local_331.f_2936] /*2*/])))
							{
								if (!func_233(&(Global_2464975.f_286[Local_331[Local_331.f_2936] /*2*/]), 30000, 0))
								{
									if (func_222(0, 0, 1, 1))
									{
										func_205("CELL_MP_1009H", unk_0x3DB24415831CBC43(Local_331[Local_331.f_2936]), func_206(Local_331[Local_331.f_2936], -2, 0, 0), -1);
									}
									Local_331.f_2976 = 0;
									return;
								}
							}
							if (((!func_162(unk_0xE0BDAFA1A39552D6()) || !func_162(Local_331[Local_331.f_2936])) || unk_0x4958A9797978508F(Local_331[Local_331.f_2936])) || unk_0x8FE910A3DD03CC12(Local_331[Local_331.f_2936]))
							{
								if (func_222(1, 1, 1, 1))
								{
									if (!unk_0x2F6869889D97DFED(unk_0x3DB24415831CBC43(Local_331[Local_331.f_2936]), "**Invalid**"))
									{
										func_205("CELL_MP_1009M", unk_0x3DB24415831CBC43(Local_331[Local_331.f_2936]), func_206(Local_331[Local_331.f_2936], -2, 0, 0), -1);
									}
									else
									{
										func_204("CELL_MP_1009N", -1);
									}
								}
								Local_331.f_2976 = 0;
								return;
							}
							Local_331.f_2976 = 0;
							Local_331.f_2999 = 2;
							iLocal_3350 = 1;
							return;
							break;
						
						case 3:
							if (!unk_0x5274473A89069B36())
							{
								if (unk_0x7E8E236FA7C5423B() && !unk_0xC1CBB5CA861EE944(&(Local_331.f_2963)))
								{
									if (unk_0xEE4C81C45248AD21(&(Local_331.f_2963), ""))
									{
										Local_331.f_2976 = 0;
										Global_14413.f_1 = 3;
									}
								}
								else
								{
									unk_0xC5F4A93624B25FFF(&(Local_331.f_2963));
									Local_331.f_2976 = 0;
									Global_14413.f_1 = 3;
								}
							}
							break;
						
						case 5:
							if (unk_0x3D340893CA28EFFC())
							{
								if (unk_0x781D726C27D122E2(&(Local_331.f_2963)))
								{
									unk_0xAFAED23A75339868(&Var4, 35, &(Local_331.f_2963));
								}
							}
							if (Var4.f_0 != -1)
							{
								if (Var4.f_21 == 1)
								{
									if (!func_161(Var4.f_0))
									{
										if (unk_0x727C91267CF7EBEC(Var4.f_0))
										{
											Local_331.f_2976 = 0;
											unk_0x999E5F6D1B49D87B("CREW_JOIN");
											unk_0x9C174A0D56FFB64A(&(Var4.f_1));
											unk_0xB452F88B6A7B058D(1, 1);
											Global_14413.f_1 = 3;
										}
										else
										{
											Global_14413.f_1 = 3;
											Local_331.f_2976 = 0;
											Global_14413.f_1 = 3;
										}
										return;
									}
								}
							}
							Local_331.f_2976 = 0;
							break;
						
						case 4:
							Local_331.f_2976 = 0;
							func_151();
							unk_0xC5F4A93624B25FFF(&(Local_331.f_2963));
							break;
						
						case 7:
							if (unk_0x7DA173D4FD42F36B(Global_2428549.f_686, Local_331[Local_331.f_2936]))
							{
								unk_0x99BCB15F954AF579(&(Global_2428549.f_686), Local_331[Local_331.f_2936]);
							}
							else
							{
								Global_2428549.f_686 = 0;
								unk_0xE27C8E42A97895CF(&(Global_2428549.f_686), Local_331[Local_331.f_2936]);
							}
							func_151();
							Local_331.f_2976 = 0;
							break;
						}
				}
			}
			else if (Global_14391 == 0)
			{
				if (func_145(2, Global_14382, 0))
				{
					Local_331.f_2982 = 0;
					Local_331.f_2981 = 0;
					unk_0x99BCB15F954AF579(&Global_2284, 0);
					iLocal_115 = 0;
					func_143();
					Global_14391 = 1;
					unk_0x2B859AD680983623(Global_14394, "GET_CURRENT_SELECTION");
					uLocal_99 = unk_0x501E08A637882750();
					while (!unk_0xEC0EC22A8A43C76E(uLocal_99))
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					Local_331.f_2946 = unk_0xFD3CF387C866C665(uLocal_99);
					if (!func_164(&Local_331, &iVar3))
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
								Global_2469986.f_59 = 0;
								Local_331.f_2981 = 1;
								Local_331.f_2976 = 1;
								return;
								break;
						}
						Global_14413.f_1 = 3;
						return;
					}
					Global_2469986.f_59 = 0;
					Local_331.f_2976 = 1;
				}
			}
			break;
		
		case 1:
			if (!func_164(&Local_331, &iVar3))
			{
				func_249(1);
				func_237();
				Local_331.f_2978 = 1;
				Local_331.f_2977 = 1;
				return;
			}
			else if (Local_331.f_2977)
			{
				if (!Local_331.f_2978)
				{
					if (!Global_2469986.f_1 || !unk_0x7858D3B2B536FBCF())
					{
						func_249(1);
						func_237();
						Local_331.f_2978 = 1;
						Local_331.f_2977 = 1;
						return;
					}
					if (unk_0x2CB436C59D8FC08B())
					{
						if (func_145(2, Global_14383, 0))
						{
							func_237();
							Local_331.f_2976 = 0;
							return;
						}
						if (func_202(Global_2469986.f_20))
						{
							if (unk_0xC1CBB5CA861EE944(&(Global_2469986.f_20)))
							{
								if (!unk_0x5297AB380BB36A2E(&(Global_2469986.f_20)))
								{
									func_249(1);
									func_237();
									Local_331.f_2978 = 1;
									Local_331.f_2977 = 1;
									return;
								}
							}
						}
						else
						{
							func_249(1);
							func_237();
							Local_331.f_2978 = 1;
							Local_331.f_2977 = 1;
							return;
						}
					}
					else
					{
						func_237();
						Local_331.f_2976 = 0;
						func_151();
						return;
					}
					if (!Global_2469986.f_37)
					{
						if (Global_2469986.f_33 == -1)
						{
							if (func_233(&(Local_331.f_2979), 40000, 1))
							{
								func_249(1);
								func_237();
								Local_331.f_2978 = 1;
								Local_331.f_2977 = 1;
								return;
							}
						}
						else
						{
							switch (Global_2469986.f_33)
							{
								case 1:
									func_201();
									func_200();
									if (unk_0x17CC0D5008835470())
									{
										if (iVar1 == iVar2)
										{
										}
									}
									unk_0x8EBF150526027B8E(iLocal_104);
									return;
									break;
								
								case 2:
									func_249(1);
									func_237();
									Local_331.f_2978 = 1;
									return;
									break;
								
								default:
									func_249(1);
									func_237();
									Local_331.f_2978 = 1;
									return;
									break;
								}
							}
						}
				}
			}
			else if (!func_234(&(Local_331.f_2979)))
			{
				func_250(&(Local_331.f_2979));
				func_199(&(Local_331.f_2979), 1, 0);
			}
			else
			{
				if (func_233(&(Local_331.f_2979), 15000, 1))
				{
					func_237();
					func_75();
					func_254();
					Global_14413.f_1 = 3;
					return;
				}
				if (Global_2469986.f_1 || unk_0x7DA173D4FD42F36B(Global_2284, 20))
				{
					if (func_145(2, Global_14383, 0))
					{
						func_237();
						Global_14413.f_1 = 3;
						return;
					}
				}
				if (Global_2469986.f_1)
				{
					if (func_198(&Local_331, &(Local_331.f_2983)))
					{
						func_197(&(Local_331.f_2979), 1, 0);
						Local_331.f_2978 = 0;
						Local_331.f_2977 = 1;
						if (Global_69521)
						{
							func_195(105, 1, -1, 1);
						}
					}
					else
					{
						func_249(1);
						func_237();
						Local_331.f_2978 = 1;
						Local_331.f_2977 = 1;
						return;
					}
				}
			}
			break;
		
		case 2:
			if (iLocal_3350 == 1)
			{
				if (func_189(&Local_3331, &(Local_3331.f_1), &(Local_3331.f_2), 0, 0, &cLocal_3334, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0))
				{
					StringCopy(&cLocal_3334, unk_0x87874D6DC1F0E046(), 64);
					Local_3331.f_0 = 0;
					Local_3331.f_2 = 0;
					Local_3331.f_1 = 0;
					iLocal_3350 = 0;
					uLocal_3351 = unk_0x1AF431622CC415A8(&cLocal_3334);
					StringCopy(&cLocal_3334, unk_0xB1BA47C301D0BD15(&cLocal_3334, 0, uLocal_3351, 63), 64);
					func_197(&(Global_2464975.f_286[Local_331[Local_331.f_2936] /*2*/]), 0, 0);
					if (unk_0x226FA58470A21AEF(func_188(&cLocal_3334)))
					{
					}
					else
					{
						Var54 = { func_163(Local_331[Local_331.f_2936]) };
						unk_0x310CDA3ACB2DFA3B(&cLocal_3334, &Var54);
						func_171("CP_TM_SENT", Local_331[Local_331.f_2936], 0, 0, 0, 1, 1, 0);
						func_87(1906, 1, -1);
					}
					Local_331.f_2999 = 0;
				}
				if (Local_3331.f_0 == 2)
				{
					Local_3331.f_0 = 0;
					Local_3331.f_2 = 0;
					Local_3331.f_1 = 0;
					iLocal_3350 = 0;
					Local_331.f_2999 = 0;
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
	iVar1 = unk_0xF749B19A9F9B3DBF(iParam1);
	if (unk_0x296D7F88818B62E7(unk_0xE0BDAFA1A39552D6(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, unk_0x3DB24415831CBC43(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, unk_0x3DB24415831CBC43(iParam1), 64);
		}
		unk_0x999E5F6D1B49D87B(sParam0);
		if ((iVar1 != -1 && unk_0x21A36E2323FEA4B1()) && iVar1 < 4)
		{
			if (Global_1617902.f_73330[iVar1] != -1)
			{
				unk_0xD5EA844E0F1947AF(func_181(iVar1, iParam1, 0));
			}
			else
			{
				unk_0xD5EA844E0F1947AF(func_206(iParam1, -2, 1, 0));
			}
		}
		else
		{
			unk_0xD5EA844E0F1947AF(func_206(iParam1, -2, 1, 0));
		}
		unk_0x9C174A0D56FFB64A(func_179(&Var2));
		if (!bParam4)
		{
			iVar0 = unk_0xB452F88B6A7B058D(0, 1);
		}
		else
		{
			Global_2460474 = { func_163(iParam1) };
			if (unk_0xAFAED23A75339868(&Global_2460404, 35, &Global_2460474))
			{
				iVar18 = 0;
				if (unk_0x2F6869889D97DFED(&(Global_2460404.f_22), "Leader") && Global_2460404.f_30 == 0)
				{
					iVar18 = 1;
				}
				if (Global_2460404.f_21 > 0)
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
					iVar0 = unk_0x7EFA4D96D67E80FA(iVar19, unk_0x03FC3C80A0C9E1FA(&Global_2460404, 35), &(Global_2460404.f_17), Global_2460404.f_30, iVar18, 0, Global_2460404, &Var2, Global_1317072, Global_1317073, Global_1317074);
				}
				else
				{
					iVar0 = unk_0xFA42110C8985008E(iVar19, unk_0x03FC3C80A0C9E1FA(&Global_2460404, 35), &(Global_2460404.f_17), Global_2460404.f_30, iVar18, 0, Global_2460404, Global_1317072, Global_1317073, Global_1317074);
				}
			}
			else
			{
				iVar0 = unk_0xB452F88B6A7B058D(0, 1);
			}
		}
		func_172(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_172(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_177() || !unk_0x21A36E2323FEA4B1()) || !func_175(unk_0xE0BDAFA1A39552D6(), 0))
	{
		return;
	}
	iVar0 = func_173(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1731647.f_5[iVar0 /*53*/] = iParam0;
		Global_1731647.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1731647.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1731647.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1731647.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1731647.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1731647.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1731647.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1731647.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1731647.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1731647.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1731647.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_173(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1731647 - 1))
	{
		if (iParam0 > Global_1731647.f_5[iVar0 /*53*/].f_1)
		{
			func_174(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1731647++;
	if (Global_1731647 > 5)
	{
		Global_1731647 = 5;
		return Global_1731647;
	}
	return (Global_1731647 - 1);
}

void func_174(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1731647.f_5[iVar0 /*53*/] = { Global_1731647.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_175(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xE0BDAFA1A39552D6())
	{
		bVar0 = func_176(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1587816[iParam0 /*444*/].f_195 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xA27C9E8196C79D22(iParam0))
		{
			bVar0 = unk_0xF749B19A9F9B3DBF(iParam0) == 8;
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
	if (Global_1315891[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312741[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

bool func_177()
{
	return unk_0xAACC697A3792B3EF(-1762644250);
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
	
	if (Global_1617902.f_73330[iParam0] != -1 && Global_1617902.f_73330[iParam0] <= 4)
	{
		if (Global_1617902.f_73330[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1617902.f_73330[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1617902.f_73330[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1617902.f_73330[iParam0] == 4)
		{
			if (unk_0x7DA173D4FD42F36B(Global_1617902.f_15, 29))
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
			iVar0 = Global_1617902.f_73330[iParam0];
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
	
	iVar0 = unk_0xF749B19A9F9B3DBF(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_187(iVar0, iParam2, 0) && !unk_0x7DA173D4FD42F36B(Global_1617902.f_15, 18))
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
			else if (unk_0x7DA173D4FD42F36B(Global_1617902.f_4, 20))
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
	if (func_184(Global_1617902.f_76918))
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
		if (iParam0 == Global_262145.f_7549[iVar0])
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
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 0);
				
				case 1:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 1);
				
				case 2:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 2);
				
				case 3:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 4);
				
				case 1:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 5);
				
				case 2:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 6);
				
				case 3:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 8);
				
				case 1:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 9);
				
				case 2:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 10);
				
				case 3:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 12);
				
				case 1:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 13);
				
				case 2:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 14);
				
				case 3:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 15);
				
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

int func_189(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, char* sParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, char* sParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16, bool bParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23)
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
	
	if (unk_0x58CFBE8B8644D59B() || unk_0x4FF34B5B023875E1())
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
						if (unk_0x98934607F8D0FB03(joaat("fm_capture_creator")) > 0)
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
						if (unk_0x98934607F8D0FB03(joaat("fm_capture_creator")) > 0)
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
				if (unk_0x438D260E2A787A5B() || unk_0xB6FEE919E18FF45B())
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
				if (unk_0x55812CD5A331E1F8())
				{
					iVar7 = 6;
				}
				else if (unk_0x852598C027636D43() == 0)
				{
					iVar7 = 0;
				}
				else
				{
					iVar7 = 1;
				}
				if (unk_0x226FA58470A21AEF(sParam5))
				{
					unk_0xE3E37E24BD0EF878(iVar7, sVar4, sVar5, "", "", "", "", iVar6);
				}
				else
				{
					unk_0xE3E37E24BD0EF878(iVar7, sVar4, sVar5, sParam5, sParam10, "", "", iVar6);
				}
			}
			else
			{
				if (unk_0x55812CD5A331E1F8())
				{
					iVar8 = 6;
				}
				else if (unk_0x852598C027636D43() == 0)
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
					if (unk_0x438D260E2A787A5B() || unk_0xB6FEE919E18FF45B())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M19";
					}
					if (unk_0x852598C027636D43() == 10)
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
					unk_0xAF8A444515E55FF2(2);
					if (unk_0x226FA58470A21AEF(&(Global_1617902.f_76925)))
					{
						unk_0xE3E37E24BD0EF878(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xE3E37E24BD0EF878(iVar8, sVar4, sVar5, &(Global_1617902.f_76925), "", "", "", iVar9);
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
					if (unk_0x438D260E2A787A5B())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M19";
					}
					iVar9 = 63;
					unk_0xAF8A444515E55FF2(2);
					if (unk_0x226FA58470A21AEF(sParam5))
					{
						unk_0xE3E37E24BD0EF878(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xE3E37E24BD0EF878(iVar8, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam9)
				{
					if (unk_0x852598C027636D43() == 0)
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
					if (unk_0x438D260E2A787A5B() || unk_0xB6FEE919E18FF45B())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M36";
					}
					iVar10 = 0;
					while (iVar10 <= 7)
					{
						if (unk_0x60D87DA27F70EBBC(&(Global_1617902.f_77076[iVar10 /*16*/])))
						{
							StringCopy(&(Global_1617902.f_77076[iVar10 /*16*/]), "", 64);
						}
						iVar10++;
					}
					unk_0x74D5A8019ED8C77B(iVar8, sVar4, sVar5, &(Global_1617902.f_77076[0 /*16*/]), &(Global_1617902.f_77076[1 /*16*/]), &(Global_1617902.f_77076[2 /*16*/]), &(Global_1617902.f_77076[3 /*16*/]), &(Global_1617902.f_77076[4 /*16*/]), &(Global_1617902.f_77076[5 /*16*/]), &(Global_1617902.f_77076[6 /*16*/]), &(Global_1617902.f_77076[7 /*16*/]), iVar9);
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
					if (unk_0x438D260E2A787A5B() || unk_0xB6FEE919E18FF45B())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_SMS3";
					}
					if (unk_0x226FA58470A21AEF(&(Global_1617902.f_29022[iParam16 /*38*/].f_4[0 /*16*/])))
					{
						unk_0xE3E37E24BD0EF878(iVar8, sVar4, sVar5, "", "", "", "", 126);
					}
					else
					{
						iVar11 = 0;
						while (iVar11 <= 1)
						{
							if (unk_0x60D87DA27F70EBBC(&(Global_1617902.f_29022[iParam16 /*38*/].f_4[iVar11 /*16*/])))
							{
								StringCopy(&(Global_1617902.f_29022[iParam16 /*38*/].f_4[iVar11 /*16*/]), "", 64);
							}
							iVar11++;
						}
						unk_0xE3E37E24BD0EF878(iVar8, sVar4, sVar5, &(Global_1617902.f_29022[iParam16 /*38*/].f_4[0 /*16*/]), &(Global_1617902.f_29022[iParam16 /*38*/].f_4[1 /*16*/]), "", "", 126);
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
						if (unk_0x438D260E2A787A5B() || unk_0xB6FEE919E18FF45B())
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
						if (unk_0x438D260E2A787A5B() || unk_0xB6FEE919E18FF45B())
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
						if (unk_0x438D260E2A787A5B())
						{
							sVar5 = sVar4;
							sVar4 = "FMMC_SMS4";
						}
					}
					if (unk_0x226FA58470A21AEF(sParam5))
					{
						unk_0xE3E37E24BD0EF878(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xE3E37E24BD0EF878(iVar8, sVar4, sVar5, sParam5, "", "", "", iVar9);
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
					if (unk_0x438D260E2A787A5B())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_KEY_TIP9N";
					}
					if (unk_0x226FA58470A21AEF(sParam5))
					{
						unk_0xE3E37E24BD0EF878(iVar8, sVar4, sVar5, "", "", "", "", 16);
					}
					else
					{
						unk_0xE3E37E24BD0EF878(iVar8, sVar4, sVar5, sParam5, "", "", "", 16);
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
					if (unk_0x438D260E2A787A5B())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_KEY_TIP12N";
					}
					if (unk_0x226FA58470A21AEF(sParam5))
					{
						unk_0xE3E37E24BD0EF878(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xE3E37E24BD0EF878(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
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
					if (unk_0x226FA58470A21AEF(sParam5))
					{
						unk_0xE3E37E24BD0EF878(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xE3E37E24BD0EF878(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam17)
				{
					if (unk_0xB6FEE919E18FF45B())
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
					if (unk_0x438D260E2A787A5B())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_KEY_TIP14N";
					}
					if (unk_0x226FA58470A21AEF(sParam5))
					{
						unk_0xE3E37E24BD0EF878(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xE3E37E24BD0EF878(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam18)
				{
					if (unk_0x438D260E2A787A5B() || unk_0xB6FEE919E18FF45B())
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
						sVar4 = "FMMC_KEY_TIP15";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP15F";
					}
					if (unk_0x226FA58470A21AEF(sParam5))
					{
						unk_0xE3E37E24BD0EF878(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xE3E37E24BD0EF878(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else
				{
					if (unk_0x852598C027636D43() == 0)
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
					if (unk_0x438D260E2A787A5B() || unk_0xB6FEE919E18FF45B())
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
						if (unk_0x60D87DA27F70EBBC(&(Global_1617902.f_76947[iVar12 /*16*/])))
						{
							StringCopy(&(Global_1617902.f_76947[iVar12 /*16*/]), "", 64);
						}
						iVar12++;
					}
					if (bParam11)
					{
						unk_0x74D5A8019ED8C77B(iVar8, sVar4, sVar5, sParam5, sParam10, "", "", "", "", "", "", iVar9);
					}
					else
					{
						unk_0x74D5A8019ED8C77B(iVar8, sVar4, sVar5, &(Global_1617902.f_76947[0 /*16*/]), &(Global_1617902.f_76947[1 /*16*/]), &(Global_1617902.f_76947[2 /*16*/]), &(Global_1617902.f_76947[3 /*16*/]), &(Global_1617902.f_76947[4 /*16*/]), &(Global_1617902.f_76947[5 /*16*/]), &(Global_1617902.f_76947[6 /*16*/]), &(Global_1617902.f_76947[7 /*16*/]), iVar9);
					}
				}
			}
			StringCopy(&Global_1713301, "", 64);
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		
		case 1:
			*uParam0 = unk_0xB2E6456B1BD1C186();
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
						if (unk_0x226FA58470A21AEF(&Global_1713301))
						{
							StringCopy(&Global_1713301, unk_0x87874D6DC1F0E046(), 64);
							if (unk_0x226FA58470A21AEF(&Global_1713301))
							{
								*uParam1 = 0;
								return 1;
							}
							iVar1 = unk_0x1AF431622CC415A8(unk_0x87874D6DC1F0E046());
							iVar3 = 0;
							while (iVar3 <= (iVar1 - 1))
							{
								if (*uParam2 != 0)
								{
									if (!unk_0x226FA58470A21AEF(&Global_1713301))
									{
										if (unk_0x2F6869889D97DFED(" ", unk_0xBD6BA15744C7C620(&Global_1713301, 0, 1)))
										{
											iVar2 = unk_0x1AF431622CC415A8(&Global_1713301);
											StringCopy(&Global_1713301, unk_0xBD6BA15744C7C620(&Global_1713301, 1, iVar2), 64);
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
					if (unk_0xF2AEC1C41AD74ACA(*uParam1))
					{
						if (!unk_0x9521091C785B34ED(*uParam1))
						{
							unk_0xF4E26862CCA47B55();
							iVar0 = unk_0x4DB80A16601FFA9C(*uParam1);
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
							if (unk_0x98934607F8D0FB03(joaat("appinternet")) == 0)
							{
								unk_0xF4E26862CCA47B55();
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
							unk_0x01B3837306BC56AF(&Global_1713301, uParam1);
						}
						else
						{
							unk_0xD85A8F2659555532(&Global_1713301, uParam1);
						}
					}
					else if (unk_0x226FA58470A21AEF(unk_0x87874D6DC1F0E046()))
					{
						*uParam1 = -2;
						*uParam2 = 0;
						*uParam0 = 0;
						unk_0xF4E26862CCA47B55();
						return 0;
					}
					else if (bParam22)
					{
						unk_0x01B3837306BC56AF(unk_0x87874D6DC1F0E046(), uParam1);
					}
					else
					{
						unk_0xD85A8F2659555532(unk_0x87874D6DC1F0E046(), uParam1);
					}
					if (unk_0xB6FEE919E18FF45B())
					{
						if ((!unk_0x2CB436C59D8FC08B() || func_191() == 0) || func_190() == 1)
						{
							*uParam1 = 0;
							*uParam2 = 0;
							*uParam0 = 3;
							return 0;
						}
					}
					if (bParam17)
					{
						unk_0xC460DC00CFAA66A2("ERROR_CHECKYACHTNAME");
						unk_0x10AD8D09C2DA3C62(1);
					}
					else
					{
						unk_0xC460DC00CFAA66A2("ERROR_CHECKPROFANITY");
						unk_0x10AD8D09C2DA3C62(1);
					}
					if (!unk_0xF2AEC1C41AD74ACA(*uParam1))
					{
						if (!unk_0x226FA58470A21AEF(&Global_1713301))
						{
							*uParam1 = -1;
						}
						else
						{
							*uParam1 = -2;
						}
						*uParam2 = 0;
						*uParam0 = 0;
						unk_0xF4E26862CCA47B55();
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
	if (unk_0x614D6A182129DE96() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_192()
{
	return Global_2444558;
}

void func_193(int iParam0)
{
	Global_2444558 = iParam0;
}

int func_194()
{
	if (((unk_0x852598C027636D43() == 7 || unk_0x852598C027636D43() == 8) || unk_0x852598C027636D43() == 9) || unk_0x852598C027636D43() == 10)
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
		iVar0 = Global_2494881[iParam0 /*5*/][func_59(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x7E42158771F6AC55(iVar0, iParam1, iParam3);
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
	if (unk_0x17CC0D5008835470() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x201D90648B2AE3CE();
		}
		else
		{
			*uParam0 = unk_0xED6DF4F701311AF8();
		}
	}
	else
	{
		*uParam0 = unk_0x1ADBAAC322D61F73();
	}
	uParam0->f_1 = 1;
}

int func_198(var uParam0, char* sParam1)
{
	if (Global_2469986.f_1)
	{
		if (unk_0x7858D3B2B536FBCF())
		{
			unk_0x02DB58DD13BD2838(&(uParam0->f_2963));
			Global_2469986.f_20 = { uParam0->f_2963 };
			StringCopy(&(Global_2469986.f_4), sParam1, 64);
			return 1;
		}
	}
	return 0;
}

void func_199(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x17CC0D5008835470() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x201D90648B2AE3CE();
			}
			else
			{
				*uParam0 = unk_0xED6DF4F701311AF8();
			}
		}
		else
		{
			*uParam0 = unk_0x1ADBAAC322D61F73();
		}
		uParam0->f_1 = 1;
	}
}

void func_200()
{
	if (Global_14413.f_1 > 3)
	{
		Global_14413.f_1 = 9;
		Global_15725 = 1;
		if (Global_69521)
		{
			if (!unk_0x55812CD5A331E1F8())
			{
				func_139(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				unk_0xE27C8E42A97895CF(&(Global_2464975.f_1639), 15);
			}
		}
	}
}

void func_201()
{
	unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
	unk_0x7AF283DA3BA078CD(4);
	unk_0x7AF283DA3BA078CD(0);
	unk_0x7AF283DA3BA078CD(2);
	unk_0x7291E2F821FCFC04("CELL_CONDFON");
	unk_0x9C174A0D56FFB64A(&Global_15727);
	unk_0xD6360E18957BCDD3();
	func_72("CELL_300");
	func_72("CELL_219");
	func_72("CELL_219");
	unk_0xE97F1B22C5E8989F();
	Global_2469986.f_37 = 1;
	unk_0x99BCB15F954AF579(&Global_2283, 27);
	func_91();
}

bool func_202(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xD6F48B026382A9AD(&uParam0, 13);
}

void func_203(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x366FF5AC028F8A66(sParam0);
	unk_0x1C785DE53446A241(iParam1, 1);
}

void func_204(char* sParam0, int iParam1)
{
	unk_0x15835437CE85AEA4(sParam0);
	unk_0x65FD8FA7D3B7F717(0, 0, 1, iParam1);
}

void func_205(char* sParam0, var uParam1, int iParam2, int iParam3)
{
	unk_0x15835437CE85AEA4(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xD5EA844E0F1947AF(iParam2);
	}
	unk_0x9C174A0D56FFB64A(uParam1);
	unk_0x65FD8FA7D3B7F717(0, 0, 1, iParam3);
}

int func_206(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
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
	if (func_220(unk_0xE0BDAFA1A39552D6()) || (func_219() && func_218()))
	{
		uVar0 = func_217();
		if (unk_0xC1EDB61CE0A4B94E(uVar0))
		{
			if (unk_0x4E75E5867592AC01(uVar0))
			{
				if (unk_0x90CB634380C802C7(uVar0) != -1)
				{
					if (func_160(unk_0x90CB634380C802C7(uVar0), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x21A36E2323FEA4B1()) && iParam1 < 4)
						{
							if (Global_1617902.f_73330[iParam1] != -1)
							{
								return func_181(iParam1, iParam0, 0);
							}
							else
							{
								return func_208(iParam0, unk_0x90CB634380C802C7(uVar0), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_208(iParam0, unk_0x90CB634380C802C7(uVar0), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x21A36E2323FEA4B1()) && iParam1 < 4)
			{
				if (Global_1617902.f_73330[iParam1] != -1)
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
	if ((iParam1 > -1 && unk_0x21A36E2323FEA4B1()) && iParam1 < 4)
	{
		if (Global_1617902.f_73330[iParam1] != -1)
		{
			return func_181(iParam1, iParam0, 0);
		}
		else
		{
			return func_208(iParam0, unk_0xE0BDAFA1A39552D6(), iParam1, bParam2, bParam3);
		}
	}
	return func_208(iParam0, unk_0xE0BDAFA1A39552D6(), iParam1, bParam2, bParam3);
}

int func_207(bool bParam0, int iParam1, bool bParam2)
{
	return func_182(unk_0xE0BDAFA1A39552D6(), bParam0, iParam1, bParam2);
}

int func_208(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0xF749B19A9F9B3DBF(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1587816[iVar2 /*444*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if ((func_216(iParam1, iParam0, iVar0, 0) && !unk_0x7DA173D4FD42F36B(Global_1617902.f_15, 18)) || ((func_187(unk_0xF749B19A9F9B3DBF(iParam1), unk_0xF749B19A9F9B3DBF(iParam0), 0) && unk_0x7DA173D4FD42F36B(Global_1617902.f_15, 23)) && !unk_0x7DA173D4FD42F36B(Global_1617902.f_15, 18)))
			{
				return func_186(1);
			}
			else if (unk_0x7DA173D4FD42F36B(Global_1617902.f_15, 26))
			{
				return func_215(1);
			}
			else
			{
				return func_182(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1573837 || Global_1573828) || Global_1587816[iParam0 /*444*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1573837 == 1 && Global_1573847 == 0))
			{
				return func_186(1);
			}
			else
			{
				return func_182(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1573832 && Global_1573410.f_14 == iParam0)
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
		
		default:
	}
	return 1;
}

var func_210(int iParam0)
{
	return Global_2413817.f_1946.f_44[iParam0 /*2*/].f_1;
}

int func_211(int iParam0)
{
	if (!iParam0 == func_158())
	{
		if (func_213(iParam0, 1))
		{
			return Global_2413817.f_1946.f_11[func_212(iParam0)];
		}
	}
	return -1;
}

int func_212(int iParam0)
{
	if (iParam0 != func_158())
	{
		return Global_1610705[iParam0 /*178*/].f_10;
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
	return Global_1610705[iParam0 /*178*/].f_10 != func_158();
}

int func_214(int iParam0)
{
	if (iParam0 != func_158())
	{
		if (Global_1610705[iParam0 /*178*/].f_10 != func_158())
		{
			return Global_1610705[iParam0 /*178*/].f_10 == iParam0;
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
			if (unk_0xF749B19A9F9B3DBF(iParam0) == -1 && unk_0xF749B19A9F9B3DBF(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0xF749B19A9F9B3DBF(iParam0) == unk_0xF749B19A9F9B3DBF(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0xF749B19A9F9B3DBF(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0xF749B19A9F9B3DBF(iParam0) == iParam2;
	}
	return unk_0xF749B19A9F9B3DBF(iParam0) == iParam2;
}

var func_217()
{
	return Global_2359301.f_2;
}

bool func_218()
{
	return unk_0x7DA173D4FD42F36B(Global_2359301, 4);
}

bool func_219()
{
	return unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_39.f_18, 14);
}

int func_220(int iParam0)
{
	if (func_175(iParam0, 0))
	{
		return 1;
	}
	if (func_221())
	{
		if (iParam0 == unk_0xE0BDAFA1A39552D6())
		{
			return 1;
		}
	}
	if (unk_0x7DA173D4FD42F36B(Global_2418529[iParam0 /*313*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_221()
{
	return unk_0x7DA173D4FD42F36B(Global_2359301, 3);
}

int func_222(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0x6146EFE5BC2DD8DC())
	{
		return 0;
	}
	if (func_232())
	{
		return 0;
	}
	if (!unk_0xDF916BCF4D39E8C2())
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
		if (func_228(unk_0xE0BDAFA1A39552D6(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_227(unk_0xE0BDAFA1A39552D6()))
		{
			return 0;
		}
	}
	if (func_226())
	{
		return 0;
	}
	if (unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
		return 0;
	}
	if (unk_0x3DC360442A11BB38())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0x6F54F6E4D3F3FD07(unk_0xE0BDAFA1A39552D6()))
		{
			return 0;
		}
	}
	if (Global_1573684)
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
	if (Global_68089)
	{
		return 0;
	}
	if (Global_2472483)
	{
		return 0;
	}
	return 1;
}

bool func_223()
{
	return Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_180 != 0;
}

bool func_224()
{
	return Global_2434839.f_568;
}

bool func_225()
{
	return Global_2434839.f_720;
}

bool func_226()
{
	return Global_2428549.f_2482.f_585;
}

int func_227(int iParam0)
{
	if (Global_2418529[iParam0 /*313*/].f_206 == 0)
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
	if (Global_1587816[iParam0 /*444*/] == -1)
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
	return unk_0x7DA173D4FD42F36B(Global_1587816[iParam0 /*444*/].f_13.f_1, 0);
}

bool func_231()
{
	return unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_39.f_18, 0);
}

int func_232()
{
	if (Global_15712 != 0 || unk_0x97D4BC3047CEF5DE())
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
	if (unk_0x17CC0D5008835470() && !bParam2)
	{
		if (unk_0xED165ADF51B05913(unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xED165ADF51B05913(unk_0x1F0E2DBE53276B95(unk_0x1ADBAAC322D61F73(), *uParam0)) >= iParam1)
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
	Global_2469986.f_1 = 0;
	Global_2469986 = 0;
	Global_2469986.f_2 = 0;
	Global_2469986.f_33 = -1;
	Global_2469986.f_34 = -1;
	StringCopy(&(Global_2469986.f_4), "", 64);
	StringCopy(&(Global_2469986.f_39[0 /*16*/]), "", 64);
	Global_2469986.f_38 = 0;
	Global_2469986.f_56 = 0;
	Global_2469986.f_57 = 0;
	Global_2469986.f_58 = -2;
	Global_2469986.f_3 = 0;
	func_236(&(Global_2469986.f_20));
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
	Global_2469986.f_2 = 1;
	Global_2469986.f_38 = 1;
	if (unk_0x2CB436C59D8FC08B())
	{
		if (unk_0x7858D3B2B536FBCF())
		{
			while (unk_0x3250CA0AD18A6E51())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0x7BE022F56D0DD6D5();
			Global_2469986 = 0;
			Global_2469986.f_2 = 0;
		}
		else if (func_202(Global_2469986.f_20))
		{
			if (unk_0xC1CBB5CA861EE944(&(Global_2469986.f_20)))
			{
				if (!unk_0x5297AB380BB36A2E(&(Global_2469986.f_20)))
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
	if (Global_2469986.f_37)
	{
		func_30(0);
	}
	Global_2469986.f_37 = 0;
	Global_2469986.f_3 = 0;
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
		if (!unk_0x5A041CC4F10FF856(func_60()) || unk_0x8E2645554EC732F0())
		{
			Global_2563294 = 1;
			return 0;
		}
		if (Global_2445217)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2563295 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2562803[iVar1 /*73*/].f_2 == 0)
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
	if (bVar0 || unk_0x1CFE5997DD1709D1(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0x535D3302CA34FAFF(iVar3))
		{
			*uParam0 = func_246(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2562803[*uParam0 /*73*/].f_66 = 1;
				}
			}
			Global_2563285 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2563293 = 1;
			Global_2563296 = iParam4;
			Global_2563298 = iParam3;
			Global_2563299 = 1;
			Global_2563297 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2563296 = iParam4;
			Global_2563298 = iParam3;
			Global_2563299 = 1;
			Global_2563297 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_245(1, iParam4);
			Global_2563293 = 0;
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
			unk_0xE27C8E42A97895CF(&(Global_2418529[unk_0xE0BDAFA1A39552D6() /*313*/].f_121.f_71), 0);
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
				unk_0x8FFE442E1A39D51A();
			}
		}
		else if (!bVar0)
		{
			unk_0x00C69F802173480C(Global_2562803[iParam0 /*73*/]);
		}
		func_242(&(Global_2562803[iParam0 /*73*/]));
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
		return Global_2562803[iParam0 /*73*/].f_5 == 1;
	}
	return 0;
}

void func_245(int iParam0, var uParam1)
{
	Global_2446544 = uParam1;
	Global_2446543 = iParam0;
}

int func_246(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2562803[iVar0 /*73*/].f_2 == 0)
		{
			if (!func_247())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2562803[iVar0 /*73*/].f_2 = 1;
			Global_2562803[iVar0 /*73*/].f_1 = uParam5;
			Global_2562803[iVar0 /*73*/].f_3 = uParam1;
			Global_2562803[iVar0 /*73*/].f_4 = uParam2;
			Global_2562803[iVar0 /*73*/].f_7 = uParam3;
			Global_2562803[iVar0 /*73*/].f_5 = 0;
			Global_2562803[iVar0 /*73*/] = iParam0;
			Global_2562803[iVar0 /*73*/].f_6 = iParam4;
			Global_2562803[iVar0 /*73*/].f_69 = uParam8;
			Global_2562803[iVar0 /*73*/].f_68 = uParam7;
			Global_2562803[iVar0 /*73*/].f_72 = 0;
			Global_2563285 = 0;
			if (bParam6)
			{
				Global_2562803[iVar0 /*73*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_247()
{
	if (unk_0x55812CD5A331E1F8())
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
		iVar0 = unk_0x3D1E58EDBE304B09();
	}
	iVar0 = (iVar0 + unk_0x120B02C23A935A34(-1));
	return iVar0;
}

void func_249(bool bParam0)
{
	if (bParam0)
	{
		unk_0xE27C8E42A97895CF(&Global_2284, 20);
	}
	else
	{
		unk_0x99BCB15F954AF579(&Global_2284, 20);
	}
}

void func_250(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_251(char* sParam0)
{
	Global_1598 = 132;
	StringCopy(&Global_15727, sParam0, 64);
	if (Global_14413.f_1 > 3)
	{
		Global_14413.f_1 = 10;
		func_97();
	}
	unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
	unk_0x7AF283DA3BA078CD(4);
	unk_0x7AF283DA3BA078CD(0);
	unk_0x7AF283DA3BA078CD(2);
	unk_0x7291E2F821FCFC04("CELL_CONDFON");
	unk_0x9C174A0D56FFB64A(&Global_15727);
	unk_0xD6360E18957BCDD3();
	func_72("CELL_300");
	func_72("CELL_211");
	func_72("CELL_211");
	unk_0xE97F1B22C5E8989F();
	unk_0xE27C8E42A97895CF(&Global_2283, 20);
	func_91();
	unk_0x99BCB15F954AF579(&Global_2283, 20);
}

void func_252()
{
	unk_0x3364857C2145111A();
	Global_2469986 = 1;
	Global_2469986.f_2 = 0;
	Global_2469986.f_33 = -1;
	Global_2469986.f_34 = -1;
	Global_2469986.f_38 = 0;
}

void func_253()
{
	unk_0x8EBF150526027B8E(iLocal_104);
	unk_0x2B84DF57725231E1(iLocal_104);
	Local_331.f_2978 = 0;
	unk_0x99BCB15F954AF579(&Global_2283, 9);
	unk_0x99BCB15F954AF579(&Global_2283, 29);
	unk_0x99BCB15F954AF579(&Global_2284, 20);
	unk_0x99BCB15F954AF579(&Global_2284, 0);
	unk_0x99BCB15F954AF579(&Global_2284, 18);
	Global_101186.f_32651[12 /*29*/].f_1 = uLocal_303;
	Global_101186.f_32651[2 /*29*/].f_1 = uLocal_304;
	Global_101186.f_32651[0 /*29*/].f_1 = uLocal_305;
	if (Local_331.f_2999 == 1)
	{
		if (unk_0x2CB436C59D8FC08B())
		{
			if (Global_2469986.f_33 == -1)
			{
				func_237();
			}
		}
	}
	unk_0xF5DF8F3392CDD07B();
}

void func_254()
{
	if (!Global_69521)
	{
		if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
		{
			if (unk_0x7DA173D4FD42F36B(Global_2283, 11))
			{
				if (!Global_14356)
				{
					unk_0x3446D2517750B8F3(unk_0x06736567F820A39E(), 0, 1);
				}
				if (Global_69521)
				{
					unk_0x6553935614875699(unk_0x06736567F820A39E(), 244, 1);
					unk_0x6553935614875699(unk_0x06736567F820A39E(), 243, 1);
					unk_0x6553935614875699(unk_0x06736567F820A39E(), 242, 1);
				}
				unk_0x99BCB15F954AF579(&Global_2283, 11);
			}
		}
	}
}

void func_255()
{
	int iVar0[148];
	int iVar149;
	int iVar150;
	int iVar151;
	
	Global_101186.f_32651[74 /*29*/].f_1 = 180;
	Global_101186.f_32651[75 /*29*/].f_1 = 190;
	func_142(Global_14394, "SET_DATA_SLOT_EMPTY", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4EDE34FBADD967A6(0);
	iLocal_94 = 0;
	iLocal_133 = 0;
	iLocal_116 = 0;
	func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), 0f, -1f, -1f, "CELL_232", "CELL_233", "CELL_393", 0, 0);
	iVar149 = 0;
	while (iVar149 < 147)
	{
		iVar150 = 0;
		iVar151 = 147;
		Global_101186.f_32651[iVar151 /*29*/].f_1 = 5000;
		func_16();
		while (iVar150 < 147)
		{
			if (unk_0x7DA173D4FD42F36B(Global_2284, 0))
			{
				if ((iVar150 == 2 || iVar150 == 0) || iVar150 == 12)
				{
					Global_101186.f_32651[12 /*29*/].f_1 = 3;
					Global_101186.f_32651[2 /*29*/].f_1 = 1;
					Global_101186.f_32651[0 /*29*/].f_1 = 2;
					bLocal_91 = true;
				}
				else
				{
					bLocal_91 = false;
				}
			}
			else if (Global_101186.f_32651[iVar150 /*29*/].f_12[Global_14413] == 1)
			{
				bLocal_91 = true;
			}
			else
			{
				bLocal_91 = false;
			}
			if (bLocal_91)
			{
				if (iVar150 != Global_14413)
				{
					if (iVar0[iVar150] == 0)
					{
						if (Global_101186.f_32651[iVar150 /*29*/].f_19[Global_14413] == 1 || func_79(iVar150, Global_14413))
						{
							fLocal_92 = (unk_0xBBDA792448DB5A89(Global_101186.f_32651[iVar150 /*29*/].f_1) / 100f);
						}
						else
						{
							fLocal_92 = unk_0xBBDA792448DB5A89(Global_101186.f_32651[iVar150 /*29*/].f_1);
						}
						if (Global_101186.f_32651[iVar151 /*29*/].f_19[Global_14413] == 1 || func_79(iVar151, Global_14413))
						{
							fLocal_93 = (unk_0xBBDA792448DB5A89(Global_101186.f_32651[iVar151 /*29*/].f_1) / 100f);
						}
						else
						{
							fLocal_93 = unk_0xBBDA792448DB5A89(Global_101186.f_32651[iVar151 /*29*/].f_1);
						}
						if (fLocal_92 < fLocal_93)
						{
							iVar151 = iVar150;
							if (unk_0x7DA173D4FD42F36B(Global_2284, 0))
							{
								if (iVar151 == 2)
								{
									func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 0f, -1f, -1f, "CELL_7001", &(Global_101186.f_32651[iVar151 /*29*/].f_3), &(Global_101186.f_32651[iVar151 /*29*/].f_7), 0, 0);
								}
								if (iVar151 == 0)
								{
									func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 0f, -1f, -1f, "CELL_7002", &(Global_101186.f_32651[iVar151 /*29*/].f_3), &(Global_101186.f_32651[iVar151 /*29*/].f_7), 0, 0);
								}
								if (iVar151 == 12)
								{
									func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 0f, -1f, -1f, "CELL_7003", &(Global_101186.f_32651[iVar151 /*29*/].f_3), "CELL_E_311", 0, 0);
								}
							}
						}
					}
				}
			}
			iVar150++;
		}
		Global_14419[iVar149] = iVar151;
		iVar0[iVar151] = 1;
		if (!unk_0x7DA173D4FD42F36B(Global_2284, 0))
		{
			if (Global_101186.f_32651[iVar151 /*29*/].f_12[Global_14413] == 1)
			{
				if (iVar150 != Global_14413)
				{
					if (Global_101186.f_32651[iVar151 /*29*/].f_24[Global_14413] == 0)
					{
						if (Global_101186.f_32651[iVar151 /*29*/].f_19[Global_14413] == 1 || func_79(iVar151, Global_14413))
						{
							func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 1f, -1f, -1f, &(Global_117[iVar151 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
						else
						{
							func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 0f, -1f, -1f, &(Global_117[iVar151 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
					}
					else if (Global_101186.f_32651[iVar151 /*29*/].f_19[Global_14413] == 1 || func_79(iVar151, Global_14413))
					{
						func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 1f, -1f, -1f, &(Global_101186.f_32651[iVar151 /*29*/].f_3), &(Global_101186.f_32651[iVar151 /*29*/].f_3), &(Global_101186.f_32651[iVar151 /*29*/].f_7), 0, 0);
					}
					else
					{
						func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 0f, -1f, -1f, &(Global_101186.f_32651[iVar151 /*29*/].f_3), &(Global_101186.f_32651[iVar151 /*29*/].f_3), &(Global_101186.f_32651[iVar151 /*29*/].f_7), 0, 0);
					}
				}
			}
		}
		if (Global_101186.f_32651[iVar149 /*29*/].f_12[Global_14413] == 1)
		{
			if (iVar149 != Global_14413)
			{
				iLocal_94++;
			}
		}
		iVar149++;
	}
	if (!unk_0x7DA173D4FD42F36B(Global_2284, 0))
	{
		if (unk_0x2CB436C59D8FC08B())
		{
			if (Global_14356 == 0)
			{
				func_257();
			}
		}
	}
	func_256();
}

void func_256()
{
	if (!Global_14413.f_1 == 10 && !Global_14413.f_1 == 9)
	{
		if (unk_0x7DA173D4FD42F36B(Global_2283, 9))
		{
			unk_0x4EDE34FBADD967A6(750);
		}
		if (Global_14413.f_1 > 6)
		{
			func_142(Global_14394, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
			if (unk_0x7DA173D4FD42F36B(Global_2284, 0))
			{
				func_140(Global_14394, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
			}
			else
			{
				func_140(Global_14394, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
			}
			Global_2286 = 99;
			if (unk_0x7DA173D4FD42F36B(Global_2283, 9))
			{
				if (Global_14401)
				{
					func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
					func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
					func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_139(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x99BCB15F954AF579(&Global_2283, 17);
			}
			else if (unk_0x7DA173D4FD42F36B(Global_2284, 0))
			{
				if (Global_14401)
				{
					func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
					func_139(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
					func_139(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_139(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14401)
			{
				if (iLocal_94 > 0)
				{
					func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				}
				else
				{
					func_139(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				}
				if (Global_14356 == 0)
				{
					func_139(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, "CELL_207", 0, 0, 0, 0);
					unk_0xE27C8E42A97895CF(&Global_2283, 17);
				}
				else
				{
					func_139(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0xE27C8E42A97895CF(&Global_2283, 17);
				}
				func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				if (iLocal_94 > 0)
				{
					func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				else
				{
					func_139(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_139(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xE27C8E42A97895CF(&Global_2283, 17);
				func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
	Global_101186.f_32651[12 /*29*/].f_1 = uLocal_303;
	Global_101186.f_32651[2 /*29*/].f_1 = uLocal_304;
	Global_101186.f_32651[0 /*29*/].f_1 = uLocal_305;
}

void func_257()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar16;
	int iVar17;
	
	Global_101186.f_32651[74 /*29*/].f_1 = 180;
	Global_101186.f_32651[75 /*29*/].f_1 = 190;
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iLocal_95 = iLocal_94;
	iLocal_96 = iLocal_95;
	func_264(&Local_331);
	iVar16 = 0;
	if (Global_69521)
	{
		if (func_260() == 0)
		{
			iVar16 = 1;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar0 = unk_0x801C03D92F1C6755(iVar2);
		if (func_160(iVar0, 0, 1))
		{
			if (iVar16 == 0)
			{
				if (!iVar0 == unk_0xE0BDAFA1A39552D6())
				{
					Local_331[iVar1] = iVar0;
					func_259(unk_0x3DB24415831CBC43(iVar0));
					iVar1++;
				}
			}
		}
		iVar2++;
	}
	Local_331.f_33 = iVar1;
	iVar2 = 0;
	iVar1 = 0;
	if (func_162(unk_0xE0BDAFA1A39552D6()))
	{
		iVar17 = unk_0x41B2BDC5EBE2666D();
		if (iVar17 > 100)
		{
			iVar17 = 100;
		}
		iVar2 = 0;
		while (iVar2 <= (iVar17 - 1))
		{
			if (unk_0xF0999E139169EC2A(unk_0x203A297281C2C5DF(iVar2)))
			{
				if (unk_0x16F8058D17073346(unk_0x203A297281C2C5DF(iVar2)))
				{
					Var3 = { func_258(iVar2) };
					if (!unk_0x6732F309419E1AE1(&Var3))
					{
						if (iVar16 == 0)
						{
							if (iVar1 < 100)
							{
								Local_331.f_34[iVar1 /*29*/] = { Var3 };
								if (unk_0xB6FEE919E18FF45B())
								{
									StringCopy(&(Local_331.f_34[iVar1 /*29*/].f_13), unk_0xD59564BE25EDCB03(iVar2), 64);
								}
								else
								{
									StringCopy(&(Local_331.f_34[iVar1 /*29*/].f_13), unk_0x203A297281C2C5DF(iVar2), 64);
								}
								func_259(&(Local_331.f_34[iVar1 /*29*/].f_13));
								iVar1++;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	Local_331.f_2935 = (Local_331.f_33 + iVar1);
}

struct<13> func_258(int iParam0)
{
	struct<13> Var0;
	
	unk_0x36A320FDDACA51C8(iParam0, &Var0, 13);
	return Var0;
}

void func_259(var uParam0)
{
	unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
	unk_0xB62735E5BEC5ABF8(unk_0xBBDA792448DB5A89(2));
	unk_0xB62735E5BEC5ABF8(unk_0xBBDA792448DB5A89(iLocal_95));
	unk_0xB62735E5BEC5ABF8(0f);
	unk_0x7291E2F821FCFC04("STRING");
	unk_0x9C174A0D56FFB64A(uParam0);
	unk_0xD6360E18957BCDD3();
	func_72("CELL_MP_999");
	func_72("CELL_MP_999");
	unk_0xE97F1B22C5E8989F();
	iLocal_95++;
	iLocal_94++;
}

int func_260()
{
	if (Global_1312446)
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
	
	uVar0 = Global_2494881[iParam0 /*5*/][func_59(iParam1)];
	if (unk_0x4E4F28F5B7A7C06C(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_262()
{
	return Global_1315901;
}

bool func_263()
{
	return Global_1315903;
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
	int iVar0[148];
	int iVar149;
	int iVar150;
	int iVar151;
	
	Global_101186.f_32651[74 /*29*/].f_1 = 180;
	Global_101186.f_32651[75 /*29*/].f_1 = 190;
	func_142(Global_14394, "SET_DATA_SLOT_EMPTY", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4EDE34FBADD967A6(0);
	func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), 0f, -1f, -1f, "CELL_232", "CELL_233", "CELL_393", 0, 0);
	iLocal_94 = 0;
	if (!unk_0x7DA173D4FD42F36B(Global_2284, 0))
	{
		if (unk_0x2CB436C59D8FC08B())
		{
			if (Global_14356 == 0)
			{
				func_266();
			}
		}
	}
	iLocal_97 = iLocal_94;
	iLocal_133 = 0;
	iLocal_116 = 0;
	iVar149 = iLocal_94;
	while (iVar149 < 147)
	{
		iVar150 = 0;
		iVar151 = 147;
		Global_101186.f_32651[iVar151 /*29*/].f_1 = 5000;
		func_16();
		while (iVar150 < 147)
		{
			if (unk_0x7DA173D4FD42F36B(Global_2284, 0))
			{
				if ((iVar150 == 2 || iVar150 == 0) || iVar150 == 12)
				{
					Global_101186.f_32651[12 /*29*/].f_1 = 3;
					Global_101186.f_32651[2 /*29*/].f_1 = 1;
					Global_101186.f_32651[0 /*29*/].f_1 = 2;
					bLocal_91 = true;
				}
				else
				{
					bLocal_91 = false;
				}
			}
			else if (Global_101186.f_32651[iVar150 /*29*/].f_12[Global_14413] == 1)
			{
				bLocal_91 = true;
			}
			else
			{
				bLocal_91 = false;
			}
			if (bLocal_91)
			{
				if (iVar150 != Global_14413)
				{
					if (iVar0[iVar150] == 0)
					{
						if (Global_101186.f_32651[iVar150 /*29*/].f_19[Global_14413] == 1 || func_79(iVar150, Global_14413))
						{
							fLocal_92 = (unk_0xBBDA792448DB5A89(Global_101186.f_32651[iVar150 /*29*/].f_1) / 100f);
						}
						else
						{
							fLocal_92 = unk_0xBBDA792448DB5A89(Global_101186.f_32651[iVar150 /*29*/].f_1);
						}
						if (Global_101186.f_32651[iVar151 /*29*/].f_19[Global_14413] == 1 || func_79(iVar151, Global_14413))
						{
							fLocal_93 = (unk_0xBBDA792448DB5A89(Global_101186.f_32651[iVar151 /*29*/].f_1) / 100f);
						}
						else
						{
							fLocal_93 = unk_0xBBDA792448DB5A89(Global_101186.f_32651[iVar151 /*29*/].f_1);
						}
						if (fLocal_92 < fLocal_93)
						{
							iVar151 = iVar150;
							if (unk_0x7DA173D4FD42F36B(Global_2284, 0))
							{
								if (iVar151 == 2)
								{
									func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 0f, -1f, -1f, "CELL_7001", &(Global_101186.f_32651[iVar151 /*29*/].f_3), &(Global_101186.f_32651[iVar151 /*29*/].f_7), 0, 0);
								}
								if (iVar151 == 0)
								{
									func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 0f, -1f, -1f, "CELL_7002", &(Global_101186.f_32651[iVar151 /*29*/].f_3), &(Global_101186.f_32651[iVar151 /*29*/].f_7), 0, 0);
								}
								if (iVar151 == 12)
								{
									func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 0f, -1f, -1f, "CELL_7003", &(Global_101186.f_32651[iVar151 /*29*/].f_3), "CELL_E_311", 0, 0);
								}
							}
						}
					}
				}
			}
			iVar150++;
		}
		Global_14419[iVar149] = iVar151;
		iVar0[iVar151] = 1;
		if (!unk_0x7DA173D4FD42F36B(Global_2284, 0))
		{
			if (Global_101186.f_32651[iVar151 /*29*/].f_12[Global_14413] == 1)
			{
				if (iVar150 != Global_14413)
				{
					if (Global_101186.f_32651[iVar151 /*29*/].f_24[Global_14413] == 0)
					{
						if (Global_101186.f_32651[iVar151 /*29*/].f_19[Global_14413] == 1 || func_79(iVar151, Global_14413))
						{
							func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 1f, -1f, -1f, &(Global_117[iVar151 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
						else
						{
							func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 0f, -1f, -1f, &(Global_117[iVar151 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
					}
					else if (Global_101186.f_32651[iVar151 /*29*/].f_19[Global_14413] == 1 || func_79(iVar151, Global_14413))
					{
						func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 1f, -1f, -1f, &(Global_101186.f_32651[iVar151 /*29*/].f_3), &(Global_101186.f_32651[iVar151 /*29*/].f_3), &(Global_101186.f_32651[iVar151 /*29*/].f_7), 0, 0);
					}
					else
					{
						func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 0f, -1f, -1f, &(Global_101186.f_32651[iVar151 /*29*/].f_3), &(Global_101186.f_32651[iVar151 /*29*/].f_3), &(Global_101186.f_32651[iVar151 /*29*/].f_7), 0, 0);
					}
				}
			}
		}
		if (Global_101186.f_32651[iVar149 /*29*/].f_12[Global_14413] == 1)
		{
			if (iVar149 != Global_14413)
			{
				iLocal_94++;
			}
		}
		iVar149++;
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
	
	Global_101186.f_32651[74 /*29*/].f_1 = 180;
	Global_101186.f_32651[75 /*29*/].f_1 = 190;
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iLocal_95 = iLocal_94;
	iLocal_96 = iLocal_95;
	func_264(&Local_331);
	iVar16 = 0;
	if (Global_69521)
	{
		if (func_260() == 0)
		{
			iVar16 = 1;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar0 = unk_0x801C03D92F1C6755(iVar2);
		if (func_160(iVar0, 0, 1))
		{
			if (iVar16 == 0)
			{
				if (!iVar0 == unk_0xE0BDAFA1A39552D6())
				{
					Local_331[iVar1] = iVar0;
					func_267(unk_0x3DB24415831CBC43(iVar0));
					iVar1++;
				}
			}
		}
		iVar2++;
	}
	Local_331.f_33 = iVar1;
	iVar1 = 0;
	iVar2 = 0;
	if (func_162(unk_0xE0BDAFA1A39552D6()))
	{
		iVar17 = unk_0x41B2BDC5EBE2666D();
		if (iVar17 > 100)
		{
			iVar17 = 100;
		}
		iVar2 = 0;
		while (iVar2 <= (iVar17 - 1))
		{
			if (unk_0xF0999E139169EC2A(unk_0x203A297281C2C5DF(iVar2)))
			{
				if (unk_0x16F8058D17073346(unk_0x203A297281C2C5DF(iVar2)))
				{
					Var3 = { func_258(iVar2) };
					if (!unk_0x6732F309419E1AE1(&Var3))
					{
						if (iVar16 == 0)
						{
							if (iVar1 < 100)
							{
								Local_331.f_34[iVar1 /*29*/] = { Var3 };
								if (unk_0xB6FEE919E18FF45B())
								{
									StringCopy(&(Local_331.f_34[iVar1 /*29*/].f_13), unk_0xD59564BE25EDCB03(iVar2), 64);
								}
								else
								{
									StringCopy(&(Local_331.f_34[iVar1 /*29*/].f_13), unk_0x203A297281C2C5DF(iVar2), 64);
								}
								func_267(&(Local_331.f_34[iVar1 /*29*/].f_13));
								iVar1++;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	Local_331.f_2935 = (Local_331.f_33 + iVar1);
}

void func_267(var uParam0)
{
	unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
	unk_0xB62735E5BEC5ABF8(unk_0xBBDA792448DB5A89(2));
	unk_0xB62735E5BEC5ABF8(unk_0xBBDA792448DB5A89(iLocal_95));
	unk_0xB62735E5BEC5ABF8(0f);
	unk_0x7291E2F821FCFC04("STRING");
	unk_0x9C174A0D56FFB64A(uParam0);
	unk_0xD6360E18957BCDD3();
	func_72("CELL_MP_999");
	func_72("CELL_MP_999");
	unk_0xE97F1B22C5E8989F();
	iLocal_95++;
	iLocal_94++;
}

