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
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
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
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	var uLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	char* sLocal_106[1] = { NULL };
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
	int iLocal_324 = 0;
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
	iLocal_35 = 3;
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
	unk_0x9243BAC96D64C050();
	unk_0x933D6A9EEC1BACD0(&Global_2263, 17);
	unk_0xE80492A9AC099A93(&Global_2264, 18);
	unk_0xE80492A9AC099A93(&Global_2264, 20);
	uLocal_302 = Global_97173.f_29699[12 /*29*/].f_1;
	uLocal_303 = Global_97173.f_29699[2 /*29*/].f_1;
	uLocal_304 = Global_97173.f_29699[0 /*29*/].f_1;
	iLocal_103 = unk_0x430386FE9BF80B45();
	if (Global_68067)
	{
		func_217();
	}
	else
	{
		func_206();
	}
	if (!Global_14393.f_1 == 10)
	{
		if (Global_14393.f_1 > 3)
		{
			if (Global_14393.f_1 != 9)
			{
				Global_14393.f_1 = 7;
			}
		}
	}
	iLocal_130 = unk_0x9CD27B0045628463();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xA921AA820C25702F(Global_2264, 18))
		{
			func_205();
			if (Global_14393.f_1 > 3)
			{
				Global_14393.f_1 = 8;
			}
			unk_0xE80492A9AC099A93(&Global_2264, 18);
			func_204();
		}
		if ((iLocal_115 == 1 && Global_14393.f_1 == 10) && Local_330.f_2999 == 1)
		{
			func_132();
		}
		if (Global_14393.f_1 != 9)
		{
			switch (Global_14393.f_1)
			{
				case 7:
					if (unk_0xA921AA820C25702F(Global_2263, 16))
					{
						func_131();
					}
					else
					{
						func_128();
						if (unk_0xA921AA820C25702F(Global_2264, 0))
						{
							iLocal_131 = unk_0x9CD27B0045628463();
							if ((iLocal_131 - iLocal_130) > 1000)
							{
								if (iLocal_132)
								{
									func_127();
								}
								else
								{
									func_112();
								}
							}
							if (iLocal_132)
							{
								func_111();
							}
						}
						else
						{
							func_112();
						}
					}
					if (!unk_0xA921AA820C25702F(Global_2263, 9))
					{
						if (func_110(2, Global_14365, 0))
						{
							if (unk_0xA921AA820C25702F(Global_2264, 0))
							{
							}
							else if (Global_14336 == 0)
							{
								if (!unk_0xA921AA820C25702F(Global_2264, 19))
								{
									func_108();
									func_107(Global_14374, "SET_DATA_SLOT_EMPTY", 11f, -1082130432, -1082130432, -1082130432, -1082130432);
									iLocal_105 = 0;
									StringCopy(&cLocal_108, "", 16);
									func_106();
									Global_14373 = 0;
									iLocal_115 = 0;
									func_107(Global_14374, "DISPLAY_VIEW", 11f, -1082130432, -1082130432, -1082130432, -1082130432);
									func_105(Global_14374, "SET_HEADER", "CELL_221", 0, 0, 0, 0);
									if (Global_14381)
									{
										func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
										func_104(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
										unk_0x933D6A9EEC1BACD0(&Global_2263, 17);
										func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
									}
									else
									{
										func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
										func_104(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
										unk_0x933D6A9EEC1BACD0(&Global_2263, 17);
										func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
									}
									if (Global_14393.f_1 > 3)
									{
										Global_14393.f_1 = 8;
									}
								}
							}
						}
					}
					break;
				
				case 8:
					if (iLocal_115 == 1)
					{
						func_128();
						func_132();
					}
					else if (iLocal_113 == 0)
					{
						func_94();
						func_87();
					}
					else
					{
						if (unk_0x83666F9FB8FEBD4B() > 1500)
						{
							iLocal_328 = 0;
							while (iLocal_328 < 4)
							{
								if (unk_0x0C515FAB3FF9EA92(&(Global_97173.f_29699[Global_1578 /*29*/].f_3), &(Global_2101[iLocal_328 /*16*/])))
								{
									if (!unk_0x0C515FAB3FF9EA92(&(Global_2101[iLocal_328 /*16*/].f_8), "CELL_SFUN_NULL"))
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
								unk_0xF6E48914C7A8694E(Global_14374, "GET_CURRENT_SELECTION");
								iLocal_98 = unk_0xC50AA39A577AF886();
								while (!unk_0x768FF8961BA904D6(iLocal_98))
								{
									unk_0x4EDE34FBADD967A6(0);
								}
								iLocal_99 = unk_0x2DE7EFA66B906036(iLocal_98);
								func_85();
							}
						}
						func_128();
						if (bLocal_326 == 1)
						{
							if (!Global_97173.f_16324.f_396)
							{
								if (!func_81(Global_14393, Global_1578))
								{
									Global_97173.f_16324.f_396 = 1;
								}
							}
						}
						if (func_81(Global_14393, Global_1578))
						{
							if (!Global_97173.f_16324.f_397)
							{
								if (bLocal_325 == 1)
								{
									if (func_80(Global_86036))
									{
										switch (func_78("AM_H_BBUDDY"))
										{
											case 2:
												func_76("AM_H_BBUDDY", 2, 500, 10000, 10000, 7, 0, 0, 0);
												break;
											
											case 1:
												Global_97173.f_16324.f_397 = 1;
												break;
										}
										if (func_78("AM_H_BBUDDY1") == 0)
										{
											func_71("AM_H_BBUDDY1", 1);
										}
									}
									else
									{
										switch (func_78("AM_H_BBUDDY1"))
										{
											case 2:
												func_76("AM_H_BBUDDY1", 2, 500, 10000, 10000, 7, 0, 0, 0);
												break;
											
											case 1:
												Global_97173.f_16324.f_397 = 1;
												break;
										}
										if (func_78("AM_H_BBUDDY") == 0)
										{
											func_71("AM_H_BBUDDY", 1);
										}
									}
								}
							}
						}
						if (iLocal_114)
						{
							func_70();
						}
						else
						{
							func_38();
						}
					}
					if (func_110(2, Global_14361, 0))
					{
						func_37();
						Global_14371 = 1;
						if (Global_68067)
						{
							func_217();
						}
						else
						{
							func_206();
						}
						unk_0x4EDE34FBADD967A6(0);
						if (Global_14393.f_1 > 3)
						{
							Global_14393.f_1 = 7;
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
					func_204();
					break;
				
				default:
					break;
			}
			if (!Global_14393.f_1 == 8)
			{
				if ((Global_2871 - Global_2870) > Global_2872)
				{
					if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
					{
						if (unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6()))
						{
							if (func_110(2, Global_14361, 0))
							{
								if (unk_0xA921AA820C25702F(Global_2264, 0))
								{
									func_37();
								}
								else
								{
									func_37();
									if (!Global_14393.f_1 == 10)
									{
										func_204();
									}
									else if (Global_1578 == 132)
									{
										if (Global_2450665.f_1 || unk_0xA921AA820C25702F(Global_2264, 20))
										{
											Global_14393.f_1 = 7;
											func_107(Global_14374, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
											if (unk_0xA921AA820C25702F(Global_2264, 0))
											{
												func_105(Global_14374, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
											}
											else
											{
												func_105(Global_14374, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
											}
											unk_0xA3B0C41BA5CC0BB5(iLocal_103);
											iLocal_126 = 0;
										}
									}
									else
									{
										func_205();
										Global_14393.f_1 = 7;
										func_2();
										func_107(Global_14374, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
										if (unk_0xA921AA820C25702F(Global_2264, 0))
										{
											func_105(Global_14374, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
										}
										else
										{
											func_105(Global_14374, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
										}
										unk_0xA3B0C41BA5CC0BB5(iLocal_103);
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
			Global_14395 = 6;
			func_204();
		}
		if (func_1())
		{
			func_204();
		}
	}
}

int func_1()
{
	if (((Global_14393.f_1 == 1 || Global_14393.f_1 == 3) || Global_14393.f_1 == 0) || Global_14337 == 1)
	{
		Global_14380 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	if (!Global_14393.f_1 == 10 && !Global_14393.f_1 == 9)
	{
		if (unk_0xA921AA820C25702F(Global_2263, 9))
		{
			unk_0x4EDE34FBADD967A6(750);
		}
		if (Global_14393.f_1 > 6)
		{
			func_107(Global_14374, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
			if (unk_0xA921AA820C25702F(Global_2264, 0))
			{
				func_105(Global_14374, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
			}
			else
			{
				func_105(Global_14374, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
			}
			Global_2266 = 99;
			if (unk_0xA921AA820C25702F(Global_2263, 9))
			{
				if (Global_14381)
				{
					func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
					func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
					func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_104(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xE80492A9AC099A93(&Global_2263, 17);
			}
			else if (unk_0xA921AA820C25702F(Global_2264, 0))
			{
				if (Global_14381)
				{
					func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
					func_104(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
					func_104(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_104(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14381)
			{
				if (iLocal_93 > 0)
				{
					func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				}
				else
				{
					func_104(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				}
				if (Global_14336 == 0)
				{
					func_104(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, "CELL_207", 0, 0, 0, 0);
					unk_0x933D6A9EEC1BACD0(&Global_2263, 17);
				}
				else
				{
					func_104(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0x933D6A9EEC1BACD0(&Global_2263, 17);
				}
				func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				if (iLocal_93 > 0)
				{
					func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				else
				{
					func_104(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_104(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x933D6A9EEC1BACD0(&Global_2263, 17);
				func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_3()
{
	struct<3> Var0;
	int iVar6;
	
	switch (iLocal_126)
	{
		case 0:
			unk_0x71A78003C8E71424(&Global_16715, 1);
			while (!unk_0x02245FE4BED318B8(1))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			cLocal_133 = { Global_97[Global_1578 /*10*/] };
			StringConCat(&cLocal_133, "_1", 16);
			if (unk_0xAC09CA973C564252(&cLocal_133) || iLocal_305 == 1)
			{
				iLocal_127 = Global_16712;
				if (func_36(129))
				{
					iLocal_127 = Global_86617;
				}
			}
			else
			{
				iLocal_127 = Global_16711;
			}
			if ((iLocal_305 == 1 && unk_0x0C515FAB3FF9EA92(&cLocal_306, "CELLPHONE_CHEAT")) && Global_68067 == 0)
			{
				if ((unk_0x0C515FAB3FF9EA92(&Local_310, "CHEAT_SEAPLANE") || unk_0x0C515FAB3FF9EA92(&Local_310, "CHEAT_DUELC")) || unk_0x0C515FAB3FF9EA92(&Local_310, "CHEAT_BUBBLE"))
				{
					bLocal_119 = true;
				}
				if (bLocal_119)
				{
					if (func_35())
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
					iLocal_128 = unk_0x9CD27B0045628463();
					unk_0xF6E48914C7A8694E(Global_14374, "SET_DATA_SLOT");
					unk_0xC3D0841A0CC546A6(4);
					unk_0xC3D0841A0CC546A6(0);
					unk_0xC3D0841A0CC546A6(3);
					unk_0x80338406F3475E55("STRING");
					unk_0x761B77454205A61D(&cLocal_108, -1);
					unk_0x362E2D3FE93A9959();
					func_34("CELL_300");
					if (unk_0x0C515FAB3FF9EA92(&Local_310, "CHEAT_MONOC"))
					{
						func_34("CELL_MONOSIGNAL");
					}
					else if (unk_0x0C515FAB3FF9EA92(&Local_310, "CHEAT_DIRECTOR"))
					{
						if (unk_0x48AF36444B965238())
						{
							func_34("CELL_DRCT");
						}
					}
					else
					{
						func_34("CELL_CHEAT");
					}
					func_34("CELL_195");
					unk_0xC6796A8FFA375E53();
					func_107(Global_14374, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
					iLocal_126 = 1;
				}
				else
				{
					iLocal_126 = 2;
					iLocal_128 = unk_0x9CD27B0045628463();
				}
			}
			else
			{
				iLocal_126 = 2;
				iLocal_128 = unk_0x9CD27B0045628463();
			}
			break;
		
		case 1:
			iLocal_129 = unk_0x9CD27B0045628463();
			if ((iLocal_129 - iLocal_128) > 1500)
			{
				iLocal_126 = 3;
			}
			break;
		
		case 2:
			iLocal_129 = unk_0x9CD27B0045628463();
			if (iLocal_127 != Global_16711)
			{
				if (unk_0xFCBDCE714A7C88E5(iLocal_103))
				{
					if (Global_2450665.f_37 == 0)
					{
						if (Global_14336)
						{
							unk_0x67C540AA08E4A6F5(iLocal_103, "Dial_and_Remote_Ring", &Global_14382, true);
						}
						else if ((iLocal_129 - iLocal_128) > 1700)
						{
							unk_0x67C540AA08E4A6F5(iLocal_103, "Remote_Ring", &Global_14382, true);
						}
					}
				}
			}
			else if ((func_36(130) || func_36(132)) || func_36(128))
			{
				if (unk_0xFCBDCE714A7C88E5(iLocal_103))
				{
					if (Global_2450665.f_37 == 0)
					{
						if (Global_14336)
						{
							unk_0x67C540AA08E4A6F5(iLocal_103, "Dial_and_Remote_Ring", &Global_14382, true);
						}
						else if ((iLocal_129 - iLocal_128) > 1700)
						{
							unk_0x67C540AA08E4A6F5(iLocal_103, "Remote_Ring", &Global_14382, true);
						}
					}
				}
			}
			if ((iLocal_129 - iLocal_128) > iLocal_127)
			{
				if (iLocal_127 == Global_16711)
				{
					bLocal_116 = false;
					if ((Global_1578 == 130 || Global_1578 == 132) || Global_1578 == 128)
					{
						if (!unk_0xA921AA820C25702F(Global_2264, 20))
						{
							bLocal_116 = true;
							if ((iLocal_129 - iLocal_128) > iLocal_127 + 10000)
							{
								if (Global_14393.f_1 == 10)
								{
									if (Global_1578 == 130)
									{
										Global_14393.f_1 = 3;
									}
								}
							}
						}
					}
					if (!bLocal_116)
					{
						iLocal_126 = 4;
						unk_0xA3B0C41BA5CC0BB5(iLocal_103);
						iLocal_117 = 0;
						unk_0x5AE11BC36633DE4E(0);
						if (Global_97173.f_29699[Global_1578 /*29*/].f_24[Global_14393] == 0)
						{
							if (Global_1578 == 132)
							{
								unk_0xF6E48914C7A8694E(Global_14374, "SET_DATA_SLOT");
								unk_0xC3D0841A0CC546A6(4);
								unk_0xC3D0841A0CC546A6(0);
								unk_0xC3D0841A0CC546A6(2);
								unk_0x80338406F3475E55("CELL_CONDFON");
								unk_0x6C188BE134E074AA(&Global_15707);
								unk_0x362E2D3FE93A9959();
								func_34("CELL_300");
								func_34("CELL_220");
								func_34("CELL_219");
								unk_0xC6796A8FFA375E53();
							}
							else
							{
								func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(5), -1f, -1f, &(Global_97[Global_1578 /*10*/].f_4), "CELL_300", "CELL_220", "CELL_195", 0);
							}
						}
						else
						{
							func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(5), -1f, -1f, &(Global_97173.f_29699[Global_1578 /*29*/].f_3), &(Global_97173.f_29699[Global_1578 /*29*/].f_7), "CELL_220", &(Global_97173.f_29699[Global_1578 /*29*/].f_3), 0);
						}
						func_107(Global_14374, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
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
				if (unk_0x0C515FAB3FF9EA92(&cLocal_306, "CELLPHONE_CHEAT") && Global_68067 == 0)
				{
					if (unk_0x0C515FAB3FF9EA92(&Local_310, "CHEAT_MONOC"))
					{
						if (Global_3067 == 0)
						{
							Global_3067 = 1;
							Global_97173.f_12272[0 /*20*/].f_6 = 5;
							Global_97173.f_12272[2 /*20*/].f_6 = 5;
							Global_97173.f_12272[1 /*20*/].f_6 = 5;
							if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
							{
								if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
								{
									if (!unk_0xAB0F816885B0E483(4, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 40f))
									{
										unk_0xE3AD2BDBAEE269AC(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) + Vector(2f, 0f, 0f), 4, 0.1f, 1, 0, 1065353216);
									}
								}
							}
						}
						else
						{
							Global_3067 = 0;
						}
					}
					if (unk_0x0C515FAB3FF9EA92(&Local_310, "CHEAT_SUPJUM"))
					{
						func_33(0, 0);
					}
					if (unk_0x0C515FAB3FF9EA92(&Local_310, "CHEAT_HEALA"))
					{
						func_33(6, 0);
					}
					if (unk_0x0C515FAB3FF9EA92(&Local_310, "CHEAT_SLIDEYC"))
					{
						func_33(1, 0);
					}
					if (unk_0x0C515FAB3FF9EA92(&Local_310, "CHEAT_FASTR"))
					{
						func_33(2, 0);
					}
					if (unk_0x0C515FAB3FF9EA92(&Local_310, "CHEAT_WANTDN"))
					{
						func_33(9, 0);
					}
					if (unk_0x0C515FAB3FF9EA92(&Local_310, "CHEAT_WANTUP"))
					{
						func_33(8, 0);
					}
					if (unk_0x0C515FAB3FF9EA92(&Local_310, "CHEAT_WEATHER"))
					{
						func_33(5, 0);
					}
					if (unk_0x0C515FAB3FF9EA92(&Local_310, "CHEAT_FASTS"))
					{
						func_33(3, 0);
					}
					if (unk_0x0C515FAB3FF9EA92(&Local_310, "CHEAT_POWER"))
					{
						func_33(7, 0);
					}
					if (unk_0x0C515FAB3FF9EA92(&Local_310, "CHEAT_CHUTE"))
					{
						func_33(10, 0);
					}
					if (unk_0x0C515FAB3FF9EA92(&Local_310, "CHEAT_BANG"))
					{
						func_33(11, 0);
					}
					if (unk_0x0C515FAB3FF9EA92(&Local_310, "CHEAT_FLAMB"))
					{
						func_33(12, 0);
					}
					if (unk_0x0C515FAB3FF9EA92(&Local_310, "CHEAT_EXPMEL"))
					{
						func_33(13, 0);
					}
					if (unk_0x0C515FAB3FF9EA92(&Local_310, "CHEAT_ZEROG"))
					{
						func_33(14, 0);
					}
					if (unk_0x0C515FAB3FF9EA92(&Local_310, "CHEAT_INVINC"))
					{
						func_33(15, 0);
					}
					if (unk_0x0C515FAB3FF9EA92(&Local_310, "CHEAT_SLOWMO"))
					{
						func_33(16, 0);
					}
					if (unk_0x0C515FAB3FF9EA92(&Local_310, "CHEAT_SKYFA"))
					{
						func_33(17, 0);
					}
					if (unk_0x0C515FAB3FF9EA92(&Local_310, "CHEAT_DRUNK"))
					{
						func_33(18, 0);
					}
					if (unk_0x0C515FAB3FF9EA92(&Local_310, "CHEAT_DEADEYE"))
					{
						func_33(19, 0);
					}
					if (unk_0x0C515FAB3FF9EA92(&Local_310, "CHEAT_WEAPONS"))
					{
						func_33(4, 0);
					}
					if (unk_0x0C515FAB3FF9EA92(&Local_310, "CHEAT_BUZZARD"))
					{
						func_33(20, joaat("buzzard"));
					}
					if (unk_0x0C515FAB3FF9EA92(&Local_310, "CHEAT_COMET2"))
					{
						func_33(20, joaat("comet2"));
					}
					if (unk_0x0C515FAB3FF9EA92(&Local_310, "CHEAT_BMX"))
					{
						func_33(20, joaat("bmx"));
					}
					if (unk_0x0C515FAB3FF9EA92(&Local_310, "CHEAT_CADDY"))
					{
						func_33(20, joaat("caddy"));
					}
					if (unk_0x0C515FAB3FF9EA92(&Local_310, "CHEAT_DUSTER"))
					{
						func_33(20, joaat("duster"));
					}
					if (unk_0x0C515FAB3FF9EA92(&Local_310, "CHEAT_PCJ"))
					{
						func_33(20, joaat("pcj"));
					}
					if (unk_0x0C515FAB3FF9EA92(&Local_310, "CHEAT_RAPIDGT"))
					{
						func_33(20, joaat("rapidgt"));
					}
					if (unk_0x0C515FAB3FF9EA92(&Local_310, "CHEAT_STRETCH"))
					{
						func_33(20, joaat("stretch"));
					}
					if (unk_0x0C515FAB3FF9EA92(&Local_310, "CHEAT_STUNT"))
					{
						func_33(20, joaat("stunt"));
					}
					if (unk_0x0C515FAB3FF9EA92(&Local_310, "CHEAT_TRASH"))
					{
						func_33(20, joaat("trash"));
					}
					if (unk_0x0C515FAB3FF9EA92(&Local_310, "CHEAT_SANCHEZ"))
					{
						func_33(20, joaat("sanchez"));
					}
					if (func_35())
					{
						if (unk_0x0C515FAB3FF9EA92(&Local_310, "CHEAT_SEAPLANE"))
						{
							func_33(20, joaat("dodo"));
						}
						if (unk_0x0C515FAB3FF9EA92(&Local_310, "CHEAT_DUELC"))
						{
							func_33(20, joaat("dukes2"));
						}
						if (unk_0x0C515FAB3FF9EA92(&Local_310, "CHEAT_BUBBLE"))
						{
							func_33(20, joaat("submersible2"));
						}
					}
					if (unk_0x48AF36444B965238())
					{
						if (unk_0x0C515FAB3FF9EA92(&Local_310, "CHEAT_DIRECTOR"))
						{
							Global_96122 = 1;
						}
					}
					func_30(0);
				}
				else if (unk_0x0C515FAB3FF9EA92(&cLocal_306, "CELLPHONE_CHEAT"))
				{
					func_30(0);
				}
				else
				{
					func_29(&uLocal_137, 1, 0, &Local_310, 0, 1);
					Global_16713 = 0;
					func_28(&uLocal_137, Global_1578, &Global_16715, &cLocal_306, 2, 0, 0, 0, 0);
				}
			}
			else
			{
				switch (Global_1578)
				{
					case 0:
						StringCopy(&Var0, "MICHAEL", 24);
						break;
					
					case 2:
						StringCopy(&Var0, "TREVOR", 24);
						break;
					
					case 1:
						StringCopy(&Var0, "FRANKLIN", 24);
						break;
					
					case 12:
						StringCopy(&Var0, "LESTER", 24);
						break;
					
					case 13:
						StringCopy(&Var0, "LESTER", 24);
						break;
					
					case 15:
						StringCopy(&Var0, "TRACEY", 24);
						break;
					
					case 19:
						StringCopy(&Var0, "LAMAR", 24);
						break;
					
					case 17:
						StringCopy(&Var0, "AMANDA", 24);
						break;
					
					case 45:
						StringCopy(&Var0, "MALEEXECASSIST", 24);
						break;
					
					case 29:
						StringCopy(&Var0, "FEMEXECASSIST", 24);
						break;
					
					case 35:
						StringCopy(&Var0, "CHENGSR", 24);
						break;
					
					case 14:
						StringCopy(&Var0, "JIMMY", 24);
						break;
					
					case 103:
						StringCopy(&Var0, "TONYA", 24);
						break;
					
					case 50:
						StringCopy(&Var0, "BEVERLY", 24);
						break;
					
					case 64:
						StringCopy(&Var0, "NIGEL", 24);
						break;
					
					case 34:
						StringCopy(&Var0, "OSCAR", 24);
						break;
					
					case 49:
						StringCopy(&Var0, "BARRY", 24);
						break;
					
					case 33:
						StringCopy(&Var0, "GAYMILITARY", 24);
						break;
					
					case 20:
						StringCopy(&Var0, "NervousRon", 24);
						break;
					
					case 24:
						StringCopy(&Var0, "Wade", 24);
						break;
					
					case 69:
						StringCopy(&Var0, "OMEGA", 24);
						break;
					
					case 60:
						StringCopy(&Var0, "MARNIE", 24);
						break;
					
					case 37:
						StringCopy(&Var0, "STRETCH", 24);
						break;
					
					case 23:
						StringCopy(&Var0, "STEVE", 24);
						break;
					
					case 51:
						StringCopy(&Var0, "CRIS", 24);
						break;
					
					case 30:
						StringCopy(&Var0, "Dave", 24);
						break;
					
					case 58:
						StringCopy(&Var0, "JOSH", 24);
						break;
					
					case 36:
						StringCopy(&Var0, "FRIEDLANDER", 24);
						break;
					
					case 62:
						StringCopy(&Var0, "MAUDE", 24);
						break;
					
					case 55:
						StringCopy(&Var0, "JIMMYBOSTON", 24);
						break;
					
					case 56:
						StringCopy(&Var0, "JOE", 24);
						break;
					
					case 26:
						StringCopy(&Var0, "SOLOMON", 24);
						break;
					
					case 54:
						StringCopy(&Var0, "CLETUS", 24);
						break;
					
					case 43:
						StringCopy(&Var0, "TANISHA", 24);
						break;
					
					case 16:
						StringCopy(&Var0, "ABIGAIL", 24);
						break;
					
					case 44:
						StringCopy(&Var0, "DENISE", 24);
						break;
					
					case 84:
						StringCopy(&Var0, "BRUCIE", 24);
						break;
					
					case 70:
						StringCopy(&Var0, "BikerBoss", 24);
						break;
					
					case 72:
						StringCopy(&Var0, "MexicanBoss", 24);
						break;
					
					case 89:
						StringCopy(&Var0, "MECHANIC", 24);
						break;
					
					case 91:
						StringCopy(&Var0, "MorsMutual", 24);
						break;
					
					case 85:
						StringCopy(&Var0, "FM_MERRYWEATHER", 24);
						break;
					
					case 41:
						StringCopy(&Var0, "PEGASUS", 24);
						break;
					
					case 18:
						StringCopy(&Var0, "SIMEON", 24);
						break;
					
					case 31:
						StringCopy(&Var0, "MARTIN", 24);
						break;
					
					case 52:
						StringCopy(&Var0, "DOM", 24);
						break;
					
					case 86:
						StringCopy(&Var0, "GERALD", 24);
						break;
					
					default:
						StringCopy(&Var0, "MICHAEL", 24);
						break;
				}
				func_29(&uLocal_137, 1, 0, &Var0, 0, 1);
				Global_16713 = 0;
				switch (Global_1578)
				{
					case 13:
						func_9(&uLocal_137, 12, &Global_16715, "LES_APH2", 2, 0, 0, 0, 0);
						break;
					
					case 36:
						iVar6 = unk_0x25223CA6B4D20B7F();
						if (iVar6 > 17 || iVar6 < 9)
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, "SHR_APH3", 2, 0, 0, 0, 0);
						}
						if (iVar6 > 8 && iVar6 < 13)
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, "SHR_APH1", 2, 0, 0, 0, 0);
						}
						if (iVar6 > 12 && iVar6 < 18)
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, "SHR_APH2", 2, 0, 0, 0, 0);
						}
						break;
					
					case 17:
						if (func_8(21) && !func_8(22))
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, "AMA_APH2", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, &(Global_97[Global_1578 /*10*/]), 2, 0, 0, 0, 0);
						}
						break;
					
					case 20:
						if (Global_68067)
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, "ANS_RBusy", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, &(Global_97[Global_1578 /*10*/]), 2, 0, 0, 0, 0);
						}
						break;
					
					case 44:
						if (func_7(126))
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, "DEN_APH3", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, &(Global_97[Global_1578 /*10*/]), 2, 0, 0, 0, 0);
						}
						break;
					
					case 15:
						if (!func_8(19))
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, "TRA_APH1", 2, 0, 0, 0, 0);
						}
						else if (!func_8(20))
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, "TRA_APH2", 2, 0, 0, 0, 0);
						}
						else if (!func_8(22))
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, "TRA_APH3", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, "TRA_APH4", 2, 0, 0, 0, 0);
						}
						break;
					
					case 19:
						if (!func_8(19))
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, "LAM_APH1", 2, 0, 0, 0, 0);
						}
						else if (!func_8(20))
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, "LAM_APH2", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, "LAM_APH3", 2, 0, 0, 0, 0);
						}
						break;
					
					case 14:
						if (!func_8(19))
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, "JIM_APH1", 2, 0, 0, 0, 0);
						}
						else if (!func_8(21))
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, "JIM_APH3", 2, 0, 0, 0, 0);
						}
						else if (!func_8(22))
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, "JIM_APH2", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, "JIM_APH4", 2, 0, 0, 0, 0);
						}
						break;
					
					case 49:
						if (func_6(7))
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, "BAR_APH2", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, "BAR_APH1", 2, 0, 0, 0, 0);
						}
						break;
					
					case 85:
						iLocal_329 = unk_0xD53343AA4FB7DD28(0, 100);
						if (iLocal_329 <= 50)
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, "ANS_MWBusy", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, "ANS_MWBusy2", 2, 0, 0, 0, 0);
						}
						break;
					
					case 41:
						iLocal_329 = unk_0xD53343AA4FB7DD28(0, 100);
						if (iLocal_329 <= 50)
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, "ANS_PGbusy", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, "ANS_PGbusy2", 2, 0, 0, 0, 0);
						}
						break;
					
					case 91:
						iLocal_329 = unk_0xD53343AA4FB7DD28(0, 100);
						if (iLocal_329 <= 50)
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, "ANS_INSbusy", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, "ANS_INSbusy2", 2, 0, 0, 0, 0);
						}
						break;
					
					case 86:
						func_9(&uLocal_137, Global_1578, &Global_16715, "ANS_GBusy", 2, 0, 0, 0, 0);
						break;
					
					default:
						func_9(&uLocal_137, Global_1578, &Global_16715, &(Global_97[Global_1578 /*10*/]), 2, 0, 0, 0, 0);
				}
				unk_0x933D6A9EEC1BACD0(&Global_2264, 31);
			}
			break;
		
		case 4:
			if (unk_0xFCBDCE714A7C88E5(iLocal_103))
			{
				unk_0x67C540AA08E4A6F5(iLocal_103, "Remote_Engaged", &Global_14382, true);
			}
			if (unk_0xC9D9444186B5A374() > 1500)
			{
				if (iLocal_117 == 0)
				{
					if (Global_14393 == 2)
					{
						if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
						{
							func_4(unk_0xD80958FC74E988A6(), "PHONE_CALL_NOT_CONNECTED", 24);
							iLocal_117 = 1;
						}
					}
				}
			}
			break;
	}
}

