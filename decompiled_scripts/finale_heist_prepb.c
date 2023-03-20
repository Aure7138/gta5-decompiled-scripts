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
	if (unk_0x4B4BD87E3D30C50D(3))
	{
		unk_0x3345CB85AB9EC035("FHPRB_STOP");
		func_189();
		func_188();
	}
	if (func_187(0))
	{
		unk_0xC8C54AFEF8609CEF("FINPRB", 0);
	}
	unk_0x72FAE653AFC04E97("WorkerPedMainGroup", &iLocal_302);
	unk_0x72FAE653AFC04E97("GuardMainGroup", &iLocal_303);
	unk_0x5416146016E39BF7(joaat("packer"), 1);
	unk_0x329C14474C072D19(5, iLocal_303, joaat("player"));
	unk_0x329C14474C072D19(5, iLocal_302, joaat("player"));
	unk_0x329C14474C072D19(1, iLocal_303, iLocal_302);
	unk_0x329C14474C072D19(1, iLocal_302, iLocal_303);
	unk_0x329C14474C072D19(1, iLocal_303, joaat("COP"));
	unk_0x329C14474C072D19(1, joaat("COP"), iLocal_303);
	unk_0x329C14474C072D19(1, iLocal_302, joaat("COP"));
	unk_0x329C14474C072D19(1, joaat("COP"), iLocal_302);
	while (true)
	{
		unk_0x185B194BB229460F("M_FINPRB", 0);
		if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
		{
			unk_0x1706625EBCDDEBF9(unk_0x77F050A399DB77ED(), 230, 0);
		}
		func_185();
		if (iLocal_317 == 0)
		{
			if (unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590()) > 0)
			{
				func_184(27, 1);
				iLocal_317 = 1;
			}
		}
		if (iLocal_396 == 1)
		{
			func_180();
		}
		func_177();
		func_170();
		func_162();
		func_157();
		func_154();
		switch (iLocal_28)
		{
			case 0:
				func_153();
				break;
			
			case 1:
				func_150();
				break;
			
			case 2:
				func_126();
				break;
			
			case 3:
				func_124();
				break;
			
			case 4:
				func_101();
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
			unk_0xA1E3A2CCF985EE86();
			unk_0x4ACCE973F9C3CA3B(1);
			unk_0x3345CB85AB9EC035("FHPRA_FAIL");
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
				func_188();
			}
			break;
	}
}

int func_2()
{
	if (Global_91106 == 7)
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
	if (Global_91106 == 7 || Global_91106 == 8)
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
	if (!unk_0x0AAC2160036975D9(sParam0))
	{
		if (unk_0xEA58ADAD120FD97C(sParam0) <= 16)
		{
			StringCopy(&Global_69549, sParam0, 16);
			StringCopy(&Global_69553, "", 16);
			if (unk_0x2855A92E54CD64A3())
			{
				unk_0xE28EC0DBB37DA281();
			}
		}
	}
}

void func_6(int iParam0)
{
	int iVar0;
	
	if (Global_99250.f_7703 || func_187(0))
	{
		iVar0 = func_13();
		if (!func_7(iVar0))
		{
			return;
		}
		unk_0x573691DB812DC8AA(&(Global_82191[iVar0 /*5*/].f_1), 5);
		Global_91142 = iParam0;
	}
}

