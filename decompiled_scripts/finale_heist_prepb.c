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
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_43[2] = { 0, 0 };
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96[2] = { 0, 0 };
	int iLocal_99[2] = { 0, 0 };
	int iLocal_102[2] = { 0, 0 };
	int iLocal_105[2] = { 0, 0 };
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	struct<3> Local_116 = { 0, 0, 0 } ;
	struct<3> Local_119 = { 0, 0, 0 } ;
	struct<3> Local_122 = { 0, 0, 0 } ;
	struct<3> Local_125[2];
	struct<3> Local_132 = { 0, 0, 0 } ;
	float fLocal_135 = 0f;
	char* sLocal_136 = NULL;
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
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	int iLocal_322[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_330[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_338 = 0;
	int iLocal_339[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_347[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_355[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_363[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_371[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_379[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_387 = 0;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	int iLocal_390 = 0;
	int iLocal_391 = 0;
	int iLocal_392 = 0;
	int iLocal_393 = 0;
	int iLocal_394 = 0;
	int iLocal_395 = 0;
	int iLocal_396 = 0;
	int iLocal_397 = 0;
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	int iLocal_404[2] = { 0, 0 };
	int iLocal_407[2] = { 0, 0 };
	int iLocal_410 = 0;
	int iLocal_411 = 0;
	int iLocal_412 = 0;
	int iLocal_413 = 0;
	int iLocal_414 = 0;
	int iLocal_415 = 0;
	int iLocal_416 = 0;
	int iLocal_417 = 0;
	int iLocal_418 = 0;
	int iLocal_419 = 0;
	int iLocal_420 = 0;
	int iLocal_421 = 0;
	int iLocal_422 = 0;
	int iLocal_423 = 0;
	int iLocal_424 = 0;
	int iLocal_425 = 0;
	int iLocal_426 = 0;
	int iLocal_427 = 0;
	int iLocal_428 = 0;
	int iLocal_429 = 0;
	int iLocal_430 = 0;
	int iLocal_431 = 0;
	int iLocal_432 = 0;
	int iLocal_433[2] = { 0, 0 };
	int iLocal_436[2] = { 0, 0 };
	int iLocal_439[2] = { 0, 0 };
	int iLocal_442[2] = { 0, 0 };
	int iLocal_445[2] = { 0, 0 };
	int iLocal_448[2] = { 0, 0 };
	int iLocal_451[2] = { 0, 0 };
	int iLocal_454 = 0;
	int iLocal_455 = 0;
	int iLocal_456 = 0;
	int iLocal_457 = 0;
	int iLocal_458 = 0;
	int iLocal_459[2] = { 0, 0 };
	int iLocal_462[2] = { 0, 0 };
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	int iLocal_467 = 0;
	int iLocal_468 = 0;
	int iLocal_469 = 0;
	int iLocal_470 = 0;
	int iLocal_471 = 0;
	int iLocal_472 = 0;
	int iLocal_473 = 0;
	int iLocal_474 = 0;
	int iLocal_475 = 0;
	int iLocal_476 = 0;
	int iLocal_477 = 0;
	int iLocal_478 = 0;
	int iLocal_479 = 0;
	int iLocal_480 = 0;
	int iLocal_481 = 0;
	int iLocal_482 = 0;
	int iLocal_483 = 0;
	int iLocal_484[2] = { 0, 0 };
	int iLocal_487 = 0;
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
	Local_116 = { 27.7189f, -608.7927f, 30.6293f };
	Local_132 = { 903.1f, -1548.8f, 29.8f };
	fLocal_135 = 0f;
	if (unk_0x5EBD03AF78E7B4DB(3))
	{
		unk_0x9444470D6D9ADB88("FHPRB_STOP");
		func_204();
		func_203();
	}
	if (func_202(0))
	{
		unk_0x6A633E13B2A856AE("FINPRB", 0);
	}
	unk_0x94E87D83163B4BEB("WorkerPedMainGroup", &iLocal_302);
	unk_0x94E87D83163B4BEB("GuardMainGroup", &iLocal_303);
	unk_0xFC00A668AFC2126D(joaat("packer"), 1);
	unk_0x80E7C4A78224C8F9(5, iLocal_303, joaat("player"));
	unk_0x80E7C4A78224C8F9(5, iLocal_302, joaat("player"));
	unk_0x80E7C4A78224C8F9(1, iLocal_303, iLocal_302);
	unk_0x80E7C4A78224C8F9(1, iLocal_302, iLocal_303);
	unk_0x80E7C4A78224C8F9(1, iLocal_303, joaat("COP"));
	unk_0x80E7C4A78224C8F9(1, joaat("COP"), iLocal_303);
	unk_0x80E7C4A78224C8F9(1, iLocal_302, joaat("COP"));
	unk_0x80E7C4A78224C8F9(1, joaat("COP"), iLocal_302);
	while (true)
	{
		unk_0x4789FEFEDF029858("M_FINPRB", 0);
		if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
		{
			unk_0x13E0A8160525AE55(unk_0xA19140A5C42D8715(), 230, 0);
		}
		func_200();
		if (iLocal_317 == 0)
		{
			if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) > 0)
			{
				func_199(27, 1);
				iLocal_317 = 1;
			}
		}
		if (iLocal_396 == 1)
		{
			func_195();
		}
		func_192();
		func_185();
		func_177();
		func_172();
		func_169();
		switch (iLocal_28)
		{
			case 0:
				func_168();
				break;
			
			case 1:
				func_165();
				break;
			
			case 2:
				func_141();
				break;
			
			case 3:
				func_139();
				break;
			
			case 4:
				func_115();
				break;
			
			case 5:
				func_20();
				break;
			
			case 6:
				func_1();
				break;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	switch (iLocal_62)
	{
		case 0:
			unk_0x4F93066CECE72793();
			unk_0x135C61E339DABBAC(1);
			unk_0x9444470D6D9ADB88("FHPRA_FAIL");
			switch (iLocal_30)
			{
				case 0:
					break;
				
				case 4:
					sLocal_136 = "FPB_FAIL1";
					break;
				
				case 3:
					sLocal_136 = "FPB_FAIL2";
					break;
				
				case 1:
					sLocal_136 = "FPB_FAIL3";
					break;
				
				case 2:
					sLocal_136 = "FPB_FAIL10";
					break;
				
				case 5:
					if (func_14() == 0)
					{
						sLocal_136 = "FPB_FAIL7";
					}
					if (func_14() == 2)
					{
						sLocal_136 = "FPB_FAIL8";
					}
					if (func_14() == 1)
					{
						sLocal_136 = "FPB_FAIL9";
					}
					break;
				
				case 6:
					sLocal_136 = "FPB_FAIL11";
					break;
			}
			if (iLocal_30 == 0)
			{
				func_6(0);
			}
			else
			{
				func_4(sLocal_136);
			}
			iLocal_62 = 1;
			break;
		
		case 1:
			if (func_3())
			{
				if (func_2())
				{
				}
				func_203();
			}
			break;
	}
}

int func_2()
{
	if (Global_93232 == 7)
	{
		return 1;
	}
	return 0;
}

int func_3()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_93232 == 7 || Global_93232 == 8)
	{
		return 1;
	}
	return 0;
}

void func_4(char* sParam0)
{
	func_5(sParam0);
	func_6(0);
}

void func_5(char* sParam0)
{
	if (!unk_0x429D45A6C6520026(sParam0))
	{
		if (unk_0x245B8CF1349B3FDF(sParam0) <= 16)
		{
			StringCopy(&Global_71437, sParam0, 16);
			StringCopy(&Global_71441, "", 16);
			if (unk_0x8F7BC8EB456E9A7D())
			{
				unk_0xB73C1036C716A110();
			}
		}
	}
}

void func_6(int iParam0)
{
	int iVar0;
	
	if (Global_106070.f_9057 || func_202(0))
	{
		iVar0 = func_13();
		if (!func_7(iVar0))
		{
			return;
		}
		unk_0x2BCFB39E86340DAA(&(Global_84079[iVar0 /*5*/].f_1), 5);
		Global_93268 = iParam0;
	}
}

int func_7(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_12();
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		unk_0x824B5E936276CAB3(5000);
	}
	iVar0 = Global_84079[iParam0 /*5*/];
	iVar1 = Global_71474.f_109[iVar0 /*4*/];
	func_11(iVar1, 1);
	unk_0x657CA5CB73EE77D4(unk_0xD4E735F4B6A956AC());
	unk_0xB8C9A9ECCE440A3A(unk_0xD4E735F4B6A956AC());
	func_8(&(Global_106070.f_2355.f_539), iVar1);
	if (Global_87502 == Global_93269)
	{
		Global_106070.f_9057.f_330[iVar1 /*6*/].f_1++;
	}
	if (!unk_0x05EFB6A616B6FADE(Global_84115[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
		{
			unk_0xC1D3387D1E48090E(0);
		}
	}
	Global_106070.f_9057.f_330[iVar1 /*6*/].f_2++;
	Global_87502 = Global_93269;
	if (iParam0 == -1)
	{
		if (Global_106070.f_9057)
		{
		}
		return 0;
	}
	if (unk_0x05EFB6A616B6FADE(Global_84079[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0x05EFB6A616B6FADE(Global_84079[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_8(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_106070.f_18505[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0x05EFB6A616B6FADE(Global_106070.f_9057.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_10(Global_106070.f_18505[iVar0], &Var2, &fVar5))
			{
				Global_106070.f_18505[iVar0] = 318;
				func_9(&(uParam0->f_2276[iVar0]));
				uParam0->f_2280[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2290[iVar0] = 0f;
				uParam0->f_2294[iVar0] = 0;
				uParam0->f_2298[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2308[iVar0] = 0;
				Global_90717[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_90717[iVar0 /*29*/].f_9 = 0f;
				Global_90717[iVar0 /*29*/].f_12 = 0f;
				Global_90717[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_90717[iVar0 /*29*/].f_10 = 0f;
				Global_90717[iVar0 /*29*/].f_13 = 0f;
				Global_90717[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_90717[iVar0 /*29*/].f_11 = 0f;
				Global_90717[iVar0 /*29*/].f_14 = 0f;
				Global_90717[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_90717[iVar0 /*29*/].f_26 = 0f;
				Global_90717[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_90717[iVar0 /*29*/].f_27 = 0f;
				Global_90717[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_90717[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_9(var uParam0)
{
	*uParam0 = -15;
}

int func_10(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_10(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_10(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_11(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_87312[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_87312[iParam0 /*2*/] = 0;
	}
}

void func_12()
{
	Global_93267 = 1;
	if (unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1))
	{
		if (unk_0x429D45A6C6520026(&Global_71437))
		{
			switch (func_14())
			{
				case 0:
					StringCopy(&Global_71437, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_71437, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_71437, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_71441, "", 16);
		}
		Global_93267 = 0;
	}
	else if (!unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		if (unk_0x429D45A6C6520026(&Global_71437))
		{
			switch (func_14())
			{
				case 0:
					StringCopy(&Global_71437, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_71437, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_71437, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_71441, "", 16);
		}
		Global_93267 = 0;
		unk_0x2BCFB39E86340DAA(&(Global_93232.f_20), 25);
	}
}

int func_13()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0x05EFB6A616B6FADE(Global_84079[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_14()
{
	func_15();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_15()
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		if (func_19(Global_106070.f_2355.f_539.f_4301) != unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()))
		{
			iVar0 = func_18(unk_0xA19140A5C42D8715());
			if (func_17(iVar0) && (!func_16(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_17(Global_106070.f_2355.f_539.f_4301))
				{
					Global_106070.f_2355.f_539.f_4302 = Global_106070.f_2355.f_539.f_4301;
				}
				Global_106070.f_2355.f_539.f_4303 = iVar0;
				Global_106070.f_2355.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_106070.f_2355.f_539.f_4301 != 145)
			{
				Global_106070.f_2355.f_539.f_4303 = Global_106070.f_2355.f_539.f_4301;
			}
			return;
		}
	}
	Global_106070.f_2355.f_539.f_4301 = 145;
}

bool func_16(int iParam0)
{
	return Global_36117 == iParam0;
}

bool func_17(int iParam0)
{
	return iParam0 < 3;
}

int func_18(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		iVar1 = unk_0x8F474E419F56E48D(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_19(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_19(int iParam0)
{
	if (func_17(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_20()
{
	func_169();
	if (iLocal_62 == 0)
	{
		if (iLocal_304 == 1)
		{
			func_34();
			iLocal_304 = 0;
		}
		iLocal_318 = 0;
		iLocal_319 = 0;
		iLocal_320 = 0;
		unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), 0, 0);
		if (func_33(iLocal_46, 0))
		{
			if (!func_32(iLocal_46))
			{
				while (!func_31(iLocal_46, 0))
				{
					unk_0x4EDE34FBADD967A6(0);
				}
			}
		}
		if (func_33(iLocal_48, 0))
		{
			if (!func_32(iLocal_48))
			{
				while (!func_31(iLocal_48, 0))
				{
					unk_0x4EDE34FBADD967A6(0);
				}
			}
		}
		if (func_33(iLocal_47, 0))
		{
			if (!func_32(iLocal_47))
			{
				while (!func_31(iLocal_47, 0))
				{
					unk_0x4EDE34FBADD967A6(0);
				}
			}
		}
		if (unk_0x71364F510A1CB69F())
		{
			if (!func_30())
			{
				unk_0x745C10318A2C7CAE(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1));
			}
			func_27(iLocal_33, -1, 1);
		}
		if (!unk_0x3A83743561B4F70C())
		{
			unk_0x70C1F5AA59767FE6(800);
		}
		iLocal_396 = 1;
		iLocal_62 = 1;
	}
	if (iLocal_62 == 1)
	{
		if (unk_0xDC5D81351D6A4DDB(iLocal_33))
		{
			if (unk_0x1095F403F52B42E1(iLocal_33, 0))
			{
				if (func_14() == 0)
				{
					if (func_33(iLocal_48, 0))
					{
						if (unk_0xE0FD180CD24C0B67(iLocal_48, iLocal_33, 0))
						{
							unk_0x9568B1B58F78FF36(iLocal_48);
							unk_0xF8136E11BE4BEAC3(iLocal_48);
							unk_0x1F4E5EFBFE503FB3(iLocal_48, 1);
							unk_0xFBA5AC89E66201B2(iLocal_48, iLocal_33, 0);
						}
					}
					if (func_33(iLocal_47, 0))
					{
						if (unk_0xE0FD180CD24C0B67(iLocal_47, iLocal_33, 0))
						{
							unk_0x9568B1B58F78FF36(iLocal_47);
							unk_0xF8136E11BE4BEAC3(iLocal_47);
							unk_0x1F4E5EFBFE503FB3(iLocal_47, 1);
							unk_0xFBA5AC89E66201B2(iLocal_47, iLocal_33, 0);
						}
					}
				}
				if (func_14() == 2)
				{
					if (func_33(iLocal_46, 0))
					{
						if (unk_0xE0FD180CD24C0B67(iLocal_46, iLocal_33, 0))
						{
							unk_0x9568B1B58F78FF36(iLocal_46);
							unk_0xF8136E11BE4BEAC3(iLocal_46);
							unk_0x1F4E5EFBFE503FB3(iLocal_46, 1);
							unk_0xFBA5AC89E66201B2(iLocal_46, iLocal_33, 0);
						}
					}
					if (func_33(iLocal_47, 0))
					{
						if (unk_0xE0FD180CD24C0B67(iLocal_47, iLocal_33, 0))
						{
							unk_0x9568B1B58F78FF36(iLocal_47);
							unk_0xF8136E11BE4BEAC3(iLocal_47);
							unk_0x1F4E5EFBFE503FB3(iLocal_47, 1);
							unk_0xFBA5AC89E66201B2(iLocal_47, iLocal_33, 0);
						}
					}
				}
				if (func_14() == 1)
				{
					if (func_33(iLocal_46, 0))
					{
						if (unk_0xE0FD180CD24C0B67(iLocal_46, iLocal_33, 0))
						{
							unk_0x9568B1B58F78FF36(iLocal_46);
							unk_0xF8136E11BE4BEAC3(iLocal_46);
							unk_0x1F4E5EFBFE503FB3(iLocal_46, 1);
							unk_0xFBA5AC89E66201B2(iLocal_46, iLocal_33, 0);
						}
					}
					if (func_33(iLocal_48, 0))
					{
						if (unk_0xE0FD180CD24C0B67(iLocal_48, iLocal_33, 0))
						{
							unk_0x9568B1B58F78FF36(iLocal_48);
							unk_0xF8136E11BE4BEAC3(iLocal_48);
							unk_0x1F4E5EFBFE503FB3(iLocal_48, 1);
							unk_0xFBA5AC89E66201B2(iLocal_48, iLocal_33, 0);
						}
					}
				}
				if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iLocal_33, 0))
				{
					unk_0xFBA5AC89E66201B2(unk_0xA19140A5C42D8715(), iLocal_33, 0);
				}
			}
		}
		unk_0x5AE11BC36633DE4E(0);
		iLocal_62 = 2;
	}
	if (iLocal_62 == 2)
	{
		if (unk_0xDC5D81351D6A4DDB(iLocal_33))
		{
			if (unk_0x1095F403F52B42E1(iLocal_33, 0))
			{
				if (iLocal_320 == 0)
				{
					if (func_14() == 0)
					{
						if (func_33(iLocal_48, 0))
						{
							if (!unk_0xE0FD180CD24C0B67(iLocal_48, iLocal_33, 0))
							{
								if (func_32(iLocal_48))
								{
									if (func_24(iLocal_48))
									{
										iLocal_320 = 1;
									}
								}
								else
								{
									iLocal_320 = 1;
								}
							}
						}
						else
						{
							iLocal_318 = 1;
						}
						if (func_33(iLocal_47, 0))
						{
							if (!unk_0xE0FD180CD24C0B67(iLocal_47, iLocal_33, 0))
							{
								if (func_32(iLocal_47))
								{
									if (func_24(iLocal_47))
									{
										iLocal_320 = 1;
									}
								}
								else
								{
									iLocal_320 = 1;
								}
							}
						}
						else
						{
							iLocal_319 = 1;
						}
					}
					if (func_14() == 2)
					{
						if (func_33(iLocal_46, 0))
						{
							if (!unk_0xE0FD180CD24C0B67(iLocal_46, iLocal_33, 0))
							{
								if (func_32(iLocal_46))
								{
									if (func_24(iLocal_46))
									{
										iLocal_320 = 1;
									}
								}
								else
								{
									iLocal_320 = 1;
								}
							}
						}
						else
						{
							iLocal_318 = 1;
						}
						if (func_33(iLocal_47, 0))
						{
							if (!unk_0xE0FD180CD24C0B67(iLocal_47, iLocal_33, 0))
							{
								if (func_32(iLocal_47))
								{
									if (func_24(iLocal_47))
									{
										iLocal_320 = 1;
									}
								}
								else
								{
									iLocal_320 = 1;
								}
							}
						}
						else
						{
							iLocal_319 = 1;
						}
					}
					if (func_14() == 1)
					{
						if (func_33(iLocal_46, 0))
						{
							if (!unk_0xE0FD180CD24C0B67(iLocal_46, iLocal_33, 0))
							{
								if (func_32(iLocal_46))
								{
									if (func_24(iLocal_46))
									{
										iLocal_320 = 1;
									}
								}
								else
								{
									iLocal_320 = 1;
								}
							}
						}
						else
						{
							iLocal_318 = 1;
						}
						if (func_33(iLocal_48, 0))
						{
							if (!unk_0xE0FD180CD24C0B67(iLocal_48, iLocal_33, 0))
							{
								if (func_32(iLocal_48))
								{
									if (func_24(iLocal_48))
									{
										iLocal_320 = 1;
									}
								}
								else
								{
									iLocal_320 = 1;
								}
							}
						}
						else
						{
							iLocal_319 = 1;
						}
					}
					if (iLocal_318 == 1 && iLocal_319 == 1)
					{
						iLocal_320 = 1;
					}
				}
				else if (!unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iLocal_33, 1))
				{
					unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), 1, 0);
					unk_0x5AE11BC36633DE4E(0);
					iLocal_62 = 3;
				}
			}
		}
	}
	if (iLocal_62 == 3)
	{
		if (unk_0xDC5D81351D6A4DDB(iLocal_33))
		{
			if (unk_0x1095F403F52B42E1(iLocal_33, 0))
			{
				unk_0xC53974682AC939A9(iLocal_33, 0);
				unk_0x14293208022014FA(iLocal_33, 2);
				unk_0xB29E08C7AB729BAD(iLocal_33, 1);
			}
		}
		if (unk_0xDC5D81351D6A4DDB(iLocal_32))
		{
			if (unk_0x1095F403F52B42E1(iLocal_32, 0))
			{
				unk_0xB29E08C7AB729BAD(iLocal_32, 1);
			}
		}
		iLocal_62 = 4;
	}
	if (iLocal_62 == 4)
	{
		func_21();
	}
}

void func_21()
{
	func_22(0, 0);
	func_203();
}

void func_22(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_56183)
	{
		Global_56183 = iParam1;
	}
	if (bParam0)
	{
		if ((func_202(0) && Global_71451.f_1 == 1) && func_23(Global_71451))
		{
		}
		else
		{
			Global_56181 = 1;
		}
	}
	if (Global_106070.f_9057 || func_202(0))
	{
		iVar0 = func_13();
		iVar1 = Global_84079[iVar0 /*5*/];
		uVar2 = Global_71474.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_106070.f_9057)
			{
			}
			return;
		}
		if (unk_0x05EFB6A616B6FADE(Global_84079[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0x05EFB6A616B6FADE(Global_84079[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0x2BCFB39E86340DAA(&(Global_84079[iVar0 /*5*/].f_1), 4);
		unk_0x2BCFB39E86340DAA(&Global_71453, 1);
		Global_71469 = uVar2;
		Global_71470 = unk_0xFD34717937104F1C();
	}
}

int func_23(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int func_24(int iParam0)
{
	int iVar0;
	
	return 0;
	if (!unk_0x4915F4759304D5CF(iParam0))
	{
		iVar0 = func_18(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_25(iVar0) != iParam0)
		{
			return 0;
		}
		if (!unk_0x05EFB6A616B6FADE(Global_89181, iVar0))
		{
			return 0;
		}
		unk_0xFA57C719261AA55D(&Global_89181, iVar0);
		return 1;
	}
	return 0;
}

int func_25(int iParam0)
{
	if (iParam0 > 3)
	{
		return 0;
	}
	if (iParam0 == func_14())
	{
		return unk_0xA19140A5C42D8715();
	}
	return Global_90805[func_26(iParam0)];
}

int func_26(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	else if (iParam0 == 145)
	{
		return 3;
	}
	return 4;
}

void func_27(int iParam0, int iParam1, int iParam2)
{
	if (func_29() && func_30())
	{
		while (Global_93227 != 6)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x62BAB49318F4FE6E(0);
		if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
		{
			if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
			{
				unk_0x7925E894408C3DAD(unk_0xA19140A5C42D8715());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
			{
				if (unk_0xDC5D81351D6A4DDB(iParam0))
				{
					if (unk_0x1095F403F52B42E1(iParam0, 0))
					{
						if (!unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iParam0, 0))
						{
							unk_0x692D5500D82E4F5D(unk_0xA19140A5C42D8715(), iParam0, iParam1);
							unk_0xAA32DD4848CF93E0(0f, 1065353216);
							unk_0xD87B76260C547F31(0f);
							unk_0x4EDE34FBADD967A6(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
			{
				unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), 1, 0);
			}
		}
		unk_0xDB1944D1E5D46A15();
		func_28(0);
	}
}

void func_28(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x2BCFB39E86340DAA(&(Global_93232.f_20), 13);
	}
	else
	{
		unk_0xFA57C719261AA55D(&(Global_93232.f_20), 13);
	}
}

int func_29()
{
	if (Global_93232 == 10 || Global_93232 == 9)
	{
		return 1;
	}
	return 0;
}

bool func_30()
{
	return unk_0x05EFB6A616B6FADE(Global_93232.f_20, 13);
}

int func_31(int iParam0, int iParam1)
{
	int iVar0;
	
	return 0;
	if (!unk_0x4915F4759304D5CF(iParam0))
	{
		iVar0 = func_18(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_25(iVar0) != iParam0)
		{
			return 0;
		}
		if (unk_0x05EFB6A616B6FADE(Global_89181, iVar0))
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0xA19140A5C42D8715())
			{
				return 0;
			}
		}
		if (unk_0x05EFB6A616B6FADE(Global_89180, iVar0))
		{
			unk_0x808CD8B497BA1FB8(iParam0, 0, 0);
			unk_0x98D1B1BD9C3AA456(iParam0, 0, 1);
			unk_0x2BCFB39E86340DAA(&Global_89181, iVar0);
			return 1;
		}
	}
	return 0;
}

int func_32(int iParam0)
{
	int iVar0;
	
	return 0;
	if (!unk_0x4915F4759304D5CF(iParam0))
	{
		iVar0 = func_18(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_25(iVar0) != iParam0)
		{
			return 0;
		}
		if (unk_0x05EFB6A616B6FADE(Global_89181, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_33(int iParam0, int iParam1)
{
	int iVar0;
	
	return 0;
	if (!unk_0x4915F4759304D5CF(iParam0))
	{
		iVar0 = func_18(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_25(iVar0) != iParam0)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0xA19140A5C42D8715())
			{
				return 0;
			}
		}
		if (unk_0x05EFB6A616B6FADE(Global_89180, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_34()
{
	iLocal_396 = 0;
	iLocal_456 = 0;
	unk_0xF10B3BC4F73177E5(unk_0xD4E735F4B6A956AC(), 0, 0);
	unk_0xDF341226C0B8BAC3(unk_0xD4E735F4B6A956AC(), 0);
	if (!unk_0x71364F510A1CB69F())
	{
		unk_0x9662BE461F9FDF9E(0);
	}
	func_113();
	unk_0x4F93066CECE72793();
	func_112();
	func_111();
	func_36();
	if (!func_30())
	{
		func_35();
	}
	unk_0xD87B76260C547F31(0f);
}

void func_35()
{
	switch (iLocal_28)
	{
		case 2:
			unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), 856.9501f, -1573.177f, 29.4751f, 1, 0, 0, 1);
			unk_0x92DDCF53AA47A63D(unk_0xA19140A5C42D8715(), 288.3586f);
			break;
		
		case 3:
			unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), 856.9501f, -1573.177f, 29.4751f, 1, 0, 0, 1);
			unk_0x92DDCF53AA47A63D(unk_0xA19140A5C42D8715(), 288.3586f);
			break;
		
		case 4:
			if (unk_0xDC5D81351D6A4DDB(iLocal_33))
			{
				if (unk_0x1095F403F52B42E1(iLocal_33, 0))
				{
					if (!unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iLocal_33, 0))
					{
						unk_0x692D5500D82E4F5D(unk_0xA19140A5C42D8715(), iLocal_33, -1);
					}
				}
			}
			break;
		
		case 5:
			if (unk_0xDC5D81351D6A4DDB(iLocal_33))
			{
				if (unk_0x1095F403F52B42E1(iLocal_33, 0))
				{
					if (!unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iLocal_33, 0))
					{
						unk_0x692D5500D82E4F5D(unk_0xA19140A5C42D8715(), iLocal_33, -1);
					}
				}
			}
			break;
	}
}

void func_36()
{
	switch (iLocal_28)
	{
		case 3:
			iLocal_418 = 0;
			iLocal_419 = 0;
			iLocal_420 = 0;
			func_107();
			if (func_106() && func_103(7f, 7f, 7f, 1))
			{
				func_101();
				while (!func_100())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				iLocal_34 = func_37(818.8139f, -1610.406f, 30.7951f, 264.412f);
			}
			unk_0xBF6EED5D6E0CD9BF(0.01f);
			break;
		
		case 4:
			iLocal_418 = 0;
			iLocal_419 = 0;
			iLocal_420 = 0;
			func_107();
			if (unk_0xDC5D81351D6A4DDB(iLocal_33))
			{
				if (unk_0x1095F403F52B42E1(iLocal_33, 0))
				{
					unk_0x4299736016AECE26(iLocal_33, 89.2131f, -596.9456f, 30.6224f, 1, 0, 0, 1);
					unk_0x92DDCF53AA47A63D(iLocal_33, 161.1163f);
				}
			}
			unk_0xFDD15D670AD33E10(41f, -615f, 30f, 50f, 1, 1, 0, 0);
			break;
		
		case 5:
			iLocal_418 = 1;
			iLocal_419 = 1;
			iLocal_420 = 1;
			func_107();
			unk_0xFDD15D670AD33E10(41f, -615f, 30f, 50f, 1, 1, 0, 0);
			if (unk_0xDC5D81351D6A4DDB(iLocal_33))
			{
				if (unk_0x1095F403F52B42E1(iLocal_33, 0))
				{
					unk_0x4299736016AECE26(iLocal_33, 28.4065f, -608.9371f, 30.6293f, 1, 0, 0, 1);
					unk_0x92DDCF53AA47A63D(iLocal_33, 70.7778f);
				}
			}
			unk_0xCACEBBBEAD8F262E(joaat("s_m_m_security_01"));
			while (!unk_0x7FC99CCC73354033(joaat("s_m_m_security_01")))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			if (!unk_0xDC5D81351D6A4DDB(iLocal_49))
			{
				iLocal_49 = unk_0x35C6E06B120EB2E3(26, joaat("s_m_m_security_01"), 64.904f, -617.9949f, 30.7028f, 223.555f, 1, 1);
				unk_0xA5DE74AE39867B03(joaat("s_m_m_security_01"));
				unk_0x13E0A8160525AE55(iLocal_49, 324, 1);
			}
			break;
	}
}

int func_37(struct<3> Param0, float fParam3)
{
	return func_38(&(Global_96664.f_2875), Param0, fParam3, 0);
}

int func_38(var uParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	var uVar5;
	int iVar8;
	
	if (func_99(uParam0))
	{
		if (func_98(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { *uParam0 };
			fParam4 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall"))
		{
			if (unk_0x0C4DF083566CCC1C(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, 1))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam4 = 89.5f;
			}
		}
		if (func_97(uParam0))
		{
			unk_0xFDD15D670AD33E10(Param1, 5f, 1, 0, 0, 0);
			func_96(Param1, 5f, 0);
			iVar0 = unk_0x48CFBECB146FD1A1(uParam0->f_12.f_66, Param1, fParam4, 1, 1, 0);
			if (unk_0xDC5D81351D6A4DDB(iVar0))
			{
				Var1 = { unk_0xE2BBD32891C18569(iVar0, 1) };
				if (unk_0xB7A628320EFF8E47(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					unk_0xE8B3104D1CB25CDC(iVar0, Param1, 0, 0, 1);
				}
				func_79(iVar0, &(uParam0->f_12), 0, 1);
				bVar4 = true;
				if (unk_0x71852D4EBD08275F(uParam0->f_12.f_66) || unk_0xD7ACB5DACC6B9C97(uParam0->f_12.f_66))
				{
					if (!unk_0x604284C2FC63077C(Param1.f_0, Param1.f_1, (Param1.f_2 + 30f), Param1.f_0, Param1.f_1, (Param1.f_2 - 30f), &uVar5))
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					unk_0x99F546A9200EA026(iVar0, 1084227584);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam5)
					{
						if (unk_0x425CD7B17352316F(unk_0x8F474E419F56E48D(iVar0)))
						{
							func_78(uParam0->f_11, 1);
						}
						else if (unk_0x8CE5E4632E631B03(unk_0x8F474E419F56E48D(iVar0)))
						{
							func_78(uParam0->f_11, 2);
						}
					}
					unk_0x6A1316C2E50E25F8(iVar0, 0);
					unk_0x6759DE81DF6FBF31(iVar0, 0);
					unk_0x0BE3742BB3253F0E(iVar0, 1);
					func_77(iVar0, uParam0->f_11);
				}
				else if ((!func_74(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && unk_0x3CAC2741CC1A631F(unk_0x61D2332983ACC05C(), "startup_positioning"))
				{
					iVar8 = func_73(iVar0);
					if (iVar8 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_66(iVar8);
					}
				}
				if (((Global_93232 != 13 && Global_93232 != 10) && Global_93232 != 11) && Global_93232 != 12)
				{
					if (unk_0xFEB6EEC0545AF7AA(&(Global_93232.f_3)) == Global_71012)
					{
						if (uParam0->f_12.f_66 == Global_106070.f_32605.f_69[21 /*78*/].f_66)
						{
							func_63(24, 0);
							func_66(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_39(iVar0, uParam0->f_11);
				}
				unk_0xA5DE74AE39867B03(uParam0->f_12.f_66);
				Var1 = { unk_0xE2BBD32891C18569(iVar0, 1) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_39(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_45(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0xB0D49A1F9F054602(iParam0, -1, 0);
		if (!unk_0xDC5D81351D6A4DDB(iVar0))
		{
			iVar0 = unk_0xBF8685DA34F4F151(iParam0, -1);
		}
		if (unk_0xDC5D81351D6A4DDB(iVar0) && !unk_0x4915F4759304D5CF(iVar0))
		{
			if (unk_0x8F474E419F56E48D(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x8F474E419F56E48D(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x8F474E419F56E48D(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_106070.f_2355.f_539.f_4301;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x8F474E419F56E48D(iParam0) == Global_106070.f_32605.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0x429D45A6C6520026(&(Global_106070.f_32605.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x3CAC2741CC1A631F(unk_0xC5D229CE54955E47(iParam0), &(Global_106070.f_32605.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_106070.f_32605.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_106070.f_32605.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x8F474E419F56E48D(iParam0) == Global_106070.f_32605.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0x429D45A6C6520026(&(Global_106070.f_32605.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x3CAC2741CC1A631F(unk_0xC5D229CE54955E47(iParam0), &(Global_106070.f_32605.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_106070.f_32605.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_106070.f_32605.f_5590 = iParam1;
	Global_70929 = iParam0;
	Global_106070.f_32605.f_5588 = 1;
	func_40(iParam0, &(Global_106070.f_32605.f_5510));
}

void func_40(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x1095F403F52B42E1(iParam0, 0))
	{
		func_44(uParam1);
		uParam1->f_66 = unk_0x8F474E419F56E48D(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xC5D229CE54955E47(iParam0), 16);
		*uParam1 = unk_0xDDB38D7590A81CE5(iParam0);
		unk_0x249EC6991E16D61D(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xD8185C6194306C6E(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x00D0FF77BA971D60(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xBA6EC692A8E9BD41(iParam0);
		uParam1->f_67 = unk_0x9373D3C23637D009(iParam0);
		uParam1->f_69 = unk_0x8342B65392C8BC37(iParam0);
		uParam1->f_70 = unk_0xED16A3D69B141AED(iParam0);
		unk_0x292472155924CBB5(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x922C8705F0BA67E6(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x243FC0956CEB6D1F(iParam0, 2))
		{
			unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 28);
		}
		if (unk_0x243FC0956CEB6D1F(iParam0, 3))
		{
			unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 29);
		}
		if (unk_0x243FC0956CEB6D1F(iParam0, 0))
		{
			unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 30);
		}
		if (unk_0x243FC0956CEB6D1F(iParam0, 1))
		{
			unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_43(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0xEF6267624B1C9336(iParam0, 0))
		{
			uParam1->f_68 = unk_0x392DF1C78010FB0C(iParam0);
		}
		if (unk_0xCA8C103FCD316F89(uParam1->f_66))
		{
			if (unk_0xB4476DCF5073F3D1(iParam0))
			{
				switch (unk_0xED4856750A5EA5E8(iParam0))
				{
					case 3:
					case 0:
						unk_0xFA57C719261AA55D(&(uParam1->f_77), 23);
						unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0xFA57C719261AA55D(&(uParam1->f_77), 23);
						unk_0xFA57C719261AA55D(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0xCBFCD862A600B654(iParam0))
		{
			unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 9);
		}
		if (unk_0x36167F9370DCE78E(iParam0))
		{
			unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 10);
		}
		if (unk_0x8DEA0E8C80861E9D(iParam0))
		{
			unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 13);
			unk_0xE5F6CFB0158C9F97(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0xE9FF101C94B1BBDB(iParam0))
		{
			unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 12);
		}
		func_42(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xED6D3EA61B44622B(iParam0, iVar0 + 1))
			{
				unk_0x2BCFB39E86340DAA(&(uParam1->f_77), func_41(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x33C323290E3BDAB1(iParam0, 0))
		{
			unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0xFA57C719261AA55D(&(uParam1->f_77), 11);
		}
		if (unk_0xAEAF59799C2F26E4(iParam0, "IgnoredByQuickSave") && unk_0x13AF6A38CAD2D5DD(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0xFA57C719261AA55D(&(uParam1->f_77), 27);
		}
	}
}

int func_41(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_42(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x1095F403F52B42E1(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x857E88DF0C8EDB8B(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x9E68AB02E7DC3B39(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (unk_0x9E68AB02E7DC3B39(*iParam0, iVar1))
			{
				switch (unk_0x3DFF319A831E0CDB(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x22D95AF01E737CA1(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xB9A77CDBB0A3A5D8(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xB9A77CDBB0A3A5D8(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_43(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_44(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_45(int iParam0)
{
	if ((((((((((!unk_0xDC5D81351D6A4DDB(iParam0) || !unk_0x1095F403F52B42E1(iParam0, 0)) || func_61(iParam0, 0, 0)) || func_61(iParam0, 1, 0)) || func_61(iParam0, 2, 0)) || func_60(iParam0) != 145) || func_59(iParam0)) || func_58(iParam0)) || func_57(iParam0)) || func_56(iParam0)) || !func_46(unk_0x8F474E419F56E48D(iParam0)))
	{
		if (func_58(iParam0))
		{
		}
		if (func_58(iParam0))
		{
		}
		if (func_61(iParam0, 0, 0))
		{
		}
		if (func_61(iParam0, 1, 0))
		{
		}
		if (func_61(iParam0, 2, 0))
		{
		}
		if (func_60(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_46(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_47(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0x71852D4EBD08275F(iParam0) || unk_0xCA8C103FCD316F89(iParam0)) || unk_0x7C197233F79C2CB8(iParam0)) || unk_0x289FBFAD3E416C48(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_47(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x671704836D893828(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !unk_0x4C9BACA8D249CB13()) || (iParam0 == joaat("buffalo3") && !unk_0x4C9BACA8D249CB13())) || (iParam0 == joaat("gauntlet2") && !unk_0x4C9BACA8D249CB13())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x4C9BACA8D249CB13()))
	{
		if (!func_55())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x730B2D99EC02BFBB())
		{
			if (unk_0xED2E7B72F90BB7CF(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x3B61940560400F58(Var1.f_0))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_54() && !func_53()) && !func_52()) && !func_51()) && !func_55())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x29A02C184A66D25E() || unk_0x47C01C0E6F4C1D06()) || unk_0x7DD04831D0FC44CA())
		{
		}
		else if (!func_52())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_50(iParam0))
		{
			return 0;
		}
	}
	if (!func_48(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_48(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_49())
	{
		return 1;
	}
	unk_0x0B2954993B98F51D(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0x3B6DCE62F381F366(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_49()
{
	if (unk_0x47C01C0E6F4C1D06())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

int func_50(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2503689)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x5E0F2F352218B916();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_6488 && !Global_262145.f_12797) && iVar1 < Global_262145.f_12798)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14095 && iVar1 < Global_262145.f_14107)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14091 && iVar1 < Global_262145.f_14103)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14092 && iVar1 < Global_262145.f_14104)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14093 && iVar1 < Global_262145.f_14105)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14094 && iVar1 < Global_262145.f_14106)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14096 && iVar1 < Global_262145.f_14108)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14097 && iVar1 < Global_262145.f_14100)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14098 && iVar1 < Global_262145.f_14101)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14099 && iVar1 < Global_262145.f_14102)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_16727 && iVar1 < Global_262145.f_16691)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_16722 && iVar1 < Global_262145.f_16686)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_16726 && iVar1 < Global_262145.f_16690)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_16725 && iVar1 < Global_262145.f_16689)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_16719 && iVar1 < Global_262145.f_16683)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_16720 && iVar1 < Global_262145.f_16684)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_16723 && iVar1 < Global_262145.f_16687)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_16724 && iVar1 < Global_262145.f_16688)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_16721 && iVar1 < Global_262145.f_16685)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16729 && iVar1 < Global_262145.f_16693)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16730 && iVar1 < Global_262145.f_16694)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_16718 && iVar1 < Global_262145.f_16682)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_16717 && iVar1 < Global_262145.f_16681)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_16716 && iVar1 < Global_262145.f_16680)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_16728 && iVar1 < Global_262145.f_16692)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16731 && iVar1 < Global_262145.f_16695)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16732 && iVar1 < Global_262145.f_16696)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16733 && iVar1 < Global_262145.f_16697)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16734 && iVar1 < Global_262145.f_16698)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_16879 && iVar1 < Global_262145.f_16901)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_16880 && iVar1 < Global_262145.f_16902)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_16881 && iVar1 < Global_262145.f_16903)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_16882 && iVar1 < Global_262145.f_16904)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_16883 && iVar1 < Global_262145.f_16905)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_16884 && iVar1 < Global_262145.f_16906)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_16886 && iVar1 < Global_262145.f_16907)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_16887 && iVar1 < Global_262145.f_16908)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_16888 && iVar1 < Global_262145.f_16909)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_16889 && iVar1 < Global_262145.f_16910)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_16890 && iVar1 < Global_262145.f_16911)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_16891 && iVar1 < Global_262145.f_16912)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_16892 && iVar1 < Global_262145.f_16913)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_16898 && iVar1 < Global_262145.f_16920)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_16895 && iVar1 < Global_262145.f_16916)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_16896 && iVar1 < Global_262145.f_16917)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_16897 && iVar1 < Global_262145.f_16918)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_16885 && iVar1 < Global_262145.f_16919)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_16899 && iVar1 < Global_262145.f_16921)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_16893 && iVar1 < Global_262145.f_16914)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_16894 && iVar1 < Global_262145.f_16915)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_16900 && iVar1 < Global_262145.f_16922)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_18528 && iVar1 < Global_262145.f_18625)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_18529 && iVar1 < Global_262145.f_18626)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_18530 && iVar1 < Global_262145.f_18627)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_18531 && iVar1 < Global_262145.f_18628)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_18532 && iVar1 < Global_262145.f_18629)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_18533 && iVar1 < Global_262145.f_18630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_18534 && iVar1 < Global_262145.f_18631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_18535 && iVar1 < Global_262145.f_18632)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_18536 && iVar1 < Global_262145.f_18633)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_18537 && iVar1 < Global_262145.f_18634)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_18538 && iVar1 < Global_262145.f_18635)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_18539 && iVar1 < Global_262145.f_18636)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_18540 && iVar1 < Global_262145.f_18637)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_18541 && iVar1 < Global_262145.f_18638)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_18542 && iVar1 < Global_262145.f_18639)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_18543 && iVar1 < Global_262145.f_18640)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_18544 && iVar1 < Global_262145.f_18641)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_18545 && iVar1 < Global_262145.f_18642)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_18546 && iVar1 < Global_262145.f_18643)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_18547 && iVar1 < Global_262145.f_18644)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18548 && iVar1 < Global_262145.f_18645)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18549 && iVar1 < Global_262145.f_18646)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18550 && iVar1 < Global_262145.f_18647)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18551 && iVar1 < Global_262145.f_18648)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18552 && iVar1 < Global_262145.f_18649)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_19608 && iVar1 < Global_262145.f_19604)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_19609 && iVar1 < Global_262145.f_19605)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_19610 && iVar1 < Global_262145.f_19606)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_19611 && iVar1 < Global_262145.f_19607)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_20487 && iVar1 < Global_262145.f_20495)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_20488 && iVar1 < Global_262145.f_20496)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_20489 && iVar1 < Global_262145.f_20497)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_20490 && iVar1 < Global_262145.f_20498)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_20491 && iVar1 < Global_262145.f_20499)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_20492 && iVar1 < Global_262145.f_20500)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_21264 && iVar1 < Global_262145.f_21284)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_21276 && iVar1 < Global_262145.f_21296)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_21267 && iVar1 < Global_262145.f_21287)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_21277 && iVar1 < Global_262145.f_21297)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_21265 && iVar1 < Global_262145.f_21285)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_21281 && iVar1 < Global_262145.f_21301)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_21279 && iVar1 < Global_262145.f_21299)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_21280 && iVar1 < Global_262145.f_21300)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_21275 && iVar1 < Global_262145.f_21295)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_21282 && iVar1 < Global_262145.f_21302)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_21278 && iVar1 < Global_262145.f_21298)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_21274 && iVar1 < Global_262145.f_21294)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_21266 && iVar1 < Global_262145.f_21286)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_21268 && iVar1 < Global_262145.f_21288)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_21269 && iVar1 < Global_262145.f_21289)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_21270 && iVar1 < Global_262145.f_21290)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_21271 && iVar1 < Global_262145.f_21291)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_21272 && iVar1 < Global_262145.f_21292)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_21273 && iVar1 < Global_262145.f_21293)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_22225 && iVar1 < Global_262145.f_22253)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_22226 && iVar1 < Global_262145.f_22254)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_22227 && iVar1 < Global_262145.f_22255)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_22228 && iVar1 < Global_262145.f_22256)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_22229 && iVar1 < Global_262145.f_22257)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_22230 && iVar1 < Global_262145.f_22258)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_22231 && iVar1 < Global_262145.f_22259)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_22232 && iVar1 < Global_262145.f_22260)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_22233 && iVar1 < Global_262145.f_22261)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_22234 && iVar1 < Global_262145.f_22262)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_22235 && iVar1 < Global_262145.f_22263)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_22236 && iVar1 < Global_262145.f_22264)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_22237 && iVar1 < Global_262145.f_22265)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_22238 && iVar1 < Global_262145.f_22266)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_22239 && iVar1 < Global_262145.f_22267)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_22240 && iVar1 < Global_262145.f_22268)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_22241 && iVar1 < Global_262145.f_22269)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_22242 && iVar1 < Global_262145.f_22270)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_22243 && iVar1 < Global_262145.f_22271)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_22244 && iVar1 < Global_262145.f_22272)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_22245 && iVar1 < Global_262145.f_22273)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_22246 && iVar1 < Global_262145.f_22274)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_22247 && iVar1 < Global_262145.f_22275)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_22248 && iVar1 < Global_262145.f_22276)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_22249 && iVar1 < Global_262145.f_22277)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_22250 && iVar1 < Global_262145.f_22278)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_22251 && iVar1 < Global_262145.f_22279)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_22252 && iVar1 < Global_262145.f_22280)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_23432 && iVar1 < Global_262145.f_23448)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_23433 && iVar1 < Global_262145.f_23449)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_23437 && iVar1 < Global_262145.f_23453)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_23440 && iVar1 < Global_262145.f_23456)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_23445 && iVar1 < Global_262145.f_23461)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_23439 && iVar1 < Global_262145.f_23455)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_23431 && iVar1 < Global_262145.f_23447)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_23438 && iVar1 < Global_262145.f_23454)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_23444 && iVar1 < Global_262145.f_23460)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_23443 && iVar1 < Global_262145.f_23459)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_23434 && iVar1 < Global_262145.f_23450)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_23436 && iVar1 < Global_262145.f_23452)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_23446 && iVar1 < Global_262145.f_23462)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_23442 && iVar1 < Global_262145.f_23458)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_23435 && iVar1 < Global_262145.f_23451)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_23441 && iVar1 < Global_262145.f_23457)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_23522 && iVar1 < Global_262145.f_23509)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_23523 && iVar1 < Global_262145.f_23510)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_23528 && iVar1 < Global_262145.f_23515)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_23527 && iVar1 < Global_262145.f_23514)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_23525 && iVar1 < Global_262145.f_23512)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_23531 && iVar1 < Global_262145.f_23518)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_23533 && iVar1 < Global_262145.f_23520)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_23534 && iVar1 < Global_262145.f_23521)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_23532 && iVar1 < Global_262145.f_23519)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_23524 && iVar1 < Global_262145.f_23511)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_23526 && iVar1 < Global_262145.f_23513)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_23530 && iVar1 < Global_262145.f_23517)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_23529 && iVar1 < Global_262145.f_23516)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("monster3"))
	{
	}
	else if (iParam0 == joaat("cerberus"))
	{
	}
	else if (iParam0 == joaat("cerberus2"))
	{
	}
	else if (iParam0 == joaat("cerberus3"))
	{
	}
	else if (iParam0 == joaat("brutus"))
	{
	}
	else if (iParam0 == joaat("brutus2"))
	{
	}
	else if (iParam0 == joaat("brutus3"))
	{
	}
	else if (iParam0 == joaat("scarab"))
	{
	}
	else if (iParam0 == joaat("scarab2"))
	{
	}
	else if (iParam0 == joaat("scarab3"))
	{
	}
	else if (iParam0 == joaat("imperator"))
	{
	}
	else if (iParam0 == joaat("imperator2"))
	{
	}
	else if (iParam0 == joaat("imperator3"))
	{
	}
	else if (iParam0 == joaat("zr380"))
	{
	}
	else if (iParam0 == joaat("zr3802"))
	{
	}
	else if (iParam0 == joaat("zr3803"))
	{
	}
	else if (iParam0 == joaat("impaler"))
	{
	}
	else if (iParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_25628 && iVar1 < Global_262145.f_25630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_24683 && iVar1 < Global_262145.f_24676)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_24684 && iVar1 < Global_262145.f_24677)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_24685 && iVar1 < Global_262145.f_24678)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_24686 && iVar1 < Global_262145.f_24679)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_25629 && iVar1 < Global_262145.f_25631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_24687 && iVar1 < Global_262145.f_24680)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_24688 && iVar1 < Global_262145.f_24681)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_24689 && iVar1 < Global_262145.f_24682)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_51()
{
	return 0;
}

