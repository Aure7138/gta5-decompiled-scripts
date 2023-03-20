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
	unk_0x15378F974E08496E();
	unk_0xF3148AAF69AF9CBC(&Global_2264, 17);
	unk_0xC69E84EBBD7166E6(&Global_2265, 18);
	unk_0xC69E84EBBD7166E6(&Global_2265, 20);
	uLocal_302 = Global_98931.f_32499[12 /*29*/].f_1;
	uLocal_303 = Global_98931.f_32499[2 /*29*/].f_1;
	uLocal_304 = Global_98931.f_32499[0 /*29*/].f_1;
	iLocal_103 = unk_0xEDDCCC3D357A50F8();
	if (Global_69020)
	{
		func_256();
	}
	else
	{
		func_246();
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
	iLocal_130 = unk_0x48E480685981C7D4();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x236D8AD7EE179F46(Global_2265, 18))
		{
			func_245();
			if (Global_14394.f_1 > 3)
			{
				Global_14394.f_1 = 8;
			}
			unk_0xC69E84EBBD7166E6(&Global_2265, 18);
			func_244();
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
					if (unk_0x236D8AD7EE179F46(Global_2264, 16))
					{
						func_169();
					}
					else
					{
						func_166();
						if (unk_0x236D8AD7EE179F46(Global_2265, 0))
						{
							iLocal_131 = unk_0x48E480685981C7D4();
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
					if (!unk_0x236D8AD7EE179F46(Global_2264, 9))
					{
						if (func_145(2, Global_14366, 0))
						{
							if (unk_0x236D8AD7EE179F46(Global_2265, 0))
							{
							}
							else if (Global_14337 == 0)
							{
								if (!unk_0x236D8AD7EE179F46(Global_2265, 19))
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
										unk_0xF3148AAF69AF9CBC(&Global_2264, 17);
										func_139(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
									}
									else
									{
										func_139(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
										func_139(Global_14375, "SET_SOFT_KEYS", 1f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
										unk_0xF3148AAF69AF9CBC(&Global_2264, 17);
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
								if (unk_0xD994929E13CC1ED5(&(Global_98931.f_32499[Global_1579 /*29*/].f_3), &(Global_2102[iLocal_328 /*16*/])))
								{
									if (!unk_0xD994929E13CC1ED5(&(Global_2102[iLocal_328 /*16*/].f_8), "CELL_SFUN_NULL"))
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
								unk_0x21ED0FC9B5CC748B(Global_14375, "GET_CURRENT_SELECTION");
								uLocal_98 = unk_0x723E3684EF582590();
								while (!unk_0xAB56DCBFCD98FF03(uLocal_98))
								{
									unk_0x4EDE34FBADD967A6(0);
								}
								iLocal_99 = unk_0x2D1F70CC7C051146(uLocal_98);
								func_120();
							}
						}
						func_166();
						if (bLocal_326 == 1)
						{
							if (!Global_98931.f_16717.f_396)
							{
								if (!func_116(Global_14394, Global_1579))
								{
									Global_98931.f_16717.f_396 = 1;
								}
							}
						}
						if (func_116(Global_14394, Global_1579))
						{
							if (!Global_98931.f_16717.f_397)
							{
								if (bLocal_325 == 1)
								{
									if (func_115(Global_86989))
									{
										switch (func_113("AM_H_BBUDDY"))
										{
											case 2:
												func_111("AM_H_BBUDDY", 2, 500, 10000, 10000, 7, 0, 0, 0);
												break;
											
											case 1:
												Global_98931.f_16717.f_397 = 1;
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
												Global_98931.f_16717.f_397 = 1;
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
						if (Global_69020)
						{
							func_256();
						}
						else
						{
							func_246();
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
					func_244();
					break;
				
				default:
					break;
			}
			if (!Global_14394.f_1 == 8)
			{
				if ((Global_2872 - Global_2871) > Global_2873)
				{
					if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
					{
						if (unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63()))
						{
							if (func_145(2, Global_14362, 0))
							{
								if (unk_0x236D8AD7EE179F46(Global_2265, 0))
								{
									func_75();
								}
								else
								{
									func_75();
									if (!Global_14394.f_1 == 10)
									{
										func_244();
									}
									else if (Global_1579 == 132)
									{
										if (Global_2456109.f_1 || unk_0x236D8AD7EE179F46(Global_2265, 20))
										{
											Global_14394.f_1 = 7;
											func_142(Global_14375, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
											if (unk_0x236D8AD7EE179F46(Global_2265, 0))
											{
												func_140(Global_14375, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
											}
											else
											{
												func_140(Global_14375, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
											}
											unk_0x98A5E5B909F1B162(iLocal_103);
											iLocal_126 = 0;
										}
									}
									else
									{
										func_245();
										Global_14394.f_1 = 7;
										func_2();
										func_142(Global_14375, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
										if (unk_0x236D8AD7EE179F46(Global_2265, 0))
										{
											func_140(Global_14375, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
										}
										else
										{
											func_140(Global_14375, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
										}
										unk_0x98A5E5B909F1B162(iLocal_103);
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
			func_244();
		}
		if (func_1())
		{
			func_244();
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
		if (unk_0x236D8AD7EE179F46(Global_2264, 9))
		{
			unk_0x4EDE34FBADD967A6(750);
		}
		if (Global_14394.f_1 > 6)
		{
			func_142(Global_14375, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
			if (unk_0x236D8AD7EE179F46(Global_2265, 0))
			{
				func_140(Global_14375, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
			}
			else
			{
				func_140(Global_14375, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
			}
			Global_2267 = 99;
			if (unk_0x236D8AD7EE179F46(Global_2264, 9))
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
				unk_0xC69E84EBBD7166E6(&Global_2264, 17);
			}
			else if (unk_0x236D8AD7EE179F46(Global_2265, 0))
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
					unk_0xF3148AAF69AF9CBC(&Global_2264, 17);
				}
				else
				{
					func_139(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0xF3148AAF69AF9CBC(&Global_2264, 17);
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
				unk_0xF3148AAF69AF9CBC(&Global_2264, 17);
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
			unk_0x86B83C54AF71BD12(&Global_16716, 1);
			while (!unk_0xCD8DA898314F3016(1))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			cLocal_133 = { Global_98[Global_1579 /*10*/] };
			StringConCat(&cLocal_133, "_1", 16);
			if (unk_0x7281387C8D4EC316(&cLocal_133) || iLocal_305 == 1)
			{
				iLocal_127 = Global_16713;
				if (func_74(129))
				{
					iLocal_127 = Global_87570;
				}
			}
			else
			{
				iLocal_127 = Global_16712;
			}
			if ((iLocal_305 == 1 && unk_0xD994929E13CC1ED5(&cLocal_306, "CELLPHONE_CHEAT")) && Global_69020 == 0)
			{
				if ((unk_0xD994929E13CC1ED5(&Local_310, "CHEAT_SEAPLANE") || unk_0xD994929E13CC1ED5(&Local_310, "CHEAT_DUELC")) || unk_0xD994929E13CC1ED5(&Local_310, "CHEAT_BUBBLE"))
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
					iLocal_128 = unk_0x48E480685981C7D4();
					unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
					unk_0xBD0C54D89298454E(4);
					unk_0xBD0C54D89298454E(0);
					unk_0xBD0C54D89298454E(3);
					unk_0x6CE839BF5D87A428("STRING");
					unk_0xF42BCF5DDBBFC69A(&cLocal_108, -1);
					unk_0xC3822F70D0E7940B();
					func_72("CELL_300");
					if (unk_0xD994929E13CC1ED5(&Local_310, "CHEAT_MONOC"))
					{
						func_72("CELL_MONOSIGNAL");
					}
					else if (unk_0xD994929E13CC1ED5(&Local_310, "CHEAT_DIRECTOR"))
					{
						func_72("CELL_DRCT");
					}
					else
					{
						func_72("CELL_CHEAT");
					}
					func_72("CELL_195");
					unk_0xBA9BA6181F2B6111();
					func_142(Global_14375, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
					iLocal_126 = 1;
				}
				else
				{
					iLocal_126 = 2;
					iLocal_128 = unk_0x48E480685981C7D4();
				}
			}
			else
			{
				iLocal_126 = 2;
				iLocal_128 = unk_0x48E480685981C7D4();
			}
			break;
		
		case 1:
			iLocal_129 = unk_0x48E480685981C7D4();
			if ((iLocal_129 - iLocal_128) > 1500)
			{
				iLocal_126 = 3;
			}
			break;
		
		case 2:
			iLocal_129 = unk_0x48E480685981C7D4();
			if (iLocal_127 != Global_16712)
			{
				if (unk_0xBDC7EB9D855C9610(iLocal_103))
				{
					if (Global_2456109.f_37 == 0)
					{
						if (Global_14337)
						{
							unk_0x35D7948F61AA3FEC(iLocal_103, "Dial_and_Remote_Ring", &Global_14383, 1);
						}
						else if ((iLocal_129 - iLocal_128) > 1700)
						{
							unk_0x35D7948F61AA3FEC(iLocal_103, "Remote_Ring", &Global_14383, 1);
						}
					}
				}
			}
			else if ((func_74(130) || func_74(132)) || func_74(128))
			{
				if (unk_0xBDC7EB9D855C9610(iLocal_103))
				{
					if (Global_2456109.f_37 == 0)
					{
						if (Global_14337)
						{
							unk_0x35D7948F61AA3FEC(iLocal_103, "Dial_and_Remote_Ring", &Global_14383, 1);
						}
						else if ((iLocal_129 - iLocal_128) > 1700)
						{
							unk_0x35D7948F61AA3FEC(iLocal_103, "Remote_Ring", &Global_14383, 1);
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
						if (!unk_0x236D8AD7EE179F46(Global_2265, 20))
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
						unk_0x98A5E5B909F1B162(iLocal_103);
						iLocal_117 = 0;
						unk_0x5AE11BC36633DE4E(0);
						if (Global_98931.f_32499[Global_1579 /*29*/].f_24[Global_14394] == 0)
						{
							if (Global_1579 == 132)
							{
								unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
								unk_0xBD0C54D89298454E(4);
								unk_0xBD0C54D89298454E(0);
								unk_0xBD0C54D89298454E(2);
								unk_0x6CE839BF5D87A428("CELL_CONDFON");
								unk_0x6222A57F463E8EE7(&Global_15708);
								unk_0xC3822F70D0E7940B();
								func_72("CELL_300");
								func_72("CELL_220");
								func_72("CELL_219");
								unk_0xBA9BA6181F2B6111();
							}
							else
							{
								func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(5), -1f, -1f, &(Global_98[Global_1579 /*10*/].f_4), "CELL_300", "CELL_220", "CELL_195", 0);
							}
						}
						else
						{
							func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(5), -1f, -1f, &(Global_98931.f_32499[Global_1579 /*29*/].f_3), &(Global_98931.f_32499[Global_1579 /*29*/].f_7), "CELL_220", &(Global_98931.f_32499[Global_1579 /*29*/].f_3), 0);
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
				if (unk_0xD994929E13CC1ED5(&cLocal_306, "CELLPHONE_CHEAT") && Global_69020 == 0)
				{
					if (unk_0xD994929E13CC1ED5(&Local_310, "CHEAT_MONOC"))
					{
						if (Global_3068 == 0)
						{
							Global_3068 = 1;
							Global_98931.f_12665[0 /*20*/].f_6 = 5;
							Global_98931.f_12665[2 /*20*/].f_6 = 5;
							Global_98931.f_12665[1 /*20*/].f_6 = 5;
							if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
							{
								if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
								{
									if (!unk_0xF46EAA2C25D08B6F(4, unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), 40f))
									{
										unk_0x337FDC38F86A8A02(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) + Vector(2f, 0f, 0f), 4, 0.1f, 1, 0, 1065353216);
									}
								}
							}
						}
						else
						{
							Global_3068 = 0;
						}
					}
					if (unk_0xD994929E13CC1ED5(&Local_310, "CHEAT_SUPJUM"))
					{
						func_71(0, 0);
					}
					if (unk_0xD994929E13CC1ED5(&Local_310, "CHEAT_HEALA"))
					{
						func_71(6, 0);
					}
					if (unk_0xD994929E13CC1ED5(&Local_310, "CHEAT_SLIDEYC"))
					{
						func_71(1, 0);
					}
					if (unk_0xD994929E13CC1ED5(&Local_310, "CHEAT_FASTR"))
					{
						func_71(2, 0);
					}
					if (unk_0xD994929E13CC1ED5(&Local_310, "CHEAT_WANTDN"))
					{
						func_71(9, 0);
					}
					if (unk_0xD994929E13CC1ED5(&Local_310, "CHEAT_WANTUP"))
					{
						func_71(8, 0);
					}
					if (unk_0xD994929E13CC1ED5(&Local_310, "CHEAT_WEATHER"))
					{
						func_71(5, 0);
					}
					if (unk_0xD994929E13CC1ED5(&Local_310, "CHEAT_FASTS"))
					{
						func_71(3, 0);
					}
					if (unk_0xD994929E13CC1ED5(&Local_310, "CHEAT_POWER"))
					{
						func_71(7, 0);
					}
					if (unk_0xD994929E13CC1ED5(&Local_310, "CHEAT_CHUTE"))
					{
						func_71(10, 0);
					}
					if (unk_0xD994929E13CC1ED5(&Local_310, "CHEAT_BANG"))
					{
						func_71(11, 0);
					}
					if (unk_0xD994929E13CC1ED5(&Local_310, "CHEAT_FLAMB"))
					{
						func_71(12, 0);
					}
					if (unk_0xD994929E13CC1ED5(&Local_310, "CHEAT_EXPMEL"))
					{
						func_71(13, 0);
					}
					if (unk_0xD994929E13CC1ED5(&Local_310, "CHEAT_ZEROG"))
					{
						func_71(14, 0);
					}
					if (unk_0xD994929E13CC1ED5(&Local_310, "CHEAT_INVINC"))
					{
						func_71(15, 0);
					}
					if (unk_0xD994929E13CC1ED5(&Local_310, "CHEAT_SLOWMO"))
					{
						func_71(16, 0);
					}
					if (unk_0xD994929E13CC1ED5(&Local_310, "CHEAT_SKYFA"))
					{
						func_71(17, 0);
					}
					if (unk_0xD994929E13CC1ED5(&Local_310, "CHEAT_DRUNK"))
					{
						func_71(18, 0);
					}
					if (unk_0xD994929E13CC1ED5(&Local_310, "CHEAT_DEADEYE"))
					{
						func_71(19, 0);
					}
					if (unk_0xD994929E13CC1ED5(&Local_310, "CHEAT_WEAPONS"))
					{
						func_71(4, 0);
					}
					if (unk_0xD994929E13CC1ED5(&Local_310, "CHEAT_BUZZARD"))
					{
						func_71(20, joaat("buzzard"));
					}
					if (unk_0xD994929E13CC1ED5(&Local_310, "CHEAT_COMET2"))
					{
						func_71(20, joaat("comet2"));
					}
					if (unk_0xD994929E13CC1ED5(&Local_310, "CHEAT_BMX"))
					{
						func_71(20, joaat("bmx"));
					}
					if (unk_0xD994929E13CC1ED5(&Local_310, "CHEAT_CADDY"))
					{
						func_71(20, joaat("caddy"));
					}
					if (unk_0xD994929E13CC1ED5(&Local_310, "CHEAT_DUSTER"))
					{
						func_71(20, joaat("duster"));
					}
					if (unk_0xD994929E13CC1ED5(&Local_310, "CHEAT_PCJ"))
					{
						func_71(20, joaat("pcj"));
					}
					if (unk_0xD994929E13CC1ED5(&Local_310, "CHEAT_RAPIDGT"))
					{
						func_71(20, joaat("rapidgt"));
					}
					if (unk_0xD994929E13CC1ED5(&Local_310, "CHEAT_STRETCH"))
					{
						func_71(20, joaat("stretch"));
					}
					if (unk_0xD994929E13CC1ED5(&Local_310, "CHEAT_STUNT"))
					{
						func_71(20, joaat("stunt"));
					}
					if (unk_0xD994929E13CC1ED5(&Local_310, "CHEAT_TRASH"))
					{
						func_71(20, joaat("trash"));
					}
					if (unk_0xD994929E13CC1ED5(&Local_310, "CHEAT_SANCHEZ"))
					{
						func_71(20, joaat("sanchez"));
					}
					if (func_73())
					{
						if (unk_0xD994929E13CC1ED5(&Local_310, "CHEAT_SEAPLANE"))
						{
							func_71(20, joaat("dodo"));
						}
						if (unk_0xD994929E13CC1ED5(&Local_310, "CHEAT_DUELC"))
						{
							func_71(20, joaat("dukes2"));
						}
						if (unk_0xD994929E13CC1ED5(&Local_310, "CHEAT_BUBBLE"))
						{
							func_71(20, joaat("submersible2"));
						}
					}
					if (unk_0xD994929E13CC1ED5(&Local_310, "CHEAT_DIRECTOR"))
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
				else if (unk_0xD994929E13CC1ED5(&cLocal_306, "CELLPHONE_CHEAT"))
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
						iVar7 = unk_0x0C937048CF6952B5();
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
						if (Global_69020)
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
						iLocal_329 = unk_0x2E0A9E3291F398E3(0, 100);
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
						iLocal_329 = unk_0x2E0A9E3291F398E3(0, 100);
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
						iLocal_329 = unk_0x2E0A9E3291F398E3(0, 100);
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
				unk_0xF3148AAF69AF9CBC(&Global_2265, 31);
			}
			break;
		
		case 4:
			if (unk_0xBDC7EB9D855C9610(iLocal_103))
			{
				unk_0x35D7948F61AA3FEC(iLocal_103, "Remote_Engaged", &Global_14383, 1);
			}
			if (unk_0xC9D9444186B5A374() > 1500)
			{
				if (iLocal_117 == 0)
				{
					if (Global_14394 == 2)
					{
						if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
						{
							func_4(unk_0x81873881071CD9FE(), "PHONE_CALL_NOT_CONNECTED", 24);
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
	unk_0xE66E1668957ECE7B(uParam0, sParam1, func_5(iParam2), 1);
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
	return unk_0x236D8AD7EE179F46(Global_98931.f_17188[iParam0 /*6*/], 3);
}

int func_7(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_98931.f_7699.f_99.f_58[iParam0];
}

int func_8(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_98931.f_7699.f_330[iParam0 /*6*/];
}

void func_9(var uParam0, int iParam1, var uParam2, char[4] cParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	if (Global_69020 || func_27())
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
					unk_0x9E95048D8C96C1EA(0);
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
		if (unk_0xE1772957381F609F())
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
			unk_0xC69E84EBBD7166E6(&Global_2264, 20);
			unk_0xC69E84EBBD7166E6(&Global_2265, 17);
			unk_0xC69E84EBBD7166E6(&Global_2266, 0);
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
			if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
			{
				if (unk_0xF371669B2D6B4C8E(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (func_15())
				{
					return 0;
				}
				if (unk_0xE8CA5AAF4928DD46(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0x326033AAF1073AF3(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0xEAF6063E5F7E0DD4(unk_0x81873881071CD9FE(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69020)
				{
					if (unk_0x2C237D28F05F0008(unk_0x81873881071CD9FE()))
					{
						return 0;
					}
					if (unk_0x1E73DDF10071C453(unk_0x1329891157A54C63()))
					{
						return 0;
					}
					if (unk_0x2881A00480A747EC(unk_0x81873881071CD9FE()))
					{
						return 0;
					}
					if (unk_0x2C3A6C25D061092B(unk_0x1329891157A54C63()))
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
				if (unk_0x236D8AD7EE179F46(Global_2264, 9))
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
	unk_0x9E95048D8C96C1EA(0);
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
	unk_0xC69E84EBBD7166E6(&Global_2265, 16);
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
	
	if (Global_69020)
	{
		iVar0 = 0;
		unk_0x5F446E70DA9B8122(unk_0x81873881071CD9FE(), &iVar1, 1);
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x52946741890858CC() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		if (unk_0x99E8A1E54746EF15(unk_0x81873881071CD9FE(), 78, 1))
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
		if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[0 /*29*/])
			{
				Global_14394 = 0;
			}
			else if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[1 /*29*/])
			{
				Global_14394 = 1;
			}
			else if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[2 /*29*/])
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
		if (Global_69020)
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
	return Global_98931.f_1750.f_539.f_3549;
}

void func_18()
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
	{
		if (func_21(Global_98931.f_1750.f_539.f_3549) != unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()))
		{
			iVar0 = func_20(unk_0x81873881071CD9FE());
			if (func_19(iVar0) && (!func_22(14) || Global_97883))
			{
				if (Global_98931.f_1750.f_539.f_3549 != iVar0 && func_19(Global_98931.f_1750.f_539.f_3549))
				{
					Global_98931.f_1750.f_539.f_3550 = Global_98931.f_1750.f_539.f_3549;
				}
				Global_98931.f_1750.f_539.f_3551 = iVar0;
				Global_98931.f_1750.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_98931.f_1750.f_539.f_3549 != 145)
			{
				Global_98931.f_1750.f_539.f_3551 = Global_98931.f_1750.f_539.f_3549;
			}
			return;
		}
	}
	Global_98931.f_1750.f_539.f_3549 = 145;
}

bool func_19(int iParam0)
{
	return iParam0 < 3;
}

int func_20(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		iVar1 = unk_0x14B7103DBD149FFE(uParam0);
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
		return Global_98931.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_22(int iParam0)
{
	return Global_35443 == iParam0;
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
				return Global_1334766.f_203[iParam1];
			}
			break;
	}
	return unk_0x236D8AD7EE179F46(Global_1334766.f_949, iParam0);
}

void func_25()
{
	unk_0xE1BF98267C70D822();
	Global_16704 = 0;
	if ((unk_0xE0A43912E369FFA5() || Global_14394.f_1 == 9) || Global_14393 == 1)
	{
		unk_0x9E95048D8C96C1EA(0);
		Global_15693 = 6;
		Global_14394.f_1 = 3;
		return;
	}
	if (unk_0xE1772957381F609F())
	{
		unk_0x9E95048D8C96C1EA(1);
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
	return Global_1315867;
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
	if (!Global_69020)
	{
		if (!unk_0x5FEB513A4402FD59(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xE814EBF9E6A3FB47(iParam2, 0);
			}
			else
			{
				unk_0xE814EBF9E6A3FB47(iParam2, 1);
			}
		}
		if (!unk_0x5FEB513A4402FD59(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xA7ED59066FB82067(iParam2, 0);
			}
			else
			{
				unk_0xA7ED59066FB82067(iParam2, 1);
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
		unk_0xF3148AAF69AF9CBC(&Global_2265, 16);
	}
	if (unk_0xE0A43912E369FFA5())
	{
		unk_0x9E95048D8C96C1EA(0);
	}
	Global_15693 = 5;
	if (iParam0 == 1)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2264, 30);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&Global_2264, 30);
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
				unk_0x2B4380FBF49E1B71(&Global_14331);
			}
			Global_14322 = { Global_14340[Global_14339 /*3*/] };
			unk_0xB30AC22133A50DEE(Global_14322);
		}
	}
	else if (Global_14552 == 1)
	{
		Global_14552 = 0;
		Global_14322 = { Global_14347[Global_14339 /*3*/] };
		if (bParam1)
		{
			unk_0xB30AC22133A50DEE(Global_14331);
		}
		else
		{
			unk_0xB30AC22133A50DEE(Global_14322);
		}
	}
}

int func_32(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14394.f_1 > 3)
		{
			if (unk_0x236D8AD7EE179F46(Global_2264, 14))
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
	if (unk_0x968BF1C2C695B61A(joaat("cellphone_flashhand")) > 0)
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
	
	unk_0xD338B0444EFB8C65(1);
	unk_0x89086B596828ACBE(2, 201);
	unk_0x89086B596828ACBE(2, 202);
	fVar0 = 0f;
	while ((!unk_0x093DEAE9A023FAA0(2, 201) && !unk_0x093DEAE9A023FAA0(2, 202)) || fVar0 < 1f)
	{
		unk_0xDC38CC1E35B6A5D7("VEUI_HDR_ALERT", "VE_DIR_MODE_SURE", 18, 0, 0, -1, 0, 0, 1);
		unk_0x4EDE34FBADD967A6(0);
		fVar0 = (fVar0 + unk_0x8D51D24D214E2FF2());
	}
	unk_0xD338B0444EFB8C65(0);
	if (unk_0x093DEAE9A023FAA0(2, 201))
	{
		unk_0x3B283FEBA87FFBEB(0);
		Global_97878 = 1;
	}
}

void func_34(int iParam0)
{
	float fVar0;
	char* sVar1;
	
	unk_0xD338B0444EFB8C65(1);
	unk_0x89086B596828ACBE(2, 201);
	fVar0 = 0f;
	while (!unk_0x093DEAE9A023FAA0(2, 201) || fVar0 < 1f)
	{
		sVar1 = func_35(iParam0, 119);
		unk_0x7B1776B3B53F8D74("FBR_GENERIC", 16384, 0, 0, -1, "FBR_DIR_MODE", sVar1, 1);
		unk_0x4EDE34FBADD967A6(0);
		fVar0 = (fVar0 + unk_0x8D51D24D214E2FF2());
	}
	unk_0xD338B0444EFB8C65(0);
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
	if (unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		return 13;
	}
	if (bParam1)
	{
		if (unk_0x968BF1C2C695B61A(unk_0xA60A6B4935A3E9A7()) > 1)
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
	if (Global_88062)
	{
		return 3;
	}
	if (Global_25199)
	{
		return 8;
	}
	if (Global_25094)
	{
		return 8;
	}
	if (Global_2621550)
	{
		if (unk_0x968BF1C2C695B61A(-1516147206) > 0)
		{
			return 3;
		}
	}
	else if (Global_2621549)
	{
		if (unk_0x968BF1C2C695B61A(2006115718) > 0)
		{
			return 3;
		}
	}
	else if (unk_0x968BF1C2C695B61A(joaat("mission_stat_watcher")) > 0)
	{
		return 3;
	}
	if (unk_0x968BF1C2C695B61A(joaat("finale_choice")) > 0)
	{
		return 3;
	}
	if (unk_0x968BF1C2C695B61A(joaat("creator")) > 0)
	{
		return 3;
	}
	if (unk_0x968BF1C2C695B61A(joaat("respawn_controller")) > 0)
	{
		return 13;
	}
	if (func_66(bParam1))
	{
		return 3;
	}
	if (unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE()) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE()))
	{
		return 12;
	}
	if (func_65(Global_97956, 256))
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
	if (func_51() && !Global_97882)
	{
		return 8;
	}
	if (func_55())
	{
		return 5;
	}
	if (unk_0xF33755A765033580() || func_50())
	{
		return 4;
	}
	if (func_49())
	{
		return 4;
	}
	if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
	{
		if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
		{
			iVar0 = func_40(60);
			if (iVar0 != 0)
			{
				return iVar0;
			}
			if (unk_0x326033AAF1073AF3(unk_0x81873881071CD9FE()) || unk_0x212579F7919ACAFB(unk_0x81873881071CD9FE()) != -1)
			{
				return 11;
			}
			if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1) || Global_97978)
			{
				return 10;
			}
		}
	}
	if (Global_25197)
	{
		return 8;
	}
	if (Global_69018)
	{
		return 4;
	}
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) > 0 || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1))
		{
			return 6;
		}
		if (unk_0x1E73DDF10071C453(unk_0x1329891157A54C63()))
		{
			return 8;
		}
		if (unk_0xEE6F2DE3DB966195(unk_0x81873881071CD9FE()))
		{
			return 8;
		}
	}
	if (unk_0x1C6DF6AD69BE853E())
	{
		return 7;
	}
	if (func_39())
	{
		return 8;
	}
	if (Global_24948)
	{
		return 3;
	}
	if (unk_0xCA020F3125A93EB9())
	{
		return 4;
	}
	if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 439.4357f, -997.4747f, 28.9584f, 428.3288f, -997.0398f, 24.8372f, 8f, 0, 1, 0))
	{
		return 9;
	}
	if (unk_0x2C237D28F05F0008(unk_0x81873881071CD9FE()))
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
	if (unk_0x3ABE1D6542902581(unk_0x81873881071CD9FE()))
	{
		return 9;
	}
	return 0;
}

int func_37(bool bParam0)
{
	if (unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		return 0;
	}
	if ((((((((((!unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63()) || !unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63())) || unk_0xADBE95599A01932F(unk_0x81873881071CD9FE())) || unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0)) || unk_0xF371669B2D6B4C8E(unk_0x81873881071CD9FE())) || unk_0x70847137E3B37A59(unk_0x81873881071CD9FE())) || unk_0x463E18F5BBDEA9C4(unk_0x81873881071CD9FE())) || unk_0xEE6F2DE3DB966195(unk_0x81873881071CD9FE())) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1))
	{
		return 0;
	}
	if ((((((func_49() || Global_17099.f_4) || func_38()) || unk_0xF0DD05479A1FFF98()) || unk_0xCEECC2F87148C3A4()) || func_50()) || func_69())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (unk_0x0C59B91B32EEDDEE())
		{
			return 0;
		}
	}
	return 1;
}

int func_38()
{
	if (!unk_0x1C6DF6AD69BE853E())
	{
		return Global_88620.f_44 == 1;
	}
	return 0;
}

bool func_39()
{
	return Global_52584;
}

int func_40(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0) && unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
	{
		return 5;
	}
	Var0 = { func_48(unk_0x1329891157A54C63()) };
	if (Global_98018[10 /*10*/].f_1)
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
			if (unk_0xE15A3D0C3294EAF3(Var0, -61.26628f, -1096.505f, 25.52088f, -58.43333f, -1101.147f, 29.24937f, 1.25f, 0, 1))
			{
				return 9;
			}
		}
	}
	if (unk_0xB7A628320EFF8E47(Var0, -740.9346f, 5599.426f, 40.71515f) < 11f)
	{
		if (unk_0xE15A3D0C3294EAF3(Var0, -746.1299f, 5599.226f, 40.47561f, -737.632f, 5599.364f, 44.1693f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (unk_0xB7A628320EFF8E47(Var0, -740.9346f, 5590.426f, 40.71515f) < 11f)
	{
		if (unk_0xE15A3D0C3294EAF3(Var0, -746.1299f, 5590.667f, 40.4392f, -737.6585f, 5590.592f, 44.52327f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (unk_0xB7A628320EFF8E47(Var0, 446.3265f, 5566.35f, 780.2151f) < 11f)
	{
		if (unk_0xE15A3D0C3294EAF3(Var0, 451.1661f, 5566.451f, 780.1703f, 442.5211f, 5566.374f, 783.9819f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (unk_0xB7A628320EFF8E47(Var0, 446.3265f, 5577.35f, 780.2151f) < 11f)
	{
		if (unk_0xE15A3D0C3294EAF3(Var0, 451.1661f, 5577.867f, 780.1899f, 442.5765f, 5577.579f, 783.9086f, 3.375f, 0, 1))
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
	iVar3 = unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE());
	if (iVar3 == 0)
	{
		return 0;
	}
	else if ((iVar3 == Global_97894 || iVar3 == Global_97895) || iVar3 == Global_97896)
	{
		return 9;
	}
	else if (iVar3 == Global_97885)
	{
		return 9;
	}
	else if (iVar3 == Global_97886)
	{
		return 9;
	}
	else if (iVar3 == Global_97889)
	{
		return 9;
	}
	else if (iVar3 == Global_97888)
	{
		return 9;
	}
	else if (iVar3 == Global_97890)
	{
		return 9;
	}
	else if (iVar3 == Global_97891)
	{
		return 9;
	}
	else if (iVar3 == Global_97892)
	{
		return 9;
	}
	else if (iVar3 == Global_97893)
	{
		return 9;
	}
	else if (iVar3 == Global_97897)
	{
		return 9;
	}
	else if (iVar3 == Global_97898)
	{
		return 9;
	}
	else if (iVar3 == Global_97899)
	{
		return 9;
	}
	else if (iVar3 == Global_97900)
	{
		return 9;
	}
	else if (iVar3 == Global_97901)
	{
		return 9;
	}
	else if ((iVar3 == Global_97902 || iVar3 == Global_97903) && func_8(67))
	{
		return 9;
	}
	iVar4 = 0;
	while (iVar4 <= (19 - 1))
	{
		if (iVar3 == Global_97904[iVar4])
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
	func_44(24, &Global_97885);
	func_44(49, &Global_97886);
	func_44(10, &Global_97894);
	func_44(9, &Global_97895);
	func_44(8, &Global_97896);
	func_44(21, &Global_97897);
	func_44(11, &Global_97898);
	func_44(18, &Global_97902);
	func_44(19, &Global_97903);
	Global_97889 = unk_0xA17AB437A96481B6(-76.6618f, 6222.191f, 32.2412f, "V_factory1");
	Global_97888 = unk_0xA17AB437A96481B6(-98.2637f, 6210.022f, 31.924f, "V_factory2");
	Global_97890 = unk_0xA17AB437A96481B6(-115.8956f, 6179.749f, 32.4102f, "V_factory3");
	Global_97891 = unk_0xA17AB437A96481B6(-149.8199f, 6144.978f, 31.3353f, "V_factory4");
	Global_97892 = unk_0xA17AB437A96481B6(16.3605f, -1100.259f, 28.797f, "v_gun");
	Global_97893 = unk_0xA17AB437A96481B6(125.1948f, -1284.13f, 28.2847f, "v_strip3");
	Global_97899 = unk_0xA17AB437A96481B6(-545.5717f, 1987.145f, 126.0262f, "cs6_08_mine_int");
	Global_97900 = unk_0xA17AB437A96481B6(2330.598f, 2571.935f, 45.6802f, "ch3_01_trlr_int");
	Global_97901 = unk_0xA17AB437A96481B6(-54.7f, -1092.7f, 26.4f, "v_carshowroom");
	iVar0 = 0;
	while (iVar0 <= (19 - 1))
	{
		Global_97904[iVar0] = unk_0xB3202EEA6EFADBA8(func_42(iVar0));
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
	*uParam1 = unk_0xA17AB437A96481B6(Var0, Var0.f_3);
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
			Var0 = { Global_1049033[34 /*1485*/].f_146.f_1101 + Vector(1f, 0f, 0f) };
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
		
		case 47:
			Var0 = { -16.29585f, -684.0385f, 33.50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 48:
			Var0 = { 341.1f, -1000f, -99.2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 49:
			Var0 = { 199.9716f, -1018.954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 50:
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
	if (Global_85127[iParam0 /*2*/])
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_81894)
	{
		if (Global_81894[iVar0 /*5*/] != -1)
		{
			if (Global_69289.f_109[Global_81894[iVar0 /*5*/] /*4*/] == iParam0)
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
	return unk_0xB6AE0DAE06D56288(unk_0xE495E987CB2BE7EF(iParam0), 0);
}

bool func_49()
{
	return Global_1315892;
}

int func_50()
{
	if (unk_0x968BF1C2C695B61A(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_51()
{
	return unk_0x48E480685981C7D4() <= Global_17238.f_5630 + 100;
}

bool func_52()
{
	return unk_0x236D8AD7EE179F46(Global_69268, 9);
}

bool func_53()
{
	return unk_0x236D8AD7EE179F46(Global_69268, 8);
}

int func_54()
{
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (((((((((((((((unk_0x0BAE7BE122182FA8(unk_0x81873881071CD9FE(), "misshair_shop@barbers", "player_intro", 3) || unk_0x0BAE7BE122182FA8(unk_0x81873881071CD9FE(), "misshair_shop@barbers", "player_base", 3)) || unk_0x0BAE7BE122182FA8(unk_0x81873881071CD9FE(), "misshair_shop@barbers", "player_enterchair", 3)) || unk_0x0BAE7BE122182FA8(unk_0x81873881071CD9FE(), "misshair_shop@barbers", "player_exitchair", 3)) || unk_0x0BAE7BE122182FA8(unk_0x81873881071CD9FE(), "misshair_shop@barbers", "player_idle_a", 3)) || unk_0x0BAE7BE122182FA8(unk_0x81873881071CD9FE(), "misshair_shop@barbers", "player_idle_b", 3)) || unk_0x0BAE7BE122182FA8(unk_0x81873881071CD9FE(), "misshair_shop@barbers", "player_idle_c", 3)) || unk_0x0BAE7BE122182FA8(unk_0x81873881071CD9FE(), "misshair_shop@barbers", "player_idle_d", 3)) || unk_0x0BAE7BE122182FA8(unk_0x81873881071CD9FE(), "misshair_shop@hair_dressers", "player_intro", 3)) || unk_0x0BAE7BE122182FA8(unk_0x81873881071CD9FE(), "misshair_shop@hair_dressers", "player_base", 3)) || unk_0x0BAE7BE122182FA8(unk_0x81873881071CD9FE(), "misshair_shop@hair_dressers", "player_enterchair", 3)) || unk_0x0BAE7BE122182FA8(unk_0x81873881071CD9FE(), "misshair_shop@hair_dressers", "player_exitchair", 3)) || unk_0x0BAE7BE122182FA8(unk_0x81873881071CD9FE(), "misshair_shop@hair_dressers", "player_idle_a", 3)) || unk_0x0BAE7BE122182FA8(unk_0x81873881071CD9FE(), "misshair_shop@hair_dressers", "player_idle_b", 3)) || unk_0x0BAE7BE122182FA8(unk_0x81873881071CD9FE(), "misshair_shop@hair_dressers", "player_idle_c", 3)) || unk_0x0BAE7BE122182FA8(unk_0x81873881071CD9FE(), "misshair_shop@hair_dressers", "player_idle_d", 3))
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
		return unk_0x236D8AD7EE179F46(Global_90861.f_1279[iParam0], iParam1);
	}
	else if (unk_0x1C6DF6AD69BE853E())
	{
		if (func_62() == 0)
		{
			return unk_0x236D8AD7EE179F46(func_58(func_61(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x236D8AD7EE179F46(Global_98931.f_668[iParam0], iParam1);
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
	uVar0 = Global_2459767[iParam0 /*5*/][func_59(iParam1)];
	if (unk_0x85C45034BA638694(uVar0, &uVar1, -1))
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
			Global_2459480 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2459480 = 1;
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
			return 817;
			break;
		
		case 1:
			return 818;
			break;
		
		case 2:
			return 819;
			break;
		
		case 3:
			return 820;
			break;
		
		case 4:
			return 821;
			break;
		
		case 5:
			return 822;
			break;
		
		case 6:
			return 823;
			break;
		
		case 7:
			return 824;
			break;
		
		case 8:
			return 825;
			break;
		
		case 9:
			return 826;
			break;
		
		case 10:
			return 827;
			break;
		
		case 11:
			return 828;
			break;
		
		case 12:
			return 829;
			break;
		
		case 13:
			return 830;
			break;
		
		case 14:
			return 831;
			break;
		
		case 15:
			return 833;
			break;
		
		case 16:
			return 834;
			break;
		
		case 17:
			return 835;
			break;
		
		case 18:
			return 836;
			break;
		
		case 19:
			return 837;
			break;
		
		case 20:
			return 838;
			break;
		
		case 21:
			return 839;
			break;
		
		case 22:
			return 840;
			break;
		
		case 23:
			return 841;
			break;
		
		case 24:
			return 842;
			break;
		
		case 25:
			return 843;
			break;
		
		case 26:
			return 844;
			break;
		
		case 27:
			return 845;
			break;
		
		case 28:
			return 846;
			break;
		
		case 29:
			return 847;
			break;
		
		case 30:
			return 848;
			break;
		
		case 31:
			return 849;
			break;
		
		case 32:
			return 850;
			break;
		
		case 33:
			return 851;
			break;
		
		case 34:
			return 852;
			break;
		
		case 35:
			return 853;
			break;
		
		case 36:
			return 854;
			break;
		
		case 37:
			return 855;
			break;
		
		case 38:
			return 856;
			break;
		
		case 39:
			return 857;
			break;
		
		case 40:
			return 861;
			break;
		
		case 41:
			return 862;
			break;
		
		case 42:
			return 863;
			break;
		
		case 43:
			return 864;
			break;
		
		case 44:
			return 3422;
			break;
		
		default:
			break;
	}
	return 3438;
}

int func_62()
{
	return Global_24946;
}

bool func_63()
{
	return Global_90861.f_297 > 0;
}

bool func_64()
{
	return Global_90861.f_296 > 0;
}

bool func_65(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_66(bool bParam0)
{
	if (!bParam0 && unk_0x968BF1C2C695B61A(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x236D8AD7EE179F46(Global_69268, 0);
}

bool func_67()
{
	return Global_90848.f_1;
}

bool func_68()
{
	return Global_69287;
}

int func_69()
{
	if (Global_69280)
	{
		return 1;
	}
	else if (Global_55396 && !Global_55402)
	{
		return 1;
	}
	return 0;
}

int func_70()
{
	if (Global_35443 == 15)
	{
		return 0;
	}
	return 1;
}

void func_71(int iParam0, int iParam1)
{
	unk_0xF3148AAF69AF9CBC(&Global_25193, iParam0);
	Global_25194 = iParam1;
}

void func_72(char* sParam0)
{
	unk_0x6CE839BF5D87A428(sParam0);
	unk_0xC3822F70D0E7940B();
}

int func_73()
{
	var uVar0;
	
	if (unk_0xE8A8D52287C1BC6A())
	{
		if (unk_0xFA106675D906ECBC())
		{
			if (unk_0x4BE443B4137281C8())
			{
				unk_0x85C45034BA638694(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xF3148AAF69AF9CBC(&uVar0, 2);
				unk_0xF3148AAF69AF9CBC(&uVar0, 4);
				unk_0xF3148AAF69AF9CBC(&uVar0, 6);
				unk_0xF3148AAF69AF9CBC(&Global_25, 2);
				unk_0xF3148AAF69AF9CBC(&Global_25, 4);
				unk_0xF3148AAF69AF9CBC(&Global_25, 6);
				unk_0x123B783056E76C4E(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x0F93FDA9E0BB74DD())
				{
					uVar0 = unk_0xE19FDB171CBF814A(866);
					unk_0xF3148AAF69AF9CBC(&uVar0, 0);
					unk_0x0A726855B16BE29A(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_135975 == 2)
	{
		return 1;
	}
	else if (Global_135975 == 3)
	{
		return 0;
	}
	if (unk_0x0F93FDA9E0BB74DD())
	{
		if (unk_0x236D8AD7EE179F46(unk_0xE19FDB171CBF814A(866), 0))
		{
			return 1;
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
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		unk_0x35D7948F61AA3FEC(-1, "Menu_Back", &Global_14383, 1);
	}
}

void func_76()
{
	if (Global_14372 == 0)
	{
		if (func_145(2, Global_14363, 0))
		{
			unk_0xC69E84EBBD7166E6(&Global_2265, 0);
			iLocal_114 = 0;
			func_143();
			Global_14372 = 1;
			unk_0x21ED0FC9B5CC748B(Global_14375, "GET_CURRENT_SELECTION");
			uLocal_98 = unk_0x723E3684EF582590();
			while (!unk_0xAB56DCBFCD98FF03(uLocal_98))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_102 = unk_0x2D1F70CC7C051146(uLocal_98);
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
	unk_0xC69E84EBBD7166E6(&Global_2264, 17);
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
		return Global_86998[iParam0 /*2*/];
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
		return Global_98931.f_32499[iParam0 /*29*/].f_11;
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
	if (Global_35443 == 15)
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
	return func_85(iParam0, Global_35443);
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
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
		{
			if (!unk_0x2C237D28F05F0008(unk_0x81873881071CD9FE()))
			{
				if (unk_0xA6D377CB914A4C3C(unk_0x81873881071CD9FE(), 0))
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
	if (Global_98931.f_32499[Global_1579 /*29*/].f_24[Global_14394] == 0)
	{
		func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_98[Global_1579 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
	}
	else
	{
		func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_98931.f_32499[Global_1579 /*29*/].f_3), &(Global_98931.f_32499[Global_1579 /*29*/].f_7), "CELL_211", &(Global_98931.f_32499[Global_1579 /*29*/].f_3), 0);
	}
	func_91();
	if (Global_69020)
	{
		func_87(1904, 1, -1);
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
	
	iVar0 = Global_2459767[iParam0 /*5*/][func_59(uParam2)];
	if (iVar0 != 0)
	{
		unk_0x123B783056E76C4E(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 777:
			Global_1343618[func_59(uParam2)] = iParam1;
			break;
		
		case 778:
			Global_1343624[func_59(uParam2)] = iParam1;
			break;
		
		case 779:
			Global_1343630[func_59(uParam2)] = iParam1;
			break;
		
		case 780:
			Global_1343636[func_59(uParam2)] = iParam1;
			break;
		
		case 767:
			Global_1343594[func_59(uParam2)] = iParam1;
			break;
		
		case 768:
			Global_1343600[func_59(uParam2)] = iParam1;
			break;
		
		case 769:
			Global_1343606[func_59(uParam2)] = iParam1;
			break;
		
		case 770:
			Global_1343612[func_59(uParam2)] = iParam1;
			break;
		
		case 757:
			Global_1343570[func_59(uParam2)] = iParam1;
			break;
		
		case 758:
			Global_1343576[func_59(uParam2)] = iParam1;
			break;
		
		case 759:
			Global_1343582[func_59(uParam2)] = iParam1;
			break;
		
		case 760:
			Global_1343588[func_59(uParam2)] = iParam1;
			break;
		
		case 747:
			Global_1343642[func_59(uParam2)] = iParam1;
			break;
		
		case 748:
			Global_1343648[func_59(uParam2)] = iParam1;
			break;
		
		case 749:
			Global_1343654[func_59(uParam2)] = iParam1;
			break;
		
		case 750:
			Global_1343660[func_59(uParam2)] = iParam1;
			break;
		
		case 1292:
			Global_1343666[func_59(uParam2)] = iParam1;
			break;
		
		case 629:
			Global_1343672[func_59(uParam2)] = iParam1;
			break;
		
		case 1267:
			Global_1343678[func_59(uParam2)] = iParam1;
			break;
		
		case 1864:
			Global_2480427[0 /*6*/][func_59(uParam2)] = iParam1;
			break;
		
		case 2255:
			Global_2480427[1 /*6*/][func_59(uParam2)] = iParam1;
			break;
		
		case 2899:
			Global_2480427[2 /*6*/][func_59(uParam2)] = iParam1;
			break;
		
		case 754:
			Global_1343684[func_59(uParam2)] = iParam1;
			break;
		
		case 755:
			Global_1343690[func_59(uParam2)] = iParam1;
			break;
		
		case 756:
			Global_1343696[func_59(uParam2)] = iParam1;
			break;
		
		case 1225:
			Global_1343702[func_59(uParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_89(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2459767[iParam0 /*5*/][func_59(uParam2)];
	if (iVar0 != 0)
	{
		unk_0x123B783056E76C4E(iVar0, iParam1, iParam3);
	}
}

int func_90(int iParam0)
{
	if (Global_1343551)
	{
		switch (iParam0)
		{
			case 777:
			case 778:
			case 779:
			case 780:
			case 767:
			case 768:
			case 769:
			case 770:
			case 757:
			case 758:
			case 759:
			case 760:
			case 747:
			case 748:
			case 749:
			case 750:
			case 1292:
			case 629:
			case 1267:
			case 754:
			case 755:
			case 756:
			case 1225:
			case 1864:
			case 2255:
			case 2899:
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
	while (!unk_0xCC8E3BAC62A29F42(Global_14375))
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
				unk_0xC69E84EBBD7166E6(&Global_2264, 17);
			}
			else if (Global_69020)
			{
				func_139(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xC69E84EBBD7166E6(&Global_2264, 17);
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
				unk_0xF3148AAF69AF9CBC(&Global_2264, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_142(Global_14375, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_139(Global_14375, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_139(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xC69E84EBBD7166E6(&Global_2264, 17);
			if (unk_0x236D8AD7EE179F46(Global_2264, 20))
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
				func_142(Global_14375, "SET_THEME", unk_0xBBDA792448DB5A89(Global_98931.f_12665[Global_14394 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15706)
				{
					unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
					unk_0xBD0C54D89298454E(4);
					unk_0xBD0C54D89298454E(0);
					unk_0xBD0C54D89298454E(2);
					unk_0x6CE839BF5D87A428("CELL_CONDFON");
					unk_0x6222A57F463E8EE7(&Global_15708);
					unk_0xC3822F70D0E7940B();
					func_72("CELL_300");
					func_72("CELL_217");
					func_72("CELL_217");
					unk_0xBA9BA6181F2B6111();
				}
				else if (Global_98931.f_32499[Global_1579 /*29*/].f_24[Global_14394] == 0)
				{
					func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_98[Global_1579 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_98931.f_32499[Global_1579 /*29*/].f_3), &(Global_98931.f_32499[Global_1579 /*29*/].f_7), "CELL_217", &(Global_98931.f_32499[Global_1579 /*29*/].f_3), 0);
				}
				func_142(Global_14375, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15693 == 4 || Global_15693 == 3)
			{
				func_142(Global_14375, "SET_THEME", unk_0xBBDA792448DB5A89(Global_98931.f_12665[Global_14394 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_93();
				if (Global_15706)
				{
					unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
					unk_0xBD0C54D89298454E(4);
					unk_0xBD0C54D89298454E(0);
					unk_0xBD0C54D89298454E(2);
					unk_0x6CE839BF5D87A428("CELL_CONDFON");
					unk_0x6222A57F463E8EE7(&Global_15708);
					unk_0xC3822F70D0E7940B();
					func_72("CELL_300");
					func_72("CELL_219");
					func_72("CELL_219");
					unk_0xBA9BA6181F2B6111();
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
					if (Global_98931.f_32499[Global_1579 /*29*/].f_24[Global_14394] == 0)
					{
						func_142(Global_14375, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_98[Global_1579 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_142(Global_14375, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_98931.f_32499[Global_1579 /*29*/].f_3), &(Global_98931.f_32499[Global_1579 /*29*/].f_7), &cVar0, &(Global_98931.f_32499[Global_1579 /*29*/].f_3), 0);
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
	if (unk_0xCC8E3BAC62A29F42(Global_14375))
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
			else if (unk_0x236D8AD7EE179F46(Global_2264, 20))
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
			unk_0xC69E84EBBD7166E6(&Global_2264, 17);
		}
		else
		{
			func_139(Global_14375, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_139(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xC69E84EBBD7166E6(&Global_2264, 17);
			if (unk_0x236D8AD7EE179F46(Global_2264, 20))
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
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		if (Global_14394 == 0)
		{
			switch (Global_98931.f_12665[Global_14394 /*20*/].f_6)
			{
				case 1:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 0);
					break;
				
				case 2:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 1);
					break;
				
				case 3:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 2);
					break;
				
				case 4:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 3);
					break;
				
				case 5:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 4);
					break;
				
				case 6:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 5);
					break;
				
				case 7:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14394 == 1)
		{
			switch (Global_98931.f_12665[Global_14394 /*20*/].f_6)
			{
				case 1:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 6);
					break;
				
				case 2:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 0);
					break;
				
				case 3:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 1);
					break;
				
				case 4:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 2);
					break;
				
				case 5:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 3);
					break;
				
				case 6:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 4);
					break;
				
				case 7:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14394 == 2)
		{
			switch (Global_98931.f_12665[Global_14394 /*20*/].f_6)
			{
				case 1:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 5);
					break;
				
				case 2:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 6);
					break;
				
				case 3:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 1);
					break;
				
				case 4:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 0);
					break;
				
				case 5:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 2);
					break;
				
				case 6:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 3);
					break;
				
				case 7:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14394 == 3)
		{
			switch (Global_2550577)
			{
				case 1:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 0);
					break;
				
				case 2:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 1);
					break;
				
				case 3:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 2);
					break;
				
				case 4:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 3);
					break;
				
				case 5:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 4);
					break;
				
				case 6:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 5);
					break;
				
				case 7:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 6);
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
								if (unk_0x236D8AD7EE179F46(Global_2265, 3))
								{
									iVar2 = 42;
									Global_14556 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14556 = 0;
								}
								unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
								unk_0xBD0C54D89298454E(1);
								unk_0xBD0C54D89298454E(iVar0);
								unk_0xBD0C54D89298454E(Global_2271[iVar1 /*15*/].f_10);
								unk_0xBD0C54D89298454E(0);
								func_72(&(Global_2271[iVar1 /*15*/]));
								unk_0xBD0C54D89298454E(iVar2);
								unk_0xBA9BA6181F2B6111();
							}
							if (Global_2436984)
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
									if (Global_98931.f_12755[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_98931.f_12755[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_98931.f_12755[iVar3 /*104*/].f_99[Global_14394] == 1)
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
								if (Global_69020)
								{
									iVar4 = 0;
									iVar4 = Global_2549111;
									func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14394)
									{
										case 0:
											iVar5 = Global_36498;
											break;
										
										case 1:
											iVar5 = Global_36499;
											break;
										
										case 2:
											iVar5 = Global_36500;
											break;
										
										default:
											break;
									}
									func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar5), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16756), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
								unk_0xBD0C54D89298454E(1);
								unk_0xBD0C54D89298454E(iVar0);
								unk_0xBD0C54D89298454E(Global_2271[iVar1 /*15*/].f_10);
								unk_0xBD0C54D89298454E(0);
								func_72(&(Global_2271[iVar1 /*15*/]));
								unk_0xBD0C54D89298454E(Global_2270);
								unk_0xBA9BA6181F2B6111();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x236D8AD7EE179F46(Global_2265, 6))
								{
									iVar6 = 42;
								}
								else
								{
									iVar6 = 255;
								}
								unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
								unk_0xBD0C54D89298454E(1);
								unk_0xBD0C54D89298454E(iVar0);
								unk_0xBD0C54D89298454E(Global_2271[iVar1 /*15*/].f_10);
								unk_0xBD0C54D89298454E(0);
								func_72(&(Global_2271[iVar1 /*15*/]));
								unk_0xBD0C54D89298454E(iVar6);
								unk_0xBA9BA6181F2B6111();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x236D8AD7EE179F46(Global_2265, 3))
								{
									iVar7 = 42;
									Global_14556 = 1;
								}
								else
								{
									iVar7 = 255;
									Global_14556 = 0;
								}
								unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
								unk_0xBD0C54D89298454E(1);
								unk_0xBD0C54D89298454E(iVar0);
								unk_0xBD0C54D89298454E(Global_2271[iVar1 /*15*/].f_10);
								unk_0xBD0C54D89298454E(0);
								func_72(&(Global_2271[iVar1 /*15*/]));
								unk_0xBD0C54D89298454E(iVar7);
								unk_0xBA9BA6181F2B6111();
							}
							else if (iVar1 == 8)
							{
								unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
								unk_0xBD0C54D89298454E(1);
								unk_0xBD0C54D89298454E(iVar0);
								unk_0xBD0C54D89298454E(Global_2271[iVar1 /*15*/].f_10);
								unk_0xBD0C54D89298454E(0);
								func_72(&(Global_2271[iVar1 /*15*/]));
								unk_0xBD0C54D89298454E(42);
								unk_0xBA9BA6181F2B6111();
							}
							else if ((iVar1 == 23 && unk_0xD994929E13CC1ED5(&(Global_2271[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x236D8AD7EE179F46(Global_2265, 6))
							{
								unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
								unk_0xBD0C54D89298454E(1);
								unk_0xBD0C54D89298454E(iVar0);
								unk_0xBD0C54D89298454E(Global_2271[iVar1 /*15*/].f_10);
								unk_0xBD0C54D89298454E(0);
								func_72(&(Global_2271[iVar1 /*15*/]));
								unk_0xBD0C54D89298454E(42);
								unk_0xBA9BA6181F2B6111();
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
	unk_0xC69E84EBBD7166E6(&Global_2264, 25);
	unk_0xF3148AAF69AF9CBC(&Global_2265, 11);
}

int func_96()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		if (Global_14394.f_1 == 10 || Global_14394.f_1 == 9)
		{
			if (Global_14337 == 0)
			{
				if (Global_1579 != 128)
				{
					if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
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
		if (unk_0xA6D377CB914A4C3C(unk_0x81873881071CD9FE(), 0))
		{
			return 0;
		}
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
		{
			if (!unk_0xA29EEE4B2ABE7AE0())
			{
				if (unk_0x2C237D28F05F0008(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0xD496D3841112DF95(unk_0x81873881071CD9FE()) || unk_0x9BF75C3BD2379A6C(unk_0x81873881071CD9FE())) || unk_0x1E73DDF10071C453(unk_0x1329891157A54C63())) || unk_0xE6A0905BBE55E98F(unk_0x81873881071CD9FE()))
		{
			return 0;
		}
		if (Global_97979)
		{
			return 0;
		}
	}
	if (Global_69020)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x60FC347BF9CAD1BD();
	iVar1 = unk_0x7FCE6803A3D23268(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0xA29EEE4B2ABE7AE0()))
	{
		iVar2 = 1;
		if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
			{
				uVar3 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
				if ((((((((unk_0xC5ABD699DDC9D5A0(unk_0x14B7103DBD149FFE(uVar3)) || unk_0xD382045D1EFD12D3(unk_0x14B7103DBD149FFE(uVar3))) || unk_0x8923BC9F314B991D(unk_0x14B7103DBD149FFE(uVar3))) || unk_0x14B7103DBD149FFE(uVar3) == joaat("seashark")) || unk_0x14B7103DBD149FFE(uVar3) == joaat("seashark2")) || unk_0x14B7103DBD149FFE(uVar3) == joaat("rhino")) || unk_0x14B7103DBD149FFE(uVar3) == joaat("submersible")) || unk_0x14B7103DBD149FFE(uVar3) == joaat("submersible2")) || unk_0x14B7103DBD149FFE(uVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_2550579 || iVar2 == 1)
	{
		if (unk_0x968BF1C2C695B61A(joaat("apptrackify")) > 0 || Global_98931.f_12665.f_89)
		{
			if (unk_0x968BF1C2C695B61A(joaat("michael2")) > 0)
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
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (func_98() && unk_0xA6D377CB914A4C3C(unk_0x81873881071CD9FE(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_69020)
	{
		if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()) && iVar1 == 0)
		{
			iVar2 = unk_0x0F7FE22229DBD748(unk_0x81873881071CD9FE(), 0);
			if (Global_69020)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || unk_0x77B5315758411237(unk_0x81873881071CD9FE()))
				{
					iVar0 = 1;
				}
			}
			else if (unk_0x77B5315758411237(unk_0x81873881071CD9FE()))
			{
				iVar0 = 1;
			}
			if (!Global_14337)
			{
				if (Global_1579 != 128)
				{
					if (iVar0 == 0)
					{
						if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
						{
							if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
							{
							}
							else
							{
								if (Global_69020)
								{
									unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 244, 0);
									unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 243, 0);
									unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 242, 0);
								}
								unk_0xF3148AAF69AF9CBC(&Global_2264, 11);
								unk_0xA0E7F565B88CC79B(unk_0x81873881071CD9FE(), 1, 1);
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
	
	uVar0 = unk_0x60FC347BF9CAD1BD();
	iVar1 = unk_0x7FCE6803A3D23268(uVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_99()
{
	struct<2> Var0;
	
	unk_0x2B4380FBF49E1B71(&Var0);
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
	while (iVar0 < Global_98931.f_6302.f_650)
	{
		if (Global_98931.f_6302.f_199[iVar0 /*15*/].f_6 == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_98931.f_6302.f_136)
	{
		if (Global_98931.f_6302[iVar0 /*15*/].f_6 == iParam0)
		{
			if (unk_0x236D8AD7EE179F46(Global_98931.f_6302[iVar0 /*15*/].f_1, 7))
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
		iVar1 = Global_81894[iVar0 /*5*/];
		if (iVar1 != -1)
		{
			iVar2 = -1;
			iVar2 = Global_69289.f_109[Global_81894[iVar0 /*5*/] /*4*/];
			if (iVar2 != -1)
			{
				if (func_102(Global_81930[iVar2 /*34*/].f_12, iParam0))
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
			return unk_0x236D8AD7EE179F46(uParam0, iParam1);
		
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
			unk_0xC69E84EBBD7166E6(&Global_2265, 0);
			func_143();
			Global_14372 = 1;
			unk_0x21ED0FC9B5CC748B(Global_14375, "GET_CURRENT_SELECTION");
			uLocal_98 = unk_0x723E3684EF582590();
			while (!unk_0xAB56DCBFCD98FF03(uLocal_98))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_102 = unk_0x2D1F70CC7C051146(uLocal_98);
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
	
	if (Global_97573 && iParam1)
	{
		if (func_110(sParam0) && !unk_0x4955845DEBFE61A5())
		{
			unk_0xB8BB626315D394F5(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_98931.f_24859.f_145)
	{
		if (unk_0xD994929E13CC1ED5(sParam0, &(Global_98931.f_24859[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_98931.f_24859.f_145 - 2))
			{
				func_109(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_108((Global_98931.f_24859.f_145 - 1));
			Global_98931.f_24859.f_145 = (Global_98931.f_24859.f_145 - 1);
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
		Global_98931.f_24859.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_98931.f_24859.f_145)
	{
		if (unk_0x236D8AD7EE179F46(Global_98931.f_24859[iVar0 /*16*/].f_11, 0))
		{
			if (Global_98931.f_24859[iVar0 /*16*/].f_12 > Global_98931.f_24859.f_146[0])
			{
				Global_98931.f_24859.f_146[0] = Global_98931.f_24859[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x236D8AD7EE179F46(Global_98931.f_24859[iVar0 /*16*/].f_11, 1))
		{
			if (Global_98931.f_24859[iVar0 /*16*/].f_12 > Global_98931.f_24859.f_146[1])
			{
				Global_98931.f_24859.f_146[1] = Global_98931.f_24859[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x236D8AD7EE179F46(Global_98931.f_24859[iVar0 /*16*/].f_11, 2))
		{
			if (Global_98931.f_24859[iVar0 /*16*/].f_12 > Global_98931.f_24859.f_146[2])
			{
				Global_98931.f_24859.f_146[2] = Global_98931.f_24859[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_108(int iParam0)
{
	StringCopy(&(Global_98931.f_24859[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_98931.f_24859[iParam0 /*16*/].f_4), "", 16);
	Global_98931.f_24859[iParam0 /*16*/].f_8 = 0;
	Global_98931.f_24859[iParam0 /*16*/].f_9 = 0;
	Global_98931.f_24859[iParam0 /*16*/].f_11 = 0;
	Global_98931.f_24859[iParam0 /*16*/].f_10 = -1;
	Global_98931.f_24859[iParam0 /*16*/].f_12 = 0;
	Global_98931.f_24859[iParam0 /*16*/].f_13 = 0;
	Global_98931.f_24859[iParam0 /*16*/].f_14 = 0;
	Global_98931.f_24859[iParam0 /*16*/].f_15 = 0;
}

void func_109(int iParam0, int iParam1)
{
	Global_98931.f_24859[iParam0 /*16*/] = { Global_98931.f_24859[iParam1 /*16*/] };
	Global_98931.f_24859[iParam0 /*16*/].f_4 = { Global_98931.f_24859[iParam1 /*16*/].f_4 };
	Global_98931.f_24859[iParam0 /*16*/].f_8 = Global_98931.f_24859[iParam1 /*16*/].f_8;
	Global_98931.f_24859[iParam0 /*16*/].f_10 = Global_98931.f_24859[iParam1 /*16*/].f_10;
	Global_98931.f_24859[iParam0 /*16*/].f_9 = Global_98931.f_24859[iParam1 /*16*/].f_9;
	Global_98931.f_24859[iParam0 /*16*/].f_11 = Global_98931.f_24859[iParam1 /*16*/].f_11;
	Global_98931.f_24859[iParam0 /*16*/].f_12 = Global_98931.f_24859[iParam1 /*16*/].f_12;
	Global_98931.f_24859[iParam0 /*16*/].f_13 = Global_98931.f_24859[iParam1 /*16*/].f_13;
	Global_98931.f_24859[iParam0 /*16*/].f_14 = Global_98931.f_24859[iParam1 /*16*/].f_14;
	Global_98931.f_24859[iParam0 /*16*/].f_15 = Global_98931.f_24859[iParam1 /*16*/].f_15;
}

var func_110(var uParam0)
{
	unk_0xF7F787102FC9BCAC(uParam0);
	return unk_0xEF468B98099969A5(0);
}

void func_111(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_112(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_112(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xD994929E13CC1ED5(sParam0, ""))
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
	while (iVar0 < Global_98931.f_24859.f_145)
	{
		if (unk_0xD994929E13CC1ED5(&(Global_98931.f_24859[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_98931.f_24859.f_145 < 9)
	{
		StringCopy(&(Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_4), sParam1, 16);
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_8 = (unk_0x48E480685981C7D4() + iParam3);
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_9 = iParam5;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_11 = iParam6;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_12 = uParam2;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_13 = iParam7;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_14 = iParam8;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_10 = ((unk_0x48E480685981C7D4() + iParam3) + iParam4);
		}
		else
		{
			Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_10 = -1;
		}
		Global_98931.f_24859.f_145++;
		func_107();
	}
}

int func_113(char* sParam0)
{
	if (unk_0xD994929E13CC1ED5(sParam0, &Global_97576))
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
	while (iVar0 < Global_98931.f_24859.f_145)
	{
		if (unk_0xD994929E13CC1ED5(sParam0, &(Global_98931.f_24859[iVar0 /*16*/])))
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
	if ((Global_86989 != -1 && unk_0x236D8AD7EE179F46(Global_81930[Global_86989 /*34*/].f_15, 15)) && unk_0x236D8AD7EE179F46(Global_86990, iParam1))
	{
		if (Global_86988 != 5 || func_119() == Global_86989)
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
	return unk_0x236D8AD7EE179F46(Global_86997, iParam0);
}

int func_119()
{
	return Global_69282;
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
	unk_0xC69E84EBBD7166E6(&Global_2264, 17);
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
	func_140(Global_14375, "SET_HEADER", &(Global_98931.f_32499[Global_1579 /*29*/].f_3), 0, 0, 0, 0);
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
	
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		unk_0xDE1125A413AF241C(0, 22, 1);
	}
	if (func_145(2, Global_14363, 0))
	{
		func_143();
		Global_14372 = 1;
		unk_0x21ED0FC9B5CC748B(Global_14375, "GET_CURRENT_SELECTION");
		uLocal_98 = unk_0x723E3684EF582590();
		while (!unk_0xAB56DCBFCD98FF03(uLocal_98))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		iVar0 = unk_0x2D1F70CC7C051146(uLocal_98);
		iLocal_104 = Global_3055[iVar0];
		uLocal_106[0] = unk_0x46E7F5908F815DDC(&(Global_2972[iLocal_104 /*5*/]));
		if (unk_0xD994929E13CC1ED5(uLocal_106[0], "*"))
		{
			cLocal_108 = { Global_3038[Global_14394 /*4*/] };
			iLocal_105 = unk_0xF36D646FEBEFB165(&cLocal_108);
		}
		else if (unk_0xF36D646FEBEFB165(&cLocal_108) < 14)
		{
			StringConCat(&cLocal_108, uLocal_106[0], 16);
			iLocal_105++;
		}
		unk_0x21ED0FC9B5CC748B(Global_14375, "SET_HEADER");
		unk_0x6CE839BF5D87A428("STRING");
		unk_0xF42BCF5DDBBFC69A(&cLocal_108, -1);
		unk_0xC3822F70D0E7940B();
		unk_0xBA9BA6181F2B6111();
	}
	if (func_145(2, 178, 0))
	{
		func_75();
		Global_14372 = 1;
		if (unk_0xF36D646FEBEFB165(&cLocal_108) > 0)
		{
			StringCopy(&cLocal_108, unk_0x486460DF63209344(&cLocal_108, 0, (iLocal_105 - 1)), 16);
			iLocal_105 = (iLocal_105 - 1);
		}
		unk_0x21ED0FC9B5CC748B(Global_14375, "SET_HEADER");
		unk_0x6CE839BF5D87A428("STRING");
		unk_0xF42BCF5DDBBFC69A(&cLocal_108, -1);
		unk_0xC3822F70D0E7940B();
		unk_0xBA9BA6181F2B6111();
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
				if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
				{
					if (!unk_0x2C237D28F05F0008(unk_0x81873881071CD9FE()))
					{
						if (unk_0xA6D377CB914A4C3C(unk_0x81873881071CD9FE(), 0))
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
					sVar2 = unk_0x46E7F5908F815DDC(&(Global_98[iVar1 /*10*/].f_4));
					if (unk_0xD994929E13CC1ED5(sVar2, &cLocal_108))
					{
						if ((Global_98931.f_32499[iVar1 /*29*/].f_12[Global_14394] == 1 || Global_98931.f_32499[iVar1 /*29*/].f_12[Global_14394] == 2) || unk_0xD994929E13CC1ED5(sVar2, unk_0x46E7F5908F815DDC(&(Global_98[130 /*10*/].f_4))))
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
				unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
				unk_0xBD0C54D89298454E(4);
				unk_0xBD0C54D89298454E(0);
				unk_0xBD0C54D89298454E(3);
				unk_0x6CE839BF5D87A428("STRING");
				unk_0xF42BCF5DDBBFC69A(&cLocal_108, -1);
				unk_0xC3822F70D0E7940B();
				func_72("CELL_300");
				func_72("CELL_211");
				func_72("CELL_195");
				unk_0xBA9BA6181F2B6111();
				func_142(Global_14375, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
				iLocal_305 = 0;
				iVar3 = 0;
				while (iVar3 < 37)
				{
					sVar4 = unk_0x46E7F5908F815DDC(&(Global_1583[iVar3 /*14*/]));
					if (unk_0xD994929E13CC1ED5(sVar4, &cLocal_108))
					{
						iLocal_305 = 1;
						cLocal_306 = { Global_1583[iVar3 /*14*/].f_4 };
						Local_310 = { Global_1583[iVar3 /*14*/].f_8 };
					}
					iVar3++;
				}
				if (iLocal_305 == 0)
				{
					iLocal_112 = unk_0xF36D646FEBEFB165(&cLocal_108);
					if (iLocal_112 > 6)
					{
						StringCopy(&(uLocal_316[0]), unk_0x486460DF63209344(&cLocal_108, 0, 1), 4);
						StringCopy(&(uLocal_316[1]), unk_0x486460DF63209344(&cLocal_108, 1, 2), 4);
						StringCopy(&(uLocal_316[2]), unk_0x486460DF63209344(&cLocal_108, 2, 3), 4);
						StringCopy(&(uLocal_316[3]), unk_0x486460DF63209344(&cLocal_108, 3, 4), 4);
						StringCopy(&(uLocal_316[4]), unk_0x486460DF63209344(&cLocal_108, 4, 5), 4);
						StringCopy(&(uLocal_316[5]), unk_0x486460DF63209344(&cLocal_108, 5, 6), 4);
						if (((unk_0xD994929E13CC1ED5(&(uLocal_316[0]), "1") && unk_0xD994929E13CC1ED5(&(uLocal_316[1]), "9")) && unk_0xD994929E13CC1ED5(&(uLocal_316[2]), "9")) && unk_0xD994929E13CC1ED5(&(uLocal_316[3]), "9"))
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
									StringCopy(&(uLocal_316[0]), unk_0x486460DF63209344(&cLocal_108, 3, 4), 4);
									StringCopy(&(uLocal_316[1]), unk_0x486460DF63209344(&cLocal_108, 4, 5), 4);
									StringCopy(&(uLocal_316[2]), unk_0x486460DF63209344(&cLocal_108, 5, 6), 4);
									StringCopy(&(uLocal_316[3]), unk_0x486460DF63209344(&cLocal_108, 6, 7), 4);
									StringCopy(&(uLocal_316[4]), unk_0x486460DF63209344(&cLocal_108, 7, 8), 4);
									StringCopy(&(uLocal_316[5]), unk_0x486460DF63209344(&cLocal_108, 8, 9), 4);
									StringCopy(&(uLocal_316[6]), unk_0x486460DF63209344(&cLocal_108, 9, 10), 4);
								}
								else
								{
									StringCopy(&(uLocal_316[0]), unk_0x486460DF63209344(&cLocal_108, 0, 1), 4);
									StringCopy(&(uLocal_316[1]), unk_0x486460DF63209344(&cLocal_108, 1, 2), 4);
									StringCopy(&(uLocal_316[2]), unk_0x486460DF63209344(&cLocal_108, 2, 3), 4);
									StringCopy(&(uLocal_316[3]), unk_0x486460DF63209344(&cLocal_108, 3, 4), 4);
									StringCopy(&(uLocal_316[4]), unk_0x486460DF63209344(&cLocal_108, 4, 5), 4);
									StringCopy(&(uLocal_316[5]), unk_0x486460DF63209344(&cLocal_108, 5, 6), 4);
									StringCopy(&(uLocal_316[6]), unk_0x486460DF63209344(&cLocal_108, 6, 7), 4);
								}
								if ((((unk_0xD994929E13CC1ED5(&(uLocal_316[0]), "5") && unk_0xD994929E13CC1ED5(&(uLocal_316[1]), "5")) && unk_0xD994929E13CC1ED5(&(uLocal_316[2]), "5")) && unk_0xD994929E13CC1ED5(&(uLocal_316[3]), "0")) && unk_0xD994929E13CC1ED5(&(uLocal_316[4]), "1"))
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
				if (Global_98931.f_32499[Global_1579 /*29*/].f_12[Global_14394] == 2 || Global_1579 == 130)
				{
					Global_98931.f_32499[Global_1579 /*29*/].f_24[Global_14394] = 1;
					if (Global_1579 == 130)
					{
						if (!Global_98931.f_32499[130 /*29*/].f_12[0] == 1)
						{
							func_124(130, 4, 1);
							func_124(130, 3, 0);
						}
						if (Global_69020)
						{
							if (!func_123(130, 3))
							{
								func_124(130, 3, 1);
							}
						}
					}
				}
				if (Global_98931.f_32499[Global_1579 /*29*/].f_24[Global_14394] == 0)
				{
					func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_98[Global_1579 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_98931.f_32499[Global_1579 /*29*/].f_3), &(Global_98931.f_32499[Global_1579 /*29*/].f_7), "CELL_211", &(Global_98931.f_32499[Global_1579 /*29*/].f_3), 0);
				}
			}
			func_91();
		}
	}
}

int func_123(int iParam0, int iParam1)
{
	if (Global_98931.f_32499[iParam0 /*29*/].f_12[iParam1] == 1)
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
			Global_98931.f_32499[iParam0 /*29*/].f_12[0] = 1;
			Global_98931.f_32499[iParam0 /*29*/].f_12[1] = 1;
			Global_98931.f_32499[iParam0 /*29*/].f_12[2] = 1;
			Global_98931.f_32499[iParam0 /*29*/].f_24[0] = 1;
			Global_98931.f_32499[iParam0 /*29*/].f_24[1] = 1;
			Global_98931.f_32499[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_98931.f_32499[iParam0 /*29*/].f_12[iParam1] == 1 && Global_98931.f_32499[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_98931.f_32499[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_98931.f_32499[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_69020)
			{
				if (iParam1 != 4)
				{
					if (Global_14394 != iParam1)
					{
						Global_2923[iParam1 /*4*/] = { Global_98931.f_32499[iParam0 /*29*/].f_3 };
						Global_2940[iParam1] = 1;
						Global_2945[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14394)
					{
					}
					else
					{
						Global_2874[1 /*6*/] = { Global_98931.f_32499[iParam0 /*29*/].f_3 };
						Global_2874[1 /*6*/].f_5 = iParam1;
						func_125();
					}
				}
				else
				{
					Global_2874[1 /*6*/] = { Global_98931.f_32499[iParam0 /*29*/].f_3 };
					Global_2874[1 /*6*/].f_5 = iParam1;
					func_125();
				}
			}
			else
			{
				Global_2874[1 /*6*/] = { Global_98931.f_32499[iParam0 /*29*/].f_3 };
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
	
	StringCopy(&cVar0, unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[Global_2950 /*29*/].f_7)), 64);
	if (Global_2969 == 0)
	{
		unk_0x02A6B267064771B1("");
		StringCopy(&cVar16, unk_0x46E7F5908F815DDC(&(Global_2874[1 /*6*/])), 64);
		sVar32 = unk_0x46E7F5908F815DDC("CELL_253");
		unk_0xDFBE4FFEF7FC22F3(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0x02A6B267064771B1("CELL_255");
		unk_0x072D7B028D6C7A05(&(Global_2874[1 /*6*/]));
		unk_0xDFBE4FFEF7FC22F3(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0xC69E84EBBD7166E6(&Global_2264, 0);
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
	if (unk_0xD994929E13CC1ED5(sParam0, "0"))
	{
		return 0;
	}
	if (unk_0xD994929E13CC1ED5(sParam0, "1"))
	{
		return 1;
	}
	if (unk_0xD994929E13CC1ED5(sParam0, "2"))
	{
		return 2;
	}
	if (unk_0xD994929E13CC1ED5(sParam0, "3"))
	{
		return 3;
	}
	if (unk_0xD994929E13CC1ED5(sParam0, "4"))
	{
		return 4;
	}
	if (unk_0xD994929E13CC1ED5(sParam0, "5"))
	{
		return 5;
	}
	if (unk_0xD994929E13CC1ED5(sParam0, "6"))
	{
		return 6;
	}
	if (unk_0xD994929E13CC1ED5(sParam0, "7"))
	{
		return 7;
	}
	if (unk_0xD994929E13CC1ED5(sParam0, "8"))
	{
		return 8;
	}
	if (unk_0xD994929E13CC1ED5(sParam0, "9"))
	{
		return 9;
	}
	if (unk_0xD994929E13CC1ED5(sParam0, "A"))
	{
		return 10;
	}
	if (unk_0xD994929E13CC1ED5(sParam0, "B"))
	{
		return 11;
	}
	if (unk_0xD994929E13CC1ED5(sParam0, "C"))
	{
		return 12;
	}
	if (unk_0xD994929E13CC1ED5(sParam0, "D"))
	{
		return 13;
	}
	if (unk_0xD994929E13CC1ED5(sParam0, "E"))
	{
		return 14;
	}
	if (unk_0xD994929E13CC1ED5(sParam0, "F"))
	{
		return 15;
	}
	if (unk_0xD994929E13CC1ED5(sParam0, "G"))
	{
		return 16;
	}
	if (unk_0xD994929E13CC1ED5(sParam0, "H"))
	{
		return 17;
	}
	if (unk_0xD994929E13CC1ED5(sParam0, "I"))
	{
		return 18;
	}
	if (unk_0xD994929E13CC1ED5(sParam0, "J"))
	{
		return 19;
	}
	if (unk_0xD994929E13CC1ED5(sParam0, "K"))
	{
		return 20;
	}
	if (unk_0xD994929E13CC1ED5(sParam0, "L"))
	{
		return 21;
	}
	if (unk_0xD994929E13CC1ED5(sParam0, "M"))
	{
		return 22;
	}
	if (unk_0xD994929E13CC1ED5(sParam0, "N"))
	{
		return 23;
	}
	if (unk_0xD994929E13CC1ED5(sParam0, "O"))
	{
		return 24;
	}
	if (unk_0xD994929E13CC1ED5(sParam0, "P"))
	{
		return 25;
	}
	if (unk_0xD994929E13CC1ED5(sParam0, "Q"))
	{
		return 26;
	}
	if (unk_0xD994929E13CC1ED5(sParam0, "R"))
	{
		return 27;
	}
	if (unk_0xD994929E13CC1ED5(sParam0, "S"))
	{
		return 28;
	}
	if (unk_0xD994929E13CC1ED5(sParam0, "T"))
	{
		return 29;
	}
	if (unk_0xD994929E13CC1ED5(sParam0, "U"))
	{
		return 30;
	}
	if (unk_0xD994929E13CC1ED5(sParam0, "V"))
	{
		return 31;
	}
	if (unk_0xD994929E13CC1ED5(sParam0, "W"))
	{
		return 32;
	}
	if (unk_0xD994929E13CC1ED5(sParam0, "X"))
	{
		return 33;
	}
	if (unk_0xD994929E13CC1ED5(sParam0, "Y"))
	{
		return 34;
	}
	if (unk_0xD994929E13CC1ED5(sParam0, "Z"))
	{
		return 35;
	}
	if (unk_0xD994929E13CC1ED5(sParam0, "z"))
	{
		return -1;
	}
	return -1;
}

int func_128()
{
	if (Global_69020)
	{
		return 0;
	}
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		if (unk_0x1E73DDF10071C453(unk_0x1329891157A54C63()))
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
	if (unk_0x3D6272A8E1C449E9(2))
	{
		if (unk_0x093DEAE9A023FAA0(2, 180))
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
		if (unk_0x093DEAE9A023FAA0(2, 181))
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
	unk_0x35D7948F61AA3FEC(-1, "Menu_Navigate", &Global_14383, 1);
	func_131();
}

void func_131()
{
	if (func_132())
	{
		if (Global_14557 == 0)
		{
			unk_0xFFC5C53467CD6DB5(1);
		}
		else
		{
			unk_0xFFC5C53467CD6DB5(2);
		}
	}
}

int func_132()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69020)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0x60FC347BF9CAD1BD();
	iVar1 = unk_0x7FCE6803A3D23268(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_2550579 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_133()
{
	func_142(Global_14375, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(4), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x35D7948F61AA3FEC(-1, "Menu_Navigate", &Global_14383, 1);
	func_134();
}

void func_134()
{
	if (func_132())
	{
		if (Global_14557 == 0)
		{
			unk_0xFFC5C53467CD6DB5(3);
		}
		else
		{
			unk_0xFFC5C53467CD6DB5(4);
		}
	}
}

void func_135()
{
	func_142(Global_14375, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x35D7948F61AA3FEC(-1, "Menu_Navigate", &Global_14383, 1);
	func_136();
}

void func_136()
{
	if (func_132())
	{
		if (Global_14557 == 0)
		{
			unk_0xFFC5C53467CD6DB5(2);
		}
		else
		{
			unk_0xFFC5C53467CD6DB5(1);
		}
	}
}

void func_137()
{
	func_142(Global_14375, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(2), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x35D7948F61AA3FEC(-1, "Menu_Navigate", &Global_14383, 1);
	func_138();
}

void func_138()
{
	if (func_132())
	{
		if (Global_14557 == 0)
		{
			unk_0xFFC5C53467CD6DB5(4);
		}
		else
		{
			unk_0xFFC5C53467CD6DB5(3);
		}
	}
}

void func_139(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, int iParam10, int iParam11)
{
	unk_0x21ED0FC9B5CC748B(uParam0, sParam1);
	unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xB318FDA0D1ABDB20(sParam7))
	{
		func_72(sParam7);
	}
	if (!unk_0xB318FDA0D1ABDB20(sParam8))
	{
		func_72(sParam8);
	}
	if (!unk_0xB318FDA0D1ABDB20(sParam9))
	{
		func_72(sParam9);
	}
	if (!unk_0xB318FDA0D1ABDB20(iParam10))
	{
		func_72(iParam10);
	}
	if (!unk_0xB318FDA0D1ABDB20(iParam11))
	{
		func_72(iParam11);
	}
	unk_0xBA9BA6181F2B6111();
}

void func_140(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0x21ED0FC9B5CC748B(uParam0, sParam1);
	func_72(sParam2);
	if (!unk_0xB318FDA0D1ABDB20(sParam3))
	{
		func_72(sParam3);
	}
	if (!unk_0xB318FDA0D1ABDB20(sParam4))
	{
		func_72(sParam4);
	}
	if (!unk_0xB318FDA0D1ABDB20(sParam5))
	{
		func_72(sParam5);
	}
	if (!unk_0xB318FDA0D1ABDB20(sParam6))
	{
		func_72(sParam6);
	}
	unk_0xBA9BA6181F2B6111();
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
					unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
					unk_0xBD0C54D89298454E(11);
					unk_0xBD0C54D89298454E(iVar13);
					func_72(&(Global_2972[iVar14 /*5*/]));
					unk_0xBA9BA6181F2B6111();
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
	unk_0x21ED0FC9B5CC748B(uParam0, sParam1);
	unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xBA9BA6181F2B6111();
}

void func_143()
{
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		unk_0x35D7948F61AA3FEC(-1, "Menu_Accept", &Global_14383, 1);
		func_144();
	}
}

void func_144()
{
	if (func_132())
	{
		unk_0xFFC5C53467CD6DB5(5);
	}
}

int func_145(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x093DEAE9A023FAA0(iParam0, iParam1) || (iParam2 == 1 && unk_0x5BD35B90C0693406(iParam0, iParam1)))
	{
		if (unk_0x913B1C01C1BA6C6F())
		{
			if (unk_0x87E58291A874D55F() == 0 || (unk_0x18138B3C6FD07449() && unk_0x3D6272A8E1C449E9(2)))
			{
				return 0;
			}
		}
		if (unk_0xDB10DED5ABC4AA20() || unk_0x30D46D6512711A3E())
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
		unk_0xF3148AAF69AF9CBC(&Global_2265, 0);
		func_75();
		Global_14372 = 1;
		if (Global_69020)
		{
			func_256();
		}
		else
		{
			func_246();
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
					unk_0x21ED0FC9B5CC748B(Global_14375, "GET_CURRENT_SELECTION");
					uLocal_98 = unk_0x723E3684EF582590();
					while (!unk_0xAB56DCBFCD98FF03(uLocal_98))
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					iLocal_101 = unk_0x2D1F70CC7C051146(uLocal_98);
					bVar0 = false;
					if (unk_0x1F2C82EFDAD19C5D())
					{
						if (Global_69020)
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
					if (unk_0x236D8AD7EE179F46(Global_2265, 0))
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
							if (unk_0x236D8AD7EE179F46(Global_2264, 9))
							{
								if (!unk_0x236D8AD7EE179F46(Global_2264, 29))
								{
									Global_98931.f_32499[Global_1579 /*29*/].f_18 = 1;
									if (Global_98931.f_32499[Global_1579 /*29*/].f_24[Global_14394] == 0)
									{
										func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(1), -1f, -1f, "CELL_288", "CELL_300", &(Global_98[Global_1579 /*10*/].f_4), "CELL_195", 0);
									}
									else
									{
										func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(1), -1f, -1f, "CELL_288", &(Global_98931.f_32499[Global_1579 /*29*/].f_7), &(Global_98931.f_32499[Global_1579 /*29*/].f_3), &(Global_98931.f_32499[Global_1579 /*29*/].f_3), 0);
									}
									func_139(Global_14375, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
									func_142(Global_14375, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
									unk_0xF3148AAF69AF9CBC(&Global_2264, 29);
								}
							}
							else
							{
								bLocal_325 = false;
								bLocal_326 = false;
								if (Global_69020)
								{
									iVar1 = 0;
									while (iVar1 < 4)
									{
										if (unk_0xD994929E13CC1ED5(&(Global_98931.f_32499[Global_1579 /*29*/].f_3), &(Global_2167[iVar1 /*24*/])))
										{
											if (!unk_0xD994929E13CC1ED5(&(Global_2167[iVar1 /*24*/].f_8), "CELL_SFUN_NULL"))
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
										if (unk_0xD994929E13CC1ED5(&(Global_98931.f_32499[Global_1579 /*29*/].f_3), &(Global_2102[iVar2 /*16*/])))
										{
											if (!unk_0xD994929E13CC1ED5(&(Global_2102[iVar2 /*16*/].f_8), "CELL_SFUN_NULL"))
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
								if (func_149(Global_1579) && unk_0x236D8AD7EE179F46(Global_2265, 0) == 0)
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
								if (unk_0x236D8AD7EE179F46(Global_2265, 0))
								{
									func_148();
									iLocal_132 = 1;
								}
								else if (bLocal_326 == 0 && bLocal_325 == 0)
								{
									Global_16807 = 0;
									Global_16806 = 0;
									Global_16808 = 0;
									if (unk_0x236D8AD7EE179F46(Global_2265, 19) && Global_1579 == 129)
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
	iLocal_130 = unk_0x48E480685981C7D4();
	func_142(Global_14375, "SET_DATA_SLOT_EMPTY", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4EDE34FBADD967A6(0);
	switch (Global_1579)
	{
		case 2:
			func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), 0f, -1f, -1f, "CELL_7001", &(Global_98931.f_32499[Global_1579 /*29*/].f_3), &(Global_98931.f_32499[Global_1579 /*29*/].f_7), 0, 0);
			break;
		
		case 0:
			func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), 0f, -1f, -1f, "CELL_7002", &(Global_98931.f_32499[Global_1579 /*29*/].f_3), &(Global_98931.f_32499[Global_1579 /*29*/].f_7), 0, 0);
			break;
		
		case 12:
			func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), 0f, -1f, -1f, "CELL_7003", &(Global_98931.f_32499[Global_1579 /*29*/].f_3), "CELL_E_311", 0, 0);
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
	unk_0xC69E84EBBD7166E6(&Global_2264, 17);
	func_142(Global_14375, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_208", 0, 0, 0, 0);
	func_155(&Local_330);
	if (Global_14394.f_1 > 3)
	{
		func_142(Global_14375, "DISPLAY_VIEW", 18f, unk_0xBBDA792448DB5A89(iLocal_99), -1082130432, -1082130432, -1082130432);
		iLocal_99 = 0;
		if (func_154(&Local_330))
		{
			uVar0 = unk_0xB67DF8F35744CF60(Local_330[Local_330.f_2936]);
		}
		else
		{
			uVar0 = func_152(&(Local_330.f_34[func_153(Local_330.f_2936, &Local_330) /*29*/].f_13));
		}
		unk_0x21ED0FC9B5CC748B(Global_14375, "SET_HEADER");
		unk_0x6CE839BF5D87A428("CELL_CONDFNH");
		unk_0x6222A57F463E8EE7(uVar0);
		unk_0xC3822F70D0E7940B();
		unk_0xBA9BA6181F2B6111();
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
			sVar37 = unk_0xB67DF8F35744CF60((*uParam0)[uParam0->f_2936]);
		}
		else
		{
			uParam0->f_2963 = { uParam0->f_34[func_153(uParam0->f_2936, uParam0) /*29*/] };
			sVar37 = func_152(&(uParam0->f_34[func_153(uParam0->f_2936, uParam0) /*29*/].f_13));
		}
		StringCopy(&(uParam0->f_2983), sVar37, 64);
		bVar38 = false;
		if (unk_0x4DF9FCFC9A686A6E())
		{
			if (!Global_1573843)
			{
				if (func_162(0))
				{
					bVar38 = true;
				}
			}
		}
		if (func_154(uParam0))
		{
			if (((unk_0xED83F2623D9B2092((*uParam0)[uParam0->f_2936]) || unk_0x188ACA6930432899((*uParam0)[uParam0->f_2936])) || unk_0xA1064325A43EA588((*uParam0)[uParam0->f_2936])) || unk_0xCB98A8A90D6AC1D1((*uParam0)[uParam0->f_2936]))
			{
				bVar38 = false;
			}
		}
		if (!unk_0x90D70709D2558B5A())
		{
			bVar38 = false;
		}
		if (unk_0x3B0FD2D43E37ABC7(0))
		{
			bVar38 = false;
		}
		if (unk_0x6E5E82D7E6363134(&(uParam0->f_2963)) || unk_0xA2ACF1F8C161F103(&(uParam0->f_2963)))
		{
			bVar38 = false;
		}
		if (unk_0x6315C7BA3C69741D(&(uParam0->f_2963)) || unk_0xA82997874D76F3CB(&(uParam0->f_2963)))
		{
			bVar38 = false;
		}
		if (unk_0xF375D6EBBA1ECB11())
		{
			if (unk_0x3F0C224D3CC05EF2())
			{
				if (unk_0xBE068FAE14C0605B())
				{
					bVar38 = false;
				}
			}
			else if (unk_0xEC209B562C5EFDB2())
			{
				bVar38 = false;
			}
		}
		if (bVar38)
		{
			if (Global_69020)
			{
				unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT_EMPTY");
				unk_0xBD0C54D89298454E(iVar0);
				unk_0xBA9BA6181F2B6111();
				unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
				unk_0xBD0C54D89298454E(18);
				unk_0xBD0C54D89298454E(iVar0);
				unk_0xBD0C54D89298454E(0);
				if (!Global_2456109.f_1 || Global_2456109.f_38)
				{
					unk_0x6CE839BF5D87A428("CELL_MP_1000");
					unk_0xC3822F70D0E7940B();
				}
				else
				{
					unk_0x6CE839BF5D87A428("CELL_MP_1000b");
					unk_0xC3822F70D0E7940B();
				}
				unk_0xBA9BA6181F2B6111();
				uParam0->f_2937[iVar0] = 1;
				iVar0++;
			}
			else if (Global_35443 == 15)
			{
				unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT_EMPTY");
				unk_0xBD0C54D89298454E(iVar0);
				unk_0xBA9BA6181F2B6111();
				unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
				unk_0xBD0C54D89298454E(18);
				unk_0xBD0C54D89298454E(iVar0);
				unk_0xBD0C54D89298454E(0);
				if (!Global_2456109.f_1 || Global_2456109.f_38)
				{
					unk_0x6CE839BF5D87A428("CELL_MP_1000");
					unk_0xC3822F70D0E7940B();
				}
				else
				{
					unk_0x6CE839BF5D87A428("CELL_MP_1000b");
					unk_0xC3822F70D0E7940B();
				}
				unk_0xBA9BA6181F2B6111();
				uParam0->f_2937[iVar0] = 1;
				iVar0++;
			}
		}
		bVar38 = false;
		if (func_154(uParam0))
		{
			if (((((func_162(0) && func_162((*uParam0)[uParam0->f_2936])) && !unk_0xED83F2623D9B2092((*uParam0)[uParam0->f_2936])) && !unk_0x188ACA6930432899((*uParam0)[uParam0->f_2936])) && !unk_0xA1064325A43EA588((*uParam0)[uParam0->f_2936])) && !unk_0xCB98A8A90D6AC1D1((*uParam0)[uParam0->f_2936]))
			{
				bVar38 = true;
			}
		}
		if (bVar38)
		{
			unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT_EMPTY");
			unk_0xBD0C54D89298454E(iVar0);
			unk_0xBA9BA6181F2B6111();
			unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
			unk_0xBD0C54D89298454E(18);
			unk_0xBD0C54D89298454E(iVar0);
			unk_0xBD0C54D89298454E(0);
			unk_0x6CE839BF5D87A428("CELL_MP_1009");
			unk_0xC3822F70D0E7940B();
			unk_0xBA9BA6181F2B6111();
			uParam0->f_2937[iVar0] = 2;
			iVar0++;
		}
		bVar38 = false;
		if (func_154(uParam0))
		{
			if (unk_0xB5F469DE391974B9() < unk_0x877F11CD9A36EAF6())
			{
				if (!unk_0x5762EE910D467202(&(uParam0->f_2963)))
				{
					bVar38 = true;
				}
			}
		}
		if (bVar38)
		{
			unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
			unk_0xBD0C54D89298454E(18);
			unk_0xBD0C54D89298454E(iVar0);
			unk_0xBD0C54D89298454E(0);
			unk_0x6CE839BF5D87A428("PIM_DFRQ2");
			unk_0xC3822F70D0E7940B();
			unk_0xBA9BA6181F2B6111();
			uParam0->f_2937[iVar0] = 3;
			iVar0++;
		}
		bVar38 = false;
		bVar38 = true;
		if (bVar38)
		{
			unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
			unk_0xBD0C54D89298454E(18);
			unk_0xBD0C54D89298454E(iVar0);
			unk_0xBD0C54D89298454E(0);
			unk_0x6CE839BF5D87A428("CELL_MP_1007");
			unk_0xC3822F70D0E7940B();
			unk_0xBA9BA6181F2B6111();
			uParam0->f_2937[iVar0] = 4;
			iVar0++;
		}
		bVar38 = false;
		if (unk_0x80622F5ED5957337())
		{
			if (unk_0x464883E45616A088(&(uParam0->f_2963)))
			{
				unk_0xEF956A1EC046AA4A(&Var1, 35, &(uParam0->f_2963));
			}
		}
		if (Var1.f_0 != -1)
		{
			if (Var1.f_21 == 1)
			{
				if (unk_0x9F80443939366966() && !func_161(Var1.f_0))
				{
					bVar38 = true;
					uParam0->f_2947 = { Var1.f_1 };
				}
			}
		}
		if (bVar38)
		{
			unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
			unk_0xBD0C54D89298454E(18);
			unk_0xBD0C54D89298454E(iVar0);
			unk_0xBD0C54D89298454E(0);
			unk_0x6CE839BF5D87A428("CELL_MP_1003");
			unk_0xC3822F70D0E7940B();
			unk_0xBA9BA6181F2B6111();
			uParam0->f_2937[iVar0] = 5;
			iVar0++;
		}
		unk_0xC69E84EBBD7166E6(&Global_2266, 6);
		bVar38 = false;
		if (func_154(uParam0))
		{
			if (func_160(unk_0x1329891157A54C63(), 1, 1))
			{
				if (unk_0x4F5BEB9A4097F301(unk_0x1329891157A54C63(), (*uParam0)[uParam0->f_2936]))
				{
					if (!func_159((*uParam0)[uParam0->f_2936], 0))
					{
						if (!unk_0x236D8AD7EE179F46(Global_2414506[(*uParam0)[uParam0->f_2936] /*255*/].f_194, 2))
						{
							bVar38 = true;
							unk_0xF3148AAF69AF9CBC(&Global_2266, 6);
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
		if (Global_1573813 || Global_1573814)
		{
			bVar38 = false;
		}
		if (bVar38)
		{
			unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
			unk_0xBD0C54D89298454E(18);
			unk_0xBD0C54D89298454E(iVar0);
			unk_0xBD0C54D89298454E(0);
			if (!unk_0x236D8AD7EE179F46(Global_2422670.f_652, (*uParam0)[uParam0->f_2936]))
			{
				unk_0x6CE839BF5D87A428("CELL_MP_1008");
			}
			else
			{
				unk_0x6CE839BF5D87A428("CELL_MP_1008b");
			}
			unk_0xC3822F70D0E7940B();
			unk_0xBA9BA6181F2B6111();
			uParam0->f_2937[iVar0] = 7;
			iVar0++;
		}
	}
	else
	{
		unk_0x02A6B267064771B1("CELL_LEFT_SESS");
		unk_0x267D6EB296008122(1, 1);
		func_30(0);
		return;
	}
}

int func_156(int iParam0, int iParam1)
{
	if (Global_1606167[iParam0 /*12*/] == iParam1)
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
		return unk_0x236D8AD7EE179F46(Global_1606167[iVar0 /*12*/].f_1, 0);
	}
	return 0;
}

int func_158()
{
	return -1;
}

bool func_159(int iParam0, int iParam1)
{
	return unk_0x236D8AD7EE179F46(Global_2414506[iParam0 /*255*/].f_205, iParam1);
}

int func_160(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xA89AE5060232966A(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x7DF7DE8C76D7F346(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422670.f_3[iVar0])
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
	
	if (unk_0x80622F5ED5957337() && unk_0x9F80443939366966())
	{
		iVar0 = unk_0x3FC5FC7746BB1772();
		if (iVar0 > 0)
		{
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				unk_0xA9BC99627979F9C8(&Global_2450431, iVar1);
				if (iParam0 == Global_2450431)
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
	
	if (unk_0xA1F908D11DFF15F6() == 0)
	{
		return 0;
	}
	if (unk_0x211AF631627DE2C5() || unk_0xEC209B562C5EFDB2())
	{
		if (unk_0xB37B5777B142DAF2(0, iParam0))
		{
			if (unk_0x90D70709D2558B5A())
			{
				return 1;
			}
		}
	}
	if (unk_0x9800AF1CCAFA4639() || unk_0x3F0C224D3CC05EF2())
	{
		if (iParam0 == 0 || iParam0 == unk_0x1329891157A54C63())
		{
			if (unk_0xC573B3FF373BF370(0, -3, 1) || unk_0xB37B5777B142DAF2(1, 0))
			{
				return 1;
			}
		}
		else
		{
			Var0 = { func_163(iParam0) };
			if (unk_0xB37B5777B142DAF2(0, 0) || (unk_0xB37B5777B142DAF2(1, 0) && unk_0x5762EE910D467202(&Var0)))
			{
				return 1;
			}
		}
	}
	if (unk_0x913B1C01C1BA6C6F())
	{
		if (unk_0xB37B5777B142DAF2(0, iParam0))
		{
			if (unk_0x90D70709D2558B5A())
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
	
	unk_0x73231AB7B8BD1CD1(iParam0, &Var0, 13);
	return Var0;
}

int func_164(var uParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x1F2C82EFDAD19C5D())
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
		if (unk_0x425AD5BC1887845B(&(uParam0->f_34[iVar0 /*29*/])))
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
		unk_0xC69E84EBBD7166E6(&Global_2265, 0);
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
	if (unk_0x3D6272A8E1C449E9(2))
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
			unk_0x35D7948F61AA3FEC(-1, "Menu_Navigate", &Global_14383, 1);
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
			unk_0x35D7948F61AA3FEC(-1, "Menu_Navigate", &Global_14383, 1);
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
		unk_0xC69E84EBBD7166E6(&Global_2264, 16);
	}
	func_135();
	unk_0x21ED0FC9B5CC748B(Global_14375, "GET_CURRENT_SELECTION");
	uLocal_98 = unk_0x723E3684EF582590();
	while (!unk_0xAB56DCBFCD98FF03(uLocal_98))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	iLocal_101 = unk_0x2D1F70CC7C051146(uLocal_98);
	if (iLocal_101 < 0)
	{
		iLocal_101 = 0;
	}
	if (Global_16724 == Global_14400[iLocal_101])
	{
		unk_0xC69E84EBBD7166E6(&Global_2264, 16);
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
	
	if (unk_0x236D8AD7EE179F46(Global_2266, 6))
	{
		if (!unk_0x7628BE3C0E25C192(&(Local_330.f_2963)))
		{
			unk_0xC69E84EBBD7166E6(&Global_2266, 6);
			StringCopy(&cLocal_108, "", 16);
			Global_14394.f_1 = 3;
		}
	}
	switch (Local_330.f_2999)
	{
		case 0:
			if (unk_0x236D8AD7EE179F46(uLocal_324, 1))
			{
				if (!Global_90861.f_1331)
				{
					unk_0xC69E84EBBD7166E6(&uLocal_324, 0);
					unk_0xC69E84EBBD7166E6(&uLocal_324, 1);
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
						if (func_145(2, Global_14363, 0) || unk_0xCAD9951C953F5B2D(2, 201))
						{
							Global_14394.f_1 = 3;
						}
					}
					else if (func_145(2, Global_14363, 0) || unk_0xCAD9951C953F5B2D(2, 201))
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
							if (!Global_2456109.f_1)
							{
								if (!unk_0x8E46A86E6856C6C3() && !unk_0x9B986164C42EA510())
								{
									Local_330.f_2976 = 0;
									func_243();
									Local_330.f_2977 = 0;
									if (func_154(&Local_330))
									{
										sVar53 = unk_0xB67DF8F35744CF60(Local_330[Local_330.f_2936]);
									}
									else
									{
										sVar53 = func_152(&(Local_330.f_34[func_153(Local_330.f_2936, &Local_330) /*29*/].f_13));
									}
									func_242(sVar53);
									Local_330.f_2999 = 1;
									func_241(&(Local_330.f_2979));
									func_240(0);
									if (Global_69020)
									{
										if (func_239(1) >= Global_262145.f_155)
										{
											Var40 = { func_163(unk_0x1329891157A54C63()) };
											if (func_238())
											{
												func_231(1654961868, Global_262145.f_155, &iVar0, 1, 1);
												Global_2545514[iVar0 /*69*/].f_8.f_3 = { Var40 };
											}
											else
											{
												unk_0x829B267539D69E7A(Global_262145.f_155, &Var40, 1, 1);
											}
										}
										else
										{
											Var40 = { func_163(unk_0x1329891157A54C63()) };
											if (func_238())
											{
											}
											else
											{
												unk_0x829B267539D69E7A(func_239(1), &Var40, 1, 1);
											}
										}
										func_87(1903, 1, -1);
									}
								}
								else if (unk_0x8E46A86E6856C6C3())
								{
								}
								else if (unk_0x9B986164C42EA510())
								{
									if (!Global_2456109.f_59)
									{
										Global_2456109 = 1;
										Global_2456109.f_2 = 1;
										Global_2456109.f_59 = 1;
									}
								}
							}
							else if (Global_2456109.f_38)
							{
							}
							else
							{
								func_230();
								unk_0x35D7948F61AA3FEC(-1, "Hang_Up", &Global_14383, 1);
								if (Global_2456109.f_1)
								{
									func_228();
								}
								Global_14394.f_1 = 3;
							}
							return;
							break;
						
						case 2:
							if (func_227(&(Global_2451473.f_284[Local_330[Local_330.f_2936] /*2*/])))
							{
								if (!func_226(&(Global_2451473.f_284[Local_330[Local_330.f_2936] /*2*/]), 30000, 0))
								{
									if (func_215(0, 0, 1, 1))
									{
										func_205("CELL_MP_1009H", unk_0xB67DF8F35744CF60(Local_330[Local_330.f_2936]), func_206(Local_330[Local_330.f_2936], -2, 0, 0), -1);
									}
									Local_330.f_2976 = 0;
									return;
								}
							}
							if (((((!func_162(0) || !func_162(Local_330[Local_330.f_2936])) || unk_0xED83F2623D9B2092(Local_330[Local_330.f_2936])) || unk_0x188ACA6930432899(Local_330[Local_330.f_2936])) || unk_0xA1064325A43EA588(Local_330[Local_330.f_2936])) || unk_0xCB98A8A90D6AC1D1(Local_330[Local_330.f_2936]))
							{
								if (func_215(1, 1, 1, 1))
								{
									if (!unk_0xD994929E13CC1ED5(unk_0xB67DF8F35744CF60(Local_330[Local_330.f_2936]), "**Invalid**"))
									{
										func_205("CELL_MP_1009M", unk_0xB67DF8F35744CF60(Local_330[Local_330.f_2936]), func_206(Local_330[Local_330.f_2936], -2, 0, 0), -1);
									}
									else
									{
										func_204("CELL_MP_1009N", -1);
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
							if (!unk_0x2527B81CE8240C09())
							{
								if (unk_0x211AF631627DE2C5() && !unk_0x5762EE910D467202(&(Local_330.f_2963)))
								{
									if (unk_0x5E3C90A6DA9D9EC6(&(Local_330.f_2963), ""))
									{
										Local_330.f_2976 = 0;
										Global_14394.f_1 = 3;
									}
								}
								else
								{
									unk_0xC13E73CAC2C614FF(&(Local_330.f_2963));
									Local_330.f_2976 = 0;
									Global_14394.f_1 = 3;
								}
							}
							break;
						
						case 5:
							if (unk_0x80622F5ED5957337())
							{
								if (unk_0x464883E45616A088(&(Local_330.f_2963)))
								{
									unk_0xEF956A1EC046AA4A(&Var4, 35, &(Local_330.f_2963));
								}
							}
							if (Var4.f_0 != -1)
							{
								if (Var4.f_21 == 1)
								{
									if (!func_161(Var4.f_0))
									{
										if (unk_0x23B9E4BF36397A07(Var4.f_0))
										{
											Local_330.f_2976 = 0;
											unk_0x02A6B267064771B1("CREW_JOIN");
											unk_0x6222A57F463E8EE7(&(Var4.f_1));
											unk_0x267D6EB296008122(1, 1);
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
							unk_0xC13E73CAC2C614FF(&(Local_330.f_2963));
							break;
						
						case 7:
							if (unk_0x236D8AD7EE179F46(Global_2422670.f_652, Local_330[Local_330.f_2936]))
							{
								unk_0xC69E84EBBD7166E6(&(Global_2422670.f_652), Local_330[Local_330.f_2936]);
							}
							else
							{
								Global_2422670.f_652 = 0;
								unk_0xF3148AAF69AF9CBC(&(Global_2422670.f_652), Local_330[Local_330.f_2936]);
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
					unk_0xC69E84EBBD7166E6(&Global_2265, 0);
					iLocal_114 = 0;
					func_143();
					Global_14372 = 1;
					unk_0x21ED0FC9B5CC748B(Global_14375, "GET_CURRENT_SELECTION");
					uLocal_98 = unk_0x723E3684EF582590();
					while (!unk_0xAB56DCBFCD98FF03(uLocal_98))
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					Local_330.f_2946 = unk_0x2D1F70CC7C051146(uLocal_98);
					if (!func_164(&Local_330, &iVar3))
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
								Global_2456109.f_59 = 0;
								Local_330.f_2981 = 1;
								Local_330.f_2976 = 1;
								return;
								break;
						}
						Global_14394.f_1 = 3;
						return;
					}
					Global_2456109.f_59 = 0;
					Local_330.f_2976 = 1;
				}
			}
			break;
		
		case 1:
			if (!func_164(&Local_330, &iVar3))
			{
				func_240(1);
				func_230();
				Local_330.f_2978 = 1;
				Local_330.f_2977 = 1;
				return;
			}
			else if (Local_330.f_2977)
			{
				if (!Local_330.f_2978)
				{
					if (!Global_2456109.f_1 || !unk_0x23D17C8A7B207E72())
					{
						func_240(1);
						func_230();
						Local_330.f_2978 = 1;
						Local_330.f_2977 = 1;
						return;
					}
					if (unk_0x1F2C82EFDAD19C5D())
					{
						if (func_145(2, Global_14364, 0))
						{
							func_230();
							Local_330.f_2976 = 0;
							return;
						}
						if (func_202(Global_2456109.f_20))
						{
							if (unk_0x5762EE910D467202(&(Global_2456109.f_20)))
							{
								if (!unk_0x425AD5BC1887845B(&(Global_2456109.f_20)))
								{
									func_240(1);
									func_230();
									Local_330.f_2978 = 1;
									Local_330.f_2977 = 1;
									return;
								}
							}
						}
						else
						{
							func_240(1);
							func_230();
							Local_330.f_2978 = 1;
							Local_330.f_2977 = 1;
							return;
						}
					}
					else
					{
						func_230();
						Local_330.f_2976 = 0;
						func_151();
						return;
					}
					if (!Global_2456109.f_37)
					{
						if (Global_2456109.f_33 == -1)
						{
							if (func_226(&(Local_330.f_2979), 40000, 1))
							{
								func_240(1);
								func_230();
								Local_330.f_2978 = 1;
								Local_330.f_2977 = 1;
								return;
							}
						}
						else
						{
							switch (Global_2456109.f_33)
							{
								case 1:
									func_201();
									func_200();
									if (unk_0x1C6DF6AD69BE853E())
									{
										if (iVar1 == iVar2)
										{
										}
									}
									unk_0x98A5E5B909F1B162(iLocal_103);
									return;
									break;
								
								case 2:
									func_240(1);
									func_230();
									Local_330.f_2978 = 1;
									return;
									break;
								
								default:
									func_240(1);
									func_230();
									Local_330.f_2978 = 1;
									return;
									break;
								}
							}
						}
				}
			}
			else if (!func_227(&(Local_330.f_2979)))
			{
				func_241(&(Local_330.f_2979));
				func_199(&(Local_330.f_2979), 1, 0);
			}
			else
			{
				if (func_226(&(Local_330.f_2979), 15000, 1))
				{
					func_230();
					func_75();
					func_245();
					Global_14394.f_1 = 3;
					return;
				}
				if (Global_2456109.f_1 || unk_0x236D8AD7EE179F46(Global_2265, 20))
				{
					if (func_145(2, Global_14364, 0))
					{
						func_230();
						Global_14394.f_1 = 3;
						return;
					}
				}
				if (Global_2456109.f_1)
				{
					if (func_198(&Local_330, &(Local_330.f_2983)))
					{
						func_197(&(Local_330.f_2979), 1, 0);
						Local_330.f_2978 = 0;
						Local_330.f_2977 = 1;
						if (Global_69020)
						{
							func_195(105, 1, -1, 1);
						}
					}
					else
					{
						func_240(1);
						func_230();
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
				if (func_189(&Local_3330, &(Local_3330.f_1), &(Local_3330.f_2), 0, 0, &cLocal_3333, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0))
				{
					StringCopy(&cLocal_3333, unk_0x80F8578336D820CE(), 64);
					Local_3330.f_0 = 0;
					Local_3330.f_2 = 0;
					Local_3330.f_1 = 0;
					iLocal_3349 = 0;
					uLocal_3350 = unk_0xF36D646FEBEFB165(&cLocal_3333);
					StringCopy(&cLocal_3333, unk_0x8F66F3A1539D7060(&cLocal_3333, 0, uLocal_3350, 63), 64);
					func_197(&(Global_2451473.f_284[Local_330[Local_330.f_2936] /*2*/]), 0, 0);
					if (unk_0xB318FDA0D1ABDB20(func_188(&cLocal_3333)))
					{
					}
					else
					{
						Var54 = { func_163(Local_330[Local_330.f_2936]) };
						unk_0x0CF0804178A1A383(&cLocal_3333, &Var54);
						func_171("CP_TM_SENT", Local_330[Local_330.f_2936], 0, 0, 0, 1, 1, 0);
						func_87(1902, 1, -1);
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
	int iVar1;
	struct<16> Var2;
	int iVar18;
	int iVar19;
	
	iVar0 = -1;
	iVar1 = unk_0xCCFDB2B968281FE8(iParam1);
	if (unk_0x4F5BEB9A4097F301(unk_0x1329891157A54C63(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, unk_0xB67DF8F35744CF60(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, unk_0xB67DF8F35744CF60(iParam1), 64);
		}
		unk_0x02A6B267064771B1(sParam0);
		if ((iVar1 != -1 && unk_0x726DA50057167075()) && iVar1 < 4)
		{
			if (Global_1607808.f_59833[iVar1] != -1)
			{
				unk_0xDB5ED960DFB0E4DF(func_181(iVar1, iParam1, 0));
			}
			else
			{
				unk_0xDB5ED960DFB0E4DF(func_206(iParam1, -2, 1, 0));
			}
		}
		else
		{
			unk_0xDB5ED960DFB0E4DF(func_206(iParam1, -2, 1, 0));
		}
		unk_0x6222A57F463E8EE7(func_179(&Var2));
		if (!bParam4)
		{
			iVar0 = unk_0x267D6EB296008122(0, 1);
		}
		else
		{
			Global_2450501 = { func_163(iParam1) };
			if (unk_0xEF956A1EC046AA4A(&Global_2450431, 35, &Global_2450501))
			{
				iVar18 = 0;
				if (unk_0xD994929E13CC1ED5(&(Global_2450431.f_22), "Leader") && Global_2450431.f_30 == 0)
				{
					iVar18 = 1;
				}
				if (Global_2450431.f_21 > 0)
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
					iVar0 = unk_0xADB0BFD6F62AC3BD(iVar19, unk_0x9C86777A4808F723(&Global_2450431, 35), &(Global_2450431.f_17), Global_2450431.f_30, iVar18, 0, Global_2450431, &Var2, Global_1317051, Global_1317052, Global_1317053);
				}
				else
				{
					iVar0 = unk_0xB8D63AFAF0FBFF54(iVar19, unk_0x9C86777A4808F723(&Global_2450431, 35), &(Global_2450431.f_17), Global_2450431.f_30, iVar18, 0, Global_2450431, Global_1317051, Global_1317052, Global_1317053);
				}
			}
			else
			{
				iVar0 = unk_0x267D6EB296008122(0, 1);
			}
		}
		func_172(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_172(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_177() || !unk_0x726DA50057167075()) || !func_175(unk_0x1329891157A54C63(), 0))
	{
		return;
	}
	iVar0 = func_173(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1707570.f_5[iVar0 /*53*/] = iParam0;
		Global_1707570.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1707570.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1707570.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1707570.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1707570.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1707570.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1707570.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1707570.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1707570.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1707570.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1707570.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_173(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1707570 - 1))
	{
		if (iParam0 > Global_1707570.f_5[iVar0 /*53*/].f_1)
		{
			func_174(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1707570++;
	if (Global_1707570 > 5)
	{
		Global_1707570 = 5;
		return Global_1707570;
	}
	return (Global_1707570 - 1);
}

void func_174(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1707570.f_5[iVar0 /*53*/] = { Global_1707570.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_175(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1329891157A54C63())
	{
		bVar0 = func_176(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1585045[iParam0 /*400*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xA89AE5060232966A(iParam0))
		{
			bVar0 = unk_0xCCFDB2B968281FE8(iParam0) == 8;
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
	if (Global_1315870[iVar1] == 1)
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
	return unk_0x2D6859674806FDCE(-1762644250);
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
	
	if (Global_1607808.f_59833[iParam0] != -1)
	{
		if (Global_1607808.f_59833[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1607808.f_59833[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1607808.f_59833[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1607808.f_59833[iParam0] == 4)
		{
			iVar0 = 6;
		}
		else
		{
			iVar0 = Global_1607808.f_59833[iParam0];
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
	
	iVar0 = unk_0xCCFDB2B968281FE8(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_187(iVar0, iParam2, 0))
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
			else
			{
				return func_183(iVar0, iParam2);
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

int func_183(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_185(iParam0, iParam1);
	if (func_184(Global_1607808.f_63421))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
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
		if (iParam0 == Global_262145.f_7296[iVar0])
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
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 0);
				
				case 1:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 1);
				
				case 2:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 2);
				
				case 3:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 4);
				
				case 1:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 5);
				
				case 2:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 6);
				
				case 3:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 8);
				
				case 1:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 9);
				
				case 2:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 10);
				
				case 3:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 12);
				
				case 1:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 13);
				
				case 2:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 14);
				
				case 3:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 15);
				
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

int func_189(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, char* sParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, char* sParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16)
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
	
	if (unk_0xC584A413BCB2AA39() || unk_0x29AFA2493D7C23D0())
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
				else if (func_194())
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
						if (func_194())
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
						if (unk_0x968BF1C2C695B61A(joaat("fm_capture_creator")) > 0)
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
						if (unk_0x968BF1C2C695B61A(joaat("fm_capture_creator")) > 0)
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
				else if (func_194())
				{
					sVar3 = "FMMC_KEY_TIS2FJ";
				}
				else
				{
					sVar3 = "FMMC_KEY_TIP2F";
				}
				if (unk_0x9800AF1CCAFA4639() || unk_0x3F0C224D3CC05EF2())
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
				if (unk_0x913B1C01C1BA6C6F())
				{
					iVar6 = 6;
				}
				else if (unk_0x45EDE682E0EE8FDF() == 0)
				{
					iVar6 = 0;
				}
				else
				{
					iVar6 = 1;
				}
				if (unk_0xB318FDA0D1ABDB20(sParam5))
				{
					unk_0x07C0E82F2B1B2F84(iVar6, sVar3, sVar4, "", "", "", "", iVar5);
				}
				else
				{
					unk_0x07C0E82F2B1B2F84(iVar6, sVar3, sVar4, sParam5, sParam10, "", "", iVar5);
				}
			}
			else
			{
				if (unk_0x913B1C01C1BA6C6F())
				{
					iVar7 = 6;
				}
				else if (unk_0x45EDE682E0EE8FDF() == 0)
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
					if (unk_0x9800AF1CCAFA4639() || unk_0x3F0C224D3CC05EF2())
					{
						sVar4 = sVar3;
						sVar3 = "FMMC_T0_M19";
					}
					if (unk_0x45EDE682E0EE8FDF() == 10)
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
					unk_0xBBE3360311040122(2);
					if (unk_0xB318FDA0D1ABDB20(&(Global_1607808.f_63428)))
					{
						unk_0x07C0E82F2B1B2F84(iVar7, sVar3, sVar4, "", "", "", "", iVar8);
					}
					else
					{
						unk_0x07C0E82F2B1B2F84(iVar7, sVar3, sVar4, &(Global_1607808.f_63428), "", "", "", iVar8);
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
					if (unk_0x9800AF1CCAFA4639())
					{
						sVar4 = sVar3;
						sVar3 = "FMMC_T0_M19";
					}
					iVar8 = 63;
					unk_0xBBE3360311040122(2);
					if (unk_0xB318FDA0D1ABDB20(sParam5))
					{
						unk_0x07C0E82F2B1B2F84(iVar7, sVar3, sVar4, "", "", "", "", iVar8);
					}
					else
					{
						unk_0x07C0E82F2B1B2F84(iVar7, sVar3, sVar4, sParam5, "", "", "", iVar8);
					}
				}
				else if (bParam9)
				{
					if (unk_0x45EDE682E0EE8FDF() == 0)
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
					if (unk_0x9800AF1CCAFA4639() || unk_0x3F0C224D3CC05EF2())
					{
						sVar4 = sVar3;
						sVar3 = "FMMC_T0_M36";
					}
					iVar9 = 0;
					while (iVar9 <= 7)
					{
						if (unk_0x4357449749A521B1(&(Global_1607808.f_63579[iVar9 /*16*/])))
						{
							StringCopy(&(Global_1607808.f_63579[iVar9 /*16*/]), "", 64);
						}
						iVar9++;
					}
					unk_0x8742C1E091A5C965(iVar7, sVar3, sVar4, &(Global_1607808.f_63579[0 /*16*/]), &(Global_1607808.f_63579[1 /*16*/]), &(Global_1607808.f_63579[2 /*16*/]), &(Global_1607808.f_63579[3 /*16*/]), &(Global_1607808.f_63579[4 /*16*/]), &(Global_1607808.f_63579[5 /*16*/]), &(Global_1607808.f_63579[6 /*16*/]), &(Global_1607808.f_63579[7 /*16*/]), iVar8);
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
					if (unk_0x9800AF1CCAFA4639() || unk_0x3F0C224D3CC05EF2())
					{
						sVar4 = sVar3;
						sVar3 = "FMMC_SMS3";
					}
					if (unk_0xB318FDA0D1ABDB20(&(Global_1607808.f_24295[iParam16 /*38*/].f_4[0 /*16*/])))
					{
						unk_0x07C0E82F2B1B2F84(iVar7, sVar3, sVar4, "", "", "", "", 126);
					}
					else
					{
						iVar10 = 0;
						while (iVar10 <= 1)
						{
							if (unk_0x4357449749A521B1(&(Global_1607808.f_24295[iParam16 /*38*/].f_4[iVar10 /*16*/])))
							{
								StringCopy(&(Global_1607808.f_24295[iParam16 /*38*/].f_4[iVar10 /*16*/]), "", 64);
							}
							iVar10++;
						}
						unk_0x07C0E82F2B1B2F84(iVar7, sVar3, sVar4, &(Global_1607808.f_24295[iParam16 /*38*/].f_4[0 /*16*/]), &(Global_1607808.f_24295[iParam16 /*38*/].f_4[1 /*16*/]), "", "", 126);
					}
				}
				else if (bParam8)
				{
					iVar8 = 61;
					if (bParam11)
					{
						if (func_194())
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
						if (unk_0x9800AF1CCAFA4639() || unk_0x3F0C224D3CC05EF2())
						{
							sVar4 = sVar3;
							sVar3 = "CELL_EMAIL_DESC";
						}
					}
					else if (func_194())
					{
						if (*uParam1 == 0)
						{
							sVar3 = "FMMC_KEY_TIP8S";
						}
						else
						{
							sVar3 = "FMMC_KEY_TIP8FS";
						}
						if (unk_0x9800AF1CCAFA4639() || unk_0x3F0C224D3CC05EF2())
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
						if (unk_0x9800AF1CCAFA4639())
						{
							sVar4 = sVar3;
							sVar3 = "FMMC_SMS4";
						}
					}
					if (unk_0xB318FDA0D1ABDB20(sParam5))
					{
						unk_0x07C0E82F2B1B2F84(iVar7, sVar3, sVar4, "", "", "", "", iVar8);
					}
					else
					{
						unk_0x07C0E82F2B1B2F84(iVar7, sVar3, sVar4, sParam5, "", "", "", iVar8);
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
					if (unk_0x9800AF1CCAFA4639())
					{
						sVar4 = sVar3;
						sVar3 = "FMMC_KEY_TIP9N";
					}
					if (unk_0xB318FDA0D1ABDB20(sParam5))
					{
						unk_0x07C0E82F2B1B2F84(iVar7, sVar3, sVar4, "", "", "", "", 16);
					}
					else
					{
						unk_0x07C0E82F2B1B2F84(iVar7, sVar3, sVar4, sParam5, "", "", "", 16);
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
					if (unk_0x9800AF1CCAFA4639())
					{
						sVar4 = sVar3;
						sVar3 = "FMMC_KEY_TIP12N";
					}
					if (unk_0xB318FDA0D1ABDB20(sParam5))
					{
						unk_0x07C0E82F2B1B2F84(0, sVar3, sVar4, "", "", "", "", iVar8);
					}
					else
					{
						unk_0x07C0E82F2B1B2F84(0, sVar3, sVar4, sParam5, "", "", "", iVar8);
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
					if (unk_0xB318FDA0D1ABDB20(sParam5))
					{
						unk_0x07C0E82F2B1B2F84(0, sVar3, sVar4, "", "", "", "", iVar8);
					}
					else
					{
						unk_0x07C0E82F2B1B2F84(0, sVar3, sVar4, sParam5, "", "", "", iVar8);
					}
				}
				else
				{
					if (unk_0x45EDE682E0EE8FDF() == 0)
					{
						iVar8 = 501;
						if (bParam11)
						{
							if (func_194())
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
						if (func_194())
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
						else if (func_194())
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
					if (unk_0x9800AF1CCAFA4639() || unk_0x3F0C224D3CC05EF2())
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
						if (unk_0x4357449749A521B1(&(Global_1607808.f_63450[iVar11 /*16*/])))
						{
							StringCopy(&(Global_1607808.f_63450[iVar11 /*16*/]), "", 64);
						}
						iVar11++;
					}
					if (bParam11)
					{
						unk_0x8742C1E091A5C965(iVar7, sVar3, sVar4, sParam5, sParam10, "", "", "", "", "", "", iVar8);
					}
					else
					{
						unk_0x8742C1E091A5C965(iVar7, sVar3, sVar4, &(Global_1607808.f_63450[0 /*16*/]), &(Global_1607808.f_63450[1 /*16*/]), &(Global_1607808.f_63450[2 /*16*/]), &(Global_1607808.f_63450[3 /*16*/]), &(Global_1607808.f_63450[4 /*16*/]), &(Global_1607808.f_63450[5 /*16*/]), &(Global_1607808.f_63450[6 /*16*/]), &(Global_1607808.f_63450[7 /*16*/]), iVar8);
					}
				}
			}
			StringCopy(&Global_1689270, "", 64);
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		
		case 1:
			*uParam0 = unk_0x87E58291A874D55F();
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
						if (unk_0xB318FDA0D1ABDB20(&Global_1689270))
						{
							StringCopy(&Global_1689270, unk_0x80F8578336D820CE(), 64);
							if (unk_0xB318FDA0D1ABDB20(&Global_1689270))
							{
								*uParam1 = 0;
								return 1;
							}
							iVar0 = unk_0xF36D646FEBEFB165(unk_0x80F8578336D820CE());
							iVar2 = 0;
							while (iVar2 <= (iVar0 - 1))
							{
								if (*uParam2 != 0)
								{
									if (!unk_0xB318FDA0D1ABDB20(&Global_1689270))
									{
										if (unk_0xD994929E13CC1ED5(" ", unk_0x486460DF63209344(&Global_1689270, 0, 1)))
										{
											iVar1 = unk_0xF36D646FEBEFB165(&Global_1689270);
											StringCopy(&Global_1689270, unk_0x486460DF63209344(&Global_1689270, 1, iVar1), 64);
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
					if (unk_0x8045B81430042467(*uParam1))
					{
						if (!unk_0x059EAB73A77A90BD(*uParam1))
						{
							unk_0x81B3DBD3862D4A7D();
							iVar12 = unk_0x2A5A587CFC64F416(*uParam1);
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
									func_193(1);
									return 0;
									break;
							}
						}
						else if (bParam11)
						{
							if (unk_0x968BF1C2C695B61A(joaat("appinternet")) == 0)
							{
								unk_0x81B3DBD3862D4A7D();
								*uParam1 = 0;
								return 1;
							}
						}
						break;
					}
					if (bParam4)
					{
						unk_0xB860B2E44C65511A(&Global_1689270, uParam1);
					}
					else
					{
						unk_0xB860B2E44C65511A(unk_0x80F8578336D820CE(), uParam1);
					}
					if (unk_0x3F0C224D3CC05EF2())
					{
						if ((!unk_0x1F2C82EFDAD19C5D() || func_191() == 0) || func_190() == 1)
						{
							*uParam1 = 0;
							*uParam2 = 0;
							*uParam0 = 3;
							return 0;
						}
					}
					unk_0x91418342B226A788("ERROR_CHECKPROFANITY");
					unk_0x15F4C49B01222ABB(1);
					if (!unk_0x8045B81430042467(*uParam1))
					{
						*uParam1 = -1;
						*uParam2 = 0;
						*uParam0 = 0;
						unk_0x81B3DBD3862D4A7D();
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
	if (unk_0x847832409C9B7582() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_192()
{
	return Global_2437061;
}

void func_193(int iParam0)
{
	Global_2437061 = iParam0;
}

int func_194()
{
	if (((unk_0x45EDE682E0EE8FDF() == 7 || unk_0x45EDE682E0EE8FDF() == 8) || unk_0x45EDE682E0EE8FDF() == 9) || unk_0x45EDE682E0EE8FDF() == 10)
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
		iVar0 = Global_2478104[iParam0 /*5*/][func_59(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x20026873DF8DB72A(iVar0, iParam1, iParam3);
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
	if (unk_0x1C6DF6AD69BE853E() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0xD74C7D8D2E5E43D2();
		}
		else
		{
			*uParam0 = unk_0xE36DF6414E5CCBBF();
		}
	}
	else
	{
		*uParam0 = unk_0x48E480685981C7D4();
	}
	uParam0->f_1 = 1;
}

int func_198(var uParam0, char* sParam1)
{
	if (Global_2456109.f_1)
	{
		if (unk_0x23D17C8A7B207E72())
		{
			unk_0x321A780A63EE7A8D(&(uParam0->f_2963));
			Global_2456109.f_20 = { uParam0->f_2963 };
			StringCopy(&(Global_2456109.f_4), sParam1, 64);
			return 1;
		}
	}
	return 0;
}

void func_199(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x1C6DF6AD69BE853E() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xD74C7D8D2E5E43D2();
			}
			else
			{
				*uParam0 = unk_0xE36DF6414E5CCBBF();
			}
		}
		else
		{
			*uParam0 = unk_0x48E480685981C7D4();
		}
		uParam0->f_1 = 1;
	}
}

void func_200()
{
	if (Global_14394.f_1 > 3)
	{
		Global_14394.f_1 = 9;
		Global_15706 = 1;
		if (Global_69020)
		{
			if (!unk_0x913B1C01C1BA6C6F())
			{
				func_139(Global_14375, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_1624), 15);
			}
		}
	}
}

void func_201()
{
	unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
	unk_0xBD0C54D89298454E(4);
	unk_0xBD0C54D89298454E(0);
	unk_0xBD0C54D89298454E(2);
	unk_0x6CE839BF5D87A428("CELL_CONDFON");
	unk_0x6222A57F463E8EE7(&Global_15708);
	unk_0xC3822F70D0E7940B();
	func_72("CELL_300");
	func_72("CELL_219");
	func_72("CELL_219");
	unk_0xBA9BA6181F2B6111();
	Global_2456109.f_37 = 1;
	unk_0xC69E84EBBD7166E6(&Global_2264, 27);
	func_91();
}

bool func_202(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x7BD139E6ED31A2EB(&uParam0, 13);
}

void func_203(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x645DF34C4E038370(sParam0);
	unk_0x16885CADDEC73B2E(iParam1, 1);
}

void func_204(char* sParam0, int iParam1)
{
	unk_0x522099B37CAE9E12(sParam0);
	unk_0xC592EBAF1D879BDC(0, 0, 1, iParam1);
}

void func_205(char* sParam0, var uParam1, int iParam2, int iParam3)
{
	unk_0x522099B37CAE9E12(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xDB5ED960DFB0E4DF(iParam2);
	}
	unk_0x6222A57F463E8EE7(uParam1);
	unk_0xC592EBAF1D879BDC(0, 0, 1, iParam3);
}

int func_206(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_213(iParam0))
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
	if (func_213(unk_0x1329891157A54C63()) || (func_212() && func_211()))
	{
		uVar0 = func_210();
		if (unk_0x86CCCD2FAE9D5E65(uVar0))
		{
			if (unk_0x0452D5BF20AD945A(uVar0))
			{
				if (unk_0x1B503E81E3B3D65F(uVar0) != -1)
				{
					if (func_160(unk_0x1B503E81E3B3D65F(uVar0), 0, 1))
					{
						return func_208(iParam0, unk_0x1B503E81E3B3D65F(uVar0), iParam1, bParam2, bParam3);
					}
				}
			}
			else
			{
				return func_207(0, -1, 0);
			}
		}
	}
	return func_208(iParam0, unk_0x1329891157A54C63(), iParam1, bParam2, bParam3);
}

int func_207(bool bParam0, int iParam1, bool bParam2)
{
	return func_182(unk_0x1329891157A54C63(), bParam0, iParam1, bParam2);
}

int func_208(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0xCCFDB2B968281FE8(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (iVar0 != -1)
	{
		if (func_209(iParam1, iParam0, iVar0, 0))
		{
			return func_186(1);
		}
		else
		{
			return func_182(iParam1, 1, iVar0, bParam4);
		}
	}
	else if ((Global_1573822 || Global_1573813) || Global_1585045[iParam0 /*400*/] == 0)
	{
		if (iParam0 == iParam1 || (Global_1573822 == 1 && Global_1573832 == 0))
		{
			return func_186(1);
		}
		else
		{
			return func_182(iParam1, 1, iVar0, bParam4);
		}
	}
	if (Global_1573817 && Global_1573399.f_14 == iParam0)
	{
		return 28;
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

bool func_209(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0xCCFDB2B968281FE8(iParam0) == -1 && unk_0xCCFDB2B968281FE8(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0xCCFDB2B968281FE8(iParam0) == unk_0xCCFDB2B968281FE8(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0xCCFDB2B968281FE8(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0xCCFDB2B968281FE8(iParam0) == iParam2;
	}
	return unk_0xCCFDB2B968281FE8(iParam0) == iParam2;
}

var func_210()
{
	return Global_2359301.f_2;
}

bool func_211()
{
	return unk_0x236D8AD7EE179F46(Global_2359301, 4);
}

bool func_212()
{
	return unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_39.f_18, 14);
}

int func_213(int iParam0)
{
	if (func_175(iParam0, 0))
	{
		return 1;
	}
	if (func_214())
	{
		if (iParam0 == unk_0x1329891157A54C63())
		{
			return 1;
		}
	}
	if (unk_0x236D8AD7EE179F46(Global_2414506[iParam0 /*255*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_214()
{
	return unk_0x236D8AD7EE179F46(Global_2359301, 3);
}

int func_215(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0xA83A609D74168B30())
	{
		return 0;
	}
	if (func_225())
	{
		return 0;
	}
	if (!unk_0xECDEA377354CBDA4())
	{
		return 0;
	}
	if (func_51())
	{
		return 0;
	}
	if (func_224())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_221(unk_0x1329891157A54C63(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_220(unk_0x1329891157A54C63()))
		{
			return 0;
		}
	}
	if (func_219())
	{
		return 0;
	}
	if (unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		return 0;
	}
	if (unk_0xDB10DED5ABC4AA20())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63()))
		{
			return 0;
		}
	}
	if (Global_1573669)
	{
		return 0;
	}
	if (func_218())
	{
		return 0;
	}
	if (func_217())
	{
		return 0;
	}
	if (func_216())
	{
		return 0;
	}
	if (Global_67710)
	{
		return 0;
	}
	if (Global_2458396)
	{
		return 0;
	}
	return 1;
}

bool func_216()
{
	return Global_1585045[unk_0x1329891157A54C63() /*400*/].f_177 != 0;
}

bool func_217()
{
	return Global_2428865.f_566;
}

bool func_218()
{
	return Global_2428865.f_716;
}

bool func_219()
{
	return Global_2422670.f_2420.f_585;
}

int func_220(int iParam0)
{
	if (Global_2414506[iParam0 /*255*/].f_205 == 0)
	{
		return 0;
	}
	return 1;
}

int func_221(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_222(iParam0))
		{
			return 1;
		}
	}
	if (Global_1585045[iParam0 /*400*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_222(int iParam0)
{
	return func_223(iParam0);
}

bool func_223(int iParam0)
{
	return unk_0x236D8AD7EE179F46(Global_1585045[iParam0 /*400*/].f_13.f_1, 0);
}

bool func_224()
{
	return unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_39.f_18, 0);
}

int func_225()
{
	if (Global_15693 != 0 || unk_0xE1772957381F609F())
	{
		return 1;
	}
	return 0;
}

int func_226(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_199(uParam0, bParam2, 0);
	if (unk_0x1C6DF6AD69BE853E() && !bParam2)
	{
		if (unk_0x013F97B9D88B92CA(unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x013F97B9D88B92CA(unk_0x996F735E5C03B101(unk_0x48E480685981C7D4(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_227(var uParam0)
{
	return uParam0->f_1;
}

void func_228()
{
	Global_2456109.f_1 = 0;
	Global_2456109 = 0;
	Global_2456109.f_2 = 0;
	Global_2456109.f_33 = -1;
	Global_2456109.f_34 = -1;
	StringCopy(&(Global_2456109.f_4), "", 64);
	StringCopy(&(Global_2456109.f_39[0 /*16*/]), "", 64);
	Global_2456109.f_38 = 0;
	Global_2456109.f_56 = 0;
	Global_2456109.f_57 = 0;
	Global_2456109.f_58 = -2;
	Global_2456109.f_3 = 0;
	func_229(&(Global_2456109.f_20));
}

void func_229(var uParam0)
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

void func_230()
{
	Global_2456109.f_2 = 1;
	Global_2456109.f_38 = 1;
	if (unk_0x1F2C82EFDAD19C5D())
	{
		if (unk_0x23D17C8A7B207E72())
		{
			while (unk_0x8E46A86E6856C6C3())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0x37CE6B7510A18C70();
			Global_2456109 = 0;
			Global_2456109.f_2 = 0;
		}
		else if (func_202(Global_2456109.f_20))
		{
			if (unk_0x5762EE910D467202(&(Global_2456109.f_20)))
			{
				if (!unk_0x425AD5BC1887845B(&(Global_2456109.f_20)))
				{
					func_228();
				}
			}
		}
		else
		{
			func_228();
		}
	}
	else
	{
		func_228();
	}
	if (Global_2456109.f_37)
	{
		func_30(0);
	}
	Global_2456109.f_37 = 0;
	Global_2456109.f_3 = 0;
}

void func_231(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_238())
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
				func_232(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_232(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_232(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_238())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x077FF247AF837AEC(func_60()) || unk_0x2FABBA9E4D234344())
		{
			Global_2545975 = 1;
			return 0;
		}
		if (Global_2437720)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2545976 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2545514[iVar1 /*69*/].f_2 == 0)
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
	if (bVar0 || unk_0x08F28BBA457D0639(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0xAECF50B5A74D109D(iVar3))
		{
			*uParam0 = func_237(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2545514[*uParam0 /*69*/].f_62 = 1;
				}
			}
			Global_2545972 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2545974 = 1;
			Global_2545977 = iParam4;
			Global_2545979 = iParam3;
			Global_2545980 = 1;
			Global_2545978 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2545977 = iParam4;
			Global_2545979 = iParam3;
			Global_2545980 = 1;
			Global_2545978 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_236(1, iParam4);
			Global_2545974 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_233(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_233(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xF3148AAF69AF9CBC(&(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_121.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_234(iParam0);
	}
}

void func_234(int iParam0)
{
	bool bVar0;
	struct<69> Var1;
	
	bVar0 = false;
	if (!func_238())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_235(iParam0))
		{
			if (!bVar0)
			{
				unk_0x9FC03E9C1F7C60AB();
			}
		}
		else if (!bVar0)
		{
			unk_0x314D4CB8F27D3283(Global_2545514[iParam0 /*69*/]);
		}
		Var1 = 2147483647;
		Global_2545514[iParam0 /*69*/] = { Var1 };
	}
}

int func_235(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2545514[iParam0 /*69*/].f_5 == 1;
	}
	return 0;
}

void func_236(int iParam0, var uParam1)
{
	Global_2438972 = uParam1;
	Global_2438971 = iParam0;
}

int func_237(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2545514[iVar0 /*69*/].f_2 == 0)
		{
			if (!func_238())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2545514[iVar0 /*69*/].f_2 = 1;
			Global_2545514[iVar0 /*69*/].f_1 = uParam5;
			Global_2545514[iVar0 /*69*/].f_3 = uParam1;
			Global_2545514[iVar0 /*69*/].f_4 = uParam2;
			Global_2545514[iVar0 /*69*/].f_7 = uParam3;
			Global_2545514[iVar0 /*69*/].f_5 = 0;
			Global_2545514[iVar0 /*69*/] = iParam0;
			Global_2545514[iVar0 /*69*/].f_6 = iParam4;
			Global_2545514[iVar0 /*69*/].f_65 = uParam8;
			Global_2545514[iVar0 /*69*/].f_64 = uParam7;
			Global_2545514[iVar0 /*69*/].f_68 = 0;
			Global_2545972 = 0;
			if (bParam6)
			{
				Global_2545514[iVar0 /*69*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_238()
{
	if (unk_0x913B1C01C1BA6C6F())
	{
		return 1;
	}
	return 0;
}

int func_239(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		iVar0 = unk_0x18E1732F35074CBF();
	}
	iVar0 = (iVar0 + unk_0x5DE212B0AA7F2897(-1));
	return iVar0;
}

void func_240(bool bParam0)
{
	if (bParam0)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2265, 20);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&Global_2265, 20);
	}
}

void func_241(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_242(char* sParam0)
{
	Global_1579 = 132;
	StringCopy(&Global_15708, sParam0, 64);
	if (Global_14394.f_1 > 3)
	{
		Global_14394.f_1 = 10;
		func_97();
	}
	unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
	unk_0xBD0C54D89298454E(4);
	unk_0xBD0C54D89298454E(0);
	unk_0xBD0C54D89298454E(2);
	unk_0x6CE839BF5D87A428("CELL_CONDFON");
	unk_0x6222A57F463E8EE7(&Global_15708);
	unk_0xC3822F70D0E7940B();
	func_72("CELL_300");
	func_72("CELL_211");
	func_72("CELL_211");
	unk_0xBA9BA6181F2B6111();
	unk_0xF3148AAF69AF9CBC(&Global_2264, 20);
	func_91();
	unk_0xC69E84EBBD7166E6(&Global_2264, 20);
}

void func_243()
{
	unk_0x5521303E3F2C2974();
	Global_2456109 = 1;
	Global_2456109.f_2 = 0;
	Global_2456109.f_33 = -1;
	Global_2456109.f_34 = -1;
	Global_2456109.f_38 = 0;
}

void func_244()
{
	unk_0x98A5E5B909F1B162(iLocal_103);
	unk_0x54206B7CE6FF2360(iLocal_103);
	Local_330.f_2978 = 0;
	unk_0xC69E84EBBD7166E6(&Global_2264, 9);
	unk_0xC69E84EBBD7166E6(&Global_2264, 29);
	unk_0xC69E84EBBD7166E6(&Global_2265, 20);
	unk_0xC69E84EBBD7166E6(&Global_2265, 0);
	unk_0xC69E84EBBD7166E6(&Global_2265, 18);
	Global_98931.f_32499[12 /*29*/].f_1 = uLocal_302;
	Global_98931.f_32499[2 /*29*/].f_1 = uLocal_303;
	Global_98931.f_32499[0 /*29*/].f_1 = uLocal_304;
	if (Local_330.f_2999 == 1)
	{
		if (unk_0x1F2C82EFDAD19C5D())
		{
			if (Global_2456109.f_33 == -1)
			{
				func_230();
			}
		}
	}
	unk_0xC23A229F78DAD92A();
}

void func_245()
{
	if (!Global_69020)
	{
		if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
		{
			if (unk_0x236D8AD7EE179F46(Global_2264, 11))
			{
				if (!Global_14337)
				{
					unk_0xA0E7F565B88CC79B(unk_0x81873881071CD9FE(), 0, 1);
				}
				if (Global_69020)
				{
					unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 244, 1);
					unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 243, 1);
					unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 242, 1);
				}
				unk_0xC69E84EBBD7166E6(&Global_2264, 11);
			}
		}
	}
}

void func_246()
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
		Global_98931.f_32499[iVar151 /*29*/].f_1 = 5000;
		func_16();
		while (iVar150 < 147)
		{
			if (unk_0x236D8AD7EE179F46(Global_2265, 0))
			{
				if ((iVar150 == 2 || iVar150 == 0) || iVar150 == 12)
				{
					Global_98931.f_32499[12 /*29*/].f_1 = 3;
					Global_98931.f_32499[2 /*29*/].f_1 = 1;
					Global_98931.f_32499[0 /*29*/].f_1 = 2;
					bLocal_90 = true;
				}
				else
				{
					bLocal_90 = false;
				}
			}
			else if (Global_98931.f_32499[iVar150 /*29*/].f_12[Global_14394] == 1)
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
						if (Global_98931.f_32499[iVar150 /*29*/].f_19[Global_14394] == 1 || func_79(iVar150, Global_14394))
						{
							fLocal_91 = (unk_0xBBDA792448DB5A89(Global_98931.f_32499[iVar150 /*29*/].f_1) / 100f);
						}
						else
						{
							fLocal_91 = unk_0xBBDA792448DB5A89(Global_98931.f_32499[iVar150 /*29*/].f_1);
						}
						if (Global_98931.f_32499[iVar151 /*29*/].f_19[Global_14394] == 1 || func_79(iVar151, Global_14394))
						{
							fLocal_92 = (unk_0xBBDA792448DB5A89(Global_98931.f_32499[iVar151 /*29*/].f_1) / 100f);
						}
						else
						{
							fLocal_92 = unk_0xBBDA792448DB5A89(Global_98931.f_32499[iVar151 /*29*/].f_1);
						}
						if (fLocal_91 < fLocal_92)
						{
							iVar151 = iVar150;
							if (unk_0x236D8AD7EE179F46(Global_2265, 0))
							{
								if (iVar151 == 2)
								{
									func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 0f, -1f, -1f, "CELL_7001", &(Global_98931.f_32499[iVar151 /*29*/].f_3), &(Global_98931.f_32499[iVar151 /*29*/].f_7), 0, 0);
								}
								if (iVar151 == 0)
								{
									func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 0f, -1f, -1f, "CELL_7002", &(Global_98931.f_32499[iVar151 /*29*/].f_3), &(Global_98931.f_32499[iVar151 /*29*/].f_7), 0, 0);
								}
								if (iVar151 == 12)
								{
									func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 0f, -1f, -1f, "CELL_7003", &(Global_98931.f_32499[iVar151 /*29*/].f_3), "CELL_E_311", 0, 0);
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
		if (!unk_0x236D8AD7EE179F46(Global_2265, 0))
		{
			if (Global_98931.f_32499[iVar151 /*29*/].f_12[Global_14394] == 1)
			{
				if (iVar150 != Global_14394)
				{
					if (Global_98931.f_32499[iVar151 /*29*/].f_24[Global_14394] == 0)
					{
						if (Global_98931.f_32499[iVar151 /*29*/].f_19[Global_14394] == 1 || func_79(iVar151, Global_14394))
						{
							func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 1f, -1f, -1f, &(Global_98[iVar151 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
						else
						{
							func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 0f, -1f, -1f, &(Global_98[iVar151 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
					}
					else if (Global_98931.f_32499[iVar151 /*29*/].f_19[Global_14394] == 1 || func_79(iVar151, Global_14394))
					{
						func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 1f, -1f, -1f, &(Global_98931.f_32499[iVar151 /*29*/].f_3), &(Global_98931.f_32499[iVar151 /*29*/].f_3), &(Global_98931.f_32499[iVar151 /*29*/].f_7), 0, 0);
					}
					else
					{
						func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 0f, -1f, -1f, &(Global_98931.f_32499[iVar151 /*29*/].f_3), &(Global_98931.f_32499[iVar151 /*29*/].f_3), &(Global_98931.f_32499[iVar151 /*29*/].f_7), 0, 0);
					}
				}
			}
		}
		if (Global_98931.f_32499[iVar149 /*29*/].f_12[Global_14394] == 1)
		{
			if (iVar149 != Global_14394)
			{
				iLocal_93++;
			}
		}
		iVar149++;
	}
	if (!unk_0x236D8AD7EE179F46(Global_2265, 0))
	{
		if (unk_0x1F2C82EFDAD19C5D())
		{
			if (Global_14337 == 0)
			{
				func_248();
			}
		}
	}
	func_247();
}

void func_247()
{
	if (!Global_14394.f_1 == 10 && !Global_14394.f_1 == 9)
	{
		if (unk_0x236D8AD7EE179F46(Global_2264, 9))
		{
			unk_0x4EDE34FBADD967A6(750);
		}
		if (Global_14394.f_1 > 6)
		{
			func_142(Global_14375, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
			if (unk_0x236D8AD7EE179F46(Global_2265, 0))
			{
				func_140(Global_14375, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
			}
			else
			{
				func_140(Global_14375, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
			}
			Global_2267 = 99;
			if (unk_0x236D8AD7EE179F46(Global_2264, 9))
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
				unk_0xC69E84EBBD7166E6(&Global_2264, 17);
			}
			else if (unk_0x236D8AD7EE179F46(Global_2265, 0))
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
					unk_0xF3148AAF69AF9CBC(&Global_2264, 17);
				}
				else
				{
					func_139(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0xF3148AAF69AF9CBC(&Global_2264, 17);
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
				unk_0xF3148AAF69AF9CBC(&Global_2264, 17);
				func_139(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
	Global_98931.f_32499[12 /*29*/].f_1 = uLocal_302;
	Global_98931.f_32499[2 /*29*/].f_1 = uLocal_303;
	Global_98931.f_32499[0 /*29*/].f_1 = uLocal_304;
}

void func_248()
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
	func_255(&Local_330);
	iVar16 = 0;
	if (Global_69020)
	{
		if (func_251() == 0)
		{
			iVar16 = 1;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar0 = unk_0x6528B1497E4313F1(iVar2);
		if (func_160(iVar0, 0, 1))
		{
			if (iVar16 == 0)
			{
				if (!iVar0 == unk_0x1329891157A54C63())
				{
					Local_330[iVar1] = iVar0;
					func_250(unk_0xB67DF8F35744CF60(iVar0));
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
		iVar17 = unk_0xB5F469DE391974B9();
		if (iVar17 > 100)
		{
			iVar17 = 100;
		}
		iVar2 = 0;
		while (iVar2 <= (iVar17 - 1))
		{
			if (unk_0xECA3AEAD99D7C876(unk_0x0FDC164537796A95(iVar2)))
			{
				if (unk_0x9B19D7E61ED91F4C(unk_0x0FDC164537796A95(iVar2)))
				{
					Var3 = { func_249(iVar2) };
					if (!unk_0x7628BE3C0E25C192(&Var3))
					{
						if (iVar16 == 0)
						{
							if (iVar1 < 100)
							{
								Local_330.f_34[iVar1 /*29*/] = { Var3 };
								if (unk_0x3F0C224D3CC05EF2())
								{
									StringCopy(&(Local_330.f_34[iVar1 /*29*/].f_13), unk_0xE584507D31D6CC53(iVar2), 64);
								}
								else
								{
									StringCopy(&(Local_330.f_34[iVar1 /*29*/].f_13), unk_0x0FDC164537796A95(iVar2), 64);
								}
								func_250(&(Local_330.f_34[iVar1 /*29*/].f_13));
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

struct<13> func_249(int iParam0)
{
	struct<13> Var0;
	
	unk_0x6C3052AFF87F3F8E(iParam0, &Var0, 13);
	return Var0;
}

void func_250(var uParam0)
{
	unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
	unk_0x518198639630AE08(unk_0xBBDA792448DB5A89(2));
	unk_0x518198639630AE08(unk_0xBBDA792448DB5A89(iLocal_94));
	unk_0x518198639630AE08(0f);
	unk_0x6CE839BF5D87A428("STRING");
	unk_0x6222A57F463E8EE7(uParam0);
	unk_0xC3822F70D0E7940B();
	func_72("CELL_MP_999");
	func_72("CELL_MP_999");
	unk_0xBA9BA6181F2B6111();
	iLocal_94++;
	iLocal_93++;
}

int func_251()
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_254())
	{
		return 1;
	}
	if (func_253())
	{
		return 1;
	}
	return func_252(120, -1);
}

int func_252(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2478104[iParam0 /*5*/][func_59(iParam1)];
	if (unk_0xFD72912C9064BF1F(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_253()
{
	return Global_1315880;
}

bool func_254()
{
	return Global_1315882;
}

void func_255(var uParam0)
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
	func_241(&(uParam0->f_2979));
	uParam0->f_2999 = 0;
	StringCopy(&(uParam0->f_2983), "", 64);
}

void func_256()
{
	int iVar0[148];
	int iVar149;
	int iVar150;
	int iVar151;
	
	func_142(Global_14375, "SET_DATA_SLOT_EMPTY", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4EDE34FBADD967A6(0);
	func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), 0f, -1f, -1f, "CELL_232", "CELL_233", "CELL_393", 0, 0);
	iLocal_93 = 0;
	if (!unk_0x236D8AD7EE179F46(Global_2265, 0))
	{
		if (unk_0x1F2C82EFDAD19C5D())
		{
			if (Global_14337 == 0)
			{
				func_257();
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
		Global_98931.f_32499[iVar151 /*29*/].f_1 = 5000;
		func_16();
		while (iVar150 < 147)
		{
			if (unk_0x236D8AD7EE179F46(Global_2265, 0))
			{
				if ((iVar150 == 2 || iVar150 == 0) || iVar150 == 12)
				{
					Global_98931.f_32499[12 /*29*/].f_1 = 3;
					Global_98931.f_32499[2 /*29*/].f_1 = 1;
					Global_98931.f_32499[0 /*29*/].f_1 = 2;
					bLocal_90 = true;
				}
				else
				{
					bLocal_90 = false;
				}
			}
			else if (Global_98931.f_32499[iVar150 /*29*/].f_12[Global_14394] == 1)
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
						if (Global_98931.f_32499[iVar150 /*29*/].f_19[Global_14394] == 1 || func_79(iVar150, Global_14394))
						{
							fLocal_91 = (unk_0xBBDA792448DB5A89(Global_98931.f_32499[iVar150 /*29*/].f_1) / 100f);
						}
						else
						{
							fLocal_91 = unk_0xBBDA792448DB5A89(Global_98931.f_32499[iVar150 /*29*/].f_1);
						}
						if (Global_98931.f_32499[iVar151 /*29*/].f_19[Global_14394] == 1 || func_79(iVar151, Global_14394))
						{
							fLocal_92 = (unk_0xBBDA792448DB5A89(Global_98931.f_32499[iVar151 /*29*/].f_1) / 100f);
						}
						else
						{
							fLocal_92 = unk_0xBBDA792448DB5A89(Global_98931.f_32499[iVar151 /*29*/].f_1);
						}
						if (fLocal_91 < fLocal_92)
						{
							iVar151 = iVar150;
							if (unk_0x236D8AD7EE179F46(Global_2265, 0))
							{
								if (iVar151 == 2)
								{
									func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 0f, -1f, -1f, "CELL_7001", &(Global_98931.f_32499[iVar151 /*29*/].f_3), &(Global_98931.f_32499[iVar151 /*29*/].f_7), 0, 0);
								}
								if (iVar151 == 0)
								{
									func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 0f, -1f, -1f, "CELL_7002", &(Global_98931.f_32499[iVar151 /*29*/].f_3), &(Global_98931.f_32499[iVar151 /*29*/].f_7), 0, 0);
								}
								if (iVar151 == 12)
								{
									func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 0f, -1f, -1f, "CELL_7003", &(Global_98931.f_32499[iVar151 /*29*/].f_3), "CELL_E_311", 0, 0);
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
		if (!unk_0x236D8AD7EE179F46(Global_2265, 0))
		{
			if (Global_98931.f_32499[iVar151 /*29*/].f_12[Global_14394] == 1)
			{
				if (iVar150 != Global_14394)
				{
					if (Global_98931.f_32499[iVar151 /*29*/].f_24[Global_14394] == 0)
					{
						if (Global_98931.f_32499[iVar151 /*29*/].f_19[Global_14394] == 1 || func_79(iVar151, Global_14394))
						{
							func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 1f, -1f, -1f, &(Global_98[iVar151 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
						else
						{
							func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 0f, -1f, -1f, &(Global_98[iVar151 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
					}
					else if (Global_98931.f_32499[iVar151 /*29*/].f_19[Global_14394] == 1 || func_79(iVar151, Global_14394))
					{
						func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 1f, -1f, -1f, &(Global_98931.f_32499[iVar151 /*29*/].f_3), &(Global_98931.f_32499[iVar151 /*29*/].f_3), &(Global_98931.f_32499[iVar151 /*29*/].f_7), 0, 0);
					}
					else
					{
						func_139(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 0f, -1f, -1f, &(Global_98931.f_32499[iVar151 /*29*/].f_3), &(Global_98931.f_32499[iVar151 /*29*/].f_3), &(Global_98931.f_32499[iVar151 /*29*/].f_7), 0, 0);
					}
				}
			}
		}
		if (Global_98931.f_32499[iVar149 /*29*/].f_12[Global_14394] == 1)
		{
			if (iVar149 != Global_14394)
			{
				iLocal_93++;
			}
		}
		iVar149++;
	}
	func_247();
}

void func_257()
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
	func_255(&Local_330);
	iVar16 = 0;
	if (Global_69020)
	{
		if (func_251() == 0)
		{
			iVar16 = 1;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar0 = unk_0x6528B1497E4313F1(iVar2);
		if (func_160(iVar0, 0, 1))
		{
			if (iVar16 == 0)
			{
				if (!iVar0 == unk_0x1329891157A54C63())
				{
					Local_330[iVar1] = iVar0;
					func_258(unk_0xB67DF8F35744CF60(iVar0));
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
		iVar17 = unk_0xB5F469DE391974B9();
		if (iVar17 > 100)
		{
			iVar17 = 100;
		}
		iVar2 = 0;
		while (iVar2 <= (iVar17 - 1))
		{
			if (unk_0xECA3AEAD99D7C876(unk_0x0FDC164537796A95(iVar2)))
			{
				if (unk_0x9B19D7E61ED91F4C(unk_0x0FDC164537796A95(iVar2)))
				{
					Var3 = { func_249(iVar2) };
					if (!unk_0x7628BE3C0E25C192(&Var3))
					{
						if (iVar16 == 0)
						{
							if (iVar1 < 100)
							{
								Local_330.f_34[iVar1 /*29*/] = { Var3 };
								if (unk_0x3F0C224D3CC05EF2())
								{
									StringCopy(&(Local_330.f_34[iVar1 /*29*/].f_13), unk_0xE584507D31D6CC53(iVar2), 64);
								}
								else
								{
									StringCopy(&(Local_330.f_34[iVar1 /*29*/].f_13), unk_0x0FDC164537796A95(iVar2), 64);
								}
								func_258(&(Local_330.f_34[iVar1 /*29*/].f_13));
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

void func_258(var uParam0)
{
	unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
	unk_0x518198639630AE08(unk_0xBBDA792448DB5A89(2));
	unk_0x518198639630AE08(unk_0xBBDA792448DB5A89(iLocal_94));
	unk_0x518198639630AE08(0f);
	unk_0x6CE839BF5D87A428("STRING");
	unk_0x6222A57F463E8EE7(uParam0);
	unk_0xC3822F70D0E7940B();
	func_72("CELL_MP_999");
	func_72("CELL_MP_999");
	unk_0xBA9BA6181F2B6111();
	iLocal_94++;
	iLocal_93++;
}