void func_4(int iParam0, char* sParam1, int iParam2)
{
	unk_0x8E04FEDD28D42462(iParam0, sParam1, func_5(iParam2), 1);
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
	return unk_0xA921AA820C25702F(Global_97173.f_16795[iParam0 /*6*/], 3);
}

int func_7(int iParam0)
{
	if (iParam0 == 141 || iParam0 == -1)
	{
		return 0;
	}
	return Global_97173.f_7311.f_99.f_58[iParam0];
}

int func_8(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_97173.f_7311.f_325[iParam0 /*6*/];
}

void func_9(var uParam0, int iParam1, var uParam2, char[4] cParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	if (Global_68067 || func_27())
	{
		if (Global_1572928 == 1)
		{
			func_28(uParam0, iParam1, &Global_16715, cParam3, iParam4, iParam5, iParam6, iParam7, bParam8);
		}
		else
		{
			func_10(uParam0, iParam1, &Global_16715, cParam3, iParam4, iParam5, iParam6, iParam7, bParam8);
		}
	}
	else
	{
		func_10(uParam0, iParam1, &Global_16715, cParam3, iParam4, iParam5, iParam6, iParam7, bParam8);
	}
}

int func_10(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_26(uParam0, uParam1, sParam2, iParam6, iParam7, 0);
	Global_15740 = 0;
	Global_15699 = 1;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_15697 = 0;
	Global_15744 = 0;
	Global_15746 = 0;
	if (iParam5 == 1)
	{
		Global_15704 = 1;
	}
	else
	{
		Global_15704 = 0;
	}
	Global_2621441 = 0;
	return func_11(sParam3, iParam4, bParam8);
}