int func_52()
{
	return 1;
}

int func_53()
{
	return 1;
}

int func_54()
{
	if (unk_0x05BEBC245254F6F2(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_55()
{
	var uVar0;
	
	if (unk_0xC29B8FF8374918FD())
	{
		if (unk_0x0A68AE586CCE49F6())
		{
			if (unk_0x3750826756EA2005())
			{
				unk_0x2AD48F3CEBA882E9(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x2BCFB39E86340DAA(&uVar0, 2);
				unk_0x2BCFB39E86340DAA(&uVar0, 4);
				unk_0x2BCFB39E86340DAA(&uVar0, 6);
				unk_0x2BCFB39E86340DAA(&Global_25, 2);
				unk_0x2BCFB39E86340DAA(&Global_25, 4);
				unk_0x2BCFB39E86340DAA(&Global_25, 6);
				unk_0x93180BE33E7149EF(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x63141F5FDACF3D9B())
				{
					uVar0 = unk_0x3278E95F94254201(866);
					unk_0x2BCFB39E86340DAA(&uVar0, 0);
					unk_0xF8B43D25409B2964(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_144765 == 2)
	{
		return 1;
	}
	else if (Global_144765 == 3)
	{
		return 0;
	}
	if (unk_0x63141F5FDACF3D9B())
	{
		if (unk_0x05EFB6A616B6FADE(unk_0x3278E95F94254201(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_56(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0x8F474E419F56E48D(iParam0);
	uVar1 = unk_0xC5D229CE54955E47(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x3CAC2741CC1A631F(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_47(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_57(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xDC5D81351D6A4DDB(Global_90688[iVar0]))
		{
			if (Global_90688[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_58(int iParam0)
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0) && unk_0x1095F403F52B42E1(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0xDC5D81351D6A4DDB(Global_90658[iVar0]) && unk_0x1095F403F52B42E1(Global_90658[iVar0], 0))
			{
				if (Global_90658[iVar0] == iParam0 && unk_0x8F474E419F56E48D(Global_90658[iVar0]) == unk_0x8F474E419F56E48D(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_59(int iParam0)
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(Global_70024.f_484[24]))
	{
		if (iParam0 == Global_70024.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xDC5D81351D6A4DDB(Global_70024.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_70024.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_60(int iParam0)
{
	int iVar0;
	
	if (!unk_0xDC5D81351D6A4DDB(iParam0))
	{
		return 145;
	}
	if (!unk_0x1095F403F52B42E1(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xDC5D81351D6A4DDB(Global_90658[iVar0]))
		{
			if (Global_90658[iVar0] == iParam0)
			{
				return Global_90668[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_61(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0xDC5D81351D6A4DDB(iParam0) || !unk_0x1095F403F52B42E1(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_62(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0x05EFB6A616B6FADE(Global_106070.f_7201[iVar9], 0))
		{
			if (unk_0xFB166837ACE44C44(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_62(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

void func_63(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_65(iParam0, 0))
		{
			func_64(iParam0, 1, 0);
			func_64(iParam0, 2, 0);
			func_64(iParam0, 3, 0);
			func_64(iParam0, 4, 0);
			func_64(iParam0, 0, 1);
			Global_70024[iParam0] = 1;
		}
	}
	else
	{
		func_64(iParam0, 0, 0);
	}
}

void func_64(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x2BCFB39E86340DAA(&(Global_106070.f_32605[iParam0]), iParam1);
	}
	else
	{
		unk_0xFA57C719261AA55D(&(Global_106070.f_32605[iParam0]), iParam1);
	}
}

bool func_65(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x05EFB6A616B6FADE(Global_106070.f_32605[iParam0], iParam1);
}

void func_66(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_70(&(Global_70024.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xDC5D81351D6A4DDB(Global_70024.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
			{
				if (unk_0x1095F403F52B42E1(Global_70024.f_139[iParam0], 0))
				{
					if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), Global_70024.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0x1F7948851FB36E88(Global_70024.f_139[iParam0], 1, 1);
				unk_0x4C842FAB634AC89E(&(Global_70024.f_139[iParam0]));
			}
		}
		Global_70024[iParam0] = 1;
		if (unk_0x05EFB6A616B6FADE(Global_70024.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_65(iParam0, 0)) && Global_70933.f_66 == 0) && Global_106070.f_32605.f_1958[Global_70024.f_555[0 /*21*/].f_14] != 0) && Global_106070.f_32605.f_1958[Global_70024.f_555[0 /*21*/].f_14] > 3) && (!func_68(0, Global_70024.f_555[0 /*21*/].f_12) || !func_68(1, Global_70024.f_555[0 /*21*/].f_12)))
			{
				func_67(&(Global_106070.f_32605.f_69[Global_70024.f_555[0 /*21*/].f_14 /*78*/]), &Global_70933);
				Global_71011 = Global_106070.f_32605.f_5591;
			}
			func_63(iParam0, 0);
		}
	}
}

void func_67(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

int func_68(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_69(&(Global_106070.f_32605.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_47(Global_106070.f_32605.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_69(var uParam0)
{
	return *uParam0;
}

int func_70(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_71(0, 1);
			uParam0->f_12 = 0;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 20);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_71(0, 1);
			uParam0->f_12 = 0;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 20);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_71(1, 1);
			uParam0->f_12 = 1;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 20);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_71(1, 2);
			uParam0->f_12 = 1;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 19);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_71(1, 1);
			uParam0->f_12 = 1;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 20);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_71(1, 2);
			uParam0->f_12 = 1;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 19);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_71(2, 1);
			uParam0->f_12 = 2;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 20);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_71(2, 1);
			uParam0->f_12 = 2;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 20);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_71(2, 1);
			uParam0->f_12 = 2;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 20);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 0);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 21);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 14);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 10);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 12);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 0);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 21);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 14);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 10);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 12);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 0);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 21);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 14);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 10);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 12);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 0);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 21);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 14);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 10);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 12);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 22);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 0);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 21);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 14);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 10);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 12);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 22);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 0);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 21);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 14);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 10);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 12);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 22);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 0);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 21);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 14);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 10);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 12);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 0);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 21);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 14);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 10);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 12);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 0);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 21);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 14);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 10);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 12);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 23);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 0);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 21);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 14);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 10);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 12);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 24);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 28);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 0);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 21);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 14);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 10);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 12);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 24);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 28);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 0);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 21);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 14);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 10);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 12);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 24);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 28);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 10);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 12);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 27);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 24);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 10);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 12);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 27);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 24);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 10);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 12);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 27);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 24);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 10);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 11);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 13);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 10);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 11);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 13);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 9);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 9);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 23);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 23);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 23);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 2);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 30);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 2);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 22);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_55())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 13);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 2);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 1);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 23);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_55())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 13);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 2);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 1);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 23);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 0);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 21);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 23);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 6);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 30);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 23);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 30);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 23);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0x05EFB6A616B6FADE(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_106070.f_32605.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_98(Global_106070.f_32605.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_106070.f_32605.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_106070.f_32605.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_106070.f_32605.f_1934[uParam0->f_14];
		}
	}
	if (unk_0x05EFB6A616B6FADE(uParam0->f_9, 19))
	{
		if (!func_98(Global_106070.f_2355.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_106070.f_2355.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_106070.f_2355.f_539.f_3589[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0x05EFB6A616B6FADE(uParam0->f_9, 20))
	{
		if (!func_98(Global_106070.f_2355.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_106070.f_2355.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_106070.f_2355.f_539.f_3589[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_71(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_17(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_72(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_72(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_106070.f_9057.f_99.f_58[128] && !Global_106070.f_9057.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_106070.f_9057.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_106070.f_9057.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

int func_73(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((unk_0xDC5D81351D6A4DDB(Global_70024.f_484[iVar0]) && !unk_0x7112137033807390(Global_70024.f_484[iVar0], 0)) && unk_0x1095F403F52B42E1(Global_70024.f_484[iVar0], 0))
		{
			unk_0x249EC6991E16D61D(iParam0, &iVar1, &iVar2);
			unk_0x249EC6991E16D61D(Global_70024.f_484[iVar0], &iVar3, &iVar4);
			if (((unk_0x8F474E419F56E48D(iParam0) == unk_0x8F474E419F56E48D(Global_70024.f_484[iVar0]) && unk_0x9373D3C23637D009(iParam0) == unk_0x9373D3C23637D009(Global_70024.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_74(int iParam0, struct<3> Param1, bool bParam4)
{
	int iVar0;
	var uVar1[3];
	int iVar5;
	int iVar6;
	
	iVar0 = unk_0x8F474E419F56E48D(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_76(iParam0, Global_70024.f_139[38], 0))
			{
				func_66(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_76(iParam0, Global_70024.f_139[43], 1))
			{
				func_66(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar5 = unk_0xA4C9135FF4C7C4D2(unk_0xA19140A5C42D8715(), &uVar1);
			iVar6 = 0;
			while (iVar6 <= (iVar5 - 1))
			{
				if (func_76(iParam0, uVar1[iVar6], 1) && func_75(unk_0xE2BBD32891C18569(uVar1[iVar6], 1), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam4 || func_98(Param1, 0f, 0f, 0f, 0)) || unk_0x499324B3EF19C288(unk_0xE2BBD32891C18569(iParam0, 1), unk_0xE2BBD32891C18569(uVar1[iVar6], 1), 1) < 10f)
					{
						unk_0x4C842FAB634AC89E(&iParam0);
						return 1;
					}
					else
					{
						return 0;
					}
				}
				iVar6++;
			}
			break;
		
		case joaat("luxor2"):
			if ((unk_0xDC5D81351D6A4DDB(Global_70024.f_484[14]) && unk_0x1095F403F52B42E1(iParam0, 0)) && unk_0x1095F403F52B42E1(Global_70024.f_484[14], 0))
			{
				if (unk_0x8F474E419F56E48D(Global_70024.f_484[14]) == joaat("luxor2") && unk_0x9373D3C23637D009(iParam0) == unk_0x9373D3C23637D009(Global_70024.f_484[14]))
				{
					func_66(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0xDC5D81351D6A4DDB(Global_70024.f_484[20]) && unk_0x1095F403F52B42E1(iParam0, 0)) && unk_0x1095F403F52B42E1(Global_70024.f_484[20], 0))
			{
				if (unk_0x8F474E419F56E48D(Global_70024.f_484[20]) == joaat("swift2") && unk_0x9373D3C23637D009(iParam0) == unk_0x9373D3C23637D009(Global_70024.f_484[20]))
				{
					func_66(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_75(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x69C0BB7D03EE045D((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x69C0BB7D03EE045D((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x69C0BB7D03EE045D((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x69C0BB7D03EE045D((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x69C0BB7D03EE045D((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_76(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((unk_0xDC5D81351D6A4DDB(iParam1) && !unk_0x7112137033807390(iParam1, 0)) && unk_0x1095F403F52B42E1(iParam1, 0))
	{
		if (bParam2)
		{
			unk_0x249EC6991E16D61D(iParam0, &iVar0, &iVar1);
			unk_0x249EC6991E16D61D(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_77(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0xDC5D81351D6A4DDB(Global_90658[iVar0]))
		{
			Global_90658[iVar0] = iParam0;
			Global_90668[iVar0] = iParam1;
			Global_90678[iVar0] = unk_0x8F474E419F56E48D(iParam0);
			if (unk_0x425CD7B17352316F(Global_90678[iVar0]))
			{
				Global_90706[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_90706[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_78(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xDC5D81351D6A4DDB(Global_90658[iVar0]))
		{
			if (iParam0 == 145 || Global_90668[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0x8F474E419F56E48D(Global_90658[iVar0]) == func_71(iParam0, iParam1))
				{
					if (!unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), Global_90658[iVar0], 0))
					{
						unk_0x1F7948851FB36E88(Global_90658[iVar0], 0, 1);
						unk_0x4C842FAB634AC89E(&(Global_90658[iVar0]));
						Global_90668[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_79(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x1095F403F52B42E1(iParam0, 0))
	{
		if (!func_88(iParam0))
		{
			if (unk_0xFEB6EEC0545AF7AA(&(uParam1->f_1)) != 0)
			{
				unk_0xAA8C8977AD74EDE5(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < unk_0x4BEB9C61619C0346())
			{
				unk_0xEEF67CF6BF9A762A(iParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (unk_0x05EFB6A616B6FADE(uParam1->f_77, func_41(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x2BCFB39E86340DAA(&(uParam1->f_77), func_41(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0x05EFB6A616B6FADE(uParam1->f_77, func_41(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x2BCFB39E86340DAA(&(uParam1->f_77), func_41(iVar1 + 1));
			}
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			unk_0x3011BD9AA6A55E80(iParam0, 0);
			if (unk_0x22D95AF01E737CA1(iParam0, 5) != -1)
			{
				unk_0x3011BD9AA6A55E80(iParam0, 1);
			}
		}
		if (unk_0x05EFB6A616B6FADE(uParam1->f_77, 13))
		{
			unk_0xB3A9D38E7EC92939(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x59E44D3D7CDB7226(iParam0);
		}
		if (unk_0x05EFB6A616B6FADE(uParam1->f_77, 12))
		{
			unk_0x1D16DEC90EA8EA37(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x26845F41B4976D8C(iParam0);
		}
		unk_0x9174BE523666C5A0(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0x8B55653F1DAE7C6F(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0x05EFB6A616B6FADE(uParam1->f_77, 15) || func_87(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_86())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		unk_0x77F6779C76C0A677(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_43(uParam1->f_66))
		{
			unk_0x75D4E913CDBD499F(iParam0, 0);
		}
		else
		{
			unk_0x75D4E913CDBD499F(iParam0, 0);
			unk_0x75D4E913CDBD499F(iParam0, uParam1->f_65);
		}
		unk_0xAB9FD40CC0E419E3(iParam0, !unk_0x05EFB6A616B6FADE(uParam1->f_77, 9));
		if (bParam2)
		{
			unk_0x14293208022014FA(iParam0, uParam1->f_70);
		}
		unk_0xD11548BD19DB1DDE(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0x88A8A1DD7BEC8EE6(iParam0, 2, unk_0x05EFB6A616B6FADE(uParam1->f_77, 28));
		unk_0x88A8A1DD7BEC8EE6(iParam0, 3, unk_0x05EFB6A616B6FADE(uParam1->f_77, 29));
		unk_0x88A8A1DD7BEC8EE6(iParam0, 0, unk_0x05EFB6A616B6FADE(uParam1->f_77, 30));
		unk_0x88A8A1DD7BEC8EE6(iParam0, 1, unk_0x05EFB6A616B6FADE(uParam1->f_77, 31));
		unk_0x42B5518F103DB03E(iParam0, unk_0x05EFB6A616B6FADE(uParam1->f_77, 10));
		if (unk_0xED7BD60FFF05A721(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0xA70C63A3E45BA678(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0x1F41816F62350826(unk_0x8F474E419F56E48D(iParam0)))
			{
				if (unk_0x8CE5E4632E631B03(unk_0x8F474E419F56E48D(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_85(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_85(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0xEF6267624B1C9336(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0x1F47C2C85A56E64C(iParam0, 1);
			}
			else
			{
				unk_0x6E76703BBC6CEB50(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_80(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0x7C197233F79C2CB8(uParam1->f_66) && !unk_0x71852D4EBD08275F(uParam1->f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0x05EFB6A616B6FADE(uParam1->f_77, func_41(iVar2 + 1)))
				{
					if (!unk_0xED6D3EA61B44622B(iParam0, iVar2 + 1))
					{
						unk_0x6202B241A8864FC2(iParam0, iVar2 + 1, 0);
					}
				}
				else if (unk_0xED6D3EA61B44622B(iParam0, iVar2 + 1))
				{
					unk_0x6202B241A8864FC2(iParam0, iVar2 + 1, 1);
				}
				iVar2++;
			}
		}
		if ((unk_0x8F474E419F56E48D(iParam0) == joaat("sheava") || unk_0x8F474E419F56E48D(iParam0) == joaat("omnis")) || unk_0x8F474E419F56E48D(iParam0) == joaat("le7b"))
		{
			if (unk_0x22D95AF01E737CA1(iParam0, 0) == -1)
			{
				unk_0x6202B241A8864FC2(iParam0, 1, 0);
			}
		}
		if (((unk_0xCA8C103FCD316F89(uParam1->f_66) && unk_0x048A0164431728BE(iParam0)) && !unk_0xD3C4AB5E628133C1(iParam0, joaat("avenger"))) && !((((Global_4456448.f_53220 == 6 || Global_4456448.f_53220 == 7) || Global_4456448.f_53220 == 18) || Global_4456448.f_53220 == 19) && Global_4456448.f_2 == 20))
		{
			if (!unk_0x05EFB6A616B6FADE(uParam1->f_77, 23))
			{
				if (unk_0x05EFB6A616B6FADE(uParam1->f_77, 22))
				{
					unk_0x37B223069072EA25(iParam0, 2);
				}
				else
				{
					unk_0x37B223069072EA25(iParam0, 3);
				}
			}
			else
			{
				unk_0x37B223069072EA25(iParam0, 4);
			}
		}
		if (unk_0x05EFB6A616B6FADE(uParam1->f_77, 27))
		{
			unk_0x305AD237D017041C(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0x305AD237D017041C(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_80(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x1095F403F52B42E1(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x857E88DF0C8EDB8B(*iParam0) == 0)
	{
		return 0;
	}
	unk_0xE8F84C99DF1C7D20(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			unk_0x8D79809AF5D42F43(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				unk_0x8D79809AF5D42F43(*iParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					unk_0xE41033B25D003A07(*iParam0, 255);
				}
				else
				{
					unk_0xE41033B25D003A07(*iParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				unk_0x8D79809AF5D42F43(*iParam0, iVar1, false);
			}
		}
		else if (unk_0x22D95AF01E737CA1(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0xF1338FDC7D6CF388(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0x1EE56D43DA30ADC6(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0x1EE56D43DA30ADC6(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0x1EE56D43DA30ADC6(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_84(unk_0x8F474E419F56E48D(*iParam0), 1) && unk_0x22D95AF01E737CA1(*iParam0, 24) != func_83(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x1EE56D43DA30ADC6(*iParam0, 24, func_83(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_82(iParam0);
	if (func_81(*iParam0))
	{
		unk_0x071AF574B483D05F(*iParam0, 1);
		unk_0x0BE3742BB3253F0E(*iParam0, 1);
	}
	return 1;
}

int func_81(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0xDC5D81351D6A4DDB(iParam0) && unk_0x1095F403F52B42E1(iParam0, 0)) && unk_0x857E88DF0C8EDB8B(iParam0) > 0)
	{
		unk_0xE8F84C99DF1C7D20(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x22D95AF01E737CA1(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0xDA155B8CE0D17A82(iParam0, iVar1, unk_0x22D95AF01E737CA1(iParam0, iVar1)), 16);
				iVar2 = unk_0xFEB6EEC0545AF7AA(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0xFEB6EEC0545AF7AA("MNU_CAGE") || iVar2 == unk_0xFEB6EEC0545AF7AA("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_82(var uParam0)
{
	switch (unk_0x8F474E419F56E48D(*uParam0))
	{
		case joaat("starling"):
			if (unk_0x22D95AF01E737CA1(*uParam0, 4) == 0)
			{
				unk_0x1EE56D43DA30ADC6(*uParam0, 13, 0, false);
			}
			else
			{
				unk_0xF1338FDC7D6CF388(*uParam0, 13);
			}
			break;
	}
}

int func_83(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0) && unk_0x1095F403F52B42E1(iParam0, 0))
	{
		switch (unk_0x8F474E419F56E48D(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
					case 0:
						return 0;
						break;
					
					case 1:
						return 1;
						break;
					
					case 2:
						return 2;
						break;
					
					case 3:
						return 3;
						break;
					
					case 4:
						return 4;
						break;
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = unk_0x512BC25CDBC94246(iParam0, 38);
		iVar1 = unk_0x512BC25CDBC94246(iParam0, 24);
		fVar2 = (unk_0xBBDA792448DB5A89(iParam1 + 1) / unk_0xBBDA792448DB5A89(iVar0));
		iVar3 = (unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_84(int iParam0, int iParam1)
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
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14092)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14093)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14091)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14094)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14096)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14095)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_18538)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_18540)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_18544)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_18541)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_18548)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_18546)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_18551)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_20493)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_20494)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
	}
	return 0;
}

void func_85(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x857E88DF0C8EDB8B(iParam0) > 0)
	{
		unk_0xE8F84C99DF1C7D20(iParam0, 0);
		iVar0 = unk_0x22D95AF01E737CA1(iParam0, 24);
		iVar1 = unk_0xB9A77CDBB0A3A5D8(iParam0, 24);
		unk_0x640840010FCF8AE8(iParam0, uParam1);
		if (unk_0x8F474E419F56E48D(iParam0) == joaat("tornado6"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			unk_0xF1338FDC7D6CF388(iParam0, 24);
		}
		else
		{
			unk_0x1EE56D43DA30ADC6(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_86()
{
	return unk_0x05BEBC245254F6F2(joaat("mpindependence"));
}

int func_87(int iParam0)
{
	var uVar0;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		if (unk_0x1095F403F52B42E1(iParam0, 0))
		{
			if (unk_0xDE26AC7E7C308E75("MPBitset", 3))
			{
				if (unk_0xAEAF59799C2F26E4(iParam0, "MPBitset"))
				{
					uVar0 = unk_0xBB4F5216F3FCA8EA(iParam0, "MPBitset");
				}
				return unk_0x05EFB6A616B6FADE(uVar0, 4);
			}
		}
	}
	return 0;
}

int func_88(int iParam0)
{
	if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
	{
		if (!func_94(unk_0xD4E735F4B6A956AC(), -1))
		{
			iParam0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
		}
	}
	if (!unk_0xDC5D81351D6A4DDB(iParam0))
	{
		return 0;
	}
	if (unk_0x7112137033807390(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0x1095F403F52B42E1(iParam0, 0))
	{
		return 0;
	}
	if (func_90(unk_0xD4E735F4B6A956AC()) == 3)
	{
		if (unk_0xDC5D81351D6A4DDB(iParam0) && unk_0x1095F403F52B42E1(iParam0, 0))
		{
			if (func_89(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_89(int iParam0)
{
	if (unk_0xDE26AC7E7C308E75("FMDeliverableID", 3))
	{
		if (unk_0xAEAF59799C2F26E4(iParam0, "FMDeliverableID"))
		{
			return unk_0xBB4F5216F3FCA8EA(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_90(int iParam0)
{
	if (func_93(iParam0) == 233)
	{
		return func_91(iParam0);
	}
	return -1;
}

int func_91(int iParam0)
{
	if (func_92(iParam0, 0))
	{
		return Global_1625435[iParam0 /*560*/].f_11.f_176;
	}
	return -1;
}

int func_92(int iParam0, int iParam1)
{
	if (Global_1625435[iParam0 /*560*/].f_11.f_33 != -1 || (iParam1 && Global_1625435[iParam0 /*560*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_93(int iParam0)
{
	if (func_92(iParam0, 0))
	{
		return Global_1625435[iParam0 /*560*/].f_11.f_33;
	}
	return -1;
}

int func_94(var uParam0, int iParam1)
{
	int iVar0;
	
	if (func_95(uParam0, 1, 1))
	{
		if (unk_0x5D7DFE2058701942(unk_0xEE978C39384D834F(uParam0), 0))
		{
			iVar0 = unk_0xCAEB6CE71A2C7212(unk_0xEE978C39384D834F(uParam0), 0);
			if (unk_0x1095F403F52B42E1(iVar0, 0))
			{
				if (unk_0xA19140A5C42D8715() == unk_0xB0D49A1F9F054602(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_95(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (unk_0xC77FA683E9BB485B(uParam0))
		{
			if (bParam1)
			{
				if (!unk_0x58E3CCF930D23BD5(uParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2437022.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_96(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_70(&(Global_70024.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0x499324B3EF19C288(Param0, Global_70024.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_66(iVar0);
			}
		}
		iVar0++;
	}
}

int func_97(var uParam0)
{
	if (func_99(uParam0))
	{
		if (unk_0x7FC99CCC73354033(uParam0->f_12.f_66))
		{
			return 1;
		}
		else
		{
			return 0;
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

bool func_98(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_99(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_47(uParam0->f_12.f_66, 0))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_75(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_100()
{
	return func_97(&(Global_96664.f_2875));
}

void func_101()
{
	func_102(&(Global_96664.f_2875));
}

void func_102(var uParam0)
{
	if (func_99(uParam0))
	{
		unk_0xCACEBBBEAD8F262E(uParam0->f_12.f_66);
	}
}

int func_103(struct<3> Param0, int iParam3)
{
	return func_104(Global_96664.f_2875.f_12.f_66, Param0, iParam3);
}

int func_104(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam4 == 1)
	{
		Param1 = { func_105() };
	}
	unk_0xDFCF5BB9A4E3B293(iParam0, &Var0, &Var3);
	if ((Var3.f_0 - Var0.f_0) > Param1.f_0)
	{
		return 0;
	}
	else if ((Var3.f_1 - Var0.f_1) > Param1.f_1)
	{
		return 0;
	}
	else if ((Var3.f_2 - Var0.f_2) > Param1.f_2)
	{
		return 0;
	}
	return 1;
}

Vector3 func_105()
{
	return 2.55f, 5.665f, 2.55f;
}

int func_106()
{
	return func_99(&(Global_96664.f_2875));
}

void func_107()
{
	unk_0xCACEBBBEAD8F262E(joaat("armytrailer2"));
	unk_0xCACEBBBEAD8F262E(joaat("packer"));
	unk_0xCACEBBBEAD8F262E(joaat("s_m_y_construct_01"));
	unk_0xCACEBBBEAD8F262E(joaat("s_m_m_security_01"));
	unk_0xCACEBBBEAD8F262E(joaat("bison2"));
	while ((((!unk_0x7FC99CCC73354033(joaat("armytrailer2")) || !unk_0x7FC99CCC73354033(joaat("packer"))) || !unk_0x7FC99CCC73354033(joaat("s_m_y_construct_01"))) || !unk_0x7FC99CCC73354033(joaat("s_m_m_security_01"))) || !unk_0x7FC99CCC73354033(joaat("bison2")))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0xDC5D81351D6A4DDB(iLocal_32))
	{
		if (unk_0xDC5D81351D6A4DDB(Global_89824[1]))
		{
			unk_0x1F7948851FB36E88(Global_89824[1], 1, 1);
			iLocal_32 = Global_89824[1];
			unk_0x5941346047B1E7C4(iLocal_32);
		}
		else
		{
			iLocal_32 = unk_0x48CFBECB146FD1A1(joaat("armytrailer2"), 919.303f, -1553.88f, 29.7789f, 167.1917f, 1, 1, 0);
			unk_0x5941346047B1E7C4(iLocal_32);
		}
	}
	if (!unk_0xDC5D81351D6A4DDB(iLocal_33))
	{
		if (unk_0xDC5D81351D6A4DDB(Global_89824[2]))
		{
			unk_0x1F7948851FB36E88(Global_89824[2], 1, 1);
			iLocal_33 = Global_89824[2];
			unk_0x0BE3742BB3253F0E(iLocal_33, 1);
			unk_0x14293208022014FA(iLocal_33, 7);
			func_110(iLocal_33, -1);
			func_109(iLocal_33, -1);
		}
		else
		{
			iLocal_33 = unk_0x48CFBECB146FD1A1(joaat("packer"), 919.303f, -1553.88f, 29.7789f, 167.1917f, 1, 1, 0);
			unk_0x0BE3742BB3253F0E(iLocal_33, 1);
			unk_0x14293208022014FA(iLocal_33, 7);
			func_110(iLocal_33, -1);
			func_109(iLocal_33, -1);
		}
	}
	unk_0x1000CED8F8C4B6AB(iLocal_33, iLocal_32, 0.5f);
	unk_0xA5DE74AE39867B03(joaat("armytrailer2"));
	unk_0xA5DE74AE39867B03(joaat("packer"));
	unk_0xA5DE74AE39867B03(joaat("bison2"));
	if (!unk_0xDC5D81351D6A4DDB(iLocal_35[0]))
	{
		if (unk_0xDC5D81351D6A4DDB(Global_89824.f_9[0]))
		{
			unk_0x1F7948851FB36E88(Global_89824.f_9[0], 1, 1);
			iLocal_35[0] = Global_89824.f_9[0];
			unk_0xDFA901280292A2FB(iLocal_35[0], iLocal_302);
			func_108(iLocal_35[0], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x1F4E5EFBFE503FB3(iLocal_35[0], 1);
		}
		else
		{
			iLocal_35[0] = unk_0x35C6E06B120EB2E3(26, joaat("s_m_y_construct_01"), 912.34f, -1543.297f, 29.6469f, 16.169f, 1, 1);
			unk_0xDFA901280292A2FB(iLocal_35[0], iLocal_302);
			if (unk_0xCFA037D3F2BAF3E3(912.3f, -1542.6f, 30.4f, 3f, 0))
			{
				unk_0x0452872834372353(iLocal_35[0], 912.3f, -1542.6f, 30.4f, 5f, 0);
			}
			unk_0x1F4E5EFBFE503FB3(iLocal_35[0], 1);
			func_108(iLocal_35[0], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
		}
	}
	if (!unk_0xDC5D81351D6A4DDB(iLocal_35[1]))
	{
		if (unk_0xDC5D81351D6A4DDB(Global_89824.f_9[1]))
		{
			unk_0x1F7948851FB36E88(Global_89824.f_9[1], 1, 1);
			iLocal_35[1] = Global_89824.f_9[1];
			unk_0xDFA901280292A2FB(iLocal_35[1], iLocal_302);
			func_108(iLocal_35[1], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x1F4E5EFBFE503FB3(iLocal_35[1], 1);
		}
		else
		{
			iLocal_35[1] = unk_0x35C6E06B120EB2E3(26, joaat("s_m_y_construct_01"), 917.5028f, -1517.401f, 29.9673f, 158.5738f, 1, 1);
			unk_0xDFA901280292A2FB(iLocal_35[1], iLocal_302);
			if (unk_0xCFA037D3F2BAF3E3(917.5028f, -1517.401f, 29.9673f, 3f, 0))
			{
				unk_0x0452872834372353(iLocal_35[1], 917.5028f, -1517.401f, 29.9673f, 5f, 0);
			}
			func_108(iLocal_35[1], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x1F4E5EFBFE503FB3(iLocal_35[1], 1);
		}
	}
	if (!unk_0xDC5D81351D6A4DDB(iLocal_35[2]))
	{
		if (unk_0xDC5D81351D6A4DDB(Global_89824.f_9[2]))
		{
			unk_0x1F7948851FB36E88(Global_89824.f_9[2], 1, 1);
			iLocal_35[2] = Global_89824.f_9[2];
			unk_0xDFA901280292A2FB(iLocal_35[2], iLocal_302);
			func_108(iLocal_35[2], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x1F4E5EFBFE503FB3(iLocal_35[2], 1);
		}
		else
		{
			iLocal_35[2] = unk_0x35C6E06B120EB2E3(26, joaat("s_m_y_construct_01"), 869.6423f, -1541.423f, 29.2516f, 346.9848f, 1, 1);
			unk_0xDFA901280292A2FB(iLocal_35[2], iLocal_302);
			if (unk_0xCFA037D3F2BAF3E3(869.6423f, -1541.423f, 29.2516f, 3f, 0))
			{
				unk_0x0452872834372353(iLocal_35[2], 869.6423f, -1541.423f, 29.2516f, 5f, 0);
			}
			func_108(iLocal_35[2], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x1F4E5EFBFE503FB3(iLocal_35[2], 1);
		}
	}
	if (!unk_0xDC5D81351D6A4DDB(iLocal_35[3]))
	{
		if (unk_0xDC5D81351D6A4DDB(Global_89824.f_9[3]))
		{
			unk_0x1F7948851FB36E88(Global_89824.f_9[3], 1, 1);
			iLocal_35[3] = Global_89824.f_9[3];
			unk_0xDFA901280292A2FB(iLocal_35[3], iLocal_302);
			func_108(iLocal_35[3], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x1F4E5EFBFE503FB3(iLocal_35[3], 1);
		}
		else
		{
			iLocal_35[3] = unk_0x35C6E06B120EB2E3(26, joaat("s_m_y_construct_01"), 884.3046f, -1573.188f, 29.8247f, 182.9722f, 1, 1);
			unk_0xDFA901280292A2FB(iLocal_35[3], iLocal_302);
			if (unk_0xCFA037D3F2BAF3E3(884.3046f, -1573.188f, 29.8247f, 3f, 0))
			{
				unk_0x0452872834372353(iLocal_35[3], 884.3046f, -1573.188f, 29.8247f, 5f, 0);
			}
			func_108(iLocal_35[3], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x1F4E5EFBFE503FB3(iLocal_35[3], 1);
		}
	}
	if (!unk_0xDC5D81351D6A4DDB(iLocal_35[4]))
	{
		if (unk_0xDC5D81351D6A4DDB(Global_89824.f_9[4]))
		{
			unk_0x1F7948851FB36E88(Global_89824.f_9[4], 1, 1);
			iLocal_35[4] = Global_89824.f_9[4];
			unk_0xDFA901280292A2FB(iLocal_35[4], iLocal_302);
			func_108(iLocal_35[4], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x1F4E5EFBFE503FB3(iLocal_35[4], 1);
		}
		else
		{
			iLocal_35[4] = unk_0x35C6E06B120EB2E3(26, joaat("s_m_y_construct_01"), 903.8805f, -1575.02f, 29.8327f, 308.1952f, 1, 1);
			unk_0xDFA901280292A2FB(iLocal_35[4], iLocal_302);
			if (unk_0xCFA037D3F2BAF3E3(903.8805f, -1575.02f, 29.8327f, 3f, 0))
			{
				unk_0x0452872834372353(iLocal_35[4], 903.8805f, -1575.02f, 29.8327f, 5f, 0);
			}
			func_108(iLocal_35[4], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x1F4E5EFBFE503FB3(iLocal_35[4], 1);
		}
	}
	if (!unk_0xDC5D81351D6A4DDB(iLocal_35[5]))
	{
		if (unk_0xDC5D81351D6A4DDB(Global_89824.f_9[5]))
		{
			unk_0x1F7948851FB36E88(Global_89824.f_9[5], 1, 1);
			iLocal_35[5] = Global_89824.f_9[5];
			unk_0xDFA901280292A2FB(iLocal_35[5], iLocal_302);
			func_108(iLocal_35[5], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x1F4E5EFBFE503FB3(iLocal_35[5], 1);
		}
		else
		{
			iLocal_35[5] = unk_0x35C6E06B120EB2E3(26, joaat("s_m_y_construct_01"), 906.2186f, -1575.108f, 29.8125f, 55.9906f, 1, 1);
			unk_0xDFA901280292A2FB(iLocal_35[5], iLocal_302);
			if (unk_0xCFA037D3F2BAF3E3(906.2186f, -1575.108f, 29.8125f, 3f, 0))
			{
				unk_0x0452872834372353(iLocal_35[5], 906.2186f, -1575.108f, 29.8125f, 5f, 0);
			}
			func_108(iLocal_35[5], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x1F4E5EFBFE503FB3(iLocal_35[5], 1);
		}
	}
	if (!unk_0xDC5D81351D6A4DDB(iLocal_35[6]))
	{
		if (unk_0xDC5D81351D6A4DDB(Global_89824.f_9[8]))
		{
			unk_0x1F7948851FB36E88(Global_89824.f_9[8], 1, 1);
			iLocal_35[6] = Global_89824.f_9[8];
			unk_0xDFA901280292A2FB(iLocal_35[6], iLocal_302);
			func_108(iLocal_35[6], 20f, 5f, 120f, -45f, 45f);
			unk_0x1F4E5EFBFE503FB3(iLocal_35[6], 1);
		}
		else
		{
			iLocal_35[6] = unk_0x35C6E06B120EB2E3(26, joaat("s_m_y_construct_01"), 889.285f, -1561.485f, 29.6539f, 22.2456f, 1, 1);
			unk_0xDFA901280292A2FB(iLocal_35[6], iLocal_302);
			if (unk_0xCFA037D3F2BAF3E3(889.285f, -1561.485f, 29.6539f, 3f, 0))
			{
				unk_0x0452872834372353(iLocal_35[6], 889.285f, -1561.485f, 29.6539f, 5f, 0);
			}
			func_108(iLocal_35[6], 20f, 5f, 120f, -45f, 45f);
			unk_0x1F4E5EFBFE503FB3(iLocal_35[6], 1);
		}
	}
	if (!unk_0xDC5D81351D6A4DDB(iLocal_43[0]))
	{
		if (unk_0xDC5D81351D6A4DDB(Global_89824.f_9[6]))
		{
			unk_0x1F7948851FB36E88(Global_89824.f_9[6], 1, 1);
			iLocal_43[0] = Global_89824.f_9[6];
			unk_0xDFA901280292A2FB(iLocal_43[0], iLocal_303);
			func_108(iLocal_43[0], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x1F4E5EFBFE503FB3(iLocal_43[0], 1);
			unk_0xF0188A1B49D79AF7(iLocal_43[0], joaat("weapon_pistol"), 100, 0, 0);
			unk_0x4FE3554969185993(iLocal_43[0], "S_M_M_GENERICSECURITY_01_LATINO_MINI_01");
		}
		else
		{
			iLocal_43[0] = unk_0x35C6E06B120EB2E3(26, joaat("s_m_m_security_01"), 863.1551f, -1564.572f, 29.3231f, 130.7946f, 1, 1);
			unk_0xDFA901280292A2FB(iLocal_43[0], iLocal_303);
			func_108(iLocal_43[0], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x1F4E5EFBFE503FB3(iLocal_43[0], 1);
			unk_0xF0188A1B49D79AF7(iLocal_43[0], joaat("weapon_pistol"), 100, 0, 0);
			unk_0x4FE3554969185993(iLocal_43[0], "S_M_M_GENERICSECURITY_01_LATINO_MINI_01");
		}
	}
	if (!unk_0xDC5D81351D6A4DDB(iLocal_43[1]))
	{
		if (unk_0xDC5D81351D6A4DDB(Global_89824.f_9[7]))
		{
			unk_0x1F7948851FB36E88(Global_89824.f_9[7], 1, 1);
			iLocal_43[1] = Global_89824.f_9[7];
			unk_0xDFA901280292A2FB(iLocal_43[1], iLocal_303);
			func_108(iLocal_43[1], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x1F4E5EFBFE503FB3(iLocal_43[1], 1);
			unk_0xF0188A1B49D79AF7(iLocal_43[1], joaat("weapon_pistol"), 100, 0, 0);
			unk_0x4FE3554969185993(iLocal_43[1], "S_M_M_GENERICSECURITY_01_LATINO_MINI_02");
		}
		else
		{
			iLocal_43[1] = unk_0x35C6E06B120EB2E3(26, joaat("s_m_m_security_01"), 940.2881f, -1573.877f, 29.3866f, 269.1856f, 1, 1);
			unk_0xDFA901280292A2FB(iLocal_43[1], iLocal_303);
			func_108(iLocal_43[1], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x1F4E5EFBFE503FB3(iLocal_43[1], 1);
			unk_0xF0188A1B49D79AF7(iLocal_43[1], joaat("weapon_pistol"), 100, 0, 0);
			unk_0x4FE3554969185993(iLocal_43[1], "S_M_M_GENERICSECURITY_01_LATINO_MINI_02");
		}
	}
	unk_0xA5DE74AE39867B03(joaat("s_m_y_construct_01"));
	unk_0xA5DE74AE39867B03(joaat("s_m_m_security_01"));
}

void func_108(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5)
{
	if (!unk_0x4915F4759304D5CF(iParam0))
	{
		unk_0xF26F4E13A8AEC5EB(iParam0, fParam1);
		unk_0x75D8561E738F40B4(iParam0, iParam2);
		unk_0x753D02CBEE1BB1AC(iParam0, (fParam3 / 2f));
		unk_0xB7DFE0AB2CC355C4(iParam0, iParam4);
		unk_0xF148D9E6972D9816(iParam0, iParam5);
	}
}

void func_109(int iParam0, int iParam1)
{
	Global_56192 = iParam0;
	Global_56193 = iParam1;
}

void func_110(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_56194 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_68276)
	{
		if (iParam1 == -1 || Global_68277[iVar0 /*9*/] == iParam1)
		{
			if (Global_68277[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_68277[iVar0 /*9*/].f_6 = iParam0;
				Global_68277[iVar0 /*9*/].f_7 = 1;
				Global_68277[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_111()
{
	iLocal_63 = 0;
	while (iLocal_63 <= 6)
	{
		if (unk_0xDC5D81351D6A4DDB(iLocal_35[iLocal_63]) && unk_0x82384F63D814C864(iLocal_35[iLocal_63], 1))
		{
			unk_0x680F17660351F21B(&(iLocal_35[iLocal_63]));
		}
		iLocal_63++;
	}
	if (unk_0xDC5D81351D6A4DDB(iLocal_43[0]) && unk_0x82384F63D814C864(iLocal_43[0], 1))
	{
		unk_0x680F17660351F21B(&(iLocal_43[0]));
	}
	if (unk_0xDC5D81351D6A4DDB(iLocal_43[1]) && unk_0x82384F63D814C864(iLocal_43[1], 1))
	{
		unk_0x680F17660351F21B(&(iLocal_43[1]));
	}
	if (unk_0xDC5D81351D6A4DDB(iLocal_46) && unk_0x82384F63D814C864(iLocal_46, 1))
	{
		unk_0x680F17660351F21B(&iLocal_46);
	}
	if (unk_0xDC5D81351D6A4DDB(iLocal_47) && unk_0x82384F63D814C864(iLocal_47, 1))
	{
		unk_0x680F17660351F21B(&iLocal_47);
	}
	if (unk_0xDC5D81351D6A4DDB(iLocal_48) && unk_0x82384F63D814C864(iLocal_48, 1))
	{
		unk_0x680F17660351F21B(&iLocal_48);
	}
	if (unk_0xDC5D81351D6A4DDB(iLocal_49) && unk_0x82384F63D814C864(iLocal_49, 1))
	{
		unk_0x680F17660351F21B(&iLocal_49);
	}
	if (!func_30())
	{
		unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), 519.1906f, -2980.994f, 5.0443f, 1, 0, 0, 1);
		unk_0x92DDCF53AA47A63D(unk_0xA19140A5C42D8715(), 270.1911f);
	}
	if (unk_0xDC5D81351D6A4DDB(iLocal_32) && unk_0x82384F63D814C864(iLocal_32, 1))
	{
		unk_0x4C842FAB634AC89E(&iLocal_32);
	}
	if (unk_0xDC5D81351D6A4DDB(Global_89824[3]))
	{
		unk_0x1F7948851FB36E88(Global_89824[3], 1, 0);
		unk_0x4C842FAB634AC89E(&(Global_89824[3]));
	}
	if (unk_0xDC5D81351D6A4DDB(iLocal_33) && unk_0x82384F63D814C864(iLocal_33, 1))
	{
		unk_0x4C842FAB634AC89E(&iLocal_33);
	}
	unk_0x4DC885EA8D6AF7FC("cellphone@str");
	unk_0x4DC885EA8D6AF7FC("misscarsteal4@director_grip");
	unk_0xEEF61BF551977B0E("FHPRB_START");
	unk_0xEEF61BF551977B0E("FHPRB_TRUCK");
	unk_0xEEF61BF551977B0E("FHPRB_COPS");
	unk_0xEEF61BF551977B0E("FHPRB_LOST");
	unk_0xEEF61BF551977B0E("FHPRB_STOP");
	unk_0xFDD15D670AD33E10(889.5f, -1553.8f, 30f, 150f, 1, 0, 0, 0);
}

void func_112()
{
	if (unk_0xCE3CB618AFE55EFB(uLocal_58))
	{
		unk_0xE1623437A3194332(&uLocal_58);
	}
	if (unk_0xCE3CB618AFE55EFB(uLocal_59))
	{
		unk_0xE1623437A3194332(&uLocal_59);
	}
	if (unk_0xCE3CB618AFE55EFB(uLocal_60))
	{
		unk_0xE1623437A3194332(&uLocal_60);
	}
	if (unk_0xCE3CB618AFE55EFB(uLocal_61))
	{
		unk_0xE1623437A3194332(&uLocal_61);
	}
}

void func_113()
{
	Global_14688 = 0;
	func_114();
}

void func_114()
{
	unk_0xB4E5B1A6FE923ECB();
	Global_16833 = 0;
	if ((unk_0xB39808C1DCE0DCFA() || Global_14513.f_1 == 9) || Global_14512 == 1)
	{
		unk_0xA8B97F91CBDE376C(0);
		Global_15822 = 6;
		Global_14513.f_1 = 3;
		return;
	}
	if (unk_0x904275961B875DEB())
	{
		unk_0xA8B97F91CBDE376C(1);
		Global_15822 = 6;
		return;
	}
}

void func_115()
{
	func_133();
	if (iLocal_62 == 0)
	{
		if (iLocal_304 == 1)
		{
			func_34();
			iLocal_304 = 0;
		}
		iLocal_305 = 0;
		iLocal_314 = 0;
		iLocal_469 = 0;
		iLocal_109 = 0;
		iLocal_110 = 0;
		unk_0x9BB7BCDF2AC2D6F9(5);
		unk_0x4DC885EA8D6AF7FC("cellphone@str");
		unk_0x4DC885EA8D6AF7FC("misscarsteal4@director_grip");
		if (!unk_0x3A83743561B4F70C())
		{
			unk_0x745C10318A2C7CAE(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1));
			unk_0x70C1F5AA59767FE6(800);
		}
		unk_0xBF6EED5D6E0CD9BF(1f);
		unk_0xE061C3261E51F663(10f, 5f, 4);
		iLocal_396 = 1;
		iLocal_62 = 1;
	}
	if (iLocal_62 == 1)
	{
		func_132(&uLocal_137, 3, 0, "LESTER", 0, 1);
		if (func_14() == 0)
		{
			func_132(&uLocal_137, 0, unk_0xA19140A5C42D8715(), "MICHAEL", 0, 1);
		}
		if (func_14() == 1)
		{
			func_132(&uLocal_137, 1, unk_0xA19140A5C42D8715(), "FRANKLIN", 0, 1);
		}
		if (func_14() == 2)
		{
			func_132(&uLocal_137, 2, unk_0xA19140A5C42D8715(), "TREVOR", 0, 1);
		}
		iLocal_62 = 2;
	}
	if (iLocal_62 == 2)
	{
		if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) == 0)
		{
			if (func_14() == 0)
			{
				if (func_122(&uLocal_137, 12, "FHPBAUD", "FHPB_CHAT1", 7, 1, 0, 0, 0))
				{
					unk_0xE061C3261E51F663(5f, 5f, 4);
					unk_0xC1B1E9A034A63A62(0);
					iLocal_62 = 3;
				}
			}
			if (func_14() == 1)
			{
				if (func_122(&uLocal_137, 12, "FHPBAUD", "FHPB_CHAT3", 7, 1, 0, 0, 0))
				{
					unk_0xE061C3261E51F663(5f, 5f, 4);
					unk_0xC1B1E9A034A63A62(0);
					iLocal_62 = 3;
				}
			}
			if (func_14() == 2)
			{
				if (func_122(&uLocal_137, 12, "FHPBAUD", "FHPB_CHAT2", 7, 1, 0, 0, 0))
				{
					unk_0xE061C3261E51F663(5f, 5f, 4);
					unk_0xC1B1E9A034A63A62(0);
					iLocal_62 = 3;
				}
			}
		}
	}
	if (iLocal_62 == 3)
	{
		if (!unk_0xCE3CB618AFE55EFB(uLocal_59))
		{
			if (!func_121())
			{
				if (unk_0x83666F9FB8FEBD4B() > 10500)
				{
					uLocal_59 = func_119(Local_116, 1);
				}
			}
		}
		if (func_121())
		{
			iLocal_62 = 4;
		}
	}
	if (iLocal_62 == 4)
	{
		if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) == 0)
		{
			if (unk_0x1095F403F52B42E1(iLocal_33, 0))
			{
				if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iLocal_33, 0))
				{
					if (unk_0xD53D19F97BC843F7(iLocal_33))
					{
						if (unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), Local_116, 4f, 4f, 2f, 1, 1, 2))
						{
							if (func_117(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), 4f, 3, 0.5f, 0, 1, 0))
							{
								unk_0x9444470D6D9ADB88("FHPRB_STOP");
								if (unk_0xCE3CB618AFE55EFB(uLocal_59))
								{
									unk_0xE1623437A3194332(&uLocal_59);
								}
								unk_0xE061C3261E51F663(5f, 5f, 4);
								func_116(0, -1);
								iLocal_62 = 0;
								iLocal_28 = 5;
							}
						}
					}
				}
			}
		}
	}
}

void func_116(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_56189)
	{
	}
	Global_56189 = 0;
	if (bParam0)
	{
		Global_56190 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_68276)
		{
			if (Global_56406[Global_68277[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_68277[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_68276)
		{
			if (Global_68277[iVar0 /*9*/] > 0)
			{
				if (Global_68277[iVar0 /*9*/] == iParam1)
				{
					Global_68277[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

int func_117(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0xD481A812073CCF02(0, 71, 1);
	unk_0xD481A812073CCF02(0, 72, 1);
	unk_0xD481A812073CCF02(0, 76, 1);
	unk_0xD481A812073CCF02(0, 73, 1);
	unk_0xD481A812073CCF02(0, 59, 1);
	unk_0xD481A812073CCF02(0, 60, 1);
	if (bParam5)
	{
		unk_0xD481A812073CCF02(0, 75, 1);
	}
	unk_0xD481A812073CCF02(0, 80, 1);
	if (!bParam6)
	{
		unk_0xD481A812073CCF02(0, 69, 1);
		unk_0xD481A812073CCF02(0, 70, 1);
		unk_0xD481A812073CCF02(0, 68, 1);
	}
	unk_0xD481A812073CCF02(0, 74, 1);
	unk_0xD481A812073CCF02(0, 86, 1);
	unk_0xD481A812073CCF02(0, 81, 1);
	unk_0xD481A812073CCF02(0, 82, 1);
	unk_0xD481A812073CCF02(0, 138, 1);
	unk_0xD481A812073CCF02(0, 136, 1);
	unk_0xD481A812073CCF02(0, 114, 1);
	unk_0xD481A812073CCF02(0, 107, 1);
	unk_0xD481A812073CCF02(0, 110, 1);
	unk_0xD481A812073CCF02(0, 89, 1);
	unk_0xD481A812073CCF02(0, 89, 1);
	unk_0xD481A812073CCF02(0, 87, 1);
	unk_0xD481A812073CCF02(0, 88, 1);
	unk_0xD481A812073CCF02(0, 113, 1);
	unk_0xD481A812073CCF02(0, 115, 1);
	unk_0xD481A812073CCF02(0, 116, 1);
	unk_0xD481A812073CCF02(0, 117, 1);
	unk_0xD481A812073CCF02(0, 118, 1);
	unk_0xD481A812073CCF02(0, 119, 1);
	unk_0xD481A812073CCF02(0, 131, 1);
	unk_0xD481A812073CCF02(0, 132, 1);
	unk_0xD481A812073CCF02(0, 123, 1);
	unk_0xD481A812073CCF02(0, 126, 1);
	unk_0xD481A812073CCF02(0, 129, 1);
	unk_0xD481A812073CCF02(0, 130, 1);
	unk_0xD481A812073CCF02(0, 133, 1);
	unk_0xD481A812073CCF02(0, 134, 1);
	unk_0x8BCFD05DF9BB6004();
	func_118(iParam0);
	if ((unk_0xFD34717937104F1C() - Global_29) > 500)
	{
		unk_0x0185AEECD1FF63F3(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0xFD34717937104F1C();
	if (!unk_0x7112137033807390(iParam0, 0))
	{
		if (unk_0x69C0BB7D03EE045D(unk_0xEAA5CEF8875FEEED(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_118(int iParam0)
{
	if (!unk_0x7112137033807390(iParam0, 0))
	{
		if (unk_0xE276FD46E2FAC906(iParam0))
		{
			if (unk_0x7FBA23EA56BC811C(iParam0))
			{
				unk_0xAA99F8210C8FE6FD(iParam0, 0);
			}
		}
	}
}

var func_119(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0xA70969818F182A36(Param0);
	unk_0x575CF00E129E0CE1(uVar0, func_120(unk_0x4C9BACA8D249CB13(), 1f, 1f));
	unk_0x3E46F0AAE4B470FB(uVar0, iParam3);
	return uVar0;
}

float func_120(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_121()
{
	if (Global_15822 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_122(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_131(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15870 = 0;
	Global_15829 = 1;
	Global_15836 = 0;
	Global_15831 = 0;
	Global_16813 = 0;
	Global_16815 = 0;
	Global_16819 = 0;
	Global_15827 = 0;
	Global_15874 = 0;
	Global_15876 = 0;
	if (iParam5 == 1)
	{
		Global_15834 = 1;
	}
	else
	{
		Global_15834 = 0;
	}
	Global_2621441 = 0;
	return func_123(sParam3, iParam4, bParam8);
}

int func_123(char* sParam0, int iParam1, bool bParam2)
{
	Global_15823 = 0;
	if (Global_15822 == 0 || Global_15824 == 2)
	{
		if (Global_15822 != 0)
		{
			if (iParam1 > Global_15824)
			{
				if (Global_15829 == 0)
				{
					unk_0xA8B97F91CBDE376C(0);
					Global_14513.f_1 = 3;
					Global_15822 = 0;
					Global_15823 = 1;
					Global_15875 = 0;
					Global_15818 = 0;
					Global_15819 = 0;
					Global_15833 = 0;
					Global_15832 = 0;
					Global_14512 = 0;
				}
				else
				{
					func_114();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x904275961B875DEB())
		{
			return 0;
		}
		if (func_130(8, -1))
		{
			return 0;
		}
		Global_15898 = { Global_15892 };
		func_129();
		Global_15111 = { Global_15276 };
		Global_15828 = Global_15829;
		Global_15835 = Global_15836;
		Global_2621442 = Global_2621441;
		Global_15837 = { Global_15853 };
		Global_15830 = Global_15831;
		Global_16812 = Global_16813;
		Global_16820 = { Global_16826 };
		Global_16814 = Global_16815;
		Global_16816 = Global_16817;
		Global_16818 = Global_16819;
		Global_15441.f_370 = Global_16811;
		Global_15441.f_368 = Global_16809;
		Global_15441.f_369 = Global_16810;
		Global_15818 = Global_15819;
		if (Global_15828)
		{
			unk_0xFA57C719261AA55D(&Global_2383, 20);
			unk_0xFA57C719261AA55D(&Global_2384, 17);
			unk_0xFA57C719261AA55D(&Global_2385, 0);
			if (bParam2)
			{
				func_128();
				if (Global_3188[Global_14513 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14513.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14479 == 1)
			{
				return 0;
			}
			if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
			{
				if (unk_0x6625F609B391348E(unk_0xA19140A5C42D8715()))
				{
					return 0;
				}
				if (func_127())
				{
					return 0;
				}
				if (unk_0x331BE13D31DFA36A(unk_0xA19140A5C42D8715()))
				{
					return 0;
				}
				if (unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715()))
				{
					return 0;
				}
				if (unk_0x3977B7555441B490(unk_0xA19140A5C42D8715()))
				{
					return 0;
				}
				if (unk_0x45F0F396A506B7CD(unk_0xA19140A5C42D8715(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_71205)
				{
					if (unk_0x4374EED90C523366(unk_0xA19140A5C42D8715()))
					{
						return 0;
					}
					if (unk_0x426122A77B3391B0(unk_0xD4E735F4B6A956AC()))
					{
						return 0;
					}
					if (unk_0x1CD6AC2CF787DFCB(unk_0xA19140A5C42D8715()))
					{
						return 0;
					}
					if (unk_0x53B0513B47405A70(unk_0xD4E735F4B6A956AC()))
					{
						return 0;
					}
				}
			}
			if (func_126())
			{
				return 0;
			}
			else
			{
				switch (Global_14513.f_1)
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
				if (unk_0x05EFB6A616B6FADE(Global_2383, 9))
				{
					return 0;
				}
			}
			func_125();
			Global_15832 = bParam2;
		}
		Global_15824 = iParam1;
		StringCopy(&Global_15441, sParam0, 24);
		Global_14688 = 0;
		func_124();
		return 1;
	}
	if (Global_15822 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15824 || iParam1 == Global_15824)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_114();
	}
	return 0;
}

void func_124()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14690[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xA8B97F91CBDE376C(0);
	Global_15822 = 1;
}

void func_125()
{
	Global_15875 = Global_15874;
	Global_15869 = Global_15870;
	Global_15916 = { Global_15904 };
	Global_15922 = { Global_15910 };
	Global_15877 = Global_15876;
	Global_15946 = { Global_15928 };
	Global_15952 = { Global_15934 };
	Global_15958 = { Global_15940 };
	Global_15964 = { Global_15970 };
	Global_1698 = Global_1699;
	Global_1700 = Global_1701;
	Global_15833 = Global_15834;
	Global_15835 = Global_15836;
	Global_15837 = { Global_15853 };
	Global_15826 = Global_15827;
	Global_16838 = 0;
	Global_15871 = 0;
	Global_15872 = 0;
	unk_0xFA57C719261AA55D(&Global_2384, 16);
}

int func_126()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_127()
{
	int iVar0;
	int iVar1;
	
	if (Global_71205)
	{
		iVar0 = 0;
		unk_0xF990CFC0F1D94A39(unk_0xA19140A5C42D8715(), &iVar1, 1);
		if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xEA8B3B18A25152B5() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		if (unk_0x70F79B0BFBB1E7AC(unk_0xA19140A5C42D8715(), 78, 1))
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

void func_128()
{
	if (func_16(14))
	{
		if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
		{
			if (unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()) == Global_106070.f_28022[0 /*29*/])
			{
				Global_14513 = 0;
			}
			else if (unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()) == Global_106070.f_28022[1 /*29*/])
			{
				Global_14513 = 1;
			}
			else if (unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()) == Global_106070.f_28022[2 /*29*/])
			{
				Global_14513 = 2;
			}
			else
			{
				Global_14513 = 0;
			}
		}
	}
	else
	{
		Global_14513 = func_14();
		if (Global_14513 == 145)
		{
			Global_14513 = 3;
		}
		if (Global_71205)
		{
			Global_14513 = 3;
		}
		if (Global_14513 > 3)
		{
			Global_14513 = 3;
		}
	}
}

void func_129()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15111[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15111[iVar0 /*10*/].f_1), "", 24);
		Global_15111[iVar0 /*10*/].f_7 = 0;
		Global_15111[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15111.f_161 = -99;
	Global_15111.f_162 = { 0f, 0f, 0f };
}

bool func_130(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1368245.f_203[iParam1];
			}
			break;
	}
	return unk_0x05EFB6A616B6FADE(Global_1368245.f_1048, iParam0);
}

void func_131(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15276 = { *uParam0 };
	Global_1699 = iParam1;
	StringCopy(&Global_15892, sParam2, 24);
	Global_16811 = iParam5;
	if (iParam3 == 0)
	{
		Global_16809 = 1;
		Global_16807 = 0;
	}
	else
	{
		Global_16809 = 0;
		Global_16807 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16810 = 1;
		Global_16808 = 0;
	}
	else
	{
		Global_16810 = 0;
		Global_16808 = 1;
	}
}

void func_132(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_71205)
	{
		if (!unk_0x4915F4759304D5CF(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xB583A7C3FEE69710(iParam2, 0);
			}
			else
			{
				unk_0xB583A7C3FEE69710(iParam2, 1);
			}
		}
		if (!unk_0x4915F4759304D5CF(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x9D01B1015AD5A3C8(iParam2, 0);
			}
			else
			{
				unk_0x9D01B1015AD5A3C8(iParam2, 1);
			}
		}
	}
}

void func_133()
{
	if (unk_0x1095F403F52B42E1(iLocal_33, 0))
	{
		if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iLocal_33, 0))
		{
			if (unk_0xD53D19F97BC843F7(iLocal_33))
			{
				if (func_138("HELP_1"))
				{
					unk_0x135C61E339DABBAC(1);
				}
				if (unk_0xCE3CB618AFE55EFB(uLocal_58))
				{
					unk_0xE1623437A3194332(&uLocal_58);
				}
				if (unk_0xCE3CB618AFE55EFB(uLocal_61))
				{
					if (iLocal_395 == 1)
					{
						if (unk_0xFD34717937104F1C() < iLocal_109 + 7500)
						{
							unk_0x4F93066CECE72793();
						}
					}
					unk_0xE1623437A3194332(&uLocal_61);
				}
				if (iLocal_28 == 4)
				{
					if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) == 0)
					{
						if (iLocal_469 == 0)
						{
							unk_0xEEF61BF551977B0E("FHPRB_COPS");
							unk_0x9444470D6D9ADB88("FHPRB_LOST");
							iLocal_469 = 1;
						}
						if (iLocal_314 == 1)
						{
							if (unk_0xFD34717937104F1C() < iLocal_110 + 7500)
							{
								unk_0x4F93066CECE72793();
							}
							iLocal_314 = 0;
						}
						if (iLocal_62 > 3)
						{
							if (!unk_0xCE3CB618AFE55EFB(uLocal_59))
							{
								uLocal_59 = func_119(Local_116, 1);
							}
							if (iLocal_305 == 0)
							{
								if (!unk_0x8187CC9EB2D7CFE6())
								{
									func_137("GOD_2", 7500, 1);
									iLocal_305 = 1;
								}
							}
						}
					}
					else
					{
						if (unk_0xCE3CB618AFE55EFB(uLocal_59))
						{
							unk_0xE1623437A3194332(&uLocal_59);
						}
						if (iLocal_314 == 0)
						{
							unk_0x4F93066CECE72793();
							func_137("GOD_4", 7500, -1);
							unk_0x9444470D6D9ADB88("FHPRB_COPS");
							iLocal_110 = unk_0xFD34717937104F1C();
							iLocal_314 = 1;
							iLocal_469 = 0;
						}
					}
				}
			}
			else
			{
				if (unk_0xCE3CB618AFE55EFB(uLocal_58))
				{
					unk_0xE1623437A3194332(&uLocal_58);
				}
				if (unk_0xCE3CB618AFE55EFB(uLocal_59))
				{
					unk_0xE1623437A3194332(&uLocal_59);
				}
				if (unk_0x1095F403F52B42E1(iLocal_32, 0))
				{
					if (!unk_0xCE3CB618AFE55EFB(uLocal_61))
					{
						uLocal_61 = func_135(iLocal_32, 0, 0);
						unk_0xF46EDCACB3804F87(uLocal_61, 1);
						if (unk_0x8187CC9EB2D7CFE6())
						{
							unk_0x4F93066CECE72793();
						}
						if (iLocal_395 == 0)
						{
							func_137("GOD_6", 7500, -1);
							iLocal_109 = unk_0xFD34717937104F1C();
							iLocal_395 = 1;
						}
						if (!func_138("HELP_1"))
						{
							func_134("HELP_1");
						}
					}
				}
			}
		}
		else
		{
			if (unk_0xCE3CB618AFE55EFB(uLocal_61))
			{
				unk_0xE1623437A3194332(&uLocal_61);
			}
			if (unk_0xCE3CB618AFE55EFB(uLocal_59))
			{
				unk_0xE1623437A3194332(&uLocal_59);
			}
			if (unk_0x1095F403F52B42E1(iLocal_33, 0))
			{
				if (!unk_0xCE3CB618AFE55EFB(uLocal_58))
				{
					uLocal_58 = func_135(iLocal_33, 0, 0);
					unk_0xF46EDCACB3804F87(uLocal_58, 1);
				}
			}
			if (iLocal_315 == 0)
			{
				unk_0x4F93066CECE72793();
				func_137("GOD_5", 7500, -1);
				iLocal_315 = 1;
			}
		}
	}
}

void func_134(char* sParam0)
{
	unk_0x143A55A4EA118F24(sParam0);
	unk_0x9E55AC8543FF8836(0, 1, 1, -1);
}

int func_135(int iParam0, bool bParam1, bool bParam2)
{
	return func_136(iParam0, !bParam1, bParam2);
}

int func_136(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xDC5D81351D6A4DDB(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0x6A15DD6A863D5E27(iParam0);
	if (unk_0xFAC06EE780B57279(iParam0))
	{
		unk_0x575CF00E129E0CE1(uVar0, func_120(unk_0x4C9BACA8D249CB13(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xF46EDCACB3804F87(uVar0, bParam1);
		}
		else
		{
			unk_0x570128B7829A8EAA(uVar0, 2);
		}
	}
	else if (unk_0x281590680327CDEA(iParam0))
	{
		unk_0x575CF00E129E0CE1(uVar0, func_120(unk_0x4C9BACA8D249CB13(), 0.7f, 0.7f));
		unk_0xF46EDCACB3804F87(uVar0, bParam1);
	}
	else if (unk_0x92D42293DA8F9805(iParam0))
	{
		unk_0x575CF00E129E0CE1(uVar0, func_120(unk_0x4C9BACA8D249CB13(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_137(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xD291E4BC830D587A(sParam0);
	unk_0x1D594DA1FE749C88(iParam1, 1);
}

bool func_138(char* sParam0)
{
	unk_0x42FEBE6569FBB03A(sParam0);
	return unk_0x3D94488A86ABB03F(0);
}

void func_139()
{
	if (iLocal_62 > 1)
	{
		func_133();
	}
	if (iLocal_62 == 0)
	{
		if (iLocal_304 == 1)
		{
			func_34();
			iLocal_304 = 0;
		}
		iLocal_397 = 0;
		iLocal_398 = 0;
		iLocal_399 = 0;
		iLocal_400 = 0;
		iLocal_401 = 0;
		iLocal_402 = 0;
		iLocal_403 = 0;
		iLocal_404[0] = 0;
		iLocal_404[1] = 0;
		iLocal_407[0] = 0;
		iLocal_407[1] = 0;
		iLocal_410 = 0;
		iLocal_411 = 0;
		iLocal_412 = 0;
		iLocal_413 = 0;
		iLocal_414 = 0;
		iLocal_415 = 0;
		iLocal_416 = 0;
		iLocal_423 = 0;
		iLocal_424 = 0;
		iLocal_425 = 0;
		iLocal_426 = 0;
		iLocal_427 = 0;
		iLocal_428 = 0;
		iLocal_429 = 0;
		iLocal_430 = 0;
		iLocal_431 = 0;
		iLocal_432 = 0;
		iLocal_433[0] = 0;
		iLocal_433[1] = 0;
		iLocal_436[0] = 0;
		iLocal_436[1] = 0;
		iLocal_439[0] = 0;
		iLocal_439[1] = 0;
		iLocal_442[0] = 0;
		iLocal_442[1] = 0;
		iLocal_445[0] = 0;
		iLocal_445[1] = 0;
		iLocal_448[0] = 0;
		iLocal_448[1] = 0;
		iLocal_451[0] = 0;
		iLocal_451[1] = 0;
		iLocal_455 = 0;
		iLocal_458 = 0;
		iLocal_459[0] = 0;
		iLocal_462[0] = 0;
		iLocal_459[1] = 0;
		iLocal_462[1] = 0;
		iLocal_466 = 0;
		iLocal_467 = 0;
		iLocal_468 = 0;
		iLocal_482 = 0;
		iLocal_315 = 0;
		iLocal_316 = 0;
		iLocal_321 = 0;
		iLocal_387 = 0;
		iLocal_388 = 0;
		iLocal_389 = 0;
		iLocal_390 = 0;
		iLocal_391 = 0;
		iLocal_392 = 0;
		iLocal_393 = 0;
		iLocal_394 = 0;
		iLocal_395 = 0;
		iLocal_417 = 0;
		iLocal_465 = 0;
		iLocal_483 = 0;
		iLocal_487 = 0;
		iLocal_454 = 0;
		iLocal_109 = 0;
		iLocal_110 = 0;
		iLocal_63 = 0;
		while (iLocal_63 <= 6)
		{
			iLocal_306[iLocal_63] = 0;
			iLocal_355[iLocal_63] = 0;
			iLocal_371[iLocal_63] = 0;
			iLocal_379[iLocal_63] = 0;
			iLocal_363[iLocal_63] = 0;
			iLocal_63++;
		}
		unk_0x6D68030C791111E0("cellphone@str");
		unk_0x6D68030C791111E0("misscarsteal4@director_grip");
		if (unk_0x1095F403F52B42E1(iLocal_33, 0))
		{
			if (!unk_0xCE3CB618AFE55EFB(uLocal_58))
			{
				uLocal_58 = func_135(iLocal_33, 0, 0);
				unk_0xF46EDCACB3804F87(uLocal_58, true);
			}
		}
		unk_0x9BB7BCDF2AC2D6F9(0);
		if (unk_0x71364F510A1CB69F())
		{
			if (!func_30())
			{
				unk_0x745C10318A2C7CAE(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1));
			}
			if (unk_0xDC5D81351D6A4DDB(iLocal_34))
			{
				func_27(iLocal_34, -1, 1);
				unk_0x792676988A48387F(&iLocal_34);
			}
			else
			{
				func_27(0, -1, 1);
			}
		}
		if (!unk_0x3A83743561B4F70C())
		{
			unk_0x70C1F5AA59767FE6(800);
		}
		unk_0x9444470D6D9ADB88("FHPRB_START");
		unk_0xFDD15D670AD33E10(43.5f, -615.8f, 32.4f, 50f, 1, 0, 0, 0);
		iLocal_396 = 1;
		iLocal_62 = 1;
	}
	if (iLocal_62 == 1)
	{
		if (iLocal_465 == 0)
		{
			if (!unk_0x8187CC9EB2D7CFE6())
			{
				unk_0xE061C3261E51F663(5f, 8f, 4);
				func_137("GOD_1", 7500, 1);
				iLocal_465 = 1;
			}
		}
		if (unk_0x1095F403F52B42E1(iLocal_33, 0))
		{
			if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iLocal_33, 0))
			{
				unk_0x9444470D6D9ADB88("FHPRB_TRUCK");
				if (unk_0xCE3CB618AFE55EFB(uLocal_58))
				{
					unk_0xE1623437A3194332(&uLocal_58);
				}
				func_140(656, 0);
				unk_0xBF6EED5D6E0CD9BF(1f);
				iLocal_62 = 2;
			}
		}
	}
	if (iLocal_62 == 2)
	{
		if (unk_0x1095F403F52B42E1(iLocal_33, 0))
		{
			if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iLocal_33, 0))
			{
				if (unk_0xD53D19F97BC843F7(iLocal_33))
				{
					if (func_138("HELP_1"))
					{
						unk_0x135C61E339DABBAC(1);
					}
					if (unk_0xCE3CB618AFE55EFB(uLocal_58))
					{
						unk_0xE1623437A3194332(&uLocal_58);
					}
					if (unk_0xCE3CB618AFE55EFB(uLocal_61))
					{
						unk_0xE1623437A3194332(&uLocal_61);
					}
					if (unk_0x499324B3EF19C288(Local_119, Local_132, 1) < 100f)
					{
						if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) == 0)
						{
							if (iLocal_316 == 1)
							{
								if (unk_0xFD34717937104F1C() < iLocal_110 + 7500)
								{
									unk_0x4F93066CECE72793();
									iLocal_316 = 0;
								}
							}
							if (iLocal_417 == 0)
							{
								unk_0xE061C3261E51F663(5f, 8f, 4);
								func_137("GOD_7", 7500, -1);
								iLocal_417 = 1;
							}
						}
						else if (iLocal_316 == 0)
						{
							unk_0xE061C3261E51F663(5f, 8f, 4);
							unk_0xC2B2B6FC386E0FF7("SCRIPTED_SCANNER_REPORT_BS_PREP_B_01", 0f);
							iLocal_110 = unk_0xFD34717937104F1C();
							func_137("GOD_4", 7500, -1);
							iLocal_316 = 1;
						}
					}
					else if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) == 0)
					{
						iLocal_62 = 0;
						iLocal_28 = 4;
					}
				}
				else
				{
					if (unk_0xCE3CB618AFE55EFB(uLocal_58))
					{
						unk_0xE1623437A3194332(&uLocal_58);
					}
					if (unk_0x1095F403F52B42E1(iLocal_32, 0))
					{
						if (!unk_0xCE3CB618AFE55EFB(uLocal_61))
						{
							uLocal_61 = func_135(iLocal_32, 0, 0);
							unk_0xF46EDCACB3804F87(uLocal_61, true);
							if (unk_0x8187CC9EB2D7CFE6())
							{
								unk_0x4F93066CECE72793();
							}
							if (iLocal_395 == 0)
							{
								func_137("GOD_6", 7500, -1);
								iLocal_395 = 1;
							}
							if (!func_138("HELP_1"))
							{
								func_134("HELP_1");
							}
						}
					}
				}
			}
			else
			{
				if (unk_0xCE3CB618AFE55EFB(uLocal_61))
				{
					unk_0xE1623437A3194332(&uLocal_61);
				}
				if (unk_0x1095F403F52B42E1(iLocal_33, 0))
				{
					if (!unk_0xCE3CB618AFE55EFB(uLocal_58))
					{
						uLocal_58 = func_135(iLocal_33, 0, 0);
						unk_0xF46EDCACB3804F87(uLocal_58, true);
					}
				}
				if (iLocal_315 == 0)
				{
					unk_0x4F93066CECE72793();
					func_137("GOD_5", 7500, -1);
					iLocal_315 = 1;
				}
			}
		}
	}
}

void func_140(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_56191 = iParam0;
	if (!Global_56189)
	{
		Global_56189 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_68276)
		{
			if (Global_68277[iVar0 /*9*/] == iParam0)
			{
				Global_68277[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_141()
{
	if (iLocal_62 == 0)
	{
		if (iLocal_304 == 1)
		{
			func_34();
			iLocal_304 = 0;
		}
		func_164();
		func_107();
		if (!unk_0x3A83743561B4F70C())
		{
			unk_0x745C10318A2C7CAE(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1));
			unk_0x70C1F5AA59767FE6(800);
		}
		if (unk_0xDC5D81351D6A4DDB(Global_89824[3]))
		{
			if (unk_0x1095F403F52B42E1(Global_89824[3], 0))
			{
				if (unk_0x7C197233F79C2CB8(unk_0x8F474E419F56E48D(Global_89824[3])))
				{
					unk_0x1F7948851FB36E88(Global_89824[3], 1, 1);
					func_143(1.0095f, -631.9655f, 34.7259f, 349.0681f, 0, 145);
				}
				if (((unk_0x425CD7B17352316F(unk_0x8F474E419F56E48D(Global_89824[3])) || unk_0x8CE5E4632E631B03(unk_0x8F474E419F56E48D(Global_89824[3]))) || unk_0x1F41816F62350826(unk_0x8F474E419F56E48D(Global_89824[3]))) || unk_0x34F956CD0E52746F(unk_0x8F474E419F56E48D(Global_89824[3])))
				{
					unk_0x1F7948851FB36E88(Global_89824[3], 1, 1);
					func_143(49.0052f, -599.5534f, 30.6299f, 158.5544f, 0, 145);
				}
			}
		}
		func_142(79);
		iLocal_396 = 1;
		iLocal_62 = 1;
	}
	if (iLocal_62 == 1)
	{
		iLocal_62 = 0;
		iLocal_28 = 3;
	}
}

void func_142(int iParam0)
{
	if (Global_90249 != -1)
	{
		if (iParam0 == Global_90249)
		{
			Global_90253 = 1;
			return;
		}
	}
}

void func_143(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	struct<3> Var0;
	var uVar3;
	
	if (unk_0xDC5D81351D6A4DDB(Global_96664.f_4))
	{
		if (unk_0x1095F403F52B42E1(Global_96664.f_4, 0))
		{
			if (func_163(24) != Global_96664.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_160(unk_0xE2BBD32891C18569(Global_96664.f_4, 1), iParam5, &Var0, &uVar3))
					{
						Param0 = { Var0 };
						fParam3 = uVar3;
					}
				}
				func_144(Global_96664.f_4, Param0, fParam3, 24, 0);
			}
		}
	}
}

void func_144(int iParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0) && unk_0x1095F403F52B42E1(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0xDC5D81351D6A4DDB(Global_70024.f_484[25]) && unk_0x1095F403F52B42E1(Global_70024.f_484[25], 0))
			{
				if (Global_70024.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0x05ECE2F25303B711(iParam0) || unk_0x8F474E419F56E48D(iParam0) == joaat("bus")) || unk_0x8F474E419F56E48D(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_159(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_40(iParam0, &Var0);
		if (func_98(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0xE2BBD32891C18569(iParam0, 1) };
			uParam4 = unk_0x552C823E1D2A019C(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0xFEB6EEC0545AF7AA(unk_0x61D2332983ACC05C()) != joaat("vehicle_gen_controller"))
			{
				Global_71012 = unk_0xFEB6EEC0545AF7AA(unk_0x61D2332983ACC05C());
			}
		}
		func_157(iParam5, &Var0, Param1, uParam4, func_60(iParam0));
		func_145(iParam5, iParam0, 0);
	}
}

void func_145(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_70(&(Global_70024.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0x05EFB6A616B6FADE(Global_70024.f_555[0 /*21*/].f_9, 12) && !unk_0x05EFB6A616B6FADE(Global_70024.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_70024.f_555[0 /*21*/].f_4 != unk_0x8F474E419F56E48D(iParam1))
		{
			return;
		}
	}
	if (Global_70931 != -1 && Global_70931 != iParam0)
	{
		return;
	}
	if (unk_0xDC5D81351D6A4DDB(iParam1))
	{
		if (unk_0x1095F403F52B42E1(iParam1, 0))
		{
			if (!unk_0x4943BEEC19289B8E(iParam1))
			{
				unk_0x1F7948851FB36E88(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_106070.f_32605.f_4801 = func_146();
			}
			if (iParam1 != Global_70024.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_163(iParam0);
					if ((unk_0xDC5D81351D6A4DDB(iVar0) && unk_0x1095F403F52B42E1(iVar0, 0)) && iParam1 != iVar0)
					{
						func_39(iVar0, 145);
					}
				}
				Global_70930 = iParam1;
				Global_70931 = iParam0;
				Global_70932 = iParam2;
			}
		}
	}
}

var func_146()
{
	var uVar0;
	
	func_156(&uVar0, unk_0xC5B07C33AC7BB174());
	func_155(&uVar0, unk_0x65DA628D62901275());
	func_154(&uVar0, unk_0x34CEB9721AC6A0A9());
	func_149(&uVar0, unk_0xC9A0B68BA813CF99());
	func_148(&uVar0, unk_0x897D202BD69186D5());
	func_147(&uVar0, unk_0x56EBDF0E39D83471());
	return uVar0;
}

void func_147(var uParam0, int iParam1)
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

void func_148(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_149(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_153(*uParam0);
	iVar1 = func_151(*uParam0);
	if (iParam1 < 1 || iParam1 > func_150(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_150(int iParam0, int iParam1)
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

var func_151(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_152(unk_0x05EFB6A616B6FADE(iParam0, 31), -1, 1)) + 2011;
}

int func_152(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_153(var uParam0)
{
	return uParam0 & 15;
}

void func_154(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_155(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_156(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

void func_157(int iParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6)
{
	if (func_70(&(Global_70024.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x05EFB6A616B6FADE(Global_70024.f_555[0 /*21*/].f_9, 10))
		{
			func_158(iParam0);
			func_67(uParam1, &(Global_106070.f_32605.f_69[Global_70024.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0x05EFB6A616B6FADE(Global_70024.f_555[0 /*21*/].f_9, 11))
			{
				Global_106070.f_32605.f_1864[Global_70024.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_106070.f_32605.f_1934[Global_70024.f_555[0 /*21*/].f_14] = uParam5;
			}
			else
			{
				Global_106070.f_32605.f_1864[Global_70024.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_106070.f_32605.f_1934[Global_70024.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_106070.f_32605.f_1958[Global_70024.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_63(iParam0, 1);
		}
	}
}

void func_158(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_70(&(Global_70024.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xDC5D81351D6A4DDB(Global_70024.f_139[iParam0]))
		{
			unk_0x1F7948851FB36E88(Global_70024.f_139[iParam0], 1, 1);
			unk_0x792676988A48387F(&(Global_70024.f_139[iParam0]));
			Global_70024.f_139[iParam0] = 0;
		}
		if (unk_0x05EFB6A616B6FADE(Global_70024.f_555[0 /*21*/].f_9, 13))
		{
			func_63(iParam0, 0);
		}
	}
}

void func_159(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_158(iParam0);
	func_63(iParam0, 0);
}

int func_160(struct<3> Param0, int iParam3, var uParam4, var uParam5)
{
	int iVar0;
	
	iVar0 = func_161(Param0, iParam3, 1);
	switch (iVar0)
	{
		case 0:
			*uParam4 = { -827.351f, 157.785f, 68.2143f };
			*uParam5 = 85.1509f;
			return 1;
			break;
		
		case 1:
		case 2:
			*uParam4 = { 1992.523f, 3813.916f, 31.1008f };
			*uParam5 = 122.1498f;
			return 1;
			break;
		
		case 3:
			*uParam4 = { -1184.258f, -1496.556f, 3.3895f };
			*uParam5 = 303.2098f;
			return 1;
			break;
		
		case 4:
			*uParam4 = { 118.1067f, -1325.906f, 28.3706f };
			*uParam5 = 123.5016f;
			return 1;
			break;
		
		case 5:
			*uParam4 = { -18.118f, -1455.126f, 29.5004f };
			*uParam5 = 273.2822f;
			return 1;
			break;
		
		case 6:
			*uParam4 = { 1.5947f, 543.4017f, 173.4644f };
			*uParam5 = 310.7556f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_161(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_88365[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_88365[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_162(iVar0) || iParam4 == 0)
				{
					fVar1 = unk_0x499324B3EF19C288(Param0, Global_88365[iVar0 /*10*/].f_3, 1);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_162(int iParam0)
{
	return unk_0x05EFB6A616B6FADE(Global_106070.f_7201[iParam0], 0);
}

int func_163(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_70024.f_139[iParam0];
}

void func_164()
{
	Global_87505 = 1;
}

void func_165()
{
	unk_0x87A84AA8644AACAE(unk_0xD4E735F4B6A956AC(), 1);
	unk_0xBF6EED5D6E0CD9BF(0.01f);
	uLocal_53 = unk_0xF66A39BBE7B3C278(861.6f, -1599.7f, 27.9f, 961.8f, -1476.4f, 49.7f, 0, 1, 1, 1);
	uLocal_54 = unk_0xF66A39BBE7B3C278(851.2f, -1598.2f, 29.7f, 855.7f, -1587.1f, 33f, 0, 1, 1, 1);
	uLocal_55 = unk_0xF66A39BBE7B3C278(859.4f, -1569.6f, 32.3f, 865.4f, -1561f, 28.7f, 0, 1, 1, 1);
	uLocal_56 = unk_0xF66A39BBE7B3C278(939f, -1576.8f, 33f, 943.8f, -1571.3f, 28.9f, 0, 1, 1, 1);
	uLocal_51 = unk_0xF66A39BBE7B3C278(5.4f, -588f, 39.1f, 57.4f, -678.8f, 25.4f, 0, 1, 1, 1);
	uLocal_52 = unk_0xF66A39BBE7B3C278(50.9f, -641.6f, 37.7f, 81.1f, -608.4f, 29.5f, 0, 1, 1, 1);
	if (func_29())
	{
		if (Global_87504 == 1)
		{
			func_167(28.4065f, -608.9371f, 30.6293f, 70.7778f, 1, 0);
			iLocal_483 = 1;
			iLocal_304 = 1;
			iLocal_62 = 0;
			iLocal_28 = 5;
		}
		else if (func_166() == 0)
		{
			if (func_106() && func_103(7f, 7f, 7f, 1))
			{
				func_167(818.8139f, -1610.406f, 30.7951f, 264.412f, 1, 0);
			}
			else
			{
				func_167(825.5603f, -1605.825f, 30.9548f, 312.5221f, 1, 0);
			}
			iLocal_304 = 1;
			iLocal_483 = 1;
			iLocal_62 = 0;
			iLocal_28 = 3;
		}
	}
	else if (func_202(0))
	{
		iLocal_304 = 1;
		iLocal_483 = 1;
		iLocal_62 = 0;
		iLocal_28 = 3;
	}
	else
	{
		iLocal_62 = 0;
		iLocal_28 = 2;
	}
}

int func_166()
{
	if (!Global_93232 == 10 && !Global_93232 == 9)
	{
		return 0;
	}
	return Global_93232.f_2;
}

void func_167(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	if (func_29())
	{
		unk_0x2F3193E06C2EFF44(0);
		unk_0xFA57C719261AA55D(&(Global_93232.f_20), 2);
		unk_0x62BAB49318F4FE6E(1);
		if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
		{
			unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), 0, 0);
		}
		Global_93228 = { Param0 };
		Global_93231 = fParam3;
		Global_93227 = 1;
		if (iParam4 == 1)
		{
			unk_0x2BCFB39E86340DAA(&(Global_93232.f_20), 14);
		}
		else
		{
			unk_0xFA57C719261AA55D(&(Global_93232.f_20), 14);
		}
		if (iParam5 == 1)
		{
			unk_0x2BCFB39E86340DAA(&(Global_93232.f_20), 24);
		}
		else
		{
			unk_0xFA57C719261AA55D(&(Global_93232.f_20), 24);
		}
		func_28(1);
	}
}

void func_168()
{
	if (!func_29())
	{
		iLocal_28 = 1;
	}
	else
	{
		iLocal_28 = 1;
	}
}

void func_169()
{
	if (!unk_0xDC5D81351D6A4DDB(iLocal_49))
	{
		if (unk_0x499324B3EF19C288(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1), 45f, -616.2f, 30.8f, 1) < 150f)
		{
			unk_0xCACEBBBEAD8F262E(joaat("s_m_m_security_01"));
			if (unk_0x7FC99CCC73354033(joaat("s_m_m_security_01")))
			{
				iLocal_49 = unk_0x35C6E06B120EB2E3(26, joaat("s_m_m_security_01"), 64.904f, -617.9949f, 30.7028f, 223.555f, 1, 1);
				unk_0x13E0A8160525AE55(iLocal_49, 324, 1);
			}
			unk_0xA5DE74AE39867B03(joaat("s_m_m_security_01"));
		}
	}
	if (unk_0xDC5D81351D6A4DDB(iLocal_49))
	{
		if (!unk_0x4915F4759304D5CF(iLocal_49))
		{
			if (unk_0xCFA037D3F2BAF3E3(65.2f, -617.2f, 30.8f, 5f, 0))
			{
				if (iLocal_456 == 0)
				{
					if (unk_0x1A8481A7E865EC7C(iLocal_49))
					{
						unk_0x9568B1B58F78FF36(iLocal_49);
					}
					else
					{
						unk_0x836A6A722DEA63F1(iLocal_49);
					}
					unk_0xB62205D12F35BF49(iLocal_49, 65.2f, -617.2f, 31f, 2f, 0);
					unk_0xD738221C247C8B71(iLocal_49, 1);
					iLocal_113 = unk_0xFD34717937104F1C();
					iLocal_456 = 1;
				}
				else if (unk_0xFD34717937104F1C() > iLocal_113 + 5000)
				{
					if (!unk_0xB112D23B8518DD40(iLocal_49))
					{
						iLocal_456 = 0;
					}
				}
			}
			if (func_171(unk_0xA19140A5C42D8715(), iLocal_49, 1) < 20f)
			{
				if (iLocal_421 == 0)
				{
					unk_0x22DD1D053CFF9707(iLocal_49, unk_0xA19140A5C42D8715(), -1, 1072, 3);
					iLocal_421 = 1;
				}
			}
			else if (iLocal_421 == 1)
			{
				unk_0x22DD1D053CFF9707(iLocal_49, unk_0xA19140A5C42D8715(), 1, 0, 2);
				iLocal_421 = 0;
			}
		}
	}
	if (unk_0x499324B3EF19C288(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1), 45f, -616.2f, 30.8f, 1) < 50f)
	{
		if (iLocal_457 == 0)
		{
			iLocal_114 = 498972213;
			iLocal_115 = -512924631;
			unk_0xBF496E097D7AEFF7(iLocal_114, joaat("prop_sec_barrier_ld_01a"), 61f, -633f, 32f, 1, 1, 0);
			unk_0xBF496E097D7AEFF7(iLocal_115, joaat("prop_sec_barrier_ld_01a"), 66f, -618f, 32f, 1, 1, 0);
			iLocal_457 = 1;
		}
		if (iLocal_457 == 1)
		{
			if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) == 0)
			{
				if (Local_119.f_0 > 35f)
				{
					if (fLocal_135 < 1f)
					{
						fLocal_135 = (fLocal_135 + 0.02f);
					}
					else
					{
						fLocal_135 = 1f;
					}
					if (fLocal_135 <= 1f)
					{
						unk_0x2A934A66F44B6595(iLocal_114, fLocal_135, 0, 1);
						unk_0x2A934A66F44B6595(iLocal_115, fLocal_135, 0, 1);
						unk_0x6417FCFC98785F84(iLocal_114, 4, 0, 1);
						unk_0x6417FCFC98785F84(iLocal_115, 4, 0, 1);
						iLocal_422 = 0;
					}
				}
				if (Local_119.f_0 < 35f)
				{
					if (fLocal_135 > 0f)
					{
						fLocal_135 = (fLocal_135 - 0.02f);
					}
					else
					{
						fLocal_135 = 0f;
					}
					if (fLocal_135 >= 0f)
					{
						unk_0x2A934A66F44B6595(iLocal_114, fLocal_135, 0, 1);
						unk_0x2A934A66F44B6595(iLocal_115, fLocal_135, 0, 1);
						unk_0x6417FCFC98785F84(iLocal_114, 4, 0, 1);
						unk_0x6417FCFC98785F84(iLocal_115, 4, 0, 1);
						iLocal_422 = 0;
					}
				}
			}
			else if (iLocal_422 == 0)
			{
				if (Local_119.f_0 < 35f)
				{
					if (fLocal_135 > 0f)
					{
						fLocal_135 = (fLocal_135 - 0.02f);
					}
					else
					{
						fLocal_135 = 0f;
					}
					if (fLocal_135 >= 0f)
					{
						unk_0x2A934A66F44B6595(iLocal_114, fLocal_135, 0, 1);
						unk_0x2A934A66F44B6595(iLocal_115, fLocal_135, 0, 1);
						unk_0x6417FCFC98785F84(iLocal_114, 4, 0, 1);
						unk_0x6417FCFC98785F84(iLocal_115, 4, 0, 1);
						iLocal_422 = 1;
					}
				}
			}
		}
		if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 62.90151f, -638.6329f, 29.9188f, 70.78919f, -617.1338f, 36.91788f, 10.75f, 0, 1, 0))
		{
			if (unk_0xDC5D81351D6A4DDB(iLocal_49))
			{
				if (!unk_0x4915F4759304D5CF(iLocal_49))
				{
					if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) == 0)
					{
						if (iLocal_419 == 0)
						{
							if (iLocal_418 == 0)
							{
								func_132(&uLocal_137, 4, iLocal_49, "FHPBSecGuard", 0, 1);
								if (func_170(&uLocal_137, "FHPBAUD", "FHPB_CHAT20", 7, 0, 0, 0))
								{
									iLocal_418 = 1;
								}
							}
						}
						else if (iLocal_420 == 0)
						{
							func_132(&uLocal_137, 4, iLocal_49, "FHPBSecGuard", 0, 1);
							if (func_170(&uLocal_137, "FHPBAUD", "FHPB_CHAT22", 7, 0, 0, 0))
							{
								iLocal_420 = 1;
							}
						}
					}
					else if (iLocal_419 == 0)
					{
						func_132(&uLocal_137, 4, iLocal_49, "FHPBSecGuard", 0, 1);
						if (func_170(&uLocal_137, "FHPBAUD", "FHPB_CHAT21", 7, 0, 0, 0))
						{
							iLocal_419 = 1;
						}
					}
				}
			}
		}
	}
}

bool func_170(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_131(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15829 = 0;
	Global_15831 = 0;
	Global_15836 = 0;
	Global_16813 = 0;
	Global_16815 = 0;
	Global_16819 = 0;
	Global_2621441 = 0;
	return func_123(sParam2, iParam3, 0);
}

float func_171(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x7112137033807390(iParam0, 0))
	{
		Var0 = { unk_0xE2BBD32891C18569(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xE2BBD32891C18569(iParam0, 0) };
	}
	if (!unk_0x7112137033807390(iParam1, 0))
	{
		Var3 = { unk_0xE2BBD32891C18569(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xE2BBD32891C18569(iParam1, 0) };
	}
	return unk_0x499324B3EF19C288(Var0, Var3, iParam2);
}

void func_172()
{
	int iVar0;
	
	if (!unk_0x8187CC9EB2D7CFE6())
	{
		if (!func_176() || !unk_0x1BB77F49EA9C72A3())
		{
			if (iLocal_28 == 3)
			{
				if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0) && iLocal_31 == 0)
				{
					if (func_14() == 0)
					{
						if (iLocal_29 == 1)
						{
							if (iLocal_392 == 0)
							{
								if (func_174() && func_173())
								{
									if (func_170(&uLocal_137, "SOL1AUD", "SOL1_SEE5", 7, 0, 0, 0))
									{
										iLocal_112 = unk_0xFD34717937104F1C();
										iLocal_392 = 1;
									}
								}
							}
						}
						if (iLocal_29 == 1)
						{
							if (iLocal_392 == 1 && unk_0xFD34717937104F1C() > iLocal_112 + 7000)
							{
								if (func_174() && func_173())
								{
									if (func_170(&uLocal_137, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
									{
										iLocal_112 = unk_0xFD34717937104F1C();
									}
								}
							}
						}
					}
					if (iLocal_29 == 2)
					{
						if (iLocal_430 == 0)
						{
							if (func_174())
							{
								if (func_170(&uLocal_137, "SOL1AUD", "SOL1_SEC3", 7, 0, 0, 0))
								{
									iLocal_95 = unk_0xFD34717937104F1C();
									iLocal_430 = 1;
								}
							}
						}
					}
				}
				else if (iLocal_31 == 2 && iLocal_29 == 1)
				{
					if (iLocal_455 == 0)
					{
						if (func_174() && func_173())
						{
							if (func_170(&uLocal_137, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
							{
								iLocal_108 = unk_0xFD34717937104F1C();
								iLocal_455 = 1;
							}
						}
					}
					else if (unk_0xFD34717937104F1C() > iLocal_108 + 8000)
					{
						if (func_174() && func_173())
						{
							if (func_170(&uLocal_137, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
							{
								iLocal_108 = unk_0xFD34717937104F1C();
							}
						}
					}
				}
				if (iLocal_29 == 4)
				{
					if (iLocal_391 == 0)
					{
						func_113();
						if (func_174())
						{
							unk_0xF990CFC0F1D94A39(unk_0xA19140A5C42D8715(), &iVar0, 1);
							if (iVar0 != joaat("weapon_unarmed") && iVar0 != 0)
							{
								if (func_170(&uLocal_137, "SOL1AUD", "SOL1_ARM3", 7, 0, 0, 0))
								{
									iLocal_77 = unk_0xFD34717937104F1C();
									iLocal_387 = 1;
									iLocal_391 = 1;
								}
							}
							else
							{
								iLocal_77 = unk_0xFD34717937104F1C();
								iLocal_387 = 1;
								iLocal_391 = 1;
							}
						}
					}
					if (iLocal_391 == 1)
					{
						if (iLocal_387 == 0)
						{
							iLocal_77 = unk_0xFD34717937104F1C();
							iLocal_387 = 1;
						}
						if (iLocal_387 == 1)
						{
							if (unk_0xFD34717937104F1C() > iLocal_77 + 9000)
							{
								if (func_174())
								{
									if (func_170(&uLocal_137, "SOL1AUD", "SOL1_PAN3", 7, 0, 0, 0))
									{
										iLocal_387 = 0;
									}
								}
							}
						}
					}
				}
				if (iLocal_29 == 3)
				{
					if (iLocal_427 == 1)
					{
						if (iLocal_389 == 0)
						{
							if (iLocal_390 == 1)
							{
								if (func_174())
								{
									if (func_170(&uLocal_137, "SOL1AUD", "SOL1_STEAL3", 7, 0, 0, 0))
									{
										iLocal_389 = 1;
									}
								}
							}
						}
					}
					if (iLocal_388 == 0)
					{
						if (unk_0xDC5D81351D6A4DDB(iLocal_33))
						{
							if (unk_0x1095F403F52B42E1(iLocal_33, 0))
							{
								if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iLocal_33, 0))
								{
									if (func_174())
									{
										if (func_170(&uLocal_137, "SOL1AUD", "SOL1_OUT3", 7, 0, 0, 0))
										{
											iLocal_78 = unk_0xFD34717937104F1C();
											iLocal_389 = 1;
										}
									}
								}
							}
						}
					}
					if (unk_0xFD34717937104F1C() > iLocal_78 + 10000)
					{
						if (unk_0xDC5D81351D6A4DDB(iLocal_33))
						{
							if (unk_0x1095F403F52B42E1(iLocal_33, 0))
							{
								if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iLocal_33, 0))
								{
									if (func_174())
									{
										if (func_170(&uLocal_137, "SOL1AUD", "SOL1_OUT3", 7, 0, 0, 0))
										{
											iLocal_78 = unk_0xFD34717937104F1C();
										}
									}
								}
							}
						}
					}
					if (iLocal_428 == 1)
					{
						if (iLocal_429 == 0)
						{
							if (func_174())
							{
								if (func_170(&uLocal_137, "SOL1AUD", "SOL1_SEC3", 7, 0, 0, 0))
								{
									iLocal_429 = 1;
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_173()
{
	if (func_14() == 0)
	{
		func_132(&uLocal_137, 0, unk_0xA19140A5C42D8715(), "MICHAEL", 0, 1);
		return 1;
	}
	if (func_14() == 1)
	{
		func_132(&uLocal_137, 1, unk_0xA19140A5C42D8715(), "FRANKLIN", 0, 1);
		return 1;
	}
	if (func_14() == 2)
	{
		func_132(&uLocal_137, 2, unk_0xA19140A5C42D8715(), "TREVOR", 0, 1);
		return 1;
	}
	return 0;
}

int func_174()
{
	int iVar0;
	
	iLocal_66 = 0;
	while (iLocal_66 <= 6)
	{
		if (unk_0xDC5D81351D6A4DDB(iLocal_35[iLocal_66]))
		{
			if (!unk_0x4915F4759304D5CF(iLocal_35[iLocal_66]))
			{
				iVar0 = func_175(unk_0xA19140A5C42D8715(), iLocal_302, 0, 0, -1);
				if (unk_0xDC5D81351D6A4DDB(iVar0))
				{
					if (!unk_0x4915F4759304D5CF(iVar0))
					{
					}
				}
				if (iVar0 == iLocal_35[iLocal_66] && func_171(unk_0xA19140A5C42D8715(), iVar0, 1) < 15f)
				{
					func_132(&uLocal_137, 5, iLocal_35[iLocal_66], "CONSTRUCTION3", 0, 1);
					return 1;
				}
			}
		}
		iLocal_66++;
	}
	return 0;
}

int func_175(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0[16];
	int iVar17;
	
	iVar17 = 0;
	if (!unk_0x4915F4759304D5CF(iParam0))
	{
		unk_0x751DA0D8357E8793(iParam0, &iVar0, iParam4);
		iVar17 = 0;
		while (iVar17 <= (iVar0 - 1))
		{
			if (unk_0xDC5D81351D6A4DDB(iVar0[iVar17]))
			{
				if (!unk_0x4915F4759304D5CF(iVar0[iVar17]))
				{
					if (unk_0x35546CE87C5336BC(iVar0[iVar17]) == iParam1)
					{
						if (iParam2 <= 0)
						{
							if (iParam3 == 1)
							{
								if (unk_0x1A8481A7E865EC7C(iVar0[iVar17]))
								{
									return iVar0[iVar17];
								}
							}
							else
							{
								return iVar0[iVar17];
							}
						}
						else if (iVar17 + iParam2) <= (iVar0 - 1)
						{
							if (unk_0xDC5D81351D6A4DDB(iVar0[(iVar17 + iParam2)]))
							{
								if (!unk_0x4915F4759304D5CF(iVar0[(iVar17 + iParam2)]))
								{
									if (unk_0x35546CE87C5336BC(iVar0[(iVar17 + iParam2)]) == iParam1)
									{
										if (iParam3 == 1)
										{
											if (unk_0x1A8481A7E865EC7C(iVar0[(iVar17 + iParam2)]))
											{
												return iVar0[(iVar17 + iParam2)];
											}
										}
										else
										{
											return iVar0[(iVar17 + iParam2)];
										}
									}
								}
							}
						}
					}
				}
			}
			iVar17++;
		}
	}
	return 0;
}

int func_176()
{
	if (Global_15822 != 0 || unk_0x904275961B875DEB())
	{
		return 1;
	}
	return 0;
}

void func_177()
{
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		if (unk_0x07F5A0B42D3F3491(unk_0xA19140A5C42D8715()) && unk_0x41CA0CDBE31A440F(unk_0xA19140A5C42D8715()))
		{
			unk_0xBF6EED5D6E0CD9BF(0f);
		}
		else
		{
			unk_0xBF6EED5D6E0CD9BF(1f);
		}
	}
	func_184();
	if (iLocal_404[0])
	{
		if (func_171(unk_0xA19140A5C42D8715(), iLocal_43[0], 1) < 20f && unk_0x85E4CC19842B6048(iLocal_43[0], unk_0xA19140A5C42D8715()))
		{
			if (iLocal_433[0] == 0)
			{
				unk_0x22DD1D053CFF9707(iLocal_43[0], unk_0xA19140A5C42D8715(), -1, 1072, 3);
				iLocal_433[0] = 1;
			}
			if (iLocal_433[0] == 1)
			{
				if (unk_0xF9D4EF1338E38AFB(iLocal_43[0], 150319005) != 0 || unk_0xF9D4EF1338E38AFB(iLocal_43[0], 150319005) != 1)
				{
					iLocal_433[0] = 0;
				}
			}
		}
		else if (iLocal_433[0] == 1)
		{
			unk_0x22DD1D053CFF9707(iLocal_43[0], unk_0xA19140A5C42D8715(), 1, 0, 2);
			iLocal_433[0] = 0;
		}
	}
	if (iLocal_404[1])
	{
		if (func_171(unk_0xA19140A5C42D8715(), iLocal_43[1], 1) < 20f && unk_0x85E4CC19842B6048(iLocal_43[1], unk_0xA19140A5C42D8715()))
		{
			if (iLocal_433[1] == 0)
			{
				unk_0x22DD1D053CFF9707(iLocal_43[1], unk_0xA19140A5C42D8715(), -1, 1072, 3);
				iLocal_433[1] = 1;
			}
			if (iLocal_433[1] == 1)
			{
				if (unk_0xF9D4EF1338E38AFB(iLocal_43[1], 150319005) != 0 || unk_0xF9D4EF1338E38AFB(iLocal_43[1], 150319005) != 1)
				{
					iLocal_433[1] = 0;
				}
			}
		}
		else if (iLocal_433[1] == 1)
		{
			unk_0x22DD1D053CFF9707(iLocal_43[1], unk_0xA19140A5C42D8715(), 1, 0, 2);
			iLocal_433[1] = 0;
		}
	}
	if (iLocal_404[0] && iLocal_404[1])
	{
		if (func_171(unk_0xA19140A5C42D8715(), iLocal_43[0], 1) < func_171(unk_0xA19140A5C42D8715(), iLocal_43[1], 1))
		{
			iLocal_399 = 1;
			iLocal_400 = 0;
		}
		else
		{
			iLocal_399 = 0;
			iLocal_400 = 1;
		}
	}
	else
	{
		if (iLocal_404[0] && !iLocal_404[1])
		{
			iLocal_399 = 1;
			iLocal_400 = 0;
		}
		if (iLocal_404[1] && !iLocal_404[0])
		{
			iLocal_399 = 0;
			iLocal_400 = 1;
		}
	}
	switch (iLocal_31)
	{
		case 0:
			if (unk_0x97AA049940DBD81F("SCRAP_SECURITY"))
			{
				if (!unk_0x63D3995CEC2213BA("SCRAP_SECURITY"))
				{
					unk_0xF10C7DDEAC709758("SCRAP_SECURITY", 1);
				}
				if (unk_0x63D3995CEC2213BA("SCRAP_SECURITY"))
				{
					if (unk_0xDC5D81351D6A4DDB(iLocal_43[0]))
					{
						if (!unk_0x4915F4759304D5CF(iLocal_43[0]))
						{
							if (!unk_0xAF2C67C31AB41ABF(iLocal_43[0]))
							{
								if (unk_0xCFA037D3F2BAF3E3(863.1551f, -1564.572f, 29.3231f, 5f, 1))
								{
									iLocal_105[0] = unk_0xFD34717937104F1C();
									if (!unk_0x0D14162FE6E23CF2(iLocal_43[0]))
									{
										if (iLocal_462[0] == 0)
										{
											unk_0xC7C7DB7C57BC230B(iLocal_43[0], 863.1551f, -1564.572f, 29.3231f, 5f, 0);
											iLocal_459[0] = 0;
											iLocal_462[0] = 1;
										}
									}
								}
								else if (unk_0xFD34717937104F1C() > iLocal_105[0] + 2000)
								{
									if (unk_0x499324B3EF19C288(unk_0xE2BBD32891C18569(iLocal_43[0], 1), 863.1551f, -1564.572f, 29.3231f, 1) > 3f)
									{
										if (iLocal_459[0] == 0)
										{
											unk_0x956B3CF461C0C1C9(iLocal_43[0], 863.1551f, -1564.572f, 29.3231f, 1f, -1, 1048576000, 0, 1193033728);
											iLocal_462[0] = 0;
											iLocal_459[0] = 1;
										}
									}
								}
							}
						}
					}
					if (unk_0xDC5D81351D6A4DDB(iLocal_43[1]))
					{
						if (!unk_0x4915F4759304D5CF(iLocal_43[1]))
						{
							if (!unk_0xAF2C67C31AB41ABF(iLocal_43[1]))
							{
								if (unk_0xCFA037D3F2BAF3E3(940.2881f, -1573.877f, 29.3866f, 5f, 1))
								{
									iLocal_105[1] = unk_0xFD34717937104F1C();
									if (!unk_0x0D14162FE6E23CF2(iLocal_43[1]))
									{
										if (iLocal_462[1] == 0)
										{
											unk_0xC7C7DB7C57BC230B(iLocal_43[1], 940.2881f, -1573.877f, 29.3866f, 5f, 0);
											iLocal_459[1] = 0;
											iLocal_462[1] = 1;
										}
									}
								}
								else if (unk_0xFD34717937104F1C() > iLocal_105[1] + 2000)
								{
									if (unk_0x499324B3EF19C288(unk_0xE2BBD32891C18569(iLocal_43[1], 1), 940.2881f, -1573.877f, 29.3866f, 1) > 3f)
									{
										if (iLocal_459[1] == 0)
										{
											unk_0x956B3CF461C0C1C9(iLocal_43[1], 940.2881f, -1573.877f, 29.3866f, 1f, -1, 1048576000, 0, 1193033728);
											iLocal_462[1] = 0;
											iLocal_459[1] = 1;
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (unk_0xDC5D81351D6A4DDB(iLocal_43[0]))
			{
				if (!unk_0x4915F4759304D5CF(iLocal_43[0]))
				{
					if (func_171(unk_0xA19140A5C42D8715(), iLocal_43[0], 1) < 20f)
					{
						if ((func_183(unk_0xA19140A5C42D8715()) == joaat("weapon_unarmed") || unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0)) || func_182(0))
						{
							if (unk_0xC42DE41AEED00E7B(unk_0xA19140A5C42D8715(), iLocal_43[0], 100f) || unk_0x85E4CC19842B6048(iLocal_43[0], unk_0xA19140A5C42D8715()))
							{
								if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 860.4606f, -1563.58f, 28.81788f, 865.0807f, -1575.088f, 30.93324f, 5.75f, 0, 1, 0) || unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, 1, 0))
								{
									if (iLocal_451[0] == 0)
									{
										if (!unk_0xC42DE41AEED00E7B(iLocal_43[0], unk_0xA19140A5C42D8715(), 45f))
										{
											if (!unk_0x1A8481A7E865EC7C(iLocal_43[0]))
											{
												unk_0x836A6A722DEA63F1(iLocal_43[0]);
											}
											else
											{
												unk_0x9568B1B58F78FF36(iLocal_43[0]);
											}
											unk_0x0177431263151C4E(iLocal_43[0], unk_0xA19140A5C42D8715(), 5000);
											iLocal_102[0] = unk_0xFD34717937104F1C();
											func_181(iLocal_43[0]);
											iLocal_451[0] = 1;
										}
									}
									if (iLocal_451[0] == 1)
									{
										if (unk_0xFD34717937104F1C() > iLocal_102[0] + 5000)
										{
											iLocal_451[0] = 0;
										}
									}
									if (iLocal_407[0] == 0 && iLocal_407[1] == 0)
									{
										if (iLocal_403 == 0)
										{
											func_179(iLocal_43[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 6);
											iLocal_82 = unk_0xFD34717937104F1C();
											iLocal_403 = 1;
										}
										else if (unk_0xFD34717937104F1C() > iLocal_82 + 15000)
										{
											func_179(iLocal_43[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
											iLocal_82 = unk_0xFD34717937104F1C();
										}
									}
									else
									{
										if (iLocal_407[0] == 1)
										{
											if (iLocal_410 == 0)
											{
												func_179(iLocal_43[0], "PROVOKE_GEBERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_88 = unk_0xFD34717937104F1C();
												iLocal_410 = 1;
											}
											else if (unk_0xFD34717937104F1C() > iLocal_88 + 15000)
											{
												func_179(iLocal_43[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_88 = unk_0xFD34717937104F1C();
											}
										}
										if (iLocal_407[1] == 1)
										{
											if (iLocal_411 == 0)
											{
												func_179(iLocal_43[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_89 = unk_0xFD34717937104F1C();
												iLocal_411 = 1;
											}
											else if (unk_0xFD34717937104F1C() > iLocal_89 + 15000)
											{
												func_179(iLocal_43[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_89 = unk_0xFD34717937104F1C();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			if (unk_0xDC5D81351D6A4DDB(iLocal_43[1]))
			{
				if (!unk_0x4915F4759304D5CF(iLocal_43[1]))
				{
					if (func_171(unk_0xA19140A5C42D8715(), iLocal_43[1], 1) < 15f)
					{
						if ((func_183(unk_0xA19140A5C42D8715()) == joaat("weapon_unarmed") || unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0)) || func_182(0))
						{
							if (unk_0xC42DE41AEED00E7B(unk_0xA19140A5C42D8715(), iLocal_43[1], 100f))
							{
								if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 939.8862f, -1575.635f, 28.59783f, 952.9254f, -1575.484f, 33.19459f, 13.75f, 0, 1, 0))
								{
									if (iLocal_451[1] == 0)
									{
										if (!unk_0xC42DE41AEED00E7B(iLocal_43[1], unk_0xA19140A5C42D8715(), 45f))
										{
											if (!unk_0x1A8481A7E865EC7C(iLocal_43[1]))
											{
												unk_0x836A6A722DEA63F1(iLocal_43[1]);
											}
											else
											{
												unk_0x9568B1B58F78FF36(iLocal_43[1]);
											}
											unk_0x0177431263151C4E(iLocal_43[1], unk_0xA19140A5C42D8715(), 5000);
											iLocal_102[1] = unk_0xFD34717937104F1C();
											func_181(iLocal_43[1]);
											iLocal_451[1] = 1;
										}
									}
									if (iLocal_451[1] == 1)
									{
										if (unk_0xFD34717937104F1C() > iLocal_102[1] + 5000)
										{
											iLocal_451[1] = 0;
										}
									}
									if (iLocal_407[0] == 0 && iLocal_407[1] == 0)
									{
										if (iLocal_403 == 0)
										{
											func_179(iLocal_43[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
											iLocal_82 = unk_0xFD34717937104F1C();
											iLocal_403 = 1;
										}
										else if (unk_0xFD34717937104F1C() > iLocal_82 + 15000)
										{
											func_179(iLocal_43[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
											iLocal_82 = unk_0xFD34717937104F1C();
										}
									}
									else
									{
										if (iLocal_407[1] == 1)
										{
											if (iLocal_410 == 0)
											{
												func_179(iLocal_43[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
												iLocal_88 = unk_0xFD34717937104F1C();
												iLocal_410 = 1;
											}
											else if (unk_0xFD34717937104F1C() > iLocal_88 + 15000)
											{
												func_179(iLocal_43[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_88 = unk_0xFD34717937104F1C();
											}
										}
										if (iLocal_407[0] == 1)
										{
											if (iLocal_411 == 0)
											{
												func_179(iLocal_43[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
												iLocal_89 = unk_0xFD34717937104F1C();
												iLocal_411 = 1;
											}
											else if (unk_0xFD34717937104F1C() > iLocal_89 + 15000)
											{
												func_179(iLocal_43[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_89 = unk_0xFD34717937104F1C();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (iLocal_483 == 0)
			{
				iLocal_483 = 1;
			}
			if (func_178() || iLocal_398 == 1)
			{
				if (unk_0xDC5D81351D6A4DDB(iLocal_43[0]))
				{
					if (!unk_0x4915F4759304D5CF(iLocal_43[0]))
					{
						if (unk_0x85E4CC19842B6048(iLocal_43[0], unk_0xA19140A5C42D8715()))
						{
							iLocal_99[0] = unk_0xFD34717937104F1C();
							iLocal_445[0] = 1;
							if (iLocal_442[0] == 0)
							{
								if (unk_0x1A8481A7E865EC7C(iLocal_43[0]))
								{
									unk_0x9568B1B58F78FF36(iLocal_43[0]);
								}
								else
								{
									unk_0x836A6A722DEA63F1(iLocal_43[0]);
								}
								unk_0x3B7A32E04BBE59A5(iLocal_43[0], 50, 1);
								unk_0xDA4D3941AFF8EF12(iLocal_43[0], unk_0xA19140A5C42D8715(), 0, 16);
								func_181(iLocal_43[0]);
								iLocal_442[0] = 1;
							}
						}
						else if (iLocal_448[0] == 0)
						{
							if (iLocal_445[0] == 0)
							{
								if (unk_0x1A8481A7E865EC7C(iLocal_43[0]))
								{
									unk_0x9568B1B58F78FF36(iLocal_43[0]);
								}
								else
								{
									unk_0x836A6A722DEA63F1(iLocal_43[0]);
								}
								unk_0x956B3CF461C0C1C9(iLocal_43[0], unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1), 3f, -1, 1048576000, 0, 1193033728);
								func_181(iLocal_43[0]);
								iLocal_448[0] = 1;
							}
							if (iLocal_445[0] == 1)
							{
								if (unk_0xFD34717937104F1C() > iLocal_99[0] + 500)
								{
									if (unk_0x1A8481A7E865EC7C(iLocal_43[0]))
									{
										unk_0x9568B1B58F78FF36(iLocal_43[0]);
									}
									else
									{
										unk_0x836A6A722DEA63F1(iLocal_43[0]);
									}
									unk_0x956B3CF461C0C1C9(iLocal_43[0], unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1), 3f, -1, 1048576000, 0, 1193033728);
									func_181(iLocal_43[0]);
									iLocal_448[0] = 1;
								}
							}
						}
					}
				}
				if (unk_0xDC5D81351D6A4DDB(iLocal_43[1]))
				{
					if (!unk_0x4915F4759304D5CF(iLocal_43[1]))
					{
						if (unk_0x85E4CC19842B6048(iLocal_43[1], unk_0xA19140A5C42D8715()))
						{
							iLocal_99[1] = unk_0xFD34717937104F1C();
							iLocal_445[1] = 1;
							if (iLocal_442[1] == 0)
							{
								if (unk_0x1A8481A7E865EC7C(iLocal_43[1]))
								{
									unk_0x9568B1B58F78FF36(iLocal_43[1]);
								}
								else
								{
									unk_0x836A6A722DEA63F1(iLocal_43[1]);
								}
								unk_0x3B7A32E04BBE59A5(iLocal_43[1], 50, 1);
								unk_0xDA4D3941AFF8EF12(iLocal_43[1], unk_0xA19140A5C42D8715(), 0, 16);
								func_181(iLocal_43[1]);
								iLocal_442[1] = 1;
							}
						}
						else if (iLocal_448[1] == 0)
						{
							if (iLocal_445[1] == 0)
							{
								if (unk_0x1A8481A7E865EC7C(iLocal_43[1]))
								{
									unk_0x9568B1B58F78FF36(iLocal_43[1]);
								}
								else
								{
									unk_0x836A6A722DEA63F1(iLocal_43[1]);
								}
								unk_0x956B3CF461C0C1C9(iLocal_43[1], unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1), 3f, -1, 1048576000, 0, 1193033728);
								func_181(iLocal_43[1]);
								iLocal_448[1] = 1;
							}
							if (iLocal_445[1] == 1)
							{
								if (unk_0xFD34717937104F1C() > iLocal_99[1] + 500)
								{
									if (unk_0x1A8481A7E865EC7C(iLocal_43[1]))
									{
										unk_0x9568B1B58F78FF36(iLocal_43[1]);
									}
									else
									{
										unk_0x836A6A722DEA63F1(iLocal_43[1]);
									}
									unk_0x956B3CF461C0C1C9(iLocal_43[1], unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1), 3f, -1, 1048576000, 0, 1193033728);
									func_181(iLocal_43[1]);
									iLocal_448[1] = 1;
								}
							}
						}
					}
				}
				if (func_178())
				{
					if (iLocal_412 == 0)
					{
						if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) < 2)
						{
							unk_0x9BB7BCDF2AC2D6F9(5);
							unk_0xBF6EED5D6E0CD9BF(1f);
							unk_0xF10B3BC4F73177E5(unk_0xD4E735F4B6A956AC(), 2, 0);
							unk_0xDF341226C0B8BAC3(unk_0xD4E735F4B6A956AC(), 0);
							iLocal_412 = 1;
						}
					}
					if (iLocal_399 == 1)
					{
						if (iLocal_401 == 0)
						{
							if (func_171(unk_0xA19140A5C42D8715(), iLocal_43[0], 1) < 20f)
							{
								if (!unk_0xF59ACE94F067B46D(iLocal_43[0]))
								{
									func_179(iLocal_43[0], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
									iLocal_87 = unk_0xFD34717937104F1C();
									iLocal_401 = 1;
								}
							}
						}
						else if (unk_0xFD34717937104F1C() > iLocal_87 + 7000)
						{
							if (func_171(unk_0xA19140A5C42D8715(), iLocal_43[0], 1) < 20f)
							{
								if (!unk_0xF59ACE94F067B46D(iLocal_43[0]))
								{
									func_179(iLocal_43[0], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
									iLocal_87 = unk_0xFD34717937104F1C();
								}
							}
						}
					}
					if (iLocal_400 == 1)
					{
						if (iLocal_401 == 0)
						{
							if (func_171(unk_0xA19140A5C42D8715(), iLocal_43[1], 1) < 20f)
							{
								if (!unk_0xF59ACE94F067B46D(iLocal_43[1]))
								{
									func_179(iLocal_43[1], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
									iLocal_87 = unk_0xFD34717937104F1C();
									iLocal_401 = 1;
								}
							}
						}
						else if (unk_0xFD34717937104F1C() > iLocal_87 + 7000)
						{
							if (func_171(unk_0xA19140A5C42D8715(), iLocal_43[1], 1) < 20f)
							{
								if (!unk_0xF59ACE94F067B46D(iLocal_43[1]))
								{
									func_179(iLocal_43[1], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
									iLocal_87 = unk_0xFD34717937104F1C();
								}
							}
						}
					}
				}
				else
				{
					if (iLocal_458 == 0)
					{
						iLocal_50 = func_175(unk_0xA19140A5C42D8715(), joaat("COP"), 0, 0, 28);
						if (iLocal_50 != 0)
						{
							if (unk_0xDC5D81351D6A4DDB(iLocal_50))
							{
								if (!unk_0x4915F4759304D5CF(iLocal_50))
								{
									if (func_171(unk_0xA19140A5C42D8715(), iLocal_50, 1) < 35f)
									{
										iLocal_458 = 1;
									}
								}
							}
						}
					}
					if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) > 0 && iLocal_458 == 0)
					{
						if (iLocal_399 == 1)
						{
							if (iLocal_402 == 0)
							{
								if (func_171(unk_0xA19140A5C42D8715(), iLocal_43[0], 1) < 20f)
								{
									if (!unk_0xF59ACE94F067B46D(iLocal_43[0]))
									{
										func_179(iLocal_43[0], "GENERIC_INSULT_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
										iLocal_86 = unk_0xFD34717937104F1C();
										iLocal_402 = 1;
									}
								}
							}
							else if (unk_0xFD34717937104F1C() > iLocal_86 + 7000)
							{
								if (func_171(unk_0xA19140A5C42D8715(), iLocal_43[0], 1) < 20f)
								{
									if (!unk_0xF59ACE94F067B46D(iLocal_43[0]))
									{
										func_179(iLocal_43[0], "GENERIC_CURSE_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
										iLocal_86 = unk_0xFD34717937104F1C();
									}
								}
							}
						}
						if (iLocal_400 == 1)
						{
							if (iLocal_402 == 0)
							{
								if (func_171(unk_0xA19140A5C42D8715(), iLocal_43[1], 1) < 20f)
								{
									if (!unk_0xF59ACE94F067B46D(iLocal_43[1]))
									{
										func_179(iLocal_43[1], "GENERIC_INSULT_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
										iLocal_86 = unk_0xFD34717937104F1C();
										iLocal_402 = 1;
									}
								}
							}
							else if (unk_0xFD34717937104F1C() > iLocal_86 + 7000)
							{
								if (func_171(unk_0xA19140A5C42D8715(), iLocal_43[1], 1) < 20f)
								{
									if (!unk_0xF59ACE94F067B46D(iLocal_43[1]))
									{
										func_179(iLocal_43[1], "GENERIC_CURSE_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
										iLocal_86 = unk_0xFD34717937104F1C();
									}
								}
							}
						}
					}
				}
			}
			if (!func_178())
			{
				if (iLocal_414 == 0)
				{
					if (unk_0x499324B3EF19C288(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1), 893.2f, -1556.5f, 30f, 1) < 18f)
					{
						if (unk_0xDC5D81351D6A4DDB(iLocal_43[0]))
						{
							if (!unk_0x4915F4759304D5CF(iLocal_43[0]))
							{
								if (unk_0x85E4CC19842B6048(iLocal_43[0], unk_0xA19140A5C42D8715()))
								{
									iLocal_81 = unk_0xFD34717937104F1C();
									iLocal_414 = 1;
								}
							}
						}
						if (unk_0xDC5D81351D6A4DDB(iLocal_43[1]))
						{
							if (!unk_0x4915F4759304D5CF(iLocal_43[1]))
							{
								if (unk_0x85E4CC19842B6048(iLocal_43[1], unk_0xA19140A5C42D8715()))
								{
									iLocal_81 = unk_0xFD34717937104F1C();
									iLocal_414 = 1;
								}
							}
						}
					}
				}
				if (iLocal_398 == 0)
				{
					if (unk_0xDC5D81351D6A4DDB(iLocal_43[0]))
					{
						if (!unk_0x4915F4759304D5CF(iLocal_43[0]))
						{
							if (func_171(unk_0xA19140A5C42D8715(), iLocal_43[0], 1) > 4f)
							{
								if (unk_0x85E4CC19842B6048(iLocal_43[0], unk_0xA19140A5C42D8715()))
								{
									if (iLocal_436[0] == 0)
									{
										if (unk_0x1A8481A7E865EC7C(iLocal_43[0]))
										{
											unk_0x9568B1B58F78FF36(iLocal_43[0]);
										}
										else
										{
											unk_0x836A6A722DEA63F1(iLocal_43[0]);
										}
										unk_0x8F65948C5AFB744E(iLocal_43[0], unk_0xA19140A5C42D8715(), -1, 0.5f, 2f, 1073741824, 0);
										func_181(iLocal_43[0]);
										iLocal_436[0] = 1;
									}
									iLocal_96[0] = unk_0xFD34717937104F1C();
								}
								else if (unk_0xFD34717937104F1C() > iLocal_96[0] + 500)
								{
									if (iLocal_439[0] == 0)
									{
										if (unk_0x1A8481A7E865EC7C(iLocal_43[0]))
										{
											unk_0x9568B1B58F78FF36(iLocal_43[0]);
										}
										else
										{
											unk_0x836A6A722DEA63F1(iLocal_43[0]);
										}
										unk_0x956B3CF461C0C1C9(iLocal_43[0], unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1), 2f, -1, 1048576000, 0, 1193033728);
										func_181(iLocal_43[0]);
										iLocal_439[0] = 1;
									}
								}
							}
							else if (iLocal_484[0] == 0)
							{
								if (unk_0x1A8481A7E865EC7C(iLocal_43[0]))
								{
									unk_0x9568B1B58F78FF36(iLocal_43[0]);
								}
								else
								{
									unk_0x836A6A722DEA63F1(iLocal_43[0]);
								}
								unk_0x2F89329397A277BC(&uLocal_57);
								unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), 0);
								unk_0xB3E1967E66494060(0, 2000);
								unk_0x4C9989F866EF6731(uLocal_57, 1);
								unk_0x301F42EEE3C40328(uLocal_57);
								unk_0xE1072FA2FECBAD96(iLocal_43[0], uLocal_57);
								unk_0x3A95A0A3221D4208(&uLocal_57);
								func_181(iLocal_43[0]);
								iLocal_484[0] = 1;
							}
							if (iLocal_454 == 0)
							{
								if (iLocal_431 == 0 || iLocal_403 == 1)
								{
									if (iLocal_397 == 0)
									{
										if (func_171(unk_0xA19140A5C42D8715(), iLocal_43[0], 1) < 10f)
										{
											if (!unk_0xF59ACE94F067B46D(iLocal_43[0]))
											{
												func_179(iLocal_43[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 1);
												iLocal_83 = unk_0xFD34717937104F1C();
												iLocal_84 = unk_0xFD34717937104F1C();
												iLocal_81 = unk_0xFD34717937104F1C();
												iLocal_414 = 1;
												iLocal_397 = 1;
												iLocal_407[0] = 1;
											}
										}
									}
									else if (unk_0xFD34717937104F1C() > iLocal_83 + 7000)
									{
										if (func_171(unk_0xA19140A5C42D8715(), iLocal_43[0], 1) < 10f)
										{
											if (!unk_0xF59ACE94F067B46D(iLocal_43[0]))
											{
												func_179(iLocal_43[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
												iLocal_83 = unk_0xFD34717937104F1C();
											}
										}
									}
								}
								else if (iLocal_403 == 0)
								{
									if (iLocal_432 == 0)
									{
										if (func_171(unk_0xA19140A5C42D8715(), iLocal_43[0], 1) < 10f)
										{
											if (!unk_0xF59ACE94F067B46D(iLocal_43[0]))
											{
												func_179(iLocal_43[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 8);
												iLocal_397 = 1;
												iLocal_432 = 1;
											}
										}
									}
								}
							}
							else if (unk_0xFD34717937104F1C() > iLocal_84 + 7000)
							{
								if (func_171(unk_0xA19140A5C42D8715(), iLocal_43[0], 1) < 15f)
								{
									if (!unk_0xF59ACE94F067B46D(iLocal_43[0]))
									{
										func_179(iLocal_43[0], "FIGHT", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
										iLocal_84 = unk_0xFD34717937104F1C();
									}
								}
							}
						}
					}
					if (unk_0xDC5D81351D6A4DDB(iLocal_43[1]))
					{
						if (!unk_0x4915F4759304D5CF(iLocal_43[1]))
						{
							if (func_171(unk_0xA19140A5C42D8715(), iLocal_43[1], 1) > 4f)
							{
								if (unk_0x85E4CC19842B6048(iLocal_43[1], unk_0xA19140A5C42D8715()))
								{
									if (iLocal_436[1] == 0)
									{
										if (unk_0x1A8481A7E865EC7C(iLocal_43[1]))
										{
											unk_0x9568B1B58F78FF36(iLocal_43[1]);
										}
										else
										{
											unk_0x836A6A722DEA63F1(iLocal_43[1]);
										}
										unk_0x8F65948C5AFB744E(iLocal_43[1], unk_0xA19140A5C42D8715(), -1, 0.5f, 2f, 1073741824, 0);
										func_181(iLocal_43[1]);
										iLocal_436[1] = 1;
									}
									iLocal_96[1] = unk_0xFD34717937104F1C();
								}
								else if (unk_0xFD34717937104F1C() > iLocal_96[1] + 500)
								{
									if (iLocal_439[1] == 0)
									{
										if (unk_0x1A8481A7E865EC7C(iLocal_43[1]))
										{
											unk_0x9568B1B58F78FF36(iLocal_43[1]);
										}
										else
										{
											unk_0x836A6A722DEA63F1(iLocal_43[1]);
										}
										unk_0x956B3CF461C0C1C9(iLocal_43[1], unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1), 2f, -1, 1048576000, 0, 1193033728);
										func_181(iLocal_43[1]);
										iLocal_439[1] = 1;
									}
								}
							}
							else if (iLocal_484[1] == 0)
							{
								if (unk_0x1A8481A7E865EC7C(iLocal_43[1]))
								{
									unk_0x9568B1B58F78FF36(iLocal_43[1]);
								}
								else
								{
									unk_0x836A6A722DEA63F1(iLocal_43[1]);
								}
								unk_0x2F89329397A277BC(&uLocal_57);
								unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), 0);
								unk_0xB3E1967E66494060(0, 2000);
								unk_0x4C9989F866EF6731(uLocal_57, 1);
								unk_0x301F42EEE3C40328(uLocal_57);
								unk_0xE1072FA2FECBAD96(iLocal_43[1], uLocal_57);
								unk_0x3A95A0A3221D4208(&uLocal_57);
								func_181(iLocal_43[1]);
								iLocal_484[1] = 1;
							}
							if (iLocal_454 == 0)
							{
								if (iLocal_431 == 0 || iLocal_403 == 1)
								{
									if (iLocal_397 == 0)
									{
										if (func_171(unk_0xA19140A5C42D8715(), iLocal_43[1], 1) < 10f)
										{
											if (!unk_0xF59ACE94F067B46D(iLocal_43[1]))
											{
												func_179(iLocal_43[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_83 = unk_0xFD34717937104F1C();
												iLocal_85 = unk_0xFD34717937104F1C();
												iLocal_81 = unk_0xFD34717937104F1C();
												iLocal_414 = 1;
												iLocal_397 = 1;
												iLocal_407[1] = 1;
											}
										}
									}
									else if (unk_0xFD34717937104F1C() > iLocal_83 + 7000)
									{
										if (func_171(unk_0xA19140A5C42D8715(), iLocal_43[1], 1) < 10f)
										{
											if (!unk_0xF59ACE94F067B46D(iLocal_43[1]))
											{
												func_179(iLocal_43[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 11);
												iLocal_83 = unk_0xFD34717937104F1C();
											}
										}
									}
								}
								else if (iLocal_403 == 0)
								{
									if (iLocal_432 == 0)
									{
										if (func_171(unk_0xA19140A5C42D8715(), iLocal_43[1], 1) < 10f)
										{
											if (!unk_0xF59ACE94F067B46D(iLocal_43[1]))
											{
												func_179(iLocal_43[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 8);
												iLocal_397 = 1;
												iLocal_432 = 1;
											}
										}
									}
								}
							}
							else if (unk_0xFD34717937104F1C() > iLocal_85 + 7000)
							{
								if (func_171(unk_0xA19140A5C42D8715(), iLocal_43[1], 1) < 10f)
								{
									if (!unk_0xF59ACE94F067B46D(iLocal_43[1]))
									{
										func_179(iLocal_43[1], "FIGHT", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 11);
										iLocal_85 = unk_0xFD34717937104F1C();
									}
								}
							}
						}
					}
					if (iLocal_414 == 1)
					{
						if (iLocal_454 == 0)
						{
							if (unk_0xFD34717937104F1C() > iLocal_81 + 22000)
							{
								iLocal_454 = 1;
							}
						}
					}
					if (iLocal_414 == 1)
					{
						if (iLocal_398 == 0)
						{
							if (unk_0xFD34717937104F1C() > iLocal_81 + 30000)
							{
								unk_0xF10B3BC4F73177E5(unk_0xD4E735F4B6A956AC(), 2, 0);
								iLocal_398 = 1;
							}
						}
					}
					if (unk_0xDC5D81351D6A4DDB(iLocal_33))
					{
						if (unk_0x1095F403F52B42E1(iLocal_33, 0))
						{
							if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iLocal_33, 1))
							{
								if (unk_0x85E4CC19842B6048(iLocal_43[0], unk_0xA19140A5C42D8715()) || unk_0x85E4CC19842B6048(iLocal_43[1], unk_0xA19140A5C42D8715()))
								{
									iLocal_398 = 1;
								}
							}
							if (func_171(unk_0xA19140A5C42D8715(), iLocal_33, 1) < 5f && unk_0x3D77D31E25961596(unk_0xA19140A5C42D8715()))
							{
								if (unk_0x85E4CC19842B6048(iLocal_43[0], unk_0xA19140A5C42D8715()) || unk_0x85E4CC19842B6048(iLocal_43[1], unk_0xA19140A5C42D8715()))
								{
									iLocal_398 = 1;
								}
							}
						}
					}
					if (unk_0xDC5D81351D6A4DDB(iLocal_43[0]))
					{
						if (!unk_0x4915F4759304D5CF(iLocal_43[0]))
						{
							if (unk_0x6625F609B391348E(unk_0xA19140A5C42D8715()))
							{
								if (unk_0x8DBEC2BE62488A34(unk_0xA19140A5C42D8715()))
								{
									if (unk_0x85E4CC19842B6048(iLocal_43[0], unk_0xA19140A5C42D8715()))
									{
										iLocal_398 = 1;
									}
								}
							}
						}
					}
					if (unk_0xDC5D81351D6A4DDB(iLocal_43[1]))
					{
						if (!unk_0x4915F4759304D5CF(iLocal_43[1]))
						{
							if (unk_0x6625F609B391348E(unk_0xA19140A5C42D8715()))
							{
								if (unk_0x8DBEC2BE62488A34(unk_0xA19140A5C42D8715()))
								{
									if (unk_0x85E4CC19842B6048(iLocal_43[1], unk_0xA19140A5C42D8715()))
									{
										iLocal_398 = 1;
									}
								}
							}
						}
					}
				}
			}
			break;
	}
}

int func_178()
{
	if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
	{
		iLocal_80 = 0;
		while (iLocal_80 <= 6)
		{
			if (unk_0xDC5D81351D6A4DDB(iLocal_35[iLocal_80]))
			{
				if (!unk_0x4915F4759304D5CF(iLocal_35[iLocal_80]))
				{
					if (func_183(unk_0xA19140A5C42D8715()) != joaat("weapon_unarmed") && !func_182(0))
					{
						if (unk_0x85E4CC19842B6048(iLocal_35[iLocal_80], unk_0xA19140A5C42D8715()))
						{
							return 1;
						}
					}
				}
			}
			iLocal_80++;
		}
		if (unk_0xDC5D81351D6A4DDB(iLocal_43[0]))
		{
			if (!unk_0x4915F4759304D5CF(iLocal_43[0]))
			{
				if (func_183(unk_0xA19140A5C42D8715()) != joaat("weapon_unarmed") && !func_182(0))
				{
					if (unk_0x85E4CC19842B6048(iLocal_43[0], unk_0xA19140A5C42D8715()))
					{
						return 1;
					}
				}
			}
		}
		if (unk_0xDC5D81351D6A4DDB(iLocal_43[1]))
		{
			if (!unk_0x4915F4759304D5CF(iLocal_43[1]))
			{
				if (func_183(unk_0xA19140A5C42D8715()) != joaat("weapon_unarmed") && !func_182(0))
				{
					if (unk_0x85E4CC19842B6048(iLocal_43[1], unk_0xA19140A5C42D8715()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_179(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x85AF6DC3641E2442(uParam0, sParam1, sParam2, func_180(iParam3), 0);
}

int func_180(int iParam0)
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

void func_181(int iParam0)
{
	if (iParam0 == iLocal_43[0])
	{
		iLocal_433[0] = 0;
		iLocal_459[0] = 0;
		iLocal_462[0] = 0;
		iLocal_451[0] = 0;
		iLocal_442[0] = 0;
		iLocal_448[0] = 0;
		iLocal_436[0] = 0;
		iLocal_439[0] = 0;
		iLocal_484[0] = 0;
	}
	if (iParam0 == iLocal_43[1])
	{
		iLocal_433[1] = 0;
		iLocal_459[1] = 0;
		iLocal_462[1] = 0;
		iLocal_451[1] = 0;
		iLocal_442[1] = 0;
		iLocal_448[1] = 0;
		iLocal_436[1] = 0;
		iLocal_439[1] = 0;
		iLocal_484[1] = 0;
	}
}

int func_182(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14513.f_1 > 3)
		{
			if (unk_0x05EFB6A616B6FADE(Global_2383, 14))
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
	if (unk_0x8B1574454E8C2421(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14513.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_183(int iParam0)
{
	var uVar0;
	
	unk_0xF990CFC0F1D94A39(iParam0, &uVar0, 1);
	return uVar0;
}

void func_184()
{
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
		{
			Local_119 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1) };
		}
	}
	if (unk_0xDC5D81351D6A4DDB(iLocal_43[0]))
	{
		if (!unk_0x4915F4759304D5CF(iLocal_43[0]))
		{
			Local_125[0 /*3*/] = { unk_0xE2BBD32891C18569(iLocal_43[0], 1) };
		}
	}
	if (unk_0xDC5D81351D6A4DDB(iLocal_43[1]))
	{
		if (!unk_0x4915F4759304D5CF(iLocal_43[1]))
		{
			Local_125[1 /*3*/] = { unk_0xE2BBD32891C18569(iLocal_43[1], 1) };
		}
	}
	if (unk_0xDC5D81351D6A4DDB(iLocal_43[0]))
	{
		if (!unk_0x4915F4759304D5CF(iLocal_43[0]))
		{
			iLocal_404[0] = 1;
		}
		else
		{
			iLocal_404[0] = 0;
		}
	}
	else
	{
		iLocal_404[0] = 0;
	}
	if (unk_0xDC5D81351D6A4DDB(iLocal_43[1]))
	{
		if (!unk_0x4915F4759304D5CF(iLocal_43[1]))
		{
			iLocal_404[1] = 1;
		}
		else
		{
			iLocal_404[1] = 0;
		}
	}
	else
	{
		iLocal_404[1] = 0;
	}
	if (iLocal_31 != 0)
	{
		if (iLocal_31 == 1)
		{
			if (iLocal_404[0] == 1)
			{
				if (iLocal_404[1] == 1)
				{
					if (func_171(unk_0xA19140A5C42D8715(), iLocal_43[0], 1) < func_171(unk_0xA19140A5C42D8715(), iLocal_43[1], 1))
					{
						if (func_171(unk_0xA19140A5C42D8715(), iLocal_43[0], 1) < 20f)
						{
							if (((Local_119.f_0 < Local_125[0 /*3*/] && !unk_0xC42DE41AEED00E7B(unk_0xA19140A5C42D8715(), iLocal_43[0], 90f)) && !unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, 1, 0)) && !unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, 1, 0))
							{
								iLocal_31 = 0;
								iLocal_459[0] = 0;
								iLocal_462[0] = 0;
								iLocal_459[1] = 0;
								iLocal_462[1] = 0;
								iLocal_105[0] = unk_0xFD34717937104F1C();
								iLocal_105[1] = unk_0xFD34717937104F1C();
							}
						}
						else if (Local_119.f_0 < Local_125[0 /*3*/])
						{
							iLocal_31 = 0;
							iLocal_459[0] = 0;
							iLocal_462[0] = 0;
							iLocal_459[1] = 0;
							iLocal_462[1] = 0;
							iLocal_105[0] = unk_0xFD34717937104F1C();
							iLocal_105[1] = unk_0xFD34717937104F1C();
						}
					}
					else if (func_171(unk_0xA19140A5C42D8715(), iLocal_43[1], 1) < 15f)
					{
						if ((Local_119.f_0 > Local_125[1 /*3*/] && !unk_0xC42DE41AEED00E7B(unk_0xA19140A5C42D8715(), iLocal_43[1], 90f)) && !unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0))
						{
							iLocal_31 = 0;
							iLocal_459[0] = 0;
							iLocal_462[0] = 0;
							iLocal_459[1] = 0;
							iLocal_462[1] = 0;
							iLocal_105[0] = unk_0xFD34717937104F1C();
							iLocal_105[1] = unk_0xFD34717937104F1C();
						}
					}
					else if (Local_119.f_0 > Local_125[1 /*3*/])
					{
						iLocal_31 = 0;
						iLocal_459[0] = 0;
						iLocal_462[0] = 0;
						iLocal_459[1] = 0;
						iLocal_462[1] = 0;
						iLocal_105[0] = unk_0xFD34717937104F1C();
						iLocal_105[1] = unk_0xFD34717937104F1C();
					}
				}
				else if (func_171(unk_0xA19140A5C42D8715(), iLocal_43[0], 1) < func_171(unk_0xA19140A5C42D8715(), iLocal_43[1], 1))
				{
					if (func_171(unk_0xA19140A5C42D8715(), iLocal_43[0], 1) < 15f)
					{
						if ((Local_119.f_0 < Local_125[0 /*3*/] && !unk_0xC42DE41AEED00E7B(unk_0xA19140A5C42D8715(), iLocal_43[0], 90f)) && !unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, 1, 0))
						{
							iLocal_31 = 0;
							iLocal_459[0] = 0;
							iLocal_462[0] = 0;
							iLocal_459[1] = 0;
							iLocal_462[1] = 0;
							iLocal_105[0] = unk_0xFD34717937104F1C();
							iLocal_105[1] = unk_0xFD34717937104F1C();
						}
					}
					else if (Local_119.f_0 < Local_125[0 /*3*/])
					{
						iLocal_31 = 0;
						iLocal_459[0] = 0;
						iLocal_462[0] = 0;
						iLocal_459[1] = 0;
						iLocal_462[1] = 0;
						iLocal_105[0] = unk_0xFD34717937104F1C();
						iLocal_105[1] = unk_0xFD34717937104F1C();
					}
				}
			}
			else if (iLocal_404[1] == 1)
			{
				if (func_171(unk_0xA19140A5C42D8715(), iLocal_43[1], 1) < 15f)
				{
					if ((Local_119.f_0 > Local_125[1 /*3*/] && !unk_0xC42DE41AEED00E7B(unk_0xA19140A5C42D8715(), iLocal_43[1], 90f)) && !unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0))
					{
						iLocal_31 = 0;
						iLocal_459[0] = 0;
						iLocal_462[0] = 0;
						iLocal_459[1] = 0;
						iLocal_462[1] = 0;
						iLocal_105[0] = unk_0xFD34717937104F1C();
						iLocal_105[1] = unk_0xFD34717937104F1C();
					}
				}
				else if (Local_119.f_0 > Local_125[1 /*3*/])
				{
					iLocal_31 = 0;
					iLocal_459[0] = 0;
					iLocal_462[0] = 0;
					iLocal_459[1] = 0;
					iLocal_462[1] = 0;
					iLocal_105[0] = unk_0xFD34717937104F1C();
					iLocal_105[1] = unk_0xFD34717937104F1C();
				}
			}
		}
		if (iLocal_31 == 2)
		{
			if (iLocal_398 == 0)
			{
				if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0) || Local_119.f_0 > 942f)
				{
					if (!unk_0x4915F4759304D5CF(iLocal_43[1]))
					{
						if (Local_119.f_0 > Local_125[1 /*3*/])
						{
							if (!unk_0xC42DE41AEED00E7B(unk_0xA19140A5C42D8715(), iLocal_43[1], 90f))
							{
								iLocal_31 = 0;
								iLocal_459[0] = 0;
								iLocal_462[0] = 0;
								iLocal_459[1] = 0;
								iLocal_462[1] = 0;
								iLocal_105[0] = unk_0xFD34717937104F1C();
								iLocal_105[1] = unk_0xFD34717937104F1C();
							}
						}
					}
					else if (Local_119.f_0 > 942f)
					{
						if (!unk_0xC42DE41AEED00E7B(unk_0xA19140A5C42D8715(), iLocal_43[1], 90f))
						{
							iLocal_31 = 0;
							iLocal_459[0] = 0;
							iLocal_462[0] = 0;
							iLocal_459[1] = 0;
							iLocal_462[1] = 0;
							iLocal_105[0] = unk_0xFD34717937104F1C();
							iLocal_105[1] = unk_0xFD34717937104F1C();
						}
					}
				}
				if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, 1, 0) || Local_119.f_0 < 860f)
				{
					if (!unk_0x4915F4759304D5CF(iLocal_43[0]))
					{
						if (Local_119.f_0 < Local_125[0 /*3*/])
						{
							if (!unk_0xC42DE41AEED00E7B(unk_0xA19140A5C42D8715(), iLocal_43[0], 90f))
							{
								iLocal_31 = 0;
								iLocal_459[0] = 0;
								iLocal_462[0] = 0;
								iLocal_459[1] = 0;
								iLocal_462[1] = 0;
								iLocal_105[0] = unk_0xFD34717937104F1C();
								iLocal_105[1] = unk_0xFD34717937104F1C();
							}
						}
					}
					else if (Local_119.f_0 < 860f)
					{
						if (!unk_0xC42DE41AEED00E7B(unk_0xA19140A5C42D8715(), iLocal_43[0], 90f))
						{
							iLocal_31 = 0;
							iLocal_459[0] = 0;
							iLocal_462[0] = 0;
							iLocal_459[1] = 0;
							iLocal_462[1] = 0;
							iLocal_105[0] = unk_0xFD34717937104F1C();
							iLocal_105[1] = unk_0xFD34717937104F1C();
						}
					}
				}
			}
		}
	}
	if (iLocal_31 != 1)
	{
		if (iLocal_31 != 2)
		{
			if (iLocal_404[0] == 1)
			{
				if (func_171(unk_0xA19140A5C42D8715(), iLocal_43[0], 1) < 20f)
				{
					if ((func_183(unk_0xA19140A5C42D8715()) == joaat("weapon_unarmed") || unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0)) || func_182(0))
					{
						if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 860.4606f, -1563.58f, 28.81788f, 865.0807f, -1575.088f, 30.93324f, 5.75f, 0, 1, 0))
						{
							if (Local_119.f_0 > Local_125[0 /*3*/] || unk_0xC42DE41AEED00E7B(unk_0xA19140A5C42D8715(), iLocal_43[0], 90f))
							{
								iLocal_31 = 1;
							}
						}
						if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, 1, 0))
						{
							iLocal_31 = 1;
						}
					}
				}
			}
			if (iLocal_404[1] == 1)
			{
				if (func_171(unk_0xA19140A5C42D8715(), iLocal_43[1], 1) < 15f)
				{
					if ((func_183(unk_0xA19140A5C42D8715()) == joaat("weapon_unarmed") || unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0)) || func_182(0))
					{
						if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 939.8862f, -1575.635f, 28.59783f, 952.9254f, -1575.484f, 33.19459f, 13.75f, 0, 1, 0))
						{
							if (Local_119.f_0 < Local_125[1 /*3*/] || unk_0xC42DE41AEED00E7B(unk_0xA19140A5C42D8715(), iLocal_43[1], 90f))
							{
								iLocal_31 = 1;
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_31 != 2)
	{
		if (unk_0x6D7FFF527E125F24(-1, 892.9f, -1552.4f, 30f, 40f))
		{
			iLocal_31 = 2;
			iLocal_398 = 1;
		}
		if (iLocal_482 == 1)
		{
			iLocal_31 = 2;
			iLocal_398 = 1;
		}
		if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) != 0)
		{
			if (unk_0xDC5D81351D6A4DDB(iLocal_43[0]))
			{
				if (!unk_0x4915F4759304D5CF(iLocal_43[0]))
				{
					if (unk_0x85E4CC19842B6048(iLocal_43[0], unk_0xA19140A5C42D8715()))
					{
						iLocal_31 = 2;
						iLocal_398 = 1;
					}
				}
			}
			if (unk_0xDC5D81351D6A4DDB(iLocal_43[1]))
			{
				if (!unk_0x4915F4759304D5CF(iLocal_43[1]))
				{
					if (unk_0x85E4CC19842B6048(iLocal_43[1], unk_0xA19140A5C42D8715()))
					{
						iLocal_31 = 2;
						iLocal_398 = 1;
					}
				}
			}
		}
		if (iLocal_431 == 0)
		{
			if (iLocal_430 == 1)
			{
				if (unk_0xFD34717937104F1C() > iLocal_95 + 4000)
				{
					iLocal_94 = 0;
					while (iLocal_94 <= 6)
					{
						if (func_176())
						{
							if (unk_0xDC5D81351D6A4DDB(iLocal_35[iLocal_94]))
							{
								if (!unk_0x4915F4759304D5CF(iLocal_35[iLocal_94]))
								{
									if (unk_0x80154752AE7FDE8C(iLocal_35[iLocal_94]))
									{
										iLocal_31 = 2;
										iLocal_431 = 1;
									}
								}
							}
						}
						iLocal_94++;
					}
				}
			}
		}
		if ((iLocal_29 == 4 || iLocal_29 == 3) || iLocal_430 == 1)
		{
			iLocal_31 = 2;
			iLocal_427 = 1;
			iLocal_398 = 1;
		}
		if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			if (iLocal_404[0] == 1)
			{
				if (func_183(unk_0xA19140A5C42D8715()) != joaat("weapon_unarmed") && !func_182(0))
				{
					if (unk_0x85E4CC19842B6048(iLocal_43[0], unk_0xA19140A5C42D8715()))
					{
						iLocal_31 = 2;
					}
				}
			}
			if (iLocal_404[1] == 1)
			{
				if (func_183(unk_0xA19140A5C42D8715()) != joaat("weapon_unarmed") && !func_182(0))
				{
					if (unk_0x85E4CC19842B6048(iLocal_43[1], unk_0xA19140A5C42D8715()))
					{
						iLocal_31 = 2;
					}
				}
			}
		}
		if (unk_0x499324B3EF19C288(Local_119, Local_132, 1) < 36f)
		{
			if (iLocal_404[0] == 1)
			{
				if (unk_0x85E4CC19842B6048(iLocal_43[0], unk_0xA19140A5C42D8715()))
				{
					iLocal_31 = 2;
				}
				if (func_171(iLocal_43[0], unk_0xA19140A5C42D8715(), 1) < 20f)
				{
					if (unk_0xCCF89CDD3583210D(unk_0xD4E735F4B6A956AC(), iLocal_43[0]))
					{
						iLocal_31 = 2;
					}
				}
			}
			if (iLocal_404[1] == 1)
			{
				if (Local_119.f_2 < 36f || unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
				{
					if (unk_0x85E4CC19842B6048(iLocal_43[1], unk_0xA19140A5C42D8715()))
					{
						iLocal_31 = 2;
					}
					if (func_171(iLocal_43[1], unk_0xA19140A5C42D8715(), 1) < 20f)
					{
						if (unk_0xCCF89CDD3583210D(unk_0xD4E735F4B6A956AC(), iLocal_43[1]))
						{
							iLocal_31 = 2;
						}
					}
				}
			}
		}
		if (iLocal_404[0] == 1)
		{
			if (func_171(unk_0xA19140A5C42D8715(), iLocal_43[0], 1) < 20f)
			{
				if (Local_119.f_0 > Local_125[0 /*3*/] && unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, 1, 0))
				{
					if (unk_0x85E4CC19842B6048(iLocal_43[0], unk_0xA19140A5C42D8715()) || unk_0xCCF89CDD3583210D(unk_0xD4E735F4B6A956AC(), iLocal_43[0]))
					{
						iLocal_31 = 2;
					}
				}
			}
		}
		if (iLocal_404[1] == 1)
		{
			if (func_171(unk_0xA19140A5C42D8715(), iLocal_43[1], 1) < 20f)
			{
				if (Local_119.f_0 < Local_125[1 /*3*/] && unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0))
				{
					if (unk_0x85E4CC19842B6048(iLocal_43[1], unk_0xA19140A5C42D8715()) || unk_0xCCF89CDD3583210D(unk_0xD4E735F4B6A956AC(), iLocal_43[1]))
					{
						iLocal_31 = 2;
					}
				}
			}
		}
	}
}

void func_185()
{
	iLocal_64 = 0;
	while (iLocal_64 <= 6)
	{
		if (unk_0xDC5D81351D6A4DDB(iLocal_35[iLocal_64]))
		{
			if (!unk_0x4915F4759304D5CF(iLocal_35[iLocal_64]))
			{
				if (iLocal_330[iLocal_64] == 0)
				{
					if (func_171(unk_0xA19140A5C42D8715(), iLocal_35[iLocal_64], 1) > 20f)
					{
						iLocal_330[iLocal_64] = 1;
					}
				}
				if (iLocal_330[iLocal_64] == 1)
				{
					if (func_171(unk_0xA19140A5C42D8715(), iLocal_35[iLocal_64], 1) < 20f)
					{
						iLocal_330[iLocal_64] = 0;
					}
				}
			}
			else if (iLocal_330[iLocal_64] == 0)
			{
				iLocal_330[iLocal_64] = 1;
			}
		}
		else if (iLocal_330[iLocal_64] == 0)
		{
			iLocal_330[iLocal_64] = 1;
		}
		iLocal_64++;
	}
	if (((((iLocal_330[0] == 1 && iLocal_330[1] == 1) && iLocal_330[2] == 1) && iLocal_330[3] == 1) && iLocal_330[4] == 1) && iLocal_330[5] == 1)
	{
		iLocal_338 = 1;
	}
	else
	{
		iLocal_338 = 0;
	}
	iLocal_63 = 0;
	while (iLocal_63 <= 6)
	{
		if (unk_0xDC5D81351D6A4DDB(iLocal_35[iLocal_63]))
		{
			if (!unk_0x4915F4759304D5CF(iLocal_35[iLocal_63]))
			{
				func_190(iLocal_35[iLocal_63]);
				if (iLocal_28 == 3 || iLocal_28 == 4)
				{
					if (iLocal_31 == 2 && iLocal_29 == 0)
					{
						func_189(1);
						if (iLocal_416 == 1)
						{
							func_113();
						}
					}
					if (unk_0x4D0C87E89BCF8C94(iLocal_35[iLocal_63], 18))
					{
						if (iLocal_29 != 4)
						{
							func_189(4);
							if (iLocal_416 == 1)
							{
								func_187();
							}
							iLocal_482 = 1;
						}
					}
					if (iLocal_29 != 4)
					{
						if (unk_0x6D7FFF527E125F24(-1, 892.9f, -1552.4f, 30f, 40f))
						{
							func_189(4);
							if (iLocal_416 == 1)
							{
								func_187();
							}
						}
					}
					if ((((((((func_186(iLocal_35[iLocal_63], iLocal_35[0]) || func_186(iLocal_35[iLocal_63], iLocal_35[1])) || func_186(iLocal_35[iLocal_63], iLocal_35[2])) || func_186(iLocal_35[iLocal_63], iLocal_35[3])) || func_186(iLocal_35[iLocal_63], iLocal_35[4])) || func_186(iLocal_35[iLocal_63], iLocal_35[5])) || func_186(iLocal_35[iLocal_63], iLocal_35[6])) || func_186(iLocal_35[iLocal_63], iLocal_43[0])) || func_186(iLocal_35[iLocal_63], iLocal_43[1]))
					{
						if (iLocal_29 != 4)
						{
							func_189(4);
							if (iLocal_416 == 1)
							{
								func_187();
							}
							iLocal_482 = 1;
						}
					}
					if ((func_183(unk_0xA19140A5C42D8715()) == joaat("weapon_unarmed") || unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1)) || func_182(0))
					{
						if (iLocal_398 == 0)
						{
							if (func_171(unk_0xA19140A5C42D8715(), iLocal_35[iLocal_63], 1) > 20f)
							{
								if (iLocal_322[iLocal_63] == 1)
								{
									iLocal_322[iLocal_63] = 0;
								}
								if (((((iLocal_338 == 1 && iLocal_29 != 0) && iLocal_29 != 2) && iLocal_29 != 3) && iLocal_29 != 4) && iLocal_31 != 2)
								{
									func_189(0);
								}
							}
							if (func_171(unk_0xA19140A5C42D8715(), iLocal_35[iLocal_63], 1) < 20f && unk_0x85E4CC19842B6048(iLocal_35[iLocal_63], unk_0xA19140A5C42D8715()))
							{
								if (((iLocal_29 != 1 && iLocal_29 != 2) && iLocal_29 != 3) && iLocal_29 != 4)
								{
									if (iLocal_431 == 0 && iLocal_398 == 0)
									{
										func_189(1);
										if (iLocal_416 == 1)
										{
											func_113();
										}
									}
									else
									{
										func_189(3);
										if (iLocal_416 == 1)
										{
											func_187();
										}
									}
								}
							}
							if (func_171(unk_0xA19140A5C42D8715(), iLocal_35[iLocal_63], 1) < 20f && unk_0x85E4CC19842B6048(iLocal_35[iLocal_63], unk_0xA19140A5C42D8715()))
							{
								if (iLocal_322[iLocal_63] == 0)
								{
									iLocal_69[iLocal_63] = unk_0xFD34717937104F1C();
									iLocal_322[iLocal_63] = 1;
								}
								if (iLocal_322[iLocal_63] == 1)
								{
									if (unk_0xFD34717937104F1C() > iLocal_69[iLocal_63] + 24000)
									{
										if ((iLocal_29 != 2 && iLocal_29 != 3) && iLocal_29 != 4)
										{
											func_189(2);
											if (iLocal_416 == 1)
											{
												func_187();
											}
										}
									}
								}
							}
						}
						if (iLocal_398 == 1)
						{
							if (func_171(unk_0xA19140A5C42D8715(), iLocal_35[iLocal_63], 1) < 20f && unk_0x85E4CC19842B6048(iLocal_35[iLocal_63], unk_0xA19140A5C42D8715()))
							{
								if (iLocal_29 != 3 && iLocal_29 != 4)
								{
									func_189(3);
									if (iLocal_416 == 1)
									{
										func_187();
									}
								}
							}
						}
						if (unk_0x6625F609B391348E(unk_0xA19140A5C42D8715()))
						{
							if (iLocal_413 == 0)
							{
								iLocal_90 = unk_0xFD34717937104F1C();
								iLocal_413 = 1;
							}
							else if (unk_0xFD34717937104F1C() > iLocal_90 + 3000)
							{
								if (func_171(unk_0xA19140A5C42D8715(), iLocal_35[iLocal_63], 1) < 20f && unk_0x85E4CC19842B6048(iLocal_35[iLocal_63], unk_0xA19140A5C42D8715()))
								{
									if (iLocal_29 != 3 && iLocal_29 != 4)
									{
										func_189(3);
										if (iLocal_416 == 1)
										{
											func_187();
										}
									}
								}
							}
						}
						else if (iLocal_413 == 1)
						{
							iLocal_413 = 0;
						}
						if (unk_0xDC5D81351D6A4DDB(iLocal_33))
						{
							if (unk_0x1095F403F52B42E1(iLocal_33, 0))
							{
								if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iLocal_33, 1))
								{
									if (unk_0x85E4CC19842B6048(iLocal_35[iLocal_63], unk_0xA19140A5C42D8715()))
									{
										if (iLocal_29 != 3 && iLocal_29 != 4)
										{
											iLocal_390 = 1;
											func_189(3);
											if (iLocal_416 == 1)
											{
												func_187();
											}
										}
									}
								}
								if (func_171(unk_0xA19140A5C42D8715(), iLocal_33, 1) < 5f && unk_0x3D77D31E25961596(unk_0xA19140A5C42D8715()))
								{
									if (unk_0x85E4CC19842B6048(iLocal_35[iLocal_63], unk_0xA19140A5C42D8715()))
									{
										if (iLocal_29 != 3 && iLocal_29 != 4)
										{
											iLocal_390 = 1;
											func_189(3);
											if (iLocal_416 == 1)
											{
												func_187();
											}
										}
									}
									if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 917.3436f, -1554.42f, 29.26611f, 916.8774f, -1556.441f, 33.00661f, 2.25f, 0, 1, 0))
									{
										if (unk_0xDC5D81351D6A4DDB(iLocal_35[0]))
										{
											if (!unk_0x4915F4759304D5CF(iLocal_35[0]))
											{
												if (unk_0xA60C975CBAB69F34(iLocal_35[0], 912.3f, -1542.6f, 30f, 3f, 3f, 3f, 0, 1, 0))
												{
													if (iLocal_29 != 3 && iLocal_29 != 4)
													{
														iLocal_390 = 1;
														func_189(3);
														if (iLocal_416 == 1)
														{
															func_187();
														}
													}
												}
											}
										}
									}
								}
							}
						}
						if (unk_0xDC5D81351D6A4DDB(iLocal_35[6]))
						{
							if (!unk_0x4915F4759304D5CF(iLocal_35[6]))
							{
								if (func_171(unk_0xA19140A5C42D8715(), iLocal_35[6], 1) < 20f)
								{
									if ((unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 928.7163f, -1546.671f, 27.34603f, 921.8971f, -1549.752f, 34.04724f, 6.25f, 0, 1, 0) || unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 931.868f, -1545.185f, 27.3653f, 925.8857f, -1547.303f, 34.07205f, 3.5f, 0, 1, 0)) || unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 929.4908f, -1524.829f, 32.84098f, 929.3696f, -1545.288f, 37.34258f, 5f, 0, 1, 0))
									{
										if (unk_0x85E4CC19842B6048(iLocal_35[6], unk_0xA19140A5C42D8715()))
										{
											if (Local_119.f_2 > 31f)
											{
												if (iLocal_29 != 3 && iLocal_29 != 4)
												{
													iLocal_428 = 1;
													func_189(3);
													if (iLocal_416 == 1)
													{
														func_187();
													}
												}
											}
											else if (((iLocal_29 != 1 && iLocal_29 != 2) && iLocal_29 != 3) && iLocal_29 != 4)
											{
												func_189(1);
												if (iLocal_416 == 1)
												{
													func_113();
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
						if (iLocal_321 == 0)
						{
							iLocal_68 = unk_0xFD34717937104F1C();
							iLocal_321 = 1;
						}
						if (iLocal_321 == 1)
						{
							if (unk_0xFD34717937104F1C() > iLocal_68 + 4000 || iLocal_29 == 3)
							{
								if (func_171(unk_0xA19140A5C42D8715(), iLocal_35[iLocal_63], 1) < 20f)
								{
									if (unk_0x85E4CC19842B6048(iLocal_35[iLocal_63], unk_0xA19140A5C42D8715()))
									{
										if (iLocal_29 != 4)
										{
											func_189(4);
											if (iLocal_416 == 1)
											{
												func_187();
											}
										}
									}
								}
							}
						}
						if (func_171(unk_0xA19140A5C42D8715(), iLocal_35[iLocal_63], 1) < 40f)
						{
							if (unk_0x41CA0CDBE31A440F(unk_0xA19140A5C42D8715()))
							{
								if (unk_0x85E4CC19842B6048(iLocal_35[iLocal_63], unk_0xA19140A5C42D8715()) || unk_0xCCF89CDD3583210D(unk_0xD4E735F4B6A956AC(), iLocal_35[iLocal_63]))
								{
									if (iLocal_29 != 4)
									{
										func_189(4);
										if (iLocal_416 == 1)
										{
											func_187();
										}
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_63++;
	}
}

int func_186(int iParam0, int iParam1)
{
	if (((func_171(iParam0, iParam1, 1) < 20f && unk_0xC42DE41AEED00E7B(iParam0, iParam1, 90f)) && !unk_0x4915F4759304D5CF(iParam0)) && unk_0x4915F4759304D5CF(iParam1))
	{
		return 1;
	}
	return 0;
}

void func_187()
{
	Global_14688 = 0;
	func_188();
}

void func_188()
{
	unk_0xB4E5B1A6FE923ECB();
	Global_16833 = 0;
	if (unk_0x904275961B875DEB())
	{
		unk_0xA8B97F91CBDE376C(0);
		Global_15822 = 6;
	}
}

void func_189(int iParam0)
{
	iLocal_29 = iParam0;
	iLocal_67 = 0;
}

void func_190(int iParam0)
{
	iLocal_65 = 0;
	while (iLocal_65 <= 6)
	{
		if (iParam0 == iLocal_35[iLocal_65])
		{
			if (func_171(unk_0xA19140A5C42D8715(), iParam0, 1) < 20f && unk_0x85E4CC19842B6048(iParam0, unk_0xA19140A5C42D8715()))
			{
				if (iLocal_339[iLocal_65] == 0)
				{
					unk_0x22DD1D053CFF9707(iParam0, unk_0xA19140A5C42D8715(), -1, 1072, 3);
					iLocal_339[iLocal_65] = 1;
				}
			}
			else if (iLocal_339[iLocal_65] == 1)
			{
				unk_0x22DD1D053CFF9707(iParam0, unk_0xA19140A5C42D8715(), 1, 1072, 3);
				iLocal_339[iLocal_65] = 0;
			}
		}
		iLocal_65++;
	}
	switch (iLocal_29)
	{
		case 0:
			if (iLocal_67 == 0)
			{
				unk_0x1F4E5EFBFE503FB3(iParam0, 1);
				if (iParam0 == iLocal_35[0])
				{
					if (unk_0xCFA037D3F2BAF3E3(912.2f, -1542.5f, 29.8f, 3f, 0))
					{
						if (unk_0xF9D4EF1338E38AFB(iLocal_35[0], 1647992574) != 1 && unk_0xF9D4EF1338E38AFB(iLocal_35[0], -1680762137) != 1)
						{
							unk_0xC7C7DB7C57BC230B(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[1])
				{
					if (unk_0xCFA037D3F2BAF3E3(917.4f, -1517.4f, 30f, 3f, 0))
					{
						if (unk_0xF9D4EF1338E38AFB(iLocal_35[1], 1647992574) != 1 && unk_0xF9D4EF1338E38AFB(iLocal_35[1], -1680762137) != 1)
						{
							unk_0xC7C7DB7C57BC230B(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[2])
				{
					if (unk_0xCFA037D3F2BAF3E3(869.8f, -1541.2f, 29.4f, 3f, 0))
					{
						if (unk_0xF9D4EF1338E38AFB(iLocal_35[2], 1647992574) != 1 && unk_0xF9D4EF1338E38AFB(iLocal_35[2], -1680762137) != 1)
						{
							unk_0xC7C7DB7C57BC230B(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[3])
				{
					if (unk_0xCFA037D3F2BAF3E3(884.2f, -1574.1f, 30f, 3f, 0))
					{
						if (unk_0xF9D4EF1338E38AFB(iLocal_35[3], 1647992574) != 1 && unk_0xF9D4EF1338E38AFB(iLocal_35[3], -1680762137) != 1)
						{
							unk_0xC7C7DB7C57BC230B(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[4])
				{
					if (unk_0xCFA037D3F2BAF3E3(904f, -1575f, 30f, 3f, 0))
					{
						if (unk_0xF9D4EF1338E38AFB(iLocal_35[4], 1647992574) != 1 && unk_0xF9D4EF1338E38AFB(iLocal_35[4], -1680762137) != 1)
						{
							unk_0xC7C7DB7C57BC230B(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[5])
				{
					if (unk_0xCFA037D3F2BAF3E3(905.9f, -1574.8f, 29.9f, 3f, 0))
					{
						if (unk_0xF9D4EF1338E38AFB(iLocal_35[5], 1647992574) != 1 && unk_0xF9D4EF1338E38AFB(iLocal_35[5], -1680762137) != 1)
						{
							unk_0xC7C7DB7C57BC230B(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[6])
				{
					if (unk_0xCFA037D3F2BAF3E3(889.5f, -1562f, 29.7f, 3f, 0))
					{
						if (unk_0xF9D4EF1338E38AFB(iLocal_35[6], 1647992574) != 1 && unk_0xF9D4EF1338E38AFB(iLocal_35[6], -1680762137) != 1)
						{
							unk_0xC7C7DB7C57BC230B(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
						}
					}
				}
				iLocal_67++;
			}
			if (iLocal_67 == 1)
			{
				if (unk_0xDC5D81351D6A4DDB(iLocal_35[4]))
				{
					if (!unk_0x4915F4759304D5CF(iLocal_35[4]))
					{
						if (unk_0xDC5D81351D6A4DDB(iLocal_35[5]))
						{
							if (!unk_0x4915F4759304D5CF(iLocal_35[5]))
							{
								if (func_171(unk_0xA19140A5C42D8715(), iLocal_35[4], 1) < 25f)
								{
									if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 926.455f, -1582.384f, 29.32759f, 909.6322f, -1581.374f, 31.58907f, 9.5f, 0, 1, 0) || Local_119.f_1 > -1573f)
									{
										if (iLocal_416 == 0)
										{
											func_132(&uLocal_137, 3, iLocal_35[4], "CONSTRUCTION2", 0, 1);
											func_132(&uLocal_137, 5, iLocal_35[5], "CONSTRUCTION3", 0, 1);
											unk_0x22DD1D053CFF9707(iLocal_35[4], iLocal_35[5], -1, 0, 2);
											unk_0x22DD1D053CFF9707(iLocal_35[5], iLocal_35[4], -1, 0, 2);
											if (!func_176())
											{
												if (!unk_0x8187CC9EB2D7CFE6() || !unk_0x1BB77F49EA9C72A3())
												{
													if (func_170(&uLocal_137, "SOL1AUD", "SOL1_TALK", 6, 1, 1, 0))
													{
														iLocal_416 = 1;
													}
												}
											}
										}
									}
								}
								if (unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), 921.9f, -1556.5f, 30f, 5f, 5f, 5f, 0, 1, 1))
								{
									if (iLocal_423 == 0)
									{
										iLocal_92 = unk_0xFD34717937104F1C();
										iLocal_423 = 1;
									}
									if (iLocal_423 == 1)
									{
										if (unk_0xFD34717937104F1C() > iLocal_92 + 4000)
										{
											if (iLocal_416 == 0)
											{
												func_132(&uLocal_137, 3, iLocal_35[4], "CONSTRUCTION2", 0, 1);
												func_132(&uLocal_137, 5, iLocal_35[5], "CONSTRUCTION3", 0, 1);
												unk_0x22DD1D053CFF9707(iLocal_35[4], iLocal_35[5], -1, 0, 2);
												unk_0x22DD1D053CFF9707(iLocal_35[5], iLocal_35[4], -1, 0, 2);
												if (!func_176())
												{
													if (!unk_0x8187CC9EB2D7CFE6() || !unk_0x1BB77F49EA9C72A3())
													{
														if (func_170(&uLocal_137, "SOL1AUD", "SOL1_TALK", 6, 1, 1, 0))
														{
															iLocal_416 = 1;
														}
													}
												}
											}
										}
									}
								}
								if (iLocal_416 == 1 && !func_176())
								{
									if (iLocal_415 == 0)
									{
										if (unk_0xCFA037D3F2BAF3E3(865f, -1558.1f, 29.5f, 3f, 0))
										{
											unk_0x53FF9BDD8529ACD2(iLocal_35[4]);
											unk_0x53FF9BDD8529ACD2(iLocal_35[5]);
											unk_0xB62205D12F35BF49(iLocal_35[4], 865f, -1558.1f, 29.5f, 3f, 0);
											iLocal_415 = 1;
										}
									}
								}
							}
						}
					}
				}
				if (iParam0 == iLocal_35[6])
				{
					if (iLocal_424 == 0)
					{
						if (iLocal_425 == 0)
						{
							iLocal_93 = unk_0xFD34717937104F1C();
							iLocal_425 = 1;
						}
						if (unk_0xFD34717937104F1C() > iLocal_93 + 30000)
						{
							if (iLocal_424 == 0)
							{
								if (unk_0xCFA037D3F2BAF3E3(925f, -1561f, 30f, 3f, 0))
								{
									unk_0xB62205D12F35BF49(iLocal_35[6], 925f, -1561f, 30f, 3f, 0);
									iLocal_424 = 1;
									iLocal_425 = 0;
								}
							}
						}
					}
					if (iLocal_424 == 1)
					{
						if (unk_0xA60C975CBAB69F34(iLocal_35[6], 925f, -1561f, 30f, 3f, 3f, 3f, 0, 1, 0))
						{
							if (func_171(unk_0xA19140A5C42D8715(), iLocal_35[6], 1) < 15f && Local_119.f_2 < 40f)
							{
								if (iLocal_426 == 0)
								{
									if (unk_0xCFA037D3F2BAF3E3(909.5f, -1515.5f, 30f, 3f, 0))
									{
										unk_0xC7C7DB7C57BC230B(iLocal_35[6], 909.5f, -1515.5f, 30f, 50f, 0);
										iLocal_426 = 1;
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_67 == 0)
			{
				iLocal_65 = 0;
				while (iLocal_65 <= 6)
				{
					if (iLocal_31 == 0)
					{
						if (iParam0 == iLocal_35[iLocal_65])
						{
							if (func_171(unk_0xA19140A5C42D8715(), iParam0, 1) < 20f)
							{
								if (iLocal_347[iLocal_65] == 0)
								{
									if (unk_0x85E4CC19842B6048(iParam0, unk_0xA19140A5C42D8715()) || unk_0xCCF89CDD3583210D(unk_0xD4E735F4B6A956AC(), iParam0))
									{
										if (!unk_0x1A8481A7E865EC7C(iParam0))
										{
											unk_0x836A6A722DEA63F1(iParam0);
										}
										if (unk_0x1A8481A7E865EC7C(iParam0))
										{
											unk_0x9568B1B58F78FF36(iParam0);
										}
										unk_0x2F89329397A277BC(&uLocal_57);
										unk_0x8F65948C5AFB744E(0, unk_0xA19140A5C42D8715(), -1, 2f, 1f, 1073741824, 0);
										unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), 0);
										unk_0x301F42EEE3C40328(uLocal_57);
										unk_0xE1072FA2FECBAD96(iParam0, uLocal_57);
										unk_0x3A95A0A3221D4208(&uLocal_57);
										unk_0x1F4E5EFBFE503FB3(iParam0, 1);
										iLocal_339[iLocal_65] = 0;
										iLocal_347[iLocal_65] = 1;
									}
								}
								if (iLocal_347[iLocal_65] == 1)
								{
									if (!unk_0xC42DE41AEED00E7B(iParam0, unk_0xA19140A5C42D8715(), 45f))
									{
										unk_0x0177431263151C4E(iParam0, unk_0xA19140A5C42D8715(), 0);
										iLocal_347[iLocal_65] = 0;
									}
								}
							}
							else
							{
								if (iLocal_347[iLocal_65] == 1)
								{
									iLocal_347[iLocal_65] = 0;
								}
								if (iParam0 == iLocal_35[0])
								{
									if (unk_0xCFA037D3F2BAF3E3(912.2f, -1542.5f, 29.8f, 3f, 0))
									{
										if (unk_0xF9D4EF1338E38AFB(iLocal_35[0], 1647992574) != 1 && unk_0xF9D4EF1338E38AFB(iLocal_35[0], -1680762137) != 1)
										{
											unk_0xC7C7DB7C57BC230B(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
											unk_0x1F4E5EFBFE503FB3(iLocal_35[0], 1);
										}
									}
								}
								if (iParam0 == iLocal_35[1])
								{
									if (unk_0xCFA037D3F2BAF3E3(917.4f, -1517.4f, 30f, 3f, 0))
									{
										if (unk_0xF9D4EF1338E38AFB(iLocal_35[1], 1647992574) != 1 && unk_0xF9D4EF1338E38AFB(iLocal_35[1], -1680762137) != 1)
										{
											unk_0xC7C7DB7C57BC230B(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
											unk_0x1F4E5EFBFE503FB3(iLocal_35[1], 1);
										}
									}
								}
								if (iParam0 == iLocal_35[2])
								{
									if (unk_0xCFA037D3F2BAF3E3(869.8f, -1541.2f, 29.4f, 3f, 0))
									{
										if (unk_0xF9D4EF1338E38AFB(iLocal_35[2], 1647992574) != 1 && unk_0xF9D4EF1338E38AFB(iLocal_35[2], -1680762137) != 1)
										{
											unk_0xC7C7DB7C57BC230B(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
											unk_0x1F4E5EFBFE503FB3(iLocal_35[2], 1);
										}
									}
								}
								if (iParam0 == iLocal_35[3])
								{
									if (unk_0xCFA037D3F2BAF3E3(884.2f, -1574.1f, 30f, 3f, 0))
									{
										if (unk_0xF9D4EF1338E38AFB(iLocal_35[3], 1647992574) != 1 && unk_0xF9D4EF1338E38AFB(iLocal_35[3], -1680762137) != 1)
										{
											unk_0xC7C7DB7C57BC230B(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
											unk_0x1F4E5EFBFE503FB3(iLocal_35[3], 1);
										}
									}
								}
								if (iParam0 == iLocal_35[4])
								{
									if (unk_0xCFA037D3F2BAF3E3(904f, -1575f, 30f, 3f, 0))
									{
										if (unk_0xF9D4EF1338E38AFB(iLocal_35[4], 1647992574) != 1 && unk_0xF9D4EF1338E38AFB(iLocal_35[4], -1680762137) != 1)
										{
											unk_0xC7C7DB7C57BC230B(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
											unk_0x1F4E5EFBFE503FB3(iLocal_35[4], 1);
										}
									}
								}
								if (iParam0 == iLocal_35[5])
								{
									if (unk_0xCFA037D3F2BAF3E3(905.9f, -1574.8f, 29.9f, 3f, 0))
									{
										if (unk_0xF9D4EF1338E38AFB(iLocal_35[5], 1647992574) != 1 && unk_0xF9D4EF1338E38AFB(iLocal_35[5], -1680762137) != 1)
										{
											unk_0xC7C7DB7C57BC230B(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
											unk_0x1F4E5EFBFE503FB3(iLocal_35[5], 1);
										}
									}
								}
								if (iParam0 == iLocal_35[6])
								{
									if (unk_0xCFA037D3F2BAF3E3(889.5f, -1562f, 29.7f, 3f, 0))
									{
										if (unk_0xF9D4EF1338E38AFB(iLocal_35[6], 1647992574) != 1 && unk_0xF9D4EF1338E38AFB(iLocal_35[6], -1680762137) != 1)
										{
											unk_0xC7C7DB7C57BC230B(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
											unk_0x1F4E5EFBFE503FB3(iLocal_35[6], 1);
										}
									}
								}
							}
						}
					}
					else if (iParam0 == iLocal_35[iLocal_65])
					{
						if (func_171(unk_0xA19140A5C42D8715(), iParam0, 1) < 20f)
						{
							if (iLocal_347[iLocal_65] == 0)
							{
								if (unk_0x85E4CC19842B6048(iParam0, unk_0xA19140A5C42D8715()) || unk_0xCCF89CDD3583210D(unk_0xD4E735F4B6A956AC(), iParam0))
								{
									if (!unk_0x1A8481A7E865EC7C(iParam0))
									{
										unk_0x836A6A722DEA63F1(iParam0);
									}
									if (unk_0x1A8481A7E865EC7C(iParam0))
									{
										unk_0x9568B1B58F78FF36(iParam0);
									}
									unk_0x2F89329397A277BC(&uLocal_57);
									unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), 0);
									unk_0x22DD1D053CFF9707(0, unk_0xA19140A5C42D8715(), -1, 1072, 3);
									unk_0x301F42EEE3C40328(uLocal_57);
									unk_0xE1072FA2FECBAD96(iParam0, uLocal_57);
									unk_0x3A95A0A3221D4208(&uLocal_57);
									unk_0x1F4E5EFBFE503FB3(iParam0, 1);
									iLocal_339[iLocal_65] = 0;
									iLocal_347[iLocal_65] = 1;
								}
							}
							if (iLocal_347[iLocal_65] == 1)
							{
								if (!unk_0xC42DE41AEED00E7B(iParam0, unk_0xA19140A5C42D8715(), 45f))
								{
									unk_0x0177431263151C4E(iParam0, unk_0xA19140A5C42D8715(), 0);
									iLocal_347[iLocal_65] = 0;
								}
							}
						}
						else
						{
							if (iLocal_347[iLocal_65] == 1)
							{
								iLocal_347[iLocal_65] = 0;
							}
							if (iParam0 == iLocal_35[0])
							{
								if (unk_0xCFA037D3F2BAF3E3(912.2f, -1542.5f, 29.8f, 3f, 0))
								{
									if (unk_0xF9D4EF1338E38AFB(iLocal_35[0], 1647992574) != 1 && unk_0xF9D4EF1338E38AFB(iLocal_35[0], -1680762137) != 1)
									{
										unk_0xC7C7DB7C57BC230B(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
										unk_0x1F4E5EFBFE503FB3(iLocal_35[0], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[1])
							{
								if (unk_0xCFA037D3F2BAF3E3(917.4f, -1517.4f, 30f, 3f, 0))
								{
									if (unk_0xF9D4EF1338E38AFB(iLocal_35[1], 1647992574) != 1 && unk_0xF9D4EF1338E38AFB(iLocal_35[1], -1680762137) != 1)
									{
										unk_0xC7C7DB7C57BC230B(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
										unk_0x1F4E5EFBFE503FB3(iLocal_35[1], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[2])
							{
								if (unk_0xCFA037D3F2BAF3E3(869.8f, -1541.2f, 29.4f, 3f, 0))
								{
									if (unk_0xF9D4EF1338E38AFB(iLocal_35[2], 1647992574) != 1 && unk_0xF9D4EF1338E38AFB(iLocal_35[2], -1680762137) != 1)
									{
										unk_0xC7C7DB7C57BC230B(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
										unk_0x1F4E5EFBFE503FB3(iLocal_35[2], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[3])
							{
								if (unk_0xCFA037D3F2BAF3E3(884.2f, -1574.1f, 30f, 3f, 0))
								{
									if (unk_0xF9D4EF1338E38AFB(iLocal_35[3], 1647992574) != 1 && unk_0xF9D4EF1338E38AFB(iLocal_35[3], -1680762137) != 1)
									{
										unk_0xC7C7DB7C57BC230B(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
										unk_0x1F4E5EFBFE503FB3(iLocal_35[3], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[4])
							{
								if (unk_0xCFA037D3F2BAF3E3(904f, -1575f, 30f, 3f, 0))
								{
									if (unk_0xF9D4EF1338E38AFB(iLocal_35[4], 1647992574) != 1 && unk_0xF9D4EF1338E38AFB(iLocal_35[4], -1680762137) != 1)
									{
										unk_0xC7C7DB7C57BC230B(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
										unk_0x1F4E5EFBFE503FB3(iLocal_35[4], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[5])
							{
								if (unk_0xCFA037D3F2BAF3E3(905.9f, -1574.8f, 29.9f, 3f, 0))
								{
									if (unk_0xF9D4EF1338E38AFB(iLocal_35[5], 1647992574) != 1 && unk_0xF9D4EF1338E38AFB(iLocal_35[5], -1680762137) != 1)
									{
										unk_0xC7C7DB7C57BC230B(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
										unk_0x1F4E5EFBFE503FB3(iLocal_35[5], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[6])
							{
								if (unk_0xCFA037D3F2BAF3E3(889.5f, -1562f, 29.7f, 3f, 0))
								{
									if (unk_0xF9D4EF1338E38AFB(iLocal_35[6], 1647992574) != 1 && unk_0xF9D4EF1338E38AFB(iLocal_35[6], -1680762137) != 1)
									{
										unk_0xC7C7DB7C57BC230B(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
										unk_0x1F4E5EFBFE503FB3(iLocal_35[6], 1);
									}
								}
							}
						}
					}
					iLocal_65++;
				}
			}
			break;
		
		case 2:
			if (iLocal_483 == 0)
			{
				iLocal_483 = 1;
			}
			if (iLocal_67 == 0)
			{
				unk_0x80E7C4A78224C8F9(5, iLocal_302, joaat("player"));
				iLocal_67++;
			}
			if (iLocal_67 == 1)
			{
				iLocal_65 = 0;
				while (iLocal_65 <= 6)
				{
					if (iParam0 == iLocal_35[iLocal_65])
					{
						if (func_171(iParam0, unk_0xA19140A5C42D8715(), 1) < 15f)
						{
							if (func_171(iParam0, unk_0xA19140A5C42D8715(), 1) > 3f)
							{
								if (unk_0xF9D4EF1338E38AFB(iParam0, 242628503) != 0 || unk_0xF9D4EF1338E38AFB(iParam0, 242628503) != 1)
								{
									if (!unk_0x1A8481A7E865EC7C(iParam0))
									{
										unk_0x836A6A722DEA63F1(iParam0);
									}
									if (unk_0x1A8481A7E865EC7C(iParam0))
									{
										unk_0x9568B1B58F78FF36(iParam0);
									}
									unk_0x2F89329397A277BC(&uLocal_57);
									unk_0x8F65948C5AFB744E(0, unk_0xA19140A5C42D8715(), -1, 1f, 1f, 1073741824, 0);
									unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), 0);
									unk_0x301F42EEE3C40328(uLocal_57);
									unk_0xE1072FA2FECBAD96(iParam0, uLocal_57);
									unk_0x3A95A0A3221D4208(&uLocal_57);
									iLocal_339[iLocal_65] = 0;
								}
							}
						}
						else
						{
							if (iParam0 == iLocal_35[0])
							{
								if (unk_0xCFA037D3F2BAF3E3(912.2f, -1542.5f, 29.8f, 3f, 0))
								{
									if (unk_0xF9D4EF1338E38AFB(iLocal_35[0], 1647992574) != 1 && unk_0xF9D4EF1338E38AFB(iLocal_35[0], -1680762137) != 1)
									{
										unk_0xC7C7DB7C57BC230B(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
										unk_0x1F4E5EFBFE503FB3(iLocal_35[0], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[1])
							{
								if (unk_0xCFA037D3F2BAF3E3(917.4f, -1517.4f, 30f, 3f, 0))
								{
									if (unk_0xF9D4EF1338E38AFB(iLocal_35[1], 1647992574) != 1 && unk_0xF9D4EF1338E38AFB(iLocal_35[1], -1680762137) != 1)
									{
										unk_0xC7C7DB7C57BC230B(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
										unk_0x1F4E5EFBFE503FB3(iLocal_35[1], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[2])
							{
								if (unk_0xCFA037D3F2BAF3E3(869.8f, -1541.2f, 29.4f, 3f, 0))
								{
									if (unk_0xF9D4EF1338E38AFB(iLocal_35[2], 1647992574) != 1 && unk_0xF9D4EF1338E38AFB(iLocal_35[2], -1680762137) != 1)
									{
										unk_0xC7C7DB7C57BC230B(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
										unk_0x1F4E5EFBFE503FB3(iLocal_35[2], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[3])
							{
								if (unk_0xCFA037D3F2BAF3E3(884.2f, -1574.1f, 30f, 3f, 0))
								{
									if (unk_0xF9D4EF1338E38AFB(iLocal_35[3], 1647992574) != 1 && unk_0xF9D4EF1338E38AFB(iLocal_35[3], -1680762137) != 1)
									{
										unk_0xC7C7DB7C57BC230B(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
										unk_0x1F4E5EFBFE503FB3(iLocal_35[3], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[4])
							{
								if (unk_0xCFA037D3F2BAF3E3(904f, -1575f, 30f, 3f, 0))
								{
									if (unk_0xF9D4EF1338E38AFB(iLocal_35[4], 1647992574) != 1 && unk_0xF9D4EF1338E38AFB(iLocal_35[4], -1680762137) != 1)
									{
										unk_0xC7C7DB7C57BC230B(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
										unk_0x1F4E5EFBFE503FB3(iLocal_35[4], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[5])
							{
								if (unk_0xCFA037D3F2BAF3E3(905.9f, -1574.8f, 29.9f, 3f, 0))
								{
									if (unk_0xF9D4EF1338E38AFB(iLocal_35[5], 1647992574) != 1 && unk_0xF9D4EF1338E38AFB(iLocal_35[5], -1680762137) != 1)
									{
										unk_0xC7C7DB7C57BC230B(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
										unk_0x1F4E5EFBFE503FB3(iLocal_35[5], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[6])
							{
								if (unk_0xCFA037D3F2BAF3E3(889.5f, -1562f, 29.7f, 3f, 0))
								{
									if (unk_0xF9D4EF1338E38AFB(iLocal_35[6], 1647992574) != 1 && unk_0xF9D4EF1338E38AFB(iLocal_35[6], -1680762137) != 1)
									{
										unk_0xC7C7DB7C57BC230B(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
										unk_0x1F4E5EFBFE503FB3(iLocal_35[6], 1);
									}
								}
							}
						}
					}
					iLocal_65++;
				}
			}
			break;
		
		case 3:
			if (iLocal_483 == 0)
			{
				iLocal_483 = 1;
			}
			if (iLocal_393 == 0)
			{
				if (iLocal_394 == 0)
				{
					iLocal_79 = unk_0xFD34717937104F1C();
					iLocal_394 = 1;
				}
				if (iLocal_394 == 1)
				{
					if (unk_0xFD34717937104F1C() > iLocal_79 + 9000)
					{
						unk_0x9BB7BCDF2AC2D6F9(5);
						unk_0xBF6EED5D6E0CD9BF(1f);
						unk_0xF10B3BC4F73177E5(unk_0xD4E735F4B6A956AC(), 2, 0);
						unk_0xDF341226C0B8BAC3(unk_0xD4E735F4B6A956AC(), 0);
						iLocal_393 = 1;
					}
				}
			}
			if (iLocal_67 == 0)
			{
				unk_0x80E7C4A78224C8F9(5, iLocal_302, joaat("player"));
				iLocal_67++;
			}
			if (iLocal_67 == 1)
			{
				if (iLocal_28 == 3)
				{
					iLocal_65 = 0;
					while (iLocal_65 <= 6)
					{
						if (iParam0 == iLocal_35[iLocal_65])
						{
							if (func_171(iParam0, unk_0xA19140A5C42D8715(), 1) < 100f)
							{
								if (iLocal_355[iLocal_65] == 0)
								{
									unk_0x1F4E5EFBFE503FB3(iParam0, 1);
									iLocal_355[iLocal_65] = 1;
								}
								if (iLocal_363[iLocal_65] == 0)
								{
									if (!unk_0x1A8481A7E865EC7C(iParam0))
									{
										unk_0x836A6A722DEA63F1(iParam0);
									}
									if (unk_0x1A8481A7E865EC7C(iParam0))
									{
										unk_0x9568B1B58F78FF36(iParam0);
									}
									unk_0xB943C83C5BDB3DBB(iParam0, 100f, 0);
									iLocal_339[iLocal_65] = 0;
									iLocal_363[iLocal_65] = 1;
								}
							}
						}
						iLocal_65++;
					}
					if (iLocal_468 == 0)
					{
						if (unk_0xDC5D81351D6A4DDB(iLocal_35[0]))
						{
							if (!unk_0x4915F4759304D5CF(iLocal_35[0]))
							{
								if (unk_0xDC5D81351D6A4DDB(iLocal_33))
								{
									if (unk_0x1095F403F52B42E1(iLocal_33, 0))
									{
										if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iLocal_33, 1) && unk_0xA60C975CBAB69F34(iLocal_33, 919.2f, -1554.4f, 30f, 4f, 4f, 4f, 0, 1, 0))
										{
											if (!unk_0x1A8481A7E865EC7C(iLocal_35[0]))
											{
												unk_0x836A6A722DEA63F1(iLocal_35[0]);
											}
											if (unk_0x1A8481A7E865EC7C(iLocal_35[0]))
											{
												unk_0x9568B1B58F78FF36(iLocal_35[0]);
											}
											unk_0x2F89329397A277BC(&uLocal_57);
											unk_0x956B3CF461C0C1C9(0, 917.8f, -1561f, 29f, 3f, -1, 1048576000, 0, 1193033728);
											unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), 0);
											unk_0x3F01127ECD227890(0, "misscarsteal4@director_grip", "mcs_2_loop_grip1", 8f, -8f, -1, 1, 0, 0, 0, 0);
											unk_0x301F42EEE3C40328(uLocal_57);
											unk_0xE1072FA2FECBAD96(iLocal_35[0], uLocal_57);
											unk_0x3A95A0A3221D4208(&uLocal_57);
											iLocal_468 = 1;
										}
									}
								}
							}
						}
					}
					if (iLocal_468 == 1 && iLocal_487 == 0)
					{
						if (unk_0xDC5D81351D6A4DDB(iLocal_35[0]))
						{
							if (!unk_0x4915F4759304D5CF(iLocal_35[0]))
							{
								if (unk_0xA60C975CBAB69F34(iLocal_35[0], 917.8f, -1561f, 29f, 2f, 2f, 2f, 0, 1, 0))
								{
									func_132(&uLocal_137, 3, iLocal_35[0], "FHPrepBWorker", 0, 1);
									func_179(iLocal_35[0], "FHPB_BBAA", "FHPrepBWorker", 4);
									iLocal_487 = 1;
								}
							}
						}
					}
					if (iLocal_467 == 0)
					{
						if (unk_0xFD34717937104F1C() > iLocal_79 + 3000)
						{
							if (unk_0xDC5D81351D6A4DDB(iLocal_35[5]))
							{
								if (!unk_0x4915F4759304D5CF(iLocal_35[5]))
								{
									unk_0x3F01127ECD227890(iLocal_35[5], "cellphone@str", "cellphone_call_listen_c", 4f, -8f, -1, 49, 0, 0, 0, 0);
									iLocal_111 = unk_0xFD34717937104F1C();
									iLocal_467 = 1;
								}
							}
						}
					}
					else if (iLocal_466 == 0)
					{
						if (unk_0xFD34717937104F1C() > iLocal_111 + 5000)
						{
							if (unk_0xDC5D81351D6A4DDB(iLocal_35[5]))
							{
								if (!unk_0x4915F4759304D5CF(iLocal_35[5]))
								{
									unk_0x9568B1B58F78FF36(iLocal_35[5]);
									unk_0xDA4D3941AFF8EF12(iLocal_35[5], unk_0xA19140A5C42D8715(), 0, 16);
									iLocal_466 = 1;
								}
							}
						}
					}
				}
				iLocal_65 = 0;
				while (iLocal_65 <= 6)
				{
					if (iLocal_306[iLocal_65] == 0)
					{
						if (iParam0 == iLocal_35[iLocal_65])
						{
							if (unk_0xDC5D81351D6A4DDB(iParam0))
							{
								if (!unk_0x4915F4759304D5CF(iParam0))
								{
									unk_0x1F4E5EFBFE503FB3(iParam0, 1);
									if (unk_0x5D7DFE2058701942(iParam0, 0))
									{
										if (func_171(iParam0, unk_0xA19140A5C42D8715(), 1) > 200f)
										{
											if (!unk_0x1A8481A7E865EC7C(iParam0))
											{
												unk_0x836A6A722DEA63F1(iParam0);
											}
											if (unk_0x1A8481A7E865EC7C(iParam0))
											{
												unk_0x9568B1B58F78FF36(iParam0);
											}
											unk_0x33B5487515BD13D5(iParam0, unk_0xA19140A5C42D8715(), 1000f, -1, 0, 0);
											iLocal_306[iLocal_65] = 1;
										}
									}
									else if (func_171(iParam0, unk_0xA19140A5C42D8715(), 1) > 100f)
									{
										if (!unk_0x1A8481A7E865EC7C(iParam0))
										{
											unk_0x836A6A722DEA63F1(iParam0);
										}
										if (unk_0x1A8481A7E865EC7C(iParam0))
										{
											unk_0x9568B1B58F78FF36(iParam0);
										}
										unk_0x33B5487515BD13D5(iParam0, unk_0xA19140A5C42D8715(), 1000f, -1, 0, 0);
										iLocal_306[iLocal_65] = 1;
									}
								}
							}
						}
					}
					iLocal_65++;
				}
			}
			if (iLocal_28 == 4)
			{
				iLocal_65 = 0;
				while (iLocal_65 <= 6)
				{
					if (iLocal_306[iLocal_65] == 0)
					{
						if (iParam0 == iLocal_35[iLocal_65])
						{
							if (unk_0xDC5D81351D6A4DDB(iParam0))
							{
								if (!unk_0x4915F4759304D5CF(iParam0))
								{
									if (!unk_0x1A8481A7E865EC7C(iParam0))
									{
										unk_0x836A6A722DEA63F1(iParam0);
									}
									if (unk_0x1A8481A7E865EC7C(iParam0))
									{
										unk_0x9568B1B58F78FF36(iParam0);
									}
									unk_0x1F4E5EFBFE503FB3(iParam0, 1);
									unk_0x33B5487515BD13D5(iParam0, unk_0xA19140A5C42D8715(), 1000f, -1, 0, 0);
									unk_0xD738221C247C8B71(iParam0, 1);
									unk_0x7E4E83D33161D01A(&iParam0);
									iLocal_306[iLocal_65] = 1;
								}
							}
						}
					}
					iLocal_65++;
				}
			}
			break;
		
		case 4:
			if (iLocal_483 == 0)
			{
				iLocal_483 = 1;
			}
			if (iLocal_393 == 0)
			{
				if (iLocal_394 == 0)
				{
					iLocal_79 = unk_0xFD34717937104F1C();
					iLocal_394 = 1;
				}
				if (iLocal_394 == 1)
				{
					if (unk_0xFD34717937104F1C() > iLocal_79 + 6000)
					{
						unk_0x9BB7BCDF2AC2D6F9(5);
						unk_0xBF6EED5D6E0CD9BF(1f);
						unk_0xF10B3BC4F73177E5(unk_0xD4E735F4B6A956AC(), 2, 0);
						unk_0xDF341226C0B8BAC3(unk_0xD4E735F4B6A956AC(), 0);
						iLocal_393 = 1;
					}
				}
			}
			if (iLocal_67 == 0)
			{
				unk_0x80E7C4A78224C8F9(5, iLocal_302, joaat("player"));
				unk_0x1F4E5EFBFE503FB3(iParam0, 1);
				iLocal_67++;
			}
			if (iLocal_67 == 1)
			{
				iLocal_65 = 0;
				while (iLocal_65 <= 6)
				{
					if (unk_0xDC5D81351D6A4DDB(iLocal_35[iLocal_65]))
					{
						if (!unk_0x4915F4759304D5CF(iLocal_35[iLocal_65]))
						{
							if (func_171(unk_0xA19140A5C42D8715(), iLocal_35[iLocal_65], 1) < 15f)
							{
								if (func_191(iLocal_35[iLocal_65], 6))
								{
									if (unk_0x85E4CC19842B6048(iLocal_35[iLocal_65], unk_0xA19140A5C42D8715()))
									{
										if (iLocal_379[iLocal_65] == 0)
										{
											if (!unk_0x1A8481A7E865EC7C(iLocal_35[iLocal_65]))
											{
												unk_0x836A6A722DEA63F1(iLocal_35[iLocal_65]);
											}
											if (unk_0x1A8481A7E865EC7C(iLocal_35[iLocal_65]))
											{
												unk_0x9568B1B58F78FF36(iLocal_35[iLocal_65]);
											}
											unk_0xABC4374E9189E483(iLocal_35[iLocal_65], -1, unk_0xA19140A5C42D8715(), -1, 0);
											iLocal_379[iLocal_65] = 1;
											iLocal_371[iLocal_65] = 0;
											iLocal_339[iLocal_65] = 0;
											iLocal_91 = unk_0xFD34717937104F1C();
										}
									}
									else if (unk_0xFD34717937104F1C() > iLocal_91 + 300)
									{
										iLocal_371[iLocal_65] = 0;
									}
								}
								else if (iLocal_371[iLocal_65] == 0)
								{
									if (!unk_0x1A8481A7E865EC7C(iLocal_35[iLocal_65]))
									{
										unk_0x836A6A722DEA63F1(iLocal_35[iLocal_65]);
									}
									if (unk_0x1A8481A7E865EC7C(iLocal_35[iLocal_65]))
									{
										unk_0x9568B1B58F78FF36(iLocal_35[iLocal_65]);
									}
									unk_0x33B5487515BD13D5(iLocal_35[iLocal_65], unk_0xA19140A5C42D8715(), 250f, -1, 0, 0);
									iLocal_371[iLocal_65] = 1;
									iLocal_379[iLocal_65] = 0;
								}
							}
							else if (iLocal_371[iLocal_65] == 0)
							{
								if (!unk_0x1A8481A7E865EC7C(iLocal_35[iLocal_65]))
								{
									unk_0x836A6A722DEA63F1(iLocal_35[iLocal_65]);
								}
								if (unk_0x1A8481A7E865EC7C(iLocal_35[iLocal_65]))
								{
									unk_0x9568B1B58F78FF36(iLocal_35[iLocal_65]);
								}
								unk_0x33B5487515BD13D5(iLocal_35[iLocal_65], unk_0xA19140A5C42D8715(), 250f, -1, 0, 0);
								iLocal_371[iLocal_65] = 1;
								iLocal_379[iLocal_65] = 0;
							}
						}
					}
					iLocal_65++;
				}
			}
			break;
	}
}

int func_191(int iParam0, int iParam1)
{
	if (unk_0xDC5D81351D6A4DDB(iParam0) && !unk_0x4915F4759304D5CF(iParam0))
	{
		if (unk_0x852B8F739A2072BE(unk_0xA19140A5C42D8715(), iParam1))
		{
			if (unk_0x669ABFB25D991447(unk_0xD4E735F4B6A956AC(), iParam0) || unk_0x7591AFB11E7EDDA0(unk_0xD4E735F4B6A956AC(), iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_192()
{
	iLocal_46 = func_25(0);
	iLocal_47 = func_25(1);
	iLocal_48 = func_25(2);
	if (func_33(iLocal_46, 0))
	{
		if (!unk_0x4915F4759304D5CF(iLocal_46))
		{
			if (!func_32(iLocal_46))
			{
				if (!func_194())
				{
					if (func_193(iLocal_46))
					{
						if (func_31(iLocal_46, 0))
						{
							unk_0x1F7948851FB36E88(iLocal_46, 1, 1);
							unk_0x1F4E5EFBFE503FB3(iLocal_46, 1);
							unk_0x9568B1B58F78FF36(iLocal_46);
							iLocal_473 = 0;
							iLocal_476 = 0;
							iLocal_479 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_473 == 0)
				{
					if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
					{
						iLocal_473 = 1;
					}
					else if (unk_0x5D7DFE2058701942(iLocal_46, 0))
					{
						if (!unk_0xE0FD180CD24C0B67(iLocal_46, unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), 0))
						{
							iLocal_473 = 1;
						}
					}
				}
				if (iLocal_473 == 0)
				{
					if (func_194())
					{
						iLocal_473 = 1;
					}
				}
				if (iLocal_470 == 1)
				{
					if ((func_193(iLocal_46) && unk_0x82384F63D814C864(iLocal_46, 1)) && iLocal_473 == 0)
					{
						Local_122 = { unk_0xE2BBD32891C18569(iLocal_46, 1) };
						unk_0x7E393C5E27D0ACA8(Local_122.f_0, Local_122.f_1, Local_116.f_0, Local_116.f_1);
						if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) == 0)
						{
							if (iLocal_476 == 0)
							{
								if (unk_0x789CFCFF551BAB0A(Local_122.f_0, Local_122.f_1, Local_116.f_0, Local_116.f_1))
								{
									unk_0xD776C8F3311B26BC(iLocal_46, unk_0xCAEB6CE71A2C7212(iLocal_46, 0), Local_116, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_479 = 0;
									iLocal_476 = 1;
								}
							}
						}
						else if (unk_0xDC5D81351D6A4DDB(unk_0xEB67B4270D12F60E(Local_122, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_479 == 0)
							{
								unk_0x4123165906C17D87(iLocal_46, unk_0xCAEB6CE71A2C7212(iLocal_46, 0), unk_0xEB67B4270D12F60E(Local_122, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, 1);
								iLocal_476 = 0;
								iLocal_479 = 1;
							}
						}
						else if (iLocal_476 == 0)
						{
							if (unk_0x789CFCFF551BAB0A(Local_122.f_0, Local_122.f_1, Local_116.f_0, Local_116.f_1))
							{
								unk_0xD776C8F3311B26BC(iLocal_46, unk_0xCAEB6CE71A2C7212(iLocal_46, 0), Local_116, 4, 30f, 786468, 3f, 15f, 0);
								iLocal_479 = 0;
								iLocal_476 = 1;
							}
						}
					}
					else
					{
						iLocal_473 = 1;
					}
				}
				if (iLocal_473 == 1)
				{
					if (func_24(iLocal_46))
					{
						iLocal_473 = 0;
					}
				}
			}
		}
	}
	if (func_33(iLocal_48, 0))
	{
		if (!unk_0x4915F4759304D5CF(iLocal_48))
		{
			if (!func_32(iLocal_48))
			{
				if (!func_194())
				{
					if (func_193(iLocal_48))
					{
						if (func_31(iLocal_48, 0))
						{
							unk_0x1F7948851FB36E88(iLocal_48, 1, 1);
							unk_0x1F4E5EFBFE503FB3(iLocal_48, 1);
							unk_0x9568B1B58F78FF36(iLocal_48);
							iLocal_475 = 0;
							iLocal_477 = 0;
							iLocal_480 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_475 == 0)
				{
					if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
					{
						iLocal_475 = 1;
					}
					else if (unk_0x5D7DFE2058701942(iLocal_48, 0))
					{
						if (!unk_0xE0FD180CD24C0B67(iLocal_48, unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), 0))
						{
							iLocal_475 = 1;
						}
					}
				}
				if (iLocal_475 == 0)
				{
					if (func_194())
					{
						iLocal_475 = 1;
					}
				}
				if (iLocal_471 == 1)
				{
					if ((func_193(iLocal_48) && unk_0x82384F63D814C864(iLocal_48, 1)) && iLocal_475 == 0)
					{
						Local_122 = { unk_0xE2BBD32891C18569(iLocal_48, 1) };
						unk_0x7E393C5E27D0ACA8(Local_122.f_0, Local_122.f_1, Local_116.f_0, Local_116.f_1);
						if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) == 0)
						{
							if (iLocal_477 == 0)
							{
								if (unk_0x789CFCFF551BAB0A(Local_122.f_0, Local_122.f_1, Local_116.f_0, Local_116.f_1))
								{
									unk_0xD776C8F3311B26BC(iLocal_48, unk_0xCAEB6CE71A2C7212(iLocal_48, 0), Local_116, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_480 = 0;
									iLocal_477 = 1;
								}
							}
						}
						else if (unk_0xDC5D81351D6A4DDB(unk_0xEB67B4270D12F60E(Local_122, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_480 == 0)
							{
								unk_0x4123165906C17D87(iLocal_48, unk_0xCAEB6CE71A2C7212(iLocal_48, 0), unk_0xEB67B4270D12F60E(Local_122, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, 1);
								iLocal_477 = 0;
								iLocal_480 = 1;
							}
						}
						else if (iLocal_477 == 0)
						{
							if (unk_0x789CFCFF551BAB0A(Local_122.f_0, Local_122.f_1, Local_116.f_0, Local_116.f_1))
							{
								unk_0xD776C8F3311B26BC(iLocal_48, unk_0xCAEB6CE71A2C7212(iLocal_48, 0), Local_116, 4, 30f, 786468, 3f, 15f, 0);
								iLocal_480 = 0;
								iLocal_477 = 1;
							}
						}
					}
					else
					{
						iLocal_475 = 1;
					}
				}
				if (iLocal_475 == 1)
				{
					if (func_24(iLocal_48))
					{
						iLocal_475 = 0;
					}
				}
			}
		}
	}
	if (func_33(iLocal_47, 0))
	{
		if (!unk_0x4915F4759304D5CF(iLocal_47))
		{
			if (!func_32(iLocal_47))
			{
				if (!func_194())
				{
					if (func_193(iLocal_47))
					{
						if (func_31(iLocal_47, 0))
						{
							unk_0x1F7948851FB36E88(iLocal_47, 1, 1);
							unk_0x1F4E5EFBFE503FB3(iLocal_47, 1);
							unk_0x9568B1B58F78FF36(iLocal_47);
							iLocal_474 = 0;
							iLocal_478 = 0;
							iLocal_481 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_474 == 0)
				{
					if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
					{
						iLocal_474 = 1;
					}
					else if (unk_0x5D7DFE2058701942(iLocal_47, 0))
					{
						if (!unk_0xE0FD180CD24C0B67(iLocal_47, unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), 0))
						{
							iLocal_474 = 1;
						}
					}
				}
				if (iLocal_474 == 0)
				{
					if (func_194())
					{
						iLocal_474 = 1;
					}
				}
				if (iLocal_472 == 1)
				{
					if ((func_193(iLocal_47) && unk_0x82384F63D814C864(iLocal_47, 1)) && iLocal_474 == 0)
					{
						Local_122 = { unk_0xE2BBD32891C18569(iLocal_47, 1) };
						unk_0x7E393C5E27D0ACA8(Local_122.f_0, Local_122.f_1, Local_116.f_0, Local_116.f_1);
						if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) == 0)
						{
							if (iLocal_478 == 0)
							{
								if (unk_0x789CFCFF551BAB0A(Local_122.f_0, Local_122.f_1, Local_116.f_0, Local_116.f_1))
								{
									unk_0xD776C8F3311B26BC(iLocal_47, unk_0xCAEB6CE71A2C7212(iLocal_47, 0), Local_116, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_481 = 0;
									iLocal_478 = 1;
								}
							}
						}
						else if (unk_0xDC5D81351D6A4DDB(unk_0xEB67B4270D12F60E(Local_122, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_481 == 0)
							{
								unk_0x4123165906C17D87(iLocal_47, unk_0xCAEB6CE71A2C7212(iLocal_47, 0), unk_0xEB67B4270D12F60E(Local_122, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, 1);
								iLocal_478 = 0;
								iLocal_481 = 1;
							}
						}
						else if (iLocal_478 == 0)
						{
							if (unk_0x789CFCFF551BAB0A(Local_122.f_0, Local_122.f_1, Local_116.f_0, Local_116.f_1))
							{
								unk_0xD776C8F3311B26BC(iLocal_47, unk_0xCAEB6CE71A2C7212(iLocal_47, 0), Local_116, 4, 30f, 786468, 3f, 15f, 0);
								iLocal_481 = 0;
								iLocal_478 = 1;
							}
						}
					}
					else
					{
						iLocal_474 = 1;
					}
				}
				if (iLocal_474 == 1)
				{
					if (func_24(iLocal_47))
					{
						iLocal_474 = 0;
					}
				}
			}
		}
	}
}

int func_193(int iParam0)
{
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) && unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
	{
		if (!unk_0x4915F4759304D5CF(iParam0))
		{
			if (unk_0xE0FD180CD24C0B67(iParam0, unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), 0) && unk_0xB0D49A1F9F054602(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), -1, 0) == iParam0)
			{
				if (unk_0xDC5D81351D6A4DDB(iLocal_33))
				{
					if (unk_0x1095F403F52B42E1(iLocal_33, 0))
					{
						if ((unk_0xE0FD180CD24C0B67(iParam0, iLocal_33, 0) && unk_0xB0D49A1F9F054602(iLocal_33, -1, 0) == iParam0) && !unk_0xA60C975CBAB69F34(iLocal_33, Local_116, 3f, 3f, 3f, 0, 1, 0))
						{
							if (iParam0 == iLocal_46)
							{
								iLocal_470 = 1;
							}
							if (iParam0 == iLocal_48)
							{
								iLocal_471 = 1;
							}
							if (iParam0 == iLocal_47)
							{
								iLocal_472 = 1;
							}
							return 1;
						}
					}
				}
			}
		}
	}
	if (iParam0 == iLocal_46)
	{
		iLocal_470 = 0;
	}
	if (iParam0 == iLocal_48)
	{
		iLocal_471 = 0;
	}
	if (iParam0 == iLocal_47)
	{
		iLocal_472 = 0;
	}
	return 0;
}

bool func_194()
{
	return Global_17226;
}

void func_195()
{
	if (unk_0xDC5D81351D6A4DDB(iLocal_33))
	{
		if (!unk_0x1095F403F52B42E1(iLocal_33, 0))
		{
			func_198(3);
			return;
		}
		else
		{
			if (func_197(&iLocal_33))
			{
				func_198(2);
				return;
			}
			if (unk_0xDC5D81351D6A4DDB(iLocal_32))
			{
				if (!unk_0x1095F403F52B42E1(iLocal_32, 0))
				{
					func_198(1);
					return;
				}
				if (unk_0x1095F403F52B42E1(iLocal_32, 0))
				{
					if (!unk_0xD53D19F97BC843F7(iLocal_33))
					{
						if ((unk_0x2BED1ED73F8FC841(iLocal_32) || func_196(iLocal_32)) || func_197(&iLocal_32))
						{
							func_198(1);
							return;
						}
					}
				}
			}
		}
	}
	if (iLocal_28 == 3 || iLocal_28 == 4)
	{
		if (unk_0xDC5D81351D6A4DDB(iLocal_32))
		{
			if (unk_0x1095F403F52B42E1(iLocal_32, 0))
			{
				if (func_171(iLocal_32, unk_0xA19140A5C42D8715(), 1) > 600f)
				{
					func_198(5);
					return;
				}
			}
		}
	}
	if (unk_0xDC5D81351D6A4DDB(iLocal_49))
	{
		if (unk_0x4915F4759304D5CF(iLocal_49))
		{
			func_198(6);
			return;
		}
	}
}

int func_196(int iParam0)
{
	if (unk_0xDC5D81351D6A4DDB(uParam0))
	{
		if (unk_0x7112137033807390(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x1095F403F52B42E1(iParam0, 0))
		{
			if (!unk_0x463E3A48A46C9195(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_197(var uParam0)
{
	if (unk_0x1095F403F52B42E1(*uParam0, 0))
	{
		if (((unk_0xEB9F2352179A557A(*uParam0, 0, 7000) || unk_0xEB9F2352179A557A(*uParam0, 3, 30000)) || unk_0xEB9F2352179A557A(*uParam0, 2, 30000)) || unk_0xEB9F2352179A557A(*uParam0, 1, 40000))
		{
			return 1;
		}
	}
	return 0;
}

void func_198(int iParam0)
{
	iLocal_30 = iParam0;
	if (iLocal_28 != 6)
	{
		iLocal_28 = 6;
		iLocal_62 = 0;
	}
}

void func_199(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_106070.f_9057.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_106070.f_9057.f_99.f_58[iParam0] = iParam1;
}

void func_200()
{
	if (iLocal_28 == 5)
	{
		if (iLocal_483 == 0)
		{
			func_201(657);
		}
	}
}

void func_201(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	Global_56182 = 0;
	if (!Global_56406[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_68276)
	{
		if (Global_68277[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_68277[iVar1 /*9*/].f_1 = 1;
			Global_68277[iVar1 /*9*/].f_2 = 0f;
			if (Global_68277[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

bool func_202(bool bParam0)
{
	if (!bParam0 && unk_0x8B1574454E8C2421(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x05EFB6A616B6FADE(Global_71453, 0);
}

void func_203()
{
	unk_0x87A84AA8644AACAE(unk_0xD4E735F4B6A956AC(), 0);
	unk_0xFC00A668AFC2126D(joaat("packer"), 0);
	unk_0xFC00A668AFC2126D(joaat("phantom"), 0);
	unk_0xEEF61BF551977B0E("FHPRB_START");
	unk_0xEEF61BF551977B0E("FHPRB_TRUCK");
	unk_0xEEF61BF551977B0E("FHPRB_COPS");
	unk_0xEEF61BF551977B0E("FHPRB_LOST");
	unk_0xEEF61BF551977B0E("FHPRB_STOP");
	unk_0xE70AC26DFC59863A(uLocal_51, 0);
	unk_0xE70AC26DFC59863A(uLocal_52, 0);
	unk_0xE70AC26DFC59863A(uLocal_53, 0);
	unk_0xE70AC26DFC59863A(uLocal_54, 0);
	unk_0xE70AC26DFC59863A(uLocal_55, 0);
	unk_0xE70AC26DFC59863A(uLocal_56, 0);
	if (unk_0x97AA049940DBD81F("SCRAP_SECURITY"))
	{
		if (unk_0x63D3995CEC2213BA("SCRAP_SECURITY"))
		{
			unk_0xF10C7DDEAC709758("SCRAP_SECURITY", 0);
		}
	}
	unk_0x9BB7BCDF2AC2D6F9(5);
	if (unk_0x3C43F06C8C621742(iLocal_114))
	{
		unk_0xAC827E2E972FD69A(iLocal_114);
	}
	if (unk_0x3C43F06C8C621742(iLocal_115))
	{
		unk_0xAC827E2E972FD69A(iLocal_115);
	}
	unk_0x8F1A9FE6D91AAFEB();
}

void func_204()
{
	int iVar0;
	
	if (unk_0xB1FDFCECA75CE4A7("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1424);
	}
	if (Global_106070.f_9057 || func_202(0))
	{
		if (!func_205())
		{
			iVar0 = func_13();
			if (iVar0 != -1)
			{
				if (!func_7(iVar0))
				{
					return;
				}
				unk_0x2BCFB39E86340DAA(&(Global_84079[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_12();
		}
	}
}

int func_205()
{
	if (((Global_93232 == 13 || Global_93232 == 10) || Global_93232 == 11) || Global_93232 == 12)
	{
		return 0;
	}
	return 1;
}

