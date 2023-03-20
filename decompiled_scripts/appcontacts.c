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
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	int iLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
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
	var uLocal_56 = 8;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 2;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 8;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 8;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	float fLocal_86 = 0f;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	int iLocal_89 = 0;
	bool bLocal_90 = 0;
	float fLocal_91 = 0f;
	float fLocal_92 = 0f;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	var uLocal_98 = 0;
	int iLocal_99 = 0;
	var uLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	var uLocal_106[1] = { 0 };
	char cLocal_108[16] = "";
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	bool bLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	bool bLocal_119 = 0;
	int iLocal_120 = 0;
	float fLocal_121 = 0f;
	float fLocal_122 = 0f;
	float fLocal_123 = 0f;
	float fLocal_124 = 0f;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	char cLocal_133[16] = "";
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 16;
	var uLocal_138 = 0;
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
	int iLocal_305 = 0;
	char cLocal_306[16] = "";
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	struct<3> Local_310 = { 0, 0, 0 } ;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316[7] = { 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_324 = 0;
	bool bLocal_325 = 0;
	bool bLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	struct<3000> Local_330 = { 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_3330 = { 0, 0, 0 } ;
	char cLocal_3333[64] = "";
	var uLocal_3341 = 0;
	var uLocal_3342 = 0;
	var uLocal_3343 = 0;
	var uLocal_3344 = 0;
	var uLocal_3345 = 0;
	var uLocal_3346 = 0;
	var uLocal_3347 = 0;
	var uLocal_3348 = 0;
	int iLocal_3349 = 0;
	var uLocal_3350 = 0;
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
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_34 = 3;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_86 = ((0.05f + 0.275f) - 0.01f);
	iLocal_95 = 9999;
	iLocal_96 = 9999;
	fLocal_121 = 0.82f;
	fLocal_122 = 0.42f;
	fLocal_123 = 0f;
	fLocal_124 = 0f;
	unk_0x20A629A7D3DC97F2();
	unk_0xD0E2BFCE93AE3ABD(&Global_2264, 17);
	unk_0x29DB79DD4D939B38(&Global_2265, 18);
	unk_0x29DB79DD4D939B38(&Global_2265, 20);
	uLocal_302 = Global_97439.f_29795[12 /*29*/].f_1;
	uLocal_303 = Global_97439.f_29795[2 /*29*/].f_1;
	uLocal_304 = Global_97439.f_29795[0 /*29*/].f_1;
	iLocal_103 = unk_0x74F076F396F8C361();
	if (Global_68325)
	{
		func_254();
	}
	else
	{
		func_244();
	}
	if (!Global_14394.f_1 == 10)
	{
		if (Global_14394.f_1 > 3)
		{
			if (Global_14394.f_1 != 9)
			{
				Global_14394.f_1 = 7;
			}
		}
	}
	iLocal_130 = unk_0x09560C7DE2A384BD();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x889D01384B54BCE3(Global_2265, 18))
		{
			func_243();
			if (Global_14394.f_1 > 3)
			{
				Global_14394.f_1 = 8;
			}
			unk_0x29DB79DD4D939B38(&Global_2265, 18);
			func_242();
		}
		if ((iLocal_115 == 1 && Global_14394.f_1 == 10) && Local_330.f_2999 == 1)
		{
			func_170();
		}
		if (Global_14394.f_1 != 9)
		{
			switch (Global_14394.f_1)
			{
				case 7:
					if (unk_0x889D01384B54BCE3(Global_2264, 16))
					{
						func_169();
					}
					else
					{
						func_166();
						if (unk_0x889D01384B54BCE3(Global_2265, 0))
						{
							iLocal_131 = unk_0x09560C7DE2A384BD();
							if ((iLocal_131 - iLocal_130) > 1000)
							{
								if (iLocal_132)
								{
									func_165();
								}
								else
								{
									func_147();
								}
							}
							if (iLocal_132)
							{
								func_146();
							}
						}
						else
						{
							func_147();
						}
					}
					if (!unk_0x889D01384B54BCE3(Global_2264, 9))
					{
						if (func_145(2, Global_14366, 0))
						{
							if (unk_0x889D01384B54BCE3(Global_2265, 0))
							{
							}
							else if (Global_14337 == 0)
							{
								if (!unk_0x889D01384B54BCE3(Global_2265, 19))
								{
									func_143();
									func_142(Global_14375, "SET_DATA_SLOT_EMPTY", 11f, -1082130432, -1082130432, -1082130432, -1082130432);
									iLocal_105 = 0;
									StringCopy(&cLocal_108, "", 16);
									func_141();
									Global_14374 = 0;
									iLocal_115 = 0;
									func_142(Global_14375, "DISPLAY_VIEW", 11f, -1082130432, -1082130432, -1082130432, -1082130432);
									func_140(Global_14375, "SET_HEADER", "CELL_221", 0, 0, 0, 0);
									if (Global_14382)
									{
										func_139(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
										func_139(Global_14375, "SET_SOFT_KEYS", 1f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
										unk_0xD0E2BFCE93AE3ABD(&Global_2264, 17);
										func_139(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
									}
									else
									{
										func_139(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
										func_139(Global_14375, "SET_SOFT_KEYS", 1f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
										unk_0xD0E2BFCE93AE3ABD(&Global_2264, 17);
										func_139(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
									}
									if (Global_14394.f_1 > 3)
									{
										Global_14394.f_1 = 8;
									}
								}
							}
						}
					}
					break;
				
				case 8:
					if (iLocal_115 == 1)
					{
						func_166();
						func_170();
					}
					else if (iLocal_113 == 0)
					{
						func_129();
						func_122();
					}
					else
					{
						if (unk_0x83666F9FB8FEBD4B() > 1500)
						{
							iLocal_328 = 0;
							while (iLocal_328 < 4)
							{
								if (unk_0x9BA82E09A986BA4B(&(Global_97439.f_29795[Global_1579 /*29*/].f_3), &(Global_2102[iLocal_328 /*16*/])))
								{
									if (!unk_0x9BA82E09A986BA4B(&(Global_2102[iLocal_328 /*16*/].f_8), "CELL_SFUN_NULL"))
									{
										bLocal_325 = true;
										iLocal_327 = iLocal_328;
									}
									else
									{
										bLocal_325 = false;
									}
								}
								iLocal_328++;
							}
							if (iLocal_114 == 0)
							{
								unk_0xB067107D878E9585(Global_14375, "GET_CURRENT_SELECTION");
								uLocal_98 = unk_0x8CB1A9AD2F4E2E1D();
								while (!unk_0x5AF0E0DBD9FA7F23(uLocal_98))
								{
									unk_0x4EDE34FBADD967A6(0);
								}
								iLocal_99 = unk_0x70F7DBBE883019A5(uLocal_98);
								func_120();
							}
						}
						func_166();
						if (bLocal_326 == 1)
						{
							if (!Global_97439.f_16357.f_396)
							{
								if (!func_116(Global_14394, Global_1579))
								{
									Global_97439.f_16357.f_396 = 1;
								}
							}
						}
						if (func_116(Global_14394, Global_1579))
						{
							if (!Global_97439.f_16357.f_397)
							{
								if (bLocal_325 == 1)
								{
									if (func_115(Global_86294))
									{
										switch (func_113("AM_H_BBUDDY"))
										{
											case 2:
												func_111("AM_H_BBUDDY", 2, 500, 10000, 10000, 7, 0, 0, 0);
												break;
											
											case 1:
												Global_97439.f_16357.f_397 = 1;
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
												Global_97439.f_16357.f_397 = 1;
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
						if (iLocal_114)
						{
							func_105();
						}
						else
						{
							func_76();
						}
					}
					if (func_145(2, Global_14362, 0))
					{
						func_75();
						Global_14372 = 1;
						if (Global_68325)
						{
							func_254();
						}
						else
						{
							func_244();
						}
						unk_0x4EDE34FBADD967A6(0);
						if (Global_14394.f_1 > 3)
						{
							Global_14394.f_1 = 7;
						}
						StringCopy(&cLocal_108, "", 16);
						if (iLocal_113 == 1)
						{
							iLocal_113 = 0;
						}
						if (iLocal_114 == 1)
						{
							iLocal_114 = 0;
						}
						iLocal_115 = 0;
					}
					break;
				
				case 10:
					if (iLocal_126 == 4)
					{
					}
					func_3();
					break;
				
				case 6:
					func_242();
					break;
				
				default:
					break;
			}
			if (!Global_14394.f_1 == 8)
			{
				if ((Global_2872 - Global_2871) > Global_2873)
				{
					if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
					{
						if (unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241()))
						{
							if (func_145(2, Global_14362, 0))
							{
								if (unk_0x889D01384B54BCE3(Global_2265, 0))
								{
									func_75();
								}
								else
								{
									func_75();
									if (!Global_14394.f_1 == 10)
									{
										func_242();
									}
									else if (Global_1579 == 132)
									{
										if (Global_2451624.f_1 || unk_0x889D01384B54BCE3(Global_2265, 20))
										{
											Global_14394.f_1 = 7;
											func_142(Global_14375, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
											if (unk_0x889D01384B54BCE3(Global_2265, 0))
											{
												func_140(Global_14375, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
											}
											else
											{
												func_140(Global_14375, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
											}
											unk_0x7CB5477E93D6A302(iLocal_103);
											iLocal_126 = 0;
										}
									}
									else
									{
										func_243();
										Global_14394.f_1 = 7;
										func_2();
										func_142(Global_14375, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
										if (unk_0x889D01384B54BCE3(Global_2265, 0))
										{
											func_140(Global_14375, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
										}
										else
										{
											func_140(Global_14375, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
										}
										unk_0x7CB5477E93D6A302(iLocal_103);
										iLocal_126 = 0;
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
			Global_14396 = 6;
			func_242();
		}
		if (func_1())
		{
			func_242();
		}
	}
}

int func_1()
{
	if (((Global_14394.f_1 == 1 || Global_14394.f_1 == 3) || Global_14394.f_1 == 0) || Global_14338 == 1)
	{
		Global_14381 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	if (!Global_14394.f_1 == 10 && !Global_14394.f_1 == 9)
	{
		if (unk_0x889D01384B54BCE3(Global_2264, 9))
		{
			unk_0x4EDE34FBADD967A6(750);
		}
		if (Global_14394.f_1 > 6)
		{
			func_142(Global_14375, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
			if (unk_0x889D01384B54BCE3(Global_2265, 0))
			{
				func_140(Global_14375, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
			}
			else
			{
				func_140(Global_14375, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
			}
			Global_2267 = 99;
			if (unk_0x889D01384B54BCE3(Global_2264, 9))
			{
				if (Global_14382)
				{
					func_139(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
					func_139(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_139(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
					func_139(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_139(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x29DB79DD4D939B38(&Global_2264, 17);
			}
			else if (unk_0x889D01384B54BCE3(Global_2265, 0))
			{
				if (Global_14382)
				{
					func_139(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
					func_139(Global_14375, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_139(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
					func_139(Global_14375, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_139(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14382)
			{
				if (iLocal_93 > 0)
				{
					func_139(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				}
				else
				{
					func_139(Global_14375, "SET_SOFT_KEYS", 2f, 0f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				}
				if (Global_14337 == 0)
				{
					func_139(Global_14375, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, "CELL_207", 0, 0, 0, 0);
					unk_0xD0E2BFCE93AE3ABD(&Global_2264, 17);
				}
				else
				{
					func_139(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0xD0E2BFCE93AE3ABD(&Global_2264, 17);
				}
				func_139(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				if (iLocal_93 > 0)
				{
					func_139(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				else
				{
					func_139(Global_14375, "SET_SOFT_KEYS", 2f, 0f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_139(Global_14375, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xD0E2BFCE93AE3ABD(&Global_2264, 17);
				func_139(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_3()
{
	int iVar0;
	struct<3> Var1;
	int iVar7;
	
	switch (iLocal_126)
	{
		case 0:
			unk_0x95AB598E6554985B(&Global_16716, 1);
			while (!unk_0x5CD78FA34B48CB6E(1))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			cLocal_133 = { Global_98[Global_1579 /*10*/] };
			StringConCat(&cLocal_133, "_1", 16);
			if (unk_0xC929DDA58687736B(&cLocal_133) || iLocal_305 == 1)
			{
				iLocal_127 = Global_16713;
				if (func_74(129))
				{
					iLocal_127 = Global_86875;
				}
			}
			else
			{
				iLocal_127 = Global_16712;
			}
			if ((iLocal_305 == 1 && unk_0x9BA82E09A986BA4B(&cLocal_306, "CELLPHONE_CHEAT")) && Global_68325 == 0)
			{
				if ((unk_0x9BA82E09A986BA4B(&Local_310, "CHEAT_SEAPLANE") || unk_0x9BA82E09A986BA4B(&Local_310, "CHEAT_DUELC")) || unk_0x9BA82E09A986BA4B(&Local_310, "CHEAT_BUBBLE"))
				{
					bLocal_119 = true;
				}
				if (bLocal_119)
				{
					if (func_73())
					{
						iLocal_120 = 0;
					}
					else
					{
						iLocal_120 = 1;
					}
				}
				if (iLocal_120 == 0)
				{
					iLocal_128 = unk_0x09560C7DE2A384BD();
					unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
					unk_0x26221D1D76579618(4);
					unk_0x26221D1D76579618(0);
					unk_0x26221D1D76579618(3);
					unk_0xEBC0B3BDAD1250BE("STRING");
					unk_0xB55390690BD2F5E5(&cLocal_108, -1);
					unk_0x9F94C7B5E8C04AB3();
					func_72("CELL_300");
					if (unk_0x9BA82E09A986BA4B(&Local_310, "CHEAT_MONOC"))
					{
						func_72("CELL_MONOSIGNAL");
					}
					else if (unk_0x9BA82E09A986BA4B(&Local_310, "CHEAT_DIRECTOR"))
					{
						func_72("CELL_DRCT");
					}
					else
					{
						func_72("CELL_CHEAT");
					}
					func_72("CELL_195");
					unk_0xD3DF251F2DF3B257();
					func_142(Global_14375, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
					iLocal_126 = 1;
				}
				else
				{
					iLocal_126 = 2;
					iLocal_128 = unk_0x09560C7DE2A384BD();
				}
			}
			else
			{
				iLocal_126 = 2;
				iLocal_128 = unk_0x09560C7DE2A384BD();
			}
			break;
		
		case 1:
			iLocal_129 = unk_0x09560C7DE2A384BD();
			if ((iLocal_129 - iLocal_128) > 1500)
			{
				iLocal_126 = 3;
			}
			break;
		
		case 2:
			iLocal_129 = unk_0x09560C7DE2A384BD();
			if (iLocal_127 != Global_16712)
			{
				if (unk_0xB834C37F11282062(iLocal_103))
				{
					if (Global_2451624.f_37 == 0)
					{
						if (Global_14337)
						{
							unk_0xC2E1777941B4536E(iLocal_103, "Dial_and_Remote_Ring", &Global_14383, 1);
						}
						else if ((iLocal_129 - iLocal_128) > 1700)
						{
							unk_0xC2E1777941B4536E(iLocal_103, "Remote_Ring", &Global_14383, 1);
						}
					}
				}
			}
			else if ((func_74(130) || func_74(132)) || func_74(128))
			{
				if (unk_0xB834C37F11282062(iLocal_103))
				{
					if (Global_2451624.f_37 == 0)
					{
						if (Global_14337)
						{
							unk_0xC2E1777941B4536E(iLocal_103, "Dial_and_Remote_Ring", &Global_14383, 1);
						}
						else if ((iLocal_129 - iLocal_128) > 1700)
						{
							unk_0xC2E1777941B4536E(iLocal_103, "Remote_Ring", &Global_14383, 1);
						}
					}
				}
			}
			if ((iLocal_129 - iLocal_128) > iLocal_127)
			{
				if (iLocal_127 == Global_16712)
				{
					bLocal_116 = false;
					if ((Global_1579 == 130 || Global_1579 == 132) || Global_1579 == 128)
					{
						if (!unk_0x889D01384B54BCE3(Global_2265, 20))
						{
							bLocal_116 = true;
							if ((iLocal_129 - iLocal_128) > iLocal_127 + 10000)
							{
								if (Global_14394.f_1 == 10)
								{
									if (Global_1579 == 130)
									{
										Global_14394.f_1 = 3;
									}
								}
							}
						}
					}
					if (!bLocal_116)
					{
						iLocal_126 = 4;
						unk_0x7CB5477E93D6A302(iLocal_103);
						iLocal_117 = 0;
						unk_0x5AE11BC36633DE4E(0);
						if (Global_97439.f_29795[Global_1579 /*29*/].f_24[Global_14394] == 0)
						{
							if (Global_1579 == 132)
							{
								unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
								unk_0x26221D1D76579618(4);
								unk_0x26221D1D76579618(0);
								unk_0x26221D1D76579618(2);
								unk_0xEBC0B3BDAD1250BE("CELL_CONDFON");
								unk_0x94E086BCAE8856C1(&Global_15708);
								unk_0x9F94C7B5E8C04AB3();
								func_72("CELL_300");
								func_72("CELL_220");
								func_72("CELL_219");
								unk_0xD3DF251F2DF3B257();
							}
							else
							{
								func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(5), -1f, -1f, &(Global_98[Global_1579 /*10*/].f_4), "CELL_300", "CELL_220", "CELL_195", 0);
							}
						}
						else
						{
							func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(5), -1f, -1f, &(Global_97439.f_29795[Global_1579 /*29*/].f_3), &(Global_97439.f_29795[Global_1579 /*29*/].f_7), "CELL_220", &(Global_97439.f_29795[Global_1579 /*29*/].f_3), 0);
						}
						func_142(Global_14375, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					iLocal_126 = 3;
				}
			}
			break;
		
		case 3:
			if (iLocal_305 == 1)
			{
				if (unk_0x9BA82E09A986BA4B(&cLocal_306, "CELLPHONE_CHEAT") && Global_68325 == 0)
				{
					if (unk_0x9BA82E09A986BA4B(&Local_310, "CHEAT_MONOC"))
					{
						if (Global_3068 == 0)
						{
							Global_3068 = 1;
							Global_97439.f_12305[0 /*20*/].f_6 = 5;
							Global_97439.f_12305[2 /*20*/].f_6 = 5;
							Global_97439.f_12305[1 /*20*/].f_6 = 5;
							if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
							{
								if (!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1))
								{
									if (!unk_0x8C42D51DE272AC72(4, unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), 40f))
									{
										unk_0x05F27131E22CB21A(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) + Vector(2f, 0f, 0f), 4, 0.1f, 1, 0, 1065353216);
									}
								}
							}
						}
						else
						{
							Global_3068 = 0;
						}
					}
					if (unk_0x9BA82E09A986BA4B(&Local_310, "CHEAT_SUPJUM"))
					{
						func_71(0, 0);
					}
					if (unk_0x9BA82E09A986BA4B(&Local_310, "CHEAT_HEALA"))
					{
						func_71(6, 0);
					}
					if (unk_0x9BA82E09A986BA4B(&Local_310, "CHEAT_SLIDEYC"))
					{
						func_71(1, 0);
					}
					if (unk_0x9BA82E09A986BA4B(&Local_310, "CHEAT_FASTR"))
					{
						func_71(2, 0);
					}
					if (unk_0x9BA82E09A986BA4B(&Local_310, "CHEAT_WANTDN"))
					{
						func_71(9, 0);
					}
					if (unk_0x9BA82E09A986BA4B(&Local_310, "CHEAT_WANTUP"))
					{
						func_71(8, 0);
					}
					if (unk_0x9BA82E09A986BA4B(&Local_310, "CHEAT_WEATHER"))
					{
						func_71(5, 0);
					}
					if (unk_0x9BA82E09A986BA4B(&Local_310, "CHEAT_FASTS"))
					{
						func_71(3, 0);
					}
					if (unk_0x9BA82E09A986BA4B(&Local_310, "CHEAT_POWER"))
					{
						func_71(7, 0);
					}
					if (unk_0x9BA82E09A986BA4B(&Local_310, "CHEAT_CHUTE"))
					{
						func_71(10, 0);
					}
					if (unk_0x9BA82E09A986BA4B(&Local_310, "CHEAT_BANG"))
					{
						func_71(11, 0);
					}
					if (unk_0x9BA82E09A986BA4B(&Local_310, "CHEAT_FLAMB"))
					{
						func_71(12, 0);
					}
					if (unk_0x9BA82E09A986BA4B(&Local_310, "CHEAT_EXPMEL"))
					{
						func_71(13, 0);
					}
					if (unk_0x9BA82E09A986BA4B(&Local_310, "CHEAT_ZEROG"))
					{
						func_71(14, 0);
					}
					if (unk_0x9BA82E09A986BA4B(&Local_310, "CHEAT_INVINC"))
					{
						func_71(15, 0);
					}
					if (unk_0x9BA82E09A986BA4B(&Local_310, "CHEAT_SLOWMO"))
					{
						func_71(16, 0);
					}
					if (unk_0x9BA82E09A986BA4B(&Local_310, "CHEAT_SKYFA"))
					{
						func_71(17, 0);
					}
					if (unk_0x9BA82E09A986BA4B(&Local_310, "CHEAT_DRUNK"))
					{
						func_71(18, 0);
					}
					if (unk_0x9BA82E09A986BA4B(&Local_310, "CHEAT_DEADEYE"))
					{
						func_71(19, 0);
					}
					if (unk_0x9BA82E09A986BA4B(&Local_310, "CHEAT_WEAPONS"))
					{
						func_71(4, 0);
					}
					if (unk_0x9BA82E09A986BA4B(&Local_310, "CHEAT_BUZZARD"))
					{
						func_71(20, joaat("buzzard"));
					}
					if (unk_0x9BA82E09A986BA4B(&Local_310, "CHEAT_COMET2"))
					{
						func_71(20, joaat("comet2"));
					}
					if (unk_0x9BA82E09A986BA4B(&Local_310, "CHEAT_BMX"))
					{
						func_71(20, joaat("bmx"));
					}
					if (unk_0x9BA82E09A986BA4B(&Local_310, "CHEAT_CADDY"))
					{
						func_71(20, joaat("caddy"));
					}
					if (unk_0x9BA82E09A986BA4B(&Local_310, "CHEAT_DUSTER"))
					{
						func_71(20, joaat("duster"));
					}
					if (unk_0x9BA82E09A986BA4B(&Local_310, "CHEAT_PCJ"))
					{
						func_71(20, joaat("pcj"));
					}
					if (unk_0x9BA82E09A986BA4B(&Local_310, "CHEAT_RAPIDGT"))
					{
						func_71(20, joaat("rapidgt"));
					}
					if (unk_0x9BA82E09A986BA4B(&Local_310, "CHEAT_STRETCH"))
					{
						func_71(20, joaat("stretch"));
					}
					if (unk_0x9BA82E09A986BA4B(&Local_310, "CHEAT_STUNT"))
					{
						func_71(20, joaat("stunt"));
					}
					if (unk_0x9BA82E09A986BA4B(&Local_310, "CHEAT_TRASH"))
					{
						func_71(20, joaat("trash"));
					}
					if (unk_0x9BA82E09A986BA4B(&Local_310, "CHEAT_SANCHEZ"))
					{
						func_71(20, joaat("sanchez"));
					}
					if (func_73())
					{
						if (unk_0x9BA82E09A986BA4B(&Local_310, "CHEAT_SEAPLANE"))
						{
							func_71(20, joaat("dodo"));
						}
						if (unk_0x9BA82E09A986BA4B(&Local_310, "CHEAT_DUELC"))
						{
							func_71(20, joaat("dukes2"));
						}
						if (unk_0x9BA82E09A986BA4B(&Local_310, "CHEAT_BUBBLE"))
						{
							func_71(20, joaat("submersible2"));
						}
					}
					if (unk_0x9BA82E09A986BA4B(&Local_310, "CHEAT_DIRECTOR"))
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
				else if (unk_0x9BA82E09A986BA4B(&cLocal_306, "CELLPHONE_CHEAT"))
				{
					func_30(0);
				}
				else
				{
					func_29(&uLocal_137, 1, 0, &Local_310, 0, 1);
					Global_16714 = 0;
					func_28(&uLocal_137, Global_1579, &Global_16716, &cLocal_306, 2, 0, 0, 0, 0);
				}
			}
			else
			{
				switch (Global_1579)
				{
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
				func_29(&uLocal_137, 1, 0, &Var1, 0, 1);
				Global_16714 = 0;
				switch (Global_1579)
				{
					case 13:
						func_9(&uLocal_137, 12, &Global_16716, "LES_APH2", 2, 0, 0, 0, 0);
						break;
					
					case 36:
						iVar7 = unk_0xBE59E3811BD4FDD7();
						if (iVar7 > 17 || iVar7 < 9)
						{
							func_9(&uLocal_137, Global_1579, &Global_16716, "SHR_APH3", 2, 0, 0, 0, 0);
						}
						if (iVar7 > 8 && iVar7 < 13)
						{
							func_9(&uLocal_137, Global_1579, &Global_16716, "SHR_APH1", 2, 0, 0, 0, 0);
						}
						if (iVar7 > 12 && iVar7 < 18)
						{
							func_9(&uLocal_137, Global_1579, &Global_16716, "SHR_APH2", 2, 0, 0, 0, 0);
						}
						break;
					
					case 17:
						if (func_8(21) && !func_8(22))
						{
							func_9(&uLocal_137, Global_1579, &Global_16716, "AMA_APH2", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_137, Global_1579, &Global_16716, &(Global_98[Global_1579 /*10*/]), 2, 0, 0, 0, 0);
						}
						break;
					
					case 20:
						if (Global_68325)
						{
							func_9(&uLocal_137, Global_1579, &Global_16716, "ANS_RBusy", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_137, Global_1579, &Global_16716, &(Global_98[Global_1579 /*10*/]), 2, 0, 0, 0, 0);
						}
						break;
					
					case 44:
						if (func_7(126))
						{
							func_9(&uLocal_137, Global_1579, &Global_16716, "DEN_APH3", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_137, Global_1579, &Global_16716, &(Global_98[Global_1579 /*10*/]), 2, 0, 0, 0, 0);
						}
						break;
					
					case 15:
						if (!func_8(19))
						{
							func_9(&uLocal_137, Global_1579, &Global_16716, "TRA_APH1", 2, 0, 0, 0, 0);
						}
						else if (!func_8(20))
						{
							func_9(&uLocal_137, Global_1579, &Global_16716, "TRA_APH2", 2, 0, 0, 0, 0);
						}
						else if (!func_8(22))
						{
							func_9(&uLocal_137, Global_1579, &Global_16716, "TRA_APH3", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_137, Global_1579, &Global_16716, "TRA_APH4", 2, 0, 0, 0, 0);
						}
						break;
					
					case 19:
						if (!func_8(19))
						{
							func_9(&uLocal_137, Global_1579, &Global_16716, "LAM_APH1", 2, 0, 0, 0, 0);
						}
						else if (!func_8(20))
						{
							func_9(&uLocal_137, Global_1579, &Global_16716, "LAM_APH2", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_137, Global_1579, &Global_16716, "LAM_APH3", 2, 0, 0, 0, 0);
						}
						break;
					
					case 14:
						if (!func_8(19))
						{
							func_9(&uLocal_137, Global_1579, &Global_16716, "JIM_APH1", 2, 0, 0, 0, 0);
						}
						else if (!func_8(21))
						{
							func_9(&uLocal_137, Global_1579, &Global_16716, "JIM_APH3", 2, 0, 0, 0, 0);
						}
						else if (!func_8(22))
						{
							func_9(&uLocal_137, Global_1579, &Global_16716, "JIM_APH2", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_137, Global_1579, &Global_16716, "JIM_APH4", 2, 0, 0, 0, 0);
						}
						break;
					
					case 49:
						if (func_6(7))
						{
							func_9(&uLocal_137, Global_1579, &Global_16716, "BAR_APH2", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_137, Global_1579, &Global_16716, "BAR_APH1", 2, 0, 0, 0, 0);
						}
						break;
					
					case 85:
						iLocal_329 = unk_0x444ECD635D5FD45F(0, 100);
						if (iLocal_329 <= 50)
						{
							func_9(&uLocal_137, Global_1579, &Global_16716, "ANS_MWBusy", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_137, Global_1579, &Global_16716, "ANS_MWBusy2", 2, 0, 0, 0, 0);
						}
						break;
					
					case 41:
						iLocal_329 = unk_0x444ECD635D5FD45F(0, 100);
						if (iLocal_329 <= 50)
						{
							func_9(&uLocal_137, Global_1579, &Global_16716, "ANS_PGbusy", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_137, Global_1579, &Global_16716, "ANS_PGbusy2", 2, 0, 0, 0, 0);
						}
						break;
					
					case 91:
						iLocal_329 = unk_0x444ECD635D5FD45F(0, 100);
						if (iLocal_329 <= 50)
						{
							func_9(&uLocal_137, Global_1579, &Global_16716, "ANS_INSbusy", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_137, Global_1579, &Global_16716, "ANS_INSbusy2", 2, 0, 0, 0, 0);
						}
						break;
					
					case 86:
						func_9(&uLocal_137, Global_1579, &Global_16716, "ANS_GBusy", 2, 0, 0, 0, 0);
						break;
					
					default:
						func_9(&uLocal_137, Global_1579, &Global_16716, &(Global_98[Global_1579 /*10*/]), 2, 0, 0, 0, 0);
				}
				unk_0xD0E2BFCE93AE3ABD(&Global_2265, 31);
			}
			break;
		
		case 4:
			if (unk_0xB834C37F11282062(iLocal_103))
			{
				unk_0xC2E1777941B4536E(iLocal_103, "Remote_Engaged", &Global_14383, 1);
			}
			if (unk_0xC9D9444186B5A374() > 1500)
			{
				if (iLocal_117 == 0)
				{
					if (Global_14394 == 2)
					{
						if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
						{
							func_4(unk_0xA16EC202D9D35357(), "PHONE_CALL_NOT_CONNECTED", 24);
							iLocal_117 = 1;
						}
					}
				}
			}
			break;
	}
}

void func_4(var uParam0, char* sParam1, int iParam2)
{
	unk_0xD550A19A432377FF(uParam0, sParam1, func_5(iParam2), 1);
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
	return unk_0x889D01384B54BCE3(Global_97439.f_16828[iParam0 /*6*/], 3);
}

int func_7(int iParam0)
{
	if (iParam0 == 144 || iParam0 == -1)
	{
		return 0;
	}
	return Global_97439.f_7341.f_99.f_58[iParam0];
}

int func_8(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_97439.f_7341.f_328[iParam0 /*6*/];
}

void func_9(var uParam0, int iParam1, var uParam2, char[4] cParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	if (Global_68325 || func_27())
	{
		if (Global_1572929 == 1)
		{
			func_28(uParam0, iParam1, &Global_16716, cParam3, iParam4, iParam5, iParam6, iParam7, bParam8);
		}
		else
		{
			func_10(uParam0, iParam1, &Global_16716, cParam3, iParam4, iParam5, iParam6, iParam7, bParam8);
		}
	}
	else
	{
		func_10(uParam0, iParam1, &Global_16716, cParam3, iParam4, iParam5, iParam6, iParam7, bParam8);
	}
}

int func_10(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_26(uParam0, uParam1, sParam2, iParam6, iParam7, 0);
	Global_15741 = 0;
	Global_15700 = 1;
	Global_15707 = 0;
	Global_15702 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 0;
	Global_15698 = 0;
	Global_15745 = 0;
	Global_15747 = 0;
	if (iParam5 == 1)
	{
		Global_15705 = 1;
	}
	else
	{
		Global_15705 = 0;
	}
	Global_2621441 = 0;
	return func_11(sParam3, iParam4, bParam8);
}

int func_11(char* sParam0, int iParam1, bool bParam2)
{
	Global_15694 = 0;
	if (Global_15693 == 0 || Global_15695 == 2)
	{
		if (Global_15693 != 0)
		{
			if (iParam1 > Global_15695)
			{
				if (Global_15700 == 0)
				{
					unk_0x0D68C13151B68364(0);
					Global_14394.f_1 = 3;
					Global_15693 = 0;
					Global_15694 = 1;
					Global_15746 = 0;
					Global_15689 = 0;
					Global_15690 = 0;
					Global_15704 = 0;
					Global_15703 = 0;
					Global_14393 = 0;
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
		if (unk_0xD47B332729054512())
		{
			return 0;
		}
		if (func_24(8, -1))
		{
			return 0;
		}
		Global_15769 = { Global_15763 };
		func_23();
		Global_14982 = { Global_15147 };
		Global_15699 = Global_15700;
		Global_15706 = Global_15707;
		Global_2621442 = Global_2621441;
		Global_15708 = { Global_15724 };
		Global_15701 = Global_15702;
		Global_16683 = Global_16684;
		Global_16691 = { Global_16697 };
		Global_16685 = Global_16686;
		Global_16687 = Global_16688;
		Global_16689 = Global_16690;
		Global_15312.f_370 = Global_16682;
		Global_15312.f_368 = Global_16680;
		Global_15312.f_369 = Global_16681;
		Global_15689 = Global_15690;
		if (Global_15699)
		{
			unk_0x29DB79DD4D939B38(&Global_2264, 20);
			unk_0x29DB79DD4D939B38(&Global_2265, 17);
			unk_0x29DB79DD4D939B38(&Global_2266, 0);
			if (bParam2)
			{
				func_16();
				if (Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14394.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14360 == 1)
			{
				return 0;
			}
			if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
			{
				if (unk_0x15383F5EDB73B6BB(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (func_15())
				{
					return 0;
				}
				if (unk_0xD7708B5D68A32CA0(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0xD630B5603A1AED89(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0x262A8E62D7274A0B(unk_0xA16EC202D9D35357(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68325)
				{
					if (unk_0x21FF064386DC6A0A(unk_0xA16EC202D9D35357()))
					{
						return 0;
					}
					if (unk_0x6CA3764368FA4573(unk_0x1788E93557766241()))
					{
						return 0;
					}
					if (unk_0x24C7291CDBC023F1(unk_0xA16EC202D9D35357()))
					{
						return 0;
					}
					if (unk_0x8ECFC7D353C3F775(unk_0x1788E93557766241()))
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
				switch (Global_14394.f_1)
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
				if (unk_0x889D01384B54BCE3(Global_2264, 9))
				{
					return 0;
				}
			}
			func_13();
			Global_15703 = bParam2;
		}
		Global_15695 = iParam1;
		StringCopy(&Global_15312, sParam0, 24);
		Global_14559 = 0;
		func_12();
		return 1;
	}
	if (Global_15693 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15695 || iParam1 == Global_15695)
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
		StringCopy(&(Global_14561[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x0D68C13151B68364(0);
	Global_15693 = 1;
}

void func_13()
{
	Global_15746 = Global_15745;
	Global_15740 = Global_15741;
	Global_15787 = { Global_15775 };
	Global_15793 = { Global_15781 };
	Global_15748 = Global_15747;
	Global_15817 = { Global_15799 };
	Global_15823 = { Global_15805 };
	Global_15829 = { Global_15811 };
	Global_15835 = { Global_15841 };
	Global_1579 = Global_1580;
	Global_1581 = Global_1582;
	Global_15704 = Global_15705;
	Global_15706 = Global_15707;
	Global_15708 = { Global_15724 };
	Global_15697 = Global_15698;
	Global_16709 = 0;
	Global_15742 = 0;
	Global_15743 = 0;
	unk_0x29DB79DD4D939B38(&Global_2265, 16);
}

int func_14()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_15()
{
	int iVar0;
	int iVar1;
	
	if (Global_68325)
	{
		iVar0 = 0;
		unk_0xC00D643B16552C4D(unk_0xA16EC202D9D35357(), &iVar1, 1);
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x76F7F25F198388A1() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
	{
		if (unk_0xFCCDE3C4E11113D7(unk_0xA16EC202D9D35357(), 78, 1))
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
		if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[0 /*29*/])
			{
				Global_14394 = 0;
			}
			else if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[1 /*29*/])
			{
				Global_14394 = 1;
			}
			else if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[2 /*29*/])
			{
				Global_14394 = 2;
			}
			else
			{
				Global_14394 = 0;
			}
		}
	}
	else
	{
		Global_14394 = func_17();
		if (Global_14394 == 145)
		{
			Global_14394 = 3;
		}
		if (Global_68325)
		{
			Global_14394 = 3;
		}
		if (Global_14394 > 3)
		{
			Global_14394 = 3;
		}
	}
}

var func_17()
{
	func_18();
	return Global_97439.f_1729.f_539.f_3213;
}

void func_18()
{
	int iVar0;
	
	if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
	{
		if (func_21(Global_97439.f_1729.f_539.f_3213) != unk_0xA609E58449080951(unk_0xA16EC202D9D35357()))
		{
			iVar0 = func_20(unk_0xA16EC202D9D35357());
			if (func_19(iVar0) && (!func_22(14) || Global_96391))
			{
				if (Global_97439.f_1729.f_539.f_3213 != iVar0 && func_19(Global_97439.f_1729.f_539.f_3213))
				{
					Global_97439.f_1729.f_539.f_3214 = Global_97439.f_1729.f_539.f_3213;
				}
				Global_97439.f_1729.f_539.f_3215 = iVar0;
				Global_97439.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97439.f_1729.f_539.f_3213 != 145)
			{
				Global_97439.f_1729.f_539.f_3215 = Global_97439.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97439.f_1729.f_539.f_3213 = 145;
}

bool func_19(int iParam0)
{
	return iParam0 < 3;
}

int func_20(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x538DF9E5B1DF01EB(uParam0))
	{
		iVar1 = unk_0xA609E58449080951(uParam0);
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
		return Global_97439.f_29795[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_22(int iParam0)
{
	return Global_34915 == iParam0;
}

void func_23()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14982[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14982[iVar0 /*10*/].f_1), "", 24);
		Global_14982[iVar0 /*10*/].f_7 = 0;
		Global_14982[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14982.f_161 = -99;
	Global_14982.f_162 = { 0f, 0f, 0f };
}

bool func_24(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327587.f_203[iParam1];
			}
			break;
	}
	return unk_0x889D01384B54BCE3(Global_1327587.f_949, iParam0);
}

void func_25()
{
	unk_0xD01024485E7AB68C();
	Global_16704 = 0;
	if ((unk_0xBE029393332523D7() || Global_14394.f_1 == 9) || Global_14393 == 1)
	{
		unk_0x0D68C13151B68364(0);
		Global_15693 = 6;
		Global_14394.f_1 = 3;
		return;
	}
	if (unk_0xD47B332729054512())
	{
		unk_0x0D68C13151B68364(1);
		Global_15693 = 6;
		return;
	}
}

void func_26(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15147 = { *uParam0 };
	Global_1580 = uParam1;
	StringCopy(&Global_15763, sParam2, 24);
	Global_16682 = iParam5;
	if (iParam3 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16681 = 1;
		Global_16679 = 0;
	}
	else
	{
		Global_16681 = 0;
		Global_16679 = 1;
	}
}

var func_27()
{
	return Global_1315866;
}

int func_28(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_26(uParam0, uParam1, sParam2, iParam6, iParam7, 0);
	Global_15741 = 0;
	Global_15700 = 1;
	Global_15707 = 0;
	Global_15702 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 0;
	Global_15698 = 0;
	Global_15745 = 0;
	Global_15747 = 0;
	if (iParam5 == 1)
	{
		Global_15705 = 1;
	}
	else
	{
		Global_15705 = 0;
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
	if (!Global_68325)
	{
		if (!unk_0x2DE0B96E966FD817(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x54CA1F435E64266A(iParam2, 0);
			}
			else
			{
				unk_0x54CA1F435E64266A(iParam2, 1);
			}
		}
		if (!unk_0x2DE0B96E966FD817(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xA7FFC0AE4D5A08F6(iParam2, 0);
			}
			else
			{
				unk_0xA7FFC0AE4D5A08F6(iParam2, 1);
			}
		}
	}
}

void func_30(int iParam0)
{
	if (Global_14552)
	{
		func_31(0, 0);
	}
	if (Global_14394.f_1 == 10 || Global_14394.f_1 == 9)
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_2265, 16);
	}
	if (unk_0xBE029393332523D7())
	{
		unk_0x0D68C13151B68364(0);
	}
	Global_15693 = 5;
	if (iParam0 == 1)
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_2264, 30);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&Global_2264, 30);
	}
	if (!func_14())
	{
		Global_14394.f_1 = 3;
	}
}

void func_31(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_32(0))
		{
			Global_14552 = 1;
			if (bParam1)
			{
				unk_0x42F219BEF3DE3A7F(&Global_14331);
			}
			Global_14322 = { Global_14340[Global_14339 /*3*/] };
			unk_0x6CE18C954519D281(Global_14322);
		}
	}
	else if (Global_14552 == 1)
	{
		Global_14552 = 0;
		Global_14322 = { Global_14347[Global_14339 /*3*/] };
		if (bParam1)
		{
			unk_0x6CE18C954519D281(Global_14331);
		}
		else
		{
			unk_0x6CE18C954519D281(Global_14322);
		}
	}
}

int func_32(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14394.f_1 > 3)
		{
			if (unk_0x889D01384B54BCE3(Global_2264, 14))
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
	if (unk_0x16CDA1894CFE0781(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14394.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_33()
{
	float fVar0;
	
	unk_0x8D033DA6320BDCF9(1);
	unk_0xA6ED15B28077401E(2, 201);
	unk_0xA6ED15B28077401E(2, 202);
	fVar0 = 0f;
	while ((!unk_0x1453F50088A91E4E(2, 201) && !unk_0x1453F50088A91E4E(2, 202)) || fVar0 < 1f)
	{
		unk_0xDC38CC1E35B6A5D7("VEUI_HDR_ALERT", "VE_DIR_MODE_SURE", 18, 0, 0, -1, 0, 0, 1);
		unk_0x4EDE34FBADD967A6(0);
		fVar0 = (fVar0 + unk_0x0C380BB05B91042D());
	}
	unk_0x8D033DA6320BDCF9(0);
	if (unk_0x1453F50088A91E4E(2, 201))
	{
		unk_0x271524E4281048DC(0);
		Global_96386 = 1;
	}
}

void func_34(int iParam0)
{
	float fVar0;
	char* sVar1;
	
	unk_0x8D033DA6320BDCF9(1);
	unk_0xA6ED15B28077401E(2, 201);
	fVar0 = 0f;
	while (!unk_0x1453F50088A91E4E(2, 201) || fVar0 < 1f)
	{
		sVar1 = func_35(iParam0, 119);
		unk_0x7B1776B3B53F8D74("FBR_GENERIC", 16384, 0, 0, -1, "FBR_DIR_MODE", sVar1, 1);
		unk_0x4EDE34FBADD967A6(0);
		fVar0 = (fVar0 + unk_0x0C380BB05B91042D());
	}
	unk_0x8D033DA6320BDCF9(0);
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
	if (unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
	{
		return 13;
	}
	if (bParam1)
	{
		if (unk_0x16CDA1894CFE0781(unk_0x9C2B33434756C8A2()) > 1)
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
	if (Global_87367)
	{
		return 3;
	}
	if (Global_24699)
	{
		return 8;
	}
	if (Global_24594)
	{
		return 8;
	}
	if (Global_2621550)
	{
		if (unk_0x16CDA1894CFE0781(-1516147206) > 0)
		{
			return 3;
		}
	}
	else if (Global_2621549)
	{
		if (unk_0x16CDA1894CFE0781(2006115718) > 0)
		{
			return 3;
		}
	}
	else if (unk_0x16CDA1894CFE0781(joaat("mission_stat_watcher")) > 0)
	{
		return 3;
	}
	if (unk_0x16CDA1894CFE0781(joaat("finale_choice")) > 0)
	{
		return 3;
	}
	if (unk_0x16CDA1894CFE0781(joaat("creator")) > 0)
	{
		return 3;
	}
	if (unk_0x16CDA1894CFE0781(joaat("respawn_controller")) > 0)
	{
		return 13;
	}
	if (func_66(bParam1))
	{
		return 3;
	}
	if (unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357()) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357()))
	{
		return 12;
	}
	if (func_65(Global_96464, 256))
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
	if (func_51() && !Global_96390)
	{
		return 8;
	}
	if (func_55())
	{
		return 5;
	}
	if (unk_0xB4B5BF5882A555F9() || func_50())
	{
		return 4;
	}
	if (func_49())
	{
		return 4;
	}
	if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
	{
		if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
		{
			iVar0 = func_40(60);
			if (iVar0 != 0)
			{
				return iVar0;
			}
			if (unk_0xD630B5603A1AED89(unk_0xA16EC202D9D35357()) || unk_0x9EAFC8B61ACBB2DB(unk_0xA16EC202D9D35357()) != -1)
			{
				return 11;
			}
			if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1) || Global_96486)
			{
				return 10;
			}
		}
	}
	if (Global_24697)
	{
		return 8;
	}
	if (Global_68323)
	{
		return 4;
	}
	if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
	{
		if (unk_0xD25129559B94E910(unk_0x1788E93557766241()) > 0 || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1))
		{
			return 6;
		}
		if (unk_0x6CA3764368FA4573(unk_0x1788E93557766241()))
		{
			return 8;
		}
		if (unk_0xDBE30D8105A6CC0C(unk_0xA16EC202D9D35357()))
		{
			return 8;
		}
	}
	if (unk_0x1DAD7CE53BEE7710())
	{
		return 7;
	}
	if (func_39())
	{
		return 8;
	}
	if (Global_24448)
	{
		return 3;
	}
	if (unk_0x99483D9B7795CE90())
	{
		return 4;
	}
	if (unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), 439.4357f, -997.4747f, 28.9584f, 428.3288f, -997.0398f, 24.8372f, 8f, 0, 1, 0))
	{
		return 9;
	}
	if (unk_0x21FF064386DC6A0A(unk_0xA16EC202D9D35357()))
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
	if (unk_0x1DA9513D9D54F420(unk_0xA16EC202D9D35357()))
	{
		return 9;
	}
	return 0;
}

int func_37(bool bParam0)
{
	if (unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		return 0;
	}
	if ((((((((((!unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241()) || !unk_0xB6ABC1F54599FF7E(unk_0x1788E93557766241())) || unk_0x7D0624057C8895A0(unk_0xA16EC202D9D35357())) || unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0)) || unk_0x15383F5EDB73B6BB(unk_0xA16EC202D9D35357())) || unk_0xFE57C063743B552A(unk_0xA16EC202D9D35357())) || unk_0x5E01840EE8DA8D5B(unk_0xA16EC202D9D35357())) || unk_0xDBE30D8105A6CC0C(unk_0xA16EC202D9D35357())) || unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357())) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1))
	{
		return 0;
	}
	if ((((((func_49() || Global_17099.f_4) || func_38()) || unk_0xA454AE8F0C01F023()) || unk_0x6825BAFC0E4FEE9A()) || func_50()) || func_69())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (unk_0x57928D9CA949E471())
		{
			return 0;
		}
	}
	return 1;
}

int func_38()
{
	if (!unk_0x1DAD7CE53BEE7710())
	{
		return Global_87925.f_44 == 1;
	}
	return 0;
}

bool func_39()
{
	return Global_51940;
}

int func_40(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	if (unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0) && unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1))
	{
		return 5;
	}
	Var0 = { func_48(unk_0x1788E93557766241()) };
	if (Global_96526[10 /*10*/].f_1)
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
			if (unk_0x801B4FC214DEDCB7(Var0, -61.26628f, -1096.505f, 25.52088f, -58.43333f, -1101.147f, 29.24937f, 1.25f, 0, 1))
			{
				return 9;
			}
		}
	}
	if (unk_0xB7A628320EFF8E47(Var0, -740.9346f, 5599.426f, 40.71515f) < 11f)
	{
		if (unk_0x801B4FC214DEDCB7(Var0, -746.1299f, 5599.226f, 40.47561f, -737.632f, 5599.364f, 44.1693f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (unk_0xB7A628320EFF8E47(Var0, -740.9346f, 5590.426f, 40.71515f) < 11f)
	{
		if (unk_0x801B4FC214DEDCB7(Var0, -746.1299f, 5590.667f, 40.4392f, -737.6585f, 5590.592f, 44.52327f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (unk_0xB7A628320EFF8E47(Var0, 446.3265f, 5566.35f, 780.2151f) < 11f)
	{
		if (unk_0x801B4FC214DEDCB7(Var0, 451.1661f, 5566.451f, 780.1703f, 442.5211f, 5566.374f, 783.9819f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (unk_0xB7A628320EFF8E47(Var0, 446.3265f, 5577.35f, 780.2151f) < 11f)
	{
		if (unk_0x801B4FC214DEDCB7(Var0, 451.1661f, 5577.867f, 780.1899f, 442.5765f, 5577.579f, 783.9086f, 3.375f, 0, 1))
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
	if (!iLocal_26)
	{
		func_41(iParam0);
	}
	iVar3 = unk_0x05681B6F593F0A9C(unk_0xA16EC202D9D35357());
	if (iVar3 == 0)
	{
		return 0;
	}
	else if ((iVar3 == Global_96402 || iVar3 == Global_96403) || iVar3 == Global_96404)
	{
		return 9;
	}
	else if (iVar3 == Global_96393)
	{
		return 9;
	}
	else if (iVar3 == Global_96394)
	{
		return 9;
	}
	else if (iVar3 == Global_96397)
	{
		return 9;
	}
	else if (iVar3 == Global_96396)
	{
		return 9;
	}
	else if (iVar3 == Global_96398)
	{
		return 9;
	}
	else if (iVar3 == Global_96399)
	{
		return 9;
	}
	else if (iVar3 == Global_96400)
	{
		return 9;
	}
	else if (iVar3 == Global_96401)
	{
		return 9;
	}
	else if (iVar3 == Global_96405)
	{
		return 9;
	}
	else if (iVar3 == Global_96406)
	{
		return 9;
	}
	else if (iVar3 == Global_96407)
	{
		return 9;
	}
	else if (iVar3 == Global_96408)
	{
		return 9;
	}
	else if (iVar3 == Global_96409)
	{
		return 9;
	}
	else if ((iVar3 == Global_96410 || iVar3 == Global_96411) && func_8(67))
	{
		return 9;
	}
	iVar4 = 0;
	while (iVar4 <= (19 - 1))
	{
		if (iVar3 == Global_96412[iVar4])
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
	func_44(24, &Global_96393);
	func_44(47, &Global_96394);
	func_44(10, &Global_96402);
	func_44(9, &Global_96403);
	func_44(8, &Global_96404);
	func_44(21, &Global_96405);
	func_44(11, &Global_96406);
	func_44(18, &Global_96410);
	func_44(19, &Global_96411);
	Global_96397 = unk_0x7B6124E1230469E9(-76.6618f, 6222.191f, 32.2412f, "V_factory1");
	Global_96396 = unk_0x7B6124E1230469E9(-98.2637f, 6210.022f, 31.924f, "V_factory2");
	Global_96398 = unk_0x7B6124E1230469E9(-115.8956f, 6179.749f, 32.4102f, "V_factory3");
	Global_96399 = unk_0x7B6124E1230469E9(-149.8199f, 6144.978f, 31.3353f, "V_factory4");
	Global_96400 = unk_0x7B6124E1230469E9(16.3605f, -1100.259f, 28.797f, "v_gun");
	Global_96401 = unk_0x7B6124E1230469E9(125.1948f, -1284.13f, 28.2847f, "v_strip3");
	Global_96407 = unk_0x7B6124E1230469E9(-545.5717f, 1987.145f, 126.0262f, "cs6_08_mine_int");
	Global_96408 = unk_0x7B6124E1230469E9(2330.598f, 2571.935f, 45.6802f, "ch3_01_trlr_int");
	Global_96409 = unk_0x7B6124E1230469E9(-54.7f, -1092.7f, 26.4f, "v_carshowroom");
	iVar0 = 0;
	while (iVar0 <= (19 - 1))
	{
		Global_96412[iVar0] = unk_0xE60DDD7D0864392E(func_42(iVar0));
		iVar0++;
	}
	iLocal_26 = 1;
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
	*uParam1 = unk_0x7B6124E1230469E9(Var0, Var0.f_3);
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
			Var0 = { Global_1048995[34 /*1425*/].f_146.f_1041 + Vector(1f, 0f, 0f) };
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
	if (Global_84432[iParam0 /*2*/])
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_81199)
	{
		if (Global_81199[iVar0 /*5*/] != -1)
		{
			if (Global_68594.f_109[Global_81199[iVar0 /*5*/] /*4*/] == iParam0)
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
	return unk_0xBF8499F46AD9093A(unk_0xFF34D923BFB5E9FB(iParam0), 0);
}

bool func_49()
{
	return Global_1315891;
}

int func_50()
{
	if (unk_0x16CDA1894CFE0781(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_51()
{
	return unk_0x09560C7DE2A384BD() <= Global_17238.f_5130 + 100;
}

bool func_52()
{
	return unk_0x889D01384B54BCE3(Global_68573, 9);
}

bool func_53()
{
	return unk_0x889D01384B54BCE3(Global_68573, 8);
}

int func_54()
{
	if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()) && !unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		if (((((((((((((((unk_0x95EDB2DEFA5BB405(unk_0xA16EC202D9D35357(), "misshair_shop@barbers", "player_intro", 3) || unk_0x95EDB2DEFA5BB405(unk_0xA16EC202D9D35357(), "misshair_shop@barbers", "player_base", 3)) || unk_0x95EDB2DEFA5BB405(unk_0xA16EC202D9D35357(), "misshair_shop@barbers", "player_enterchair", 3)) || unk_0x95EDB2DEFA5BB405(unk_0xA16EC202D9D35357(), "misshair_shop@barbers", "player_exitchair", 3)) || unk_0x95EDB2DEFA5BB405(unk_0xA16EC202D9D35357(), "misshair_shop@barbers", "player_idle_a", 3)) || unk_0x95EDB2DEFA5BB405(unk_0xA16EC202D9D35357(), "misshair_shop@barbers", "player_idle_b", 3)) || unk_0x95EDB2DEFA5BB405(unk_0xA16EC202D9D35357(), "misshair_shop@barbers", "player_idle_c", 3)) || unk_0x95EDB2DEFA5BB405(unk_0xA16EC202D9D35357(), "misshair_shop@barbers", "player_idle_d", 3)) || unk_0x95EDB2DEFA5BB405(unk_0xA16EC202D9D35357(), "misshair_shop@hair_dressers", "player_intro", 3)) || unk_0x95EDB2DEFA5BB405(unk_0xA16EC202D9D35357(), "misshair_shop@hair_dressers", "player_base", 3)) || unk_0x95EDB2DEFA5BB405(unk_0xA16EC202D9D35357(), "misshair_shop@hair_dressers", "player_enterchair", 3)) || unk_0x95EDB2DEFA5BB405(unk_0xA16EC202D9D35357(), "misshair_shop@hair_dressers", "player_exitchair", 3)) || unk_0x95EDB2DEFA5BB405(unk_0xA16EC202D9D35357(), "misshair_shop@hair_dressers", "player_idle_a", 3)) || unk_0x95EDB2DEFA5BB405(unk_0xA16EC202D9D35357(), "misshair_shop@hair_dressers", "player_idle_b", 3)) || unk_0x95EDB2DEFA5BB405(unk_0xA16EC202D9D35357(), "misshair_shop@hair_dressers", "player_idle_c", 3)) || unk_0x95EDB2DEFA5BB405(unk_0xA16EC202D9D35357(), "misshair_shop@hair_dressers", "player_idle_d", 3))
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
		while (iVar0 < 44)
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
		return unk_0x889D01384B54BCE3(Global_90094.f_1272[iParam0], iParam1);
	}
	else if (unk_0x1DAD7CE53BEE7710())
	{
		if (func_62() == 0)
		{
			return unk_0x889D01384B54BCE3(func_58(func_61(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x889D01384B54BCE3(Global_97439.f_668[iParam0], iParam1);
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
	uVar0 = Global_2455246[iParam0 /*5*/][func_59(iParam1)];
	if (unk_0x3ED04C9A60CBD249(uVar0, &uVar1, -1))
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
			Global_2454959 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454959 = 1;
		}
	}
	return iVar0;
}

int func_60()
{
	return Global_1312729;
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
		
		default:
			break;
	}
	return 3025;
}

int func_62()
{
	return Global_24446;
}

bool func_63()
{
	return Global_90094.f_291 > 0;
}

bool func_64()
{
	return Global_90094.f_290 > 0;
}

bool func_65(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_66(bool bParam0)
{
	if (!bParam0 && unk_0x16CDA1894CFE0781(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x889D01384B54BCE3(Global_68573, 0);
}

bool func_67()
{
	return Global_90081.f_1;
}

bool func_68()
{
	return Global_68592;
}

int func_69()
{
	if (Global_68585)
	{
		return 1;
	}
	else if (Global_54752 && !Global_54758)
	{
		return 1;
	}
	return 0;
}

int func_70()
{
	if (Global_34915 == 15)
	{
		return 0;
	}
	return 1;
}

void func_71(int iParam0, int iParam1)
{
	unk_0xD0E2BFCE93AE3ABD(&Global_24693, iParam0);
	Global_24694 = iParam1;
}

void func_72(char* sParam0)
{
	unk_0xEBC0B3BDAD1250BE(sParam0);
	unk_0x9F94C7B5E8C04AB3();
}

int func_73()
{
	var uVar0;
	
	if (unk_0xCEFAE6CD543A0383())
	{
		if (unk_0x889D01384B54BCE3(unk_0x7058289E8DD601D6(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0x1DAD7CE53BEE7710())
	{
		if (unk_0x889D01384B54BCE3(Global_97439.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131779 == 2)
	{
		return 1;
	}
	if (unk_0x6B7032CA494CCEE4())
	{
		if (unk_0x07ED3AB0A86F77AA())
		{
			if (unk_0xB7DEA1403E206005())
			{
				if (unk_0xCEFAE6CD543A0383())
				{
					uVar0 = unk_0x7058289E8DD601D6(866);
					unk_0xD0E2BFCE93AE3ABD(&uVar0, 0);
					unk_0xBE2CD6E2863337FA(uVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_74(int iParam0)
{
	if ((Global_16807 || Global_16806) || Global_16808)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_98[iParam0 /*10*/].f_8 != 138)
	{
		if (Global_14394.f_1 == 10)
		{
			if (Global_1579 == iParam0)
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
	if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
	{
		unk_0xC2E1777941B4536E(-1, "Menu_Back", &Global_14383, 1);
	}
}

void func_76()
{
	if (Global_14372 == 0)
	{
		if (func_145(2, Global_14363, 0))
		{
			unk_0x29DB79DD4D939B38(&Global_2265, 0);
			iLocal_114 = 0;
			func_143();
			Global_14372 = 1;
			unk_0xB067107D878E9585(Global_14375, "GET_CURRENT_SELECTION");
			uLocal_98 = unk_0x8CB1A9AD2F4E2E1D();
			while (!unk_0x5AF0E0DBD9FA7F23(uLocal_98))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_102 = unk_0x70F7DBBE883019A5(uLocal_98);
			if (func_100(Global_1579))
			{
				if (iLocal_102 == 0)
				{
					if (bLocal_325)
					{
						Global_16807 = 0;
						Global_16806 = 0;
						Global_16808 = 1;
						func_86();
					}
					else
					{
						Global_16807 = 0;
						Global_16806 = 0;
						Global_16808 = 0;
						func_86();
					}
				}
				if (iLocal_102 == 1)
				{
					if (bLocal_325)
					{
						Global_16807 = 0;
						Global_16806 = 0;
						Global_16808 = 0;
						func_86();
					}
					else if (func_78(Global_1579, Global_14394))
					{
						func_77();
						iLocal_114 = 1;
					}
					else
					{
						Global_16807 = 1;
						Global_16806 = 0;
						Global_16808 = 0;
						func_86();
					}
				}
				if (iLocal_102 == 2)
				{
					if (func_78(Global_1579, Global_14394))
					{
						func_77();
						iLocal_114 = 1;
					}
					else
					{
						Global_16807 = 1;
						Global_16806 = 0;
						Global_16808 = 0;
						func_86();
					}
				}
			}
			else
			{
				if (iLocal_102 == 0)
				{
					if (bLocal_325)
					{
						Global_16807 = 0;
						Global_16806 = 0;
						Global_16808 = 1;
						func_86();
					}
					else if (func_78(Global_1579, Global_14394))
					{
						func_77();
						iLocal_114 = 1;
					}
					else
					{
						Global_16807 = 1;
						Global_16806 = 0;
						Global_16808 = 0;
						func_86();
					}
				}
				if (iLocal_102 == 1)
				{
					if (func_78(Global_1579, Global_14394))
					{
						func_77();
						iLocal_114 = 1;
					}
					else
					{
						Global_16807 = 1;
						Global_16806 = 0;
						Global_16808 = 0;
						func_86();
					}
				}
			}
		}
	}
}

void func_77()
{
	func_142(Global_14375, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (Global_14382)
	{
		func_139(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
		func_139(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_139(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_139(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_139(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x29DB79DD4D939B38(&Global_2264, 17);
	func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_270", 0, 0, 0, 0);
	func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_271", 0, 0, 0, 0);
	func_142(Global_14375, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_140(Global_14375, "SET_HEADER", "CELL_269", 0, 0, 0, 0);
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
		return Global_86303[iParam0 /*2*/];
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
		return Global_97439.f_29795[iParam0 /*29*/].f_11;
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
	if (Global_34915 == 15)
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
	return func_85(iParam0, Global_34915);
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
	if (Global_14394.f_1 > 3)
	{
		Global_14394.f_1 = 10;
		func_99();
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
		{
			if (!unk_0x21FF064386DC6A0A(unk_0xA16EC202D9D35357()))
			{
				if (unk_0x58E0437E9E98D6BB(unk_0xA16EC202D9D35357(), 0))
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
		if (Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 2)
		{
			func_95();
			func_142(Global_14375, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_97439.f_29795[Global_1579 /*29*/].f_24[Global_14394] == 0)
	{
		func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_98[Global_1579 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
	}
	else
	{
		func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_97439.f_29795[Global_1579 /*29*/].f_3), &(Global_97439.f_29795[Global_1579 /*29*/].f_7), "CELL_211", &(Global_97439.f_29795[Global_1579 /*29*/].f_3), 0);
	}
	func_91();
	if (Global_68325)
	{
		func_87(1909, 1, -1);
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
	
	iVar0 = Global_2455246[iParam0 /*5*/][func_59(uParam2)];
	if (iVar0 != 0)
	{
		unk_0x680350124CC21957(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 782:
			Global_1336437[func_59(uParam2)] = iParam1;
			break;
		
		case 783:
			Global_1336443[func_59(uParam2)] = iParam1;
			break;
		
		case 784:
			Global_1336449[func_59(uParam2)] = iParam1;
			break;
		
		case 785:
			Global_1336455[func_59(uParam2)] = iParam1;
			break;
		
		case 772:
			Global_1336413[func_59(uParam2)] = iParam1;
			break;
		
		case 773:
			Global_1336419[func_59(uParam2)] = iParam1;
			break;
		
		case 774:
			Global_1336425[func_59(uParam2)] = iParam1;
			break;
		
		case 775:
			Global_1336431[func_59(uParam2)] = iParam1;
			break;
		
		case 762:
			Global_1336389[func_59(uParam2)] = iParam1;
			break;
		
		case 763:
			Global_1336395[func_59(uParam2)] = iParam1;
			break;
		
		case 764:
			Global_1336401[func_59(uParam2)] = iParam1;
			break;
		
		case 765:
			Global_1336407[func_59(uParam2)] = iParam1;
			break;
		
		case 752:
			Global_1336461[func_59(uParam2)] = iParam1;
			break;
		
		case 753:
			Global_1336467[func_59(uParam2)] = iParam1;
			break;
		
		case 754:
			Global_1336473[func_59(uParam2)] = iParam1;
			break;
		
		case 755:
			Global_1336479[func_59(uParam2)] = iParam1;
			break;
		
		case 1297:
			Global_1336485[func_59(uParam2)] = iParam1;
			break;
		
		case 634:
			Global_1336491[func_59(uParam2)] = iParam1;
			break;
		
		case 1272:
			Global_1336497[func_59(uParam2)] = iParam1;
			break;
		
		case 1869:
			Global_2473821[0 /*6*/][func_59(uParam2)] = iParam1;
			break;
		
		case 2260:
			Global_2473821[1 /*6*/][func_59(uParam2)] = iParam1;
			break;
		
		case 759:
			Global_1336503[func_59(uParam2)] = iParam1;
			break;
		
		case 760:
			Global_1336509[func_59(uParam2)] = iParam1;
			break;
		
		case 761:
			Global_1336515[func_59(uParam2)] = iParam1;
			break;
		
		case 1230:
			Global_1336521[func_59(uParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_89(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2455246[iParam0 /*5*/][func_59(uParam2)];
	if (iVar0 != 0)
	{
		unk_0x680350124CC21957(iVar0, iParam1, iParam3);
	}
}

int func_90(int iParam0)
{
	if (Global_1336370)
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
			case 1297:
			case 634:
			case 1272:
			case 759:
			case 760:
			case 761:
			case 1230:
			case 1869:
			case 2260:
				return 1;
				break;
			}
	}
	return 0;
}

void func_91()
{
	char cVar0[24];
	
	if (Global_14377 == 1)
	{
		return;
	}
	if (Global_14394.f_1 < 4)
	{
		return;
	}
	while (!unk_0xC8378A96673BCC40(Global_14375))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	switch (Global_14394.f_1)
	{
		case 6:
			func_142(Global_14375, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_94(Global_2869);
			if (Global_2869 == 1)
			{
				func_142(Global_14375, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14398), -1082130432, -1082130432, -1082130432);
				Global_14374 = Global_14398;
			}
			else
			{
				func_142(Global_14375, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14399), -1082130432, -1082130432, -1082130432);
				Global_14374 = Global_14399;
			}
			if (Global_14382)
			{
				func_139(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_139(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_139(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_139(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14554 == 0)
			{
				func_139(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x29DB79DD4D939B38(&Global_2264, 17);
			}
			else if (Global_68325)
			{
				func_139(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x29DB79DD4D939B38(&Global_2264, 17);
			}
			else
			{
				if (Global_14553 == 1)
				{
					if (Global_14382)
					{
						func_139(Global_14375, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_139(Global_14375, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14382)
				{
					func_139(Global_14375, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_139(Global_14375, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0xD0E2BFCE93AE3ABD(&Global_2264, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_142(Global_14375, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_139(Global_14375, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_139(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x29DB79DD4D939B38(&Global_2264, 17);
			if (unk_0x889D01384B54BCE3(Global_2264, 20))
			{
				func_139(Global_14375, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14382)
			{
				func_139(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14337)
				{
					func_139(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_139(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14393 == 1)
			{
				func_93();
				func_142(Global_14375, "SET_THEME", unk_0xBBDA792448DB5A89(Global_97439.f_12305[Global_14394 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15706)
				{
					unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
					unk_0x26221D1D76579618(4);
					unk_0x26221D1D76579618(0);
					unk_0x26221D1D76579618(2);
					unk_0xEBC0B3BDAD1250BE("CELL_CONDFON");
					unk_0x94E086BCAE8856C1(&Global_15708);
					unk_0x9F94C7B5E8C04AB3();
					func_72("CELL_300");
					func_72("CELL_217");
					func_72("CELL_217");
					unk_0xD3DF251F2DF3B257();
				}
				else if (Global_97439.f_29795[Global_1579 /*29*/].f_24[Global_14394] == 0)
				{
					func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_98[Global_1579 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_97439.f_29795[Global_1579 /*29*/].f_3), &(Global_97439.f_29795[Global_1579 /*29*/].f_7), "CELL_217", &(Global_97439.f_29795[Global_1579 /*29*/].f_3), 0);
				}
				func_142(Global_14375, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15693 == 4 || Global_15693 == 3)
			{
				func_142(Global_14375, "SET_THEME", unk_0xBBDA792448DB5A89(Global_97439.f_12305[Global_14394 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_93();
				if (Global_15706)
				{
					unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
					unk_0x26221D1D76579618(4);
					unk_0x26221D1D76579618(0);
					unk_0x26221D1D76579618(2);
					unk_0xEBC0B3BDAD1250BE("CELL_CONDFON");
					unk_0x94E086BCAE8856C1(&Global_15708);
					unk_0x9F94C7B5E8C04AB3();
					func_72("CELL_300");
					func_72("CELL_219");
					func_72("CELL_219");
					unk_0xD3DF251F2DF3B257();
				}
				else
				{
					if (Global_15951)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (Global_97439.f_29795[Global_1579 /*29*/].f_24[Global_14394] == 0)
					{
						func_142(Global_14375, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_98[Global_1579 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_142(Global_14375, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_97439.f_29795[Global_1579 /*29*/].f_3), &(Global_97439.f_29795[Global_1579 /*29*/].f_7), &cVar0, &(Global_97439.f_29795[Global_1579 /*29*/].f_3), 0);
					}
				}
				func_142(Global_14375, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_92();
			break;
		
		default:
			break;
	}
}

void func_92()
{
	if (unk_0xC8378A96673BCC40(Global_14375))
	{
		if (Global_14393 == 1)
		{
			if (Global_14382)
			{
				func_139(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_139(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15740)
			{
				func_139(Global_14375, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0x889D01384B54BCE3(Global_2264, 20))
			{
				func_139(Global_14375, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14382)
			{
				func_139(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_139(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_139(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x29DB79DD4D939B38(&Global_2264, 17);
		}
		else
		{
			func_139(Global_14375, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_139(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x29DB79DD4D939B38(&Global_2264, 17);
			if (unk_0x889D01384B54BCE3(Global_2264, 20))
			{
				func_139(Global_14375, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14382)
			{
				func_139(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14337)
				{
					func_139(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_139(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_93()
{
	if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
	{
		if (Global_14394 == 0)
		{
			switch (Global_97439.f_12305[Global_14394 /*20*/].f_6)
			{
				case 1:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 0);
					break;
				
				case 2:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 1);
					break;
				
				case 3:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 2);
					break;
				
				case 4:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 3);
					break;
				
				case 5:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 4);
					break;
				
				case 6:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 5);
					break;
				
				case 7:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14394 == 1)
		{
			switch (Global_97439.f_12305[Global_14394 /*20*/].f_6)
			{
				case 1:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 6);
					break;
				
				case 2:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 0);
					break;
				
				case 3:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 1);
					break;
				
				case 4:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 2);
					break;
				
				case 5:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 3);
					break;
				
				case 6:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 4);
					break;
				
				case 7:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14394 == 2)
		{
			switch (Global_97439.f_12305[Global_14394 /*20*/].f_6)
			{
				case 1:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 5);
					break;
				
				case 2:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 6);
					break;
				
				case 3:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 1);
					break;
				
				case 4:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 0);
					break;
				
				case 5:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 2);
					break;
				
				case 6:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 3);
					break;
				
				case 7:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14394 == 3)
		{
			switch (Global_2542826)
			{
				case 1:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 0);
					break;
				
				case 2:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 1);
					break;
				
				case 3:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 2);
					break;
				
				case 4:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 3);
					break;
				
				case 5:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 4);
					break;
				
				case 6:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 5);
					break;
				
				case 7:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 6);
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
	
	Global_16761 = 0;
	Global_2869 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2833[iVar0] = 0;
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
				if (iParam0 == Global_2271[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2271[iVar1 /*15*/].f_4)
					{
						if (Global_2833[iVar0] == 0)
						{
							Global_2797[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0x889D01384B54BCE3(Global_2265, 3))
								{
									iVar2 = 42;
									Global_14556 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14556 = 0;
								}
								unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
								unk_0x26221D1D76579618(1);
								unk_0x26221D1D76579618(iVar0);
								unk_0x26221D1D76579618(Global_2271[iVar1 /*15*/].f_10);
								unk_0x26221D1D76579618(0);
								func_72(&(Global_2271[iVar1 /*15*/]));
								unk_0x26221D1D76579618(iVar2);
								unk_0xD3DF251F2DF3B257();
							}
							if (Global_2435552)
							{
								if (iVar1 == 14)
								{
									func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16756), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2833[iVar0] = 1;
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
				if (iParam0 == Global_2271[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2271[iVar1 /*15*/].f_4)
					{
						if (Global_2833[iVar0] == 0)
						{
							Global_2797[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_97439.f_12395[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_97439.f_12395[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_97439.f_12395[iVar3 /*104*/].f_99[Global_14394] == 1)
											{
												Global_16761++;
											}
										}
									}
									iVar3++;
								}
								func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16761), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_68325)
								{
									iVar4 = 0;
									iVar5 = 0;
									while (iVar4 < 12)
									{
										if (Global_2541361[iVar4 /*104*/].f_24 != 0)
										{
											if (Global_2541361[iVar4 /*104*/].f_28 == 0)
											{
												if (Global_2541361[iVar4 /*104*/].f_99[Global_14394] == 1)
												{
													iVar5++;
												}
											}
										}
										iVar4++;
									}
									func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar5), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14394)
									{
										case 0:
											iVar6 = Global_35970;
											break;
										
										case 1:
											iVar6 = Global_35971;
											break;
										
										case 2:
											iVar6 = Global_35972;
											break;
										
										default:
											break;
									}
									func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16756), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
								unk_0x26221D1D76579618(1);
								unk_0x26221D1D76579618(iVar0);
								unk_0x26221D1D76579618(Global_2271[iVar1 /*15*/].f_10);
								unk_0x26221D1D76579618(0);
								func_72(&(Global_2271[iVar1 /*15*/]));
								unk_0x26221D1D76579618(Global_2270);
								unk_0xD3DF251F2DF3B257();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x889D01384B54BCE3(Global_2265, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
								unk_0x26221D1D76579618(1);
								unk_0x26221D1D76579618(iVar0);
								unk_0x26221D1D76579618(Global_2271[iVar1 /*15*/].f_10);
								unk_0x26221D1D76579618(0);
								func_72(&(Global_2271[iVar1 /*15*/]));
								unk_0x26221D1D76579618(iVar7);
								unk_0xD3DF251F2DF3B257();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x889D01384B54BCE3(Global_2265, 3))
								{
									iVar8 = 42;
									Global_14556 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14556 = 0;
								}
								unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
								unk_0x26221D1D76579618(1);
								unk_0x26221D1D76579618(iVar0);
								unk_0x26221D1D76579618(Global_2271[iVar1 /*15*/].f_10);
								unk_0x26221D1D76579618(0);
								func_72(&(Global_2271[iVar1 /*15*/]));
								unk_0x26221D1D76579618(iVar8);
								unk_0xD3DF251F2DF3B257();
							}
							else if (iVar1 == 8)
							{
								unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
								unk_0x26221D1D76579618(1);
								unk_0x26221D1D76579618(iVar0);
								unk_0x26221D1D76579618(Global_2271[iVar1 /*15*/].f_10);
								unk_0x26221D1D76579618(0);
								func_72(&(Global_2271[iVar1 /*15*/]));
								unk_0x26221D1D76579618(42);
								unk_0xD3DF251F2DF3B257();
							}
							else
							{
								func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2833[iVar0] = 1;
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
	if (Global_3069[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3069[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3069[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3069[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3069[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3069[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0x29DB79DD4D939B38(&Global_2264, 25);
	unk_0xD0E2BFCE93AE3ABD(&Global_2265, 11);
}

int func_96()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
	{
		if (Global_14394.f_1 == 10 || Global_14394.f_1 == 9)
		{
			if (Global_14337 == 0)
			{
				if (Global_1579 != 128)
				{
					if (!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
					{
						if (Global_15693 != 2)
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
		if (unk_0x58E0437E9E98D6BB(unk_0xA16EC202D9D35357(), 0))
		{
			return 0;
		}
		if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
		{
			if (!unk_0xA8B5F35FA25FC7BC())
			{
				if (unk_0x21FF064386DC6A0A(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0xBC784BECB25AE24A(unk_0xA16EC202D9D35357()) || unk_0x0F5E43D893E5D0E1(unk_0xA16EC202D9D35357())) || unk_0x6CA3764368FA4573(unk_0x1788E93557766241())) || unk_0x0079313340731F9C(unk_0xA16EC202D9D35357()))
		{
			return 0;
		}
		if (Global_96487)
		{
			return 0;
		}
	}
	if (Global_68325)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x862704CFD32408F9();
	iVar1 = unk_0x95AD511976EEFC6B(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0xA8B5F35FA25FC7BC()))
	{
		iVar2 = 1;
		if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
			{
				uVar3 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
				if ((((((((unk_0x2FDD93A1F5E63663(unk_0xA609E58449080951(uVar3)) || unk_0x271F7EEEF6BC4943(unk_0xA609E58449080951(uVar3))) || unk_0x74FBEA30BE72F22B(unk_0xA609E58449080951(uVar3))) || unk_0xA609E58449080951(uVar3) == joaat("seashark")) || unk_0xA609E58449080951(uVar3) == joaat("seashark2")) || unk_0xA609E58449080951(uVar3) == joaat("rhino")) || unk_0xA609E58449080951(uVar3) == joaat("submersible")) || unk_0xA609E58449080951(uVar3) == joaat("submersible2")) || unk_0xA609E58449080951(uVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_2542828 || iVar2 == 1)
	{
		if (unk_0x16CDA1894CFE0781(joaat("apptrackify")) > 0 || Global_97439.f_12305.f_89)
		{
			if (unk_0x16CDA1894CFE0781(joaat("michael2")) > 0)
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
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		if (func_98() && unk_0x58E0437E9E98D6BB(unk_0xA16EC202D9D35357(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_68325)
	{
		if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()) && iVar1 == 0)
		{
			iVar2 = unk_0xA8E98142ED49A114(unk_0xA16EC202D9D35357(), 0);
			if (Global_68325)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || unk_0xAAEAB57B2121A155(unk_0xA16EC202D9D35357()))
				{
					iVar0 = 1;
				}
			}
			else if (unk_0xAAEAB57B2121A155(unk_0xA16EC202D9D35357()))
			{
				iVar0 = 1;
			}
			if (!Global_14337)
			{
				if (Global_1579 != 128)
				{
					if (iVar0 == 0)
					{
						if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
						{
							if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
							{
							}
							else
							{
								if (Global_68325)
								{
									unk_0xA1478EBA54DDE31B(unk_0xA16EC202D9D35357(), 244, 0);
									unk_0xA1478EBA54DDE31B(unk_0xA16EC202D9D35357(), 243, 0);
									unk_0xA1478EBA54DDE31B(unk_0xA16EC202D9D35357(), 242, 0);
								}
								unk_0xD0E2BFCE93AE3ABD(&Global_2264, 11);
								unk_0xCAD0280A6E9FC35C(unk_0xA16EC202D9D35357(), 1, 1);
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
	
	uVar0 = unk_0x862704CFD32408F9();
	iVar1 = unk_0x95AD511976EEFC6B(uVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_99()
{
	struct<2> Var0;
	
	unk_0x42F219BEF3DE3A7F(&Var0);
	if (Global_14347[Global_14339 /*3*/].f_1 == Var0.f_1)
	{
	}
	else
	{
		Global_14334 = 1;
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
	while (iVar0 < Global_97439.f_5944.f_650)
	{
		if (Global_97439.f_5944.f_199[iVar0 /*15*/].f_6 == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97439.f_5944.f_136)
	{
		if (Global_97439.f_5944[iVar0 /*15*/].f_6 == iParam0)
		{
			if (unk_0x889D01384B54BCE3(Global_97439.f_5944[iVar0 /*15*/].f_1, 7))
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
		iVar1 = Global_81199[iVar0 /*5*/];
		if (iVar1 != -1)
		{
			iVar2 = -1;
			iVar2 = Global_68594.f_109[Global_81199[iVar0 /*5*/] /*4*/];
			if (iVar2 != -1)
			{
				if (func_102(Global_81235[iVar2 /*34*/].f_12, iParam0))
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
			return unk_0x889D01384B54BCE3(uParam0, iParam1);
		
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
	if (Global_14372 == 0)
	{
		if (func_145(2, Global_14363, 0))
		{
			unk_0x29DB79DD4D939B38(&Global_2265, 0);
			func_143();
			Global_14372 = 1;
			unk_0xB067107D878E9585(Global_14375, "GET_CURRENT_SELECTION");
			uLocal_98 = unk_0x8CB1A9AD2F4E2E1D();
			while (!unk_0x5AF0E0DBD9FA7F23(uLocal_98))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_102 = unk_0x70F7DBBE883019A5(uLocal_98);
			if (iLocal_102 == 0)
			{
				Global_16802[Global_14394] = 1;
				iLocal_113 = 0;
				Global_16807 = 0;
				Global_16806 = 1;
				Global_16808 = 0;
				func_86();
			}
			else
			{
				iLocal_114 = 0;
				func_120();
			}
		}
	}
}

void func_106(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_96081 && iParam1)
	{
		if (func_110(sParam0) && !unk_0xFFD644770C34BB52())
		{
			unk_0xFD1E0AEC770DAF2E(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_97439.f_23635.f_145)
	{
		if (unk_0x9BA82E09A986BA4B(sParam0, &(Global_97439.f_23635[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_97439.f_23635.f_145 - 2))
			{
				func_109(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_108((Global_97439.f_23635.f_145 - 1));
			Global_97439.f_23635.f_145 = (Global_97439.f_23635.f_145 - 1);
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
		Global_97439.f_23635.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97439.f_23635.f_145)
	{
		if (unk_0x889D01384B54BCE3(Global_97439.f_23635[iVar0 /*16*/].f_11, 0))
		{
			if (Global_97439.f_23635[iVar0 /*16*/].f_12 > Global_97439.f_23635.f_146[0])
			{
				Global_97439.f_23635.f_146[0] = Global_97439.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x889D01384B54BCE3(Global_97439.f_23635[iVar0 /*16*/].f_11, 1))
		{
			if (Global_97439.f_23635[iVar0 /*16*/].f_12 > Global_97439.f_23635.f_146[1])
			{
				Global_97439.f_23635.f_146[1] = Global_97439.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x889D01384B54BCE3(Global_97439.f_23635[iVar0 /*16*/].f_11, 2))
		{
			if (Global_97439.f_23635[iVar0 /*16*/].f_12 > Global_97439.f_23635.f_146[2])
			{
				Global_97439.f_23635.f_146[2] = Global_97439.f_23635[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_108(int iParam0)
{
	StringCopy(&(Global_97439.f_23635[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_97439.f_23635[iParam0 /*16*/].f_4), "", 16);
	Global_97439.f_23635[iParam0 /*16*/].f_8 = 0;
	Global_97439.f_23635[iParam0 /*16*/].f_9 = 0;
	Global_97439.f_23635[iParam0 /*16*/].f_11 = 0;
	Global_97439.f_23635[iParam0 /*16*/].f_10 = -1;
	Global_97439.f_23635[iParam0 /*16*/].f_12 = 0;
	Global_97439.f_23635[iParam0 /*16*/].f_13 = 0;
	Global_97439.f_23635[iParam0 /*16*/].f_14 = 0;
	Global_97439.f_23635[iParam0 /*16*/].f_15 = 0;
}

void func_109(int iParam0, int iParam1)
{
	Global_97439.f_23635[iParam0 /*16*/] = { Global_97439.f_23635[iParam1 /*16*/] };
	Global_97439.f_23635[iParam0 /*16*/].f_4 = { Global_97439.f_23635[iParam1 /*16*/].f_4 };
	Global_97439.f_23635[iParam0 /*16*/].f_8 = Global_97439.f_23635[iParam1 /*16*/].f_8;
	Global_97439.f_23635[iParam0 /*16*/].f_10 = Global_97439.f_23635[iParam1 /*16*/].f_10;
	Global_97439.f_23635[iParam0 /*16*/].f_9 = Global_97439.f_23635[iParam1 /*16*/].f_9;
	Global_97439.f_23635[iParam0 /*16*/].f_11 = Global_97439.f_23635[iParam1 /*16*/].f_11;
	Global_97439.f_23635[iParam0 /*16*/].f_12 = Global_97439.f_23635[iParam1 /*16*/].f_12;
	Global_97439.f_23635[iParam0 /*16*/].f_13 = Global_97439.f_23635[iParam1 /*16*/].f_13;
	Global_97439.f_23635[iParam0 /*16*/].f_14 = Global_97439.f_23635[iParam1 /*16*/].f_14;
	Global_97439.f_23635[iParam0 /*16*/].f_15 = Global_97439.f_23635[iParam1 /*16*/].f_15;
}

var func_110(var uParam0)
{
	unk_0x38DB30583B2DE025(uParam0);
	return unk_0x2DB019D515966DF9(0);
}

void func_111(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_112(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_112(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x9BA82E09A986BA4B(sParam0, ""))
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
	while (iVar0 < Global_97439.f_23635.f_145)
	{
		if (unk_0x9BA82E09A986BA4B(&(Global_97439.f_23635[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_97439.f_23635.f_145 < 9)
	{
		StringCopy(&(Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_4), sParam1, 16);
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_8 = (unk_0x09560C7DE2A384BD() + iParam3);
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_9 = iParam5;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_11 = iParam6;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_12 = uParam2;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_13 = iParam7;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_14 = iParam8;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_10 = ((unk_0x09560C7DE2A384BD() + iParam3) + iParam4);
		}
		else
		{
			Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_10 = -1;
		}
		Global_97439.f_23635.f_145++;
		func_107();
	}
}

int func_113(char* sParam0)
{
	if (unk_0x9BA82E09A986BA4B(sParam0, &Global_96084))
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
	while (iVar0 < Global_97439.f_23635.f_145)
	{
		if (unk_0x9BA82E09A986BA4B(sParam0, &(Global_97439.f_23635[iVar0 /*16*/])))
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
	if ((Global_86294 != -1 && unk_0x889D01384B54BCE3(Global_81235[Global_86294 /*34*/].f_15, 15)) && unk_0x889D01384B54BCE3(Global_86295, iParam1))
	{
		if (Global_86293 != 5 || func_119() == Global_86294)
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
	return unk_0x889D01384B54BCE3(Global_86302, iParam0);
}

int func_119()
{
	return Global_68587;
}

void func_120()
{
	unk_0xC1B1E9A034A63A62(0);
	if (Global_14394.f_1 > 3)
	{
		Global_14394.f_1 = 8;
	}
	if (Global_14382)
	{
		func_139(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
		func_139(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_139(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_139(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_139(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x29DB79DD4D939B38(&Global_2264, 17);
	iLocal_113 = 1;
	func_142(Global_14375, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (func_100(Global_1579))
	{
		if (bLocal_325)
		{
			func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(0), -1f, -1f, &(Global_2102[iLocal_327 /*16*/].f_8), 0, 0, 0, 0);
			func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_208", 0, 0, 0, 0);
			if (bLocal_326)
			{
				if (func_121(Global_1579, Global_14394))
				{
					func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_209", 0, 0, 0, 0);
				}
				if (func_78(Global_1579, Global_14394))
				{
					func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_222", 0, 0, 0, 0);
				}
			}
		}
		else
		{
			func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_208", 0, 0, 0, 0);
			if (bLocal_326)
			{
				if (func_121(Global_1579, Global_14394))
				{
					func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_209", 0, 0, 0, 0);
				}
				if (func_78(Global_1579, Global_14394))
				{
					func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_222", 0, 0, 0, 0);
				}
			}
		}
	}
	else if (bLocal_325)
	{
		func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(0), -1f, -1f, &(Global_2102[iLocal_327 /*16*/].f_8), 0, 0, 0, 0);
		if (bLocal_326)
		{
			if (func_121(Global_1579, Global_14394))
			{
				func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_209", 0, 0, 0, 0);
			}
			if (func_78(Global_1579, Global_14394))
			{
				func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_222", 0, 0, 0, 0);
			}
		}
	}
	else if (bLocal_326)
	{
		if (func_121(Global_1579, Global_14394))
		{
			func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_209", 0, 0, 0, 0);
		}
		if (func_78(Global_1579, Global_14394))
		{
			func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_222", 0, 0, 0, 0);
		}
	}
	func_142(Global_14375, "DISPLAY_VIEW", 18f, unk_0xBBDA792448DB5A89(iLocal_99), -1082130432, -1082130432, -1082130432);
	func_140(Global_14375, "SET_HEADER", &(Global_97439.f_29795[Global_1579 /*29*/].f_3), 0, 0, 0, 0);
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
	
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		unk_0x4B404C739A9AFC7A(0, 22, 1);
	}
	if (func_145(2, Global_14363, 0))
	{
		func_143();
		Global_14372 = 1;
		unk_0xB067107D878E9585(Global_14375, "GET_CURRENT_SELECTION");
		uLocal_98 = unk_0x8CB1A9AD2F4E2E1D();
		while (!unk_0x5AF0E0DBD9FA7F23(uLocal_98))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		iVar0 = unk_0x70F7DBBE883019A5(uLocal_98);
		iLocal_104 = Global_3055[iVar0];
		uLocal_106[0] = unk_0x69C910B9EE514763(&(Global_2972[iLocal_104 /*5*/]));
		if (unk_0x9BA82E09A986BA4B(uLocal_106[0], "*"))
		{
			cLocal_108 = { Global_3038[Global_14394 /*4*/] };
			iLocal_105 = unk_0x77FAE22505910E89(&cLocal_108);
		}
		else if (unk_0x77FAE22505910E89(&cLocal_108) < 14)
		{
			StringConCat(&cLocal_108, uLocal_106[0], 16);
			iLocal_105++;
		}
		unk_0xB067107D878E9585(Global_14375, "SET_HEADER");
		unk_0xEBC0B3BDAD1250BE("STRING");
		unk_0xB55390690BD2F5E5(&cLocal_108, -1);
		unk_0x9F94C7B5E8C04AB3();
		unk_0xD3DF251F2DF3B257();
	}
	if (func_145(2, 178, 0))
	{
		func_75();
		Global_14372 = 1;
		if (unk_0x77FAE22505910E89(&cLocal_108) > 0)
		{
			StringCopy(&cLocal_108, unk_0xF60B94B1F550267D(&cLocal_108, 0, (iLocal_105 - 1)), 16);
			iLocal_105 = (iLocal_105 - 1);
		}
		unk_0xB067107D878E9585(Global_14375, "SET_HEADER");
		unk_0xEBC0B3BDAD1250BE("STRING");
		unk_0xB55390690BD2F5E5(&cLocal_108, -1);
		unk_0x9F94C7B5E8C04AB3();
		unk_0xD3DF251F2DF3B257();
	}
	if (func_145(2, Global_14366, 0))
	{
		if (!func_128())
		{
			func_143();
			Global_3038[Global_14394 /*4*/] = { cLocal_108 };
			Global_1579 = 144;
			iLocal_305 = 0;
			if (Global_14394.f_1 > 3)
			{
				Global_14394.f_1 = 10;
				func_99();
				if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
				{
					if (!unk_0x21FF064386DC6A0A(unk_0xA16EC202D9D35357()))
					{
						if (unk_0x58E0437E9E98D6BB(unk_0xA16EC202D9D35357(), 0))
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
			iLocal_118 = 0;
			while (iVar1 < 147)
			{
				if (iVar1 != 146)
				{
					sVar2 = unk_0x69C910B9EE514763(&(Global_98[iVar1 /*10*/].f_4));
					if (unk_0x9BA82E09A986BA4B(sVar2, &cLocal_108))
					{
						if ((Global_97439.f_29795[iVar1 /*29*/].f_12[Global_14394] == 1 || Global_97439.f_29795[iVar1 /*29*/].f_12[Global_14394] == 2) || unk_0x9BA82E09A986BA4B(sVar2, unk_0x69C910B9EE514763(&(Global_98[130 /*10*/].f_4))))
						{
							Global_1579 = iVar1;
						}
						else
						{
							iLocal_118 = 1;
						}
					}
				}
				iVar1++;
			}
			if ((Global_1579 == 144 && iLocal_305 == 0) && iLocal_118 == 0)
			{
				unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
				unk_0x26221D1D76579618(4);
				unk_0x26221D1D76579618(0);
				unk_0x26221D1D76579618(3);
				unk_0xEBC0B3BDAD1250BE("STRING");
				unk_0xB55390690BD2F5E5(&cLocal_108, -1);
				unk_0x9F94C7B5E8C04AB3();
				func_72("CELL_300");
				func_72("CELL_211");
				func_72("CELL_195");
				unk_0xD3DF251F2DF3B257();
				func_142(Global_14375, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
				iLocal_305 = 0;
				iVar3 = 0;
				while (iVar3 < 37)
				{
					sVar4 = unk_0x69C910B9EE514763(&(Global_1583[iVar3 /*14*/]));
					if (unk_0x9BA82E09A986BA4B(sVar4, &cLocal_108))
					{
						iLocal_305 = 1;
						cLocal_306 = { Global_1583[iVar3 /*14*/].f_4 };
						Local_310 = { Global_1583[iVar3 /*14*/].f_8 };
					}
					iVar3++;
				}
				if (iLocal_305 == 0)
				{
					iLocal_112 = unk_0x77FAE22505910E89(&cLocal_108);
					if (iLocal_112 > 6)
					{
						StringCopy(&(uLocal_316[0]), unk_0xF60B94B1F550267D(&cLocal_108, 0, 1), 4);
						StringCopy(&(uLocal_316[1]), unk_0xF60B94B1F550267D(&cLocal_108, 1, 2), 4);
						StringCopy(&(uLocal_316[2]), unk_0xF60B94B1F550267D(&cLocal_108, 2, 3), 4);
						StringCopy(&(uLocal_316[3]), unk_0xF60B94B1F550267D(&cLocal_108, 3, 4), 4);
						StringCopy(&(uLocal_316[4]), unk_0xF60B94B1F550267D(&cLocal_108, 4, 5), 4);
						StringCopy(&(uLocal_316[5]), unk_0xF60B94B1F550267D(&cLocal_108, 5, 6), 4);
						if (((unk_0x9BA82E09A986BA4B(&(uLocal_316[0]), "1") && unk_0x9BA82E09A986BA4B(&(uLocal_316[1]), "9")) && unk_0x9BA82E09A986BA4B(&(uLocal_316[2]), "9")) && unk_0x9BA82E09A986BA4B(&(uLocal_316[3]), "9"))
						{
							iVar5 = func_127(&(uLocal_316[4]));
							iVar6 = func_127(&(uLocal_316[5]));
							func_126(iVar5, iVar6);
							iLocal_305 = 1;
						}
						if (iLocal_305 == 0)
						{
							if (iLocal_112 == 10 || iLocal_112 == 7)
							{
								if (iLocal_112 == 10)
								{
									StringCopy(&(uLocal_316[0]), unk_0xF60B94B1F550267D(&cLocal_108, 3, 4), 4);
									StringCopy(&(uLocal_316[1]), unk_0xF60B94B1F550267D(&cLocal_108, 4, 5), 4);
									StringCopy(&(uLocal_316[2]), unk_0xF60B94B1F550267D(&cLocal_108, 5, 6), 4);
									StringCopy(&(uLocal_316[3]), unk_0xF60B94B1F550267D(&cLocal_108, 6, 7), 4);
									StringCopy(&(uLocal_316[4]), unk_0xF60B94B1F550267D(&cLocal_108, 7, 8), 4);
									StringCopy(&(uLocal_316[5]), unk_0xF60B94B1F550267D(&cLocal_108, 8, 9), 4);
									StringCopy(&(uLocal_316[6]), unk_0xF60B94B1F550267D(&cLocal_108, 9, 10), 4);
								}
								else
								{
									StringCopy(&(uLocal_316[0]), unk_0xF60B94B1F550267D(&cLocal_108, 0, 1), 4);
									StringCopy(&(uLocal_316[1]), unk_0xF60B94B1F550267D(&cLocal_108, 1, 2), 4);
									StringCopy(&(uLocal_316[2]), unk_0xF60B94B1F550267D(&cLocal_108, 2, 3), 4);
									StringCopy(&(uLocal_316[3]), unk_0xF60B94B1F550267D(&cLocal_108, 3, 4), 4);
									StringCopy(&(uLocal_316[4]), unk_0xF60B94B1F550267D(&cLocal_108, 4, 5), 4);
									StringCopy(&(uLocal_316[5]), unk_0xF60B94B1F550267D(&cLocal_108, 5, 6), 4);
									StringCopy(&(uLocal_316[6]), unk_0xF60B94B1F550267D(&cLocal_108, 6, 7), 4);
								}
								if ((((unk_0x9BA82E09A986BA4B(&(uLocal_316[0]), "5") && unk_0x9BA82E09A986BA4B(&(uLocal_316[1]), "5")) && unk_0x9BA82E09A986BA4B(&(uLocal_316[2]), "5")) && unk_0x9BA82E09A986BA4B(&(uLocal_316[3]), "0")) && unk_0x9BA82E09A986BA4B(&(uLocal_316[4]), "1"))
								{
									iVar7 = func_127(&(uLocal_316[5]));
									iVar8 = func_127(&(uLocal_316[6]));
									func_126(iVar7, iVar8);
									iLocal_305 = 1;
								}
							}
						}
					}
				}
			}
			else
			{
				if (Global_97439.f_29795[Global_1579 /*29*/].f_12[Global_14394] == 2 || Global_1579 == 130)
				{
					Global_97439.f_29795[Global_1579 /*29*/].f_24[Global_14394] = 1;
					if (Global_1579 == 130)
					{
						if (!Global_97439.f_29795[130 /*29*/].f_12[0] == 1)
						{
							func_124(130, 4, 1);
							func_124(130, 3, 0);
						}
						if (Global_68325)
						{
							if (!func_123(130, 3))
							{
								func_124(130, 3, 1);
							}
						}
					}
				}
				if (Global_97439.f_29795[Global_1579 /*29*/].f_24[Global_14394] == 0)
				{
					func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_98[Global_1579 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_97439.f_29795[Global_1579 /*29*/].f_3), &(Global_97439.f_29795[Global_1579 /*29*/].f_7), "CELL_211", &(Global_97439.f_29795[Global_1579 /*29*/].f_3), 0);
				}
			}
			func_91();
		}
	}
}

int func_123(int iParam0, int iParam1)
{
	if (Global_97439.f_29795[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

void func_124(int iParam0, int iParam1, bool bParam2)
{
	Global_2950 = iParam0;
	if (Global_98[iParam0 /*10*/].f_8 != 138)
	{
		func_16();
		if (iParam1 == 4)
		{
			Global_97439.f_29795[iParam0 /*29*/].f_12[0] = 1;
			Global_97439.f_29795[iParam0 /*29*/].f_12[1] = 1;
			Global_97439.f_29795[iParam0 /*29*/].f_12[2] = 1;
			Global_97439.f_29795[iParam0 /*29*/].f_24[0] = 1;
			Global_97439.f_29795[iParam0 /*29*/].f_24[1] = 1;
			Global_97439.f_29795[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_97439.f_29795[iParam0 /*29*/].f_12[iParam1] == 1 && Global_97439.f_29795[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_97439.f_29795[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_97439.f_29795[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_68325)
			{
				if (iParam1 != 4)
				{
					if (Global_14394 != iParam1)
					{
						Global_2923[iParam1 /*4*/] = { Global_97439.f_29795[iParam0 /*29*/].f_3 };
						Global_2940[iParam1] = 1;
						Global_2945[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14394)
					{
					}
					else
					{
						Global_2874[1 /*6*/] = { Global_97439.f_29795[iParam0 /*29*/].f_3 };
						Global_2874[1 /*6*/].f_5 = iParam1;
						func_125();
					}
				}
				else
				{
					Global_2874[1 /*6*/] = { Global_97439.f_29795[iParam0 /*29*/].f_3 };
					Global_2874[1 /*6*/].f_5 = iParam1;
					func_125();
				}
			}
			else
			{
				Global_2874[1 /*6*/] = { Global_97439.f_29795[iParam0 /*29*/].f_3 };
				Global_2874[1 /*6*/].f_5 = iParam1;
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
	
	StringCopy(&cVar0, unk_0x69C910B9EE514763(&(Global_97439.f_29795[Global_2950 /*29*/].f_7)), 64);
	if (Global_2969 == 0)
	{
		unk_0xA6CE1BB0BF7AE715("");
		StringCopy(&cVar16, unk_0x69C910B9EE514763(&(Global_2874[1 /*6*/])), 64);
		sVar32 = unk_0x69C910B9EE514763("CELL_253");
		unk_0xB2BB3F163B7B2B4C(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0xA6CE1BB0BF7AE715("CELL_255");
		unk_0x4498E0CBD76B2D72(&(Global_2874[1 /*6*/]));
		unk_0xB2BB3F163B7B2B4C(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0x29DB79DD4D939B38(&Global_2264, 0);
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
			StringCopy(&cLocal_306, "ANS_RAN1", 16);
			StringCopy(&Local_310, "ANS_M_USA1", 24);
			break;
		
		case 8:
			StringCopy(&cLocal_306, "ANS_RAN2", 16);
			StringCopy(&Local_310, "ANS_F_USA1", 24);
			break;
		
		case 9:
			StringCopy(&cLocal_306, "ANS_RAN3", 16);
			StringCopy(&Local_310, "ANS_M_ENG1", 24);
			break;
		
		case 10:
			StringCopy(&cLocal_306, "ANS_RAN4", 16);
			StringCopy(&Local_310, "ANS_M_USA2", 24);
			break;
		
		case 11:
			StringCopy(&cLocal_306, "ANS_RAN5", 16);
			StringCopy(&Local_310, "ANS_M_ASIAN", 24);
			break;
		
		case 12:
			StringCopy(&cLocal_306, "ANS_RAN6", 16);
			StringCopy(&Local_310, "ANS_F_USA2", 24);
			break;
		
		case 13:
			StringCopy(&cLocal_306, "ANS_RAN7", 16);
			StringCopy(&Local_310, "ANSWER_FX", 24);
			break;
		
		case 14:
			StringCopy(&cLocal_306, "ANS_RAN8", 16);
			StringCopy(&Local_310, "ANSWER_FX", 24);
			break;
		
		case 15:
			StringCopy(&cLocal_306, "ANS_RAN9", 16);
			StringCopy(&Local_310, "ANSWER_FX", 24);
			break;
		
		case 16:
			StringCopy(&cLocal_306, "ANS_RAN10", 16);
			StringCopy(&Local_310, "ANSWER_FX", 24);
			break;
		
		case 17:
			StringCopy(&cLocal_306, "ANS_RAN1", 16);
			StringCopy(&Local_310, "ANS_M_USA1", 24);
			break;
		
		case 18:
			StringCopy(&cLocal_306, "ANS_RAN2", 16);
			StringCopy(&Local_310, "ANS_F_USA1", 24);
			break;
		
		case 19:
			StringCopy(&cLocal_306, "ANS_RAN3", 16);
			StringCopy(&Local_310, "ANS_M_ENG1", 24);
			break;
		
		case 20:
			StringCopy(&cLocal_306, "ANS_RAN4", 16);
			StringCopy(&Local_310, "ANS_M_USA2", 24);
			break;
		
		case 21:
			StringCopy(&cLocal_306, "ANS_RAN5", 16);
			StringCopy(&Local_310, "ANS_M_ASIAN", 24);
			break;
		
		case 22:
			StringCopy(&cLocal_306, "ANS_RAN6", 16);
			StringCopy(&Local_310, "ANS_F_USA2", 24);
			break;
		
		case 23:
			StringCopy(&cLocal_306, "ANS_RAN7", 16);
			StringCopy(&Local_310, "ANSWER_FX", 24);
			break;
		
		case 24:
			StringCopy(&cLocal_306, "ANS_RAN8", 16);
			StringCopy(&Local_310, "ANSWER_FX", 24);
			break;
		
		case 25:
			StringCopy(&cLocal_306, "ANS_RAN9", 16);
			StringCopy(&Local_310, "ANSWER_FX", 24);
			break;
		
		default:
			StringCopy(&cLocal_306, "ANS_RAN8", 16);
			StringCopy(&Local_310, "ANSWER_FX", 24);
			break;
	}
}

int func_127(char* sParam0)
{
	if (unk_0x9BA82E09A986BA4B(sParam0, "0"))
	{
		return 0;
	}
	if (unk_0x9BA82E09A986BA4B(sParam0, "1"))
	{
		return 1;
	}
	if (unk_0x9BA82E09A986BA4B(sParam0, "2"))
	{
		return 2;
	}
	if (unk_0x9BA82E09A986BA4B(sParam0, "3"))
	{
		return 3;
	}
	if (unk_0x9BA82E09A986BA4B(sParam0, "4"))
	{
		return 4;
	}
	if (unk_0x9BA82E09A986BA4B(sParam0, "5"))
	{
		return 5;
	}
	if (unk_0x9BA82E09A986BA4B(sParam0, "6"))
	{
		return 6;
	}
	if (unk_0x9BA82E09A986BA4B(sParam0, "7"))
	{
		return 7;
	}
	if (unk_0x9BA82E09A986BA4B(sParam0, "8"))
	{
		return 8;
	}
	if (unk_0x9BA82E09A986BA4B(sParam0, "9"))
	{
		return 9;
	}
	if (unk_0x9BA82E09A986BA4B(sParam0, "A"))
	{
		return 10;
	}
	if (unk_0x9BA82E09A986BA4B(sParam0, "B"))
	{
		return 11;
	}
	if (unk_0x9BA82E09A986BA4B(sParam0, "C"))
	{
		return 12;
	}
	if (unk_0x9BA82E09A986BA4B(sParam0, "D"))
	{
		return 13;
	}
	if (unk_0x9BA82E09A986BA4B(sParam0, "E"))
	{
		return 14;
	}
	if (unk_0x9BA82E09A986BA4B(sParam0, "F"))
	{
		return 15;
	}
	if (unk_0x9BA82E09A986BA4B(sParam0, "G"))
	{
		return 16;
	}
	if (unk_0x9BA82E09A986BA4B(sParam0, "H"))
	{
		return 17;
	}
	if (unk_0x9BA82E09A986BA4B(sParam0, "I"))
	{
		return 18;
	}
	if (unk_0x9BA82E09A986BA4B(sParam0, "J"))
	{
		return 19;
	}
	if (unk_0x9BA82E09A986BA4B(sParam0, "K"))
	{
		return 20;
	}
	if (unk_0x9BA82E09A986BA4B(sParam0, "L"))
	{
		return 21;
	}
	if (unk_0x9BA82E09A986BA4B(sParam0, "M"))
	{
		return 22;
	}
	if (unk_0x9BA82E09A986BA4B(sParam0, "N"))
	{
		return 23;
	}
	if (unk_0x9BA82E09A986BA4B(sParam0, "O"))
	{
		return 24;
	}
	if (unk_0x9BA82E09A986BA4B(sParam0, "P"))
	{
		return 25;
	}
	if (unk_0x9BA82E09A986BA4B(sParam0, "Q"))
	{
		return 26;
	}
	if (unk_0x9BA82E09A986BA4B(sParam0, "R"))
	{
		return 27;
	}
	if (unk_0x9BA82E09A986BA4B(sParam0, "S"))
	{
		return 28;
	}
	if (unk_0x9BA82E09A986BA4B(sParam0, "T"))
	{
		return 29;
	}
	if (unk_0x9BA82E09A986BA4B(sParam0, "U"))
	{
		return 30;
	}
	if (unk_0x9BA82E09A986BA4B(sParam0, "V"))
	{
		return 31;
	}
	if (unk_0x9BA82E09A986BA4B(sParam0, "W"))
	{
		return 32;
	}
	if (unk_0x9BA82E09A986BA4B(sParam0, "X"))
	{
		return 33;
	}
	if (unk_0x9BA82E09A986BA4B(sParam0, "Y"))
	{
		return 34;
	}
	if (unk_0x9BA82E09A986BA4B(sParam0, "Z"))
	{
		return 35;
	}
	if (unk_0x9BA82E09A986BA4B(sParam0, "z"))
	{
		return -1;
	}
	return -1;
}

int func_128()
{
	if (Global_68325)
	{
		return 0;
	}
	if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
	{
		if (unk_0x6CA3764368FA4573(unk_0x1788E93557766241()))
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
	if (Global_14373)
	{
		if (unk_0x83666F9FB8FEBD4B() > 50)
		{
			Global_14373 = 0;
		}
	}
	if (unk_0x3E512F3AB14225D6(2))
	{
		if (unk_0x1453F50088A91E4E(2, 180))
		{
			switch (Global_14374)
			{
				case 0:
					func_137();
					Global_14374 = 1;
					break;
				
				case 1:
					func_137();
					Global_14374 = 2;
					break;
				
				case 2:
					func_137();
					func_135();
					Global_14374 = 3;
					break;
				
				case 3:
					func_137();
					Global_14374 = 4;
					break;
				
				case 4:
					func_137();
					Global_14374 = 5;
					break;
				
				case 5:
					func_137();
					func_135();
					Global_14374 = 6;
					break;
				
				case 6:
					func_137();
					Global_14374 = 7;
					break;
				
				case 7:
					func_137();
					Global_14374 = 8;
					break;
				
				case 8:
					func_137();
					func_135();
					Global_14374 = 9;
					break;
				
				case 9:
					func_137();
					Global_14374 = 10;
					break;
				
				case 10:
					func_137();
					Global_14374 = 11;
					break;
				
				case 11:
					func_137();
					func_135();
					Global_14374 = 0;
					break;
				}
		}
		if (unk_0x1453F50088A91E4E(2, 181))
		{
			switch (Global_14374)
			{
				case 0:
					func_133();
					func_130();
					Global_14374 = 11;
					break;
				
				case 1:
					func_133();
					Global_14374 = 0;
					break;
				
				case 2:
					func_133();
					Global_14374 = 1;
					break;
				
				case 3:
					func_133();
					func_130();
					Global_14374 = 2;
					break;
				
				case 4:
					func_133();
					Global_14374 = 3;
					break;
				
				case 5:
					func_133();
					Global_14374 = 4;
					break;
				
				case 6:
					func_133();
					func_130();
					Global_14374 = 5;
					break;
				
				case 7:
					func_133();
					Global_14374 = 6;
					break;
				
				case 8:
					func_133();
					Global_14374 = 7;
					break;
				
				case 9:
					func_133();
					func_130();
					Global_14374 = 8;
					break;
				
				case 10:
					func_133();
					Global_14374 = 9;
					break;
				
				case 11:
					func_133();
					Global_14374 = 10;
					break;
				}
			}
	}
	if (Global_14373 == 0)
	{
		if (func_145(2, Global_14369, 0))
		{
			func_137();
			Global_14373 = 1;
			unk_0xC1B1E9A034A63A62(0);
			switch (Global_14394.f_1)
			{
				case 6:
					if (Global_14374 < (34 - 1))
					{
						Global_14374++;
					}
					break;
				
				case 5:
					if (Global_14374 < 3)
					{
						Global_14374++;
					}
					break;
				}
		}
		if (func_145(2, Global_14368, 0))
		{
			func_133();
			Global_14373 = 1;
			unk_0xC1B1E9A034A63A62(0);
			if (Global_14374 > 0)
			{
				Global_14374 = (Global_14374 - 1);
			}
		}
		if (func_145(2, Global_14370, 0))
		{
			func_130();
			Global_14373 = 1;
			unk_0xC1B1E9A034A63A62(0);
			if (Global_14374 > 3)
			{
				Global_14374 = (Global_14374 - 4);
			}
		}
		if (func_145(2, Global_14371, 0))
		{
			func_135();
			Global_14373 = 1;
			unk_0xC1B1E9A034A63A62(0);
			if (Global_14374 < 8)
			{
				Global_14374 += 4;
			}
		}
	}
}

void func_130()
{
	func_142(Global_14375, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xC2E1777941B4536E(-1, "Menu_Navigate", &Global_14383, 1);
	func_131();
}

void func_131()
{
	if (func_132())
	{
		if (Global_14557 == 0)
		{
			unk_0xF3258052227E3274(1);
		}
		else
		{
			unk_0xF3258052227E3274(2);
		}
	}
}

int func_132()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_68325)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0x862704CFD32408F9();
	iVar1 = unk_0x95AD511976EEFC6B(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_2542828 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_133()
{
	func_142(Global_14375, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(4), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xC2E1777941B4536E(-1, "Menu_Navigate", &Global_14383, 1);
	func_134();
}

void func_134()
{
	if (func_132())
	{
		if (Global_14557 == 0)
		{
			unk_0xF3258052227E3274(3);
		}
		else
		{
			unk_0xF3258052227E3274(4);
		}
	}
}

void func_135()
{
	func_142(Global_14375, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xC2E1777941B4536E(-1, "Menu_Navigate", &Global_14383, 1);
	func_136();
}

void func_136()
{
	if (func_132())
	{
		if (Global_14557 == 0)
		{
			unk_0xF3258052227E3274(2);
		}
		else
		{
			unk_0xF3258052227E3274(1);
		}
	}
}

void func_137()
{
	func_142(Global_14375, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(2), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xC2E1777941B4536E(-1, "Menu_Navigate", &Global_14383, 1);
	func_138();
}

void func_138()
{
	if (func_132())
	{
		if (Global_14557 == 0)
		{
			unk_0xF3258052227E3274(4);
		}
		else
		{
			unk_0xF3258052227E3274(3);
		}
	}
}

void func_139(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, int iParam10, int iParam11)
{
	unk_0xB067107D878E9585(uParam0, sParam1);
	unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x06771AF7795B3ECF(sParam7))
	{
		func_72(sParam7);
	}
	if (!unk_0x06771AF7795B3ECF(sParam8))
	{
		func_72(sParam8);
	}
	if (!unk_0x06771AF7795B3ECF(sParam9))
	{
		func_72(sParam9);
	}
	if (!unk_0x06771AF7795B3ECF(iParam10))
	{
		func_72(iParam10);
	}
	if (!unk_0x06771AF7795B3ECF(iParam11))
	{
		func_72(iParam11);
	}
	unk_0xD3DF251F2DF3B257();
}

void func_140(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0xB067107D878E9585(uParam0, sParam1);
	func_72(sParam2);
	if (!unk_0x06771AF7795B3ECF(sParam3))
	{
		func_72(sParam3);
	}
	if (!unk_0x06771AF7795B3ECF(sParam4))
	{
		func_72(sParam4);
	}
	if (!unk_0x06771AF7795B3ECF(sParam5))
	{
		func_72(sParam5);
	}
	if (!unk_0x06771AF7795B3ECF(sParam6))
	{
		func_72(sParam6);
	}
	unk_0xD3DF251F2DF3B257();
}

void func_141()
{
	int iVar0[12];
	int iVar13;
	int iVar14;
	
	StringCopy(&(Global_2972[0 /*5*/]), "CELL_900", 16);
	Global_2972[0 /*5*/].f_4 = 10;
	StringCopy(&(Global_2972[1 /*5*/]), "CELL_901", 16);
	Global_2972[1 /*5*/].f_4 = 0;
	StringCopy(&(Global_2972[2 /*5*/]), "CELL_902", 16);
	Global_2972[2 /*5*/].f_4 = 1;
	StringCopy(&(Global_2972[3 /*5*/]), "CELL_903", 16);
	Global_2972[3 /*5*/].f_4 = 2;
	StringCopy(&(Global_2972[4 /*5*/]), "CELL_904", 16);
	Global_2972[4 /*5*/].f_4 = 3;
	StringCopy(&(Global_2972[5 /*5*/]), "CELL_905", 16);
	Global_2972[5 /*5*/].f_4 = 4;
	StringCopy(&(Global_2972[6 /*5*/]), "CELL_906", 16);
	Global_2972[6 /*5*/].f_4 = 5;
	StringCopy(&(Global_2972[7 /*5*/]), "CELL_907", 16);
	Global_2972[7 /*5*/].f_4 = 6;
	StringCopy(&(Global_2972[8 /*5*/]), "CELL_908", 16);
	Global_2972[8 /*5*/].f_4 = 7;
	StringCopy(&(Global_2972[9 /*5*/]), "CELL_909", 16);
	Global_2972[9 /*5*/].f_4 = 8;
	StringCopy(&(Global_2972[10 /*5*/]), "CELL_910", 16);
	Global_2972[10 /*5*/].f_4 = 9;
	StringCopy(&(Global_2972[11 /*5*/]), "CELL_911", 16);
	Global_2972[11 /*5*/].f_4 = 11;
	iVar13 = 0;
	while (iVar13 < 12)
	{
		iVar0[iVar13] = 0;
		iVar13++;
	}
	if (Global_3055[0] == 0)
	{
	}
	iVar13 = 0;
	while (iVar13 < 12)
	{
		iVar14 = 0;
		while (iVar14 < 12)
		{
			if (iVar13 == Global_2972[iVar14 /*5*/].f_4)
			{
				if (iVar0[iVar13] == 0)
				{
					Global_3055[iVar13] = iVar14;
					unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
					unk_0x26221D1D76579618(11);
					unk_0x26221D1D76579618(iVar13);
					func_72(&(Global_2972[iVar14 /*5*/]));
					unk_0xD3DF251F2DF3B257();
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
	unk_0xB067107D878E9585(uParam0, sParam1);
	unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xD3DF251F2DF3B257();
}

void func_143()
{
	if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
	{
		unk_0xC2E1777941B4536E(-1, "Menu_Accept", &Global_14383, 1);
		func_144();
	}
}

void func_144()
{
	if (func_132())
	{
		unk_0xF3258052227E3274(5);
	}
}

int func_145(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x1453F50088A91E4E(iParam0, iParam1) || (iParam2 == 1 && unk_0x63D2949B11643BBA(iParam0, iParam1)))
	{
		if (unk_0xF6BAF9F0C2863FFE())
		{
			if (unk_0xCB70128095B6956E() == 0 || (unk_0x6E6ED37B068198D0() && unk_0x3E512F3AB14225D6(2)))
			{
				return 0;
			}
		}
		if (unk_0x2B0FFD431FD5A9FA() || unk_0x34CC8D9406FED489())
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
	if (func_145(2, Global_14362, 0))
	{
		iLocal_132 = 0;
		unk_0xD0E2BFCE93AE3ABD(&Global_2265, 0);
		func_75();
		Global_14372 = 1;
		if (Global_68325)
		{
			func_254();
		}
		else
		{
			func_244();
		}
		unk_0x4EDE34FBADD967A6(0);
		if (Global_14394.f_1 > 3)
		{
			Global_14394.f_1 = 7;
		}
		StringCopy(&cLocal_108, "", 16);
	}
}

void func_147()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (Global_14372 == 0)
	{
		if (func_145(2, Global_14363, 0))
		{
			if (!func_128())
			{
				Global_16807 = 0;
				Global_16806 = 0;
				Global_16808 = 0;
				iLocal_305 = 0;
				func_143();
				Global_14372 = 1;
				if (iLocal_93 > 0)
				{
					unk_0xB067107D878E9585(Global_14375, "GET_CURRENT_SELECTION");
					uLocal_98 = unk_0x8CB1A9AD2F4E2E1D();
					while (!unk_0x5AF0E0DBD9FA7F23(uLocal_98))
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					iLocal_101 = unk_0x70F7DBBE883019A5(uLocal_98);
					bVar0 = false;
					if (unk_0x54CE0989F263D8A3())
					{
						if (Global_68325)
						{
							if (iLocal_101 < iLocal_96)
							{
								bVar0 = true;
							}
						}
						else if (iLocal_101 == iLocal_95 || iLocal_101 > iLocal_95)
						{
							bVar0 = true;
						}
					}
					if (unk_0x889D01384B54BCE3(Global_2265, 0))
					{
						bVar0 = false;
					}
					if (bVar0)
					{
						Local_330.f_2936 = (iLocal_101 - iLocal_95);
						func_151();
					}
					else
					{
						if (iLocal_101 < 0)
						{
							iLocal_101 = 0;
						}
						Global_1579 = Global_14400[iLocal_101];
						if (Global_14549 != 145)
						{
							if (Global_1579 != Global_14549)
							{
								iLocal_89 = 1;
							}
							else
							{
								iLocal_89 = 0;
							}
						}
						else
						{
							iLocal_89 = 0;
						}
						if (iLocal_89 == 0)
						{
							if (unk_0x889D01384B54BCE3(Global_2264, 9))
							{
								if (!unk_0x889D01384B54BCE3(Global_2264, 29))
								{
									Global_97439.f_29795[Global_1579 /*29*/].f_18 = 1;
									if (Global_97439.f_29795[Global_1579 /*29*/].f_24[Global_14394] == 0)
									{
										func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(1), -1f, -1f, "CELL_288", "CELL_300", &(Global_98[Global_1579 /*10*/].f_4), "CELL_195", 0);
									}
									else
									{
										func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(1), -1f, -1f, "CELL_288", &(Global_97439.f_29795[Global_1579 /*29*/].f_7), &(Global_97439.f_29795[Global_1579 /*29*/].f_3), &(Global_97439.f_29795[Global_1579 /*29*/].f_3), 0);
									}
									func_139(Global_14375, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
									func_142(Global_14375, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
									unk_0xD0E2BFCE93AE3ABD(&Global_2264, 29);
								}
							}
							else
							{
								bLocal_325 = false;
								bLocal_326 = false;
								if (Global_68325)
								{
									iVar1 = 0;
									while (iVar1 < 4)
									{
										if (unk_0x9BA82E09A986BA4B(&(Global_97439.f_29795[Global_1579 /*29*/].f_3), &(Global_2167[iVar1 /*24*/])))
										{
											if (!unk_0x9BA82E09A986BA4B(&(Global_2167[iVar1 /*24*/].f_8), "CELL_SFUN_NULL"))
											{
												bLocal_325 = true;
												iLocal_327 = iVar1;
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
										if (unk_0x9BA82E09A986BA4B(&(Global_97439.f_29795[Global_1579 /*29*/].f_3), &(Global_2102[iVar2 /*16*/])))
										{
											if (!unk_0x9BA82E09A986BA4B(&(Global_2102[iVar2 /*16*/].f_8), "CELL_SFUN_NULL"))
											{
												bLocal_325 = true;
												iLocal_327 = iVar2;
												if (iLocal_327 == iLocal_327)
												{
												}
											}
										}
										iVar2++;
									}
								}
								if (func_149(Global_1579) && unk_0x889D01384B54BCE3(Global_2265, 0) == 0)
								{
									if (func_121(Global_1579, Global_14394) == 0 && func_78(Global_1579, Global_14394) == 0)
									{
										bLocal_326 = false;
									}
									else
									{
										bLocal_326 = true;
									}
								}
								if (unk_0x889D01384B54BCE3(Global_2265, 0))
								{
									func_148();
									iLocal_132 = 1;
								}
								else if (bLocal_326 == 0 && bLocal_325 == 0)
								{
									Global_16807 = 0;
									Global_16806 = 0;
									Global_16808 = 0;
									if (unk_0x889D01384B54BCE3(Global_2265, 19) && Global_1579 == 129)
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
	iLocal_130 = unk_0x09560C7DE2A384BD();
	func_142(Global_14375, "SET_DATA_SLOT_EMPTY", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4EDE34FBADD967A6(0);
	switch (Global_1579)
	{
		case 2:
			func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), 0f, -1f, -1f, "CELL_7001", &(Global_97439.f_29795[Global_1579 /*29*/].f_3), &(Global_97439.f_29795[Global_1579 /*29*/].f_7), 0, 0);
			break;
		
		case 0:
			func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), 0f, -1f, -1f, "CELL_7002", &(Global_97439.f_29795[Global_1579 /*29*/].f_3), &(Global_97439.f_29795[Global_1579 /*29*/].f_7), 0, 0);
			break;
		
		case 12:
			func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), 0f, -1f, -1f, "CELL_7003", &(Global_97439.f_29795[Global_1579 /*29*/].f_3), "CELL_E_311", 0, 0);
			break;
	}
	if (Global_14382)
	{
		func_139(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
	}
	else
	{
		func_139(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	if (Global_14382)
	{
		func_139(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_139(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_139(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	func_142(Global_14375, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_140(Global_14375, "SET_HEADER", "CELL_249", 0, 0, 0, 0);
}

int func_149(int iParam0)
{
	switch (Global_14394)
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
	
	if (Global_14394.f_1 > 3)
	{
		Global_14394.f_1 = 8;
	}
	if (Global_14382)
	{
		func_139(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
		func_139(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_139(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_139(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_139(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x29DB79DD4D939B38(&Global_2264, 17);
	func_142(Global_14375, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_208", 0, 0, 0, 0);
	func_155(&Local_330);
	if (Global_14394.f_1 > 3)
	{
		func_142(Global_14375, "DISPLAY_VIEW", 18f, unk_0xBBDA792448DB5A89(iLocal_99), -1082130432, -1082130432, -1082130432);
		iLocal_99 = 0;
		if (func_154(&Local_330))
		{
			uVar0 = unk_0xF3E5891C26514A74(Local_330[Local_330.f_2936]);
		}
		else
		{
			uVar0 = func_152(&(Local_330.f_34[func_153(Local_330.f_2936, &Local_330) /*29*/].f_13));
		}
		unk_0xB067107D878E9585(Global_14375, "SET_HEADER");
		unk_0xEBC0B3BDAD1250BE("CELL_CONDFNH");
		unk_0x94E086BCAE8856C1(uVar0);
		unk_0x9F94C7B5E8C04AB3();
		unk_0xD3DF251F2DF3B257();
		Local_330.f_2999 = 0;
		iLocal_115 = 1;
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
			sVar37 = unk_0xF3E5891C26514A74((*uParam0)[uParam0->f_2936]);
		}
		else
		{
			uParam0->f_2963 = { uParam0->f_34[func_153(uParam0->f_2936, uParam0) /*29*/] };
			sVar37 = func_152(&(uParam0->f_34[func_153(uParam0->f_2936, uParam0) /*29*/].f_13));
		}
		StringCopy(&(uParam0->f_2983), sVar37, 64);
		bVar38 = false;
		if (unk_0x5CEC190EDF50D872())
		{
			if (!Global_1573710)
			{
				if (func_162(0))
				{
					bVar38 = true;
				}
			}
		}
		if (func_154(uParam0))
		{
			if (((unk_0x6BF4CF890A66A845((*uParam0)[uParam0->f_2936]) || unk_0x6BFE4C02E77951F8((*uParam0)[uParam0->f_2936])) || unk_0x218869F13A82136F((*uParam0)[uParam0->f_2936])) || unk_0xDCD1002C551568C7((*uParam0)[uParam0->f_2936]))
			{
				bVar38 = false;
			}
		}
		if (!unk_0x018F7277C3350C31())
		{
			bVar38 = false;
		}
		if (unk_0xB4807472A6B03B52(0))
		{
			bVar38 = false;
		}
		if (unk_0xE545250CC148D65F(&(uParam0->f_2963)) || unk_0xEF5803CA81136061(&(uParam0->f_2963)))
		{
			bVar38 = false;
		}
		if (unk_0x9FD8641C0647F454(&(uParam0->f_2963)) || unk_0xA9490A1F5EB3DEA6(&(uParam0->f_2963)))
		{
			bVar38 = false;
		}
		if (unk_0xE978CCD2FB13A088())
		{
			if (unk_0x9F979F481F18EB48())
			{
				if (unk_0xCDB9D8CABAF0F60D())
				{
					bVar38 = false;
				}
			}
			else if (unk_0x660675ADB09E441F())
			{
				bVar38 = false;
			}
		}
		if (bVar38)
		{
			if (Global_68325)
			{
				unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT_EMPTY");
				unk_0x26221D1D76579618(iVar0);
				unk_0xD3DF251F2DF3B257();
				unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
				unk_0x26221D1D76579618(18);
				unk_0x26221D1D76579618(iVar0);
				unk_0x26221D1D76579618(0);
				if (!Global_2451624.f_1 || Global_2451624.f_38)
				{
					unk_0xEBC0B3BDAD1250BE("CELL_MP_1000");
					unk_0x9F94C7B5E8C04AB3();
				}
				else
				{
					unk_0xEBC0B3BDAD1250BE("CELL_MP_1000b");
					unk_0x9F94C7B5E8C04AB3();
				}
				unk_0xD3DF251F2DF3B257();
				uParam0->f_2937[iVar0] = 1;
				iVar0++;
			}
			else if (Global_34915 == 15)
			{
				unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT_EMPTY");
				unk_0x26221D1D76579618(iVar0);
				unk_0xD3DF251F2DF3B257();
				unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
				unk_0x26221D1D76579618(18);
				unk_0x26221D1D76579618(iVar0);
				unk_0x26221D1D76579618(0);
				if (!Global_2451624.f_1 || Global_2451624.f_38)
				{
					unk_0xEBC0B3BDAD1250BE("CELL_MP_1000");
					unk_0x9F94C7B5E8C04AB3();
				}
				else
				{
					unk_0xEBC0B3BDAD1250BE("CELL_MP_1000b");
					unk_0x9F94C7B5E8C04AB3();
				}
				unk_0xD3DF251F2DF3B257();
				uParam0->f_2937[iVar0] = 1;
				iVar0++;
			}
		}
		bVar38 = false;
		if (func_154(uParam0))
		{
			if (((((func_162(0) && func_162((*uParam0)[uParam0->f_2936])) && !unk_0x6BF4CF890A66A845((*uParam0)[uParam0->f_2936])) && !unk_0x6BFE4C02E77951F8((*uParam0)[uParam0->f_2936])) && !unk_0x218869F13A82136F((*uParam0)[uParam0->f_2936])) && !unk_0xDCD1002C551568C7((*uParam0)[uParam0->f_2936]))
			{
				bVar38 = true;
			}
		}
		if (bVar38)
		{
			unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT_EMPTY");
			unk_0x26221D1D76579618(iVar0);
			unk_0xD3DF251F2DF3B257();
			unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
			unk_0x26221D1D76579618(18);
			unk_0x26221D1D76579618(iVar0);
			unk_0x26221D1D76579618(0);
			unk_0xEBC0B3BDAD1250BE("CELL_MP_1009");
			unk_0x9F94C7B5E8C04AB3();
			unk_0xD3DF251F2DF3B257();
			uParam0->f_2937[iVar0] = 2;
			iVar0++;
		}
		bVar38 = false;
		if (func_154(uParam0))
		{
			if (unk_0x21B9BAD22665B0F1() < unk_0xC29F7DAEA0CFE420())
			{
				if (!unk_0x765DD998E5AD03DC(&(uParam0->f_2963)))
				{
					bVar38 = true;
				}
			}
		}
		if (bVar38)
		{
			unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
			unk_0x26221D1D76579618(18);
			unk_0x26221D1D76579618(iVar0);
			unk_0x26221D1D76579618(0);
			unk_0xEBC0B3BDAD1250BE("PIM_DFRQ2");
			unk_0x9F94C7B5E8C04AB3();
			unk_0xD3DF251F2DF3B257();
			uParam0->f_2937[iVar0] = 3;
			iVar0++;
		}
		bVar38 = false;
		bVar38 = true;
		if (bVar38)
		{
			unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
			unk_0x26221D1D76579618(18);
			unk_0x26221D1D76579618(iVar0);
			unk_0x26221D1D76579618(0);
			unk_0xEBC0B3BDAD1250BE("CELL_MP_1007");
			unk_0x9F94C7B5E8C04AB3();
			unk_0xD3DF251F2DF3B257();
			uParam0->f_2937[iVar0] = 4;
			iVar0++;
		}
		bVar38 = false;
		if (unk_0x70443014BEB6B15D())
		{
			if (unk_0x9A6FFB0772343488(&(uParam0->f_2963)))
			{
				unk_0x55FB44C9EE7B72D8(&Var1, 35, &(uParam0->f_2963));
			}
		}
		if (Var1.f_0 != -1)
		{
			if (Var1.f_21 == 1)
			{
				if (unk_0x620D8FF311E738AE() && !func_161(Var1.f_0))
				{
					bVar38 = true;
					uParam0->f_2947 = { Var1.f_1 };
				}
			}
		}
		if (bVar38)
		{
			unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
			unk_0x26221D1D76579618(18);
			unk_0x26221D1D76579618(iVar0);
			unk_0x26221D1D76579618(0);
			unk_0xEBC0B3BDAD1250BE("CELL_MP_1003");
			unk_0x9F94C7B5E8C04AB3();
			unk_0xD3DF251F2DF3B257();
			uParam0->f_2937[iVar0] = 5;
			iVar0++;
		}
		unk_0x29DB79DD4D939B38(&Global_2266, 6);
		bVar38 = false;
		if (func_154(uParam0))
		{
			if (func_160(unk_0x1788E93557766241(), 1, 1))
			{
				if (unk_0x6871380D51134D0D(unk_0x1788E93557766241(), (*uParam0)[uParam0->f_2936]))
				{
					if (!func_159((*uParam0)[uParam0->f_2936], 0))
					{
						if (!unk_0x889D01384B54BCE3(Global_2414327[(*uParam0)[uParam0->f_2936] /*255*/].f_194, 2))
						{
							bVar38 = true;
							unk_0xD0E2BFCE93AE3ABD(&Global_2266, 6);
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
		if (Global_1573680 || Global_1573681)
		{
			bVar38 = false;
		}
		if (bVar38)
		{
			unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
			unk_0x26221D1D76579618(18);
			unk_0x26221D1D76579618(iVar0);
			unk_0x26221D1D76579618(0);
			if (!unk_0x889D01384B54BCE3(Global_2422491.f_651, (*uParam0)[uParam0->f_2936]))
			{
				unk_0xEBC0B3BDAD1250BE("CELL_MP_1008");
			}
			else
			{
				unk_0xEBC0B3BDAD1250BE("CELL_MP_1008b");
			}
			unk_0x9F94C7B5E8C04AB3();
			unk_0xD3DF251F2DF3B257();
			uParam0->f_2937[iVar0] = 7;
			iVar0++;
		}
	}
	else
	{
		unk_0xA6CE1BB0BF7AE715("CELL_LEFT_SESS");
		unk_0x69CF75457662E450(1, 1);
		func_30(0);
		return;
	}
}

int func_156(int iParam0, int iParam1)
{
	if (Global_1602607[iParam0 /*12*/] == iParam1)
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
		return unk_0x889D01384B54BCE3(Global_1602607[iVar0 /*12*/].f_1, 0);
	}
	return 0;
}

int func_158()
{
	return -1;
}

bool func_159(int iParam0, int iParam1)
{
	return unk_0x889D01384B54BCE3(Global_2414327[iParam0 /*255*/].f_205, iParam1);
}

int func_160(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0x38FA37FE3518BA38(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x2AF80829930084FD(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422491.f_3[iVar0])
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
	
	if (unk_0x70443014BEB6B15D() && unk_0x620D8FF311E738AE())
	{
		iVar0 = unk_0xD27392D0EC9FAF7B();
		if (iVar0 > 0)
		{
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				unk_0x02E524FA33F7F009(&Global_2445950, iVar1);
				if (iParam0 == Global_2445950)
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
	struct<13> Var0;
	
	if (unk_0xD31E1D2B17B1EF04() == 0)
	{
		return 0;
	}
	if (unk_0x75C4BB2E54262038() || unk_0x660675ADB09E441F())
	{
		if (unk_0x4076712F1D2AF6DD(0, iParam0))
		{
			if (unk_0x018F7277C3350C31())
			{
				return 1;
			}
		}
	}
	if (unk_0xD5560895105F1405() || unk_0x9F979F481F18EB48())
	{
		if (iParam0 == 0 || iParam0 == unk_0x1788E93557766241())
		{
			if (unk_0xEC80AF60BD7582EE(0, -3, 1) || unk_0x4076712F1D2AF6DD(1, 0))
			{
				return 1;
			}
		}
		else
		{
			Var0 = { func_163(iParam0) };
			if (unk_0x4076712F1D2AF6DD(0, 0) || (unk_0x4076712F1D2AF6DD(1, 0) && unk_0x765DD998E5AD03DC(&Var0)))
			{
				return 1;
			}
		}
	}
	if (unk_0xF6BAF9F0C2863FFE())
	{
		if (unk_0x4076712F1D2AF6DD(0, iParam0))
		{
			if (unk_0x018F7277C3350C31())
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
	
	unk_0xBE9A3F2CD3728669(iParam0, &Var0, 13);
	return Var0;
}

int func_164(var uParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x54CE0989F263D8A3())
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
		if (unk_0x7FDDBE39292F85FD(&(uParam0->f_34[iVar0 /*29*/])))
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
	if (func_145(2, Global_14363, 0))
	{
		unk_0x29DB79DD4D939B38(&Global_2265, 0);
		iLocal_132 = 0;
		func_143();
		Global_14372 = 1;
		Global_16807 = 0;
		Global_16806 = 0;
		Global_16808 = 0;
		func_86();
	}
}

void func_166()
{
	if (iLocal_125)
	{
		if (unk_0x83666F9FB8FEBD4B() > 150)
		{
			iLocal_125 = 0;
		}
	}
	if (unk_0x3E512F3AB14225D6(2))
	{
		if (func_145(2, 181, 0))
		{
			if (iLocal_97 > 0)
			{
				iLocal_97 = (iLocal_97 - 1);
			}
			else
			{
				iLocal_97 = (iLocal_93 - 1);
			}
			func_130();
			iLocal_125 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_145(2, 180, 0))
		{
			iLocal_97++;
			if (iLocal_97 == iLocal_93)
			{
				iLocal_97 = 0;
			}
			func_135();
		}
	}
	if (iLocal_125 == 0)
	{
		if (func_145(2, Global_14370, 0))
		{
			if (iLocal_97 > 0)
			{
				iLocal_97 = (iLocal_97 - 1);
			}
			else
			{
				iLocal_97 = (iLocal_93 - 1);
			}
			func_130();
			iLocal_125 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_145(2, Global_14371, 0))
		{
			iLocal_97++;
			if (iLocal_97 == iLocal_93)
			{
				iLocal_97 = 0;
			}
			func_135();
			iLocal_125 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_145(2, Global_14369, 0))
		{
			func_168();
			func_168();
			func_168();
			func_168();
			func_168();
			unk_0xC2E1777941B4536E(-1, "Menu_Navigate", &Global_14383, 1);
			iLocal_125 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_145(2, Global_14368, 0))
		{
			func_167();
			func_167();
			func_167();
			func_167();
			func_167();
			unk_0xC2E1777941B4536E(-1, "Menu_Navigate", &Global_14383, 1);
			iLocal_125 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
}

void func_167()
{
	if (iLocal_97 > 0)
	{
		iLocal_97 = (iLocal_97 - 1);
	}
	else
	{
		iLocal_97 = (iLocal_93 - 1);
	}
	func_142(Global_14375, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_168()
{
	iLocal_97++;
	if (iLocal_97 == iLocal_93)
	{
		iLocal_97 = 0;
	}
	func_142(Global_14375, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(3), -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_169()
{
	iLocal_97++;
	if (iLocal_97 == iLocal_93)
	{
		iLocal_97 = 0;
		unk_0x29DB79DD4D939B38(&Global_2264, 16);
	}
	func_135();
	unk_0xB067107D878E9585(Global_14375, "GET_CURRENT_SELECTION");
	uLocal_98 = unk_0x8CB1A9AD2F4E2E1D();
	while (!unk_0x5AF0E0DBD9FA7F23(uLocal_98))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	iLocal_101 = unk_0x70F7DBBE883019A5(uLocal_98);
	if (iLocal_101 < 0)
	{
		iLocal_101 = 0;
	}
	if (Global_16724 == Global_14400[iLocal_101])
	{
		unk_0x29DB79DD4D939B38(&Global_2264, 16);
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
	
	if (unk_0x889D01384B54BCE3(Global_2266, 6))
	{
		if (!unk_0x122CD96CE4AAB4C9(&(Local_330.f_2963)))
		{
			unk_0x29DB79DD4D939B38(&Global_2266, 6);
			StringCopy(&cLocal_108, "", 16);
			Global_14394.f_1 = 3;
		}
	}
	switch (Local_330.f_2999)
	{
		case 0:
			if (unk_0x889D01384B54BCE3(uLocal_324, 1))
			{
				if (!Global_90094.f_1323)
				{
					unk_0x29DB79DD4D939B38(&uLocal_324, 0);
					unk_0x29DB79DD4D939B38(&uLocal_324, 1);
				}
				return;
			}
			if (Local_330.f_2976)
			{
				if (Local_330.f_2981)
				{
					iVar39 = 2;
					unk_0xDC38CC1E35B6A5D7("HUD_CONNPROB", "HUD_DISCON", iVar39, 0, 0, -1, 0, 0, 1);
					if (Local_330.f_2982)
					{
						if (func_145(2, Global_14363, 0) || unk_0xF49761626882E968(2, 201))
						{
							Global_14394.f_1 = 3;
						}
					}
					else if (func_145(2, Global_14363, 0) || unk_0xF49761626882E968(2, 201))
					{
					}
					else
					{
						Local_330.f_2982 = 1;
					}
				}
				else
				{
					iLocal_99 = Local_330.f_2946;
					switch (Local_330.f_2937[Local_330.f_2946])
					{
						case 1:
							if (!Global_2451624.f_1)
							{
								if (!unk_0x20DA36028A840E31() && !unk_0x3BAA7BB5AD57FC96())
								{
									Local_330.f_2976 = 0;
									func_241();
									Local_330.f_2977 = 0;
									if (func_154(&Local_330))
									{
										sVar53 = unk_0xF3E5891C26514A74(Local_330[Local_330.f_2936]);
									}
									else
									{
										sVar53 = func_152(&(Local_330.f_34[func_153(Local_330.f_2936, &Local_330) /*29*/].f_13));
									}
									func_240(sVar53);
									Local_330.f_2999 = 1;
									func_239(&(Local_330.f_2979));
									func_238(0);
									if (Global_68325)
									{
										if (func_237(1) >= Global_262145.f_143)
										{
											Var40 = { func_163(unk_0x1788E93557766241()) };
											if (func_236())
											{
												func_229(1654961868, Global_262145.f_143, &iVar0, 1, 1);
												Global_2537915[iVar0 /*69*/].f_8.f_3 = { Var40 };
											}
											else
											{
												unk_0x14083E020EB3A44C(Global_262145.f_143, &Var40, 1, 1);
											}
										}
										else
										{
											Var40 = { func_163(unk_0x1788E93557766241()) };
											if (func_236())
											{
											}
											else
											{
												unk_0x14083E020EB3A44C(func_237(1), &Var40, 1, 1);
											}
										}
										func_87(1908, 1, -1);
									}
								}
								else if (unk_0x20DA36028A840E31())
								{
								}
								else if (unk_0x3BAA7BB5AD57FC96())
								{
									if (!Global_2451624.f_59)
									{
										Global_2451624 = 1;
										Global_2451624.f_2 = 1;
										Global_2451624.f_59 = 1;
									}
								}
							}
							else if (Global_2451624.f_38)
							{
							}
							else
							{
								func_228();
								unk_0xC2E1777941B4536E(-1, "Hang_Up", &Global_14383, 1);
								if (Global_2451624.f_1)
								{
									func_226();
								}
								Global_14394.f_1 = 3;
							}
							return;
							break;
						
						case 2:
							if (func_225(&(Global_2446992.f_284[Local_330[Local_330.f_2936] /*2*/])))
							{
								if (!func_224(&(Global_2446992.f_284[Local_330[Local_330.f_2936] /*2*/]), 30000, 0))
								{
									if (func_213(0, 0, 1, 1))
									{
										func_198("CELL_MP_1009H", unk_0xF3E5891C26514A74(Local_330[Local_330.f_2936]), func_199(Local_330[Local_330.f_2936], -2, 0, 0), -1);
									}
									Local_330.f_2976 = 0;
									return;
								}
							}
							if (((((!func_162(0) || !func_162(Local_330[Local_330.f_2936])) || unk_0x6BF4CF890A66A845(Local_330[Local_330.f_2936])) || unk_0x6BFE4C02E77951F8(Local_330[Local_330.f_2936])) || unk_0x218869F13A82136F(Local_330[Local_330.f_2936])) || unk_0xDCD1002C551568C7(Local_330[Local_330.f_2936]))
							{
								if (func_213(1, 1, 1, 1))
								{
									if (!unk_0x9BA82E09A986BA4B(unk_0xF3E5891C26514A74(Local_330[Local_330.f_2936]), "**Invalid**"))
									{
										func_198("CELL_MP_1009M", unk_0xF3E5891C26514A74(Local_330[Local_330.f_2936]), func_199(Local_330[Local_330.f_2936], -2, 0, 0), -1);
									}
									else
									{
										func_197("CELL_MP_1009N", -1);
									}
								}
								Local_330.f_2976 = 0;
								return;
							}
							Local_330.f_2976 = 0;
							Local_330.f_2999 = 2;
							iLocal_3349 = 1;
							return;
							break;
						
						case 3:
							if (!unk_0x3AC287D8F78DABE1())
							{
								if (unk_0x75C4BB2E54262038() && !unk_0x765DD998E5AD03DC(&(Local_330.f_2963)))
								{
									if (unk_0xF7A058DA48F6F78F(&(Local_330.f_2963), ""))
									{
										Local_330.f_2976 = 0;
										Global_14394.f_1 = 3;
									}
								}
								else
								{
									unk_0x963148613B96C0FD(&(Local_330.f_2963));
									Local_330.f_2976 = 0;
									Global_14394.f_1 = 3;
								}
							}
							break;
						
						case 5:
							if (unk_0x70443014BEB6B15D())
							{
								if (unk_0x9A6FFB0772343488(&(Local_330.f_2963)))
								{
									unk_0x55FB44C9EE7B72D8(&Var4, 35, &(Local_330.f_2963));
								}
							}
							if (Var4.f_0 != -1)
							{
								if (Var4.f_21 == 1)
								{
									if (!func_161(Var4.f_0))
									{
										if (unk_0xB19856AA7E5E0FFE(Var4.f_0))
										{
											Local_330.f_2976 = 0;
											unk_0xA6CE1BB0BF7AE715("CREW_JOIN");
											unk_0x94E086BCAE8856C1(&(Var4.f_1));
											unk_0x69CF75457662E450(1, 1);
											Global_14394.f_1 = 3;
										}
										else
										{
											Global_14394.f_1 = 3;
											Local_330.f_2976 = 0;
											Global_14394.f_1 = 3;
										}
										return;
									}
								}
							}
							Local_330.f_2976 = 0;
							break;
						
						case 4:
							Local_330.f_2976 = 0;
							func_151();
							unk_0x963148613B96C0FD(&(Local_330.f_2963));
							break;
						
						case 7:
							if (unk_0x889D01384B54BCE3(Global_2422491.f_651, Local_330[Local_330.f_2936]))
							{
								unk_0x29DB79DD4D939B38(&(Global_2422491.f_651), Local_330[Local_330.f_2936]);
							}
							else
							{
								Global_2422491.f_651 = 0;
								unk_0xD0E2BFCE93AE3ABD(&(Global_2422491.f_651), Local_330[Local_330.f_2936]);
							}
							func_151();
							Local_330.f_2976 = 0;
							break;
						}
				}
			}
			else if (Global_14372 == 0)
			{
				if (func_145(2, Global_14363, 0))
				{
					Local_330.f_2982 = 0;
					Local_330.f_2981 = 0;
					unk_0x29DB79DD4D939B38(&Global_2265, 0);
					iLocal_114 = 0;
					func_143();
					Global_14372 = 1;
					unk_0xB067107D878E9585(Global_14375, "GET_CURRENT_SELECTION");
					uLocal_98 = unk_0x8CB1A9AD2F4E2E1D();
					while (!unk_0x5AF0E0DBD9FA7F23(uLocal_98))
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					Local_330.f_2946 = unk_0x70F7DBBE883019A5(uLocal_98);
					if (!func_164(&Local_330, &iVar3))
					{
						switch (iVar3)
						{
							case 0:
								func_196("PLAYER_N_ON", 7500, 1);
								break;
							
							case 1:
								func_196("PLAYERLEFT", 7500, 1);
								break;
							
							case 2:
								Global_2451624.f_59 = 0;
								Local_330.f_2981 = 1;
								Local_330.f_2976 = 1;
								return;
								break;
						}
						Global_14394.f_1 = 3;
						return;
					}
					Global_2451624.f_59 = 0;
					Local_330.f_2976 = 1;
				}
			}
			break;
		
		case 1:
			if (!func_164(&Local_330, &iVar3))
			{
				func_238(1);
				func_228();
				Local_330.f_2978 = 1;
				Local_330.f_2977 = 1;
				return;
			}
			else if (Local_330.f_2977)
			{
				if (!Local_330.f_2978)
				{
					if (!Global_2451624.f_1 || !unk_0xBAB3F4F44450BC7B())
					{
						func_238(1);
						func_228();
						Local_330.f_2978 = 1;
						Local_330.f_2977 = 1;
						return;
					}
					if (unk_0x54CE0989F263D8A3())
					{
						if (func_145(2, Global_14364, 0))
						{
							func_228();
							Local_330.f_2976 = 0;
							return;
						}
						if (func_195(Global_2451624.f_20))
						{
							if (unk_0x765DD998E5AD03DC(&(Global_2451624.f_20)))
							{
								if (!unk_0x7FDDBE39292F85FD(&(Global_2451624.f_20)))
								{
									func_238(1);
									func_228();
									Local_330.f_2978 = 1;
									Local_330.f_2977 = 1;
									return;
								}
							}
						}
						else
						{
							func_238(1);
							func_228();
							Local_330.f_2978 = 1;
							Local_330.f_2977 = 1;
							return;
						}
					}
					else
					{
						func_228();
						Local_330.f_2976 = 0;
						func_151();
						return;
					}
					if (!Global_2451624.f_37)
					{
						if (Global_2451624.f_33 == -1)
						{
							if (func_224(&(Local_330.f_2979), 40000, 1))
							{
								func_238(1);
								func_228();
								Local_330.f_2978 = 1;
								Local_330.f_2977 = 1;
								return;
							}
						}
						else
						{
							switch (Global_2451624.f_33)
							{
								case 1:
									func_194();
									func_193();
									if (unk_0x1DAD7CE53BEE7710())
									{
										if (iVar1 == iVar2)
										{
										}
									}
									unk_0x7CB5477E93D6A302(iLocal_103);
									return;
									break;
								
								case 2:
									func_238(1);
									func_228();
									Local_330.f_2978 = 1;
									return;
									break;
								
								default:
									func_238(1);
									func_228();
									Local_330.f_2978 = 1;
									return;
									break;
								}
							}
						}
				}
			}
			else if (!func_225(&(Local_330.f_2979)))
			{
				func_239(&(Local_330.f_2979));
				func_192(&(Local_330.f_2979), 1, 0);
			}
			else
			{
				if (func_224(&(Local_330.f_2979), 15000, 1))
				{
					func_228();
					func_75();
					func_243();
					Global_14394.f_1 = 3;
					return;
				}
				if (Global_2451624.f_1 || unk_0x889D01384B54BCE3(Global_2265, 20))
				{
					if (func_145(2, Global_14364, 0))
					{
						func_228();
						Global_14394.f_1 = 3;
						return;
					}
				}
				if (Global_2451624.f_1)
				{
					if (func_191(&Local_330, &(Local_330.f_2983)))
					{
						func_190(&(Local_330.f_2979), 1, 0);
						Local_330.f_2978 = 0;
						Local_330.f_2977 = 1;
						if (Global_68325)
						{
							func_188(105, 1, -1, 1);
						}
					}
					else
					{
						func_238(1);
						func_228();
						Local_330.f_2978 = 1;
						Local_330.f_2977 = 1;
						return;
					}
				}
			}
			break;
		
		case 2:
			if (iLocal_3349 == 1)
			{
				if (func_182(&Local_3330, &(Local_3330.f_1), &(Local_3330.f_2), 0, 0, &cLocal_3333, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0))
				{
					StringCopy(&cLocal_3333, unk_0xC60E10F6F6B441A1(), 64);
					Local_3330.f_0 = 0;
					Local_3330.f_2 = 0;
					Local_3330.f_1 = 0;
					iLocal_3349 = 0;
					uLocal_3350 = unk_0x77FAE22505910E89(&cLocal_3333);
					StringCopy(&cLocal_3333, unk_0x5A6D003335A2C5F3(&cLocal_3333, 0, uLocal_3350, 63), 64);
					func_190(&(Global_2446992.f_284[Local_330[Local_330.f_2936] /*2*/]), 0, 0);
					if (unk_0x06771AF7795B3ECF(func_181(&cLocal_3333)))
					{
					}
					else
					{
						Var54 = { func_163(Local_330[Local_330.f_2936]) };
						unk_0x744A5DC4FF9803E9(&cLocal_3333, &Var54);
						func_171("CP_TM_SENT", Local_330[Local_330.f_2936], 0, 0, 0, 1, 1, 0);
						func_87(1907, 1, -1);
					}
					Local_330.f_2999 = 0;
				}
				if (Local_3330.f_0 == 2)
				{
					Local_3330.f_0 = 0;
					Local_3330.f_2 = 0;
					Local_3330.f_1 = 0;
					iLocal_3349 = 0;
					Local_330.f_2999 = 0;
				}
			}
			break;
	}
}

int func_171(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	struct<16> Var1;
	int iVar17;
	int iVar18;
	
	iVar0 = -1;
	if (unk_0x6871380D51134D0D(unk_0x1788E93557766241(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var1, unk_0xF3E5891C26514A74(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0xF3E5891C26514A74(iParam1), 64);
		}
		unk_0xA6CE1BB0BF7AE715(sParam0);
		unk_0x61329A2F1E63248B(func_199(iParam1, -2, 1, 0));
		unk_0x94E086BCAE8856C1(func_179(&Var1));
		if (!bParam4)
		{
			iVar0 = unk_0x69CF75457662E450(0, 1);
		}
		else
		{
			Global_2446020 = { func_163(iParam1) };
			if (unk_0x55FB44C9EE7B72D8(&Global_2445950, 35, &Global_2446020))
			{
				iVar17 = 0;
				if (unk_0x9BA82E09A986BA4B(&(Global_2445950.f_22), "Leader") && Global_2445950.f_30 == 0)
				{
					iVar17 = 1;
				}
				if (Global_2445950.f_21 > 0)
				{
					iVar18 = 0;
				}
				else
				{
					iVar18 = 1;
				}
				if (bParam6)
				{
					if (bParam7)
					{
						Var1 = { func_178(&Var1) };
					}
					iVar0 = unk_0xB94CDDFEE8F82E2C(iVar18, unk_0x3C6DC2041628D157(&Global_2445950, 35), &(Global_2445950.f_17), Global_2445950.f_30, iVar17, 0, Global_2445950, &Var1, Global_1317050, Global_1317051, Global_1317052);
				}
				else
				{
					iVar0 = unk_0x717CB191B0642E38(iVar18, unk_0x3C6DC2041628D157(&Global_2445950, 35), &(Global_2445950.f_17), Global_2445950.f_30, iVar17, 0, Global_2445950, Global_1317050, Global_1317051, Global_1317052);
				}
			}
			else
			{
				iVar0 = unk_0x69CF75457662E450(0, 1);
			}
		}
		func_172(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_172(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_177() || !unk_0x7A75BEF6DA1EDF3D()) || !func_175(unk_0x1788E93557766241(), 0))
	{
		return;
	}
	iVar0 = func_173(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1698841.f_5[iVar0 /*53*/] = iParam0;
		Global_1698841.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1698841.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1698841.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1698841.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1698841.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1698841.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1698841.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1698841.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1698841.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1698841.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1698841.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_173(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1698841 - 1))
	{
		if (iParam0 > Global_1698841.f_5[iVar0 /*53*/].f_1)
		{
			func_174(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1698841++;
	if (Global_1698841 > 5)
	{
		Global_1698841 = 5;
		return Global_1698841;
	}
	return (Global_1698841 - 1);
}

void func_174(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1698841.f_5[iVar0 /*53*/] = { Global_1698841.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_175(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1788E93557766241())
	{
		bVar0 = func_176(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1583725[iParam0 /*334*/].f_188 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x38FA37FE3518BA38(iParam0))
		{
			bVar0 = unk_0xA2D6C1E24AF2E058(iParam0) == 8;
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
	if (Global_1315869[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312723[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

bool func_177()
{
	return unk_0xD5883629B43B6F20(-1762644250);
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

var func_181(char[4] cParam0)
{
	return cParam0;
}

int func_182(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, char* sParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, char* sParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	char* sVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	if (unk_0xE9A5FF67266655B2() || unk_0xF4C685E933068D23())
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
					iVar5 = 121;
				}
				else if (iParam7 == 7)
				{
					iVar5 = 63;
				}
				else if (func_187())
				{
					iVar5 = 21;
				}
				else
				{
					iVar5 = 51;
				}
				if (*uParam1 == 0)
				{
					if ((iParam7 == 0 || iParam7 == 1) || iParam7 == 2)
					{
						if (func_187())
						{
							sVar3 = "FMMC_KEY_TIS2SJ";
						}
						else
						{
							sVar3 = "FMMC_KEY_TIP2";
						}
					}
					else if (iParam7 == 3)
					{
						sVar3 = "FMMC_KEY_TIP7";
						iVar5 = 21;
					}
					else if (iParam7 == 4)
					{
						sVar3 = "FMMC_KEY_TIP5";
						if (unk_0x16CDA1894CFE0781(joaat("fm_capture_creator")) > 0)
						{
							iVar5 = 21;
						}
						else
						{
							iVar5 = 23;
						}
					}
					else if (iParam7 == 5)
					{
						sVar3 = "FMMC_KEY_TIP6";
						if (unk_0x16CDA1894CFE0781(joaat("fm_capture_creator")) > 0)
						{
							iVar5 = 21;
						}
						else
						{
							iVar5 = 23;
						}
					}
					else if (iParam7 == 6)
					{
						sVar3 = "FMMC_KEY_TIP10";
					}
					else if (iParam7 == 8)
					{
						sVar3 = "FMMC_KEY_TXT7";
					}
					else if (iParam7 == 9)
					{
						sVar3 = "FMMC_KEY_TXT8";
					}
					else if (iParam7 == 10)
					{
						sVar3 = "FMMC_KEY_VSS";
					}
				}
				else if (func_187())
				{
					sVar3 = "FMMC_KEY_TIS2FJ";
				}
				else
				{
					sVar3 = "FMMC_KEY_TIP2F";
				}
				if (unk_0xD5560895105F1405() || unk_0x9F979F481F18EB48())
				{
					sVar4 = sVar3;
					if ((iParam7 == 0 || iParam7 == 1) || iParam7 == 2)
					{
						sVar3 = "FMMC_SS_RL_35";
					}
					else if (iParam7 == 3)
					{
						sVar3 = "FMMC_SS_RL_32";
					}
					else if (iParam7 == 4)
					{
						sVar3 = "FMMC_SS_RL_33";
					}
					else if (iParam7 == 5)
					{
						sVar3 = "FMMC_SS_RL_34";
					}
					else if (iParam7 == 6)
					{
						sVar3 = "FMMC_SS_RL_49";
					}
					else if (iParam7 == 7)
					{
						sVar3 = "FMMC_SS_RL_57";
					}
				}
				if (unk_0xF6BAF9F0C2863FFE())
				{
					iVar6 = 6;
				}
				else if (unk_0x9BB5B38BEC8FE00F() == 0)
				{
					iVar6 = 0;
				}
				else
				{
					iVar6 = 1;
				}
				if (unk_0x06771AF7795B3ECF(sParam5))
				{
					unk_0xE3DDC1A325538E83(iVar6, sVar3, sVar4, "", "", "", "", iVar5);
				}
				else
				{
					unk_0xE3DDC1A325538E83(iVar6, sVar3, sVar4, sParam5, sParam10, "", "", iVar5);
				}
			}
			else
			{
				if (unk_0xF6BAF9F0C2863FFE())
				{
					iVar7 = 6;
				}
				else if (unk_0x9BB5B38BEC8FE00F() == 0)
				{
					iVar7 = 0;
				}
				else
				{
					iVar7 = 1;
				}
				if (bParam4)
				{
					if (*uParam1 == 0)
					{
						sVar3 = "FMMC_KEY_TIP";
					}
					else
					{
						sVar3 = "FMMC_KEY_TIPF";
					}
					if (unk_0xD5560895105F1405() || unk_0x9F979F481F18EB48())
					{
						sVar4 = sVar3;
						sVar3 = "FMMC_T0_M19";
					}
					if (unk_0x9BB5B38BEC8FE00F() == 10)
					{
						iVar8 = 21;
					}
					else
					{
						iVar8 = 25;
					}
					if (func_177())
					{
						iVar8 = 64;
					}
					unk_0xF82A9EACDFEFF555(2);
					if (unk_0x06771AF7795B3ECF(&(Global_1604248.f_58254)))
					{
						unk_0xE3DDC1A325538E83(iVar7, sVar3, sVar4, "", "", "", "", iVar8);
					}
					else
					{
						unk_0xE3DDC1A325538E83(iVar7, sVar3, sVar4, &(Global_1604248.f_58254), "", "", "", iVar8);
					}
				}
				else if (bParam13)
				{
					if (*uParam1 == 0)
					{
						sVar3 = "FMMC_KEY_TIP";
					}
					else
					{
						sVar3 = "FMMC_KEY_TIPF";
					}
					if (unk_0xD5560895105F1405())
					{
						sVar4 = sVar3;
						sVar3 = "FMMC_T0_M19";
					}
					iVar8 = 63;
					unk_0xF82A9EACDFEFF555(2);
					if (unk_0x06771AF7795B3ECF(sParam5))
					{
						unk_0xE3DDC1A325538E83(iVar7, sVar3, sVar4, "", "", "", "", iVar8);
					}
					else
					{
						unk_0xE3DDC1A325538E83(iVar7, sVar3, sVar4, sParam5, "", "", "", iVar8);
					}
				}
				else if (bParam9)
				{
					if (unk_0x9BB5B38BEC8FE00F() == 0)
					{
						iVar8 = 200;
						if (*uParam1 == 0)
						{
							sVar3 = "FMMC_KEY_TIPT";
						}
						else
						{
							sVar3 = "FMMC_KEY_TIPTF";
						}
					}
					else
					{
						iVar8 = 100;
						if (*uParam1 == 0)
						{
							sVar3 = "FMMC_KEY_ALTT";
						}
						else
						{
							sVar3 = "FMMC_KEY_ALTTF";
						}
					}
					if (unk_0xD5560895105F1405() || unk_0x9F979F481F18EB48())
					{
						sVar4 = sVar3;
						sVar3 = "FMMC_T0_M36";
					}
					iVar9 = 0;
					while (iVar9 <= 7)
					{
						if (unk_0x8CD18E96F1984EE6(&(Global_1604248.f_58405[iVar9 /*16*/])))
						{
							StringCopy(&(Global_1604248.f_58405[iVar9 /*16*/]), "", 64);
						}
						iVar9++;
					}
					unk_0x2DA50838E13D2411(iVar7, sVar3, sVar4, &(Global_1604248.f_58405[0 /*16*/]), &(Global_1604248.f_58405[1 /*16*/]), &(Global_1604248.f_58405[2 /*16*/]), &(Global_1604248.f_58405[3 /*16*/]), &(Global_1604248.f_58405[4 /*16*/]), &(Global_1604248.f_58405[5 /*16*/]), &(Global_1604248.f_58405[6 /*16*/]), &(Global_1604248.f_58405[7 /*16*/]), iVar8);
				}
				else if (bParam6)
				{
					if (*uParam1 == 0)
					{
						sVar3 = "FMMC_KEY_TIP4";
					}
					else
					{
						sVar3 = "FMMC_KEY_TIP4F";
					}
					if (unk_0xD5560895105F1405() || unk_0x9F979F481F18EB48())
					{
						sVar4 = sVar3;
						sVar3 = "FMMC_SMS3";
					}
					if (unk_0x06771AF7795B3ECF(&(Global_1604248.f_22702[iParam16 /*38*/].f_4[0 /*16*/])))
					{
						unk_0xE3DDC1A325538E83(iVar7, sVar3, sVar4, "", "", "", "", 126);
					}
					else
					{
						iVar10 = 0;
						while (iVar10 <= 1)
						{
							if (unk_0x8CD18E96F1984EE6(&(Global_1604248.f_22702[iParam16 /*38*/].f_4[iVar10 /*16*/])))
							{
								StringCopy(&(Global_1604248.f_22702[iParam16 /*38*/].f_4[iVar10 /*16*/]), "", 64);
							}
							iVar10++;
						}
						unk_0xE3DDC1A325538E83(iVar7, sVar3, sVar4, &(Global_1604248.f_22702[iParam16 /*38*/].f_4[0 /*16*/]), &(Global_1604248.f_22702[iParam16 /*38*/].f_4[1 /*16*/]), "", "", 126);
					}
				}
				else if (bParam8)
				{
					iVar8 = 61;
					if (bParam11)
					{
						if (func_187())
						{
							if (*uParam1 == 0)
							{
								sVar3 = "CELL_EMASH_SOD";
							}
							else if (*uParam1 == -1)
							{
								sVar3 = "CELL_EMASH_SODE";
							}
							else
							{
								sVar3 = "CELL_EMASH_SODF";
							}
						}
						else if (*uParam1 == 0)
						{
							sVar3 = "CELL_EMAIL_SOD";
						}
						else if (*uParam1 == -1)
						{
							sVar3 = "CELL_EMAIL_SODE";
						}
						else
						{
							sVar3 = "CELL_EMAIL_SODF";
						}
						if (unk_0xD5560895105F1405() || unk_0x9F979F481F18EB48())
						{
							sVar4 = sVar3;
							sVar3 = "CELL_EMAIL_DESC";
						}
					}
					else if (func_187())
					{
						if (*uParam1 == 0)
						{
							sVar3 = "FMMC_KEY_TIP8S";
						}
						else
						{
							sVar3 = "FMMC_KEY_TIP8FS";
						}
						if (unk_0xD5560895105F1405() || unk_0x9F979F481F18EB48())
						{
							sVar4 = sVar3;
							sVar3 = "FMMC_SMS4";
						}
						iVar8 = 21;
					}
					else
					{
						if (*uParam1 == 0)
						{
							sVar3 = "FMMC_KEY_TIP8";
						}
						else
						{
							sVar3 = "FMMC_KEY_TIP8F";
						}
						if (unk_0xD5560895105F1405())
						{
							sVar4 = sVar3;
							sVar3 = "FMMC_SMS4";
						}
					}
					if (unk_0x06771AF7795B3ECF(sParam5))
					{
						unk_0xE3DDC1A325538E83(iVar7, sVar3, sVar4, "", "", "", "", iVar8);
					}
					else
					{
						unk_0xE3DDC1A325538E83(iVar7, sVar3, sVar4, sParam5, "", "", "", iVar8);
					}
				}
				else if (bParam12)
				{
					if (*uParam1 == 0)
					{
						sVar3 = "FMMC_KEY_TIP9";
					}
					else
					{
						sVar3 = "FMMC_KEY_TIP9F";
					}
					if (unk_0xD5560895105F1405())
					{
						sVar4 = sVar3;
						sVar3 = "FMMC_KEY_TIP9N";
					}
					if (unk_0x06771AF7795B3ECF(sParam5))
					{
						unk_0xE3DDC1A325538E83(iVar7, sVar3, sVar4, "", "", "", "", 16);
					}
					else
					{
						unk_0xE3DDC1A325538E83(iVar7, sVar3, sVar4, sParam5, "", "", "", 16);
					}
				}
				else if (bParam14)
				{
					iVar8 = 16;
					if (*uParam1 == 0)
					{
						sVar3 = "FMMC_KEY_TIP12";
					}
					else
					{
						sVar3 = "FMMC_KEY_TIP12F";
					}
					if (unk_0xD5560895105F1405())
					{
						sVar4 = sVar3;
						sVar3 = "FMMC_KEY_TIP12N";
					}
					if (unk_0x06771AF7795B3ECF(sParam5))
					{
						unk_0xE3DDC1A325538E83(0, sVar3, sVar4, "", "", "", "", iVar8);
					}
					else
					{
						unk_0xE3DDC1A325538E83(0, sVar3, sVar4, sParam5, "", "", "", iVar8);
					}
				}
				else if (bParam15)
				{
					iVar8 = 61;
					if (*uParam1 == 0)
					{
						sVar3 = "FMMC_KEY_TIP12";
					}
					else
					{
						sVar3 = "FMMC_KEY_TIP12F";
					}
					if (unk_0x06771AF7795B3ECF(sParam5))
					{
						unk_0xE3DDC1A325538E83(0, sVar3, sVar4, "", "", "", "", iVar8);
					}
					else
					{
						unk_0xE3DDC1A325538E83(0, sVar3, sVar4, sParam5, "", "", "", iVar8);
					}
				}
				else
				{
					if (unk_0x9BB5B38BEC8FE00F() == 0)
					{
						iVar8 = 501;
						if (bParam11)
						{
							if (func_187())
							{
								if (*uParam1 == 0)
								{
									sVar3 = "CELL_EMASH_BOD";
								}
								else if (*uParam1 == -1)
								{
									sVar3 = "CELL_EMASH_BODE";
								}
								else
								{
									sVar3 = "CELL_EMASH_BODF";
								}
							}
							else if (*uParam1 == 0)
							{
								sVar3 = "CELL_EMAIL_BOD";
							}
							else if (*uParam1 == -1)
							{
								sVar3 = "CELL_EMAIL_BODE";
							}
							else
							{
								sVar3 = "CELL_EMAIL_BODF";
							}
						}
						else if (*uParam1 == 0)
						{
							sVar3 = "FMMC_KEY_TIP3";
						}
						else if (*uParam1 == -1)
						{
							sVar3 = "FMMC_KEY_TIP3E";
						}
						else
						{
							sVar3 = "FMMC_KEY_TIP3F";
						}
					}
					else
					{
						iVar8 = 251;
						if (func_187())
						{
							iVar8 = 150;
						}
						if (bParam11)
						{
							if (*uParam1 == 0)
							{
								sVar3 = "CELL_EMASH_BOD";
							}
							else if (*uParam1 == -1)
							{
								sVar3 = "CELL_EMASH_BODE";
							}
							else
							{
								sVar3 = "CELL_EMASH_BODF";
							}
						}
						else if (func_187())
						{
							if (*uParam1 == 0)
							{
								sVar3 = "FMMC_KEY_TIPSS";
							}
							else if (*uParam1 == -1)
							{
								sVar3 = "FMMC_KEY_TIPSSE";
							}
							else
							{
								sVar3 = "FMMC_KEY_TIPSSF";
							}
						}
						else if (*uParam1 == 0)
						{
							sVar3 = "FMMC_KEY_TIPS";
						}
						else if (*uParam1 == -1)
						{
							sVar3 = "FMMC_KEY_TIPSE";
						}
						else
						{
							sVar3 = "FMMC_KEY_TIPSF";
						}
					}
					if (unk_0xD5560895105F1405() || unk_0x9F979F481F18EB48())
					{
						sVar4 = sVar3;
						sVar3 = "FMMC_T0_M20";
						if (bParam11)
						{
							sVar3 = "CELL_EMAIL_DESC";
						}
					}
					iVar11 = 0;
					while (iVar11 <= 7)
					{
						if (unk_0x8CD18E96F1984EE6(&(Global_1604248.f_58276[iVar11 /*16*/])))
						{
							StringCopy(&(Global_1604248.f_58276[iVar11 /*16*/]), "", 64);
						}
						iVar11++;
					}
					if (bParam11)
					{
						unk_0x2DA50838E13D2411(iVar7, sVar3, sVar4, sParam5, sParam10, "", "", "", "", "", "", iVar8);
					}
					else
					{
						unk_0x2DA50838E13D2411(iVar7, sVar3, sVar4, &(Global_1604248.f_58276[0 /*16*/]), &(Global_1604248.f_58276[1 /*16*/]), &(Global_1604248.f_58276[2 /*16*/]), &(Global_1604248.f_58276[3 /*16*/]), &(Global_1604248.f_58276[4 /*16*/]), &(Global_1604248.f_58276[5 /*16*/]), &(Global_1604248.f_58276[6 /*16*/]), &(Global_1604248.f_58276[7 /*16*/]), iVar8);
					}
				}
			}
			StringCopy(&Global_1680543, "", 64);
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		
		case 1:
			*uParam0 = unk_0xCB70128095B6956E();
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
						if (unk_0x06771AF7795B3ECF(&Global_1680543))
						{
							StringCopy(&Global_1680543, unk_0xC60E10F6F6B441A1(), 64);
							if (unk_0x06771AF7795B3ECF(&Global_1680543))
							{
								*uParam1 = 0;
								return 1;
							}
							iVar0 = unk_0x77FAE22505910E89(unk_0xC60E10F6F6B441A1());
							iVar2 = 0;
							while (iVar2 <= (iVar0 - 1))
							{
								if (*uParam2 != 0)
								{
									if (!unk_0x06771AF7795B3ECF(&Global_1680543))
									{
										if (unk_0x9BA82E09A986BA4B(" ", unk_0xF60B94B1F550267D(&Global_1680543, 0, 1)))
										{
											iVar1 = unk_0x77FAE22505910E89(&Global_1680543);
											StringCopy(&Global_1680543, unk_0xF60B94B1F550267D(&Global_1680543, 1, iVar1), 64);
										}
									}
									else
									{
										*uParam1 = 0;
										return 1;
									}
								}
								iVar2++;
							}
						}
					}
					if (unk_0xAC1181E50BE11321(*uParam1))
					{
						if (!unk_0x0F5412B0CDB6EA6E(*uParam1))
						{
							unk_0x6B2B2A9AA84D01C4();
							iVar12 = unk_0xE6373A9D505B1790(*uParam1);
							switch (iVar12)
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
									func_186(1);
									return 0;
									break;
							}
						}
						else if (bParam11)
						{
							if (unk_0x16CDA1894CFE0781(joaat("appinternet")) == 0)
							{
								unk_0x6B2B2A9AA84D01C4();
								*uParam1 = 0;
								return 1;
							}
						}
						break;
					}
					if (bParam4)
					{
						unk_0x6899E05534F44030(&Global_1680543, uParam1);
					}
					else
					{
						unk_0x6899E05534F44030(unk_0xC60E10F6F6B441A1(), uParam1);
					}
					if (unk_0x9F979F481F18EB48())
					{
						if ((!unk_0x54CE0989F263D8A3() || func_184() == 0) || func_183() == 1)
						{
							*uParam1 = 0;
							*uParam2 = 0;
							*uParam0 = 3;
							return 0;
						}
					}
					unk_0x02BE7CB219E9E516("ERROR_CHECKPROFANITY");
					unk_0xCDAFCC561991EEFD(1);
					if (!unk_0xAC1181E50BE11321(*uParam1))
					{
						*uParam1 = -1;
						*uParam2 = 0;
						*uParam0 = 0;
						unk_0x6B2B2A9AA84D01C4();
						return 0;
					}
				
				default:
			}
			break;
	}
	return 0;
}

int func_183()
{
	if (!func_184())
	{
		return 1;
	}
	return 0;
}

int func_184()
{
	if (func_185())
	{
		return 0;
	}
	if (unk_0xECA1708601B2AF8E() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_185()
{
	return Global_2435628;
}

void func_186(int iParam0)
{
	Global_2435628 = iParam0;
}

int func_187()
{
	if (((unk_0x9BB5B38BEC8FE00F() == 7 || unk_0x9BB5B38BEC8FE00F() == 8) || unk_0x9BB5B38BEC8FE00F() == 9) || unk_0x9BB5B38BEC8FE00F() == 10)
	{
		return 1;
	}
	return 0;
}

void func_188(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_189())
	{
		iVar0 = Global_2471573[iParam0 /*5*/][func_59(iParam2)];
		if (iVar0 != 0)
		{
			unk_0xA65D74B65C28C5D7(iVar0, iParam1, iParam3);
		}
	}
}

int func_189()
{
	return 1;
	return 0;
}

void func_190(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x1DAD7CE53BEE7710() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x519586565311459B();
		}
		else
		{
			*uParam0 = unk_0x4EAB1171B13C220B();
		}
	}
	else
	{
		*uParam0 = unk_0x09560C7DE2A384BD();
	}
	uParam0->f_1 = 1;
}

int func_191(var uParam0, char* sParam1)
{
	if (Global_2451624.f_1)
	{
		if (unk_0xBAB3F4F44450BC7B())
		{
			unk_0xE316FFCF47FF85CD(&(uParam0->f_2963));
			Global_2451624.f_20 = { uParam0->f_2963 };
			StringCopy(&(Global_2451624.f_4), sParam1, 64);
			return 1;
		}
	}
	return 0;
}

void func_192(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x1DAD7CE53BEE7710() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x519586565311459B();
			}
			else
			{
				*uParam0 = unk_0x4EAB1171B13C220B();
			}
		}
		else
		{
			*uParam0 = unk_0x09560C7DE2A384BD();
		}
		uParam0->f_1 = 1;
	}
}

void func_193()
{
	if (Global_14394.f_1 > 3)
	{
		Global_14394.f_1 = 9;
		Global_15706 = 1;
		if (Global_68325)
		{
			if (!unk_0xF6BAF9F0C2863FFE())
			{
				func_139(Global_14375, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				unk_0xD0E2BFCE93AE3ABD(&(Global_2446992.f_1623), 15);
			}
		}
	}
}

void func_194()
{
	unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
	unk_0x26221D1D76579618(4);
	unk_0x26221D1D76579618(0);
	unk_0x26221D1D76579618(2);
	unk_0xEBC0B3BDAD1250BE("CELL_CONDFON");
	unk_0x94E086BCAE8856C1(&Global_15708);
	unk_0x9F94C7B5E8C04AB3();
	func_72("CELL_300");
	func_72("CELL_219");
	func_72("CELL_219");
	unk_0xD3DF251F2DF3B257();
	Global_2451624.f_37 = 1;
	unk_0x29DB79DD4D939B38(&Global_2264, 27);
	func_91();
}

bool func_195(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x6812E31A0CF4755C(&uParam0, 13);
}

void func_196(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x8E9A80E27DB553E5(sParam0);
	unk_0x6E070B8EEA199511(iParam1, 1);
}

void func_197(char* sParam0, int iParam1)
{
	unk_0x5B4A49EA799C667F(sParam0);
	unk_0x644558F3AB755120(0, 0, 1, iParam1);
}

void func_198(char* sParam0, var uParam1, int iParam2, int iParam3)
{
	unk_0x5B4A49EA799C667F(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x61329A2F1E63248B(iParam2);
	}
	unk_0x94E086BCAE8856C1(uParam1);
	unk_0x644558F3AB755120(0, 0, 1, iParam3);
}

int func_199(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_211(iParam0))
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
	if (func_211(unk_0x1788E93557766241()) || (func_210() && func_209()))
	{
		uVar0 = func_208();
		if (unk_0x538DF9E5B1DF01EB(uVar0))
		{
			if (unk_0x2303B9FE7CF81971(uVar0))
			{
				if (unk_0x5D6FBED3ADADE26A(uVar0) != -1)
				{
					if (func_160(unk_0x5D6FBED3ADADE26A(uVar0), 0, 1))
					{
						return func_206(iParam0, unk_0x5D6FBED3ADADE26A(uVar0), iParam1, bParam2, bParam3);
					}
				}
			}
			else
			{
				return func_200(0, -1, 0);
			}
		}
	}
	return func_206(iParam0, unk_0x1788E93557766241(), iParam1, bParam2, bParam3);
}

int func_200(bool bParam0, int iParam1, bool bParam2)
{
	return func_201(unk_0x1788E93557766241(), bParam0, iParam1, bParam2);
}

int func_201(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0xA2D6C1E24AF2E058(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_205(iVar0, iParam2))
			{
				if (iVar0 == iParam2)
				{
					return func_204(1);
				}
				else
				{
					return func_204(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else
			{
				return func_202(iVar0, iParam2);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_204(1);
	}
	return func_204(0);
}

int func_202(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_203(iParam0, iParam1);
	switch (iVar0)
	{
		case 0:
			return 28;
		
		case 1:
			return 29;
		
		case 2:
			return 30;
		
		default:
	}
	return 28;
}

int func_203(int iParam0, int iParam1)
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
			if (!func_205(iParam0, iVar0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_204(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_205(int iParam0, int iParam1)
{
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
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 0);
				
				case 1:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 1);
				
				case 2:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 2);
				
				case 3:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 4);
				
				case 1:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 5);
				
				case 2:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 6);
				
				case 3:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 8);
				
				case 1:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 9);
				
				case 2:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 10);
				
				case 3:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 12);
				
				case 1:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 13);
				
				case 2:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 14);
				
				case 3:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_206(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0xA2D6C1E24AF2E058(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (iVar0 != -1)
	{
		if (func_207(iParam1, iParam0, iVar0, 0))
		{
			return func_204(1);
		}
		else
		{
			return func_201(iParam1, 1, iVar0, bParam4);
		}
	}
	else if ((Global_1573689 || Global_1573680) || Global_1583725[iParam0 /*334*/] == 0)
	{
		if (iParam0 == iParam1 || (Global_1573689 == 1 && Global_1573699 == 0))
		{
			return func_204(1);
		}
		else
		{
			return func_201(iParam1, 1, iVar0, bParam4);
		}
	}
	if (Global_1573684 && Global_1573269.f_11 == iParam0)
	{
		return 28;
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

bool func_207(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0xA2D6C1E24AF2E058(iParam0) == -1 && unk_0xA2D6C1E24AF2E058(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0xA2D6C1E24AF2E058(iParam0) == unk_0xA2D6C1E24AF2E058(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0xA2D6C1E24AF2E058(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0xA2D6C1E24AF2E058(iParam0) == iParam2;
	}
	return unk_0xA2D6C1E24AF2E058(iParam0) == iParam2;
}

var func_208()
{
	return Global_2359301.f_2;
}

bool func_209()
{
	return unk_0x889D01384B54BCE3(Global_2359301, 4);
}

bool func_210()
{
	return unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_39.f_18, 14);
}

int func_211(int iParam0)
{
	if (func_175(iParam0, 0))
	{
		return 1;
	}
	if (func_212())
	{
		if (iParam0 == unk_0x1788E93557766241())
		{
			return 1;
		}
	}
	if (unk_0x889D01384B54BCE3(Global_2414327[iParam0 /*255*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_212()
{
	return unk_0x889D01384B54BCE3(Global_2359301, 3);
}

int func_213(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0x11A809BBE3889742())
	{
		return 0;
	}
	if (func_223())
	{
		return 0;
	}
	if (!unk_0x83B393DE31BAC8F0())
	{
		return 0;
	}
	if (func_51())
	{
		return 0;
	}
	if (func_222())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_219(unk_0x1788E93557766241(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_218(unk_0x1788E93557766241()))
		{
			return 0;
		}
	}
	if (func_217())
	{
		return 0;
	}
	if (unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		return 0;
	}
	if (unk_0x2B0FFD431FD5A9FA())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241()))
		{
			return 0;
		}
	}
	if (Global_1573536)
	{
		return 0;
	}
	if (func_216())
	{
		return 0;
	}
	if (func_215())
	{
		return 0;
	}
	if (func_214())
	{
		return 0;
	}
	if (Global_67066)
	{
		return 0;
	}
	if (Global_2453882)
	{
		return 0;
	}
	return 1;
}

bool func_214()
{
	return Global_1583725[unk_0x1788E93557766241() /*334*/].f_173 != 0;
}

bool func_215()
{
	return Global_2428577.f_565;
}

bool func_216()
{
	return Global_2428577.f_715;
}

bool func_217()
{
	return Global_2422491.f_2419.f_585;
}

int func_218(int iParam0)
{
	if (Global_2414327[iParam0 /*255*/].f_205 == 0)
	{
		return 0;
	}
	return 1;
}

int func_219(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_220(iParam0))
		{
			return 1;
		}
	}
	if (Global_1583725[iParam0 /*334*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_220(int iParam0)
{
	return func_221(iParam0);
}

bool func_221(int iParam0)
{
	return unk_0x889D01384B54BCE3(Global_1583725[iParam0 /*334*/].f_13.f_1, 0);
}

bool func_222()
{
	return unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_39.f_18, 0);
}

int func_223()
{
	if (Global_15693 != 0 || unk_0xD47B332729054512())
	{
		return 1;
	}
	return 0;
}

int func_224(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_192(uParam0, bParam2, 0);
	if (unk_0x1DAD7CE53BEE7710() && !bParam2)
	{
		if (unk_0x045E73D0141F51B4(unk_0xF001CC441E445DFD(unk_0x519586565311459B(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x045E73D0141F51B4(unk_0xF001CC441E445DFD(unk_0x09560C7DE2A384BD(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_225(var uParam0)
{
	return uParam0->f_1;
}

void func_226()
{
	Global_2451624.f_1 = 0;
	Global_2451624 = 0;
	Global_2451624.f_2 = 0;
	Global_2451624.f_33 = -1;
	Global_2451624.f_34 = -1;
	StringCopy(&(Global_2451624.f_4), "", 64);
	StringCopy(&(Global_2451624.f_39[0 /*16*/]), "", 64);
	Global_2451624.f_38 = 0;
	Global_2451624.f_56 = 0;
	Global_2451624.f_57 = 0;
	Global_2451624.f_58 = -2;
	Global_2451624.f_3 = 0;
	func_227(&(Global_2451624.f_20));
}

void func_227(var uParam0)
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

void func_228()
{
	Global_2451624.f_2 = 1;
	Global_2451624.f_38 = 1;
	if (unk_0x54CE0989F263D8A3())
	{
		if (unk_0xBAB3F4F44450BC7B())
		{
			while (unk_0x20DA36028A840E31())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0xD39A4B661438BC72();
			Global_2451624 = 0;
			Global_2451624.f_2 = 0;
		}
		else if (func_195(Global_2451624.f_20))
		{
			if (unk_0x765DD998E5AD03DC(&(Global_2451624.f_20)))
			{
				if (!unk_0x7FDDBE39292F85FD(&(Global_2451624.f_20)))
				{
					func_226();
				}
			}
		}
		else
		{
			func_226();
		}
	}
	else
	{
		func_226();
	}
	if (Global_2451624.f_37)
	{
		func_30(0);
	}
	Global_2451624.f_37 = 0;
	Global_2451624.f_3 = 0;
}

void func_229(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_236())
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
			if (iParam1 > 0)
			{
				func_230(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_230(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_230(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_236())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0xC9345B47FCA589CF(func_60()) || unk_0x4E4D77A008D3DA63())
		{
			Global_2538376 = 1;
			return 0;
		}
		if (Global_2436286)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2538377 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2537915[iVar1 /*69*/].f_2 == 0)
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
	if (bVar0 || unk_0xC9C87AEBA01C419B(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0x625C87495B033820(iVar3))
		{
			*uParam0 = func_235(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2537915[*uParam0 /*69*/].f_62 = 1;
				}
			}
			Global_2538373 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2538375 = 1;
			Global_2538378 = iParam4;
			Global_2538380 = iParam3;
			Global_2538381 = 1;
			Global_2538379 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2538378 = iParam4;
			Global_2538380 = iParam3;
			Global_2538381 = 1;
			Global_2538379 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_234(1, iParam4);
			Global_2538375 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_231(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_231(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xD0E2BFCE93AE3ABD(&(Global_2414327[unk_0x1788E93557766241() /*255*/].f_121.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_232(iParam0);
	}
}

void func_232(int iParam0)
{
	bool bVar0;
	struct<69> Var1;
	
	bVar0 = false;
	if (!func_236())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_233(iParam0))
		{
			if (!bVar0)
			{
				unk_0xBDF871285913783C();
			}
		}
		else if (!bVar0)
		{
			unk_0xE4B5006C2633FD81(Global_2537915[iParam0 /*69*/]);
		}
		Var1 = 2147483647;
		Global_2537915[iParam0 /*69*/] = { Var1 };
	}
}

int func_233(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2537915[iParam0 /*69*/].f_5 == 1;
	}
	return 0;
}

void func_234(int iParam0, var uParam1)
{
	Global_2437461 = uParam1;
	Global_2437460 = iParam0;
}

int func_235(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2537915[iVar0 /*69*/].f_2 == 0)
		{
			if (!func_236())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2537915[iVar0 /*69*/].f_2 = 1;
			Global_2537915[iVar0 /*69*/].f_1 = uParam5;
			Global_2537915[iVar0 /*69*/].f_3 = uParam1;
			Global_2537915[iVar0 /*69*/].f_4 = uParam2;
			Global_2537915[iVar0 /*69*/].f_7 = uParam3;
			Global_2537915[iVar0 /*69*/].f_5 = 0;
			Global_2537915[iVar0 /*69*/] = iParam0;
			Global_2537915[iVar0 /*69*/].f_6 = iParam4;
			Global_2537915[iVar0 /*69*/].f_65 = uParam8;
			Global_2537915[iVar0 /*69*/].f_64 = uParam7;
			Global_2537915[iVar0 /*69*/].f_68 = 0;
			Global_2538373 = 0;
			if (bParam6)
			{
				Global_2537915[iVar0 /*69*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_236()
{
	if (unk_0xF6BAF9F0C2863FFE())
	{
		return 1;
	}
	return 0;
}

int func_237(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		iVar0 = unk_0xEADB7AB703FF2133();
	}
	iVar0 = (iVar0 + unk_0xDBED60E4A98E4A0B(-1));
	return iVar0;
}

void func_238(bool bParam0)
{
	if (bParam0)
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_2265, 20);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&Global_2265, 20);
	}
}

void func_239(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_240(char* sParam0)
{
	Global_1579 = 132;
	StringCopy(&Global_15708, sParam0, 64);
	if (Global_14394.f_1 > 3)
	{
		Global_14394.f_1 = 10;
		func_97();
	}
	unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
	unk_0x26221D1D76579618(4);
	unk_0x26221D1D76579618(0);
	unk_0x26221D1D76579618(2);
	unk_0xEBC0B3BDAD1250BE("CELL_CONDFON");
	unk_0x94E086BCAE8856C1(&Global_15708);
	unk_0x9F94C7B5E8C04AB3();
	func_72("CELL_300");
	func_72("CELL_211");
	func_72("CELL_211");
	unk_0xD3DF251F2DF3B257();
	unk_0xD0E2BFCE93AE3ABD(&Global_2264, 20);
	func_91();
	unk_0x29DB79DD4D939B38(&Global_2264, 20);
}

void func_241()
{
	unk_0x35C3C2999E649255();
	Global_2451624 = 1;
	Global_2451624.f_2 = 0;
	Global_2451624.f_33 = -1;
	Global_2451624.f_34 = -1;
	Global_2451624.f_38 = 0;
}

void func_242()
{
	unk_0x7CB5477E93D6A302(iLocal_103);
	unk_0x0D992EF9B9F0C8E3(iLocal_103);
	Local_330.f_2978 = 0;
	unk_0x29DB79DD4D939B38(&Global_2264, 9);
	unk_0x29DB79DD4D939B38(&Global_2264, 29);
	unk_0x29DB79DD4D939B38(&Global_2265, 20);
	unk_0x29DB79DD4D939B38(&Global_2265, 0);
	unk_0x29DB79DD4D939B38(&Global_2265, 18);
	Global_97439.f_29795[12 /*29*/].f_1 = uLocal_302;
	Global_97439.f_29795[2 /*29*/].f_1 = uLocal_303;
	Global_97439.f_29795[0 /*29*/].f_1 = uLocal_304;
	if (Local_330.f_2999 == 1)
	{
		if (unk_0x54CE0989F263D8A3())
		{
			if (Global_2451624.f_33 == -1)
			{
				func_228();
			}
		}
	}
	unk_0x82706E6C897B0FA1();
}

void func_243()
{
	if (!Global_68325)
	{
		if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
		{
			if (unk_0x889D01384B54BCE3(Global_2264, 11))
			{
				if (!Global_14337)
				{
					unk_0xCAD0280A6E9FC35C(unk_0xA16EC202D9D35357(), 0, 1);
				}
				if (Global_68325)
				{
					unk_0xA1478EBA54DDE31B(unk_0xA16EC202D9D35357(), 244, 1);
					unk_0xA1478EBA54DDE31B(unk_0xA16EC202D9D35357(), 243, 1);
					unk_0xA1478EBA54DDE31B(unk_0xA16EC202D9D35357(), 242, 1);
				}
				unk_0x29DB79DD4D939B38(&Global_2264, 11);
			}
		}
	}
}

void func_244()
{
	int iVar0[148];
	int iVar149;
	int iVar150;
	int iVar151;
	
	func_142(Global_14375, "SET_DATA_SLOT_EMPTY", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4EDE34FBADD967A6(0);
	iLocal_93 = 0;
	iLocal_132 = 0;
	iLocal_115 = 0;
	func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), 0f, -1f, -1f, "CELL_232", "CELL_233", "CELL_393", 0, 0);
	iVar149 = 0;
	while (iVar149 < 147)
	{
		iVar150 = 0;
		iVar151 = 147;
		Global_97439.f_29795[iVar151 /*29*/].f_1 = 5000;
		func_16();
		while (iVar150 < 147)
		{
			if (unk_0x889D01384B54BCE3(Global_2265, 0))
			{
				if ((iVar150 == 2 || iVar150 == 0) || iVar150 == 12)
				{
					Global_97439.f_29795[12 /*29*/].f_1 = 3;
					Global_97439.f_29795[2 /*29*/].f_1 = 1;
					Global_97439.f_29795[0 /*29*/].f_1 = 2;
					bLocal_90 = true;
				}
				else
				{
					bLocal_90 = false;
				}
			}
			else if (Global_97439.f_29795[iVar150 /*29*/].f_12[Global_14394] == 1)
			{
				bLocal_90 = true;
			}
			else
			{
				bLocal_90 = false;
			}
			if (bLocal_90)
			{
				if (iVar150 != Global_14394)
				{
					if (iVar0[iVar150] == 0)
					{
						if (Global_97439.f_29795[iVar150 /*29*/].f_19[Global_14394] == 1 || func_79(iVar150, Global_14394))
						{
							fLocal_91 = (unk_0xBBDA792448DB5A89(Global_97439.f_29795[iVar150 /*29*/].f_1) / 100f);
						}
						else
						{
							fLocal_91 = unk_0xBBDA792448DB5A89(Global_97439.f_29795[iVar150 /*29*/].f_1);
						}
						if (Global_97439.f_29795[iVar151 /*29*/].f_19[Global_14394] == 1 || func_79(iVar151, Global_14394))
						{
							fLocal_92 = (unk_0xBBDA792448DB5A89(Global_97439.f_29795[iVar151 /*29*/].f_1) / 100f);
						}
						else
						{
							fLocal_92 = unk_0xBBDA792448DB5A89(Global_97439.f_29795[iVar151 /*29*/].f_1);
						}
						if (fLocal_91 < fLocal_92)
						{
							iVar151 = iVar150;
							if (unk_0x889D01384B54BCE3(Global_2265, 0))
							{
								if (iVar151 == 2)
								{
									func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 0f, -1f, -1f, "CELL_7001", &(Global_97439.f_29795[iVar151 /*29*/].f_3), &(Global_97439.f_29795[iVar151 /*29*/].f_7), 0, 0);
								}
								if (iVar151 == 0)
								{
									func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 0f, -1f, -1f, "CELL_7002", &(Global_97439.f_29795[iVar151 /*29*/].f_3), &(Global_97439.f_29795[iVar151 /*29*/].f_7), 0, 0);
								}
								if (iVar151 == 12)
								{
									func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 0f, -1f, -1f, "CELL_7003", &(Global_97439.f_29795[iVar151 /*29*/].f_3), "CELL_E_311", 0, 0);
								}
							}
						}
					}
				}
			}
			iVar150++;
		}
		Global_14400[iVar149] = iVar151;
		iVar0[iVar151] = 1;
		if (!unk_0x889D01384B54BCE3(Global_2265, 0))
		{
			if (Global_97439.f_29795[iVar151 /*29*/].f_12[Global_14394] == 1)
			{
				if (iVar150 != Global_14394)
				{
					if (Global_97439.f_29795[iVar151 /*29*/].f_24[Global_14394] == 0)
					{
						if (Global_97439.f_29795[iVar151 /*29*/].f_19[Global_14394] == 1 || func_79(iVar151, Global_14394))
						{
							func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 1f, -1f, -1f, &(Global_98[iVar151 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
						else
						{
							func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 0f, -1f, -1f, &(Global_98[iVar151 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
					}
					else if (Global_97439.f_29795[iVar151 /*29*/].f_19[Global_14394] == 1 || func_79(iVar151, Global_14394))
					{
						func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 1f, -1f, -1f, &(Global_97439.f_29795[iVar151 /*29*/].f_3), &(Global_97439.f_29795[iVar151 /*29*/].f_3), &(Global_97439.f_29795[iVar151 /*29*/].f_7), 0, 0);
					}
					else
					{
						func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 0f, -1f, -1f, &(Global_97439.f_29795[iVar151 /*29*/].f_3), &(Global_97439.f_29795[iVar151 /*29*/].f_3), &(Global_97439.f_29795[iVar151 /*29*/].f_7), 0, 0);
					}
				}
			}
		}
		if (Global_97439.f_29795[iVar149 /*29*/].f_12[Global_14394] == 1)
		{
			if (iVar149 != Global_14394)
			{
				iLocal_93++;
			}
		}
		iVar149++;
	}
	if (!unk_0x889D01384B54BCE3(Global_2265, 0))
	{
		if (unk_0x54CE0989F263D8A3())
		{
			if (Global_14337 == 0)
			{
				func_246();
			}
		}
	}
	func_245();
}

void func_245()
{
	if (!Global_14394.f_1 == 10 && !Global_14394.f_1 == 9)
	{
		if (unk_0x889D01384B54BCE3(Global_2264, 9))
		{
			unk_0x4EDE34FBADD967A6(750);
		}
		if (Global_14394.f_1 > 6)
		{
			func_142(Global_14375, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
			if (unk_0x889D01384B54BCE3(Global_2265, 0))
			{
				func_140(Global_14375, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
			}
			else
			{
				func_140(Global_14375, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
			}
			Global_2267 = 99;
			if (unk_0x889D01384B54BCE3(Global_2264, 9))
			{
				if (Global_14382)
				{
					func_139(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
					func_139(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_139(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
					func_139(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_139(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x29DB79DD4D939B38(&Global_2264, 17);
			}
			else if (unk_0x889D01384B54BCE3(Global_2265, 0))
			{
				if (Global_14382)
				{
					func_139(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
					func_139(Global_14375, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_139(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
					func_139(Global_14375, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_139(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14382)
			{
				if (iLocal_93 > 0)
				{
					func_139(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				}
				else
				{
					func_139(Global_14375, "SET_SOFT_KEYS", 2f, 0f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				}
				if (Global_14337 == 0)
				{
					func_139(Global_14375, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, "CELL_207", 0, 0, 0, 0);
					unk_0xD0E2BFCE93AE3ABD(&Global_2264, 17);
				}
				else
				{
					func_139(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0xD0E2BFCE93AE3ABD(&Global_2264, 17);
				}
				func_139(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				if (iLocal_93 > 0)
				{
					func_139(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				else
				{
					func_139(Global_14375, "SET_SOFT_KEYS", 2f, 0f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_139(Global_14375, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xD0E2BFCE93AE3ABD(&Global_2264, 17);
				func_139(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
	Global_97439.f_29795[12 /*29*/].f_1 = uLocal_302;
	Global_97439.f_29795[2 /*29*/].f_1 = uLocal_303;
	Global_97439.f_29795[0 /*29*/].f_1 = uLocal_304;
}

void func_246()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar16;
	int iVar17;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iLocal_94 = iLocal_93;
	iLocal_95 = iLocal_94;
	func_253(&Local_330);
	iVar16 = 0;
	if (Global_68325)
	{
		if (func_249() == 0)
		{
			iVar16 = 1;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar0 = unk_0x42C0B50857BF923B(iVar2);
		if (func_160(iVar0, 0, 1))
		{
			if (iVar16 == 0)
			{
				if (!iVar0 == unk_0x1788E93557766241())
				{
					Local_330[iVar1] = iVar0;
					func_248(unk_0xF3E5891C26514A74(iVar0));
					iVar1++;
				}
			}
		}
		iVar2++;
	}
	Local_330.f_33 = iVar1;
	iVar2 = 0;
	iVar1 = 0;
	if (func_162(0))
	{
		iVar17 = unk_0x21B9BAD22665B0F1();
		if (iVar17 > 100)
		{
			iVar17 = 100;
		}
		iVar2 = 0;
		while (iVar2 <= (iVar17 - 1))
		{
			if (unk_0x464310378A8D6316(unk_0xDB9C1A5CFE8B4DB5(iVar2)))
			{
				if (unk_0x4C6CECFF579BF3A1(unk_0xDB9C1A5CFE8B4DB5(iVar2)))
				{
					Var3 = { func_247(iVar2) };
					if (!unk_0x122CD96CE4AAB4C9(&Var3))
					{
						if (iVar16 == 0)
						{
							if (iVar1 < 100)
							{
								Local_330.f_34[iVar1 /*29*/] = { Var3 };
								if (unk_0x9F979F481F18EB48())
								{
									StringCopy(&(Local_330.f_34[iVar1 /*29*/].f_13), unk_0x2689C34FF964032E(iVar2), 64);
								}
								else
								{
									StringCopy(&(Local_330.f_34[iVar1 /*29*/].f_13), unk_0xDB9C1A5CFE8B4DB5(iVar2), 64);
								}
								func_248(&(Local_330.f_34[iVar1 /*29*/].f_13));
								iVar1++;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	Local_330.f_2935 = (Local_330.f_33 + iVar1);
}

struct<13> func_247(int iParam0)
{
	struct<13> Var0;
	
	unk_0x1317237AE105D897(iParam0, &Var0, 13);
	return Var0;
}

void func_248(var uParam0)
{
	unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
	unk_0x50050D925C27B388(unk_0xBBDA792448DB5A89(2));
	unk_0x50050D925C27B388(unk_0xBBDA792448DB5A89(iLocal_94));
	unk_0x50050D925C27B388(0f);
	unk_0xEBC0B3BDAD1250BE("STRING");
	unk_0x94E086BCAE8856C1(uParam0);
	unk_0x9F94C7B5E8C04AB3();
	func_72("CELL_MP_999");
	func_72("CELL_MP_999");
	unk_0xD3DF251F2DF3B257();
	iLocal_94++;
	iLocal_93++;
}

int func_249()
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_252())
	{
		return 1;
	}
	if (func_251())
	{
		return 1;
	}
	return func_250(120, -1);
}

int func_250(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2471573[iParam0 /*5*/][func_59(iParam1)];
	if (unk_0xD7A6AA341268D26A(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_251()
{
	return Global_1315879;
}

bool func_252()
{
	return Global_1315881;
}

void func_253(var uParam0)
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
	func_239(&(uParam0->f_2979));
	uParam0->f_2999 = 0;
	StringCopy(&(uParam0->f_2983), "", 64);
}

void func_254()
{
	int iVar0[148];
	int iVar149;
	int iVar150;
	int iVar151;
	
	func_142(Global_14375, "SET_DATA_SLOT_EMPTY", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4EDE34FBADD967A6(0);
	func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), 0f, -1f, -1f, "CELL_232", "CELL_233", "CELL_393", 0, 0);
	iLocal_93 = 0;
	if (!unk_0x889D01384B54BCE3(Global_2265, 0))
	{
		if (unk_0x54CE0989F263D8A3())
		{
			if (Global_14337 == 0)
			{
				func_255();
			}
		}
	}
	iLocal_96 = iLocal_93;
	iLocal_132 = 0;
	iLocal_115 = 0;
	iVar149 = iLocal_93;
	while (iVar149 < 147)
	{
		iVar150 = 0;
		iVar151 = 147;
		Global_97439.f_29795[iVar151 /*29*/].f_1 = 5000;
		func_16();
		while (iVar150 < 147)
		{
			if (unk_0x889D01384B54BCE3(Global_2265, 0))
			{
				if ((iVar150 == 2 || iVar150 == 0) || iVar150 == 12)
				{
					Global_97439.f_29795[12 /*29*/].f_1 = 3;
					Global_97439.f_29795[2 /*29*/].f_1 = 1;
					Global_97439.f_29795[0 /*29*/].f_1 = 2;
					bLocal_90 = true;
				}
				else
				{
					bLocal_90 = false;
				}
			}
			else if (Global_97439.f_29795[iVar150 /*29*/].f_12[Global_14394] == 1)
			{
				bLocal_90 = true;
			}
			else
			{
				bLocal_90 = false;
			}
			if (bLocal_90)
			{
				if (iVar150 != Global_14394)
				{
					if (iVar0[iVar150] == 0)
					{
						if (Global_97439.f_29795[iVar150 /*29*/].f_19[Global_14394] == 1 || func_79(iVar150, Global_14394))
						{
							fLocal_91 = (unk_0xBBDA792448DB5A89(Global_97439.f_29795[iVar150 /*29*/].f_1) / 100f);
						}
						else
						{
							fLocal_91 = unk_0xBBDA792448DB5A89(Global_97439.f_29795[iVar150 /*29*/].f_1);
						}
						if (Global_97439.f_29795[iVar151 /*29*/].f_19[Global_14394] == 1 || func_79(iVar151, Global_14394))
						{
							fLocal_92 = (unk_0xBBDA792448DB5A89(Global_97439.f_29795[iVar151 /*29*/].f_1) / 100f);
						}
						else
						{
							fLocal_92 = unk_0xBBDA792448DB5A89(Global_97439.f_29795[iVar151 /*29*/].f_1);
						}
						if (fLocal_91 < fLocal_92)
						{
							iVar151 = iVar150;
							if (unk_0x889D01384B54BCE3(Global_2265, 0))
							{
								if (iVar151 == 2)
								{
									func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 0f, -1f, -1f, "CELL_7001", &(Global_97439.f_29795[iVar151 /*29*/].f_3), &(Global_97439.f_29795[iVar151 /*29*/].f_7), 0, 0);
								}
								if (iVar151 == 0)
								{
									func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 0f, -1f, -1f, "CELL_7002", &(Global_97439.f_29795[iVar151 /*29*/].f_3), &(Global_97439.f_29795[iVar151 /*29*/].f_7), 0, 0);
								}
								if (iVar151 == 12)
								{
									func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 0f, -1f, -1f, "CELL_7003", &(Global_97439.f_29795[iVar151 /*29*/].f_3), "CELL_E_311", 0, 0);
								}
							}
						}
					}
				}
			}
			iVar150++;
		}
		Global_14400[iVar149] = iVar151;
		iVar0[iVar151] = 1;
		if (!unk_0x889D01384B54BCE3(Global_2265, 0))
		{
			if (Global_97439.f_29795[iVar151 /*29*/].f_12[Global_14394] == 1)
			{
				if (iVar150 != Global_14394)
				{
					if (Global_97439.f_29795[iVar151 /*29*/].f_24[Global_14394] == 0)
					{
						if (Global_97439.f_29795[iVar151 /*29*/].f_19[Global_14394] == 1 || func_79(iVar151, Global_14394))
						{
							func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 1f, -1f, -1f, &(Global_98[iVar151 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
						else
						{
							func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 0f, -1f, -1f, &(Global_98[iVar151 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
					}
					else if (Global_97439.f_29795[iVar151 /*29*/].f_19[Global_14394] == 1 || func_79(iVar151, Global_14394))
					{
						func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 1f, -1f, -1f, &(Global_97439.f_29795[iVar151 /*29*/].f_3), &(Global_97439.f_29795[iVar151 /*29*/].f_3), &(Global_97439.f_29795[iVar151 /*29*/].f_7), 0, 0);
					}
					else
					{
						func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 0f, -1f, -1f, &(Global_97439.f_29795[iVar151 /*29*/].f_3), &(Global_97439.f_29795[iVar151 /*29*/].f_3), &(Global_97439.f_29795[iVar151 /*29*/].f_7), 0, 0);
					}
				}
			}
		}
		if (Global_97439.f_29795[iVar149 /*29*/].f_12[Global_14394] == 1)
		{
			if (iVar149 != Global_14394)
			{
				iLocal_93++;
			}
		}
		iVar149++;
	}
	func_245();
}

void func_255()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar16;
	int iVar17;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iLocal_94 = iLocal_93;
	iLocal_95 = iLocal_94;
	func_253(&Local_330);
	iVar16 = 0;
	if (Global_68325)
	{
		if (func_249() == 0)
		{
			iVar16 = 1;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar0 = unk_0x42C0B50857BF923B(iVar2);
		if (func_160(iVar0, 0, 1))
		{
			if (iVar16 == 0)
			{
				if (!iVar0 == unk_0x1788E93557766241())
				{
					Local_330[iVar1] = iVar0;
					func_256(unk_0xF3E5891C26514A74(iVar0));
					iVar1++;
				}
			}
		}
		iVar2++;
	}
	Local_330.f_33 = iVar1;
	iVar1 = 0;
	iVar2 = 0;
	if (func_162(0))
	{
		iVar17 = unk_0x21B9BAD22665B0F1();
		if (iVar17 > 100)
		{
			iVar17 = 100;
		}
		iVar2 = 0;
		while (iVar2 <= (iVar17 - 1))
		{
			if (unk_0x464310378A8D6316(unk_0xDB9C1A5CFE8B4DB5(iVar2)))
			{
				if (unk_0x4C6CECFF579BF3A1(unk_0xDB9C1A5CFE8B4DB5(iVar2)))
				{
					Var3 = { func_247(iVar2) };
					if (!unk_0x122CD96CE4AAB4C9(&Var3))
					{
						if (iVar16 == 0)
						{
							if (iVar1 < 100)
							{
								Local_330.f_34[iVar1 /*29*/] = { Var3 };
								if (unk_0x9F979F481F18EB48())
								{
									StringCopy(&(Local_330.f_34[iVar1 /*29*/].f_13), unk_0x2689C34FF964032E(iVar2), 64);
								}
								else
								{
									StringCopy(&(Local_330.f_34[iVar1 /*29*/].f_13), unk_0xDB9C1A5CFE8B4DB5(iVar2), 64);
								}
								func_256(&(Local_330.f_34[iVar1 /*29*/].f_13));
								iVar1++;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	Local_330.f_2935 = (Local_330.f_33 + iVar1);
}

void func_256(var uParam0)
{
	unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
	unk_0x50050D925C27B388(unk_0xBBDA792448DB5A89(2));
	unk_0x50050D925C27B388(unk_0xBBDA792448DB5A89(iLocal_94));
	unk_0x50050D925C27B388(0f);
	unk_0xEBC0B3BDAD1250BE("STRING");
	unk_0x94E086BCAE8856C1(uParam0);
	unk_0x9F94C7B5E8C04AB3();
	func_72("CELL_MP_999");
	func_72("CELL_MP_999");
	unk_0xD3DF251F2DF3B257();
	iLocal_94++;
	iLocal_93++;
}

