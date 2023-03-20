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
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
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
	float fLocal_55 = 0f;
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
	struct<14> Local_86 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_100 = 0;
	bool bLocal_101 = 0;
	bool bLocal_102 = 0;
	int iLocal_103 = 0;
	bool bLocal_104 = 0;
	bool bLocal_105 = 0;
	bool bLocal_106 = 0;
	bool bLocal_107 = 0;
	bool bLocal_108 = 0;
	bool bLocal_109 = 0;
	bool bLocal_110 = 0;
	bool bLocal_111 = 0;
	bool bLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	bool bLocal_118 = 0;
	bool bLocal_119 = 0;
	int iLocal_120 = 0;
	bool bLocal_121 = 0;
	bool bLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 16;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
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
	int iLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	int iLocal_301[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_312 = 0;
	bool bLocal_313 = 0;
	bool bLocal_314 = 0;
	bool bLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	float fLocal_322 = 0f;
	float fLocal_323 = 0f;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	int iLocal_341 = 0;
	var uLocal_342 = 0;
	int iLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349[4] = { 0, 0, 0, 0 };
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<12> Local_371 = { 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0 } ;
	struct<70> Local_383 = { 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, -15, -1, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	struct<4> Local_459[32];
	int iLocal_588 = 0;
	int iLocal_589 = 0;
	int iLocal_590 = 0;
	char* sLocal_591 = NULL;
	int iLocal_592 = 0;
	int iLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	struct<20> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
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
	sLocal_17 = "NULL";
	fLocal_22 = 80f;
	fLocal_23 = 140f;
	fLocal_24 = 180f;
	iLocal_27 = 3;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_55 = ((0.05f + 0.275f) - 0.01f);
	iLocal_117 = 1;
	bLocal_119 = true;
	bLocal_121 = true;
	iLocal_126 = -1;
	bLocal_314 = true;
	bLocal_315 = true;
	iLocal_318 = -1;
	iLocal_319 = -1;
	iLocal_343 = -1;
	iLocal_346 = -1;
	if (!func_452(ScriptParam_0))
	{
		func_448();
	}
	iLocal_358[0] = unk_0xC557A51F52598C27(unk_0x0640DBB73EE86912(-891.3f, 807.9f, 188.1f));
	iLocal_358[1] = unk_0xC557A51F52598C27(unk_0x0640DBB73EE86912(-276.5f, -206.3f, 38.4f));
	iLocal_358[2] = unk_0xC557A51F52598C27(unk_0x0640DBB73EE86912(-1485.5f, -644.5f, 30.1f));
	iLocal_358[3] = unk_0xC557A51F52598C27(unk_0x0640DBB73EE86912(-1746.3f, -939.5f, 7.7f));
	iLocal_358[4] = unk_0xC557A51F52598C27(unk_0x0640DBB73EE86912(-2106.4f, -345.3f, 13f));
	iLocal_358[5] = unk_0xC557A51F52598C27(unk_0x0640DBB73EE86912(-1520f, 74.4f, 61.3f));
	iLocal_358[6] = unk_0xC557A51F52598C27(unk_0x0640DBB73EE86912(-1333f, -286f, 40.3f));
	iLocal_358[7] = unk_0xC557A51F52598C27(unk_0x0640DBB73EE86912(-1178.1f, 54.8f, 53.9f));
	iLocal_358[8] = unk_0xC557A51F52598C27(unk_0x0640DBB73EE86912(-1298.7f, -359.4f, 36.7f));
	iLocal_358[9] = unk_0xC557A51F52598C27(unk_0x0640DBB73EE86912(-355.2f, 147.5f, 75.8f));
	iLocal_358[10] = unk_0xC557A51F52598C27(unk_0x0640DBB73EE86912(-982.1f, -1064.7f, 2.2f));
	iLocal_358[11] = unk_0xC557A51F52598C27(unk_0x0640DBB73EE86912(-1313.1f, -1560.2f, 4.3f));
	while (true)
	{
		func_447();
		bLocal_102 = false;
		bLocal_104 = false;
		bLocal_107 = false;
		bLocal_110 = false;
		bLocal_112 = false;
		Global_2451473.f_1579 = 0;
		if (func_438() || func_437())
		{
			func_448();
		}
		if (func_431())
		{
			if (!func_430())
			{
				if (!func_429())
				{
					if (func_428())
					{
						if (!iLocal_100)
						{
							func_424();
							func_423(&Local_371, 5);
							func_422();
							bLocal_121 = true;
							bLocal_122 = true;
							if (unk_0x236D8AD7EE179F46(iLocal_588, 1))
							{
								unk_0xC69E84EBBD7166E6(&iLocal_588, 1);
							}
							iLocal_100 = 1;
							iLocal_346 = -999;
						}
					}
				}
			}
			else if (!func_429())
			{
				if (!bLocal_122)
				{
					if (!func_421(&uLocal_299))
					{
						func_420(&uLocal_299, 0, 0);
					}
					else if (func_419(&uLocal_299, 100, 0))
					{
						if (!unk_0x236D8AD7EE179F46(iLocal_588, 1))
						{
							if (func_428())
							{
								func_409(&Local_371, 5, Global_2097152[func_418() /*9662*/].f_7252.f_36);
								bLocal_121 = false;
								bLocal_122 = true;
								iLocal_100 = 1;
								iLocal_346 = -999;
							}
						}
					}
				}
			}
			func_336();
			func_333();
			func_319();
			func_313();
			func_211();
			func_148();
		}
		func_144();
		func_126();
		func_71();
		func_68();
		if (!iLocal_124)
		{
			if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), 471.9266f, -1308.596f, 28.2359f) < 1000f)
			{
				unk_0x48ADCBD0499AD36B(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvcheetah"), 1);
				unk_0x48ADCBD0499AD36B(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uventity"), 1);
				unk_0x48ADCBD0499AD36B(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvjb700"), 1);
				unk_0x48ADCBD0499AD36B(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uventity"), 1);
				unk_0x48ADCBD0499AD36B(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvmonroe"), 1);
				unk_0x48ADCBD0499AD36B(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvtext"), 1);
				iLocal_124 = 1;
			}
		}
		if (unk_0x1C7D9BFDF15A02B4())
		{
			func_1();
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	if (!bLocal_119)
	{
	}
	else
	{
		if (iLocal_120 >= Local_459.f_0)
		{
			iLocal_120 = 0;
			unk_0xC69E84EBBD7166E6(&iLocal_588, 10);
			unk_0xC69E84EBBD7166E6(&(Local_383.f_23), 7);
			unk_0xC69E84EBBD7166E6(&iLocal_588, 11);
			unk_0xC69E84EBBD7166E6(&iLocal_588, 23);
			if (unk_0x236D8AD7EE179F46(Local_383.f_23, 0))
			{
				unk_0xF3148AAF69AF9CBC(&(Local_383.f_23), 1);
				unk_0xC69E84EBBD7166E6(&(Local_383.f_23), 3);
			}
		}
		iVar0 = iLocal_120;
		if (Local_459[iVar0 /*4*/].f_1 == 2)
		{
			iVar1 = 0;
			while (iVar1 < 5)
			{
				if (!Local_383[iVar1] == -1)
				{
					if (!Local_383.f_6[iVar1])
					{
						if (Local_383[iVar1] == Local_459[iVar0 /*4*/])
						{
							if (Local_383[iVar1] == Local_383.f_28)
							{
								func_67();
							}
							Local_383.f_33 = 0;
							Local_383.f_32++;
						}
					}
				}
				iVar1++;
			}
		}
		if (unk_0x236D8AD7EE179F46(Local_383.f_23, 0))
		{
			if (!unk_0x236D8AD7EE179F46(Local_383.f_23, 7))
			{
				if (unk_0xC4FEBC724D547D78(unk_0xC3904F8771F37B7F(iVar0)))
				{
					if (Local_459[iVar0 /*4*/].f_3 > 0 || func_66(unk_0x29A638E7EEEE6B16(unk_0xC3904F8771F37B7F(iVar0)), 6))
					{
						if (Local_459[iVar0 /*4*/].f_3 < 3)
						{
							unk_0xF3148AAF69AF9CBC(&(Local_383.f_23), 7);
						}
					}
				}
			}
		}
		if (unk_0x236D8AD7EE179F46(Local_383.f_23, 0))
		{
			if (!unk_0x236D8AD7EE179F46(iLocal_588, 11))
			{
				if (unk_0x236D8AD7EE179F46(Local_459[iVar0 /*4*/].f_2, 2))
				{
					unk_0xF3148AAF69AF9CBC(&iLocal_588, 11);
				}
			}
			if (!unk_0x236D8AD7EE179F46(iLocal_588, 21))
			{
				if (!unk_0x236D8AD7EE179F46(iLocal_588, 3))
				{
					if (unk_0xC4FEBC724D547D78(unk_0xC3904F8771F37B7F(iVar0)))
					{
						if (unk_0x236D8AD7EE179F46(Local_459[iVar0 /*4*/].f_2, 3))
						{
							unk_0xF3148AAF69AF9CBC(&iLocal_588, 21);
						}
					}
				}
			}
		}
		iLocal_120++;
		if (iLocal_120 >= Local_459.f_0)
		{
			unk_0xF3148AAF69AF9CBC(&iLocal_588, 10);
			if (unk_0x236D8AD7EE179F46(Local_383.f_23, 7) || unk_0x236D8AD7EE179F46(iLocal_588, 23))
			{
				unk_0xC69E84EBBD7166E6(&(Local_383.f_23), 1);
			}
			if (unk_0x236D8AD7EE179F46(iLocal_588, 11))
			{
				unk_0xF3148AAF69AF9CBC(&(Local_383.f_23), 3);
			}
			if (unk_0x236D8AD7EE179F46(iLocal_588, 21))
			{
				unk_0xF3148AAF69AF9CBC(&(Local_383.f_23), 6);
			}
		}
	}
	if (func_65())
	{
		if (unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), Local_383.f_29) > 180000)
		{
			func_64();
		}
	}
	switch (Local_383.f_20)
	{
		case 0:
			func_61();
			Local_383.f_32++;
			Local_383.f_20 = 1;
			func_60();
			break;
		
		case 1:
			if (func_59())
			{
				uLocal_342 = unk_0xD74C7D8D2E5E43D2();
				Local_383.f_20 = 2;
			}
			else if (Local_383.f_28 == -1)
			{
				func_67();
			}
			break;
		
		case 2:
			if (!Local_383.f_17 && unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), uLocal_342) > Global_262145.f_9237)
			{
				Local_383.f_20 = 0;
			}
			break;
		
		case 3:
			break;
	}
	func_2();
}

void func_2()
{
	struct<3> Var0;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	switch (Local_383.f_26)
	{
		case 0:
			if (!unk_0x236D8AD7EE179F46(Local_383.f_23, 0))
			{
				if (bLocal_314)
				{
					if (bLocal_315)
					{
						if (Global_2451473.f_1552)
						{
							unk_0xC69E84EBBD7166E6(&(Local_383.f_23), 2);
							unk_0xC69E84EBBD7166E6(&(Local_383.f_23), 6);
							unk_0xC69E84EBBD7166E6(&iLocal_588, 21);
							unk_0xCD9A6588DBAF710A(0);
							Local_383.f_34 = 0;
							unk_0xF3148AAF69AF9CBC(&(Local_383.f_23), 0);
							Global_2451473.f_1552 = 0;
						}
					}
					else if (Local_383.f_27 == -15)
					{
						unk_0xC69E84EBBD7166E6(&(Local_383.f_23), 2);
						unk_0xC69E84EBBD7166E6(&(Local_383.f_23), 6);
						unk_0xC69E84EBBD7166E6(&iLocal_588, 21);
						unk_0xCD9A6588DBAF710A(0);
						Local_383.f_34 = 0;
						iVar4 = func_58();
						func_44(&(Local_383.f_27), func_57(iVar4), func_56(iVar4), func_55(iVar4), func_54(iVar4), func_53(iVar4), func_51(iVar4));
						func_43(&(Local_383.f_27), 0, unk_0x2E0A9E3291F398E3(0, 60), unk_0x2E0A9E3291F398E3(0, 8), 1, 0, 0);
					}
					else if (!func_42(6))
					{
						if (!func_421(&uLocal_331))
						{
							func_420(&uLocal_331, 0, 0);
						}
						else if (func_419(&uLocal_331, 10000, 0))
						{
							func_41(&uLocal_331);
							if (func_37(Local_383.f_27))
							{
								unk_0xF3148AAF69AF9CBC(&(Local_383.f_23), 0);
							}
						}
					}
				}
			}
			else if (Local_383.f_67 == 0)
			{
				if (func_31(1, 1, 1))
				{
					if (unk_0x7AC25D23A923E1E0(Local_383.f_24))
					{
						unk_0x044B04EA3E7E9044(Local_383.f_24);
					}
					Local_383.f_24 = -1;
					iLocal_317 = unk_0x2E0A9E3291F398E3(0, 10);
					iVar5 = func_28();
					if (iVar5 != 0)
					{
						Local_383.f_67 = iVar5;
						unk_0xCD9A6588DBAF710A(1);
						Local_383.f_34 = 1;
					}
				}
			}
			else if (unk_0x63A7F7D75B0E5FA9(1))
			{
				if (func_27(Local_383.f_67))
				{
					if (!unk_0x250A8F68F67CA19A(Local_383.f_22))
					{
						if (func_19(&Var0, &uVar3))
						{
							if (func_18(&(Local_383.f_22), Local_383.f_67, Var0, uVar3, 1, 1, 1, 1, 1, 1))
							{
								if (unk_0x9C1418C53B05D47B("MPBitset", 3))
								{
									if (unk_0xCEC9D74C9FF51C8C(unk_0x1D1DAF7F94D5FE77(Local_383.f_22), "MPBitset"))
									{
										iVar6 = unk_0x8B4662A1D2DF932C(unk_0x1D1DAF7F94D5FE77(Local_383.f_22), "MPBitset");
									}
									unk_0xF3148AAF69AF9CBC(&iVar6, 5);
									unk_0xEAE276D4D897C5F4(unk_0x1D1DAF7F94D5FE77(Local_383.f_22), "MPBitset", iVar6);
								}
								if (unk_0x9C1418C53B05D47B("MPBitset", 3))
								{
									if (unk_0xCEC9D74C9FF51C8C(unk_0x1D1DAF7F94D5FE77(Local_383.f_22), "MPBitset"))
									{
										iVar7 = unk_0x8B4662A1D2DF932C(unk_0x1D1DAF7F94D5FE77(Local_383.f_22), "MPBitset");
									}
									unk_0xF3148AAF69AF9CBC(&iVar7, 10);
									unk_0xEAE276D4D897C5F4(unk_0x1D1DAF7F94D5FE77(Local_383.f_22), "MPBitset", iVar7);
								}
								if (unk_0x9C1418C53B05D47B("Not_Allow_As_Saved_Veh", 3))
								{
									unk_0xEAE276D4D897C5F4(unk_0x1D1DAF7F94D5FE77(Local_383.f_22), "Not_Allow_As_Saved_Veh", 1);
								}
								unk_0xF3148AAF69AF9CBC(&(Local_383.f_23), 0);
								unk_0xC69E84EBBD7166E6(&(Local_383.f_23), 2);
								unk_0xC69E84EBBD7166E6(&(Local_383.f_23), 4);
								unk_0xC69E84EBBD7166E6(&(Local_383.f_23), 3);
								unk_0xC69E84EBBD7166E6(&iLocal_588, 11);
								unk_0xC69E84EBBD7166E6(&(Local_383.f_23), 6);
								unk_0xF3148AAF69AF9CBC(&iLocal_588, 23);
								unk_0x887F4488DA99FD21(Local_383.f_67);
								Local_383.f_26 = 1;
								func_41(&(Local_383.f_30));
								func_420(&(Local_383.f_30), 0, 0);
								unk_0xC390A6485FB80923(unk_0x1D1DAF7F94D5FE77(Local_383.f_22), 7);
								unk_0xF2D763E1F01F9DBB(unk_0x1D1DAF7F94D5FE77(Local_383.f_22), 1);
								unk_0xB5A91586385F755B(Local_383.f_67, 1);
								unk_0x2DF8281BB0B4086E(Local_383.f_22, 1);
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0x236D8AD7EE179F46(Local_383.f_23, 2))
			{
				if (unk_0x335F574AD77E59CE(Local_383.f_22))
				{
					if (!unk_0x7404950238A154C2(unk_0x1D1DAF7F94D5FE77(Local_383.f_22), 0))
					{
						Local_86.f_2 = 39;
						func_16(Local_86, func_17(1));
						unk_0xF3148AAF69AF9CBC(&(Local_383.f_23), 2);
					}
				}
			}
			if (unk_0x236D8AD7EE179F46(iLocal_588, 3) || (unk_0x236D8AD7EE179F46(iLocal_588, 10) && unk_0x236D8AD7EE179F46(Local_383.f_23, 1)))
			{
				if (!unk_0x236D8AD7EE179F46(iLocal_588, 3))
				{
					if (!unk_0x236D8AD7EE179F46(Local_383.f_23, 2))
					{
						if (unk_0x335F574AD77E59CE(Local_383.f_22))
						{
							if (!unk_0x7404950238A154C2(unk_0x1D1DAF7F94D5FE77(Local_383.f_22), 0))
							{
								Local_86.f_2 = 39;
								func_16(Local_86, func_17(1));
								unk_0xF3148AAF69AF9CBC(&(Local_383.f_23), 2);
							}
						}
					}
				}
				Local_383.f_26 = 2;
			}
			if (func_15(unk_0x1D1DAF7F94D5FE77(Local_383.f_22)))
			{
				Local_383.f_26 = 2;
				Local_86.f_2 = 40;
				func_16(Local_86, func_17(1));
			}
			if (!unk_0x236D8AD7EE179F46(Local_383.f_23, 4))
			{
				if (func_419(&(Local_383.f_30), 360000, 0))
				{
					unk_0xF3148AAF69AF9CBC(&(Local_383.f_23), 4);
					func_41(&(Local_383.f_30));
					func_420(&(Local_383.f_30), 0, 0);
				}
			}
			else if (unk_0x236D8AD7EE179F46(iLocal_588, 10))
			{
				if (!unk_0x236D8AD7EE179F46(Local_383.f_23, 3))
				{
					if (func_421(&(Local_383.f_30)))
					{
						if (func_419(&(Local_383.f_30), 120000, 0))
						{
							Local_383.f_26 = 2;
							Local_86.f_2 = 40;
							func_16(Local_86, func_17(1));
						}
					}
					else
					{
						func_420(&(Local_383.f_30), 0, 0);
					}
				}
				else if (func_421(&(Local_383.f_30)))
				{
					func_41(&(Local_383.f_30));
				}
			}
			if (unk_0x236D8AD7EE179F46(Local_383.f_23, 6))
			{
				if (!unk_0x236D8AD7EE179F46(iLocal_588, 3))
				{
					if (Local_383.f_26 == 1)
					{
						Local_383.f_26 = 2;
					}
				}
			}
			if (func_11(6))
			{
				if (Local_383.f_26 == 1)
				{
					Local_383.f_26 = 2;
				}
			}
			break;
		
		case 2:
			if (unk_0x335F574AD77E59CE(Local_383.f_22))
			{
				if (func_10(Local_383.f_22))
				{
					func_9(&(Local_383.f_22));
					Local_383.f_26 = 3;
				}
			}
			else
			{
				Local_383.f_26 = 3;
			}
			break;
		
		case 3:
			if (unk_0x236D8AD7EE179F46(iLocal_588, 10))
			{
				if (unk_0x236D8AD7EE179F46(Local_383.f_23, 1))
				{
					Local_383.f_26 = 0;
					unk_0xC69E84EBBD7166E6(&(Local_383.f_23), 0);
					Local_383.f_27 = -15;
					if (Local_383.f_67 != 0)
					{
						unk_0xB5A91586385F755B(Local_383.f_67, 0);
					}
					Local_383.f_67 = 0;
					if (bLocal_315)
					{
						func_7(func_8(unk_0x1888BBA7387E194A("AM_LAUNCHER", -1, 0)), 0);
					}
				}
			}
			break;
	}
	func_3();
}

void func_3()
{
	if (unk_0x1C7D9BFDF15A02B4())
	{
		switch (Local_383.f_69)
		{
			case 0:
				if (unk_0x236D8AD7EE179F46(Local_383.f_23, 8))
				{
					if (unk_0x335F574AD77E59CE(Local_383.f_22))
					{
						if (!func_6())
						{
							if (unk_0x4743CD2A83944FE9(unk_0x1D1DAF7F94D5FE77(Local_383.f_22)))
							{
								if (!unk_0xD1FFD959917D4ED8(unk_0x1D1DAF7F94D5FE77(Local_383.f_22), 1204.053f, -3102.311f, 1.770506f, 1204.265f, -3121.974f, 17.92032f, 31.625f, 0, 1, 0))
								{
									if (!unk_0x236D8AD7EE179F46(Local_383.f_23, 9))
									{
										unk_0xF3148AAF69AF9CBC(&(Local_383.f_23), 9);
									}
								}
							}
						}
						else if (unk_0x236D8AD7EE179F46(Local_383.f_23, 9))
						{
							unk_0xC69E84EBBD7166E6(&(Local_383.f_23), 9);
						}
					}
				}
				break;
			}
	}
	if (unk_0x236D8AD7EE179F46(Local_383.f_23, 9))
	{
		if (unk_0x335F574AD77E59CE(Local_383.f_22))
		{
			if (func_4(Local_383.f_22))
			{
				if (unk_0x402F3F19221FF696(Local_383.f_22))
				{
					unk_0x5CEA5F12775261F2(unk_0x1D1DAF7F94D5FE77(Local_383.f_22), true, 0);
					unk_0xC390A6485FB80923(unk_0x1D1DAF7F94D5FE77(Local_383.f_22), 1);
					unk_0xA8F22633ACC22189(unk_0x1D1DAF7F94D5FE77(Local_383.f_22), false);
					unk_0x4B9126AEF0E84DA7(unk_0x1D1DAF7F94D5FE77(Local_383.f_22), 1);
					unk_0xC69E84EBBD7166E6(&(Local_383.f_23), 9);
				}
				else
				{
					unk_0x3A6FE26AD5BF8C2E(Local_383.f_22);
				}
			}
			else
			{
				unk_0xC69E84EBBD7166E6(&(Local_383.f_23), 9);
			}
		}
		else
		{
			unk_0xC69E84EBBD7166E6(&(Local_383.f_23), 9);
		}
	}
}

int func_4(var uParam0)
{
	if (unk_0x250A8F68F67CA19A(uParam0))
	{
		return !func_5(unk_0x1D1DAF7F94D5FE77(uParam0));
	}
	return 0;
}

int func_5(int iParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		if (unk_0x930F8FBB8E9537CC(iParam0))
		{
			return 1;
		}
		else if (!unk_0x7404950238A154C2(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_6()
{
	int iVar0;
	
	if (unk_0x335F574AD77E59CE(Local_383.f_22))
	{
		if (func_4(Local_383.f_22))
		{
			iVar0 = unk_0xB0B9E53CEFDB16AA(unk_0x1D1DAF7F94D5FE77(Local_383.f_22), -1);
			if (iVar0 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_7(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 368;
	Var0.f_1 = unk_0x1329891157A54C63();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		unk_0x8DAD64B00B88FC2D(1, &Var0, 3, iParam0);
	}
}

int func_8(int iParam0)
{
	var uVar0;
	
	unk_0xF3148AAF69AF9CBC(&uVar0, iParam0);
	return uVar0;
}

void func_9(var uParam0)
{
	var uVar0;
	
	if (unk_0x335F574AD77E59CE(*uParam0))
	{
		uVar0 = unk_0x262EBD0AA0ED1D6D(*uParam0);
		unk_0x3C6E68D2D7F41A39(&uVar0);
	}
}

int func_10(var uParam0)
{
	if (unk_0x250A8F68F67CA19A(uParam0))
	{
		unk_0x3A6FE26AD5BF8C2E(uParam0);
		return unk_0x402F3F19221FF696(uParam0);
	}
	return 0;
}

bool func_11(int iParam0)
{
	return !func_12(iParam0);
}

int func_12(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_5025)
			{
				return 0;
			}
			if (func_66(unk_0x1329891157A54C63(), 7))
			{
				return 0;
			}
			if (unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 0) || unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_5026)
			{
				return 0;
			}
			if (func_66(unk_0x1329891157A54C63(), 7))
			{
				return 0;
			}
			if (unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 0) || unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_5027)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_5028)
			{
				return 0;
			}
			if (func_66(unk_0x1329891157A54C63(), 7))
			{
				return 0;
			}
			if (unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 0) || unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_13(4))
			{
				return 0;
			}
			if (func_66(unk_0x1329891157A54C63(), 7))
			{
				return 0;
			}
			if (unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 0) || unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_13(4))
			{
				return 0;
			}
			if (func_66(unk_0x1329891157A54C63(), 7))
			{
				return 0;
			}
			if (unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 0) || unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_13(4))
			{
				return 0;
			}
			if (func_66(unk_0x1329891157A54C63(), 7))
			{
				return 0;
			}
			if (unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 0) || unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 19:
		case 21:
		case 22:
		case 23:
			if (func_13(4))
			{
				return 0;
			}
			if (func_66(unk_0x1329891157A54C63(), 7))
			{
				return 0;
			}
			if (unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 0) || unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 1))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_13(4))
			{
				return 0;
			}
			if (func_66(unk_0x1329891157A54C63(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_13(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_14(unk_0x6528B1497E4313F1(iVar0), 0, 1))
		{
			if (unk_0x236D8AD7EE179F46(Global_2414506[iVar0 /*255*/].f_205, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_14(int iParam0, bool bParam1, bool bParam2)
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

int func_15(int iParam0)
{
	if (unk_0x7404950238A154C2(iParam0, 0))
	{
		if (unk_0x9C1418C53B05D47B("bombdec1", 3))
		{
			if (unk_0xCEC9D74C9FF51C8C(iParam0, "bombdec1"))
			{
				return 1;
			}
		}
		if (unk_0x9C1418C53B05D47B("bombdec", 3))
		{
			if (unk_0xCEC9D74C9FF51C8C(iParam0, "bombdec"))
			{
				return 1;
			}
		}
		if (unk_0x9C1418C53B05D47B("bombowner", 3))
		{
			if (unk_0xCEC9D74C9FF51C8C(iParam0, "bombowner"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_16(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0x1329891157A54C63();
	if (!iParam14 == 0)
	{
		unk_0x8DAD64B00B88FC2D(1, &Param0, 14, iParam14);
	}
}

int func_17(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x945535897333587B())
	{
		if (unk_0xC4FEBC724D547D78(unk_0xC3904F8771F37B7F(iVar1)))
		{
			iVar2 = unk_0x29A638E7EEEE6B16(unk_0xC3904F8771F37B7F(iVar1));
			if (func_14(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x1329891157A54C63() || iParam0)
				{
					unk_0xF3148AAF69AF9CBC(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_18(var uParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	
	if (!unk_0x63A7F7D75B0E5FA9(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0xA450601E968044DB(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = unk_0xE00F8DEA9778FC87(uParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = unk_0x59FB930CD0E1CDFD(uVar0);
	if (unk_0x250A8F68F67CA19A(*uParam0))
	{
		unk_0xEA89E72C99125D9C(uVar0, iParam10);
		if (unk_0xE682D8146CB90267(uVar0))
		{
			if (bParam8)
			{
				unk_0xE2F4428601519A00(*uParam0, 1);
			}
			else
			{
				unk_0xE2F4428601519A00(*uParam0, 0);
			}
		}
		unk_0xF239D177F4EB07F9(uVar0, iParam9);
		return 1;
	}
	return 0;
}

int func_19(var uParam0, var uParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (!func_26(*uParam0, 0f, 0f, 0f, 0))
	{
		return 1;
	}
	switch (iLocal_317)
	{
		case 0:
			Var0 = { -810.8889f, -126.9419f, 33f };
			Var3 = { -807.2521f, -116.098f, 38f };
			Var6 = { -809.0935f, -121.9038f, 36.504f };
			fVar9 = 240.8011f;
			break;
		
		case 1:
			Var0 = { -804.004f, -1317.293f, 0.0005f };
			Var3 = { -797.881f, -1310.998f, 7.0005f };
			Var6 = { -801.6295f, -1313.865f, 4.0005f };
			fVar9 = 350.3062f;
			break;
		
		case 2:
			Var0 = { -194.8607f, -1955.005f, 25.6205f };
			Var3 = { -189.4078f, -1945.248f, 28.6205f };
			Var6 = { -191.5592f, -1950.239f, 26.6205f };
			fVar9 = 288.8187f;
			break;
		
		case 3:
			Var0 = { -2966.875f, 459.3981f, 13.4644f };
			Var3 = { -2961.456f, 466.0484f, 16.1725f };
			Var6 = { -2963.887f, 462.7986f, 14.2156f };
			fVar9 = 30.4415f;
			break;
		
		case 4:
			Var0 = { -420.6335f, 1217.742f, 322.7591f };
			Var3 = { -411.9892f, 1220.346f, 326.6421f };
			Var6 = { -416.0102f, 1219.771f, 324.6421f };
			fVar9 = 230.4509f;
			break;
		
		case 5:
			Var0 = { -1634.708f, -890.849f, 6.97f };
			Var3 = { -1633.903f, -879.869f, 9.1264f };
			Var6 = { -1634.006f, -885.3531f, 8.0518f };
			fVar9 = 321.31f;
			break;
		
		case 6:
			Var0 = { -338.4312f, -947.4233f, 28.0788f };
			Var3 = { -331.5926f, -944.408f, 32.0788f };
			Var6 = { -334.8547f, -945.2789f, 30.0788f };
			fVar9 = 69.0442f;
			break;
		
		case 7:
			Var0 = { 1093.925f, 245.6548f, 77.9908f };
			Var3 = { 1094.243f, 255.0715f, 82.8556f };
			Var6 = { 1093.686f, 250.4772f, 79.8556f };
			fVar9 = 328.5602f;
			break;
		
		case 8:
			Var0 = { -1407.823f, 58.1796f, 50.8018f };
			Var3 = { -1400.19f, 63.9074f, 54.3222f };
			Var6 = { -1404.459f, 62.1459f, 52.0258f };
			fVar9 = 241.2814f;
			break;
		
		case 9:
			Var0 = { -1230.324f, -1656.814f, 2.0412f };
			Var3 = { -1226.429f, -1648.143f, 4.1986f };
			Var6 = { -1228.901f, -1652.397f, 3.1204f };
			fVar9 = 305.0972f;
			break;
	}
	if (!func_26(Var0, 0f, 0f, 0f, 0))
	{
		if (iLocal_317 < 10)
		{
			if (Local_383.f_24 == -1)
			{
				Local_383.f_24 = unk_0x4AA8CBDAFCFD911F(Var0, Var3);
			}
			else if (unk_0x7AC25D23A923E1E0(Local_383.f_24))
			{
				if (unk_0x5E849A4A33DE8F52(Local_383.f_24))
				{
					if (!unk_0x40AC21009AC9E7DB(Local_383.f_24))
					{
						if (!func_20(Var6, 1084227584, 1, 1, 1123024896, 0, -1, 0, 0))
						{
							*uParam0 = { Var6 };
							*uParam1 = fVar9;
							unk_0x044B04EA3E7E9044(Local_383.f_24);
							Local_383.f_24 = -1;
							return 1;
						}
						else
						{
							iLocal_317++;
							unk_0x044B04EA3E7E9044(Local_383.f_24);
							Local_383.f_24 = -1;
						}
					}
					else
					{
						iLocal_317++;
						unk_0x044B04EA3E7E9044(Local_383.f_24);
						Local_383.f_24 = -1;
					}
				}
			}
		}
		else
		{
			iLocal_317 = 0;
		}
	}
	return 0;
}

int func_20(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_14(unk_0x1329891157A54C63(), 1, 1))
		{
			if (!unk_0x29AFA2493D7C23D0())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x0D6E79537424BACE(func_25(unk_0x1329891157A54C63()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x547A2AA158CA2804(Param0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_14(iVar1, 1, 1))
		{
			if (!func_22(iVar1, 0) && unk_0x4F5BEB9A4097F301(unk_0x1329891157A54C63(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x1329891157A54C63()))
				{
					if ((func_21(iVar1) || !bParam10) && !Global_2414506[iVar1 /*255*/].f_253)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0xCCFDB2B968281FE8(iVar1) == -1)
							{
								if (unk_0xCCFDB2B968281FE8(iVar1) == unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xCCFDB2B968281FE8(iVar1) != unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()))) || unk_0xCCFDB2B968281FE8(iVar1) == -1)
							{
								if (unk_0x0D6E79537424BACE(func_25(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x30EC451ADA231853(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0xCCFDB2B968281FE8(iVar1) != iParam8 || unk_0xCCFDB2B968281FE8(iVar1) == -1)
						{
							if (unk_0x0D6E79537424BACE(func_25(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x30EC451ADA231853(iVar1, Param0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_21(int iParam0)
{
	if (unk_0x3C965174F280226D(unk_0xE495E987CB2BE7EF(iParam0)) || Global_2414506[iParam0 /*255*/].f_239)
	{
		return 1;
	}
	return 0;
}

bool func_22(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1329891157A54C63())
	{
		bVar0 = func_23(-1, 0) == 8;
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

int func_23(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_24();
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

int func_24()
{
	return Global_1312729;
}

Vector3 func_25(int iParam0)
{
	return unk_0xB6AE0DAE06D56288(unk_0xE495E987CB2BE7EF(iParam0), 0);
}

bool func_26(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_27(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x32A12757CBF48A33(iParam0);
	return unk_0x33ACB874CECA2D4B(iParam0);
}

int func_28()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (Global_262145.f_2328 != 0)
	{
		iVar1 = Global_262145.f_2328;
		if (unk_0xC6F372320BE985CB(iVar1))
		{
			if (unk_0xA84E120D1B16B142(iVar1))
			{
				iVar0 = iVar1;
			}
		}
	}
	if (iVar0 == 0)
	{
		iVar2 = func_30(&Local_383);
		iVar0 = func_29(iVar2);
	}
	return iVar0;
}

int func_29(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("sentinel");
		
		case 1:
			return joaat("serrano");
		
		case 2:
			return joaat("dominator");
		
		case 3:
			return joaat("schafter2");
		
		case 4:
			return joaat("surge");
		
		case 5:
			return joaat("jackal");
		
		case 6:
			return joaat("ztype");
		
		case 7:
			return joaat("tailgater");
		
		case 8:
			return joaat("landstalker");
		
		case 9:
			return joaat("penumbra");
		
		case 10:
			return joaat("f620");
		
		case 11:
			return joaat("fq2");
		
		case 12:
			return joaat("patriot");
		
		case 13:
			return joaat("habanero");
		
		case 14:
			return joaat("prairie");
		
		case 15:
			return joaat("fusilade");
		
		case 16:
			return joaat("bjxl");
		
		case 17:
			return joaat("gresley");
		
		case 18:
			return joaat("buccaneer");
		
		case 19:
			return joaat("daemon");
		
		case 20:
			return joaat("bagger");
		
		default:
	}
	return 0;
}

int func_30(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0x2E0A9E3291F398E3(0, 5);
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = (iVar1 + iVar0);
		if (iVar2 >= 5)
		{
			iVar2 = (iVar2 - 5);
		}
		if (!(*uParam0)[iVar2] == -1)
		{
			if (uParam0->f_6[iVar2] == 0)
			{
				return (*uParam0)[iVar2];
			}
		}
		iVar1++;
	}
	return -1;
}

bool func_31(int iParam0, bool bParam1, bool bParam2)
{
	return func_32(1, iParam0, 1, bParam1, bParam2);
}

int func_32(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x236D8AD7EE179F46(Global_1344683, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_36(iParam0) - func_35(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_35(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_36(iParam0) - func_34(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_35(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_36(iParam0) - func_35(iParam0, 1));
		}
		if (!bParam4 && Global_1585045[unk_0x1329891157A54C63() /*400*/] != 3)
		{
			iVar1 = (iVar1 - func_33(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_33(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_34(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1344683.f_1;
			break;
		
		case 1:
			return Global_1344683.f_2;
			break;
		
		case 2:
			return Global_1344683.f_3;
			break;
	}
	return 0;
}

int func_35(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x1329891157A54C63();
	switch (iParam0)
	{
		case 0:
			if (!unk_0xA360A5024482E898())
			{
				return Global_2414506[iVar0 /*255*/].f_206;
			}
			else
			{
				return unk_0xE2146C98F90922C2(!bParam1);
			}
			break;
		
		case 1:
			if (!unk_0xA360A5024482E898())
			{
				return Global_2414506[iVar0 /*255*/].f_207;
			}
			else
			{
				return unk_0xD2E2B0775C0B702C(!bParam1);
			}
			break;
		
		case 2:
			if (!unk_0xA360A5024482E898())
			{
				return Global_2414506[iVar0 /*255*/].f_208;
			}
			else
			{
				return unk_0xAE49493A61A9139F(!bParam1);
			}
			break;
	}
	return 0;
}

int func_36(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1344691;
			break;
		
		case 1:
			return Global_1344692;
			break;
		
		case 2:
			return Global_1344693;
			break;
	}
	return 0;
}

bool func_37(int iParam0)
{
	return func_38(func_58(), iParam0);
}

int func_38(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_39(iParam1) || !func_39(iParam0))
	{
		return 1;
	}
	iVar0 = func_51(iParam0);
	iVar1 = func_51(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_53(iParam0);
	iVar1 = func_53(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_54(iParam0);
	iVar1 = func_54(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_55(iParam0);
	iVar1 = func_55(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_56(iParam0);
	iVar1 = func_56(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_57(iParam0);
	iVar1 = func_57(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_39(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_57(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_56(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_55(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_51(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_53(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_54(iParam0);
	if (iVar5 < 1 || iVar5 > func_40(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_40(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

void func_41(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_42(int iParam0)
{
	return !func_12(iParam0);
}

void func_43(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_51(*uParam0);
	iVar1 = func_53(*uParam0);
	iVar2 = func_54(*uParam0);
	iVar3 = func_55(*uParam0);
	iVar4 = func_56(*uParam0);
	iVar5 = func_57(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_40(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_40(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_44(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_44(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_50(uParam0, iParam1);
	func_49(uParam0, iParam2);
	func_48(uParam0, iParam3);
	func_47(uParam0, iParam5);
	func_46(uParam0, iParam4);
	func_45(uParam0, iParam6);
}

void func_45(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_46(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_53(*uParam0);
	iVar1 = func_51(*uParam0);
	if (iParam1 < 1 || iParam1 > func_40(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_47(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_48(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_49(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_50(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_51(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_52(unk_0x236D8AD7EE179F46(iParam0, 31), -1, 1)) + 2011;
}

int func_52(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_53(int iParam0)
{
	return iParam0 & 15;
}

int func_54(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_55(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_56(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_57(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_58()
{
	var uVar0;
	
	func_50(&uVar0, unk_0xBF0A1447DA6AE4B5());
	func_49(&uVar0, unk_0x25B31B877207A3A9());
	func_48(&uVar0, unk_0x0C937048CF6952B5());
	func_46(&uVar0, unk_0x8B6B3DD84CE74978());
	func_47(&uVar0, unk_0x02DC618B9A1DB8D1());
	func_45(&uVar0, unk_0x57E483B654EDD986());
	return uVar0;
}

int func_59()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!Local_383.f_6[iVar0])
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_60()
{
	int iVar0;
	
	if (!unk_0x236D8AD7EE179F46(Local_383.f_23, 5))
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_383.f_35[iVar0] = -1;
			iVar0++;
		}
		unk_0xF3148AAF69AF9CBC(&(Local_383.f_23), 5);
	}
}

void func_61()
{
	int iVar0;
	
	func_423(&Local_383, 5);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Local_383.f_12[iVar0] = func_62();
		iVar0++;
	}
	Local_383.f_33 = 1;
}

int func_62()
{
	int iVar0;
	
	iVar0 = unk_0x2E0A9E3291F398E3(0, 10);
	while (func_63(iVar0))
	{
		iVar0 = unk_0x2E0A9E3291F398E3(0, 10);
	}
	return iVar0;
}

int func_63(int iParam0)
{
	int iVar0;
	
	if (!iParam0 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (Local_383.f_12[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_64()
{
	int iVar0;
	
	iVar0 = func_30(&Local_383);
	if (iVar0 != Local_383.f_28)
	{
		Local_383.f_28 = iVar0;
		Local_383.f_29 = unk_0xD74C7D8D2E5E43D2();
	}
}

int func_65()
{
	if (Local_383.f_20 > 0)
	{
		if (Local_383[0] != Local_383[1])
		{
			return 1;
		}
	}
	return 0;
}

bool func_66(int iParam0, int iParam1)
{
	return unk_0x236D8AD7EE179F46(Global_2414506[iParam0 /*255*/].f_205, iParam1);
}

void func_67()
{
	Local_383.f_29 = 0;
}

void func_68()
{
	int iVar0;
	
	if (func_65())
	{
		if (Global_2451473.f_4228 == 0 || unk_0x236D8AD7EE179F46(Global_2451473.f_4229, 0))
		{
			if (!func_421(&uLocal_337) || func_419(&uLocal_337, 2000, 0))
			{
				iVar0 = func_30(&Local_371);
				if (iVar0 > -1)
				{
					Global_2451473.f_4228 = func_29(iVar0);
					func_41(&uLocal_335);
					func_420(&uLocal_335, 0, 0);
					if (unk_0x236D8AD7EE179F46(Global_2451473.f_4229, 0))
					{
						unk_0xC69E84EBBD7166E6(&(Global_2451473.f_4229), 0);
					}
				}
				else
				{
					func_41(&uLocal_337);
					func_420(&uLocal_337, 0, 0);
				}
			}
		}
		else if (Global_2451473.f_4228 != 0)
		{
			if (func_419(&uLocal_335, 20000, 0))
			{
				if (!func_69(&Local_371, Global_2451473.f_4228))
				{
					Global_2451473.f_4228 = 0;
				}
				func_41(&uLocal_335);
				func_420(&uLocal_335, 0, 0);
			}
		}
	}
}

int func_69(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_70(iParam1);
	if (!iVar0 == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (!(*uParam0)[iVar1] == -1)
			{
				if (!uParam0->f_6[iVar1])
				{
					if ((*uParam0)[iVar1] == iVar0)
					{
						return 1;
					}
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_70(int iParam0)
{
	switch (iParam0)
	{
		case joaat("sentinel"):
			return 0;
		
		case joaat("serrano"):
			return 1;
		
		case joaat("dominator"):
			return 2;
		
		case joaat("schafter2"):
			return 3;
		
		case joaat("surge"):
			return 4;
		
		case joaat("jackal"):
			return 5;
		
		case joaat("ztype"):
			return 6;
		
		case joaat("tailgater"):
			return 7;
		
		case joaat("landstalker"):
			return 8;
		
		case joaat("penumbra"):
			return 9;
		
		case joaat("f620"):
			return 10;
		
		case joaat("fq2"):
			return 11;
		
		case joaat("patriot"):
			return 12;
		
		case joaat("habanero"):
			return 13;
		
		case joaat("prairie"):
			return 14;
		
		case joaat("fusilade"):
			return 15;
		
		case joaat("bjxl"):
			return 16;
		
		case joaat("gresley"):
			return 17;
		
		case joaat("buccaneer"):
			return 18;
		
		case joaat("daemon"):
			return 19;
		
		case joaat("bagger"):
			return 20;
		
		default:
	}
	return -1;
}

void func_71()
{
	int iVar0;
	
	if (((((bLocal_106 || bLocal_107) || bLocal_108) || bLocal_110) || bLocal_109) || bLocal_111)
	{
		if (((((Global_2451473.f_28.f_40 || func_123(unk_0x1329891157A54C63(), 1)) || func_122(unk_0x1329891157A54C63())) || !func_120()) || func_115()) || func_113())
		{
			bLocal_106 = false;
			bLocal_108 = false;
			bLocal_107 = false;
			bLocal_110 = false;
			bLocal_109 = false;
			func_112();
		}
	}
	if ((func_111("FM_CTUT_RSP") || func_111("FM_CTUT_REP")) || func_111("FM_CTUT_LLS"))
	{
		if (!func_110() || func_113())
		{
			func_112();
		}
	}
	if (bLocal_111)
	{
		if (!func_111("FM_IHELP_LCP"))
		{
			if (!unk_0xDBD19E93A4D01117())
			{
				if (func_93())
				{
					if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) > 0)
					{
						if (func_92())
						{
							func_86("FM_IHELP_LCP", 0);
						}
					}
				}
			}
		}
	}
	else if (!unk_0x236D8AD7EE179F46(iLocal_588, 18))
	{
		if (func_111("FM_IHELP_LCP"))
		{
			func_79("FM_IHELP_LCP");
		}
	}
	if (bLocal_106)
	{
		if (!func_111("FM_CTUT_MOD"))
		{
			if (!unk_0xDBD19E93A4D01117())
			{
				if (func_93())
				{
					if (unk_0x236D8AD7EE179F46(iLocal_341, 2))
					{
						if (func_92())
						{
							func_86("FM_CTUT_MOD", 0);
						}
					}
				}
			}
		}
	}
	else if (!unk_0x236D8AD7EE179F46(iLocal_588, 18))
	{
		if (func_111("FM_CTUT_MOD"))
		{
			func_79("FM_CTUT_MOD");
		}
	}
	if (bLocal_108)
	{
		if (!func_111("FM_CTUT_RSP"))
		{
			if (!unk_0xDBD19E93A4D01117())
			{
				if (unk_0xECDEA377354CBDA4())
				{
					if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
					{
						if (!func_123(unk_0x1329891157A54C63(), 1))
						{
							if (func_92())
							{
								if (func_110())
								{
									func_86("FM_CTUT_RSP", 0);
								}
							}
						}
					}
				}
			}
		}
	}
	else if (!unk_0x236D8AD7EE179F46(iLocal_588, 18))
	{
		if (func_111("FM_CTUT_RSP"))
		{
			func_79("FM_CTUT_RSP");
		}
	}
	if (bLocal_109)
	{
		if (!func_111("FM_CTUT_RSP"))
		{
			if (!unk_0xDBD19E93A4D01117())
			{
				if (unk_0xECDEA377354CBDA4())
				{
					if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
					{
						if (!func_123(unk_0x1329891157A54C63(), 1))
						{
							if (func_92())
							{
								if (func_110())
								{
									func_86("FM_CTUT_REP", 0);
								}
							}
						}
					}
				}
			}
		}
	}
	else if (!unk_0x236D8AD7EE179F46(iLocal_588, 18))
	{
		if (func_111("FM_CTUT_REP"))
		{
			func_79("FM_CTUT_REP");
		}
	}
	if (bLocal_110)
	{
		if (!func_111("FM_CTUT_LLS"))
		{
			if (!unk_0xDBD19E93A4D01117())
			{
				if (func_93() || func_72())
				{
					if (func_92())
					{
						if (func_110())
						{
						}
					}
				}
			}
		}
	}
	else if (!unk_0x236D8AD7EE179F46(iLocal_588, 18))
	{
		if (func_111("FM_CTUT_LLS"))
		{
			func_79("FM_CTUT_LLS");
		}
	}
	if (bLocal_107)
	{
		if (!func_111("FM_IMP_SIM"))
		{
			if (!unk_0xDBD19E93A4D01117())
			{
				if (func_93() || func_72())
				{
					if (unk_0x236D8AD7EE179F46(iLocal_341, 3))
					{
						if (!iLocal_113)
						{
							if (func_92())
							{
								func_86("FM_IMP_SIM", 0);
								if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
								{
									if (unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()))
									{
										iLocal_356 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
									}
								}
							}
						}
						else if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
						{
							if (unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()))
							{
								iVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
								if (iVar0 != iLocal_356)
								{
									iLocal_113 = 0;
									func_41(&uLocal_339);
								}
							}
						}
					}
				}
			}
		}
		else if (!func_421(&uLocal_339))
		{
			func_420(&uLocal_339, 0, 0);
		}
		else if (func_419(&uLocal_339, 20000, 0))
		{
			func_112();
			iLocal_113 = 1;
		}
	}
	else if (!unk_0x236D8AD7EE179F46(iLocal_588, 18))
	{
		if (func_111("FM_IMP_SIM"))
		{
			func_79("FM_IMP_SIM");
		}
	}
}

bool func_72()
{
	return (((((func_73(39) || func_73(40)) || func_73(41)) || func_73(42)) || func_73(43)) || func_73(44));
}

int func_73(int iParam0)
{
	return func_74(iParam0, 6, 1);
}

int func_74(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x236D8AD7EE179F46(Global_90861.f_1279[iParam0], iParam1);
	}
	else if (unk_0x1C6DF6AD69BE853E())
	{
		if (func_78() == 0)
		{
			return unk_0x236D8AD7EE179F46(func_75(func_77(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x236D8AD7EE179F46(Global_98931.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_75(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2459767[iParam0 /*5*/][func_76(iParam1)];
	if (unk_0x85C45034BA638694(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_76(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_24();
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

int func_77(int iParam0)
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

int func_78()
{
	return Global_24946;
}

void func_79(char* sParam0)
{
	bool bVar0;
	
	if (unk_0xB318FDA0D1ABDB20(sParam0))
	{
		return;
	}
	bVar0 = false;
	if (func_85())
	{
		if (Global_1312577 == 11)
		{
			if (unk_0xA84EEA1DAC64D0D5(sParam0) > 63)
			{
				return;
			}
			bVar0 = unk_0x8DAF7A748E41AD46(sParam0) == unk_0x8DAF7A748E41AD46(&(Global_1312577.f_14));
		}
		else
		{
			if (unk_0xA84EEA1DAC64D0D5(sParam0) > 23)
			{
				return;
			}
			bVar0 = unk_0x8DAF7A748E41AD46(sParam0) == unk_0x8DAF7A748E41AD46(&(Global_1312577.f_10));
		}
	}
	if (!bVar0)
	{
		return;
	}
	func_80();
}

void func_80()
{
	func_82();
	func_81(0);
}

void func_81(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x1C6DF6AD69BE853E();
	Global_1312577 = 12;
	StringCopy(&(Global_1312577.f_1), "", 24);
	Global_1312577.f_7 = 0;
	if (bVar0)
	{
		Global_1312577.f_8 = unk_0xD74C7D8D2E5E43D2();
		Global_1312577.f_9 = unk_0xD74C7D8D2E5E43D2();
	}
	StringCopy(&(Global_1312577.f_10), "", 16);
	StringCopy(&(Global_1312577.f_14), "", 64);
	StringCopy(&(Global_1312577.f_30), "", 16);
	Global_1312577.f_34 = 0;
	Global_1312577.f_35 = 0;
	Global_1312577.f_36 = 0;
	Global_1312577.f_37 = -1;
	Global_1312577.f_38 = 0;
	Global_1312577.f_39 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_82()
{
	if (!func_84())
	{
	}
	if (func_85())
	{
		unk_0x10F61CB44B66BBDE(&(Global_1312577.f_10));
		func_83();
		unk_0x311B25F9901AB37A();
	}
}

void func_83()
{
	switch (Global_1312577)
	{
		case 12:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x6D55FF05D62B91BC(Global_1312577.f_34);
			return;
		
		case 2:
			unk_0x6D55FF05D62B91BC(Global_1312577.f_34);
			unk_0x6D55FF05D62B91BC(Global_1312577.f_35);
			return;
		
		case 3:
			unk_0x072D7B028D6C7A05(&(Global_1312577.f_14));
			return;
		
		case 4:
			unk_0x072D7B028D6C7A05(&(Global_1312577.f_14));
			unk_0x072D7B028D6C7A05(&(Global_1312577.f_30));
			return;
		
		case 5:
			unk_0x6222A57F463E8EE7(&(Global_1312577.f_14));
			return;
		
		case 6:
			unk_0xDB5ED960DFB0E4DF(Global_1312577.f_38);
			unk_0x6222A57F463E8EE7(&(Global_1312577.f_14));
			return;
		
		case 7:
			unk_0x072D7B028D6C7A05(&(Global_1312577.f_14));
			return;
		
		case 8:
			unk_0xDB5ED960DFB0E4DF(Global_1312577.f_38);
			unk_0x072D7B028D6C7A05(&(Global_1312577.f_14));
			return;
		
		case 9:
			unk_0x92D1853394E2386A(&(Global_1312577.f_14));
			return;
		
		case 10:
			unk_0x6222A57F463E8EE7(&(Global_1312577.f_14));
			unk_0x6222A57F463E8EE7(&(Global_1312577.f_30));
			return;
		
		case 11:
			unk_0x92D1853394E2386A(&(Global_1312577.f_14));
			return;
		
		default:
	}
}

int func_84()
{
	if (!func_85())
	{
		return 0;
	}
	unk_0x35C3DC3A3BE08CC1(&(Global_1312577.f_10));
	func_83();
	return unk_0x8BF06EFC37AF94F0();
}

int func_85()
{
	if (Global_1312577 == 12)
	{
		return 0;
	}
	return 1;
}

void func_86(char* sParam0, bool bParam1)
{
	if (unk_0xB318FDA0D1ABDB20(sParam0))
	{
		return;
	}
	if (unk_0xA84EEA1DAC64D0D5(sParam0) > 23)
	{
		return;
	}
	if (func_90(sParam0))
	{
		return;
	}
	func_80();
	Global_1312577 = 0;
	StringCopy(&(Global_1312577.f_1), unk_0x11CA2334E341B424(), 24);
	Global_1312577.f_7 = unk_0x8DAF7A748E41AD46(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	func_89();
	func_88(bParam1);
	func_87();
}

void func_87()
{
	unk_0xF3148AAF69AF9CBC(&(Global_1312577.f_39), 1);
}

void func_88(bool bParam0)
{
	if (bParam0)
	{
		unk_0xF3148AAF69AF9CBC(&(Global_1312577.f_39), 0);
		return;
	}
	unk_0xC69E84EBBD7166E6(&(Global_1312577.f_39), 0);
}

void func_89()
{
	Global_1312577.f_8 = unk_0x372240B0254847DF(unk_0xD74C7D8D2E5E43D2(), 86400000);
	Global_1312577.f_9 = unk_0xD74C7D8D2E5E43D2();
}

bool func_90(char* sParam0)
{
	if (!func_85())
	{
		return 0;
	}
	if (Global_1312577 == 11)
	{
		return func_91(sParam0);
	}
	if (unk_0xB318FDA0D1ABDB20(sParam0))
	{
		return 0;
	}
	return unk_0x8DAF7A748E41AD46(sParam0) == unk_0x8DAF7A748E41AD46(&(Global_1312577.f_10));
}

bool func_91(char* sParam0)
{
	if (!func_85())
	{
		return 0;
	}
	if (unk_0xB318FDA0D1ABDB20(sParam0))
	{
		return 0;
	}
	return unk_0x8DAF7A748E41AD46(sParam0) == unk_0x8DAF7A748E41AD46(&(Global_1312577.f_14));
}

bool func_92()
{
	bool bVar0;
	
	if (unk_0x335F574AD77E59CE(Local_383.f_22))
	{
		if (func_4(Local_383.f_22))
		{
			if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
			{
				if (unk_0x58A69336FE7307D8(unk_0x81873881071CD9FE(), unk_0x1D1DAF7F94D5FE77(Local_383.f_22)))
				{
				}
			}
		}
	}
	if (!unk_0x236D8AD7EE179F46(iLocal_589, 0))
	{
		if (!unk_0x236D8AD7EE179F46(iLocal_589, 1))
		{
			bVar0 = true;
		}
		else if (!unk_0x236D8AD7EE179F46(iLocal_589, 2))
		{
			bVar0 = true;
		}
		else if (!unk_0x236D8AD7EE179F46(iLocal_589, 3))
		{
			bVar0 = true;
		}
		if (!bVar0)
		{
			unk_0xF3148AAF69AF9CBC(&iLocal_589, 0);
		}
	}
	return bVar0;
}

int func_93()
{
	if ((((((((((((((((((!func_14(unk_0x1329891157A54C63(), 1, 1) || unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE())) || !unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63())) || func_109(8, -1)) || func_109(15, -1)) || func_108()) || func_109(3, -1)) || func_123(unk_0x1329891157A54C63(), 1)) || func_107()) || func_110()) || func_106()) || func_105()) || func_103()) || func_102()) || unk_0xDBD19E93A4D01117()) || func_101() > 0) || !func_120()) || func_94()) || func_113())
	{
		return 0;
	}
	return 1;
}

int func_94()
{
	if (func_66(unk_0x1329891157A54C63(), 8))
	{
		return 1;
	}
	if (func_66(unk_0x1329891157A54C63(), 10))
	{
		return 1;
	}
	if (func_66(unk_0x1329891157A54C63(), 12))
	{
		return 1;
	}
	if (func_66(unk_0x1329891157A54C63(), 14))
	{
		return 1;
	}
	if (func_66(unk_0x1329891157A54C63(), 13))
	{
		return 1;
	}
	if (func_100())
	{
		return 1;
	}
	if (func_99())
	{
		return 1;
	}
	if (!func_98() && !func_97())
	{
		if (!func_96())
		{
			if (!func_95())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_95()
{
	int iVar0;
	
	if (unk_0x236D8AD7EE179F46(Global_2451473.f_1623, 7))
	{
		return 1;
	}
	iVar0 = Global_1343666[func_76(-1)];
	if (unk_0x236D8AD7EE179F46(iVar0, 6))
	{
		unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_1623), 7);
		return 1;
	}
	if (func_98())
	{
		return 1;
	}
	if (func_97())
	{
		return 1;
	}
	return 0;
}

bool func_96()
{
	return unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_128, 2);
}

bool func_97()
{
	return Global_1315880;
}

bool func_98()
{
	return Global_1315882;
}

int func_99()
{
	if (unk_0x236D8AD7EE179F46(Global_2451473.f_1623, 28) && !unk_0x236D8AD7EE179F46(Global_2451473.f_1623, 29))
	{
		return 1;
	}
	return 0;
}

bool func_100()
{
	return unk_0x236D8AD7EE179F46(Global_2451473.f_1624, 3);
}

int func_101()
{
	return Global_1585045[unk_0x1329891157A54C63() /*400*/].f_178;
}

int func_102()
{
	if (Global_15693 != 0 || unk_0xE1772957381F609F())
	{
		return 1;
	}
	return 0;
}

bool func_103()
{
	return func_104();
}

bool func_104()
{
	return Global_1328429.f_40 == 3;
}

bool func_105()
{
	return Global_2422670.f_2420.f_585;
}

bool func_106()
{
	return Global_90861.f_297 > 0;
}

bool func_107()
{
	return unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_39.f_18, 0);
}

var func_108()
{
	return Global_2394660;
}

bool func_109(int iParam0, int iParam1)
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

bool func_110()
{
	return unk_0x48E480685981C7D4() <= Global_17238.f_5630 + 100;
}

int func_111(char* sParam0)
{
	if (unk_0xB318FDA0D1ABDB20(sParam0))
	{
		return 0;
	}
	if (!func_85())
	{
		return 0;
	}
	if (Global_1312577 == 11)
	{
		if (unk_0xA84EEA1DAC64D0D5(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0xA84EEA1DAC64D0D5(sParam0) > 23)
	{
		return 0;
	}
	return func_90(sParam0);
}

void func_112()
{
	if (!func_85())
	{
		return;
	}
	if (!unk_0x8DAF7A748E41AD46(unk_0x11CA2334E341B424()) == Global_1312577.f_7)
	{
		return;
	}
	func_80();
}

int func_113()
{
	if (func_114(14))
	{
		return 1;
	}
	if (func_114(0))
	{
		return 1;
	}
	return 0;
}

bool func_114(int iParam0)
{
	int iVar0;
	
	iVar0 = func_75(2452, -1, 0);
	return unk_0x236D8AD7EE179F46(iVar0, iParam0);
}

int func_115()
{
	if (!func_119(unk_0x1329891157A54C63()))
	{
		if (func_118(unk_0x1329891157A54C63()) || func_117(unk_0x1329891157A54C63()) != -1)
		{
			return 1;
		}
		if (func_116(unk_0x1329891157A54C63()) && Global_1573867.f_4 == 133)
		{
			return 1;
		}
	}
	return 0;
}

bool func_116(int iParam0)
{
	return unk_0x236D8AD7EE179F46(Global_1606167[iParam0 /*12*/].f_1, 4);
}

int func_117(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1606167[iVar0 /*12*/];
	}
	return -1;
}

int func_118(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x236D8AD7EE179F46(Global_1606167[iVar0 /*12*/].f_1, 0);
	}
	return 0;
}

bool func_119(int iParam0)
{
	return unk_0x236D8AD7EE179F46(Global_1606167[iParam0 /*12*/].f_1, 2);
}

int func_120()
{
	if (func_121() == 0)
	{
		return 1;
	}
	return 0;
}

int func_121()
{
	return Global_1312466.f_18;
}

int func_122(int iParam0)
{
	if (!func_14(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1585045[iParam0 /*400*/].f_35;
}

int func_123(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_124(iParam0))
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

bool func_124(int iParam0)
{
	return func_125(iParam0);
}

bool func_125(int iParam0)
{
	return unk_0x236D8AD7EE179F46(Global_1585045[iParam0 /*400*/].f_13.f_1, 0);
}

void func_126()
{
	if (bLocal_104)
	{
		if (!unk_0xFBACB273AA628CC5(Global_1698716))
		{
			Global_1698716 = unk_0xA949BE56543040D2(Global_1698717);
			unk_0x8F827BB0F6ED7AA8(Global_1698716, 293);
			unk_0xD6DF56BB9537BCC5(Global_1698716, 1f);
			unk_0x6FA15F9609E21DA5(Global_1698716, 0);
			unk_0x2AB7C42FF2AF476D(Global_1698716, "IMPEX_BLIP_FM");
			if (func_143())
			{
				unk_0x20F5C387A2DC0C80(Global_1698716, 1);
			}
		}
	}
	else if (unk_0xFBACB273AA628CC5(Global_1698716))
	{
		unk_0x0A8175F24237A3D4(&Global_1698716);
		if (bLocal_313)
		{
			if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
			{
				if (unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()))
				{
					if (!func_138(unk_0xE495E987CB2BE7EF(unk_0x1329891157A54C63()), 1215605247, &uLocal_344, 0, 500, 1, 0))
					{
						if (func_113())
						{
							func_137("IMPEX_HIPR_DAM", -1);
						}
					}
				}
			}
		}
	}
	if (bLocal_105)
	{
		if (iLocal_126 == -1)
		{
			iLocal_126 = func_133(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), 4, -1);
			if (iLocal_126 != -1)
			{
				func_127(iLocal_126, 1);
			}
		}
	}
	else if (iLocal_126 != -1)
	{
		func_127(iLocal_126, 0);
		iLocal_126 = -1;
	}
}

void func_127(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 39:
			func_128(39, bParam1);
			break;
		
		case 40:
			func_128(40, bParam1);
			break;
		
		case 41:
			func_128(41, bParam1);
			break;
		
		case 42:
			func_128(42, bParam1);
			break;
		
		case 43:
			func_128(43, bParam1);
			break;
		
		case 44:
			func_128(44, bParam1);
			break;
		
		default:
			break;
	}
}

void func_128(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_74(iParam0, 8, 0))
		{
			func_132(iParam0, 8, 0);
			func_131(iParam0);
		}
	}
	else if (func_74(iParam0, 8, 0))
	{
		func_129(iParam0, 8, 0);
		func_131(iParam0);
	}
}

void func_129(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xC69E84EBBD7166E6(&(Global_90861.f_1279[iParam0]), iParam1);
	}
	else if (unk_0x1C6DF6AD69BE853E())
	{
		if (func_78() == 0)
		{
			uVar0 = func_75(func_77(iParam0), -1, 0);
			unk_0xC69E84EBBD7166E6(&uVar0, iParam1);
			func_130(func_77(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&(Global_98931.f_668[iParam0]), iParam1);
	}
}

void func_130(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2459767[iParam0 /*5*/][func_76(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x123B783056E76C4E(iVar0, iParam1, iParam3);
	}
}

void func_131(int iParam0)
{
	Global_90861.f_156[iParam0] = 1;
	Global_90861.f_155 = 1;
}

void func_132(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xF3148AAF69AF9CBC(&(Global_90861.f_1279[iParam0]), iParam1);
	}
	else if (unk_0x1C6DF6AD69BE853E())
	{
		if (func_78() == 0)
		{
			uVar0 = func_75(func_77(iParam0), -1, 0);
			unk_0xF3148AAF69AF9CBC(&uVar0, iParam1);
			func_130(func_77(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xF3148AAF69AF9CBC(&(Global_98931.f_668[iParam0]), iParam1);
	}
}

int func_133(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 44)
	{
		if (iParam3 == 5 || iParam3 == func_136(iVar0))
		{
			iVar4 = iVar0;
			if (func_135(iVar4))
			{
				fVar1 = unk_0x0D6E79537424BACE(Param0, func_134(iVar0, 0), 1);
				if (fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1))
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_134(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

bool func_135(int iParam0)
{
	bool bVar0;
	
	switch (iParam0)
	{
		case 39:
			bVar0 = unk_0xFBACB273AA628CC5(Global_90861.f_202[39]);
			break;
		
		case 40:
			bVar0 = unk_0xFBACB273AA628CC5(Global_90861.f_202[40]);
			break;
		
		case 41:
			bVar0 = unk_0xFBACB273AA628CC5(Global_90861.f_202[41]);
			break;
		
		case 42:
			bVar0 = unk_0xFBACB273AA628CC5(Global_90861.f_202[42]);
			break;
		
		case 43:
			bVar0 = unk_0xFBACB273AA628CC5(Global_90861.f_202[43]);
			break;
		
		case 44:
			bVar0 = unk_0xFBACB273AA628CC5(Global_90861.f_202[44]);
			break;
	}
	return bVar0;
}

int func_136(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 5;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
	}
	return 5;
}

void func_137(char* sParam0, int iParam1)
{
	unk_0x522099B37CAE9E12(sParam0);
	unk_0xC592EBAF1D879BDC(0, 0, 1, iParam1);
}

int func_138(int iParam0, int iParam1, var uParam2, float fParam3, int iParam4, bool bParam5, int iParam6)
{
	if (!func_421(uParam2))
	{
		func_420(uParam2, 0, 0);
	}
	fParam3 = 0f;
	if (func_139(iParam0, iParam1, 1, uParam2, fParam3, iParam4, bParam5, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_139(int iParam0, int iParam1, bool bParam2, var uParam3, float fParam4, int iParam5, bool bParam6, var uParam7)
{
	var uVar0;
	var uVar1;
	var uVar2;
	struct<8> Var3;
	
	if (!func_421(uParam3))
	{
		func_420(uParam3, 0, 0);
	}
	func_142(&Var3, iParam1);
	if (unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		if (!unk_0x930F8FBB8E9537CC(iParam0))
		{
			if (func_140(iParam0, iParam1, 30))
			{
				if (unk_0xCF0C46D719D5302C(iParam0))
				{
					uVar0 = unk_0x8F1CCE5AF629C4D3(iParam0);
					if (!unk_0x5FEB513A4402FD59(uVar0))
					{
						if (unk_0x0452D5BF20AD945A(iVar0))
						{
							uVar2 = unk_0x1B503E81E3B3D65F(iVar0);
							if (bParam2)
							{
								if (unk_0xCEE65C591BCBDD69(iParam1, uVar2, fParam4, -1))
								{
									if (uParam7 || (!unk_0xFB8E75A55F90EC6A(iParam1, uVar2, 2) && !(Var3.f_7 != 0 && unk_0xFB8E75A55F90EC6A(iParam1, uVar2, 3))))
									{
										if (bParam6)
										{
											return 1;
										}
										else if (iParam5 <= 0 || unk_0x013F97B9D88B92CA(unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), *uParam3)) >= iParam5)
										{
											return 1;
										}
										else
										{
											return 0;
										}
									}
								}
							}
							else if (unk_0xCEE65C591BCBDD69(iParam1, uVar2, fParam4, -1))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || unk_0x013F97B9D88B92CA(unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
							else if (unk_0xFB8E75A55F90EC6A(iParam1, uVar2, 2))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || unk_0x013F97B9D88B92CA(unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
							else if (Var3.f_7 != 0 && unk_0xFB8E75A55F90EC6A(iParam1, uVar2, 3))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || unk_0x013F97B9D88B92CA(unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
						}
						else if (unk_0xE5AB05962FA1FF3F(iVar0, 0))
						{
							uVar1 = unk_0xE68E6B44DABA9C05(iVar0, 0);
							if (unk_0x86CCCD2FAE9D5E65(uVar1))
							{
								if (bParam2)
								{
									if (unk_0x75DFF8D26168ED92(iParam1, iVar1, fParam4, -1))
									{
										if (uParam7 || (!unk_0xFA9CDFD0DB3E1F3B(iParam1, iVar1, 2) && !(Var3.f_7 != 0 && unk_0xFA9CDFD0DB3E1F3B(iParam1, iVar1, 3))))
										{
											if (bParam6)
											{
												return 1;
											}
											else if (iParam5 <= 0 || unk_0x013F97B9D88B92CA(unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), *uParam3)) >= iParam5)
											{
												return 1;
											}
											else
											{
												return 0;
											}
										}
									}
								}
								else if (unk_0x75DFF8D26168ED92(iParam1, iVar1, fParam4, -1))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || unk_0x013F97B9D88B92CA(unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
								else if (unk_0xFA9CDFD0DB3E1F3B(iParam1, iVar1, 2))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || unk_0x013F97B9D88B92CA(unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
								else if (Var3.f_7 != 0 && unk_0xFA9CDFD0DB3E1F3B(iParam1, iVar1, 3))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || unk_0x013F97B9D88B92CA(unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
							}
						}
						else if (bParam2)
						{
							if (unk_0x75DFF8D26168ED92(iParam1, iParam0, fParam4, -1))
							{
								if (uParam7 || (!unk_0xFA9CDFD0DB3E1F3B(iParam1, iParam0, 2) && !(Var3.f_7 != 0 && unk_0xFA9CDFD0DB3E1F3B(iParam1, iParam0, 3))))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || unk_0x013F97B9D88B92CA(unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
							}
						}
						else if (unk_0x75DFF8D26168ED92(iParam1, iParam0, fParam4, -1))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || unk_0x013F97B9D88B92CA(unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), *uParam3)) >= iParam5)
							{
								return 1;
							}
							else
							{
								return 0;
							}
						}
						else if (unk_0xFA9CDFD0DB3E1F3B(iParam1, iParam0, 2))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || unk_0x013F97B9D88B92CA(unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), *uParam3)) >= iParam5)
							{
								return 1;
							}
							else
							{
								return 0;
							}
						}
						else if (Var3.f_7 != 0 && unk_0xFA9CDFD0DB3E1F3B(iParam1, iParam0, 3))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || unk_0x013F97B9D88B92CA(unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), *uParam3)) >= iParam5)
							{
								return 1;
							}
							else
							{
								return 0;
							}
						}
					}
				}
				else if (unk_0xCF8AA94BAD0F766A(iParam0) || unk_0x9F76B19299294A0E(iParam0))
				{
					if (bParam2)
					{
						if (unk_0x75DFF8D26168ED92(iParam1, iParam0, fParam4, -1))
						{
							if (uParam7 || (!unk_0xFA9CDFD0DB3E1F3B(iParam1, iParam0, 2) && !(Var3.f_7 != 0 && unk_0xFA9CDFD0DB3E1F3B(iParam1, iParam0, 3))))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || unk_0x013F97B9D88B92CA(unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
						}
					}
					else if (unk_0x75DFF8D26168ED92(iParam1, iParam0, fParam4, -1))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || unk_0x013F97B9D88B92CA(unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), *uParam3)) >= iParam5)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
					else if (unk_0xFA9CDFD0DB3E1F3B(iParam1, iParam0, 2))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || unk_0x013F97B9D88B92CA(unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), *uParam3)) >= iParam5)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
					else if (Var3.f_7 != 0 && unk_0xFA9CDFD0DB3E1F3B(iParam1, iParam0, 3))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || unk_0x013F97B9D88B92CA(unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), *uParam3)) >= iParam5)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
				}
			}
		}
	}
	func_41(uParam3);
	return 0;
}

int func_140(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != -1)
	{
		if (unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(iParam0, 1), func_141(iParam1), 1) <= IntToFloat(iParam2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_141(int iParam0)
{
	switch (iParam0)
	{
		case 1215605247:
			return 1204.429f, -3110.847f, 4.3988f;
			break;
		
		case -1710530912:
			return 725.1831f, -1089.349f, 21.1692f;
			break;
		
		case 1131590004:
			return -1164.887f, -2011.105f, 12.25371f;
			break;
		
		case 916723671:
			return -330.44f, -143.39f, 39.33f;
			break;
		
		case 1340820069:
			return 106.28f, 6620.01f, 32.12f;
			break;
		
		case -866958545:
			return 1182.65f, 2641.9f, 38.05f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_142(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1215605247:
			*uParam0 = 99;
			uParam0->f_1 = 1215605247;
			uParam0->f_2 = 0;
			uParam0->f_3 = { 1204.429f, -3110.847f, 4.3988f };
			uParam0->f_6 = -247372382;
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_SIMEON";
			uParam0->f_9.f_1 = { 1210.884f, -3122.402f, 5.2118f };
			uParam0->f_9.f_4 = { 4.0534f, 0f, 32.6363f };
			uParam0->f_9.f_7 = 32.498f;
			uParam0->f_9.f_8 = { 1210.884f, -3122.402f, 5.2118f };
			uParam0->f_9.f_11 = { 4.0534f, 0f, 32.6363f };
			uParam0->f_9.f_14 = 32.498f;
			uParam0->f_27 = { 1204.157f, -3122.599f, 3.795331f };
			uParam0->f_27.f_3 = { 1204.24f, -3099.772f, 8.400777f };
			uParam0->f_27.f_6 = 7f;
			return;
			break;
		
		case 1:
		case -1710530912:
			*uParam0 = 99;
			uParam0->f_1 = -1710530912;
			uParam0->f_2 = 1;
			uParam0->f_3 = { 725.1831f, -1089.349f, 21.1692f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_PNS_2";
			uParam0->f_9.f_1 = { 734.3793f, -1078.791f, 23.4305f };
			uParam0->f_9.f_4 = { -16.432f, 0f, -19.7978f };
			uParam0->f_9.f_7 = 60.0199f;
			uParam0->f_9.f_8 = { 734.3027f, -1079.004f, 23.4973f };
			uParam0->f_9.f_11 = { -16.432f, 0f, -19.7978f };
			uParam0->f_9.f_14 = 60.0199f;
			uParam0->f_27 = { 738.8857f, -1088.516f, 20.55957f };
			uParam0->f_27.f_3 = { 718.613f, -1088.78f, 24.83263f };
			uParam0->f_27.f_6 = 7f;
			return;
			break;
		
		case 2:
		case 1131590004:
			*uParam0 = 99;
			uParam0->f_1 = 1131590004;
			uParam0->f_2 = 2;
			uParam0->f_3 = { -1164.887f, -2011.105f, 12.25371f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_NEUT_PNS_3";
			uParam0->f_9.f_1 = { -1161.774f, -2010.27f, 14.2468f };
			uParam0->f_9.f_4 = { -17.3415f, 0f, 113.6889f };
			uParam0->f_9.f_7 = 64.5334f;
			uParam0->f_9.f_8 = { -1161.639f, -2010.211f, 14.2928f };
			uParam0->f_9.f_11 = { -17.3415f, 0f, 113.6889f };
			uParam0->f_9.f_14 = 64.5334f;
			uParam0->f_27 = { -1169.723f, -2015.923f, 11.50441f };
			uParam0->f_27.f_3 = { -1160.558f, -2007.005f, 15.68027f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
		
		case 3:
		case 916723671:
			*uParam0 = 99;
			uParam0->f_1 = 916723671;
			uParam0->f_2 = 3;
			uParam0->f_3 = { -330.44f, -143.39f, 39.33f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_PNS_4";
			uParam0->f_9.f_1 = { -332.1567f, -141.0546f, 40.2864f };
			uParam0->f_9.f_4 = { -20.6629f, 0f, -134.7887f };
			uParam0->f_9.f_7 = 60.0241f;
			uParam0->f_9.f_8 = { -332.3621f, -140.8507f, 40.3956f };
			uParam0->f_9.f_11 = { -20.6629f, 0f, -134.7887f };
			uParam0->f_9.f_14 = 60.0241f;
			uParam0->f_27 = { -323.7998f, -146.2539f, 37.81492f };
			uParam0->f_27.f_3 = { -334.3432f, -141.7261f, 40.75964f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
		
		case 4:
		case 1340820069:
			*uParam0 = 99;
			uParam0->f_1 = 1340820069;
			uParam0->f_2 = 4;
			uParam0->f_3 = { 106.28f, 6620.01f, 32.12f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_PNS_5";
			uParam0->f_9.f_1 = { 106.688f, 6617.322f, 32.5026f };
			uParam0->f_9.f_4 = { -10.7437f, 0f, 21.7154f };
			uParam0->f_9.f_7 = 67.562f;
			uParam0->f_9.f_8 = { 106.7971f, 6617.048f, 32.5586f };
			uParam0->f_9.f_11 = { -10.7437f, 0f, 21.7154f };
			uParam0->f_9.f_14 = 67.562f;
			uParam0->f_27 = { 100.9759f, 6625.046f, 30.60301f };
			uParam0->f_27.f_3 = { 111.2522f, 6615.657f, 33.62929f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
		
		case 5:
		case -866958545:
			*uParam0 = 99;
			uParam0->f_1 = -866958545;
			uParam0->f_2 = 5;
			uParam0->f_3 = { 1182.65f, 2641.9f, 38.05f };
			uParam0->f_7 = 0;
			uParam0->f_9.f_1 = { 1184.206f, 2644.004f, 38.7458f };
			uParam0->f_9.f_4 = { -15.4014f, 0f, 161.4493f };
			uParam0->f_9.f_7 = 67.3374f;
			uParam0->f_9.f_8 = { 1184.345f, 2644.418f, 38.866f };
			uParam0->f_9.f_11 = { -15.4014f, 0f, 161.4493f };
			uParam0->f_9.f_14 = 67.3374f;
			uParam0->f_27 = { 1182.835f, 2634.775f, 36.55006f };
			uParam0->f_27.f_3 = { 1182.578f, 2647.955f, 39.58602f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
	}
}

int func_143()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_75(1189, -1, 0);
	if (!unk_0x236D8AD7EE179F46(iVar1, 1))
	{
		iVar0 = 1;
	}
	else if (!unk_0x236D8AD7EE179F46(iVar1, 2))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_144()
{
	if (bLocal_102)
	{
		if (!iLocal_103)
		{
			func_146(1215605247, 1, 0);
			func_145(1);
			iLocal_103 = 1;
		}
	}
	else if (iLocal_103)
	{
		func_146(1215605247, 0, 0);
		func_145(0);
		iLocal_103 = 0;
	}
}

void func_145(bool bParam0)
{
	if (Global_2451473.f_4361 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2451473.f_4361 = bParam0;
	}
}

void func_146(int iParam0, bool bParam1, bool bParam2)
{
	if (!unk_0x1C6DF6AD69BE853E())
	{
	}
	else if (bParam1)
	{
		if (!unk_0x236D8AD7EE179F46(Global_2451473.f_4340, func_147(iParam0)))
		{
			if (bParam2)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4340.f_1), func_147(iParam0));
			}
			unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4340), func_147(iParam0));
		}
	}
	else if (unk_0x236D8AD7EE179F46(Global_2451473.f_4340, func_147(iParam0)))
	{
		if (bParam2)
		{
			unk_0xC69E84EBBD7166E6(&(Global_2451473.f_4340.f_1), func_147(iParam0));
		}
		unk_0xC69E84EBBD7166E6(&(Global_2451473.f_4340), func_147(iParam0));
	}
}

int func_147(int iParam0)
{
	switch (iParam0)
	{
		case 1215605247:
			return 0;
			break;
		
		case -1710530912:
			return 1;
			break;
		
		case 1131590004:
			return 2;
			break;
		
		case 916723671:
			return 3;
			break;
		
		case 1340820069:
			return 4;
			break;
		
		case -866958545:
			return 5;
			break;
	}
	return 0;
}

void func_148()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x236D8AD7EE179F46(Local_383.f_23, 0))
	{
		if (iLocal_347 >= 32)
		{
			unk_0xC69E84EBBD7166E6(&iLocal_588, 5);
			iLocal_347 = 0;
			iLocal_319 = -1;
		}
		if (unk_0xC4FEBC724D547D78(unk_0xC3904F8771F37B7F(iLocal_347)))
		{
			iVar0 = unk_0x29A638E7EEEE6B16(unk_0xC3904F8771F37B7F(iLocal_347));
			iVar1 = unk_0xE495E987CB2BE7EF(iVar0);
			if (func_14(iVar0, 0, 1))
			{
				if (!unk_0x236D8AD7EE179F46(iLocal_588, 3))
				{
					if (unk_0x236D8AD7EE179F46(Local_459[iLocal_347 /*4*/].f_2, 1))
					{
						unk_0xF3148AAF69AF9CBC(&iLocal_588, 3);
					}
				}
				if (iLocal_319 == -1)
				{
					if (unk_0x335F574AD77E59CE(Local_383.f_22))
					{
						if (func_4(Local_383.f_22))
						{
							if (!unk_0x5FEB513A4402FD59(iVar1))
							{
								if (unk_0x58A69336FE7307D8(iVar1, unk_0x1D1DAF7F94D5FE77(Local_383.f_22)))
								{
									if (unk_0xB0B9E53CEFDB16AA(unk_0x1D1DAF7F94D5FE77(Local_383.f_22), -1) == iVar1)
									{
										iLocal_319 = iLocal_347;
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_347++;
		if (iLocal_347 >= 32)
		{
			unk_0xF3148AAF69AF9CBC(&iLocal_588, 5);
		}
		func_209();
		if (!unk_0x236D8AD7EE179F46(iLocal_588, 3))
		{
			if (!unk_0x236D8AD7EE179F46(Local_459[unk_0x519AAFF77CC141DF() /*4*/].f_2, 3))
			{
				if (!unk_0x236D8AD7EE179F46(Local_459[unk_0x519AAFF77CC141DF() /*4*/].f_2, 1))
				{
					if (func_207())
					{
						unk_0xF3148AAF69AF9CBC(&(Local_459[unk_0x519AAFF77CC141DF() /*4*/].f_2), 3);
					}
				}
			}
		}
	}
	if (iLocal_316 != Local_383.f_34)
	{
		if (Local_383.f_34 == 0)
		{
			if (!unk_0x335F574AD77E59CE(Local_383.f_22))
			{
				iLocal_316 = Local_383.f_34;
				unk_0xCD9A6588DBAF710A(iLocal_316);
			}
		}
		else
		{
			iLocal_316 = Local_383.f_34;
			unk_0xCD9A6588DBAF710A(iLocal_316);
		}
	}
	if (unk_0x236D8AD7EE179F46(Local_383.f_23, 0))
	{
		switch (Local_459[unk_0x519AAFF77CC141DF() /*4*/].f_3)
		{
			case 0:
				if (!Global_2451473.f_1551)
				{
				}
				if (unk_0x236D8AD7EE179F46(Local_459[unk_0x519AAFF77CC141DF() /*4*/].f_2, 3))
				{
					unk_0xC69E84EBBD7166E6(&(Local_459[unk_0x519AAFF77CC141DF() /*4*/].f_2), 3);
				}
				if (unk_0x236D8AD7EE179F46(iLocal_588, 21))
				{
					unk_0xC69E84EBBD7166E6(&iLocal_588, 21);
				}
				if (unk_0x236D8AD7EE179F46(Local_459[unk_0x519AAFF77CC141DF() /*4*/].f_2, 1))
				{
					unk_0xC69E84EBBD7166E6(&(Local_459[unk_0x519AAFF77CC141DF() /*4*/].f_2), 1);
				}
				if (((!func_123(unk_0x1329891157A54C63(), 1) && !func_107()) && !func_206(unk_0x1329891157A54C63(), 1)) || func_66(unk_0x1329891157A54C63(), 6))
				{
					if (unk_0x236D8AD7EE179F46(iLocal_588, 3))
					{
						unk_0xC69E84EBBD7166E6(&iLocal_588, 3);
					}
					if (unk_0x236D8AD7EE179F46(iLocal_588, 19))
					{
						unk_0xC69E84EBBD7166E6(&iLocal_588, 19);
					}
					if (unk_0x236D8AD7EE179F46(Local_459[unk_0x519AAFF77CC141DF() /*4*/].f_2, 3))
					{
						unk_0xC69E84EBBD7166E6(&(Local_459[unk_0x519AAFF77CC141DF() /*4*/].f_2), 3);
					}
					if (iLocal_318 != -1)
					{
						iLocal_318 = -1;
					}
					if (unk_0x236D8AD7EE179F46(Local_383.f_23, 0))
					{
						if (!unk_0x236D8AD7EE179F46(iLocal_588, 16))
						{
							unk_0xF3148AAF69AF9CBC(&iLocal_588, 16);
							func_205(6, 1);
							unk_0xF3148AAF69AF9CBC(&iLocal_588, 7);
							Global_2451473.f_1550 = 1;
							Global_2451473.f_1551 = 0;
						}
						if (unk_0x63A7F7D75B0E5FA9(1))
						{
							if (unk_0x335F574AD77E59CE(Local_383.f_22))
							{
								if (func_200())
								{
									if (Local_383.f_67 != 0)
									{
										unk_0xB5A91586385F755B(Local_383.f_67, 1);
									}
									Local_459[unk_0x519AAFF77CC141DF() /*4*/].f_3 = 1;
									Global_1698726 = unk_0xE122DDAE9E94767B(unk_0x1D1DAF7F94D5FE77(Local_383.f_22));
									if (unk_0xC5ABD699DDC9D5A0(unk_0x14B7103DBD149FFE(unk_0x1D1DAF7F94D5FE77(Local_383.f_22))))
									{
										unk_0x8F827BB0F6ED7AA8(Global_1698726, 348);
										func_137("IMPEX_HIPB_INT", -1);
									}
									else
									{
										unk_0x8F827BB0F6ED7AA8(Global_1698726, 225);
										func_137("IMPEX_HIPR_INT", -1);
									}
									unk_0x1B86E7A8766EA6B4(Global_1698726, 2);
									unk_0x2AB7C42FF2AF476D(Global_1698726, "IMPEX_HIPR_BLP");
									func_205(6, 1);
									unk_0xF3148AAF69AF9CBC(&iLocal_588, 7);
									Global_2451473.f_1550 = 1;
									if (func_113())
									{
										unk_0x885CCA7D7CA0FAE3(Global_1698726, 0);
									}
								}
							}
						}
					}
				}
				else if (!Global_2451473.f_1551)
				{
					Global_2451473.f_1551 = 1;
				}
				break;
			
			case 1:
				if (unk_0x335F574AD77E59CE(Local_383.f_22))
				{
					if (unk_0x7404950238A154C2(unk_0x1D1DAF7F94D5FE77(Local_383.f_22), 0))
					{
						if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
						{
							if (unk_0x58A69336FE7307D8(unk_0x81873881071CD9FE(), unk_0x1D1DAF7F94D5FE77(Local_383.f_22)))
							{
								func_199(1);
								if (func_198())
								{
									func_193(0);
								}
								if (unk_0xFBACB273AA628CC5(Global_1698726))
								{
									unk_0x0A8175F24237A3D4(&Global_1698726);
								}
							}
							else
							{
								func_199(0);
								if (!func_192(unk_0x1D1DAF7F94D5FE77(Local_383.f_22), 0))
								{
									if (!unk_0xFBACB273AA628CC5(Global_1698726))
									{
										if (!iLocal_125)
										{
											func_191();
										}
									}
								}
							}
						}
						if (!unk_0x236D8AD7EE179F46(iLocal_588, 19))
						{
							if (func_200())
							{
								if (func_189())
								{
									if (!unk_0x58A69336FE7307D8(unk_0x81873881071CD9FE(), unk_0x1D1DAF7F94D5FE77(Local_383.f_22)))
									{
										if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0xB6AE0DAE06D56288(unk_0x1D1DAF7F94D5FE77(Local_383.f_22), 1)) < 2500f)
										{
											if (func_113())
											{
												func_137("FM_IMP_JAC", -1);
											}
											unk_0xF3148AAF69AF9CBC(&iLocal_588, 19);
										}
									}
								}
							}
						}
						if (func_188())
						{
						}
						func_187();
					}
					else
					{
						if (unk_0xFBACB273AA628CC5(Global_1698726))
						{
							unk_0x0A8175F24237A3D4(&Global_1698726);
						}
						func_205(6, 0);
						unk_0xC69E84EBBD7166E6(&iLocal_588, 7);
						Local_459[unk_0x519AAFF77CC141DF() /*4*/].f_3 = 3;
					}
				}
				else
				{
					if (Local_383.f_67 != 0)
					{
						unk_0xB5A91586385F755B(Local_383.f_67, 0);
					}
					if (unk_0xFBACB273AA628CC5(Global_1698726))
					{
						unk_0x0A8175F24237A3D4(&Global_1698726);
					}
					func_205(6, 0);
					unk_0xC69E84EBBD7166E6(&iLocal_588, 7);
					Local_459[unk_0x519AAFF77CC141DF() /*4*/].f_3 = 3;
				}
				if (unk_0x236D8AD7EE179F46(iLocal_588, 3))
				{
					func_205(6, 0);
					unk_0xC69E84EBBD7166E6(&iLocal_588, 7);
					if (unk_0xFBACB273AA628CC5(Global_1698726))
					{
						unk_0x0A8175F24237A3D4(&Global_1698726);
					}
					Local_459[unk_0x519AAFF77CC141DF() /*4*/].f_3 = 3;
				}
				if (Local_383.f_26 == 3)
				{
					if (Local_459[unk_0x519AAFF77CC141DF() /*4*/].f_3 == 1)
					{
						if (Local_383.f_67 != 0)
						{
							unk_0xB5A91586385F755B(Local_383.f_67, 0);
						}
						if (unk_0xFBACB273AA628CC5(Global_1698726))
						{
							unk_0x0A8175F24237A3D4(&Global_1698726);
						}
						if (unk_0x236D8AD7EE179F46(iLocal_588, 16))
						{
							unk_0xC69E84EBBD7166E6(&iLocal_588, 16);
						}
						func_205(6, 0);
						unk_0xC69E84EBBD7166E6(&iLocal_588, 7);
						Local_459[unk_0x519AAFF77CC141DF() /*4*/].f_3 = 3;
					}
				}
				break;
			
			case 3:
				func_199(0);
				break;
		}
		if (func_184())
		{
			if (func_183("IMPEX_HIPR_INT"))
			{
				unk_0xB8BB626315D394F5(1);
			}
			if (unk_0xFBACB273AA628CC5(Global_1698726))
			{
				unk_0x0A8175F24237A3D4(&Global_1698726);
			}
			if (Local_383.f_67 != 0)
			{
				unk_0xB5A91586385F755B(Local_383.f_67, 0);
			}
			Local_459[unk_0x519AAFF77CC141DF() /*4*/].f_3 = 3;
			func_205(6, 0);
			unk_0xC69E84EBBD7166E6(&iLocal_588, 7);
			if (unk_0x236D8AD7EE179F46(iLocal_588, 16))
			{
				unk_0xC69E84EBBD7166E6(&iLocal_588, 16);
			}
			func_199(0);
		}
		func_157();
		if (Local_459[unk_0x519AAFF77CC141DF() /*4*/].f_3 > 0 && Local_459[unk_0x519AAFF77CC141DF() /*4*/].f_3 < 3)
		{
			func_154();
		}
	}
	else
	{
		if (Local_459[unk_0x519AAFF77CC141DF() /*4*/].f_3 != 0)
		{
			if (Local_383.f_67 != 0)
			{
				unk_0xB5A91586385F755B(Local_383.f_67, 0);
			}
			Local_459[unk_0x519AAFF77CC141DF() /*4*/].f_3 = 0;
		}
		if (unk_0x236D8AD7EE179F46(iLocal_588, 21))
		{
			unk_0xC69E84EBBD7166E6(&iLocal_588, 21);
		}
		if (Global_2451473.f_1550)
		{
			if (!func_421(&uLocal_329))
			{
				func_420(&uLocal_329, 0, 0);
			}
			else if (func_419(&uLocal_329, 5000, 0))
			{
				func_41(&uLocal_329);
				Global_2451473.f_1550 = 0;
			}
		}
		if (unk_0x236D8AD7EE179F46(iLocal_588, 16))
		{
			if (Local_383.f_34 == 0)
			{
				unk_0xC69E84EBBD7166E6(&iLocal_588, 16);
			}
		}
	}
	func_149();
}

void func_149()
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	var uVar7;
	bool bVar8;
	
	if (unk_0x335F574AD77E59CE(Local_383.f_22))
	{
		if (func_4(Local_383.f_22))
		{
			if (!func_189())
			{
				if (!func_421(&uLocal_594))
				{
					func_420(&uLocal_594, 0, 0);
				}
				if (func_419(&uLocal_594, 1000, 0))
				{
					if (unk_0x402F3F19221FF696(Local_383.f_22))
					{
						Var3 = { unk_0xB6AE0DAE06D56288(unk_0x1D1DAF7F94D5FE77(Local_383.f_22), 1) };
						if (func_152(Var3, func_153(39), func_134(39, 0)))
						{
							if (func_151(39, 0, &Var0, &uVar6, &uVar7))
							{
								bVar8 = true;
							}
						}
						else if (func_152(Var3, func_153(40), func_134(40, 0)))
						{
							if (func_151(40, 0, &Var0, &uVar6, &uVar7))
							{
								bVar8 = true;
							}
						}
						else if (func_152(Var3, func_153(41), func_134(41, 0)))
						{
							if (func_151(41, 0, &Var0, &uVar6, &uVar7))
							{
								bVar8 = true;
							}
						}
						else if (func_152(Var3, func_153(42), func_134(42, 0)))
						{
							if (func_151(42, 0, &Var0, &uVar6, &uVar7))
							{
								bVar8 = true;
							}
						}
						else if (func_152(Var3, func_153(43), func_134(43, 0)))
						{
							if (func_151(43, 0, &Var0, &uVar6, &uVar7))
							{
								bVar8 = true;
							}
						}
						else if (func_152(Var3, func_153(44), func_134(44, 0)))
						{
							if (func_151(44, 0, &Var0, &uVar6, &uVar7))
							{
								bVar8 = true;
							}
						}
					}
					func_41(&uLocal_594);
				}
				if (bVar8)
				{
					if (unk_0x402F3F19221FF696(Local_383.f_22))
					{
						if (func_150(unk_0x1D1DAF7F94D5FE77(Local_383.f_22), 1, 0, 0))
						{
							unk_0xB901CB880393ADF7(unk_0x1D1DAF7F94D5FE77(Local_383.f_22), Var0, 0, 0, 1);
							unk_0xC24172029826A66F(unk_0x1D1DAF7F94D5FE77(Local_383.f_22), uVar6);
							unk_0x4B9126AEF0E84DA7(unk_0x1D1DAF7F94D5FE77(Local_383.f_22), 1);
							unk_0xA8F22633ACC22189(unk_0x1D1DAF7F94D5FE77(Local_383.f_22), false);
							unk_0xC390A6485FB80923(unk_0x1D1DAF7F94D5FE77(Local_383.f_22), 1);
						}
					}
				}
			}
		}
	}
}

int func_150(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = unk_0x59D35AC211D17FAB(iParam0) + 1;
	if (!unk_0x930F8FBB8E9537CC(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!unk_0xBEB00EB4ADDC2A33(iParam0, (iVar0 - 1)))
			{
				iVar2 = unk_0xB0B9E53CEFDB16AA(iParam0, (iVar0 - 1));
				if (iParam3 && iVar2 == unk_0x81873881071CD9FE())
				{
				}
				else if (bParam2)
				{
					if (!unk_0x5FEB513A4402FD59(iVar2))
					{
						if (unk_0x0452D5BF20AD945A(iVar2))
						{
							return 0;
						}
					}
					else if (iParam1 == 0)
					{
						return 0;
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else
				{
					iVar3 = unk_0xB0B9E53CEFDB16AA(iParam0, (iVar0 - 1));
					if (!unk_0x5FEB513A4402FD59(iVar3))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	return 1;
}

bool func_151(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam2 = { 0f, 0f, 0f };
	*uParam3 = 0f;
	*uParam4 = 1f;
	if (iParam0 == 39)
	{
		if (iParam1 == 0)
		{
			*uParam2 = { -1136.491f, -1991.127f, 12.1674f };
			*uParam3 = 312.0856f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { -1133.253f, -1993.854f, 12.1687f };
			*uParam3 = 314.389f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { -1130.806f, -1997.875f, 12.1713f };
			*uParam3 = 317.9671f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { -1127.329f, -2001.548f, 12.1741f };
			*uParam3 = 315.1484f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { -1123.286f, -2006.263f, 12.1791f };
			*uParam3 = 236.5043f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { -1115.469f, -2012.307f, 12.1802f };
			*uParam3 = 264.1943f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { -1110.562f, -2015.446f, 12.1999f };
			*uParam3 = 302.6618f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { -1121.69f, -2000.23f, 12.1718f };
			*uParam3 = 238.2144f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { -1111.589f, -2006.454f, 12.1692f };
			*uParam3 = 238.336f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { -1138.648f, -1979.826f, 12.1634f };
			*uParam3 = 278.7886f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { -1124.321f, -1978.124f, 12.1856f };
			*uParam3 = 276.276f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { -1110.264f, -1975.971f, 12.1588f };
			*uParam3 = 279.4681f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 12)
		{
			*uParam2 = { -1128.293f, -1984.828f, 12.1659f };
			*uParam3 = 295.1603f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 13)
		{
			*uParam2 = { -1126.066f, -1991.346f, 12.1683f };
			*uParam3 = 227.6551f;
			*uParam4 = 0.7f;
		}
	}
	else if (iParam0 == 40)
	{
		if (iParam1 == 0)
		{
			*uParam2 = { 717.5009f, -1082.013f, 21.2916f };
			*uParam3 = 3.6761f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { 716.7202f, -1069.264f, 21.2546f };
			*uParam3 = 3.5291f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { 717.009f, -1058.204f, 21.0152f };
			*uParam3 = 355.8705f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { 712.7385f, -1083.534f, 21.3647f };
			*uParam3 = 359.9393f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { 712.7766f, -1072.967f, 21.307f };
			*uParam3 = 359.9453f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { 712.8783f, -1061.094f, 21.1883f };
			*uParam3 = 357.2739f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { 708.5093f, -1081.285f, 21.3978f };
			*uParam3 = 358.5361f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { 708.9708f, -1068.358f, 21.3519f };
			*uParam3 = 357.9787f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { 710.7449f, -1053.611f, 21.2011f };
			*uParam3 = 339.2883f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { 704.6691f, -1079.536f, 21.3804f };
			*uParam3 = 359.4009f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { 704.4818f, -1065.911f, 21.4447f };
			*uParam3 = 0.9557f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { 716.4031f, -1044.615f, 20.9157f };
			*uParam3 = 280.6607f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 12)
		{
			*uParam2 = { 725.7982f, -1044.226f, 21.046f };
			*uParam3 = 271.6107f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 13)
		{
			*uParam2 = { 727.0708f, -1047.951f, 21.2648f };
			*uParam3 = 270.6534f;
			*uParam4 = 0.1f;
		}
	}
	else if (iParam0 == 41)
	{
		if (iParam1 == 0)
		{
			*uParam2 = { -365.9221f, -125.5196f, 37.6785f };
			*uParam3 = 65.4762f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { -362.3411f, -122.0465f, 37.6788f };
			*uParam3 = 68.8025f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { -363.4988f, -117.1944f, 37.6792f };
			*uParam3 = 78.9594f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { -372.3338f, -115.238f, 37.6796f };
			*uParam3 = 74.7182f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { -371.1733f, -121.0303f, 37.6797f };
			*uParam3 = 62.123f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { -369.2153f, -127.0247f, 37.6784f };
			*uParam3 = 61.9032f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { -371.8094f, -130.2364f, 37.6798f };
			*uParam3 = 52.11f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { -378.4785f, -130.0621f, 37.6796f };
			*uParam3 = 36.469f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { -387.4156f, -118.9469f, 37.6829f };
			*uParam3 = 38.3679f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { -382.709f, -112.8489f, 37.6985f };
			*uParam3 = 65.0749f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { -397.1963f, -107.1517f, 37.6834f };
			*uParam3 = 33.315f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { -404.3896f, -96.5394f, 39.0491f };
			*uParam3 = 34.1156f;
			*uParam4 = 0.1f;
		}
	}
	else if (iParam0 == 42)
	{
		if (iParam1 == 0)
		{
			*uParam2 = { 120.3574f, 6599.573f, 31.0156f };
			*uParam3 = 269.5703f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { 123.4549f, 6594.44f, 30.9958f };
			*uParam3 = 269.5584f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { 126.712f, 6589.798f, 30.9386f };
			*uParam3 = 269.5731f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { 133.9324f, 6585.555f, 30.9551f };
			*uParam3 = 269.4128f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { 136.8265f, 6580.12f, 31.013f };
			*uParam3 = 269.4126f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { 141.8716f, 6575.214f, 30.9522f };
			*uParam3 = 270.5616f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { 140.8046f, 6606.312f, 30.8449f };
			*uParam3 = 178.8423f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { 145.8316f, 6601.099f, 30.85f };
			*uParam3 = 180.9941f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { 150.5503f, 6596.533f, 30.8449f };
			*uParam3 = 177.9041f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { 155.6983f, 6591.292f, 30.8449f };
			*uParam3 = 177.9025f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { 159.1213f, 6580.544f, 30.841f };
			*uParam3 = 208.1021f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { 153.3835f, 6581.357f, 30.843f };
			*uParam3 = 208.9007f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 12)
		{
			*uParam2 = { 160.6086f, 6567.498f, 30.8061f };
			*uParam3 = 210.3887f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 13)
		{
			*uParam2 = { 166.7977f, 6567.135f, 30.7544f };
			*uParam3 = 210.3833f;
			*uParam4 = 0.2f;
		}
	}
	else if (iParam0 == 43)
	{
		if (iParam1 == 0)
		{
			*uParam2 = { 1182.498f, 2653.582f, 36.8099f };
			*uParam3 = 304.7889f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { 1190.678f, 2661.143f, 36.8165f };
			*uParam3 = 321.483f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { 1196.733f, 2669.66f, 36.7883f };
			*uParam3 = 345.6812f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { 1200.466f, 2666.494f, 36.8099f };
			*uParam3 = 347.5349f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { 1205.586f, 2667.136f, 36.8099f };
			*uParam3 = 352.7466f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { 1210.698f, 2666.592f, 36.8099f };
			*uParam3 = 7.6557f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { 1193.573f, 2688.714f, 36.7457f };
			*uParam3 = 87.5179f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { 1181.127f, 2689.26f, 36.8532f };
			*uParam3 = 87.4959f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { 1162.459f, 2689.204f, 37.1039f };
			*uParam3 = 87.5173f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { 1162.663f, 2677.458f, 37.078f };
			*uParam3 = 268.6483f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { 1171.858f, 2677.125f, 36.995f };
			*uParam3 = 267.8824f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { 1224.358f, 2677.226f, 36.6702f };
			*uParam3 = 272.1325f;
			*uParam4 = 0.1f;
		}
	}
	else if (iParam0 == 44)
	{
		if (iParam1 == 0)
		{
			*uParam2 = { -199.5331f, -1301.69f, 30.296f };
			*uParam3 = 263.703f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { -205.9477f, -1303.868f, 30.2575f };
			*uParam3 = 1.5267f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { -200.7847f, -1298.636f, 30.296f };
			*uParam3 = 89.6847f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { -193.9668f, -1305.65f, 30.3643f };
			*uParam3 = 86.5508f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { -213.389f, -1305.822f, 30.3533f };
			*uParam3 = 88.0277f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { -210.4487f, -1301.42f, 30.296f };
			*uParam3 = 50.2894f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { -193.1976f, -1302.892f, 30.296f };
			*uParam3 = 310.5602f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { -198.882f, -1304.772f, 30.325f };
			*uParam3 = 268.713f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { -230.2501f, -1305.596f, 30.3533f };
			*uParam3 = 89.1508f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { -186.4736f, -1305.746f, 30.3495f };
			*uParam3 = 270.2632f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { -236.5289f, -1302.071f, 30.296f };
			*uParam3 = 270.2677f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { -181.8344f, -1299.311f, 30.296f };
			*uParam3 = 88.0286f;
			*uParam4 = 0.1f;
		}
	}
	return !func_26(*uParam2, 0f, 0f, 0f, 0);
}

int func_152(struct<3> Param0, var uParam3, struct<3> Param4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xD58E02A689955E29(Param0))
	{
		iVar0 = unk_0xA17AB437A96481B6(Param4, uParam3);
		if (!unk_0x59F36F53A82C2E72(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0xB5745E430823E791(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

char* func_153(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "";
			break;
		
		case 0:
			return "v_hairdresser";
			break;
		
		case 1:
			return "v_barbers";
			break;
		
		case 2:
			return "v_barbers";
			break;
		
		case 3:
			return "v_barbers";
			break;
		
		case 4:
			return "v_barbers";
			break;
		
		case 5:
			return "v_barbers";
			break;
		
		case 6:
			return "v_barbers";
			break;
		
		case 7:
			return "v_clotheslo";
			break;
		
		case 8:
			return "v_clotheslo";
			break;
		
		case 9:
			return "v_clotheslo";
			break;
		
		case 10:
			return "v_clotheslo";
			break;
		
		case 11:
			return "v_clotheslo";
			break;
		
		case 12:
			return "v_clotheslo";
			break;
		
		case 13:
			return "v_clotheslo";
			break;
		
		case 14:
			return "v_clothesmid";
			break;
		
		case 15:
			return "v_clothesmid";
			break;
		
		case 16:
			return "v_clothesmid";
			break;
		
		case 17:
			return "v_clothesmid";
			break;
		
		case 18:
			return "v_clotheshi";
			break;
		
		case 19:
			return "v_clotheshi";
			break;
		
		case 20:
			return "v_clotheshi";
			break;
		
		case 21:
			return "";
			break;
		
		case 22:
			return "v_tattoo";
			break;
		
		case 23:
			return "v_tattoo2";
			break;
		
		case 24:
			return "v_tattoo2";
			break;
		
		case 25:
			return "v_tattoo";
			break;
		
		case 26:
			return "v_tattoo";
			break;
		
		case 27:
			return "v_tattoo";
			break;
		
		case 28:
			return "v_gun";
			break;
		
		case 29:
			return "v_gun2";
			break;
		
		case 30:
			return "v_gun2";
			break;
		
		case 31:
			return "v_gun2";
			break;
		
		case 32:
			return "v_gun2";
			break;
		
		case 33:
			return "v_gun2";
			break;
		
		case 34:
			return "v_gun2";
			break;
		
		case 35:
			return "v_gun2";
			break;
		
		case 36:
			return "v_gun2";
			break;
		
		case 37:
			return "v_gun2";
			break;
		
		case 38:
			return "v_gun";
			break;
		
		case 39:
			return "v_carmod";
			break;
		
		case 40:
			return "v_lockup";
			break;
		
		case 41:
			return "v_carmod";
			break;
		
		case 42:
			return "v_carmod3";
			break;
		
		case 43:
			return "v_carmod3";
			break;
		
		case 44:
			return "lr_supermod_int";
			break;
	}
	return "";
}

void func_154()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (iLocal_319 > -1)
	{
		if (iLocal_319 != unk_0x519AAFF77CC141DF())
		{
			if (unk_0xC4FEBC724D547D78(unk_0xC3904F8771F37B7F(iLocal_319)))
			{
				iVar0 = unk_0x29A638E7EEEE6B16(unk_0xC3904F8771F37B7F(iLocal_319));
				bVar1 = true;
				if (unk_0x4F5BEB9A4097F301(iVar0, unk_0x1329891157A54C63()))
				{
					iVar2 = 1;
				}
			}
		}
	}
	if (unk_0x335F574AD77E59CE(Local_383.f_22))
	{
		if (func_4(Local_383.f_22))
		{
			if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
			{
				if (!unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), unk_0x1D1DAF7F94D5FE77(Local_383.f_22), 0))
				{
					if (Local_459[unk_0x519AAFF77CC141DF() /*4*/].f_1 == 0)
					{
						if (!bVar1 || (bVar1 && iVar2))
						{
							func_155(unk_0x1D1DAF7F94D5FE77(Local_383.f_22), 0, 10);
						}
					}
				}
			}
		}
	}
}

void func_155(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0xDFC297A2CE47E495(iParam2, &uVar0, &uVar1, &uVar2, &uVar3);
	if (iParam1 == 0)
	{
	}
	unk_0xFBE0C43B6A21C8D0(iParam0);
	if (func_14(unk_0x1329891157A54C63(), 1, 1))
	{
		if (unk_0x7404950238A154C2(iParam0, 0))
		{
			if (func_156(iParam0) == 0)
			{
				if (!unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iParam0, 0))
				{
					if (unk_0x29C2AB191ACB1F1A(iParam0))
					{
						unk_0x375E57DCDA825EB0(iParam0, "MP_Arrow");
						unk_0xCEBE560A9F5EF7CB(iParam0, uVar0, uVar1, uVar2, 190);
						unk_0x65538BF1E02BB3A4(iParam0, 1);
					}
				}
			}
		}
	}
}

int func_156(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x14B7103DBD149FFE(iParam0);
	if (unk_0xE083914AB72DD7CE(iVar0) == 0 && unk_0x1699D7B95446F15C(iVar0) == 0)
	{
		return 0;
	}
	if (unk_0x653781B2157A929D(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_157()
{
	int iVar0;
	
	if (unk_0x236D8AD7EE179F46(iLocal_588, 5))
	{
		if (iLocal_318 != iLocal_319)
		{
			if (iLocal_319 > -1)
			{
				if (unk_0xC4FEBC724D547D78(unk_0xC3904F8771F37B7F(iLocal_319)))
				{
					iVar0 = unk_0x29A638E7EEEE6B16(unk_0xC3904F8771F37B7F(iLocal_319));
					if (iVar0 != unk_0x1329891157A54C63())
					{
						if (!func_206(unk_0x1329891157A54C63(), 1))
						{
							func_158("IMPEX_TICK_DHPV", iVar0, 0, 0, 0, 1, 1, 0);
						}
					}
					if (unk_0x1C7D9BFDF15A02B4())
					{
						if (!unk_0x236D8AD7EE179F46(Local_383.f_23, 8))
						{
							unk_0xF3148AAF69AF9CBC(&(Local_383.f_23), 8);
						}
					}
				}
			}
			iLocal_318 = iLocal_319;
		}
	}
}

int func_158(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
				unk_0xDB5ED960DFB0E4DF(func_182(iVar1, iParam1, 0));
			}
			else
			{
				unk_0xDB5ED960DFB0E4DF(func_167(iParam1, -2, 1, 0));
			}
		}
		else
		{
			unk_0xDB5ED960DFB0E4DF(func_167(iParam1, -2, 1, 0));
		}
		unk_0x6222A57F463E8EE7(func_165(&Var2));
		if (!bParam4)
		{
			iVar0 = unk_0x267D6EB296008122(0, 1);
		}
		else
		{
			Global_2450501 = { func_164(iParam1) };
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
						Var2 = { func_163(&Var2) };
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
		func_159(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_159(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_162() || !unk_0x726DA50057167075()) || !func_22(unk_0x1329891157A54C63(), 0))
	{
		return;
	}
	iVar0 = func_160(iParam2);
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

int func_160(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1707570 - 1))
	{
		if (iParam0 > Global_1707570.f_5[iVar0 /*53*/].f_1)
		{
			func_161(iVar0);
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

void func_161(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1707570.f_5[iVar0 /*53*/] = { Global_1707570.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_162()
{
	return unk_0x2D6859674806FDCE(-1762644250);
}

struct<16> func_163(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

struct<13> func_164(int iParam0)
{
	struct<13> Var0;
	
	unk_0x73231AB7B8BD1CD1(iParam0, &Var0, 13);
	return Var0;
}

var func_165(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_166(&cVar0);
}

var func_166(char[4] cParam0)
{
	return cParam0;
}

int func_167(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (func_180(iParam0))
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
	if (func_180(unk_0x1329891157A54C63()) || (func_179() && func_178()))
	{
		iVar0 = func_177();
		if (unk_0x86CCCD2FAE9D5E65(iVar0))
		{
			if (unk_0x0452D5BF20AD945A(iVar0))
			{
				if (unk_0x1B503E81E3B3D65F(iVar0) != -1)
				{
					if (func_14(unk_0x1B503E81E3B3D65F(iVar0), 0, 1))
					{
						return func_175(iParam0, unk_0x1B503E81E3B3D65F(iVar0), iParam1, bParam2, bParam3);
					}
				}
			}
			else
			{
				return func_168(0, -1, 0);
			}
		}
	}
	return func_175(iParam0, unk_0x1329891157A54C63(), iParam1, bParam2, bParam3);
}

int func_168(bool bParam0, int iParam1, bool bParam2)
{
	return func_169(unk_0x1329891157A54C63(), bParam0, iParam1, bParam2);
}

int func_169(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0xCCFDB2B968281FE8(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_174(iVar0, iParam2, 0))
			{
				if (iVar0 == iParam2)
				{
					return func_173(1);
				}
				else
				{
					return func_173(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else
			{
				return func_170(iVar0, iParam2);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_173(1);
	}
	return func_173(0);
}

int func_170(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_172(iParam0, iParam1);
	if (func_171(Global_1607808.f_63421))
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

int func_171(int iParam0)
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

int func_172(int iParam0, int iParam1)
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
			if (!func_174(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_173(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_174(int iParam0, int iParam1, int iParam2)
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

int func_175(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
		if (func_176(iParam1, iParam0, iVar0, 0))
		{
			return func_173(1);
		}
		else
		{
			return func_169(iParam1, 1, iVar0, bParam4);
		}
	}
	else if ((Global_1573822 || Global_1573813) || Global_1585045[iParam0 /*400*/] == 0)
	{
		if (iParam0 == iParam1 || (Global_1573822 == 1 && Global_1573832 == 0))
		{
			return func_173(1);
		}
		else
		{
			return func_169(iParam1, 1, iVar0, bParam4);
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

bool func_176(int iParam0, int iParam1, int iParam2, int iParam3)
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

var func_177()
{
	return Global_2359301.f_2;
}

bool func_178()
{
	return unk_0x236D8AD7EE179F46(Global_2359301, 4);
}

bool func_179()
{
	return unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_39.f_18, 14);
}

int func_180(int iParam0)
{
	if (func_22(iParam0, 0))
	{
		return 1;
	}
	if (func_181())
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

bool func_181()
{
	return unk_0x236D8AD7EE179F46(Global_2359301, 3);
}

int func_182(int iParam0, int iParam1, bool bParam2)
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
		iVar0 = func_169(iParam1, !bParam2, iParam0, 0);
	}
	return iVar0;
}

bool func_183(char* sParam0)
{
	unk_0xF7F787102FC9BCAC(sParam0);
	return unk_0xEF468B98099969A5(0);
}

int func_184()
{
	if ((Local_459[unk_0x519AAFF77CC141DF() /*4*/].f_3 > 0 && Local_459[unk_0x519AAFF77CC141DF() /*4*/].f_3 < 3) || (Local_459[unk_0x519AAFF77CC141DF() /*4*/].f_3 == 0 && func_66(unk_0x1329891157A54C63(), 6)))
	{
		if (func_123(unk_0x1329891157A54C63(), 1) || func_107())
		{
			if (!func_185(unk_0x1329891157A54C63(), 5) && !func_185(unk_0x1329891157A54C63(), 32))
			{
				return 1;
			}
			else if (!iLocal_125)
			{
				if (unk_0xFBACB273AA628CC5(Global_1698726))
				{
					unk_0x0A8175F24237A3D4(&Global_1698726);
				}
				iLocal_125 = 1;
			}
		}
		else if (iLocal_125)
		{
			func_191();
			iLocal_125 = 0;
		}
		if (Local_383.f_26 == 3)
		{
			if (Local_459[unk_0x519AAFF77CC141DF() /*4*/].f_3 == 0 && func_66(unk_0x1329891157A54C63(), 6))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_185(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_1312447 != 0)
	{
		return 0;
	}
	if (!func_186(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1585045[iVar0 /*400*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

int func_186(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x236D8AD7EE179F46(Global_2422670.f_1, iParam0);
	}
	return 1;
}

void func_187()
{
	if (unk_0xFBACB273AA628CC5(Global_1698726))
	{
		if (func_113())
		{
			unk_0x885CCA7D7CA0FAE3(Global_1698726, 0);
		}
		else
		{
			unk_0x885CCA7D7CA0FAE3(Global_1698726, 4);
		}
		if (!iLocal_114)
		{
			if (func_206(unk_0x1329891157A54C63(), 1))
			{
				unk_0x6FA15F9609E21DA5(Global_1698726, 1);
				iLocal_114 = 1;
			}
		}
		else if (!func_206(unk_0x1329891157A54C63(), 1))
		{
			unk_0x6FA15F9609E21DA5(Global_1698726, 0);
			iLocal_114 = 0;
		}
	}
}

int func_188()
{
	if (unk_0x335F574AD77E59CE(Local_383.f_22))
	{
		if (func_4(Local_383.f_22))
		{
			if (unk_0x088B9F587DA37464(unk_0x1D1DAF7F94D5FE77(Local_383.f_22), 0, 7000) || unk_0x088B9F587DA37464(unk_0x1D1DAF7F94D5FE77(Local_383.f_22), 1, 40000))
			{
				if (unk_0xB7CA313E589A2589(Local_383.f_22))
				{
					if (unk_0x402F3F19221FF696(Local_383.f_22))
					{
						unk_0xE61FF1947C0507EB(unk_0x1D1DAF7F94D5FE77(Local_383.f_22), -2000f);
						unk_0xB43C660E422A4C75(unk_0x1D1DAF7F94D5FE77(Local_383.f_22), 0f);
					}
					return 1;
				}
				else if (unk_0x1C7D9BFDF15A02B4())
				{
					if (func_10(Local_383.f_22))
					{
						unk_0xE61FF1947C0507EB(unk_0x1D1DAF7F94D5FE77(Local_383.f_22), -2000f);
						unk_0xB43C660E422A4C75(unk_0x1D1DAF7F94D5FE77(Local_383.f_22), 0f);
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_189()
{
	int iVar0;
	int iVar1;
	
	if (iLocal_319 == -1 && unk_0x236D8AD7EE179F46(iLocal_588, 5))
	{
		return 0;
	}
	if (unk_0x335F574AD77E59CE(Local_383.f_22))
	{
		if (func_4(Local_383.f_22))
		{
			if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
			{
				if (unk_0x58A69336FE7307D8(unk_0x81873881071CD9FE(), unk_0x1D1DAF7F94D5FE77(Local_383.f_22)))
				{
					if (func_190(unk_0x81873881071CD9FE(), unk_0x1D1DAF7F94D5FE77(Local_383.f_22), -1))
					{
						return 1;
					}
				}
			}
			if (iLocal_319 >= 0)
			{
				if (iLocal_319 != unk_0x519AAFF77CC141DF())
				{
					if (unk_0xC4FEBC724D547D78(unk_0xC3904F8771F37B7F(iLocal_319)))
					{
						iVar0 = unk_0x29A638E7EEEE6B16(unk_0xC3904F8771F37B7F(iLocal_319));
						if (func_14(iVar0, 1, 1))
						{
							iVar1 = unk_0xE495E987CB2BE7EF(iVar0);
							if (unk_0x58A69336FE7307D8(iVar1, unk_0x1D1DAF7F94D5FE77(Local_383.f_22)))
							{
								if (func_190(iVar1, unk_0x1D1DAF7F94D5FE77(Local_383.f_22), -1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_190(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x930F8FBB8E9537CC(iParam0) && !unk_0x930F8FBB8E9537CC(iParam1))
	{
		if (unk_0x58A69336FE7307D8(iParam0, iParam1))
		{
			if (unk_0xB0B9E53CEFDB16AA(iParam1, iParam2) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_191()
{
	Global_1698726 = unk_0xE122DDAE9E94767B(unk_0x1D1DAF7F94D5FE77(Local_383.f_22));
	if (unk_0xC5ABD699DDC9D5A0(unk_0x14B7103DBD149FFE(unk_0x1D1DAF7F94D5FE77(Local_383.f_22))))
	{
		unk_0x8F827BB0F6ED7AA8(Global_1698726, 348);
	}
	else
	{
		unk_0x8F827BB0F6ED7AA8(Global_1698726, 225);
	}
	unk_0x1B86E7A8766EA6B4(Global_1698726, 2);
	unk_0x2AB7C42FF2AF476D(Global_1698726, "IMPEX_HIPR_BLP");
	if (func_113())
	{
		unk_0x885CCA7D7CA0FAE3(Global_1698726, 0);
	}
}

int func_192(int iParam0, int iParam1)
{
	if (func_138(iParam0, 1215605247, &uLocal_344, 0f, 500, 1, iParam1))
	{
		return 1;
	}
	return 0;
}

void func_193(int iParam0)
{
	if (func_198())
	{
		if (iParam0 == 1)
		{
			if (Global_2451473.f_4237 == -1)
			{
				Global_2451473.f_4237 = 60000;
			}
			func_197(&(Global_2451473.f_4235), 0, 0);
			if (Global_2451473.f_4240 == -1)
			{
				Global_2451473.f_4240 = 10000;
			}
			func_197(&(Global_2451473.f_4238), 0, 0);
		}
		else
		{
			Global_1312416 = 0;
			func_196();
		}
		if ((!unk_0x726DA50057167075() && !func_195()) && !func_194(unk_0x1329891157A54C63()))
		{
			Global_975760 = 0;
		}
		Global_1606167[unk_0x1329891157A54C63() /*12*/].f_7 = 0;
	}
}

int func_194(int iParam0)
{
	if (func_123(iParam0, 1))
	{
		if (Global_1585045[iParam0 /*400*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_195()
{
	return Global_2428865.f_712;
}

void func_196()
{
	if (unk_0x1C6DF6AD69BE853E())
	{
		if (!func_198())
		{
			if (func_14(unk_0x1329891157A54C63(), 1, 0))
			{
				unk_0xE41981FA07A67E46(unk_0x81873881071CD9FE(), 1);
				unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 342, 0);
				unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 122, 0);
			}
			unk_0xAFCB705B5DE49B4D(unk_0x1329891157A54C63(), 1f);
			unk_0xD547C5EA6ACA33EA(0);
			unk_0x96BED0459085F7E9(1);
			if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
			{
				Global_1312416.f_2 = 0;
				unk_0xC1A3EEFD7C446E1D(0);
			}
		}
		else
		{
			if (func_14(unk_0x1329891157A54C63(), 1, 1))
			{
				unk_0xE41981FA07A67E46(unk_0x81873881071CD9FE(), 0);
				unk_0x649CF94A4282A7FD(unk_0x81873881071CD9FE(), joaat("weapon_unarmed"), 1);
				unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 342, 1);
				unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 122, 1);
				unk_0xAFCB705B5DE49B4D(unk_0x1329891157A54C63(), 0.5f);
				if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
				{
					unk_0xC1A3EEFD7C446E1D(1);
				}
			}
			unk_0xD547C5EA6ACA33EA(1);
			unk_0x96BED0459085F7E9(0);
		}
	}
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

bool func_198()
{
	return Global_1312416;
}

void func_199(int iParam0)
{
	if (iParam0 == 1)
	{
		if (!unk_0x236D8AD7EE179F46(Global_2451473.f_4406, 28))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4406), 28);
		}
	}
	else if (unk_0x236D8AD7EE179F46(Global_2451473.f_4406, 28))
	{
		unk_0xC69E84EBBD7166E6(&(Global_2451473.f_4406), 28);
	}
}

int func_200()
{
	if (func_113())
	{
		return 0;
	}
	if (!func_201(0, 1, 1, 1))
	{
		return 0;
	}
	return 1;
}

int func_201(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0xA83A609D74168B30())
	{
		return 0;
	}
	if (func_102())
	{
		return 0;
	}
	if (!unk_0xECDEA377354CBDA4())
	{
		return 0;
	}
	if (func_110())
	{
		return 0;
	}
	if (func_107())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_123(unk_0x1329891157A54C63(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_204(unk_0x1329891157A54C63()))
		{
			return 0;
		}
	}
	if (func_105())
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
	if (func_203())
	{
		return 0;
	}
	if (func_202())
	{
		return 0;
	}
	if (func_437())
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

bool func_202()
{
	return Global_2428865.f_566;
}

bool func_203()
{
	return Global_2428865.f_716;
}

int func_204(int iParam0)
{
	if (Global_2414506[iParam0 /*255*/].f_205 == 0)
	{
		return 0;
	}
	return 1;
}

void func_205(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x236D8AD7EE179F46(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_205, iParam0))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_205), iParam0);
		}
	}
	else if (unk_0x236D8AD7EE179F46(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_205, iParam0))
	{
		unk_0xC69E84EBBD7166E6(&(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_205), iParam0);
	}
}

int func_206(int iParam0, bool bParam1)
{
	if (unk_0x236D8AD7EE179F46(Global_1585045[iParam0 /*400*/].f_248.f_5, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0x236D8AD7EE179F46(Global_1585045[iParam0 /*400*/].f_248.f_5, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_207()
{
	struct<3> Var0;
	
	if (unk_0x335F574AD77E59CE(Local_383.f_22))
	{
		if (func_4(Local_383.f_22))
		{
			if (!func_189())
			{
				Var0 = { unk_0xB6AE0DAE06D56288(unk_0x1D1DAF7F94D5FE77(Local_383.f_22), 1) };
				if (func_208(Var0, 1215605247, 18))
				{
					if (func_192(unk_0x1D1DAF7F94D5FE77(Local_383.f_22), 1))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_208(struct<3> Param0, int iParam3, int iParam4)
{
	if (unk_0x0D6E79537424BACE(Param0, func_141(iParam3), 1) <= IntToFloat(iParam4))
	{
		return 1;
	}
	return 0;
}

void func_209()
{
	if (unk_0x335F574AD77E59CE(Local_383.f_22))
	{
		if (func_4(Local_383.f_22))
		{
			if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
			{
				if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), unk_0x1D1DAF7F94D5FE77(Local_383.f_22), 0))
				{
					if (!unk_0x236D8AD7EE179F46(Local_459[unk_0x519AAFF77CC141DF() /*4*/].f_2, 2))
					{
						unk_0xF3148AAF69AF9CBC(&(Local_459[unk_0x519AAFF77CC141DF() /*4*/].f_2), 2);
					}
				}
				else if (func_210(unk_0x81873881071CD9FE(), unk_0x1D1DAF7F94D5FE77(Local_383.f_22), 1) < 180f)
				{
					if (!unk_0x236D8AD7EE179F46(Local_459[unk_0x519AAFF77CC141DF() /*4*/].f_2, 2))
					{
						unk_0xF3148AAF69AF9CBC(&(Local_459[unk_0x519AAFF77CC141DF() /*4*/].f_2), 2);
					}
				}
				else if (unk_0x236D8AD7EE179F46(Local_459[unk_0x519AAFF77CC141DF() /*4*/].f_2, 2))
				{
					unk_0xC69E84EBBD7166E6(&(Local_459[unk_0x519AAFF77CC141DF() /*4*/].f_2), 2);
				}
			}
		}
	}
}

float func_210(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x930F8FBB8E9537CC(iParam0))
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 0) };
	}
	if (!unk_0x930F8FBB8E9537CC(iParam1))
	{
		Var3 = { unk_0xB6AE0DAE06D56288(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xB6AE0DAE06D56288(iParam1, 0) };
	}
	return unk_0x0D6E79537424BACE(Var0, Var3, iParam2);
}

void func_211()
{
	int iVar0;
	
	if (iLocal_100)
	{
		func_310();
		if (!unk_0x236D8AD7EE179F46(iLocal_588, 1))
		{
			if (Global_2451473.f_1575 > 0)
			{
				if (Global_2451473.f_1578 == 0)
				{
					Global_2451473.f_1578 = unk_0xD74C7D8D2E5E43D2();
				}
				else if (unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), Global_2451473.f_1578) > Global_262145.f_9237)
				{
					if (!func_102())
					{
						if (func_65())
						{
							if (func_200())
							{
								if (!func_309())
								{
									if (!func_308(0) && !func_115())
									{
										Global_16798 = 0;
										iVar0 = func_75(1189, -1, 0);
										if (!unk_0x236D8AD7EE179F46(iVar0, 0))
										{
											if (unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), Global_2451473.f_1578) > 20000)
											{
												if (func_307(18, "CELL_CLTEST6", 2, "NULL", Global_2451473.f_1575, "TestSender1", 4, 0, 1, 0, 0, bLocal_121, 0, 0, 0, 0, 0))
												{
													unk_0xF3148AAF69AF9CBC(&iVar0, 0);
													func_130(1189, iVar0, -1, 1);
													unk_0xF3148AAF69AF9CBC(&iLocal_588, 1);
													func_305(0f, 0f, 0f, func_306(19), "");
													Global_2451473.f_1577 = 1;
													iLocal_100 = 0;
												}
											}
										}
										else if (func_307(18, "CELL_CLTEST1", 2, "NULL", Global_2451473.f_1575, "TestSender1", 4, 0, 1, 0, 0, bLocal_121, 0, 0, 0, 0, 0))
										{
											func_305(0f, 0f, 0f, func_306(19), "");
											unk_0xF3148AAF69AF9CBC(&iLocal_588, 1);
											Global_2451473.f_1577 = 1;
											iLocal_100 = 0;
										}
									}
								}
								else
								{
									Global_2451473.f_1578 = unk_0xD74C7D8D2E5E43D2();
								}
							}
						}
					}
				}
			}
		}
	}
	else if (unk_0x236D8AD7EE179F46(iLocal_588, 1))
	{
		if (!unk_0x236D8AD7EE179F46(iLocal_341, 5))
		{
			if (func_200())
			{
				if (bLocal_121)
				{
					func_137("IMPEX_HELP_LNCH", -1);
				}
				unk_0xF3148AAF69AF9CBC(&iLocal_341, 5);
				func_420(&uLocal_327, 0, 0);
			}
		}
	}
	if (iLocal_123)
	{
		if (func_428())
		{
			if (!func_421(&uLocal_131))
			{
				func_420(&uLocal_131, 0, 0);
			}
			else if (func_419(&uLocal_131, 10000, 0))
			{
				if (func_212(18, "CELL_IMPT", 0, 0))
				{
					iLocal_123 = 0;
					func_41(&uLocal_131);
				}
			}
		}
	}
}

bool func_212(int iParam0, char* sParam1, bool bParam2, int iParam3)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_213(iParam0, sParam1, sVar0, bVar1, iVar2, sVar0, sVar0, bParam2, iParam3);
}

int func_213(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7, int iParam8)
{
	var uVar0;
	int iVar165;
	
	uVar0 = 16;
	iVar165 = 2;
	if (bParam7)
	{
		iVar165 = 5;
	}
	return func_214(&uVar0, iParam0, func_304(), sParam1, iVar165, 3, iParam8, iParam2, bParam3, iParam4, sParam5, sParam6, -1);
}

int func_214(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xB318FDA0D1ABDB20(sParam2))
	{
		return 0;
	}
	if (unk_0xA84EEA1DAC64D0D5(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0xB318FDA0D1ABDB20(sParam3))
	{
		return 0;
	}
	if (unk_0xA84EEA1DAC64D0D5(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0x8DAF7A748E41AD46(unk_0x11CA2334E341B424());
	iVar1 = func_303(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0xB318FDA0D1ABDB20(uParam7))
	{
		iVar2 = unk_0x8DAF7A748E41AD46(sParam7);
	}
	if (func_302(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_298(iParam6))
	{
		return 0;
	}
	if (func_295(iVar0, iVar1, iVar2))
	{
		if (func_294())
		{
			return 0;
		}
		func_293();
		return func_221(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, iParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_220(iParam4))
	{
		return 0;
	}
	func_215(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, iParam6);
	return 0;
}

void func_215(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	Global_1328429.f_40.f_1 = iParam0;
	Global_1328429.f_40.f_2 = iParam1;
	Global_1328429.f_40.f_3 = iParam2;
	StringCopy(&(Global_1328429.f_40.f_4), sParam3, 16);
	Global_1328429.f_40.f_8 = iParam4;
	Global_1328429.f_40.f_9 = iParam5;
	Global_1328429.f_40.f_14 = iParam6;
	func_216(iParam4);
	func_293();
	Global_1328429.f_40.f_13 = unk_0x372240B0254847DF(unk_0xD74C7D8D2E5E43D2(), 7000);
}

void func_216(int iParam0)
{
	if (func_219(iParam0))
	{
		func_218();
		return;
	}
	func_217();
}

void func_217()
{
	Global_1328429.f_40.f_10 = 0;
}

void func_218()
{
	Global_1328429.f_40.f_10 = 1;
}

int func_219(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		
		default:
	}
	return 0;
}

bool func_220(int iParam0)
{
	return iParam0 > Global_1328429.f_40.f_8;
}

int func_221(var uParam0, int iParam1, var uParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, var uParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_292();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_289(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_286(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_289(uParam0, sParam3, sParam4);
		}
		return func_270(uParam0, iParam1, sParam3, sParam4, iParam7);
	}
	if (iParam5 == 5)
	{
		return func_269(iParam1, uParam2, sParam4, iParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_260(iParam1, uParam2, sParam4, iParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_259(iParam1, uParam2, sParam4, iParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_222(iParam1, uParam2, sParam4, iParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_222(int iParam0, var uParam1, char* sParam2, int iParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_258();
	bVar0 = true;
	if (func_224(iParam0, uParam1, sParam2, bVar0, iParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_223(120000);
		return 1;
	}
	return 0;
}

void func_223(int iParam0)
{
	Global_1328429.f_40.f_11 = unk_0x372240B0254847DF(unk_0xD74C7D8D2E5E43D2(), iParam0);
	Global_1328429.f_40.f_12 = 1;
}

int func_224(int iParam0, var uParam1, char* sParam2, bool bParam3, int iParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_257();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = uParam1;
		sVar2 = unk_0xB67DF8F35744CF60(iVar0);
		iVar1 = func_251(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x18E9EAED9F29B72C(unk_0xD74C7D8D2E5E43D2(), Global_1328429.f_40.f_13))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_250(uParam5, bParam6, &iVar3);
	uVar5 = func_248(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xB318FDA0D1ABDB20(sParam8))
	{
		iVar6++;
		if (!unk_0xB318FDA0D1ABDB20(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0xD994929E13CC1ED5(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (unk_0x236D8AD7EE179F46(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x236D8AD7EE179F46(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xB318FDA0D1ABDB20(sVar2))
	{
		bVar12 = func_247(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_228(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0x236D8AD7EE179F46(iParam4, 0))
	{
		func_227();
	}
	func_258();
	func_226();
	func_225();
	return 1;
}

void func_225()
{
	Global_1328429.f_57 = 0;
	Global_1328429.f_57.f_1 = 0;
}

void func_226()
{
	Global_1328429.f_40 = 3;
}

void func_227()
{
	unk_0xF3148AAF69AF9CBC(&Global_2264, 8);
}

int func_228(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_229(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_2971 = iParam6;
			unk_0xF3148AAF69AF9CBC(&Global_2550377, 0);
		}
		return 1;
	}
	return 0;
}

int func_229(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0xD994929E13CC1ED5(sParam14, sParam15))
	{
	}
	func_241();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14394 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14394 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14394 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
		{
			if (unk_0x9BF75C3BD2379A6C(unk_0x81873881071CD9FE()))
			{
				return 0;
			}
		}
		if (Global_2550362 == 1)
		{
			return 0;
		}
		if (unk_0x968BF1C2C695B61A(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0x968BF1C2C695B61A(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_240() == 0)
	{
		func_238();
		return 0;
	}
	func_237(Global_2550361);
	StringCopy(&(Global_2549112[Global_2550361 /*104*/]), sParam1, 64);
	Global_2549112[Global_2550361 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_2549112[Global_2550361 /*104*/].f_24 = iParam2;
	}
	Global_2549112[Global_2550361 /*104*/].f_25 = iParam7;
	Global_2549112[Global_2550361 /*104*/].f_26 = uParam8;
	Global_2549112[Global_2550361 /*104*/].f_29 = uParam9;
	Global_2549112[Global_2550361 /*104*/].f_30 = uParam12;
	Global_2549112[Global_2550361 /*104*/].f_31 = uParam11;
	Global_2549112[Global_2550361 /*104*/].f_28 = 0;
	Global_2549112[Global_2550361 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_2549112[Global_2550361 /*104*/].f_33), sParam4, 64);
	Global_2549112[Global_2550361 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_2549112[Global_2550361 /*104*/].f_50), sParam5, 64);
	Global_2549112[Global_2550361 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_2549112[Global_2550361 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_2549112[Global_2550361 /*104*/].f_83), sParam15, 64);
	func_241();
	switch (iParam16)
	{
		case 3:
			Global_2549112[Global_2550361 /*104*/].f_99[Global_14394] = 1;
			break;
		
		case 0:
			Global_2549112[Global_2550361 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_2549112[Global_2550361 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_2549112[Global_2550361 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_14394)
		{
			case 0:
				func_236(0);
				break;
			
			case 1:
				func_236(1);
				break;
			
			case 2:
				func_236(2);
				break;
			
			case 3:
				func_236(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_2550362 = 1;
				break;
			
			case 0:
				Global_2550362 = 1;
				break;
			
			case 2:
				Global_2550362 = 1;
				break;
			
			case 1:
				Global_2550362 = 1;
				break;
			}
	}
	Global_16762[Global_2550361] = 0;
	if (bParam10)
	{
		func_241();
		if (Global_14337)
		{
			StringCopy(&Global_14383, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14394)
			{
				case 0:
					StringCopy(&Global_14383, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14383, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14383, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14383, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_235())
			{
				unk_0x35D7948F61AA3FEC(-1, "Text_Arrive_Tone", &Global_14383, 1);
			}
		}
	}
	if (!Global_14553)
	{
		if (Global_14394.f_1 == 6)
		{
			func_234(Global_14375, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_230(1);
			func_234(Global_14375, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14374), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_230(int iParam0)
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
		if (func_233(14))
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
								func_232(&(Global_2271[iVar1 /*15*/]));
								unk_0xBD0C54D89298454E(iVar2);
								unk_0xBA9BA6181F2B6111();
							}
							if (Global_2436984)
							{
								if (iVar1 == 14)
								{
									func_231(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16756), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_231(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16761), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69020)
								{
									iVar4 = 0;
									iVar4 = Global_2549111;
									func_231(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_231(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar5), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_231(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16756), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
								unk_0xBD0C54D89298454E(1);
								unk_0xBD0C54D89298454E(iVar0);
								unk_0xBD0C54D89298454E(Global_2271[iVar1 /*15*/].f_10);
								unk_0xBD0C54D89298454E(0);
								func_232(&(Global_2271[iVar1 /*15*/]));
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
								func_232(&(Global_2271[iVar1 /*15*/]));
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
								func_232(&(Global_2271[iVar1 /*15*/]));
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
								func_232(&(Global_2271[iVar1 /*15*/]));
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
								func_232(&(Global_2271[iVar1 /*15*/]));
								unk_0xBD0C54D89298454E(42);
								unk_0xBA9BA6181F2B6111();
							}
							else
							{
								func_231(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_231(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
	if (!unk_0xB318FDA0D1ABDB20(uParam7))
	{
		func_232(sParam7);
	}
	if (!unk_0xB318FDA0D1ABDB20(iParam8))
	{
		func_232(iParam8);
	}
	if (!unk_0xB318FDA0D1ABDB20(iParam9))
	{
		func_232(iParam9);
	}
	if (!unk_0xB318FDA0D1ABDB20(iParam10))
	{
		func_232(iParam10);
	}
	if (!unk_0xB318FDA0D1ABDB20(iParam11))
	{
		func_232(iParam11);
	}
	unk_0xBA9BA6181F2B6111();
}

void func_232(var uParam0)
{
	unk_0x6CE839BF5D87A428(uParam0);
	unk_0xC3822F70D0E7940B();
}

bool func_233(int iParam0)
{
	return Global_35443 == iParam0;
}

void func_234(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_235()
{
	return Global_1315892;
}

void func_236(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_98931.f_12665[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_237(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xBF0A1447DA6AE4B5();
	uVar1 = unk_0x25B31B877207A3A9();
	uVar2 = unk_0x0C937048CF6952B5();
	uVar3 = unk_0x8B6B3DD84CE74978();
	uVar4 = unk_0x02DC618B9A1DB8D1() + 1;
	uVar5 = unk_0x57E483B654EDD986();
	Global_2549112[iParam0 /*104*/].f_18 = uVar0;
	Global_2549112[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_2549112[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_2549112[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_2549112[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_2549112[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_238()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_2550361 = 11;
	Global_2549112[Global_2550361 /*104*/].f_18 = -1;
	Global_2549112[Global_2550361 /*104*/].f_18.f_1 = 0;
	Global_2549112[Global_2550361 /*104*/].f_18.f_2 = 0;
	Global_2549112[Global_2550361 /*104*/].f_18.f_3 = 0;
	Global_2549112[Global_2550361 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_239(Global_2549112[iVar2 /*104*/].f_18, Global_2549112[Global_2550361 /*104*/].f_18))
		{
			Global_2550361 = iVar2;
		}
		iVar2++;
	}
	Global_2549112[Global_2550361 /*104*/].f_24 = 1;
}

int func_239(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_240()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_2549112[iVar2 /*104*/].f_24 == 0)
		{
			Global_2550361 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_2550361 = 11;
	Global_2549112[Global_2550361 /*104*/].f_18 = -1;
	Global_2549112[Global_2550361 /*104*/].f_18.f_1 = 0;
	Global_2549112[Global_2550361 /*104*/].f_18.f_2 = 0;
	Global_2549112[Global_2550361 /*104*/].f_18.f_3 = 0;
	Global_2549112[Global_2550361 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_2549112[iVar2 /*104*/].f_24 == 0 || Global_2549112[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_239(Global_2549112[iVar2 /*104*/].f_18, Global_2549112[Global_2550361 /*104*/].f_18))
			{
				Global_2550361 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_2550361 == 11)
	{
		return 0;
	}
	Global_2549112[Global_2550361 /*104*/].f_99[0] = 0;
	Global_2549112[Global_2550361 /*104*/].f_99[1] = 0;
	Global_2549112[Global_2550361 /*104*/].f_99[2] = 0;
	return 1;
}

void func_241()
{
	if (func_233(14))
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
		Global_14394 = func_242();
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

var func_242()
{
	func_243();
	return Global_98931.f_1750.f_539.f_3549;
}

void func_243()
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
	{
		if (func_246(Global_98931.f_1750.f_539.f_3549) != unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()))
		{
			iVar0 = func_245(unk_0x81873881071CD9FE());
			if (func_244(iVar0) && (!func_233(14) || Global_97883))
			{
				if (Global_98931.f_1750.f_539.f_3549 != iVar0 && func_244(Global_98931.f_1750.f_539.f_3549))
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

bool func_244(int iParam0)
{
	return iParam0 < 3;
}

int func_245(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		iVar1 = unk_0x14B7103DBD149FFE(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_246(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_246(int iParam0)
{
	if (func_244(iParam0))
	{
		return Global_98931.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_247(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_229(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_2971 = iParam10;
			unk_0xF3148AAF69AF9CBC(&Global_2550377, 0);
		}
		return 1;
	}
	return 0;
}

int func_248(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_249(2, iParam1);
	return iParam0;
}

void func_249(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		
		case 2:
			bVar1 = true;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

var func_250(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0xB318FDA0D1ABDB20(uParam0))
	{
		return sLocal_17;
	}
	if (unk_0xD994929E13CC1ED5(sParam0, sLocal_17))
	{
		return sLocal_17;
	}
	func_249(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0x46E7F5908F815DDC(sParam0);
}

int func_251(int iParam0)
{
	int iVar0;
	
	iVar0 = func_254(iParam0);
	if (iVar0 == -1)
	{
		func_252(iParam0, 1);
		return 0;
	}
	Global_1344467[iVar0 /*5*/].f_4 = 1;
	return Global_1344467[iVar0 /*5*/].f_2;
}

void func_252(int iParam0, bool bParam1)
{
	if (!func_14(iParam0, 0, 1))
	{
		return;
	}
	if (func_254(iParam0) != -1)
	{
		return;
	}
	if (Global_1344630)
	{
		if (iParam0 == Global_1344630.f_1)
		{
			return;
		}
	}
	if (func_253(iParam0))
	{
		return;
	}
	if (Global_1344668 >= 32)
	{
		return;
	}
	Global_1344635[Global_1344668] = iParam0;
	Global_1344668++;
	if (bParam1)
	{
	}
}

int func_253(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1344668)
	{
		if (Global_1344635[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_254(int iParam0)
{
	int iVar0;
	
	if (!func_14(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1344628 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1344628)
	{
		if (Global_1344467[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0xF873F9422A5D48E5(Global_1344467[iVar0 /*5*/].f_2) && unk_0x79A3388251B8DD5B(Global_1344467[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_255(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_255(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1344628)
	{
		return;
	}
	if (unk_0xF873F9422A5D48E5(Global_1344467[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1344467[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0xD23DF626788C30FE(Global_1344467[iParam0 /*5*/].f_2), 64);
			unk_0xDC6F0301DF609264(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x2B91F38290118964(Global_1344467[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1344628)
	{
		Global_1344467[iVar32 /*5*/] = { Global_1344467[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_256(&(Global_1344467[iVar32 /*5*/]));
	Global_1344628 = (Global_1344628 - 1);
}

void func_256(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_257();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x1C6DF6AD69BE853E())
	{
		uParam0->f_3 = unk_0xD74C7D8D2E5E43D2();
	}
}

int func_257()
{
	return -1;
}

void func_258()
{
	Global_1328429.f_40.f_9 = 4;
}

int func_259(int iParam0, var uParam1, char* sParam2, int iParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_258();
	bVar0 = false;
	return func_224(iParam0, uParam1, sParam2, bVar0, iParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_260(int iParam0, var uParam1, char* sParam2, int iParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_261(iParam0, uParam1, sParam2, bVar0, iParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_261(int iParam0, var uParam1, char* sParam2, bool bParam3, int iParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_257();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = uParam1;
		sVar2 = unk_0xB67DF8F35744CF60(iVar0);
		iVar1 = func_251(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x18E9EAED9F29B72C(unk_0xD74C7D8D2E5E43D2(), Global_1328429.f_40.f_13))
			{
				return 0;
			}
		}
		Global_16754 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_250(uParam5, bParam6, &iVar3);
	uVar5 = func_248(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xB318FDA0D1ABDB20(sParam8))
	{
		iVar6++;
		if (!unk_0xB318FDA0D1ABDB20(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0xD994929E13CC1ED5(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (unk_0x236D8AD7EE179F46(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x236D8AD7EE179F46(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xB318FDA0D1ABDB20(sVar2))
	{
		bVar12 = func_307(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_263(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0x236D8AD7EE179F46(iParam4, 0))
	{
		func_227();
	}
	func_262();
	func_226();
	func_225();
	return 1;
}

void func_262()
{
	Global_1328429.f_40.f_9 = 3;
}

int func_263(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0xC69E84EBBD7166E6(&Global_2264, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_264(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_2971 = iParam6;
			Global_2874[3 /*6*/] = { Global_98931.f_32499[iParam0 /*29*/].f_3 };
			Global_2951 = iParam0;
			unk_0xF3148AAF69AF9CBC(&Global_2264, 1);
			unk_0xF3148AAF69AF9CBC(&Global_2264, 7);
		}
		return 1;
	}
	return 0;
}

int func_264(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0xD994929E13CC1ED5(sParam14, sParam15))
	{
	}
	func_241();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14394 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14394 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14394 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
		{
			if (unk_0x9BF75C3BD2379A6C(unk_0x81873881071CD9FE()))
			{
				return 0;
			}
		}
		if (Global_98931.f_12665[Global_14394 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x968BF1C2C695B61A(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x968BF1C2C695B61A(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_268() == 0)
	{
		func_266();
		return 0;
	}
	func_265(Global_16760);
	StringCopy(&(Global_98931.f_12755[Global_16760 /*104*/]), sParam1, 64);
	Global_98931.f_12755[Global_16760 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_98931.f_12755[Global_16760 /*104*/].f_24 = iParam2;
	}
	Global_98931.f_12755[Global_16760 /*104*/].f_25 = iParam7;
	Global_98931.f_12755[Global_16760 /*104*/].f_26 = uParam8;
	Global_98931.f_12755[Global_16760 /*104*/].f_29 = uParam9;
	Global_98931.f_12755[Global_16760 /*104*/].f_30 = uParam12;
	Global_98931.f_12755[Global_16760 /*104*/].f_31 = uParam11;
	Global_98931.f_12755[Global_16760 /*104*/].f_28 = 0;
	Global_98931.f_12755[Global_16760 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_98931.f_12755[Global_16760 /*104*/].f_33), sParam4, 64);
	Global_98931.f_12755[Global_16760 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_98931.f_12755[Global_16760 /*104*/].f_50), sParam5, 64);
	Global_98931.f_12755[Global_16760 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_98931.f_12755[Global_16760 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_98931.f_12755[Global_16760 /*104*/].f_83), sParam15, 64);
	if (unk_0x236D8AD7EE179F46(Global_2264, 10))
	{
		Global_98931.f_12755[Global_16760 /*104*/].f_99[0] = 1;
		Global_98931.f_12755[Global_16760 /*104*/].f_99[1] = 1;
		Global_98931.f_12755[Global_16760 /*104*/].f_99[2] = 1;
		Global_2970 = 4;
		func_236(0);
		func_236(2);
		func_236(1);
	}
	else
	{
		func_241();
		switch (iParam16)
		{
			case 3:
				Global_98931.f_12755[Global_16760 /*104*/].f_99[Global_14394] = 1;
				break;
			
			case 0:
				Global_98931.f_12755[Global_16760 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_98931.f_12755[Global_16760 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_98931.f_12755[Global_16760 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14394)
			{
				case 0:
					func_236(0);
					Global_2970 = 0;
					break;
				
				case 1:
					func_236(1);
					Global_2970 = 1;
					break;
				
				case 2:
					func_236(2);
					Global_2970 = 2;
					break;
				
				case 3:
					func_236(3);
					Global_2970 = 3;
					break;
				
				default:
					Global_2970 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0x236D8AD7EE179F46(Global_2264, 10))
		{
			Global_98931.f_12665[0 /*20*/].f_17 = 1;
			Global_98931.f_12665[1 /*20*/].f_17 = 1;
			Global_98931.f_12665[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_98931.f_12665[Global_14394 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_98931.f_12665[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_98931.f_12665[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_98931.f_12665[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16762[Global_16760] = 0;
	if (bParam10)
	{
		func_241();
		if (Global_14337)
		{
			StringCopy(&Global_14383, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14394)
			{
				case 0:
					StringCopy(&Global_14383, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14383, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14383, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14383, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_235())
			{
				unk_0x35D7948F61AA3FEC(-1, "Text_Arrive_Tone", &Global_14383, 1);
			}
		}
	}
	if (!Global_14553)
	{
		if (Global_14394.f_1 == 6)
		{
			func_234(Global_14375, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_230(1);
			func_234(Global_14375, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14374), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_265(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xBF0A1447DA6AE4B5();
	uVar1 = unk_0x25B31B877207A3A9();
	uVar2 = unk_0x0C937048CF6952B5();
	uVar3 = unk_0x8B6B3DD84CE74978();
	uVar4 = unk_0x02DC618B9A1DB8D1() + 1;
	uVar5 = unk_0x57E483B654EDD986();
	Global_98931.f_12755[iParam0 /*104*/].f_18 = uVar0;
	Global_98931.f_12755[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_98931.f_12755[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_98931.f_12755[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_98931.f_12755[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_98931.f_12755[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_266()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69020)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_16760 = 34;
	Global_98931.f_12755[Global_16760 /*104*/].f_18 = -1;
	Global_98931.f_12755[Global_16760 /*104*/].f_18.f_1 = 0;
	Global_98931.f_12755[Global_16760 /*104*/].f_18.f_2 = 0;
	Global_98931.f_12755[Global_16760 /*104*/].f_18.f_3 = 0;
	Global_98931.f_12755[Global_16760 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_267(Global_98931.f_12755[iVar2 /*104*/].f_18, Global_98931.f_12755[Global_16760 /*104*/].f_18))
		{
			Global_16760 = iVar2;
		}
		iVar2++;
	}
	Global_98931.f_12755[Global_16760 /*104*/].f_24 = 1;
}

int func_267(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_268()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69020)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_98931.f_12755[iVar2 /*104*/].f_24 == 0)
		{
			Global_16760 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16760 = 34;
	Global_98931.f_12755[Global_16760 /*104*/].f_18 = -1;
	Global_98931.f_12755[Global_16760 /*104*/].f_18.f_1 = 0;
	Global_98931.f_12755[Global_16760 /*104*/].f_18.f_2 = 0;
	Global_98931.f_12755[Global_16760 /*104*/].f_18.f_3 = 0;
	Global_98931.f_12755[Global_16760 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_98931.f_12755[iVar2 /*104*/].f_24 == 0 || Global_98931.f_12755[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_267(Global_98931.f_12755[iVar2 /*104*/].f_18, Global_98931.f_12755[Global_16760 /*104*/].f_18))
			{
				Global_16760 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_16760 == 34)
	{
		return 0;
	}
	Global_98931.f_12755[Global_16760 /*104*/].f_99[0] = 0;
	Global_98931.f_12755[Global_16760 /*104*/].f_99[1] = 0;
	Global_98931.f_12755[Global_16760 /*104*/].f_99[2] = 0;
	return 1;
}

int func_269(int iParam0, var uParam1, char* sParam2, int iParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
	}
	if (unk_0xE8CA5AAF4928DD46(unk_0x81873881071CD9FE()))
	{
		return 0;
	}
	func_262();
	bVar0 = true;
	if (func_261(iParam0, uParam1, sParam2, bVar0, iParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_223(120000);
		return 1;
	}
	return 0;
}

int func_270(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (unk_0xE8CA5AAF4928DD46(unk_0x81873881071CD9FE()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (unk_0x236D8AD7EE179F46(iParam4, 7))
	{
		iVar1 = 9;
	}
	if (unk_0x236D8AD7EE179F46(iParam4, 4))
	{
		bVar0 = func_285(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_276(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0x236D8AD7EE179F46(iParam4, 3))
		{
			func_275(1);
		}
		if (unk_0x236D8AD7EE179F46(iParam4, 5))
		{
			func_274(1);
		}
		func_273();
		func_226();
		func_272();
		func_271();
		return 1;
	}
	return 0;
}

void func_271()
{
	Global_2457949 = 0;
}

void func_272()
{
	Global_1328429.f_57 = 1;
	Global_1328429.f_57.f_1 = 0;
}

void func_273()
{
	Global_1328429.f_40.f_9 = 1;
}

void func_274(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2266, 0);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&Global_2266, 0);
	}
}

void func_275(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2264, 20);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&Global_2264, 20);
	}
}

int func_276(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_284(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	Global_2621441 = 0;
	return func_277(sParam3, iParam4, bParam7);
}

int func_277(char* sParam0, int iParam1, bool bParam2)
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
					func_283();
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
		if (func_109(8, -1))
		{
			return 0;
		}
		Global_15769 = { Global_15763 };
		func_282();
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
				func_241();
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
				if (func_281())
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
			if (func_280())
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
			func_279();
			Global_15703 = bParam2;
		}
		Global_15695 = iParam1;
		StringCopy(&Global_15312, sParam0, 24);
		Global_14559 = 0;
		func_278();
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
		func_283();
	}
	return 0;
}

void func_278()
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

void func_279()
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

int func_280()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_281()
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

void func_282()
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

void func_283()
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

void func_284(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15147 = { *uParam0 };
	Global_1580 = iParam1;
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

int func_285(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_284(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15741 = 1;
	Global_15700 = 1;
	Global_15707 = 0;
	Global_15702 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 0;
	Global_15698 = 0;
	Global_15745 = 0;
	Global_15747 = 0;
	Global_2621441 = 0;
	return func_277(sParam3, iParam4, bParam7);
}

int func_286(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
	}
	if (unk_0xE8CA5AAF4928DD46(unk_0x81873881071CD9FE()))
	{
		return 0;
	}
	if (func_288(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_287();
		func_273();
		func_226();
		func_272();
		func_271();
		return 1;
	}
	return 0;
}

void func_287()
{
	Global_16711 = 0;
}

bool func_288(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_284(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15741 = 0;
	Global_15700 = 1;
	Global_15707 = 0;
	Global_15702 = 1;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 0;
	Global_15698 = 0;
	Global_15745 = 1;
	Global_15747 = 0;
	StringCopy(&Global_15841, sParam5, 24);
	Global_2621441 = 0;
	return func_277(sParam3, iParam4, bParam8);
}

int func_289(var uParam0, char* sParam1, char* sParam2)
{
	if (func_291(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_290();
		func_226();
		func_272();
		return 1;
	}
	return 0;
}

void func_290()
{
	Global_1328429.f_40.f_9 = 2;
}

bool func_291(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_284(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15700 = 0;
	Global_15702 = 0;
	Global_15707 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 0;
	Global_2621441 = 0;
	return func_277(sParam2, iParam3, 0);
}

void func_292()
{
	Global_1328429.f_55 = Global_1328429.f_40.f_1;
	Global_1328429.f_55.f_1 = Global_1328429.f_40.f_10;
}

void func_293()
{
	Global_1328429.f_40 = 1;
}

bool func_294()
{
	return Global_1328429.f_40 == 1;
}

int func_295(int iParam0, int iParam1, int iParam2)
{
	if (!func_296(iParam0))
	{
		return 0;
	}
	if (Global_1328429.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1328429.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_296(int iParam0)
{
	if (!func_297())
	{
		return 0;
	}
	if (!Global_1328429.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_297()
{
	if (Global_1328429.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_298(int iParam0)
{
	if (func_301())
	{
		return 0;
	}
	if (func_104())
	{
		return 0;
	}
	if (func_308(0))
	{
		return 0;
	}
	if (Global_1312466.f_18 != 0)
	{
		return 0;
	}
	if (Global_1698742 || func_300())
	{
		return 0;
	}
	if (!unk_0x236D8AD7EE179F46(iParam0, 6))
	{
		if (func_299())
		{
			return 0;
		}
	}
	return 1;
}

bool func_299()
{
	return unk_0x18E9EAED9F29B72C(unk_0xD74C7D8D2E5E43D2(), Global_1343296);
}

int func_300()
{
	if (Global_2539917.f_796 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_301()
{
	return func_280();
}

int func_302(int iParam0, int iParam1, int iParam2)
{
	if (!func_104())
	{
		return 0;
	}
	return func_295(iParam0, iParam1, iParam2);
}

int func_303(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0x8DAF7A748E41AD46(&cVar0);
}

char* func_304()
{
	return "TXTMSG";
}

int func_305(struct<3> Param0, char* sParam3, char* sParam4)
{
	int iVar0;
	
	if (!unk_0xB318FDA0D1ABDB20(sParam3))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (!unk_0xD994929E13CC1ED5(&(Global_2451473.f_3810[iVar0 /*26*/].f_4), sParam3))
			{
				if (unk_0xB318FDA0D1ABDB20(&(Global_2451473.f_3810[iVar0 /*26*/].f_4)))
				{
					Global_2451473.f_3810[iVar0 /*26*/] = 1;
					Global_2451473.f_3810[iVar0 /*26*/].f_1 = { Param0 };
					StringCopy(&(Global_2451473.f_3810[iVar0 /*26*/].f_4), sParam3, 24);
					StringCopy(&(Global_2451473.f_3810[iVar0 /*26*/].f_10), sParam4, 64);
					return 1;
				}
			}
			else if (!func_26(Global_2451473.f_3810[iVar0 /*26*/].f_1, Param0, 0))
			{
				Global_2451473.f_3810[iVar0 /*26*/] = 1;
				Global_2451473.f_3810[iVar0 /*26*/].f_1 = { Param0 };
				StringCopy(&(Global_2451473.f_3810[iVar0 /*26*/].f_4), sParam3, 24);
				StringCopy(&(Global_2451473.f_3810[iVar0 /*26*/].f_10), sParam4, 64);
				return 1;
			}
			else
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

char* func_306(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
	return "";
}

int func_307(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	unk_0xC69E84EBBD7166E6(&Global_2264, 10);
	iVar0 = 3;
	if (func_264(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_2971 = iParam10;
			Global_2874[3 /*6*/] = { Global_98931.f_32499[iParam0 /*29*/].f_3 };
			Global_2951 = iParam0;
			StringCopy(&Global_2952, sParam5, 64);
			unk_0xF3148AAF69AF9CBC(&Global_2264, 1);
			unk_0xF3148AAF69AF9CBC(&Global_2264, 7);
		}
		return 1;
	}
	return 0;
}

int func_308(int iParam0)
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

bool func_309()
{
	return func_297();
}

void func_310()
{
	if (func_65())
	{
		if (!iLocal_346 == Local_383.f_32)
		{
			Global_2451473.f_1535 = { Local_371 };
			func_311();
			iLocal_346 = Local_383.f_32;
		}
	}
}

void func_311()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 5)
	{
		StringCopy(&(Global_2451473.f_1554[iVar1 /*4*/]), "", 16);
		if (!Global_2451473.f_1535[iVar1] == -1 && Global_2451473.f_1535.f_6[iVar1] == 0)
		{
			StringCopy(&(Global_2451473.f_1554[iVar0 /*4*/]), func_312(Global_2451473.f_1535[iVar1], 1), 16);
			iVar0++;
		}
		iVar1++;
	}
	Global_2451473.f_1575 = iVar0;
}

char* func_312(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return "IMPEX_CAR_0B";
			
			case 1:
				return "IMPEX_CAR_2B";
			
			case 2:
				return "IMPEX_CAR_3B";
			
			case 3:
				return "IMPEX_CAR_4B";
			
			case 4:
				return "IMPEX_CAR_5B";
			
			case 5:
				return "IMPEX_CAR_6B";
			
			case 6:
				return "IMPEX_CAR_7B";
			
			case 7:
				return "IMPEX_CAR_8B";
			
			case 8:
				return "IMPEX_CAR_9B";
			
			case 9:
				return "IMPEX_CAR_10B";
			
			case 10:
				return "IMPEX_CAR_11B";
			
			case 11:
				return "IMPEX_CAR_12B";
			
			case 12:
				return "IMPEX_CAR_13B";
			
			case 13:
				return "IMPEX_CAR_14B";
			
			case 14:
				return "IMPEX_CAR_15B";
			
			case 15:
				return "IMPEX_CAR_16B";
			
			case 16:
				return "IMPEX_CAR_17B";
			
			case 17:
				return "IMPEX_CAR_22B";
			
			case 18:
				return "IMPEX_CAR_19B";
			
			case 19:
				return "IMPEX_CAR_20B";
			
			case 20:
				return "IMPEX_CAR_21B";
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return "IMPEX_CAR_0";
			
			case 1:
				return "IMPEX_CAR_2";
			
			case 2:
				return "IMPEX_CAR_3";
			
			case 3:
				return "IMPEX_CAR_4";
			
			case 4:
				return "IMPEX_CAR_5";
			
			case 5:
				return "IMPEX_CAR_6";
			
			case 6:
				return "IMPEX_CAR_7";
			
			case 7:
				return "IMPEX_CAR_8";
			
			case 8:
				return "IMPEX_CAR_9";
			
			case 9:
				return "IMPEX_CAR_10";
			
			case 10:
				return "IMPEX_CAR_11";
			
			case 11:
				return "IMPEX_CAR_12";
			
			case 12:
				return "IMPEX_CAR_13";
			
			case 13:
				return "IMPEX_CAR_14";
			
			case 14:
				return "IMPEX_CAR_15";
			
			case 15:
				return "IMPEX_CAR_16";
			
			case 16:
				return "IMPEX_CAR_17";
			
			case 17:
				return "IMPEX_CAR_22";
			
			case 18:
				return "IMPEX_CAR_19";
			
			case 19:
				return "IMPEX_CAR_20";
			
			case 20:
				return "IMPEX_CAR_21";
			}
		
		default:
	}
	return "";
}

void func_313()
{
	int iVar0;
	
	if (!iLocal_115)
	{
		if (!func_317(unk_0x1329891157A54C63(), 1))
		{
			if (!Local_383.f_28 == -1)
			{
				if (!iLocal_348 == func_29(Local_383.f_28))
				{
					if (!func_316(unk_0x81873881071CD9FE()))
					{
						iLocal_348 = func_29(Local_383.f_28);
						iVar0 = 0;
						while (iVar0 < iLocal_358)
						{
							unk_0xFAFFB5F9A31DC613(iLocal_358[iVar0], iLocal_348);
							iVar0++;
						}
						iLocal_115 = 1;
						unk_0x32A12757CBF48A33(iLocal_348);
						func_315();
						func_314(iLocal_348);
					}
				}
			}
		}
	}
	else if ((func_317(unk_0x1329891157A54C63(), 1) || (Local_383.f_28 > -1 && !iLocal_348 == func_29(Local_383.f_28))) || func_316(unk_0x81873881071CD9FE()))
	{
		unk_0x887F4488DA99FD21(iLocal_348);
		iVar0 = 0;
		while (iVar0 < iLocal_358)
		{
			unk_0x7937595CD33BBBA1(iLocal_358[iVar0]);
			iVar0++;
		}
		func_315();
		iLocal_348 = 0;
		iLocal_115 = 0;
	}
}

void func_314(int iParam0)
{
	if (unk_0x236D8AD7EE179F46(Local_383.f_23, 0))
	{
		if (iParam0 == Local_383.f_67)
		{
			return;
		}
	}
	switch (iParam0)
	{
		case joaat("sentinel"):
		case joaat("serrano"):
		case joaat("dominator"):
		case joaat("schafter2"):
		case joaat("surge"):
			iLocal_301[0] = unk_0x52439DEA077EEB33(-54.2664f, -1679.549f, 28.4414f, 228.2736f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_301[1] = unk_0x52439DEA077EEB33(-47.0703f, -1115.41f, 25.4327f, 204.5124f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_301[2] = unk_0x52439DEA077EEB33(1227.06f, 2718.678f, 37.0051f, 359.6756f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_301[3] = unk_0x52439DEA077EEB33(-1388.704f, 44.2178f, 52.6041f, 313.0655f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_301[4] = unk_0x52439DEA077EEB33(430.9073f, -1154.745f, 28.2919f, 267.6113f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_301[5] = unk_0x52439DEA077EEB33(1123.513f, 243.2258f, 79.8556f, 237.5495f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_301[6] = unk_0x52439DEA077EEB33(-841.395f, -138.6138f, 36.5745f, 65.0431f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_301[7] = unk_0x52439DEA077EEB33(-150.0053f, -618.0887f, 31.4271f, 249.907f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_301[8] = unk_0x52439DEA077EEB33(-827.7974f, 170.3065f, 69.2223f, 158.4295f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_301[9] = unk_0x52439DEA077EEB33(-1215.953f, -1675.18f, 2.9847f, 305.2072f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_312 = 1;
			break;
		
		case joaat("jackal"):
		case joaat("ztype"):
		case joaat("tailgater"):
		case joaat("landstalker"):
		case joaat("penumbra"):
			iLocal_301[0] = unk_0x52439DEA077EEB33(443.759f, -1164.002f, 28.2918f, 87.9477f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_301[1] = unk_0x52439DEA077EEB33(-1392.001f, 80.7104f, 52.8682f, 309.0381f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_301[2] = unk_0x52439DEA077EEB33(1075.871f, 248.5613f, 79.8556f, 294.4635f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_301[3] = unk_0x52439DEA077EEB33(-815.4279f, -1318.027f, 4.0003f, 170.2029f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_301[4] = unk_0x52439DEA077EEB33(-1215.953f, -1675.18f, 2.9847f, 305.2072f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_301[5] = unk_0x52439DEA077EEB33(-195.9823f, -1960.096f, 26.6205f, 284.8585f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_301[6] = unk_0x52439DEA077EEB33(-1101.607f, -445.1016f, 34.6997f, 297.4066f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_301[7] = unk_0x52439DEA077EEB33(-3018.759f, 739.4393f, 26.5749f, 101.9264f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_301[8] = unk_0x52439DEA077EEB33(-1550.796f, 881.1625f, 177.8996f, 223.4805f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_301[9] = unk_0x52439DEA077EEB33(-420.3277f, 1202.552f, 324.6421f, 50.857f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_312 = 1;
			break;
		
		case joaat("f620"):
		case joaat("fq2"):
		case joaat("patriot"):
		case joaat("habanero"):
		case joaat("prairie"):
		case joaat("gresley"):
			iLocal_301[0] = unk_0x52439DEA077EEB33(464.1028f, 226.5939f, 102.1875f, 247.3152f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_301[1] = unk_0x52439DEA077EEB33(-2437.372f, 3377.217f, 31.9214f, 29.7691f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_301[2] = unk_0x52439DEA077EEB33(-1639.857f, -906.3636f, 7.7037f, 139.4463f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_301[3] = unk_0x52439DEA077EEB33(-2981.245f, 612.5886f, 19.1798f, 105.0653f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_301[4] = unk_0x52439DEA077EEB33(-1542.332f, 887.9052f, 180.491f, 19.9514f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_301[5] = unk_0x52439DEA077EEB33(-420.3277f, 1202.552f, 324.6421f, 50.857f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_301[6] = unk_0x52439DEA077EEB33(-331.3999f, -935.0096f, 30.0798f, 249.9035f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_301[7] = unk_0x52439DEA077EEB33(-976.5854f, -2573.472f, 35.6066f, 240.851f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_301[8] = unk_0x52439DEA077EEB33(-350.7184f, 427.0929f, 109.5371f, 17.3499f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_301[9] = unk_0x52439DEA077EEB33(-208.5685f, -2077.887f, 26.6204f, 47.4426f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_312 = 1;
			break;
		
		case joaat("fusilade"):
		case joaat("bjxl"):
		case joaat("buccaneer"):
		case joaat("daemon"):
		case joaat("bagger"):
			iLocal_301[0] = unk_0x52439DEA077EEB33(-815.4279f, -1318.027f, 4.0003f, 170.2029f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_301[1] = unk_0x52439DEA077EEB33(-1215.953f, -1675.18f, 2.9847f, 305.2072f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_301[2] = unk_0x52439DEA077EEB33(-195.9823f, -1960.096f, 26.6205f, 284.8585f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_301[3] = unk_0x52439DEA077EEB33(-826.9526f, -236.9994f, 36.0555f, 209.0553f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_301[4] = unk_0x52439DEA077EEB33(-819.5961f, 183.2204f, 71.0876f, 115.4816f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_301[5] = unk_0x52439DEA077EEB33(-141.4775f, -594.4868f, 31.4271f, 69.7535f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_301[6] = unk_0x52439DEA077EEB33(443.759f, -1164.002f, 28.2918f, 87.9477f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_301[7] = unk_0x52439DEA077EEB33(-1392.001f, 80.7104f, 52.8682f, 309.0381f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_301[8] = unk_0x52439DEA077EEB33(1075.871f, 248.5613f, 79.8556f, 294.4635f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_301[9] = unk_0x52439DEA077EEB33(1218.18f, 2708.298f, 37.0054f, 359.1518f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_312 = 1;
			break;
	}
}

void func_315()
{
	int iVar0;
	
	if (iLocal_312)
	{
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x1CC43FB92399D99B(iLocal_301[iVar0]))
		{
			unk_0x019938F61278C346(iLocal_301[iVar0]);
		}
		iLocal_301[iVar0] = 0;
		iVar0++;
	}
	iLocal_312 = 0;
}

bool func_316(int iParam0)
{
	if (!unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		return 0;
	}
	if (unk_0x930F8FBB8E9537CC(iParam0))
	{
	}
	return unk_0x74D4E5ACB4DAF9B8(iParam0) == Global_135810;
}

bool func_317(int iParam0, bool bParam1)
{
	if (Global_1312447 != 0)
	{
		return func_318(iParam0) != 0;
	}
	return func_123(iParam0, bParam1);
}

int func_318(int iParam0)
{
	if (func_14(iParam0, 0, 1))
	{
		return Global_2414506[iParam0 /*255*/].f_1;
	}
	return 0;
}

void func_319()
{
	var uVar0;
	
	if (!func_421(&uLocal_333))
	{
		func_420(&uLocal_333, 0, 0);
	}
	else if (func_419(&uLocal_333, 250, 0))
	{
		func_41(&uLocal_333);
		if (func_332(1, 0))
		{
			if (!unk_0x236D8AD7EE179F46(iLocal_341, 5) && !func_331())
			{
			}
			else if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
			{
				if ((func_330() || func_331()) || func_327())
				{
					if (!func_326(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0)))
					{
						if (!func_325(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0)) && !func_15(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0)))
						{
							if (!unk_0x9C85ECF581158409(unk_0x1329891157A54C63(), 0))
							{
								if (func_321(&uVar0))
								{
									if (!unk_0x236D8AD7EE179F46(iLocal_341, 2))
									{
										if (func_200() && unk_0x83666F9FB8FEBD4B() > 500)
										{
											func_137("IMPEX_FSPRAY_FM", -1);
											unk_0xF3148AAF69AF9CBC(&iLocal_341, 2);
										}
									}
									else
									{
										unk_0xC1B1E9A034A63A62(0);
									}
								}
								else if (!unk_0x236D8AD7EE179F46(iLocal_341, 8))
								{
									if (func_200() && unk_0x83666F9FB8FEBD4B() > 500)
									{
										func_137("IMPEX_CASH_FM", -1);
										unk_0xF3148AAF69AF9CBC(&iLocal_341, 8);
									}
								}
								else
								{
									unk_0xC1B1E9A034A63A62(0);
								}
							}
							else if (!unk_0x236D8AD7EE179F46(iLocal_341, 11))
							{
								if (func_200() && unk_0x83666F9FB8FEBD4B() > 500)
								{
									func_137("IMPEX_WANTED_FM", -1);
									unk_0xF3148AAF69AF9CBC(&iLocal_341, 11);
								}
							}
							else
							{
								unk_0xC1B1E9A034A63A62(0);
							}
						}
						else if (!unk_0x9C85ECF581158409(unk_0x1329891157A54C63(), 0))
						{
							if (!func_320())
							{
								if (!func_15(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0)))
								{
									if (!unk_0x236D8AD7EE179F46(iLocal_341, 3))
									{
										unk_0xC69E84EBBD7166E6(&iLocal_341, 7);
										if (func_200() && unk_0x83666F9FB8FEBD4B() > 2000)
										{
											if (Global_2451473.f_4360 == 0)
											{
												if (!func_192(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), 0))
												{
													func_137("IMPEX_DELIVER_FM", -1);
													unk_0xF3148AAF69AF9CBC(&iLocal_341, 3);
												}
											}
										}
									}
									else
									{
										unk_0xC1B1E9A034A63A62(0);
									}
								}
								else if (!unk_0x236D8AD7EE179F46(iLocal_341, 7))
								{
									if (func_200() && unk_0x83666F9FB8FEBD4B() > 2000)
									{
										func_137("IMPEX_RIG_FM", -1);
										unk_0xF3148AAF69AF9CBC(&iLocal_341, 7);
									}
								}
								else
								{
									unk_0xC1B1E9A034A63A62(0);
								}
							}
							else if (!unk_0x236D8AD7EE179F46(iLocal_341, 6))
							{
								if (func_200() && unk_0x83666F9FB8FEBD4B() > 2000)
								{
									func_137("IMPEX_WANTED_P", -1);
									unk_0xF3148AAF69AF9CBC(&iLocal_341, 6);
								}
							}
							else
							{
								unk_0xC1B1E9A034A63A62(0);
							}
						}
						else if (!unk_0x236D8AD7EE179F46(iLocal_341, 4))
						{
							if (func_200() && unk_0x83666F9FB8FEBD4B() > 5000)
							{
								func_137("IMPEX_WANTED_FM", -1);
								unk_0xF3148AAF69AF9CBC(&iLocal_341, 4);
							}
						}
						else
						{
							unk_0xC1B1E9A034A63A62(0);
						}
					}
				}
				else
				{
					if (func_183("IMPEX_FSPRAY_FM"))
					{
						unk_0xB8BB626315D394F5(1);
					}
					unk_0xC69E84EBBD7166E6(&iLocal_341, 2);
					unk_0xC69E84EBBD7166E6(&iLocal_341, 3);
					unk_0xC69E84EBBD7166E6(&iLocal_341, 4);
					unk_0xC69E84EBBD7166E6(&iLocal_341, 6);
					unk_0xC69E84EBBD7166E6(&iLocal_341, 7);
					unk_0xC69E84EBBD7166E6(&iLocal_341, 8);
					unk_0xC69E84EBBD7166E6(&iLocal_341, 11);
					unk_0xC1B1E9A034A63A62(0);
				}
			}
			else
			{
				if (func_183("IMPEX_FSPRAY_FM"))
				{
					unk_0xB8BB626315D394F5(1);
				}
				unk_0xC69E84EBBD7166E6(&iLocal_341, 2);
				unk_0xC69E84EBBD7166E6(&iLocal_341, 3);
				unk_0xC69E84EBBD7166E6(&iLocal_341, 4);
				unk_0xC69E84EBBD7166E6(&iLocal_341, 6);
				unk_0xC69E84EBBD7166E6(&iLocal_341, 7);
				unk_0xC69E84EBBD7166E6(&iLocal_341, 8);
				unk_0xC69E84EBBD7166E6(&iLocal_341, 11);
				if (unk_0x83666F9FB8FEBD4B() > 0)
				{
					unk_0xC1B1E9A034A63A62(0);
				}
			}
		}
		else if (func_183("IMPEX_FSPRAY_FM"))
		{
			unk_0xB8BB626315D394F5(1);
		}
	}
}

int func_320()
{
	var uVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar3 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
	iVar2 = 0;
	while (iVar2 < 4)
	{
		iVar1 = (iVar2 - 1);
		if (!unk_0xBEB00EB4ADDC2A33(uVar3, iVar1))
		{
			if (unk_0x86CCCD2FAE9D5E65(unk_0xB0B9E53CEFDB16AA(iVar3, iVar1)))
			{
				if (!unk_0x930F8FBB8E9537CC(unk_0xB0B9E53CEFDB16AA(iVar3, iVar1)))
				{
					uVar0 = unk_0xB0B9E53CEFDB16AA(iVar3, iVar1);
					if (!unk_0x0452D5BF20AD945A(uVar0))
					{
						return 1;
					}
				}
			}
		}
		iVar2++;
	}
	return 0;
}

int func_321(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		iVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
		iVar1 = func_324(1);
		*uParam0 = func_322(iVar0);
		if (iVar1 < (400 + *uParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_322(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	fVar3 = unk_0x531DDCEA74D8044A(iParam0);
	if (fVar3 > 10f)
	{
		iVar9 = 8;
	}
	else if (fVar3 > 5f)
	{
		iVar9 = 4;
	}
	fVar3 = (unk_0xFF463728B23A0037(iParam0) / 1000f);
	if (fVar3 > 0.99f)
	{
		iVar5 = 0;
	}
	else if (fVar3 > 0.8f)
	{
		iVar5 = 20;
	}
	else if (fVar3 > 0.6f)
	{
		iVar5 = 40;
	}
	else if (fVar3 > 0.4f)
	{
		iVar5 = 80;
	}
	else
	{
		iVar5 = 100;
	}
	fVar3 = (unk_0xEA3967251D64D3AF(iParam0) / 1000f);
	if (fVar3 > 0.99f)
	{
		iVar6 = 0;
	}
	else if (fVar3 > 0.8f)
	{
		iVar6 = 20;
	}
	else if (fVar3 > 0.6f)
	{
		iVar6 = 40;
	}
	else if (fVar3 > 0.4f)
	{
		iVar6 = 60;
	}
	else
	{
		iVar6 = 75;
	}
	fVar3 = unk_0xBBDA792448DB5A89((unk_0x4DC6EF945236C0F7(iParam0) / 1000));
	if (fVar3 > 0.99f)
	{
		iVar8 = 0;
	}
	else if (fVar3 > 0.8f)
	{
		iVar8 = 40;
	}
	else if (fVar3 > 0.6f)
	{
		iVar8 = 80;
	}
	else if (fVar3 > 0.4f)
	{
		iVar8 = 150;
	}
	else
	{
		iVar8 = 200;
	}
	if (unk_0x162AC0531DD0427F(iParam0))
	{
		iVar8 += 50;
	}
	if (unk_0x104FC84F1450158C(iParam0, 1))
	{
		iVar8 += 50;
	}
	else if (unk_0xE61CD5D7B8B6664E(iParam0, 1))
	{
		iVar8 += 25;
	}
	if (unk_0x104FC84F1450158C(iParam0, 0))
	{
		iVar8 += 50;
	}
	else if (unk_0xE61CD5D7B8B6664E(iParam0, 0))
	{
		iVar8 += 25;
	}
	if (!unk_0x512BEF606A93ED96(iParam0))
	{
		iVar10 += 20;
		if (!unk_0x61B3150BF9145A92(iParam0, 6))
		{
			iVar10 += 40;
		}
		if (!unk_0x61B3150BF9145A92(iParam0, 7))
		{
			iVar10 += 40;
		}
	}
	if (unk_0x61A26017817C6AED(unk_0x14B7103DBD149FFE(iParam0)))
	{
		iVar1 = 0;
		if (unk_0x1E934CB6473D0B93(iParam0, 0))
		{
			iVar1++;
		}
		if (unk_0x1E934CB6473D0B93(iParam0, 1))
		{
			iVar1++;
		}
		if (unk_0x1E934CB6473D0B93(iParam0, 2))
		{
			iVar1++;
		}
		if (unk_0x1E934CB6473D0B93(iParam0, 3))
		{
			iVar1++;
		}
		if (unk_0x1E934CB6473D0B93(iParam0, 4))
		{
			iVar1++;
		}
		if (unk_0x1E934CB6473D0B93(iParam0, 5))
		{
			iVar1++;
		}
		iVar8 = (iVar8 + iVar1 * 25);
	}
	if (unk_0x5B737E6554241F38(iParam0))
	{
		iVar8 += 15;
	}
	if (unk_0x250C999CEE1C178A(iParam0))
	{
		iVar8 += 15;
	}
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 8)
	{
		if (unk_0x2A87B5EC03992FB8(iParam0, iVar2, 0))
		{
			iVar1++;
		}
		iVar2++;
	}
	iVar7 = iVar1 * 25;
	if (unk_0xCA88583E138D6BF8(iParam0))
	{
		iVar11 = 50;
	}
	iVar0 = (((((((iVar4 + iVar5) + iVar6) + iVar8) + iVar7) + iVar9) + iVar10) + iVar11);
	if (iVar0 > 0)
	{
		if (func_323(unk_0x14B7103DBD149FFE(iParam0)))
		{
			iVar4 = 0;
		}
		else
		{
			iVar4 = 50;
		}
		iVar0 = (iVar0 + iVar4);
	}
	if (!func_323(unk_0x14B7103DBD149FFE(iParam0)))
	{
		if (iVar0 > 1250)
		{
			iVar0 = 1250;
		}
	}
	if (func_323(unk_0x14B7103DBD149FFE(iParam0)))
	{
		iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_9300));
		if (iVar0 > unk_0xF34EE736CF047844((4f * Global_262145.f_9300)))
		{
			iVar4 = Global_262145.f_9298;
			iVar0 = (iVar0 + iVar4);
		}
	}
	if (iVar0 > Global_262145.f_9299)
	{
		iVar0 = Global_262145.f_9299;
	}
	return iVar0;
}

int func_323(int iParam0)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
	}
	return 0;
}

int func_324(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		iVar0 = unk_0x18E1732F35074CBF();
	}
	iVar0 = (iVar0 + unk_0x5DE212B0AA7F2897(-1));
	return iVar0;
}

bool func_325(int iParam0)
{
	return unk_0xCEC9D74C9FF51C8C(iParam0, "Sprayed_Vehicle_Decorator");
}

int func_326(int iParam0)
{
	if (unk_0xCEC9D74C9FF51C8C(iParam0, "Veh_Modded_By_Player") && unk_0x8B4662A1D2DF932C(iParam0, "Veh_Modded_By_Player") != unk_0x8DAF7A748E41AD46(unk_0xB67DF8F35744CF60(unk_0x1329891157A54C63())))
	{
		return 1;
	}
	return 0;
}

int func_327()
{
	var uVar0;
	
	if (func_429())
	{
		return 0;
	}
	if (unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()))
	{
		uVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
		if (!func_329(uVar0))
		{
			if (func_328(unk_0x14B7103DBD149FFE(uVar0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_328(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_70(iParam0);
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (Local_383.f_35[iVar1] == iVar0)
			{
				if (!func_419(&(Local_383.f_46[iVar1 /*2*/]), 120000, 0))
				{
					return 1;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_329(int iParam0)
{
	if (Global_69020)
	{
		if (unk_0xCEC9D74C9FF51C8C(iParam0, "Player_Vehicle"))
		{
			return 1;
		}
	}
	return 0;
}

int func_330()
{
	var uVar0;
	
	if (func_429())
	{
		return 0;
	}
	if (unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()))
	{
		if (!Global_1689293)
		{
			uVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
			if (!func_329(uVar0))
			{
				if (!unk_0x45AFEFCDD35076F2(uVar0, 0))
				{
					if (unk_0x7404950238A154C2(iVar0, 1))
					{
						if (Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_7 <= 0)
						{
							if (!unk_0xCEC9D74C9FF51C8C(iVar0, "Not_Allow_As_Saved_Veh"))
							{
								if (!Global_1689292)
								{
									if (bLocal_313)
									{
										bLocal_313 = false;
									}
									if (func_69(&Local_371, unk_0x14B7103DBD149FFE(iVar0)))
									{
										Global_2451473.f_1579 = 1;
										return 1;
									}
								}
							}
						}
					}
					else if (!bLocal_313)
					{
						bLocal_313 = true;
					}
				}
			}
		}
	}
	return 0;
}

int func_331()
{
	if (unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()))
	{
		if (unk_0x236D8AD7EE179F46(Local_383.f_23, 0))
		{
			if (unk_0x335F574AD77E59CE(Local_383.f_22))
			{
				if (func_4(Local_383.f_22))
				{
					if (unk_0x58A69336FE7307D8(unk_0x81873881071CD9FE(), unk_0x1D1DAF7F94D5FE77(Local_383.f_22)))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_332(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = true;
	if (unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		bVar0 = false;
	}
	if (!bParam1)
	{
		if (bVar0)
		{
			if (!unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63()))
			{
				bVar0 = false;
			}
		}
	}
	if (!bParam0)
	{
		if (bVar0)
		{
			if (unk_0x9C85ECF581158409(unk_0x1329891157A54C63(), 0))
			{
				bVar0 = false;
			}
		}
	}
	if (bVar0)
	{
		if (func_123(unk_0x1329891157A54C63(), 1))
		{
			bVar0 = false;
		}
	}
	if (bVar0)
	{
		if (func_107())
		{
			bVar0 = false;
		}
	}
	if (!func_14(unk_0x1329891157A54C63(), 0, 0))
	{
		bVar0 = false;
	}
	if (func_66(unk_0x1329891157A54C63(), 1))
	{
		bVar0 = false;
	}
	return bVar0;
}

void func_333()
{
	int iVar0;
	
	switch (iLocal_128)
	{
		case 0:
			if (!func_123(unk_0x1329891157A54C63(), 1))
			{
				if (!func_421(&uLocal_129) || func_419(&uLocal_129, 2000, 0))
				{
					if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
					{
						if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), 1199.403f, -3113.591f, 4.5453f) < 400f)
						{
							func_335(&uLocal_133, 4, iLocal_127, "MECHANIC_IMP", 0, 1);
							iLocal_590 = 0;
							iLocal_128++;
						}
					}
					func_41(&uLocal_129);
					func_420(&uLocal_129, 0, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
			{
				if (!func_123(unk_0x1329891157A54C63(), 1))
				{
					if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), 1199.403f, -3113.591f, 4.5453f) < 600f)
					{
						if (bLocal_112)
						{
							if (unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()))
							{
								if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 1204.224f, -3121.533f, 4.357823f, 1204.521f, -3107.603f, 8.653814f, 5.1875f, 0, 1, 0))
								{
									if (!iLocal_590)
									{
										iVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
										if (func_322(iVar0) > 500)
										{
											sLocal_591 = "FM_IEPOOR";
										}
										else
										{
											sLocal_591 = "FM_IEGOOD";
										}
										iLocal_590 = 1;
									}
									else if (func_291(&uLocal_133, "FM_1AU", sLocal_591, 12, 0, 0, 0))
									{
										iLocal_298 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
										iLocal_128++;
										iLocal_590 = 0;
									}
								}
							}
						}
					}
					else
					{
						func_334();
						iLocal_128 = 0;
					}
				}
				else
				{
					func_334();
					iLocal_128 = 0;
				}
			}
			break;
		
		case 2:
			if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
			{
				if (!func_123(unk_0x1329891157A54C63(), 1))
				{
					if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), 1199.403f, -3113.591f, 4.5453f) < 600f)
					{
						if (bLocal_112)
						{
							if (unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()))
							{
								if (unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0) != iLocal_298)
								{
									iLocal_128 = 1;
								}
							}
						}
					}
					else
					{
						func_334();
						iLocal_128 = 0;
					}
				}
				else
				{
					func_334();
					iLocal_128 = 0;
				}
			}
			break;
	}
}

void func_334()
{
	var uVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(iLocal_127))
	{
		unk_0x887F4488DA99FD21(joaat("s_m_y_xmech_02"));
		uVar0 = iLocal_127;
		unk_0xFF4D210CF887E915(&uVar0);
	}
}

void func_335(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_336()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	struct<3> Var9;
	int iVar12;
	
	if (func_332(1, 1))
	{
		switch (Local_459[unk_0x519AAFF77CC141DF() /*4*/].f_1)
		{
			case 0:
				if (unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()))
				{
					bVar7 = func_327();
					if ((func_330() || func_331()) || bVar7)
					{
						if (!func_320())
						{
							if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) == 0)
							{
								if (!func_408())
								{
									if (bLocal_111)
									{
										bLocal_111 = false;
									}
									iVar3 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
									if (!iLocal_117)
									{
										if (func_407(iVar3))
										{
											unk_0xE9E74A97DB98B442(unk_0x1329891157A54C63(), 2, 0);
											unk_0x2E2A75923F20DCD2(unk_0x1329891157A54C63(), 0);
										}
									}
									iLocal_592 = iVar3;
									if (unk_0x236D8AD7EE179F46(iLocal_588, 15))
									{
										unk_0xC69E84EBBD7166E6(&iLocal_588, 15);
									}
									if (unk_0x236D8AD7EE179F46(iLocal_341, 9))
									{
										unk_0xC69E84EBBD7166E6(&iLocal_341, 9);
									}
									if (unk_0x236D8AD7EE179F46(iLocal_341, 12))
									{
										unk_0xC69E84EBBD7166E6(&iLocal_341, 12);
									}
									if (unk_0x236D8AD7EE179F46(iLocal_341, 10))
									{
										unk_0xC69E84EBBD7166E6(&iLocal_341, 10);
									}
									if (!unk_0x236D8AD7EE179F46(iLocal_588, 12))
									{
										if (bVar7)
										{
											unk_0xF3148AAF69AF9CBC(&iLocal_588, 12);
										}
									}
									else if (!bVar7)
									{
										unk_0xC69E84EBBD7166E6(&iLocal_588, 12);
									}
									if (func_325(iVar3))
									{
										if (!func_15(iVar3))
										{
											bLocal_104 = true;
											if (unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63()))
											{
												if (bLocal_110)
												{
													bLocal_110 = false;
												}
												if (unk_0xB0B9E53CEFDB16AA(iVar3, -1) == unk_0x81873881071CD9FE())
												{
													bLocal_107 = true;
												}
											}
											else if (func_72())
											{
												if (bLocal_107)
												{
													bLocal_107 = false;
												}
												bLocal_110 = true;
											}
											bLocal_105 = false;
											bLocal_106 = false;
											bLocal_108 = false;
											bLocal_109 = false;
											bLocal_111 = false;
											bLocal_112 = true;
											if (func_406(1215605247, 18))
											{
												bLocal_102 = true;
											}
											iLocal_354 = unk_0xC848C6F4EF7777AB(unk_0x81873881071CD9FE());
											if (!unk_0x9274B3297D0AC71D(iLocal_354))
											{
												if (func_192(iLocal_354, 0))
												{
													if (!unk_0x236D8AD7EE179F46(iLocal_588, 17))
													{
														unk_0xF3148AAF69AF9CBC(&iLocal_588, 17);
													}
													else if (func_192(iLocal_354, 1))
													{
														Var9 = { unk_0xC684AF573327E1AB(iLocal_354) };
														if (unk_0xA04824262F150982(iLocal_354) < 0.5f || unk_0xB9AA84B14E04BC20(Var9.f_1) < 1.3f)
														{
															func_405();
															func_401(unk_0x1329891157A54C63(), 0, 16388);
															if (func_331())
															{
																unk_0xF3148AAF69AF9CBC(&iLocal_588, 4);
																unk_0xF3148AAF69AF9CBC(&(Local_459[unk_0x519AAFF77CC141DF() /*4*/].f_2), 1);
															}
															if (func_330() || func_327())
															{
																unk_0xF3148AAF69AF9CBC(&iLocal_588, 6);
															}
															if (func_400())
															{
																bLocal_101 = true;
															}
															else
															{
																bLocal_101 = false;
															}
															unk_0xC390A6485FB80923(iLocal_354, 2);
															if (unk_0x4D2386673BCED434(iLocal_354))
															{
																unk_0xCEDA5B7DDF6C8846(iLocal_354, 1, 1, 1, 1, 1, 0, 0, 0);
															}
															Local_459[unk_0x519AAFF77CC141DF() /*4*/] = func_70(unk_0x14B7103DBD149FFE(iLocal_354));
															Local_459[unk_0x519AAFF77CC141DF() /*4*/].f_1 = 1;
															iVar5 = 0;
															iVar4 = 0;
															while (iVar4 < 4)
															{
																iVar1 = (iVar4 - 1);
																iLocal_349[iVar4] = func_257();
																if (!unk_0xBEB00EB4ADDC2A33(iLocal_354, iVar1))
																{
																	if (unk_0x86CCCD2FAE9D5E65(unk_0xB0B9E53CEFDB16AA(iLocal_354, iVar1)))
																	{
																		if (!unk_0x930F8FBB8E9537CC(unk_0xB0B9E53CEFDB16AA(iLocal_354, iVar1)))
																		{
																			iVar0 = unk_0xB0B9E53CEFDB16AA(iLocal_354, iVar1);
																			if (unk_0x0452D5BF20AD945A(iVar0))
																			{
																				if (func_14(unk_0x1B503E81E3B3D65F(iVar0), 0, 0))
																				{
																					if (unk_0x92016690A1675C2F(unk_0x1B503E81E3B3D65F(iVar0)))
																					{
																						iLocal_349[iVar4] = unk_0x1B503E81E3B3D65F(iVar0);
																						iVar5++;
																					}
																				}
																			}
																		}
																	}
																}
																iVar4++;
															}
															iLocal_320 = func_399(unk_0x14B7103DBD149FFE(iLocal_354));
															iLocal_321 = func_322(iLocal_354);
															fLocal_322 = unk_0xBBDA792448DB5A89((iLocal_320 - iLocal_321));
															fLocal_322 = (fLocal_322 * Global_262145.f_2403);
															if (unk_0x236D8AD7EE179F46(iLocal_588, 4))
															{
																fLocal_322 = (fLocal_322 * 1.3f);
															}
															fLocal_322 = (fLocal_322 / unk_0xBBDA792448DB5A89(iVar5));
															fLocal_323 = 500f;
															func_398();
															func_145(0);
															func_397(1236, 1, -1);
															if (func_183("IMPEX_DELIVER_FM"))
															{
																unk_0xB8BB626315D394F5(1);
															}
															unk_0xC69E84EBBD7166E6(&iLocal_588, 12);
															iVar6 = func_75(1189, -1, 0);
															if (!unk_0x236D8AD7EE179F46(iVar6, 1))
															{
																unk_0xF3148AAF69AF9CBC(&iVar6, 1);
																func_130(1189, iVar6, -1, 1);
															}
															else if (!unk_0x236D8AD7EE179F46(iVar6, 2))
															{
																unk_0xF3148AAF69AF9CBC(&iVar6, 2);
																func_130(1189, iVar6, -1, 1);
															}
															func_396();
															iLocal_324 = 0;
															iLocal_324 = unk_0xF2DB717A73826179(fLocal_322);
															iLocal_324 = (iLocal_324 - (iLocal_324 % 25));
															if (iLocal_593 == iVar3)
															{
																iLocal_324 = (iLocal_324 + iLocal_326);
															}
															if (!unk_0x236D8AD7EE179F46(iLocal_588, 4))
															{
																if (iLocal_324 > Global_262145.f_157)
																{
																	iLocal_324 = Global_262145.f_157;
																}
															}
															else if (iLocal_324 > Global_262145.f_157)
															{
																iLocal_324 = Global_262145.f_157;
															}
															iLocal_325 = 0;
															fLocal_323 = (fLocal_323 * Global_262145.f_4218);
															iLocal_325 = unk_0xF2DB717A73826179(fLocal_323);
															unk_0xC69E84EBBD7166E6(&iLocal_588, 17);
															iLocal_355 = iLocal_354;
															iLocal_357 = unk_0x14B7103DBD149FFE(iLocal_354);
															if (!unk_0x236D8AD7EE179F46(iLocal_588, 4))
															{
																unk_0xF132ED329C28B31C(19, iLocal_325, iLocal_324, iLocal_354);
															}
															else
															{
																unk_0xF132ED329C28B31C(120, iLocal_325, iLocal_324, iLocal_354);
															}
															func_395(19, 1);
															func_394();
															func_424();
														}
														else if (unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63()))
														{
															func_401(unk_0x1329891157A54C63(), 0, 16388);
														}
													}
												}
												else if (unk_0x236D8AD7EE179F46(iLocal_588, 17))
												{
													unk_0xC69E84EBBD7166E6(&iLocal_588, 17);
												}
											}
										}
										else
										{
											if (bLocal_104)
											{
												bLocal_104 = false;
											}
											if (bLocal_112)
											{
												bLocal_112 = false;
											}
											if (bLocal_107)
											{
												bLocal_107 = false;
											}
											if (bLocal_110)
											{
												bLocal_110 = false;
											}
											if (bLocal_111)
											{
												bLocal_111 = false;
											}
										}
									}
									else if (!func_15(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0)))
									{
										if (func_321(&iVar8))
										{
											if (!func_326(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0)))
											{
												if (unk_0xB0B9E53CEFDB16AA(iVar3, -1) == unk_0x81873881071CD9FE())
												{
													if (iLocal_593 != iVar3)
													{
														iLocal_593 = iVar3;
														iLocal_326 = 0;
													}
													else if (iLocal_326 != iVar8)
													{
														if (iLocal_326 < iVar8)
														{
															iLocal_326 = iVar8;
														}
													}
												}
												if (!bLocal_105)
												{
													bLocal_105 = true;
												}
												if (!unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63()))
												{
													if (func_72())
													{
														if (bLocal_106)
														{
															bLocal_106 = false;
														}
														if (unk_0xB0B9E53CEFDB16AA(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), -1) == unk_0x81873881071CD9FE())
														{
															if (func_322(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0)) > 0)
															{
																if (!bLocal_109)
																{
																	bLocal_109 = true;
																}
															}
															else
															{
																if (bLocal_109)
																{
																	bLocal_109 = false;
																}
																if (!bLocal_108)
																{
																	bLocal_108 = true;
																}
															}
														}
													}
												}
												else if (!func_72())
												{
													if (bLocal_108)
													{
														bLocal_108 = false;
													}
													if (bLocal_109)
													{
														bLocal_109 = false;
													}
													if (!bLocal_106)
													{
														if (unk_0xB0B9E53CEFDB16AA(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), -1) == unk_0x81873881071CD9FE())
														{
															bLocal_106 = true;
														}
													}
												}
											}
											else
											{
												func_393();
											}
										}
										else
										{
											func_393();
										}
									}
									else
									{
										func_393();
										if (bLocal_112)
										{
											bLocal_112 = false;
										}
									}
								}
							}
							else
							{
								iVar3 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
								if (iLocal_592 != iVar3)
								{
									if (!iLocal_117)
									{
										if (func_407(iVar3))
										{
											unk_0xE9E74A97DB98B442(unk_0x1329891157A54C63(), 2, 0);
											unk_0x2E2A75923F20DCD2(unk_0x1329891157A54C63(), 0);
										}
									}
									iLocal_592 = iVar3;
								}
								if (!bLocal_111)
								{
									func_393();
									bLocal_111 = true;
								}
							}
						}
					}
					else
					{
						func_393();
						if (bLocal_112)
						{
							bLocal_112 = false;
						}
						if (iLocal_117)
						{
							if (Local_383.f_33)
							{
								if (bLocal_122)
								{
									iLocal_117 = 0;
								}
							}
						}
						if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
						{
							if ((func_183("IMPEX_NOT_NEED") || func_183("IMPEX_NO_MORE")) || func_183("IMPEX_NOT_PVEH"))
							{
								unk_0xB8BB626315D394F5(1);
							}
						}
						iVar2 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
						if (func_329(iVar2))
						{
							if (unk_0xB0B9E53CEFDB16AA(iVar2, -1) == unk_0x81873881071CD9FE())
							{
								if (unk_0xCEC9D74C9FF51C8C(iVar2, "Player_Vehicle"))
								{
									if (unk_0x8B4662A1D2DF932C(iVar2, "Player_Vehicle") != unk_0x513A0BCF5E885650(unk_0x1329891157A54C63()) || iVar2 == iLocal_592)
									{
										if (unk_0x7404950238A154C2(iVar2, 0))
										{
											if (func_200())
											{
												if (!unk_0x236D8AD7EE179F46(iLocal_588, 15))
												{
													if (bVar7 || func_69(&Local_371, unk_0x14B7103DBD149FFE(iVar2)))
													{
														func_137("IMPEX_NOT_PVEH", -1);
														unk_0xF3148AAF69AF9CBC(&iLocal_588, 15);
													}
												}
											}
										}
									}
									else if (unk_0x236D8AD7EE179F46(iLocal_588, 15))
									{
										if (iVar2 != iLocal_592)
										{
											unk_0xC69E84EBBD7166E6(&iLocal_588, 15);
										}
									}
								}
							}
						}
						else
						{
							if (unk_0x236D8AD7EE179F46(iLocal_588, 15))
							{
								if (iVar2 != iLocal_592)
								{
									unk_0xC69E84EBBD7166E6(&iLocal_588, 15);
								}
							}
							if (bLocal_118)
							{
								if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) && func_406(1215605247, 18))
								{
									iVar2 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
									if (func_192(iVar2, 0))
									{
										if (!iLocal_116)
										{
											func_145(1);
											iLocal_116 = 1;
										}
										bLocal_102 = true;
									}
								}
								else if (iLocal_116)
								{
									func_145(0);
									iLocal_116 = 0;
									bLocal_102 = false;
								}
							}
						}
						if (func_406(1215605247, 18))
						{
							if (func_200())
							{
								if (func_329(iVar2))
								{
									if (unk_0x7404950238A154C2(iVar2, 0))
									{
										if (!unk_0x236D8AD7EE179F46(iLocal_341, 10))
										{
											func_137("IMPEX_NOT_PVEH", -1);
											unk_0xF3148AAF69AF9CBC(&iLocal_341, 10);
										}
									}
								}
								else if (func_69(&Local_371, unk_0x14B7103DBD149FFE(iVar2)))
								{
									if (unk_0x45AFEFCDD35076F2(iVar2, 0))
									{
										if (!unk_0x236D8AD7EE179F46(iLocal_341, 12))
										{
											func_137("IMPEX_NOT_CREW", -1);
											unk_0xF3148AAF69AF9CBC(&iLocal_341, 12);
										}
									}
								}
								else if (!unk_0x236D8AD7EE179F46(iLocal_341, 9))
								{
									if (unk_0xB0B9E53CEFDB16AA(iVar2, -1) == unk_0x81873881071CD9FE())
									{
										func_137("IMPEX_NOT_NEED", -1);
										unk_0xF3148AAF69AF9CBC(&iLocal_341, 9);
									}
								}
							}
						}
						else
						{
							if (unk_0x236D8AD7EE179F46(iLocal_341, 9))
							{
								unk_0xC69E84EBBD7166E6(&iLocal_341, 9);
							}
							if (unk_0x236D8AD7EE179F46(iLocal_341, 10))
							{
								unk_0xC69E84EBBD7166E6(&iLocal_341, 10);
							}
							if (unk_0x236D8AD7EE179F46(iLocal_341, 12))
							{
								unk_0xC69E84EBBD7166E6(&iLocal_341, 12);
							}
							if (unk_0x236D8AD7EE179F46(iLocal_588, 12))
							{
								if (func_200())
								{
									func_137("IMPEX_NO_MORE", -1);
									unk_0xC69E84EBBD7166E6(&iLocal_588, 12);
									func_112();
								}
							}
						}
					}
				}
				else
				{
					func_393();
					if (bLocal_112)
					{
						bLocal_112 = false;
					}
					if (iLocal_117)
					{
						iLocal_117 = 0;
					}
				}
				break;
			
			case 1:
				if (func_14(unk_0x1329891157A54C63(), 1, 1))
				{
					if (!func_138(unk_0xE495E987CB2BE7EF(unk_0x1329891157A54C63()), 1215605247, &uLocal_344, 0, 500, 1, 0))
					{
						Local_459[unk_0x519AAFF77CC141DF() /*4*/].f_1 = 2;
					}
				}
				else
				{
					unk_0xC69E84EBBD7166E6(&iLocal_588, 4);
					unk_0xC69E84EBBD7166E6(&iLocal_588, 6);
					Local_459[unk_0x519AAFF77CC141DF() /*4*/].f_1 = 0;
				}
				break;
			
			case 2:
				Local_459[unk_0x519AAFF77CC141DF() /*4*/].f_1 = 3;
				break;
			
			case 3:
				if (unk_0xECDEA377354CBDA4())
				{
					func_392(17, 1, -1);
					if (unk_0x236D8AD7EE179F46(iLocal_588, 4))
					{
						unk_0xF3148AAF69AF9CBC(&(Local_459[unk_0x519AAFF77CC141DF() /*4*/].f_2), 1);
						func_391();
					}
					else
					{
						func_389();
					}
					if (bLocal_101)
					{
						if (unk_0x236D8AD7EE179F46(iLocal_588, 6))
						{
							Local_86.f_2 = 37;
						}
						else
						{
							Local_86.f_2 = 38;
						}
						Local_86.f_3 = Local_459[unk_0x519AAFF77CC141DF() /*4*/];
						Local_86.f_10 = iLocal_349[0];
						Local_86.f_11 = iLocal_349[1];
						Local_86.f_12 = iLocal_349[2];
						Local_86.f_13 = iLocal_349[3];
						if (!unk_0x236D8AD7EE179F46(iLocal_588, 6))
						{
						}
					}
					unk_0xC69E84EBBD7166E6(&iLocal_588, 6);
					func_388(4, iLocal_324);
					if (func_387())
					{
						func_380(941287179, iLocal_324, &iVar12, 0, 0);
						Global_2545514[iVar12 /*69*/].f_8.f_51 = iLocal_357;
					}
					else
					{
						unk_0x127B64F7D1118570(iLocal_324, iLocal_357);
					}
					if (iLocal_321 > 0)
					{
						func_379("IMPEX_PASS", iLocal_324, 7000, 0);
					}
					else
					{
						func_379("IMPEX_PASS", iLocal_324, 7000, 0);
					}
					func_351(2, "XPT_IMPEXP", -1636175450, -1930707410, iLocal_325, 1, -1, 0);
					func_340(29);
					func_401(unk_0x1329891157A54C63(), 1, 0);
					Local_459[unk_0x519AAFF77CC141DF() /*4*/].f_1 = 0;
					Local_459[unk_0x519AAFF77CC141DF() /*4*/] = -1;
					unk_0xC69E84EBBD7166E6(&iLocal_588, 4);
					iLocal_123 = 1;
					func_337(12, 0);
				}
				break;
		}
	}
	else
	{
		if (!func_317(unk_0x1329891157A54C63(), 1))
		{
			if (!bLocal_118)
			{
				if (iLocal_116)
				{
					func_145(0);
					iLocal_116 = 0;
				}
			}
			else if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) && func_406(1215605247, 18))
			{
				iVar2 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
				if (func_192(iVar2, 0))
				{
					if (!iLocal_116)
					{
						func_145(1);
						iLocal_116 = 1;
					}
					bLocal_102 = true;
				}
			}
			else if (iLocal_116)
			{
				func_145(0);
				iLocal_116 = 0;
				bLocal_102 = false;
			}
		}
		if (bLocal_105)
		{
			bLocal_105 = false;
		}
		if (bLocal_106)
		{
			bLocal_106 = false;
		}
		if (bLocal_108)
		{
			bLocal_108 = false;
		}
		if (bLocal_109)
		{
			bLocal_109 = false;
		}
	}
}

void func_337(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_339(iParam0, iParam1))
	{
		iVar0 = func_338();
		Global_2436893[iVar0] = iParam0;
	}
}

int func_338()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2436893[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_339(int iParam0, var uParam1)
{
	if (Global_1315880)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315892) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_340(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!Global_262145.f_6864)
	{
		iVar1 = iParam0;
		iVar2 = -1;
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (Global_2097152[func_418() /*9662*/].f_7252.f_1897[iVar0 /*3*/] == iVar1)
			{
				iVar2 = iVar0;
			}
			if (Global_2097152[func_418() /*9662*/].f_7252.f_1897[iVar0 /*3*/].f_1)
			{
				iVar3++;
			}
			iVar0++;
		}
		if (iVar2 > -1 && iVar2 < 3)
		{
			if (!Global_2097152[func_418() /*9662*/].f_7252.f_1897[iVar2 /*3*/].f_1)
			{
				func_347(iVar2, 1);
				unk_0xF3148AAF69AF9CBC(&Global_2450539, (8 + iVar2));
				func_344(2098, -1);
				func_341(67, -1);
				func_344(2553, -1);
				func_341(69, -1);
				unk_0x217967C69D5A8954(1000, iVar1);
				if (iVar3 < 2)
				{
					if (!unk_0x236D8AD7EE179F46(Global_2450539, 12))
					{
						func_337(7, 0);
					}
					else
					{
						func_337(15, 0);
					}
				}
			}
		}
	}
}

void func_341(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_343(iParam0, func_76(iParam1));
	iVar0++;
	func_342(iParam0, iVar0, iParam1);
}

void func_342(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = Global_2479763[iParam0 /*5*/][func_76(iParam2)];
	unk_0x123B783056E76C4E(iVar0, iParam1, 1);
}

int func_343(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2479763[iParam0 /*5*/][func_76(iParam1)];
	if (unk_0x85C45034BA638694(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_344(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_75(iParam0, func_76(iParam1), 0);
	iVar0++;
	if (!func_346(iParam0))
	{
		func_130(iParam0, iVar0, iParam1, 1);
	}
	else
	{
		func_345(iParam0, iVar0, iParam1, 1);
	}
}

void func_345(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2459767[iParam0 /*5*/][func_76(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x123B783056E76C4E(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 777:
			Global_1343618[func_76(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1343624[func_76(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1343630[func_76(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1343636[func_76(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1343594[func_76(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1343600[func_76(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1343606[func_76(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1343612[func_76(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1343570[func_76(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1343576[func_76(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1343582[func_76(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1343588[func_76(iParam2)] = iParam1;
			break;
		
		case 747:
			Global_1343642[func_76(iParam2)] = iParam1;
			break;
		
		case 748:
			Global_1343648[func_76(iParam2)] = iParam1;
			break;
		
		case 749:
			Global_1343654[func_76(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1343660[func_76(iParam2)] = iParam1;
			break;
		
		case 1292:
			Global_1343666[func_76(iParam2)] = iParam1;
			break;
		
		case 629:
			Global_1343672[func_76(iParam2)] = iParam1;
			break;
		
		case 1267:
			Global_1343678[func_76(iParam2)] = iParam1;
			break;
		
		case 1864:
			Global_2480427[0 /*6*/][func_76(iParam2)] = iParam1;
			break;
		
		case 2255:
			Global_2480427[1 /*6*/][func_76(iParam2)] = iParam1;
			break;
		
		case 2899:
			Global_2480427[2 /*6*/][func_76(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1343684[func_76(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1343690[func_76(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1343696[func_76(iParam2)] = iParam1;
			break;
		
		case 1225:
			Global_1343702[func_76(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_346(int iParam0)
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

void func_347(int iParam0, int iParam1)
{
	if (Global_2097152[func_418() /*9662*/].f_7252.f_1897[iParam0 /*3*/].f_1 != iParam1)
	{
		Global_2097152[func_418() /*9662*/].f_7252.f_1897[iParam0 /*3*/].f_1 = iParam1;
		func_348(func_350(iParam0), iParam1, -1, 1);
	}
}

void func_348(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_349())
	{
		iVar0 = Global_2478104[iParam0 /*5*/][func_76(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x20026873DF8DB72A(iVar0, iParam1, iParam3);
		}
	}
}

int func_349()
{
	return 1;
	return 0;
}

int func_350(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 169;
		
		case 1:
			return 170;
		
		case 2:
			return 171;
		
		default:
	}
	return 169;
}

var func_351(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_352(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_352(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_353(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_353(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_378(unk_0x1329891157A54C63()) || func_377(unk_0x1329891157A54C63()))
	{
		if (Global_262145.f_7419 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_7419;
		}
	}
	else if (Global_262145.f_5001 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_5001;
	}
	if (func_376(uParam2))
	{
	}
	if (func_375())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_373(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_372(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_370(0, &iVar1);
					break;
				
				case 3:
					func_370(1, &iVar1);
					break;
				
				case 1:
					func_367(&iVar1);
					break;
				}
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_397(1154, iVar1, -1);
			if (iParam1 == 0)
			{
				func_363((func_366(unk_0x1329891157A54C63()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xF1B1DC822A238E16(iVar1, iParam8, iParam9);
				if (Global_1585045[unk_0x1329891157A54C63() /*400*/].f_39.f_2 != -1)
				{
					func_397(1155, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_358(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_354((func_356(unk_0x1329891157A54C63()) + iVar1));
			}
			else
			{
				func_354((func_356(unk_0x1329891157A54C63()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_354(int iParam0)
{
	if (func_375())
	{
		Global_1585045[unk_0x1329891157A54C63() /*400*/].f_192.f_5 = iParam0;
		func_355(joaat("mpply_globalxp"), iParam0);
	}
}

void func_355(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x123B783056E76C4E(iVar0, uParam1, 1);
	}
}

int func_356(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_14(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x1329891157A54C63())
			{
				return func_357(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1585045[iParam0 /*400*/].f_192.f_5;
			}
		}
		else
		{
			return func_357(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_357(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x85C45034BA638694(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_358(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_164(unk_0x1329891157A54C63()) };
	if (unk_0x80622F5ED5957337())
	{
		if (unk_0x464883E45616A088(&Var0))
		{
			iVar13 = func_361(func_362(&Var0));
			if (iVar13 == 0)
			{
				func_360(&Global_1343557, iParam0);
				func_359(joaat("mpply_crew_local_xp_0"), Global_1343557);
			}
			else if (iVar13 == 1)
			{
				func_360(&Global_1343558, iParam0);
				func_359(joaat("mpply_crew_local_xp_1"), Global_1343558);
			}
			else if (iVar13 == 2)
			{
				func_360(&Global_1343559, iParam0);
				func_359(joaat("mpply_crew_local_xp_2"), Global_1343559);
			}
			else if (iVar13 == 3)
			{
				func_360(&Global_1343560, iParam0);
				func_359(joaat("mpply_crew_local_xp_3"), Global_1343560);
			}
			else if (iVar13 == 4)
			{
				func_360(&Global_1343561, iParam0);
				func_359(joaat("mpply_crew_local_xp_4"), Global_1343561);
			}
		}
	}
}

void func_359(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x123B783056E76C4E(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1343552 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1343554 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1343554 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1343555 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1343556 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1343557 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1343558 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1343559 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1343560 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1343561 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1343562 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1343563 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1343564 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1343565 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1343566 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1343567 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1343568 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_360(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_361(int iParam0)
{
	if (iParam0 == Global_1343552)
	{
		return 0;
	}
	else if (iParam0 == Global_1343553)
	{
		return 1;
	}
	else if (iParam0 == Global_1343554)
	{
		return 2;
	}
	else if (iParam0 == Global_1343555)
	{
		return 3;
	}
	else if (iParam0 == Global_1343556)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_362(var uParam0)
{
	if (unk_0x80622F5ED5957337())
	{
		if (unk_0x464883E45616A088(uParam0))
		{
			return Global_2436916;
		}
	}
	return Global_2436916;
}

void func_363(int iParam0, int iParam1, int iParam2)
{
	if (func_375())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7394 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1343672[func_76(-1)])
				{
					unk_0xF1B1DC822A238E16(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1343672[func_76(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_7393 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0xF1B1DC822A238E16(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_7393 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0xF1B1DC822A238E16(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_186(unk_0x1329891157A54C63()))
		{
			Global_1585045[unk_0x1329891157A54C63() /*400*/].f_192.f_1 = iParam0;
			Global_1585045[unk_0x1329891157A54C63() /*400*/].f_192.f_6 = func_364(iParam0, 1);
		}
		func_345(629, iParam0, -1, 1);
		func_130(630, func_364(iParam0, 1), -1, 1);
		Global_1343672[func_76(-1)] = iParam0;
		func_337(7, 0);
	}
}

int func_364(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_365(iParam0, 0);
}

int func_365(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_272182[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_272182[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((unk_0xBBDA792448DB5A89(iVar1) - unk_0xBBDA792448DB5A89(iVar2)) / 2f) + unk_0xBBDA792448DB5A89(iVar2));
		iVar3 = unk_0xF2DB717A73826179(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_366(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x1329891157A54C63())
			{
				return Global_1343672[func_76(-1)];
			}
			else if (func_186(iParam0))
			{
				return Global_1585045[iParam0 /*400*/].f_192.f_1;
			}
		}
	}
	else
	{
		return Global_1343672[func_76(-1)];
	}
	return 0;
}

void func_367(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63());
	iVar0 = 0;
	while (iVar0 < unk_0x945535897333587B())
	{
		iVar4 = unk_0xC3904F8771F37B7F(iVar0);
		if (unk_0xC4FEBC724D547D78(iVar4))
		{
			iVar5 = unk_0x29A638E7EEEE6B16(iVar4);
			if (unk_0xCCFDB2B968281FE8(iVar5) != -1)
			{
				if (unk_0xCCFDB2B968281FE8(iVar5) == iVar1 || func_174(unk_0xCCFDB2B968281FE8(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x1329891157A54C63())
					{
						if (func_369(unk_0x1329891157A54C63(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = unk_0xF2DB717A73826179((func_368(*iParam0, 100) * (10f * Global_262145.f_4208)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_368(*iParam0, 100) * (20f * Global_262145.f_4201)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_368(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_369(int iParam0, int iParam1)
{
	if (unk_0x80622F5ED5957337())
	{
		Global_2450501 = { func_164(iParam0) };
		Global_2450514 = { func_164(iParam1) };
		if (unk_0x464883E45616A088(&Global_2450501))
		{
			if (unk_0x464883E45616A088(&Global_2450514))
			{
				unk_0xEF956A1EC046AA4A(&Global_2450431, 35, &Global_2450501);
				unk_0xEF956A1EC046AA4A(&Global_2450466, 35, &Global_2450514);
				if (Global_2450431 == Global_2450466)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_370(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0x945535897333587B())
		{
			iVar3 = iVar0;
			if (unk_0xC4FEBC724D547D78(iVar3))
			{
				iVar4 = unk_0x29A638E7EEEE6B16(iVar3);
				if (func_14(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x1329891157A54C63())
					{
						iVar1++;
						if (func_369(unk_0x1329891157A54C63(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_14(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x1329891157A54C63())
				{
					if (func_371(unk_0x1329891157A54C63(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_369(unk_0x1329891157A54C63(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = unk_0xF2DB717A73826179((func_368(*iParam1, 100) * (10f * Global_262145.f_4208)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_368(*iParam1, 100) * (20f * Global_262145.f_4201)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_371(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_25(iParam0), func_25(iParam1));
	return 0f;
}

int func_372(int iParam0)
{
	int iVar0;
	
	if (unk_0xF349F5727BA73619() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_368(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_373(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x013F97B9D88B92CA(iParam0) > func_366(unk_0x1329891157A54C63()))
		{
			iParam0 = -func_366(unk_0x1329891157A54C63());
		}
	}
	if (func_374(8000, 0, 0) > 0)
	{
		if (func_374(8000, 0, 0) < (iParam0 + func_366(unk_0x1329891157A54C63())))
		{
			iParam0 = (func_374(8000, 0, 0) - func_366(unk_0x1329891157A54C63()));
		}
	}
	return iParam0;
}

int func_374(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_272182[iParam0];
}

int func_375()
{
	return 1;
}

int func_376(char* sParam0)
{
	if (unk_0x4357449749A521B1(uParam0))
	{
		return 1;
	}
	else if (unk_0xD994929E13CC1ED5(uParam0, "") || unk_0xD994929E13CC1ED5(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_377(int iParam0)
{
	return Global_2414506[iParam0 /*255*/].f_114 == 2;
}

bool func_378(int iParam0)
{
	return Global_2414506[iParam0 /*255*/].f_114 == 7;
}

void func_379(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0x645DF34C4E038370(sParam0);
	unk_0x6D55FF05D62B91BC(iParam1);
	unk_0x16885CADDEC73B2E(iParam2, 1);
}

void func_380(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_387())
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
				func_381(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_381(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_381(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_387())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x077FF247AF837AEC(func_24()) || unk_0x2FABBA9E4D234344())
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
			*uParam0 = func_386(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
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
			func_385(1, iParam4);
			Global_2545974 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_382(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_382(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xF3148AAF69AF9CBC(&(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_121.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_383(iParam0);
	}
}

void func_383(int iParam0)
{
	bool bVar0;
	struct<69> Var1;
	
	bVar0 = false;
	if (!func_387())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_384(iParam0))
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

int func_384(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2545514[iParam0 /*69*/].f_5 == 1;
	}
	return 0;
}

void func_385(int iParam0, var uParam1)
{
	Global_2438972 = uParam1;
	Global_2438971 = iParam0;
}

int func_386(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2545514[iVar0 /*69*/].f_2 == 0)
		{
			if (!func_387())
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

int func_387()
{
	if (unk_0x913B1C01C1BA6C6F())
	{
		return 1;
	}
	return 0;
}

void func_388(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2451473.f_269 = iParam0;
		if (iParam1 > Global_262145.f_4951)
		{
			iParam1 = Global_262145.f_4951;
		}
		Global_2451473.f_270 = iParam1;
		Global_2451473.f_271 = 0;
	}
}

void func_389()
{
	int iVar0;
	
	iVar0 = func_390(42);
	Global_2409095[iVar0 /*83*/] = 42;
	StringCopy(&(Global_2409095[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_390(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2409095[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2409095[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_391()
{
	int iVar0;
	
	iVar0 = func_390(43);
	Global_2409095[iVar0 /*83*/] = 43;
	StringCopy(&(Global_2409095[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

void func_392(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_343(iParam0, func_76(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_342(iParam0, iVar0, iParam2);
}

void func_393()
{
	if (bLocal_111)
	{
		bLocal_111 = false;
	}
	if (bLocal_106)
	{
		bLocal_106 = false;
	}
	if (bLocal_107)
	{
		bLocal_107 = false;
	}
	if (bLocal_108)
	{
		bLocal_108 = false;
	}
	if (bLocal_110)
	{
		bLocal_110 = false;
	}
	if (bLocal_109)
	{
		bLocal_109 = false;
	}
}

void func_394()
{
	Global_2097152[func_418() /*9662*/].f_7252.f_34 = unk_0xC7224E4F41E00BE3();
}

void func_395(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	switch (iParam0)
	{
		case 59:
			Global_2097152[func_418() /*9662*/].f_7252.f_18 = iVar0;
			break;
		
		case 19:
			Global_2097152[func_418() /*9662*/].f_7252.f_17 = iVar0;
			break;
		
		case 74:
			Global_2097152[func_418() /*9662*/].f_7252.f_11 = iVar0;
			break;
		
		case 20:
			Global_2097152[func_418() /*9662*/].f_7252.f_12 = iVar0;
			break;
		
		case 29:
			Global_2097152[func_418() /*9662*/].f_7252.f_13 = iVar0;
			break;
		
		case 8:
			Global_2097152[func_418() /*9662*/].f_7252.f_14 = iVar0;
			break;
		
		case 31:
			Global_2097152[func_418() /*9662*/].f_7252.f_15 = iVar0;
			break;
		
		case 3:
			Global_2097152[func_418() /*9662*/].f_7252.f_19 = iVar0;
			break;
		
		case 6:
			Global_2097152[func_418() /*9662*/].f_7252.f_16 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2097152[func_418() /*9662*/].f_7252.f_22 = iVar0;
			break;
		
		case 76:
			Global_2097152[func_418() /*9662*/].f_7252.f_23 = iVar0;
			break;
		
		case 93:
			Global_2097152[func_418() /*9662*/].f_7252.f_24 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2097152[func_418() /*9662*/].f_7252.f_25 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2097152[func_418() /*9662*/].f_7252.f_26 = iVar0;
			break;
			break;
		
		case 97:
			Global_2097152[func_418() /*9662*/].f_7252.f_28 = iVar0;
			break;
		
		case 88:
			Global_2097152[func_418() /*9662*/].f_7252.f_27 = iVar0;
			break;
		
		case 100:
			Global_2097152[func_418() /*9662*/].f_7252.f_30 = iVar0;
			break;
		
		case 106:
			Global_2097152[func_418() /*9662*/].f_7252.f_31 = iVar0;
			break;
		
		case 99:
			Global_2097152[func_418() /*9662*/].f_7252.f_29 = iVar0;
			break;
	}
}

void func_396()
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_75(1189, -1, 0);
	if (!unk_0x236D8AD7EE179F46(iVar0, 3))
	{
		unk_0xF3148AAF69AF9CBC(&iVar0, 3);
		unk_0xF3148AAF69AF9CBC(&iLocal_589, 1);
		bVar1 = true;
	}
	else if (!unk_0x236D8AD7EE179F46(iVar0, 4))
	{
		unk_0xF3148AAF69AF9CBC(&iVar0, 4);
		unk_0xF3148AAF69AF9CBC(&iLocal_589, 2);
		bVar1 = true;
	}
	else if (!unk_0x236D8AD7EE179F46(iVar0, 5))
	{
		unk_0xF3148AAF69AF9CBC(&iVar0, 5);
		unk_0xF3148AAF69AF9CBC(&iLocal_589, 3);
		bVar1 = true;
	}
	if (bVar1)
	{
		func_130(1189, iVar0, -1, 1);
	}
}

void func_397(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_75(iParam0, func_76(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_346(iParam0))
	{
		func_130(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_345(iParam0, iVar0, iParam2, 1);
	}
}

void func_398()
{
	if (!Global_2451473.f_4370)
	{
		Global_2451473.f_4370 = 1;
	}
	func_197(&(Global_2451473.f_4371), 0, 0);
}

int func_399(int iParam0)
{
	switch (iParam0)
	{
		case joaat("sentinel"):
			return 9000;
		
		case joaat("serrano"):
			return 9000;
		
		case joaat("dominator"):
			return 5250;
		
		case joaat("schafter2"):
			return 9750;
		
		case joaat("surge"):
			return 5700;
		
		case joaat("jackal"):
			return 9000;
		
		case joaat("ztype"):
			return 0;
		
		case joaat("tailgater"):
			return 8250;
		
		case joaat("landstalker"):
			return 8700;
		
		case joaat("penumbra"):
			return 3600;
		
		case joaat("f620"):
			return 12000;
		
		case joaat("fq2"):
			return 7500;
		
		case joaat("patriot"):
			return 7500;
		
		case joaat("habanero"):
			return 6300;
		
		case joaat("prairie"):
			return 3750;
		
		case joaat("fusilade"):
			return 5400;
		
		case joaat("bjxl"):
			return 4050;
		
		case joaat("gresley"):
			return 4350;
		
		case joaat("buccaneer"):
			return 4200;
		
		case joaat("daemon"):
			return 3000;
		
		case joaat("bagger"):
			return 2400;
		
		default:
	}
	return -1;
}

int func_400()
{
	int iVar0;
	
	if (func_14(unk_0x1329891157A54C63(), 1, 1))
	{
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
		{
			iVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
			if (unk_0x7404950238A154C2(iVar0, 0))
			{
				if (!unk_0xBEB00EB4ADDC2A33(iVar0, -1))
				{
					if (unk_0xB0B9E53CEFDB16AA(iVar0, -1) == unk_0x81873881071CD9FE())
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_401(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	var uVar25;
	int iVar26;
	
	if (bParam1)
	{
		if (unk_0xC04B59103F71021C())
		{
			unk_0xCFB703A5F752D1C3(0);
		}
	}
	if (!unk_0x1C6DF6AD69BE853E())
	{
		uVar0 = iParam2;
		unk_0x034205BA180B4E43(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = iParam2 & 2 != false;
		bVar2 = iParam2 & 4 != false;
		bVar3 = iParam2 & 8 != false;
		bVar4 = iParam2 & 16 != false;
		bVar5 = iParam2 & 32 != false;
		bVar6 = iParam2 & 64 != false;
		bVar7 = iParam2 & 128 != false;
		bVar8 = iParam2 & 256 != false;
		bVar9 = iParam2 & 512 != false;
		bVar10 = iParam2 & 1024 != false;
		bVar11 = iParam2 & 2048 != false;
		bVar12 = iParam2 & 4096 != false;
		bVar13 = iParam2 & 8192 != false;
		bVar14 = iParam2 & 16384 != false;
		bVar15 = iParam2 & 32768 != false;
		bVar16 = iParam2 & 65536 != false;
		bVar17 = iParam2 & 131072 != false;
		bVar18 = iParam2 & 262144 != false;
		bVar19 = iParam2 & 524288 != false;
		bVar20 = iParam2 & 1048576 != false;
		bVar21 = iParam2 & 2097152 != false;
		bVar22 = iParam2 & 4194304 != false;
		bVar23 = iParam2 & 8388608 != false;
		if (!func_120())
		{
			bVar24 = false;
			if (bParam1 == 1)
			{
				bVar24 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar24 = true;
			}
			if (bVar9 == 1)
			{
				bVar24 = true;
			}
			if (bVar24)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (unk_0xA89AE5060232966A(iParam0) && unk_0x7DF7DE8C76D7F346(iParam0))
		{
			uVar25 = unk_0xE495E987CB2BE7EF(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x1C6DF6AD69BE853E())
				{
					unk_0xA62A443049FCB56D(1);
				}
				else
				{
					unk_0xABA9860C0161F3CD(uVar25, !bVar13);
				}
				if (!bVar13)
				{
					if (unk_0x1C6DF6AD69BE853E() && !bVar18)
					{
						unk_0xA62A443049FCB56D(0);
					}
					Global_2414506[iParam0 /*255*/].f_238 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_404(uVar25) && !unk_0x9274B3297D0AC71D(uVar25))
				{
					if (!bVar21)
					{
						unk_0x5CEA5F12775261F2(iVar25, true, 0);
					}
				}
				if (!unk_0xCB8B9E751036ECB2(iVar25))
				{
					if (!bVar20)
					{
						unk_0xA8F22633ACC22189(iVar25, false);
					}
					unk_0xEA89E72C99125D9C(iVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0xA8F22633ACC22189(iVar25, false);
				}
				unk_0x33B1E568CEF14B0D(iVar25, true);
				unk_0xE5BBA710593FB752(iParam0, 0);
				unk_0xDC96513B84DA05AA(iVar25);
				unk_0x1BFA331FECEC4F68(iVar25, 1);
				func_403();
				func_402();
				if (unk_0x91A2643FAECEA14A())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0x2CB3B76C90F08111())
				{
				}
				Global_2414506[iParam0 /*255*/].f_239 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_404(iVar25) && !unk_0x9274B3297D0AC71D(iVar25))
				{
					if (!bVar21)
					{
						unk_0x5CEA5F12775261F2(iVar25, !bVar14, 0);
					}
					if (!unk_0xCB8B9E751036ECB2(iVar25))
					{
						if (!bVar20)
						{
							unk_0xA8F22633ACC22189(iVar25, bVar15);
						}
						if (!bVar15)
						{
							unk_0xEA89E72C99125D9C(iVar25, 1);
						}
					}
				}
				if (bVar9)
				{
					unk_0xE5BBA710593FB752(iParam0, 0);
				}
				else
				{
					unk_0xE5BBA710593FB752(iParam0, 1);
				}
				unk_0x33B1E568CEF14B0D(iVar25, bVar16);
				if (bVar2)
				{
					if (!unk_0x0B392DF1B3286590(iVar25) && !unk_0xE5AB05962FA1FF3F(iVar25, 0))
					{
						unk_0x1E2B48EE3EC55DCF(iVar25);
					}
				}
			}
			iVar26 = 0;
			if (bVar1)
			{
				iVar26 |= 2;
			}
			if (bVar2)
			{
				iVar26 |= 4;
			}
			if (bVar3)
			{
				iVar26 |= 8;
			}
			if (bVar4)
			{
				iVar26 |= 16;
			}
			if (bVar5)
			{
				iVar26 |= 32;
			}
			if (bVar6)
			{
				iVar26 |= 64;
			}
			if (bVar7)
			{
				iVar26 |= 128;
			}
			if (bVar8)
			{
				iVar26 |= 256;
			}
			if (bVar9)
			{
				iVar26 |= 512;
			}
			if (bVar10)
			{
				iVar26 |= 1024;
			}
			if (bVar11)
			{
				iVar26 |= 2048;
			}
			if (bVar12)
			{
				iVar26 |= 4096;
			}
			unk_0x034205BA180B4E43(iParam0, bParam1, iVar26);
		}
	}
}

void func_402()
{
	struct<2> Var0;
	
	Global_2422670.f_690 = 0;
	Global_2422670.f_691 = 0;
	Global_2422670.f_692 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2404607.f_1447 = { Var0 };
}

void func_403()
{
	Global_2404607.f_608 = 0;
	Global_2404607.f_1488 = 0;
	Global_2404607.f_481 = 0;
	Global_2414506[unk_0x1329891157A54C63() /*255*/].f_204 = 0;
}

int func_404(int iParam0)
{
	int iVar0;
	
	if (unk_0xE5AB05962FA1FF3F(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0xFA1212DE7C455679(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_405()
{
	func_112();
}

int func_406(int iParam0, int iParam1)
{
	if (unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), func_141(iParam0), 1) <= IntToFloat(iParam1))
	{
		return 1;
	}
	return 0;
}

int func_407(int iParam0)
{
	if (unk_0x7404950238A154C2(iParam0, 0))
	{
		if (unk_0xB0B9E53CEFDB16AA(iParam0, -1) == unk_0x81873881071CD9FE())
		{
			if (!func_326(iParam0))
			{
				if (iParam0 != iLocal_592)
				{
					if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) < 2)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_408()
{
	if (Global_2422670.f_500.f_6 || Global_2422670.f_500.f_7)
	{
		return 1;
	}
	return 0;
}

void func_409(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = uParam2;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(*uParam0)[iVar0] = -1;
		uParam0->f_6[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar0 < iParam1)
		{
			(*uParam0)[iVar0] = func_410(iVar1, iVar0);
			uParam0->f_6[iVar0] = 0;
		}
		else
		{
			(*uParam0)[iVar0] = -1;
			uParam0->f_6[iVar0] = 1;
		}
		iVar0++;
	}
}

int func_410(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_417(iParam1);
			break;
		
		case 1:
			iVar0 = func_416(iParam1);
			break;
		
		case 2:
			iVar0 = func_415(iParam1);
			break;
		
		case 3:
			iVar0 = func_414(iParam1);
			break;
		
		case 4:
			iVar0 = func_413(iParam1);
			break;
		
		case 5:
			iVar0 = func_412(iParam1);
			break;
		
		case 6:
			iVar0 = func_411(iParam1);
			break;
	}
	return iVar0;
}

int func_411(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1;
			break;
		
		case 1:
			iVar0 = 12;
			break;
		
		case 2:
			iVar0 = 13;
			break;
		
		case 3:
			iVar0 = 15;
			break;
		
		case 4:
			iVar0 = 17;
			break;
	}
	return iVar0;
}

int func_412(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 8;
			break;
		
		case 1:
			iVar0 = 9;
			break;
		
		case 2:
			iVar0 = 10;
			break;
		
		case 3:
			iVar0 = 11;
			break;
		
		case 4:
			iVar0 = 14;
			break;
	}
	return iVar0;
}

int func_413(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 16;
			break;
		
		case 1:
			iVar0 = 17;
			break;
		
		case 2:
			iVar0 = 18;
			break;
		
		case 3:
			iVar0 = 19;
			break;
		
		case 4:
			iVar0 = 20;
			break;
	}
	return iVar0;
}

int func_414(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 11;
			break;
		
		case 1:
			iVar0 = 12;
			break;
		
		case 2:
			iVar0 = 13;
			break;
		
		case 3:
			iVar0 = 15;
			break;
		
		case 4:
			iVar0 = 17;
			break;
	}
	return iVar0;
}

int func_415(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 8;
			break;
		
		case 1:
			iVar0 = 9;
			break;
		
		case 2:
			iVar0 = 10;
			break;
		
		case 3:
			iVar0 = 11;
			break;
		
		case 4:
			iVar0 = 12;
			break;
	}
	return iVar0;
}

int func_416(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 4;
			break;
		
		case 1:
			iVar0 = 5;
			break;
		
		case 2:
			iVar0 = 7;
			break;
		
		case 3:
			iVar0 = 8;
			break;
		
		case 4:
			iVar0 = 9;
			break;
	}
	return iVar0;
}

int func_417(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 2;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 3:
			iVar0 = 4;
			break;
		
		case 4:
			iVar0 = 5;
			break;
	}
	return iVar0;
}

int func_418()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_419(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_420(uParam0, bParam2, 0);
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

void func_420(var uParam0, bool bParam1, bool bParam2)
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

bool func_421(var uParam0)
{
	return uParam0->f_1;
}

void func_422()
{
	Global_2097152[func_418() /*9662*/].f_7252.f_35 = unk_0xC7224E4F41E00BE3();
}

void func_423(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0xFEDEE473E20E36FC();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(*uParam0)[iVar0] = -1;
		uParam0->f_6[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar0 < iParam1)
		{
			(*uParam0)[iVar0] = func_410(iVar1, iVar0);
			uParam0->f_6[iVar0] = 0;
		}
		else
		{
			(*uParam0)[iVar0] = -1;
			uParam0->f_6[iVar0] = 1;
		}
		iVar0++;
	}
	Global_2097152[func_418() /*9662*/].f_7252.f_36 = iVar1;
}

void func_424()
{
	func_427("CELL_CLTEST1", 0);
	func_425("CELL_CLTEST1");
	func_427("CELL_CLTEST6", 0);
	func_425("CELL_CLTEST6");
}

void func_425(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x4357449749A521B1(&(Global_98931.f_12755[iVar0 /*104*/])))
		{
			if (unk_0xD994929E13CC1ED5(&(Global_98931.f_12755[iVar0 /*104*/]), sParam0))
			{
				if (Global_98931.f_12755[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_241();
					Global_98931.f_12755[iVar0 /*104*/].f_99[Global_14394] = 0;
					if (func_426(iVar0))
					{
					}
					else
					{
						Global_98931.f_12755[iVar0 /*104*/].f_24 = 0;
						Global_98931.f_12755[iVar0 /*104*/].f_28 = 0;
						Global_98931.f_12755[iVar0 /*104*/].f_29 = 0;
					}
					unk_0x4474CF0FD32A90B2(Global_98931.f_12755[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_426(int iParam0)
{
	if ((Global_98931.f_12755[iParam0 /*104*/].f_99[0] == 1 || Global_98931.f_12755[iParam0 /*104*/].f_99[1] == 1) || Global_98931.f_12755[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_427(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x4357449749A521B1(&(Global_98931.f_12755[iVar0 /*104*/])))
		{
			if (unk_0xD994929E13CC1ED5(&(Global_98931.f_12755[iVar0 /*104*/]), sParam0))
			{
				if (Global_98931.f_12755[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_98931.f_12755[iVar0 /*104*/].f_24 = 1;
				if (Global_98931.f_12755[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_98931.f_12755[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_98931.f_12665[0 /*20*/].f_17 = 0;
					}
					if (Global_98931.f_12755[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_98931.f_12665[1 /*20*/].f_17 = 0;
					}
					if (Global_98931.f_12755[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_98931.f_12665[2 /*20*/].f_17 = 0;
					}
					if (Global_98931.f_12755[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_98931.f_12665[3 /*20*/].f_17 = 0;
					}
					Global_98931.f_12755[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_98931.f_12755[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_428()
{
	if (unk_0xA83A609D74168B30())
	{
		return 0;
	}
	if (func_102())
	{
		return 0;
	}
	if (!unk_0xECDEA377354CBDA4())
	{
		return 0;
	}
	if (func_110())
	{
		return 0;
	}
	if (func_107())
	{
		return 0;
	}
	if (func_123(unk_0x1329891157A54C63(), 1))
	{
		return 0;
	}
	if (func_105())
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
	if (!unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63()))
	{
		return 0;
	}
	if (Global_1573669)
	{
		return 0;
	}
	if (func_203())
	{
		return 0;
	}
	if (func_202())
	{
		return 0;
	}
	if (func_437())
	{
		return 0;
	}
	if (unk_0x726DA50057167075())
	{
		return 0;
	}
	if (Global_67710)
	{
		return 0;
	}
	if (!func_120())
	{
		return 0;
	}
	if (func_103())
	{
		return 0;
	}
	if (unk_0x9B20331E99DD1C1C())
	{
		return 0;
	}
	return 1;
}

bool func_429()
{
	if (Global_2097152[func_418() /*9662*/].f_7252.f_34 == 0)
	{
		return 0;
	}
	return (unk_0xC7224E4F41E00BE3() - Global_2097152[func_418() /*9662*/].f_7252.f_34) < 86400;
}

bool func_430()
{
	if (Global_2097152[func_418() /*9662*/].f_7252.f_35 == 0)
	{
		return 0;
	}
	return (unk_0xC7224E4F41E00BE3() - Global_2097152[func_418() /*9662*/].f_7252.f_35) < 86400;
}

bool func_431()
{
	if (!unk_0x236D8AD7EE179F46(iLocal_588, 2))
	{
		if (!func_22(unk_0x1329891157A54C63(), 0))
		{
			if (((((!unk_0x9B20331E99DD1C1C() && !func_123(unk_0x1329891157A54C63(), 1)) && !func_107()) && (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()) && unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63()))) && unk_0xECDEA377354CBDA4()) && func_432(19))
			{
				unk_0xF3148AAF69AF9CBC(&iLocal_588, 2);
			}
		}
	}
	return unk_0x236D8AD7EE179F46(iLocal_588, 2);
}

int func_432(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_434(iParam0);
	if (iVar0 == 1)
	{
		return 1;
	}
	iVar1 = func_433(unk_0x1329891157A54C63(), 1);
	iVar2 = func_364(iVar1, 1);
	if (iVar2 >= iVar0 && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

int func_433(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_366(iParam0);
}

int func_434(int iParam0)
{
	if (func_98())
	{
		return 1;
	}
	if (func_97())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 16:
		case 1:
		case 2:
		case 28:
			return 1;
		
		case 21:
			return 2;
		
		case 22:
		case 18:
		case 17:
		case 73:
		case 30:
		case 59:
		case 60:
		case 76:
		case 13:
		case 90:
		case 0:
		case 99:
		case 5:
		case 32:
		case 125:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 137:
		case 148:
		case 135:
			if (!func_435(-1))
			{
				return 3;
			}
			else
			{
				return 1;
			}
			break;
		
		case 23:
		case 102:
		case 110:
		case 156:
			return 5;
		
		case 12:
		case 11:
		case 14:
		case 15:
		case 27:
		case 122:
			return 6;
		
		case 97:
		case 107:
			return 7;
		
		case 4:
			return 8;
		
		case 19:
			return 8;
		
		case 29:
			return 10;
		
		case 8:
			return 11;
		
		case 61:
		case 119:
		case 121:
		case 96:
		case 128:
			return 12;
		
		case 89:
			return 13;
		
		case 31:
			return 14;
		
		case 3:
		case 78:
		case 103:
		case 124:
		case 126:
		case 127:
			return 15;
		
		case 109:
		case 88:
			return 16;
		
		case 74:
		case 100:
			return 17;
		
		case 6:
			return 18;
		
		case 20:
			return 19;
		
		case 62:
		case 108:
			return 20;
		
		case 65:
		case 93:
			return 21;
		
		case 63:
		case 104:
			return 25;
		
		case 77:
		case 106:
			return 30;
		
		case 81:
		case 98:
			return 35;
		
		case 75:
		case 95:
			return 40;
		
		case 105:
			return 45;
			break;
		
		case 67:
		case 64:
			return 50;
	}
	return -1;
}

bool func_435(int iParam0)
{
	return func_436(123, iParam0);
}

int func_436(int iParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2478104[iParam0 /*5*/][func_76(uParam1)];
	if (unk_0xFD72912C9064BF1F(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_437()
{
	return Global_1585045[unk_0x1329891157A54C63() /*400*/].f_177 != 0;
}

int func_438()
{
	bool bVar0;
	
	func_444(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315867 == 0)
	{
		if (!unk_0x1C6DF6AD69BE853E())
		{
			return 1;
		}
	}
	if (func_443())
	{
		return 1;
	}
	if (Global_2438897)
	{
		return 1;
	}
	if (func_442())
	{
		return 1;
	}
	if (func_441(157))
	{
		if (!func_440())
		{
			return 1;
		}
	}
	if (func_441(155))
	{
		return 1;
	}
	if (!unk_0x1F2C82EFDAD19C5D())
	{
		return 1;
	}
	if (func_439() != 0)
	{
		if (unk_0x968BF1C2C695B61A(func_439()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_439()
{
	switch (func_78())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

bool func_440()
{
	return Global_2428865.f_573;
}

int func_441(int iParam0)
{
	if (unk_0xE0A17F32C7C30546(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_442()
{
	return Global_2436988;
}

bool func_443()
{
	return Global_2428865.f_568;
}

void func_444(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x8D411F45C0269899(1))
	{
		iVar1 = unk_0xE22864B8883341B7(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0xDC8C46445C29336D(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 310:
					func_445(iVar0);
					break;
				
				case 2:
					unk_0xDC8C46445C29336D(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 54)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_445(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0xDC8C46445C29336D(1, iParam0, &Var0, 3))
	{
		if (func_14(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xE495E987CB2BE7EF(Var0.f_1);
			if (unk_0x86CCCD2FAE9D5E65(uVar3))
			{
				if (unk_0xE5AB05962FA1FF3F(iVar3, 0))
				{
					uVar4 = unk_0xE68E6B44DABA9C05(iVar3, 0);
					if (unk_0x61B3150BF9145A92(uVar4, Var0.f_2) && unk_0xA360A5024482E898())
					{
						if (func_446(iVar4, &bVar5))
						{
							unk_0xAA33E712AB3178EC(iVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xE0913C01F5C0CC3D(&iVar4);
						}
					}
				}
			}
		}
	}
}

int func_446(int iParam0, var uParam1)
{
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		if (!unk_0xE86442941AE40E75(iParam0))
		{
			if (unk_0x28BE3924E7CDB27F(iParam0))
			{
				unk_0xD768713E73165208(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x46AE53A47E5D03D5(iParam0, 0))
		{
			if (unk_0x4D2386673BCED434(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_447()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_448()
{
	if (iLocal_126 != -1)
	{
		func_127(iLocal_126, 0);
	}
	func_450(&iLocal_343);
	if (unk_0x236D8AD7EE179F46(iLocal_588, 1))
	{
		func_449(0f, 0f, 0f, func_306(19), 1);
	}
	if (unk_0x1C6DF6AD69BE853E())
	{
		if (unk_0x1C7D9BFDF15A02B4())
		{
			if (unk_0x7AC25D23A923E1E0(Local_383.f_24))
			{
				unk_0x044B04EA3E7E9044(Local_383.f_24);
			}
			Local_383.f_24 = -1;
		}
	}
	func_315();
	Global_2451473.f_1547 = 0;
	Global_2451473.f_1548 = 0;
	Global_2451473.f_1550 = 0;
	Global_2451473.f_1576 = 0;
	if (unk_0x236D8AD7EE179F46(iLocal_588, 7))
	{
		func_205(6, 0);
	}
	func_334();
	if (unk_0xFBACB273AA628CC5(Global_1698716))
	{
		unk_0x0A8175F24237A3D4(&Global_1698716);
	}
	func_199(0);
	if (unk_0xFBACB273AA628CC5(Global_1698726))
	{
		unk_0x0A8175F24237A3D4(&Global_1698726);
	}
	if (unk_0x1C6DF6AD69BE853E())
	{
		if (iLocal_103)
		{
			func_146(1215605247, 0, 0);
			func_145(0);
		}
		if (iLocal_116)
		{
			func_145(0);
		}
	}
	unk_0xC23A229F78DAD92A();
}

void func_449(struct<3> Param0, char* sParam3, int iParam4)
{
	int iVar0;
	
	if (!unk_0xB318FDA0D1ABDB20(uParam3))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (unk_0xD994929E13CC1ED5(&(Global_2451473.f_3810[iVar0 /*26*/].f_4), sParam3))
			{
				if (iParam4 || func_26(Global_2451473.f_3810[iVar0 /*26*/].f_1, Param0, 0))
				{
					Global_2451473.f_3810[iVar0 /*26*/] = 0;
					Global_2451473.f_3810[iVar0 /*26*/].f_1 = { 0f, 0f, 0f };
					StringCopy(&(Global_2451473.f_3810[iVar0 /*26*/].f_4), "", 24);
					StringCopy(&(Global_2451473.f_3810[iVar0 /*26*/].f_10), "", 64);
				}
			}
			iVar0++;
		}
	}
}

void func_450(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_451(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36143[iVar0 /*19*/])
		{
			Global_36143[iVar0 /*19*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_451(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36143[iVar0 /*19*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_452(struct<20> Param0)
{
	func_458(func_459(Param0.f_0), Param0);
	func_455(0, -1, 0);
	unk_0x19F630B59442E836(&Local_383, 74);
	unk_0xCBCBE0D8DD0EF168(&Local_459, 129);
	unk_0xE6E19E3BBABCBC24(0);
	if (!func_454())
	{
		return 0;
	}
	Global_2451473.f_1550 = 0;
	Global_2451473.f_4228 = 0;
	if (unk_0x1C7D9BFDF15A02B4())
	{
	}
	if (func_66(unk_0x1329891157A54C63(), 6))
	{
		func_205(6, 0);
	}
	func_453();
	return 1;
}

void func_453()
{
	var uVar0;
	
	uVar0 = func_75(1189, -1, 0);
	if (unk_0x236D8AD7EE179F46(uVar0, 3))
	{
		unk_0xF3148AAF69AF9CBC(&iLocal_589, 1);
	}
	if (unk_0x236D8AD7EE179F46(iVar0, 4))
	{
		unk_0xF3148AAF69AF9CBC(&iLocal_589, 2);
	}
	if (unk_0x236D8AD7EE179F46(iVar0, 5))
	{
		unk_0xF3148AAF69AF9CBC(&iLocal_589, 3);
		unk_0xF3148AAF69AF9CBC(&iLocal_589, 0);
	}
}

int func_454()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x1C6DF6AD69BE853E())
		{
			return 0;
		}
		if (unk_0x299162DAA4768797())
		{
			return 1;
		}
		if (func_443())
		{
			return 0;
		}
		if (func_441(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	return 0;
}

int func_455(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x428E5E7D8B8CA428();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_457();
			}
			else
			{
				return 0;
			}
		}
		if (!func_456())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x1C6DF6AD69BE853E())
				{
					if (!bParam2)
					{
						func_457();
					}
					else
					{
						return 0;
					}
				}
				if (func_443())
				{
					if (!bParam2)
					{
						func_457();
					}
					else
					{
						return 0;
					}
				}
				if (func_441(155))
				{
					if (!bParam2)
					{
						func_457();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x25E16CB232F8AB91())
			{
				if (!bParam2)
				{
					func_457();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x428E5E7D8B8CA428();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x1C6DF6AD69BE853E())
		{
			if (!bParam2)
			{
				func_457();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x25E16CB232F8AB91())
	{
		if (!bParam2)
		{
			func_457();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_456()
{
	return Global_1315867;
}

void func_457()
{
	unk_0xC23A229F78DAD92A();
}

void func_458(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x1C6DF6AD69BE853E())
	{
		func_457();
	}
	unk_0xBA029707F4D8FFB0(uParam0, 0, Param1.f_16);
}

int func_459(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 50:
			return 32;
		
		case 51:
			return 32;
		
		case 55:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 32;
		
		case 65:
			return 32;
		
		case 66:
			return 2;
		
		case 71:
			return 1;
		
		case 67:
			return 2;
		
		case 68:
			return 4;
		
		case 69:
			return 2;
		
		case 70:
			return 2;
		
		case 52:
			return 1;
		
		case 72:
			return 2;
		
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
			return 0;
		
		case joaat("mpsv_lp0_31"):
			return 1;
		
		default:
	}
	return 0;
}

