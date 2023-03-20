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
	unk_0x60F2C6DC397A6833();
	unk_0x26545538B51562AD(&Global_2283, 17);
	unk_0xF17F4B0641AB2DE1(&Global_2284, 18);
	unk_0xF17F4B0641AB2DE1(&Global_2284, 20);
	uLocal_303 = Global_101154.f_32575[12 /*29*/].f_1;
	uLocal_304 = Global_101154.f_32575[2 /*29*/].f_1;
	uLocal_305 = Global_101154.f_32575[0 /*29*/].f_1;
	iLocal_104 = unk_0x9EE81D7901D9BCE2();
	if (Global_69489)
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
	iLocal_131 = unk_0xA0F74982C6AAA9D4();
	Global_101154.f_32575[74 /*29*/].f_1 = 180;
	Global_101154.f_32575[75 /*29*/].f_1 = 190;
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xF426A5DE932B3BEE(Global_2284, 18))
		{
			func_254();
			if (Global_14413.f_1 > 3)
			{
				Global_14413.f_1 = 8;
			}
			unk_0xF17F4B0641AB2DE1(&Global_2284, 18);
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
					if (unk_0xF426A5DE932B3BEE(Global_2283, 16))
					{
						func_169();
					}
					else
					{
						func_166();
						if (unk_0xF426A5DE932B3BEE(Global_2284, 0))
						{
							iLocal_132 = unk_0xA0F74982C6AAA9D4();
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
					if (!unk_0xF426A5DE932B3BEE(Global_2283, 9))
					{
						if (func_145(2, Global_14385, 0))
						{
							if (unk_0xF426A5DE932B3BEE(Global_2284, 0))
							{
							}
							else if (Global_14356 == 0)
							{
								if (!unk_0xF426A5DE932B3BEE(Global_2284, 19))
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
										unk_0x26545538B51562AD(&Global_2283, 17);
										func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
									}
									else
									{
										func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
										func_139(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
										unk_0x26545538B51562AD(&Global_2283, 17);
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
								if (unk_0xC1C5B83BB6719C6C(&(Global_101154.f_32575[Global_1598 /*29*/].f_3), &(Global_2121[iLocal_329 /*16*/])))
								{
									if (!unk_0xC1C5B83BB6719C6C(&(Global_2121[iLocal_329 /*16*/].f_8), "CELL_SFUN_NULL"))
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
								unk_0x8CED8F78CC31BEF2(Global_14394, "GET_CURRENT_SELECTION");
								uLocal_99 = unk_0xEF0E4A8ABAA0D524();
								while (!unk_0x20B35B8C39C5787D(uLocal_99))
								{
									unk_0x4EDE34FBADD967A6(0);
								}
								iLocal_100 = unk_0x200C167A17C879D9(uLocal_99);
								func_120();
							}
						}
						func_166();
						if (bLocal_327 == 1)
						{
							if (!Global_101154.f_16793.f_396)
							{
								if (!func_116(Global_14413, Global_1598))
								{
									Global_101154.f_16793.f_396 = 1;
								}
							}
						}
						if (func_116(Global_14413, Global_1598))
						{
							if (!Global_101154.f_16793.f_397)
							{
								if (bLocal_326 == 1)
								{
									if (func_115(Global_87458))
									{
										switch (func_113("AM_H_BBUDDY"))
										{
											case 2:
												func_111("AM_H_BBUDDY", 2, 500, 10000, 10000, 7, 0, 0, 0);
												break;
											
											case 1:
												Global_101154.f_16793.f_397 = 1;
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
												Global_101154.f_16793.f_397 = 1;
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
						if (Global_69489)
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
					if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
					{
						if (unk_0x170C6E2649B67440(unk_0x4D29100D094E5511()))
						{
							if (func_145(2, Global_14381, 0))
							{
								if (unk_0xF426A5DE932B3BEE(Global_2284, 0))
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
										if (Global_2465472.f_1 || unk_0xF426A5DE932B3BEE(Global_2284, 20))
										{
											Global_14413.f_1 = 7;
											func_142(Global_14394, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
											if (unk_0xF426A5DE932B3BEE(Global_2284, 0))
											{
												func_140(Global_14394, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
											}
											else
											{
												func_140(Global_14394, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
											}
											unk_0x972F93B6DF7649AC(iLocal_104);
											iLocal_127 = 0;
										}
									}
									else
									{
										func_254();
										Global_14413.f_1 = 7;
										func_2();
										func_142(Global_14394, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
										if (unk_0xF426A5DE932B3BEE(Global_2284, 0))
										{
											func_140(Global_14394, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
										}
										else
										{
											func_140(Global_14394, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
										}
										unk_0x972F93B6DF7649AC(iLocal_104);
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
		if (unk_0xF426A5DE932B3BEE(Global_2283, 9))
		{
			unk_0x4EDE34FBADD967A6(750);
		}
		if (Global_14413.f_1 > 6)
		{
			func_142(Global_14394, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
			if (unk_0xF426A5DE932B3BEE(Global_2284, 0))
			{
				func_140(Global_14394, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
			}
			else
			{
				func_140(Global_14394, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
			}
			Global_2286 = 99;
			if (unk_0xF426A5DE932B3BEE(Global_2283, 9))
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
				unk_0xF17F4B0641AB2DE1(&Global_2283, 17);
			}
			else if (unk_0xF426A5DE932B3BEE(Global_2284, 0))
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
					unk_0x26545538B51562AD(&Global_2283, 17);
				}
				else
				{
					func_139(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0x26545538B51562AD(&Global_2283, 17);
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
				unk_0x26545538B51562AD(&Global_2283, 17);
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
				if (unk_0x291E0638573BD4A2("LOWCAAU"))
				{
					unk_0x1DE7DE1986BBED16("LOWCAAU", 14);
					while (!unk_0x911CCA58116D31F0(14))
					{
						unk_0x4EDE34FBADD967A6(0);
					}
				}
				StringCopy(&cLocal_134, "LOWCA_CALL10_1", 16);
			}
			else
			{
				if (unk_0x291E0638573BD4A2(&Global_16735))
				{
					unk_0x8378AB3CED5FF44A(&Global_16735, 1);
					while (!unk_0x911CCA58116D31F0(1))
					{
						unk_0x4EDE34FBADD967A6(0);
					}
				}
				cLocal_134 = { Global_117[Global_1598 /*10*/] };
				StringConCat(&cLocal_134, "_1", 16);
			}
			if (unk_0x2A19A119886EC3BF(&cLocal_134) || iLocal_306 == 1)
			{
				iLocal_128 = Global_16732;
				if (func_74(129))
				{
					iLocal_128 = Global_88039;
				}
			}
			else
			{
				iLocal_128 = Global_16731;
			}
			if ((iLocal_306 == 1 && unk_0xC1C5B83BB6719C6C(&cLocal_307, "CELLPHONE_CHEAT")) && Global_69489 == 0)
			{
				if ((unk_0xC1C5B83BB6719C6C(&Local_311, "CHEAT_SEAPLANE") || unk_0xC1C5B83BB6719C6C(&Local_311, "CHEAT_DUELC")) || unk_0xC1C5B83BB6719C6C(&Local_311, "CHEAT_BUBBLE"))
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
					iLocal_129 = unk_0xA0F74982C6AAA9D4();
					unk_0x8CED8F78CC31BEF2(Global_14394, "SET_DATA_SLOT");
					unk_0xD2DC8221939F80F7(4);
					unk_0xD2DC8221939F80F7(0);
					unk_0xD2DC8221939F80F7(3);
					unk_0x37B602106C6E0E91("STRING");
					unk_0x832BC45EF0DD5D4A(&cLocal_109, -1);
					unk_0xD3076D52458B36EF();
					func_72("CELL_300");
					if (unk_0xC1C5B83BB6719C6C(&Local_311, "CHEAT_MONOC"))
					{
						func_72("CELL_MONOSIGNAL");
					}
					else if (unk_0xC1C5B83BB6719C6C(&Local_311, "CHEAT_DIRECTOR"))
					{
						func_72("CELL_DRCT");
					}
					else
					{
						func_72("CELL_CHEAT");
					}
					func_72("CELL_195");
					unk_0x7E5FA681CB7A2EF7();
					func_142(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
					iLocal_127 = 1;
				}
				else
				{
					iLocal_127 = 2;
					iLocal_129 = unk_0xA0F74982C6AAA9D4();
				}
			}
			else
			{
				iLocal_127 = 2;
				iLocal_129 = unk_0xA0F74982C6AAA9D4();
			}
			break;
		
		case 1:
			iLocal_130 = unk_0xA0F74982C6AAA9D4();
			if ((iLocal_130 - iLocal_129) > 1500)
			{
				iLocal_127 = 3;
			}
			break;
		
		case 2:
			iLocal_130 = unk_0xA0F74982C6AAA9D4();
			if (iLocal_128 != Global_16731)
			{
				if (unk_0x1E18C8095B37D998(iLocal_104))
				{
					if (Global_2465472.f_37 == 0)
					{
						if (Global_14356)
						{
							unk_0x954BCDB8FDB0AC0F(iLocal_104, "Dial_and_Remote_Ring", &Global_14402, 1);
						}
						else if ((iLocal_130 - iLocal_129) > 1700)
						{
							unk_0x954BCDB8FDB0AC0F(iLocal_104, "Remote_Ring", &Global_14402, 1);
						}
					}
				}
			}
			else if ((func_74(130) || func_74(132)) || func_74(128))
			{
				if (unk_0x1E18C8095B37D998(iLocal_104))
				{
					if (Global_2465472.f_37 == 0)
					{
						if (Global_14356)
						{
							unk_0x954BCDB8FDB0AC0F(iLocal_104, "Dial_and_Remote_Ring", &Global_14402, 1);
						}
						else if ((iLocal_130 - iLocal_129) > 1700)
						{
							unk_0x954BCDB8FDB0AC0F(iLocal_104, "Remote_Ring", &Global_14402, 1);
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
						if (!unk_0xF426A5DE932B3BEE(Global_2284, 20))
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
						unk_0x972F93B6DF7649AC(iLocal_104);
						iLocal_118 = 0;
						unk_0x5AE11BC36633DE4E(0);
						if (Global_101154.f_32575[Global_1598 /*29*/].f_24[Global_14413] == 0)
						{
							if (Global_1598 == 132)
							{
								unk_0x8CED8F78CC31BEF2(Global_14394, "SET_DATA_SLOT");
								unk_0xD2DC8221939F80F7(4);
								unk_0xD2DC8221939F80F7(0);
								unk_0xD2DC8221939F80F7(2);
								unk_0x37B602106C6E0E91("CELL_CONDFON");
								unk_0xF9E9E11D6DF3EBF8(&Global_15727);
								unk_0xD3076D52458B36EF();
								func_72("CELL_300");
								func_72("CELL_220");
								func_72("CELL_219");
								unk_0x7E5FA681CB7A2EF7();
							}
							else
							{
								func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(5), -1f, -1f, &(Global_117[Global_1598 /*10*/].f_4), "CELL_300", "CELL_220", "CELL_195", 0);
							}
						}
						else
						{
							func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(5), -1f, -1f, &(Global_101154.f_32575[Global_1598 /*29*/].f_3), &(Global_101154.f_32575[Global_1598 /*29*/].f_7), "CELL_220", &(Global_101154.f_32575[Global_1598 /*29*/].f_3), 0);
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
				if (unk_0xC1C5B83BB6719C6C(&cLocal_307, "CELLPHONE_CHEAT") && Global_69489 == 0)
				{
					if (unk_0xC1C5B83BB6719C6C(&Local_311, "CHEAT_MONOC"))
					{
						if (Global_3087 == 0)
						{
							Global_3087 = 1;
							Global_101154.f_12741[0 /*20*/].f_6 = 5;
							Global_101154.f_12741[2 /*20*/].f_6 = 5;
							Global_101154.f_12741[1 /*20*/].f_6 = 5;
							if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
							{
								if (!unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1))
								{
									if (!unk_0xACD604A3AE9C4A92(4, unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), 40f))
									{
										unk_0x704886F0F0CF2BF3(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1) + Vector(2f, 0f, 0f), 4, 0.1f, 1, 0, 1065353216);
									}
								}
							}
						}
						else
						{
							Global_3087 = 0;
						}
					}
					if (unk_0xC1C5B83BB6719C6C(&Local_311, "CHEAT_SUPJUM"))
					{
						func_71(0, 0);
					}
					if (unk_0xC1C5B83BB6719C6C(&Local_311, "CHEAT_HEALA"))
					{
						func_71(6, 0);
					}
					if (unk_0xC1C5B83BB6719C6C(&Local_311, "CHEAT_SLIDEYC"))
					{
						func_71(1, 0);
					}
					if (unk_0xC1C5B83BB6719C6C(&Local_311, "CHEAT_FASTR"))
					{
						func_71(2, 0);
					}
					if (unk_0xC1C5B83BB6719C6C(&Local_311, "CHEAT_WANTDN"))
					{
						func_71(9, 0);
					}
					if (unk_0xC1C5B83BB6719C6C(&Local_311, "CHEAT_WANTUP"))
					{
						func_71(8, 0);
					}
					if (unk_0xC1C5B83BB6719C6C(&Local_311, "CHEAT_WEATHER"))
					{
						func_71(5, 0);
					}
					if (unk_0xC1C5B83BB6719C6C(&Local_311, "CHEAT_FASTS"))
					{
						func_71(3, 0);
					}
					if (unk_0xC1C5B83BB6719C6C(&Local_311, "CHEAT_POWER"))
					{
						func_71(7, 0);
					}
					if (unk_0xC1C5B83BB6719C6C(&Local_311, "CHEAT_CHUTE"))
					{
						func_71(10, 0);
					}
					if (unk_0xC1C5B83BB6719C6C(&Local_311, "CHEAT_BANG"))
					{
						func_71(11, 0);
					}
					if (unk_0xC1C5B83BB6719C6C(&Local_311, "CHEAT_FLAMB"))
					{
						func_71(12, 0);
					}
					if (unk_0xC1C5B83BB6719C6C(&Local_311, "CHEAT_EXPMEL"))
					{
						func_71(13, 0);
					}
					if (unk_0xC1C5B83BB6719C6C(&Local_311, "CHEAT_ZEROG"))
					{
						func_71(14, 0);
					}
					if (unk_0xC1C5B83BB6719C6C(&Local_311, "CHEAT_INVINC"))
					{
						func_71(15, 0);
					}
					if (unk_0xC1C5B83BB6719C6C(&Local_311, "CHEAT_SLOWMO"))
					{
						func_71(16, 0);
					}
					if (unk_0xC1C5B83BB6719C6C(&Local_311, "CHEAT_SKYFA"))
					{
						func_71(17, 0);
					}
					if (unk_0xC1C5B83BB6719C6C(&Local_311, "CHEAT_DRUNK"))
					{
						func_71(18, 0);
					}
					if (unk_0xC1C5B83BB6719C6C(&Local_311, "CHEAT_DEADEYE"))
					{
						func_71(19, 0);
					}
					if (unk_0xC1C5B83BB6719C6C(&Local_311, "CHEAT_WEAPONS"))
					{
						func_71(4, 0);
					}
					if (unk_0xC1C5B83BB6719C6C(&Local_311, "CHEAT_BUZZARD"))
					{
						func_71(20, joaat("buzzard"));
					}
					if (unk_0xC1C5B83BB6719C6C(&Local_311, "CHEAT_COMET2"))
					{
						func_71(20, joaat("comet2"));
					}
					if (unk_0xC1C5B83BB6719C6C(&Local_311, "CHEAT_BMX"))
					{
						func_71(20, joaat("bmx"));
					}
					if (unk_0xC1C5B83BB6719C6C(&Local_311, "CHEAT_CADDY"))
					{
						func_71(20, joaat("caddy"));
					}
					if (unk_0xC1C5B83BB6719C6C(&Local_311, "CHEAT_DUSTER"))
					{
						func_71(20, joaat("duster"));
					}
					if (unk_0xC1C5B83BB6719C6C(&Local_311, "CHEAT_PCJ"))
					{
						func_71(20, joaat("pcj"));
					}
					if (unk_0xC1C5B83BB6719C6C(&Local_311, "CHEAT_RAPIDGT"))
					{
						func_71(20, joaat("rapidgt"));
					}
					if (unk_0xC1C5B83BB6719C6C(&Local_311, "CHEAT_STRETCH"))
					{
						func_71(20, joaat("stretch"));
					}
					if (unk_0xC1C5B83BB6719C6C(&Local_311, "CHEAT_STUNT"))
					{
						func_71(20, joaat("stunt"));
					}
					if (unk_0xC1C5B83BB6719C6C(&Local_311, "CHEAT_TRASH"))
					{
						func_71(20, joaat("trash"));
					}
					if (unk_0xC1C5B83BB6719C6C(&Local_311, "CHEAT_SANCHEZ"))
					{
						func_71(20, joaat("sanchez"));
					}
					if (func_73())
					{
						if (unk_0xC1C5B83BB6719C6C(&Local_311, "CHEAT_SEAPLANE"))
						{
							func_71(20, joaat("dodo"));
						}
						if (unk_0xC1C5B83BB6719C6C(&Local_311, "CHEAT_DUELC"))
						{
							func_71(20, joaat("dukes2"));
						}
						if (unk_0xC1C5B83BB6719C6C(&Local_311, "CHEAT_BUBBLE"))
						{
							func_71(20, joaat("submersible2"));
						}
					}
					if (unk_0xC1C5B83BB6719C6C(&Local_311, "CHEAT_DIRECTOR"))
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
				else if (unk_0xC1C5B83BB6719C6C(&cLocal_307, "CELLPHONE_CHEAT"))
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
						iVar7 = unk_0xEFEADD7EBD01C0A6();
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
						if (Global_69489)
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
						iLocal_330 = unk_0x3A5708FEE1B560A9(0, 100);
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
						iLocal_330 = unk_0x3A5708FEE1B560A9(0, 100);
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
						iLocal_330 = unk_0x3A5708FEE1B560A9(0, 100);
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
				unk_0x26545538B51562AD(&Global_2284, 31);
			}
			break;
		
		case 4:
			if (unk_0x1E18C8095B37D998(iLocal_104))
			{
				unk_0x954BCDB8FDB0AC0F(iLocal_104, "Remote_Engaged", &Global_14402, 1);
			}
			if (unk_0xC9D9444186B5A374() > 1500)
			{
				if (iLocal_118 == 0)
				{
					if (Global_14413 == 2)
					{
						if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
						{
							func_4(unk_0x27D769C59BC9D030(), "PHONE_CALL_NOT_CONNECTED", 24);
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
	unk_0x83983CFE8950EEAC(uParam0, sParam1, func_5(iParam2), 1);
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
	return unk_0xF426A5DE932B3BEE(Global_101154.f_17264[iParam0 /*6*/], 3);
}

int func_7(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101154.f_7775.f_99.f_58[iParam0];
}

int func_8(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101154.f_7775.f_330[iParam0 /*6*/];
}

void func_9(var uParam0, int iParam1, char* sParam2, char[4] cParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	if (Global_69489 || func_27())
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
					unk_0x94DA6AACA7F07289(0);
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
		if (unk_0x1BF2632AED6B5924())
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
			unk_0xF17F4B0641AB2DE1(&Global_2283, 20);
			unk_0xF17F4B0641AB2DE1(&Global_2284, 17);
			unk_0xF17F4B0641AB2DE1(&Global_2285, 0);
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
			if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
			{
				if (unk_0x1FEDE585C0F25C08(unk_0x27D769C59BC9D030()))
				{
					return 0;
				}
				if (func_15())
				{
					return 0;
				}
				if (unk_0x431C14C947878B67(unk_0x27D769C59BC9D030()))
				{
					return 0;
				}
				if (unk_0xBD036012AF60D938(unk_0x27D769C59BC9D030()))
				{
					return 0;
				}
				if (unk_0x225B3357C492A629(unk_0x27D769C59BC9D030()))
				{
					return 0;
				}
				if (unk_0x397ABA0C937BB0B4(unk_0x27D769C59BC9D030(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69489)
				{
					if (unk_0xA8ED23ED7AA60A97(unk_0x27D769C59BC9D030()))
					{
						return 0;
					}
					if (unk_0x300FBC9A9F898890(unk_0x4D29100D094E5511()))
					{
						return 0;
					}
					if (unk_0xB0821632434D6AED(unk_0x27D769C59BC9D030()))
					{
						return 0;
					}
					if (unk_0x37C10326493962AC(unk_0x4D29100D094E5511()))
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
				if (unk_0xF426A5DE932B3BEE(Global_2283, 9))
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
	unk_0x94DA6AACA7F07289(0);
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
	unk_0xF17F4B0641AB2DE1(&Global_2284, 16);
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
	
	if (Global_69489)
	{
		iVar0 = 0;
		unk_0x4CF6F4DF2C64D299(unk_0x27D769C59BC9D030(), &iVar1, 1);
		if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x32B2DBD1EB9EECE3() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
	{
		if (unk_0xCDA4E7364CE84AA7(unk_0x27D769C59BC9D030(), 78, 1))
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
		if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
		{
			if (unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()) == Global_101154.f_32575[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()) == Global_101154.f_32575[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()) == Global_101154.f_32575[2 /*29*/])
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
		if (Global_69489)
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
	return Global_101154.f_1826.f_539.f_3549;
}

void func_18()
{
	int iVar0;
	
	if (unk_0xD2CFFE76B625AE55(unk_0x27D769C59BC9D030()))
	{
		if (func_21(Global_101154.f_1826.f_539.f_3549) != unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()))
		{
			iVar0 = func_20(unk_0x27D769C59BC9D030());
			if (func_19(iVar0) && (!func_22(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_19(Global_101154.f_1826.f_539.f_3549))
				{
					Global_101154.f_1826.f_539.f_3550 = Global_101154.f_1826.f_539.f_3549;
				}
				Global_101154.f_1826.f_539.f_3551 = iVar0;
				Global_101154.f_1826.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101154.f_1826.f_539.f_3549 != 145)
			{
				Global_101154.f_1826.f_539.f_3551 = Global_101154.f_1826.f_539.f_3549;
			}
			return;
		}
	}
	Global_101154.f_1826.f_539.f_3549 = 145;
}

bool func_19(int iParam0)
{
	return iParam0 < 3;
}

int func_20(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD2CFFE76B625AE55(uParam0))
	{
		iVar1 = unk_0x946C63BD9EF05437(uParam0);
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
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_22(int iParam0)
{
	return Global_35711 == iParam0;
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
	return unk_0xF426A5DE932B3BEE(Global_1338622.f_949, iParam0);
}

void func_25()
{
	unk_0xF022734652B12EB3();
	Global_16723 = 0;
	if ((unk_0x0EFEEF8E6B0B4E34() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		unk_0x94DA6AACA7F07289(0);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (unk_0x1BF2632AED6B5924())
	{
		unk_0x94DA6AACA7F07289(1);
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
	if (!Global_69489)
	{
		if (!unk_0xE4F7206742848BAF(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x6B8EBAC1C87F6645(iParam2, 0);
			}
			else
			{
				unk_0x6B8EBAC1C87F6645(iParam2, 1);
			}
		}
		if (!unk_0xE4F7206742848BAF(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xBDBBE2B9920C24A7(iParam2, 0);
			}
			else
			{
				unk_0xBDBBE2B9920C24A7(iParam2, 1);
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
		unk_0x26545538B51562AD(&Global_2284, 16);
	}
	if (unk_0x0EFEEF8E6B0B4E34())
	{
		unk_0x94DA6AACA7F07289(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x26545538B51562AD(&Global_2283, 30);
	}
	else
	{
		unk_0xF17F4B0641AB2DE1(&Global_2283, 30);
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
				unk_0x38AAAA167C55B731(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0xF10089C8CCEFDB7A(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0xF10089C8CCEFDB7A(Global_14350);
		}
		else
		{
			unk_0xF10089C8CCEFDB7A(Global_14341);
		}
	}
}

int func_32(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xF426A5DE932B3BEE(Global_2283, 14))
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
	if (unk_0xD32535FA4397160F(joaat("cellphone_flashhand")) > 0)
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
	
	unk_0x42B9806B3EED4C70(1);
	unk_0xDF3F6D6CDD523546(2, 201);
	unk_0xDF3F6D6CDD523546(2, 202);
	fVar0 = 0f;
	while ((!unk_0x117D586920E8F7BA(2, 201) && !unk_0x117D586920E8F7BA(2, 202)) || fVar0 < 1f)
	{
		unk_0xDC38CC1E35B6A5D7("VEUI_HDR_ALERT", "VE_DIR_MODE_SURE", 18, 0, 0, -1, 0, 0, 1);
		unk_0x4EDE34FBADD967A6(0);
		fVar0 = (fVar0 + unk_0xFF104D8C26C113A2());
	}
	unk_0x42B9806B3EED4C70(0);
	if (unk_0x117D586920E8F7BA(2, 201))
	{
		unk_0x4E63F662FDE672C3(0);
		Global_100101 = 1;
	}
}

void func_34(int iParam0)
{
	float fVar0;
	char* sVar1;
	
	unk_0x42B9806B3EED4C70(1);
	unk_0xDF3F6D6CDD523546(2, 201);
	fVar0 = 0f;
	while (!unk_0x117D586920E8F7BA(2, 201) || fVar0 < 1f)
	{
		sVar1 = func_35(iParam0, 119);
		unk_0x7B1776B3B53F8D74("FBR_GENERIC", 16384, 0, 0, -1, "FBR_DIR_MODE", sVar1, 1);
		unk_0x4EDE34FBADD967A6(0);
		fVar0 = (fVar0 + unk_0xFF104D8C26C113A2());
	}
	unk_0x42B9806B3EED4C70(0);
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
	if (unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
	{
		return 13;
	}
	if (bParam1)
	{
		if (unk_0xD32535FA4397160F(unk_0x45755F80A3E63D8B()) > 1)
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
	if (Global_88531)
	{
		return 3;
	}
	if (Global_25373)
	{
		return 8;
	}
	if (Global_25268)
	{
		return 8;
	}
	if (Global_2621550)
	{
		if (unk_0xD32535FA4397160F(-1516147206) > 0)
		{
			return 3;
		}
	}
	else if (Global_2621549)
	{
		if (unk_0xD32535FA4397160F(2006115718) > 0)
		{
			return 3;
		}
	}
	else if (unk_0xD32535FA4397160F(joaat("mission_stat_watcher")) > 0)
	{
		return 3;
	}
	if (unk_0xD32535FA4397160F(joaat("finale_choice")) > 0)
	{
		return 3;
	}
	if (unk_0xD32535FA4397160F(joaat("creator")) > 0)
	{
		return 3;
	}
	if (unk_0xD32535FA4397160F(joaat("respawn_controller")) > 0)
	{
		return 13;
	}
	if (func_66(bParam1))
	{
		return 3;
	}
	if (unk_0x91C2FD50D18141F4(unk_0x27D769C59BC9D030()) || unk_0xBD036012AF60D938(unk_0x27D769C59BC9D030()))
	{
		return 12;
	}
	if (func_65(Global_100179, 256))
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
	if (func_51() && !Global_100105)
	{
		return 8;
	}
	if (func_55())
	{
		return 5;
	}
	if (unk_0x5D293E404CA20AA5() || func_50())
	{
		return 4;
	}
	if (func_49())
	{
		return 4;
	}
	if (unk_0xD2CFFE76B625AE55(unk_0x27D769C59BC9D030()))
	{
		if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
		{
			iVar0 = func_40(60);
			if (iVar0 != 0)
			{
				return iVar0;
			}
			if (unk_0x225B3357C492A629(unk_0x27D769C59BC9D030()) || unk_0xF4660FE190F693DA(unk_0x27D769C59BC9D030()) != -1)
			{
				return 11;
			}
			if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1) || Global_100201)
			{
				return 10;
			}
		}
	}
	if (Global_25371)
	{
		return 8;
	}
	if (Global_69487)
	{
		return 4;
	}
	if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
	{
		if (unk_0xC6861DC0B749762A(unk_0x4D29100D094E5511()) > 0 || unk_0xA3626A14E36A87F3(unk_0x4D29100D094E5511(), 1))
		{
			return 6;
		}
		if (unk_0x300FBC9A9F898890(unk_0x4D29100D094E5511()))
		{
			return 8;
		}
		if (unk_0x8D1E4231095B313B(unk_0x27D769C59BC9D030()))
		{
			return 8;
		}
	}
	if (unk_0x0E063DDE8855EC52())
	{
		return 7;
	}
	if (func_39())
	{
		return 8;
	}
	if (Global_25122)
	{
		return 3;
	}
	if (unk_0x2FC8076880D60BD4())
	{
		return 4;
	}
	if (unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), 439.4357f, -997.4747f, 28.9584f, 428.3288f, -997.0398f, 24.8372f, 8f, 0, 1, 0))
	{
		return 9;
	}
	if (unk_0xA8ED23ED7AA60A97(unk_0x27D769C59BC9D030()))
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
	if (unk_0xC72D51D19D0ADB20(unk_0x27D769C59BC9D030()))
	{
		return 9;
	}
	return 0;
}

int func_37(bool bParam0)
{
	if (unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
	{
		return 0;
	}
	if ((((((((((!unk_0x170C6E2649B67440(unk_0x4D29100D094E5511()) || !unk_0x0E14B2E6EB7392B5(unk_0x4D29100D094E5511())) || unk_0x7C2070521268C99E(unk_0x27D769C59BC9D030())) || unk_0x55AE67E25C3C8024(unk_0x27D769C59BC9D030(), 0)) || unk_0x1FEDE585C0F25C08(unk_0x27D769C59BC9D030())) || unk_0x9426D57129B5B113(unk_0x27D769C59BC9D030())) || unk_0x0F74EBD810C90005(unk_0x27D769C59BC9D030())) || unk_0x8D1E4231095B313B(unk_0x27D769C59BC9D030())) || unk_0x0BAF34551BADE6DC(unk_0x27D769C59BC9D030())) || unk_0xBD036012AF60D938(unk_0x27D769C59BC9D030())) || unk_0xA3626A14E36A87F3(unk_0x4D29100D094E5511(), 1))
	{
		return 0;
	}
	if ((((((func_49() || Global_17118.f_4) || func_38()) || unk_0x6A8318CD08F60B96()) || unk_0xE2466D85ABE6A073()) || func_50()) || func_69())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (unk_0x9332944411A91CF6())
		{
			return 0;
		}
	}
	return 1;
}

int func_38()
{
	if (!unk_0x0E063DDE8855EC52())
	{
		return Global_89089.f_44 == 1;
	}
	return 0;
}

bool func_39()
{
	return Global_52930;
}

int func_40(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	if (unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0) && unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1))
	{
		return 5;
	}
	Var0 = { func_48(unk_0x4D29100D094E5511()) };
	if (Global_100241[10 /*10*/].f_1)
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
			if (unk_0xCC0EABB8FAB8D0DE(Var0, -61.26628f, -1096.505f, 25.52088f, -58.43333f, -1101.147f, 29.24937f, 1.25f, 0, 1))
			{
				return 9;
			}
		}
	}
	if (unk_0xB7A628320EFF8E47(Var0, -740.9346f, 5599.426f, 40.71515f) < 11f)
	{
		if (unk_0xCC0EABB8FAB8D0DE(Var0, -746.1299f, 5599.226f, 40.47561f, -737.632f, 5599.364f, 44.1693f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (unk_0xB7A628320EFF8E47(Var0, -740.9346f, 5590.426f, 40.71515f) < 11f)
	{
		if (unk_0xCC0EABB8FAB8D0DE(Var0, -746.1299f, 5590.667f, 40.4392f, -737.6585f, 5590.592f, 44.52327f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (unk_0xB7A628320EFF8E47(Var0, 446.3265f, 5566.35f, 780.2151f) < 11f)
	{
		if (unk_0xCC0EABB8FAB8D0DE(Var0, 451.1661f, 5566.451f, 780.1703f, 442.5211f, 5566.374f, 783.9819f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (unk_0xB7A628320EFF8E47(Var0, 446.3265f, 5577.35f, 780.2151f) < 11f)
	{
		if (unk_0xCC0EABB8FAB8D0DE(Var0, 451.1661f, 5577.867f, 780.1899f, 442.5765f, 5577.579f, 783.9086f, 3.375f, 0, 1))
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
	iVar3 = unk_0x94F32809C13F5225(unk_0x27D769C59BC9D030());
	if (iVar3 == 0)
	{
		return 0;
	}
	else if ((iVar3 == Global_100117 || iVar3 == Global_100118) || iVar3 == Global_100119)
	{
		return 9;
	}
	else if (iVar3 == Global_100108)
	{
		return 9;
	}
	else if (iVar3 == Global_100109)
	{
		return 9;
	}
	else if (iVar3 == Global_100112)
	{
		return 9;
	}
	else if (iVar3 == Global_100111)
	{
		return 9;
	}
	else if (iVar3 == Global_100113)
	{
		return 9;
	}
	else if (iVar3 == Global_100114)
	{
		return 9;
	}
	else if (iVar3 == Global_100115)
	{
		return 9;
	}
	else if (iVar3 == Global_100116)
	{
		return 9;
	}
	else if (iVar3 == Global_100120)
	{
		return 9;
	}
	else if (iVar3 == Global_100121)
	{
		return 9;
	}
	else if (iVar3 == Global_100122)
	{
		return 9;
	}
	else if (iVar3 == Global_100123)
	{
		return 9;
	}
	else if (iVar3 == Global_100124)
	{
		return 9;
	}
	else if ((iVar3 == Global_100125 || iVar3 == Global_100126) && func_8(67))
	{
		return 9;
	}
	iVar4 = 0;
	while (iVar4 <= (19 - 1))
	{
		if (iVar3 == Global_100127[iVar4])
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
	func_44(24, &Global_100108);
	func_44(47, &Global_100109);
	func_44(10, &Global_100117);
	func_44(9, &Global_100118);
	func_44(8, &Global_100119);
	func_44(21, &Global_100120);
	func_44(11, &Global_100121);
	func_44(18, &Global_100125);
	func_44(19, &Global_100126);
	Global_100112 = unk_0x695481387D3FCB8D(-76.6618f, 6222.191f, 32.2412f, "V_factory1");
	Global_100111 = unk_0x695481387D3FCB8D(-98.2637f, 6210.022f, 31.924f, "V_factory2");
	Global_100113 = unk_0x695481387D3FCB8D(-115.8956f, 6179.749f, 32.4102f, "V_factory3");
	Global_100114 = unk_0x695481387D3FCB8D(-149.8199f, 6144.978f, 31.3353f, "V_factory4");
	Global_100115 = unk_0x695481387D3FCB8D(16.3605f, -1100.259f, 28.797f, "v_gun");
	Global_100116 = unk_0x695481387D3FCB8D(125.1948f, -1284.13f, 28.2847f, "v_strip3");
	Global_100122 = unk_0x695481387D3FCB8D(-545.5717f, 1987.145f, 126.0262f, "cs6_08_mine_int");
	Global_100123 = unk_0x695481387D3FCB8D(2330.598f, 2571.935f, 45.6802f, "ch3_01_trlr_int");
	Global_100124 = unk_0x695481387D3FCB8D(-54.7f, -1092.7f, 26.4f, "v_carshowroom");
	iVar0 = 0;
	while (iVar0 <= (19 - 1))
	{
		Global_100127[iVar0] = unk_0x53DE78F24F01D352(func_42(iVar0));
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
	*uParam1 = unk_0x695481387D3FCB8D(Var0, Var0.f_3);
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
	if (Global_85596[iParam0 /*2*/])
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_82363)
	{
		if (Global_82363[iVar0 /*5*/] != -1)
		{
			if (Global_69758.f_109[Global_82363[iVar0 /*5*/] /*4*/] == iParam0)
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
	return unk_0xA8CFDE65C45F813B(unk_0xC834A7C58DEB59B4(iParam0), 0);
}

bool func_49()
{
	return Global_1315913;
}

int func_50()
{
	if (unk_0xD32535FA4397160F(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_51()
{
	return unk_0xA0F74982C6AAA9D4() <= Global_17257.f_5745 + 100;
}

bool func_52()
{
	return unk_0xF426A5DE932B3BEE(Global_69737, 9);
}

bool func_53()
{
	return unk_0xF426A5DE932B3BEE(Global_69737, 8);
}

int func_54()
{
	if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0) && !unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
	{
		if (((((((((((((((unk_0xF4954568C87BA772(unk_0x27D769C59BC9D030(), "misshair_shop@barbers", "player_intro", 3) || unk_0xF4954568C87BA772(unk_0x27D769C59BC9D030(), "misshair_shop@barbers", "player_base", 3)) || unk_0xF4954568C87BA772(unk_0x27D769C59BC9D030(), "misshair_shop@barbers", "player_enterchair", 3)) || unk_0xF4954568C87BA772(unk_0x27D769C59BC9D030(), "misshair_shop@barbers", "player_exitchair", 3)) || unk_0xF4954568C87BA772(unk_0x27D769C59BC9D030(), "misshair_shop@barbers", "player_idle_a", 3)) || unk_0xF4954568C87BA772(unk_0x27D769C59BC9D030(), "misshair_shop@barbers", "player_idle_b", 3)) || unk_0xF4954568C87BA772(unk_0x27D769C59BC9D030(), "misshair_shop@barbers", "player_idle_c", 3)) || unk_0xF4954568C87BA772(unk_0x27D769C59BC9D030(), "misshair_shop@barbers", "player_idle_d", 3)) || unk_0xF4954568C87BA772(unk_0x27D769C59BC9D030(), "misshair_shop@hair_dressers", "player_intro", 3)) || unk_0xF4954568C87BA772(unk_0x27D769C59BC9D030(), "misshair_shop@hair_dressers", "player_base", 3)) || unk_0xF4954568C87BA772(unk_0x27D769C59BC9D030(), "misshair_shop@hair_dressers", "player_enterchair", 3)) || unk_0xF4954568C87BA772(unk_0x27D769C59BC9D030(), "misshair_shop@hair_dressers", "player_exitchair", 3)) || unk_0xF4954568C87BA772(unk_0x27D769C59BC9D030(), "misshair_shop@hair_dressers", "player_idle_a", 3)) || unk_0xF4954568C87BA772(unk_0x27D769C59BC9D030(), "misshair_shop@hair_dressers", "player_idle_b", 3)) || unk_0xF4954568C87BA772(unk_0x27D769C59BC9D030(), "misshair_shop@hair_dressers", "player_idle_c", 3)) || unk_0xF4954568C87BA772(unk_0x27D769C59BC9D030(), "misshair_shop@hair_dressers", "player_idle_d", 3))
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
		return unk_0xF426A5DE932B3BEE(Global_91330.f_1300[iParam0], iParam1);
	}
	else if (unk_0x0E063DDE8855EC52())
	{
		if (func_62() == 0)
		{
			return unk_0xF426A5DE932B3BEE(func_58(func_61(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xF426A5DE932B3BEE(Global_101154.f_668[iParam0], iParam1);
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
	uVar0 = Global_2469339[iParam0 /*5*/][func_59(iParam1)];
	if (unk_0xD0D748C6C14C0E92(uVar0, &uVar1, -1))
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
			Global_2469052 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2469052 = 1;
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
			return 3852;
			break;
		
		default:
			break;
	}
	return 3949;
}

int func_62()
{
	return Global_25120;
}

bool func_63()
{
	return Global_91330.f_297 > 0;
}

bool func_64()
{
	return Global_91330.f_296 > 0;
}

bool func_65(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_66(bool bParam0)
{
	if (!bParam0 && unk_0xD32535FA4397160F(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xF426A5DE932B3BEE(Global_69737, 0);
}

bool func_67()
{
	return Global_91317.f_1;
}

bool func_68()
{
	return Global_69756;
}

int func_69()
{
	if (Global_69749)
	{
		return 1;
	}
	else if (Global_55743 && !Global_55749)
	{
		return 1;
	}
	return 0;
}

int func_70()
{
	if (Global_35711 == 15)
	{
		return 0;
	}
	return 1;
}

void func_71(int iParam0, int iParam1)
{
	unk_0x26545538B51562AD(&Global_25367, iParam0);
	Global_25368 = iParam1;
}

void func_72(char* sParam0)
{
	unk_0x37B602106C6E0E91(sParam0);
	unk_0xD3076D52458B36EF();
}

int func_73()
{
	var uVar0;
	
	if (unk_0xB3081451628A5D6C())
	{
		if (unk_0xF8B1AB221BA632B5())
		{
			if (unk_0x4C5F5AF635DED95E())
			{
				unk_0xD0D748C6C14C0E92(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x26545538B51562AD(&uVar0, 2);
				unk_0x26545538B51562AD(&uVar0, 4);
				unk_0x26545538B51562AD(&uVar0, 6);
				unk_0x26545538B51562AD(&Global_25, 2);
				unk_0x26545538B51562AD(&Global_25, 4);
				unk_0x26545538B51562AD(&Global_25, 6);
				unk_0xE2A8B026FA4DDFFF(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x755BFB74ADDC1524())
				{
					uVar0 = unk_0xC06A80AF9911D7A8(866);
					unk_0x26545538B51562AD(&uVar0, 0);
					unk_0xD020BAA9D2E33978(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_138274 == 2)
	{
		return 1;
	}
	else if (Global_138274 == 3)
	{
		return 0;
	}
	if (unk_0x755BFB74ADDC1524())
	{
		if (unk_0xF426A5DE932B3BEE(unk_0xC06A80AF9911D7A8(866), 0))
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
	if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
	{
		unk_0x954BCDB8FDB0AC0F(-1, "Menu_Back", &Global_14402, 1);
	}
}

void func_76()
{
	if (Global_14391 == 0)
	{
		if (func_145(2, Global_14382, 0))
		{
			unk_0xF17F4B0641AB2DE1(&Global_2284, 0);
			iLocal_115 = 0;
			func_143();
			Global_14391 = 1;
			unk_0x8CED8F78CC31BEF2(Global_14394, "GET_CURRENT_SELECTION");
			uLocal_99 = unk_0xEF0E4A8ABAA0D524();
			while (!unk_0x20B35B8C39C5787D(uLocal_99))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_103 = unk_0x200C167A17C879D9(uLocal_99);
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
	unk_0xF17F4B0641AB2DE1(&Global_2283, 17);
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
		return Global_87467[iParam0 /*2*/];
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
		return Global_101154.f_32575[iParam0 /*29*/].f_11;
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
	if (Global_35711 == 15)
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
	return func_85(iParam0, Global_35711);
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
		if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
		{
			if (!unk_0xA8ED23ED7AA60A97(unk_0x27D769C59BC9D030()))
			{
				if (unk_0x23221A3A5AF3BD3E(unk_0x27D769C59BC9D030(), 0))
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
	if (Global_101154.f_32575[Global_1598 /*29*/].f_24[Global_14413] == 0)
	{
		func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_1598 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
	}
	else
	{
		func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_101154.f_32575[Global_1598 /*29*/].f_3), &(Global_101154.f_32575[Global_1598 /*29*/].f_7), "CELL_211", &(Global_101154.f_32575[Global_1598 /*29*/].f_3), 0);
	}
	func_91();
	if (Global_69489)
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
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_59(uParam2)];
	if (iVar0 != 0)
	{
		unk_0xE2A8B026FA4DDFFF(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 780:
			Global_1347702[func_59(uParam2)] = iParam1;
			break;
		
		case 781:
			Global_1347708[func_59(uParam2)] = iParam1;
			break;
		
		case 782:
			Global_1347714[func_59(uParam2)] = iParam1;
			break;
		
		case 783:
			Global_1347720[func_59(uParam2)] = iParam1;
			break;
		
		case 770:
			Global_1347678[func_59(uParam2)] = iParam1;
			break;
		
		case 771:
			Global_1347684[func_59(uParam2)] = iParam1;
			break;
		
		case 772:
			Global_1347690[func_59(uParam2)] = iParam1;
			break;
		
		case 773:
			Global_1347696[func_59(uParam2)] = iParam1;
			break;
		
		case 760:
			Global_1347654[func_59(uParam2)] = iParam1;
			break;
		
		case 761:
			Global_1347660[func_59(uParam2)] = iParam1;
			break;
		
		case 762:
			Global_1347666[func_59(uParam2)] = iParam1;
			break;
		
		case 763:
			Global_1347672[func_59(uParam2)] = iParam1;
			break;
		
		case 750:
			Global_1347726[func_59(uParam2)] = iParam1;
			break;
		
		case 751:
			Global_1347732[func_59(uParam2)] = iParam1;
			break;
		
		case 752:
			Global_1347738[func_59(uParam2)] = iParam1;
			break;
		
		case 753:
			Global_1347744[func_59(uParam2)] = iParam1;
			break;
		
		case 1296:
			Global_1347750[func_59(uParam2)] = iParam1;
			break;
		
		case 632:
			Global_1347756[func_59(uParam2)] = iParam1;
			break;
		
		case 1271:
			Global_1347762[func_59(uParam2)] = iParam1;
			break;
		
		case 1868:
			Global_2492924[0 /*6*/][func_59(uParam2)] = iParam1;
			break;
		
		case 2259:
			Global_2492924[1 /*6*/][func_59(uParam2)] = iParam1;
			break;
		
		case 2907:
			Global_2492924[2 /*6*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2492924[3 /*6*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3891:
			Global_2492986[func_59(uParam2)] = iParam1;
			break;
		
		case 757:
			Global_1347768[func_59(uParam2)] = iParam1;
			break;
		
		case 758:
			Global_1347774[func_59(uParam2)] = iParam1;
			break;
		
		case 759:
			Global_1347780[func_59(uParam2)] = iParam1;
			break;
		
		case 1229:
			Global_1347786[func_59(uParam2)] = iParam1;
			break;
		
		case 3031:
			Global_2492955[0 /*5*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3032:
			Global_2492955[1 /*5*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3033:
			Global_2492955[2 /*5*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3034:
			Global_2492955[3 /*5*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2492955[4 /*5*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2492991[0 /*5*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2492991[1 /*5*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2492991[2 /*5*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2492991[3 /*5*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3220:
			Global_2492991[4 /*5*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2493017[0 /*5*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3222:
			Global_2493017[1 /*5*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2493017[2 /*5*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2493017[3 /*5*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3225:
			Global_2493017[4 /*5*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3199:
			Global_2492955[5 /*5*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3205:
			Global_2492924[4 /*6*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3243:
			Global_2493043[func_59(uParam2)] = iParam1;
			break;
		
		case 3244:
			Global_2493058[func_59(uParam2)] = iParam1;
			break;
		
		case 3245:
			Global_2493048[func_59(uParam2)] = iParam1;
			break;
		
		case 3246:
			Global_2493063[func_59(uParam2)] = iParam1;
			break;
		
		case 3247:
			Global_2493053[func_59(uParam2)] = iParam1;
			break;
		
		case 3248:
			Global_2493068[func_59(uParam2)] = iParam1;
			break;
		
		case 3269:
			Global_2493073[func_59(uParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_89(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_59(uParam2)];
	if (iVar0 != 0)
	{
		unk_0xE2A8B026FA4DDFFF(iVar0, iParam1, iParam3);
	}
}

int func_90(int iParam0)
{
	if (Global_1347635)
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
			case 3891:
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
	while (!unk_0x4C3CEC038B6637D7(Global_14394))
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
				unk_0xF17F4B0641AB2DE1(&Global_2283, 17);
			}
			else if (Global_69489)
			{
				func_139(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xF17F4B0641AB2DE1(&Global_2283, 17);
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
				unk_0x26545538B51562AD(&Global_2283, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_142(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_139(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_139(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xF17F4B0641AB2DE1(&Global_2283, 17);
			if (unk_0xF426A5DE932B3BEE(Global_2283, 20))
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
				func_142(Global_14394, "SET_THEME", unk_0xBBDA792448DB5A89(Global_101154.f_12741[Global_14413 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15725)
				{
					unk_0x8CED8F78CC31BEF2(Global_14394, "SET_DATA_SLOT");
					unk_0xD2DC8221939F80F7(4);
					unk_0xD2DC8221939F80F7(0);
					unk_0xD2DC8221939F80F7(2);
					unk_0x37B602106C6E0E91("CELL_CONDFON");
					unk_0xF9E9E11D6DF3EBF8(&Global_15727);
					unk_0xD3076D52458B36EF();
					func_72("CELL_300");
					func_72("CELL_217");
					func_72("CELL_217");
					unk_0x7E5FA681CB7A2EF7();
				}
				else if (Global_101154.f_32575[Global_1598 /*29*/].f_24[Global_14413] == 0)
				{
					func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_117[Global_1598 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_101154.f_32575[Global_1598 /*29*/].f_3), &(Global_101154.f_32575[Global_1598 /*29*/].f_7), "CELL_217", &(Global_101154.f_32575[Global_1598 /*29*/].f_3), 0);
				}
				func_142(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15712 == 4 || Global_15712 == 3)
			{
				func_142(Global_14394, "SET_THEME", unk_0xBBDA792448DB5A89(Global_101154.f_12741[Global_14413 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_93();
				if (Global_15725)
				{
					unk_0x8CED8F78CC31BEF2(Global_14394, "SET_DATA_SLOT");
					unk_0xD2DC8221939F80F7(4);
					unk_0xD2DC8221939F80F7(0);
					unk_0xD2DC8221939F80F7(2);
					unk_0x37B602106C6E0E91("CELL_CONDFON");
					unk_0xF9E9E11D6DF3EBF8(&Global_15727);
					unk_0xD3076D52458B36EF();
					func_72("CELL_300");
					func_72("CELL_219");
					func_72("CELL_219");
					unk_0x7E5FA681CB7A2EF7();
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
					if (Global_101154.f_32575[Global_1598 /*29*/].f_24[Global_14413] == 0)
					{
						func_142(Global_14394, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_1598 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_142(Global_14394, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_101154.f_32575[Global_1598 /*29*/].f_3), &(Global_101154.f_32575[Global_1598 /*29*/].f_7), &cVar0, &(Global_101154.f_32575[Global_1598 /*29*/].f_3), 0);
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
	if (unk_0x4C3CEC038B6637D7(Global_14394))
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
			else if (unk_0xF426A5DE932B3BEE(Global_2283, 20))
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
			unk_0xF17F4B0641AB2DE1(&Global_2283, 17);
		}
		else
		{
			func_139(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_139(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xF17F4B0641AB2DE1(&Global_2283, 17);
			if (unk_0xF426A5DE932B3BEE(Global_2283, 20))
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
	if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
	{
		if (Global_14413 == 0)
		{
			switch (Global_101154.f_12741[Global_14413 /*20*/].f_6)
			{
				case 1:
					unk_0xFD6C2FB51B326EC4(unk_0x4D29100D094E5511(), 0);
					break;
				
				case 2:
					unk_0xFD6C2FB51B326EC4(unk_0x4D29100D094E5511(), 1);
					break;
				
				case 3:
					unk_0xFD6C2FB51B326EC4(unk_0x4D29100D094E5511(), 2);
					break;
				
				case 4:
					unk_0xFD6C2FB51B326EC4(unk_0x4D29100D094E5511(), 3);
					break;
				
				case 5:
					unk_0xFD6C2FB51B326EC4(unk_0x4D29100D094E5511(), 4);
					break;
				
				case 6:
					unk_0xFD6C2FB51B326EC4(unk_0x4D29100D094E5511(), 5);
					break;
				
				case 7:
					unk_0xFD6C2FB51B326EC4(unk_0x4D29100D094E5511(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14413 == 1)
		{
			switch (Global_101154.f_12741[Global_14413 /*20*/].f_6)
			{
				case 1:
					unk_0xFD6C2FB51B326EC4(unk_0x4D29100D094E5511(), 6);
					break;
				
				case 2:
					unk_0xFD6C2FB51B326EC4(unk_0x4D29100D094E5511(), 0);
					break;
				
				case 3:
					unk_0xFD6C2FB51B326EC4(unk_0x4D29100D094E5511(), 1);
					break;
				
				case 4:
					unk_0xFD6C2FB51B326EC4(unk_0x4D29100D094E5511(), 2);
					break;
				
				case 5:
					unk_0xFD6C2FB51B326EC4(unk_0x4D29100D094E5511(), 3);
					break;
				
				case 6:
					unk_0xFD6C2FB51B326EC4(unk_0x4D29100D094E5511(), 4);
					break;
				
				case 7:
					unk_0xFD6C2FB51B326EC4(unk_0x4D29100D094E5511(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14413 == 2)
		{
			switch (Global_101154.f_12741[Global_14413 /*20*/].f_6)
			{
				case 1:
					unk_0xFD6C2FB51B326EC4(unk_0x4D29100D094E5511(), 5);
					break;
				
				case 2:
					unk_0xFD6C2FB51B326EC4(unk_0x4D29100D094E5511(), 6);
					break;
				
				case 3:
					unk_0xFD6C2FB51B326EC4(unk_0x4D29100D094E5511(), 1);
					break;
				
				case 4:
					unk_0xFD6C2FB51B326EC4(unk_0x4D29100D094E5511(), 0);
					break;
				
				case 5:
					unk_0xFD6C2FB51B326EC4(unk_0x4D29100D094E5511(), 2);
					break;
				
				case 6:
					unk_0xFD6C2FB51B326EC4(unk_0x4D29100D094E5511(), 3);
					break;
				
				case 7:
					unk_0xFD6C2FB51B326EC4(unk_0x4D29100D094E5511(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14413 == 3)
		{
			switch (Global_2563609)
			{
				case 1:
					unk_0xFD6C2FB51B326EC4(unk_0x4D29100D094E5511(), 0);
					break;
				
				case 2:
					unk_0xFD6C2FB51B326EC4(unk_0x4D29100D094E5511(), 1);
					break;
				
				case 3:
					unk_0xFD6C2FB51B326EC4(unk_0x4D29100D094E5511(), 2);
					break;
				
				case 4:
					unk_0xFD6C2FB51B326EC4(unk_0x4D29100D094E5511(), 3);
					break;
				
				case 5:
					unk_0xFD6C2FB51B326EC4(unk_0x4D29100D094E5511(), 4);
					break;
				
				case 6:
					unk_0xFD6C2FB51B326EC4(unk_0x4D29100D094E5511(), 5);
					break;
				
				case 7:
					unk_0xFD6C2FB51B326EC4(unk_0x4D29100D094E5511(), 6);
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
								if (unk_0xF426A5DE932B3BEE(Global_2284, 3))
								{
									iVar2 = 42;
									Global_14575 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14575 = 0;
								}
								unk_0x8CED8F78CC31BEF2(Global_14394, "SET_DATA_SLOT");
								unk_0xD2DC8221939F80F7(1);
								unk_0xD2DC8221939F80F7(iVar0);
								unk_0xD2DC8221939F80F7(Global_2290[iVar1 /*15*/].f_10);
								unk_0xD2DC8221939F80F7(0);
								func_72(&(Global_2290[iVar1 /*15*/]));
								unk_0xD2DC8221939F80F7(iVar2);
								unk_0x7E5FA681CB7A2EF7();
							}
							if (Global_2443081)
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
									if (Global_101154.f_12831[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_101154.f_12831[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_101154.f_12831[iVar3 /*104*/].f_99[Global_14413] == 1)
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
								if (Global_69489)
								{
									iVar4 = 0;
									iVar4 = Global_2562131;
									func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14413)
									{
										case 0:
											iVar5 = Global_36844;
											break;
										
										case 1:
											iVar5 = Global_36845;
											break;
										
										case 2:
											iVar5 = Global_36846;
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
								unk_0x8CED8F78CC31BEF2(Global_14394, "SET_DATA_SLOT");
								unk_0xD2DC8221939F80F7(1);
								unk_0xD2DC8221939F80F7(iVar0);
								unk_0xD2DC8221939F80F7(Global_2290[iVar1 /*15*/].f_10);
								unk_0xD2DC8221939F80F7(0);
								func_72(&(Global_2290[iVar1 /*15*/]));
								unk_0xD2DC8221939F80F7(Global_2289);
								unk_0x7E5FA681CB7A2EF7();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xF426A5DE932B3BEE(Global_2284, 6))
								{
									iVar6 = 42;
								}
								else
								{
									iVar6 = 255;
								}
								unk_0x8CED8F78CC31BEF2(Global_14394, "SET_DATA_SLOT");
								unk_0xD2DC8221939F80F7(1);
								unk_0xD2DC8221939F80F7(iVar0);
								unk_0xD2DC8221939F80F7(Global_2290[iVar1 /*15*/].f_10);
								unk_0xD2DC8221939F80F7(0);
								func_72(&(Global_2290[iVar1 /*15*/]));
								unk_0xD2DC8221939F80F7(iVar6);
								unk_0x7E5FA681CB7A2EF7();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xF426A5DE932B3BEE(Global_2284, 3))
								{
									iVar7 = 42;
									Global_14575 = 1;
								}
								else
								{
									iVar7 = 255;
									Global_14575 = 0;
								}
								unk_0x8CED8F78CC31BEF2(Global_14394, "SET_DATA_SLOT");
								unk_0xD2DC8221939F80F7(1);
								unk_0xD2DC8221939F80F7(iVar0);
								unk_0xD2DC8221939F80F7(Global_2290[iVar1 /*15*/].f_10);
								unk_0xD2DC8221939F80F7(0);
								func_72(&(Global_2290[iVar1 /*15*/]));
								unk_0xD2DC8221939F80F7(iVar7);
								unk_0x7E5FA681CB7A2EF7();
							}
							else if (iVar1 == 8)
							{
								unk_0x8CED8F78CC31BEF2(Global_14394, "SET_DATA_SLOT");
								unk_0xD2DC8221939F80F7(1);
								unk_0xD2DC8221939F80F7(iVar0);
								unk_0xD2DC8221939F80F7(Global_2290[iVar1 /*15*/].f_10);
								unk_0xD2DC8221939F80F7(0);
								func_72(&(Global_2290[iVar1 /*15*/]));
								unk_0xD2DC8221939F80F7(42);
								unk_0x7E5FA681CB7A2EF7();
							}
							else if ((iVar1 == 23 && unk_0xC1C5B83BB6719C6C(&(Global_2290[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xF426A5DE932B3BEE(Global_2284, 6))
							{
								unk_0x8CED8F78CC31BEF2(Global_14394, "SET_DATA_SLOT");
								unk_0xD2DC8221939F80F7(1);
								unk_0xD2DC8221939F80F7(iVar0);
								unk_0xD2DC8221939F80F7(Global_2290[iVar1 /*15*/].f_10);
								unk_0xD2DC8221939F80F7(0);
								func_72(&(Global_2290[iVar1 /*15*/]));
								unk_0xD2DC8221939F80F7(42);
								unk_0x7E5FA681CB7A2EF7();
							}
							else if (Global_2290[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar8 = 0;
								iVar8 = Global_1609099.f_1;
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
	unk_0xF17F4B0641AB2DE1(&Global_2283, 25);
	unk_0x26545538B51562AD(&Global_2284, 11);
}

int func_96()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
	{
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			if (Global_14356 == 0)
			{
				if (Global_1598 != 128)
				{
					if (!unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
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
		if (unk_0x23221A3A5AF3BD3E(unk_0x27D769C59BC9D030(), 0))
		{
			return 0;
		}
		if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
		{
			if (!unk_0x5893E9409FB78DD8())
			{
				if (unk_0xA8ED23ED7AA60A97(unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x27B3DE54D214014B(unk_0x27D769C59BC9D030()) || unk_0xABE2848258482F49(unk_0x27D769C59BC9D030())) || unk_0x300FBC9A9F898890(unk_0x4D29100D094E5511())) || unk_0x75A0E7DE4AC1AECF(unk_0x27D769C59BC9D030()))
		{
			return 0;
		}
		if (Global_100202)
		{
			return 0;
		}
	}
	if (Global_69489)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x7DC564DE3CF907A4();
	iVar1 = unk_0xD7DDFCF6557D9296(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0x5893E9409FB78DD8()))
	{
		iVar2 = 1;
		if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
		{
			if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
			{
				uVar3 = unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0);
				if ((((((((unk_0x6CCC9ABA9456E815(unk_0x946C63BD9EF05437(uVar3)) || unk_0x9D4118D82F876A81(unk_0x946C63BD9EF05437(uVar3))) || unk_0xF283F0E0B39E6846(unk_0x946C63BD9EF05437(uVar3))) || unk_0x946C63BD9EF05437(uVar3) == joaat("seashark")) || unk_0x946C63BD9EF05437(uVar3) == joaat("seashark2")) || unk_0x946C63BD9EF05437(uVar3) == joaat("rhino")) || unk_0x946C63BD9EF05437(uVar3) == joaat("submersible")) || unk_0x946C63BD9EF05437(uVar3) == joaat("submersible2")) || unk_0x946C63BD9EF05437(uVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_2563611 || iVar2 == 1)
	{
		if (unk_0xD32535FA4397160F(joaat("apptrackify")) > 0 || Global_101154.f_12741.f_89)
		{
			if (unk_0xD32535FA4397160F(joaat("michael2")) > 0)
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
	if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
	{
		if (func_98() && unk_0x23221A3A5AF3BD3E(unk_0x27D769C59BC9D030(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_69489)
	{
		if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()) && iVar1 == 0)
		{
			iVar2 = unk_0xA0ED5DF8C72F1600(unk_0x27D769C59BC9D030(), 0);
			if (Global_69489)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || unk_0xCE9521447147FEB0(unk_0x27D769C59BC9D030()))
				{
					iVar0 = 1;
				}
			}
			else if (unk_0xCE9521447147FEB0(unk_0x27D769C59BC9D030()))
			{
				iVar0 = 1;
			}
			if (!Global_14356)
			{
				if (Global_1598 != 128)
				{
					if (iVar0 == 0)
					{
						if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
						{
							if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
							{
							}
							else
							{
								if (Global_69489)
								{
									unk_0x56F64CC9254C2E4F(unk_0x27D769C59BC9D030(), 244, 0);
									unk_0x56F64CC9254C2E4F(unk_0x27D769C59BC9D030(), 243, 0);
									unk_0x56F64CC9254C2E4F(unk_0x27D769C59BC9D030(), 242, 0);
								}
								unk_0x26545538B51562AD(&Global_2283, 11);
								unk_0xB1F3893795B13F9B(unk_0x27D769C59BC9D030(), 1, 1);
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
	
	uVar0 = unk_0x7DC564DE3CF907A4();
	iVar1 = unk_0xD7DDFCF6557D9296(uVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_99()
{
	struct<2> Var0;
	
	unk_0x38AAAA167C55B731(&Var0);
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
	while (iVar0 < Global_101154.f_6378.f_650)
	{
		if (Global_101154.f_6378.f_199[iVar0 /*15*/].f_6 == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_6378.f_136)
	{
		if (Global_101154.f_6378[iVar0 /*15*/].f_6 == iParam0)
		{
			if (unk_0xF426A5DE932B3BEE(Global_101154.f_6378[iVar0 /*15*/].f_1, 7))
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
		iVar1 = Global_82363[iVar0 /*5*/];
		if (iVar1 != -1)
		{
			iVar2 = -1;
			iVar2 = Global_69758.f_109[Global_82363[iVar0 /*5*/] /*4*/];
			if (iVar2 != -1)
			{
				if (func_102(Global_82399[iVar2 /*34*/].f_12, iParam0))
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
			return unk_0xF426A5DE932B3BEE(uParam0, iParam1);
		
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
			unk_0xF17F4B0641AB2DE1(&Global_2284, 0);
			func_143();
			Global_14391 = 1;
			unk_0x8CED8F78CC31BEF2(Global_14394, "GET_CURRENT_SELECTION");
			uLocal_99 = unk_0xEF0E4A8ABAA0D524();
			while (!unk_0x20B35B8C39C5787D(uLocal_99))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_103 = unk_0x200C167A17C879D9(uLocal_99);
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
	
	if (Global_99796 && iParam1)
	{
		if (func_110(sParam0) && !unk_0x46F94E0B75FDB895())
		{
			unk_0x5BD150B52CE8D356(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_24935.f_145)
	{
		if (unk_0xC1C5B83BB6719C6C(sParam0, &(Global_101154.f_24935[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_101154.f_24935.f_145 - 2))
			{
				func_109(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_108((Global_101154.f_24935.f_145 - 1));
			Global_101154.f_24935.f_145 = (Global_101154.f_24935.f_145 - 1);
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
		Global_101154.f_24935.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_24935.f_145)
	{
		if (unk_0xF426A5DE932B3BEE(Global_101154.f_24935[iVar0 /*16*/].f_11, 0))
		{
			if (Global_101154.f_24935[iVar0 /*16*/].f_12 > Global_101154.f_24935.f_146[0])
			{
				Global_101154.f_24935.f_146[0] = Global_101154.f_24935[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xF426A5DE932B3BEE(Global_101154.f_24935[iVar0 /*16*/].f_11, 1))
		{
			if (Global_101154.f_24935[iVar0 /*16*/].f_12 > Global_101154.f_24935.f_146[1])
			{
				Global_101154.f_24935.f_146[1] = Global_101154.f_24935[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xF426A5DE932B3BEE(Global_101154.f_24935[iVar0 /*16*/].f_11, 2))
		{
			if (Global_101154.f_24935[iVar0 /*16*/].f_12 > Global_101154.f_24935.f_146[2])
			{
				Global_101154.f_24935.f_146[2] = Global_101154.f_24935[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_108(int iParam0)
{
	StringCopy(&(Global_101154.f_24935[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_101154.f_24935[iParam0 /*16*/].f_4), "", 16);
	Global_101154.f_24935[iParam0 /*16*/].f_8 = 0;
	Global_101154.f_24935[iParam0 /*16*/].f_9 = 0;
	Global_101154.f_24935[iParam0 /*16*/].f_11 = 0;
	Global_101154.f_24935[iParam0 /*16*/].f_10 = -1;
	Global_101154.f_24935[iParam0 /*16*/].f_12 = 0;
	Global_101154.f_24935[iParam0 /*16*/].f_13 = 0;
	Global_101154.f_24935[iParam0 /*16*/].f_14 = 0;
	Global_101154.f_24935[iParam0 /*16*/].f_15 = 0;
}

void func_109(int iParam0, int iParam1)
{
	Global_101154.f_24935[iParam0 /*16*/] = { Global_101154.f_24935[iParam1 /*16*/] };
	Global_101154.f_24935[iParam0 /*16*/].f_4 = { Global_101154.f_24935[iParam1 /*16*/].f_4 };
	Global_101154.f_24935[iParam0 /*16*/].f_8 = Global_101154.f_24935[iParam1 /*16*/].f_8;
	Global_101154.f_24935[iParam0 /*16*/].f_10 = Global_101154.f_24935[iParam1 /*16*/].f_10;
	Global_101154.f_24935[iParam0 /*16*/].f_9 = Global_101154.f_24935[iParam1 /*16*/].f_9;
	Global_101154.f_24935[iParam0 /*16*/].f_11 = Global_101154.f_24935[iParam1 /*16*/].f_11;
	Global_101154.f_24935[iParam0 /*16*/].f_12 = Global_101154.f_24935[iParam1 /*16*/].f_12;
	Global_101154.f_24935[iParam0 /*16*/].f_13 = Global_101154.f_24935[iParam1 /*16*/].f_13;
	Global_101154.f_24935[iParam0 /*16*/].f_14 = Global_101154.f_24935[iParam1 /*16*/].f_14;
	Global_101154.f_24935[iParam0 /*16*/].f_15 = Global_101154.f_24935[iParam1 /*16*/].f_15;
}

var func_110(var uParam0)
{
	unk_0x66F753896FC4EEC3(uParam0);
	return unk_0xF2DBEB09EBAED1D6(0);
}

void func_111(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_112(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_112(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xC1C5B83BB6719C6C(sParam0, ""))
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
	while (iVar0 < Global_101154.f_24935.f_145)
	{
		if (unk_0xC1C5B83BB6719C6C(&(Global_101154.f_24935[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_101154.f_24935.f_145 < 9)
	{
		StringCopy(&(Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_4), sParam1, 16);
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_8 = (unk_0xA0F74982C6AAA9D4() + iParam3);
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_9 = iParam5;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_11 = iParam6;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_12 = uParam2;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_13 = iParam7;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_14 = iParam8;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_10 = ((unk_0xA0F74982C6AAA9D4() + iParam3) + iParam4);
		}
		else
		{
			Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_10 = -1;
		}
		Global_101154.f_24935.f_145++;
		func_107();
	}
}

int func_113(char* sParam0)
{
	if (unk_0xC1C5B83BB6719C6C(sParam0, &Global_99799))
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
	while (iVar0 < Global_101154.f_24935.f_145)
	{
		if (unk_0xC1C5B83BB6719C6C(sParam0, &(Global_101154.f_24935[iVar0 /*16*/])))
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
	if ((Global_87458 != -1 && unk_0xF426A5DE932B3BEE(Global_82399[Global_87458 /*34*/].f_15, 15)) && unk_0xF426A5DE932B3BEE(Global_87459, iParam1))
	{
		if (Global_87457 != 5 || func_119() == Global_87458)
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
	return unk_0xF426A5DE932B3BEE(Global_87466, iParam0);
}

int func_119()
{
	return Global_69751;
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
	unk_0xF17F4B0641AB2DE1(&Global_2283, 17);
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
	func_140(Global_14394, "SET_HEADER", &(Global_101154.f_32575[Global_1598 /*29*/].f_3), 0, 0, 0, 0);
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
	
	if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
	{
		unk_0xCFF471245AFEEDCE(0, 22, 1);
	}
	if (func_145(2, Global_14382, 0))
	{
		func_143();
		Global_14391 = 1;
		unk_0x8CED8F78CC31BEF2(Global_14394, "GET_CURRENT_SELECTION");
		uLocal_99 = unk_0xEF0E4A8ABAA0D524();
		while (!unk_0x20B35B8C39C5787D(uLocal_99))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		iVar0 = unk_0x200C167A17C879D9(uLocal_99);
		iLocal_105 = Global_3074[iVar0];
		uLocal_107[0] = unk_0xC754513C760635E8(&(Global_2991[iLocal_105 /*5*/]));
		if (unk_0xC1C5B83BB6719C6C(uLocal_107[0], "*"))
		{
			cLocal_109 = { Global_3057[Global_14413 /*4*/] };
			iLocal_106 = unk_0x1DA63F254F38C8A7(&cLocal_109);
		}
		else if (unk_0x1DA63F254F38C8A7(&cLocal_109) < 14)
		{
			StringConCat(&cLocal_109, uLocal_107[0], 16);
			iLocal_106++;
		}
		unk_0x8CED8F78CC31BEF2(Global_14394, "SET_HEADER");
		unk_0x37B602106C6E0E91("STRING");
		unk_0x832BC45EF0DD5D4A(&cLocal_109, -1);
		unk_0xD3076D52458B36EF();
		unk_0x7E5FA681CB7A2EF7();
	}
	if (func_145(2, 178, 0))
	{
		func_75();
		Global_14391 = 1;
		if (unk_0x1DA63F254F38C8A7(&cLocal_109) > 0)
		{
			StringCopy(&cLocal_109, unk_0x397AA18A3F2F4F1C(&cLocal_109, 0, (iLocal_106 - 1)), 16);
			iLocal_106 = (iLocal_106 - 1);
		}
		unk_0x8CED8F78CC31BEF2(Global_14394, "SET_HEADER");
		unk_0x37B602106C6E0E91("STRING");
		unk_0x832BC45EF0DD5D4A(&cLocal_109, -1);
		unk_0xD3076D52458B36EF();
		unk_0x7E5FA681CB7A2EF7();
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
				if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
				{
					if (!unk_0xA8ED23ED7AA60A97(unk_0x27D769C59BC9D030()))
					{
						if (unk_0x23221A3A5AF3BD3E(unk_0x27D769C59BC9D030(), 0))
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
					sVar2 = unk_0xC754513C760635E8(&(Global_117[iVar1 /*10*/].f_4));
					if (unk_0xC1C5B83BB6719C6C(sVar2, &cLocal_109))
					{
						if ((Global_101154.f_32575[iVar1 /*29*/].f_12[Global_14413] == 1 || Global_101154.f_32575[iVar1 /*29*/].f_12[Global_14413] == 2) || unk_0xC1C5B83BB6719C6C(sVar2, unk_0xC754513C760635E8(&(Global_117[130 /*10*/].f_4))))
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
				unk_0x8CED8F78CC31BEF2(Global_14394, "SET_DATA_SLOT");
				unk_0xD2DC8221939F80F7(4);
				unk_0xD2DC8221939F80F7(0);
				unk_0xD2DC8221939F80F7(3);
				unk_0x37B602106C6E0E91("STRING");
				unk_0x832BC45EF0DD5D4A(&cLocal_109, -1);
				unk_0xD3076D52458B36EF();
				func_72("CELL_300");
				func_72("CELL_211");
				func_72("CELL_195");
				unk_0x7E5FA681CB7A2EF7();
				func_142(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
				iLocal_306 = 0;
				iVar3 = 0;
				while (iVar3 < 37)
				{
					sVar4 = unk_0xC754513C760635E8(&(Global_1602[iVar3 /*14*/]));
					if (unk_0xC1C5B83BB6719C6C(sVar4, &cLocal_109))
					{
						iLocal_306 = 1;
						cLocal_307 = { Global_1602[iVar3 /*14*/].f_4 };
						Local_311 = { Global_1602[iVar3 /*14*/].f_8 };
					}
					iVar3++;
				}
				if (iLocal_306 == 0)
				{
					iLocal_113 = unk_0x1DA63F254F38C8A7(&cLocal_109);
					if (iLocal_113 > 6)
					{
						StringCopy(&(uLocal_317[0]), unk_0x397AA18A3F2F4F1C(&cLocal_109, 0, 1), 4);
						StringCopy(&(uLocal_317[1]), unk_0x397AA18A3F2F4F1C(&cLocal_109, 1, 2), 4);
						StringCopy(&(uLocal_317[2]), unk_0x397AA18A3F2F4F1C(&cLocal_109, 2, 3), 4);
						StringCopy(&(uLocal_317[3]), unk_0x397AA18A3F2F4F1C(&cLocal_109, 3, 4), 4);
						StringCopy(&(uLocal_317[4]), unk_0x397AA18A3F2F4F1C(&cLocal_109, 4, 5), 4);
						StringCopy(&(uLocal_317[5]), unk_0x397AA18A3F2F4F1C(&cLocal_109, 5, 6), 4);
						if (((unk_0xC1C5B83BB6719C6C(&(uLocal_317[0]), "1") && unk_0xC1C5B83BB6719C6C(&(uLocal_317[1]), "9")) && unk_0xC1C5B83BB6719C6C(&(uLocal_317[2]), "9")) && unk_0xC1C5B83BB6719C6C(&(uLocal_317[3]), "9"))
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
									StringCopy(&(uLocal_317[0]), unk_0x397AA18A3F2F4F1C(&cLocal_109, 3, 4), 4);
									StringCopy(&(uLocal_317[1]), unk_0x397AA18A3F2F4F1C(&cLocal_109, 4, 5), 4);
									StringCopy(&(uLocal_317[2]), unk_0x397AA18A3F2F4F1C(&cLocal_109, 5, 6), 4);
									StringCopy(&(uLocal_317[3]), unk_0x397AA18A3F2F4F1C(&cLocal_109, 6, 7), 4);
									StringCopy(&(uLocal_317[4]), unk_0x397AA18A3F2F4F1C(&cLocal_109, 7, 8), 4);
									StringCopy(&(uLocal_317[5]), unk_0x397AA18A3F2F4F1C(&cLocal_109, 8, 9), 4);
									StringCopy(&(uLocal_317[6]), unk_0x397AA18A3F2F4F1C(&cLocal_109, 9, 10), 4);
								}
								else
								{
									StringCopy(&(uLocal_317[0]), unk_0x397AA18A3F2F4F1C(&cLocal_109, 0, 1), 4);
									StringCopy(&(uLocal_317[1]), unk_0x397AA18A3F2F4F1C(&cLocal_109, 1, 2), 4);
									StringCopy(&(uLocal_317[2]), unk_0x397AA18A3F2F4F1C(&cLocal_109, 2, 3), 4);
									StringCopy(&(uLocal_317[3]), unk_0x397AA18A3F2F4F1C(&cLocal_109, 3, 4), 4);
									StringCopy(&(uLocal_317[4]), unk_0x397AA18A3F2F4F1C(&cLocal_109, 4, 5), 4);
									StringCopy(&(uLocal_317[5]), unk_0x397AA18A3F2F4F1C(&cLocal_109, 5, 6), 4);
									StringCopy(&(uLocal_317[6]), unk_0x397AA18A3F2F4F1C(&cLocal_109, 6, 7), 4);
								}
								if ((((unk_0xC1C5B83BB6719C6C(&(uLocal_317[0]), "5") && unk_0xC1C5B83BB6719C6C(&(uLocal_317[1]), "5")) && unk_0xC1C5B83BB6719C6C(&(uLocal_317[2]), "5")) && unk_0xC1C5B83BB6719C6C(&(uLocal_317[3]), "0")) && unk_0xC1C5B83BB6719C6C(&(uLocal_317[4]), "1"))
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
				if (Global_101154.f_32575[Global_1598 /*29*/].f_12[Global_14413] == 2 || Global_1598 == 130)
				{
					Global_101154.f_32575[Global_1598 /*29*/].f_24[Global_14413] = 1;
					if (Global_1598 == 130)
					{
						if (!Global_101154.f_32575[130 /*29*/].f_12[0] == 1)
						{
							func_124(130, 4, 1);
							func_124(130, 3, 0);
						}
						if (Global_69489)
						{
							if (!func_123(130, 3))
							{
								func_124(130, 3, 1);
							}
						}
					}
				}
				if (Global_101154.f_32575[Global_1598 /*29*/].f_24[Global_14413] == 0)
				{
					func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_1598 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_101154.f_32575[Global_1598 /*29*/].f_3), &(Global_101154.f_32575[Global_1598 /*29*/].f_7), "CELL_211", &(Global_101154.f_32575[Global_1598 /*29*/].f_3), 0);
				}
			}
			func_91();
		}
	}
}

int func_123(int iParam0, int iParam1)
{
	if (Global_101154.f_32575[iParam0 /*29*/].f_12[iParam1] == 1)
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
			Global_101154.f_32575[iParam0 /*29*/].f_12[0] = 1;
			Global_101154.f_32575[iParam0 /*29*/].f_12[1] = 1;
			Global_101154.f_32575[iParam0 /*29*/].f_12[2] = 1;
			Global_101154.f_32575[iParam0 /*29*/].f_24[0] = 1;
			Global_101154.f_32575[iParam0 /*29*/].f_24[1] = 1;
			Global_101154.f_32575[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_101154.f_32575[iParam0 /*29*/].f_12[iParam1] == 1 && Global_101154.f_32575[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_101154.f_32575[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_101154.f_32575[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_69489)
			{
				if (iParam1 != 4)
				{
					if (Global_14413 != iParam1)
					{
						Global_2942[iParam1 /*4*/] = { Global_101154.f_32575[iParam0 /*29*/].f_3 };
						Global_2959[iParam1] = 1;
						Global_2964[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14413)
					{
					}
					else
					{
						Global_2893[1 /*6*/] = { Global_101154.f_32575[iParam0 /*29*/].f_3 };
						Global_2893[1 /*6*/].f_5 = iParam1;
						func_125();
					}
				}
				else
				{
					Global_2893[1 /*6*/] = { Global_101154.f_32575[iParam0 /*29*/].f_3 };
					Global_2893[1 /*6*/].f_5 = iParam1;
					func_125();
				}
			}
			else
			{
				Global_2893[1 /*6*/] = { Global_101154.f_32575[iParam0 /*29*/].f_3 };
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
	
	StringCopy(&cVar0, unk_0xC754513C760635E8(&(Global_101154.f_32575[Global_2969 /*29*/].f_7)), 64);
	if (Global_2988 == 0)
	{
		unk_0x5411F6B456B04A6B("");
		StringCopy(&cVar16, unk_0xC754513C760635E8(&(Global_2893[1 /*6*/])), 64);
		sVar32 = unk_0xC754513C760635E8("CELL_253");
		unk_0xE8386CF1E84A5B3D(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0x5411F6B456B04A6B("CELL_255");
		unk_0x2B088D6251C2080D(&(Global_2893[1 /*6*/]));
		unk_0xE8386CF1E84A5B3D(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0xF17F4B0641AB2DE1(&Global_2283, 0);
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
	if (unk_0xC1C5B83BB6719C6C(sParam0, "0"))
	{
		return 0;
	}
	if (unk_0xC1C5B83BB6719C6C(sParam0, "1"))
	{
		return 1;
	}
	if (unk_0xC1C5B83BB6719C6C(sParam0, "2"))
	{
		return 2;
	}
	if (unk_0xC1C5B83BB6719C6C(sParam0, "3"))
	{
		return 3;
	}
	if (unk_0xC1C5B83BB6719C6C(sParam0, "4"))
	{
		return 4;
	}
	if (unk_0xC1C5B83BB6719C6C(sParam0, "5"))
	{
		return 5;
	}
	if (unk_0xC1C5B83BB6719C6C(sParam0, "6"))
	{
		return 6;
	}
	if (unk_0xC1C5B83BB6719C6C(sParam0, "7"))
	{
		return 7;
	}
	if (unk_0xC1C5B83BB6719C6C(sParam0, "8"))
	{
		return 8;
	}
	if (unk_0xC1C5B83BB6719C6C(sParam0, "9"))
	{
		return 9;
	}
	if (unk_0xC1C5B83BB6719C6C(sParam0, "A"))
	{
		return 10;
	}
	if (unk_0xC1C5B83BB6719C6C(sParam0, "B"))
	{
		return 11;
	}
	if (unk_0xC1C5B83BB6719C6C(sParam0, "C"))
	{
		return 12;
	}
	if (unk_0xC1C5B83BB6719C6C(sParam0, "D"))
	{
		return 13;
	}
	if (unk_0xC1C5B83BB6719C6C(sParam0, "E"))
	{
		return 14;
	}
	if (unk_0xC1C5B83BB6719C6C(sParam0, "F"))
	{
		return 15;
	}
	if (unk_0xC1C5B83BB6719C6C(sParam0, "G"))
	{
		return 16;
	}
	if (unk_0xC1C5B83BB6719C6C(sParam0, "H"))
	{
		return 17;
	}
	if (unk_0xC1C5B83BB6719C6C(sParam0, "I"))
	{
		return 18;
	}
	if (unk_0xC1C5B83BB6719C6C(sParam0, "J"))
	{
		return 19;
	}
	if (unk_0xC1C5B83BB6719C6C(sParam0, "K"))
	{
		return 20;
	}
	if (unk_0xC1C5B83BB6719C6C(sParam0, "L"))
	{
		return 21;
	}
	if (unk_0xC1C5B83BB6719C6C(sParam0, "M"))
	{
		return 22;
	}
	if (unk_0xC1C5B83BB6719C6C(sParam0, "N"))
	{
		return 23;
	}
	if (unk_0xC1C5B83BB6719C6C(sParam0, "O"))
	{
		return 24;
	}
	if (unk_0xC1C5B83BB6719C6C(sParam0, "P"))
	{
		return 25;
	}
	if (unk_0xC1C5B83BB6719C6C(sParam0, "Q"))
	{
		return 26;
	}
	if (unk_0xC1C5B83BB6719C6C(sParam0, "R"))
	{
		return 27;
	}
	if (unk_0xC1C5B83BB6719C6C(sParam0, "S"))
	{
		return 28;
	}
	if (unk_0xC1C5B83BB6719C6C(sParam0, "T"))
	{
		return 29;
	}
	if (unk_0xC1C5B83BB6719C6C(sParam0, "U"))
	{
		return 30;
	}
	if (unk_0xC1C5B83BB6719C6C(sParam0, "V"))
	{
		return 31;
	}
	if (unk_0xC1C5B83BB6719C6C(sParam0, "W"))
	{
		return 32;
	}
	if (unk_0xC1C5B83BB6719C6C(sParam0, "X"))
	{
		return 33;
	}
	if (unk_0xC1C5B83BB6719C6C(sParam0, "Y"))
	{
		return 34;
	}
	if (unk_0xC1C5B83BB6719C6C(sParam0, "Z"))
	{
		return 35;
	}
	if (unk_0xC1C5B83BB6719C6C(sParam0, "z"))
	{
		return -1;
	}
	return -1;
}

int func_128()
{
	if (Global_69489)
	{
		return 0;
	}
	if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
	{
		if (unk_0x300FBC9A9F898890(unk_0x4D29100D094E5511()))
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
	if (unk_0xE1834019C3CC3C33(2))
	{
		if (unk_0x117D586920E8F7BA(2, 180))
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
		if (unk_0x117D586920E8F7BA(2, 181))
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
	unk_0x954BCDB8FDB0AC0F(-1, "Menu_Navigate", &Global_14402, 1);
	func_131();
}

void func_131()
{
	if (func_132())
	{
		if (Global_14576 == 0)
		{
			unk_0x033B966A9929DB40(1);
		}
		else
		{
			unk_0x033B966A9929DB40(2);
		}
	}
}

int func_132()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69489)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0x7DC564DE3CF907A4();
	iVar1 = unk_0xD7DDFCF6557D9296(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_2563611 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_133()
{
	func_142(Global_14394, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(4), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x954BCDB8FDB0AC0F(-1, "Menu_Navigate", &Global_14402, 1);
	func_134();
}

void func_134()
{
	if (func_132())
	{
		if (Global_14576 == 0)
		{
			unk_0x033B966A9929DB40(3);
		}
		else
		{
			unk_0x033B966A9929DB40(4);
		}
	}
}

void func_135()
{
	func_142(Global_14394, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x954BCDB8FDB0AC0F(-1, "Menu_Navigate", &Global_14402, 1);
	func_136();
}

void func_136()
{
	if (func_132())
	{
		if (Global_14576 == 0)
		{
			unk_0x033B966A9929DB40(2);
		}
		else
		{
			unk_0x033B966A9929DB40(1);
		}
	}
}

void func_137()
{
	func_142(Global_14394, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(2), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x954BCDB8FDB0AC0F(-1, "Menu_Navigate", &Global_14402, 1);
	func_138();
}

void func_138()
{
	if (func_132())
	{
		if (Global_14576 == 0)
		{
			unk_0x033B966A9929DB40(4);
		}
		else
		{
			unk_0x033B966A9929DB40(3);
		}
	}
}

void func_139(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, int iParam10, int iParam11)
{
	unk_0x8CED8F78CC31BEF2(uParam0, sParam1);
	unk_0xD2DC8221939F80F7(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xD2DC8221939F80F7(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xD2DC8221939F80F7(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xD2DC8221939F80F7(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xD2DC8221939F80F7(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x75CB9E30BA492FF0(sParam7))
	{
		func_72(sParam7);
	}
	if (!unk_0x75CB9E30BA492FF0(sParam8))
	{
		func_72(sParam8);
	}
	if (!unk_0x75CB9E30BA492FF0(sParam9))
	{
		func_72(sParam9);
	}
	if (!unk_0x75CB9E30BA492FF0(iParam10))
	{
		func_72(iParam10);
	}
	if (!unk_0x75CB9E30BA492FF0(iParam11))
	{
		func_72(iParam11);
	}
	unk_0x7E5FA681CB7A2EF7();
}

void func_140(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0x8CED8F78CC31BEF2(uParam0, sParam1);
	func_72(sParam2);
	if (!unk_0x75CB9E30BA492FF0(sParam3))
	{
		func_72(sParam3);
	}
	if (!unk_0x75CB9E30BA492FF0(sParam4))
	{
		func_72(sParam4);
	}
	if (!unk_0x75CB9E30BA492FF0(sParam5))
	{
		func_72(sParam5);
	}
	if (!unk_0x75CB9E30BA492FF0(sParam6))
	{
		func_72(sParam6);
	}
	unk_0x7E5FA681CB7A2EF7();
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
					unk_0x8CED8F78CC31BEF2(Global_14394, "SET_DATA_SLOT");
					unk_0xD2DC8221939F80F7(11);
					unk_0xD2DC8221939F80F7(iVar13);
					func_72(&(Global_2991[iVar14 /*5*/]));
					unk_0x7E5FA681CB7A2EF7();
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
	unk_0x8CED8F78CC31BEF2(uParam0, sParam1);
	unk_0xD2DC8221939F80F7(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xD2DC8221939F80F7(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xD2DC8221939F80F7(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xD2DC8221939F80F7(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xD2DC8221939F80F7(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x7E5FA681CB7A2EF7();
}

void func_143()
{
	if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
	{
		unk_0x954BCDB8FDB0AC0F(-1, "Menu_Accept", &Global_14402, 1);
		func_144();
	}
}

void func_144()
{
	if (func_132())
	{
		unk_0x033B966A9929DB40(5);
	}
}

int func_145(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x117D586920E8F7BA(iParam0, iParam1) || (iParam2 == 1 && unk_0x71D2CBF04FD5E207(iParam0, iParam1)))
	{
		if (unk_0xDFCB321F1D24137F())
		{
			if (unk_0x35F8042CFBC340F9() == 0 || (unk_0xDEDA6095A64A34C2() && unk_0xE1834019C3CC3C33(2)))
			{
				return 0;
			}
		}
		if (unk_0x1E114237D972903B() || unk_0xB5830E534335F40B())
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
		unk_0x26545538B51562AD(&Global_2284, 0);
		func_75();
		Global_14391 = 1;
		if (Global_69489)
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
					unk_0x8CED8F78CC31BEF2(Global_14394, "GET_CURRENT_SELECTION");
					uLocal_99 = unk_0xEF0E4A8ABAA0D524();
					while (!unk_0x20B35B8C39C5787D(uLocal_99))
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					iLocal_102 = unk_0x200C167A17C879D9(uLocal_99);
					bVar0 = false;
					if (unk_0x88E055AE81551426())
					{
						if (Global_69489)
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
					if (unk_0xF426A5DE932B3BEE(Global_2284, 0))
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
							if (unk_0xF426A5DE932B3BEE(Global_2283, 9))
							{
								if (!unk_0xF426A5DE932B3BEE(Global_2283, 29))
								{
									Global_101154.f_32575[Global_1598 /*29*/].f_18 = 1;
									if (Global_101154.f_32575[Global_1598 /*29*/].f_24[Global_14413] == 0)
									{
										func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(1), -1f, -1f, "CELL_288", "CELL_300", &(Global_117[Global_1598 /*10*/].f_4), "CELL_195", 0);
									}
									else
									{
										func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(1), -1f, -1f, "CELL_288", &(Global_101154.f_32575[Global_1598 /*29*/].f_7), &(Global_101154.f_32575[Global_1598 /*29*/].f_3), &(Global_101154.f_32575[Global_1598 /*29*/].f_3), 0);
									}
									func_139(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
									func_142(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
									unk_0x26545538B51562AD(&Global_2283, 29);
								}
							}
							else
							{
								bLocal_326 = false;
								bLocal_327 = false;
								if (Global_69489)
								{
									iVar1 = 0;
									while (iVar1 < 4)
									{
										if (unk_0xC1C5B83BB6719C6C(&(Global_101154.f_32575[Global_1598 /*29*/].f_3), &(Global_2186[iVar1 /*24*/])))
										{
											if (!unk_0xC1C5B83BB6719C6C(&(Global_2186[iVar1 /*24*/].f_8), "CELL_SFUN_NULL"))
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
										if (unk_0xC1C5B83BB6719C6C(&(Global_101154.f_32575[Global_1598 /*29*/].f_3), &(Global_2121[iVar2 /*16*/])))
										{
											if (!unk_0xC1C5B83BB6719C6C(&(Global_2121[iVar2 /*16*/].f_8), "CELL_SFUN_NULL"))
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
								if (func_149(Global_1598) && unk_0xF426A5DE932B3BEE(Global_2284, 0) == 0)
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
								if (unk_0xF426A5DE932B3BEE(Global_2284, 0))
								{
									func_148();
									iLocal_133 = 1;
								}
								else if (bLocal_327 == 0 && bLocal_326 == 0)
								{
									Global_16826 = 0;
									Global_16825 = 0;
									Global_16827 = 0;
									if (unk_0xF426A5DE932B3BEE(Global_2284, 19) && Global_1598 == 129)
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
	iLocal_131 = unk_0xA0F74982C6AAA9D4();
	func_142(Global_14394, "SET_DATA_SLOT_EMPTY", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4EDE34FBADD967A6(0);
	switch (Global_1598)
	{
		case 2:
			func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), 0f, -1f, -1f, "CELL_7001", &(Global_101154.f_32575[Global_1598 /*29*/].f_3), &(Global_101154.f_32575[Global_1598 /*29*/].f_7), 0, 0);
			break;
		
		case 0:
			func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), 0f, -1f, -1f, "CELL_7002", &(Global_101154.f_32575[Global_1598 /*29*/].f_3), &(Global_101154.f_32575[Global_1598 /*29*/].f_7), 0, 0);
			break;
		
		case 12:
			func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), 0f, -1f, -1f, "CELL_7003", &(Global_101154.f_32575[Global_1598 /*29*/].f_3), "CELL_E_311", 0, 0);
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
	unk_0xF17F4B0641AB2DE1(&Global_2283, 17);
	func_142(Global_14394, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_208", 0, 0, 0, 0);
	func_155(&Local_331);
	if (Global_14413.f_1 > 3)
	{
		func_142(Global_14394, "DISPLAY_VIEW", 18f, unk_0xBBDA792448DB5A89(iLocal_100), -1082130432, -1082130432, -1082130432);
		iLocal_100 = 0;
		if (func_154(&Local_331))
		{
			uVar0 = unk_0xD358A441FAC2240C(Local_331[Local_331.f_2936]);
		}
		else
		{
			uVar0 = func_152(&(Local_331.f_34[func_153(Local_331.f_2936, &Local_331) /*29*/].f_13));
		}
		unk_0x8CED8F78CC31BEF2(Global_14394, "SET_HEADER");
		unk_0x37B602106C6E0E91("CELL_CONDFNH");
		unk_0xF9E9E11D6DF3EBF8(uVar0);
		unk_0xD3076D52458B36EF();
		unk_0x7E5FA681CB7A2EF7();
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
			sVar37 = unk_0xD358A441FAC2240C((*uParam0)[uParam0->f_2936]);
		}
		else
		{
			uParam0->f_2963 = { uParam0->f_34[func_153(uParam0->f_2936, uParam0) /*29*/] };
			sVar37 = func_152(&(uParam0->f_34[func_153(uParam0->f_2936, uParam0) /*29*/].f_13));
		}
		StringCopy(&(uParam0->f_2983), sVar37, 64);
		bVar38 = false;
		if (unk_0xCBD3DDB204E8F478())
		{
			if (!Global_1573858)
			{
				if (func_162(unk_0x4D29100D094E5511()))
				{
					bVar38 = true;
				}
			}
		}
		if (func_154(uParam0))
		{
			if (((unk_0xC610826FDD31C584((*uParam0)[uParam0->f_2936]) || unk_0x228F3B52A1CABDD9((*uParam0)[uParam0->f_2936])) || unk_0xCE604EB308351A84((*uParam0)[uParam0->f_2936])) || unk_0x23FC0854C2543379((*uParam0)[uParam0->f_2936]))
			{
				bVar38 = false;
			}
		}
		if (!unk_0x7D343C5B30D80DC6())
		{
			bVar38 = false;
		}
		if (unk_0xD0BCE7B6784387C5(0))
		{
			bVar38 = false;
		}
		if (unk_0x6683F2299FA7C267(&(uParam0->f_2963)) || unk_0xE1E628DF46666635(&(uParam0->f_2963)))
		{
			bVar38 = false;
		}
		if (unk_0x4DCC0AC2465BB6E9(&(uParam0->f_2963)) || unk_0x1DFBF50696107714(&(uParam0->f_2963)))
		{
			bVar38 = false;
		}
		if (unk_0x0FE655F57BD37C7B())
		{
			if (unk_0xD0333FE560420AC5())
			{
				if (unk_0x98F3B3EF4C9830C9())
				{
					bVar38 = false;
				}
			}
			else if (unk_0x748A964A12412EBB())
			{
				bVar38 = false;
			}
		}
		if (bVar38)
		{
			if (Global_69489)
			{
				unk_0x8CED8F78CC31BEF2(Global_14394, "SET_DATA_SLOT_EMPTY");
				unk_0xD2DC8221939F80F7(iVar0);
				unk_0x7E5FA681CB7A2EF7();
				unk_0x8CED8F78CC31BEF2(Global_14394, "SET_DATA_SLOT");
				unk_0xD2DC8221939F80F7(18);
				unk_0xD2DC8221939F80F7(iVar0);
				unk_0xD2DC8221939F80F7(0);
				if (!Global_2465472.f_1 || Global_2465472.f_38)
				{
					unk_0x37B602106C6E0E91("CELL_MP_1000");
					unk_0xD3076D52458B36EF();
				}
				else
				{
					unk_0x37B602106C6E0E91("CELL_MP_1000b");
					unk_0xD3076D52458B36EF();
				}
				unk_0x7E5FA681CB7A2EF7();
				uParam0->f_2937[iVar0] = 1;
				iVar0++;
			}
			else if (Global_35711 == 15)
			{
				unk_0x8CED8F78CC31BEF2(Global_14394, "SET_DATA_SLOT_EMPTY");
				unk_0xD2DC8221939F80F7(iVar0);
				unk_0x7E5FA681CB7A2EF7();
				unk_0x8CED8F78CC31BEF2(Global_14394, "SET_DATA_SLOT");
				unk_0xD2DC8221939F80F7(18);
				unk_0xD2DC8221939F80F7(iVar0);
				unk_0xD2DC8221939F80F7(0);
				if (!Global_2465472.f_1 || Global_2465472.f_38)
				{
					unk_0x37B602106C6E0E91("CELL_MP_1000");
					unk_0xD3076D52458B36EF();
				}
				else
				{
					unk_0x37B602106C6E0E91("CELL_MP_1000b");
					unk_0xD3076D52458B36EF();
				}
				unk_0x7E5FA681CB7A2EF7();
				uParam0->f_2937[iVar0] = 1;
				iVar0++;
			}
		}
		bVar38 = false;
		if (func_154(uParam0))
		{
			if (((func_162(unk_0x4D29100D094E5511()) && func_162((*uParam0)[uParam0->f_2936])) && !unk_0x228F3B52A1CABDD9((*uParam0)[uParam0->f_2936])) && !unk_0xCE604EB308351A84((*uParam0)[uParam0->f_2936]))
			{
				bVar38 = true;
			}
		}
		if (bVar38)
		{
			unk_0x8CED8F78CC31BEF2(Global_14394, "SET_DATA_SLOT_EMPTY");
			unk_0xD2DC8221939F80F7(iVar0);
			unk_0x7E5FA681CB7A2EF7();
			unk_0x8CED8F78CC31BEF2(Global_14394, "SET_DATA_SLOT");
			unk_0xD2DC8221939F80F7(18);
			unk_0xD2DC8221939F80F7(iVar0);
			unk_0xD2DC8221939F80F7(0);
			unk_0x37B602106C6E0E91("CELL_MP_1009");
			unk_0xD3076D52458B36EF();
			unk_0x7E5FA681CB7A2EF7();
			uParam0->f_2937[iVar0] = 2;
			iVar0++;
		}
		bVar38 = false;
		if (func_154(uParam0))
		{
			if (unk_0xF37889B966BC031B() < unk_0xC57E4CFEDD3D9A7D())
			{
				if (!unk_0xCD9EF71963819AF0(&(uParam0->f_2963)))
				{
					bVar38 = true;
				}
			}
		}
		if (bVar38)
		{
			unk_0x8CED8F78CC31BEF2(Global_14394, "SET_DATA_SLOT");
			unk_0xD2DC8221939F80F7(18);
			unk_0xD2DC8221939F80F7(iVar0);
			unk_0xD2DC8221939F80F7(0);
			unk_0x37B602106C6E0E91("PIM_DFRQ2");
			unk_0xD3076D52458B36EF();
			unk_0x7E5FA681CB7A2EF7();
			uParam0->f_2937[iVar0] = 3;
			iVar0++;
		}
		bVar38 = false;
		bVar38 = true;
		if (bVar38)
		{
			unk_0x8CED8F78CC31BEF2(Global_14394, "SET_DATA_SLOT");
			unk_0xD2DC8221939F80F7(18);
			unk_0xD2DC8221939F80F7(iVar0);
			unk_0xD2DC8221939F80F7(0);
			unk_0x37B602106C6E0E91("CELL_MP_1007");
			unk_0xD3076D52458B36EF();
			unk_0x7E5FA681CB7A2EF7();
			uParam0->f_2937[iVar0] = 4;
			iVar0++;
		}
		bVar38 = false;
		if (unk_0x4A95235C630E7410())
		{
			if (unk_0x5363E9DA9285526E(&(uParam0->f_2963)))
			{
				unk_0xCA2992FB3936A00C(&Var1, 35, &(uParam0->f_2963));
			}
		}
		if (Var1.f_0 != -1)
		{
			if (Var1.f_21 == 1)
			{
				if (unk_0xF9A2527AE152F062() && !func_161(Var1.f_0))
				{
					bVar38 = true;
					uParam0->f_2947 = { Var1.f_1 };
				}
			}
		}
		if (bVar38)
		{
			unk_0x8CED8F78CC31BEF2(Global_14394, "SET_DATA_SLOT");
			unk_0xD2DC8221939F80F7(18);
			unk_0xD2DC8221939F80F7(iVar0);
			unk_0xD2DC8221939F80F7(0);
			unk_0x37B602106C6E0E91("CELL_MP_1003");
			unk_0xD3076D52458B36EF();
			unk_0x7E5FA681CB7A2EF7();
			uParam0->f_2937[iVar0] = 5;
			iVar0++;
		}
		unk_0xF17F4B0641AB2DE1(&Global_2285, 6);
		bVar38 = false;
		if (func_154(uParam0))
		{
			if (func_160(unk_0x4D29100D094E5511(), 1, 1))
			{
				if (unk_0xF05E4A287C3CAFE3(unk_0x4D29100D094E5511(), (*uParam0)[uParam0->f_2936]))
				{
					if (!func_159((*uParam0)[uParam0->f_2936], 0))
					{
						if (!unk_0xF426A5DE932B3BEE(Global_2418472[(*uParam0)[uParam0->f_2936] /*313*/].f_194, 2))
						{
							bVar38 = true;
							unk_0x26545538B51562AD(&Global_2285, 6);
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
			unk_0x8CED8F78CC31BEF2(Global_14394, "SET_DATA_SLOT");
			unk_0xD2DC8221939F80F7(18);
			unk_0xD2DC8221939F80F7(iVar0);
			unk_0xD2DC8221939F80F7(0);
			if (!unk_0xF426A5DE932B3BEE(Global_2428492.f_686, (*uParam0)[uParam0->f_2936]))
			{
				unk_0x37B602106C6E0E91("CELL_MP_1008");
			}
			else
			{
				unk_0x37B602106C6E0E91("CELL_MP_1008b");
			}
			unk_0xD3076D52458B36EF();
			unk_0x7E5FA681CB7A2EF7();
			uParam0->f_2937[iVar0] = 7;
			iVar0++;
		}
	}
	else
	{
		unk_0x5411F6B456B04A6B("CELL_LEFT_SESS");
		unk_0xF51DE8AFFD9CC3C9(1, 1);
		func_30(0);
		return;
	}
}

int func_156(int iParam0, int iParam1)
{
	if (Global_1610316[iParam0 /*174*/] == iParam1)
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
		return unk_0xF426A5DE932B3BEE(Global_1610316[iVar0 /*174*/].f_1, 0);
	}
	return 0;
}

int func_158()
{
	return -1;
}

bool func_159(int iParam0, int iParam1)
{
	return unk_0xF426A5DE932B3BEE(Global_2418472[iParam0 /*313*/].f_206, iParam1);
}

int func_160(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0x27C9C05A6B4E58D2(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x2DB75A8F096AB1F1(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2428492.f_3[iVar0])
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
	
	if (unk_0x4A95235C630E7410() && unk_0xF9A2527AE152F062())
	{
		iVar0 = unk_0xFFA89CBCECB87761();
		if (iVar0 > 0)
		{
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				unk_0x0AE5ED0DA64B0340(&Global_2459370, iVar1);
				if (iParam0 == Global_2459370)
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
	
	if (unk_0x6AA2781364C20A27() == 0)
	{
		return 0;
	}
	iVar0 = -1;
	if (iParam0 != unk_0x4D29100D094E5511())
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	if (unk_0x3E00A1016DB5AFEF() || unk_0x748A964A12412EBB())
	{
		if (unk_0x34598392CB66EAED(0, iVar0))
		{
			if (unk_0x7D343C5B30D80DC6())
			{
				return 1;
			}
		}
	}
	if (unk_0xE060CF72D1CA5C87() || unk_0xD0333FE560420AC5())
	{
		if (iParam0 == unk_0x4D29100D094E5511())
		{
			if (unk_0xE24260ED0D7EC295(0, -3, 1) || unk_0x34598392CB66EAED(1, -1))
			{
				return 1;
			}
		}
		else
		{
			Var1 = { func_163(iParam0) };
			if (unk_0x34598392CB66EAED(0, -1) || (unk_0x34598392CB66EAED(1, -1) && unk_0xCD9EF71963819AF0(&Var1)))
			{
				return 1;
			}
		}
	}
	if (unk_0xDFCB321F1D24137F())
	{
		if (unk_0x34598392CB66EAED(0, iVar0))
		{
			if (unk_0x7D343C5B30D80DC6())
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
	
	unk_0x224B05ED6725EA52(iParam0, &Var0, 13);
	return Var0;
}

int func_164(var uParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x88E055AE81551426())
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
		if (unk_0x3C671FD96FA65152(&(uParam0->f_34[iVar0 /*29*/])))
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
		unk_0xF17F4B0641AB2DE1(&Global_2284, 0);
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
	if (unk_0xE1834019C3CC3C33(2))
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
			unk_0x954BCDB8FDB0AC0F(-1, "Menu_Navigate", &Global_14402, 1);
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
			unk_0x954BCDB8FDB0AC0F(-1, "Menu_Navigate", &Global_14402, 1);
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
		unk_0xF17F4B0641AB2DE1(&Global_2283, 16);
	}
	func_135();
	unk_0x8CED8F78CC31BEF2(Global_14394, "GET_CURRENT_SELECTION");
	uLocal_99 = unk_0xEF0E4A8ABAA0D524();
	while (!unk_0x20B35B8C39C5787D(uLocal_99))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	iLocal_102 = unk_0x200C167A17C879D9(uLocal_99);
	if (iLocal_102 < 0)
	{
		iLocal_102 = 0;
	}
	if (Global_16743 == Global_14419[iLocal_102])
	{
		unk_0xF17F4B0641AB2DE1(&Global_2283, 16);
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
	
	if (unk_0xF426A5DE932B3BEE(Global_2285, 6))
	{
		if (!unk_0x9B9C3FABD760DD83(&(Local_331.f_2963)))
		{
			unk_0xF17F4B0641AB2DE1(&Global_2285, 6);
			StringCopy(&cLocal_109, "", 16);
			Global_14413.f_1 = 3;
		}
	}
	switch (Local_331.f_2999)
	{
		case 0:
			if (unk_0xF426A5DE932B3BEE(uLocal_325, 1))
			{
				if (!Global_91330.f_1352)
				{
					unk_0xF17F4B0641AB2DE1(&uLocal_325, 0);
					unk_0xF17F4B0641AB2DE1(&uLocal_325, 1);
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
						if (func_145(2, Global_14382, 0) || unk_0x5FCAE3F8AEC656AF(2, 201))
						{
							Global_14413.f_1 = 3;
						}
					}
					else if (func_145(2, Global_14382, 0) || unk_0x5FCAE3F8AEC656AF(2, 201))
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
							if (!Global_2465472.f_1)
							{
								if (!unk_0xA01C55F2A3C733B7() && !unk_0x6575FF13E108C3C7())
								{
									Local_331.f_2976 = 0;
									func_252();
									Local_331.f_2977 = 0;
									if (func_154(&Local_331))
									{
										sVar53 = unk_0xD358A441FAC2240C(Local_331[Local_331.f_2936]);
									}
									else
									{
										sVar53 = func_152(&(Local_331.f_34[func_153(Local_331.f_2936, &Local_331) /*29*/].f_13));
									}
									func_251(sVar53);
									Local_331.f_2999 = 1;
									func_250(&(Local_331.f_2979));
									func_249(0);
									if (Global_69489)
									{
										if (func_248(1) >= Global_262145.f_159)
										{
											Var40 = { func_163(unk_0x4D29100D094E5511()) };
											if (func_247())
											{
												func_238(1654961868, Global_262145.f_159, &iVar0, 1, 1, 0);
												Global_2558146[iVar0 /*73*/].f_8.f_3 = { Var40 };
											}
											else
											{
												unk_0xF388F6E6BA947583(Global_262145.f_159, &Var40, 1, 1);
											}
										}
										else
										{
											Var40 = { func_163(unk_0x4D29100D094E5511()) };
											if (func_247())
											{
											}
											else
											{
												unk_0xF388F6E6BA947583(func_248(1), &Var40, 1, 1);
											}
										}
										func_87(1907, 1, -1);
									}
								}
								else if (unk_0xA01C55F2A3C733B7())
								{
								}
								else if (unk_0x6575FF13E108C3C7())
								{
									if (!Global_2465472.f_59)
									{
										Global_2465472 = 1;
										Global_2465472.f_2 = 1;
										Global_2465472.f_59 = 1;
									}
								}
							}
							else if (Global_2465472.f_38)
							{
							}
							else
							{
								func_237();
								unk_0x954BCDB8FDB0AC0F(-1, "Hang_Up", &Global_14402, 1);
								if (Global_2465472.f_1)
								{
									func_235();
								}
								Global_14413.f_1 = 3;
							}
							return;
							break;
						
						case 2:
							if (func_234(&(Global_2460486.f_286[Local_331[Local_331.f_2936] /*2*/])))
							{
								if (!func_233(&(Global_2460486.f_286[Local_331[Local_331.f_2936] /*2*/]), 30000, 0))
								{
									if (func_222(0, 0, 1, 1))
									{
										func_205("CELL_MP_1009H", unk_0xD358A441FAC2240C(Local_331[Local_331.f_2936]), func_206(Local_331[Local_331.f_2936], -2, 0, 0), -1);
									}
									Local_331.f_2976 = 0;
									return;
								}
							}
							if (((!func_162(unk_0x4D29100D094E5511()) || !func_162(Local_331[Local_331.f_2936])) || unk_0x228F3B52A1CABDD9(Local_331[Local_331.f_2936])) || unk_0xCE604EB308351A84(Local_331[Local_331.f_2936]))
							{
								if (func_222(1, 1, 1, 1))
								{
									if (!unk_0xC1C5B83BB6719C6C(unk_0xD358A441FAC2240C(Local_331[Local_331.f_2936]), "**Invalid**"))
									{
										func_205("CELL_MP_1009M", unk_0xD358A441FAC2240C(Local_331[Local_331.f_2936]), func_206(Local_331[Local_331.f_2936], -2, 0, 0), -1);
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
							if (!unk_0x4FE5B562102D759D())
							{
								if (unk_0x3E00A1016DB5AFEF() && !unk_0xCD9EF71963819AF0(&(Local_331.f_2963)))
								{
									if (unk_0x1D8FB475D716DC85(&(Local_331.f_2963), ""))
									{
										Local_331.f_2976 = 0;
										Global_14413.f_1 = 3;
									}
								}
								else
								{
									unk_0xA09108CA264DCD24(&(Local_331.f_2963));
									Local_331.f_2976 = 0;
									Global_14413.f_1 = 3;
								}
							}
							break;
						
						case 5:
							if (unk_0x4A95235C630E7410())
							{
								if (unk_0x5363E9DA9285526E(&(Local_331.f_2963)))
								{
									unk_0xCA2992FB3936A00C(&Var4, 35, &(Local_331.f_2963));
								}
							}
							if (Var4.f_0 != -1)
							{
								if (Var4.f_21 == 1)
								{
									if (!func_161(Var4.f_0))
									{
										if (unk_0x460DFED547D71979(Var4.f_0))
										{
											Local_331.f_2976 = 0;
											unk_0x5411F6B456B04A6B("CREW_JOIN");
											unk_0xF9E9E11D6DF3EBF8(&(Var4.f_1));
											unk_0xF51DE8AFFD9CC3C9(1, 1);
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
							unk_0xA09108CA264DCD24(&(Local_331.f_2963));
							break;
						
						case 7:
							if (unk_0xF426A5DE932B3BEE(Global_2428492.f_686, Local_331[Local_331.f_2936]))
							{
								unk_0xF17F4B0641AB2DE1(&(Global_2428492.f_686), Local_331[Local_331.f_2936]);
							}
							else
							{
								Global_2428492.f_686 = 0;
								unk_0x26545538B51562AD(&(Global_2428492.f_686), Local_331[Local_331.f_2936]);
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
					unk_0xF17F4B0641AB2DE1(&Global_2284, 0);
					iLocal_115 = 0;
					func_143();
					Global_14391 = 1;
					unk_0x8CED8F78CC31BEF2(Global_14394, "GET_CURRENT_SELECTION");
					uLocal_99 = unk_0xEF0E4A8ABAA0D524();
					while (!unk_0x20B35B8C39C5787D(uLocal_99))
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					Local_331.f_2946 = unk_0x200C167A17C879D9(uLocal_99);
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
								Global_2465472.f_59 = 0;
								Local_331.f_2981 = 1;
								Local_331.f_2976 = 1;
								return;
								break;
						}
						Global_14413.f_1 = 3;
						return;
					}
					Global_2465472.f_59 = 0;
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
					if (!Global_2465472.f_1 || !unk_0x9F73F967966B3045())
					{
						func_249(1);
						func_237();
						Local_331.f_2978 = 1;
						Local_331.f_2977 = 1;
						return;
					}
					if (unk_0x88E055AE81551426())
					{
						if (func_145(2, Global_14383, 0))
						{
							func_237();
							Local_331.f_2976 = 0;
							return;
						}
						if (func_202(Global_2465472.f_20))
						{
							if (unk_0xCD9EF71963819AF0(&(Global_2465472.f_20)))
							{
								if (!unk_0x3C671FD96FA65152(&(Global_2465472.f_20)))
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
					if (!Global_2465472.f_37)
					{
						if (Global_2465472.f_33 == -1)
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
							switch (Global_2465472.f_33)
							{
								case 1:
									func_201();
									func_200();
									if (unk_0x0E063DDE8855EC52())
									{
										if (iVar1 == iVar2)
										{
										}
									}
									unk_0x972F93B6DF7649AC(iLocal_104);
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
				if (Global_2465472.f_1 || unk_0xF426A5DE932B3BEE(Global_2284, 20))
				{
					if (func_145(2, Global_14383, 0))
					{
						func_237();
						Global_14413.f_1 = 3;
						return;
					}
				}
				if (Global_2465472.f_1)
				{
					if (func_198(&Local_331, &(Local_331.f_2983)))
					{
						func_197(&(Local_331.f_2979), 1, 0);
						Local_331.f_2978 = 0;
						Local_331.f_2977 = 1;
						if (Global_69489)
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
					StringCopy(&cLocal_3334, unk_0xC054BA5E8416DBEC(), 64);
					Local_3331.f_0 = 0;
					Local_3331.f_2 = 0;
					Local_3331.f_1 = 0;
					iLocal_3350 = 0;
					uLocal_3351 = unk_0x1DA63F254F38C8A7(&cLocal_3334);
					StringCopy(&cLocal_3334, unk_0x4A236FB937A8F71F(&cLocal_3334, 0, uLocal_3351, 63), 64);
					func_197(&(Global_2460486.f_286[Local_331[Local_331.f_2936] /*2*/]), 0, 0);
					if (unk_0x75CB9E30BA492FF0(func_188(&cLocal_3334)))
					{
					}
					else
					{
						Var54 = { func_163(Local_331[Local_331.f_2936]) };
						unk_0x10555CFF3258A013(&cLocal_3334, &Var54);
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
	iVar1 = unk_0xEDB589A956C2855F(iParam1);
	if (unk_0xF05E4A287C3CAFE3(unk_0x4D29100D094E5511(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, unk_0xD358A441FAC2240C(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, unk_0xD358A441FAC2240C(iParam1), 64);
		}
		unk_0x5411F6B456B04A6B(sParam0);
		if ((iVar1 != -1 && unk_0x9404B1BCD022816B()) && iVar1 < 4)
		{
			if (Global_1617379.f_66777[iVar1] != -1)
			{
				unk_0xF4D4BFD98B32BF85(func_181(iVar1, iParam1, 0));
			}
			else
			{
				unk_0xF4D4BFD98B32BF85(func_206(iParam1, -2, 1, 0));
			}
		}
		else
		{
			unk_0xF4D4BFD98B32BF85(func_206(iParam1, -2, 1, 0));
		}
		unk_0xF9E9E11D6DF3EBF8(func_179(&Var2));
		if (!bParam4)
		{
			iVar0 = unk_0xF51DE8AFFD9CC3C9(0, 1);
		}
		else
		{
			Global_2459440 = { func_163(iParam1) };
			if (unk_0xCA2992FB3936A00C(&Global_2459370, 35, &Global_2459440))
			{
				iVar18 = 0;
				if (unk_0xC1C5B83BB6719C6C(&(Global_2459370.f_22), "Leader") && Global_2459370.f_30 == 0)
				{
					iVar18 = 1;
				}
				if (Global_2459370.f_21 > 0)
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
					iVar0 = unk_0xDD4C1BFC77962D6A(iVar19, unk_0x5E898B4D26519673(&Global_2459370, 35), &(Global_2459370.f_17), Global_2459370.f_30, iVar18, 0, Global_2459370, &Var2, Global_1317072, Global_1317073, Global_1317074);
				}
				else
				{
					iVar0 = unk_0xC6B593EB99D2A3BB(iVar19, unk_0x5E898B4D26519673(&Global_2459370, 35), &(Global_2459370.f_17), Global_2459370.f_30, iVar18, 0, Global_2459370, Global_1317072, Global_1317073, Global_1317074);
				}
			}
			else
			{
				iVar0 = unk_0xF51DE8AFFD9CC3C9(0, 1);
			}
		}
		func_172(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_172(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_177() || !unk_0x9404B1BCD022816B()) || !func_175(unk_0x4D29100D094E5511(), 0))
	{
		return;
	}
	iVar0 = func_173(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1724230.f_5[iVar0 /*53*/] = iParam0;
		Global_1724230.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1724230.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1724230.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1724230.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1724230.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1724230.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_173(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1724230 - 1))
	{
		if (iParam0 > Global_1724230.f_5[iVar0 /*53*/].f_1)
		{
			func_174(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1724230++;
	if (Global_1724230 > 5)
	{
		Global_1724230 = 5;
		return Global_1724230;
	}
	return (Global_1724230 - 1);
}

void func_174(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1724230.f_5[iVar0 /*53*/] = { Global_1724230.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_175(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x4D29100D094E5511())
	{
		bVar0 = func_176(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1587523[iParam0 /*444*/].f_195 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x27C9C05A6B4E58D2(iParam0))
		{
			bVar0 = unk_0xEDB589A956C2855F(iParam0) == 8;
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
	return unk_0xA29E536967D6DF2E(-1762644250);
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
	
	if (Global_1617379.f_66777[iParam0] != -1 && Global_1617379.f_66777[iParam0] <= 4)
	{
		if (Global_1617379.f_66777[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1617379.f_66777[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1617379.f_66777[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1617379.f_66777[iParam0] == 4)
		{
			if (unk_0xF426A5DE932B3BEE(Global_1617379.f_15, 29))
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
			iVar0 = Global_1617379.f_66777[iParam0];
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
	
	iVar0 = unk_0xEDB589A956C2855F(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_187(iVar0, iParam2, 0) && !unk_0xF426A5DE932B3BEE(Global_1617379.f_15, 18))
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
			else if (unk_0xF426A5DE932B3BEE(Global_1617379.f_4, 20))
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
	if (func_184(Global_1617379.f_70365))
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
		if (iParam0 == Global_262145.f_7339[iVar0])
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
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 0);
				
				case 1:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 1);
				
				case 2:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 2);
				
				case 3:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 4);
				
				case 1:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 5);
				
				case 2:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 6);
				
				case 3:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 8);
				
				case 1:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 9);
				
				case 2:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 10);
				
				case 3:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 12);
				
				case 1:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 13);
				
				case 2:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 14);
				
				case 3:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 15);
				
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
	
	if (unk_0xA07829C3F763B9B6() || unk_0x3934E959DB2478D3())
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
						if (unk_0xD32535FA4397160F(joaat("fm_capture_creator")) > 0)
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
						if (unk_0xD32535FA4397160F(joaat("fm_capture_creator")) > 0)
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
				if (unk_0xE060CF72D1CA5C87() || unk_0xD0333FE560420AC5())
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
				if (unk_0xDFCB321F1D24137F())
				{
					iVar7 = 6;
				}
				else if (unk_0xAD352C89B015DEBA() == 0)
				{
					iVar7 = 0;
				}
				else
				{
					iVar7 = 1;
				}
				if (unk_0x75CB9E30BA492FF0(sParam5))
				{
					unk_0x5F19E109A9180E7B(iVar7, sVar4, sVar5, "", "", "", "", iVar6);
				}
				else
				{
					unk_0x5F19E109A9180E7B(iVar7, sVar4, sVar5, sParam5, sParam10, "", "", iVar6);
				}
			}
			else
			{
				if (unk_0xDFCB321F1D24137F())
				{
					iVar8 = 6;
				}
				else if (unk_0xAD352C89B015DEBA() == 0)
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
					if (unk_0xE060CF72D1CA5C87() || unk_0xD0333FE560420AC5())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M19";
					}
					if (unk_0xAD352C89B015DEBA() == 10)
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
					unk_0x341503D0BC8B2AD9(2);
					if (unk_0x75CB9E30BA492FF0(&(Global_1617379.f_70372)))
					{
						unk_0x5F19E109A9180E7B(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0x5F19E109A9180E7B(iVar8, sVar4, sVar5, &(Global_1617379.f_70372), "", "", "", iVar9);
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
					if (unk_0xE060CF72D1CA5C87())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M19";
					}
					iVar9 = 63;
					unk_0x341503D0BC8B2AD9(2);
					if (unk_0x75CB9E30BA492FF0(sParam5))
					{
						unk_0x5F19E109A9180E7B(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0x5F19E109A9180E7B(iVar8, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam9)
				{
					if (unk_0xAD352C89B015DEBA() == 0)
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
					if (unk_0xE060CF72D1CA5C87() || unk_0xD0333FE560420AC5())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M36";
					}
					iVar10 = 0;
					while (iVar10 <= 7)
					{
						if (unk_0x0275404839C0A19A(&(Global_1617379.f_70523[iVar10 /*16*/])))
						{
							StringCopy(&(Global_1617379.f_70523[iVar10 /*16*/]), "", 64);
						}
						iVar10++;
					}
					unk_0x1850E11844A37D37(iVar8, sVar4, sVar5, &(Global_1617379.f_70523[0 /*16*/]), &(Global_1617379.f_70523[1 /*16*/]), &(Global_1617379.f_70523[2 /*16*/]), &(Global_1617379.f_70523[3 /*16*/]), &(Global_1617379.f_70523[4 /*16*/]), &(Global_1617379.f_70523[5 /*16*/]), &(Global_1617379.f_70523[6 /*16*/]), &(Global_1617379.f_70523[7 /*16*/]), iVar9);
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
					if (unk_0xE060CF72D1CA5C87() || unk_0xD0333FE560420AC5())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_SMS3";
					}
					if (unk_0x75CB9E30BA492FF0(&(Global_1617379.f_28799[iParam16 /*38*/].f_4[0 /*16*/])))
					{
						unk_0x5F19E109A9180E7B(iVar8, sVar4, sVar5, "", "", "", "", 126);
					}
					else
					{
						iVar11 = 0;
						while (iVar11 <= 1)
						{
							if (unk_0x0275404839C0A19A(&(Global_1617379.f_28799[iParam16 /*38*/].f_4[iVar11 /*16*/])))
							{
								StringCopy(&(Global_1617379.f_28799[iParam16 /*38*/].f_4[iVar11 /*16*/]), "", 64);
							}
							iVar11++;
						}
						unk_0x5F19E109A9180E7B(iVar8, sVar4, sVar5, &(Global_1617379.f_28799[iParam16 /*38*/].f_4[0 /*16*/]), &(Global_1617379.f_28799[iParam16 /*38*/].f_4[1 /*16*/]), "", "", 126);
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
						if (unk_0xE060CF72D1CA5C87() || unk_0xD0333FE560420AC5())
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
						if (unk_0xE060CF72D1CA5C87() || unk_0xD0333FE560420AC5())
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
						if (unk_0xE060CF72D1CA5C87())
						{
							sVar5 = sVar4;
							sVar4 = "FMMC_SMS4";
						}
					}
					if (unk_0x75CB9E30BA492FF0(sParam5))
					{
						unk_0x5F19E109A9180E7B(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0x5F19E109A9180E7B(iVar8, sVar4, sVar5, sParam5, "", "", "", iVar9);
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
					if (unk_0xE060CF72D1CA5C87())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_KEY_TIP9N";
					}
					if (unk_0x75CB9E30BA492FF0(sParam5))
					{
						unk_0x5F19E109A9180E7B(iVar8, sVar4, sVar5, "", "", "", "", 16);
					}
					else
					{
						unk_0x5F19E109A9180E7B(iVar8, sVar4, sVar5, sParam5, "", "", "", 16);
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
					if (unk_0xE060CF72D1CA5C87())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_KEY_TIP12N";
					}
					if (unk_0x75CB9E30BA492FF0(sParam5))
					{
						unk_0x5F19E109A9180E7B(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0x5F19E109A9180E7B(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
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
					if (unk_0x75CB9E30BA492FF0(sParam5))
					{
						unk_0x5F19E109A9180E7B(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0x5F19E109A9180E7B(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam17)
				{
					if (unk_0xD0333FE560420AC5())
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
					if (unk_0xE060CF72D1CA5C87())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_KEY_TIP14N";
					}
					if (unk_0x75CB9E30BA492FF0(sParam5))
					{
						unk_0x5F19E109A9180E7B(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0x5F19E109A9180E7B(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam18)
				{
					if (unk_0xE060CF72D1CA5C87() || unk_0xD0333FE560420AC5())
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
					if (unk_0x75CB9E30BA492FF0(sParam5))
					{
						unk_0x5F19E109A9180E7B(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0x5F19E109A9180E7B(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else
				{
					if (unk_0xAD352C89B015DEBA() == 0)
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
					if (unk_0xE060CF72D1CA5C87() || unk_0xD0333FE560420AC5())
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
						if (unk_0x0275404839C0A19A(&(Global_1617379.f_70394[iVar12 /*16*/])))
						{
							StringCopy(&(Global_1617379.f_70394[iVar12 /*16*/]), "", 64);
						}
						iVar12++;
					}
					if (bParam11)
					{
						unk_0x1850E11844A37D37(iVar8, sVar4, sVar5, sParam5, sParam10, "", "", "", "", "", "", iVar9);
					}
					else
					{
						unk_0x1850E11844A37D37(iVar8, sVar4, sVar5, &(Global_1617379.f_70394[0 /*16*/]), &(Global_1617379.f_70394[1 /*16*/]), &(Global_1617379.f_70394[2 /*16*/]), &(Global_1617379.f_70394[3 /*16*/]), &(Global_1617379.f_70394[4 /*16*/]), &(Global_1617379.f_70394[5 /*16*/]), &(Global_1617379.f_70394[6 /*16*/]), &(Global_1617379.f_70394[7 /*16*/]), iVar9);
					}
				}
			}
			StringCopy(&Global_1705885, "", 64);
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		
		case 1:
			*uParam0 = unk_0x35F8042CFBC340F9();
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
						if (unk_0x75CB9E30BA492FF0(&Global_1705885))
						{
							StringCopy(&Global_1705885, unk_0xC054BA5E8416DBEC(), 64);
							if (unk_0x75CB9E30BA492FF0(&Global_1705885))
							{
								*uParam1 = 0;
								return 1;
							}
							iVar1 = unk_0x1DA63F254F38C8A7(unk_0xC054BA5E8416DBEC());
							iVar3 = 0;
							while (iVar3 <= (iVar1 - 1))
							{
								if (*uParam2 != 0)
								{
									if (!unk_0x75CB9E30BA492FF0(&Global_1705885))
									{
										if (unk_0xC1C5B83BB6719C6C(" ", unk_0x397AA18A3F2F4F1C(&Global_1705885, 0, 1)))
										{
											iVar2 = unk_0x1DA63F254F38C8A7(&Global_1705885);
											StringCopy(&Global_1705885, unk_0x397AA18A3F2F4F1C(&Global_1705885, 1, iVar2), 64);
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
					if (unk_0x9E92D1F36F6CE647(*uParam1))
					{
						if (!unk_0x0DC0C15E96B8CBDF(*uParam1))
						{
							unk_0xDBF01C7AD4901C01();
							iVar0 = unk_0xE3672DF1B98C5E2B(*uParam1);
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
							if (unk_0xD32535FA4397160F(joaat("appinternet")) == 0)
							{
								unk_0xDBF01C7AD4901C01();
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
							unk_0x43CB304C17619F4C(&Global_1705885, uParam1);
						}
						else
						{
							unk_0xA25C5B18F7A86889(&Global_1705885, uParam1);
						}
					}
					else if (unk_0x75CB9E30BA492FF0(unk_0xC054BA5E8416DBEC()))
					{
						*uParam1 = -2;
						*uParam2 = 0;
						*uParam0 = 0;
						unk_0xDBF01C7AD4901C01();
						return 0;
					}
					else if (bParam22)
					{
						unk_0x43CB304C17619F4C(unk_0xC054BA5E8416DBEC(), uParam1);
					}
					else
					{
						unk_0xA25C5B18F7A86889(unk_0xC054BA5E8416DBEC(), uParam1);
					}
					if (unk_0xD0333FE560420AC5())
					{
						if ((!unk_0x88E055AE81551426() || func_191() == 0) || func_190() == 1)
						{
							*uParam1 = 0;
							*uParam2 = 0;
							*uParam0 = 3;
							return 0;
						}
					}
					if (bParam17)
					{
						unk_0x60B08CFC977781CB("ERROR_CHECKYACHTNAME");
						unk_0x28C463CBC3CAAFBE(1);
					}
					else
					{
						unk_0x60B08CFC977781CB("ERROR_CHECKPROFANITY");
						unk_0x28C463CBC3CAAFBE(1);
					}
					if (!unk_0x9E92D1F36F6CE647(*uParam1))
					{
						if (!unk_0x75CB9E30BA492FF0(&Global_1705885))
						{
							*uParam1 = -1;
						}
						else
						{
							*uParam1 = -2;
						}
						*uParam2 = 0;
						*uParam0 = 0;
						unk_0xDBF01C7AD4901C01();
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
	if (unk_0x878E45E8C4AA7963() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_192()
{
	return Global_2443548;
}

void func_193(int iParam0)
{
	Global_2443548 = iParam0;
}

int func_194()
{
	if (((unk_0xAD352C89B015DEBA() == 7 || unk_0xAD352C89B015DEBA() == 8) || unk_0xAD352C89B015DEBA() == 9) || unk_0xAD352C89B015DEBA() == 10)
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
		iVar0 = Global_2490231[iParam0 /*5*/][func_59(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x7D67977BA351D3A8(iVar0, iParam1, iParam3);
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
	if (unk_0x0E063DDE8855EC52() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x20D394965B47B01A();
		}
		else
		{
			*uParam0 = unk_0xBADD1A643AD56F36();
		}
	}
	else
	{
		*uParam0 = unk_0xA0F74982C6AAA9D4();
	}
	uParam0->f_1 = 1;
}

int func_198(var uParam0, char* sParam1)
{
	if (Global_2465472.f_1)
	{
		if (unk_0x9F73F967966B3045())
		{
			unk_0x003E1E84B58E6C89(&(uParam0->f_2963));
			Global_2465472.f_20 = { uParam0->f_2963 };
			StringCopy(&(Global_2465472.f_4), sParam1, 64);
			return 1;
		}
	}
	return 0;
}

void func_199(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x0E063DDE8855EC52() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x20D394965B47B01A();
			}
			else
			{
				*uParam0 = unk_0xBADD1A643AD56F36();
			}
		}
		else
		{
			*uParam0 = unk_0xA0F74982C6AAA9D4();
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
		if (Global_69489)
		{
			if (!unk_0xDFCB321F1D24137F())
			{
				func_139(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				unk_0x26545538B51562AD(&(Global_2460486.f_1639), 15);
			}
		}
	}
}

void func_201()
{
	unk_0x8CED8F78CC31BEF2(Global_14394, "SET_DATA_SLOT");
	unk_0xD2DC8221939F80F7(4);
	unk_0xD2DC8221939F80F7(0);
	unk_0xD2DC8221939F80F7(2);
	unk_0x37B602106C6E0E91("CELL_CONDFON");
	unk_0xF9E9E11D6DF3EBF8(&Global_15727);
	unk_0xD3076D52458B36EF();
	func_72("CELL_300");
	func_72("CELL_219");
	func_72("CELL_219");
	unk_0x7E5FA681CB7A2EF7();
	Global_2465472.f_37 = 1;
	unk_0xF17F4B0641AB2DE1(&Global_2283, 27);
	func_91();
}

bool func_202(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x5C131CC0633E1D17(&uParam0, 13);
}

void func_203(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xA1F5C1FF1B6B5069(sParam0);
	unk_0xB1547516FF59A048(iParam1, 1);
}

void func_204(char* sParam0, int iParam1)
{
	unk_0x3432AC8623AF4EAC(sParam0);
	unk_0x9785EE0D78241684(0, 0, 1, iParam1);
}

void func_205(char* sParam0, var uParam1, int iParam2, int iParam3)
{
	unk_0x3432AC8623AF4EAC(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xF4D4BFD98B32BF85(iParam2);
	}
	unk_0xF9E9E11D6DF3EBF8(uParam1);
	unk_0x9785EE0D78241684(0, 0, 1, iParam3);
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
	if (func_220(unk_0x4D29100D094E5511()) || (func_219() && func_218()))
	{
		uVar0 = func_217();
		if (unk_0xD2CFFE76B625AE55(uVar0))
		{
			if (unk_0x30D6008994E431E8(uVar0))
			{
				if (unk_0x881548CC6D5B749B(uVar0) != -1)
				{
					if (func_160(unk_0x881548CC6D5B749B(uVar0), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x9404B1BCD022816B()) && iParam1 < 4)
						{
							if (Global_1617379.f_66777[iParam1] != -1)
							{
								return func_181(iParam1, iParam0, 0);
							}
							else
							{
								return func_208(iParam0, unk_0x881548CC6D5B749B(uVar0), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_208(iParam0, unk_0x881548CC6D5B749B(uVar0), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x9404B1BCD022816B()) && iParam1 < 4)
			{
				if (Global_1617379.f_66777[iParam1] != -1)
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
	if ((iParam1 > -1 && unk_0x9404B1BCD022816B()) && iParam1 < 4)
	{
		if (Global_1617379.f_66777[iParam1] != -1)
		{
			return func_181(iParam1, iParam0, 0);
		}
		else
		{
			return func_208(iParam0, unk_0x4D29100D094E5511(), iParam1, bParam2, bParam3);
		}
	}
	return func_208(iParam0, unk_0x4D29100D094E5511(), iParam1, bParam2, bParam3);
}

int func_207(bool bParam0, int iParam1, bool bParam2)
{
	return func_182(unk_0x4D29100D094E5511(), bParam0, iParam1, bParam2);
}

int func_208(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0xEDB589A956C2855F(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1587523[unk_0x4D29100D094E5511() /*444*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1587523[iVar2 /*444*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if ((func_216(iParam1, iParam0, iVar0, 0) && !unk_0xF426A5DE932B3BEE(Global_1617379.f_15, 18)) || ((func_187(unk_0xEDB589A956C2855F(iParam1), unk_0xEDB589A956C2855F(iParam0), 0) && unk_0xF426A5DE932B3BEE(Global_1617379.f_15, 23)) && !unk_0xF426A5DE932B3BEE(Global_1617379.f_15, 18)))
			{
				return func_186(1);
			}
			else if (unk_0xF426A5DE932B3BEE(Global_1617379.f_15, 26))
			{
				return func_215(1);
			}
			else
			{
				return func_182(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1573837 || Global_1573828) || Global_1587523[iParam0 /*444*/] == 0)
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
	return Global_2413760.f_1946.f_44[iParam0 /*2*/].f_1;
}

int func_211(int iParam0)
{
	if (!iParam0 == func_158())
	{
		if (func_213(iParam0, 1))
		{
			return Global_2413760.f_1946.f_11[func_212(iParam0)];
		}
	}
	return -1;
}

int func_212(int iParam0)
{
	if (iParam0 != func_158())
	{
		return Global_1610316[iParam0 /*174*/].f_10;
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
	return Global_1610316[iParam0 /*174*/].f_10 != func_158();
}

int func_214(int iParam0)
{
	if (iParam0 != func_158())
	{
		if (Global_1610316[iParam0 /*174*/].f_10 != func_158())
		{
			return Global_1610316[iParam0 /*174*/].f_10 == iParam0;
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
			if (unk_0xEDB589A956C2855F(iParam0) == -1 && unk_0xEDB589A956C2855F(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0xEDB589A956C2855F(iParam0) == unk_0xEDB589A956C2855F(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0xEDB589A956C2855F(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0xEDB589A956C2855F(iParam0) == iParam2;
	}
	return unk_0xEDB589A956C2855F(iParam0) == iParam2;
}

var func_217()
{
	return Global_2359301.f_2;
}

bool func_218()
{
	return unk_0xF426A5DE932B3BEE(Global_2359301, 4);
}

bool func_219()
{
	return unk_0xF426A5DE932B3BEE(Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_39.f_18, 14);
}

int func_220(int iParam0)
{
	if (func_175(iParam0, 0))
	{
		return 1;
	}
	if (func_221())
	{
		if (iParam0 == unk_0x4D29100D094E5511())
		{
			return 1;
		}
	}
	if (unk_0xF426A5DE932B3BEE(Global_2418472[iParam0 /*313*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_221()
{
	return unk_0xF426A5DE932B3BEE(Global_2359301, 3);
}

int func_222(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0x46768B1495288824())
	{
		return 0;
	}
	if (func_232())
	{
		return 0;
	}
	if (!unk_0xCBB243DDC0D132D1())
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
		if (func_228(unk_0x4D29100D094E5511(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_227(unk_0x4D29100D094E5511()))
		{
			return 0;
		}
	}
	if (func_226())
	{
		return 0;
	}
	if (unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
	{
		return 0;
	}
	if (unk_0x1E114237D972903B())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0x170C6E2649B67440(unk_0x4D29100D094E5511()))
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
	if (Global_68058)
	{
		return 0;
	}
	if (Global_2467968)
	{
		return 0;
	}
	return 1;
}

bool func_223()
{
	return Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_180 != 0;
}

bool func_224()
{
	return Global_2434762.f_567;
}

bool func_225()
{
	return Global_2434762.f_717;
}

bool func_226()
{
	return Global_2428492.f_2462.f_585;
}

int func_227(int iParam0)
{
	if (Global_2418472[iParam0 /*313*/].f_206 == 0)
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
	if (Global_1587523[iParam0 /*444*/] == -1)
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
	return unk_0xF426A5DE932B3BEE(Global_1587523[iParam0 /*444*/].f_13.f_1, 0);
}

bool func_231()
{
	return unk_0xF426A5DE932B3BEE(Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_39.f_18, 0);
}

int func_232()
{
	if (Global_15712 != 0 || unk_0x1BF2632AED6B5924())
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
	if (unk_0x0E063DDE8855EC52() && !bParam2)
	{
		if (unk_0x2D8D75F813225B7B(unk_0x46979BF7DA499D4E(unk_0x20D394965B47B01A(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x2D8D75F813225B7B(unk_0x46979BF7DA499D4E(unk_0xA0F74982C6AAA9D4(), *uParam0)) >= iParam1)
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
	Global_2465472.f_1 = 0;
	Global_2465472 = 0;
	Global_2465472.f_2 = 0;
	Global_2465472.f_33 = -1;
	Global_2465472.f_34 = -1;
	StringCopy(&(Global_2465472.f_4), "", 64);
	StringCopy(&(Global_2465472.f_39[0 /*16*/]), "", 64);
	Global_2465472.f_38 = 0;
	Global_2465472.f_56 = 0;
	Global_2465472.f_57 = 0;
	Global_2465472.f_58 = -2;
	Global_2465472.f_3 = 0;
	func_236(&(Global_2465472.f_20));
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
	Global_2465472.f_2 = 1;
	Global_2465472.f_38 = 1;
	if (unk_0x88E055AE81551426())
	{
		if (unk_0x9F73F967966B3045())
		{
			while (unk_0xA01C55F2A3C733B7())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0x9F4DE3A4F50FC30A();
			Global_2465472 = 0;
			Global_2465472.f_2 = 0;
		}
		else if (func_202(Global_2465472.f_20))
		{
			if (unk_0xCD9EF71963819AF0(&(Global_2465472.f_20)))
			{
				if (!unk_0x3C671FD96FA65152(&(Global_2465472.f_20)))
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
	if (Global_2465472.f_37)
	{
		func_30(0);
	}
	Global_2465472.f_37 = 0;
	Global_2465472.f_3 = 0;
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
		if (!unk_0x6DDA083DB04D1FA1(func_60()) || unk_0xC0EF410FE489E4BC())
		{
			Global_2558637 = 1;
			return 0;
		}
		if (Global_2444207)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2558638 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2558146[iVar1 /*73*/].f_2 == 0)
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
	if (bVar0 || unk_0xFF60755759699F54(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0xB4593E48EB78775A(iVar3))
		{
			*uParam0 = func_246(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2558146[*uParam0 /*73*/].f_66 = 1;
				}
			}
			Global_2558628 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2558636 = 1;
			Global_2558639 = iParam4;
			Global_2558641 = iParam3;
			Global_2558642 = 1;
			Global_2558640 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2558639 = iParam4;
			Global_2558641 = iParam3;
			Global_2558642 = 1;
			Global_2558640 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_245(1, iParam4);
			Global_2558636 = 0;
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
			unk_0x26545538B51562AD(&(Global_2418472[unk_0x4D29100D094E5511() /*313*/].f_121.f_71), 0);
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
				unk_0x8B4018F9DEC0BCDE();
			}
		}
		else if (!bVar0)
		{
			unk_0xA5546C3771405485(Global_2558146[iParam0 /*73*/]);
		}
		func_242(&(Global_2558146[iParam0 /*73*/]));
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
		return Global_2558146[iParam0 /*73*/].f_5 == 1;
	}
	return 0;
}

void func_245(int iParam0, var uParam1)
{
	Global_2445534 = uParam1;
	Global_2445533 = iParam0;
}

int func_246(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2558146[iVar0 /*73*/].f_2 == 0)
		{
			if (!func_247())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2558146[iVar0 /*73*/].f_2 = 1;
			Global_2558146[iVar0 /*73*/].f_1 = uParam5;
			Global_2558146[iVar0 /*73*/].f_3 = uParam1;
			Global_2558146[iVar0 /*73*/].f_4 = uParam2;
			Global_2558146[iVar0 /*73*/].f_7 = uParam3;
			Global_2558146[iVar0 /*73*/].f_5 = 0;
			Global_2558146[iVar0 /*73*/] = iParam0;
			Global_2558146[iVar0 /*73*/].f_6 = iParam4;
			Global_2558146[iVar0 /*73*/].f_69 = uParam8;
			Global_2558146[iVar0 /*73*/].f_68 = uParam7;
			Global_2558146[iVar0 /*73*/].f_72 = 0;
			Global_2558628 = 0;
			if (bParam6)
			{
				Global_2558146[iVar0 /*73*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_247()
{
	if (unk_0xDFCB321F1D24137F())
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
		iVar0 = unk_0x01C8607B5EEAFF44();
	}
	iVar0 = (iVar0 + unk_0xAAD9B5BADB2DE4F5(-1));
	return iVar0;
}

void func_249(bool bParam0)
{
	if (bParam0)
	{
		unk_0x26545538B51562AD(&Global_2284, 20);
	}
	else
	{
		unk_0xF17F4B0641AB2DE1(&Global_2284, 20);
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
	unk_0x8CED8F78CC31BEF2(Global_14394, "SET_DATA_SLOT");
	unk_0xD2DC8221939F80F7(4);
	unk_0xD2DC8221939F80F7(0);
	unk_0xD2DC8221939F80F7(2);
	unk_0x37B602106C6E0E91("CELL_CONDFON");
	unk_0xF9E9E11D6DF3EBF8(&Global_15727);
	unk_0xD3076D52458B36EF();
	func_72("CELL_300");
	func_72("CELL_211");
	func_72("CELL_211");
	unk_0x7E5FA681CB7A2EF7();
	unk_0x26545538B51562AD(&Global_2283, 20);
	func_91();
	unk_0xF17F4B0641AB2DE1(&Global_2283, 20);
}

void func_252()
{
	unk_0x07CB6A7A2BFC0952();
	Global_2465472 = 1;
	Global_2465472.f_2 = 0;
	Global_2465472.f_33 = -1;
	Global_2465472.f_34 = -1;
	Global_2465472.f_38 = 0;
}

void func_253()
{
	unk_0x972F93B6DF7649AC(iLocal_104);
	unk_0xB79BFBEF5A2CE64B(iLocal_104);
	Local_331.f_2978 = 0;
	unk_0xF17F4B0641AB2DE1(&Global_2283, 9);
	unk_0xF17F4B0641AB2DE1(&Global_2283, 29);
	unk_0xF17F4B0641AB2DE1(&Global_2284, 20);
	unk_0xF17F4B0641AB2DE1(&Global_2284, 0);
	unk_0xF17F4B0641AB2DE1(&Global_2284, 18);
	Global_101154.f_32575[12 /*29*/].f_1 = uLocal_303;
	Global_101154.f_32575[2 /*29*/].f_1 = uLocal_304;
	Global_101154.f_32575[0 /*29*/].f_1 = uLocal_305;
	if (Local_331.f_2999 == 1)
	{
		if (unk_0x88E055AE81551426())
		{
			if (Global_2465472.f_33 == -1)
			{
				func_237();
			}
		}
	}
	unk_0x7C3AA2D27E16E2AD();
}

void func_254()
{
	if (!Global_69489)
	{
		if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
		{
			if (unk_0xF426A5DE932B3BEE(Global_2283, 11))
			{
				if (!Global_14356)
				{
					unk_0xB1F3893795B13F9B(unk_0x27D769C59BC9D030(), 0, 1);
				}
				if (Global_69489)
				{
					unk_0x56F64CC9254C2E4F(unk_0x27D769C59BC9D030(), 244, 1);
					unk_0x56F64CC9254C2E4F(unk_0x27D769C59BC9D030(), 243, 1);
					unk_0x56F64CC9254C2E4F(unk_0x27D769C59BC9D030(), 242, 1);
				}
				unk_0xF17F4B0641AB2DE1(&Global_2283, 11);
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
	
	Global_101154.f_32575[74 /*29*/].f_1 = 180;
	Global_101154.f_32575[75 /*29*/].f_1 = 190;
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
		Global_101154.f_32575[iVar151 /*29*/].f_1 = 5000;
		func_16();
		while (iVar150 < 147)
		{
			if (unk_0xF426A5DE932B3BEE(Global_2284, 0))
			{
				if ((iVar150 == 2 || iVar150 == 0) || iVar150 == 12)
				{
					Global_101154.f_32575[12 /*29*/].f_1 = 3;
					Global_101154.f_32575[2 /*29*/].f_1 = 1;
					Global_101154.f_32575[0 /*29*/].f_1 = 2;
					bLocal_91 = true;
				}
				else
				{
					bLocal_91 = false;
				}
			}
			else if (Global_101154.f_32575[iVar150 /*29*/].f_12[Global_14413] == 1)
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
						if (Global_101154.f_32575[iVar150 /*29*/].f_19[Global_14413] == 1 || func_79(iVar150, Global_14413))
						{
							fLocal_92 = (unk_0xBBDA792448DB5A89(Global_101154.f_32575[iVar150 /*29*/].f_1) / 100f);
						}
						else
						{
							fLocal_92 = unk_0xBBDA792448DB5A89(Global_101154.f_32575[iVar150 /*29*/].f_1);
						}
						if (Global_101154.f_32575[iVar151 /*29*/].f_19[Global_14413] == 1 || func_79(iVar151, Global_14413))
						{
							fLocal_93 = (unk_0xBBDA792448DB5A89(Global_101154.f_32575[iVar151 /*29*/].f_1) / 100f);
						}
						else
						{
							fLocal_93 = unk_0xBBDA792448DB5A89(Global_101154.f_32575[iVar151 /*29*/].f_1);
						}
						if (fLocal_92 < fLocal_93)
						{
							iVar151 = iVar150;
							if (unk_0xF426A5DE932B3BEE(Global_2284, 0))
							{
								if (iVar151 == 2)
								{
									func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 0f, -1f, -1f, "CELL_7001", &(Global_101154.f_32575[iVar151 /*29*/].f_3), &(Global_101154.f_32575[iVar151 /*29*/].f_7), 0, 0);
								}
								if (iVar151 == 0)
								{
									func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 0f, -1f, -1f, "CELL_7002", &(Global_101154.f_32575[iVar151 /*29*/].f_3), &(Global_101154.f_32575[iVar151 /*29*/].f_7), 0, 0);
								}
								if (iVar151 == 12)
								{
									func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 0f, -1f, -1f, "CELL_7003", &(Global_101154.f_32575[iVar151 /*29*/].f_3), "CELL_E_311", 0, 0);
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
		if (!unk_0xF426A5DE932B3BEE(Global_2284, 0))
		{
			if (Global_101154.f_32575[iVar151 /*29*/].f_12[Global_14413] == 1)
			{
				if (iVar150 != Global_14413)
				{
					if (Global_101154.f_32575[iVar151 /*29*/].f_24[Global_14413] == 0)
					{
						if (Global_101154.f_32575[iVar151 /*29*/].f_19[Global_14413] == 1 || func_79(iVar151, Global_14413))
						{
							func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 1f, -1f, -1f, &(Global_117[iVar151 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
						else
						{
							func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 0f, -1f, -1f, &(Global_117[iVar151 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
					}
					else if (Global_101154.f_32575[iVar151 /*29*/].f_19[Global_14413] == 1 || func_79(iVar151, Global_14413))
					{
						func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 1f, -1f, -1f, &(Global_101154.f_32575[iVar151 /*29*/].f_3), &(Global_101154.f_32575[iVar151 /*29*/].f_3), &(Global_101154.f_32575[iVar151 /*29*/].f_7), 0, 0);
					}
					else
					{
						func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 0f, -1f, -1f, &(Global_101154.f_32575[iVar151 /*29*/].f_3), &(Global_101154.f_32575[iVar151 /*29*/].f_3), &(Global_101154.f_32575[iVar151 /*29*/].f_7), 0, 0);
					}
				}
			}
		}
		if (Global_101154.f_32575[iVar149 /*29*/].f_12[Global_14413] == 1)
		{
			if (iVar149 != Global_14413)
			{
				iLocal_94++;
			}
		}
		iVar149++;
	}
	if (!unk_0xF426A5DE932B3BEE(Global_2284, 0))
	{
		if (unk_0x88E055AE81551426())
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
		if (unk_0xF426A5DE932B3BEE(Global_2283, 9))
		{
			unk_0x4EDE34FBADD967A6(750);
		}
		if (Global_14413.f_1 > 6)
		{
			func_142(Global_14394, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
			if (unk_0xF426A5DE932B3BEE(Global_2284, 0))
			{
				func_140(Global_14394, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
			}
			else
			{
				func_140(Global_14394, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
			}
			Global_2286 = 99;
			if (unk_0xF426A5DE932B3BEE(Global_2283, 9))
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
				unk_0xF17F4B0641AB2DE1(&Global_2283, 17);
			}
			else if (unk_0xF426A5DE932B3BEE(Global_2284, 0))
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
					unk_0x26545538B51562AD(&Global_2283, 17);
				}
				else
				{
					func_139(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0x26545538B51562AD(&Global_2283, 17);
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
				unk_0x26545538B51562AD(&Global_2283, 17);
				func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
	Global_101154.f_32575[12 /*29*/].f_1 = uLocal_303;
	Global_101154.f_32575[2 /*29*/].f_1 = uLocal_304;
	Global_101154.f_32575[0 /*29*/].f_1 = uLocal_305;
}

void func_257()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar16;
	int iVar17;
	
	Global_101154.f_32575[74 /*29*/].f_1 = 180;
	Global_101154.f_32575[75 /*29*/].f_1 = 190;
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iLocal_95 = iLocal_94;
	iLocal_96 = iLocal_95;
	func_264(&Local_331);
	iVar16 = 0;
	if (Global_69489)
	{
		if (func_260() == 0)
		{
			iVar16 = 1;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar0 = unk_0x6EED86A16F7EA8F2(iVar2);
		if (func_160(iVar0, 0, 1))
		{
			if (iVar16 == 0)
			{
				if (!iVar0 == unk_0x4D29100D094E5511())
				{
					Local_331[iVar1] = iVar0;
					func_259(unk_0xD358A441FAC2240C(iVar0));
					iVar1++;
				}
			}
		}
		iVar2++;
	}
	Local_331.f_33 = iVar1;
	iVar2 = 0;
	iVar1 = 0;
	if (func_162(unk_0x4D29100D094E5511()))
	{
		iVar17 = unk_0xF37889B966BC031B();
		if (iVar17 > 100)
		{
			iVar17 = 100;
		}
		iVar2 = 0;
		while (iVar2 <= (iVar17 - 1))
		{
			if (unk_0xC0499075EE988C2D(unk_0xC66FB17100455AF9(iVar2)))
			{
				if (unk_0x1E5E4125F3417386(unk_0xC66FB17100455AF9(iVar2)))
				{
					Var3 = { func_258(iVar2) };
					if (!unk_0x9B9C3FABD760DD83(&Var3))
					{
						if (iVar16 == 0)
						{
							if (iVar1 < 100)
							{
								Local_331.f_34[iVar1 /*29*/] = { Var3 };
								if (unk_0xD0333FE560420AC5())
								{
									StringCopy(&(Local_331.f_34[iVar1 /*29*/].f_13), unk_0xF65852B668FB9DF8(iVar2), 64);
								}
								else
								{
									StringCopy(&(Local_331.f_34[iVar1 /*29*/].f_13), unk_0xC66FB17100455AF9(iVar2), 64);
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
	
	unk_0x8EFD01569E777098(iParam0, &Var0, 13);
	return Var0;
}

void func_259(var uParam0)
{
	unk_0x8CED8F78CC31BEF2(Global_14394, "SET_DATA_SLOT");
	unk_0x4ACF99392701B935(unk_0xBBDA792448DB5A89(2));
	unk_0x4ACF99392701B935(unk_0xBBDA792448DB5A89(iLocal_95));
	unk_0x4ACF99392701B935(0f);
	unk_0x37B602106C6E0E91("STRING");
	unk_0xF9E9E11D6DF3EBF8(uParam0);
	unk_0xD3076D52458B36EF();
	func_72("CELL_MP_999");
	func_72("CELL_MP_999");
	unk_0x7E5FA681CB7A2EF7();
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
	
	uVar0 = Global_2490231[iParam0 /*5*/][func_59(iParam1)];
	if (unk_0xA4169622221F92AC(uVar0, &uVar1, -1))
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
	
	Global_101154.f_32575[74 /*29*/].f_1 = 180;
	Global_101154.f_32575[75 /*29*/].f_1 = 190;
	func_142(Global_14394, "SET_DATA_SLOT_EMPTY", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4EDE34FBADD967A6(0);
	func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), 0f, -1f, -1f, "CELL_232", "CELL_233", "CELL_393", 0, 0);
	iLocal_94 = 0;
	if (!unk_0xF426A5DE932B3BEE(Global_2284, 0))
	{
		if (unk_0x88E055AE81551426())
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
		Global_101154.f_32575[iVar151 /*29*/].f_1 = 5000;
		func_16();
		while (iVar150 < 147)
		{
			if (unk_0xF426A5DE932B3BEE(Global_2284, 0))
			{
				if ((iVar150 == 2 || iVar150 == 0) || iVar150 == 12)
				{
					Global_101154.f_32575[12 /*29*/].f_1 = 3;
					Global_101154.f_32575[2 /*29*/].f_1 = 1;
					Global_101154.f_32575[0 /*29*/].f_1 = 2;
					bLocal_91 = true;
				}
				else
				{
					bLocal_91 = false;
				}
			}
			else if (Global_101154.f_32575[iVar150 /*29*/].f_12[Global_14413] == 1)
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
						if (Global_101154.f_32575[iVar150 /*29*/].f_19[Global_14413] == 1 || func_79(iVar150, Global_14413))
						{
							fLocal_92 = (unk_0xBBDA792448DB5A89(Global_101154.f_32575[iVar150 /*29*/].f_1) / 100f);
						}
						else
						{
							fLocal_92 = unk_0xBBDA792448DB5A89(Global_101154.f_32575[iVar150 /*29*/].f_1);
						}
						if (Global_101154.f_32575[iVar151 /*29*/].f_19[Global_14413] == 1 || func_79(iVar151, Global_14413))
						{
							fLocal_93 = (unk_0xBBDA792448DB5A89(Global_101154.f_32575[iVar151 /*29*/].f_1) / 100f);
						}
						else
						{
							fLocal_93 = unk_0xBBDA792448DB5A89(Global_101154.f_32575[iVar151 /*29*/].f_1);
						}
						if (fLocal_92 < fLocal_93)
						{
							iVar151 = iVar150;
							if (unk_0xF426A5DE932B3BEE(Global_2284, 0))
							{
								if (iVar151 == 2)
								{
									func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 0f, -1f, -1f, "CELL_7001", &(Global_101154.f_32575[iVar151 /*29*/].f_3), &(Global_101154.f_32575[iVar151 /*29*/].f_7), 0, 0);
								}
								if (iVar151 == 0)
								{
									func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 0f, -1f, -1f, "CELL_7002", &(Global_101154.f_32575[iVar151 /*29*/].f_3), &(Global_101154.f_32575[iVar151 /*29*/].f_7), 0, 0);
								}
								if (iVar151 == 12)
								{
									func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 0f, -1f, -1f, "CELL_7003", &(Global_101154.f_32575[iVar151 /*29*/].f_3), "CELL_E_311", 0, 0);
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
		if (!unk_0xF426A5DE932B3BEE(Global_2284, 0))
		{
			if (Global_101154.f_32575[iVar151 /*29*/].f_12[Global_14413] == 1)
			{
				if (iVar150 != Global_14413)
				{
					if (Global_101154.f_32575[iVar151 /*29*/].f_24[Global_14413] == 0)
					{
						if (Global_101154.f_32575[iVar151 /*29*/].f_19[Global_14413] == 1 || func_79(iVar151, Global_14413))
						{
							func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 1f, -1f, -1f, &(Global_117[iVar151 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
						else
						{
							func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 0f, -1f, -1f, &(Global_117[iVar151 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
					}
					else if (Global_101154.f_32575[iVar151 /*29*/].f_19[Global_14413] == 1 || func_79(iVar151, Global_14413))
					{
						func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 1f, -1f, -1f, &(Global_101154.f_32575[iVar151 /*29*/].f_3), &(Global_101154.f_32575[iVar151 /*29*/].f_3), &(Global_101154.f_32575[iVar151 /*29*/].f_7), 0, 0);
					}
					else
					{
						func_139(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 0f, -1f, -1f, &(Global_101154.f_32575[iVar151 /*29*/].f_3), &(Global_101154.f_32575[iVar151 /*29*/].f_3), &(Global_101154.f_32575[iVar151 /*29*/].f_7), 0, 0);
					}
				}
			}
		}
		if (Global_101154.f_32575[iVar149 /*29*/].f_12[Global_14413] == 1)
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
	
	Global_101154.f_32575[74 /*29*/].f_1 = 180;
	Global_101154.f_32575[75 /*29*/].f_1 = 190;
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iLocal_95 = iLocal_94;
	iLocal_96 = iLocal_95;
	func_264(&Local_331);
	iVar16 = 0;
	if (Global_69489)
	{
		if (func_260() == 0)
		{
			iVar16 = 1;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar0 = unk_0x6EED86A16F7EA8F2(iVar2);
		if (func_160(iVar0, 0, 1))
		{
			if (iVar16 == 0)
			{
				if (!iVar0 == unk_0x4D29100D094E5511())
				{
					Local_331[iVar1] = iVar0;
					func_267(unk_0xD358A441FAC2240C(iVar0));
					iVar1++;
				}
			}
		}
		iVar2++;
	}
	Local_331.f_33 = iVar1;
	iVar1 = 0;
	iVar2 = 0;
	if (func_162(unk_0x4D29100D094E5511()))
	{
		iVar17 = unk_0xF37889B966BC031B();
		if (iVar17 > 100)
		{
			iVar17 = 100;
		}
		iVar2 = 0;
		while (iVar2 <= (iVar17 - 1))
		{
			if (unk_0xC0499075EE988C2D(unk_0xC66FB17100455AF9(iVar2)))
			{
				if (unk_0x1E5E4125F3417386(unk_0xC66FB17100455AF9(iVar2)))
				{
					Var3 = { func_258(iVar2) };
					if (!unk_0x9B9C3FABD760DD83(&Var3))
					{
						if (iVar16 == 0)
						{
							if (iVar1 < 100)
							{
								Local_331.f_34[iVar1 /*29*/] = { Var3 };
								if (unk_0xD0333FE560420AC5())
								{
									StringCopy(&(Local_331.f_34[iVar1 /*29*/].f_13), unk_0xF65852B668FB9DF8(iVar2), 64);
								}
								else
								{
									StringCopy(&(Local_331.f_34[iVar1 /*29*/].f_13), unk_0xC66FB17100455AF9(iVar2), 64);
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
	unk_0x8CED8F78CC31BEF2(Global_14394, "SET_DATA_SLOT");
	unk_0x4ACF99392701B935(unk_0xBBDA792448DB5A89(2));
	unk_0x4ACF99392701B935(unk_0xBBDA792448DB5A89(iLocal_95));
	unk_0x4ACF99392701B935(0f);
	unk_0x37B602106C6E0E91("STRING");
	unk_0xF9E9E11D6DF3EBF8(uParam0);
	unk_0xD3076D52458B36EF();
	func_72("CELL_MP_999");
	func_72("CELL_MP_999");
	unk_0x7E5FA681CB7A2EF7();
	iLocal_95++;
	iLocal_94++;
}