int func_7(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_12();
	if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
	{
		unk_0x1DB69211D646BE79(5000);
	}
	iVar0 = Global_82191[iParam0 /*5*/];
	iVar1 = Global_69586.f_109[iVar0 /*4*/];
	func_11(iVar1, 1);
	unk_0xC18BB2F3D2A3C7C6(unk_0x8ACD527A7E574590());
	unk_0x6B5B946261CEF74B(unk_0x8ACD527A7E574590());
	func_8(&(Global_99250.f_1754.f_539), iVar1);
	if (Global_85614 == Global_91143)
	{
		Global_99250.f_7703.f_330[iVar1 /*6*/].f_1++;
	}
	if (!unk_0xB56FEBC510E7E9DE(Global_82227[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
		{
			unk_0x63668AF351176C27(0);
		}
	}
	Global_99250.f_7703.f_330[iVar1 /*6*/].f_2++;
	Global_85614 = Global_91143;
	if (iParam0 == -1)
	{
		if (Global_99250.f_7703)
		{
		}
		return 0;
	}
	if (unk_0xB56FEBC510E7E9DE(Global_82191[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0xB56FEBC510E7E9DE(Global_82191[iParam0 /*5*/].f_1, 5))
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
		iVar1 = Global_99250.f_17151[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0xB56FEBC510E7E9DE(Global_99250.f_7703.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_10(Global_99250.f_17151[iVar0], &Var2, &fVar5))
			{
				Global_99250.f_17151[iVar0] = 318;
				func_9(&(uParam0->f_1524[iVar0]));
				uParam0->f_1528[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1538[iVar0] = 0f;
				uParam0->f_1542[iVar0] = 0;
				uParam0->f_1546[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1556[iVar0] = 0;
				Global_88829[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_88829[iVar0 /*29*/].f_9 = 0f;
				Global_88829[iVar0 /*29*/].f_12 = 0f;
				Global_88829[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_88829[iVar0 /*29*/].f_10 = 0f;
				Global_88829[iVar0 /*29*/].f_13 = 0f;
				Global_88829[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_88829[iVar0 /*29*/].f_11 = 0f;
				Global_88829[iVar0 /*29*/].f_14 = 0f;
				Global_88829[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_88829[iVar0 /*29*/].f_26 = 0f;
				Global_88829[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_88829[iVar0 /*29*/].f_27 = 0f;
				Global_88829[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_88829[iVar0 /*29*/].f_28 = 0f;
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
			Global_85424[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_85424[iParam0 /*2*/] = 0;
	}
}

void func_12()
{
	Global_91141 = 1;
	if (unk_0x57F90ABC20B2C976(unk_0x8ACD527A7E574590(), 1))
	{
		if (unk_0x0AAC2160036975D9(&Global_69549))
		{
			switch (func_14())
			{
				case 0:
					StringCopy(&Global_69549, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_69549, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_69549, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_69553, "", 16);
		}
		Global_91141 = 0;
	}
	else if (!unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
	{
		if (unk_0x0AAC2160036975D9(&Global_69549))
		{
			switch (func_14())
			{
				case 0:
					StringCopy(&Global_69549, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_69549, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_69549, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_69553, "", 16);
		}
		Global_91141 = 0;
		unk_0x573691DB812DC8AA(&(Global_91106.f_20), 25);
	}
}

int func_13()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0xB56FEBC510E7E9DE(Global_82191[iVar0 /*5*/].f_1, 2))
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
	return Global_99250.f_1754.f_539.f_3549;
}

void func_15()
{
	int iVar0;
	
	if (unk_0x1F2158D615BC4B25(unk_0x77F050A399DB77ED()))
	{
		if (func_19(Global_99250.f_1754.f_539.f_3549) != unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()))
		{
			iVar0 = func_18(unk_0x77F050A399DB77ED());
			if (func_17(iVar0) && (!func_16(14) || Global_98202))
			{
				if (Global_99250.f_1754.f_539.f_3549 != iVar0 && func_17(Global_99250.f_1754.f_539.f_3549))
				{
					Global_99250.f_1754.f_539.f_3550 = Global_99250.f_1754.f_539.f_3549;
				}
				Global_99250.f_1754.f_539.f_3551 = iVar0;
				Global_99250.f_1754.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_99250.f_1754.f_539.f_3549 != 145)
			{
				Global_99250.f_1754.f_539.f_3551 = Global_99250.f_1754.f_539.f_3549;
			}
			return;
		}
	}
	Global_99250.f_1754.f_539.f_3549 = 145;
}

bool func_16(int iParam0)
{
	return Global_35700 == iParam0;
}

bool func_17(int iParam0)
{
	return iParam0 < 3;
}

int func_18(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x1F2158D615BC4B25(iParam0))
	{
		iVar1 = unk_0xDF1398076E26B0E4(iParam0);
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
		return Global_99250.f_32503[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_20()
{
	func_154();
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
		unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), 0, 0);
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
		if (unk_0x2CC731F9E664299E())
		{
			if (!func_30())
			{
				unk_0x70F217796775EC85(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1));
			}
			func_27(iLocal_33, -1, 1);
		}
		if (!unk_0x398F615441F52A47())
		{
			unk_0xCA6D671341405469(800);
		}
		iLocal_396 = 1;
		iLocal_62 = 1;
	}
	if (iLocal_62 == 1)
	{
		if (unk_0x1F2158D615BC4B25(iLocal_33))
		{
			if (unk_0x968EA16107097324(iLocal_33, 0))
			{
				if (func_14() == 0)
				{
					if (func_33(iLocal_48, 0))
					{
						if (unk_0xE5FADE1166052251(iLocal_48, iLocal_33, 0))
						{
							unk_0xE2CB8488CFA42209(iLocal_48);
							unk_0xD3778FD9E17F7E71(iLocal_48);
							unk_0x9526D9575C237F2F(iLocal_48, 1);
							unk_0x365CA2781A1728CB(iLocal_48, iLocal_33, 0);
						}
					}
					if (func_33(iLocal_47, 0))
					{
						if (unk_0xE5FADE1166052251(iLocal_47, iLocal_33, 0))
						{
							unk_0xE2CB8488CFA42209(iLocal_47);
							unk_0xD3778FD9E17F7E71(iLocal_47);
							unk_0x9526D9575C237F2F(iLocal_47, 1);
							unk_0x365CA2781A1728CB(iLocal_47, iLocal_33, 0);
						}
					}
				}
				if (func_14() == 2)
				{
					if (func_33(iLocal_46, 0))
					{
						if (unk_0xE5FADE1166052251(iLocal_46, iLocal_33, 0))
						{
							unk_0xE2CB8488CFA42209(iLocal_46);
							unk_0xD3778FD9E17F7E71(iLocal_46);
							unk_0x9526D9575C237F2F(iLocal_46, 1);
							unk_0x365CA2781A1728CB(iLocal_46, iLocal_33, 0);
						}
					}
					if (func_33(iLocal_47, 0))
					{
						if (unk_0xE5FADE1166052251(iLocal_47, iLocal_33, 0))
						{
							unk_0xE2CB8488CFA42209(iLocal_47);
							unk_0xD3778FD9E17F7E71(iLocal_47);
							unk_0x9526D9575C237F2F(iLocal_47, 1);
							unk_0x365CA2781A1728CB(iLocal_47, iLocal_33, 0);
						}
					}
				}
				if (func_14() == 1)
				{
					if (func_33(iLocal_46, 0))
					{
						if (unk_0xE5FADE1166052251(iLocal_46, iLocal_33, 0))
						{
							unk_0xE2CB8488CFA42209(iLocal_46);
							unk_0xD3778FD9E17F7E71(iLocal_46);
							unk_0x9526D9575C237F2F(iLocal_46, 1);
							unk_0x365CA2781A1728CB(iLocal_46, iLocal_33, 0);
						}
					}
					if (func_33(iLocal_48, 0))
					{
						if (unk_0xE5FADE1166052251(iLocal_48, iLocal_33, 0))
						{
							unk_0xE2CB8488CFA42209(iLocal_48);
							unk_0xD3778FD9E17F7E71(iLocal_48);
							unk_0x9526D9575C237F2F(iLocal_48, 1);
							unk_0x365CA2781A1728CB(iLocal_48, iLocal_33, 0);
						}
					}
				}
				if (unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_33, 0))
				{
					unk_0x365CA2781A1728CB(unk_0x77F050A399DB77ED(), iLocal_33, 0);
				}
			}
		}
		unk_0x5AE11BC36633DE4E(0);
		iLocal_62 = 2;
	}
	if (iLocal_62 == 2)
	{
		if (unk_0x1F2158D615BC4B25(iLocal_33))
		{
			if (unk_0x968EA16107097324(iLocal_33, 0))
			{
				if (iLocal_320 == 0)
				{
					if (func_14() == 0)
					{
						if (func_33(iLocal_48, 0))
						{
							if (!unk_0xE5FADE1166052251(iLocal_48, iLocal_33, 0))
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
							if (!unk_0xE5FADE1166052251(iLocal_47, iLocal_33, 0))
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
							if (!unk_0xE5FADE1166052251(iLocal_46, iLocal_33, 0))
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
							if (!unk_0xE5FADE1166052251(iLocal_47, iLocal_33, 0))
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
							if (!unk_0xE5FADE1166052251(iLocal_46, iLocal_33, 0))
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
							if (!unk_0xE5FADE1166052251(iLocal_48, iLocal_33, 0))
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
				else if (!unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_33, 1))
				{
					unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), 1, 0);
					unk_0x5AE11BC36633DE4E(0);
					iLocal_62 = 3;
				}
			}
		}
	}
	if (iLocal_62 == 3)
	{
		if (unk_0x1F2158D615BC4B25(iLocal_33))
		{
			if (unk_0x968EA16107097324(iLocal_33, 0))
			{
				unk_0x3C072F008135D7A8(iLocal_33, 0);
				unk_0xF1040A0061DC97E5(iLocal_33, 2);
				unk_0xB92C428B448B51A4(iLocal_33, 1);
			}
		}
		if (unk_0x1F2158D615BC4B25(iLocal_32))
		{
			if (unk_0x968EA16107097324(iLocal_32, 0))
			{
				unk_0xB92C428B448B51A4(iLocal_32, 1);
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
	func_188();
}

void func_22(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_55661)
	{
		Global_55661 = iParam1;
	}
	if (bParam0)
	{
		if ((func_187(0) && Global_69563.f_1 == 1) && func_23(Global_69563))
		{
		}
		else
		{
			Global_55659 = 1;
		}
	}
	if (Global_99250.f_7703 || func_187(0))
	{
		iVar0 = func_13();
		iVar1 = Global_82191[iVar0 /*5*/];
		uVar2 = Global_69586.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_99250.f_7703)
			{
			}
			return;
		}
		if (unk_0xB56FEBC510E7E9DE(Global_82191[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0xB56FEBC510E7E9DE(Global_82191[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0x573691DB812DC8AA(&(Global_82191[iVar0 /*5*/].f_1), 4);
		unk_0x573691DB812DC8AA(&Global_69565, 1);
		Global_69581 = uVar2;
		Global_69582 = unk_0x3EAC9995EC220C5A();
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
	if (!unk_0x1E80C02AC16B6622(iParam0))
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
		if (!unk_0xB56FEBC510E7E9DE(Global_87293, iVar0))
		{
			return 0;
		}
		unk_0xA5F70A8B83BDFA49(&Global_87293, iVar0);
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
		return unk_0x77F050A399DB77ED();
	}
	return Global_88917[func_26(iParam0)];
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
		while (Global_91101 != 6)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xADD55DEFB7B8CB4F(0);
		if (unk_0x1F2158D615BC4B25(unk_0x77F050A399DB77ED()))
		{
			if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
			{
				unk_0xA178BDB6167F2C05(unk_0x77F050A399DB77ED());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
			{
				if (unk_0x1F2158D615BC4B25(iParam0))
				{
					if (unk_0x968EA16107097324(iParam0, 0))
					{
						if (!unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iParam0, 0))
						{
							unk_0x213DEA03167527BC(unk_0x77F050A399DB77ED(), iParam0, iParam1);
							unk_0xABF261CA61470DE0(0f, 1065353216);
							unk_0x8793DE27084C2CBD(0f);
							unk_0x4EDE34FBADD967A6(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
			{
				unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), 1, 0);
			}
		}
		unk_0xEF8B3F790037DC66();
		func_28(0);
	}
}

void func_28(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x573691DB812DC8AA(&(Global_91106.f_20), 13);
	}
	else
	{
		unk_0xA5F70A8B83BDFA49(&(Global_91106.f_20), 13);
	}
}

int func_29()
{
	if (Global_91106 == 10 || Global_91106 == 9)
	{
		return 1;
	}
	return 0;
}

bool func_30()
{
	return unk_0xB56FEBC510E7E9DE(Global_91106.f_20, 13);
}

int func_31(int iParam0, int iParam1)
{
	int iVar0;
	
	return 0;
	if (!unk_0x1E80C02AC16B6622(iParam0))
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
		if (unk_0xB56FEBC510E7E9DE(Global_87293, iVar0))
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0x77F050A399DB77ED())
			{
				return 0;
			}
		}
		if (unk_0xB56FEBC510E7E9DE(Global_87292, iVar0))
		{
			unk_0x4CB11C6B02301E8B(iParam0, 0, 0);
			unk_0xA09672E91FA74DCA(iParam0, 0);
			unk_0x573691DB812DC8AA(&Global_87293, iVar0);
			return 1;
		}
	}
	return 0;
}

int func_32(int iParam0)
{
	int iVar0;
	
	return 0;
	if (!unk_0x1E80C02AC16B6622(iParam0))
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
		if (unk_0xB56FEBC510E7E9DE(Global_87293, iVar0))
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
	if (!unk_0x1E80C02AC16B6622(iParam0))
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
			if (iParam0 == unk_0x77F050A399DB77ED())
			{
				return 0;
			}
		}
		if (unk_0xB56FEBC510E7E9DE(Global_87292, iVar0))
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
	unk_0x3DF319A8C78275DD(unk_0x8ACD527A7E574590(), 0, 0);
	unk_0x32EB36CA60E96828(unk_0x8ACD527A7E574590(), 0);
	if (!unk_0x2CC731F9E664299E())
	{
		unk_0x16AA81661A0624FB(0);
	}
	func_99();
	unk_0xA1E3A2CCF985EE86();
	func_98();
	func_97();
	func_36();
	if (!func_30())
	{
		func_35();
	}
	unk_0x8793DE27084C2CBD(0f);
}

void func_35()
{
	switch (iLocal_28)
	{
		case 2:
			unk_0x0B5F372F57E469AC(unk_0x77F050A399DB77ED(), 856.9501f, -1573.177f, 29.4751f, 1, 0, 0, 1);
			unk_0x2DA164E80FDEE7F2(unk_0x77F050A399DB77ED(), 288.3586f);
			break;
		
		case 3:
			unk_0x0B5F372F57E469AC(unk_0x77F050A399DB77ED(), 856.9501f, -1573.177f, 29.4751f, 1, 0, 0, 1);
			unk_0x2DA164E80FDEE7F2(unk_0x77F050A399DB77ED(), 288.3586f);
			break;
		
		case 4:
			if (unk_0x1F2158D615BC4B25(iLocal_33))
			{
				if (unk_0x968EA16107097324(iLocal_33, 0))
				{
					if (!unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_33, 0))
					{
						unk_0x213DEA03167527BC(unk_0x77F050A399DB77ED(), iLocal_33, -1);
					}
				}
			}
			break;
		
		case 5:
			if (unk_0x1F2158D615BC4B25(iLocal_33))
			{
				if (unk_0x968EA16107097324(iLocal_33, 0))
				{
					if (!unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_33, 0))
					{
						unk_0x213DEA03167527BC(unk_0x77F050A399DB77ED(), iLocal_33, -1);
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
			func_93();
			if (func_92() && func_89(7f, 7f, 7f, 1))
			{
				func_87();
				while (!func_86())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				iLocal_34 = func_37(818.8139f, -1610.406f, 30.7951f, 264.412f);
			}
			unk_0x4AAD01BBE039D160(0.01f);
			break;
		
		case 4:
			iLocal_418 = 0;
			iLocal_419 = 0;
			iLocal_420 = 0;
			func_93();
			if (unk_0x1F2158D615BC4B25(iLocal_33))
			{
				if (unk_0x968EA16107097324(iLocal_33, 0))
				{
					unk_0x0B5F372F57E469AC(iLocal_33, 89.2131f, -596.9456f, 30.6224f, 1, 0, 0, 1);
					unk_0x2DA164E80FDEE7F2(iLocal_33, 161.1163f);
				}
			}
			unk_0x0BA5964C07973FE9(41f, -615f, 30f, 50f, 1, 1, 0, 0);
			break;
		
		case 5:
			iLocal_418 = 1;
			iLocal_419 = 1;
			iLocal_420 = 1;
			func_93();
			unk_0x0BA5964C07973FE9(41f, -615f, 30f, 50f, 1, 1, 0, 0);
			if (unk_0x1F2158D615BC4B25(iLocal_33))
			{
				if (unk_0x968EA16107097324(iLocal_33, 0))
				{
					unk_0x0B5F372F57E469AC(iLocal_33, 28.4065f, -608.9371f, 30.6293f, 1, 0, 0, 1);
					unk_0x2DA164E80FDEE7F2(iLocal_33, 70.7778f);
				}
			}
			unk_0xC60576ADD1AECA45(joaat("s_m_m_security_01"));
			while (!unk_0x4A4B6FD54C499B7D(joaat("s_m_m_security_01")))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			if (!unk_0x1F2158D615BC4B25(iLocal_49))
			{
				iLocal_49 = unk_0x6665DCC708A346F3(26, joaat("s_m_m_security_01"), 64.904f, -617.9949f, 30.7028f, 223.555f, 1, 1);
				unk_0xFB4F6722A032A0F0(joaat("s_m_m_security_01"));
				unk_0x1706625EBCDDEBF9(iLocal_49, 324, 1);
			}
			break;
	}
}

int func_37(struct<3> Param0, float fParam3)
{
	return func_38(&(Global_92910.f_2311), Param0, fParam3, 0);
}

int func_38(var uParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	var uVar5;
	int iVar8;
	
	if (func_85(uParam0))
	{
		if (func_84(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { *uParam0 };
			fParam4 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall"))
		{
			if (unk_0xAA6B5EBBFC85F888(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, 1))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam4 = 89.5f;
			}
		}
		if (func_83(uParam0))
		{
			unk_0x0BA5964C07973FE9(Param1, 5f, 1, 0, 0, 0);
			func_82(Param1, 5f, 0);
			iVar0 = unk_0x2EEA15C0C12C8CDE(uParam0->f_12.f_66, Param1, fParam4, 1, 1);
			if (unk_0x1F2158D615BC4B25(iVar0))
			{
				Var1 = { unk_0xAF99169F0F5AE41D(iVar0, 1) };
				if (unk_0xB7A628320EFF8E47(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					unk_0x1021AD8FA25CC2DB(iVar0, Param1, 0, 0, 1);
				}
				func_75(iVar0, &(uParam0->f_12), 0, 1);
				bVar4 = true;
				if (unk_0xD3FAF4AD23FDF2DA(uParam0->f_12.f_66) || unk_0x11A603DFBDC09944(uParam0->f_12.f_66))
				{
					if (!unk_0x64DAE43AEDA767BC(Param1.f_0, Param1.f_1, (Param1.f_2 + 30f), Param1.f_0, Param1.f_1, (Param1.f_2 - 30f), &uVar5))
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					unk_0xC1D3820702043A43(iVar0);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam5)
					{
						if (unk_0xAEA8A39798337671(unk_0xDF1398076E26B0E4(iVar0)))
						{
							func_74(uParam0->f_11, 1);
						}
						else if (unk_0x9FAD4C61F8FD96DE(unk_0xDF1398076E26B0E4(iVar0)))
						{
							func_74(uParam0->f_11, 2);
						}
					}
					unk_0x2D3F28A0C5140A6B(iVar0, 0);
					unk_0x8AE960B8C5E2E6D7(iVar0, 0);
					unk_0xD1CF9849336C4ED5(iVar0, 1);
					func_73(iVar0, uParam0->f_11);
				}
				else if ((!func_70(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && unk_0x35D1CAD6ADAB6491(unk_0x664B47C58CE8A0A4(), "startup_positioning"))
				{
					iVar8 = func_69(iVar0);
					if (iVar8 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_62(iVar8);
					}
				}
				if (((Global_91106 != 13 && Global_91106 != 10) && Global_91106 != 11) && Global_91106 != 12)
				{
					if (unk_0x39BD4614CF899227(&(Global_91106.f_3)) == Global_69174)
					{
						if (uParam0->f_12.f_66 == Global_99250.f_18735.f_69[21 /*78*/].f_66)
						{
							func_59(24, 0);
							func_62(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_39(iVar0, uParam0->f_11);
				}
				unk_0xFB4F6722A032A0F0(uParam0->f_12.f_66);
				Var1 = { unk_0xAF99169F0F5AE41D(iVar0, 1) };
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
	
	if (!func_44(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x07A8845F7F106A38(iParam0, -1);
		if (!unk_0x1F2158D615BC4B25(iVar0))
		{
			iVar0 = unk_0x0719727137101E59(iParam0, -1);
		}
		if (unk_0x1F2158D615BC4B25(iVar0) && !unk_0x1E80C02AC16B6622(iVar0))
		{
			if (unk_0xDF1398076E26B0E4(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0xDF1398076E26B0E4(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0xDF1398076E26B0E4(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_99250.f_1754.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0xDF1398076E26B0E4(iParam0) == Global_99250.f_18735.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0x0AAC2160036975D9(&(Global_99250.f_18735.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x35D1CAD6ADAB6491(unk_0x2FE7FA21D340AA95(iParam0), &(Global_99250.f_18735.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_99250.f_18735.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_99250.f_18735.f_5592[iVar1] = iVar2;
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
		if (unk_0xDF1398076E26B0E4(iParam0) == Global_99250.f_18735.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0x0AAC2160036975D9(&(Global_99250.f_18735.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x35D1CAD6ADAB6491(unk_0x2FE7FA21D340AA95(iParam0), &(Global_99250.f_18735.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_99250.f_18735.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_99250.f_18735.f_5590 = iParam1;
	Global_69091 = iParam0;
	Global_99250.f_18735.f_5588 = 1;
	func_40(iParam0, &(Global_99250.f_18735.f_5510));
}

void func_40(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x968EA16107097324(iParam0, 0))
	{
		func_43(uParam1);
		uParam1->f_66 = unk_0xDF1398076E26B0E4(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x2FE7FA21D340AA95(iParam0), 16);
		*uParam1 = unk_0x21C7BB3FC7BDA875(iParam0);
		unk_0x7F28F78FC4A382A2(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x7A754CC677BF330F(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xF782955E2B9CA2A2(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xA586FD6870BD7171(iParam0);
		uParam1->f_67 = unk_0xF933C1D6868EE7D5(iParam0);
		uParam1->f_69 = unk_0x9489701175ECF585(iParam0);
		uParam1->f_70 = unk_0x9777E452CDE55809(iParam0);
		unk_0x56E6FA42E5717914(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x521FE229CF7A3A21(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0xCA6A17118B1E6E81(iParam0, 2))
		{
			unk_0x573691DB812DC8AA(&(uParam1->f_77), 28);
		}
		if (unk_0xCA6A17118B1E6E81(iParam0, 3))
		{
			unk_0x573691DB812DC8AA(&(uParam1->f_77), 29);
		}
		if (unk_0xCA6A17118B1E6E81(iParam0, 0))
		{
			unk_0x573691DB812DC8AA(&(uParam1->f_77), 30);
		}
		if (unk_0xCA6A17118B1E6E81(iParam0, 1))
		{
			unk_0x573691DB812DC8AA(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x5265771D79F24A99(iParam0, 0))
		{
			uParam1->f_68 = unk_0x362684AE59B8BD46(iParam0);
		}
		if (unk_0x4F32F86538FB8979(uParam1->f_66))
		{
			if (unk_0xA2822ECBE08BA15C(iParam0))
			{
				switch (unk_0x0AFB4FC1B0EEBCE1(iParam0))
				{
					case 2:
					case 0:
						unk_0xA5F70A8B83BDFA49(&(uParam1->f_77), 23);
						unk_0x573691DB812DC8AA(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0xA5F70A8B83BDFA49(&(uParam1->f_77), 23);
						unk_0xA5F70A8B83BDFA49(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0x573691DB812DC8AA(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x573691DB812DC8AA(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0xF961EB70CA5E8895(iParam0))
		{
			unk_0x573691DB812DC8AA(&(uParam1->f_77), 9);
		}
		if (unk_0x8A147513C0F86C22(iParam0))
		{
			unk_0x573691DB812DC8AA(&(uParam1->f_77), 10);
		}
		if (unk_0xBA6E8DEFECA26A39(iParam0))
		{
			unk_0x573691DB812DC8AA(&(uParam1->f_77), 13);
			unk_0x221F450D7BC62614(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0xB01B059B334F67A5(iParam0))
		{
			unk_0x573691DB812DC8AA(&(uParam1->f_77), 12);
		}
		func_42(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x3F119D3637D9EFD9(iParam0, iVar0 + 1))
			{
				unk_0x573691DB812DC8AA(&(uParam1->f_77), func_41(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x2E5C1D84FCCF5CE1(iParam0, 0))
		{
			unk_0x573691DB812DC8AA(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0xA5F70A8B83BDFA49(&(uParam1->f_77), 11);
		}
		if (unk_0xB22BDF5B6DBD298B(iParam0, "IgnoredByQuickSave") && unk_0x51ABF0A53A19B212(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x573691DB812DC8AA(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0xA5F70A8B83BDFA49(&(uParam1->f_77), 27);
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
	
	if (!unk_0x968EA16107097324(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xB944775459039806(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0xE4A2AB18E282A5D6(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x412350E0E75BCEFD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x329167DA18FC4DBD(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x329167DA18FC4DBD(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_43(var uParam0)
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

int func_44(int iParam0)
{
	if ((((((((((!unk_0x1F2158D615BC4B25(iParam0) || !unk_0x968EA16107097324(iParam0, 0)) || func_57(iParam0, 0, 0)) || func_57(iParam0, 1, 0)) || func_57(iParam0, 2, 0)) || func_56(iParam0) != 145) || func_55(iParam0)) || func_54(iParam0)) || func_53(iParam0)) || func_52(iParam0)) || !func_45(unk_0xDF1398076E26B0E4(iParam0)))
	{
		if (func_54(iParam0))
		{
		}
		if (func_54(iParam0))
		{
		}
		if (func_57(iParam0, 0, 0))
		{
		}
		if (func_57(iParam0, 1, 0))
		{
		}
		if (func_57(iParam0, 2, 0))
		{
		}
		if (func_56(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_45(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_46(iParam0))
	{
		return 0;
	}
	if (((unk_0xD3FAF4AD23FDF2DA(iParam0) || unk_0x4F32F86538FB8979(iParam0)) || unk_0x5FA5E5014A0AC183(iParam0)) || unk_0xD68DC1905B617ADD(iParam0))
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

int func_46(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xED25CDA223A93673(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0x4C779B19E6DDCDA2())) || (iParam0 == joaat("buffalo3") && !unk_0x4C779B19E6DDCDA2())) || (iParam0 == joaat("gauntlet2") && !unk_0x4C779B19E6DDCDA2())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0x4C779B19E6DDCDA2())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_51())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x1FB97E894B0A4FC6())
		{
			if (unk_0x50BB432A9DE546D9(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xD5451DF6AA0E4BDB(Var1.f_0))
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
		if ((((!func_50() && !func_49()) && !func_48()) && !func_47()) && !func_51())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xBB3DCD23C363D187() || unk_0x2C063B4379F0C076()) || unk_0xA24A81C5933F1B29())
		{
		}
		else if (!func_48())
		{
			return 0;
		}
	}
	return 1;
}

int func_47()
{
	return 0;
}

int func_48()
{
	return 1;
}

int func_49()
{
	return 1;
}

int func_50()
{
	if (unk_0x368F9074322AFD91(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_51()
{
	var uVar0;
	
	if (unk_0x9C77CB51883D12D1())
	{
		if (unk_0xF5783AD1B5945861())
		{
			if (unk_0x05E0388968EC9D08())
			{
				unk_0xBA16CA557222A92B(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x573691DB812DC8AA(&uVar0, 2);
				unk_0x573691DB812DC8AA(&uVar0, 4);
				unk_0x573691DB812DC8AA(&uVar0, 6);
				unk_0x573691DB812DC8AA(&Global_25, 2);
				unk_0x573691DB812DC8AA(&Global_25, 4);
				unk_0x573691DB812DC8AA(&Global_25, 6);
				unk_0x5716C8F12991E399(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x5B08E2B84948C788())
				{
					uVar0 = unk_0x824EA95BCC498CB4(866);
					unk_0x573691DB812DC8AA(&uVar0, 0);
					unk_0xF49776B60F784AFF(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_136298 == 2)
	{
		return 1;
	}
	else if (Global_136298 == 3)
	{
		return 0;
	}
	if (unk_0x5B08E2B84948C788())
	{
		if (unk_0xB56FEBC510E7E9DE(unk_0x824EA95BCC498CB4(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_52(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0xDF1398076E26B0E4(iParam0);
	uVar1 = unk_0x2FE7FA21D340AA95(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x35D1CAD6ADAB6491(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_46(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_53(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x1F2158D615BC4B25(Global_88800[iVar0]))
		{
			if (Global_88800[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_54(int iParam0)
{
	int iVar0;
	
	if (unk_0x1F2158D615BC4B25(iParam0) && unk_0x968EA16107097324(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x1F2158D615BC4B25(Global_88770[iVar0]) && unk_0x968EA16107097324(Global_88770[iVar0], 0))
			{
				if (Global_88770[iVar0] == iParam0 && unk_0xDF1398076E26B0E4(Global_88770[iVar0]) == unk_0xDF1398076E26B0E4(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_55(int iParam0)
{
	int iVar0;
	
	if (unk_0x1F2158D615BC4B25(Global_68186.f_484[24]))
	{
		if (iParam0 == Global_68186.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x1F2158D615BC4B25(Global_68186.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_68186.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_56(int iParam0)
{
	int iVar0;
	
	if (!unk_0x1F2158D615BC4B25(iParam0))
	{
		return 145;
	}
	if (!unk_0x968EA16107097324(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x1F2158D615BC4B25(Global_88770[iVar0]))
		{
			if (Global_88770[iVar0] == iParam0)
			{
				return Global_88780[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_57(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x1F2158D615BC4B25(iParam0) || !unk_0x968EA16107097324(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_58(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xB56FEBC510E7E9DE(Global_99250.f_5847[iVar9], 0))
		{
			if (unk_0x35420DF6FD85930A(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_58(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_59(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_61(iParam0, 0))
		{
			func_60(iParam0, 1, 0);
			func_60(iParam0, 2, 0);
			func_60(iParam0, 3, 0);
			func_60(iParam0, 4, 0);
			func_60(iParam0, 0, 1);
			Global_68186[iParam0] = 1;
		}
	}
	else
	{
		func_60(iParam0, 0, 0);
	}
}

void func_60(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x573691DB812DC8AA(&(Global_99250.f_18735[iParam0]), iParam1);
	}
	else
	{
		unk_0xA5F70A8B83BDFA49(&(Global_99250.f_18735[iParam0]), iParam1);
	}
}

bool func_61(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xB56FEBC510E7E9DE(Global_99250.f_18735[iParam0], iParam1);
}

void func_62(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_66(&(Global_68186.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x1F2158D615BC4B25(Global_68186.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
			{
				if (unk_0x968EA16107097324(Global_68186.f_139[iParam0], 0))
				{
					if (unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), Global_68186.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0x8D429A827A931AC9(Global_68186.f_139[iParam0], 1, 1);
				unk_0x18D40A0CF27AD6D3(&(Global_68186.f_139[iParam0]));
			}
		}
		Global_68186[iParam0] = 1;
		if (unk_0xB56FEBC510E7E9DE(Global_68186.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_61(iParam0, 0)) && Global_69095.f_66 == 0) && Global_99250.f_18735.f_1958[Global_68186.f_555[0 /*21*/].f_14] != 0) && Global_99250.f_18735.f_1958[Global_68186.f_555[0 /*21*/].f_14] > 3) && (!func_64(0, Global_68186.f_555[0 /*21*/].f_12) || !func_64(1, Global_68186.f_555[0 /*21*/].f_12)))
			{
				func_63(&(Global_99250.f_18735.f_69[Global_68186.f_555[0 /*21*/].f_14 /*78*/]), &Global_69095);
				Global_69173 = Global_99250.f_18735.f_5591;
			}
			func_59(iParam0, 0);
		}
	}
}

void func_63(var uParam0, var uParam1)
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

int func_64(int iParam0, int iParam1)
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
	if (iParam0 < 0 || iParam0 >= func_65(&(Global_99250.f_18735.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_46(Global_99250.f_18735.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66);
}

int func_65(var uParam0)
{
	return *uParam0;
}

int func_66(var uParam0, int iParam1)
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
			uParam0->f_4 = func_67(0, 1);
			uParam0->f_12 = 0;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 20);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_67(0, 1);
			uParam0->f_12 = 0;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 20);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_67(1, 1);
			uParam0->f_12 = 1;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 20);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_67(1, 2);
			uParam0->f_12 = 1;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 19);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_67(1, 1);
			uParam0->f_12 = 1;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 20);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_67(1, 2);
			uParam0->f_12 = 1;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 19);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_67(2, 1);
			uParam0->f_12 = 2;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 20);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_67(2, 1);
			uParam0->f_12 = 2;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 20);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_67(2, 1);
			uParam0->f_12 = 2;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 20);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 0);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 21);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 14);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 7);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 10);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 12);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 0);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 21);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 14);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 7);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 10);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 12);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 0);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 21);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 14);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 7);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 10);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 12);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 0);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 21);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 14);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 7);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 10);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 12);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 22);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 0);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 21);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 14);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 7);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 10);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 12);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 22);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 0);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 21);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 14);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 7);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 10);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 12);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 22);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 0);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 21);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 14);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 7);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 10);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 12);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 0);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 21);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 14);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 7);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 10);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 12);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 0);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 21);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 14);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 7);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 10);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 12);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 23);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 0);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 21);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 14);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 7);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 10);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 12);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 24);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 28);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 0);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 21);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 14);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 7);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 10);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 12);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 24);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 28);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 0);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 21);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 14);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 7);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 10);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 12);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 24);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 28);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 29);
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
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 10);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 12);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 7);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 27);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 24);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 29);
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
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 10);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 12);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 7);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 27);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 24);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 29);
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
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 10);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 12);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 7);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 27);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 24);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 10);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 11);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 13);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 10);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 11);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 13);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 9);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 9);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 23);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 23);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 23);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 8);
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
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 2);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 30);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 2);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 22);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 6);
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
			if (func_51())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 13);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 2);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 1);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 23);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_51())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 13);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 2);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 1);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 23);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 0);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 21);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 23);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 6);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 30);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 23);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 30);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 23);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0xB56FEBC510E7E9DE(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_99250.f_18735.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_84(Global_99250.f_18735.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_99250.f_18735.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_99250.f_18735.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_99250.f_18735.f_1934[uParam0->f_14];
		}
	}
	if (unk_0xB56FEBC510E7E9DE(uParam0->f_9, 19))
	{
		if (!func_84(Global_99250.f_1754.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_99250.f_1754.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_99250.f_1754.f_539.f_2837[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0xB56FEBC510E7E9DE(uParam0->f_9, 20))
	{
		if (!func_84(Global_99250.f_1754.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_99250.f_1754.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_99250.f_1754.f_539.f_2837[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_67(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_17(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_68(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_68(int iParam0, var uParam1, int iParam2)
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
			if (Global_99250.f_7703.f_99.f_58[128] && !Global_99250.f_7703.f_99.f_58[131])
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
					if (Global_99250.f_7703.f_99.f_58[119])
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
			else if (Global_99250.f_7703.f_99.f_58[118])
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

int func_69(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((unk_0x1F2158D615BC4B25(Global_68186.f_484[iVar0]) && !unk_0x0B6E83A9A7ED3EBA(Global_68186.f_484[iVar0])) && unk_0x968EA16107097324(Global_68186.f_484[iVar0], 0))
		{
			unk_0x7F28F78FC4A382A2(iParam0, &iVar1, &iVar2);
			unk_0x7F28F78FC4A382A2(Global_68186.f_484[iVar0], &iVar3, &iVar4);
			if (((unk_0xDF1398076E26B0E4(iParam0) == unk_0xDF1398076E26B0E4(Global_68186.f_484[iVar0]) && unk_0xF933C1D6868EE7D5(iParam0) == unk_0xF933C1D6868EE7D5(Global_68186.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_70(int iParam0, struct<3> Param1, bool bParam4)
{
	int iVar0;
	var uVar1[3];
	int iVar5;
	int iVar6;
	
	iVar0 = unk_0xDF1398076E26B0E4(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_72(iParam0, Global_68186.f_139[38], 0))
			{
				func_62(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_72(iParam0, Global_68186.f_139[43], 1))
			{
				func_62(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar5 = unk_0x1018DE502E6D9CD4(unk_0x77F050A399DB77ED(), &uVar1);
			iVar6 = 0;
			while (iVar6 <= (iVar5 - 1))
			{
				if (func_72(iParam0, uVar1[iVar6], 1) && func_71(unk_0xAF99169F0F5AE41D(uVar1[iVar6], 1), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam4 || func_84(Param1, 0f, 0f, 0f, 0)) || unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(iParam0, 1), unk_0xAF99169F0F5AE41D(uVar1[iVar6], 1), 1) < 10f)
					{
						unk_0x18D40A0CF27AD6D3(&iParam0);
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
			if ((unk_0x1F2158D615BC4B25(Global_68186.f_484[14]) && unk_0x968EA16107097324(iParam0, 0)) && unk_0x968EA16107097324(Global_68186.f_484[14], 0))
			{
				if (unk_0xDF1398076E26B0E4(Global_68186.f_484[14]) == joaat("luxor2") && unk_0xF933C1D6868EE7D5(iParam0) == unk_0xF933C1D6868EE7D5(Global_68186.f_484[14]))
				{
					func_62(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0x1F2158D615BC4B25(Global_68186.f_484[20]) && unk_0x968EA16107097324(iParam0, 0)) && unk_0x968EA16107097324(Global_68186.f_484[20], 0))
			{
				if (unk_0xDF1398076E26B0E4(Global_68186.f_484[20]) == joaat("swift2") && unk_0xF933C1D6868EE7D5(iParam0) == unk_0xF933C1D6868EE7D5(Global_68186.f_484[20]))
				{
					func_62(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_71(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x092B928D30C0282D((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x092B928D30C0282D((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x092B928D30C0282D((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x092B928D30C0282D((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x092B928D30C0282D((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_72(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((unk_0x1F2158D615BC4B25(iParam1) && !unk_0x0B6E83A9A7ED3EBA(iParam1)) && unk_0x968EA16107097324(iParam1, 0))
	{
		if (bParam2)
		{
			unk_0x7F28F78FC4A382A2(iParam0, &iVar0, &iVar1);
			unk_0x7F28F78FC4A382A2(iParam1, &iVar2, &iVar3);
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

void func_73(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0x1F2158D615BC4B25(Global_88770[iVar0]))
		{
			Global_88770[iVar0] = iParam0;
			Global_88780[iVar0] = iParam1;
			Global_88790[iVar0] = unk_0xDF1398076E26B0E4(iParam0);
			if (unk_0xAEA8A39798337671(Global_88790[iVar0]))
			{
				Global_88818[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_88818[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_74(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x1F2158D615BC4B25(Global_88770[iVar0]))
		{
			if (iParam0 == 145 || Global_88780[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0xDF1398076E26B0E4(Global_88770[iVar0]) == func_67(iParam0, iParam1))
				{
					if (!unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), Global_88770[iVar0], 0))
					{
						unk_0x8D429A827A931AC9(Global_88770[iVar0], 0, 1);
						unk_0x18D40A0CF27AD6D3(&(Global_88770[iVar0]));
						Global_88780[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_75(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x968EA16107097324(iParam0, 0))
	{
		if (unk_0x39BD4614CF899227(&(uParam1->f_1)) != 0)
		{
			unk_0xE1BEFB80AC811E83(iParam0, &(uParam1->f_1));
		}
		if (*uParam1 >= 0 && *uParam1 < unk_0xE1D70125219BA1EF())
		{
			unk_0x21500D3576611CDE(iParam0, *uParam1);
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
			uParam1->f_8 = 156;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (unk_0xB56FEBC510E7E9DE(uParam1->f_77, func_41(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x573691DB812DC8AA(&(uParam1->f_77), func_41(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0xB56FEBC510E7E9DE(uParam1->f_77, func_41(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x573691DB812DC8AA(&(uParam1->f_77), func_41(iVar1 + 1));
			}
		}
		if (unk_0xB56FEBC510E7E9DE(uParam1->f_77, 13))
		{
			unk_0x8AA1C425B97F5606(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x47D9134BA104087A(iParam0);
		}
		if (unk_0xB56FEBC510E7E9DE(uParam1->f_77, 12))
		{
			unk_0x1BE26108FCE2335B(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xFA15677748A06437(iParam0);
		}
		unk_0xEDB159E56B64D182(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0xE141C6C0A9E4E7A5(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0xB56FEBC510E7E9DE(uParam1->f_77, 15) || func_81(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_80())
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
		unk_0x3E591FC1ABBFA5AC(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			unk_0xB36D15AAB8BD2531(iParam0, 0);
		}
		else
		{
			unk_0xB36D15AAB8BD2531(iParam0, 0);
			unk_0xB36D15AAB8BD2531(iParam0, uParam1->f_65);
		}
		unk_0xE25FC4C7931E0208(iParam0, !unk_0xB56FEBC510E7E9DE(uParam1->f_77, 9));
		if (bParam2)
		{
			unk_0xF1040A0061DC97E5(iParam0, uParam1->f_70);
		}
		unk_0x99971564D55AF362(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0x10F2A0A429FC00EC(iParam0, 2, unk_0xB56FEBC510E7E9DE(uParam1->f_77, 28));
		unk_0x10F2A0A429FC00EC(iParam0, 3, unk_0xB56FEBC510E7E9DE(uParam1->f_77, 29));
		unk_0x10F2A0A429FC00EC(iParam0, 0, unk_0xB56FEBC510E7E9DE(uParam1->f_77, 30));
		unk_0x10F2A0A429FC00EC(iParam0, 1, unk_0xB56FEBC510E7E9DE(uParam1->f_77, 31));
		unk_0xA809A49D26253646(iParam0, unk_0xB56FEBC510E7E9DE(uParam1->f_77, 10));
		if (unk_0x5940C1DD7783744F(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0x35700C0F08F5951B(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0x583E994764B3211E(unk_0xDF1398076E26B0E4(iParam0)))
			{
				if (unk_0x9FAD4C61F8FD96DE(unk_0xDF1398076E26B0E4(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_79(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_79(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0x5265771D79F24A99(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0x37293197A3203FD6(iParam0, 1);
			}
			else
			{
				unk_0x2E5455CD174C1DED(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_76(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0x5FA5E5014A0AC183(uParam1->f_66) && !unk_0xD3FAF4AD23FDF2DA(uParam1->f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0xB56FEBC510E7E9DE(uParam1->f_77, func_41(iVar2 + 1)))
				{
					if (!unk_0x3F119D3637D9EFD9(iParam0, iVar2 + 1))
					{
						unk_0x90908B101918C346(iParam0, iVar2 + 1, 0);
					}
				}
				else if (unk_0x3F119D3637D9EFD9(iParam0, iVar2 + 1))
				{
					unk_0x90908B101918C346(iParam0, iVar2 + 1, 1);
				}
				iVar2++;
			}
		}
		if (unk_0x4F32F86538FB8979(uParam1->f_66))
		{
			if (!unk_0xB56FEBC510E7E9DE(uParam1->f_77, 23))
			{
				if (unk_0xB56FEBC510E7E9DE(uParam1->f_77, 22))
				{
					unk_0xC07ACDF7C2EFD87E(iParam0, 2);
				}
				else
				{
					unk_0xC07ACDF7C2EFD87E(iParam0, 3);
				}
			}
			else
			{
				unk_0xC07ACDF7C2EFD87E(iParam0, 4);
			}
		}
		if (unk_0xB56FEBC510E7E9DE(uParam1->f_77, 27))
		{
			unk_0x74F80425CE67EDFC(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0x74F80425CE67EDFC(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_76(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x968EA16107097324(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xB944775459039806(*iParam0) == 0)
	{
		return 0;
	}
	unk_0x91F9B018CF2DA225(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			unk_0x32F189E447238D10(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (unk_0x412350E0E75BCEFD(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x3890A33458E2541A(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0x01A8ACBE7F8B45EF(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0x01A8ACBE7F8B45EF(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0x01A8ACBE7F8B45EF(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if ((unk_0x6002410287B72BAE(*iParam0, 38) != 0 && unk_0x6002410287B72BAE(*iParam0, 24) != 0) && unk_0x412350E0E75BCEFD(*iParam0, 24) != func_78(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x01A8ACBE7F8B45EF(*iParam0, 24, func_78(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	if (func_77(*iParam0))
	{
		unk_0x4C02C54DC0599F30(*iParam0, 1);
		unk_0xD1CF9849336C4ED5(*iParam0, 1);
	}
	return 1;
}

int func_77(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0x1F2158D615BC4B25(iParam0) && unk_0x968EA16107097324(iParam0, 0)) && unk_0xB944775459039806(iParam0) > 0)
	{
		unk_0x91F9B018CF2DA225(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x412350E0E75BCEFD(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0x14A1F86EFA16F579(iParam0, iVar1, unk_0x412350E0E75BCEFD(iParam0, iVar1)), 16);
				iVar2 = unk_0x39BD4614CF899227(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x39BD4614CF899227("MNU_CAGE") || iVar2 == unk_0x39BD4614CF899227("SABRE_CAG"))
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

int func_78(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0x1F2158D615BC4B25(iParam0) && unk_0x968EA16107097324(iParam0, 0))
	{
		iVar0 = unk_0x6002410287B72BAE(iParam0, 38);
		iVar1 = unk_0x6002410287B72BAE(iParam0, 24);
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

void func_79(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xB944775459039806(iParam0) > 0)
	{
		unk_0x91F9B018CF2DA225(iParam0, 0);
		iVar0 = unk_0x412350E0E75BCEFD(iParam0, 24);
		iVar1 = unk_0x329167DA18FC4DBD(iParam0, 24);
		unk_0x0676C8E20E12834C(iParam0, uParam1);
		if (iVar0 == -1)
		{
			unk_0x3890A33458E2541A(iParam0, 24);
		}
		else
		{
			unk_0x01A8ACBE7F8B45EF(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_80()
{
	return unk_0x368F9074322AFD91(joaat("mpindependence"));
}

int func_81(int iParam0)
{
	var uVar0;
	
	if (unk_0x1F2158D615BC4B25(iParam0))
	{
		if (unk_0x968EA16107097324(iParam0, 0))
		{
			if (unk_0x9BBC2FD086E9AC98("MPBitset", 3))
			{
				if (unk_0xB22BDF5B6DBD298B(iParam0, "MPBitset"))
				{
					uVar0 = unk_0xA68F5A9BCA4E78E1(iParam0, "MPBitset");
				}
				return unk_0xB56FEBC510E7E9DE(uVar0, 4);
			}
		}
	}
	return 0;
}

void func_82(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_66(&(Global_68186.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0xA2490B3CE6382FBB(Param0, Global_68186.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_62(iVar0);
			}
		}
		iVar0++;
	}
}

int func_83(var uParam0)
{
	if (func_85(uParam0))
	{
		if (unk_0x4A4B6FD54C499B7D(uParam0->f_12.f_66))
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

bool func_84(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_85(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_46(uParam0->f_12.f_66))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_71(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_86()
{
	return func_83(&(Global_92910.f_2311));
}

void func_87()
{
	func_88(&(Global_92910.f_2311));
}

void func_88(var uParam0)
{
	if (func_85(uParam0))
	{
		unk_0xC60576ADD1AECA45(uParam0->f_12.f_66);
	}
}

int func_89(struct<3> Param0, int iParam3)
{
	return func_90(Global_92910.f_2311.f_12.f_66, Param0, iParam3);
}

int func_90(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam4 == 1)
	{
		Param1 = { func_91() };
	}
	unk_0x2C8CA5222767F3E4(iParam0, &Var0, &Var3);
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

Vector3 func_91()
{
	return 2.55f, 5.665f, 2.55f;
}

int func_92()
{
	return func_85(&(Global_92910.f_2311));
}

void func_93()
{
	unk_0xC60576ADD1AECA45(joaat("armytrailer2"));
	unk_0xC60576ADD1AECA45(joaat("packer"));
	unk_0xC60576ADD1AECA45(joaat("s_m_y_construct_01"));
	unk_0xC60576ADD1AECA45(joaat("s_m_m_security_01"));
	unk_0xC60576ADD1AECA45(joaat("bison2"));
	while ((((!unk_0x4A4B6FD54C499B7D(joaat("armytrailer2")) || !unk_0x4A4B6FD54C499B7D(joaat("packer"))) || !unk_0x4A4B6FD54C499B7D(joaat("s_m_y_construct_01"))) || !unk_0x4A4B6FD54C499B7D(joaat("s_m_m_security_01"))) || !unk_0x4A4B6FD54C499B7D(joaat("bison2")))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x1F2158D615BC4B25(iLocal_32))
	{
		if (unk_0x1F2158D615BC4B25(Global_87936[1]))
		{
			unk_0x8D429A827A931AC9(Global_87936[1], 1, 1);
			iLocal_32 = Global_87936[1];
			unk_0x2AB597CDC87E0949(iLocal_32);
		}
		else
		{
			iLocal_32 = unk_0x2EEA15C0C12C8CDE(joaat("armytrailer2"), 919.303f, -1553.88f, 29.7789f, 167.1917f, 1, 1);
			unk_0x2AB597CDC87E0949(iLocal_32);
		}
	}
	if (!unk_0x1F2158D615BC4B25(iLocal_33))
	{
		if (unk_0x1F2158D615BC4B25(Global_87936[2]))
		{
			unk_0x8D429A827A931AC9(Global_87936[2], 1, 1);
			iLocal_33 = Global_87936[2];
			unk_0xD1CF9849336C4ED5(iLocal_33, 1);
			unk_0xF1040A0061DC97E5(iLocal_33, 7);
			func_96(iLocal_33, -1);
			func_95(iLocal_33, -1);
		}
		else
		{
			iLocal_33 = unk_0x2EEA15C0C12C8CDE(joaat("packer"), 919.303f, -1553.88f, 29.7789f, 167.1917f, 1, 1);
			unk_0xD1CF9849336C4ED5(iLocal_33, 1);
			unk_0xF1040A0061DC97E5(iLocal_33, 7);
			func_96(iLocal_33, -1);
			func_95(iLocal_33, -1);
		}
	}
	unk_0x9BB333F3C495C117(iLocal_33, iLocal_32, 0.5f);
	unk_0xFB4F6722A032A0F0(joaat("armytrailer2"));
	unk_0xFB4F6722A032A0F0(joaat("packer"));
	unk_0xFB4F6722A032A0F0(joaat("bison2"));
	if (!unk_0x1F2158D615BC4B25(iLocal_35[0]))
	{
		if (unk_0x1F2158D615BC4B25(Global_87936.f_9[0]))
		{
			unk_0x8D429A827A931AC9(Global_87936.f_9[0], 1, 1);
			iLocal_35[0] = Global_87936.f_9[0];
			unk_0x054E434B0AECBDA6(iLocal_35[0], iLocal_302);
			func_94(iLocal_35[0], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x9526D9575C237F2F(iLocal_35[0], 1);
		}
		else
		{
			iLocal_35[0] = unk_0x6665DCC708A346F3(26, joaat("s_m_y_construct_01"), 912.34f, -1543.297f, 29.6469f, 16.169f, 1, 1);
			unk_0x054E434B0AECBDA6(iLocal_35[0], iLocal_302);
			if (unk_0x86A43F1FB9C445CA(912.3f, -1542.6f, 30.4f, 3f, 0))
			{
				unk_0x5E4BA3AE4088A1CD(iLocal_35[0], 912.3f, -1542.6f, 30.4f, 5f, 0);
			}
			unk_0x9526D9575C237F2F(iLocal_35[0], 1);
			func_94(iLocal_35[0], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
		}
	}
	if (!unk_0x1F2158D615BC4B25(iLocal_35[1]))
	{
		if (unk_0x1F2158D615BC4B25(Global_87936.f_9[1]))
		{
			unk_0x8D429A827A931AC9(Global_87936.f_9[1], 1, 1);
			iLocal_35[1] = Global_87936.f_9[1];
			unk_0x054E434B0AECBDA6(iLocal_35[1], iLocal_302);
			func_94(iLocal_35[1], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x9526D9575C237F2F(iLocal_35[1], 1);
		}
		else
		{
			iLocal_35[1] = unk_0x6665DCC708A346F3(26, joaat("s_m_y_construct_01"), 917.5028f, -1517.401f, 29.9673f, 158.5738f, 1, 1);
			unk_0x054E434B0AECBDA6(iLocal_35[1], iLocal_302);
			if (unk_0x86A43F1FB9C445CA(917.5028f, -1517.401f, 29.9673f, 3f, 0))
			{
				unk_0x5E4BA3AE4088A1CD(iLocal_35[1], 917.5028f, -1517.401f, 29.9673f, 5f, 0);
			}
			func_94(iLocal_35[1], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x9526D9575C237F2F(iLocal_35[1], 1);
		}
	}
	if (!unk_0x1F2158D615BC4B25(iLocal_35[2]))
	{
		if (unk_0x1F2158D615BC4B25(Global_87936.f_9[2]))
		{
			unk_0x8D429A827A931AC9(Global_87936.f_9[2], 1, 1);
			iLocal_35[2] = Global_87936.f_9[2];
			unk_0x054E434B0AECBDA6(iLocal_35[2], iLocal_302);
			func_94(iLocal_35[2], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x9526D9575C237F2F(iLocal_35[2], 1);
		}
		else
		{
			iLocal_35[2] = unk_0x6665DCC708A346F3(26, joaat("s_m_y_construct_01"), 869.6423f, -1541.423f, 29.2516f, 346.9848f, 1, 1);
			unk_0x054E434B0AECBDA6(iLocal_35[2], iLocal_302);
			if (unk_0x86A43F1FB9C445CA(869.6423f, -1541.423f, 29.2516f, 3f, 0))
			{
				unk_0x5E4BA3AE4088A1CD(iLocal_35[2], 869.6423f, -1541.423f, 29.2516f, 5f, 0);
			}
			func_94(iLocal_35[2], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x9526D9575C237F2F(iLocal_35[2], 1);
		}
	}
	if (!unk_0x1F2158D615BC4B25(iLocal_35[3]))
	{
		if (unk_0x1F2158D615BC4B25(Global_87936.f_9[3]))
		{
			unk_0x8D429A827A931AC9(Global_87936.f_9[3], 1, 1);
			iLocal_35[3] = Global_87936.f_9[3];
			unk_0x054E434B0AECBDA6(iLocal_35[3], iLocal_302);
			func_94(iLocal_35[3], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x9526D9575C237F2F(iLocal_35[3], 1);
		}
		else
		{
			iLocal_35[3] = unk_0x6665DCC708A346F3(26, joaat("s_m_y_construct_01"), 884.3046f, -1573.188f, 29.8247f, 182.9722f, 1, 1);
			unk_0x054E434B0AECBDA6(iLocal_35[3], iLocal_302);
			if (unk_0x86A43F1FB9C445CA(884.3046f, -1573.188f, 29.8247f, 3f, 0))
			{
				unk_0x5E4BA3AE4088A1CD(iLocal_35[3], 884.3046f, -1573.188f, 29.8247f, 5f, 0);
			}
			func_94(iLocal_35[3], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x9526D9575C237F2F(iLocal_35[3], 1);
		}
	}
	if (!unk_0x1F2158D615BC4B25(iLocal_35[4]))
	{
		if (unk_0x1F2158D615BC4B25(Global_87936.f_9[4]))
		{
			unk_0x8D429A827A931AC9(Global_87936.f_9[4], 1, 1);
			iLocal_35[4] = Global_87936.f_9[4];
			unk_0x054E434B0AECBDA6(iLocal_35[4], iLocal_302);
			func_94(iLocal_35[4], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x9526D9575C237F2F(iLocal_35[4], 1);
		}
		else
		{
			iLocal_35[4] = unk_0x6665DCC708A346F3(26, joaat("s_m_y_construct_01"), 903.8805f, -1575.02f, 29.8327f, 308.1952f, 1, 1);
			unk_0x054E434B0AECBDA6(iLocal_35[4], iLocal_302);
			if (unk_0x86A43F1FB9C445CA(903.8805f, -1575.02f, 29.8327f, 3f, 0))
			{
				unk_0x5E4BA3AE4088A1CD(iLocal_35[4], 903.8805f, -1575.02f, 29.8327f, 5f, 0);
			}
			func_94(iLocal_35[4], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x9526D9575C237F2F(iLocal_35[4], 1);
		}
	}
	if (!unk_0x1F2158D615BC4B25(iLocal_35[5]))
	{
		if (unk_0x1F2158D615BC4B25(Global_87936.f_9[5]))
		{
			unk_0x8D429A827A931AC9(Global_87936.f_9[5], 1, 1);
			iLocal_35[5] = Global_87936.f_9[5];
			unk_0x054E434B0AECBDA6(iLocal_35[5], iLocal_302);
			func_94(iLocal_35[5], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x9526D9575C237F2F(iLocal_35[5], 1);
		}
		else
		{
			iLocal_35[5] = unk_0x6665DCC708A346F3(26, joaat("s_m_y_construct_01"), 906.2186f, -1575.108f, 29.8125f, 55.9906f, 1, 1);
			unk_0x054E434B0AECBDA6(iLocal_35[5], iLocal_302);
			if (unk_0x86A43F1FB9C445CA(906.2186f, -1575.108f, 29.8125f, 3f, 0))
			{
				unk_0x5E4BA3AE4088A1CD(iLocal_35[5], 906.2186f, -1575.108f, 29.8125f, 5f, 0);
			}
			func_94(iLocal_35[5], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x9526D9575C237F2F(iLocal_35[5], 1);
		}
	}
	if (!unk_0x1F2158D615BC4B25(iLocal_35[6]))
	{
		if (unk_0x1F2158D615BC4B25(Global_87936.f_9[8]))
		{
			unk_0x8D429A827A931AC9(Global_87936.f_9[8], 1, 1);
			iLocal_35[6] = Global_87936.f_9[8];
			unk_0x054E434B0AECBDA6(iLocal_35[6], iLocal_302);
			func_94(iLocal_35[6], 20f, 5f, 120f, -45f, 45f);
			unk_0x9526D9575C237F2F(iLocal_35[6], 1);
		}
		else
		{
			iLocal_35[6] = unk_0x6665DCC708A346F3(26, joaat("s_m_y_construct_01"), 889.285f, -1561.485f, 29.6539f, 22.2456f, 1, 1);
			unk_0x054E434B0AECBDA6(iLocal_35[6], iLocal_302);
			if (unk_0x86A43F1FB9C445CA(889.285f, -1561.485f, 29.6539f, 3f, 0))
			{
				unk_0x5E4BA3AE4088A1CD(iLocal_35[6], 889.285f, -1561.485f, 29.6539f, 5f, 0);
			}
			func_94(iLocal_35[6], 20f, 5f, 120f, -45f, 45f);
			unk_0x9526D9575C237F2F(iLocal_35[6], 1);
		}
	}
	if (!unk_0x1F2158D615BC4B25(iLocal_43[0]))
	{
		if (unk_0x1F2158D615BC4B25(Global_87936.f_9[6]))
		{
			unk_0x8D429A827A931AC9(Global_87936.f_9[6], 1, 1);
			iLocal_43[0] = Global_87936.f_9[6];
			unk_0x054E434B0AECBDA6(iLocal_43[0], iLocal_303);
			func_94(iLocal_43[0], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x9526D9575C237F2F(iLocal_43[0], 1);
			unk_0x1592B6D205958934(iLocal_43[0], joaat("weapon_pistol"), 100, 0, 0);
			unk_0x58580C834A43EBA2(iLocal_43[0], "S_M_M_GENERICSECURITY_01_LATINO_MINI_01");
		}
		else
		{
			iLocal_43[0] = unk_0x6665DCC708A346F3(26, joaat("s_m_m_security_01"), 863.1551f, -1564.572f, 29.3231f, 130.7946f, 1, 1);
			unk_0x054E434B0AECBDA6(iLocal_43[0], iLocal_303);
			func_94(iLocal_43[0], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x9526D9575C237F2F(iLocal_43[0], 1);
			unk_0x1592B6D205958934(iLocal_43[0], joaat("weapon_pistol"), 100, 0, 0);
			unk_0x58580C834A43EBA2(iLocal_43[0], "S_M_M_GENERICSECURITY_01_LATINO_MINI_01");
		}
	}
	if (!unk_0x1F2158D615BC4B25(iLocal_43[1]))
	{
		if (unk_0x1F2158D615BC4B25(Global_87936.f_9[7]))
		{
			unk_0x8D429A827A931AC9(Global_87936.f_9[7], 1, 1);
			iLocal_43[1] = Global_87936.f_9[7];
			unk_0x054E434B0AECBDA6(iLocal_43[1], iLocal_303);
			func_94(iLocal_43[1], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x9526D9575C237F2F(iLocal_43[1], 1);
			unk_0x1592B6D205958934(iLocal_43[1], joaat("weapon_pistol"), 100, 0, 0);
			unk_0x58580C834A43EBA2(iLocal_43[1], "S_M_M_GENERICSECURITY_01_LATINO_MINI_02");
		}
		else
		{
			iLocal_43[1] = unk_0x6665DCC708A346F3(26, joaat("s_m_m_security_01"), 940.2881f, -1573.877f, 29.3866f, 269.1856f, 1, 1);
			unk_0x054E434B0AECBDA6(iLocal_43[1], iLocal_303);
			func_94(iLocal_43[1], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x9526D9575C237F2F(iLocal_43[1], 1);
			unk_0x1592B6D205958934(iLocal_43[1], joaat("weapon_pistol"), 100, 0, 0);
			unk_0x58580C834A43EBA2(iLocal_43[1], "S_M_M_GENERICSECURITY_01_LATINO_MINI_02");
		}
	}
	unk_0xFB4F6722A032A0F0(joaat("s_m_y_construct_01"));
	unk_0xFB4F6722A032A0F0(joaat("s_m_m_security_01"));
}

void func_94(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5)
{
	if (!unk_0x1E80C02AC16B6622(iParam0))
	{
		unk_0x4891B9E8F90B8C2B(iParam0, fParam1);
		unk_0x43A646E50CC58375(iParam0, iParam2);
		unk_0x034EE5F483181207(iParam0, (fParam3 / 2f));
		unk_0xFD0A0214F4BA5A5A(iParam0, iParam4);
		unk_0x12ACEBD1CC180237(iParam0, iParam5);
	}
}

void func_95(int iParam0, int iParam1)
{
	Global_55670 = iParam0;
	Global_55671 = iParam1;
}

void func_96(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_55672 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_67754)
	{
		if (iParam1 == -1 || Global_67755[iVar0 /*9*/] == iParam1)
		{
			if (Global_67755[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_67755[iVar0 /*9*/].f_6 = iParam0;
				Global_67755[iVar0 /*9*/].f_7 = 1;
				Global_67755[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_97()
{
	iLocal_63 = 0;
	while (iLocal_63 <= 6)
	{
		if (unk_0x1F2158D615BC4B25(iLocal_35[iLocal_63]) && unk_0x95CBA891BCA778AA(iLocal_35[iLocal_63], 1))
		{
			unk_0xAB3098579170FA46(&(iLocal_35[iLocal_63]));
		}
		iLocal_63++;
	}
	if (unk_0x1F2158D615BC4B25(iLocal_43[0]) && unk_0x95CBA891BCA778AA(iLocal_43[0], 1))
	{
		unk_0xAB3098579170FA46(&(iLocal_43[0]));
	}
	if (unk_0x1F2158D615BC4B25(iLocal_43[1]) && unk_0x95CBA891BCA778AA(iLocal_43[1], 1))
	{
		unk_0xAB3098579170FA46(&(iLocal_43[1]));
	}
	if (unk_0x1F2158D615BC4B25(iLocal_46) && unk_0x95CBA891BCA778AA(iLocal_46, 1))
	{
		unk_0xAB3098579170FA46(&iLocal_46);
	}
	if (unk_0x1F2158D615BC4B25(iLocal_47) && unk_0x95CBA891BCA778AA(iLocal_47, 1))
	{
		unk_0xAB3098579170FA46(&iLocal_47);
	}
	if (unk_0x1F2158D615BC4B25(iLocal_48) && unk_0x95CBA891BCA778AA(iLocal_48, 1))
	{
		unk_0xAB3098579170FA46(&iLocal_48);
	}
	if (unk_0x1F2158D615BC4B25(iLocal_49) && unk_0x95CBA891BCA778AA(iLocal_49, 1))
	{
		unk_0xAB3098579170FA46(&iLocal_49);
	}
	if (!func_30())
	{
		unk_0x0B5F372F57E469AC(unk_0x77F050A399DB77ED(), 519.1906f, -2980.994f, 5.0443f, 1, 0, 0, 1);
		unk_0x2DA164E80FDEE7F2(unk_0x77F050A399DB77ED(), 270.1911f);
	}
	if (unk_0x1F2158D615BC4B25(iLocal_32) && unk_0x95CBA891BCA778AA(iLocal_32, 1))
	{
		unk_0x18D40A0CF27AD6D3(&iLocal_32);
	}
	if (unk_0x1F2158D615BC4B25(Global_87936[3]))
	{
		unk_0x8D429A827A931AC9(Global_87936[3], 1, 0);
		unk_0x18D40A0CF27AD6D3(&(Global_87936[3]));
	}
	if (unk_0x1F2158D615BC4B25(iLocal_33) && unk_0x95CBA891BCA778AA(iLocal_33, 1))
	{
		unk_0x18D40A0CF27AD6D3(&iLocal_33);
	}
	unk_0xD5A53B898943F331("cellphone@str");
	unk_0xD5A53B898943F331("misscarsteal4@director_grip");
	unk_0x9C3F27BE5DA33F3B("FHPRB_START");
	unk_0x9C3F27BE5DA33F3B("FHPRB_TRUCK");
	unk_0x9C3F27BE5DA33F3B("FHPRB_COPS");
	unk_0x9C3F27BE5DA33F3B("FHPRB_LOST");
	unk_0x9C3F27BE5DA33F3B("FHPRB_STOP");
	unk_0x0BA5964C07973FE9(889.5f, -1553.8f, 30f, 150f, 1, 0, 0, 0);
}

void func_98()
{
	if (unk_0xC3B073777B46C61A(uLocal_58))
	{
		unk_0x296CDA10C549A502(&uLocal_58);
	}
	if (unk_0xC3B073777B46C61A(uLocal_59))
	{
		unk_0x296CDA10C549A502(&uLocal_59);
	}
	if (unk_0xC3B073777B46C61A(uLocal_60))
	{
		unk_0x296CDA10C549A502(&uLocal_60);
	}
	if (unk_0xC3B073777B46C61A(uLocal_61))
	{
		unk_0x296CDA10C549A502(&uLocal_61);
	}
}

void func_99()
{
	Global_14578 = 0;
	func_100();
}

void func_100()
{
	unk_0xCAAFCFEB9BD734FB();
	Global_16723 = 0;
	if ((unk_0xEA9C2A206A86B744() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		unk_0xC9AB825AA4821BDA(0);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (unk_0x1066B6347C40B301())
	{
		unk_0xC9AB825AA4821BDA(1);
		Global_15712 = 6;
		return;
	}
}

void func_101()
{
	func_118();
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
		unk_0xCBC9707F3BE3D5C2(5);
		unk_0xD5A53B898943F331("cellphone@str");
		unk_0xD5A53B898943F331("misscarsteal4@director_grip");
		if (!unk_0x398F615441F52A47())
		{
			unk_0x70F217796775EC85(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1));
			unk_0xCA6D671341405469(800);
		}
		unk_0x4AAD01BBE039D160(1f);
		unk_0x746BA52A343DAF52(10f, 5f, 4);
		iLocal_396 = 1;
		iLocal_62 = 1;
	}
	if (iLocal_62 == 1)
	{
		func_117(&uLocal_137, 3, 0, "LESTER", 0, 1);
		if (func_14() == 0)
		{
			func_117(&uLocal_137, 0, unk_0x77F050A399DB77ED(), "MICHAEL", 0, 1);
		}
		if (func_14() == 1)
		{
			func_117(&uLocal_137, 1, unk_0x77F050A399DB77ED(), "FRANKLIN", 0, 1);
		}
		if (func_14() == 2)
		{
			func_117(&uLocal_137, 2, unk_0x77F050A399DB77ED(), "TREVOR", 0, 1);
		}
		iLocal_62 = 2;
	}
	if (iLocal_62 == 2)
	{
		if (unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590()) == 0)
		{
			if (func_14() == 0)
			{
				if (func_107(&uLocal_137, 12, "FHPBAUD", "FHPB_CHAT1", 7, 1, 0, 0, 0))
				{
					unk_0x746BA52A343DAF52(5f, 5f, 4);
					unk_0xC1B1E9A034A63A62(0);
					iLocal_62 = 3;
				}
			}
			if (func_14() == 1)
			{
				if (func_107(&uLocal_137, 12, "FHPBAUD", "FHPB_CHAT3", 7, 1, 0, 0, 0))
				{
					unk_0x746BA52A343DAF52(5f, 5f, 4);
					unk_0xC1B1E9A034A63A62(0);
					iLocal_62 = 3;
				}
			}
			if (func_14() == 2)
			{
				if (func_107(&uLocal_137, 12, "FHPBAUD", "FHPB_CHAT2", 7, 1, 0, 0, 0))
				{
					unk_0x746BA52A343DAF52(5f, 5f, 4);
					unk_0xC1B1E9A034A63A62(0);
					iLocal_62 = 3;
				}
			}
		}
	}
	if (iLocal_62 == 3)
	{
		if (!unk_0xC3B073777B46C61A(uLocal_59))
		{
			if (!func_106())
			{
				if (unk_0x83666F9FB8FEBD4B() > 10500)
				{
					uLocal_59 = func_104(Local_116, 1);
				}
			}
		}
		if (func_106())
		{
			iLocal_62 = 4;
		}
	}
	if (iLocal_62 == 4)
	{
		if (unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590()) == 0)
		{
			if (unk_0x968EA16107097324(iLocal_33, 0))
			{
				if (unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_33, 0))
				{
					if (unk_0x0F3BABBA4CB4778D(iLocal_33))
					{
						if (unk_0xA427F05DB896EEBE(unk_0x77F050A399DB77ED(), Local_116, 4f, 4f, 2f, 1, 1, 2))
						{
							if (func_103(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0), 4f, 3, 0.5f, 0, 1, 0))
							{
								unk_0x3345CB85AB9EC035("FHPRB_STOP");
								if (unk_0xC3B073777B46C61A(uLocal_59))
								{
									unk_0x296CDA10C549A502(&uLocal_59);
								}
								unk_0x746BA52A343DAF52(5f, 5f, 4);
								func_102(0, -1);
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

void func_102(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_55667)
	{
	}
	Global_55667 = 0;
	if (bParam0)
	{
		Global_55668 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_67754)
		{
			if (Global_55884[Global_67755[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_67755[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_67754)
		{
			if (Global_67755[iVar0 /*9*/] > 0)
			{
				if (Global_67755[iVar0 /*9*/] == iParam1)
				{
					Global_67755[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

int func_103(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x6E20845D23D3DFD4(0, 71, 1);
	unk_0x6E20845D23D3DFD4(0, 72, 1);
	unk_0x6E20845D23D3DFD4(0, 76, 1);
	unk_0x6E20845D23D3DFD4(0, 73, 1);
	unk_0x6E20845D23D3DFD4(0, 59, 1);
	unk_0x6E20845D23D3DFD4(0, 60, 1);
	if (bParam5)
	{
		unk_0x6E20845D23D3DFD4(0, 75, 1);
	}
	unk_0x6E20845D23D3DFD4(0, 80, 1);
	if (!bParam6)
	{
		unk_0x6E20845D23D3DFD4(0, 69, 1);
		unk_0x6E20845D23D3DFD4(0, 70, 1);
		unk_0x6E20845D23D3DFD4(0, 68, 1);
	}
	unk_0x6E20845D23D3DFD4(0, 74, 1);
	unk_0x6E20845D23D3DFD4(0, 86, 1);
	unk_0x6E20845D23D3DFD4(0, 81, 1);
	unk_0x6E20845D23D3DFD4(0, 82, 1);
	unk_0x6E20845D23D3DFD4(0, 138, 1);
	unk_0x6E20845D23D3DFD4(0, 136, 1);
	unk_0x6E20845D23D3DFD4(0, 114, 1);
	unk_0x6E20845D23D3DFD4(0, 107, 1);
	unk_0x6E20845D23D3DFD4(0, 110, 1);
	unk_0x6E20845D23D3DFD4(0, 89, 1);
	unk_0x6E20845D23D3DFD4(0, 89, 1);
	unk_0x6E20845D23D3DFD4(0, 87, 1);
	unk_0x6E20845D23D3DFD4(0, 88, 1);
	unk_0x6E20845D23D3DFD4(0, 113, 1);
	unk_0x6E20845D23D3DFD4(0, 115, 1);
	unk_0x6E20845D23D3DFD4(0, 116, 1);
	unk_0x6E20845D23D3DFD4(0, 117, 1);
	unk_0x6E20845D23D3DFD4(0, 118, 1);
	unk_0x6E20845D23D3DFD4(0, 119, 1);
	unk_0x6E20845D23D3DFD4(0, 131, 1);
	unk_0x6E20845D23D3DFD4(0, 132, 1);
	unk_0x6E20845D23D3DFD4(0, 123, 1);
	unk_0x6E20845D23D3DFD4(0, 126, 1);
	unk_0x6E20845D23D3DFD4(0, 129, 1);
	unk_0x6E20845D23D3DFD4(0, 130, 1);
	unk_0x6E20845D23D3DFD4(0, 133, 1);
	unk_0x6E20845D23D3DFD4(0, 134, 1);
	unk_0xC6CCD4555A546BC0();
	if ((unk_0x3EAC9995EC220C5A() - Global_29) > 500)
	{
		unk_0x29666BB73419DB0E(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x3EAC9995EC220C5A();
	if (!unk_0x0B6E83A9A7ED3EBA(iParam0))
	{
		if (unk_0x092B928D30C0282D(unk_0x2AA05370067DC5AC(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

var func_104(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x1802011F6E339FFF(Param0);
	unk_0x61CD4A0BA23CE782(uVar0, func_105(unk_0x4C779B19E6DDCDA2(), 1f, 1f));
	unk_0x49AFDB1662AE2A92(uVar0, iParam3);
	return uVar0;
}

float func_105(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_106()
{
	if (Global_15712 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_107(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_116(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
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
	return func_108(sParam3, iParam4, bParam8);
}

int func_108(char* sParam0, int iParam1, bool bParam2)
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
					unk_0xC9AB825AA4821BDA(0);
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
					func_100();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x1066B6347C40B301())
		{
			return 0;
		}
		if (func_115(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_114();
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
			unk_0xA5F70A8B83BDFA49(&Global_2283, 20);
			unk_0xA5F70A8B83BDFA49(&Global_2284, 17);
			unk_0xA5F70A8B83BDFA49(&Global_2285, 0);
			if (bParam2)
			{
				func_113();
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
			if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
			{
				if (unk_0x9FA30238987B8B6F(unk_0x77F050A399DB77ED()))
				{
					return 0;
				}
				if (func_112())
				{
					return 0;
				}
				if (unk_0x8408B4A4C23B6D99(unk_0x77F050A399DB77ED()))
				{
					return 0;
				}
				if (unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED()))
				{
					return 0;
				}
				if (unk_0x04CAC901929627FE(unk_0x77F050A399DB77ED()))
				{
					return 0;
				}
				if (unk_0xE89300623E310620(unk_0x77F050A399DB77ED(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69317)
				{
					if (unk_0xAB5BBCD9D3B6625D(unk_0x77F050A399DB77ED()))
					{
						return 0;
					}
					if (unk_0x1F23B510F2B55C10(unk_0x8ACD527A7E574590()))
					{
						return 0;
					}
					if (unk_0x7E0A8E0015B69AA4(unk_0x77F050A399DB77ED()))
					{
						return 0;
					}
					if (unk_0xB32A2CF30C462699(unk_0x8ACD527A7E574590()))
					{
						return 0;
					}
				}
			}
			if (func_111())
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
				if (unk_0xB56FEBC510E7E9DE(Global_2283, 9))
				{
					return 0;
				}
			}
			func_110();
			Global_15722 = bParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_109();
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
		func_100();
	}
	return 0;
}

void func_109()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xC9AB825AA4821BDA(0);
	Global_15712 = 1;
}

void func_110()
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
	unk_0xA5F70A8B83BDFA49(&Global_2284, 16);
}

int func_111()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_112()
{
	int iVar0;
	int iVar1;
	
	if (Global_69317)
	{
		iVar0 = 0;
		unk_0x587BE7B13B3A93BF(unk_0x77F050A399DB77ED(), &iVar1, 1);
		if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x294E2F2AFFA6421E() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
	{
		if (unk_0xEE92F60CC00FFBD6(unk_0x77F050A399DB77ED(), 78, 1))
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

void func_113()
{
	if (func_16(14))
	{
		if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
		{
			if (unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()) == Global_99250.f_32503[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()) == Global_99250.f_32503[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()) == Global_99250.f_32503[2 /*29*/])
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
		Global_14413 = func_14();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69317)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

void func_114()
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

bool func_115(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338610.f_203[iParam1];
			}
			break;
	}
	return unk_0xB56FEBC510E7E9DE(Global_1338610.f_949, iParam0);
}

void func_116(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15166 = { *uParam0 };
	Global_1599 = iParam1;
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

void func_117(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69317)
	{
		if (!unk_0x1E80C02AC16B6622(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x5A0EAF1DC22647FF(iParam2, 0);
			}
			else
			{
				unk_0x5A0EAF1DC22647FF(iParam2, 1);
			}
		}
		if (!unk_0x1E80C02AC16B6622(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xFAF696F3B3892233(iParam2, 0);
			}
			else
			{
				unk_0xFAF696F3B3892233(iParam2, 1);
			}
		}
	}
}

void func_118()
{
	if (unk_0x968EA16107097324(iLocal_33, 0))
	{
		if (unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_33, 0))
		{
			if (unk_0x0F3BABBA4CB4778D(iLocal_33))
			{
				if (func_123("HELP_1"))
				{
					unk_0x4ACCE973F9C3CA3B(1);
				}
				if (unk_0xC3B073777B46C61A(uLocal_58))
				{
					unk_0x296CDA10C549A502(&uLocal_58);
				}
				if (unk_0xC3B073777B46C61A(uLocal_61))
				{
					if (iLocal_395 == 1)
					{
						if (unk_0x3EAC9995EC220C5A() < iLocal_109 + 7500)
						{
							unk_0xA1E3A2CCF985EE86();
						}
					}
					unk_0x296CDA10C549A502(&uLocal_61);
				}
				if (iLocal_28 == 4)
				{
					if (unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590()) == 0)
					{
						if (iLocal_469 == 0)
						{
							unk_0x9C3F27BE5DA33F3B("FHPRB_COPS");
							unk_0x3345CB85AB9EC035("FHPRB_LOST");
							iLocal_469 = 1;
						}
						if (iLocal_314 == 1)
						{
							if (unk_0x3EAC9995EC220C5A() < iLocal_110 + 7500)
							{
								unk_0xA1E3A2CCF985EE86();
							}
							iLocal_314 = 0;
						}
						if (iLocal_62 > 3)
						{
							if (!unk_0xC3B073777B46C61A(uLocal_59))
							{
								uLocal_59 = func_104(Local_116, 1);
							}
							if (iLocal_305 == 0)
							{
								if (!unk_0x5C62F8B9BBEC5A43())
								{
									func_122("GOD_2", 7500, 1);
									iLocal_305 = 1;
								}
							}
						}
					}
					else
					{
						if (unk_0xC3B073777B46C61A(uLocal_59))
						{
							unk_0x296CDA10C549A502(&uLocal_59);
						}
						if (iLocal_314 == 0)
						{
							unk_0xA1E3A2CCF985EE86();
							func_122("GOD_4", 7500, -1);
							unk_0x3345CB85AB9EC035("FHPRB_COPS");
							iLocal_110 = unk_0x3EAC9995EC220C5A();
							iLocal_314 = 1;
							iLocal_469 = 0;
						}
					}
				}
			}
			else
			{
				if (unk_0xC3B073777B46C61A(uLocal_58))
				{
					unk_0x296CDA10C549A502(&uLocal_58);
				}
				if (unk_0xC3B073777B46C61A(uLocal_59))
				{
					unk_0x296CDA10C549A502(&uLocal_59);
				}
				if (unk_0x968EA16107097324(iLocal_32, 0))
				{
					if (!unk_0xC3B073777B46C61A(uLocal_61))
					{
						uLocal_61 = func_120(iLocal_32, 0, 0);
						unk_0x0AA0CF6371DDEDCF(uLocal_61, 1);
						if (unk_0x5C62F8B9BBEC5A43())
						{
							unk_0xA1E3A2CCF985EE86();
						}
						if (iLocal_395 == 0)
						{
							func_122("GOD_6", 7500, -1);
							iLocal_109 = unk_0x3EAC9995EC220C5A();
							iLocal_395 = 1;
						}
						if (!func_123("HELP_1"))
						{
							func_119("HELP_1");
						}
					}
				}
			}
		}
		else
		{
			if (unk_0xC3B073777B46C61A(uLocal_61))
			{
				unk_0x296CDA10C549A502(&uLocal_61);
			}
			if (unk_0xC3B073777B46C61A(uLocal_59))
			{
				unk_0x296CDA10C549A502(&uLocal_59);
			}
			if (unk_0x968EA16107097324(iLocal_33, 0))
			{
				if (!unk_0xC3B073777B46C61A(uLocal_58))
				{
					uLocal_58 = func_120(iLocal_33, 0, 0);
					unk_0x0AA0CF6371DDEDCF(uLocal_58, 1);
				}
			}
			if (iLocal_315 == 0)
			{
				unk_0xA1E3A2CCF985EE86();
				func_122("GOD_5", 7500, -1);
				iLocal_315 = 1;
			}
		}
	}
}

void func_119(char* sParam0)
{
	unk_0xE6F728F2901F2AEE(sParam0);
	unk_0xF34A1D3B3034CC8A(0, 1, 1, -1);
}

int func_120(int iParam0, bool bParam1, bool bParam2)
{
	return func_121(iParam0, !bParam1, bParam2);
}

int func_121(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x1F2158D615BC4B25(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xBAA49E1DC5584B87(iParam0);
	if (unk_0xDD21A3DB256904E7(iParam0))
	{
		unk_0x61CD4A0BA23CE782(uVar0, func_105(unk_0x4C779B19E6DDCDA2(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x0AA0CF6371DDEDCF(uVar0, bParam1);
		}
		else
		{
			unk_0x80553402FCEB9A9C(uVar0, 2);
		}
	}
	else if (unk_0x94195F7CA642F937(iParam0))
	{
		unk_0x61CD4A0BA23CE782(uVar0, func_105(unk_0x4C779B19E6DDCDA2(), 0.7f, 0.7f));
		unk_0x0AA0CF6371DDEDCF(uVar0, bParam1);
	}
	else if (unk_0x0449EE7873816A89(iParam0))
	{
		unk_0x61CD4A0BA23CE782(uVar0, func_105(unk_0x4C779B19E6DDCDA2(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_122(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x0097650483482715(sParam0);
	unk_0x01FD9AF39CDA86AC(iParam1, 1);
}

bool func_123(char* sParam0)
{
	unk_0xBA89110203C50939(sParam0);
	return unk_0x62881E3F5F311834(0);
}

void func_124()
{
	if (iLocal_62 > 1)
	{
		func_118();
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
		unk_0x6E2E777C1AD81C36("cellphone@str");
		unk_0x6E2E777C1AD81C36("misscarsteal4@director_grip");
		if (unk_0x968EA16107097324(iLocal_33, 0))
		{
			if (!unk_0xC3B073777B46C61A(uLocal_58))
			{
				uLocal_58 = func_120(iLocal_33, 0, 0);
				unk_0x0AA0CF6371DDEDCF(uLocal_58, true);
			}
		}
		unk_0xCBC9707F3BE3D5C2(0);
		if (unk_0x2CC731F9E664299E())
		{
			if (!func_30())
			{
				unk_0x70F217796775EC85(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1));
			}
			if (unk_0x1F2158D615BC4B25(iLocal_34))
			{
				func_27(iLocal_34, -1, 1);
				unk_0xB84D4C251623B60C(&iLocal_34);
			}
			else
			{
				func_27(0, -1, 1);
			}
		}
		if (!unk_0x398F615441F52A47())
		{
			unk_0xCA6D671341405469(800);
		}
		unk_0x3345CB85AB9EC035("FHPRB_START");
		unk_0x0BA5964C07973FE9(43.5f, -615.8f, 32.4f, 50f, 1, 0, 0, 0);
		iLocal_396 = 1;
		iLocal_62 = 1;
	}
	if (iLocal_62 == 1)
	{
		if (iLocal_465 == 0)
		{
			if (!unk_0x5C62F8B9BBEC5A43())
			{
				unk_0x746BA52A343DAF52(5f, 8f, 4);
				func_122("GOD_1", 7500, 1);
				iLocal_465 = 1;
			}
		}
		if (unk_0x968EA16107097324(iLocal_33, 0))
		{
			if (unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_33, 0))
			{
				unk_0x3345CB85AB9EC035("FHPRB_TRUCK");
				if (unk_0xC3B073777B46C61A(uLocal_58))
				{
					unk_0x296CDA10C549A502(&uLocal_58);
				}
				func_125(656, 0);
				unk_0x4AAD01BBE039D160(1f);
				iLocal_62 = 2;
			}
		}
	}
	if (iLocal_62 == 2)
	{
		if (unk_0x968EA16107097324(iLocal_33, 0))
		{
			if (unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_33, 0))
			{
				if (unk_0x0F3BABBA4CB4778D(iLocal_33))
				{
					if (func_123("HELP_1"))
					{
						unk_0x4ACCE973F9C3CA3B(1);
					}
					if (unk_0xC3B073777B46C61A(uLocal_58))
					{
						unk_0x296CDA10C549A502(&uLocal_58);
					}
					if (unk_0xC3B073777B46C61A(uLocal_61))
					{
						unk_0x296CDA10C549A502(&uLocal_61);
					}
					if (unk_0xA2490B3CE6382FBB(Local_119, Local_132, 1) < 100f)
					{
						if (unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590()) == 0)
						{
							if (iLocal_316 == 1)
							{
								if (unk_0x3EAC9995EC220C5A() < iLocal_110 + 7500)
								{
									unk_0xA1E3A2CCF985EE86();
									iLocal_316 = 0;
								}
							}
							if (iLocal_417 == 0)
							{
								unk_0x746BA52A343DAF52(5f, 8f, 4);
								func_122("GOD_7", 7500, -1);
								iLocal_417 = 1;
							}
						}
						else if (iLocal_316 == 0)
						{
							unk_0x746BA52A343DAF52(5f, 8f, 4);
							unk_0x31160A650451F634("SCRIPTED_SCANNER_REPORT_BS_PREP_B_01", 0f);
							iLocal_110 = unk_0x3EAC9995EC220C5A();
							func_122("GOD_4", 7500, -1);
							iLocal_316 = 1;
						}
					}
					else if (unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590()) == 0)
					{
						iLocal_62 = 0;
						iLocal_28 = 4;
					}
				}
				else
				{
					if (unk_0xC3B073777B46C61A(uLocal_58))
					{
						unk_0x296CDA10C549A502(&uLocal_58);
					}
					if (unk_0x968EA16107097324(iLocal_32, 0))
					{
						if (!unk_0xC3B073777B46C61A(uLocal_61))
						{
							uLocal_61 = func_120(iLocal_32, 0, 0);
							unk_0x0AA0CF6371DDEDCF(uLocal_61, true);
							if (unk_0x5C62F8B9BBEC5A43())
							{
								unk_0xA1E3A2CCF985EE86();
							}
							if (iLocal_395 == 0)
							{
								func_122("GOD_6", 7500, -1);
								iLocal_395 = 1;
							}
							if (!func_123("HELP_1"))
							{
								func_119("HELP_1");
							}
						}
					}
				}
			}
			else
			{
				if (unk_0xC3B073777B46C61A(uLocal_61))
				{
					unk_0x296CDA10C549A502(&uLocal_61);
				}
				if (unk_0x968EA16107097324(iLocal_33, 0))
				{
					if (!unk_0xC3B073777B46C61A(uLocal_58))
					{
						uLocal_58 = func_120(iLocal_33, 0, 0);
						unk_0x0AA0CF6371DDEDCF(uLocal_58, true);
					}
				}
				if (iLocal_315 == 0)
				{
					unk_0xA1E3A2CCF985EE86();
					func_122("GOD_5", 7500, -1);
					iLocal_315 = 1;
				}
			}
		}
	}
}

void func_125(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_55669 = iParam0;
	if (!Global_55667)
	{
		Global_55667 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_67754)
		{
			if (Global_67755[iVar0 /*9*/] == iParam0)
			{
				Global_67755[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_126()
{
	if (iLocal_62 == 0)
	{
		if (iLocal_304 == 1)
		{
			func_34();
			iLocal_304 = 0;
		}
		func_149();
		func_93();
		if (!unk_0x398F615441F52A47())
		{
			unk_0x70F217796775EC85(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1));
			unk_0xCA6D671341405469(800);
		}
		if (unk_0x1F2158D615BC4B25(Global_87936[3]))
		{
			if (unk_0x968EA16107097324(Global_87936[3], 0))
			{
				if (unk_0x5FA5E5014A0AC183(unk_0xDF1398076E26B0E4(Global_87936[3])))
				{
					unk_0x8D429A827A931AC9(Global_87936[3], 1, 1);
					func_128(1.0095f, -631.9655f, 34.7259f, 349.0681f, 0, 145);
				}
				if (((unk_0xAEA8A39798337671(unk_0xDF1398076E26B0E4(Global_87936[3])) || unk_0x9FAD4C61F8FD96DE(unk_0xDF1398076E26B0E4(Global_87936[3]))) || unk_0x583E994764B3211E(unk_0xDF1398076E26B0E4(Global_87936[3]))) || unk_0x93FA2C9C44279C1C(unk_0xDF1398076E26B0E4(Global_87936[3])))
				{
					unk_0x8D429A827A931AC9(Global_87936[3], 1, 1);
					func_128(49.0052f, -599.5534f, 30.6299f, 158.5544f, 0, 145);
				}
			}
		}
		func_127(79);
		iLocal_396 = 1;
		iLocal_62 = 1;
	}
	if (iLocal_62 == 1)
	{
		iLocal_62 = 0;
		iLocal_28 = 3;
	}
}

void func_127(int iParam0)
{
	if (Global_88361 != -1)
	{
		if (iParam0 == Global_88361)
		{
			Global_88365 = 1;
			return;
		}
	}
}

void func_128(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	struct<3> Var0;
	var uVar3;
	
	if (unk_0x1F2158D615BC4B25(Global_92910.f_4))
	{
		if (unk_0x968EA16107097324(Global_92910.f_4, 0))
		{
			if (func_148(24) != Global_92910.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_145(unk_0xAF99169F0F5AE41D(Global_92910.f_4, 1), iParam5, &Var0, &uVar3))
					{
						Param0 = { Var0 };
						fParam3 = uVar3;
					}
				}
				func_129(Global_92910.f_4, Param0, fParam3, 24, 0);
			}
		}
	}
}

void func_129(int iParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;
	
	if (unk_0x1F2158D615BC4B25(iParam0) && unk_0x968EA16107097324(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0x1F2158D615BC4B25(Global_68186.f_484[25]) && unk_0x968EA16107097324(Global_68186.f_484[25], 0))
			{
				if (Global_68186.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0xEDDA3251103C6740(iParam0) || unk_0xDF1398076E26B0E4(iParam0) == joaat("bus")) || unk_0xDF1398076E26B0E4(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_144(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_40(iParam0, &Var0);
		if (func_84(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0xAF99169F0F5AE41D(iParam0, 1) };
			uParam4 = unk_0x7578EBD2DA3F8DD2(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0x39BD4614CF899227(unk_0x664B47C58CE8A0A4()) != joaat("vehicle_gen_controller"))
			{
				Global_69174 = unk_0x39BD4614CF899227(unk_0x664B47C58CE8A0A4());
			}
		}
		func_142(iParam5, &Var0, Param1, uParam4, func_56(iParam0));
		func_130(iParam5, iParam0, 0);
	}
}

void func_130(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_66(&(Global_68186.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0xB56FEBC510E7E9DE(Global_68186.f_555[0 /*21*/].f_9, 12) && !unk_0xB56FEBC510E7E9DE(Global_68186.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_68186.f_555[0 /*21*/].f_4 != unk_0xDF1398076E26B0E4(iParam1))
		{
			return;
		}
	}
	if (Global_69093 != -1 && Global_69093 != iParam0)
	{
		return;
	}
	if (unk_0x1F2158D615BC4B25(iParam1))
	{
		if (unk_0x968EA16107097324(iParam1, 0))
		{
			if (!unk_0x335346A332B62CA2(iParam1))
			{
				unk_0x8D429A827A931AC9(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_99250.f_18735.f_4801 = func_131();
			}
			if (iParam1 != Global_68186.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_148(iParam0);
					if ((unk_0x1F2158D615BC4B25(iVar0) && unk_0x968EA16107097324(iVar0, 0)) && iParam1 != iVar0)
					{
						func_39(iVar0, 145);
					}
				}
				Global_69092 = iParam1;
				Global_69093 = iParam0;
				Global_69094 = iParam2;
			}
		}
	}
}

var func_131()
{
	var uVar0;
	
	func_141(&uVar0, unk_0x624CC88A8815545E());
	func_140(&uVar0, unk_0xD3D98375D5CA69E4());
	func_139(&uVar0, unk_0x5C5157A539753532());
	func_134(&uVar0, unk_0xCB12BC5A618B995B());
	func_133(&uVar0, unk_0x9746D90F14C930B9());
	func_132(&uVar0, unk_0xD45B57A596913560());
	return uVar0;
}

void func_132(var uParam0, int iParam1)
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

void func_133(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_134(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_138(*uParam0);
	iVar1 = func_136(*uParam0);
	if (iParam1 < 1 || iParam1 > func_135(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_135(int iParam0, int iParam1)
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

var func_136(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_137(unk_0xB56FEBC510E7E9DE(iParam0, 31), -1, 1)) + 2011;
}

int func_137(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_138(var uParam0)
{
	return uParam0 & 15;
}

void func_139(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_140(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_141(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

void func_142(int iParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6)
{
	if (func_66(&(Global_68186.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xB56FEBC510E7E9DE(Global_68186.f_555[0 /*21*/].f_9, 10))
		{
			func_143(iParam0);
			func_63(uParam1, &(Global_99250.f_18735.f_69[Global_68186.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0xB56FEBC510E7E9DE(Global_68186.f_555[0 /*21*/].f_9, 11))
			{
				Global_99250.f_18735.f_1864[Global_68186.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_99250.f_18735.f_1934[Global_68186.f_555[0 /*21*/].f_14] = uParam5;
			}
			else
			{
				Global_99250.f_18735.f_1864[Global_68186.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_99250.f_18735.f_1934[Global_68186.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_99250.f_18735.f_1958[Global_68186.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_59(iParam0, 1);
		}
	}
}

void func_143(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_66(&(Global_68186.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x1F2158D615BC4B25(Global_68186.f_139[iParam0]))
		{
			unk_0x8D429A827A931AC9(Global_68186.f_139[iParam0], 1, 1);
			unk_0xB84D4C251623B60C(&(Global_68186.f_139[iParam0]));
			Global_68186.f_139[iParam0] = 0;
		}
		if (unk_0xB56FEBC510E7E9DE(Global_68186.f_555[0 /*21*/].f_9, 13))
		{
			func_59(iParam0, 0);
		}
	}
}

void func_144(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_143(iParam0);
	func_59(iParam0, 0);
}

int func_145(struct<3> Param0, int iParam3, var uParam4, var uParam5)
{
	int iVar0;
	
	iVar0 = func_146(Param0, iParam3, 1);
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

int func_146(struct<3> Param0, int iParam3, int iParam4)
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
		if (Global_86477[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_86477[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_147(iVar0) || iParam4 == 0)
				{
					fVar1 = unk_0xA2490B3CE6382FBB(Param0, Global_86477[iVar0 /*10*/].f_3, 1);
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

bool func_147(int iParam0)
{
	return unk_0xB56FEBC510E7E9DE(Global_99250.f_5847[iParam0], 0);
}

int func_148(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_68186.f_139[iParam0];
}

void func_149()
{
	Global_85617 = 1;
}

void func_150()
{
	unk_0xDBCB209530188FF6(unk_0x8ACD527A7E574590(), 1);
	unk_0x4AAD01BBE039D160(0.01f);
	uLocal_53 = unk_0x2277155D92E898D2(861.6f, -1599.7f, 27.9f, 961.8f, -1476.4f, 49.7f, 0, 1, 1, 1);
	uLocal_54 = unk_0x2277155D92E898D2(851.2f, -1598.2f, 29.7f, 855.7f, -1587.1f, 33f, 0, 1, 1, 1);
	uLocal_55 = unk_0x2277155D92E898D2(859.4f, -1569.6f, 32.3f, 865.4f, -1561f, 28.7f, 0, 1, 1, 1);
	uLocal_56 = unk_0x2277155D92E898D2(939f, -1576.8f, 33f, 943.8f, -1571.3f, 28.9f, 0, 1, 1, 1);
	uLocal_51 = unk_0x2277155D92E898D2(5.4f, -588f, 39.1f, 57.4f, -678.8f, 25.4f, 0, 1, 1, 1);
	uLocal_52 = unk_0x2277155D92E898D2(50.9f, -641.6f, 37.7f, 81.1f, -608.4f, 29.5f, 0, 1, 1, 1);
	if (func_29())
	{
		if (Global_85616 == 1)
		{
			func_152(28.4065f, -608.9371f, 30.6293f, 70.7778f, 1, 0);
			iLocal_483 = 1;
			iLocal_304 = 1;
			iLocal_62 = 0;
			iLocal_28 = 5;
		}
		else if (func_151() == 0)
		{
			if (func_92() && func_89(7f, 7f, 7f, 1))
			{
				func_152(818.8139f, -1610.406f, 30.7951f, 264.412f, 1, 0);
			}
			else
			{
				func_152(825.5603f, -1605.825f, 30.9548f, 312.5221f, 1, 0);
			}
			iLocal_304 = 1;
			iLocal_483 = 1;
			iLocal_62 = 0;
			iLocal_28 = 3;
		}
	}
	else if (func_187(0))
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

int func_151()
{
	if (!Global_91106 == 10 && !Global_91106 == 9)
	{
		return 0;
	}
	return Global_91106.f_2;
}

void func_152(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	if (func_29())
	{
		unk_0x2A1F1A3180086B2E(0);
		unk_0xA5F70A8B83BDFA49(&(Global_91106.f_20), 2);
		unk_0xADD55DEFB7B8CB4F(1);
		if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
		{
			unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), 0, 0);
		}
		Global_91102 = { Param0 };
		Global_91105 = fParam3;
		Global_91101 = 1;
		if (iParam4 == 1)
		{
			unk_0x573691DB812DC8AA(&(Global_91106.f_20), 14);
		}
		else
		{
			unk_0xA5F70A8B83BDFA49(&(Global_91106.f_20), 14);
		}
		if (iParam5 == 1)
		{
			unk_0x573691DB812DC8AA(&(Global_91106.f_20), 24);
		}
		else
		{
			unk_0xA5F70A8B83BDFA49(&(Global_91106.f_20), 24);
		}
		func_28(1);
	}
}

void func_153()
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

void func_154()
{
	if (!unk_0x1F2158D615BC4B25(iLocal_49))
	{
		if (unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), 45f, -616.2f, 30.8f, 1) < 150f)
		{
			unk_0xC60576ADD1AECA45(joaat("s_m_m_security_01"));
			if (unk_0x4A4B6FD54C499B7D(joaat("s_m_m_security_01")))
			{
				iLocal_49 = unk_0x6665DCC708A346F3(26, joaat("s_m_m_security_01"), 64.904f, -617.9949f, 30.7028f, 223.555f, 1, 1);
				unk_0x1706625EBCDDEBF9(iLocal_49, 324, 1);
			}
			unk_0xFB4F6722A032A0F0(joaat("s_m_m_security_01"));
		}
	}
	if (unk_0x1F2158D615BC4B25(iLocal_49))
	{
		if (!unk_0x1E80C02AC16B6622(iLocal_49))
		{
			if (unk_0x86A43F1FB9C445CA(65.2f, -617.2f, 30.8f, 5f, 0))
			{
				if (iLocal_456 == 0)
				{
					if (unk_0xF74B69DFD85D7CCE(iLocal_49))
					{
						unk_0xE2CB8488CFA42209(iLocal_49);
					}
					else
					{
						unk_0xB28207B96952D994(iLocal_49);
					}
					unk_0x536F7A20D4B5FD1B(iLocal_49, 65.2f, -617.2f, 31f, 2f, 0);
					unk_0x112CD899A3BEE719(iLocal_49, 1);
					iLocal_113 = unk_0x3EAC9995EC220C5A();
					iLocal_456 = 1;
				}
				else if (unk_0x3EAC9995EC220C5A() > iLocal_113 + 5000)
				{
					if (!unk_0x1920D2F8A6E5C72A(iLocal_49))
					{
						iLocal_456 = 0;
					}
				}
			}
			if (func_156(unk_0x77F050A399DB77ED(), iLocal_49, 1) < 20f)
			{
				if (iLocal_421 == 0)
				{
					unk_0xD0C8DD55C652567F(iLocal_49, unk_0x77F050A399DB77ED(), -1, 1072, 3);
					iLocal_421 = 1;
				}
			}
			else if (iLocal_421 == 1)
			{
				unk_0xD0C8DD55C652567F(iLocal_49, unk_0x77F050A399DB77ED(), 1, 0, 2);
				iLocal_421 = 0;
			}
		}
	}
	if (unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), 45f, -616.2f, 30.8f, 1) < 50f)
	{
		if (iLocal_457 == 0)
		{
			iLocal_114 = 498972213;
			iLocal_115 = -512924631;
			unk_0x45244BF5B177AB73(iLocal_114, joaat("prop_sec_barrier_ld_01a"), 61f, -633f, 32f, 1, 1, 0);
			unk_0x45244BF5B177AB73(iLocal_115, joaat("prop_sec_barrier_ld_01a"), 66f, -618f, 32f, 1, 1, 0);
			iLocal_457 = 1;
		}
		if (iLocal_457 == 1)
		{
			if (unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590()) == 0)
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
						unk_0xF5BF71EE00B09F42(iLocal_114, fLocal_135, 0, 1);
						unk_0xF5BF71EE00B09F42(iLocal_115, fLocal_135, 0, 1);
						unk_0x39FEEC3E8273065D(iLocal_114, 4, 0, 1);
						unk_0x39FEEC3E8273065D(iLocal_115, 4, 0, 1);
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
						unk_0xF5BF71EE00B09F42(iLocal_114, fLocal_135, 0, 1);
						unk_0xF5BF71EE00B09F42(iLocal_115, fLocal_135, 0, 1);
						unk_0x39FEEC3E8273065D(iLocal_114, 4, 0, 1);
						unk_0x39FEEC3E8273065D(iLocal_115, 4, 0, 1);
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
						unk_0xF5BF71EE00B09F42(iLocal_114, fLocal_135, 0, 1);
						unk_0xF5BF71EE00B09F42(iLocal_115, fLocal_135, 0, 1);
						unk_0x39FEEC3E8273065D(iLocal_114, 4, 0, 1);
						unk_0x39FEEC3E8273065D(iLocal_115, 4, 0, 1);
						iLocal_422 = 1;
					}
				}
			}
		}
		if (unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), 62.90151f, -638.6329f, 29.9188f, 70.78919f, -617.1338f, 36.91788f, 10.75f, 0, 1, 0))
		{
			if (unk_0x1F2158D615BC4B25(iLocal_49))
			{
				if (!unk_0x1E80C02AC16B6622(iLocal_49))
				{
					if (unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590()) == 0)
					{
						if (iLocal_419 == 0)
						{
							if (iLocal_418 == 0)
							{
								func_117(&uLocal_137, 4, iLocal_49, "FHPBSecGuard", 0, 1);
								if (func_155(&uLocal_137, "FHPBAUD", "FHPB_CHAT20", 7, 0, 0, 0))
								{
									iLocal_418 = 1;
								}
							}
						}
						else if (iLocal_420 == 0)
						{
							func_117(&uLocal_137, 4, iLocal_49, "FHPBSecGuard", 0, 1);
							if (func_155(&uLocal_137, "FHPBAUD", "FHPB_CHAT22", 7, 0, 0, 0))
							{
								iLocal_420 = 1;
							}
						}
					}
					else if (iLocal_419 == 0)
					{
						func_117(&uLocal_137, 4, iLocal_49, "FHPBSecGuard", 0, 1);
						if (func_155(&uLocal_137, "FHPBAUD", "FHPB_CHAT21", 7, 0, 0, 0))
						{
							iLocal_419 = 1;
						}
					}
				}
			}
		}
	}
}

bool func_155(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_116(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15719 = 0;
	Global_15721 = 0;
	Global_15726 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_2621441 = 0;
	return func_108(sParam2, iParam3, 0);
}

float func_156(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x0B6E83A9A7ED3EBA(iParam0))
	{
		Var0 = { unk_0xAF99169F0F5AE41D(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xAF99169F0F5AE41D(iParam0, 0) };
	}
	if (!unk_0x0B6E83A9A7ED3EBA(iParam1))
	{
		Var3 = { unk_0xAF99169F0F5AE41D(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xAF99169F0F5AE41D(iParam1, 0) };
	}
	return unk_0xA2490B3CE6382FBB(Var0, Var3, iParam2);
}

void func_157()
{
	int iVar0;
	
	if (!unk_0x5C62F8B9BBEC5A43())
	{
		if (!func_161() || !unk_0x950050D3F7CAD174())
		{
			if (iLocal_28 == 3)
			{
				if (!unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0) && iLocal_31 == 0)
				{
					if (func_14() == 0)
					{
						if (iLocal_29 == 1)
						{
							if (iLocal_392 == 0)
							{
								if (func_159() && func_158())
								{
									if (func_155(&uLocal_137, "SOL1AUD", "SOL1_SEE5", 7, 0, 0, 0))
									{
										iLocal_112 = unk_0x3EAC9995EC220C5A();
										iLocal_392 = 1;
									}
								}
							}
						}
						if (iLocal_29 == 1)
						{
							if (iLocal_392 == 1 && unk_0x3EAC9995EC220C5A() > iLocal_112 + 7000)
							{
								if (func_159() && func_158())
								{
									if (func_155(&uLocal_137, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
									{
										iLocal_112 = unk_0x3EAC9995EC220C5A();
									}
								}
							}
						}
					}
					if (iLocal_29 == 2)
					{
						if (iLocal_430 == 0)
						{
							if (func_159())
							{
								if (func_155(&uLocal_137, "SOL1AUD", "SOL1_SEC3", 7, 0, 0, 0))
								{
									iLocal_95 = unk_0x3EAC9995EC220C5A();
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
						if (func_159() && func_158())
						{
							if (func_155(&uLocal_137, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
							{
								iLocal_108 = unk_0x3EAC9995EC220C5A();
								iLocal_455 = 1;
							}
						}
					}
					else if (unk_0x3EAC9995EC220C5A() > iLocal_108 + 8000)
					{
						if (func_159() && func_158())
						{
							if (func_155(&uLocal_137, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
							{
								iLocal_108 = unk_0x3EAC9995EC220C5A();
							}
						}
					}
				}
				if (iLocal_29 == 4)
				{
					if (iLocal_391 == 0)
					{
						func_99();
						if (func_159())
						{
							unk_0x587BE7B13B3A93BF(unk_0x77F050A399DB77ED(), &iVar0, 1);
							if (iVar0 != joaat("weapon_unarmed") && iVar0 != 0)
							{
								if (func_155(&uLocal_137, "SOL1AUD", "SOL1_ARM3", 7, 0, 0, 0))
								{
									iLocal_77 = unk_0x3EAC9995EC220C5A();
									iLocal_387 = 1;
									iLocal_391 = 1;
								}
							}
							else
							{
								iLocal_77 = unk_0x3EAC9995EC220C5A();
								iLocal_387 = 1;
								iLocal_391 = 1;
							}
						}
					}
					if (iLocal_391 == 1)
					{
						if (iLocal_387 == 0)
						{
							iLocal_77 = unk_0x3EAC9995EC220C5A();
							iLocal_387 = 1;
						}
						if (iLocal_387 == 1)
						{
							if (unk_0x3EAC9995EC220C5A() > iLocal_77 + 9000)
							{
								if (func_159())
								{
									if (func_155(&uLocal_137, "SOL1AUD", "SOL1_PAN3", 7, 0, 0, 0))
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
								if (func_159())
								{
									if (func_155(&uLocal_137, "SOL1AUD", "SOL1_STEAL3", 7, 0, 0, 0))
									{
										iLocal_389 = 1;
									}
								}
							}
						}
					}
					if (iLocal_388 == 0)
					{
						if (unk_0x1F2158D615BC4B25(iLocal_33))
						{
							if (unk_0x968EA16107097324(iLocal_33, 0))
							{
								if (unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_33, 0))
								{
									if (func_159())
									{
										if (func_155(&uLocal_137, "SOL1AUD", "SOL1_OUT3", 7, 0, 0, 0))
										{
											iLocal_78 = unk_0x3EAC9995EC220C5A();
											iLocal_389 = 1;
										}
									}
								}
							}
						}
					}
					if (unk_0x3EAC9995EC220C5A() > iLocal_78 + 10000)
					{
						if (unk_0x1F2158D615BC4B25(iLocal_33))
						{
							if (unk_0x968EA16107097324(iLocal_33, 0))
							{
								if (unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_33, 0))
								{
									if (func_159())
									{
										if (func_155(&uLocal_137, "SOL1AUD", "SOL1_OUT3", 7, 0, 0, 0))
										{
											iLocal_78 = unk_0x3EAC9995EC220C5A();
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
							if (func_159())
							{
								if (func_155(&uLocal_137, "SOL1AUD", "SOL1_SEC3", 7, 0, 0, 0))
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

int func_158()
{
	if (func_14() == 0)
	{
		func_117(&uLocal_137, 0, unk_0x77F050A399DB77ED(), "MICHAEL", 0, 1);
		return 1;
	}
	if (func_14() == 1)
	{
		func_117(&uLocal_137, 1, unk_0x77F050A399DB77ED(), "FRANKLIN", 0, 1);
		return 1;
	}
	if (func_14() == 2)
	{
		func_117(&uLocal_137, 2, unk_0x77F050A399DB77ED(), "TREVOR", 0, 1);
		return 1;
	}
	return 0;
}

int func_159()
{
	int iVar0;
	
	iLocal_66 = 0;
	while (iLocal_66 <= 6)
	{
		if (unk_0x1F2158D615BC4B25(iLocal_35[iLocal_66]))
		{
			if (!unk_0x1E80C02AC16B6622(iLocal_35[iLocal_66]))
			{
				iVar0 = func_160(unk_0x77F050A399DB77ED(), iLocal_302, 0, 0, -1);
				if (unk_0x1F2158D615BC4B25(iVar0))
				{
					if (!unk_0x1E80C02AC16B6622(iVar0))
					{
					}
				}
				if (iVar0 == iLocal_35[iLocal_66] && func_156(unk_0x77F050A399DB77ED(), iVar0, 1) < 15f)
				{
					func_117(&uLocal_137, 5, iLocal_35[iLocal_66], "CONSTRUCTION3", 0, 1);
					return 1;
				}
			}
		}
		iLocal_66++;
	}
	return 0;
}

int func_160(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0[16];
	int iVar17;
	
	iVar17 = 0;
	if (!unk_0x1E80C02AC16B6622(iParam0))
	{
		unk_0xC153C0A3AB834C19(iParam0, &iVar0, iParam4);
		iVar17 = 0;
		while (iVar17 <= (iVar0 - 1))
		{
			if (unk_0x1F2158D615BC4B25(iVar0[iVar17]))
			{
				if (!unk_0x1E80C02AC16B6622(iVar0[iVar17]))
				{
					if (unk_0xE88F019B82A2D21E(iVar0[iVar17]) == iParam1)
					{
						if (iParam2 <= 0)
						{
							if (iParam3 == 1)
							{
								if (unk_0xF74B69DFD85D7CCE(iVar0[iVar17]))
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
							if (unk_0x1F2158D615BC4B25(iVar0[(iVar17 + iParam2)]))
							{
								if (!unk_0x1E80C02AC16B6622(iVar0[(iVar17 + iParam2)]))
								{
									if (unk_0xE88F019B82A2D21E(iVar0[(iVar17 + iParam2)]) == iParam1)
									{
										if (iParam3 == 1)
										{
											if (unk_0xF74B69DFD85D7CCE(iVar0[(iVar17 + iParam2)]))
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

int func_161()
{
	if (Global_15712 != 0 || unk_0x1066B6347C40B301())
	{
		return 1;
	}
	return 0;
}

void func_162()
{
	if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
	{
		if (unk_0xE8A6EC34A210142F(unk_0x77F050A399DB77ED()) && unk_0x102639E2874F3AA1(unk_0x77F050A399DB77ED()))
		{
			unk_0x4AAD01BBE039D160(0f);
		}
		else
		{
			unk_0x4AAD01BBE039D160(1f);
		}
	}
	func_169();
	if (iLocal_404[0])
	{
		if (func_156(unk_0x77F050A399DB77ED(), iLocal_43[0], 1) < 20f && unk_0xD89F5D6405AFC348(iLocal_43[0], unk_0x77F050A399DB77ED()))
		{
			if (iLocal_433[0] == 0)
			{
				unk_0xD0C8DD55C652567F(iLocal_43[0], unk_0x77F050A399DB77ED(), -1, 1072, 3);
				iLocal_433[0] = 1;
			}
			if (iLocal_433[0] == 1)
			{
				if (unk_0x49C650267EDFEBC6(iLocal_43[0], 150319005) != 0 || unk_0x49C650267EDFEBC6(iLocal_43[0], 150319005) != 1)
				{
					iLocal_433[0] = 0;
				}
			}
		}
		else if (iLocal_433[0] == 1)
		{
			unk_0xD0C8DD55C652567F(iLocal_43[0], unk_0x77F050A399DB77ED(), 1, 0, 2);
			iLocal_433[0] = 0;
		}
	}
	if (iLocal_404[1])
	{
		if (func_156(unk_0x77F050A399DB77ED(), iLocal_43[1], 1) < 20f && unk_0xD89F5D6405AFC348(iLocal_43[1], unk_0x77F050A399DB77ED()))
		{
			if (iLocal_433[1] == 0)
			{
				unk_0xD0C8DD55C652567F(iLocal_43[1], unk_0x77F050A399DB77ED(), -1, 1072, 3);
				iLocal_433[1] = 1;
			}
			if (iLocal_433[1] == 1)
			{
				if (unk_0x49C650267EDFEBC6(iLocal_43[1], 150319005) != 0 || unk_0x49C650267EDFEBC6(iLocal_43[1], 150319005) != 1)
				{
					iLocal_433[1] = 0;
				}
			}
		}
		else if (iLocal_433[1] == 1)
		{
			unk_0xD0C8DD55C652567F(iLocal_43[1], unk_0x77F050A399DB77ED(), 1, 0, 2);
			iLocal_433[1] = 0;
		}
	}
	if (iLocal_404[0] && iLocal_404[1])
	{
		if (func_156(unk_0x77F050A399DB77ED(), iLocal_43[0], 1) < func_156(unk_0x77F050A399DB77ED(), iLocal_43[1], 1))
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
			if (unk_0xEA9737C9481F013D("SCRAP_SECURITY"))
			{
				if (!unk_0x2559EB71C62A9E4B("SCRAP_SECURITY"))
				{
					unk_0x4EF69B4FDEEC776F("SCRAP_SECURITY", 1);
				}
				if (unk_0x2559EB71C62A9E4B("SCRAP_SECURITY"))
				{
					if (unk_0x1F2158D615BC4B25(iLocal_43[0]))
					{
						if (!unk_0x1E80C02AC16B6622(iLocal_43[0]))
						{
							if (!unk_0x6AAB8B489E63DE0C(iLocal_43[0]))
							{
								if (unk_0x86A43F1FB9C445CA(863.1551f, -1564.572f, 29.3231f, 5f, 1))
								{
									iLocal_105[0] = unk_0x3EAC9995EC220C5A();
									if (!unk_0x014FA2F872321EAC(iLocal_43[0]))
									{
										if (iLocal_462[0] == 0)
										{
											unk_0xABBC4709B481B723(iLocal_43[0], 863.1551f, -1564.572f, 29.3231f, 5f, 0);
											iLocal_459[0] = 0;
											iLocal_462[0] = 1;
										}
									}
								}
								else if (unk_0x3EAC9995EC220C5A() > iLocal_105[0] + 2000)
								{
									if (unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(iLocal_43[0], 1), 863.1551f, -1564.572f, 29.3231f, 1) > 3f)
									{
										if (iLocal_459[0] == 0)
										{
											unk_0xE3BCB930B62CBDE5(iLocal_43[0], 863.1551f, -1564.572f, 29.3231f, 1f, -1, 1048576000, 0, 1193033728);
											iLocal_462[0] = 0;
											iLocal_459[0] = 1;
										}
									}
								}
							}
						}
					}
					if (unk_0x1F2158D615BC4B25(iLocal_43[1]))
					{
						if (!unk_0x1E80C02AC16B6622(iLocal_43[1]))
						{
							if (!unk_0x6AAB8B489E63DE0C(iLocal_43[1]))
							{
								if (unk_0x86A43F1FB9C445CA(940.2881f, -1573.877f, 29.3866f, 5f, 1))
								{
									iLocal_105[1] = unk_0x3EAC9995EC220C5A();
									if (!unk_0x014FA2F872321EAC(iLocal_43[1]))
									{
										if (iLocal_462[1] == 0)
										{
											unk_0xABBC4709B481B723(iLocal_43[1], 940.2881f, -1573.877f, 29.3866f, 5f, 0);
											iLocal_459[1] = 0;
											iLocal_462[1] = 1;
										}
									}
								}
								else if (unk_0x3EAC9995EC220C5A() > iLocal_105[1] + 2000)
								{
									if (unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(iLocal_43[1], 1), 940.2881f, -1573.877f, 29.3866f, 1) > 3f)
									{
										if (iLocal_459[1] == 0)
										{
											unk_0xE3BCB930B62CBDE5(iLocal_43[1], 940.2881f, -1573.877f, 29.3866f, 1f, -1, 1048576000, 0, 1193033728);
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
			if (unk_0x1F2158D615BC4B25(iLocal_43[0]))
			{
				if (!unk_0x1E80C02AC16B6622(iLocal_43[0]))
				{
					if (func_156(unk_0x77F050A399DB77ED(), iLocal_43[0], 1) < 20f)
					{
						if ((func_168(unk_0x77F050A399DB77ED()) == joaat("weapon_unarmed") || unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0)) || func_167(0))
						{
							if (unk_0x6867AF84AF12BEFC(unk_0x77F050A399DB77ED(), iLocal_43[0], 100f) || unk_0xD89F5D6405AFC348(iLocal_43[0], unk_0x77F050A399DB77ED()))
							{
								if (unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), 860.4606f, -1563.58f, 28.81788f, 865.0807f, -1575.088f, 30.93324f, 5.75f, 0, 1, 0) || unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, 1, 0))
								{
									if (iLocal_451[0] == 0)
									{
										if (!unk_0x6867AF84AF12BEFC(iLocal_43[0], unk_0x77F050A399DB77ED(), 45f))
										{
											if (!unk_0xF74B69DFD85D7CCE(iLocal_43[0]))
											{
												unk_0xB28207B96952D994(iLocal_43[0]);
											}
											else
											{
												unk_0xE2CB8488CFA42209(iLocal_43[0]);
											}
											unk_0x9A42ADE14351A508(iLocal_43[0], unk_0x77F050A399DB77ED(), 5000);
											iLocal_102[0] = unk_0x3EAC9995EC220C5A();
											func_166(iLocal_43[0]);
											iLocal_451[0] = 1;
										}
									}
									if (iLocal_451[0] == 1)
									{
										if (unk_0x3EAC9995EC220C5A() > iLocal_102[0] + 5000)
										{
											iLocal_451[0] = 0;
										}
									}
									if (iLocal_407[0] == 0 && iLocal_407[1] == 0)
									{
										if (iLocal_403 == 0)
										{
											func_164(iLocal_43[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 6);
											iLocal_82 = unk_0x3EAC9995EC220C5A();
											iLocal_403 = 1;
										}
										else if (unk_0x3EAC9995EC220C5A() > iLocal_82 + 15000)
										{
											func_164(iLocal_43[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
											iLocal_82 = unk_0x3EAC9995EC220C5A();
										}
									}
									else
									{
										if (iLocal_407[0] == 1)
										{
											if (iLocal_410 == 0)
											{
												func_164(iLocal_43[0], "PROVOKE_GEBERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_88 = unk_0x3EAC9995EC220C5A();
												iLocal_410 = 1;
											}
											else if (unk_0x3EAC9995EC220C5A() > iLocal_88 + 15000)
											{
												func_164(iLocal_43[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_88 = unk_0x3EAC9995EC220C5A();
											}
										}
										if (iLocal_407[1] == 1)
										{
											if (iLocal_411 == 0)
											{
												func_164(iLocal_43[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_89 = unk_0x3EAC9995EC220C5A();
												iLocal_411 = 1;
											}
											else if (unk_0x3EAC9995EC220C5A() > iLocal_89 + 15000)
											{
												func_164(iLocal_43[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_89 = unk_0x3EAC9995EC220C5A();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			if (unk_0x1F2158D615BC4B25(iLocal_43[1]))
			{
				if (!unk_0x1E80C02AC16B6622(iLocal_43[1]))
				{
					if (func_156(unk_0x77F050A399DB77ED(), iLocal_43[1], 1) < 15f)
					{
						if ((func_168(unk_0x77F050A399DB77ED()) == joaat("weapon_unarmed") || unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0)) || func_167(0))
						{
							if (unk_0x6867AF84AF12BEFC(unk_0x77F050A399DB77ED(), iLocal_43[1], 100f))
							{
								if (unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), 939.8862f, -1575.635f, 28.59783f, 952.9254f, -1575.484f, 33.19459f, 13.75f, 0, 1, 0))
								{
									if (iLocal_451[1] == 0)
									{
										if (!unk_0x6867AF84AF12BEFC(iLocal_43[1], unk_0x77F050A399DB77ED(), 45f))
										{
											if (!unk_0xF74B69DFD85D7CCE(iLocal_43[1]))
											{
												unk_0xB28207B96952D994(iLocal_43[1]);
											}
											else
											{
												unk_0xE2CB8488CFA42209(iLocal_43[1]);
											}
											unk_0x9A42ADE14351A508(iLocal_43[1], unk_0x77F050A399DB77ED(), 5000);
											iLocal_102[1] = unk_0x3EAC9995EC220C5A();
											func_166(iLocal_43[1]);
											iLocal_451[1] = 1;
										}
									}
									if (iLocal_451[1] == 1)
									{
										if (unk_0x3EAC9995EC220C5A() > iLocal_102[1] + 5000)
										{
											iLocal_451[1] = 0;
										}
									}
									if (iLocal_407[0] == 0 && iLocal_407[1] == 0)
									{
										if (iLocal_403 == 0)
										{
											func_164(iLocal_43[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
											iLocal_82 = unk_0x3EAC9995EC220C5A();
											iLocal_403 = 1;
										}
										else if (unk_0x3EAC9995EC220C5A() > iLocal_82 + 15000)
										{
											func_164(iLocal_43[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
											iLocal_82 = unk_0x3EAC9995EC220C5A();
										}
									}
									else
									{
										if (iLocal_407[1] == 1)
										{
											if (iLocal_410 == 0)
											{
												func_164(iLocal_43[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
												iLocal_88 = unk_0x3EAC9995EC220C5A();
												iLocal_410 = 1;
											}
											else if (unk_0x3EAC9995EC220C5A() > iLocal_88 + 15000)
											{
												func_164(iLocal_43[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_88 = unk_0x3EAC9995EC220C5A();
											}
										}
										if (iLocal_407[0] == 1)
										{
											if (iLocal_411 == 0)
											{
												func_164(iLocal_43[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
												iLocal_89 = unk_0x3EAC9995EC220C5A();
												iLocal_411 = 1;
											}
											else if (unk_0x3EAC9995EC220C5A() > iLocal_89 + 15000)
											{
												func_164(iLocal_43[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_89 = unk_0x3EAC9995EC220C5A();
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
			if (func_163() || iLocal_398 == 1)
			{
				if (unk_0x1F2158D615BC4B25(iLocal_43[0]))
				{
					if (!unk_0x1E80C02AC16B6622(iLocal_43[0]))
					{
						if (unk_0xD89F5D6405AFC348(iLocal_43[0], unk_0x77F050A399DB77ED()))
						{
							iLocal_99[0] = unk_0x3EAC9995EC220C5A();
							iLocal_445[0] = 1;
							if (iLocal_442[0] == 0)
							{
								if (unk_0xF74B69DFD85D7CCE(iLocal_43[0]))
								{
									unk_0xE2CB8488CFA42209(iLocal_43[0]);
								}
								else
								{
									unk_0xB28207B96952D994(iLocal_43[0]);
								}
								unk_0xB424F90D6E96BCF8(iLocal_43[0], 50, 1);
								unk_0xFBE25F0677076CF9(iLocal_43[0], unk_0x77F050A399DB77ED(), 0, 16);
								func_166(iLocal_43[0]);
								iLocal_442[0] = 1;
							}
						}
						else if (iLocal_448[0] == 0)
						{
							if (iLocal_445[0] == 0)
							{
								if (unk_0xF74B69DFD85D7CCE(iLocal_43[0]))
								{
									unk_0xE2CB8488CFA42209(iLocal_43[0]);
								}
								else
								{
									unk_0xB28207B96952D994(iLocal_43[0]);
								}
								unk_0xE3BCB930B62CBDE5(iLocal_43[0], unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), 3f, -1, 1048576000, 0, 1193033728);
								func_166(iLocal_43[0]);
								iLocal_448[0] = 1;
							}
							if (iLocal_445[0] == 1)
							{
								if (unk_0x3EAC9995EC220C5A() > iLocal_99[0] + 500)
								{
									if (unk_0xF74B69DFD85D7CCE(iLocal_43[0]))
									{
										unk_0xE2CB8488CFA42209(iLocal_43[0]);
									}
									else
									{
										unk_0xB28207B96952D994(iLocal_43[0]);
									}
									unk_0xE3BCB930B62CBDE5(iLocal_43[0], unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), 3f, -1, 1048576000, 0, 1193033728);
									func_166(iLocal_43[0]);
									iLocal_448[0] = 1;
								}
							}
						}
					}
				}
				if (unk_0x1F2158D615BC4B25(iLocal_43[1]))
				{
					if (!unk_0x1E80C02AC16B6622(iLocal_43[1]))
					{
						if (unk_0xD89F5D6405AFC348(iLocal_43[1], unk_0x77F050A399DB77ED()))
						{
							iLocal_99[1] = unk_0x3EAC9995EC220C5A();
							iLocal_445[1] = 1;
							if (iLocal_442[1] == 0)
							{
								if (unk_0xF74B69DFD85D7CCE(iLocal_43[1]))
								{
									unk_0xE2CB8488CFA42209(iLocal_43[1]);
								}
								else
								{
									unk_0xB28207B96952D994(iLocal_43[1]);
								}
								unk_0xB424F90D6E96BCF8(iLocal_43[1], 50, 1);
								unk_0xFBE25F0677076CF9(iLocal_43[1], unk_0x77F050A399DB77ED(), 0, 16);
								func_166(iLocal_43[1]);
								iLocal_442[1] = 1;
							}
						}
						else if (iLocal_448[1] == 0)
						{
							if (iLocal_445[1] == 0)
							{
								if (unk_0xF74B69DFD85D7CCE(iLocal_43[1]))
								{
									unk_0xE2CB8488CFA42209(iLocal_43[1]);
								}
								else
								{
									unk_0xB28207B96952D994(iLocal_43[1]);
								}
								unk_0xE3BCB930B62CBDE5(iLocal_43[1], unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), 3f, -1, 1048576000, 0, 1193033728);
								func_166(iLocal_43[1]);
								iLocal_448[1] = 1;
							}
							if (iLocal_445[1] == 1)
							{
								if (unk_0x3EAC9995EC220C5A() > iLocal_99[1] + 500)
								{
									if (unk_0xF74B69DFD85D7CCE(iLocal_43[1]))
									{
										unk_0xE2CB8488CFA42209(iLocal_43[1]);
									}
									else
									{
										unk_0xB28207B96952D994(iLocal_43[1]);
									}
									unk_0xE3BCB930B62CBDE5(iLocal_43[1], unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), 3f, -1, 1048576000, 0, 1193033728);
									func_166(iLocal_43[1]);
									iLocal_448[1] = 1;
								}
							}
						}
					}
				}
				if (func_163())
				{
					if (iLocal_412 == 0)
					{
						if (unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590()) < 2)
						{
							unk_0xCBC9707F3BE3D5C2(5);
							unk_0x4AAD01BBE039D160(1f);
							unk_0x3DF319A8C78275DD(unk_0x8ACD527A7E574590(), 2, 0);
							unk_0x32EB36CA60E96828(unk_0x8ACD527A7E574590(), 0);
							iLocal_412 = 1;
						}
					}
					if (iLocal_399 == 1)
					{
						if (iLocal_401 == 0)
						{
							if (func_156(unk_0x77F050A399DB77ED(), iLocal_43[0], 1) < 20f)
							{
								if (!unk_0x02807DDCACCF5736(iLocal_43[0]))
								{
									func_164(iLocal_43[0], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
									iLocal_87 = unk_0x3EAC9995EC220C5A();
									iLocal_401 = 1;
								}
							}
						}
						else if (unk_0x3EAC9995EC220C5A() > iLocal_87 + 7000)
						{
							if (func_156(unk_0x77F050A399DB77ED(), iLocal_43[0], 1) < 20f)
							{
								if (!unk_0x02807DDCACCF5736(iLocal_43[0]))
								{
									func_164(iLocal_43[0], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
									iLocal_87 = unk_0x3EAC9995EC220C5A();
								}
							}
						}
					}
					if (iLocal_400 == 1)
					{
						if (iLocal_401 == 0)
						{
							if (func_156(unk_0x77F050A399DB77ED(), iLocal_43[1], 1) < 20f)
							{
								if (!unk_0x02807DDCACCF5736(iLocal_43[1]))
								{
									func_164(iLocal_43[1], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
									iLocal_87 = unk_0x3EAC9995EC220C5A();
									iLocal_401 = 1;
								}
							}
						}
						else if (unk_0x3EAC9995EC220C5A() > iLocal_87 + 7000)
						{
							if (func_156(unk_0x77F050A399DB77ED(), iLocal_43[1], 1) < 20f)
							{
								if (!unk_0x02807DDCACCF5736(iLocal_43[1]))
								{
									func_164(iLocal_43[1], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
									iLocal_87 = unk_0x3EAC9995EC220C5A();
								}
							}
						}
					}
				}
				else
				{
					if (iLocal_458 == 0)
					{
						iLocal_50 = func_160(unk_0x77F050A399DB77ED(), joaat("COP"), 0, 0, 28);
						if (iLocal_50 != 0)
						{
							if (unk_0x1F2158D615BC4B25(iLocal_50))
							{
								if (!unk_0x1E80C02AC16B6622(iLocal_50))
								{
									if (func_156(unk_0x77F050A399DB77ED(), iLocal_50, 1) < 35f)
									{
										iLocal_458 = 1;
									}
								}
							}
						}
					}
					if (unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590()) > 0 && iLocal_458 == 0)
					{
						if (iLocal_399 == 1)
						{
							if (iLocal_402 == 0)
							{
								if (func_156(unk_0x77F050A399DB77ED(), iLocal_43[0], 1) < 20f)
								{
									if (!unk_0x02807DDCACCF5736(iLocal_43[0]))
									{
										func_164(iLocal_43[0], "GENERIC_INSULT_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
										iLocal_86 = unk_0x3EAC9995EC220C5A();
										iLocal_402 = 1;
									}
								}
							}
							else if (unk_0x3EAC9995EC220C5A() > iLocal_86 + 7000)
							{
								if (func_156(unk_0x77F050A399DB77ED(), iLocal_43[0], 1) < 20f)
								{
									if (!unk_0x02807DDCACCF5736(iLocal_43[0]))
									{
										func_164(iLocal_43[0], "GENERIC_CURSE_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
										iLocal_86 = unk_0x3EAC9995EC220C5A();
									}
								}
							}
						}
						if (iLocal_400 == 1)
						{
							if (iLocal_402 == 0)
							{
								if (func_156(unk_0x77F050A399DB77ED(), iLocal_43[1], 1) < 20f)
								{
									if (!unk_0x02807DDCACCF5736(iLocal_43[1]))
									{
										func_164(iLocal_43[1], "GENERIC_INSULT_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
										iLocal_86 = unk_0x3EAC9995EC220C5A();
										iLocal_402 = 1;
									}
								}
							}
							else if (unk_0x3EAC9995EC220C5A() > iLocal_86 + 7000)
							{
								if (func_156(unk_0x77F050A399DB77ED(), iLocal_43[1], 1) < 20f)
								{
									if (!unk_0x02807DDCACCF5736(iLocal_43[1]))
									{
										func_164(iLocal_43[1], "GENERIC_CURSE_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
										iLocal_86 = unk_0x3EAC9995EC220C5A();
									}
								}
							}
						}
					}
				}
			}
			if (!func_163())
			{
				if (iLocal_414 == 0)
				{
					if (unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), 893.2f, -1556.5f, 30f, 1) < 18f)
					{
						if (unk_0x1F2158D615BC4B25(iLocal_43[0]))
						{
							if (!unk_0x1E80C02AC16B6622(iLocal_43[0]))
							{
								if (unk_0xD89F5D6405AFC348(iLocal_43[0], unk_0x77F050A399DB77ED()))
								{
									iLocal_81 = unk_0x3EAC9995EC220C5A();
									iLocal_414 = 1;
								}
							}
						}
						if (unk_0x1F2158D615BC4B25(iLocal_43[1]))
						{
							if (!unk_0x1E80C02AC16B6622(iLocal_43[1]))
							{
								if (unk_0xD89F5D6405AFC348(iLocal_43[1], unk_0x77F050A399DB77ED()))
								{
									iLocal_81 = unk_0x3EAC9995EC220C5A();
									iLocal_414 = 1;
								}
							}
						}
					}
				}
				if (iLocal_398 == 0)
				{
					if (unk_0x1F2158D615BC4B25(iLocal_43[0]))
					{
						if (!unk_0x1E80C02AC16B6622(iLocal_43[0]))
						{
							if (func_156(unk_0x77F050A399DB77ED(), iLocal_43[0], 1) > 4f)
							{
								if (unk_0xD89F5D6405AFC348(iLocal_43[0], unk_0x77F050A399DB77ED()))
								{
									if (iLocal_436[0] == 0)
									{
										if (unk_0xF74B69DFD85D7CCE(iLocal_43[0]))
										{
											unk_0xE2CB8488CFA42209(iLocal_43[0]);
										}
										else
										{
											unk_0xB28207B96952D994(iLocal_43[0]);
										}
										unk_0xAFB86418412C8866(iLocal_43[0], unk_0x77F050A399DB77ED(), -1, 0.5f, 2f, 1073741824, 0);
										func_166(iLocal_43[0]);
										iLocal_436[0] = 1;
									}
									iLocal_96[0] = unk_0x3EAC9995EC220C5A();
								}
								else if (unk_0x3EAC9995EC220C5A() > iLocal_96[0] + 500)
								{
									if (iLocal_439[0] == 0)
									{
										if (unk_0xF74B69DFD85D7CCE(iLocal_43[0]))
										{
											unk_0xE2CB8488CFA42209(iLocal_43[0]);
										}
										else
										{
											unk_0xB28207B96952D994(iLocal_43[0]);
										}
										unk_0xE3BCB930B62CBDE5(iLocal_43[0], unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), 2f, -1, 1048576000, 0, 1193033728);
										func_166(iLocal_43[0]);
										iLocal_439[0] = 1;
									}
								}
							}
							else if (iLocal_484[0] == 0)
							{
								if (unk_0xF74B69DFD85D7CCE(iLocal_43[0]))
								{
									unk_0xE2CB8488CFA42209(iLocal_43[0]);
								}
								else
								{
									unk_0xB28207B96952D994(iLocal_43[0]);
								}
								unk_0x2A6B9F9E71C479CF(&uLocal_57);
								unk_0x9A42ADE14351A508(0, unk_0x77F050A399DB77ED(), 0);
								unk_0xE33220A2912EA6BB(0, 2000);
								unk_0x6962C44DA53439A8(uLocal_57, 1);
								unk_0x44642CB08FA1637E(uLocal_57);
								unk_0xB8A8FA4B28E9F423(iLocal_43[0], uLocal_57);
								unk_0xAAD288E877AC833D(&uLocal_57);
								func_166(iLocal_43[0]);
								iLocal_484[0] = 1;
							}
							if (iLocal_454 == 0)
							{
								if (iLocal_431 == 0 || iLocal_403 == 1)
								{
									if (iLocal_397 == 0)
									{
										if (func_156(unk_0x77F050A399DB77ED(), iLocal_43[0], 1) < 10f)
										{
											if (!unk_0x02807DDCACCF5736(iLocal_43[0]))
											{
												func_164(iLocal_43[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 1);
												iLocal_83 = unk_0x3EAC9995EC220C5A();
												iLocal_84 = unk_0x3EAC9995EC220C5A();
												iLocal_81 = unk_0x3EAC9995EC220C5A();
												iLocal_414 = 1;
												iLocal_397 = 1;
												iLocal_407[0] = 1;
											}
										}
									}
									else if (unk_0x3EAC9995EC220C5A() > iLocal_83 + 7000)
									{
										if (func_156(unk_0x77F050A399DB77ED(), iLocal_43[0], 1) < 10f)
										{
											if (!unk_0x02807DDCACCF5736(iLocal_43[0]))
											{
												func_164(iLocal_43[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
												iLocal_83 = unk_0x3EAC9995EC220C5A();
											}
										}
									}
								}
								else if (iLocal_403 == 0)
								{
									if (iLocal_432 == 0)
									{
										if (func_156(unk_0x77F050A399DB77ED(), iLocal_43[0], 1) < 10f)
										{
											if (!unk_0x02807DDCACCF5736(iLocal_43[0]))
											{
												func_164(iLocal_43[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 8);
												iLocal_397 = 1;
												iLocal_432 = 1;
											}
										}
									}
								}
							}
							else if (unk_0x3EAC9995EC220C5A() > iLocal_84 + 7000)
							{
								if (func_156(unk_0x77F050A399DB77ED(), iLocal_43[0], 1) < 15f)
								{
									if (!unk_0x02807DDCACCF5736(iLocal_43[0]))
									{
										func_164(iLocal_43[0], "FIGHT", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
										iLocal_84 = unk_0x3EAC9995EC220C5A();
									}
								}
							}
						}
					}
					if (unk_0x1F2158D615BC4B25(iLocal_43[1]))
					{
						if (!unk_0x1E80C02AC16B6622(iLocal_43[1]))
						{
							if (func_156(unk_0x77F050A399DB77ED(), iLocal_43[1], 1) > 4f)
							{
								if (unk_0xD89F5D6405AFC348(iLocal_43[1], unk_0x77F050A399DB77ED()))
								{
									if (iLocal_436[1] == 0)
									{
										if (unk_0xF74B69DFD85D7CCE(iLocal_43[1]))
										{
											unk_0xE2CB8488CFA42209(iLocal_43[1]);
										}
										else
										{
											unk_0xB28207B96952D994(iLocal_43[1]);
										}
										unk_0xAFB86418412C8866(iLocal_43[1], unk_0x77F050A399DB77ED(), -1, 0.5f, 2f, 1073741824, 0);
										func_166(iLocal_43[1]);
										iLocal_436[1] = 1;
									}
									iLocal_96[1] = unk_0x3EAC9995EC220C5A();
								}
								else if (unk_0x3EAC9995EC220C5A() > iLocal_96[1] + 500)
								{
									if (iLocal_439[1] == 0)
									{
										if (unk_0xF74B69DFD85D7CCE(iLocal_43[1]))
										{
											unk_0xE2CB8488CFA42209(iLocal_43[1]);
										}
										else
										{
											unk_0xB28207B96952D994(iLocal_43[1]);
										}
										unk_0xE3BCB930B62CBDE5(iLocal_43[1], unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), 2f, -1, 1048576000, 0, 1193033728);
										func_166(iLocal_43[1]);
										iLocal_439[1] = 1;
									}
								}
							}
							else if (iLocal_484[1] == 0)
							{
								if (unk_0xF74B69DFD85D7CCE(iLocal_43[1]))
								{
									unk_0xE2CB8488CFA42209(iLocal_43[1]);
								}
								else
								{
									unk_0xB28207B96952D994(iLocal_43[1]);
								}
								unk_0x2A6B9F9E71C479CF(&uLocal_57);
								unk_0x9A42ADE14351A508(0, unk_0x77F050A399DB77ED(), 0);
								unk_0xE33220A2912EA6BB(0, 2000);
								unk_0x6962C44DA53439A8(uLocal_57, 1);
								unk_0x44642CB08FA1637E(uLocal_57);
								unk_0xB8A8FA4B28E9F423(iLocal_43[1], uLocal_57);
								unk_0xAAD288E877AC833D(&uLocal_57);
								func_166(iLocal_43[1]);
								iLocal_484[1] = 1;
							}
							if (iLocal_454 == 0)
							{
								if (iLocal_431 == 0 || iLocal_403 == 1)
								{
									if (iLocal_397 == 0)
									{
										if (func_156(unk_0x77F050A399DB77ED(), iLocal_43[1], 1) < 10f)
										{
											if (!unk_0x02807DDCACCF5736(iLocal_43[1]))
											{
												func_164(iLocal_43[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_83 = unk_0x3EAC9995EC220C5A();
												iLocal_85 = unk_0x3EAC9995EC220C5A();
												iLocal_81 = unk_0x3EAC9995EC220C5A();
												iLocal_414 = 1;
												iLocal_397 = 1;
												iLocal_407[1] = 1;
											}
										}
									}
									else if (unk_0x3EAC9995EC220C5A() > iLocal_83 + 7000)
									{
										if (func_156(unk_0x77F050A399DB77ED(), iLocal_43[1], 1) < 10f)
										{
											if (!unk_0x02807DDCACCF5736(iLocal_43[1]))
											{
												func_164(iLocal_43[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 11);
												iLocal_83 = unk_0x3EAC9995EC220C5A();
											}
										}
									}
								}
								else if (iLocal_403 == 0)
								{
									if (iLocal_432 == 0)
									{
										if (func_156(unk_0x77F050A399DB77ED(), iLocal_43[1], 1) < 10f)
										{
											if (!unk_0x02807DDCACCF5736(iLocal_43[1]))
											{
												func_164(iLocal_43[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 8);
												iLocal_397 = 1;
												iLocal_432 = 1;
											}
										}
									}
								}
							}
							else if (unk_0x3EAC9995EC220C5A() > iLocal_85 + 7000)
							{
								if (func_156(unk_0x77F050A399DB77ED(), iLocal_43[1], 1) < 10f)
								{
									if (!unk_0x02807DDCACCF5736(iLocal_43[1]))
									{
										func_164(iLocal_43[1], "FIGHT", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 11);
										iLocal_85 = unk_0x3EAC9995EC220C5A();
									}
								}
							}
						}
					}
					if (iLocal_414 == 1)
					{
						if (iLocal_454 == 0)
						{
							if (unk_0x3EAC9995EC220C5A() > iLocal_81 + 22000)
							{
								iLocal_454 = 1;
							}
						}
					}
					if (iLocal_414 == 1)
					{
						if (iLocal_398 == 0)
						{
							if (unk_0x3EAC9995EC220C5A() > iLocal_81 + 30000)
							{
								unk_0x3DF319A8C78275DD(unk_0x8ACD527A7E574590(), 2, 0);
								iLocal_398 = 1;
							}
						}
					}
					if (unk_0x1F2158D615BC4B25(iLocal_33))
					{
						if (unk_0x968EA16107097324(iLocal_33, 0))
						{
							if (unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_33, 1))
							{
								if (unk_0xD89F5D6405AFC348(iLocal_43[0], unk_0x77F050A399DB77ED()) || unk_0xD89F5D6405AFC348(iLocal_43[1], unk_0x77F050A399DB77ED()))
								{
									iLocal_398 = 1;
								}
							}
							if (func_156(unk_0x77F050A399DB77ED(), iLocal_33, 1) < 5f && unk_0xB2C4D90B868C2250(unk_0x77F050A399DB77ED()))
							{
								if (unk_0xD89F5D6405AFC348(iLocal_43[0], unk_0x77F050A399DB77ED()) || unk_0xD89F5D6405AFC348(iLocal_43[1], unk_0x77F050A399DB77ED()))
								{
									iLocal_398 = 1;
								}
							}
						}
					}
					if (unk_0x1F2158D615BC4B25(iLocal_43[0]))
					{
						if (!unk_0x1E80C02AC16B6622(iLocal_43[0]))
						{
							if (unk_0x9FA30238987B8B6F(unk_0x77F050A399DB77ED()))
							{
								if (unk_0xEC9C09BBB181AB08(unk_0x77F050A399DB77ED()))
								{
									if (unk_0xD89F5D6405AFC348(iLocal_43[0], unk_0x77F050A399DB77ED()))
									{
										iLocal_398 = 1;
									}
								}
							}
						}
					}
					if (unk_0x1F2158D615BC4B25(iLocal_43[1]))
					{
						if (!unk_0x1E80C02AC16B6622(iLocal_43[1]))
						{
							if (unk_0x9FA30238987B8B6F(unk_0x77F050A399DB77ED()))
							{
								if (unk_0xEC9C09BBB181AB08(unk_0x77F050A399DB77ED()))
								{
									if (unk_0xD89F5D6405AFC348(iLocal_43[1], unk_0x77F050A399DB77ED()))
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

int func_163()
{
	if (!unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
	{
		iLocal_80 = 0;
		while (iLocal_80 <= 6)
		{
			if (unk_0x1F2158D615BC4B25(iLocal_35[iLocal_80]))
			{
				if (!unk_0x1E80C02AC16B6622(iLocal_35[iLocal_80]))
				{
					if (func_168(unk_0x77F050A399DB77ED()) != joaat("weapon_unarmed") && !func_167(0))
					{
						if (unk_0xD89F5D6405AFC348(iLocal_35[iLocal_80], unk_0x77F050A399DB77ED()))
						{
							return 1;
						}
					}
				}
			}
			iLocal_80++;
		}
		if (unk_0x1F2158D615BC4B25(iLocal_43[0]))
		{
			if (!unk_0x1E80C02AC16B6622(iLocal_43[0]))
			{
				if (func_168(unk_0x77F050A399DB77ED()) != joaat("weapon_unarmed") && !func_167(0))
				{
					if (unk_0xD89F5D6405AFC348(iLocal_43[0], unk_0x77F050A399DB77ED()))
					{
						return 1;
					}
				}
			}
		}
		if (unk_0x1F2158D615BC4B25(iLocal_43[1]))
		{
			if (!unk_0x1E80C02AC16B6622(iLocal_43[1]))
			{
				if (func_168(unk_0x77F050A399DB77ED()) != joaat("weapon_unarmed") && !func_167(0))
				{
					if (unk_0xD89F5D6405AFC348(iLocal_43[1], unk_0x77F050A399DB77ED()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_164(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x630E218FE7E4C793(uParam0, sParam1, sParam2, func_165(iParam3), 0);
}

int func_165(int iParam0)
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

void func_166(int iParam0)
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

int func_167(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xB56FEBC510E7E9DE(Global_2283, 14))
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
	if (unk_0xB1A77D5C890711F9(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_168(int iParam0)
{
	var uVar0;
	
	unk_0x587BE7B13B3A93BF(iParam0, &uVar0, 1);
	return uVar0;
}

void func_169()
{
	if (unk_0x1F2158D615BC4B25(unk_0x77F050A399DB77ED()))
	{
		if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
		{
			Local_119 = { unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1) };
		}
	}
	if (unk_0x1F2158D615BC4B25(iLocal_43[0]))
	{
		if (!unk_0x1E80C02AC16B6622(iLocal_43[0]))
		{
			Local_125[0 /*3*/] = { unk_0xAF99169F0F5AE41D(iLocal_43[0], 1) };
		}
	}
	if (unk_0x1F2158D615BC4B25(iLocal_43[1]))
	{
		if (!unk_0x1E80C02AC16B6622(iLocal_43[1]))
		{
			Local_125[1 /*3*/] = { unk_0xAF99169F0F5AE41D(iLocal_43[1], 1) };
		}
	}
	if (unk_0x1F2158D615BC4B25(iLocal_43[0]))
	{
		if (!unk_0x1E80C02AC16B6622(iLocal_43[0]))
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
	if (unk_0x1F2158D615BC4B25(iLocal_43[1]))
	{
		if (!unk_0x1E80C02AC16B6622(iLocal_43[1]))
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
					if (func_156(unk_0x77F050A399DB77ED(), iLocal_43[0], 1) < func_156(unk_0x77F050A399DB77ED(), iLocal_43[1], 1))
					{
						if (func_156(unk_0x77F050A399DB77ED(), iLocal_43[0], 1) < 20f)
						{
							if (((Local_119.f_0 < Local_125[0 /*3*/] && !unk_0x6867AF84AF12BEFC(unk_0x77F050A399DB77ED(), iLocal_43[0], 90f)) && !unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, 1, 0)) && !unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, 1, 0))
							{
								iLocal_31 = 0;
								iLocal_459[0] = 0;
								iLocal_462[0] = 0;
								iLocal_459[1] = 0;
								iLocal_462[1] = 0;
								iLocal_105[0] = unk_0x3EAC9995EC220C5A();
								iLocal_105[1] = unk_0x3EAC9995EC220C5A();
							}
						}
						else if (Local_119.f_0 < Local_125[0 /*3*/])
						{
							iLocal_31 = 0;
							iLocal_459[0] = 0;
							iLocal_462[0] = 0;
							iLocal_459[1] = 0;
							iLocal_462[1] = 0;
							iLocal_105[0] = unk_0x3EAC9995EC220C5A();
							iLocal_105[1] = unk_0x3EAC9995EC220C5A();
						}
					}
					else if (func_156(unk_0x77F050A399DB77ED(), iLocal_43[1], 1) < 15f)
					{
						if ((Local_119.f_0 > Local_125[1 /*3*/] && !unk_0x6867AF84AF12BEFC(unk_0x77F050A399DB77ED(), iLocal_43[1], 90f)) && !unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0))
						{
							iLocal_31 = 0;
							iLocal_459[0] = 0;
							iLocal_462[0] = 0;
							iLocal_459[1] = 0;
							iLocal_462[1] = 0;
							iLocal_105[0] = unk_0x3EAC9995EC220C5A();
							iLocal_105[1] = unk_0x3EAC9995EC220C5A();
						}
					}
					else if (Local_119.f_0 > Local_125[1 /*3*/])
					{
						iLocal_31 = 0;
						iLocal_459[0] = 0;
						iLocal_462[0] = 0;
						iLocal_459[1] = 0;
						iLocal_462[1] = 0;
						iLocal_105[0] = unk_0x3EAC9995EC220C5A();
						iLocal_105[1] = unk_0x3EAC9995EC220C5A();
					}
				}
				else if (func_156(unk_0x77F050A399DB77ED(), iLocal_43[0], 1) < func_156(unk_0x77F050A399DB77ED(), iLocal_43[1], 1))
				{
					if (func_156(unk_0x77F050A399DB77ED(), iLocal_43[0], 1) < 15f)
					{
						if ((Local_119.f_0 < Local_125[0 /*3*/] && !unk_0x6867AF84AF12BEFC(unk_0x77F050A399DB77ED(), iLocal_43[0], 90f)) && !unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, 1, 0))
						{
							iLocal_31 = 0;
							iLocal_459[0] = 0;
							iLocal_462[0] = 0;
							iLocal_459[1] = 0;
							iLocal_462[1] = 0;
							iLocal_105[0] = unk_0x3EAC9995EC220C5A();
							iLocal_105[1] = unk_0x3EAC9995EC220C5A();
						}
					}
					else if (Local_119.f_0 < Local_125[0 /*3*/])
					{
						iLocal_31 = 0;
						iLocal_459[0] = 0;
						iLocal_462[0] = 0;
						iLocal_459[1] = 0;
						iLocal_462[1] = 0;
						iLocal_105[0] = unk_0x3EAC9995EC220C5A();
						iLocal_105[1] = unk_0x3EAC9995EC220C5A();
					}
				}
			}
			else if (iLocal_404[1] == 1)
			{
				if (func_156(unk_0x77F050A399DB77ED(), iLocal_43[1], 1) < 15f)
				{
					if ((Local_119.f_0 > Local_125[1 /*3*/] && !unk_0x6867AF84AF12BEFC(unk_0x77F050A399DB77ED(), iLocal_43[1], 90f)) && !unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0))
					{
						iLocal_31 = 0;
						iLocal_459[0] = 0;
						iLocal_462[0] = 0;
						iLocal_459[1] = 0;
						iLocal_462[1] = 0;
						iLocal_105[0] = unk_0x3EAC9995EC220C5A();
						iLocal_105[1] = unk_0x3EAC9995EC220C5A();
					}
				}
				else if (Local_119.f_0 > Local_125[1 /*3*/])
				{
					iLocal_31 = 0;
					iLocal_459[0] = 0;
					iLocal_462[0] = 0;
					iLocal_459[1] = 0;
					iLocal_462[1] = 0;
					iLocal_105[0] = unk_0x3EAC9995EC220C5A();
					iLocal_105[1] = unk_0x3EAC9995EC220C5A();
				}
			}
		}
		if (iLocal_31 == 2)
		{
			if (iLocal_398 == 0)
			{
				if (unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0) || Local_119.f_0 > 942f)
				{
					if (!unk_0x1E80C02AC16B6622(iLocal_43[1]))
					{
						if (Local_119.f_0 > Local_125[1 /*3*/])
						{
							if (!unk_0x6867AF84AF12BEFC(unk_0x77F050A399DB77ED(), iLocal_43[1], 90f))
							{
								iLocal_31 = 0;
								iLocal_459[0] = 0;
								iLocal_462[0] = 0;
								iLocal_459[1] = 0;
								iLocal_462[1] = 0;
								iLocal_105[0] = unk_0x3EAC9995EC220C5A();
								iLocal_105[1] = unk_0x3EAC9995EC220C5A();
							}
						}
					}
					else if (Local_119.f_0 > 942f)
					{
						if (!unk_0x6867AF84AF12BEFC(unk_0x77F050A399DB77ED(), iLocal_43[1], 90f))
						{
							iLocal_31 = 0;
							iLocal_459[0] = 0;
							iLocal_462[0] = 0;
							iLocal_459[1] = 0;
							iLocal_462[1] = 0;
							iLocal_105[0] = unk_0x3EAC9995EC220C5A();
							iLocal_105[1] = unk_0x3EAC9995EC220C5A();
						}
					}
				}
				if (unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, 1, 0) || Local_119.f_0 < 860f)
				{
					if (!unk_0x1E80C02AC16B6622(iLocal_43[0]))
					{
						if (Local_119.f_0 < Local_125[0 /*3*/])
						{
							if (!unk_0x6867AF84AF12BEFC(unk_0x77F050A399DB77ED(), iLocal_43[0], 90f))
							{
								iLocal_31 = 0;
								iLocal_459[0] = 0;
								iLocal_462[0] = 0;
								iLocal_459[1] = 0;
								iLocal_462[1] = 0;
								iLocal_105[0] = unk_0x3EAC9995EC220C5A();
								iLocal_105[1] = unk_0x3EAC9995EC220C5A();
							}
						}
					}
					else if (Local_119.f_0 < 860f)
					{
						if (!unk_0x6867AF84AF12BEFC(unk_0x77F050A399DB77ED(), iLocal_43[0], 90f))
						{
							iLocal_31 = 0;
							iLocal_459[0] = 0;
							iLocal_462[0] = 0;
							iLocal_459[1] = 0;
							iLocal_462[1] = 0;
							iLocal_105[0] = unk_0x3EAC9995EC220C5A();
							iLocal_105[1] = unk_0x3EAC9995EC220C5A();
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
				if (func_156(unk_0x77F050A399DB77ED(), iLocal_43[0], 1) < 20f)
				{
					if ((func_168(unk_0x77F050A399DB77ED()) == joaat("weapon_unarmed") || unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0)) || func_167(0))
					{
						if (unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), 860.4606f, -1563.58f, 28.81788f, 865.0807f, -1575.088f, 30.93324f, 5.75f, 0, 1, 0))
						{
							if (Local_119.f_0 > Local_125[0 /*3*/] || unk_0x6867AF84AF12BEFC(unk_0x77F050A399DB77ED(), iLocal_43[0], 90f))
							{
								iLocal_31 = 1;
							}
						}
						if (unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, 1, 0))
						{
							iLocal_31 = 1;
						}
					}
				}
			}
			if (iLocal_404[1] == 1)
			{
				if (func_156(unk_0x77F050A399DB77ED(), iLocal_43[1], 1) < 15f)
				{
					if ((func_168(unk_0x77F050A399DB77ED()) == joaat("weapon_unarmed") || unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0)) || func_167(0))
					{
						if (unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), 939.8862f, -1575.635f, 28.59783f, 952.9254f, -1575.484f, 33.19459f, 13.75f, 0, 1, 0))
						{
							if (Local_119.f_0 < Local_125[1 /*3*/] || unk_0x6867AF84AF12BEFC(unk_0x77F050A399DB77ED(), iLocal_43[1], 90f))
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
		if (unk_0x40E29AA1A84292C9(-1, 892.9f, -1552.4f, 30f, 40f))
		{
			iLocal_31 = 2;
			iLocal_398 = 1;
		}
		if (iLocal_482 == 1)
		{
			iLocal_31 = 2;
			iLocal_398 = 1;
		}
		if (unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590()) != 0)
		{
			if (unk_0x1F2158D615BC4B25(iLocal_43[0]))
			{
				if (!unk_0x1E80C02AC16B6622(iLocal_43[0]))
				{
					if (unk_0xD89F5D6405AFC348(iLocal_43[0], unk_0x77F050A399DB77ED()))
					{
						iLocal_31 = 2;
						iLocal_398 = 1;
					}
				}
			}
			if (unk_0x1F2158D615BC4B25(iLocal_43[1]))
			{
				if (!unk_0x1E80C02AC16B6622(iLocal_43[1]))
				{
					if (unk_0xD89F5D6405AFC348(iLocal_43[1], unk_0x77F050A399DB77ED()))
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
				if (unk_0x3EAC9995EC220C5A() > iLocal_95 + 4000)
				{
					iLocal_94 = 0;
					while (iLocal_94 <= 6)
					{
						if (func_161())
						{
							if (unk_0x1F2158D615BC4B25(iLocal_35[iLocal_94]))
							{
								if (!unk_0x1E80C02AC16B6622(iLocal_35[iLocal_94]))
								{
									if (unk_0x85903652F1E9E110(iLocal_35[iLocal_94]))
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
		if (!unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
		{
			if (iLocal_404[0] == 1)
			{
				if (func_168(unk_0x77F050A399DB77ED()) != joaat("weapon_unarmed") && !func_167(0))
				{
					if (unk_0xD89F5D6405AFC348(iLocal_43[0], unk_0x77F050A399DB77ED()))
					{
						iLocal_31 = 2;
					}
				}
			}
			if (iLocal_404[1] == 1)
			{
				if (func_168(unk_0x77F050A399DB77ED()) != joaat("weapon_unarmed") && !func_167(0))
				{
					if (unk_0xD89F5D6405AFC348(iLocal_43[1], unk_0x77F050A399DB77ED()))
					{
						iLocal_31 = 2;
					}
				}
			}
		}
		if (unk_0xA2490B3CE6382FBB(Local_119, Local_132, 1) < 36f)
		{
			if (iLocal_404[0] == 1)
			{
				if (unk_0xD89F5D6405AFC348(iLocal_43[0], unk_0x77F050A399DB77ED()))
				{
					iLocal_31 = 2;
				}
				if (func_156(iLocal_43[0], unk_0x77F050A399DB77ED(), 1) < 20f)
				{
					if (unk_0xF5C2DCB6CB199B63(unk_0x8ACD527A7E574590(), iLocal_43[0]))
					{
						iLocal_31 = 2;
					}
				}
			}
			if (iLocal_404[1] == 1)
			{
				if (Local_119.f_2 < 36f || unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
				{
					if (unk_0xD89F5D6405AFC348(iLocal_43[1], unk_0x77F050A399DB77ED()))
					{
						iLocal_31 = 2;
					}
					if (func_156(iLocal_43[1], unk_0x77F050A399DB77ED(), 1) < 20f)
					{
						if (unk_0xF5C2DCB6CB199B63(unk_0x8ACD527A7E574590(), iLocal_43[1]))
						{
							iLocal_31 = 2;
						}
					}
				}
			}
		}
		if (iLocal_404[0] == 1)
		{
			if (func_156(unk_0x77F050A399DB77ED(), iLocal_43[0], 1) < 20f)
			{
				if (Local_119.f_0 > Local_125[0 /*3*/] && unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, 1, 0))
				{
					if (unk_0xD89F5D6405AFC348(iLocal_43[0], unk_0x77F050A399DB77ED()) || unk_0xF5C2DCB6CB199B63(unk_0x8ACD527A7E574590(), iLocal_43[0]))
					{
						iLocal_31 = 2;
					}
				}
			}
		}
		if (iLocal_404[1] == 1)
		{
			if (func_156(unk_0x77F050A399DB77ED(), iLocal_43[1], 1) < 20f)
			{
				if (Local_119.f_0 < Local_125[1 /*3*/] && unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0))
				{
					if (unk_0xD89F5D6405AFC348(iLocal_43[1], unk_0x77F050A399DB77ED()) || unk_0xF5C2DCB6CB199B63(unk_0x8ACD527A7E574590(), iLocal_43[1]))
					{
						iLocal_31 = 2;
					}
				}
			}
		}
	}
}

void func_170()
{
	iLocal_64 = 0;
	while (iLocal_64 <= 6)
	{
		if (unk_0x1F2158D615BC4B25(iLocal_35[iLocal_64]))
		{
			if (!unk_0x1E80C02AC16B6622(iLocal_35[iLocal_64]))
			{
				if (iLocal_330[iLocal_64] == 0)
				{
					if (func_156(unk_0x77F050A399DB77ED(), iLocal_35[iLocal_64], 1) > 20f)
					{
						iLocal_330[iLocal_64] = 1;
					}
				}
				if (iLocal_330[iLocal_64] == 1)
				{
					if (func_156(unk_0x77F050A399DB77ED(), iLocal_35[iLocal_64], 1) < 20f)
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
		if (unk_0x1F2158D615BC4B25(iLocal_35[iLocal_63]))
		{
			if (!unk_0x1E80C02AC16B6622(iLocal_35[iLocal_63]))
			{
				func_175(iLocal_35[iLocal_63]);
				if (iLocal_28 == 3 || iLocal_28 == 4)
				{
					if (iLocal_31 == 2 && iLocal_29 == 0)
					{
						func_174(1);
						if (iLocal_416 == 1)
						{
							func_99();
						}
					}
					if (unk_0x7BD3CCAF21AB4912(iLocal_35[iLocal_63], 18))
					{
						if (iLocal_29 != 4)
						{
							func_174(4);
							if (iLocal_416 == 1)
							{
								func_172();
							}
							iLocal_482 = 1;
						}
					}
					if (iLocal_29 != 4)
					{
						if (unk_0x40E29AA1A84292C9(-1, 892.9f, -1552.4f, 30f, 40f))
						{
							func_174(4);
							if (iLocal_416 == 1)
							{
								func_172();
							}
						}
					}
					if ((((((((func_171(iLocal_35[iLocal_63], iLocal_35[0]) || func_171(iLocal_35[iLocal_63], iLocal_35[1])) || func_171(iLocal_35[iLocal_63], iLocal_35[2])) || func_171(iLocal_35[iLocal_63], iLocal_35[3])) || func_171(iLocal_35[iLocal_63], iLocal_35[4])) || func_171(iLocal_35[iLocal_63], iLocal_35[5])) || func_171(iLocal_35[iLocal_63], iLocal_35[6])) || func_171(iLocal_35[iLocal_63], iLocal_43[0])) || func_171(iLocal_35[iLocal_63], iLocal_43[1]))
					{
						if (iLocal_29 != 4)
						{
							func_174(4);
							if (iLocal_416 == 1)
							{
								func_172();
							}
							iLocal_482 = 1;
						}
					}
					if ((func_168(unk_0x77F050A399DB77ED()) == joaat("weapon_unarmed") || unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 1)) || func_167(0))
					{
						if (iLocal_398 == 0)
						{
							if (func_156(unk_0x77F050A399DB77ED(), iLocal_35[iLocal_63], 1) > 20f)
							{
								if (iLocal_322[iLocal_63] == 1)
								{
									iLocal_322[iLocal_63] = 0;
								}
								if (((((iLocal_338 == 1 && iLocal_29 != 0) && iLocal_29 != 2) && iLocal_29 != 3) && iLocal_29 != 4) && iLocal_31 != 2)
								{
									func_174(0);
								}
							}
							if (func_156(unk_0x77F050A399DB77ED(), iLocal_35[iLocal_63], 1) < 20f && unk_0xD89F5D6405AFC348(iLocal_35[iLocal_63], unk_0x77F050A399DB77ED()))
							{
								if (((iLocal_29 != 1 && iLocal_29 != 2) && iLocal_29 != 3) && iLocal_29 != 4)
								{
									if (iLocal_431 == 0 && iLocal_398 == 0)
									{
										func_174(1);
										if (iLocal_416 == 1)
										{
											func_99();
										}
									}
									else
									{
										func_174(3);
										if (iLocal_416 == 1)
										{
											func_172();
										}
									}
								}
							}
							if (func_156(unk_0x77F050A399DB77ED(), iLocal_35[iLocal_63], 1) < 20f && unk_0xD89F5D6405AFC348(iLocal_35[iLocal_63], unk_0x77F050A399DB77ED()))
							{
								if (iLocal_322[iLocal_63] == 0)
								{
									iLocal_69[iLocal_63] = unk_0x3EAC9995EC220C5A();
									iLocal_322[iLocal_63] = 1;
								}
								if (iLocal_322[iLocal_63] == 1)
								{
									if (unk_0x3EAC9995EC220C5A() > iLocal_69[iLocal_63] + 24000)
									{
										if ((iLocal_29 != 2 && iLocal_29 != 3) && iLocal_29 != 4)
										{
											func_174(2);
											if (iLocal_416 == 1)
											{
												func_172();
											}
										}
									}
								}
							}
						}
						if (iLocal_398 == 1)
						{
							if (func_156(unk_0x77F050A399DB77ED(), iLocal_35[iLocal_63], 1) < 20f && unk_0xD89F5D6405AFC348(iLocal_35[iLocal_63], unk_0x77F050A399DB77ED()))
							{
								if (iLocal_29 != 3 && iLocal_29 != 4)
								{
									func_174(3);
									if (iLocal_416 == 1)
									{
										func_172();
									}
								}
							}
						}
						if (unk_0x9FA30238987B8B6F(unk_0x77F050A399DB77ED()))
						{
							if (iLocal_413 == 0)
							{
								iLocal_90 = unk_0x3EAC9995EC220C5A();
								iLocal_413 = 1;
							}
							else if (unk_0x3EAC9995EC220C5A() > iLocal_90 + 3000)
							{
								if (func_156(unk_0x77F050A399DB77ED(), iLocal_35[iLocal_63], 1) < 20f && unk_0xD89F5D6405AFC348(iLocal_35[iLocal_63], unk_0x77F050A399DB77ED()))
								{
									if (iLocal_29 != 3 && iLocal_29 != 4)
									{
										func_174(3);
										if (iLocal_416 == 1)
										{
											func_172();
										}
									}
								}
							}
						}
						else if (iLocal_413 == 1)
						{
							iLocal_413 = 0;
						}
						if (unk_0x1F2158D615BC4B25(iLocal_33))
						{
							if (unk_0x968EA16107097324(iLocal_33, 0))
							{
								if (unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_33, 1))
								{
									if (unk_0xD89F5D6405AFC348(iLocal_35[iLocal_63], unk_0x77F050A399DB77ED()))
									{
										if (iLocal_29 != 3 && iLocal_29 != 4)
										{
											iLocal_390 = 1;
											func_174(3);
											if (iLocal_416 == 1)
											{
												func_172();
											}
										}
									}
								}
								if (func_156(unk_0x77F050A399DB77ED(), iLocal_33, 1) < 5f && unk_0xB2C4D90B868C2250(unk_0x77F050A399DB77ED()))
								{
									if (unk_0xD89F5D6405AFC348(iLocal_35[iLocal_63], unk_0x77F050A399DB77ED()))
									{
										if (iLocal_29 != 3 && iLocal_29 != 4)
										{
											iLocal_390 = 1;
											func_174(3);
											if (iLocal_416 == 1)
											{
												func_172();
											}
										}
									}
									if (unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), 917.3436f, -1554.42f, 29.26611f, 916.8774f, -1556.441f, 33.00661f, 2.25f, 0, 1, 0))
									{
										if (unk_0x1F2158D615BC4B25(iLocal_35[0]))
										{
											if (!unk_0x1E80C02AC16B6622(iLocal_35[0]))
											{
												if (unk_0xA427F05DB896EEBE(iLocal_35[0], 912.3f, -1542.6f, 30f, 3f, 3f, 3f, 0, 1, 0))
												{
													if (iLocal_29 != 3 && iLocal_29 != 4)
													{
														iLocal_390 = 1;
														func_174(3);
														if (iLocal_416 == 1)
														{
															func_172();
														}
													}
												}
											}
										}
									}
								}
							}
						}
						if (unk_0x1F2158D615BC4B25(iLocal_35[6]))
						{
							if (!unk_0x1E80C02AC16B6622(iLocal_35[6]))
							{
								if (func_156(unk_0x77F050A399DB77ED(), iLocal_35[6], 1) < 20f)
								{
									if ((unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), 928.7163f, -1546.671f, 27.34603f, 921.8971f, -1549.752f, 34.04724f, 6.25f, 0, 1, 0) || unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), 931.868f, -1545.185f, 27.3653f, 925.8857f, -1547.303f, 34.07205f, 3.5f, 0, 1, 0)) || unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), 929.4908f, -1524.829f, 32.84098f, 929.3696f, -1545.288f, 37.34258f, 5f, 0, 1, 0))
									{
										if (unk_0xD89F5D6405AFC348(iLocal_35[6], unk_0x77F050A399DB77ED()))
										{
											if (Local_119.f_2 > 31f)
											{
												if (iLocal_29 != 3 && iLocal_29 != 4)
												{
													iLocal_428 = 1;
													func_174(3);
													if (iLocal_416 == 1)
													{
														func_172();
													}
												}
											}
											else if (((iLocal_29 != 1 && iLocal_29 != 2) && iLocal_29 != 3) && iLocal_29 != 4)
											{
												func_174(1);
												if (iLocal_416 == 1)
												{
													func_99();
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
							iLocal_68 = unk_0x3EAC9995EC220C5A();
							iLocal_321 = 1;
						}
						if (iLocal_321 == 1)
						{
							if (unk_0x3EAC9995EC220C5A() > iLocal_68 + 4000 || iLocal_29 == 3)
							{
								if (func_156(unk_0x77F050A399DB77ED(), iLocal_35[iLocal_63], 1) < 20f)
								{
									if (unk_0xD89F5D6405AFC348(iLocal_35[iLocal_63], unk_0x77F050A399DB77ED()))
									{
										if (iLocal_29 != 4)
										{
											func_174(4);
											if (iLocal_416 == 1)
											{
												func_172();
											}
										}
									}
								}
							}
						}
						if (func_156(unk_0x77F050A399DB77ED(), iLocal_35[iLocal_63], 1) < 40f)
						{
							if (unk_0x102639E2874F3AA1(unk_0x77F050A399DB77ED()))
							{
								if (unk_0xD89F5D6405AFC348(iLocal_35[iLocal_63], unk_0x77F050A399DB77ED()) || unk_0xF5C2DCB6CB199B63(unk_0x8ACD527A7E574590(), iLocal_35[iLocal_63]))
								{
									if (iLocal_29 != 4)
									{
										func_174(4);
										if (iLocal_416 == 1)
										{
											func_172();
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

int func_171(int iParam0, int iParam1)
{
	if (((func_156(iParam0, iParam1, 1) < 20f && unk_0x6867AF84AF12BEFC(iParam0, iParam1, 90f)) && !unk_0x1E80C02AC16B6622(iParam0)) && unk_0x1E80C02AC16B6622(iParam1))
	{
		return 1;
	}
	return 0;
}

void func_172()
{
	Global_14578 = 0;
	func_173();
}

void func_173()
{
	unk_0xCAAFCFEB9BD734FB();
	Global_16723 = 0;
	if (unk_0x1066B6347C40B301())
	{
		unk_0xC9AB825AA4821BDA(0);
		Global_15712 = 6;
	}
}

void func_174(int iParam0)
{
	iLocal_29 = iParam0;
	iLocal_67 = 0;
}

void func_175(int iParam0)
{
	iLocal_65 = 0;
	while (iLocal_65 <= 6)
	{
		if (iParam0 == iLocal_35[iLocal_65])
		{
			if (func_156(unk_0x77F050A399DB77ED(), iParam0, 1) < 20f && unk_0xD89F5D6405AFC348(iParam0, unk_0x77F050A399DB77ED()))
			{
				if (iLocal_339[iLocal_65] == 0)
				{
					unk_0xD0C8DD55C652567F(iParam0, unk_0x77F050A399DB77ED(), -1, 1072, 3);
					iLocal_339[iLocal_65] = 1;
				}
			}
			else if (iLocal_339[iLocal_65] == 1)
			{
				unk_0xD0C8DD55C652567F(iParam0, unk_0x77F050A399DB77ED(), 1, 1072, 3);
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
				unk_0x9526D9575C237F2F(iParam0, 1);
				if (iParam0 == iLocal_35[0])
				{
					if (unk_0x86A43F1FB9C445CA(912.2f, -1542.5f, 29.8f, 3f, 0))
					{
						if (unk_0x49C650267EDFEBC6(iLocal_35[0], 1647992574) != 1 && unk_0x49C650267EDFEBC6(iLocal_35[0], -1680762137) != 1)
						{
							unk_0xABBC4709B481B723(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[1])
				{
					if (unk_0x86A43F1FB9C445CA(917.4f, -1517.4f, 30f, 3f, 0))
					{
						if (unk_0x49C650267EDFEBC6(iLocal_35[1], 1647992574) != 1 && unk_0x49C650267EDFEBC6(iLocal_35[1], -1680762137) != 1)
						{
							unk_0xABBC4709B481B723(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[2])
				{
					if (unk_0x86A43F1FB9C445CA(869.8f, -1541.2f, 29.4f, 3f, 0))
					{
						if (unk_0x49C650267EDFEBC6(iLocal_35[2], 1647992574) != 1 && unk_0x49C650267EDFEBC6(iLocal_35[2], -1680762137) != 1)
						{
							unk_0xABBC4709B481B723(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[3])
				{
					if (unk_0x86A43F1FB9C445CA(884.2f, -1574.1f, 30f, 3f, 0))
					{
						if (unk_0x49C650267EDFEBC6(iLocal_35[3], 1647992574) != 1 && unk_0x49C650267EDFEBC6(iLocal_35[3], -1680762137) != 1)
						{
							unk_0xABBC4709B481B723(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[4])
				{
					if (unk_0x86A43F1FB9C445CA(904f, -1575f, 30f, 3f, 0))
					{
						if (unk_0x49C650267EDFEBC6(iLocal_35[4], 1647992574) != 1 && unk_0x49C650267EDFEBC6(iLocal_35[4], -1680762137) != 1)
						{
							unk_0xABBC4709B481B723(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[5])
				{
					if (unk_0x86A43F1FB9C445CA(905.9f, -1574.8f, 29.9f, 3f, 0))
					{
						if (unk_0x49C650267EDFEBC6(iLocal_35[5], 1647992574) != 1 && unk_0x49C650267EDFEBC6(iLocal_35[5], -1680762137) != 1)
						{
							unk_0xABBC4709B481B723(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[6])
				{
					if (unk_0x86A43F1FB9C445CA(889.5f, -1562f, 29.7f, 3f, 0))
					{
						if (unk_0x49C650267EDFEBC6(iLocal_35[6], 1647992574) != 1 && unk_0x49C650267EDFEBC6(iLocal_35[6], -1680762137) != 1)
						{
							unk_0xABBC4709B481B723(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
						}
					}
				}
				iLocal_67++;
			}
			if (iLocal_67 == 1)
			{
				if (unk_0x1F2158D615BC4B25(iLocal_35[4]))
				{
					if (!unk_0x1E80C02AC16B6622(iLocal_35[4]))
					{
						if (unk_0x1F2158D615BC4B25(iLocal_35[5]))
						{
							if (!unk_0x1E80C02AC16B6622(iLocal_35[5]))
							{
								if (func_156(unk_0x77F050A399DB77ED(), iLocal_35[4], 1) < 25f)
								{
									if (unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), 926.455f, -1582.384f, 29.32759f, 909.6322f, -1581.374f, 31.58907f, 9.5f, 0, 1, 0) || Local_119.f_1 > -1573f)
									{
										if (iLocal_416 == 0)
										{
											func_117(&uLocal_137, 3, iLocal_35[4], "CONSTRUCTION2", 0, 1);
											func_117(&uLocal_137, 5, iLocal_35[5], "CONSTRUCTION3", 0, 1);
											unk_0xD0C8DD55C652567F(iLocal_35[4], iLocal_35[5], -1, 0, 2);
											unk_0xD0C8DD55C652567F(iLocal_35[5], iLocal_35[4], -1, 0, 2);
											if (!func_161())
											{
												if (!unk_0x5C62F8B9BBEC5A43() || !unk_0x950050D3F7CAD174())
												{
													if (func_155(&uLocal_137, "SOL1AUD", "SOL1_TALK", 6, 1, 1, 0))
													{
														iLocal_416 = 1;
													}
												}
											}
										}
									}
								}
								if (unk_0xA427F05DB896EEBE(unk_0x77F050A399DB77ED(), 921.9f, -1556.5f, 30f, 5f, 5f, 5f, 0, 1, 1))
								{
									if (iLocal_423 == 0)
									{
										iLocal_92 = unk_0x3EAC9995EC220C5A();
										iLocal_423 = 1;
									}
									if (iLocal_423 == 1)
									{
										if (unk_0x3EAC9995EC220C5A() > iLocal_92 + 4000)
										{
											if (iLocal_416 == 0)
											{
												func_117(&uLocal_137, 3, iLocal_35[4], "CONSTRUCTION2", 0, 1);
												func_117(&uLocal_137, 5, iLocal_35[5], "CONSTRUCTION3", 0, 1);
												unk_0xD0C8DD55C652567F(iLocal_35[4], iLocal_35[5], -1, 0, 2);
												unk_0xD0C8DD55C652567F(iLocal_35[5], iLocal_35[4], -1, 0, 2);
												if (!func_161())
												{
													if (!unk_0x5C62F8B9BBEC5A43() || !unk_0x950050D3F7CAD174())
													{
														if (func_155(&uLocal_137, "SOL1AUD", "SOL1_TALK", 6, 1, 1, 0))
														{
															iLocal_416 = 1;
														}
													}
												}
											}
										}
									}
								}
								if (iLocal_416 == 1 && !func_161())
								{
									if (iLocal_415 == 0)
									{
										if (unk_0x86A43F1FB9C445CA(865f, -1558.1f, 29.5f, 3f, 0))
										{
											unk_0x8530DA8508D7A4B8(iLocal_35[4]);
											unk_0x8530DA8508D7A4B8(iLocal_35[5]);
											unk_0x536F7A20D4B5FD1B(iLocal_35[4], 865f, -1558.1f, 29.5f, 3f, 0);
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
							iLocal_93 = unk_0x3EAC9995EC220C5A();
							iLocal_425 = 1;
						}
						if (unk_0x3EAC9995EC220C5A() > iLocal_93 + 30000)
						{
							if (iLocal_424 == 0)
							{
								if (unk_0x86A43F1FB9C445CA(925f, -1561f, 30f, 3f, 0))
								{
									unk_0x536F7A20D4B5FD1B(iLocal_35[6], 925f, -1561f, 30f, 3f, 0);
									iLocal_424 = 1;
									iLocal_425 = 0;
								}
							}
						}
					}
					if (iLocal_424 == 1)
					{
						if (unk_0xA427F05DB896EEBE(iLocal_35[6], 925f, -1561f, 30f, 3f, 3f, 3f, 0, 1, 0))
						{
							if (func_156(unk_0x77F050A399DB77ED(), iLocal_35[6], 1) < 15f && Local_119.f_2 < 40f)
							{
								if (iLocal_426 == 0)
								{
									if (unk_0x86A43F1FB9C445CA(909.5f, -1515.5f, 30f, 3f, 0))
									{
										unk_0xABBC4709B481B723(iLocal_35[6], 909.5f, -1515.5f, 30f, 50f, 0);
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
							if (func_156(unk_0x77F050A399DB77ED(), iParam0, 1) < 20f)
							{
								if (iLocal_347[iLocal_65] == 0)
								{
									if (unk_0xD89F5D6405AFC348(iParam0, unk_0x77F050A399DB77ED()) || unk_0xF5C2DCB6CB199B63(unk_0x8ACD527A7E574590(), iParam0))
									{
										if (!unk_0xF74B69DFD85D7CCE(iParam0))
										{
											unk_0xB28207B96952D994(iParam0);
										}
										if (unk_0xF74B69DFD85D7CCE(iParam0))
										{
											unk_0xE2CB8488CFA42209(iParam0);
										}
										unk_0x2A6B9F9E71C479CF(&uLocal_57);
										unk_0xAFB86418412C8866(0, unk_0x77F050A399DB77ED(), -1, 2f, 1f, 1073741824, 0);
										unk_0x9A42ADE14351A508(0, unk_0x77F050A399DB77ED(), 0);
										unk_0x44642CB08FA1637E(uLocal_57);
										unk_0xB8A8FA4B28E9F423(iParam0, uLocal_57);
										unk_0xAAD288E877AC833D(&uLocal_57);
										unk_0x9526D9575C237F2F(iParam0, 1);
										iLocal_339[iLocal_65] = 0;
										iLocal_347[iLocal_65] = 1;
									}
								}
								if (iLocal_347[iLocal_65] == 1)
								{
									if (!unk_0x6867AF84AF12BEFC(iParam0, unk_0x77F050A399DB77ED(), 45f))
									{
										unk_0x9A42ADE14351A508(iParam0, unk_0x77F050A399DB77ED(), 0);
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
									if (unk_0x86A43F1FB9C445CA(912.2f, -1542.5f, 29.8f, 3f, 0))
									{
										if (unk_0x49C650267EDFEBC6(iLocal_35[0], 1647992574) != 1 && unk_0x49C650267EDFEBC6(iLocal_35[0], -1680762137) != 1)
										{
											unk_0xABBC4709B481B723(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
											unk_0x9526D9575C237F2F(iLocal_35[0], 1);
										}
									}
								}
								if (iParam0 == iLocal_35[1])
								{
									if (unk_0x86A43F1FB9C445CA(917.4f, -1517.4f, 30f, 3f, 0))
									{
										if (unk_0x49C650267EDFEBC6(iLocal_35[1], 1647992574) != 1 && unk_0x49C650267EDFEBC6(iLocal_35[1], -1680762137) != 1)
										{
											unk_0xABBC4709B481B723(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
											unk_0x9526D9575C237F2F(iLocal_35[1], 1);
										}
									}
								}
								if (iParam0 == iLocal_35[2])
								{
									if (unk_0x86A43F1FB9C445CA(869.8f, -1541.2f, 29.4f, 3f, 0))
									{
										if (unk_0x49C650267EDFEBC6(iLocal_35[2], 1647992574) != 1 && unk_0x49C650267EDFEBC6(iLocal_35[2], -1680762137) != 1)
										{
											unk_0xABBC4709B481B723(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
											unk_0x9526D9575C237F2F(iLocal_35[2], 1);
										}
									}
								}
								if (iParam0 == iLocal_35[3])
								{
									if (unk_0x86A43F1FB9C445CA(884.2f, -1574.1f, 30f, 3f, 0))
									{
										if (unk_0x49C650267EDFEBC6(iLocal_35[3], 1647992574) != 1 && unk_0x49C650267EDFEBC6(iLocal_35[3], -1680762137) != 1)
										{
											unk_0xABBC4709B481B723(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
											unk_0x9526D9575C237F2F(iLocal_35[3], 1);
										}
									}
								}
								if (iParam0 == iLocal_35[4])
								{
									if (unk_0x86A43F1FB9C445CA(904f, -1575f, 30f, 3f, 0))
									{
										if (unk_0x49C650267EDFEBC6(iLocal_35[4], 1647992574) != 1 && unk_0x49C650267EDFEBC6(iLocal_35[4], -1680762137) != 1)
										{
											unk_0xABBC4709B481B723(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
											unk_0x9526D9575C237F2F(iLocal_35[4], 1);
										}
									}
								}
								if (iParam0 == iLocal_35[5])
								{
									if (unk_0x86A43F1FB9C445CA(905.9f, -1574.8f, 29.9f, 3f, 0))
									{
										if (unk_0x49C650267EDFEBC6(iLocal_35[5], 1647992574) != 1 && unk_0x49C650267EDFEBC6(iLocal_35[5], -1680762137) != 1)
										{
											unk_0xABBC4709B481B723(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
											unk_0x9526D9575C237F2F(iLocal_35[5], 1);
										}
									}
								}
								if (iParam0 == iLocal_35[6])
								{
									if (unk_0x86A43F1FB9C445CA(889.5f, -1562f, 29.7f, 3f, 0))
									{
										if (unk_0x49C650267EDFEBC6(iLocal_35[6], 1647992574) != 1 && unk_0x49C650267EDFEBC6(iLocal_35[6], -1680762137) != 1)
										{
											unk_0xABBC4709B481B723(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
											unk_0x9526D9575C237F2F(iLocal_35[6], 1);
										}
									}
								}
							}
						}
					}
					else if (iParam0 == iLocal_35[iLocal_65])
					{
						if (func_156(unk_0x77F050A399DB77ED(), iParam0, 1) < 20f)
						{
							if (iLocal_347[iLocal_65] == 0)
							{
								if (unk_0xD89F5D6405AFC348(iParam0, unk_0x77F050A399DB77ED()) || unk_0xF5C2DCB6CB199B63(unk_0x8ACD527A7E574590(), iParam0))
								{
									if (!unk_0xF74B69DFD85D7CCE(iParam0))
									{
										unk_0xB28207B96952D994(iParam0);
									}
									if (unk_0xF74B69DFD85D7CCE(iParam0))
									{
										unk_0xE2CB8488CFA42209(iParam0);
									}
									unk_0x2A6B9F9E71C479CF(&uLocal_57);
									unk_0x9A42ADE14351A508(0, unk_0x77F050A399DB77ED(), 0);
									unk_0xD0C8DD55C652567F(0, unk_0x77F050A399DB77ED(), -1, 1072, 3);
									unk_0x44642CB08FA1637E(uLocal_57);
									unk_0xB8A8FA4B28E9F423(iParam0, uLocal_57);
									unk_0xAAD288E877AC833D(&uLocal_57);
									unk_0x9526D9575C237F2F(iParam0, 1);
									iLocal_339[iLocal_65] = 0;
									iLocal_347[iLocal_65] = 1;
								}
							}
							if (iLocal_347[iLocal_65] == 1)
							{
								if (!unk_0x6867AF84AF12BEFC(iParam0, unk_0x77F050A399DB77ED(), 45f))
								{
									unk_0x9A42ADE14351A508(iParam0, unk_0x77F050A399DB77ED(), 0);
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
								if (unk_0x86A43F1FB9C445CA(912.2f, -1542.5f, 29.8f, 3f, 0))
								{
									if (unk_0x49C650267EDFEBC6(iLocal_35[0], 1647992574) != 1 && unk_0x49C650267EDFEBC6(iLocal_35[0], -1680762137) != 1)
									{
										unk_0xABBC4709B481B723(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
										unk_0x9526D9575C237F2F(iLocal_35[0], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[1])
							{
								if (unk_0x86A43F1FB9C445CA(917.4f, -1517.4f, 30f, 3f, 0))
								{
									if (unk_0x49C650267EDFEBC6(iLocal_35[1], 1647992574) != 1 && unk_0x49C650267EDFEBC6(iLocal_35[1], -1680762137) != 1)
									{
										unk_0xABBC4709B481B723(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
										unk_0x9526D9575C237F2F(iLocal_35[1], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[2])
							{
								if (unk_0x86A43F1FB9C445CA(869.8f, -1541.2f, 29.4f, 3f, 0))
								{
									if (unk_0x49C650267EDFEBC6(iLocal_35[2], 1647992574) != 1 && unk_0x49C650267EDFEBC6(iLocal_35[2], -1680762137) != 1)
									{
										unk_0xABBC4709B481B723(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
										unk_0x9526D9575C237F2F(iLocal_35[2], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[3])
							{
								if (unk_0x86A43F1FB9C445CA(884.2f, -1574.1f, 30f, 3f, 0))
								{
									if (unk_0x49C650267EDFEBC6(iLocal_35[3], 1647992574) != 1 && unk_0x49C650267EDFEBC6(iLocal_35[3], -1680762137) != 1)
									{
										unk_0xABBC4709B481B723(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
										unk_0x9526D9575C237F2F(iLocal_35[3], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[4])
							{
								if (unk_0x86A43F1FB9C445CA(904f, -1575f, 30f, 3f, 0))
								{
									if (unk_0x49C650267EDFEBC6(iLocal_35[4], 1647992574) != 1 && unk_0x49C650267EDFEBC6(iLocal_35[4], -1680762137) != 1)
									{
										unk_0xABBC4709B481B723(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
										unk_0x9526D9575C237F2F(iLocal_35[4], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[5])
							{
								if (unk_0x86A43F1FB9C445CA(905.9f, -1574.8f, 29.9f, 3f, 0))
								{
									if (unk_0x49C650267EDFEBC6(iLocal_35[5], 1647992574) != 1 && unk_0x49C650267EDFEBC6(iLocal_35[5], -1680762137) != 1)
									{
										unk_0xABBC4709B481B723(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
										unk_0x9526D9575C237F2F(iLocal_35[5], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[6])
							{
								if (unk_0x86A43F1FB9C445CA(889.5f, -1562f, 29.7f, 3f, 0))
								{
									if (unk_0x49C650267EDFEBC6(iLocal_35[6], 1647992574) != 1 && unk_0x49C650267EDFEBC6(iLocal_35[6], -1680762137) != 1)
									{
										unk_0xABBC4709B481B723(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
										unk_0x9526D9575C237F2F(iLocal_35[6], 1);
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
				unk_0x329C14474C072D19(5, iLocal_302, joaat("player"));
				iLocal_67++;
			}
			if (iLocal_67 == 1)
			{
				iLocal_65 = 0;
				while (iLocal_65 <= 6)
				{
					if (iParam0 == iLocal_35[iLocal_65])
					{
						if (func_156(iParam0, unk_0x77F050A399DB77ED(), 1) < 15f)
						{
							if (func_156(iParam0, unk_0x77F050A399DB77ED(), 1) > 3f)
							{
								if (unk_0x49C650267EDFEBC6(iParam0, 242628503) != 0 || unk_0x49C650267EDFEBC6(iParam0, 242628503) != 1)
								{
									if (!unk_0xF74B69DFD85D7CCE(iParam0))
									{
										unk_0xB28207B96952D994(iParam0);
									}
									if (unk_0xF74B69DFD85D7CCE(iParam0))
									{
										unk_0xE2CB8488CFA42209(iParam0);
									}
									unk_0x2A6B9F9E71C479CF(&uLocal_57);
									unk_0xAFB86418412C8866(0, unk_0x77F050A399DB77ED(), -1, 1f, 1f, 1073741824, 0);
									unk_0x9A42ADE14351A508(0, unk_0x77F050A399DB77ED(), 0);
									unk_0x44642CB08FA1637E(uLocal_57);
									unk_0xB8A8FA4B28E9F423(iParam0, uLocal_57);
									unk_0xAAD288E877AC833D(&uLocal_57);
									iLocal_339[iLocal_65] = 0;
								}
							}
						}
						else
						{
							if (iParam0 == iLocal_35[0])
							{
								if (unk_0x86A43F1FB9C445CA(912.2f, -1542.5f, 29.8f, 3f, 0))
								{
									if (unk_0x49C650267EDFEBC6(iLocal_35[0], 1647992574) != 1 && unk_0x49C650267EDFEBC6(iLocal_35[0], -1680762137) != 1)
									{
										unk_0xABBC4709B481B723(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
										unk_0x9526D9575C237F2F(iLocal_35[0], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[1])
							{
								if (unk_0x86A43F1FB9C445CA(917.4f, -1517.4f, 30f, 3f, 0))
								{
									if (unk_0x49C650267EDFEBC6(iLocal_35[1], 1647992574) != 1 && unk_0x49C650267EDFEBC6(iLocal_35[1], -1680762137) != 1)
									{
										unk_0xABBC4709B481B723(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
										unk_0x9526D9575C237F2F(iLocal_35[1], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[2])
							{
								if (unk_0x86A43F1FB9C445CA(869.8f, -1541.2f, 29.4f, 3f, 0))
								{
									if (unk_0x49C650267EDFEBC6(iLocal_35[2], 1647992574) != 1 && unk_0x49C650267EDFEBC6(iLocal_35[2], -1680762137) != 1)
									{
										unk_0xABBC4709B481B723(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
										unk_0x9526D9575C237F2F(iLocal_35[2], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[3])
							{
								if (unk_0x86A43F1FB9C445CA(884.2f, -1574.1f, 30f, 3f, 0))
								{
									if (unk_0x49C650267EDFEBC6(iLocal_35[3], 1647992574) != 1 && unk_0x49C650267EDFEBC6(iLocal_35[3], -1680762137) != 1)
									{
										unk_0xABBC4709B481B723(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
										unk_0x9526D9575C237F2F(iLocal_35[3], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[4])
							{
								if (unk_0x86A43F1FB9C445CA(904f, -1575f, 30f, 3f, 0))
								{
									if (unk_0x49C650267EDFEBC6(iLocal_35[4], 1647992574) != 1 && unk_0x49C650267EDFEBC6(iLocal_35[4], -1680762137) != 1)
									{
										unk_0xABBC4709B481B723(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
										unk_0x9526D9575C237F2F(iLocal_35[4], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[5])
							{
								if (unk_0x86A43F1FB9C445CA(905.9f, -1574.8f, 29.9f, 3f, 0))
								{
									if (unk_0x49C650267EDFEBC6(iLocal_35[5], 1647992574) != 1 && unk_0x49C650267EDFEBC6(iLocal_35[5], -1680762137) != 1)
									{
										unk_0xABBC4709B481B723(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
										unk_0x9526D9575C237F2F(iLocal_35[5], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[6])
							{
								if (unk_0x86A43F1FB9C445CA(889.5f, -1562f, 29.7f, 3f, 0))
								{
									if (unk_0x49C650267EDFEBC6(iLocal_35[6], 1647992574) != 1 && unk_0x49C650267EDFEBC6(iLocal_35[6], -1680762137) != 1)
									{
										unk_0xABBC4709B481B723(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
										unk_0x9526D9575C237F2F(iLocal_35[6], 1);
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
					iLocal_79 = unk_0x3EAC9995EC220C5A();
					iLocal_394 = 1;
				}
				if (iLocal_394 == 1)
				{
					if (unk_0x3EAC9995EC220C5A() > iLocal_79 + 9000)
					{
						unk_0xCBC9707F3BE3D5C2(5);
						unk_0x4AAD01BBE039D160(1f);
						unk_0x3DF319A8C78275DD(unk_0x8ACD527A7E574590(), 2, 0);
						unk_0x32EB36CA60E96828(unk_0x8ACD527A7E574590(), 0);
						iLocal_393 = 1;
					}
				}
			}
			if (iLocal_67 == 0)
			{
				unk_0x329C14474C072D19(5, iLocal_302, joaat("player"));
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
							if (func_156(iParam0, unk_0x77F050A399DB77ED(), 1) < 100f)
							{
								if (iLocal_355[iLocal_65] == 0)
								{
									unk_0x9526D9575C237F2F(iParam0, 1);
									iLocal_355[iLocal_65] = 1;
								}
								if (iLocal_363[iLocal_65] == 0)
								{
									if (!unk_0xF74B69DFD85D7CCE(iParam0))
									{
										unk_0xB28207B96952D994(iParam0);
									}
									if (unk_0xF74B69DFD85D7CCE(iParam0))
									{
										unk_0xE2CB8488CFA42209(iParam0);
									}
									unk_0x45ED0B787875F3AA(iParam0, 100f, 0);
									iLocal_339[iLocal_65] = 0;
									iLocal_363[iLocal_65] = 1;
								}
							}
						}
						iLocal_65++;
					}
					if (iLocal_468 == 0)
					{
						if (unk_0x1F2158D615BC4B25(iLocal_35[0]))
						{
							if (!unk_0x1E80C02AC16B6622(iLocal_35[0]))
							{
								if (unk_0x1F2158D615BC4B25(iLocal_33))
								{
									if (unk_0x968EA16107097324(iLocal_33, 0))
									{
										if (unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_33, 1) && unk_0xA427F05DB896EEBE(iLocal_33, 919.2f, -1554.4f, 30f, 4f, 4f, 4f, 0, 1, 0))
										{
											if (!unk_0xF74B69DFD85D7CCE(iLocal_35[0]))
											{
												unk_0xB28207B96952D994(iLocal_35[0]);
											}
											if (unk_0xF74B69DFD85D7CCE(iLocal_35[0]))
											{
												unk_0xE2CB8488CFA42209(iLocal_35[0]);
											}
											unk_0x2A6B9F9E71C479CF(&uLocal_57);
											unk_0xE3BCB930B62CBDE5(0, 917.8f, -1561f, 29f, 3f, -1, 1048576000, 0, 1193033728);
											unk_0x9A42ADE14351A508(0, unk_0x77F050A399DB77ED(), 0);
											unk_0x642DDF74A8A2B3BB(0, "misscarsteal4@director_grip", "mcs_2_loop_grip1", 8f, -8f, -1, 1, 0, 0, 0, 0);
											unk_0x44642CB08FA1637E(uLocal_57);
											unk_0xB8A8FA4B28E9F423(iLocal_35[0], uLocal_57);
											unk_0xAAD288E877AC833D(&uLocal_57);
											iLocal_468 = 1;
										}
									}
								}
							}
						}
					}
					if (iLocal_468 == 1 && iLocal_487 == 0)
					{
						if (unk_0x1F2158D615BC4B25(iLocal_35[0]))
						{
							if (!unk_0x1E80C02AC16B6622(iLocal_35[0]))
							{
								if (unk_0xA427F05DB896EEBE(iLocal_35[0], 917.8f, -1561f, 29f, 2f, 2f, 2f, 0, 1, 0))
								{
									func_117(&uLocal_137, 3, iLocal_35[0], "FHPrepBWorker", 0, 1);
									func_164(iLocal_35[0], "FHPB_BBAA", "FHPrepBWorker", 4);
									iLocal_487 = 1;
								}
							}
						}
					}
					if (iLocal_467 == 0)
					{
						if (unk_0x3EAC9995EC220C5A() > iLocal_79 + 3000)
						{
							if (unk_0x1F2158D615BC4B25(iLocal_35[5]))
							{
								if (!unk_0x1E80C02AC16B6622(iLocal_35[5]))
								{
									unk_0x642DDF74A8A2B3BB(iLocal_35[5], "cellphone@str", "cellphone_call_listen_c", 4f, -8f, -1, 49, 0, 0, 0, 0);
									iLocal_111 = unk_0x3EAC9995EC220C5A();
									iLocal_467 = 1;
								}
							}
						}
					}
					else if (iLocal_466 == 0)
					{
						if (unk_0x3EAC9995EC220C5A() > iLocal_111 + 5000)
						{
							if (unk_0x1F2158D615BC4B25(iLocal_35[5]))
							{
								if (!unk_0x1E80C02AC16B6622(iLocal_35[5]))
								{
									unk_0xE2CB8488CFA42209(iLocal_35[5]);
									unk_0xFBE25F0677076CF9(iLocal_35[5], unk_0x77F050A399DB77ED(), 0, 16);
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
							if (unk_0x1F2158D615BC4B25(iParam0))
							{
								if (!unk_0x1E80C02AC16B6622(iParam0))
								{
									unk_0x9526D9575C237F2F(iParam0, 1);
									if (unk_0xB42592B9FFEB5EDE(iParam0, 0))
									{
										if (func_156(iParam0, unk_0x77F050A399DB77ED(), 1) > 200f)
										{
											if (!unk_0xF74B69DFD85D7CCE(iParam0))
											{
												unk_0xB28207B96952D994(iParam0);
											}
											if (unk_0xF74B69DFD85D7CCE(iParam0))
											{
												unk_0xE2CB8488CFA42209(iParam0);
											}
											unk_0x23E5F4496336DE4E(iParam0, unk_0x77F050A399DB77ED(), 1000f, -1, 0, 0);
											iLocal_306[iLocal_65] = 1;
										}
									}
									else if (func_156(iParam0, unk_0x77F050A399DB77ED(), 1) > 100f)
									{
										if (!unk_0xF74B69DFD85D7CCE(iParam0))
										{
											unk_0xB28207B96952D994(iParam0);
										}
										if (unk_0xF74B69DFD85D7CCE(iParam0))
										{
											unk_0xE2CB8488CFA42209(iParam0);
										}
										unk_0x23E5F4496336DE4E(iParam0, unk_0x77F050A399DB77ED(), 1000f, -1, 0, 0);
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
							if (unk_0x1F2158D615BC4B25(iParam0))
							{
								if (!unk_0x1E80C02AC16B6622(iParam0))
								{
									if (!unk_0xF74B69DFD85D7CCE(iParam0))
									{
										unk_0xB28207B96952D994(iParam0);
									}
									if (unk_0xF74B69DFD85D7CCE(iParam0))
									{
										unk_0xE2CB8488CFA42209(iParam0);
									}
									unk_0x9526D9575C237F2F(iParam0, 1);
									unk_0x23E5F4496336DE4E(iParam0, unk_0x77F050A399DB77ED(), 1000f, -1, 0, 0);
									unk_0x112CD899A3BEE719(iParam0, 1);
									unk_0xA29D53AF339F4CD0(&iParam0);
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
					iLocal_79 = unk_0x3EAC9995EC220C5A();
					iLocal_394 = 1;
				}
				if (iLocal_394 == 1)
				{
					if (unk_0x3EAC9995EC220C5A() > iLocal_79 + 6000)
					{
						unk_0xCBC9707F3BE3D5C2(5);
						unk_0x4AAD01BBE039D160(1f);
						unk_0x3DF319A8C78275DD(unk_0x8ACD527A7E574590(), 2, 0);
						unk_0x32EB36CA60E96828(unk_0x8ACD527A7E574590(), 0);
						iLocal_393 = 1;
					}
				}
			}
			if (iLocal_67 == 0)
			{
				unk_0x329C14474C072D19(5, iLocal_302, joaat("player"));
				unk_0x9526D9575C237F2F(iParam0, 1);
				iLocal_67++;
			}
			if (iLocal_67 == 1)
			{
				iLocal_65 = 0;
				while (iLocal_65 <= 6)
				{
					if (unk_0x1F2158D615BC4B25(iLocal_35[iLocal_65]))
					{
						if (!unk_0x1E80C02AC16B6622(iLocal_35[iLocal_65]))
						{
							if (func_156(unk_0x77F050A399DB77ED(), iLocal_35[iLocal_65], 1) < 15f)
							{
								if (func_176(iLocal_35[iLocal_65], 6))
								{
									if (unk_0xD89F5D6405AFC348(iLocal_35[iLocal_65], unk_0x77F050A399DB77ED()))
									{
										if (iLocal_379[iLocal_65] == 0)
										{
											if (!unk_0xF74B69DFD85D7CCE(iLocal_35[iLocal_65]))
											{
												unk_0xB28207B96952D994(iLocal_35[iLocal_65]);
											}
											if (unk_0xF74B69DFD85D7CCE(iLocal_35[iLocal_65]))
											{
												unk_0xE2CB8488CFA42209(iLocal_35[iLocal_65]);
											}
											unk_0x712E9AF79EDC2710(iLocal_35[iLocal_65], -1, unk_0x77F050A399DB77ED(), -1, 0);
											iLocal_379[iLocal_65] = 1;
											iLocal_371[iLocal_65] = 0;
											iLocal_339[iLocal_65] = 0;
											iLocal_91 = unk_0x3EAC9995EC220C5A();
										}
									}
									else if (unk_0x3EAC9995EC220C5A() > iLocal_91 + 300)
									{
										iLocal_371[iLocal_65] = 0;
									}
								}
								else if (iLocal_371[iLocal_65] == 0)
								{
									if (!unk_0xF74B69DFD85D7CCE(iLocal_35[iLocal_65]))
									{
										unk_0xB28207B96952D994(iLocal_35[iLocal_65]);
									}
									if (unk_0xF74B69DFD85D7CCE(iLocal_35[iLocal_65]))
									{
										unk_0xE2CB8488CFA42209(iLocal_35[iLocal_65]);
									}
									unk_0x23E5F4496336DE4E(iLocal_35[iLocal_65], unk_0x77F050A399DB77ED(), 250f, -1, 0, 0);
									iLocal_371[iLocal_65] = 1;
									iLocal_379[iLocal_65] = 0;
								}
							}
							else if (iLocal_371[iLocal_65] == 0)
							{
								if (!unk_0xF74B69DFD85D7CCE(iLocal_35[iLocal_65]))
								{
									unk_0xB28207B96952D994(iLocal_35[iLocal_65]);
								}
								if (unk_0xF74B69DFD85D7CCE(iLocal_35[iLocal_65]))
								{
									unk_0xE2CB8488CFA42209(iLocal_35[iLocal_65]);
								}
								unk_0x23E5F4496336DE4E(iLocal_35[iLocal_65], unk_0x77F050A399DB77ED(), 250f, -1, 0, 0);
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

int func_176(int iParam0, int iParam1)
{
	if (unk_0x1F2158D615BC4B25(iParam0) && !unk_0x1E80C02AC16B6622(iParam0))
	{
		if (unk_0x521CC5B1D76CAD7D(unk_0x77F050A399DB77ED(), iParam1))
		{
			if (unk_0x00FAD442A5FFA1A8(unk_0x8ACD527A7E574590(), iParam0) || unk_0xE1E40FB2D6822ACE(unk_0x8ACD527A7E574590(), iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_177()
{
	iLocal_46 = func_25(0);
	iLocal_47 = func_25(1);
	iLocal_48 = func_25(2);
	if (func_33(iLocal_46, 0))
	{
		if (!unk_0x1E80C02AC16B6622(iLocal_46))
		{
			if (!func_32(iLocal_46))
			{
				if (!func_179())
				{
					if (func_178(iLocal_46))
					{
						if (func_31(iLocal_46, 0))
						{
							unk_0x8D429A827A931AC9(iLocal_46, 1, 1);
							unk_0x9526D9575C237F2F(iLocal_46, 1);
							unk_0xE2CB8488CFA42209(iLocal_46);
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
					if (!unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
					{
						iLocal_473 = 1;
					}
					else if (unk_0xB42592B9FFEB5EDE(iLocal_46, 0))
					{
						if (!unk_0xE5FADE1166052251(iLocal_46, unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0), 0))
						{
							iLocal_473 = 1;
						}
					}
				}
				if (iLocal_473 == 0)
				{
					if (func_179())
					{
						iLocal_473 = 1;
					}
				}
				if (iLocal_470 == 1)
				{
					if ((func_178(iLocal_46) && unk_0x95CBA891BCA778AA(iLocal_46, 1)) && iLocal_473 == 0)
					{
						Local_122 = { unk_0xAF99169F0F5AE41D(iLocal_46, 1) };
						unk_0x00FBBA398FF24D6C(Local_122.f_0, Local_122.f_1, Local_116.f_0, Local_116.f_1);
						if (unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590()) == 0)
						{
							if (iLocal_476 == 0)
							{
								if (unk_0xF2A1C07A7BCB6A33(Local_122.f_0, Local_122.f_1, Local_116.f_0, Local_116.f_1))
								{
									unk_0xF3A0355497F48F40(iLocal_46, unk_0xF8D66A34AF0C53A5(iLocal_46, 0), Local_116, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_479 = 0;
									iLocal_476 = 1;
								}
							}
						}
						else if (unk_0x1F2158D615BC4B25(unk_0x10C448DEF4298C4F(Local_122, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_479 == 0)
							{
								unk_0xD7A66F87AC52B66B(iLocal_46, unk_0xF8D66A34AF0C53A5(iLocal_46, 0), unk_0x10C448DEF4298C4F(Local_122, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, 1);
								iLocal_476 = 0;
								iLocal_479 = 1;
							}
						}
						else if (iLocal_476 == 0)
						{
							if (unk_0xF2A1C07A7BCB6A33(Local_122.f_0, Local_122.f_1, Local_116.f_0, Local_116.f_1))
							{
								unk_0xF3A0355497F48F40(iLocal_46, unk_0xF8D66A34AF0C53A5(iLocal_46, 0), Local_116, 4, 30f, 786468, 3f, 15f, 0);
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
		if (!unk_0x1E80C02AC16B6622(iLocal_48))
		{
			if (!func_32(iLocal_48))
			{
				if (!func_179())
				{
					if (func_178(iLocal_48))
					{
						if (func_31(iLocal_48, 0))
						{
							unk_0x8D429A827A931AC9(iLocal_48, 1, 1);
							unk_0x9526D9575C237F2F(iLocal_48, 1);
							unk_0xE2CB8488CFA42209(iLocal_48);
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
					if (!unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
					{
						iLocal_475 = 1;
					}
					else if (unk_0xB42592B9FFEB5EDE(iLocal_48, 0))
					{
						if (!unk_0xE5FADE1166052251(iLocal_48, unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0), 0))
						{
							iLocal_475 = 1;
						}
					}
				}
				if (iLocal_475 == 0)
				{
					if (func_179())
					{
						iLocal_475 = 1;
					}
				}
				if (iLocal_471 == 1)
				{
					if ((func_178(iLocal_48) && unk_0x95CBA891BCA778AA(iLocal_48, 1)) && iLocal_475 == 0)
					{
						Local_122 = { unk_0xAF99169F0F5AE41D(iLocal_48, 1) };
						unk_0x00FBBA398FF24D6C(Local_122.f_0, Local_122.f_1, Local_116.f_0, Local_116.f_1);
						if (unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590()) == 0)
						{
							if (iLocal_477 == 0)
							{
								if (unk_0xF2A1C07A7BCB6A33(Local_122.f_0, Local_122.f_1, Local_116.f_0, Local_116.f_1))
								{
									unk_0xF3A0355497F48F40(iLocal_48, unk_0xF8D66A34AF0C53A5(iLocal_48, 0), Local_116, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_480 = 0;
									iLocal_477 = 1;
								}
							}
						}
						else if (unk_0x1F2158D615BC4B25(unk_0x10C448DEF4298C4F(Local_122, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_480 == 0)
							{
								unk_0xD7A66F87AC52B66B(iLocal_48, unk_0xF8D66A34AF0C53A5(iLocal_48, 0), unk_0x10C448DEF4298C4F(Local_122, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, 1);
								iLocal_477 = 0;
								iLocal_480 = 1;
							}
						}
						else if (iLocal_477 == 0)
						{
							if (unk_0xF2A1C07A7BCB6A33(Local_122.f_0, Local_122.f_1, Local_116.f_0, Local_116.f_1))
							{
								unk_0xF3A0355497F48F40(iLocal_48, unk_0xF8D66A34AF0C53A5(iLocal_48, 0), Local_116, 4, 30f, 786468, 3f, 15f, 0);
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
		if (!unk_0x1E80C02AC16B6622(iLocal_47))
		{
			if (!func_32(iLocal_47))
			{
				if (!func_179())
				{
					if (func_178(iLocal_47))
					{
						if (func_31(iLocal_47, 0))
						{
							unk_0x8D429A827A931AC9(iLocal_47, 1, 1);
							unk_0x9526D9575C237F2F(iLocal_47, 1);
							unk_0xE2CB8488CFA42209(iLocal_47);
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
					if (!unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
					{
						iLocal_474 = 1;
					}
					else if (unk_0xB42592B9FFEB5EDE(iLocal_47, 0))
					{
						if (!unk_0xE5FADE1166052251(iLocal_47, unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0), 0))
						{
							iLocal_474 = 1;
						}
					}
				}
				if (iLocal_474 == 0)
				{
					if (func_179())
					{
						iLocal_474 = 1;
					}
				}
				if (iLocal_472 == 1)
				{
					if ((func_178(iLocal_47) && unk_0x95CBA891BCA778AA(iLocal_47, 1)) && iLocal_474 == 0)
					{
						Local_122 = { unk_0xAF99169F0F5AE41D(iLocal_47, 1) };
						unk_0x00FBBA398FF24D6C(Local_122.f_0, Local_122.f_1, Local_116.f_0, Local_116.f_1);
						if (unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590()) == 0)
						{
							if (iLocal_478 == 0)
							{
								if (unk_0xF2A1C07A7BCB6A33(Local_122.f_0, Local_122.f_1, Local_116.f_0, Local_116.f_1))
								{
									unk_0xF3A0355497F48F40(iLocal_47, unk_0xF8D66A34AF0C53A5(iLocal_47, 0), Local_116, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_481 = 0;
									iLocal_478 = 1;
								}
							}
						}
						else if (unk_0x1F2158D615BC4B25(unk_0x10C448DEF4298C4F(Local_122, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_481 == 0)
							{
								unk_0xD7A66F87AC52B66B(iLocal_47, unk_0xF8D66A34AF0C53A5(iLocal_47, 0), unk_0x10C448DEF4298C4F(Local_122, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, 1);
								iLocal_478 = 0;
								iLocal_481 = 1;
							}
						}
						else if (iLocal_478 == 0)
						{
							if (unk_0xF2A1C07A7BCB6A33(Local_122.f_0, Local_122.f_1, Local_116.f_0, Local_116.f_1))
							{
								unk_0xF3A0355497F48F40(iLocal_47, unk_0xF8D66A34AF0C53A5(iLocal_47, 0), Local_116, 4, 30f, 786468, 3f, 15f, 0);
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

int func_178(int iParam0)
{
	if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()) && unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
	{
		if (!unk_0x1E80C02AC16B6622(iParam0))
		{
			if (unk_0xE5FADE1166052251(iParam0, unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0), 0) && unk_0x07A8845F7F106A38(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0), -1) == iParam0)
			{
				if (unk_0x1F2158D615BC4B25(iLocal_33))
				{
					if (unk_0x968EA16107097324(iLocal_33, 0))
					{
						if ((unk_0xE5FADE1166052251(iParam0, iLocal_33, 0) && unk_0x07A8845F7F106A38(iLocal_33, -1) == iParam0) && !unk_0xA427F05DB896EEBE(iLocal_33, Local_116, 3f, 3f, 3f, 0, 1, 0))
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

bool func_179()
{
	return Global_17116;
}

void func_180()
{
	if (unk_0x1F2158D615BC4B25(iLocal_33))
	{
		if (!unk_0x968EA16107097324(iLocal_33, 0))
		{
			func_183(3);
			return;
		}
		else
		{
			if (func_182(&iLocal_33))
			{
				func_183(2);
				return;
			}
			if (unk_0x1F2158D615BC4B25(iLocal_32))
			{
				if (!unk_0x968EA16107097324(iLocal_32, 0))
				{
					func_183(1);
					return;
				}
				if (unk_0x968EA16107097324(iLocal_32, 0))
				{
					if (!unk_0x0F3BABBA4CB4778D(iLocal_33))
					{
						if ((unk_0x184475778464D638(iLocal_32) || func_181(iLocal_32)) || func_182(&iLocal_32))
						{
							func_183(1);
							return;
						}
					}
				}
			}
		}
	}
	if (iLocal_28 == 3 || iLocal_28 == 4)
	{
		if (unk_0x1F2158D615BC4B25(iLocal_32))
		{
			if (unk_0x968EA16107097324(iLocal_32, 0))
			{
				if (func_156(iLocal_32, unk_0x77F050A399DB77ED(), 1) > 600f)
				{
					func_183(5);
					return;
				}
			}
		}
	}
	if (unk_0x1F2158D615BC4B25(iLocal_49))
	{
		if (unk_0x1E80C02AC16B6622(iLocal_49))
		{
			func_183(6);
			return;
		}
	}
}

int func_181(int iParam0)
{
	if (unk_0x1F2158D615BC4B25(uParam0))
	{
		if (unk_0x0B6E83A9A7ED3EBA(iParam0))
		{
			return 1;
		}
		else if (!unk_0x968EA16107097324(iParam0, 0))
		{
			if (!unk_0x01CB02EE3F3F9481(iParam0))
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

int func_182(var uParam0)
{
	if (unk_0x968EA16107097324(*uParam0, 0))
	{
		if (((unk_0x65CE087C4DFAA205(*uParam0, 0, 7000) || unk_0x65CE087C4DFAA205(*uParam0, 3, 30000)) || unk_0x65CE087C4DFAA205(*uParam0, 2, 30000)) || unk_0x65CE087C4DFAA205(*uParam0, 1, 40000))
		{
			return 1;
		}
	}
	return 0;
}

void func_183(int iParam0)
{
	iLocal_30 = iParam0;
	if (iLocal_28 != 6)
	{
		iLocal_28 = 6;
		iLocal_62 = 0;
	}
}

void func_184(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_99250.f_7703.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_99250.f_7703.f_99.f_58[iParam0] = iParam1;
}

void func_185()
{
	if (iLocal_28 == 5)
	{
		if (iLocal_483 == 0)
		{
			func_186(657);
		}
	}
}

void func_186(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	Global_55660 = 0;
	if (!Global_55884[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_67754)
	{
		if (Global_67755[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_67755[iVar1 /*9*/].f_1 = 1;
			Global_67755[iVar1 /*9*/].f_2 = 0f;
			if (Global_67755[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

bool func_187(bool bParam0)
{
	if (!bParam0 && unk_0xB1A77D5C890711F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB56FEBC510E7E9DE(Global_69565, 0);
}

void func_188()
{
	unk_0xDBCB209530188FF6(unk_0x8ACD527A7E574590(), 0);
	unk_0x5416146016E39BF7(joaat("packer"), 0);
	unk_0x5416146016E39BF7(joaat("phantom"), 0);
	unk_0x9C3F27BE5DA33F3B("FHPRB_START");
	unk_0x9C3F27BE5DA33F3B("FHPRB_TRUCK");
	unk_0x9C3F27BE5DA33F3B("FHPRB_COPS");
	unk_0x9C3F27BE5DA33F3B("FHPRB_LOST");
	unk_0x9C3F27BE5DA33F3B("FHPRB_STOP");
	unk_0x54575489AE798654(uLocal_51, 0);
	unk_0x54575489AE798654(uLocal_52, 0);
	unk_0x54575489AE798654(uLocal_53, 0);
	unk_0x54575489AE798654(uLocal_54, 0);
	unk_0x54575489AE798654(uLocal_55, 0);
	unk_0x54575489AE798654(uLocal_56, 0);
	if (unk_0xEA9737C9481F013D("SCRAP_SECURITY"))
	{
		if (unk_0x2559EB71C62A9E4B("SCRAP_SECURITY"))
		{
			unk_0x4EF69B4FDEEC776F("SCRAP_SECURITY", 0);
		}
	}
	unk_0xCBC9707F3BE3D5C2(5);
	if (unk_0x456AF8BC83CCA6FF(iLocal_114))
	{
		unk_0xFBC7DA86A4EDA71B(iLocal_114);
	}
	if (unk_0x456AF8BC83CCA6FF(iLocal_115))
	{
		unk_0xFBC7DA86A4EDA71B(iLocal_115);
	}
	unk_0x2F798BA2098FDADE();
}

void func_189()
{
	int iVar0;
	
	if (unk_0xF93DA38375EB3977("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1424);
	}
	if (Global_99250.f_7703 || func_187(0))
	{
		if (!func_190())
		{
			iVar0 = func_13();
			if (iVar0 != -1)
			{
				if (!func_7(iVar0))
				{
					return;
				}
				unk_0x573691DB812DC8AA(&(Global_82191[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_12();
		}
	}
}

int func_190()
{
	if (((Global_91106 == 13 || Global_91106 == 10) || Global_91106 == 11) || Global_91106 == 12)
	{
		return 0;
	}
	return 1;
}