int func_11(char* sParam0, int iParam1, bool bParam2)
{
	Global_15693 = 0;
	if (Global_15692 == 0 || Global_15694 == 2)
	{
		if (Global_15692 != 0)
		{
			if (iParam1 > Global_15694)
			{
				if (Global_15699 == 0)
				{
					unk_0xD79DEEFB53455EBA(false);
					Global_14393.f_1 = 3;
					Global_15692 = 0;
					Global_15693 = 1;
					Global_15745 = 0;
					Global_15688 = 0;
					Global_15689 = 0;
					Global_15703 = 0;
					Global_15702 = 0;
					Global_14392 = 0;
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
		if (unk_0x16754C556D2EDE3D())
		{
			return 0;
		}
		if (func_24(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_23();
		Global_14981 = { Global_15146 };
		Global_15698 = Global_15699;
		Global_15705 = Global_15706;
		Global_2621442 = Global_2621441;
		Global_15707 = { Global_15723 };
		Global_15700 = Global_15701;
		Global_16682 = Global_16683;
		Global_16690 = { Global_16696 };
		Global_16684 = Global_16685;
		Global_16686 = Global_16687;
		Global_16688 = Global_16689;
		Global_15311.f_370 = Global_16681;
		Global_15311.f_368 = Global_16679;
		Global_15311.f_369 = Global_16680;
		Global_15688 = Global_15689;
		if (Global_15698)
		{
			unk_0xE80492A9AC099A93(&Global_2263, 20);
			unk_0xE80492A9AC099A93(&Global_2264, 17);
			unk_0xE80492A9AC099A93(&Global_2265, 0);
			if (bParam2)
			{
				func_16();
				if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14393.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14359 == 1)
			{
				return 0;
			}
			if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
			{
				if (unk_0x4E209B2C1EAD5159(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (func_15())
				{
					return 0;
				}
				if (unk_0x57E457CD2C0FC168(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0x7DCE8BDA0F1C1200(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0xF731332072F5156C(unk_0xD80958FC74E988A6(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68067)
				{
					if (unk_0xCFB0A0D8EDD145A3(unk_0xD80958FC74E988A6()))
					{
						return 0;
					}
					if (unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6()))
					{
						return 0;
					}
					if (unk_0xC70B5FAE151982D8(unk_0xD80958FC74E988A6()))
					{
						return 0;
					}
					if (unk_0x3E5F7FC85D854E15(unk_0x4F8644AF03D0E0D6()))
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
				switch (Global_14393.f_1)
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
				if (unk_0xA921AA820C25702F(Global_2263, 9))
				{
					return 0;
				}
			}
			func_13();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_12();
		return 1;
	}
	if (Global_15692 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15694 || iParam1 == Global_15694)
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
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD79DEEFB53455EBA(false);
	Global_15692 = 1;
}

void func_13()
{
	Global_15745 = Global_15744;
	Global_15739 = Global_15740;
	Global_15786 = { Global_15774 };
	Global_15792 = { Global_15780 };
	Global_15747 = Global_15746;
	Global_15816 = { Global_15798 };
	Global_15822 = { Global_15804 };
	Global_15828 = { Global_15810 };
	Global_15834 = { Global_15840 };
	Global_1578 = Global_1579;
	Global_1580 = Global_1581;
	Global_15703 = Global_15704;
	Global_15705 = Global_15706;
	Global_15707 = { Global_15723 };
	Global_15696 = Global_15697;
	Global_16708 = 0;
	Global_15741 = 0;
	Global_15742 = 0;
	unk_0xE80492A9AC099A93(&Global_2264, 16);
}

int func_14()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_15()
{
	int iVar0;
	int iVar1;
	
	if (Global_68067)
	{
		iVar0 = 0;
		unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &iVar1, true);
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x68EDDA28A5976D07() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x7EE53118C892B513(unk_0xD80958FC74E988A6(), 78, true))
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
		if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[2 /*29*/])
			{
				Global_14393 = 2;
			}
			else
			{
				Global_14393 = 0;
			}
		}
	}
	else
	{
		Global_14393 = func_17();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68067)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

var func_17()
{
	func_18();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_18()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_21(Global_97173.f_1729.f_539.f_3213) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_20(unk_0xD80958FC74E988A6());
			if (func_19(iVar0) && (!func_22(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_19(Global_97173.f_1729.f_539.f_3213))
				{
					Global_97173.f_1729.f_539.f_3214 = Global_97173.f_1729.f_539.f_3213;
				}
				Global_97173.f_1729.f_539.f_3215 = iVar0;
				Global_97173.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97173.f_1729.f_539.f_3213 != 145)
			{
				Global_97173.f_1729.f_539.f_3215 = Global_97173.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97173.f_1729.f_539.f_3213 = 145;
}

bool func_19(int iParam0)
{
	return iParam0 < 3;
}

int func_20(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		iVar1 = unk_0x9F47B058362C84B5(iParam0);
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
		return Global_97173.f_29699[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_22(int iParam0)
{
	return Global_34909 == iParam0;
}

void func_23()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14981[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14981[iVar0 /*10*/].f_1), "", 24);
		Global_14981[iVar0 /*10*/].f_7 = 0;
		Global_14981[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14981.f_161 = -99;
	Global_14981.f_162 = { 0f, 0f, 0f };
}

bool func_24(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327591.f_203[iParam1];
			}
			break;
	}
	return unk_0xA921AA820C25702F(Global_1327591.f_949, iParam0);
}

void func_25()
{
	unk_0x9AEB285D1818C9AC();
	Global_16703 = 0;
	if ((unk_0x7497D2CE2C30D24C() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(true);
		Global_15692 = 6;
		return;
	}
}

void func_26(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15146 = { *uParam0 };
	Global_1579 = uParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = iParam5;
	if (iParam3 == 0)
	{
		Global_16679 = 1;
		Global_16677 = 0;
	}
	else
	{
		Global_16679 = 0;
		Global_16677 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
}

var func_27()
{
	return Global_1315872;
}

int func_28(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_26(uParam0, uParam1, sParam2, iParam6, iParam7, 0);
	Global_15740 = 0;
	Global_15699 = 1;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_15697 = 0;
	Global_15744 = 0;
	Global_15746 = 0;
	if (iParam5 == 1)
	{
		Global_15704 = 1;
	}
	else
	{
		Global_15704 = 0;
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
	if (!Global_68067)
	{
		if (!unk_0x84A2DD9AC37C35C1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x6373D1349925A70E(iParam2, false);
			}
			else
			{
				unk_0x6373D1349925A70E(iParam2, true);
			}
		}
		if (!unk_0x84A2DD9AC37C35C1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xEC4686EC06434678(iParam2, false);
			}
			else
			{
				unk_0xEC4686EC06434678(iParam2, true);
			}
		}
	}
}

void func_30(int iParam0)
{
	if (Global_14551)
	{
		func_31(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		unk_0x933D6A9EEC1BACD0(&Global_2264, 16);
	}
	if (unk_0x7497D2CE2C30D24C())
	{
		unk_0xD79DEEFB53455EBA(false);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_2263, 30);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_2263, 30);
	}
	if (!func_14())
	{
		Global_14393.f_1 = 3;
	}
}

void func_31(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_32(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				unk_0x584FDFDA48805B86(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0x693A5C6D6734085B(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0x693A5C6D6734085B(Global_14330);
		}
		else
		{
			unk_0x693A5C6D6734085B(Global_14321);
		}
	}
}

int func_32(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0xA921AA820C25702F(Global_2263, 14))
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
	if (unk_0x2C83A9DA6BFFC4F9(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_33(int iParam0, int iParam1)
{
	unk_0x933D6A9EEC1BACD0(&Global_24691, iParam0);
	Global_24692 = iParam1;
}

void func_34(char* sParam0)
{
	unk_0x80338406F3475E55(sParam0);
	unk_0x362E2D3FE93A9959();
}

int func_35()
{
	int iVar0;
	
	if (unk_0x5AA3BEFA29F03AD4())
	{
		if (unk_0xA921AA820C25702F(unk_0xC488FF2356EA7791(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0x10FAB35428CCC9D7())
	{
		if (unk_0xA921AA820C25702F(Global_97173.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131417 == 2)
	{
		return 1;
	}
	if (unk_0x054354A99211EB96())
	{
		if (unk_0x85443FF4C328F53B())
		{
			if (unk_0x593570C289A77688())
			{
				if (unk_0x5AA3BEFA29F03AD4())
				{
					iVar0 = unk_0xC488FF2356EA7791(866);
					unk_0x933D6A9EEC1BACD0(&iVar0, 0);
					unk_0xDAC073C7901F9E15(iVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_36(int iParam0)
{
	if ((Global_16806 || Global_16805) || Global_16807)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_97[iParam0 /*10*/].f_8 != 138)
	{
		if (Global_14393.f_1 == 10)
		{
			if (Global_1578 == iParam0)
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

void func_37()
{
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
	{
		unk_0x67C540AA08E4A6F5(-1, "Menu_Back", &Global_14382, true);
	}
}

void func_38()
{
	if (Global_14371 == 0)
	{
		if (func_110(2, Global_14362, 0))
		{
			unk_0xE80492A9AC099A93(&Global_2264, 0);
			iLocal_114 = 0;
			func_108();
			Global_14371 = 1;
			unk_0xF6E48914C7A8694E(Global_14374, "GET_CURRENT_SELECTION");
			iLocal_98 = unk_0xC50AA39A577AF886();
			while (!unk_0x768FF8961BA904D6(iLocal_98))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_102 = unk_0x2DE7EFA66B906036(iLocal_98);
			if (func_65(Global_1578))
			{
				if (iLocal_102 == 0)
				{
					if (bLocal_325)
					{
						Global_16806 = 0;
						Global_16805 = 0;
						Global_16807 = 1;
						func_48();
					}
					else
					{
						Global_16806 = 0;
						Global_16805 = 0;
						Global_16807 = 0;
						func_48();
					}
				}
				if (iLocal_102 == 1)
				{
					if (bLocal_325)
					{
						Global_16806 = 0;
						Global_16805 = 0;
						Global_16807 = 0;
						func_48();
					}
					else if (func_40(Global_1578, Global_14393))
					{
						func_39();
						iLocal_114 = 1;
					}
					else
					{
						Global_16806 = 1;
						Global_16805 = 0;
						Global_16807 = 0;
						func_48();
					}
				}
				if (iLocal_102 == 2)
				{
					if (func_40(Global_1578, Global_14393))
					{
						func_39();
						iLocal_114 = 1;
					}
					else
					{
						Global_16806 = 1;
						Global_16805 = 0;
						Global_16807 = 0;
						func_48();
					}
				}
			}
			else
			{
				if (iLocal_102 == 0)
				{
					if (bLocal_325)
					{
						Global_16806 = 0;
						Global_16805 = 0;
						Global_16807 = 1;
						func_48();
					}
					else if (func_40(Global_1578, Global_14393))
					{
						func_39();
						iLocal_114 = 1;
					}
					else
					{
						Global_16806 = 1;
						Global_16805 = 0;
						Global_16807 = 0;
						func_48();
					}
				}
				if (iLocal_102 == 1)
				{
					if (func_40(Global_1578, Global_14393))
					{
						func_39();
						iLocal_114 = 1;
					}
					else
					{
						Global_16806 = 1;
						Global_16805 = 0;
						Global_16807 = 0;
						func_48();
					}
				}
			}
		}
	}
}

void func_39()
{
	func_107(Global_14374, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (Global_14381)
	{
		func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
		func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_104(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0xE80492A9AC099A93(&Global_2263, 17);
	func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_270", 0, 0, 0, 0);
	func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_271", 0, 0, 0, 0);
	func_107(Global_14374, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_105(Global_14374, "SET_HEADER", "CELL_269", 0, 0, 0, 0);
}

int func_40(int iParam0, int iParam1)
{
	if ((iParam0 >= 147 || iParam1 >= 147) || iParam0 == iParam1)
	{
		return 0;
	}
	if (!func_22(6) && !func_22(7))
	{
		if (func_41(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_41(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((iParam0 >= 147 || iParam1 >= 147) || iParam0 == iParam1)
	{
		return 0;
	}
	if (!func_45(6))
	{
		iVar0 = func_44(iParam0);
		iVar1 = func_44(iParam1);
		if (iVar0 != 7 && iVar1 != 7)
		{
			iVar2 = func_43(iVar0, iVar1);
			if (iVar2 != 10)
			{
				iVar3 = func_42(iVar2);
				if (iVar3 == 3 || iVar3 == 4)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_42(int iParam0)
{
	if (iParam0 < 9)
	{
		return Global_86045[iParam0 /*2*/];
	}
	return -1;
}

int func_43(int iParam0, int iParam1)
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

int func_44(int iParam0)
{
	if (iParam0 == 145)
	{
		return 7;
	}
	if (iParam0 < 147)
	{
		return Global_97173.f_29699[iParam0 /*29*/].f_11;
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

int func_45(int iParam0)
{
	if (Global_34909 == 15)
	{
		return 0;
	}
	if (func_46(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_46(int iParam0)
{
	return func_47(iParam0, Global_34909);
}

int func_47(int iParam0, int iParam1)
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

void func_48()
{
	if (Global_14393.f_1 > 3)
	{
		Global_14393.f_1 = 10;
		func_64();
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			if (!unk_0xCFB0A0D8EDD145A3(unk_0xD80958FC74E988A6()))
			{
				if (unk_0x60DFD0691A170B88(unk_0xD80958FC74E988A6(), false))
				{
					if (!func_63())
					{
						func_62();
					}
				}
				else if (func_61() == 0)
				{
					func_62();
				}
			}
		}
		if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
		{
			func_60();
			func_107(Global_14374, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_97173.f_29699[Global_1578 /*29*/].f_24[Global_14393] == 0)
	{
		func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_97[Global_1578 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
	}
	else
	{
		func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_97173.f_29699[Global_1578 /*29*/].f_3), &(Global_97173.f_29699[Global_1578 /*29*/].f_7), "CELL_211", &(Global_97173.f_29699[Global_1578 /*29*/].f_3), 0);
	}
	func_56();
	if (Global_68067)
	{
		func_49(1900, 1, -1);
	}
}

void func_49(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_53(iParam0, func_54(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_52(iParam0))
	{
		func_51(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_50(iParam0, iVar0, iParam2, 1);
	}
}

void func_50(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = Global_2454188[iParam0 /*6*/][func_54(uParam2)];
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, iParam1, bParam3);
	}
	switch (iParam0)
	{
		case 773:
			Global_1333776[func_54(uParam2)] = iParam1;
			break;
		
		case 774:
			Global_1333782[func_54(uParam2)] = iParam1;
			break;
		
		case 775:
			Global_1333788[func_54(uParam2)] = iParam1;
			break;
		
		case 776:
			Global_1333794[func_54(uParam2)] = iParam1;
			break;
		
		case 763:
			Global_1333752[func_54(uParam2)] = iParam1;
			break;
		
		case 764:
			Global_1333758[func_54(uParam2)] = iParam1;
			break;
		
		case 765:
			Global_1333764[func_54(uParam2)] = iParam1;
			break;
		
		case 766:
			Global_1333770[func_54(uParam2)] = iParam1;
			break;
		
		case 753:
			Global_1333728[func_54(uParam2)] = iParam1;
			break;
		
		case 754:
			Global_1333734[func_54(uParam2)] = iParam1;
			break;
		
		case 755:
			Global_1333740[func_54(uParam2)] = iParam1;
			break;
		
		case 756:
			Global_1333746[func_54(uParam2)] = iParam1;
			break;
		
		case 743:
			Global_1333800[func_54(uParam2)] = iParam1;
			break;
		
		case 744:
			Global_1333806[func_54(uParam2)] = iParam1;
			break;
		
		case 745:
			Global_1333812[func_54(uParam2)] = iParam1;
			break;
		
		case 746:
			Global_1333818[func_54(uParam2)] = iParam1;
			break;
		
		case 1288:
			Global_1333824[func_54(uParam2)] = iParam1;
			break;
		
		case 625:
			Global_1333830[func_54(uParam2)] = iParam1;
			break;
		
		case 1263:
			Global_1333836[func_54(uParam2)] = iParam1;
			break;
		
		case 1860:
			Global_2474967[0 /*6*/][func_54(uParam2)] = iParam1;
			break;
		
		case 2249:
			Global_2474967[1 /*6*/][func_54(uParam2)] = iParam1;
			break;
		
		case 750:
			Global_1333842[func_54(uParam2)] = iParam1;
			break;
		
		case 751:
			Global_1333848[func_54(uParam2)] = iParam1;
			break;
		
		case 752:
			Global_1333854[func_54(uParam2)] = iParam1;
			break;
		
		case 1221:
			Global_1333860[func_54(uParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_51(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = Global_2454188[iParam0 /*6*/][func_54(uParam2)];
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, iParam1, bParam3);
	}
}

int func_52(int iParam0)
{
	if (Global_1333709)
	{
		switch (iParam0)
		{
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
			case 743:
			case 744:
			case 745:
			case 746:
			case 1288:
			case 625:
			case 1263:
			case 750:
			case 751:
			case 752:
			case 1221:
			case 1860:
			case 2249:
				return 1;
				break;
			}
	}
	return 0;
}

int func_53(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2454188[iParam0 /*6*/][func_54(iParam1)];
	if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_54(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_55();
		if (iVar1 > -1)
		{
			Global_2453901 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2453901 = 1;
		}
	}
	return iVar0;
}

int func_55()
{
	return Global_1312736;
}

void func_56()
{
	char cVar0[24];
	
	if (Global_14376 == 1)
	{
		return;
	}
	if (Global_14393.f_1 < 4)
	{
		return;
	}
	while (!unk_0x85F01B8D5B90570E(Global_14374))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	switch (Global_14393.f_1)
	{
		case 6:
			func_107(Global_14374, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_59(Global_2868);
			if (Global_2868 == 1)
			{
				func_107(Global_14374, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14397), -1082130432, -1082130432, -1082130432);
				Global_14373 = Global_14397;
			}
			else
			{
				func_107(Global_14374, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14398), -1082130432, -1082130432, -1082130432);
				Global_14373 = Global_14398;
			}
			if (Global_14381)
			{
				func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14553 == 0)
			{
				func_104(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xE80492A9AC099A93(&Global_2263, 17);
			}
			else if (Global_68067)
			{
				func_104(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xE80492A9AC099A93(&Global_2263, 17);
			}
			else
			{
				if (Global_14552 == 1)
				{
					if (Global_14381)
					{
						func_104(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_104(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14381)
				{
					func_104(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_104(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0x933D6A9EEC1BACD0(&Global_2263, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_107(Global_14374, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_104(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_104(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xE80492A9AC099A93(&Global_2263, 17);
			if (unk_0xA921AA820C25702F(Global_2263, 20))
			{
				func_104(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14381)
			{
				func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14336)
				{
					func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14392 == 1)
			{
				func_58();
				func_107(Global_14374, "SET_THEME", unk_0xBBDA792448DB5A89(Global_97173.f_12272[Global_14393 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15705)
				{
					unk_0xF6E48914C7A8694E(Global_14374, "SET_DATA_SLOT");
					unk_0xC3D0841A0CC546A6(4);
					unk_0xC3D0841A0CC546A6(0);
					unk_0xC3D0841A0CC546A6(2);
					unk_0x80338406F3475E55("CELL_CONDFON");
					unk_0x6C188BE134E074AA(&Global_15707);
					unk_0x362E2D3FE93A9959();
					func_34("CELL_300");
					func_34("CELL_217");
					func_34("CELL_217");
					unk_0xC6796A8FFA375E53();
				}
				else if (Global_97173.f_29699[Global_1578 /*29*/].f_24[Global_14393] == 0)
				{
					func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_97[Global_1578 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_97173.f_29699[Global_1578 /*29*/].f_3), &(Global_97173.f_29699[Global_1578 /*29*/].f_7), "CELL_217", &(Global_97173.f_29699[Global_1578 /*29*/].f_3), 0);
				}
				func_107(Global_14374, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15692 == 4 || Global_15692 == 3)
			{
				func_107(Global_14374, "SET_THEME", unk_0xBBDA792448DB5A89(Global_97173.f_12272[Global_14393 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_58();
				if (Global_15705)
				{
					unk_0xF6E48914C7A8694E(Global_14374, "SET_DATA_SLOT");
					unk_0xC3D0841A0CC546A6(4);
					unk_0xC3D0841A0CC546A6(0);
					unk_0xC3D0841A0CC546A6(2);
					unk_0x80338406F3475E55("CELL_CONDFON");
					unk_0x6C188BE134E074AA(&Global_15707);
					unk_0x362E2D3FE93A9959();
					func_34("CELL_300");
					func_34("CELL_219");
					func_34("CELL_219");
					unk_0xC6796A8FFA375E53();
				}
				else
				{
					if (Global_15950)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (Global_97173.f_29699[Global_1578 /*29*/].f_24[Global_14393] == 0)
					{
						func_107(Global_14374, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_97[Global_1578 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_107(Global_14374, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_97173.f_29699[Global_1578 /*29*/].f_3), &(Global_97173.f_29699[Global_1578 /*29*/].f_7), &cVar0, &(Global_97173.f_29699[Global_1578 /*29*/].f_3), 0);
					}
				}
				func_107(Global_14374, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_57();
			break;
		
		default:
			break;
	}
}

void func_57()
{
	if (unk_0x85F01B8D5B90570E(Global_14374))
	{
		if (Global_14392 == 1)
		{
			if (Global_14381)
			{
				func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15739)
			{
				func_104(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0xA921AA820C25702F(Global_2263, 20))
			{
				func_104(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14381)
			{
				func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_104(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xE80492A9AC099A93(&Global_2263, 17);
		}
		else
		{
			func_104(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_104(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xE80492A9AC099A93(&Global_2263, 17);
			if (unk_0xA921AA820C25702F(Global_2263, 20))
			{
				func_104(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14381)
			{
				func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14336)
				{
					func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_58()
{
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
	{
		if (Global_14393 == 0)
		{
			switch (Global_97173.f_12272[Global_14393 /*20*/].f_6)
			{
				case 1:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 0);
					break;
				
				case 2:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 1);
					break;
				
				case 3:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 2);
					break;
				
				case 4:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 3);
					break;
				
				case 5:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 4);
					break;
				
				case 6:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 5);
					break;
				
				case 7:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14393 == 1)
		{
			switch (Global_97173.f_12272[Global_14393 /*20*/].f_6)
			{
				case 1:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 6);
					break;
				
				case 2:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 0);
					break;
				
				case 3:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 1);
					break;
				
				case 4:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 2);
					break;
				
				case 5:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 3);
					break;
				
				case 6:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 4);
					break;
				
				case 7:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14393 == 2)
		{
			switch (Global_97173.f_12272[Global_14393 /*20*/].f_6)
			{
				case 1:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 5);
					break;
				
				case 2:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 6);
					break;
				
				case 3:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 1);
					break;
				
				case 4:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 0);
					break;
				
				case 5:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 2);
					break;
				
				case 6:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 3);
					break;
				
				case 7:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14393 == 3)
		{
			switch (Global_2543734)
			{
				case 1:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 0);
					break;
				
				case 2:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 1);
					break;
				
				case 3:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 2);
					break;
				
				case 4:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 3);
					break;
				
				case 5:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 4);
					break;
				
				case 6:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 5);
					break;
				
				case 7:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_59(int iParam0)
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
	
	Global_16760 = 0;
	Global_2868 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2832[iVar0] = 0;
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
				if (iParam0 == Global_2270[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2270[iVar1 /*15*/].f_4)
					{
						if (Global_2832[iVar0] == 0)
						{
							Global_2796[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xA921AA820C25702F(Global_2264, 3))
								{
									iVar2 = 42;
									Global_14555 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14555 = 0;
								}
								unk_0xF6E48914C7A8694E(Global_14374, "SET_DATA_SLOT");
								unk_0xC3D0841A0CC546A6(1);
								unk_0xC3D0841A0CC546A6(iVar0);
								unk_0xC3D0841A0CC546A6(Global_2270[iVar1 /*15*/].f_10);
								unk_0xC3D0841A0CC546A6(0);
								func_34(&(Global_2270[iVar1 /*15*/]));
								unk_0xC3D0841A0CC546A6(iVar2);
								unk_0xC6796A8FFA375E53();
							}
							Global_2832[iVar0] = 1;
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
				if (iParam0 == Global_2270[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2270[iVar1 /*15*/].f_4)
					{
						if (Global_2832[iVar0] == 0)
						{
							Global_2796[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_97173.f_12362[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_97173.f_12362[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_97173.f_12362[iVar3 /*104*/].f_99[Global_14393] == 1)
											{
												Global_16760++;
											}
										}
									}
									iVar3++;
								}
								func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2270[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16760), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_68067)
								{
									iVar4 = 0;
									iVar5 = 0;
									while (iVar4 < 12)
									{
										if (Global_2542272[iVar4 /*104*/].f_24 != 0)
										{
											if (Global_2542272[iVar4 /*104*/].f_28 == 0)
											{
												if (Global_2542272[iVar4 /*104*/].f_99[Global_14393] == 1)
												{
													iVar5++;
												}
											}
										}
										iVar4++;
									}
									func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2270[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar5), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14393)
									{
										case 0:
											iVar6 = Global_35958;
											break;
										
										case 1:
											iVar6 = Global_35959;
											break;
										
										case 2:
											iVar6 = Global_35960;
											break;
										
										default:
											break;
									}
									func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2270[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2270[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16755), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xF6E48914C7A8694E(Global_14374, "SET_DATA_SLOT");
								unk_0xC3D0841A0CC546A6(1);
								unk_0xC3D0841A0CC546A6(iVar0);
								unk_0xC3D0841A0CC546A6(Global_2270[iVar1 /*15*/].f_10);
								unk_0xC3D0841A0CC546A6(0);
								func_34(&(Global_2270[iVar1 /*15*/]));
								unk_0xC3D0841A0CC546A6(Global_2269);
								unk_0xC6796A8FFA375E53();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xA921AA820C25702F(Global_2264, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xF6E48914C7A8694E(Global_14374, "SET_DATA_SLOT");
								unk_0xC3D0841A0CC546A6(1);
								unk_0xC3D0841A0CC546A6(iVar0);
								unk_0xC3D0841A0CC546A6(Global_2270[iVar1 /*15*/].f_10);
								unk_0xC3D0841A0CC546A6(0);
								func_34(&(Global_2270[iVar1 /*15*/]));
								unk_0xC3D0841A0CC546A6(iVar7);
								unk_0xC6796A8FFA375E53();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xA921AA820C25702F(Global_2264, 3))
								{
									iVar8 = 42;
									Global_14555 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14555 = 0;
								}
								unk_0xF6E48914C7A8694E(Global_14374, "SET_DATA_SLOT");
								unk_0xC3D0841A0CC546A6(1);
								unk_0xC3D0841A0CC546A6(iVar0);
								unk_0xC3D0841A0CC546A6(Global_2270[iVar1 /*15*/].f_10);
								unk_0xC3D0841A0CC546A6(0);
								func_34(&(Global_2270[iVar1 /*15*/]));
								unk_0xC3D0841A0CC546A6(iVar8);
								unk_0xC6796A8FFA375E53();
							}
							else if (iVar1 == 8)
							{
								unk_0xF6E48914C7A8694E(Global_14374, "SET_DATA_SLOT");
								unk_0xC3D0841A0CC546A6(1);
								unk_0xC3D0841A0CC546A6(iVar0);
								unk_0xC3D0841A0CC546A6(Global_2270[iVar1 /*15*/].f_10);
								unk_0xC3D0841A0CC546A6(0);
								func_34(&(Global_2270[iVar1 /*15*/]));
								unk_0xC3D0841A0CC546A6(42);
								unk_0xC6796A8FFA375E53();
							}
							else
							{
								func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2270[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2832[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_60()
{
	if (Global_3068[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3068[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3068[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3068[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3068[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3068[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0xE80492A9AC099A93(&Global_2263, 25);
	unk_0x933D6A9EEC1BACD0(&Global_2264, 11);
}

int func_61()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
	{
		if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
		{
			if (Global_14336 == 0)
			{
				if (Global_1578 != 128)
				{
					if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
					{
						if (Global_15692 != 2)
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
		if (unk_0x60DFD0691A170B88(unk_0xD80958FC74E988A6(), false))
		{
			return 0;
		}
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			if (!unk_0x4F32C0D5A90A9B40())
			{
				if (unk_0xCFB0A0D8EDD145A3(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x9DE327631295B4C2(unk_0xD80958FC74E988A6()) || unk_0xC024869A53992F34(unk_0xD80958FC74E988A6())) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x1C86D8AEF8254B78(unk_0xD80958FC74E988A6()))
		{
			return 0;
		}
		if (Global_96221)
		{
			return 0;
		}
	}
	if (Global_68067)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x19CAFA3C87F7C2FF();
	iVar1 = unk_0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0x4F32C0D5A90A9B40()))
	{
		iVar2 = 1;
		if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
			{
				iVar3 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
				if (((((((unk_0xB50C0B0CEDC6CE84(unk_0x9F47B058362C84B5(iVar3)) || unk_0xBF94DD42F63BDED2(unk_0x9F47B058362C84B5(iVar3))) || unk_0x39DAC362EE65FA28(unk_0x9F47B058362C84B5(iVar3))) || unk_0x9F47B058362C84B5(iVar3) == joaat("seashark")) || unk_0x9F47B058362C84B5(iVar3) == joaat("seashark2")) || unk_0x9F47B058362C84B5(iVar3) == joaat("rhino")) || unk_0x9F47B058362C84B5(iVar3) == joaat("submersible")) || unk_0x9F47B058362C84B5(iVar3) == joaat("submersible2"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_2543736 || iVar2 == 1)
	{
		if (unk_0x2C83A9DA6BFFC4F9(joaat("apptrackify")) > 0 || Global_97173.f_12272.f_89)
		{
			if (unk_0x2C83A9DA6BFFC4F9(joaat("michael2")) > 0)
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

void func_62()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (func_63() && unk_0x60DFD0691A170B88(unk_0xD80958FC74E988A6(), false))
		{
			iVar1 = 1;
		}
	}
	if (!Global_68067)
	{
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && iVar1 == 0)
		{
			iVar2 = unk_0x898CC20EA75BACD8(unk_0xD80958FC74E988A6(), 0);
			if (Global_68067)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || unk_0xF33BDFE19B309B19(unk_0xD80958FC74E988A6()))
				{
					iVar0 = 1;
				}
			}
			else if (unk_0xF33BDFE19B309B19(unk_0xD80958FC74E988A6()))
			{
				iVar0 = 1;
			}
			if (!Global_14336)
			{
				if (Global_1578 != 128)
				{
					if (iVar0 == 0)
					{
						if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
						{
							if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
							{
							}
							else
							{
								if (Global_68067)
								{
									unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 244, false);
									unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 243, false);
									unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 242, false);
								}
								unk_0x933D6A9EEC1BACD0(&Global_2263, 11);
								unk_0xBD2A8EC3AF4DE7DB(unk_0xD80958FC74E988A6(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

int func_63()
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x19CAFA3C87F7C2FF();
	iVar1 = unk_0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_64()
{
	struct<2> Var0;
	
	unk_0x584FDFDA48805B86(&Var0);
	if (Global_14346[Global_14338 /*3*/].f_1 == Var0.f_1)
	{
	}
	else
	{
		Global_14333 = 1;
	}
}

int func_65(int iParam0)
{
	int iVar0;
	
	if (func_66(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_97173.f_5944.f_650)
	{
		if (Global_97173.f_5944.f_199[iVar0 /*15*/].f_6 == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97173.f_5944.f_136)
	{
		if (Global_97173.f_5944[iVar0 /*15*/].f_6 == iParam0)
		{
			if (unk_0xA921AA820C25702F(Global_97173.f_5944[iVar0 /*15*/].f_1, 7))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_66(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar1 = Global_80941[iVar0 /*5*/];
		if (iVar1 != -1)
		{
			iVar2 = -1;
			iVar2 = Global_68336.f_109[Global_80941[iVar0 /*5*/] /*4*/];
			if (iVar2 != -1)
			{
				if (func_67(Global_80977[iVar2 /*34*/].f_12, iParam0))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_67(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 19:
			return func_69(iParam0, 8);
			break;
		
		case 14:
			return func_69(iParam0, 16);
			break;
		
		case 17:
			return func_69(iParam0, 32);
			break;
	}
	return func_68(iParam0, iParam1);
}

int func_68(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
			return unk_0xA921AA820C25702F(iParam0, iParam1);
		
		default:
	}
	return 0;
}

bool func_69(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_70()
{
	if (Global_14371 == 0)
	{
		if (func_110(2, Global_14362, 0))
		{
			unk_0xE80492A9AC099A93(&Global_2264, 0);
			func_108();
			Global_14371 = 1;
			unk_0xF6E48914C7A8694E(Global_14374, "GET_CURRENT_SELECTION");
			iLocal_98 = unk_0xC50AA39A577AF886();
			while (!unk_0x768FF8961BA904D6(iLocal_98))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_102 = unk_0x2DE7EFA66B906036(iLocal_98);
			if (iLocal_102 == 0)
			{
				Global_16801[Global_14393] = 1;
				iLocal_113 = 0;
				Global_16806 = 0;
				Global_16805 = 1;
				Global_16807 = 0;
				func_48();
			}
			else
			{
				iLocal_114 = 0;
				func_85();
			}
		}
	}
}

void func_71(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_95817 && iParam1)
	{
		if (func_75(sParam0) && !unk_0x327EDEEEAC55C369())
		{
			unk_0x8DFCED7A656F8802(false);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_97173.f_23602.f_145)
	{
		if (unk_0x0C515FAB3FF9EA92(sParam0, &(Global_97173.f_23602[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_97173.f_23602.f_145 - 2))
			{
				func_74(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_73((Global_97173.f_23602.f_145 - 1));
			Global_97173.f_23602.f_145 = (Global_97173.f_23602.f_145 - 1);
			func_72();
			return;
		}
		iVar0++;
	}
}

void func_72()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_97173.f_23602.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97173.f_23602.f_145)
	{
		if (unk_0xA921AA820C25702F(Global_97173.f_23602[iVar0 /*16*/].f_11, 0))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[0])
			{
				Global_97173.f_23602.f_146[0] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xA921AA820C25702F(Global_97173.f_23602[iVar0 /*16*/].f_11, 1))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[1])
			{
				Global_97173.f_23602.f_146[1] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xA921AA820C25702F(Global_97173.f_23602[iVar0 /*16*/].f_11, 2))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[2])
			{
				Global_97173.f_23602.f_146[2] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_73(int iParam0)
{
	StringCopy(&(Global_97173.f_23602[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_97173.f_23602[iParam0 /*16*/].f_4), "", 16);
	Global_97173.f_23602[iParam0 /*16*/].f_8 = 0;
	Global_97173.f_23602[iParam0 /*16*/].f_9 = 0;
	Global_97173.f_23602[iParam0 /*16*/].f_11 = 0;
	Global_97173.f_23602[iParam0 /*16*/].f_10 = -1;
	Global_97173.f_23602[iParam0 /*16*/].f_12 = 0;
	Global_97173.f_23602[iParam0 /*16*/].f_13 = 0;
	Global_97173.f_23602[iParam0 /*16*/].f_14 = 0;
	Global_97173.f_23602[iParam0 /*16*/].f_15 = 0;
}

void func_74(int iParam0, int iParam1)
{
	Global_97173.f_23602[iParam0 /*16*/] = { Global_97173.f_23602[iParam1 /*16*/] };
	Global_97173.f_23602[iParam0 /*16*/].f_4 = { Global_97173.f_23602[iParam1 /*16*/].f_4 };
	Global_97173.f_23602[iParam0 /*16*/].f_8 = Global_97173.f_23602[iParam1 /*16*/].f_8;
	Global_97173.f_23602[iParam0 /*16*/].f_10 = Global_97173.f_23602[iParam1 /*16*/].f_10;
	Global_97173.f_23602[iParam0 /*16*/].f_9 = Global_97173.f_23602[iParam1 /*16*/].f_9;
	Global_97173.f_23602[iParam0 /*16*/].f_11 = Global_97173.f_23602[iParam1 /*16*/].f_11;
	Global_97173.f_23602[iParam0 /*16*/].f_12 = Global_97173.f_23602[iParam1 /*16*/].f_12;
	Global_97173.f_23602[iParam0 /*16*/].f_13 = Global_97173.f_23602[iParam1 /*16*/].f_13;
	Global_97173.f_23602[iParam0 /*16*/].f_14 = Global_97173.f_23602[iParam1 /*16*/].f_14;
	Global_97173.f_23602[iParam0 /*16*/].f_15 = Global_97173.f_23602[iParam1 /*16*/].f_15;
}

bool func_75(char* sParam0)
{
	unk_0x0A24DA3A41B718F5(sParam0);
	return unk_0x10BDDBFC529428DD(0);
}

void func_76(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_77(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_77(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x0C515FAB3FF9EA92(sParam0, ""))
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
	while (iVar0 < Global_97173.f_23602.f_145)
	{
		if (unk_0x0C515FAB3FF9EA92(&(Global_97173.f_23602[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_97173.f_23602.f_145 < 9)
	{
		StringCopy(&(Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_4), sParam1, 16);
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_8 = (unk_0x9CD27B0045628463() + iParam3);
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_9 = iParam5;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_11 = iParam6;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_12 = uParam2;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_13 = iParam7;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_14 = iParam8;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_10 = ((unk_0x9CD27B0045628463() + iParam3) + iParam4);
		}
		else
		{
			Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_10 = -1;
		}
		Global_97173.f_23602.f_145++;
		func_72();
	}
}

int func_78(char* sParam0)
{
	if (unk_0x0C515FAB3FF9EA92(sParam0, &Global_95820))
	{
		return 1;
	}
	if (func_79(sParam0))
	{
		return 0;
	}
	return 2;
}

int func_79(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_97173.f_23602.f_145)
	{
		if (unk_0x0C515FAB3FF9EA92(sParam0, &(Global_97173.f_23602[iVar0 /*16*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_80(int iParam0)
{
	return 0;
	if (((iParam0 == 92 || iParam0 == 68) || iParam0 == 79) || iParam0 == 34)
	{
		return 0;
	}
	return 1;
}

int func_81(int iParam0, int iParam1)
{
	int iVar0;
	
	return 0;
	if ((iParam0 >= 147 || iParam1 >= 147) || iParam0 == iParam1)
	{
		return 0;
	}
	if ((Global_86036 != -1 && unk_0xA921AA820C25702F(Global_80977[Global_86036 /*34*/].f_15, 15)) && unk_0xA921AA820C25702F(Global_86037, iParam1))
	{
		if (Global_86035 != 5 || func_84() == Global_86036)
		{
			if (!func_83(12))
			{
				if (func_82(iParam0, iParam1, &iVar0) && func_42(iVar0) == 0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_82(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_44(iParam0);
	iVar1 = func_44(iParam1);
	if (iVar0 != 7 && iVar1 != 7)
	{
		*uParam2 = func_43(iVar0, iVar1);
		if (*uParam2 != 10)
		{
			return 1;
		}
	}
	*uParam2 = 10;
	return 0;
}

bool func_83(int iParam0)
{
	return unk_0xA921AA820C25702F(Global_86044, iParam0);
}

int func_84()
{
	return Global_68329;
}

void func_85()
{
	unk_0xC1B1E9A034A63A62(0);
	if (Global_14393.f_1 > 3)
	{
		Global_14393.f_1 = 8;
	}
	if (Global_14381)
	{
		func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
		func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_104(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0xE80492A9AC099A93(&Global_2263, 17);
	iLocal_113 = 1;
	func_107(Global_14374, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (func_65(Global_1578))
	{
		if (bLocal_325)
		{
			func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(0), -1f, -1f, &(Global_2101[iLocal_327 /*16*/].f_8), 0, 0, 0, 0);
			func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_208", 0, 0, 0, 0);
			if (bLocal_326)
			{
				if (func_86(Global_1578, Global_14393))
				{
					func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_209", 0, 0, 0, 0);
				}
				if (func_40(Global_1578, Global_14393))
				{
					func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_222", 0, 0, 0, 0);
				}
			}
		}
		else
		{
			func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_208", 0, 0, 0, 0);
			if (bLocal_326)
			{
				if (func_86(Global_1578, Global_14393))
				{
					func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_209", 0, 0, 0, 0);
				}
				if (func_40(Global_1578, Global_14393))
				{
					func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_222", 0, 0, 0, 0);
				}
			}
		}
	}
	else if (bLocal_325)
	{
		func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(0), -1f, -1f, &(Global_2101[iLocal_327 /*16*/].f_8), 0, 0, 0, 0);
		if (bLocal_326)
		{
			if (func_86(Global_1578, Global_14393))
			{
				func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_209", 0, 0, 0, 0);
			}
			if (func_40(Global_1578, Global_14393))
			{
				func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_222", 0, 0, 0, 0);
			}
		}
	}
	else if (bLocal_326)
	{
		if (func_86(Global_1578, Global_14393))
		{
			func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_209", 0, 0, 0, 0);
		}
		if (func_40(Global_1578, Global_14393))
		{
			func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_222", 0, 0, 0, 0);
		}
	}
	func_107(Global_14374, "DISPLAY_VIEW", 18f, unk_0xBBDA792448DB5A89(iLocal_99), -1082130432, -1082130432, -1082130432);
	func_105(Global_14374, "SET_HEADER", &(Global_97173.f_29699[Global_1578 /*29*/].f_3), 0, 0, 0, 0);
}

int func_86(int iParam0, int iParam1)
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
	if (!func_45(6))
	{
		if (func_82(iParam0, iParam1, &iVar0) && func_42(iVar0) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_87()
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
	
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		unk_0xFE99B66D079CF6BC(0, 22, true);
	}
	if (func_110(2, Global_14362, 0))
	{
		func_108();
		Global_14371 = 1;
		unk_0xF6E48914C7A8694E(Global_14374, "GET_CURRENT_SELECTION");
		iLocal_98 = unk_0xC50AA39A577AF886();
		while (!unk_0x768FF8961BA904D6(iLocal_98))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		iVar0 = unk_0x2DE7EFA66B906036(iLocal_98);
		iLocal_104 = Global_3054[iVar0];
		sLocal_106[0] = unk_0x7B5280EBA9840C72(&(Global_2971[iLocal_104 /*5*/]));
		if (unk_0x0C515FAB3FF9EA92(sLocal_106[0], "*"))
		{
			cLocal_108 = { Global_3037[Global_14393 /*4*/] };
			iLocal_105 = unk_0xF030907CCBB8A9FD(&cLocal_108);
		}
		else if (unk_0xF030907CCBB8A9FD(&cLocal_108) < 14)
		{
			StringConCat(&cLocal_108, sLocal_106[0], 16);
			iLocal_105++;
		}
		unk_0xF6E48914C7A8694E(Global_14374, "SET_HEADER");
		unk_0x80338406F3475E55("STRING");
		unk_0x761B77454205A61D(&cLocal_108, -1);
		unk_0x362E2D3FE93A9959();
		unk_0xC6796A8FFA375E53();
	}
	if (func_110(2, 178, 0))
	{
		func_37();
		Global_14371 = 1;
		if (unk_0xF030907CCBB8A9FD(&cLocal_108) > 0)
		{
			StringCopy(&cLocal_108, unk_0x169BD9382084C8C0(&cLocal_108, 0, (iLocal_105 - 1)), 16);
			iLocal_105 = (iLocal_105 - 1);
		}
		unk_0xF6E48914C7A8694E(Global_14374, "SET_HEADER");
		unk_0x80338406F3475E55("STRING");
		unk_0x761B77454205A61D(&cLocal_108, -1);
		unk_0x362E2D3FE93A9959();
		unk_0xC6796A8FFA375E53();
	}
	if (func_110(2, Global_14365, 0))
	{
		if (!func_93())
		{
			func_108();
			Global_3037[Global_14393 /*4*/] = { cLocal_108 };
			Global_1578 = 144;
			iLocal_305 = 0;
			if (Global_14393.f_1 > 3)
			{
				Global_14393.f_1 = 10;
				func_64();
				if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
				{
					if (!unk_0xCFB0A0D8EDD145A3(unk_0xD80958FC74E988A6()))
					{
						if (unk_0x60DFD0691A170B88(unk_0xD80958FC74E988A6(), false))
						{
							if (!func_63())
							{
								func_62();
							}
						}
						else if (func_61() == 0)
						{
							func_62();
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
					sVar2 = unk_0x7B5280EBA9840C72(&(Global_97[iVar1 /*10*/].f_4));
					if (unk_0x0C515FAB3FF9EA92(sVar2, &cLocal_108))
					{
						if ((Global_97173.f_29699[iVar1 /*29*/].f_12[Global_14393] == 1 || Global_97173.f_29699[iVar1 /*29*/].f_12[Global_14393] == 2) || unk_0x0C515FAB3FF9EA92(sVar2, unk_0x7B5280EBA9840C72(&(Global_97[130 /*10*/].f_4))))
						{
							Global_1578 = iVar1;
						}
						else
						{
							iLocal_118 = 1;
						}
					}
				}
				iVar1++;
			}
			if ((Global_1578 == 144 && iLocal_305 == 0) && iLocal_118 == 0)
			{
				unk_0xF6E48914C7A8694E(Global_14374, "SET_DATA_SLOT");
				unk_0xC3D0841A0CC546A6(4);
				unk_0xC3D0841A0CC546A6(0);
				unk_0xC3D0841A0CC546A6(3);
				unk_0x80338406F3475E55("STRING");
				unk_0x761B77454205A61D(&cLocal_108, -1);
				unk_0x362E2D3FE93A9959();
				func_34("CELL_300");
				func_34("CELL_211");
				func_34("CELL_195");
				unk_0xC6796A8FFA375E53();
				func_107(Global_14374, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
				iLocal_305 = 0;
				iVar3 = 0;
				while (iVar3 < 37)
				{
					sVar4 = unk_0x7B5280EBA9840C72(&(Global_1582[iVar3 /*14*/]));
					if (unk_0x0C515FAB3FF9EA92(sVar4, &cLocal_108))
					{
						iLocal_305 = 1;
						cLocal_306 = { Global_1582[iVar3 /*14*/].f_4 };
						Local_310 = { Global_1582[iVar3 /*14*/].f_8 };
					}
					iVar3++;
				}
				if (iLocal_305 == 0)
				{
					iLocal_112 = unk_0xF030907CCBB8A9FD(&cLocal_108);
					if (iLocal_112 > 6)
					{
						StringCopy(&(uLocal_316[0]), unk_0x169BD9382084C8C0(&cLocal_108, 0, 1), 4);
						StringCopy(&(uLocal_316[1]), unk_0x169BD9382084C8C0(&cLocal_108, 1, 2), 4);
						StringCopy(&(uLocal_316[2]), unk_0x169BD9382084C8C0(&cLocal_108, 2, 3), 4);
						StringCopy(&(uLocal_316[3]), unk_0x169BD9382084C8C0(&cLocal_108, 3, 4), 4);
						StringCopy(&(uLocal_316[4]), unk_0x169BD9382084C8C0(&cLocal_108, 4, 5), 4);
						StringCopy(&(uLocal_316[5]), unk_0x169BD9382084C8C0(&cLocal_108, 5, 6), 4);
						if (((unk_0x0C515FAB3FF9EA92(&(uLocal_316[0]), "1") && unk_0x0C515FAB3FF9EA92(&(uLocal_316[1]), "9")) && unk_0x0C515FAB3FF9EA92(&(uLocal_316[2]), "9")) && unk_0x0C515FAB3FF9EA92(&(uLocal_316[3]), "9"))
						{
							iVar5 = func_92(&(uLocal_316[4]));
							iVar6 = func_92(&(uLocal_316[5]));
							func_91(iVar5, iVar6);
							iLocal_305 = 1;
						}
						if (iLocal_305 == 0)
						{
							if (iLocal_112 == 10 || iLocal_112 == 7)
							{
								if (iLocal_112 == 10)
								{
									StringCopy(&(uLocal_316[0]), unk_0x169BD9382084C8C0(&cLocal_108, 3, 4), 4);
									StringCopy(&(uLocal_316[1]), unk_0x169BD9382084C8C0(&cLocal_108, 4, 5), 4);
									StringCopy(&(uLocal_316[2]), unk_0x169BD9382084C8C0(&cLocal_108, 5, 6), 4);
									StringCopy(&(uLocal_316[3]), unk_0x169BD9382084C8C0(&cLocal_108, 6, 7), 4);
									StringCopy(&(uLocal_316[4]), unk_0x169BD9382084C8C0(&cLocal_108, 7, 8), 4);
									StringCopy(&(uLocal_316[5]), unk_0x169BD9382084C8C0(&cLocal_108, 8, 9), 4);
									StringCopy(&(uLocal_316[6]), unk_0x169BD9382084C8C0(&cLocal_108, 9, 10), 4);
								}
								else
								{
									StringCopy(&(uLocal_316[0]), unk_0x169BD9382084C8C0(&cLocal_108, 0, 1), 4);
									StringCopy(&(uLocal_316[1]), unk_0x169BD9382084C8C0(&cLocal_108, 1, 2), 4);
									StringCopy(&(uLocal_316[2]), unk_0x169BD9382084C8C0(&cLocal_108, 2, 3), 4);
									StringCopy(&(uLocal_316[3]), unk_0x169BD9382084C8C0(&cLocal_108, 3, 4), 4);
									StringCopy(&(uLocal_316[4]), unk_0x169BD9382084C8C0(&cLocal_108, 4, 5), 4);
									StringCopy(&(uLocal_316[5]), unk_0x169BD9382084C8C0(&cLocal_108, 5, 6), 4);
									StringCopy(&(uLocal_316[6]), unk_0x169BD9382084C8C0(&cLocal_108, 6, 7), 4);
								}
								if ((((unk_0x0C515FAB3FF9EA92(&(uLocal_316[0]), "5") && unk_0x0C515FAB3FF9EA92(&(uLocal_316[1]), "5")) && unk_0x0C515FAB3FF9EA92(&(uLocal_316[2]), "5")) && unk_0x0C515FAB3FF9EA92(&(uLocal_316[3]), "0")) && unk_0x0C515FAB3FF9EA92(&(uLocal_316[4]), "1"))
								{
									iVar7 = func_92(&(uLocal_316[5]));
									iVar8 = func_92(&(uLocal_316[6]));
									func_91(iVar7, iVar8);
									iLocal_305 = 1;
								}
							}
						}
					}
				}
			}
			else
			{
				if (Global_97173.f_29699[Global_1578 /*29*/].f_12[Global_14393] == 2 || Global_1578 == 130)
				{
					Global_97173.f_29699[Global_1578 /*29*/].f_24[Global_14393] = 1;
					if (Global_1578 == 130)
					{
						if (!Global_97173.f_29699[130 /*29*/].f_12[0] == 1)
						{
							func_89(130, 4, 1);
							func_89(130, 3, 0);
						}
						if (Global_68067)
						{
							if (!func_88(130, 3))
							{
								func_89(130, 3, 1);
							}
						}
					}
				}
				if (Global_97173.f_29699[Global_1578 /*29*/].f_24[Global_14393] == 0)
				{
					func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_97[Global_1578 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_97173.f_29699[Global_1578 /*29*/].f_3), &(Global_97173.f_29699[Global_1578 /*29*/].f_7), "CELL_211", &(Global_97173.f_29699[Global_1578 /*29*/].f_3), 0);
				}
			}
			func_56();
		}
	}
}

int func_88(int iParam0, int iParam1)
{
	if (Global_97173.f_29699[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

void func_89(int iParam0, int iParam1, bool bParam2)
{
	Global_2949 = iParam0;
	if (Global_97[iParam0 /*10*/].f_8 != 138)
	{
		func_16();
		if (iParam1 == 4)
		{
			Global_97173.f_29699[iParam0 /*29*/].f_12[0] = 1;
			Global_97173.f_29699[iParam0 /*29*/].f_12[1] = 1;
			Global_97173.f_29699[iParam0 /*29*/].f_12[2] = 1;
			Global_97173.f_29699[iParam0 /*29*/].f_24[0] = 1;
			Global_97173.f_29699[iParam0 /*29*/].f_24[1] = 1;
			Global_97173.f_29699[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_97173.f_29699[iParam0 /*29*/].f_12[iParam1] == 1 && Global_97173.f_29699[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_97173.f_29699[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_97173.f_29699[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_68067)
			{
				if (iParam1 != 4)
				{
					if (Global_14393 != iParam1)
					{
						Global_2922[iParam1 /*4*/] = { Global_97173.f_29699[iParam0 /*29*/].f_3 };
						Global_2939[iParam1] = 1;
						Global_2944[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14393)
					{
					}
					else
					{
						Global_2873[1 /*6*/] = { Global_97173.f_29699[iParam0 /*29*/].f_3 };
						Global_2873[1 /*6*/].f_5 = iParam1;
						func_90();
					}
				}
				else
				{
					Global_2873[1 /*6*/] = { Global_97173.f_29699[iParam0 /*29*/].f_3 };
					Global_2873[1 /*6*/].f_5 = iParam1;
					func_90();
				}
			}
			else
			{
				Global_2873[1 /*6*/] = { Global_97173.f_29699[iParam0 /*29*/].f_3 };
				Global_2873[1 /*6*/].f_5 = iParam1;
				func_90();
			}
		}
	}
}

void func_90()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, unk_0x7B5280EBA9840C72(&(Global_97173.f_29699[Global_2949 /*29*/].f_7)), 64);
	if (Global_2968 == 0)
	{
		unk_0x202709F4C58A0424("");
		StringCopy(&cVar16, unk_0x7B5280EBA9840C72(&(Global_2873[1 /*6*/])), 64);
		sVar32 = unk_0x7B5280EBA9840C72("CELL_253");
		unk_0x1CCD9A37359072CF(&cVar0, &cVar0, false, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0x202709F4C58A0424("CELL_255");
		unk_0xC63CD5D2920ACBE7(&(Global_2873[1 /*6*/]));
		unk_0x1CCD9A37359072CF(&cVar0, &cVar0, false, 3, "", 0);
	}
	unk_0xE80492A9AC099A93(&Global_2263, 0);
}

void func_91(int iParam0, int iParam1)
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

int func_92(char* sParam0)
{
	if (unk_0x0C515FAB3FF9EA92(sParam0, "0"))
	{
		return 0;
	}
	if (unk_0x0C515FAB3FF9EA92(sParam0, "1"))
	{
		return 1;
	}
	if (unk_0x0C515FAB3FF9EA92(sParam0, "2"))
	{
		return 2;
	}
	if (unk_0x0C515FAB3FF9EA92(sParam0, "3"))
	{
		return 3;
	}
	if (unk_0x0C515FAB3FF9EA92(sParam0, "4"))
	{
		return 4;
	}
	if (unk_0x0C515FAB3FF9EA92(sParam0, "5"))
	{
		return 5;
	}
	if (unk_0x0C515FAB3FF9EA92(sParam0, "6"))
	{
		return 6;
	}
	if (unk_0x0C515FAB3FF9EA92(sParam0, "7"))
	{
		return 7;
	}
	if (unk_0x0C515FAB3FF9EA92(sParam0, "8"))
	{
		return 8;
	}
	if (unk_0x0C515FAB3FF9EA92(sParam0, "9"))
	{
		return 9;
	}
	if (unk_0x0C515FAB3FF9EA92(sParam0, "A"))
	{
		return 10;
	}
	if (unk_0x0C515FAB3FF9EA92(sParam0, "B"))
	{
		return 11;
	}
	if (unk_0x0C515FAB3FF9EA92(sParam0, "C"))
	{
		return 12;
	}
	if (unk_0x0C515FAB3FF9EA92(sParam0, "D"))
	{
		return 13;
	}
	if (unk_0x0C515FAB3FF9EA92(sParam0, "E"))
	{
		return 14;
	}
	if (unk_0x0C515FAB3FF9EA92(sParam0, "F"))
	{
		return 15;
	}
	if (unk_0x0C515FAB3FF9EA92(sParam0, "G"))
	{
		return 16;
	}
	if (unk_0x0C515FAB3FF9EA92(sParam0, "H"))
	{
		return 17;
	}
	if (unk_0x0C515FAB3FF9EA92(sParam0, "I"))
	{
		return 18;
	}
	if (unk_0x0C515FAB3FF9EA92(sParam0, "J"))
	{
		return 19;
	}
	if (unk_0x0C515FAB3FF9EA92(sParam0, "K"))
	{
		return 20;
	}
	if (unk_0x0C515FAB3FF9EA92(sParam0, "L"))
	{
		return 21;
	}
	if (unk_0x0C515FAB3FF9EA92(sParam0, "M"))
	{
		return 22;
	}
	if (unk_0x0C515FAB3FF9EA92(sParam0, "N"))
	{
		return 23;
	}
	if (unk_0x0C515FAB3FF9EA92(sParam0, "O"))
	{
		return 24;
	}
	if (unk_0x0C515FAB3FF9EA92(sParam0, "P"))
	{
		return 25;
	}
	if (unk_0x0C515FAB3FF9EA92(sParam0, "Q"))
	{
		return 26;
	}
	if (unk_0x0C515FAB3FF9EA92(sParam0, "R"))
	{
		return 27;
	}
	if (unk_0x0C515FAB3FF9EA92(sParam0, "S"))
	{
		return 28;
	}
	if (unk_0x0C515FAB3FF9EA92(sParam0, "T"))
	{
		return 29;
	}
	if (unk_0x0C515FAB3FF9EA92(sParam0, "U"))
	{
		return 30;
	}
	if (unk_0x0C515FAB3FF9EA92(sParam0, "V"))
	{
		return 31;
	}
	if (unk_0x0C515FAB3FF9EA92(sParam0, "W"))
	{
		return 32;
	}
	if (unk_0x0C515FAB3FF9EA92(sParam0, "X"))
	{
		return 33;
	}
	if (unk_0x0C515FAB3FF9EA92(sParam0, "Y"))
	{
		return 34;
	}
	if (unk_0x0C515FAB3FF9EA92(sParam0, "Z"))
	{
		return 35;
	}
	if (unk_0x0C515FAB3FF9EA92(sParam0, "z"))
	{
		return -1;
	}
	return -1;
}

int func_93()
{
	if (Global_68067)
	{
		return 0;
	}
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6()))
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

void func_94()
{
	if (Global_14372)
	{
		if (unk_0x83666F9FB8FEBD4B() > 50)
		{
			Global_14372 = 0;
		}
	}
	if (unk_0xA571D46727E2B718(2))
	{
		if (unk_0x580417101DDB492F(2, 180))
		{
			switch (Global_14373)
			{
				case 0:
					func_102();
					Global_14373 = 1;
					break;
				
				case 1:
					func_102();
					Global_14373 = 2;
					break;
				
				case 2:
					func_102();
					func_100();
					Global_14373 = 3;
					break;
				
				case 3:
					func_102();
					Global_14373 = 4;
					break;
				
				case 4:
					func_102();
					Global_14373 = 5;
					break;
				
				case 5:
					func_102();
					func_100();
					Global_14373 = 6;
					break;
				
				case 6:
					func_102();
					Global_14373 = 7;
					break;
				
				case 7:
					func_102();
					Global_14373 = 8;
					break;
				
				case 8:
					func_102();
					func_100();
					Global_14373 = 9;
					break;
				
				case 9:
					func_102();
					Global_14373 = 10;
					break;
				
				case 10:
					func_102();
					Global_14373 = 11;
					break;
				
				case 11:
					func_102();
					func_100();
					Global_14373 = 0;
					break;
				}
		}
		if (unk_0x580417101DDB492F(2, 181))
		{
			switch (Global_14373)
			{
				case 0:
					func_98();
					func_95();
					Global_14373 = 11;
					break;
				
				case 1:
					func_98();
					Global_14373 = 0;
					break;
				
				case 2:
					func_98();
					Global_14373 = 1;
					break;
				
				case 3:
					func_98();
					func_95();
					Global_14373 = 2;
					break;
				
				case 4:
					func_98();
					Global_14373 = 3;
					break;
				
				case 5:
					func_98();
					Global_14373 = 4;
					break;
				
				case 6:
					func_98();
					func_95();
					Global_14373 = 5;
					break;
				
				case 7:
					func_98();
					Global_14373 = 6;
					break;
				
				case 8:
					func_98();
					Global_14373 = 7;
					break;
				
				case 9:
					func_98();
					func_95();
					Global_14373 = 8;
					break;
				
				case 10:
					func_98();
					Global_14373 = 9;
					break;
				
				case 11:
					func_98();
					Global_14373 = 10;
					break;
				}
			}
	}
	if (Global_14372 == 0)
	{
		if (func_110(2, Global_14368, 0))
		{
			func_102();
			Global_14372 = 1;
			unk_0xC1B1E9A034A63A62(0);
			switch (Global_14393.f_1)
			{
				case 6:
					if (Global_14373 < (34 - 1))
					{
						Global_14373++;
					}
					break;
				
				case 5:
					if (Global_14373 < 3)
					{
						Global_14373++;
					}
					break;
				}
		}
		if (func_110(2, Global_14367, 0))
		{
			func_98();
			Global_14372 = 1;
			unk_0xC1B1E9A034A63A62(0);
			if (Global_14373 > 0)
			{
				Global_14373 = (Global_14373 - 1);
			}
		}
		if (func_110(2, Global_14369, 0))
		{
			func_95();
			Global_14372 = 1;
			unk_0xC1B1E9A034A63A62(0);
			if (Global_14373 > 3)
			{
				Global_14373 = (Global_14373 - 4);
			}
		}
		if (func_110(2, Global_14370, 0))
		{
			func_100();
			Global_14372 = 1;
			unk_0xC1B1E9A034A63A62(0);
			if (Global_14373 < 8)
			{
				Global_14373 += 4;
			}
		}
	}
}

void func_95()
{
	func_107(Global_14374, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x67C540AA08E4A6F5(-1, "Menu_Navigate", &Global_14382, true);
	func_96();
}

void func_96()
{
	if (func_97())
	{
		if (Global_14556 == 0)
		{
			unk_0x95C9E72F3D7DEC9B(1);
		}
		else
		{
			unk_0x95C9E72F3D7DEC9B(2);
		}
	}
}

int func_97()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_68067)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x19CAFA3C87F7C2FF();
	iVar1 = unk_0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_2543736 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_98()
{
	func_107(Global_14374, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(4), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x67C540AA08E4A6F5(-1, "Menu_Navigate", &Global_14382, true);
	func_99();
}

void func_99()
{
	if (func_97())
	{
		if (Global_14556 == 0)
		{
			unk_0x95C9E72F3D7DEC9B(3);
		}
		else
		{
			unk_0x95C9E72F3D7DEC9B(4);
		}
	}
}

void func_100()
{
	func_107(Global_14374, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x67C540AA08E4A6F5(-1, "Menu_Navigate", &Global_14382, true);
	func_101();
}

void func_101()
{
	if (func_97())
	{
		if (Global_14556 == 0)
		{
			unk_0x95C9E72F3D7DEC9B(2);
		}
		else
		{
			unk_0x95C9E72F3D7DEC9B(1);
		}
	}
}

void func_102()
{
	func_107(Global_14374, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(2), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x67C540AA08E4A6F5(-1, "Menu_Navigate", &Global_14382, true);
	func_103();
}

void func_103()
{
	if (func_97())
	{
		if (Global_14556 == 0)
		{
			unk_0x95C9E72F3D7DEC9B(4);
		}
		else
		{
			unk_0x95C9E72F3D7DEC9B(3);
		}
	}
}

void func_104(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0xF6E48914C7A8694E(iParam0, sParam1);
	unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xCA042B6957743895(sParam7))
	{
		func_34(sParam7);
	}
	if (!unk_0xCA042B6957743895(sParam8))
	{
		func_34(sParam8);
	}
	if (!unk_0xCA042B6957743895(sParam9))
	{
		func_34(sParam9);
	}
	if (!unk_0xCA042B6957743895(sParam10))
	{
		func_34(sParam10);
	}
	if (!unk_0xCA042B6957743895(sParam11))
	{
		func_34(sParam11);
	}
	unk_0xC6796A8FFA375E53();
}

void func_105(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0xF6E48914C7A8694E(iParam0, sParam1);
	func_34(sParam2);
	if (!unk_0xCA042B6957743895(sParam3))
	{
		func_34(sParam3);
	}
	if (!unk_0xCA042B6957743895(sParam4))
	{
		func_34(sParam4);
	}
	if (!unk_0xCA042B6957743895(sParam5))
	{
		func_34(sParam5);
	}
	if (!unk_0xCA042B6957743895(sParam6))
	{
		func_34(sParam6);
	}
	unk_0xC6796A8FFA375E53();
}

void func_106()
{
	int iVar0[12];
	int iVar13;
	int iVar14;
	
	StringCopy(&(Global_2971[0 /*5*/]), "CELL_900", 16);
	Global_2971[0 /*5*/].f_4 = 10;
	StringCopy(&(Global_2971[1 /*5*/]), "CELL_901", 16);
	Global_2971[1 /*5*/].f_4 = 0;
	StringCopy(&(Global_2971[2 /*5*/]), "CELL_902", 16);
	Global_2971[2 /*5*/].f_4 = 1;
	StringCopy(&(Global_2971[3 /*5*/]), "CELL_903", 16);
	Global_2971[3 /*5*/].f_4 = 2;
	StringCopy(&(Global_2971[4 /*5*/]), "CELL_904", 16);
	Global_2971[4 /*5*/].f_4 = 3;
	StringCopy(&(Global_2971[5 /*5*/]), "CELL_905", 16);
	Global_2971[5 /*5*/].f_4 = 4;
	StringCopy(&(Global_2971[6 /*5*/]), "CELL_906", 16);
	Global_2971[6 /*5*/].f_4 = 5;
	StringCopy(&(Global_2971[7 /*5*/]), "CELL_907", 16);
	Global_2971[7 /*5*/].f_4 = 6;
	StringCopy(&(Global_2971[8 /*5*/]), "CELL_908", 16);
	Global_2971[8 /*5*/].f_4 = 7;
	StringCopy(&(Global_2971[9 /*5*/]), "CELL_909", 16);
	Global_2971[9 /*5*/].f_4 = 8;
	StringCopy(&(Global_2971[10 /*5*/]), "CELL_910", 16);
	Global_2971[10 /*5*/].f_4 = 9;
	StringCopy(&(Global_2971[11 /*5*/]), "CELL_911", 16);
	Global_2971[11 /*5*/].f_4 = 11;
	iVar13 = 0;
	while (iVar13 < 12)
	{
		iVar0[iVar13] = 0;
		iVar13++;
	}
	if (Global_3054[0] == 0)
	{
	}
	iVar13 = 0;
	while (iVar13 < 12)
	{
		iVar14 = 0;
		while (iVar14 < 12)
		{
			if (iVar13 == Global_2971[iVar14 /*5*/].f_4)
			{
				if (iVar0[iVar13] == 0)
				{
					Global_3054[iVar13] = iVar14;
					unk_0xF6E48914C7A8694E(Global_14374, "SET_DATA_SLOT");
					unk_0xC3D0841A0CC546A6(11);
					unk_0xC3D0841A0CC546A6(iVar13);
					func_34(&(Global_2971[iVar14 /*5*/]));
					unk_0xC6796A8FFA375E53();
					iVar0[iVar13] = 1;
				}
			}
			iVar14++;
		}
		iVar13++;
	}
}

void func_107(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xF6E48914C7A8694E(iParam0, sParam1);
	unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xC6796A8FFA375E53();
}

void func_108()
{
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
	{
		unk_0x67C540AA08E4A6F5(-1, "Menu_Accept", &Global_14382, true);
		func_109();
	}
}

void func_109()
{
	if (func_97())
	{
		unk_0x95C9E72F3D7DEC9B(5);
	}
}

int func_110(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x580417101DDB492F(iParam0, iParam1) || (iParam2 == 1 && unk_0x91AEF906BCA88877(iParam0, iParam1)))
	{
		if (unk_0x48AF36444B965238())
		{
			if (unk_0x0CF2B696BBF945AE() == 0 || (unk_0x5FCF4D7069B09026() && unk_0xA571D46727E2B718(2)))
			{
				return 0;
			}
		}
		if (unk_0xB0034A223497FFCB() || unk_0xE18B138FABC53103())
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

void func_111()
{
	if (func_110(2, Global_14361, 0))
	{
		iLocal_132 = 0;
		unk_0x933D6A9EEC1BACD0(&Global_2264, 0);
		func_37();
		Global_14371 = 1;
		if (Global_68067)
		{
			func_217();
		}
		else
		{
			func_206();
		}
		unk_0x4EDE34FBADD967A6(0);
		if (Global_14393.f_1 > 3)
		{
			Global_14393.f_1 = 7;
		}
		StringCopy(&cLocal_108, "", 16);
	}
}

void func_112()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (Global_14371 == 0)
	{
		if (func_110(2, Global_14362, 0))
		{
			if (!func_93())
			{
				Global_16806 = 0;
				Global_16805 = 0;
				Global_16807 = 0;
				iLocal_305 = 0;
				func_108();
				Global_14371 = 1;
				if (iLocal_93 > 0)
				{
					unk_0xF6E48914C7A8694E(Global_14374, "GET_CURRENT_SELECTION");
					iLocal_98 = unk_0xC50AA39A577AF886();
					while (!unk_0x768FF8961BA904D6(iLocal_98))
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					iLocal_101 = unk_0x2DE7EFA66B906036(iLocal_98);
					bVar0 = false;
					if (unk_0x1077788E268557C2())
					{
						if (Global_68067)
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
					if (unk_0xA921AA820C25702F(Global_2264, 0))
					{
						bVar0 = false;
					}
					if (bVar0)
					{
						Local_330.f_2936 = (iLocal_101 - iLocal_95);
						func_116();
					}
					else
					{
						if (iLocal_101 < 0)
						{
							iLocal_101 = 0;
						}
						Global_1578 = Global_14399[iLocal_101];
						if (Global_14548 != 145)
						{
							if (Global_1578 != Global_14548)
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
							if (unk_0xA921AA820C25702F(Global_2263, 9))
							{
								if (!unk_0xA921AA820C25702F(Global_2263, 29))
								{
									Global_97173.f_29699[Global_1578 /*29*/].f_18 = 1;
									if (Global_97173.f_29699[Global_1578 /*29*/].f_24[Global_14393] == 0)
									{
										func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(1), -1f, -1f, "CELL_288", "CELL_300", &(Global_97[Global_1578 /*10*/].f_4), "CELL_195", 0);
									}
									else
									{
										func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(1), -1f, -1f, "CELL_288", &(Global_97173.f_29699[Global_1578 /*29*/].f_7), &(Global_97173.f_29699[Global_1578 /*29*/].f_3), &(Global_97173.f_29699[Global_1578 /*29*/].f_3), 0);
									}
									func_104(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
									func_107(Global_14374, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
									unk_0x933D6A9EEC1BACD0(&Global_2263, 29);
								}
							}
							else
							{
								bLocal_325 = false;
								bLocal_326 = false;
								if (Global_68067)
								{
									iVar1 = 0;
									while (iVar1 < 4)
									{
										if (unk_0x0C515FAB3FF9EA92(&(Global_97173.f_29699[Global_1578 /*29*/].f_3), &(Global_2166[iVar1 /*24*/])))
										{
											if (!unk_0x0C515FAB3FF9EA92(&(Global_2166[iVar1 /*24*/].f_8), "CELL_SFUN_NULL"))
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
										if (unk_0x0C515FAB3FF9EA92(&(Global_97173.f_29699[Global_1578 /*29*/].f_3), &(Global_2101[iVar2 /*16*/])))
										{
											if (!unk_0x0C515FAB3FF9EA92(&(Global_2101[iVar2 /*16*/].f_8), "CELL_SFUN_NULL"))
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
								if (func_114(Global_1578) && unk_0xA921AA820C25702F(Global_2264, 0) == 0)
								{
									if (func_86(Global_1578, Global_14393) == 0 && func_40(Global_1578, Global_14393) == 0)
									{
										bLocal_326 = false;
									}
									else
									{
										bLocal_326 = true;
									}
								}
								if (unk_0xA921AA820C25702F(Global_2264, 0))
								{
									func_113();
									iLocal_132 = 1;
								}
								else if (bLocal_326 == 0 && bLocal_325 == 0)
								{
									Global_16806 = 0;
									Global_16805 = 0;
									Global_16807 = 0;
									if (unk_0xA921AA820C25702F(Global_2264, 19) && Global_1578 == 129)
									{
									}
									else
									{
										func_48();
									}
								}
								else
								{
									func_85();
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_113()
{
	iLocal_130 = unk_0x9CD27B0045628463();
	func_107(Global_14374, "SET_DATA_SLOT_EMPTY", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4EDE34FBADD967A6(0);
	switch (Global_1578)
	{
		case 2:
			func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), 0f, -1f, -1f, "CELL_7001", &(Global_97173.f_29699[Global_1578 /*29*/].f_3), &(Global_97173.f_29699[Global_1578 /*29*/].f_7), 0, 0);
			break;
		
		case 0:
			func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), 0f, -1f, -1f, "CELL_7002", &(Global_97173.f_29699[Global_1578 /*29*/].f_3), &(Global_97173.f_29699[Global_1578 /*29*/].f_7), 0, 0);
			break;
		
		case 12:
			func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), 0f, -1f, -1f, "CELL_7003", &(Global_97173.f_29699[Global_1578 /*29*/].f_3), "CELL_E_311", 0, 0);
			break;
	}
	if (Global_14381)
	{
		func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
	}
	else
	{
		func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	if (Global_14381)
	{
		func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_104(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	func_107(Global_14374, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_105(Global_14374, "SET_HEADER", "CELL_249", 0, 0, 0, 0);
}

int func_114(int iParam0)
{
	switch (Global_14393)
	{
		case 0:
			if (func_115(iParam0, 0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (func_115(iParam0, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			if (func_115(iParam0, 2))
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

int func_115(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if ((iParam0 >= 147 || iParam1 >= 147) || iParam0 == iParam1)
	{
		return 0;
	}
	iVar0 = func_44(iParam0);
	iVar1 = func_44(iParam1);
	if (iVar0 != 7 && iVar1 != 7)
	{
		iVar2 = func_43(iVar0, iVar1);
		if (iVar2 != 10)
		{
			if (func_42(iVar2) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_116()
{
	char* sVar0;
	
	if (Global_14393.f_1 > 3)
	{
		Global_14393.f_1 = 8;
	}
	if (Global_14381)
	{
		func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
		func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_104(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0xE80492A9AC099A93(&Global_2263, 17);
	func_107(Global_14374, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_208", 0, 0, 0, 0);
	func_120(&Local_330);
	if (Global_14393.f_1 > 3)
	{
		func_107(Global_14374, "DISPLAY_VIEW", 18f, unk_0xBBDA792448DB5A89(iLocal_99), -1082130432, -1082130432, -1082130432);
		iLocal_99 = 0;
		if (func_119(&Local_330))
		{
			sVar0 = unk_0x6D0DE6A7B5DA71F8(Local_330[Local_330.f_2936]);
		}
		else
		{
			sVar0 = func_117(&(Local_330.f_34[func_118(Local_330.f_2936, &Local_330) /*29*/].f_13));
		}
		unk_0xF6E48914C7A8694E(Global_14374, "SET_HEADER");
		unk_0x80338406F3475E55("CELL_CONDFNH");
		unk_0x6C188BE134E074AA(sVar0);
		unk_0x362E2D3FE93A9959();
		unk_0xC6796A8FFA375E53();
		Local_330.f_2999 = 0;
		iLocal_115 = 1;
	}
}

var func_117(var uParam0)
{
	return uParam0;
}

int func_118(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = (iParam0 - uParam1->f_33);
	if (iVar0 >= 100)
	{
		iVar0 = 99;
	}
	return iVar0;
}

int func_119(var uParam0)
{
	if (uParam0->f_2936 < uParam0->f_33)
	{
		return 1;
	}
	return 0;
}

void func_120(var uParam0)
{
	int iVar0;
	struct<22> Var1;
	var uVar36;
	char* sVar37;
	bool bVar38;
	
	iVar0 = 0;
	if (func_126(uParam0, &uVar36))
	{
		if (func_119(uParam0))
		{
			uParam0->f_2963 = { func_125((*uParam0)[uParam0->f_2936]) };
			sVar37 = unk_0x6D0DE6A7B5DA71F8((*uParam0)[uParam0->f_2936]);
		}
		else
		{
			uParam0->f_2963 = { uParam0->f_34[func_118(uParam0->f_2936, uParam0) /*29*/] };
			sVar37 = func_117(&(uParam0->f_34[func_118(uParam0->f_2936, uParam0) /*29*/].f_13));
		}
		StringCopy(&(uParam0->f_2983), sVar37, 64);
		bVar38 = false;
		if (unk_0xE870F9F1F7B4F1FA())
		{
			if (!Global_1573705)
			{
				if (func_124(0))
				{
					bVar38 = true;
				}
			}
		}
		if (func_119(uParam0))
		{
			if (((unk_0x8C71288AE68EDE39((*uParam0)[uParam0->f_2936]) || unk_0x57AF1F8E27483721((*uParam0)[uParam0->f_2936])) || unk_0x87F395D957D4353D((*uParam0)[uParam0->f_2936])) || unk_0x9D6981DFC91A8604((*uParam0)[uParam0->f_2936]))
			{
				bVar38 = false;
			}
		}
		if (unk_0x23F09EADC01449D6(0))
		{
			bVar38 = false;
		}
		if (unk_0xCE60DE011B6C7978(&(uParam0->f_2963)) || unk_0xE944C4F5AF1B5883(&(uParam0->f_2963)))
		{
			bVar38 = false;
		}
		if (unk_0xDF02A2C93F1F26DA(&(uParam0->f_2963)) || unk_0x15337C7C268A27B2(&(uParam0->f_2963)))
		{
			bVar38 = false;
		}
		if (unk_0x2FC5650B0271CB57())
		{
			if (unk_0x4D982ADB1978442D())
			{
				if (unk_0xFD8B834A8BA05048())
				{
					bVar38 = false;
				}
			}
			else if (unk_0xA72BC0B675B1519E())
			{
				bVar38 = false;
			}
		}
		if (bVar38)
		{
			if (Global_68067)
			{
				unk_0xF6E48914C7A8694E(Global_14374, "SET_DATA_SLOT_EMPTY");
				unk_0xC3D0841A0CC546A6(iVar0);
				unk_0xC6796A8FFA375E53();
				unk_0xF6E48914C7A8694E(Global_14374, "SET_DATA_SLOT");
				unk_0xC3D0841A0CC546A6(18);
				unk_0xC3D0841A0CC546A6(iVar0);
				unk_0xC3D0841A0CC546A6(0);
				if (!Global_2450665.f_1 || Global_2450665.f_38)
				{
					unk_0x80338406F3475E55("CELL_MP_1000");
					unk_0x362E2D3FE93A9959();
				}
				else
				{
					unk_0x80338406F3475E55("CELL_MP_1000b");
					unk_0x362E2D3FE93A9959();
				}
				unk_0xC6796A8FFA375E53();
				uParam0->f_2937[iVar0] = 1;
				iVar0++;
			}
			else if (Global_34909 == 15)
			{
				unk_0xF6E48914C7A8694E(Global_14374, "SET_DATA_SLOT_EMPTY");
				unk_0xC3D0841A0CC546A6(iVar0);
				unk_0xC6796A8FFA375E53();
				unk_0xF6E48914C7A8694E(Global_14374, "SET_DATA_SLOT");
				unk_0xC3D0841A0CC546A6(18);
				unk_0xC3D0841A0CC546A6(iVar0);
				unk_0xC3D0841A0CC546A6(0);
				if (!Global_2450665.f_1 || Global_2450665.f_38)
				{
					unk_0x80338406F3475E55("CELL_MP_1000");
					unk_0x362E2D3FE93A9959();
				}
				else
				{
					unk_0x80338406F3475E55("CELL_MP_1000b");
					unk_0x362E2D3FE93A9959();
				}
				unk_0xC6796A8FFA375E53();
				uParam0->f_2937[iVar0] = 1;
				iVar0++;
			}
		}
		bVar38 = false;
		if (func_119(uParam0))
		{
			if (((((func_124(0) && func_124((*uParam0)[uParam0->f_2936])) && !unk_0x8C71288AE68EDE39((*uParam0)[uParam0->f_2936])) && !unk_0x57AF1F8E27483721((*uParam0)[uParam0->f_2936])) && !unk_0x87F395D957D4353D((*uParam0)[uParam0->f_2936])) && !unk_0x9D6981DFC91A8604((*uParam0)[uParam0->f_2936]))
			{
				bVar38 = true;
			}
		}
		if (bVar38)
		{
			unk_0xF6E48914C7A8694E(Global_14374, "SET_DATA_SLOT_EMPTY");
			unk_0xC3D0841A0CC546A6(iVar0);
			unk_0xC6796A8FFA375E53();
			unk_0xF6E48914C7A8694E(Global_14374, "SET_DATA_SLOT");
			unk_0xC3D0841A0CC546A6(18);
			unk_0xC3D0841A0CC546A6(iVar0);
			unk_0xC3D0841A0CC546A6(0);
			unk_0x80338406F3475E55("CELL_MP_1009");
			unk_0x362E2D3FE93A9959();
			unk_0xC6796A8FFA375E53();
			uParam0->f_2937[iVar0] = 2;
			iVar0++;
		}
		bVar38 = false;
		if (func_119(uParam0))
		{
			if (unk_0x203F1CFD823B27A4() < unk_0xAFEBB0D5D8F687D2())
			{
				if (!unk_0x1A24A179F9B31654(&(uParam0->f_2963)))
				{
					bVar38 = true;
				}
			}
		}
		if (bVar38)
		{
			unk_0xF6E48914C7A8694E(Global_14374, "SET_DATA_SLOT");
			unk_0xC3D0841A0CC546A6(18);
			unk_0xC3D0841A0CC546A6(iVar0);
			unk_0xC3D0841A0CC546A6(0);
			unk_0x80338406F3475E55("PIM_DFRQ2");
			unk_0x362E2D3FE93A9959();
			unk_0xC6796A8FFA375E53();
			uParam0->f_2937[iVar0] = 3;
			iVar0++;
		}
		bVar38 = false;
		bVar38 = true;
		if (bVar38)
		{
			unk_0xF6E48914C7A8694E(Global_14374, "SET_DATA_SLOT");
			unk_0xC3D0841A0CC546A6(18);
			unk_0xC3D0841A0CC546A6(iVar0);
			unk_0xC3D0841A0CC546A6(0);
			unk_0x80338406F3475E55("CELL_MP_1007");
			unk_0x362E2D3FE93A9959();
			unk_0xC6796A8FFA375E53();
			uParam0->f_2937[iVar0] = 4;
			iVar0++;
		}
		bVar38 = false;
		if (unk_0x579CCED0265D4896())
		{
			if (unk_0xB124B57F571D8F18(&(uParam0->f_2963)))
			{
				unk_0xEEE6EACBE8874FBA(&Var1, 35, &(uParam0->f_2963));
			}
		}
		if (Var1.f_0 != -1)
		{
			if (Var1.f_21 == 1)
			{
				if (unk_0x67A5589628E0CFF6() && !func_123(Var1.f_0))
				{
					bVar38 = true;
					uParam0->f_2947 = { Var1.f_1 };
				}
			}
		}
		if (bVar38)
		{
			unk_0xF6E48914C7A8694E(Global_14374, "SET_DATA_SLOT");
			unk_0xC3D0841A0CC546A6(18);
			unk_0xC3D0841A0CC546A6(iVar0);
			unk_0xC3D0841A0CC546A6(0);
			unk_0x80338406F3475E55("CELL_MP_1003");
			unk_0x362E2D3FE93A9959();
			unk_0xC6796A8FFA375E53();
			uParam0->f_2937[iVar0] = 5;
			iVar0++;
		}
		unk_0xE80492A9AC099A93(&Global_2265, 6);
		bVar38 = false;
		if (func_119(uParam0))
		{
			if (func_122(unk_0x4F8644AF03D0E0D6(), 1, 1))
			{
				if (unk_0x9DE986FC9A87C474(unk_0x4F8644AF03D0E0D6(), (*uParam0)[uParam0->f_2936]))
				{
					if (!func_121((*uParam0)[uParam0->f_2936], 0))
					{
						if (!unk_0xA921AA820C25702F(Global_2413868[(*uParam0)[uParam0->f_2936] /*253*/].f_194, 2))
						{
							bVar38 = true;
							unk_0x933D6A9EEC1BACD0(&Global_2265, 6);
						}
					}
				}
			}
		}
		if (Global_1573675 || Global_1573676)
		{
			bVar38 = false;
		}
		if (bVar38)
		{
			unk_0xF6E48914C7A8694E(Global_14374, "SET_DATA_SLOT");
			unk_0xC3D0841A0CC546A6(18);
			unk_0xC3D0841A0CC546A6(iVar0);
			unk_0xC3D0841A0CC546A6(0);
			if (!unk_0xA921AA820C25702F(Global_2421967.f_637, (*uParam0)[uParam0->f_2936]))
			{
				unk_0x80338406F3475E55("CELL_MP_1008");
			}
			else
			{
				unk_0x80338406F3475E55("CELL_MP_1008b");
			}
			unk_0x362E2D3FE93A9959();
			unk_0xC6796A8FFA375E53();
			uParam0->f_2937[iVar0] = 7;
			iVar0++;
		}
	}
	else
	{
		unk_0x202709F4C58A0424("CELL_LEFT_SESS");
		unk_0x2ED7843F8F801023(true, true);
		func_30(0);
		return;
	}
}

bool func_121(int iParam0, int iParam1)
{
	return unk_0xA921AA820C25702F(Global_2413868[iParam0 /*253*/].f_205, iParam1);
}

int func_122(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xB8DFD30D6973E135(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x5E9564D8246B909A(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2421967.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_123(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x579CCED0265D4896() && unk_0x67A5589628E0CFF6())
	{
		iVar0 = unk_0x1F471B79ACC90BEF();
		if (iVar0 > 0)
		{
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				unk_0x48DE78AF2C8885B8(&Global_2445167, iVar1);
				if (iParam0 == Global_2445167)
				{
					return 1;
				}
				iVar1++;
			}
		}
	}
	return 0;
}

int func_124(int iParam0)
{
	struct<13> Var0;
	
	if (unk_0x66B59CFFD78467AF() == 0)
	{
		return 0;
	}
	if (unk_0xCCA1072C29D096C2() || unk_0xA72BC0B675B1519E())
	{
		if (unk_0xAEEF48CDF5B6CE7C(0, iParam0))
		{
			if (unk_0x25CB5A9F37BFD063())
			{
				return 1;
			}
		}
	}
	if (unk_0xF6201B4DAF662A9D() || unk_0x4D982ADB1978442D())
	{
		if (iParam0 == 0 || iParam0 == unk_0x4F8644AF03D0E0D6())
		{
			if (unk_0x83F28CE49FBBFFBA(0, -3, true) || unk_0xAEEF48CDF5B6CE7C(1, 0))
			{
				return 1;
			}
		}
		else
		{
			Var0 = { func_125(iParam0) };
			if (unk_0xAEEF48CDF5B6CE7C(0, 0) || (unk_0xAEEF48CDF5B6CE7C(1, 0) && unk_0x1A24A179F9B31654(&Var0)))
			{
				return 1;
			}
		}
	}
	if (unk_0x48AF36444B965238())
	{
		if (unk_0xAEEF48CDF5B6CE7C(0, iParam0))
		{
			if (unk_0x25CB5A9F37BFD063())
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_125(int iParam0)
{
	struct<13> Var0;
	
	unk_0x388EB2B86C73B6B3(iParam0, &Var0, 13);
	return Var0;
}

int func_126(var uParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x1077788E268557C2())
	{
		*iParam1 = 2;
	}
	else if (uParam0->f_2936 < uParam0->f_33)
	{
		if (func_122((*uParam0)[uParam0->f_2936], 0, 1))
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
		iVar0 = func_118(uParam0->f_2936, uParam0);
		if (unk_0x87EB7A3FFCB314DB(&(uParam0->f_34[iVar0 /*29*/])))
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

void func_127()
{
	if (func_110(2, Global_14362, 0))
	{
		unk_0xE80492A9AC099A93(&Global_2264, 0);
		iLocal_132 = 0;
		func_108();
		Global_14371 = 1;
		Global_16806 = 0;
		Global_16805 = 0;
		Global_16807 = 0;
		func_48();
	}
}

void func_128()
{
	if (iLocal_125)
	{
		if (unk_0x83666F9FB8FEBD4B() > 150)
		{
			iLocal_125 = 0;
		}
	}
	if (unk_0xA571D46727E2B718(2))
	{
		if (func_110(2, 181, 0))
		{
			if (iLocal_97 > 0)
			{
				iLocal_97 = (iLocal_97 - 1);
			}
			else
			{
				iLocal_97 = (iLocal_93 - 1);
			}
			func_95();
			iLocal_125 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_110(2, 180, 0))
		{
			iLocal_97++;
			if (iLocal_97 == iLocal_93)
			{
				iLocal_97 = 0;
			}
			func_100();
		}
	}
	if (iLocal_125 == 0)
	{
		if (func_110(2, Global_14369, 0))
		{
			if (iLocal_97 > 0)
			{
				iLocal_97 = (iLocal_97 - 1);
			}
			else
			{
				iLocal_97 = (iLocal_93 - 1);
			}
			func_95();
			iLocal_125 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_110(2, Global_14370, 0))
		{
			iLocal_97++;
			if (iLocal_97 == iLocal_93)
			{
				iLocal_97 = 0;
			}
			func_100();
			iLocal_125 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_110(2, Global_14368, 0))
		{
			func_130();
			func_130();
			func_130();
			func_130();
			func_130();
			unk_0x67C540AA08E4A6F5(-1, "Menu_Navigate", &Global_14382, true);
			iLocal_125 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_110(2, Global_14367, 0))
		{
			func_129();
			func_129();
			func_129();
			func_129();
			func_129();
			unk_0x67C540AA08E4A6F5(-1, "Menu_Navigate", &Global_14382, true);
			iLocal_125 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
}

void func_129()
{
	if (iLocal_97 > 0)
	{
		iLocal_97 = (iLocal_97 - 1);
	}
	else
	{
		iLocal_97 = (iLocal_93 - 1);
	}
	func_107(Global_14374, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_130()
{
	iLocal_97++;
	if (iLocal_97 == iLocal_93)
	{
		iLocal_97 = 0;
	}
	func_107(Global_14374, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(3), -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_131()
{
	iLocal_97++;
	if (iLocal_97 == iLocal_93)
	{
		iLocal_97 = 0;
		unk_0xE80492A9AC099A93(&Global_2263, 16);
	}
	func_100();
	unk_0xF6E48914C7A8694E(Global_14374, "GET_CURRENT_SELECTION");
	iLocal_98 = unk_0xC50AA39A577AF886();
	while (!unk_0x768FF8961BA904D6(iLocal_98))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	iLocal_101 = unk_0x2DE7EFA66B906036(iLocal_98);
	if (iLocal_101 < 0)
	{
		iLocal_101 = 0;
	}
	if (Global_16723 == Global_14399[iLocal_101])
	{
		unk_0xE80492A9AC099A93(&Global_2263, 16);
	}
}

void func_132()
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
	
	if (unk_0xA921AA820C25702F(Global_2265, 6))
	{
		if (!unk_0x0F10B05DDF8D16E9(&(Local_330.f_2963)))
		{
			unk_0xE80492A9AC099A93(&Global_2265, 6);
			StringCopy(&cLocal_108, "", 16);
			Global_14393.f_1 = 3;
		}
	}
	switch (Local_330.f_2999)
	{
		case 0:
			if (unk_0xA921AA820C25702F(iLocal_324, 1))
			{
				if (!Global_89836.f_1318)
				{
					unk_0xE80492A9AC099A93(&iLocal_324, 0);
					unk_0xE80492A9AC099A93(&iLocal_324, 1);
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
						if (func_110(2, Global_14362, 0) || unk_0xF3A21BCD95725A4A(2, 201))
						{
							Global_14393.f_1 = 3;
						}
					}
					else if (func_110(2, Global_14362, 0) || unk_0xF3A21BCD95725A4A(2, 201))
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
							if (!Global_2450665.f_1)
							{
								if (!unk_0xEF0912DDF7C4CB4B() && !unk_0xB5D3453C98456528())
								{
									Local_330.f_2976 = 0;
									func_203();
									Local_330.f_2977 = 0;
									if (func_119(&Local_330))
									{
										sVar53 = unk_0x6D0DE6A7B5DA71F8(Local_330[Local_330.f_2936]);
									}
									else
									{
										sVar53 = func_117(&(Local_330.f_34[func_118(Local_330.f_2936, &Local_330) /*29*/].f_13));
									}
									func_202(sVar53);
									Local_330.f_2999 = 1;
									func_201(&(Local_330.f_2979));
									func_200(0);
									if (Global_68067)
									{
										if (func_199(1) >= Global_262145.f_138)
										{
											Var40 = { func_125(unk_0x4F8644AF03D0E0D6()) };
											if (func_198())
											{
												func_191(1654961868, Global_262145.f_138, &iVar0, 1, 1);
												Global_2539058[iVar0 /*68*/].f_8.f_3 = { Var40 };
											}
											else
											{
												unk_0xACDE7185B374177C(Global_262145.f_138, &Var40, true, true);
											}
										}
										else
										{
											Var40 = { func_125(unk_0x4F8644AF03D0E0D6()) };
											if (func_198())
											{
												func_191(1654961868, func_199(1), &iVar0, 1, 1);
												Global_2539058[iVar0 /*68*/].f_8.f_3 = { Var40 };
											}
											else
											{
												unk_0xACDE7185B374177C(func_199(1), &Var40, true, true);
											}
										}
										func_49(1899, 1, -1);
									}
								}
							}
							else if (Global_2450665.f_38)
							{
							}
							else
							{
								func_190();
								unk_0x67C540AA08E4A6F5(-1, "Hang_Up", &Global_14382, true);
								if (Global_2450665.f_1)
								{
									func_188();
								}
								Global_14393.f_1 = 3;
							}
							return;
							break;
						
						case 2:
							if (func_187(&(Global_2446208.f_282[Local_330[Local_330.f_2936] /*2*/])))
							{
								if (!func_186(&(Global_2446208.f_282[Local_330[Local_330.f_2936] /*2*/]), 30000, 0))
								{
									if (func_174(0, 0))
									{
										func_159("CELL_MP_1009H", unk_0x6D0DE6A7B5DA71F8(Local_330[Local_330.f_2936]), func_160(Local_330[Local_330.f_2936], -2, 0, 0), -1);
									}
									Local_330.f_2976 = 0;
									return;
								}
							}
							if (((((!func_124(0) || !func_124(Local_330[Local_330.f_2936])) || unk_0x8C71288AE68EDE39(Local_330[Local_330.f_2936])) || unk_0x57AF1F8E27483721(Local_330[Local_330.f_2936])) || unk_0x87F395D957D4353D(Local_330[Local_330.f_2936])) || unk_0x9D6981DFC91A8604(Local_330[Local_330.f_2936]))
							{
								if (func_174(1, 1))
								{
									func_159("CELL_MP_1009M", unk_0x6D0DE6A7B5DA71F8(Local_330[Local_330.f_2936]), func_160(Local_330[Local_330.f_2936], -2, 0, 0), -1);
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
							if (!unk_0x6EA101606F6E4D81())
							{
								if (unk_0xCCA1072C29D096C2() && !unk_0x1A24A179F9B31654(&(Local_330.f_2963)))
								{
									if (unk_0x8E02D73914064223(&(Local_330.f_2963), ""))
									{
										Local_330.f_2976 = 0;
										Global_14393.f_1 = 3;
									}
								}
								else
								{
									unk_0x859ED1CEA343FCA8(&(Local_330.f_2963));
									Local_330.f_2976 = 0;
									Global_14393.f_1 = 3;
								}
							}
							break;
						
						case 5:
							if (unk_0x579CCED0265D4896())
							{
								if (unk_0xB124B57F571D8F18(&(Local_330.f_2963)))
								{
									unk_0xEEE6EACBE8874FBA(&Var4, 35, &(Local_330.f_2963));
								}
							}
							if (Var4.f_0 != -1)
							{
								if (Var4.f_21 == 1)
								{
									if (!func_123(Var4.f_0))
									{
										if (unk_0x9FAAA4F4FC71F87F(Var4.f_0))
										{
											Local_330.f_2976 = 0;
											unk_0x202709F4C58A0424("CREW_JOIN");
											unk_0x6C188BE134E074AA(&(Var4.f_1));
											unk_0x2ED7843F8F801023(true, true);
											Global_14393.f_1 = 3;
										}
										else
										{
											Global_14393.f_1 = 3;
											Local_330.f_2976 = 0;
											Global_14393.f_1 = 3;
										}
										return;
									}
								}
							}
							Local_330.f_2976 = 0;
							break;
						
						case 4:
							Local_330.f_2976 = 0;
							func_116();
							unk_0x859ED1CEA343FCA8(&(Local_330.f_2963));
							break;
						
						case 7:
							if (unk_0xA921AA820C25702F(Global_2421967.f_637, Local_330[Local_330.f_2936]))
							{
								unk_0xE80492A9AC099A93(&(Global_2421967.f_637), Local_330[Local_330.f_2936]);
							}
							else
							{
								Global_2421967.f_637 = 0;
								unk_0x933D6A9EEC1BACD0(&(Global_2421967.f_637), Local_330[Local_330.f_2936]);
							}
							func_116();
							Local_330.f_2976 = 0;
							break;
						}
				}
			}
			else if (Global_14371 == 0)
			{
				if (func_110(2, Global_14362, 0))
				{
					Local_330.f_2982 = 0;
					Local_330.f_2981 = 0;
					unk_0xE80492A9AC099A93(&Global_2264, 0);
					iLocal_114 = 0;
					func_108();
					Global_14371 = 1;
					unk_0xF6E48914C7A8694E(Global_14374, "GET_CURRENT_SELECTION");
					iLocal_98 = unk_0xC50AA39A577AF886();
					while (!unk_0x768FF8961BA904D6(iLocal_98))
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					Local_330.f_2946 = unk_0x2DE7EFA66B906036(iLocal_98);
					if (!func_126(&Local_330, &iVar3))
					{
						switch (iVar3)
						{
							case 0:
								func_158("PLAYER_N_ON", 7500, 1);
								break;
							
							case 1:
								func_158("PLAYERLEFT", 7500, 1);
								break;
							
							case 2:
								Local_330.f_2981 = 1;
								Local_330.f_2976 = 1;
								return;
								break;
						}
						Global_14393.f_1 = 3;
						return;
					}
					Local_330.f_2976 = 1;
				}
			}
			break;
		
		case 1:
			if (!func_126(&Local_330, &iVar3))
			{
				func_200(1);
				func_190();
				Local_330.f_2978 = 1;
				Local_330.f_2977 = 1;
				return;
			}
			else if (Local_330.f_2977)
			{
				if (!Local_330.f_2978)
				{
					if (!Global_2450665.f_1 || !unk_0x855BC38818F6F684())
					{
						func_200(1);
						func_190();
						Local_330.f_2978 = 1;
						Local_330.f_2977 = 1;
						return;
					}
					if (unk_0x1077788E268557C2())
					{
						if (func_110(2, Global_14363, 0))
						{
							func_190();
							Local_330.f_2976 = 0;
							return;
						}
						if (func_157(Global_2450665.f_20))
						{
							if (unk_0x1A24A179F9B31654(&(Global_2450665.f_20)))
							{
								if (!unk_0x87EB7A3FFCB314DB(&(Global_2450665.f_20)))
								{
									func_200(1);
									func_190();
									Local_330.f_2978 = 1;
									Local_330.f_2977 = 1;
									return;
								}
							}
						}
						else
						{
							func_200(1);
							func_190();
							Local_330.f_2978 = 1;
							Local_330.f_2977 = 1;
							return;
						}
					}
					else
					{
						func_190();
						Local_330.f_2976 = 0;
						func_116();
						return;
					}
					if (!Global_2450665.f_37)
					{
						if (Global_2450665.f_33 == -1)
						{
							if (func_186(&(Local_330.f_2979), 40000, 1))
							{
								func_200(1);
								func_190();
								Local_330.f_2978 = 1;
								Local_330.f_2977 = 1;
								return;
							}
						}
						else
						{
							switch (Global_2450665.f_33)
							{
								case 1:
									func_156();
									func_155();
									if (unk_0x10FAB35428CCC9D7())
									{
										if (iVar1 == iVar2)
										{
										}
									}
									unk_0xA3B0C41BA5CC0BB5(iLocal_103);
									return;
									break;
								
								case 2:
									func_200(1);
									func_190();
									Local_330.f_2978 = 1;
									return;
									break;
								
								default:
									func_200(1);
									func_190();
									Local_330.f_2978 = 1;
									return;
									break;
								}
							}
						}
				}
			}
			else if (!func_187(&(Local_330.f_2979)))
			{
				func_201(&(Local_330.f_2979));
				func_154(&(Local_330.f_2979), 1, 0);
			}
			else
			{
				if (func_186(&(Local_330.f_2979), 15000, 1))
				{
					func_190();
					func_37();
					func_205();
					Global_14393.f_1 = 3;
					return;
				}
				if (Global_2450665.f_1 || unk_0xA921AA820C25702F(Global_2264, 20))
				{
					if (func_110(2, Global_14363, 0))
					{
						func_190();
						Global_14393.f_1 = 3;
						return;
					}
				}
				if (Global_2450665.f_1)
				{
					if (func_153(&Local_330, &(Local_330.f_2983)))
					{
						func_152(&(Local_330.f_2979), 1, 0);
						Local_330.f_2978 = 0;
						Local_330.f_2977 = 1;
						if (Global_68067)
						{
							func_150(105, 1, -1, 1);
						}
					}
					else
					{
						func_200(1);
						func_190();
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
				if (func_144(&Local_3330, &(Local_3330.f_1), &(Local_3330.f_2), 0, 0, &cLocal_3333, 0, 0, 1, 0, 0, 0, 0, 0, 0))
				{
					StringCopy(&cLocal_3333, unk_0x8362B09B91893647(), 64);
					Local_3330.f_0 = 0;
					Local_3330.f_2 = 0;
					Local_3330.f_1 = 0;
					iLocal_3349 = 0;
					func_152(&(Global_2446208.f_282[Local_330[Local_330.f_2936] /*2*/]), 0, 0);
					if (unk_0xCA042B6957743895(func_143(&cLocal_3333)))
					{
					}
					else
					{
						Var54 = { func_125(Local_330[Local_330.f_2936]) };
						unk_0x3A214F2EC889B100(&cLocal_3333, &Var54);
						func_133("CP_TM_SENT", Local_330[Local_330.f_2936], 0, 0, 0, 1, 1, 0);
						func_49(1898, 1, -1);
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

int func_133(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	struct<16> Var1;
	bool bVar17;
	bool bVar18;
	
	iVar0 = -1;
	if (unk_0x9DE986FC9A87C474(unk_0x4F8644AF03D0E0D6(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var1, unk_0x6D0DE6A7B5DA71F8(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x6D0DE6A7B5DA71F8(iParam1), 64);
		}
		unk_0x202709F4C58A0424(sParam0);
		unk_0x39BBF623FC803EAC(func_160(iParam1, -2, 1, 0));
		unk_0x6C188BE134E074AA(func_141(&Var1));
		if (!bParam4)
		{
			iVar0 = unk_0x2ED7843F8F801023(false, true);
		}
		else
		{
			Global_2445237 = { func_125(iParam1) };
			if (unk_0xEEE6EACBE8874FBA(&Global_2445167, 35, &Global_2445237))
			{
				bVar17 = false;
				if (unk_0x0C515FAB3FF9EA92(&(Global_2445167.f_22), "Leader") && Global_2445167.f_30 == 0)
				{
					bVar17 = true;
				}
				if (Global_2445167.f_21 > 0)
				{
					bVar18 = false;
				}
				else
				{
					bVar18 = true;
				}
				if (bParam6)
				{
					if (bParam7)
					{
						Var1 = { func_140(&Var1) };
					}
					iVar0 = unk_0x137BC35589E34E1E(bVar18, unk_0x7543BB439F63792B(&Global_2445167, 35), &(Global_2445167.f_17), Global_2445167.f_30, bVar17, false, Global_2445167, &Var1, Global_1317058, Global_1317059, Global_1317060);
				}
				else
				{
					iVar0 = unk_0x97C9E4E7024A8F2C(bVar18, unk_0x7543BB439F63792B(&Global_2445167, 35), &(Global_2445167.f_17), Global_2445167.f_30, bVar17, false, Global_2445167, Global_1317058, Global_1317059, Global_1317060);
				}
			}
			else
			{
				iVar0 = unk_0x2ED7843F8F801023(false, true);
			}
		}
		func_134(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_134(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_139() || !unk_0x05095437424397FA()) || !func_137(unk_0x4F8644AF03D0E0D6(), 0))
	{
		return;
	}
	iVar0 = func_135(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1689857.f_5[iVar0 /*53*/] = iParam0;
		Global_1689857.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1689857.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1689857.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1689857.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1689857.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1689857.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1689857.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1689857.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1689857.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1689857.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1689857.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_135(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1689857 - 1))
	{
		if (iParam0 > Global_1689857.f_5[iVar0 /*53*/].f_1)
		{
			func_136(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1689857++;
	if (Global_1689857 > 5)
	{
		Global_1689857 = 5;
		return Global_1689857;
	}
	return (Global_1689857 - 1);
}

void func_136(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1689857.f_5[iVar0 /*53*/] = { Global_1689857.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_137(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x4F8644AF03D0E0D6())
	{
		bVar0 = func_138(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582048[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xB8DFD30D6973E135(iParam0))
		{
			bVar0 = unk_0x37039302F4E0A008(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_138(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_55();
	}
	if (Global_1315875[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312730[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

bool func_139()
{
	return unk_0x812595A0644CE1DE(-1762644250);
}

struct<16> func_140(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_141(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_142(&cVar0);
}

var func_142(char[4] cParam0)
{
	return cParam0;
}

var func_143(char[4] cParam0)
{
	return cParam0;
}

int func_144(var uParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4, char* sParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, char* sParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
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
	
	if (unk_0x797AC7CB535BA28F() || unk_0xB16FCE9DDC7BA182())
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
				else if (func_149())
				{
					iVar5 = 21;
				}
				else
				{
					iVar5 = 51;
				}
				if (*iParam1 == 0)
				{
					if ((iParam7 == 0 || iParam7 == 1) || iParam7 == 2)
					{
						if (func_149())
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
						if (unk_0x2C83A9DA6BFFC4F9(joaat("fm_capture_creator")) > 0)
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
						if (unk_0x2C83A9DA6BFFC4F9(joaat("fm_capture_creator")) > 0)
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
				else if (func_149())
				{
					sVar3 = "FMMC_KEY_TIS2FJ";
				}
				else
				{
					sVar3 = "FMMC_KEY_TIP2F";
				}
				if (unk_0xF6201B4DAF662A9D() || unk_0x4D982ADB1978442D())
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
				if (unk_0x2BDD44CC428A7EAE() == 0)
				{
					iVar6 = 0;
				}
				else
				{
					iVar6 = 1;
				}
				if (unk_0xCA042B6957743895(sParam5))
				{
					unk_0x00DC833F2568DBF6(iVar6, sVar3, sVar4, "", "", "", "", iVar5);
				}
				else
				{
					unk_0x00DC833F2568DBF6(iVar6, sVar3, sVar4, sParam5, sParam10, "", "", iVar5);
				}
			}
			else
			{
				if (unk_0x2BDD44CC428A7EAE() == 0)
				{
					iVar7 = 0;
				}
				else
				{
					iVar7 = 1;
				}
				if (bParam4)
				{
					if (*iParam1 == 0)
					{
						sVar3 = "FMMC_KEY_TIP";
					}
					else
					{
						sVar3 = "FMMC_KEY_TIPF";
					}
					if (unk_0xF6201B4DAF662A9D() || unk_0x4D982ADB1978442D())
					{
						sVar4 = sVar3;
						sVar3 = "FMMC_T0_M19";
					}
					if (unk_0x2BDD44CC428A7EAE() == 10)
					{
						iVar8 = 21;
					}
					else
					{
						iVar8 = 25;
					}
					if (func_139())
					{
						iVar8 = 64;
					}
					unk_0x3ED1438C1F5C6612(2);
					if (unk_0xCA042B6957743895(&(Global_1601761.f_54844)))
					{
						unk_0x00DC833F2568DBF6(iVar7, sVar3, sVar4, "", "", "", "", iVar8);
					}
					else
					{
						unk_0x00DC833F2568DBF6(iVar7, sVar3, sVar4, &(Global_1601761.f_54844), "", "", "", iVar8);
					}
				}
				else if (bParam13)
				{
					if (*iParam1 == 0)
					{
						sVar3 = "FMMC_KEY_TIP";
					}
					else
					{
						sVar3 = "FMMC_KEY_TIPF";
					}
					if (unk_0xF6201B4DAF662A9D())
					{
						sVar4 = sVar3;
						sVar3 = "FMMC_T0_M19";
					}
					iVar8 = 63;
					unk_0x3ED1438C1F5C6612(2);
					if (unk_0xCA042B6957743895(sParam5))
					{
						unk_0x00DC833F2568DBF6(iVar7, sVar3, sVar4, "", "", "", "", iVar8);
					}
					else
					{
						unk_0x00DC833F2568DBF6(iVar7, sVar3, sVar4, sParam5, "", "", "", iVar8);
					}
				}
				else if (bParam9)
				{
					if (unk_0x2BDD44CC428A7EAE() == 0)
					{
						iVar8 = 200;
						if (*iParam1 == 0)
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
						if (*iParam1 == 0)
						{
							sVar3 = "FMMC_KEY_ALTT";
						}
						else
						{
							sVar3 = "FMMC_KEY_ALTTF";
						}
					}
					if (unk_0xF6201B4DAF662A9D() || unk_0x4D982ADB1978442D())
					{
						sVar4 = sVar3;
						sVar3 = "FMMC_T0_M36";
					}
					iVar9 = 0;
					while (iVar9 <= 7)
					{
						if (unk_0xF22B6C47C6EAB066(&(Global_1601761.f_54995[iVar9 /*16*/])))
						{
							StringCopy(&(Global_1601761.f_54995[iVar9 /*16*/]), "", 64);
						}
						iVar9++;
					}
					unk_0xCA78CFA0366592FE(iVar7, sVar3, sVar4, &(Global_1601761.f_54995[0 /*16*/]), &(Global_1601761.f_54995[1 /*16*/]), &(Global_1601761.f_54995[2 /*16*/]), &(Global_1601761.f_54995[3 /*16*/]), &(Global_1601761.f_54995[4 /*16*/]), &(Global_1601761.f_54995[5 /*16*/]), &(Global_1601761.f_54995[6 /*16*/]), &(Global_1601761.f_54995[7 /*16*/]), iVar8);
				}
				else if (bParam6)
				{
					if (*iParam1 == 0)
					{
						sVar3 = "FMMC_KEY_TIP4";
					}
					else
					{
						sVar3 = "FMMC_KEY_TIP4F";
					}
					if (unk_0xF6201B4DAF662A9D() || unk_0x4D982ADB1978442D())
					{
						sVar4 = sVar3;
						sVar3 = "FMMC_SMS3";
					}
					if (unk_0xCA042B6957743895(&(Global_1601761.f_21282[0 /*38*/].f_4[0 /*16*/])))
					{
						unk_0x00DC833F2568DBF6(iVar7, sVar3, sVar4, "", "", "", "", 126);
					}
					else
					{
						iVar10 = 0;
						while (iVar10 <= 1)
						{
							if (unk_0xF22B6C47C6EAB066(&(Global_1601761.f_21282[0 /*38*/].f_4[iVar10 /*16*/])))
							{
								StringCopy(&(Global_1601761.f_21282[0 /*38*/].f_4[iVar10 /*16*/]), "", 64);
							}
							iVar10++;
						}
						unk_0x00DC833F2568DBF6(iVar7, sVar3, sVar4, &(Global_1601761.f_21282[0 /*38*/].f_4[0 /*16*/]), &(Global_1601761.f_21282[0 /*38*/].f_4[1 /*16*/]), "", "", 126);
					}
				}
				else if (bParam8)
				{
					iVar8 = 61;
					if (bParam11)
					{
						if (func_149())
						{
							if (*iParam1 == 0)
							{
								sVar3 = "CELL_EMASH_SOD";
							}
							else if (*iParam1 == -1)
							{
								sVar3 = "CELL_EMASH_SODE";
							}
							else
							{
								sVar3 = "CELL_EMASH_SODF";
							}
						}
						else if (*iParam1 == 0)
						{
							sVar3 = "CELL_EMAIL_SOD";
						}
						else if (*iParam1 == -1)
						{
							sVar3 = "CELL_EMAIL_SODE";
						}
						else
						{
							sVar3 = "CELL_EMAIL_SODF";
						}
						if (unk_0xF6201B4DAF662A9D() || unk_0x4D982ADB1978442D())
						{
							sVar4 = sVar3;
							sVar3 = "CELL_EMAIL_DESC";
						}
					}
					else if (func_149())
					{
						if (*iParam1 == 0)
						{
							sVar3 = "FMMC_KEY_TIP8S";
						}
						else
						{
							sVar3 = "FMMC_KEY_TIP8FS";
						}
						if (unk_0xF6201B4DAF662A9D() || unk_0x4D982ADB1978442D())
						{
							sVar4 = sVar3;
							sVar3 = "FMMC_SMS4";
						}
						iVar8 = 21;
					}
					else
					{
						if (*iParam1 == 0)
						{
							sVar3 = "FMMC_KEY_TIP8";
						}
						else
						{
							sVar3 = "FMMC_KEY_TIP8F";
						}
						if (unk_0xF6201B4DAF662A9D())
						{
							sVar4 = sVar3;
							sVar3 = "FMMC_SMS4";
						}
					}
					if (unk_0xCA042B6957743895(sParam5))
					{
						unk_0x00DC833F2568DBF6(iVar7, sVar3, sVar4, "", "", "", "", iVar8);
					}
					else
					{
						unk_0x00DC833F2568DBF6(iVar7, sVar3, sVar4, sParam5, "", "", "", iVar8);
					}
				}
				else if (bParam12)
				{
					if (*iParam1 == 0)
					{
						sVar3 = "FMMC_KEY_TIP9";
					}
					else
					{
						sVar3 = "FMMC_KEY_TIP9F";
					}
					if (unk_0xF6201B4DAF662A9D())
					{
						sVar4 = sVar3;
						sVar3 = "FMMC_KEY_TIP9N";
					}
					if (unk_0xCA042B6957743895(sParam5))
					{
						unk_0x00DC833F2568DBF6(iVar7, sVar3, sVar4, "", "", "", "", 16);
					}
					else
					{
						unk_0x00DC833F2568DBF6(iVar7, sVar3, sVar4, sParam5, "", "", "", 16);
					}
				}
				else if (bParam14)
				{
					iVar8 = 16;
					if (*iParam1 == 0)
					{
						sVar3 = "FMMC_KEY_TIP12";
					}
					else
					{
						sVar3 = "FMMC_KEY_TIP12F";
					}
					if (unk_0xF6201B4DAF662A9D())
					{
						sVar4 = sVar3;
						sVar3 = "FMMC_KEY_TIP12N";
					}
					if (unk_0xCA042B6957743895(sParam5))
					{
						unk_0x00DC833F2568DBF6(0, sVar3, sVar4, "", "", "", "", iVar8);
					}
					else
					{
						unk_0x00DC833F2568DBF6(0, sVar3, sVar4, sParam5, "", "", "", iVar8);
					}
				}
				else
				{
					if (unk_0x2BDD44CC428A7EAE() == 0)
					{
						iVar8 = 501;
						if (bParam11)
						{
							if (func_149())
							{
								if (*iParam1 == 0)
								{
									sVar3 = "CELL_EMASH_BOD";
								}
								else if (*iParam1 == -1)
								{
									sVar3 = "CELL_EMASH_BODE";
								}
								else
								{
									sVar3 = "CELL_EMASH_BODF";
								}
							}
							else if (*iParam1 == 0)
							{
								sVar3 = "CELL_EMAIL_BOD";
							}
							else if (*iParam1 == -1)
							{
								sVar3 = "CELL_EMAIL_BODE";
							}
							else
							{
								sVar3 = "CELL_EMAIL_BODF";
							}
						}
						else if (*iParam1 == 0)
						{
							sVar3 = "FMMC_KEY_TIP3";
						}
						else if (*iParam1 == -1)
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
						if (func_149())
						{
							iVar8 = 150;
						}
						if (bParam11)
						{
							if (*iParam1 == 0)
							{
								sVar3 = "CELL_EMASH_BOD";
							}
							else if (*iParam1 == -1)
							{
								sVar3 = "CELL_EMASH_BODE";
							}
							else
							{
								sVar3 = "CELL_EMASH_BODF";
							}
						}
						else if (func_149())
						{
							if (*iParam1 == 0)
							{
								sVar3 = "FMMC_KEY_TIPSS";
							}
							else if (*iParam1 == -1)
							{
								sVar3 = "FMMC_KEY_TIPSSE";
							}
							else
							{
								sVar3 = "FMMC_KEY_TIPSSF";
							}
						}
						else if (*iParam1 == 0)
						{
							sVar3 = "FMMC_KEY_TIPS";
						}
						else if (*iParam1 == -1)
						{
							sVar3 = "FMMC_KEY_TIPSE";
						}
						else
						{
							sVar3 = "FMMC_KEY_TIPSF";
						}
					}
					if (unk_0xF6201B4DAF662A9D() || unk_0x4D982ADB1978442D())
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
						if (unk_0xF22B6C47C6EAB066(&(Global_1601761.f_54866[iVar11 /*16*/])))
						{
							StringCopy(&(Global_1601761.f_54866[iVar11 /*16*/]), "", 64);
						}
						iVar11++;
					}
					if (bParam11)
					{
						unk_0xCA78CFA0366592FE(iVar7, sVar3, sVar4, sParam5, sParam10, "", "", "", "", "", "", iVar8);
					}
					else
					{
						unk_0xCA78CFA0366592FE(iVar7, sVar3, sVar4, &(Global_1601761.f_54866[0 /*16*/]), &(Global_1601761.f_54866[1 /*16*/]), &(Global_1601761.f_54866[2 /*16*/]), &(Global_1601761.f_54866[3 /*16*/]), &(Global_1601761.f_54866[4 /*16*/]), &(Global_1601761.f_54866[5 /*16*/]), &(Global_1601761.f_54866[6 /*16*/]), &(Global_1601761.f_54866[7 /*16*/]), iVar8);
					}
				}
			}
			StringCopy(&Global_1672051, "", 64);
			*iParam1 = 0;
			*uParam2 = 1;
			break;
		
		case 1:
			*uParam0 = unk_0x0CF2B696BBF945AE();
			switch (*uParam0)
			{
				case 0:
					return 0;
				
				case 3:
					*uParam2 = 0;
					*uParam0 = 0;
					*iParam1 = 0;
					return 0;
				
				case 2:
					*iParam1 = 0;
					return 0;
				
				case 1:
					if (bParam4 || bParam13)
					{
						if (unk_0xCA042B6957743895(&Global_1672051))
						{
							StringCopy(&Global_1672051, unk_0x8362B09B91893647(), 64);
							if (unk_0xCA042B6957743895(&Global_1672051))
							{
								*iParam1 = 0;
								return 1;
							}
							iVar0 = unk_0xF030907CCBB8A9FD(unk_0x8362B09B91893647());
							iVar2 = 0;
							while (iVar2 <= (iVar0 - 1))
							{
								if (*uParam2 != 0)
								{
									if (!unk_0xCA042B6957743895(&Global_1672051))
									{
										if (unk_0x0C515FAB3FF9EA92(" ", unk_0x169BD9382084C8C0(&Global_1672051, 0, 1)))
										{
											iVar1 = unk_0xF030907CCBB8A9FD(&Global_1672051);
											StringCopy(&Global_1672051, unk_0x169BD9382084C8C0(&Global_1672051, 1, iVar1), 64);
										}
									}
									else
									{
										*iParam1 = 0;
										return 1;
									}
								}
								iVar2++;
							}
						}
					}
					if (unk_0x1753344C770358AE(*iParam1))
					{
						if (!unk_0x82E4A58BABC15AE7(*iParam1))
						{
							unk_0x10D373323E5B9C0D();
							iVar12 = unk_0x930DE22F07B1CCE3(*iParam1);
							switch (iVar12)
							{
								case 0:
									*iParam1 = 0;
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
									*iParam1 = 0;
									func_148(1);
									return 0;
									break;
							}
						}
						else if (bParam11)
						{
							if (unk_0x2C83A9DA6BFFC4F9(joaat("appinternet")) == 0)
							{
								unk_0x10D373323E5B9C0D();
								*iParam1 = 0;
								return 1;
							}
						}
						break;
					}
					if (bParam4)
					{
						unk_0x75632C5ECD7ED843(&Global_1672051, iParam1);
					}
					else
					{
						unk_0x75632C5ECD7ED843(unk_0x8362B09B91893647(), iParam1);
					}
					if (unk_0x4D982ADB1978442D())
					{
						if ((!unk_0x1077788E268557C2() || func_146() == 0) || func_145() == 1)
						{
							*iParam1 = 0;
							*uParam2 = 0;
							*uParam0 = 3;
							return 0;
						}
					}
					unk_0xABA17D7CE615ADBF("ERROR_CHECKPROFANITY");
					unk_0xBD12F8228410D9B4(1);
					if (!unk_0x1753344C770358AE(*iParam1))
					{
						*iParam1 = -1;
						*uParam2 = 0;
						*uParam0 = 0;
						unk_0x10D373323E5B9C0D();
						return 0;
					}
				
				default:
			}
			break;
	}
	return 0;
}

int func_145()
{
	if (!func_146())
	{
		return 1;
	}
	return 0;
}

int func_146()
{
	if (func_147())
	{
		return 0;
	}
	if (unk_0x9A4CF4F48AD77302() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_147()
{
	return Global_2435039;
}

void func_148(int iParam0)
{
	Global_2435039 = iParam0;
}

int func_149()
{
	if (((unk_0x2BDD44CC428A7EAE() == 7 || unk_0x2BDD44CC428A7EAE() == 8) || unk_0x2BDD44CC428A7EAE() == 9) || unk_0x2BDD44CC428A7EAE() == 10)
	{
		return 1;
	}
	return 0;
}

void func_150(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (func_151())
	{
		iVar0 = Global_2472520[iParam0 /*6*/][func_54(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x4B33C4243DE0C432(iVar0, bParam1, bParam3);
		}
	}
}

int func_151()
{
	return 1;
	return 0;
}

void func_152(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x10FAB35428CCC9D7() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x7A5487FE9FAA6B48();
		}
		else
		{
			*uParam0 = unk_0x89023FBBF9200E9F();
		}
	}
	else
	{
		*uParam0 = unk_0x9CD27B0045628463();
	}
	uParam0->f_1 = 1;
}

int func_153(var uParam0, char* sParam1)
{
	if (Global_2450665.f_1)
	{
		if (unk_0x855BC38818F6F684())
		{
			unk_0xABD5E88B8A2D3DB2(&(uParam0->f_2963));
			Global_2450665.f_20 = { uParam0->f_2963 };
			StringCopy(&(Global_2450665.f_4), sParam1, 64);
			return 1;
		}
	}
	return 0;
}

void func_154(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x10FAB35428CCC9D7() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x7A5487FE9FAA6B48();
			}
			else
			{
				*uParam0 = unk_0x89023FBBF9200E9F();
			}
		}
		else
		{
			*uParam0 = unk_0x9CD27B0045628463();
		}
		uParam0->f_1 = 1;
	}
}

void func_155()
{
	if (Global_14393.f_1 > 3)
	{
		Global_14393.f_1 = 9;
		Global_15705 = 1;
		if (Global_68067)
		{
			if (!unk_0x48AF36444B965238())
			{
				func_104(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				unk_0x933D6A9EEC1BACD0(&(Global_2446208.f_1616), 15);
			}
		}
	}
}

void func_156()
{
	unk_0xF6E48914C7A8694E(Global_14374, "SET_DATA_SLOT");
	unk_0xC3D0841A0CC546A6(4);
	unk_0xC3D0841A0CC546A6(0);
	unk_0xC3D0841A0CC546A6(2);
	unk_0x80338406F3475E55("CELL_CONDFON");
	unk_0x6C188BE134E074AA(&Global_15707);
	unk_0x362E2D3FE93A9959();
	func_34("CELL_300");
	func_34("CELL_219");
	func_34("CELL_219");
	unk_0xC6796A8FFA375E53();
	Global_2450665.f_37 = 1;
	unk_0xE80492A9AC099A93(&Global_2263, 27);
	func_56();
}

bool func_157(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x6F79B93B0A8E4133(&uParam0, 13);
}

void func_158(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB87A37EEB7FAA67D(sParam0);
	unk_0x9D77056A530643F6(iParam1, true);
}

void func_159(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0x8509B634FBE7DA11(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x39BBF623FC803EAC(iParam2);
	}
	unk_0x6C188BE134E074AA(sParam1);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam3);
}

int func_160(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (func_172(iParam0))
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
	if (func_172(unk_0x4F8644AF03D0E0D6()) || (func_171() && func_170()))
	{
		iVar0 = func_169();
		if (unk_0x7239B21A38F536BA(iVar0))
		{
			if (unk_0x12534C348C6CB68B(iVar0))
			{
				if (unk_0x6C0E2E0125610278(iVar0) != -1)
				{
					if (func_122(unk_0x6C0E2E0125610278(iVar0), 0, 1))
					{
						return func_167(iParam0, unk_0x6C0E2E0125610278(iVar0), iParam1, bParam2, bParam3);
					}
				}
			}
			else
			{
				return func_161(0, -1, 0);
			}
		}
	}
	return func_167(iParam0, unk_0x4F8644AF03D0E0D6(), iParam1, bParam2, bParam3);
}

int func_161(bool bParam0, int iParam1, bool bParam2)
{
	return func_162(unk_0x4F8644AF03D0E0D6(), bParam0, iParam1, bParam2);
}

int func_162(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0x37039302F4E0A008(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_166(iVar0, iParam2))
			{
				if (iVar0 == iParam2)
				{
					return func_165(1);
				}
				else
				{
					return func_165(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else
			{
				return func_163(iVar0, iParam2);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_165(1);
	}
	return func_165(0);
}

int func_163(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_164(iParam0, iParam1);
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

int func_164(int iParam0, int iParam1)
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
			if (!func_166(iParam0, iVar0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_165(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_166(int iParam0, int iParam1)
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
					return unk_0xA921AA820C25702F(Global_1601761.f_32, 0);
				
				case 1:
					return unk_0xA921AA820C25702F(Global_1601761.f_32, 1);
				
				case 2:
					return unk_0xA921AA820C25702F(Global_1601761.f_32, 2);
				
				case 3:
					return unk_0xA921AA820C25702F(Global_1601761.f_32, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xA921AA820C25702F(Global_1601761.f_32, 4);
				
				case 1:
					return unk_0xA921AA820C25702F(Global_1601761.f_32, 5);
				
				case 2:
					return unk_0xA921AA820C25702F(Global_1601761.f_32, 6);
				
				case 3:
					return unk_0xA921AA820C25702F(Global_1601761.f_32, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xA921AA820C25702F(Global_1601761.f_32, 8);
				
				case 1:
					return unk_0xA921AA820C25702F(Global_1601761.f_32, 9);
				
				case 2:
					return unk_0xA921AA820C25702F(Global_1601761.f_32, 10);
				
				case 3:
					return unk_0xA921AA820C25702F(Global_1601761.f_32, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xA921AA820C25702F(Global_1601761.f_32, 12);
				
				case 1:
					return unk_0xA921AA820C25702F(Global_1601761.f_32, 13);
				
				case 2:
					return unk_0xA921AA820C25702F(Global_1601761.f_32, 14);
				
				case 3:
					return unk_0xA921AA820C25702F(Global_1601761.f_32, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_167(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x37039302F4E0A008(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (iVar0 != -1)
	{
		if (func_168(iParam1, iParam0, iVar0, 0))
		{
			return func_165(1);
		}
		else
		{
			return func_162(iParam1, 1, iVar0, bParam4);
		}
	}
	else if (Global_1573684 || Global_1573675)
	{
		if (iParam0 == iParam1 || (Global_1573684 == 1 && Global_1573694 == 0))
		{
			return func_165(1);
		}
		else
		{
			return func_162(iParam1, 1, iVar0, bParam4);
		}
	}
	if (Global_1573679 && Global_1573268.f_11 == iParam0)
	{
		return 28;
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

bool func_168(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x37039302F4E0A008(iParam0) == -1 && unk_0x37039302F4E0A008(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x37039302F4E0A008(iParam0) == unk_0x37039302F4E0A008(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x37039302F4E0A008(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x37039302F4E0A008(iParam0) == iParam2;
	}
	return unk_0x37039302F4E0A008(iParam0) == iParam2;
}

var func_169()
{
	return Global_2359301.f_2;
}

bool func_170()
{
	return unk_0xA921AA820C25702F(Global_2359301, 4);
}

bool func_171()
{
	return unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_31.f_18, 14);
}

int func_172(int iParam0)
{
	if (func_137(iParam0, 0))
	{
		return 1;
	}
	if (func_173())
	{
		if (iParam0 == unk_0x4F8644AF03D0E0D6())
		{
			return 1;
		}
	}
	if (unk_0xA921AA820C25702F(Global_2413868[iParam0 /*253*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_173()
{
	return unk_0xA921AA820C25702F(Global_2359301, 3);
}

int func_174(bool bParam0, bool bParam1)
{
	if (unk_0x4D79439A6B55AC67())
	{
		return 0;
	}
	if (func_185())
	{
		return 0;
	}
	if (!unk_0x5A859503B0C08678())
	{
		return 0;
	}
	if (func_184())
	{
		return 0;
	}
	if (func_183())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_180(unk_0x4F8644AF03D0E0D6(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_179(unk_0x4F8644AF03D0E0D6()))
		{
			return 0;
		}
	}
	if (func_178())
	{
		return 0;
	}
	if (unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		return 0;
	}
	if (unk_0xB0034A223497FFCB())
	{
		return 0;
	}
	if (!unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6()))
	{
		return 0;
	}
	if (Global_1573534)
	{
		return 0;
	}
	if (func_177())
	{
		return 0;
	}
	if (func_176())
	{
		return 0;
	}
	if (func_175())
	{
		return 0;
	}
	if (Global_66880)
	{
		return 0;
	}
	if (Global_2452826)
	{
		return 0;
	}
	return 1;
}

bool func_175()
{
	return Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_165 != 0;
}

bool func_176()
{
	return Global_2427935.f_563;
}

bool func_177()
{
	return Global_2427935.f_712;
}

bool func_178()
{
	return Global_2421967.f_2305.f_585;
}

int func_179(int iParam0)
{
	if (Global_2413868[iParam0 /*253*/].f_205 == 0)
	{
		return 0;
	}
	return 1;
}

int func_180(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_181(iParam0))
		{
			return 1;
		}
	}
	if (Global_1582048[iParam0 /*324*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_181(int iParam0)
{
	return func_182(iParam0);
}

bool func_182(int iParam0)
{
	return unk_0xA921AA820C25702F(Global_1582048[iParam0 /*324*/].f_13.f_1, 0);
}

bool func_183()
{
	return unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_31.f_18, 0);
}

bool func_184()
{
	return unk_0x9CD27B0045628463() <= Global_17236.f_5130 + 100;
}

int func_185()
{
	if (Global_15692 != 0 || unk_0x16754C556D2EDE3D())
	{
		return 1;
	}
	return 0;
}

int func_186(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_154(uParam0, bParam2, 0);
	if (unk_0x10FAB35428CCC9D7() && !bParam2)
	{
		if (unk_0xF0D31AD191A74F87(unk_0xA2C6FC031D46FFF0(unk_0x7A5487FE9FAA6B48(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xF0D31AD191A74F87(unk_0xA2C6FC031D46FFF0(unk_0x9CD27B0045628463(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_187(var uParam0)
{
	return uParam0->f_1;
}

void func_188()
{
	Global_2450665.f_1 = 0;
	Global_2450665 = 0;
	Global_2450665.f_2 = 0;
	Global_2450665.f_33 = -1;
	Global_2450665.f_34 = -1;
	StringCopy(&(Global_2450665.f_4), "", 64);
	StringCopy(&(Global_2450665.f_39[0 /*16*/]), "", 64);
	Global_2450665.f_38 = 0;
	Global_2450665.f_56 = 0;
	Global_2450665.f_57 = 0;
	Global_2450665.f_58 = -2;
	Global_2450665.f_3 = 0;
	func_189(&(Global_2450665.f_20));
}

void func_189(var uParam0)
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

void func_190()
{
	Global_2450665.f_2 = 1;
	Global_2450665.f_38 = 1;
	if (unk_0x1077788E268557C2())
	{
		if (unk_0x855BC38818F6F684())
		{
			while (unk_0xEF0912DDF7C4CB4B())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0x6793E42BE02B575D();
			Global_2450665 = 0;
			Global_2450665.f_2 = 0;
		}
		else if (func_157(Global_2450665.f_20))
		{
			if (unk_0x1A24A179F9B31654(&(Global_2450665.f_20)))
			{
				if (!unk_0x87EB7A3FFCB314DB(&(Global_2450665.f_20)))
				{
					func_188();
				}
			}
		}
		else
		{
			func_188();
		}
	}
	else
	{
		func_188();
	}
	if (Global_2450665.f_37)
	{
		func_30(0);
	}
	Global_2450665.f_37 = 0;
	Global_2450665.f_3 = 0;
}

void func_191(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
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
				func_192(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_192(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_192(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_198())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0xB24F0944DA203D9E(func_55()) || unk_0x810E8431C0614BF9())
		{
			Global_2539469 = 1;
			return 0;
		}
		if (Global_2435610)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2539470 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2539058[iVar1 /*68*/].f_2 == 0)
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
	if (bVar0 || unk_0x3C5FD37B5499582E(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0x39BE7CEA8D9CC8E6(iVar3))
		{
			*uParam0 = func_197(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2539058[*uParam0 /*68*/].f_62 = 1;
				}
			}
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2539468 = 1;
			Global_2539471 = iParam4;
			Global_2539473 = iParam3;
			Global_2539474 = 1;
			Global_2539472 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2539471 = iParam4;
			Global_2539473 = iParam3;
			Global_2539474 = 1;
			Global_2539472 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_196(1, iParam4);
			Global_2539468 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_193(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_193(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x933D6A9EEC1BACD0(&(Global_2413868[unk_0x4F8644AF03D0E0D6() /*253*/].f_121.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_194(iParam0);
	}
}

void func_194(int iParam0)
{
	bool bVar0;
	struct<68> Var1;
	
	bVar0 = false;
	if (!func_198())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_195(iParam0))
		{
			if (!bVar0)
			{
				unk_0xA65568121DF2EA26();
			}
		}
		else if (!bVar0)
		{
			unk_0xE2A99A9B524BEFFF(Global_2539058[iParam0 /*68*/]);
		}
		Var1 = 2147483647;
		Global_2539058[iParam0 /*68*/] = { Var1 };
	}
}

int func_195(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2539058[iParam0 /*68*/].f_5 == 1;
	}
	return 0;
}

void func_196(int iParam0, int iParam1)
{
	Global_2436787 = iParam1;
	Global_2436786 = iParam0;
}

int func_197(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2539058[iVar0 /*68*/].f_2 == 0)
		{
			if (!func_198())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2539058[iVar0 /*68*/].f_2 = 1;
			Global_2539058[iVar0 /*68*/].f_1 = iParam5;
			Global_2539058[iVar0 /*68*/].f_3 = uParam1;
			Global_2539058[iVar0 /*68*/].f_4 = iParam2;
			Global_2539058[iVar0 /*68*/].f_7 = iParam3;
			Global_2539058[iVar0 /*68*/].f_5 = 0;
			Global_2539058[iVar0 /*68*/] = iParam0;
			Global_2539058[iVar0 /*68*/].f_6 = iParam4;
			Global_2539058[iVar0 /*68*/].f_65 = uParam8;
			Global_2539058[iVar0 /*68*/].f_64 = iParam7;
			if (bParam6)
			{
				Global_2539058[iVar0 /*68*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_198()
{
	if (unk_0x48AF36444B965238())
	{
		return 1;
	}
	return 0;
}

int func_199(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		iVar0 = unk_0x76EF28DA05EA395A();
	}
	iVar0 = (iVar0 + unk_0xA40F9C2623F6A8B5(-1));
	return iVar0;
}

void func_200(bool bParam0)
{
	if (bParam0)
	{
		unk_0x933D6A9EEC1BACD0(&Global_2264, 20);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_2264, 20);
	}
}

void func_201(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_202(char* sParam0)
{
	Global_1578 = 132;
	StringCopy(&Global_15707, sParam0, 64);
	if (Global_14393.f_1 > 3)
	{
		Global_14393.f_1 = 10;
		func_62();
	}
	unk_0xF6E48914C7A8694E(Global_14374, "SET_DATA_SLOT");
	unk_0xC3D0841A0CC546A6(4);
	unk_0xC3D0841A0CC546A6(0);
	unk_0xC3D0841A0CC546A6(2);
	unk_0x80338406F3475E55("CELL_CONDFON");
	unk_0x6C188BE134E074AA(&Global_15707);
	unk_0x362E2D3FE93A9959();
	func_34("CELL_300");
	func_34("CELL_211");
	func_34("CELL_211");
	unk_0xC6796A8FFA375E53();
	unk_0x933D6A9EEC1BACD0(&Global_2263, 20);
	func_56();
	unk_0xE80492A9AC099A93(&Global_2263, 20);
}

void func_203()
{
	unk_0x9C1556705F864230();
	Global_2450665 = 1;
	Global_2450665.f_2 = 0;
	Global_2450665.f_33 = -1;
	Global_2450665.f_34 = -1;
	Global_2450665.f_38 = 0;
}

void func_204()
{
	unk_0xA3B0C41BA5CC0BB5(iLocal_103);
	unk_0x353FC880830B88FA(iLocal_103);
	Local_330.f_2978 = 0;
	unk_0xE80492A9AC099A93(&Global_2263, 9);
	unk_0xE80492A9AC099A93(&Global_2263, 29);
	unk_0xE80492A9AC099A93(&Global_2264, 20);
	unk_0xE80492A9AC099A93(&Global_2264, 0);
	unk_0xE80492A9AC099A93(&Global_2264, 18);
	Global_97173.f_29699[12 /*29*/].f_1 = uLocal_302;
	Global_97173.f_29699[2 /*29*/].f_1 = uLocal_303;
	Global_97173.f_29699[0 /*29*/].f_1 = uLocal_304;
	if (Local_330.f_2999 == 1)
	{
		if (unk_0x1077788E268557C2())
		{
			if (Global_2450665.f_33 == -1)
			{
				func_190();
			}
		}
	}
	unk_0x1090044AD1DA76FA();
}

void func_205()
{
	if (!Global_68067)
	{
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			if (unk_0xA921AA820C25702F(Global_2263, 11))
			{
				if (!Global_14336)
				{
					unk_0xBD2A8EC3AF4DE7DB(unk_0xD80958FC74E988A6(), 0, 1);
				}
				if (Global_68067)
				{
					unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 244, true);
					unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 243, true);
					unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 242, true);
				}
				unk_0xE80492A9AC099A93(&Global_2263, 11);
			}
		}
	}
}

void func_206()
{
	int iVar0[148];
	int iVar149;
	int iVar150;
	int iVar151;
	
	func_107(Global_14374, "SET_DATA_SLOT_EMPTY", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4EDE34FBADD967A6(0);
	iLocal_93 = 0;
	iLocal_132 = 0;
	iLocal_115 = 0;
	func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), 0f, -1f, -1f, "CELL_232", "CELL_233", "CELL_393", 0, 0);
	iVar149 = 0;
	while (iVar149 < 147)
	{
		iVar150 = 0;
		iVar151 = 147;
		Global_97173.f_29699[iVar151 /*29*/].f_1 = 5000;
		func_16();
		while (iVar150 < 147)
		{
			if (unk_0xA921AA820C25702F(Global_2264, 0))
			{
				if ((iVar150 == 2 || iVar150 == 0) || iVar150 == 12)
				{
					Global_97173.f_29699[12 /*29*/].f_1 = 3;
					Global_97173.f_29699[2 /*29*/].f_1 = 1;
					Global_97173.f_29699[0 /*29*/].f_1 = 2;
					bLocal_90 = true;
				}
				else
				{
					bLocal_90 = false;
				}
			}
			else if (Global_97173.f_29699[iVar150 /*29*/].f_12[Global_14393] == 1)
			{
				bLocal_90 = true;
			}
			else
			{
				bLocal_90 = false;
			}
			if (bLocal_90)
			{
				if (iVar150 != Global_14393)
				{
					if (iVar0[iVar150] == 0)
					{
						if (Global_97173.f_29699[iVar150 /*29*/].f_19[Global_14393] == 1 || func_41(iVar150, Global_14393))
						{
							fLocal_91 = (unk_0xBBDA792448DB5A89(Global_97173.f_29699[iVar150 /*29*/].f_1) / 100f);
						}
						else
						{
							fLocal_91 = unk_0xBBDA792448DB5A89(Global_97173.f_29699[iVar150 /*29*/].f_1);
						}
						if (Global_97173.f_29699[iVar151 /*29*/].f_19[Global_14393] == 1 || func_41(iVar151, Global_14393))
						{
							fLocal_92 = (unk_0xBBDA792448DB5A89(Global_97173.f_29699[iVar151 /*29*/].f_1) / 100f);
						}
						else
						{
							fLocal_92 = unk_0xBBDA792448DB5A89(Global_97173.f_29699[iVar151 /*29*/].f_1);
						}
						if (fLocal_91 < fLocal_92)
						{
							iVar151 = iVar150;
							if (unk_0xA921AA820C25702F(Global_2264, 0))
							{
								if (iVar151 == 2)
								{
									func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 0f, -1f, -1f, "CELL_7001", &(Global_97173.f_29699[iVar151 /*29*/].f_3), &(Global_97173.f_29699[iVar151 /*29*/].f_7), 0, 0);
								}
								if (iVar151 == 0)
								{
									func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 0f, -1f, -1f, "CELL_7002", &(Global_97173.f_29699[iVar151 /*29*/].f_3), &(Global_97173.f_29699[iVar151 /*29*/].f_7), 0, 0);
								}
								if (iVar151 == 12)
								{
									func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 0f, -1f, -1f, "CELL_7003", &(Global_97173.f_29699[iVar151 /*29*/].f_3), "CELL_E_311", 0, 0);
								}
							}
						}
					}
				}
			}
			iVar150++;
		}
		Global_14399[iVar149] = iVar151;
		iVar0[iVar151] = 1;
		if (!unk_0xA921AA820C25702F(Global_2264, 0))
		{
			if (Global_97173.f_29699[iVar151 /*29*/].f_12[Global_14393] == 1)
			{
				if (iVar150 != Global_14393)
				{
					if (Global_97173.f_29699[iVar151 /*29*/].f_24[Global_14393] == 0)
					{
						if (Global_97173.f_29699[iVar151 /*29*/].f_19[Global_14393] == 1 || func_41(iVar151, Global_14393))
						{
							func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 1f, -1f, -1f, &(Global_97[iVar151 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
						else
						{
							func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 0f, -1f, -1f, &(Global_97[iVar151 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
					}
					else if (Global_97173.f_29699[iVar151 /*29*/].f_19[Global_14393] == 1 || func_41(iVar151, Global_14393))
					{
						func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 1f, -1f, -1f, &(Global_97173.f_29699[iVar151 /*29*/].f_3), &(Global_97173.f_29699[iVar151 /*29*/].f_3), &(Global_97173.f_29699[iVar151 /*29*/].f_7), 0, 0);
					}
					else
					{
						func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 0f, -1f, -1f, &(Global_97173.f_29699[iVar151 /*29*/].f_3), &(Global_97173.f_29699[iVar151 /*29*/].f_3), &(Global_97173.f_29699[iVar151 /*29*/].f_7), 0, 0);
					}
				}
			}
		}
		if (Global_97173.f_29699[iVar149 /*29*/].f_12[Global_14393] == 1)
		{
			if (iVar149 != Global_14393)
			{
				iLocal_93++;
			}
		}
		iVar149++;
	}
	if (!unk_0xA921AA820C25702F(Global_2264, 0))
	{
		if (unk_0x1077788E268557C2())
		{
			if (Global_14336 == 0)
			{
				func_208();
			}
		}
	}
	func_207();
}

void func_207()
{
	if (!Global_14393.f_1 == 10 && !Global_14393.f_1 == 9)
	{
		if (unk_0xA921AA820C25702F(Global_2263, 9))
		{
			unk_0x4EDE34FBADD967A6(750);
		}
		if (Global_14393.f_1 > 6)
		{
			func_107(Global_14374, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
			if (unk_0xA921AA820C25702F(Global_2264, 0))
			{
				func_105(Global_14374, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
			}
			else
			{
				func_105(Global_14374, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
			}
			Global_2266 = 99;
			if (unk_0xA921AA820C25702F(Global_2263, 9))
			{
				if (Global_14381)
				{
					func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
					func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
					func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_104(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xE80492A9AC099A93(&Global_2263, 17);
			}
			else if (unk_0xA921AA820C25702F(Global_2264, 0))
			{
				if (Global_14381)
				{
					func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
					func_104(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
					func_104(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_104(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14381)
			{
				if (iLocal_93 > 0)
				{
					func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				}
				else
				{
					func_104(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				}
				if (Global_14336 == 0)
				{
					func_104(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, "CELL_207", 0, 0, 0, 0);
					unk_0x933D6A9EEC1BACD0(&Global_2263, 17);
				}
				else
				{
					func_104(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0x933D6A9EEC1BACD0(&Global_2263, 17);
				}
				func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				if (iLocal_93 > 0)
				{
					func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				else
				{
					func_104(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_104(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x933D6A9EEC1BACD0(&Global_2263, 17);
				func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
	Global_97173.f_29699[12 /*29*/].f_1 = uLocal_302;
	Global_97173.f_29699[2 /*29*/].f_1 = uLocal_303;
	Global_97173.f_29699[0 /*29*/].f_1 = uLocal_304;
}

void func_208()
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
	func_215(&Local_330);
	iVar16 = 0;
	if (Global_68067)
	{
		if (func_211() == 0)
		{
			iVar16 = 1;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar0 = unk_0x41BD2A6B006AF756(iVar2);
		if (func_122(iVar0, 0, 1))
		{
			if (iVar16 == 0)
			{
				if (!iVar0 == unk_0x4F8644AF03D0E0D6())
				{
					Local_330[iVar1] = iVar0;
					func_210(unk_0x6D0DE6A7B5DA71F8(iVar0));
					iVar1++;
				}
			}
		}
		iVar2++;
	}
	Local_330.f_33 = iVar1;
	iVar2 = 0;
	iVar1 = 0;
	if (func_124(0))
	{
		iVar17 = unk_0x203F1CFD823B27A4();
		if (iVar17 > 100)
		{
			iVar17 = 100;
		}
		iVar2 = 0;
		while (iVar2 <= (iVar17 - 1))
		{
			if (unk_0x425A44533437B64D(unk_0xE11EBBB2A783FE8B(iVar2)))
			{
				if (unk_0x2EA9A3BEDF3F17B8(unk_0xE11EBBB2A783FE8B(iVar2)))
				{
					Var3 = { func_209(iVar2) };
					if (!unk_0x0F10B05DDF8D16E9(&Var3))
					{
						if (iVar16 == 0)
						{
							if (iVar1 < 100)
							{
								Local_330.f_34[iVar1 /*29*/] = { Var3 };
								if (unk_0x4D982ADB1978442D())
								{
									StringCopy(&(Local_330.f_34[iVar1 /*29*/].f_13), unk_0x4164F227D052E293(iVar2), 64);
								}
								else
								{
									StringCopy(&(Local_330.f_34[iVar1 /*29*/].f_13), unk_0xE11EBBB2A783FE8B(iVar2), 64);
								}
								func_210(&(Local_330.f_34[iVar1 /*29*/].f_13));
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

struct<13> func_209(int iParam0)
{
	struct<13> Var0;
	
	unk_0xD45CB817D7E177D2(iParam0, &Var0, 13);
	return Var0;
}

void func_210(char* sParam0)
{
	unk_0xF6E48914C7A8694E(Global_14374, "SET_DATA_SLOT");
	unk_0xD69736AAE04DB51A(unk_0xBBDA792448DB5A89(2));
	unk_0xD69736AAE04DB51A(unk_0xBBDA792448DB5A89(iLocal_94));
	unk_0xD69736AAE04DB51A(0f);
	unk_0x80338406F3475E55("STRING");
	unk_0x6C188BE134E074AA(sParam0);
	unk_0x362E2D3FE93A9959();
	func_34("CELL_MP_999");
	func_34("CELL_MP_999");
	unk_0xC6796A8FFA375E53();
	iLocal_94++;
	iLocal_93++;
}

int func_211()
{
	if (Global_1312447)
	{
		return 1;
	}
	if (func_214())
	{
		return 1;
	}
	if (func_213())
	{
		return 1;
	}
	return func_212(120, -1);
}

int func_212(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2472520[iParam0 /*6*/][func_54(iParam1)];
	if (unk_0x11B5E6D2AE73F48E(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_213()
{
	return Global_1315886;
}

bool func_214()
{
	return Global_1315888;
}

void func_215(var uParam0)
{
	int iVar0;
	struct<13> Var1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		(*uParam0)[iVar0] = func_216();
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
	func_201(&(uParam0->f_2979));
	uParam0->f_2999 = 0;
	StringCopy(&(uParam0->f_2983), "", 64);
}

int func_216()
{
	return -1;
}

void func_217()
{
	int iVar0[148];
	int iVar149;
	int iVar150;
	int iVar151;
	
	func_107(Global_14374, "SET_DATA_SLOT_EMPTY", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4EDE34FBADD967A6(0);
	func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), 0f, -1f, -1f, "CELL_232", "CELL_233", "CELL_393", 0, 0);
	iLocal_93 = 0;
	if (!unk_0xA921AA820C25702F(Global_2264, 0))
	{
		if (unk_0x1077788E268557C2())
		{
			if (Global_14336 == 0)
			{
				func_218();
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
		Global_97173.f_29699[iVar151 /*29*/].f_1 = 5000;
		func_16();
		while (iVar150 < 147)
		{
			if (unk_0xA921AA820C25702F(Global_2264, 0))
			{
				if ((iVar150 == 2 || iVar150 == 0) || iVar150 == 12)
				{
					Global_97173.f_29699[12 /*29*/].f_1 = 3;
					Global_97173.f_29699[2 /*29*/].f_1 = 1;
					Global_97173.f_29699[0 /*29*/].f_1 = 2;
					bLocal_90 = true;
				}
				else
				{
					bLocal_90 = false;
				}
			}
			else if (Global_97173.f_29699[iVar150 /*29*/].f_12[Global_14393] == 1)
			{
				bLocal_90 = true;
			}
			else
			{
				bLocal_90 = false;
			}
			if (bLocal_90)
			{
				if (iVar150 != Global_14393)
				{
					if (iVar0[iVar150] == 0)
					{
						if (Global_97173.f_29699[iVar150 /*29*/].f_19[Global_14393] == 1 || func_41(iVar150, Global_14393))
						{
							fLocal_91 = (unk_0xBBDA792448DB5A89(Global_97173.f_29699[iVar150 /*29*/].f_1) / 100f);
						}
						else
						{
							fLocal_91 = unk_0xBBDA792448DB5A89(Global_97173.f_29699[iVar150 /*29*/].f_1);
						}
						if (Global_97173.f_29699[iVar151 /*29*/].f_19[Global_14393] == 1 || func_41(iVar151, Global_14393))
						{
							fLocal_92 = (unk_0xBBDA792448DB5A89(Global_97173.f_29699[iVar151 /*29*/].f_1) / 100f);
						}
						else
						{
							fLocal_92 = unk_0xBBDA792448DB5A89(Global_97173.f_29699[iVar151 /*29*/].f_1);
						}
						if (fLocal_91 < fLocal_92)
						{
							iVar151 = iVar150;
							if (unk_0xA921AA820C25702F(Global_2264, 0))
							{
								if (iVar151 == 2)
								{
									func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 0f, -1f, -1f, "CELL_7001", &(Global_97173.f_29699[iVar151 /*29*/].f_3), &(Global_97173.f_29699[iVar151 /*29*/].f_7), 0, 0);
								}
								if (iVar151 == 0)
								{
									func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 0f, -1f, -1f, "CELL_7002", &(Global_97173.f_29699[iVar151 /*29*/].f_3), &(Global_97173.f_29699[iVar151 /*29*/].f_7), 0, 0);
								}
								if (iVar151 == 12)
								{
									func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 0f, -1f, -1f, "CELL_7003", &(Global_97173.f_29699[iVar151 /*29*/].f_3), "CELL_E_311", 0, 0);
								}
							}
						}
					}
				}
			}
			iVar150++;
		}
		Global_14399[iVar149] = iVar151;
		iVar0[iVar151] = 1;
		if (!unk_0xA921AA820C25702F(Global_2264, 0))
		{
			if (Global_97173.f_29699[iVar151 /*29*/].f_12[Global_14393] == 1)
			{
				if (iVar150 != Global_14393)
				{
					if (Global_97173.f_29699[iVar151 /*29*/].f_24[Global_14393] == 0)
					{
						if (Global_97173.f_29699[iVar151 /*29*/].f_19[Global_14393] == 1 || func_41(iVar151, Global_14393))
						{
							func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 1f, -1f, -1f, &(Global_97[iVar151 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
						else
						{
							func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 0f, -1f, -1f, &(Global_97[iVar151 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
					}
					else if (Global_97173.f_29699[iVar151 /*29*/].f_19[Global_14393] == 1 || func_41(iVar151, Global_14393))
					{
						func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 1f, -1f, -1f, &(Global_97173.f_29699[iVar151 /*29*/].f_3), &(Global_97173.f_29699[iVar151 /*29*/].f_3), &(Global_97173.f_29699[iVar151 /*29*/].f_7), 0, 0);
					}
					else
					{
						func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar149), 0f, -1f, -1f, &(Global_97173.f_29699[iVar151 /*29*/].f_3), &(Global_97173.f_29699[iVar151 /*29*/].f_3), &(Global_97173.f_29699[iVar151 /*29*/].f_7), 0, 0);
					}
				}
			}
		}
		if (Global_97173.f_29699[iVar149 /*29*/].f_12[Global_14393] == 1)
		{
			if (iVar149 != Global_14393)
			{
				iLocal_93++;
			}
		}
		iVar149++;
	}
	func_207();
}

void func_218()
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
	func_215(&Local_330);
	iVar16 = 0;
	if (Global_68067)
	{
		if (func_211() == 0)
		{
			iVar16 = 1;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar0 = unk_0x41BD2A6B006AF756(iVar2);
		if (func_122(iVar0, 0, 1))
		{
			if (iVar16 == 0)
			{
				if (!iVar0 == unk_0x4F8644AF03D0E0D6())
				{
					Local_330[iVar1] = iVar0;
					func_219(unk_0x6D0DE6A7B5DA71F8(iVar0));
					iVar1++;
				}
			}
		}
		iVar2++;
	}
	Local_330.f_33 = iVar1;
	iVar1 = 0;
	iVar2 = 0;
	if (func_124(0))
	{
		iVar17 = unk_0x203F1CFD823B27A4();
		if (iVar17 > 100)
		{
			iVar17 = 100;
		}
		iVar2 = 0;
		while (iVar2 <= (iVar17 - 1))
		{
			if (unk_0x425A44533437B64D(unk_0xE11EBBB2A783FE8B(iVar2)))
			{
				if (unk_0x2EA9A3BEDF3F17B8(unk_0xE11EBBB2A783FE8B(iVar2)))
				{
					Var3 = { func_209(iVar2) };
					if (!unk_0x0F10B05DDF8D16E9(&Var3))
					{
						if (iVar16 == 0)
						{
							if (iVar1 < 100)
							{
								Local_330.f_34[iVar1 /*29*/] = { Var3 };
								if (unk_0x4D982ADB1978442D())
								{
									StringCopy(&(Local_330.f_34[iVar1 /*29*/].f_13), unk_0x4164F227D052E293(iVar2), 64);
								}
								else
								{
									StringCopy(&(Local_330.f_34[iVar1 /*29*/].f_13), unk_0xE11EBBB2A783FE8B(iVar2), 64);
								}
								func_219(&(Local_330.f_34[iVar1 /*29*/].f_13));
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

void func_219(char* sParam0)
{
	unk_0xF6E48914C7A8694E(Global_14374, "SET_DATA_SLOT");
	unk_0xD69736AAE04DB51A(unk_0xBBDA792448DB5A89(2));
	unk_0xD69736AAE04DB51A(unk_0xBBDA792448DB5A89(iLocal_94));
	unk_0xD69736AAE04DB51A(0f);
	unk_0x80338406F3475E55("STRING");
	unk_0x6C188BE134E074AA(sParam0);
	unk_0x362E2D3FE93A9959();
	func_34("CELL_MP_999");
	func_34("CELL_MP_999");
	unk_0xC6796A8FFA375E53();
	iLocal_94++;
	iLocal_93++;
}

