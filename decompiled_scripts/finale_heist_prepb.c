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
	if (unk_0x24862A9CDC8F8874(3))
	{
		unk_0x233432976E597324("FHPRB_STOP");
		func_191();
		func_190();
	}
	if (func_189(0))
	{
		unk_0xF3AC452C34BF0E13("FINPRB", 0);
	}
	unk_0x4A606A8BE6924115("WorkerPedMainGroup", &iLocal_302);
	unk_0x4A606A8BE6924115("GuardMainGroup", &iLocal_303);
	unk_0xB7FAA1C591A4664F(joaat("packer"), 1);
	unk_0x6CCF5F545348D54E(5, iLocal_303, joaat("player"));
	unk_0x6CCF5F545348D54E(5, iLocal_302, joaat("player"));
	unk_0x6CCF5F545348D54E(1, iLocal_303, iLocal_302);
	unk_0x6CCF5F545348D54E(1, iLocal_302, iLocal_303);
	unk_0x6CCF5F545348D54E(1, iLocal_303, joaat("COP"));
	unk_0x6CCF5F545348D54E(1, joaat("COP"), iLocal_303);
	unk_0x6CCF5F545348D54E(1, iLocal_302, joaat("COP"));
	unk_0x6CCF5F545348D54E(1, joaat("COP"), iLocal_302);
	while (true)
	{
		unk_0xBB5777EE55D3B041("M_FINPRB", 0);
		if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
		{
			unk_0xC778754E36F3FFD6(unk_0xC8B93D94F8954288(), 230, 0);
		}
		func_187();
		if (iLocal_317 == 0)
		{
			if (unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) > 0)
			{
				func_186(27, 1);
				iLocal_317 = 1;
			}
		}
		if (iLocal_396 == 1)
		{
			func_182();
		}
		func_179();
		func_172();
		func_164();
		func_159();
		func_156();
		switch (iLocal_28)
		{
			case 0:
				func_155();
				break;
			
			case 1:
				func_152();
				break;
			
			case 2:
				func_128();
				break;
			
			case 3:
				func_126();
				break;
			
			case 4:
				func_103();
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
			unk_0x7846F09C04C34C46();
			unk_0x9F4AA6F234E8A860(1);
			unk_0x233432976E597324("FHPRA_FAIL");
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
				func_190();
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
	if (!unk_0xB8A06E7E729EED0A(sParam0))
	{
		if (unk_0x71F27A2B1B0287CD(sParam0) <= 16)
		{
			StringCopy(&Global_69549, sParam0, 16);
			StringCopy(&Global_69553, "", 16);
			if (unk_0xA0CEFA7178F5CDE5())
			{
				unk_0xF7588C28E8908E72();
			}
		}
	}
}

void func_6(int iParam0)
{
	int iVar0;
	
	if (Global_100976.f_7719 || func_189(0))
	{
		iVar0 = func_13();
		if (!func_7(iVar0))
		{
			return;
		}
		unk_0x59A0729D503ED758(&(Global_82191[iVar0 /*5*/].f_1), 5);
		Global_91142 = iParam0;
	}
}

int func_7(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_12();
	if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		unk_0xE3BB289E1C1F168E(5000);
	}
	iVar0 = Global_82191[iParam0 /*5*/];
	iVar1 = Global_69586.f_109[iVar0 /*4*/];
	func_11(iVar1, 1);
	unk_0x56A28F32E01DD318(unk_0xA34E7C2A5118D638());
	unk_0x5E70D5A5F14A2E17(unk_0xA34E7C2A5118D638());
	func_8(&(Global_100976.f_1770.f_539), iVar1);
	if (Global_85614 == Global_91143)
	{
		Global_100976.f_7719.f_330[iVar1 /*6*/].f_1++;
	}
	if (!unk_0xDCC86F723E82125E(Global_82227[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
		{
			unk_0x0F976C80D8B6703E(0);
		}
	}
	Global_100976.f_7719.f_330[iVar1 /*6*/].f_2++;
	Global_85614 = Global_91143;
	if (iParam0 == -1)
	{
		if (Global_100976.f_7719)
		{
		}
		return 0;
	}
	if (unk_0xDCC86F723E82125E(Global_82191[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0xDCC86F723E82125E(Global_82191[iParam0 /*5*/].f_1, 5))
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
		iVar1 = Global_100976.f_17167[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0xDCC86F723E82125E(Global_100976.f_7719.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_10(Global_100976.f_17167[iVar0], &Var2, &fVar5))
			{
				Global_100976.f_17167[iVar0] = 318;
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
	if (unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1))
	{
		if (unk_0xB8A06E7E729EED0A(&Global_69549))
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
	else if (!unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		if (unk_0xB8A06E7E729EED0A(&Global_69549))
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
		unk_0x59A0729D503ED758(&(Global_91106.f_20), 25);
	}
}

int func_13()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0xDCC86F723E82125E(Global_82191[iVar0 /*5*/].f_1, 2))
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
	return Global_100976.f_1770.f_539.f_3549;
}

void func_15()
{
	int iVar0;
	
	if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
	{
		if (func_19(Global_100976.f_1770.f_539.f_3549) != unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()))
		{
			iVar0 = func_18(unk_0xC8B93D94F8954288());
			if (func_17(iVar0) && (!func_16(14) || Global_99928))
			{
				if (Global_100976.f_1770.f_539.f_3549 != iVar0 && func_17(Global_100976.f_1770.f_539.f_3549))
				{
					Global_100976.f_1770.f_539.f_3550 = Global_100976.f_1770.f_539.f_3549;
				}
				Global_100976.f_1770.f_539.f_3551 = iVar0;
				Global_100976.f_1770.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_100976.f_1770.f_539.f_3549 != 145)
			{
				Global_100976.f_1770.f_539.f_3551 = Global_100976.f_1770.f_539.f_3549;
			}
			return;
		}
	}
	Global_100976.f_1770.f_539.f_3549 = 145;
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
	
	if (unk_0x95CCECA3948CFE7B(iParam0))
	{
		iVar1 = unk_0x6D5BB810CC209E15(iParam0);
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
		return Global_100976.f_32519[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_20()
{
	func_156();
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
		unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 0, 0);
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
		if (unk_0xD5DFCA69ACAA20E3())
		{
			if (!func_30())
			{
				unk_0xBB93D72F9F571F61(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1));
			}
			func_27(iLocal_33, -1, 1);
		}
		if (!unk_0xB66DD474AA9E764E())
		{
			unk_0x31E6EB2040318451(800);
		}
		iLocal_396 = 1;
		iLocal_62 = 1;
	}
	if (iLocal_62 == 1)
	{
		if (unk_0x95CCECA3948CFE7B(iLocal_33))
		{
			if (unk_0x5D42322C7DB888D0(iLocal_33, 0))
			{
				if (func_14() == 0)
				{
					if (func_33(iLocal_48, 0))
					{
						if (unk_0x0C7EC810080F0459(iLocal_48, iLocal_33, 0))
						{
							unk_0x5124C5FA52D2AF3E(iLocal_48);
							unk_0x5980997C9ACA0572(iLocal_48);
							unk_0xAAD662D7E0D59F4C(iLocal_48, 1);
							unk_0xD4781E5070EB1F1C(iLocal_48, iLocal_33, 0);
						}
					}
					if (func_33(iLocal_47, 0))
					{
						if (unk_0x0C7EC810080F0459(iLocal_47, iLocal_33, 0))
						{
							unk_0x5124C5FA52D2AF3E(iLocal_47);
							unk_0x5980997C9ACA0572(iLocal_47);
							unk_0xAAD662D7E0D59F4C(iLocal_47, 1);
							unk_0xD4781E5070EB1F1C(iLocal_47, iLocal_33, 0);
						}
					}
				}
				if (func_14() == 2)
				{
					if (func_33(iLocal_46, 0))
					{
						if (unk_0x0C7EC810080F0459(iLocal_46, iLocal_33, 0))
						{
							unk_0x5124C5FA52D2AF3E(iLocal_46);
							unk_0x5980997C9ACA0572(iLocal_46);
							unk_0xAAD662D7E0D59F4C(iLocal_46, 1);
							unk_0xD4781E5070EB1F1C(iLocal_46, iLocal_33, 0);
						}
					}
					if (func_33(iLocal_47, 0))
					{
						if (unk_0x0C7EC810080F0459(iLocal_47, iLocal_33, 0))
						{
							unk_0x5124C5FA52D2AF3E(iLocal_47);
							unk_0x5980997C9ACA0572(iLocal_47);
							unk_0xAAD662D7E0D59F4C(iLocal_47, 1);
							unk_0xD4781E5070EB1F1C(iLocal_47, iLocal_33, 0);
						}
					}
				}
				if (func_14() == 1)
				{
					if (func_33(iLocal_46, 0))
					{
						if (unk_0x0C7EC810080F0459(iLocal_46, iLocal_33, 0))
						{
							unk_0x5124C5FA52D2AF3E(iLocal_46);
							unk_0x5980997C9ACA0572(iLocal_46);
							unk_0xAAD662D7E0D59F4C(iLocal_46, 1);
							unk_0xD4781E5070EB1F1C(iLocal_46, iLocal_33, 0);
						}
					}
					if (func_33(iLocal_48, 0))
					{
						if (unk_0x0C7EC810080F0459(iLocal_48, iLocal_33, 0))
						{
							unk_0x5124C5FA52D2AF3E(iLocal_48);
							unk_0x5980997C9ACA0572(iLocal_48);
							unk_0xAAD662D7E0D59F4C(iLocal_48, 1);
							unk_0xD4781E5070EB1F1C(iLocal_48, iLocal_33, 0);
						}
					}
				}
				if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iLocal_33, 0))
				{
					unk_0xD4781E5070EB1F1C(unk_0xC8B93D94F8954288(), iLocal_33, 0);
				}
			}
		}
		unk_0x5AE11BC36633DE4E(0);
		iLocal_62 = 2;
	}
	if (iLocal_62 == 2)
	{
		if (unk_0x95CCECA3948CFE7B(iLocal_33))
		{
			if (unk_0x5D42322C7DB888D0(iLocal_33, 0))
			{
				if (iLocal_320 == 0)
				{
					if (func_14() == 0)
					{
						if (func_33(iLocal_48, 0))
						{
							if (!unk_0x0C7EC810080F0459(iLocal_48, iLocal_33, 0))
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
							if (!unk_0x0C7EC810080F0459(iLocal_47, iLocal_33, 0))
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
							if (!unk_0x0C7EC810080F0459(iLocal_46, iLocal_33, 0))
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
							if (!unk_0x0C7EC810080F0459(iLocal_47, iLocal_33, 0))
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
							if (!unk_0x0C7EC810080F0459(iLocal_46, iLocal_33, 0))
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
							if (!unk_0x0C7EC810080F0459(iLocal_48, iLocal_33, 0))
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
				else if (!unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iLocal_33, 1))
				{
					unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 1, 0);
					unk_0x5AE11BC36633DE4E(0);
					iLocal_62 = 3;
				}
			}
		}
	}
	if (iLocal_62 == 3)
	{
		if (unk_0x95CCECA3948CFE7B(iLocal_33))
		{
			if (unk_0x5D42322C7DB888D0(iLocal_33, 0))
			{
				unk_0x4A6381DCF16569D3(iLocal_33, 0);
				unk_0x0782F0CAEA719452(iLocal_33, 2);
				unk_0xB7A2078CD1C9A82F(iLocal_33, 1);
			}
		}
		if (unk_0x95CCECA3948CFE7B(iLocal_32))
		{
			if (unk_0x5D42322C7DB888D0(iLocal_32, 0))
			{
				unk_0xB7A2078CD1C9A82F(iLocal_32, 1);
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
	func_190();
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
		if ((func_189(0) && Global_69563.f_1 == 1) && func_23(Global_69563))
		{
		}
		else
		{
			Global_55659 = 1;
		}
	}
	if (Global_100976.f_7719 || func_189(0))
	{
		iVar0 = func_13();
		iVar1 = Global_82191[iVar0 /*5*/];
		uVar2 = Global_69586.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_100976.f_7719)
			{
			}
			return;
		}
		if (unk_0xDCC86F723E82125E(Global_82191[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0xDCC86F723E82125E(Global_82191[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0x59A0729D503ED758(&(Global_82191[iVar0 /*5*/].f_1), 4);
		unk_0x59A0729D503ED758(&Global_69565, 1);
		Global_69581 = uVar2;
		Global_69582 = unk_0x693EBB4F13506457();
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
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
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
		if (!unk_0xDCC86F723E82125E(Global_87293, iVar0))
		{
			return 0;
		}
		unk_0x77621132305B133B(&Global_87293, iVar0);
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
		return unk_0xC8B93D94F8954288();
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
		unk_0x6F9EF355924EC498(0);
		if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
		{
			if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
			{
				unk_0x33A1196C1AC59747(unk_0xC8B93D94F8954288());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
			{
				if (unk_0x95CCECA3948CFE7B(iParam0))
				{
					if (unk_0x5D42322C7DB888D0(iParam0, 0))
					{
						if (!unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iParam0, 0))
						{
							unk_0x6D9DB313D50E9A0D(unk_0xC8B93D94F8954288(), iParam0, iParam1);
							unk_0x0F9FDCEB321235AB(0f, 1065353216);
							unk_0x8C67D2FDE360FBCA(0f);
							unk_0x4EDE34FBADD967A6(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
			{
				unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 1, 0);
			}
		}
		unk_0x833155A2B2692695();
		func_28(0);
	}
}

void func_28(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x59A0729D503ED758(&(Global_91106.f_20), 13);
	}
	else
	{
		unk_0x77621132305B133B(&(Global_91106.f_20), 13);
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
	return unk_0xDCC86F723E82125E(Global_91106.f_20, 13);
}

int func_31(int iParam0, int iParam1)
{
	int iVar0;
	
	return 0;
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
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
		if (unk_0xDCC86F723E82125E(Global_87293, iVar0))
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0xC8B93D94F8954288())
			{
				return 0;
			}
		}
		if (unk_0xDCC86F723E82125E(Global_87292, iVar0))
		{
			unk_0xD6586258E56BBD46(iParam0, 0, 0);
			unk_0x05BE583DF8C6A617(iParam0, 0);
			unk_0x59A0729D503ED758(&Global_87293, iVar0);
			return 1;
		}
	}
	return 0;
}

int func_32(int iParam0)
{
	int iVar0;
	
	return 0;
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
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
		if (unk_0xDCC86F723E82125E(Global_87293, iVar0))
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
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
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
			if (iParam0 == unk_0xC8B93D94F8954288())
			{
				return 0;
			}
		}
		if (unk_0xDCC86F723E82125E(Global_87292, iVar0))
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
	unk_0xB47D5A4E4AE9BEAD(unk_0xA34E7C2A5118D638(), 0, 0);
	unk_0x1C9B7C3360143C4C(unk_0xA34E7C2A5118D638(), 0);
	if (!unk_0xD5DFCA69ACAA20E3())
	{
		unk_0x00F9843B9C06C2E9(0);
	}
	func_101();
	unk_0x7846F09C04C34C46();
	func_100();
	func_99();
	func_36();
	if (!func_30())
	{
		func_35();
	}
	unk_0x8C67D2FDE360FBCA(0f);
}

void func_35()
{
	switch (iLocal_28)
	{
		case 2:
			unk_0xC76B5C68AB6DC7DF(unk_0xC8B93D94F8954288(), 856.9501f, -1573.177f, 29.4751f, 1, 0, 0, 1);
			unk_0x765E3FA65D011F03(unk_0xC8B93D94F8954288(), 288.3586f);
			break;
		
		case 3:
			unk_0xC76B5C68AB6DC7DF(unk_0xC8B93D94F8954288(), 856.9501f, -1573.177f, 29.4751f, 1, 0, 0, 1);
			unk_0x765E3FA65D011F03(unk_0xC8B93D94F8954288(), 288.3586f);
			break;
		
		case 4:
			if (unk_0x95CCECA3948CFE7B(iLocal_33))
			{
				if (unk_0x5D42322C7DB888D0(iLocal_33, 0))
				{
					if (!unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iLocal_33, 0))
					{
						unk_0x6D9DB313D50E9A0D(unk_0xC8B93D94F8954288(), iLocal_33, -1);
					}
				}
			}
			break;
		
		case 5:
			if (unk_0x95CCECA3948CFE7B(iLocal_33))
			{
				if (unk_0x5D42322C7DB888D0(iLocal_33, 0))
				{
					if (!unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iLocal_33, 0))
					{
						unk_0x6D9DB313D50E9A0D(unk_0xC8B93D94F8954288(), iLocal_33, -1);
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
			func_95();
			if (func_94() && func_91(7f, 7f, 7f, 1))
			{
				func_89();
				while (!func_88())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				iLocal_34 = func_37(818.8139f, -1610.406f, 30.7951f, 264.412f);
			}
			unk_0xFD62177C7242216E(0.01f);
			break;
		
		case 4:
			iLocal_418 = 0;
			iLocal_419 = 0;
			iLocal_420 = 0;
			func_95();
			if (unk_0x95CCECA3948CFE7B(iLocal_33))
			{
				if (unk_0x5D42322C7DB888D0(iLocal_33, 0))
				{
					unk_0xC76B5C68AB6DC7DF(iLocal_33, 89.2131f, -596.9456f, 30.6224f, 1, 0, 0, 1);
					unk_0x765E3FA65D011F03(iLocal_33, 161.1163f);
				}
			}
			unk_0x98371F41D43CDFA9(41f, -615f, 30f, 50f, 1, 1, 0, 0);
			break;
		
		case 5:
			iLocal_418 = 1;
			iLocal_419 = 1;
			iLocal_420 = 1;
			func_95();
			unk_0x98371F41D43CDFA9(41f, -615f, 30f, 50f, 1, 1, 0, 0);
			if (unk_0x95CCECA3948CFE7B(iLocal_33))
			{
				if (unk_0x5D42322C7DB888D0(iLocal_33, 0))
				{
					unk_0xC76B5C68AB6DC7DF(iLocal_33, 28.4065f, -608.9371f, 30.6293f, 1, 0, 0, 1);
					unk_0x765E3FA65D011F03(iLocal_33, 70.7778f);
				}
			}
			unk_0x7567CEA8E6B5340B(joaat("s_m_m_security_01"));
			while (!unk_0x0845149A26DABBA5(joaat("s_m_m_security_01")))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			if (!unk_0x95CCECA3948CFE7B(iLocal_49))
			{
				iLocal_49 = unk_0x71DD988C1B903F5D(26, joaat("s_m_m_security_01"), 64.904f, -617.9949f, 30.7028f, 223.555f, 1, 1);
				unk_0x4BBD72565A0AF033(joaat("s_m_m_security_01"));
				unk_0xC778754E36F3FFD6(iLocal_49, 324, 1);
			}
			break;
	}
}

int func_37(struct<3> Param0, float fParam3)
{
	return func_38(&(Global_92918.f_2311), Param0, fParam3, 0);
}

int func_38(var uParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	var uVar5;
	int iVar8;
	
	if (func_87(uParam0))
	{
		if (func_86(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { *uParam0 };
			fParam4 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall"))
		{
			if (unk_0x6910AF369EAB6935(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, 1))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam4 = 89.5f;
			}
		}
		if (func_85(uParam0))
		{
			unk_0x98371F41D43CDFA9(Param1, 5f, 1, 0, 0, 0);
			func_84(Param1, 5f, 0);
			iVar0 = unk_0xD53B4DCC7B2C8551(uParam0->f_12.f_66, Param1, fParam4, 1, 1);
			if (unk_0x95CCECA3948CFE7B(iVar0))
			{
				Var1 = { unk_0x44C17CCB85A88A1F(iVar0, 1) };
				if (unk_0xB7A628320EFF8E47(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					unk_0x636EE5A38E3EB8FF(iVar0, Param1, 0, 0, 1);
				}
				func_76(iVar0, &(uParam0->f_12), 0, 1);
				bVar4 = true;
				if (unk_0x9DABB329596B1BD6(uParam0->f_12.f_66) || unk_0xF77289726C4CC4D3(uParam0->f_12.f_66))
				{
					if (!unk_0xE775B5514089DF47(Param1.f_0, Param1.f_1, (Param1.f_2 + 30f), Param1.f_0, Param1.f_1, (Param1.f_2 - 30f), &uVar5))
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					unk_0xF18809B65D87E197(iVar0);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam5)
					{
						if (unk_0x1B477DDE9D088A91(unk_0x6D5BB810CC209E15(iVar0)))
						{
							func_75(uParam0->f_11, 1);
						}
						else if (unk_0xE6CB12C10EE5D793(unk_0x6D5BB810CC209E15(iVar0)))
						{
							func_75(uParam0->f_11, 2);
						}
					}
					unk_0xB7EC803E2C9CEC74(iVar0, 0);
					unk_0x328CAEC77C070FA5(iVar0, 0);
					unk_0x0CE9795408B4B974(iVar0, 1);
					func_74(iVar0, uParam0->f_11);
				}
				else if ((!func_71(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && unk_0xF8D041B05C3D1FD4(unk_0xC4E68AF0B559FAC4(), "startup_positioning"))
				{
					iVar8 = func_70(iVar0);
					if (iVar8 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_63(iVar8);
					}
				}
				if (((Global_91106 != 13 && Global_91106 != 10) && Global_91106 != 11) && Global_91106 != 12)
				{
					if (unk_0x7CBED6EFED40E7EB(&(Global_91106.f_3)) == Global_69174)
					{
						if (uParam0->f_12.f_66 == Global_100976.f_18751.f_69[21 /*78*/].f_66)
						{
							func_60(24, 0);
							func_63(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_39(iVar0, uParam0->f_11);
				}
				unk_0x4BBD72565A0AF033(uParam0->f_12.f_66);
				Var1 = { unk_0x44C17CCB85A88A1F(iVar0, 1) };
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
		iVar0 = unk_0xC0ADAF0814175B68(iParam0, -1);
		if (!unk_0x95CCECA3948CFE7B(iVar0))
		{
			iVar0 = unk_0xD58C042006468C27(iParam0, -1);
		}
		if (unk_0x95CCECA3948CFE7B(iVar0) && !unk_0x2DC9BA2299B45EA6(iVar0))
		{
			if (unk_0x6D5BB810CC209E15(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x6D5BB810CC209E15(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x6D5BB810CC209E15(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_100976.f_1770.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x6D5BB810CC209E15(iParam0) == Global_100976.f_18751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xB8A06E7E729EED0A(&(Global_100976.f_18751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0xF8D041B05C3D1FD4(unk_0xC51A0D06D98180EB(iParam0), &(Global_100976.f_18751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_100976.f_18751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_100976.f_18751.f_5592[iVar1] = iVar2;
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
		if (unk_0x6D5BB810CC209E15(iParam0) == Global_100976.f_18751.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xB8A06E7E729EED0A(&(Global_100976.f_18751.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0xF8D041B05C3D1FD4(unk_0xC51A0D06D98180EB(iParam0), &(Global_100976.f_18751.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_100976.f_18751.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_100976.f_18751.f_5590 = iParam1;
	Global_69091 = iParam0;
	Global_100976.f_18751.f_5588 = 1;
	func_40(iParam0, &(Global_100976.f_18751.f_5510));
}

void func_40(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		func_43(uParam1);
		uParam1->f_66 = unk_0x6D5BB810CC209E15(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xC51A0D06D98180EB(iParam0), 16);
		*uParam1 = unk_0x65979062393E9301(iParam0);
		unk_0xDDA7228DE9EEDB37(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xA968D095B4F299B6(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xD4344DD9CA88E065(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x9D206597121A7CCB(iParam0);
		uParam1->f_67 = unk_0x847A8FEE19DF1C6D(iParam0);
		uParam1->f_69 = unk_0xA57BDD31F092CE61(iParam0);
		uParam1->f_70 = unk_0xA6BAF129343F464F(iParam0);
		unk_0x06FD411B0A723EC9(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x3B7BDBECE2C4BB25(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x890D2A0FC3456199(iParam0, 2))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 28);
		}
		if (unk_0x890D2A0FC3456199(iParam0, 3))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 29);
		}
		if (unk_0x890D2A0FC3456199(iParam0, 0))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 30);
		}
		if (unk_0x890D2A0FC3456199(iParam0, 1))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0xDFCA441625BB8A67(iParam0, 0))
		{
			uParam1->f_68 = unk_0x0033BC594211C96E(iParam0);
		}
		if (unk_0xE924C2C283992918(uParam1->f_66))
		{
			if (unk_0x3D62C266C7E526AD(iParam0))
			{
				switch (unk_0xFF4BF4EFFE3F002D(iParam0))
				{
					case 2:
					case 0:
						unk_0x77621132305B133B(&(uParam1->f_77), 23);
						unk_0x59A0729D503ED758(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0x77621132305B133B(&(uParam1->f_77), 23);
						unk_0x77621132305B133B(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0x59A0729D503ED758(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x59A0729D503ED758(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x675A13D93AEAE680(iParam0))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 9);
		}
		if (unk_0x4B05424C051859E9(iParam0))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 10);
		}
		if (unk_0xEAF6FD6E4D109266(iParam0))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 13);
			unk_0xE089902DB3FDA244(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0xF518898EF441871E(iParam0))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 12);
		}
		func_42(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xDB066BBA59B7D1EC(iParam0, iVar0 + 1))
			{
				unk_0x59A0729D503ED758(&(uParam1->f_77), func_41(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x40132F2ACE5F8B93(iParam0, 0))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x77621132305B133B(&(uParam1->f_77), 11);
		}
		if (unk_0x3D32B80EFC48A92D(iParam0, "IgnoredByQuickSave") && unk_0xD903CC680ECAC86A(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x77621132305B133B(&(uParam1->f_77), 27);
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
	
	if (!unk_0x5D42322C7DB888D0(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x35C1534E81F87E96(*iParam0) == 0)
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
			if (unk_0x1AF9344BCD6B878A(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x342B167253E636DE(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xCABE66358519B3C4(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xCABE66358519B3C4(*iParam0, iVar0);
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
	if ((((((((((!unk_0x95CCECA3948CFE7B(iParam0) || !unk_0x5D42322C7DB888D0(iParam0, 0)) || func_58(iParam0, 0, 0)) || func_58(iParam0, 1, 0)) || func_58(iParam0, 2, 0)) || func_57(iParam0) != 145) || func_56(iParam0)) || func_55(iParam0)) || func_54(iParam0)) || func_53(iParam0)) || !func_45(unk_0x6D5BB810CC209E15(iParam0)))
	{
		if (func_55(iParam0))
		{
		}
		if (func_55(iParam0))
		{
		}
		if (func_58(iParam0, 0, 0))
		{
		}
		if (func_58(iParam0, 1, 0))
		{
		}
		if (func_58(iParam0, 2, 0))
		{
		}
		if (func_57(iParam0) != 145)
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
	if (!func_46(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0x9DABB329596B1BD6(iParam0) || unk_0xE924C2C283992918(iParam0)) || unk_0xAF40E7422A6D9D80(iParam0)) || unk_0xC9E810FB9A83EF58(iParam0))
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

int func_46(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x465E33AAA0C48359(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0xBBAE3E0C60A8AD4B())) || (iParam0 == joaat("buffalo3") && !unk_0xBBAE3E0C60A8AD4B())) || (iParam0 == joaat("gauntlet2") && !unk_0xBBAE3E0C60A8AD4B())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0xBBAE3E0C60A8AD4B())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_52())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x4BE9DEC2073C9C84())
		{
			if (unk_0x0486BD07D3026E5E(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x06C32703437E5BC3(Var1.f_0))
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
		if ((((!func_51() && !func_50()) && !func_49()) && !func_48()) && !func_52())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xF7FE713C9F786F8C() || unk_0x68B0A67658F2D9C2()) || unk_0x62F8BA7ED89768FB())
		{
		}
		else if (!func_49())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_47(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_47(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2457144)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x20F8506526D25CE0();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_4998 && !Global_262145.f_10806) && iVar1 < Global_262145.f_10807)
		{
			iVar0 = 0;
		}
	}
	iVar1 = unk_0x20F8506526D25CE0();
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_11360 && iVar1 < Global_262145.f_11366)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_11356 && iVar1 < Global_262145.f_11362)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_11357 && iVar1 < Global_262145.f_11363)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_11358 && iVar1 < Global_262145.f_11364)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_11359 && iVar1 < Global_262145.f_11365)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_11361 && iVar1 < Global_262145.f_11367)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_48()
{
	return 0;
}

int func_49()
{
	return 1;
}

int func_50()
{
	return 1;
}

int func_51()
{
	if (unk_0x9F37711843A20114(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_52()
{
	var uVar0;
	
	if (unk_0x964FE4B401FC8514())
	{
		if (unk_0x04A97E271BED9566())
		{
			if (unk_0x76C144FFABF149C3())
			{
				unk_0x5F0618A5FDAD55C4(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x59A0729D503ED758(&uVar0, 2);
				unk_0x59A0729D503ED758(&uVar0, 4);
				unk_0x59A0729D503ED758(&uVar0, 6);
				unk_0x59A0729D503ED758(&Global_25, 2);
				unk_0x59A0729D503ED758(&Global_25, 4);
				unk_0x59A0729D503ED758(&Global_25, 6);
				unk_0x071958EFED9481F5(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0xD205A6ACC9C010D3())
				{
					uVar0 = unk_0x11BD984A2A4EF9A7(866);
					unk_0x59A0729D503ED758(&uVar0, 0);
					unk_0x1F071A4E400AAE0A(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_138040 == 2)
	{
		return 1;
	}
	else if (Global_138040 == 3)
	{
		return 0;
	}
	if (unk_0xD205A6ACC9C010D3())
	{
		if (unk_0xDCC86F723E82125E(unk_0x11BD984A2A4EF9A7(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_53(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0x6D5BB810CC209E15(iParam0);
	uVar1 = unk_0xC51A0D06D98180EB(iParam0);
	if (iVar0 == joaat("speedo") && unk_0xF8D041B05C3D1FD4(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_46(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_54(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x95CCECA3948CFE7B(Global_88800[iVar0]))
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

int func_55(int iParam0)
{
	int iVar0;
	
	if (unk_0x95CCECA3948CFE7B(iParam0) && unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x95CCECA3948CFE7B(Global_88770[iVar0]) && unk_0x5D42322C7DB888D0(Global_88770[iVar0], 0))
			{
				if (Global_88770[iVar0] == iParam0 && unk_0x6D5BB810CC209E15(Global_88770[iVar0]) == unk_0x6D5BB810CC209E15(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_56(int iParam0)
{
	int iVar0;
	
	if (unk_0x95CCECA3948CFE7B(Global_68186.f_484[24]))
	{
		if (iParam0 == Global_68186.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x95CCECA3948CFE7B(Global_68186.f_484[iVar0]))
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

int func_57(int iParam0)
{
	int iVar0;
	
	if (!unk_0x95CCECA3948CFE7B(iParam0))
	{
		return 145;
	}
	if (!unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x95CCECA3948CFE7B(Global_88770[iVar0]))
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

int func_58(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x95CCECA3948CFE7B(iParam0) || !unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_59(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xDCC86F723E82125E(Global_100976.f_5863[iVar9], 0))
		{
			if (unk_0x86C606C3A2B31739(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_59(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_60(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_62(iParam0, 0))
		{
			func_61(iParam0, 1, 0);
			func_61(iParam0, 2, 0);
			func_61(iParam0, 3, 0);
			func_61(iParam0, 4, 0);
			func_61(iParam0, 0, 1);
			Global_68186[iParam0] = 1;
		}
	}
	else
	{
		func_61(iParam0, 0, 0);
	}
}

void func_61(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x59A0729D503ED758(&(Global_100976.f_18751[iParam0]), iParam1);
	}
	else
	{
		unk_0x77621132305B133B(&(Global_100976.f_18751[iParam0]), iParam1);
	}
}

bool func_62(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xDCC86F723E82125E(Global_100976.f_18751[iParam0], iParam1);
}

void func_63(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_67(&(Global_68186.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x95CCECA3948CFE7B(Global_68186.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
			{
				if (unk_0x5D42322C7DB888D0(Global_68186.f_139[iParam0], 0))
				{
					if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), Global_68186.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0xFD816D0E738EB817(Global_68186.f_139[iParam0], 1, 1);
				unk_0x95F5F15D238A7F1C(&(Global_68186.f_139[iParam0]));
			}
		}
		Global_68186[iParam0] = 1;
		if (unk_0xDCC86F723E82125E(Global_68186.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_62(iParam0, 0)) && Global_69095.f_66 == 0) && Global_100976.f_18751.f_1958[Global_68186.f_555[0 /*21*/].f_14] != 0) && Global_100976.f_18751.f_1958[Global_68186.f_555[0 /*21*/].f_14] > 3) && (!func_65(0, Global_68186.f_555[0 /*21*/].f_12) || !func_65(1, Global_68186.f_555[0 /*21*/].f_12)))
			{
				func_64(&(Global_100976.f_18751.f_69[Global_68186.f_555[0 /*21*/].f_14 /*78*/]), &Global_69095);
				Global_69173 = Global_100976.f_18751.f_5591;
			}
			func_60(iParam0, 0);
		}
	}
}

void func_64(var uParam0, var uParam1)
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

int func_65(int iParam0, int iParam1)
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
	if (iParam0 < 0 || iParam0 >= func_66(&(Global_100976.f_18751.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_46(Global_100976.f_18751.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_66(var uParam0)
{
	return *uParam0;
}

int func_67(var uParam0, int iParam1)
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
			uParam0->f_4 = func_68(0, 1);
			uParam0->f_12 = 0;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 20);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_68(0, 1);
			uParam0->f_12 = 0;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 20);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_68(1, 1);
			uParam0->f_12 = 1;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 20);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_68(1, 2);
			uParam0->f_12 = 1;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 19);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_68(1, 1);
			uParam0->f_12 = 1;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 20);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_68(1, 2);
			uParam0->f_12 = 1;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 19);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_68(2, 1);
			uParam0->f_12 = 2;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 20);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_68(2, 1);
			uParam0->f_12 = 2;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 20);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_68(2, 1);
			uParam0->f_12 = 2;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 20);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 14);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 14);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 14);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 14);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 22);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 14);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 22);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 14);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 22);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 14);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 14);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 14);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 23);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 14);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 24);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 28);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 14);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 24);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 28);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 14);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 24);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 28);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 29);
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
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 27);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 24);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 29);
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
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 27);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 24);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 29);
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
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 27);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 24);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 11);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 13);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 11);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 13);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 9);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 9);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 23);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 23);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 23);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 8);
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
			unk_0x59A0729D503ED758(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 2);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 30);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 2);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 22);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 6);
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
			if (func_52())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 13);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 2);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 1);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 23);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_52())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 13);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 2);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 1);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 23);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 23);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 6);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 30);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 23);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 30);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 23);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0xDCC86F723E82125E(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_100976.f_18751.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_86(Global_100976.f_18751.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_100976.f_18751.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_100976.f_18751.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_100976.f_18751.f_1934[uParam0->f_14];
		}
	}
	if (unk_0xDCC86F723E82125E(uParam0->f_9, 19))
	{
		if (!func_86(Global_100976.f_1770.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_100976.f_1770.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_100976.f_1770.f_539.f_2837[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0xDCC86F723E82125E(uParam0->f_9, 20))
	{
		if (!func_86(Global_100976.f_1770.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_100976.f_1770.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_100976.f_1770.f_539.f_2837[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_68(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_17(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_69(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_69(int iParam0, var uParam1, int iParam2)
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
			if (Global_100976.f_7719.f_99.f_58[128] && !Global_100976.f_7719.f_99.f_58[131])
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
					if (Global_100976.f_7719.f_99.f_58[119])
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
			else if (Global_100976.f_7719.f_99.f_58[118])
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

int func_70(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((unk_0x95CCECA3948CFE7B(Global_68186.f_484[iVar0]) && !unk_0xB6900B8CB0ABBD2B(Global_68186.f_484[iVar0])) && unk_0x5D42322C7DB888D0(Global_68186.f_484[iVar0], 0))
		{
			unk_0xDDA7228DE9EEDB37(iParam0, &iVar1, &iVar2);
			unk_0xDDA7228DE9EEDB37(Global_68186.f_484[iVar0], &iVar3, &iVar4);
			if (((unk_0x6D5BB810CC209E15(iParam0) == unk_0x6D5BB810CC209E15(Global_68186.f_484[iVar0]) && unk_0x847A8FEE19DF1C6D(iParam0) == unk_0x847A8FEE19DF1C6D(Global_68186.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_71(int iParam0, struct<3> Param1, bool bParam4)
{
	int iVar0;
	var uVar1[3];
	int iVar5;
	int iVar6;
	
	iVar0 = unk_0x6D5BB810CC209E15(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_73(iParam0, Global_68186.f_139[38], 0))
			{
				func_63(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_73(iParam0, Global_68186.f_139[43], 1))
			{
				func_63(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar5 = unk_0xF6C10CD660E6EF6F(unk_0xC8B93D94F8954288(), &uVar1);
			iVar6 = 0;
			while (iVar6 <= (iVar5 - 1))
			{
				if (func_73(iParam0, uVar1[iVar6], 1) && func_72(unk_0x44C17CCB85A88A1F(uVar1[iVar6], 1), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam4 || func_86(Param1, 0f, 0f, 0f, 0)) || unk_0x4F982ED5336EA899(unk_0x44C17CCB85A88A1F(iParam0, 1), unk_0x44C17CCB85A88A1F(uVar1[iVar6], 1), 1) < 10f)
					{
						unk_0x95F5F15D238A7F1C(&iParam0);
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
			if ((unk_0x95CCECA3948CFE7B(Global_68186.f_484[14]) && unk_0x5D42322C7DB888D0(iParam0, 0)) && unk_0x5D42322C7DB888D0(Global_68186.f_484[14], 0))
			{
				if (unk_0x6D5BB810CC209E15(Global_68186.f_484[14]) == joaat("luxor2") && unk_0x847A8FEE19DF1C6D(iParam0) == unk_0x847A8FEE19DF1C6D(Global_68186.f_484[14]))
				{
					func_63(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0x95CCECA3948CFE7B(Global_68186.f_484[20]) && unk_0x5D42322C7DB888D0(iParam0, 0)) && unk_0x5D42322C7DB888D0(Global_68186.f_484[20], 0))
			{
				if (unk_0x6D5BB810CC209E15(Global_68186.f_484[20]) == joaat("swift2") && unk_0x847A8FEE19DF1C6D(iParam0) == unk_0x847A8FEE19DF1C6D(Global_68186.f_484[20]))
				{
					func_63(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_72(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0xA3C5926D6E5619AE((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0xA3C5926D6E5619AE((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0xA3C5926D6E5619AE((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xA3C5926D6E5619AE((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0xA3C5926D6E5619AE((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_73(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((unk_0x95CCECA3948CFE7B(iParam1) && !unk_0xB6900B8CB0ABBD2B(iParam1)) && unk_0x5D42322C7DB888D0(iParam1, 0))
	{
		if (bParam2)
		{
			unk_0xDDA7228DE9EEDB37(iParam0, &iVar0, &iVar1);
			unk_0xDDA7228DE9EEDB37(iParam1, &iVar2, &iVar3);
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

void func_74(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0x95CCECA3948CFE7B(Global_88770[iVar0]))
		{
			Global_88770[iVar0] = iParam0;
			Global_88780[iVar0] = iParam1;
			Global_88790[iVar0] = unk_0x6D5BB810CC209E15(iParam0);
			if (unk_0x1B477DDE9D088A91(Global_88790[iVar0]))
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

void func_75(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x95CCECA3948CFE7B(Global_88770[iVar0]))
		{
			if (iParam0 == 145 || Global_88780[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0x6D5BB810CC209E15(Global_88770[iVar0]) == func_68(iParam0, iParam1))
				{
					if (!unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), Global_88770[iVar0], 0))
					{
						unk_0xFD816D0E738EB817(Global_88770[iVar0], 0, 1);
						unk_0x95F5F15D238A7F1C(&(Global_88770[iVar0]));
						Global_88780[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_76(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		if (unk_0x7CBED6EFED40E7EB(&(uParam1->f_1)) != 0)
		{
			unk_0x673B8FB2A362DAB5(iParam0, &(uParam1->f_1));
		}
		if (*uParam1 >= 0 && *uParam1 < unk_0xC7D09CBF7C2546F7())
		{
			unk_0x6C4F5FC03FDA2437(iParam0, *uParam1);
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
			if (unk_0xDCC86F723E82125E(uParam1->f_77, func_41(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x59A0729D503ED758(&(uParam1->f_77), func_41(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0xDCC86F723E82125E(uParam1->f_77, func_41(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x59A0729D503ED758(&(uParam1->f_77), func_41(iVar1 + 1));
			}
		}
		if (unk_0xDCC86F723E82125E(uParam1->f_77, 13))
		{
			unk_0x229FD8576AB121C8(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x4718361C877330F0(iParam0);
		}
		if (unk_0xDCC86F723E82125E(uParam1->f_77, 12))
		{
			unk_0x95E0D01C516B3324(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x60B0B54A3F5BBB0A(iParam0);
		}
		unk_0x46E519A001AC83B2(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0xBA41DA8B3B8610CF(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0xDCC86F723E82125E(uParam1->f_77, 15) || func_83(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_82())
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
		unk_0xC9FC7A550DB5A96C(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			unk_0x678F3A4FC4D97568(iParam0, 0);
		}
		else
		{
			unk_0x678F3A4FC4D97568(iParam0, 0);
			unk_0x678F3A4FC4D97568(iParam0, uParam1->f_65);
		}
		unk_0x473F2FDD337B5EEC(iParam0, !unk_0xDCC86F723E82125E(uParam1->f_77, 9));
		if (bParam2)
		{
			unk_0x0782F0CAEA719452(iParam0, uParam1->f_70);
		}
		unk_0x63A9CE7D42AC95BA(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0xD53208E9A6CE9B78(iParam0, 2, unk_0xDCC86F723E82125E(uParam1->f_77, 28));
		unk_0xD53208E9A6CE9B78(iParam0, 3, unk_0xDCC86F723E82125E(uParam1->f_77, 29));
		unk_0xD53208E9A6CE9B78(iParam0, 0, unk_0xDCC86F723E82125E(uParam1->f_77, 30));
		unk_0xD53208E9A6CE9B78(iParam0, 1, unk_0xDCC86F723E82125E(uParam1->f_77, 31));
		unk_0x59CE4F88873CD573(iParam0, unk_0xDCC86F723E82125E(uParam1->f_77, 10));
		if (unk_0xEA32C7A52A2F569E(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0x9137DD8DE2087478(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0x7F43378ECD4F3CCD(unk_0x6D5BB810CC209E15(iParam0)))
			{
				if (unk_0xE6CB12C10EE5D793(unk_0x6D5BB810CC209E15(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_81(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_81(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0xDFCA441625BB8A67(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0x34D873E77AC07F92(iParam0, 1);
			}
			else
			{
				unk_0x5841B3DF0DA88634(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_77(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0xAF40E7422A6D9D80(uParam1->f_66) && !unk_0x9DABB329596B1BD6(uParam1->f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0xDCC86F723E82125E(uParam1->f_77, func_41(iVar2 + 1)))
				{
					if (!unk_0xDB066BBA59B7D1EC(iParam0, iVar2 + 1))
					{
						unk_0xD69CBD64600FE923(iParam0, iVar2 + 1, 0);
					}
				}
				else if (unk_0xDB066BBA59B7D1EC(iParam0, iVar2 + 1))
				{
					unk_0xD69CBD64600FE923(iParam0, iVar2 + 1, 1);
				}
				iVar2++;
			}
		}
		if (unk_0xE924C2C283992918(uParam1->f_66))
		{
			if (!unk_0xDCC86F723E82125E(uParam1->f_77, 23))
			{
				if (unk_0xDCC86F723E82125E(uParam1->f_77, 22))
				{
					unk_0xAD20BE8460150C41(iParam0, 2);
				}
				else
				{
					unk_0xAD20BE8460150C41(iParam0, 3);
				}
			}
			else
			{
				unk_0xAD20BE8460150C41(iParam0, 4);
			}
		}
		if (unk_0xDCC86F723E82125E(uParam1->f_77, 27))
		{
			unk_0x00846EFB0166E192(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0x00846EFB0166E192(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_77(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x5D42322C7DB888D0(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x35C1534E81F87E96(*iParam0) == 0)
	{
		return 0;
	}
	unk_0x514497391E20233A(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			unk_0x866232B662B233F8(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (unk_0x342B167253E636DE(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x27B2F3A03C7EA235(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0xA05B0407D11A92AD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0xA05B0407D11A92AD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0xA05B0407D11A92AD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_80(unk_0x6D5BB810CC209E15(*iParam0), 1) && unk_0x342B167253E636DE(*iParam0, 24) != func_79(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0xA05B0407D11A92AD(*iParam0, 24, func_79(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	if (func_78(*iParam0))
	{
		unk_0x8AFC38C51DD8090D(*iParam0, 1);
		unk_0x0CE9795408B4B974(*iParam0, 1);
	}
	return 1;
}

int func_78(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0x95CCECA3948CFE7B(iParam0) && unk_0x5D42322C7DB888D0(iParam0, 0)) && unk_0x35C1534E81F87E96(iParam0) > 0)
	{
		unk_0x514497391E20233A(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x342B167253E636DE(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0x2089F9858CC119AB(iParam0, iVar1, unk_0x342B167253E636DE(iParam0, iVar1)), 16);
				iVar2 = unk_0x7CBED6EFED40E7EB(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x7CBED6EFED40E7EB("MNU_CAGE") || iVar2 == unk_0x7CBED6EFED40E7EB("SABRE_CAG"))
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

int func_79(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0x95CCECA3948CFE7B(iParam0) && unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		switch (unk_0x6D5BB810CC209E15(iParam0))
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
		iVar0 = unk_0x5A17E198896CB6A0(iParam0, 38);
		iVar1 = unk_0x5A17E198896CB6A0(iParam0, 24);
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

int func_80(int iParam0, int iParam1)
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
			if (!Global_262145.f_11357)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_11358)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_11356)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_11359)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_11361)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_11360)
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
	}
	return 0;
}

void func_81(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x35C1534E81F87E96(iParam0) > 0)
	{
		unk_0x514497391E20233A(iParam0, 0);
		iVar0 = unk_0x342B167253E636DE(iParam0, 24);
		iVar1 = unk_0xCABE66358519B3C4(iParam0, 24);
		unk_0x158DC5D73A3B4A62(iParam0, uParam1);
		if (iVar0 == -1)
		{
			unk_0x27B2F3A03C7EA235(iParam0, 24);
		}
		else
		{
			unk_0xA05B0407D11A92AD(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_82()
{
	return unk_0x9F37711843A20114(joaat("mpindependence"));
}

int func_83(int iParam0)
{
	var uVar0;
	
	if (unk_0x95CCECA3948CFE7B(iParam0))
	{
		if (unk_0x5D42322C7DB888D0(iParam0, 0))
		{
			if (unk_0x9F7DDFEF511FDBD8("MPBitset", 3))
			{
				if (unk_0x3D32B80EFC48A92D(iParam0, "MPBitset"))
				{
					uVar0 = unk_0xFE76479AD91F5A0A(iParam0, "MPBitset");
				}
				return unk_0xDCC86F723E82125E(uVar0, 4);
			}
		}
	}
	return 0;
}

void func_84(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_67(&(Global_68186.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0x4F982ED5336EA899(Param0, Global_68186.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_63(iVar0);
			}
		}
		iVar0++;
	}
}

int func_85(var uParam0)
{
	if (func_87(uParam0))
	{
		if (unk_0x0845149A26DABBA5(uParam0->f_12.f_66))
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

bool func_86(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_87(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_46(uParam0->f_12.f_66, 0))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_72(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_88()
{
	return func_85(&(Global_92918.f_2311));
}

void func_89()
{
	func_90(&(Global_92918.f_2311));
}

void func_90(var uParam0)
{
	if (func_87(uParam0))
	{
		unk_0x7567CEA8E6B5340B(uParam0->f_12.f_66);
	}
}

int func_91(struct<3> Param0, int iParam3)
{
	return func_92(Global_92918.f_2311.f_12.f_66, Param0, iParam3);
}

int func_92(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam4 == 1)
	{
		Param1 = { func_93() };
	}
	unk_0xA8349C905E4A8DE7(iParam0, &Var0, &Var3);
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

Vector3 func_93()
{
	return 2.55f, 5.665f, 2.55f;
}

int func_94()
{
	return func_87(&(Global_92918.f_2311));
}

void func_95()
{
	unk_0x7567CEA8E6B5340B(joaat("armytrailer2"));
	unk_0x7567CEA8E6B5340B(joaat("packer"));
	unk_0x7567CEA8E6B5340B(joaat("s_m_y_construct_01"));
	unk_0x7567CEA8E6B5340B(joaat("s_m_m_security_01"));
	unk_0x7567CEA8E6B5340B(joaat("bison2"));
	while ((((!unk_0x0845149A26DABBA5(joaat("armytrailer2")) || !unk_0x0845149A26DABBA5(joaat("packer"))) || !unk_0x0845149A26DABBA5(joaat("s_m_y_construct_01"))) || !unk_0x0845149A26DABBA5(joaat("s_m_m_security_01"))) || !unk_0x0845149A26DABBA5(joaat("bison2")))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x95CCECA3948CFE7B(iLocal_32))
	{
		if (unk_0x95CCECA3948CFE7B(Global_87936[1]))
		{
			unk_0xFD816D0E738EB817(Global_87936[1], 1, 1);
			iLocal_32 = Global_87936[1];
			unk_0x3F6DAED48C8A6943(iLocal_32);
		}
		else
		{
			iLocal_32 = unk_0xD53B4DCC7B2C8551(joaat("armytrailer2"), 919.303f, -1553.88f, 29.7789f, 167.1917f, 1, 1);
			unk_0x3F6DAED48C8A6943(iLocal_32);
		}
	}
	if (!unk_0x95CCECA3948CFE7B(iLocal_33))
	{
		if (unk_0x95CCECA3948CFE7B(Global_87936[2]))
		{
			unk_0xFD816D0E738EB817(Global_87936[2], 1, 1);
			iLocal_33 = Global_87936[2];
			unk_0x0CE9795408B4B974(iLocal_33, 1);
			unk_0x0782F0CAEA719452(iLocal_33, 7);
			func_98(iLocal_33, -1);
			func_97(iLocal_33, -1);
		}
		else
		{
			iLocal_33 = unk_0xD53B4DCC7B2C8551(joaat("packer"), 919.303f, -1553.88f, 29.7789f, 167.1917f, 1, 1);
			unk_0x0CE9795408B4B974(iLocal_33, 1);
			unk_0x0782F0CAEA719452(iLocal_33, 7);
			func_98(iLocal_33, -1);
			func_97(iLocal_33, -1);
		}
	}
	unk_0x042BE0D369784567(iLocal_33, iLocal_32, 0.5f);
	unk_0x4BBD72565A0AF033(joaat("armytrailer2"));
	unk_0x4BBD72565A0AF033(joaat("packer"));
	unk_0x4BBD72565A0AF033(joaat("bison2"));
	if (!unk_0x95CCECA3948CFE7B(iLocal_35[0]))
	{
		if (unk_0x95CCECA3948CFE7B(Global_87936.f_9[0]))
		{
			unk_0xFD816D0E738EB817(Global_87936.f_9[0], 1, 1);
			iLocal_35[0] = Global_87936.f_9[0];
			unk_0xCBD60E398042F554(iLocal_35[0], iLocal_302);
			func_96(iLocal_35[0], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0xAAD662D7E0D59F4C(iLocal_35[0], 1);
		}
		else
		{
			iLocal_35[0] = unk_0x71DD988C1B903F5D(26, joaat("s_m_y_construct_01"), 912.34f, -1543.297f, 29.6469f, 16.169f, 1, 1);
			unk_0xCBD60E398042F554(iLocal_35[0], iLocal_302);
			if (unk_0xAD158329EB26D8F4(912.3f, -1542.6f, 30.4f, 3f, 0))
			{
				unk_0x70D845CB97788674(iLocal_35[0], 912.3f, -1542.6f, 30.4f, 5f, 0);
			}
			unk_0xAAD662D7E0D59F4C(iLocal_35[0], 1);
			func_96(iLocal_35[0], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
		}
	}
	if (!unk_0x95CCECA3948CFE7B(iLocal_35[1]))
	{
		if (unk_0x95CCECA3948CFE7B(Global_87936.f_9[1]))
		{
			unk_0xFD816D0E738EB817(Global_87936.f_9[1], 1, 1);
			iLocal_35[1] = Global_87936.f_9[1];
			unk_0xCBD60E398042F554(iLocal_35[1], iLocal_302);
			func_96(iLocal_35[1], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0xAAD662D7E0D59F4C(iLocal_35[1], 1);
		}
		else
		{
			iLocal_35[1] = unk_0x71DD988C1B903F5D(26, joaat("s_m_y_construct_01"), 917.5028f, -1517.401f, 29.9673f, 158.5738f, 1, 1);
			unk_0xCBD60E398042F554(iLocal_35[1], iLocal_302);
			if (unk_0xAD158329EB26D8F4(917.5028f, -1517.401f, 29.9673f, 3f, 0))
			{
				unk_0x70D845CB97788674(iLocal_35[1], 917.5028f, -1517.401f, 29.9673f, 5f, 0);
			}
			func_96(iLocal_35[1], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0xAAD662D7E0D59F4C(iLocal_35[1], 1);
		}
	}
	if (!unk_0x95CCECA3948CFE7B(iLocal_35[2]))
	{
		if (unk_0x95CCECA3948CFE7B(Global_87936.f_9[2]))
		{
			unk_0xFD816D0E738EB817(Global_87936.f_9[2], 1, 1);
			iLocal_35[2] = Global_87936.f_9[2];
			unk_0xCBD60E398042F554(iLocal_35[2], iLocal_302);
			func_96(iLocal_35[2], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0xAAD662D7E0D59F4C(iLocal_35[2], 1);
		}
		else
		{
			iLocal_35[2] = unk_0x71DD988C1B903F5D(26, joaat("s_m_y_construct_01"), 869.6423f, -1541.423f, 29.2516f, 346.9848f, 1, 1);
			unk_0xCBD60E398042F554(iLocal_35[2], iLocal_302);
			if (unk_0xAD158329EB26D8F4(869.6423f, -1541.423f, 29.2516f, 3f, 0))
			{
				unk_0x70D845CB97788674(iLocal_35[2], 869.6423f, -1541.423f, 29.2516f, 5f, 0);
			}
			func_96(iLocal_35[2], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0xAAD662D7E0D59F4C(iLocal_35[2], 1);
		}
	}
	if (!unk_0x95CCECA3948CFE7B(iLocal_35[3]))
	{
		if (unk_0x95CCECA3948CFE7B(Global_87936.f_9[3]))
		{
			unk_0xFD816D0E738EB817(Global_87936.f_9[3], 1, 1);
			iLocal_35[3] = Global_87936.f_9[3];
			unk_0xCBD60E398042F554(iLocal_35[3], iLocal_302);
			func_96(iLocal_35[3], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0xAAD662D7E0D59F4C(iLocal_35[3], 1);
		}
		else
		{
			iLocal_35[3] = unk_0x71DD988C1B903F5D(26, joaat("s_m_y_construct_01"), 884.3046f, -1573.188f, 29.8247f, 182.9722f, 1, 1);
			unk_0xCBD60E398042F554(iLocal_35[3], iLocal_302);
			if (unk_0xAD158329EB26D8F4(884.3046f, -1573.188f, 29.8247f, 3f, 0))
			{
				unk_0x70D845CB97788674(iLocal_35[3], 884.3046f, -1573.188f, 29.8247f, 5f, 0);
			}
			func_96(iLocal_35[3], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0xAAD662D7E0D59F4C(iLocal_35[3], 1);
		}
	}
	if (!unk_0x95CCECA3948CFE7B(iLocal_35[4]))
	{
		if (unk_0x95CCECA3948CFE7B(Global_87936.f_9[4]))
		{
			unk_0xFD816D0E738EB817(Global_87936.f_9[4], 1, 1);
			iLocal_35[4] = Global_87936.f_9[4];
			unk_0xCBD60E398042F554(iLocal_35[4], iLocal_302);
			func_96(iLocal_35[4], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0xAAD662D7E0D59F4C(iLocal_35[4], 1);
		}
		else
		{
			iLocal_35[4] = unk_0x71DD988C1B903F5D(26, joaat("s_m_y_construct_01"), 903.8805f, -1575.02f, 29.8327f, 308.1952f, 1, 1);
			unk_0xCBD60E398042F554(iLocal_35[4], iLocal_302);
			if (unk_0xAD158329EB26D8F4(903.8805f, -1575.02f, 29.8327f, 3f, 0))
			{
				unk_0x70D845CB97788674(iLocal_35[4], 903.8805f, -1575.02f, 29.8327f, 5f, 0);
			}
			func_96(iLocal_35[4], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0xAAD662D7E0D59F4C(iLocal_35[4], 1);
		}
	}
	if (!unk_0x95CCECA3948CFE7B(iLocal_35[5]))
	{
		if (unk_0x95CCECA3948CFE7B(Global_87936.f_9[5]))
		{
			unk_0xFD816D0E738EB817(Global_87936.f_9[5], 1, 1);
			iLocal_35[5] = Global_87936.f_9[5];
			unk_0xCBD60E398042F554(iLocal_35[5], iLocal_302);
			func_96(iLocal_35[5], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0xAAD662D7E0D59F4C(iLocal_35[5], 1);
		}
		else
		{
			iLocal_35[5] = unk_0x71DD988C1B903F5D(26, joaat("s_m_y_construct_01"), 906.2186f, -1575.108f, 29.8125f, 55.9906f, 1, 1);
			unk_0xCBD60E398042F554(iLocal_35[5], iLocal_302);
			if (unk_0xAD158329EB26D8F4(906.2186f, -1575.108f, 29.8125f, 3f, 0))
			{
				unk_0x70D845CB97788674(iLocal_35[5], 906.2186f, -1575.108f, 29.8125f, 5f, 0);
			}
			func_96(iLocal_35[5], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0xAAD662D7E0D59F4C(iLocal_35[5], 1);
		}
	}
	if (!unk_0x95CCECA3948CFE7B(iLocal_35[6]))
	{
		if (unk_0x95CCECA3948CFE7B(Global_87936.f_9[8]))
		{
			unk_0xFD816D0E738EB817(Global_87936.f_9[8], 1, 1);
			iLocal_35[6] = Global_87936.f_9[8];
			unk_0xCBD60E398042F554(iLocal_35[6], iLocal_302);
			func_96(iLocal_35[6], 20f, 5f, 120f, -45f, 45f);
			unk_0xAAD662D7E0D59F4C(iLocal_35[6], 1);
		}
		else
		{
			iLocal_35[6] = unk_0x71DD988C1B903F5D(26, joaat("s_m_y_construct_01"), 889.285f, -1561.485f, 29.6539f, 22.2456f, 1, 1);
			unk_0xCBD60E398042F554(iLocal_35[6], iLocal_302);
			if (unk_0xAD158329EB26D8F4(889.285f, -1561.485f, 29.6539f, 3f, 0))
			{
				unk_0x70D845CB97788674(iLocal_35[6], 889.285f, -1561.485f, 29.6539f, 5f, 0);
			}
			func_96(iLocal_35[6], 20f, 5f, 120f, -45f, 45f);
			unk_0xAAD662D7E0D59F4C(iLocal_35[6], 1);
		}
	}
	if (!unk_0x95CCECA3948CFE7B(iLocal_43[0]))
	{
		if (unk_0x95CCECA3948CFE7B(Global_87936.f_9[6]))
		{
			unk_0xFD816D0E738EB817(Global_87936.f_9[6], 1, 1);
			iLocal_43[0] = Global_87936.f_9[6];
			unk_0xCBD60E398042F554(iLocal_43[0], iLocal_303);
			func_96(iLocal_43[0], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0xAAD662D7E0D59F4C(iLocal_43[0], 1);
			unk_0x640290651A86938B(iLocal_43[0], joaat("weapon_pistol"), 100, 0, 0);
			unk_0xB7F5BF6BE1CE7627(iLocal_43[0], "S_M_M_GENERICSECURITY_01_LATINO_MINI_01");
		}
		else
		{
			iLocal_43[0] = unk_0x71DD988C1B903F5D(26, joaat("s_m_m_security_01"), 863.1551f, -1564.572f, 29.3231f, 130.7946f, 1, 1);
			unk_0xCBD60E398042F554(iLocal_43[0], iLocal_303);
			func_96(iLocal_43[0], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0xAAD662D7E0D59F4C(iLocal_43[0], 1);
			unk_0x640290651A86938B(iLocal_43[0], joaat("weapon_pistol"), 100, 0, 0);
			unk_0xB7F5BF6BE1CE7627(iLocal_43[0], "S_M_M_GENERICSECURITY_01_LATINO_MINI_01");
		}
	}
	if (!unk_0x95CCECA3948CFE7B(iLocal_43[1]))
	{
		if (unk_0x95CCECA3948CFE7B(Global_87936.f_9[7]))
		{
			unk_0xFD816D0E738EB817(Global_87936.f_9[7], 1, 1);
			iLocal_43[1] = Global_87936.f_9[7];
			unk_0xCBD60E398042F554(iLocal_43[1], iLocal_303);
			func_96(iLocal_43[1], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0xAAD662D7E0D59F4C(iLocal_43[1], 1);
			unk_0x640290651A86938B(iLocal_43[1], joaat("weapon_pistol"), 100, 0, 0);
			unk_0xB7F5BF6BE1CE7627(iLocal_43[1], "S_M_M_GENERICSECURITY_01_LATINO_MINI_02");
		}
		else
		{
			iLocal_43[1] = unk_0x71DD988C1B903F5D(26, joaat("s_m_m_security_01"), 940.2881f, -1573.877f, 29.3866f, 269.1856f, 1, 1);
			unk_0xCBD60E398042F554(iLocal_43[1], iLocal_303);
			func_96(iLocal_43[1], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0xAAD662D7E0D59F4C(iLocal_43[1], 1);
			unk_0x640290651A86938B(iLocal_43[1], joaat("weapon_pistol"), 100, 0, 0);
			unk_0xB7F5BF6BE1CE7627(iLocal_43[1], "S_M_M_GENERICSECURITY_01_LATINO_MINI_02");
		}
	}
	unk_0x4BBD72565A0AF033(joaat("s_m_y_construct_01"));
	unk_0x4BBD72565A0AF033(joaat("s_m_m_security_01"));
}

void func_96(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5)
{
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
	{
		unk_0x0893EE04C269FFD2(iParam0, fParam1);
		unk_0x592172E10E3BDD6A(iParam0, iParam2);
		unk_0x49E59201877239AF(iParam0, (fParam3 / 2f));
		unk_0xE1B7F41F33EBF9A2(iParam0, iParam4);
		unk_0x62EB4E2296BF745E(iParam0, iParam5);
	}
}

void func_97(int iParam0, int iParam1)
{
	Global_55670 = iParam0;
	Global_55671 = iParam1;
}

void func_98(int iParam0, int iParam1)
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

void func_99()
{
	iLocal_63 = 0;
	while (iLocal_63 <= 6)
	{
		if (unk_0x95CCECA3948CFE7B(iLocal_35[iLocal_63]) && unk_0x1F59F772AA90087D(iLocal_35[iLocal_63], 1))
		{
			unk_0x26B3B761603F5232(&(iLocal_35[iLocal_63]));
		}
		iLocal_63++;
	}
	if (unk_0x95CCECA3948CFE7B(iLocal_43[0]) && unk_0x1F59F772AA90087D(iLocal_43[0], 1))
	{
		unk_0x26B3B761603F5232(&(iLocal_43[0]));
	}
	if (unk_0x95CCECA3948CFE7B(iLocal_43[1]) && unk_0x1F59F772AA90087D(iLocal_43[1], 1))
	{
		unk_0x26B3B761603F5232(&(iLocal_43[1]));
	}
	if (unk_0x95CCECA3948CFE7B(iLocal_46) && unk_0x1F59F772AA90087D(iLocal_46, 1))
	{
		unk_0x26B3B761603F5232(&iLocal_46);
	}
	if (unk_0x95CCECA3948CFE7B(iLocal_47) && unk_0x1F59F772AA90087D(iLocal_47, 1))
	{
		unk_0x26B3B761603F5232(&iLocal_47);
	}
	if (unk_0x95CCECA3948CFE7B(iLocal_48) && unk_0x1F59F772AA90087D(iLocal_48, 1))
	{
		unk_0x26B3B761603F5232(&iLocal_48);
	}
	if (unk_0x95CCECA3948CFE7B(iLocal_49) && unk_0x1F59F772AA90087D(iLocal_49, 1))
	{
		unk_0x26B3B761603F5232(&iLocal_49);
	}
	if (!func_30())
	{
		unk_0xC76B5C68AB6DC7DF(unk_0xC8B93D94F8954288(), 519.1906f, -2980.994f, 5.0443f, 1, 0, 0, 1);
		unk_0x765E3FA65D011F03(unk_0xC8B93D94F8954288(), 270.1911f);
	}
	if (unk_0x95CCECA3948CFE7B(iLocal_32) && unk_0x1F59F772AA90087D(iLocal_32, 1))
	{
		unk_0x95F5F15D238A7F1C(&iLocal_32);
	}
	if (unk_0x95CCECA3948CFE7B(Global_87936[3]))
	{
		unk_0xFD816D0E738EB817(Global_87936[3], 1, 0);
		unk_0x95F5F15D238A7F1C(&(Global_87936[3]));
	}
	if (unk_0x95CCECA3948CFE7B(iLocal_33) && unk_0x1F59F772AA90087D(iLocal_33, 1))
	{
		unk_0x95F5F15D238A7F1C(&iLocal_33);
	}
	unk_0x3ECF1E41E6ED71D8("cellphone@str");
	unk_0x3ECF1E41E6ED71D8("misscarsteal4@director_grip");
	unk_0x6EFCF0B905A37E0F("FHPRB_START");
	unk_0x6EFCF0B905A37E0F("FHPRB_TRUCK");
	unk_0x6EFCF0B905A37E0F("FHPRB_COPS");
	unk_0x6EFCF0B905A37E0F("FHPRB_LOST");
	unk_0x6EFCF0B905A37E0F("FHPRB_STOP");
	unk_0x98371F41D43CDFA9(889.5f, -1553.8f, 30f, 150f, 1, 0, 0, 0);
}

void func_100()
{
	if (unk_0x6B4865E08E90ACC5(uLocal_58))
	{
		unk_0x5356E82C1E5E0C44(&uLocal_58);
	}
	if (unk_0x6B4865E08E90ACC5(uLocal_59))
	{
		unk_0x5356E82C1E5E0C44(&uLocal_59);
	}
	if (unk_0x6B4865E08E90ACC5(uLocal_60))
	{
		unk_0x5356E82C1E5E0C44(&uLocal_60);
	}
	if (unk_0x6B4865E08E90ACC5(uLocal_61))
	{
		unk_0x5356E82C1E5E0C44(&uLocal_61);
	}
}

void func_101()
{
	Global_14578 = 0;
	func_102();
}

void func_102()
{
	unk_0xE9A2B98CC2F095D6();
	Global_16723 = 0;
	if ((unk_0x44E93B894936152F() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		unk_0xB518E9C8553B1D2B(0);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (unk_0x2964A62922189B93())
	{
		unk_0xB518E9C8553B1D2B(1);
		Global_15712 = 6;
		return;
	}
}

void func_103()
{
	func_120();
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
		unk_0x60B57BC5E51D2074(5);
		unk_0x3ECF1E41E6ED71D8("cellphone@str");
		unk_0x3ECF1E41E6ED71D8("misscarsteal4@director_grip");
		if (!unk_0xB66DD474AA9E764E())
		{
			unk_0xBB93D72F9F571F61(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1));
			unk_0x31E6EB2040318451(800);
		}
		unk_0xFD62177C7242216E(1f);
		unk_0xD810132681A9B83C(10f, 5f, 4);
		iLocal_396 = 1;
		iLocal_62 = 1;
	}
	if (iLocal_62 == 1)
	{
		func_119(&uLocal_137, 3, 0, "LESTER", 0, 1);
		if (func_14() == 0)
		{
			func_119(&uLocal_137, 0, unk_0xC8B93D94F8954288(), "MICHAEL", 0, 1);
		}
		if (func_14() == 1)
		{
			func_119(&uLocal_137, 1, unk_0xC8B93D94F8954288(), "FRANKLIN", 0, 1);
		}
		if (func_14() == 2)
		{
			func_119(&uLocal_137, 2, unk_0xC8B93D94F8954288(), "TREVOR", 0, 1);
		}
		iLocal_62 = 2;
	}
	if (iLocal_62 == 2)
	{
		if (unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) == 0)
		{
			if (func_14() == 0)
			{
				if (func_109(&uLocal_137, 12, "FHPBAUD", "FHPB_CHAT1", 7, 1, 0, 0, 0))
				{
					unk_0xD810132681A9B83C(5f, 5f, 4);
					unk_0xC1B1E9A034A63A62(0);
					iLocal_62 = 3;
				}
			}
			if (func_14() == 1)
			{
				if (func_109(&uLocal_137, 12, "FHPBAUD", "FHPB_CHAT3", 7, 1, 0, 0, 0))
				{
					unk_0xD810132681A9B83C(5f, 5f, 4);
					unk_0xC1B1E9A034A63A62(0);
					iLocal_62 = 3;
				}
			}
			if (func_14() == 2)
			{
				if (func_109(&uLocal_137, 12, "FHPBAUD", "FHPB_CHAT2", 7, 1, 0, 0, 0))
				{
					unk_0xD810132681A9B83C(5f, 5f, 4);
					unk_0xC1B1E9A034A63A62(0);
					iLocal_62 = 3;
				}
			}
		}
	}
	if (iLocal_62 == 3)
	{
		if (!unk_0x6B4865E08E90ACC5(uLocal_59))
		{
			if (!func_108())
			{
				if (unk_0x83666F9FB8FEBD4B() > 10500)
				{
					uLocal_59 = func_106(Local_116, 1);
				}
			}
		}
		if (func_108())
		{
			iLocal_62 = 4;
		}
	}
	if (iLocal_62 == 4)
	{
		if (unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) == 0)
		{
			if (unk_0x5D42322C7DB888D0(iLocal_33, 0))
			{
				if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iLocal_33, 0))
				{
					if (unk_0xAFBEE714E0240ECC(iLocal_33))
					{
						if (unk_0xA0C23498D8E0BB93(unk_0xC8B93D94F8954288(), Local_116, 4f, 4f, 2f, 1, 1, 2))
						{
							if (func_105(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), 4f, 3, 0.5f, 0, 1, 0))
							{
								unk_0x233432976E597324("FHPRB_STOP");
								if (unk_0x6B4865E08E90ACC5(uLocal_59))
								{
									unk_0x5356E82C1E5E0C44(&uLocal_59);
								}
								unk_0xD810132681A9B83C(5f, 5f, 4);
								func_104(0, -1);
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

void func_104(bool bParam0, int iParam1)
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

int func_105(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x2BE3C7FA4FCCA784(0, 71, 1);
	unk_0x2BE3C7FA4FCCA784(0, 72, 1);
	unk_0x2BE3C7FA4FCCA784(0, 76, 1);
	unk_0x2BE3C7FA4FCCA784(0, 73, 1);
	unk_0x2BE3C7FA4FCCA784(0, 59, 1);
	unk_0x2BE3C7FA4FCCA784(0, 60, 1);
	if (bParam5)
	{
		unk_0x2BE3C7FA4FCCA784(0, 75, 1);
	}
	unk_0x2BE3C7FA4FCCA784(0, 80, 1);
	if (!bParam6)
	{
		unk_0x2BE3C7FA4FCCA784(0, 69, 1);
		unk_0x2BE3C7FA4FCCA784(0, 70, 1);
		unk_0x2BE3C7FA4FCCA784(0, 68, 1);
	}
	unk_0x2BE3C7FA4FCCA784(0, 74, 1);
	unk_0x2BE3C7FA4FCCA784(0, 86, 1);
	unk_0x2BE3C7FA4FCCA784(0, 81, 1);
	unk_0x2BE3C7FA4FCCA784(0, 82, 1);
	unk_0x2BE3C7FA4FCCA784(0, 138, 1);
	unk_0x2BE3C7FA4FCCA784(0, 136, 1);
	unk_0x2BE3C7FA4FCCA784(0, 114, 1);
	unk_0x2BE3C7FA4FCCA784(0, 107, 1);
	unk_0x2BE3C7FA4FCCA784(0, 110, 1);
	unk_0x2BE3C7FA4FCCA784(0, 89, 1);
	unk_0x2BE3C7FA4FCCA784(0, 89, 1);
	unk_0x2BE3C7FA4FCCA784(0, 87, 1);
	unk_0x2BE3C7FA4FCCA784(0, 88, 1);
	unk_0x2BE3C7FA4FCCA784(0, 113, 1);
	unk_0x2BE3C7FA4FCCA784(0, 115, 1);
	unk_0x2BE3C7FA4FCCA784(0, 116, 1);
	unk_0x2BE3C7FA4FCCA784(0, 117, 1);
	unk_0x2BE3C7FA4FCCA784(0, 118, 1);
	unk_0x2BE3C7FA4FCCA784(0, 119, 1);
	unk_0x2BE3C7FA4FCCA784(0, 131, 1);
	unk_0x2BE3C7FA4FCCA784(0, 132, 1);
	unk_0x2BE3C7FA4FCCA784(0, 123, 1);
	unk_0x2BE3C7FA4FCCA784(0, 126, 1);
	unk_0x2BE3C7FA4FCCA784(0, 129, 1);
	unk_0x2BE3C7FA4FCCA784(0, 130, 1);
	unk_0x2BE3C7FA4FCCA784(0, 133, 1);
	unk_0x2BE3C7FA4FCCA784(0, 134, 1);
	unk_0xFDE2F5F10CE86C82();
	if ((unk_0x693EBB4F13506457() - Global_29) > 500)
	{
		unk_0x5C384485B80ABDBC(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x693EBB4F13506457();
	if (!unk_0xB6900B8CB0ABBD2B(iParam0))
	{
		if (unk_0xA3C5926D6E5619AE(unk_0x9BA9222C7124CA04(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

var func_106(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0xDF811B9EAB020A4D(Param0);
	unk_0x3734DA1F207E7166(uVar0, func_107(unk_0xBBAE3E0C60A8AD4B(), 1f, 1f));
	unk_0x706ABF1139F36482(uVar0, iParam3);
	return uVar0;
}

float func_107(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_108()
{
	if (Global_15712 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_109(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_118(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
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
	return func_110(sParam3, iParam4, bParam8);
}

int func_110(char* sParam0, int iParam1, bool bParam2)
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
					unk_0xB518E9C8553B1D2B(0);
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
					func_102();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x2964A62922189B93())
		{
			return 0;
		}
		if (func_117(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_116();
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
			unk_0x77621132305B133B(&Global_2283, 20);
			unk_0x77621132305B133B(&Global_2284, 17);
			unk_0x77621132305B133B(&Global_2285, 0);
			if (bParam2)
			{
				func_115();
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
			if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
			{
				if (unk_0x7E515EEFC038658D(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (func_114())
				{
					return 0;
				}
				if (unk_0x50CB4D478D09ED89(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (unk_0x5E161494BC10595F(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (unk_0x68A7CE67BDF5E83C(unk_0xC8B93D94F8954288(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69317)
				{
					if (unk_0xEE473B4B88D6F842(unk_0xC8B93D94F8954288()))
					{
						return 0;
					}
					if (unk_0x629B1FD22BE568E4(unk_0xA34E7C2A5118D638()))
					{
						return 0;
					}
					if (unk_0x3A2AAB26205C2C37(unk_0xC8B93D94F8954288()))
					{
						return 0;
					}
					if (unk_0x4887094DDBD415E7(unk_0xA34E7C2A5118D638()))
					{
						return 0;
					}
				}
			}
			if (func_113())
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
				if (unk_0xDCC86F723E82125E(Global_2283, 9))
				{
					return 0;
				}
			}
			func_112();
			Global_15722 = bParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_111();
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
		func_102();
	}
	return 0;
}

void func_111()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xB518E9C8553B1D2B(0);
	Global_15712 = 1;
}

void func_112()
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
	unk_0x77621132305B133B(&Global_2284, 16);
}

int func_113()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_114()
{
	int iVar0;
	int iVar1;
	
	if (Global_69317)
	{
		iVar0 = 0;
		unk_0xA51F11E1DC7307BB(unk_0xC8B93D94F8954288(), &iVar1, 1);
		if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xA4860063B4E6B963() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		if (unk_0x0917C1C640BB7484(unk_0xC8B93D94F8954288(), 78, 1))
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

void func_115()
{
	if (func_16(14))
	{
		if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
		{
			if (unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()) == Global_100976.f_32519[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()) == Global_100976.f_32519[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()) == Global_100976.f_32519[2 /*29*/])
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

void func_116()
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

bool func_117(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338611.f_203[iParam1];
			}
			break;
	}
	return unk_0xDCC86F723E82125E(Global_1338611.f_949, iParam0);
}

void func_118(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_119(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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
		if (!unk_0x2DC9BA2299B45EA6(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x8EB9A60FB4C37A34(iParam2, 0);
			}
			else
			{
				unk_0x8EB9A60FB4C37A34(iParam2, 1);
			}
		}
		if (!unk_0x2DC9BA2299B45EA6(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x7EAD9630176BD15E(iParam2, 0);
			}
			else
			{
				unk_0x7EAD9630176BD15E(iParam2, 1);
			}
		}
	}
}

void func_120()
{
	if (unk_0x5D42322C7DB888D0(iLocal_33, 0))
	{
		if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iLocal_33, 0))
		{
			if (unk_0xAFBEE714E0240ECC(iLocal_33))
			{
				if (func_125("HELP_1"))
				{
					unk_0x9F4AA6F234E8A860(1);
				}
				if (unk_0x6B4865E08E90ACC5(uLocal_58))
				{
					unk_0x5356E82C1E5E0C44(&uLocal_58);
				}
				if (unk_0x6B4865E08E90ACC5(uLocal_61))
				{
					if (iLocal_395 == 1)
					{
						if (unk_0x693EBB4F13506457() < iLocal_109 + 7500)
						{
							unk_0x7846F09C04C34C46();
						}
					}
					unk_0x5356E82C1E5E0C44(&uLocal_61);
				}
				if (iLocal_28 == 4)
				{
					if (unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) == 0)
					{
						if (iLocal_469 == 0)
						{
							unk_0x6EFCF0B905A37E0F("FHPRB_COPS");
							unk_0x233432976E597324("FHPRB_LOST");
							iLocal_469 = 1;
						}
						if (iLocal_314 == 1)
						{
							if (unk_0x693EBB4F13506457() < iLocal_110 + 7500)
							{
								unk_0x7846F09C04C34C46();
							}
							iLocal_314 = 0;
						}
						if (iLocal_62 > 3)
						{
							if (!unk_0x6B4865E08E90ACC5(uLocal_59))
							{
								uLocal_59 = func_106(Local_116, 1);
							}
							if (iLocal_305 == 0)
							{
								if (!unk_0xA3858ADDDBC3CB71())
								{
									func_124("GOD_2", 7500, 1);
									iLocal_305 = 1;
								}
							}
						}
					}
					else
					{
						if (unk_0x6B4865E08E90ACC5(uLocal_59))
						{
							unk_0x5356E82C1E5E0C44(&uLocal_59);
						}
						if (iLocal_314 == 0)
						{
							unk_0x7846F09C04C34C46();
							func_124("GOD_4", 7500, -1);
							unk_0x233432976E597324("FHPRB_COPS");
							iLocal_110 = unk_0x693EBB4F13506457();
							iLocal_314 = 1;
							iLocal_469 = 0;
						}
					}
				}
			}
			else
			{
				if (unk_0x6B4865E08E90ACC5(uLocal_58))
				{
					unk_0x5356E82C1E5E0C44(&uLocal_58);
				}
				if (unk_0x6B4865E08E90ACC5(uLocal_59))
				{
					unk_0x5356E82C1E5E0C44(&uLocal_59);
				}
				if (unk_0x5D42322C7DB888D0(iLocal_32, 0))
				{
					if (!unk_0x6B4865E08E90ACC5(uLocal_61))
					{
						uLocal_61 = func_122(iLocal_32, 0, 0);
						unk_0xDDD65F4720293225(uLocal_61, 1);
						if (unk_0xA3858ADDDBC3CB71())
						{
							unk_0x7846F09C04C34C46();
						}
						if (iLocal_395 == 0)
						{
							func_124("GOD_6", 7500, -1);
							iLocal_109 = unk_0x693EBB4F13506457();
							iLocal_395 = 1;
						}
						if (!func_125("HELP_1"))
						{
							func_121("HELP_1");
						}
					}
				}
			}
		}
		else
		{
			if (unk_0x6B4865E08E90ACC5(uLocal_61))
			{
				unk_0x5356E82C1E5E0C44(&uLocal_61);
			}
			if (unk_0x6B4865E08E90ACC5(uLocal_59))
			{
				unk_0x5356E82C1E5E0C44(&uLocal_59);
			}
			if (unk_0x5D42322C7DB888D0(iLocal_33, 0))
			{
				if (!unk_0x6B4865E08E90ACC5(uLocal_58))
				{
					uLocal_58 = func_122(iLocal_33, 0, 0);
					unk_0xDDD65F4720293225(uLocal_58, 1);
				}
			}
			if (iLocal_315 == 0)
			{
				unk_0x7846F09C04C34C46();
				func_124("GOD_5", 7500, -1);
				iLocal_315 = 1;
			}
		}
	}
}

void func_121(char* sParam0)
{
	unk_0xF4A7F7324E8C92A2(sParam0);
	unk_0x31D76F87C39FB8DD(0, 1, 1, -1);
}

int func_122(int iParam0, bool bParam1, bool bParam2)
{
	return func_123(iParam0, !bParam1, bParam2);
}

int func_123(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x95CCECA3948CFE7B(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0x361E437CE4AD5532(iParam0);
	if (unk_0x18BDAFC0B20C2C9E(iParam0))
	{
		unk_0x3734DA1F207E7166(uVar0, func_107(unk_0xBBAE3E0C60A8AD4B(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xDDD65F4720293225(uVar0, bParam1);
		}
		else
		{
			unk_0x32546F91F646B246(uVar0, 2);
		}
	}
	else if (unk_0x96209AADF56E8FE8(iParam0))
	{
		unk_0x3734DA1F207E7166(uVar0, func_107(unk_0xBBAE3E0C60A8AD4B(), 0.7f, 0.7f));
		unk_0xDDD65F4720293225(uVar0, bParam1);
	}
	else if (unk_0x09C656419AB67926(iParam0))
	{
		unk_0x3734DA1F207E7166(uVar0, func_107(unk_0xBBAE3E0C60A8AD4B(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_124(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xBBB1F62EC5E3BBC6(sParam0);
	unk_0xEE90E717A80AA597(iParam1, 1);
}

bool func_125(char* sParam0)
{
	unk_0xD90D7D16FDE685B6(sParam0);
	return unk_0x699790DC9A5E5D9A(0);
}

void func_126()
{
	if (iLocal_62 > 1)
	{
		func_120();
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
		unk_0xC0E8B67A4385D37D("cellphone@str");
		unk_0xC0E8B67A4385D37D("misscarsteal4@director_grip");
		if (unk_0x5D42322C7DB888D0(iLocal_33, 0))
		{
			if (!unk_0x6B4865E08E90ACC5(uLocal_58))
			{
				uLocal_58 = func_122(iLocal_33, 0, 0);
				unk_0xDDD65F4720293225(uLocal_58, true);
			}
		}
		unk_0x60B57BC5E51D2074(0);
		if (unk_0xD5DFCA69ACAA20E3())
		{
			if (!func_30())
			{
				unk_0xBB93D72F9F571F61(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1));
			}
			if (unk_0x95CCECA3948CFE7B(iLocal_34))
			{
				func_27(iLocal_34, -1, 1);
				unk_0xEF84021B2AB5E334(&iLocal_34);
			}
			else
			{
				func_27(0, -1, 1);
			}
		}
		if (!unk_0xB66DD474AA9E764E())
		{
			unk_0x31E6EB2040318451(800);
		}
		unk_0x233432976E597324("FHPRB_START");
		unk_0x98371F41D43CDFA9(43.5f, -615.8f, 32.4f, 50f, 1, 0, 0, 0);
		iLocal_396 = 1;
		iLocal_62 = 1;
	}
	if (iLocal_62 == 1)
	{
		if (iLocal_465 == 0)
		{
			if (!unk_0xA3858ADDDBC3CB71())
			{
				unk_0xD810132681A9B83C(5f, 8f, 4);
				func_124("GOD_1", 7500, 1);
				iLocal_465 = 1;
			}
		}
		if (unk_0x5D42322C7DB888D0(iLocal_33, 0))
		{
			if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iLocal_33, 0))
			{
				unk_0x233432976E597324("FHPRB_TRUCK");
				if (unk_0x6B4865E08E90ACC5(uLocal_58))
				{
					unk_0x5356E82C1E5E0C44(&uLocal_58);
				}
				func_127(656, 0);
				unk_0xFD62177C7242216E(1f);
				iLocal_62 = 2;
			}
		}
	}
	if (iLocal_62 == 2)
	{
		if (unk_0x5D42322C7DB888D0(iLocal_33, 0))
		{
			if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iLocal_33, 0))
			{
				if (unk_0xAFBEE714E0240ECC(iLocal_33))
				{
					if (func_125("HELP_1"))
					{
						unk_0x9F4AA6F234E8A860(1);
					}
					if (unk_0x6B4865E08E90ACC5(uLocal_58))
					{
						unk_0x5356E82C1E5E0C44(&uLocal_58);
					}
					if (unk_0x6B4865E08E90ACC5(uLocal_61))
					{
						unk_0x5356E82C1E5E0C44(&uLocal_61);
					}
					if (unk_0x4F982ED5336EA899(Local_119, Local_132, 1) < 100f)
					{
						if (unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) == 0)
						{
							if (iLocal_316 == 1)
							{
								if (unk_0x693EBB4F13506457() < iLocal_110 + 7500)
								{
									unk_0x7846F09C04C34C46();
									iLocal_316 = 0;
								}
							}
							if (iLocal_417 == 0)
							{
								unk_0xD810132681A9B83C(5f, 8f, 4);
								func_124("GOD_7", 7500, -1);
								iLocal_417 = 1;
							}
						}
						else if (iLocal_316 == 0)
						{
							unk_0xD810132681A9B83C(5f, 8f, 4);
							unk_0x6550E854B6D80CD9("SCRIPTED_SCANNER_REPORT_BS_PREP_B_01", 0f);
							iLocal_110 = unk_0x693EBB4F13506457();
							func_124("GOD_4", 7500, -1);
							iLocal_316 = 1;
						}
					}
					else if (unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) == 0)
					{
						iLocal_62 = 0;
						iLocal_28 = 4;
					}
				}
				else
				{
					if (unk_0x6B4865E08E90ACC5(uLocal_58))
					{
						unk_0x5356E82C1E5E0C44(&uLocal_58);
					}
					if (unk_0x5D42322C7DB888D0(iLocal_32, 0))
					{
						if (!unk_0x6B4865E08E90ACC5(uLocal_61))
						{
							uLocal_61 = func_122(iLocal_32, 0, 0);
							unk_0xDDD65F4720293225(uLocal_61, true);
							if (unk_0xA3858ADDDBC3CB71())
							{
								unk_0x7846F09C04C34C46();
							}
							if (iLocal_395 == 0)
							{
								func_124("GOD_6", 7500, -1);
								iLocal_395 = 1;
							}
							if (!func_125("HELP_1"))
							{
								func_121("HELP_1");
							}
						}
					}
				}
			}
			else
			{
				if (unk_0x6B4865E08E90ACC5(uLocal_61))
				{
					unk_0x5356E82C1E5E0C44(&uLocal_61);
				}
				if (unk_0x5D42322C7DB888D0(iLocal_33, 0))
				{
					if (!unk_0x6B4865E08E90ACC5(uLocal_58))
					{
						uLocal_58 = func_122(iLocal_33, 0, 0);
						unk_0xDDD65F4720293225(uLocal_58, true);
					}
				}
				if (iLocal_315 == 0)
				{
					unk_0x7846F09C04C34C46();
					func_124("GOD_5", 7500, -1);
					iLocal_315 = 1;
				}
			}
		}
	}
}

void func_127(int iParam0, bool bParam1)
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

void func_128()
{
	if (iLocal_62 == 0)
	{
		if (iLocal_304 == 1)
		{
			func_34();
			iLocal_304 = 0;
		}
		func_151();
		func_95();
		if (!unk_0xB66DD474AA9E764E())
		{
			unk_0xBB93D72F9F571F61(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1));
			unk_0x31E6EB2040318451(800);
		}
		if (unk_0x95CCECA3948CFE7B(Global_87936[3]))
		{
			if (unk_0x5D42322C7DB888D0(Global_87936[3], 0))
			{
				if (unk_0xAF40E7422A6D9D80(unk_0x6D5BB810CC209E15(Global_87936[3])))
				{
					unk_0xFD816D0E738EB817(Global_87936[3], 1, 1);
					func_130(1.0095f, -631.9655f, 34.7259f, 349.0681f, 0, 145);
				}
				if (((unk_0x1B477DDE9D088A91(unk_0x6D5BB810CC209E15(Global_87936[3])) || unk_0xE6CB12C10EE5D793(unk_0x6D5BB810CC209E15(Global_87936[3]))) || unk_0x7F43378ECD4F3CCD(unk_0x6D5BB810CC209E15(Global_87936[3]))) || unk_0x1344FF0C5A540CFA(unk_0x6D5BB810CC209E15(Global_87936[3])))
				{
					unk_0xFD816D0E738EB817(Global_87936[3], 1, 1);
					func_130(49.0052f, -599.5534f, 30.6299f, 158.5544f, 0, 145);
				}
			}
		}
		func_129(79);
		iLocal_396 = 1;
		iLocal_62 = 1;
	}
	if (iLocal_62 == 1)
	{
		iLocal_62 = 0;
		iLocal_28 = 3;
	}
}

void func_129(int iParam0)
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

void func_130(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	struct<3> Var0;
	var uVar3;
	
	if (unk_0x95CCECA3948CFE7B(Global_92918.f_4))
	{
		if (unk_0x5D42322C7DB888D0(Global_92918.f_4, 0))
		{
			if (func_150(24) != Global_92918.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_147(unk_0x44C17CCB85A88A1F(Global_92918.f_4, 1), iParam5, &Var0, &uVar3))
					{
						Param0 = { Var0 };
						fParam3 = uVar3;
					}
				}
				func_131(Global_92918.f_4, Param0, fParam3, 24, 0);
			}
		}
	}
}

void func_131(int iParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;
	
	if (unk_0x95CCECA3948CFE7B(iParam0) && unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0x95CCECA3948CFE7B(Global_68186.f_484[25]) && unk_0x5D42322C7DB888D0(Global_68186.f_484[25], 0))
			{
				if (Global_68186.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0xA298102257816428(iParam0) || unk_0x6D5BB810CC209E15(iParam0) == joaat("bus")) || unk_0x6D5BB810CC209E15(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_146(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_40(iParam0, &Var0);
		if (func_86(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0x44C17CCB85A88A1F(iParam0, 1) };
			uParam4 = unk_0x59DD203239FBDCAD(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0x7CBED6EFED40E7EB(unk_0xC4E68AF0B559FAC4()) != joaat("vehicle_gen_controller"))
			{
				Global_69174 = unk_0x7CBED6EFED40E7EB(unk_0xC4E68AF0B559FAC4());
			}
		}
		func_144(iParam5, &Var0, Param1, uParam4, func_57(iParam0));
		func_132(iParam5, iParam0, 0);
	}
}

void func_132(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_67(&(Global_68186.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0xDCC86F723E82125E(Global_68186.f_555[0 /*21*/].f_9, 12) && !unk_0xDCC86F723E82125E(Global_68186.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_68186.f_555[0 /*21*/].f_4 != unk_0x6D5BB810CC209E15(iParam1))
		{
			return;
		}
	}
	if (Global_69093 != -1 && Global_69093 != iParam0)
	{
		return;
	}
	if (unk_0x95CCECA3948CFE7B(iParam1))
	{
		if (unk_0x5D42322C7DB888D0(iParam1, 0))
		{
			if (!unk_0xD28A89C669EAD2E4(iParam1))
			{
				unk_0xFD816D0E738EB817(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_100976.f_18751.f_4801 = func_133();
			}
			if (iParam1 != Global_68186.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_150(iParam0);
					if ((unk_0x95CCECA3948CFE7B(iVar0) && unk_0x5D42322C7DB888D0(iVar0, 0)) && iParam1 != iVar0)
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

var func_133()
{
	var uVar0;
	
	func_143(&uVar0, unk_0x4C374828FD653ECC());
	func_142(&uVar0, unk_0x44AD07D9D178F321());
	func_141(&uVar0, unk_0x342FDFC48311CCCE());
	func_136(&uVar0, unk_0x818078CDB71D3E9C());
	func_135(&uVar0, unk_0x49D01BEA8D03E892());
	func_134(&uVar0, unk_0x90D477BB666B03DB());
	return uVar0;
}

void func_134(var uParam0, int iParam1)
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

void func_135(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_136(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_140(*uParam0);
	iVar1 = func_138(*uParam0);
	if (iParam1 < 1 || iParam1 > func_137(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_137(int iParam0, int iParam1)
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

var func_138(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_139(unk_0xDCC86F723E82125E(iParam0, 31), -1, 1)) + 2011;
}

int func_139(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_140(var uParam0)
{
	return uParam0 & 15;
}

void func_141(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_142(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_143(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

void func_144(int iParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6)
{
	if (func_67(&(Global_68186.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xDCC86F723E82125E(Global_68186.f_555[0 /*21*/].f_9, 10))
		{
			func_145(iParam0);
			func_64(uParam1, &(Global_100976.f_18751.f_69[Global_68186.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0xDCC86F723E82125E(Global_68186.f_555[0 /*21*/].f_9, 11))
			{
				Global_100976.f_18751.f_1864[Global_68186.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_100976.f_18751.f_1934[Global_68186.f_555[0 /*21*/].f_14] = uParam5;
			}
			else
			{
				Global_100976.f_18751.f_1864[Global_68186.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_100976.f_18751.f_1934[Global_68186.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_100976.f_18751.f_1958[Global_68186.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_60(iParam0, 1);
		}
	}
}

void func_145(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_67(&(Global_68186.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x95CCECA3948CFE7B(Global_68186.f_139[iParam0]))
		{
			unk_0xFD816D0E738EB817(Global_68186.f_139[iParam0], 1, 1);
			unk_0xEF84021B2AB5E334(&(Global_68186.f_139[iParam0]));
			Global_68186.f_139[iParam0] = 0;
		}
		if (unk_0xDCC86F723E82125E(Global_68186.f_555[0 /*21*/].f_9, 13))
		{
			func_60(iParam0, 0);
		}
	}
}

void func_146(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_145(iParam0);
	func_60(iParam0, 0);
}

int func_147(struct<3> Param0, int iParam3, var uParam4, var uParam5)
{
	int iVar0;
	
	iVar0 = func_148(Param0, iParam3, 1);
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

int func_148(struct<3> Param0, int iParam3, int iParam4)
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
				if (func_149(iVar0) || iParam4 == 0)
				{
					fVar1 = unk_0x4F982ED5336EA899(Param0, Global_86477[iVar0 /*10*/].f_3, 1);
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

bool func_149(int iParam0)
{
	return unk_0xDCC86F723E82125E(Global_100976.f_5863[iParam0], 0);
}

int func_150(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_68186.f_139[iParam0];
}

void func_151()
{
	Global_85617 = 1;
}

void func_152()
{
	unk_0xBFDE8C755DF4A1ED(unk_0xA34E7C2A5118D638(), 1);
	unk_0xFD62177C7242216E(0.01f);
	uLocal_53 = unk_0x8738B068D97CDC64(861.6f, -1599.7f, 27.9f, 961.8f, -1476.4f, 49.7f, 0, 1, 1, 1);
	uLocal_54 = unk_0x8738B068D97CDC64(851.2f, -1598.2f, 29.7f, 855.7f, -1587.1f, 33f, 0, 1, 1, 1);
	uLocal_55 = unk_0x8738B068D97CDC64(859.4f, -1569.6f, 32.3f, 865.4f, -1561f, 28.7f, 0, 1, 1, 1);
	uLocal_56 = unk_0x8738B068D97CDC64(939f, -1576.8f, 33f, 943.8f, -1571.3f, 28.9f, 0, 1, 1, 1);
	uLocal_51 = unk_0x8738B068D97CDC64(5.4f, -588f, 39.1f, 57.4f, -678.8f, 25.4f, 0, 1, 1, 1);
	uLocal_52 = unk_0x8738B068D97CDC64(50.9f, -641.6f, 37.7f, 81.1f, -608.4f, 29.5f, 0, 1, 1, 1);
	if (func_29())
	{
		if (Global_85616 == 1)
		{
			func_154(28.4065f, -608.9371f, 30.6293f, 70.7778f, 1, 0);
			iLocal_483 = 1;
			iLocal_304 = 1;
			iLocal_62 = 0;
			iLocal_28 = 5;
		}
		else if (func_153() == 0)
		{
			if (func_94() && func_91(7f, 7f, 7f, 1))
			{
				func_154(818.8139f, -1610.406f, 30.7951f, 264.412f, 1, 0);
			}
			else
			{
				func_154(825.5603f, -1605.825f, 30.9548f, 312.5221f, 1, 0);
			}
			iLocal_304 = 1;
			iLocal_483 = 1;
			iLocal_62 = 0;
			iLocal_28 = 3;
		}
	}
	else if (func_189(0))
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

int func_153()
{
	if (!Global_91106 == 10 && !Global_91106 == 9)
	{
		return 0;
	}
	return Global_91106.f_2;
}

void func_154(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	if (func_29())
	{
		unk_0x6ECAEE4901F465A1(0);
		unk_0x77621132305B133B(&(Global_91106.f_20), 2);
		unk_0x6F9EF355924EC498(1);
		if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
		{
			unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 0, 0);
		}
		Global_91102 = { Param0 };
		Global_91105 = fParam3;
		Global_91101 = 1;
		if (iParam4 == 1)
		{
			unk_0x59A0729D503ED758(&(Global_91106.f_20), 14);
		}
		else
		{
			unk_0x77621132305B133B(&(Global_91106.f_20), 14);
		}
		if (iParam5 == 1)
		{
			unk_0x59A0729D503ED758(&(Global_91106.f_20), 24);
		}
		else
		{
			unk_0x77621132305B133B(&(Global_91106.f_20), 24);
		}
		func_28(1);
	}
}

void func_155()
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

void func_156()
{
	if (!unk_0x95CCECA3948CFE7B(iLocal_49))
	{
		if (unk_0x4F982ED5336EA899(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), 45f, -616.2f, 30.8f, 1) < 150f)
		{
			unk_0x7567CEA8E6B5340B(joaat("s_m_m_security_01"));
			if (unk_0x0845149A26DABBA5(joaat("s_m_m_security_01")))
			{
				iLocal_49 = unk_0x71DD988C1B903F5D(26, joaat("s_m_m_security_01"), 64.904f, -617.9949f, 30.7028f, 223.555f, 1, 1);
				unk_0xC778754E36F3FFD6(iLocal_49, 324, 1);
			}
			unk_0x4BBD72565A0AF033(joaat("s_m_m_security_01"));
		}
	}
	if (unk_0x95CCECA3948CFE7B(iLocal_49))
	{
		if (!unk_0x2DC9BA2299B45EA6(iLocal_49))
		{
			if (unk_0xAD158329EB26D8F4(65.2f, -617.2f, 30.8f, 5f, 0))
			{
				if (iLocal_456 == 0)
				{
					if (unk_0xE77F5DDBC2E96204(iLocal_49))
					{
						unk_0x5124C5FA52D2AF3E(iLocal_49);
					}
					else
					{
						unk_0xBA73099E237C7E5E(iLocal_49);
					}
					unk_0x6C43AC8B5408F1BF(iLocal_49, 65.2f, -617.2f, 31f, 2f, 0);
					unk_0xF1A02DDEC7E15D6E(iLocal_49, 1);
					iLocal_113 = unk_0x693EBB4F13506457();
					iLocal_456 = 1;
				}
				else if (unk_0x693EBB4F13506457() > iLocal_113 + 5000)
				{
					if (!unk_0x54E8AF6E305A849E(iLocal_49))
					{
						iLocal_456 = 0;
					}
				}
			}
			if (func_158(unk_0xC8B93D94F8954288(), iLocal_49, 1) < 20f)
			{
				if (iLocal_421 == 0)
				{
					unk_0xE48D9147BC1F4CD7(iLocal_49, unk_0xC8B93D94F8954288(), -1, 1072, 3);
					iLocal_421 = 1;
				}
			}
			else if (iLocal_421 == 1)
			{
				unk_0xE48D9147BC1F4CD7(iLocal_49, unk_0xC8B93D94F8954288(), 1, 0, 2);
				iLocal_421 = 0;
			}
		}
	}
	if (unk_0x4F982ED5336EA899(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), 45f, -616.2f, 30.8f, 1) < 50f)
	{
		if (iLocal_457 == 0)
		{
			iLocal_114 = 498972213;
			iLocal_115 = -512924631;
			unk_0xD4C94FD09D793556(iLocal_114, joaat("prop_sec_barrier_ld_01a"), 61f, -633f, 32f, 1, 1, 0);
			unk_0xD4C94FD09D793556(iLocal_115, joaat("prop_sec_barrier_ld_01a"), 66f, -618f, 32f, 1, 1, 0);
			iLocal_457 = 1;
		}
		if (iLocal_457 == 1)
		{
			if (unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) == 0)
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
						unk_0xC0E67E73A6E9A0EE(iLocal_114, fLocal_135, 0, 1);
						unk_0xC0E67E73A6E9A0EE(iLocal_115, fLocal_135, 0, 1);
						unk_0x130F0C5AE7B52B7A(iLocal_114, 4, 0, 1);
						unk_0x130F0C5AE7B52B7A(iLocal_115, 4, 0, 1);
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
						unk_0xC0E67E73A6E9A0EE(iLocal_114, fLocal_135, 0, 1);
						unk_0xC0E67E73A6E9A0EE(iLocal_115, fLocal_135, 0, 1);
						unk_0x130F0C5AE7B52B7A(iLocal_114, 4, 0, 1);
						unk_0x130F0C5AE7B52B7A(iLocal_115, 4, 0, 1);
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
						unk_0xC0E67E73A6E9A0EE(iLocal_114, fLocal_135, 0, 1);
						unk_0xC0E67E73A6E9A0EE(iLocal_115, fLocal_135, 0, 1);
						unk_0x130F0C5AE7B52B7A(iLocal_114, 4, 0, 1);
						unk_0x130F0C5AE7B52B7A(iLocal_115, 4, 0, 1);
						iLocal_422 = 1;
					}
				}
			}
		}
		if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 62.90151f, -638.6329f, 29.9188f, 70.78919f, -617.1338f, 36.91788f, 10.75f, 0, 1, 0))
		{
			if (unk_0x95CCECA3948CFE7B(iLocal_49))
			{
				if (!unk_0x2DC9BA2299B45EA6(iLocal_49))
				{
					if (unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) == 0)
					{
						if (iLocal_419 == 0)
						{
							if (iLocal_418 == 0)
							{
								func_119(&uLocal_137, 4, iLocal_49, "FHPBSecGuard", 0, 1);
								if (func_157(&uLocal_137, "FHPBAUD", "FHPB_CHAT20", 7, 0, 0, 0))
								{
									iLocal_418 = 1;
								}
							}
						}
						else if (iLocal_420 == 0)
						{
							func_119(&uLocal_137, 4, iLocal_49, "FHPBSecGuard", 0, 1);
							if (func_157(&uLocal_137, "FHPBAUD", "FHPB_CHAT22", 7, 0, 0, 0))
							{
								iLocal_420 = 1;
							}
						}
					}
					else if (iLocal_419 == 0)
					{
						func_119(&uLocal_137, 4, iLocal_49, "FHPBSecGuard", 0, 1);
						if (func_157(&uLocal_137, "FHPBAUD", "FHPB_CHAT21", 7, 0, 0, 0))
						{
							iLocal_419 = 1;
						}
					}
				}
			}
		}
	}
}

bool func_157(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_118(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_110(sParam2, iParam3, 0);
}

float func_158(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xB6900B8CB0ABBD2B(iParam0))
	{
		Var0 = { unk_0x44C17CCB85A88A1F(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x44C17CCB85A88A1F(iParam0, 0) };
	}
	if (!unk_0xB6900B8CB0ABBD2B(iParam1))
	{
		Var3 = { unk_0x44C17CCB85A88A1F(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x44C17CCB85A88A1F(iParam1, 0) };
	}
	return unk_0x4F982ED5336EA899(Var0, Var3, iParam2);
}

void func_159()
{
	int iVar0;
	
	if (!unk_0xA3858ADDDBC3CB71())
	{
		if (!func_163() || !unk_0xA77673910115074B())
		{
			if (iLocal_28 == 3)
			{
				if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0) && iLocal_31 == 0)
				{
					if (func_14() == 0)
					{
						if (iLocal_29 == 1)
						{
							if (iLocal_392 == 0)
							{
								if (func_161() && func_160())
								{
									if (func_157(&uLocal_137, "SOL1AUD", "SOL1_SEE5", 7, 0, 0, 0))
									{
										iLocal_112 = unk_0x693EBB4F13506457();
										iLocal_392 = 1;
									}
								}
							}
						}
						if (iLocal_29 == 1)
						{
							if (iLocal_392 == 1 && unk_0x693EBB4F13506457() > iLocal_112 + 7000)
							{
								if (func_161() && func_160())
								{
									if (func_157(&uLocal_137, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
									{
										iLocal_112 = unk_0x693EBB4F13506457();
									}
								}
							}
						}
					}
					if (iLocal_29 == 2)
					{
						if (iLocal_430 == 0)
						{
							if (func_161())
							{
								if (func_157(&uLocal_137, "SOL1AUD", "SOL1_SEC3", 7, 0, 0, 0))
								{
									iLocal_95 = unk_0x693EBB4F13506457();
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
						if (func_161() && func_160())
						{
							if (func_157(&uLocal_137, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
							{
								iLocal_108 = unk_0x693EBB4F13506457();
								iLocal_455 = 1;
							}
						}
					}
					else if (unk_0x693EBB4F13506457() > iLocal_108 + 8000)
					{
						if (func_161() && func_160())
						{
							if (func_157(&uLocal_137, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
							{
								iLocal_108 = unk_0x693EBB4F13506457();
							}
						}
					}
				}
				if (iLocal_29 == 4)
				{
					if (iLocal_391 == 0)
					{
						func_101();
						if (func_161())
						{
							unk_0xA51F11E1DC7307BB(unk_0xC8B93D94F8954288(), &iVar0, 1);
							if (iVar0 != joaat("weapon_unarmed") && iVar0 != 0)
							{
								if (func_157(&uLocal_137, "SOL1AUD", "SOL1_ARM3", 7, 0, 0, 0))
								{
									iLocal_77 = unk_0x693EBB4F13506457();
									iLocal_387 = 1;
									iLocal_391 = 1;
								}
							}
							else
							{
								iLocal_77 = unk_0x693EBB4F13506457();
								iLocal_387 = 1;
								iLocal_391 = 1;
							}
						}
					}
					if (iLocal_391 == 1)
					{
						if (iLocal_387 == 0)
						{
							iLocal_77 = unk_0x693EBB4F13506457();
							iLocal_387 = 1;
						}
						if (iLocal_387 == 1)
						{
							if (unk_0x693EBB4F13506457() > iLocal_77 + 9000)
							{
								if (func_161())
								{
									if (func_157(&uLocal_137, "SOL1AUD", "SOL1_PAN3", 7, 0, 0, 0))
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
								if (func_161())
								{
									if (func_157(&uLocal_137, "SOL1AUD", "SOL1_STEAL3", 7, 0, 0, 0))
									{
										iLocal_389 = 1;
									}
								}
							}
						}
					}
					if (iLocal_388 == 0)
					{
						if (unk_0x95CCECA3948CFE7B(iLocal_33))
						{
							if (unk_0x5D42322C7DB888D0(iLocal_33, 0))
							{
								if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iLocal_33, 0))
								{
									if (func_161())
									{
										if (func_157(&uLocal_137, "SOL1AUD", "SOL1_OUT3", 7, 0, 0, 0))
										{
											iLocal_78 = unk_0x693EBB4F13506457();
											iLocal_389 = 1;
										}
									}
								}
							}
						}
					}
					if (unk_0x693EBB4F13506457() > iLocal_78 + 10000)
					{
						if (unk_0x95CCECA3948CFE7B(iLocal_33))
						{
							if (unk_0x5D42322C7DB888D0(iLocal_33, 0))
							{
								if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iLocal_33, 0))
								{
									if (func_161())
									{
										if (func_157(&uLocal_137, "SOL1AUD", "SOL1_OUT3", 7, 0, 0, 0))
										{
											iLocal_78 = unk_0x693EBB4F13506457();
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
							if (func_161())
							{
								if (func_157(&uLocal_137, "SOL1AUD", "SOL1_SEC3", 7, 0, 0, 0))
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

int func_160()
{
	if (func_14() == 0)
	{
		func_119(&uLocal_137, 0, unk_0xC8B93D94F8954288(), "MICHAEL", 0, 1);
		return 1;
	}
	if (func_14() == 1)
	{
		func_119(&uLocal_137, 1, unk_0xC8B93D94F8954288(), "FRANKLIN", 0, 1);
		return 1;
	}
	if (func_14() == 2)
	{
		func_119(&uLocal_137, 2, unk_0xC8B93D94F8954288(), "TREVOR", 0, 1);
		return 1;
	}
	return 0;
}

int func_161()
{
	int iVar0;
	
	iLocal_66 = 0;
	while (iLocal_66 <= 6)
	{
		if (unk_0x95CCECA3948CFE7B(iLocal_35[iLocal_66]))
		{
			if (!unk_0x2DC9BA2299B45EA6(iLocal_35[iLocal_66]))
			{
				iVar0 = func_162(unk_0xC8B93D94F8954288(), iLocal_302, 0, 0, -1);
				if (unk_0x95CCECA3948CFE7B(iVar0))
				{
					if (!unk_0x2DC9BA2299B45EA6(iVar0))
					{
					}
				}
				if (iVar0 == iLocal_35[iLocal_66] && func_158(unk_0xC8B93D94F8954288(), iVar0, 1) < 15f)
				{
					func_119(&uLocal_137, 5, iLocal_35[iLocal_66], "CONSTRUCTION3", 0, 1);
					return 1;
				}
			}
		}
		iLocal_66++;
	}
	return 0;
}

int func_162(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0[16];
	int iVar17;
	
	iVar17 = 0;
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
	{
		unk_0x06C00074433E3408(iParam0, &iVar0, iParam4);
		iVar17 = 0;
		while (iVar17 <= (iVar0 - 1))
		{
			if (unk_0x95CCECA3948CFE7B(iVar0[iVar17]))
			{
				if (!unk_0x2DC9BA2299B45EA6(iVar0[iVar17]))
				{
					if (unk_0xBD4278CDF5C53C71(iVar0[iVar17]) == iParam1)
					{
						if (iParam2 <= 0)
						{
							if (iParam3 == 1)
							{
								if (unk_0xE77F5DDBC2E96204(iVar0[iVar17]))
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
							if (unk_0x95CCECA3948CFE7B(iVar0[(iVar17 + iParam2)]))
							{
								if (!unk_0x2DC9BA2299B45EA6(iVar0[(iVar17 + iParam2)]))
								{
									if (unk_0xBD4278CDF5C53C71(iVar0[(iVar17 + iParam2)]) == iParam1)
									{
										if (iParam3 == 1)
										{
											if (unk_0xE77F5DDBC2E96204(iVar0[(iVar17 + iParam2)]))
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

int func_163()
{
	if (Global_15712 != 0 || unk_0x2964A62922189B93())
	{
		return 1;
	}
	return 0;
}

void func_164()
{
	if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		if (unk_0xBCB541CE877969BE(unk_0xC8B93D94F8954288()) && unk_0x1E8D3FA42E89ED72(unk_0xC8B93D94F8954288()))
		{
			unk_0xFD62177C7242216E(0f);
		}
		else
		{
			unk_0xFD62177C7242216E(1f);
		}
	}
	func_171();
	if (iLocal_404[0])
	{
		if (func_158(unk_0xC8B93D94F8954288(), iLocal_43[0], 1) < 20f && unk_0x9AD5716183392F62(iLocal_43[0], unk_0xC8B93D94F8954288()))
		{
			if (iLocal_433[0] == 0)
			{
				unk_0xE48D9147BC1F4CD7(iLocal_43[0], unk_0xC8B93D94F8954288(), -1, 1072, 3);
				iLocal_433[0] = 1;
			}
			if (iLocal_433[0] == 1)
			{
				if (unk_0x090C65D5190A249D(iLocal_43[0], 150319005) != 0 || unk_0x090C65D5190A249D(iLocal_43[0], 150319005) != 1)
				{
					iLocal_433[0] = 0;
				}
			}
		}
		else if (iLocal_433[0] == 1)
		{
			unk_0xE48D9147BC1F4CD7(iLocal_43[0], unk_0xC8B93D94F8954288(), 1, 0, 2);
			iLocal_433[0] = 0;
		}
	}
	if (iLocal_404[1])
	{
		if (func_158(unk_0xC8B93D94F8954288(), iLocal_43[1], 1) < 20f && unk_0x9AD5716183392F62(iLocal_43[1], unk_0xC8B93D94F8954288()))
		{
			if (iLocal_433[1] == 0)
			{
				unk_0xE48D9147BC1F4CD7(iLocal_43[1], unk_0xC8B93D94F8954288(), -1, 1072, 3);
				iLocal_433[1] = 1;
			}
			if (iLocal_433[1] == 1)
			{
				if (unk_0x090C65D5190A249D(iLocal_43[1], 150319005) != 0 || unk_0x090C65D5190A249D(iLocal_43[1], 150319005) != 1)
				{
					iLocal_433[1] = 0;
				}
			}
		}
		else if (iLocal_433[1] == 1)
		{
			unk_0xE48D9147BC1F4CD7(iLocal_43[1], unk_0xC8B93D94F8954288(), 1, 0, 2);
			iLocal_433[1] = 0;
		}
	}
	if (iLocal_404[0] && iLocal_404[1])
	{
		if (func_158(unk_0xC8B93D94F8954288(), iLocal_43[0], 1) < func_158(unk_0xC8B93D94F8954288(), iLocal_43[1], 1))
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
			if (unk_0x1AF171BD37579622("SCRAP_SECURITY"))
			{
				if (!unk_0xE9583E80BF9231C4("SCRAP_SECURITY"))
				{
					unk_0x5B9B55E417A44413("SCRAP_SECURITY", 1);
				}
				if (unk_0xE9583E80BF9231C4("SCRAP_SECURITY"))
				{
					if (unk_0x95CCECA3948CFE7B(iLocal_43[0]))
					{
						if (!unk_0x2DC9BA2299B45EA6(iLocal_43[0]))
						{
							if (!unk_0x3DFC8C2B3444478A(iLocal_43[0]))
							{
								if (unk_0xAD158329EB26D8F4(863.1551f, -1564.572f, 29.3231f, 5f, 1))
								{
									iLocal_105[0] = unk_0x693EBB4F13506457();
									if (!unk_0x393E712335C82C36(iLocal_43[0]))
									{
										if (iLocal_462[0] == 0)
										{
											unk_0xD1324A3D06EF0A56(iLocal_43[0], 863.1551f, -1564.572f, 29.3231f, 5f, 0);
											iLocal_459[0] = 0;
											iLocal_462[0] = 1;
										}
									}
								}
								else if (unk_0x693EBB4F13506457() > iLocal_105[0] + 2000)
								{
									if (unk_0x4F982ED5336EA899(unk_0x44C17CCB85A88A1F(iLocal_43[0], 1), 863.1551f, -1564.572f, 29.3231f, 1) > 3f)
									{
										if (iLocal_459[0] == 0)
										{
											unk_0x81333BEA4837207C(iLocal_43[0], 863.1551f, -1564.572f, 29.3231f, 1f, -1, 1048576000, 0, 1193033728);
											iLocal_462[0] = 0;
											iLocal_459[0] = 1;
										}
									}
								}
							}
						}
					}
					if (unk_0x95CCECA3948CFE7B(iLocal_43[1]))
					{
						if (!unk_0x2DC9BA2299B45EA6(iLocal_43[1]))
						{
							if (!unk_0x3DFC8C2B3444478A(iLocal_43[1]))
							{
								if (unk_0xAD158329EB26D8F4(940.2881f, -1573.877f, 29.3866f, 5f, 1))
								{
									iLocal_105[1] = unk_0x693EBB4F13506457();
									if (!unk_0x393E712335C82C36(iLocal_43[1]))
									{
										if (iLocal_462[1] == 0)
										{
											unk_0xD1324A3D06EF0A56(iLocal_43[1], 940.2881f, -1573.877f, 29.3866f, 5f, 0);
											iLocal_459[1] = 0;
											iLocal_462[1] = 1;
										}
									}
								}
								else if (unk_0x693EBB4F13506457() > iLocal_105[1] + 2000)
								{
									if (unk_0x4F982ED5336EA899(unk_0x44C17CCB85A88A1F(iLocal_43[1], 1), 940.2881f, -1573.877f, 29.3866f, 1) > 3f)
									{
										if (iLocal_459[1] == 0)
										{
											unk_0x81333BEA4837207C(iLocal_43[1], 940.2881f, -1573.877f, 29.3866f, 1f, -1, 1048576000, 0, 1193033728);
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
			if (unk_0x95CCECA3948CFE7B(iLocal_43[0]))
			{
				if (!unk_0x2DC9BA2299B45EA6(iLocal_43[0]))
				{
					if (func_158(unk_0xC8B93D94F8954288(), iLocal_43[0], 1) < 20f)
					{
						if ((func_170(unk_0xC8B93D94F8954288()) == joaat("weapon_unarmed") || unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0)) || func_169(0))
						{
							if (unk_0xAF9BF2C76079B4BF(unk_0xC8B93D94F8954288(), iLocal_43[0], 100f) || unk_0x9AD5716183392F62(iLocal_43[0], unk_0xC8B93D94F8954288()))
							{
								if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 860.4606f, -1563.58f, 28.81788f, 865.0807f, -1575.088f, 30.93324f, 5.75f, 0, 1, 0) || unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, 1, 0))
								{
									if (iLocal_451[0] == 0)
									{
										if (!unk_0xAF9BF2C76079B4BF(iLocal_43[0], unk_0xC8B93D94F8954288(), 45f))
										{
											if (!unk_0xE77F5DDBC2E96204(iLocal_43[0]))
											{
												unk_0xBA73099E237C7E5E(iLocal_43[0]);
											}
											else
											{
												unk_0x5124C5FA52D2AF3E(iLocal_43[0]);
											}
											unk_0xC518AECFA9CF7722(iLocal_43[0], unk_0xC8B93D94F8954288(), 5000);
											iLocal_102[0] = unk_0x693EBB4F13506457();
											func_168(iLocal_43[0]);
											iLocal_451[0] = 1;
										}
									}
									if (iLocal_451[0] == 1)
									{
										if (unk_0x693EBB4F13506457() > iLocal_102[0] + 5000)
										{
											iLocal_451[0] = 0;
										}
									}
									if (iLocal_407[0] == 0 && iLocal_407[1] == 0)
									{
										if (iLocal_403 == 0)
										{
											func_166(iLocal_43[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 6);
											iLocal_82 = unk_0x693EBB4F13506457();
											iLocal_403 = 1;
										}
										else if (unk_0x693EBB4F13506457() > iLocal_82 + 15000)
										{
											func_166(iLocal_43[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
											iLocal_82 = unk_0x693EBB4F13506457();
										}
									}
									else
									{
										if (iLocal_407[0] == 1)
										{
											if (iLocal_410 == 0)
											{
												func_166(iLocal_43[0], "PROVOKE_GEBERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_88 = unk_0x693EBB4F13506457();
												iLocal_410 = 1;
											}
											else if (unk_0x693EBB4F13506457() > iLocal_88 + 15000)
											{
												func_166(iLocal_43[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_88 = unk_0x693EBB4F13506457();
											}
										}
										if (iLocal_407[1] == 1)
										{
											if (iLocal_411 == 0)
											{
												func_166(iLocal_43[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_89 = unk_0x693EBB4F13506457();
												iLocal_411 = 1;
											}
											else if (unk_0x693EBB4F13506457() > iLocal_89 + 15000)
											{
												func_166(iLocal_43[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_89 = unk_0x693EBB4F13506457();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			if (unk_0x95CCECA3948CFE7B(iLocal_43[1]))
			{
				if (!unk_0x2DC9BA2299B45EA6(iLocal_43[1]))
				{
					if (func_158(unk_0xC8B93D94F8954288(), iLocal_43[1], 1) < 15f)
					{
						if ((func_170(unk_0xC8B93D94F8954288()) == joaat("weapon_unarmed") || unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0)) || func_169(0))
						{
							if (unk_0xAF9BF2C76079B4BF(unk_0xC8B93D94F8954288(), iLocal_43[1], 100f))
							{
								if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 939.8862f, -1575.635f, 28.59783f, 952.9254f, -1575.484f, 33.19459f, 13.75f, 0, 1, 0))
								{
									if (iLocal_451[1] == 0)
									{
										if (!unk_0xAF9BF2C76079B4BF(iLocal_43[1], unk_0xC8B93D94F8954288(), 45f))
										{
											if (!unk_0xE77F5DDBC2E96204(iLocal_43[1]))
											{
												unk_0xBA73099E237C7E5E(iLocal_43[1]);
											}
											else
											{
												unk_0x5124C5FA52D2AF3E(iLocal_43[1]);
											}
											unk_0xC518AECFA9CF7722(iLocal_43[1], unk_0xC8B93D94F8954288(), 5000);
											iLocal_102[1] = unk_0x693EBB4F13506457();
											func_168(iLocal_43[1]);
											iLocal_451[1] = 1;
										}
									}
									if (iLocal_451[1] == 1)
									{
										if (unk_0x693EBB4F13506457() > iLocal_102[1] + 5000)
										{
											iLocal_451[1] = 0;
										}
									}
									if (iLocal_407[0] == 0 && iLocal_407[1] == 0)
									{
										if (iLocal_403 == 0)
										{
											func_166(iLocal_43[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
											iLocal_82 = unk_0x693EBB4F13506457();
											iLocal_403 = 1;
										}
										else if (unk_0x693EBB4F13506457() > iLocal_82 + 15000)
										{
											func_166(iLocal_43[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
											iLocal_82 = unk_0x693EBB4F13506457();
										}
									}
									else
									{
										if (iLocal_407[1] == 1)
										{
											if (iLocal_410 == 0)
											{
												func_166(iLocal_43[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
												iLocal_88 = unk_0x693EBB4F13506457();
												iLocal_410 = 1;
											}
											else if (unk_0x693EBB4F13506457() > iLocal_88 + 15000)
											{
												func_166(iLocal_43[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_88 = unk_0x693EBB4F13506457();
											}
										}
										if (iLocal_407[0] == 1)
										{
											if (iLocal_411 == 0)
											{
												func_166(iLocal_43[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
												iLocal_89 = unk_0x693EBB4F13506457();
												iLocal_411 = 1;
											}
											else if (unk_0x693EBB4F13506457() > iLocal_89 + 15000)
											{
												func_166(iLocal_43[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_89 = unk_0x693EBB4F13506457();
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
			if (func_165() || iLocal_398 == 1)
			{
				if (unk_0x95CCECA3948CFE7B(iLocal_43[0]))
				{
					if (!unk_0x2DC9BA2299B45EA6(iLocal_43[0]))
					{
						if (unk_0x9AD5716183392F62(iLocal_43[0], unk_0xC8B93D94F8954288()))
						{
							iLocal_99[0] = unk_0x693EBB4F13506457();
							iLocal_445[0] = 1;
							if (iLocal_442[0] == 0)
							{
								if (unk_0xE77F5DDBC2E96204(iLocal_43[0]))
								{
									unk_0x5124C5FA52D2AF3E(iLocal_43[0]);
								}
								else
								{
									unk_0xBA73099E237C7E5E(iLocal_43[0]);
								}
								unk_0x1296D571B761D748(iLocal_43[0], 50, 1);
								unk_0x45EF2026AF681474(iLocal_43[0], unk_0xC8B93D94F8954288(), 0, 16);
								func_168(iLocal_43[0]);
								iLocal_442[0] = 1;
							}
						}
						else if (iLocal_448[0] == 0)
						{
							if (iLocal_445[0] == 0)
							{
								if (unk_0xE77F5DDBC2E96204(iLocal_43[0]))
								{
									unk_0x5124C5FA52D2AF3E(iLocal_43[0]);
								}
								else
								{
									unk_0xBA73099E237C7E5E(iLocal_43[0]);
								}
								unk_0x81333BEA4837207C(iLocal_43[0], unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), 3f, -1, 1048576000, 0, 1193033728);
								func_168(iLocal_43[0]);
								iLocal_448[0] = 1;
							}
							if (iLocal_445[0] == 1)
							{
								if (unk_0x693EBB4F13506457() > iLocal_99[0] + 500)
								{
									if (unk_0xE77F5DDBC2E96204(iLocal_43[0]))
									{
										unk_0x5124C5FA52D2AF3E(iLocal_43[0]);
									}
									else
									{
										unk_0xBA73099E237C7E5E(iLocal_43[0]);
									}
									unk_0x81333BEA4837207C(iLocal_43[0], unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), 3f, -1, 1048576000, 0, 1193033728);
									func_168(iLocal_43[0]);
									iLocal_448[0] = 1;
								}
							}
						}
					}
				}
				if (unk_0x95CCECA3948CFE7B(iLocal_43[1]))
				{
					if (!unk_0x2DC9BA2299B45EA6(iLocal_43[1]))
					{
						if (unk_0x9AD5716183392F62(iLocal_43[1], unk_0xC8B93D94F8954288()))
						{
							iLocal_99[1] = unk_0x693EBB4F13506457();
							iLocal_445[1] = 1;
							if (iLocal_442[1] == 0)
							{
								if (unk_0xE77F5DDBC2E96204(iLocal_43[1]))
								{
									unk_0x5124C5FA52D2AF3E(iLocal_43[1]);
								}
								else
								{
									unk_0xBA73099E237C7E5E(iLocal_43[1]);
								}
								unk_0x1296D571B761D748(iLocal_43[1], 50, 1);
								unk_0x45EF2026AF681474(iLocal_43[1], unk_0xC8B93D94F8954288(), 0, 16);
								func_168(iLocal_43[1]);
								iLocal_442[1] = 1;
							}
						}
						else if (iLocal_448[1] == 0)
						{
							if (iLocal_445[1] == 0)
							{
								if (unk_0xE77F5DDBC2E96204(iLocal_43[1]))
								{
									unk_0x5124C5FA52D2AF3E(iLocal_43[1]);
								}
								else
								{
									unk_0xBA73099E237C7E5E(iLocal_43[1]);
								}
								unk_0x81333BEA4837207C(iLocal_43[1], unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), 3f, -1, 1048576000, 0, 1193033728);
								func_168(iLocal_43[1]);
								iLocal_448[1] = 1;
							}
							if (iLocal_445[1] == 1)
							{
								if (unk_0x693EBB4F13506457() > iLocal_99[1] + 500)
								{
									if (unk_0xE77F5DDBC2E96204(iLocal_43[1]))
									{
										unk_0x5124C5FA52D2AF3E(iLocal_43[1]);
									}
									else
									{
										unk_0xBA73099E237C7E5E(iLocal_43[1]);
									}
									unk_0x81333BEA4837207C(iLocal_43[1], unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), 3f, -1, 1048576000, 0, 1193033728);
									func_168(iLocal_43[1]);
									iLocal_448[1] = 1;
								}
							}
						}
					}
				}
				if (func_165())
				{
					if (iLocal_412 == 0)
					{
						if (unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) < 2)
						{
							unk_0x60B57BC5E51D2074(5);
							unk_0xFD62177C7242216E(1f);
							unk_0xB47D5A4E4AE9BEAD(unk_0xA34E7C2A5118D638(), 2, 0);
							unk_0x1C9B7C3360143C4C(unk_0xA34E7C2A5118D638(), 0);
							iLocal_412 = 1;
						}
					}
					if (iLocal_399 == 1)
					{
						if (iLocal_401 == 0)
						{
							if (func_158(unk_0xC8B93D94F8954288(), iLocal_43[0], 1) < 20f)
							{
								if (!unk_0x0D211C48FB8578B7(iLocal_43[0]))
								{
									func_166(iLocal_43[0], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
									iLocal_87 = unk_0x693EBB4F13506457();
									iLocal_401 = 1;
								}
							}
						}
						else if (unk_0x693EBB4F13506457() > iLocal_87 + 7000)
						{
							if (func_158(unk_0xC8B93D94F8954288(), iLocal_43[0], 1) < 20f)
							{
								if (!unk_0x0D211C48FB8578B7(iLocal_43[0]))
								{
									func_166(iLocal_43[0], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
									iLocal_87 = unk_0x693EBB4F13506457();
								}
							}
						}
					}
					if (iLocal_400 == 1)
					{
						if (iLocal_401 == 0)
						{
							if (func_158(unk_0xC8B93D94F8954288(), iLocal_43[1], 1) < 20f)
							{
								if (!unk_0x0D211C48FB8578B7(iLocal_43[1]))
								{
									func_166(iLocal_43[1], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
									iLocal_87 = unk_0x693EBB4F13506457();
									iLocal_401 = 1;
								}
							}
						}
						else if (unk_0x693EBB4F13506457() > iLocal_87 + 7000)
						{
							if (func_158(unk_0xC8B93D94F8954288(), iLocal_43[1], 1) < 20f)
							{
								if (!unk_0x0D211C48FB8578B7(iLocal_43[1]))
								{
									func_166(iLocal_43[1], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
									iLocal_87 = unk_0x693EBB4F13506457();
								}
							}
						}
					}
				}
				else
				{
					if (iLocal_458 == 0)
					{
						iLocal_50 = func_162(unk_0xC8B93D94F8954288(), joaat("COP"), 0, 0, 28);
						if (iLocal_50 != 0)
						{
							if (unk_0x95CCECA3948CFE7B(iLocal_50))
							{
								if (!unk_0x2DC9BA2299B45EA6(iLocal_50))
								{
									if (func_158(unk_0xC8B93D94F8954288(), iLocal_50, 1) < 35f)
									{
										iLocal_458 = 1;
									}
								}
							}
						}
					}
					if (unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) > 0 && iLocal_458 == 0)
					{
						if (iLocal_399 == 1)
						{
							if (iLocal_402 == 0)
							{
								if (func_158(unk_0xC8B93D94F8954288(), iLocal_43[0], 1) < 20f)
								{
									if (!unk_0x0D211C48FB8578B7(iLocal_43[0]))
									{
										func_166(iLocal_43[0], "GENERIC_INSULT_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
										iLocal_86 = unk_0x693EBB4F13506457();
										iLocal_402 = 1;
									}
								}
							}
							else if (unk_0x693EBB4F13506457() > iLocal_86 + 7000)
							{
								if (func_158(unk_0xC8B93D94F8954288(), iLocal_43[0], 1) < 20f)
								{
									if (!unk_0x0D211C48FB8578B7(iLocal_43[0]))
									{
										func_166(iLocal_43[0], "GENERIC_CURSE_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
										iLocal_86 = unk_0x693EBB4F13506457();
									}
								}
							}
						}
						if (iLocal_400 == 1)
						{
							if (iLocal_402 == 0)
							{
								if (func_158(unk_0xC8B93D94F8954288(), iLocal_43[1], 1) < 20f)
								{
									if (!unk_0x0D211C48FB8578B7(iLocal_43[1]))
									{
										func_166(iLocal_43[1], "GENERIC_INSULT_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
										iLocal_86 = unk_0x693EBB4F13506457();
										iLocal_402 = 1;
									}
								}
							}
							else if (unk_0x693EBB4F13506457() > iLocal_86 + 7000)
							{
								if (func_158(unk_0xC8B93D94F8954288(), iLocal_43[1], 1) < 20f)
								{
									if (!unk_0x0D211C48FB8578B7(iLocal_43[1]))
									{
										func_166(iLocal_43[1], "GENERIC_CURSE_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
										iLocal_86 = unk_0x693EBB4F13506457();
									}
								}
							}
						}
					}
				}
			}
			if (!func_165())
			{
				if (iLocal_414 == 0)
				{
					if (unk_0x4F982ED5336EA899(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), 893.2f, -1556.5f, 30f, 1) < 18f)
					{
						if (unk_0x95CCECA3948CFE7B(iLocal_43[0]))
						{
							if (!unk_0x2DC9BA2299B45EA6(iLocal_43[0]))
							{
								if (unk_0x9AD5716183392F62(iLocal_43[0], unk_0xC8B93D94F8954288()))
								{
									iLocal_81 = unk_0x693EBB4F13506457();
									iLocal_414 = 1;
								}
							}
						}
						if (unk_0x95CCECA3948CFE7B(iLocal_43[1]))
						{
							if (!unk_0x2DC9BA2299B45EA6(iLocal_43[1]))
							{
								if (unk_0x9AD5716183392F62(iLocal_43[1], unk_0xC8B93D94F8954288()))
								{
									iLocal_81 = unk_0x693EBB4F13506457();
									iLocal_414 = 1;
								}
							}
						}
					}
				}
				if (iLocal_398 == 0)
				{
					if (unk_0x95CCECA3948CFE7B(iLocal_43[0]))
					{
						if (!unk_0x2DC9BA2299B45EA6(iLocal_43[0]))
						{
							if (func_158(unk_0xC8B93D94F8954288(), iLocal_43[0], 1) > 4f)
							{
								if (unk_0x9AD5716183392F62(iLocal_43[0], unk_0xC8B93D94F8954288()))
								{
									if (iLocal_436[0] == 0)
									{
										if (unk_0xE77F5DDBC2E96204(iLocal_43[0]))
										{
											unk_0x5124C5FA52D2AF3E(iLocal_43[0]);
										}
										else
										{
											unk_0xBA73099E237C7E5E(iLocal_43[0]);
										}
										unk_0x1510D3A1E178AAEF(iLocal_43[0], unk_0xC8B93D94F8954288(), -1, 0.5f, 2f, 1073741824, 0);
										func_168(iLocal_43[0]);
										iLocal_436[0] = 1;
									}
									iLocal_96[0] = unk_0x693EBB4F13506457();
								}
								else if (unk_0x693EBB4F13506457() > iLocal_96[0] + 500)
								{
									if (iLocal_439[0] == 0)
									{
										if (unk_0xE77F5DDBC2E96204(iLocal_43[0]))
										{
											unk_0x5124C5FA52D2AF3E(iLocal_43[0]);
										}
										else
										{
											unk_0xBA73099E237C7E5E(iLocal_43[0]);
										}
										unk_0x81333BEA4837207C(iLocal_43[0], unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), 2f, -1, 1048576000, 0, 1193033728);
										func_168(iLocal_43[0]);
										iLocal_439[0] = 1;
									}
								}
							}
							else if (iLocal_484[0] == 0)
							{
								if (unk_0xE77F5DDBC2E96204(iLocal_43[0]))
								{
									unk_0x5124C5FA52D2AF3E(iLocal_43[0]);
								}
								else
								{
									unk_0xBA73099E237C7E5E(iLocal_43[0]);
								}
								unk_0x3E2E609450787FFE(&uLocal_57);
								unk_0xC518AECFA9CF7722(0, unk_0xC8B93D94F8954288(), 0);
								unk_0x1A95AE7201CE6376(0, 2000);
								unk_0x20ACC819883C0E85(uLocal_57, 1);
								unk_0x939BC11172AA1303(uLocal_57);
								unk_0xBFE865E3B513451B(iLocal_43[0], uLocal_57);
								unk_0xA9351C9309E03069(&uLocal_57);
								func_168(iLocal_43[0]);
								iLocal_484[0] = 1;
							}
							if (iLocal_454 == 0)
							{
								if (iLocal_431 == 0 || iLocal_403 == 1)
								{
									if (iLocal_397 == 0)
									{
										if (func_158(unk_0xC8B93D94F8954288(), iLocal_43[0], 1) < 10f)
										{
											if (!unk_0x0D211C48FB8578B7(iLocal_43[0]))
											{
												func_166(iLocal_43[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 1);
												iLocal_83 = unk_0x693EBB4F13506457();
												iLocal_84 = unk_0x693EBB4F13506457();
												iLocal_81 = unk_0x693EBB4F13506457();
												iLocal_414 = 1;
												iLocal_397 = 1;
												iLocal_407[0] = 1;
											}
										}
									}
									else if (unk_0x693EBB4F13506457() > iLocal_83 + 7000)
									{
										if (func_158(unk_0xC8B93D94F8954288(), iLocal_43[0], 1) < 10f)
										{
											if (!unk_0x0D211C48FB8578B7(iLocal_43[0]))
											{
												func_166(iLocal_43[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
												iLocal_83 = unk_0x693EBB4F13506457();
											}
										}
									}
								}
								else if (iLocal_403 == 0)
								{
									if (iLocal_432 == 0)
									{
										if (func_158(unk_0xC8B93D94F8954288(), iLocal_43[0], 1) < 10f)
										{
											if (!unk_0x0D211C48FB8578B7(iLocal_43[0]))
											{
												func_166(iLocal_43[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 8);
												iLocal_397 = 1;
												iLocal_432 = 1;
											}
										}
									}
								}
							}
							else if (unk_0x693EBB4F13506457() > iLocal_84 + 7000)
							{
								if (func_158(unk_0xC8B93D94F8954288(), iLocal_43[0], 1) < 15f)
								{
									if (!unk_0x0D211C48FB8578B7(iLocal_43[0]))
									{
										func_166(iLocal_43[0], "FIGHT", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
										iLocal_84 = unk_0x693EBB4F13506457();
									}
								}
							}
						}
					}
					if (unk_0x95CCECA3948CFE7B(iLocal_43[1]))
					{
						if (!unk_0x2DC9BA2299B45EA6(iLocal_43[1]))
						{
							if (func_158(unk_0xC8B93D94F8954288(), iLocal_43[1], 1) > 4f)
							{
								if (unk_0x9AD5716183392F62(iLocal_43[1], unk_0xC8B93D94F8954288()))
								{
									if (iLocal_436[1] == 0)
									{
										if (unk_0xE77F5DDBC2E96204(iLocal_43[1]))
										{
											unk_0x5124C5FA52D2AF3E(iLocal_43[1]);
										}
										else
										{
											unk_0xBA73099E237C7E5E(iLocal_43[1]);
										}
										unk_0x1510D3A1E178AAEF(iLocal_43[1], unk_0xC8B93D94F8954288(), -1, 0.5f, 2f, 1073741824, 0);
										func_168(iLocal_43[1]);
										iLocal_436[1] = 1;
									}
									iLocal_96[1] = unk_0x693EBB4F13506457();
								}
								else if (unk_0x693EBB4F13506457() > iLocal_96[1] + 500)
								{
									if (iLocal_439[1] == 0)
									{
										if (unk_0xE77F5DDBC2E96204(iLocal_43[1]))
										{
											unk_0x5124C5FA52D2AF3E(iLocal_43[1]);
										}
										else
										{
											unk_0xBA73099E237C7E5E(iLocal_43[1]);
										}
										unk_0x81333BEA4837207C(iLocal_43[1], unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), 2f, -1, 1048576000, 0, 1193033728);
										func_168(iLocal_43[1]);
										iLocal_439[1] = 1;
									}
								}
							}
							else if (iLocal_484[1] == 0)
							{
								if (unk_0xE77F5DDBC2E96204(iLocal_43[1]))
								{
									unk_0x5124C5FA52D2AF3E(iLocal_43[1]);
								}
								else
								{
									unk_0xBA73099E237C7E5E(iLocal_43[1]);
								}
								unk_0x3E2E609450787FFE(&uLocal_57);
								unk_0xC518AECFA9CF7722(0, unk_0xC8B93D94F8954288(), 0);
								unk_0x1A95AE7201CE6376(0, 2000);
								unk_0x20ACC819883C0E85(uLocal_57, 1);
								unk_0x939BC11172AA1303(uLocal_57);
								unk_0xBFE865E3B513451B(iLocal_43[1], uLocal_57);
								unk_0xA9351C9309E03069(&uLocal_57);
								func_168(iLocal_43[1]);
								iLocal_484[1] = 1;
							}
							if (iLocal_454 == 0)
							{
								if (iLocal_431 == 0 || iLocal_403 == 1)
								{
									if (iLocal_397 == 0)
									{
										if (func_158(unk_0xC8B93D94F8954288(), iLocal_43[1], 1) < 10f)
										{
											if (!unk_0x0D211C48FB8578B7(iLocal_43[1]))
											{
												func_166(iLocal_43[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_83 = unk_0x693EBB4F13506457();
												iLocal_85 = unk_0x693EBB4F13506457();
												iLocal_81 = unk_0x693EBB4F13506457();
												iLocal_414 = 1;
												iLocal_397 = 1;
												iLocal_407[1] = 1;
											}
										}
									}
									else if (unk_0x693EBB4F13506457() > iLocal_83 + 7000)
									{
										if (func_158(unk_0xC8B93D94F8954288(), iLocal_43[1], 1) < 10f)
										{
											if (!unk_0x0D211C48FB8578B7(iLocal_43[1]))
											{
												func_166(iLocal_43[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 11);
												iLocal_83 = unk_0x693EBB4F13506457();
											}
										}
									}
								}
								else if (iLocal_403 == 0)
								{
									if (iLocal_432 == 0)
									{
										if (func_158(unk_0xC8B93D94F8954288(), iLocal_43[1], 1) < 10f)
										{
											if (!unk_0x0D211C48FB8578B7(iLocal_43[1]))
											{
												func_166(iLocal_43[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 8);
												iLocal_397 = 1;
												iLocal_432 = 1;
											}
										}
									}
								}
							}
							else if (unk_0x693EBB4F13506457() > iLocal_85 + 7000)
							{
								if (func_158(unk_0xC8B93D94F8954288(), iLocal_43[1], 1) < 10f)
								{
									if (!unk_0x0D211C48FB8578B7(iLocal_43[1]))
									{
										func_166(iLocal_43[1], "FIGHT", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 11);
										iLocal_85 = unk_0x693EBB4F13506457();
									}
								}
							}
						}
					}
					if (iLocal_414 == 1)
					{
						if (iLocal_454 == 0)
						{
							if (unk_0x693EBB4F13506457() > iLocal_81 + 22000)
							{
								iLocal_454 = 1;
							}
						}
					}
					if (iLocal_414 == 1)
					{
						if (iLocal_398 == 0)
						{
							if (unk_0x693EBB4F13506457() > iLocal_81 + 30000)
							{
								unk_0xB47D5A4E4AE9BEAD(unk_0xA34E7C2A5118D638(), 2, 0);
								iLocal_398 = 1;
							}
						}
					}
					if (unk_0x95CCECA3948CFE7B(iLocal_33))
					{
						if (unk_0x5D42322C7DB888D0(iLocal_33, 0))
						{
							if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iLocal_33, 1))
							{
								if (unk_0x9AD5716183392F62(iLocal_43[0], unk_0xC8B93D94F8954288()) || unk_0x9AD5716183392F62(iLocal_43[1], unk_0xC8B93D94F8954288()))
								{
									iLocal_398 = 1;
								}
							}
							if (func_158(unk_0xC8B93D94F8954288(), iLocal_33, 1) < 5f && unk_0xC0AE63CA97F3FF6A(unk_0xC8B93D94F8954288()))
							{
								if (unk_0x9AD5716183392F62(iLocal_43[0], unk_0xC8B93D94F8954288()) || unk_0x9AD5716183392F62(iLocal_43[1], unk_0xC8B93D94F8954288()))
								{
									iLocal_398 = 1;
								}
							}
						}
					}
					if (unk_0x95CCECA3948CFE7B(iLocal_43[0]))
					{
						if (!unk_0x2DC9BA2299B45EA6(iLocal_43[0]))
						{
							if (unk_0x7E515EEFC038658D(unk_0xC8B93D94F8954288()))
							{
								if (unk_0x847105880A2F5991(unk_0xC8B93D94F8954288()))
								{
									if (unk_0x9AD5716183392F62(iLocal_43[0], unk_0xC8B93D94F8954288()))
									{
										iLocal_398 = 1;
									}
								}
							}
						}
					}
					if (unk_0x95CCECA3948CFE7B(iLocal_43[1]))
					{
						if (!unk_0x2DC9BA2299B45EA6(iLocal_43[1]))
						{
							if (unk_0x7E515EEFC038658D(unk_0xC8B93D94F8954288()))
							{
								if (unk_0x847105880A2F5991(unk_0xC8B93D94F8954288()))
								{
									if (unk_0x9AD5716183392F62(iLocal_43[1], unk_0xC8B93D94F8954288()))
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

int func_165()
{
	if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		iLocal_80 = 0;
		while (iLocal_80 <= 6)
		{
			if (unk_0x95CCECA3948CFE7B(iLocal_35[iLocal_80]))
			{
				if (!unk_0x2DC9BA2299B45EA6(iLocal_35[iLocal_80]))
				{
					if (func_170(unk_0xC8B93D94F8954288()) != joaat("weapon_unarmed") && !func_169(0))
					{
						if (unk_0x9AD5716183392F62(iLocal_35[iLocal_80], unk_0xC8B93D94F8954288()))
						{
							return 1;
						}
					}
				}
			}
			iLocal_80++;
		}
		if (unk_0x95CCECA3948CFE7B(iLocal_43[0]))
		{
			if (!unk_0x2DC9BA2299B45EA6(iLocal_43[0]))
			{
				if (func_170(unk_0xC8B93D94F8954288()) != joaat("weapon_unarmed") && !func_169(0))
				{
					if (unk_0x9AD5716183392F62(iLocal_43[0], unk_0xC8B93D94F8954288()))
					{
						return 1;
					}
				}
			}
		}
		if (unk_0x95CCECA3948CFE7B(iLocal_43[1]))
		{
			if (!unk_0x2DC9BA2299B45EA6(iLocal_43[1]))
			{
				if (func_170(unk_0xC8B93D94F8954288()) != joaat("weapon_unarmed") && !func_169(0))
				{
					if (unk_0x9AD5716183392F62(iLocal_43[1], unk_0xC8B93D94F8954288()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_166(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x7033366221CC71C6(uParam0, sParam1, sParam2, func_167(iParam3), 0);
}

int func_167(int iParam0)
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

void func_168(int iParam0)
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

int func_169(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xDCC86F723E82125E(Global_2283, 14))
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
	if (unk_0xCBC8FFE55DC722B5(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_170(int iParam0)
{
	var uVar0;
	
	unk_0xA51F11E1DC7307BB(iParam0, &uVar0, 1);
	return uVar0;
}

void func_171()
{
	if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
	{
		if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
		{
			Local_119 = { unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1) };
		}
	}
	if (unk_0x95CCECA3948CFE7B(iLocal_43[0]))
	{
		if (!unk_0x2DC9BA2299B45EA6(iLocal_43[0]))
		{
			Local_125[0 /*3*/] = { unk_0x44C17CCB85A88A1F(iLocal_43[0], 1) };
		}
	}
	if (unk_0x95CCECA3948CFE7B(iLocal_43[1]))
	{
		if (!unk_0x2DC9BA2299B45EA6(iLocal_43[1]))
		{
			Local_125[1 /*3*/] = { unk_0x44C17CCB85A88A1F(iLocal_43[1], 1) };
		}
	}
	if (unk_0x95CCECA3948CFE7B(iLocal_43[0]))
	{
		if (!unk_0x2DC9BA2299B45EA6(iLocal_43[0]))
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
	if (unk_0x95CCECA3948CFE7B(iLocal_43[1]))
	{
		if (!unk_0x2DC9BA2299B45EA6(iLocal_43[1]))
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
					if (func_158(unk_0xC8B93D94F8954288(), iLocal_43[0], 1) < func_158(unk_0xC8B93D94F8954288(), iLocal_43[1], 1))
					{
						if (func_158(unk_0xC8B93D94F8954288(), iLocal_43[0], 1) < 20f)
						{
							if (((Local_119.f_0 < Local_125[0 /*3*/] && !unk_0xAF9BF2C76079B4BF(unk_0xC8B93D94F8954288(), iLocal_43[0], 90f)) && !unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, 1, 0)) && !unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, 1, 0))
							{
								iLocal_31 = 0;
								iLocal_459[0] = 0;
								iLocal_462[0] = 0;
								iLocal_459[1] = 0;
								iLocal_462[1] = 0;
								iLocal_105[0] = unk_0x693EBB4F13506457();
								iLocal_105[1] = unk_0x693EBB4F13506457();
							}
						}
						else if (Local_119.f_0 < Local_125[0 /*3*/])
						{
							iLocal_31 = 0;
							iLocal_459[0] = 0;
							iLocal_462[0] = 0;
							iLocal_459[1] = 0;
							iLocal_462[1] = 0;
							iLocal_105[0] = unk_0x693EBB4F13506457();
							iLocal_105[1] = unk_0x693EBB4F13506457();
						}
					}
					else if (func_158(unk_0xC8B93D94F8954288(), iLocal_43[1], 1) < 15f)
					{
						if ((Local_119.f_0 > Local_125[1 /*3*/] && !unk_0xAF9BF2C76079B4BF(unk_0xC8B93D94F8954288(), iLocal_43[1], 90f)) && !unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0))
						{
							iLocal_31 = 0;
							iLocal_459[0] = 0;
							iLocal_462[0] = 0;
							iLocal_459[1] = 0;
							iLocal_462[1] = 0;
							iLocal_105[0] = unk_0x693EBB4F13506457();
							iLocal_105[1] = unk_0x693EBB4F13506457();
						}
					}
					else if (Local_119.f_0 > Local_125[1 /*3*/])
					{
						iLocal_31 = 0;
						iLocal_459[0] = 0;
						iLocal_462[0] = 0;
						iLocal_459[1] = 0;
						iLocal_462[1] = 0;
						iLocal_105[0] = unk_0x693EBB4F13506457();
						iLocal_105[1] = unk_0x693EBB4F13506457();
					}
				}
				else if (func_158(unk_0xC8B93D94F8954288(), iLocal_43[0], 1) < func_158(unk_0xC8B93D94F8954288(), iLocal_43[1], 1))
				{
					if (func_158(unk_0xC8B93D94F8954288(), iLocal_43[0], 1) < 15f)
					{
						if ((Local_119.f_0 < Local_125[0 /*3*/] && !unk_0xAF9BF2C76079B4BF(unk_0xC8B93D94F8954288(), iLocal_43[0], 90f)) && !unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, 1, 0))
						{
							iLocal_31 = 0;
							iLocal_459[0] = 0;
							iLocal_462[0] = 0;
							iLocal_459[1] = 0;
							iLocal_462[1] = 0;
							iLocal_105[0] = unk_0x693EBB4F13506457();
							iLocal_105[1] = unk_0x693EBB4F13506457();
						}
					}
					else if (Local_119.f_0 < Local_125[0 /*3*/])
					{
						iLocal_31 = 0;
						iLocal_459[0] = 0;
						iLocal_462[0] = 0;
						iLocal_459[1] = 0;
						iLocal_462[1] = 0;
						iLocal_105[0] = unk_0x693EBB4F13506457();
						iLocal_105[1] = unk_0x693EBB4F13506457();
					}
				}
			}
			else if (iLocal_404[1] == 1)
			{
				if (func_158(unk_0xC8B93D94F8954288(), iLocal_43[1], 1) < 15f)
				{
					if ((Local_119.f_0 > Local_125[1 /*3*/] && !unk_0xAF9BF2C76079B4BF(unk_0xC8B93D94F8954288(), iLocal_43[1], 90f)) && !unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0))
					{
						iLocal_31 = 0;
						iLocal_459[0] = 0;
						iLocal_462[0] = 0;
						iLocal_459[1] = 0;
						iLocal_462[1] = 0;
						iLocal_105[0] = unk_0x693EBB4F13506457();
						iLocal_105[1] = unk_0x693EBB4F13506457();
					}
				}
				else if (Local_119.f_0 > Local_125[1 /*3*/])
				{
					iLocal_31 = 0;
					iLocal_459[0] = 0;
					iLocal_462[0] = 0;
					iLocal_459[1] = 0;
					iLocal_462[1] = 0;
					iLocal_105[0] = unk_0x693EBB4F13506457();
					iLocal_105[1] = unk_0x693EBB4F13506457();
				}
			}
		}
		if (iLocal_31 == 2)
		{
			if (iLocal_398 == 0)
			{
				if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0) || Local_119.f_0 > 942f)
				{
					if (!unk_0x2DC9BA2299B45EA6(iLocal_43[1]))
					{
						if (Local_119.f_0 > Local_125[1 /*3*/])
						{
							if (!unk_0xAF9BF2C76079B4BF(unk_0xC8B93D94F8954288(), iLocal_43[1], 90f))
							{
								iLocal_31 = 0;
								iLocal_459[0] = 0;
								iLocal_462[0] = 0;
								iLocal_459[1] = 0;
								iLocal_462[1] = 0;
								iLocal_105[0] = unk_0x693EBB4F13506457();
								iLocal_105[1] = unk_0x693EBB4F13506457();
							}
						}
					}
					else if (Local_119.f_0 > 942f)
					{
						if (!unk_0xAF9BF2C76079B4BF(unk_0xC8B93D94F8954288(), iLocal_43[1], 90f))
						{
							iLocal_31 = 0;
							iLocal_459[0] = 0;
							iLocal_462[0] = 0;
							iLocal_459[1] = 0;
							iLocal_462[1] = 0;
							iLocal_105[0] = unk_0x693EBB4F13506457();
							iLocal_105[1] = unk_0x693EBB4F13506457();
						}
					}
				}
				if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, 1, 0) || Local_119.f_0 < 860f)
				{
					if (!unk_0x2DC9BA2299B45EA6(iLocal_43[0]))
					{
						if (Local_119.f_0 < Local_125[0 /*3*/])
						{
							if (!unk_0xAF9BF2C76079B4BF(unk_0xC8B93D94F8954288(), iLocal_43[0], 90f))
							{
								iLocal_31 = 0;
								iLocal_459[0] = 0;
								iLocal_462[0] = 0;
								iLocal_459[1] = 0;
								iLocal_462[1] = 0;
								iLocal_105[0] = unk_0x693EBB4F13506457();
								iLocal_105[1] = unk_0x693EBB4F13506457();
							}
						}
					}
					else if (Local_119.f_0 < 860f)
					{
						if (!unk_0xAF9BF2C76079B4BF(unk_0xC8B93D94F8954288(), iLocal_43[0], 90f))
						{
							iLocal_31 = 0;
							iLocal_459[0] = 0;
							iLocal_462[0] = 0;
							iLocal_459[1] = 0;
							iLocal_462[1] = 0;
							iLocal_105[0] = unk_0x693EBB4F13506457();
							iLocal_105[1] = unk_0x693EBB4F13506457();
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
				if (func_158(unk_0xC8B93D94F8954288(), iLocal_43[0], 1) < 20f)
				{
					if ((func_170(unk_0xC8B93D94F8954288()) == joaat("weapon_unarmed") || unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0)) || func_169(0))
					{
						if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 860.4606f, -1563.58f, 28.81788f, 865.0807f, -1575.088f, 30.93324f, 5.75f, 0, 1, 0))
						{
							if (Local_119.f_0 > Local_125[0 /*3*/] || unk_0xAF9BF2C76079B4BF(unk_0xC8B93D94F8954288(), iLocal_43[0], 90f))
							{
								iLocal_31 = 1;
							}
						}
						if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, 1, 0))
						{
							iLocal_31 = 1;
						}
					}
				}
			}
			if (iLocal_404[1] == 1)
			{
				if (func_158(unk_0xC8B93D94F8954288(), iLocal_43[1], 1) < 15f)
				{
					if ((func_170(unk_0xC8B93D94F8954288()) == joaat("weapon_unarmed") || unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0)) || func_169(0))
					{
						if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 939.8862f, -1575.635f, 28.59783f, 952.9254f, -1575.484f, 33.19459f, 13.75f, 0, 1, 0))
						{
							if (Local_119.f_0 < Local_125[1 /*3*/] || unk_0xAF9BF2C76079B4BF(unk_0xC8B93D94F8954288(), iLocal_43[1], 90f))
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
		if (unk_0xDF87568D121A99AC(-1, 892.9f, -1552.4f, 30f, 40f))
		{
			iLocal_31 = 2;
			iLocal_398 = 1;
		}
		if (iLocal_482 == 1)
		{
			iLocal_31 = 2;
			iLocal_398 = 1;
		}
		if (unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) != 0)
		{
			if (unk_0x95CCECA3948CFE7B(iLocal_43[0]))
			{
				if (!unk_0x2DC9BA2299B45EA6(iLocal_43[0]))
				{
					if (unk_0x9AD5716183392F62(iLocal_43[0], unk_0xC8B93D94F8954288()))
					{
						iLocal_31 = 2;
						iLocal_398 = 1;
					}
				}
			}
			if (unk_0x95CCECA3948CFE7B(iLocal_43[1]))
			{
				if (!unk_0x2DC9BA2299B45EA6(iLocal_43[1]))
				{
					if (unk_0x9AD5716183392F62(iLocal_43[1], unk_0xC8B93D94F8954288()))
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
				if (unk_0x693EBB4F13506457() > iLocal_95 + 4000)
				{
					iLocal_94 = 0;
					while (iLocal_94 <= 6)
					{
						if (func_163())
						{
							if (unk_0x95CCECA3948CFE7B(iLocal_35[iLocal_94]))
							{
								if (!unk_0x2DC9BA2299B45EA6(iLocal_35[iLocal_94]))
								{
									if (unk_0xD44470620D6C81EA(iLocal_35[iLocal_94]))
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
		if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
		{
			if (iLocal_404[0] == 1)
			{
				if (func_170(unk_0xC8B93D94F8954288()) != joaat("weapon_unarmed") && !func_169(0))
				{
					if (unk_0x9AD5716183392F62(iLocal_43[0], unk_0xC8B93D94F8954288()))
					{
						iLocal_31 = 2;
					}
				}
			}
			if (iLocal_404[1] == 1)
			{
				if (func_170(unk_0xC8B93D94F8954288()) != joaat("weapon_unarmed") && !func_169(0))
				{
					if (unk_0x9AD5716183392F62(iLocal_43[1], unk_0xC8B93D94F8954288()))
					{
						iLocal_31 = 2;
					}
				}
			}
		}
		if (unk_0x4F982ED5336EA899(Local_119, Local_132, 1) < 36f)
		{
			if (iLocal_404[0] == 1)
			{
				if (unk_0x9AD5716183392F62(iLocal_43[0], unk_0xC8B93D94F8954288()))
				{
					iLocal_31 = 2;
				}
				if (func_158(iLocal_43[0], unk_0xC8B93D94F8954288(), 1) < 20f)
				{
					if (unk_0x46E74F6A73335A40(unk_0xA34E7C2A5118D638(), iLocal_43[0]))
					{
						iLocal_31 = 2;
					}
				}
			}
			if (iLocal_404[1] == 1)
			{
				if (Local_119.f_2 < 36f || unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
				{
					if (unk_0x9AD5716183392F62(iLocal_43[1], unk_0xC8B93D94F8954288()))
					{
						iLocal_31 = 2;
					}
					if (func_158(iLocal_43[1], unk_0xC8B93D94F8954288(), 1) < 20f)
					{
						if (unk_0x46E74F6A73335A40(unk_0xA34E7C2A5118D638(), iLocal_43[1]))
						{
							iLocal_31 = 2;
						}
					}
				}
			}
		}
		if (iLocal_404[0] == 1)
		{
			if (func_158(unk_0xC8B93D94F8954288(), iLocal_43[0], 1) < 20f)
			{
				if (Local_119.f_0 > Local_125[0 /*3*/] && unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, 1, 0))
				{
					if (unk_0x9AD5716183392F62(iLocal_43[0], unk_0xC8B93D94F8954288()) || unk_0x46E74F6A73335A40(unk_0xA34E7C2A5118D638(), iLocal_43[0]))
					{
						iLocal_31 = 2;
					}
				}
			}
		}
		if (iLocal_404[1] == 1)
		{
			if (func_158(unk_0xC8B93D94F8954288(), iLocal_43[1], 1) < 20f)
			{
				if (Local_119.f_0 < Local_125[1 /*3*/] && unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0))
				{
					if (unk_0x9AD5716183392F62(iLocal_43[1], unk_0xC8B93D94F8954288()) || unk_0x46E74F6A73335A40(unk_0xA34E7C2A5118D638(), iLocal_43[1]))
					{
						iLocal_31 = 2;
					}
				}
			}
		}
	}
}

void func_172()
{
	iLocal_64 = 0;
	while (iLocal_64 <= 6)
	{
		if (unk_0x95CCECA3948CFE7B(iLocal_35[iLocal_64]))
		{
			if (!unk_0x2DC9BA2299B45EA6(iLocal_35[iLocal_64]))
			{
				if (iLocal_330[iLocal_64] == 0)
				{
					if (func_158(unk_0xC8B93D94F8954288(), iLocal_35[iLocal_64], 1) > 20f)
					{
						iLocal_330[iLocal_64] = 1;
					}
				}
				if (iLocal_330[iLocal_64] == 1)
				{
					if (func_158(unk_0xC8B93D94F8954288(), iLocal_35[iLocal_64], 1) < 20f)
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
		if (unk_0x95CCECA3948CFE7B(iLocal_35[iLocal_63]))
		{
			if (!unk_0x2DC9BA2299B45EA6(iLocal_35[iLocal_63]))
			{
				func_177(iLocal_35[iLocal_63]);
				if (iLocal_28 == 3 || iLocal_28 == 4)
				{
					if (iLocal_31 == 2 && iLocal_29 == 0)
					{
						func_176(1);
						if (iLocal_416 == 1)
						{
							func_101();
						}
					}
					if (unk_0xB7805A5BD5AE4AF1(iLocal_35[iLocal_63], 18))
					{
						if (iLocal_29 != 4)
						{
							func_176(4);
							if (iLocal_416 == 1)
							{
								func_174();
							}
							iLocal_482 = 1;
						}
					}
					if (iLocal_29 != 4)
					{
						if (unk_0xDF87568D121A99AC(-1, 892.9f, -1552.4f, 30f, 40f))
						{
							func_176(4);
							if (iLocal_416 == 1)
							{
								func_174();
							}
						}
					}
					if ((((((((func_173(iLocal_35[iLocal_63], iLocal_35[0]) || func_173(iLocal_35[iLocal_63], iLocal_35[1])) || func_173(iLocal_35[iLocal_63], iLocal_35[2])) || func_173(iLocal_35[iLocal_63], iLocal_35[3])) || func_173(iLocal_35[iLocal_63], iLocal_35[4])) || func_173(iLocal_35[iLocal_63], iLocal_35[5])) || func_173(iLocal_35[iLocal_63], iLocal_35[6])) || func_173(iLocal_35[iLocal_63], iLocal_43[0])) || func_173(iLocal_35[iLocal_63], iLocal_43[1]))
					{
						if (iLocal_29 != 4)
						{
							func_176(4);
							if (iLocal_416 == 1)
							{
								func_174();
							}
							iLocal_482 = 1;
						}
					}
					if ((func_170(unk_0xC8B93D94F8954288()) == joaat("weapon_unarmed") || unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 1)) || func_169(0))
					{
						if (iLocal_398 == 0)
						{
							if (func_158(unk_0xC8B93D94F8954288(), iLocal_35[iLocal_63], 1) > 20f)
							{
								if (iLocal_322[iLocal_63] == 1)
								{
									iLocal_322[iLocal_63] = 0;
								}
								if (((((iLocal_338 == 1 && iLocal_29 != 0) && iLocal_29 != 2) && iLocal_29 != 3) && iLocal_29 != 4) && iLocal_31 != 2)
								{
									func_176(0);
								}
							}
							if (func_158(unk_0xC8B93D94F8954288(), iLocal_35[iLocal_63], 1) < 20f && unk_0x9AD5716183392F62(iLocal_35[iLocal_63], unk_0xC8B93D94F8954288()))
							{
								if (((iLocal_29 != 1 && iLocal_29 != 2) && iLocal_29 != 3) && iLocal_29 != 4)
								{
									if (iLocal_431 == 0 && iLocal_398 == 0)
									{
										func_176(1);
										if (iLocal_416 == 1)
										{
											func_101();
										}
									}
									else
									{
										func_176(3);
										if (iLocal_416 == 1)
										{
											func_174();
										}
									}
								}
							}
							if (func_158(unk_0xC8B93D94F8954288(), iLocal_35[iLocal_63], 1) < 20f && unk_0x9AD5716183392F62(iLocal_35[iLocal_63], unk_0xC8B93D94F8954288()))
							{
								if (iLocal_322[iLocal_63] == 0)
								{
									iLocal_69[iLocal_63] = unk_0x693EBB4F13506457();
									iLocal_322[iLocal_63] = 1;
								}
								if (iLocal_322[iLocal_63] == 1)
								{
									if (unk_0x693EBB4F13506457() > iLocal_69[iLocal_63] + 24000)
									{
										if ((iLocal_29 != 2 && iLocal_29 != 3) && iLocal_29 != 4)
										{
											func_176(2);
											if (iLocal_416 == 1)
											{
												func_174();
											}
										}
									}
								}
							}
						}
						if (iLocal_398 == 1)
						{
							if (func_158(unk_0xC8B93D94F8954288(), iLocal_35[iLocal_63], 1) < 20f && unk_0x9AD5716183392F62(iLocal_35[iLocal_63], unk_0xC8B93D94F8954288()))
							{
								if (iLocal_29 != 3 && iLocal_29 != 4)
								{
									func_176(3);
									if (iLocal_416 == 1)
									{
										func_174();
									}
								}
							}
						}
						if (unk_0x7E515EEFC038658D(unk_0xC8B93D94F8954288()))
						{
							if (iLocal_413 == 0)
							{
								iLocal_90 = unk_0x693EBB4F13506457();
								iLocal_413 = 1;
							}
							else if (unk_0x693EBB4F13506457() > iLocal_90 + 3000)
							{
								if (func_158(unk_0xC8B93D94F8954288(), iLocal_35[iLocal_63], 1) < 20f && unk_0x9AD5716183392F62(iLocal_35[iLocal_63], unk_0xC8B93D94F8954288()))
								{
									if (iLocal_29 != 3 && iLocal_29 != 4)
									{
										func_176(3);
										if (iLocal_416 == 1)
										{
											func_174();
										}
									}
								}
							}
						}
						else if (iLocal_413 == 1)
						{
							iLocal_413 = 0;
						}
						if (unk_0x95CCECA3948CFE7B(iLocal_33))
						{
							if (unk_0x5D42322C7DB888D0(iLocal_33, 0))
							{
								if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iLocal_33, 1))
								{
									if (unk_0x9AD5716183392F62(iLocal_35[iLocal_63], unk_0xC8B93D94F8954288()))
									{
										if (iLocal_29 != 3 && iLocal_29 != 4)
										{
											iLocal_390 = 1;
											func_176(3);
											if (iLocal_416 == 1)
											{
												func_174();
											}
										}
									}
								}
								if (func_158(unk_0xC8B93D94F8954288(), iLocal_33, 1) < 5f && unk_0xC0AE63CA97F3FF6A(unk_0xC8B93D94F8954288()))
								{
									if (unk_0x9AD5716183392F62(iLocal_35[iLocal_63], unk_0xC8B93D94F8954288()))
									{
										if (iLocal_29 != 3 && iLocal_29 != 4)
										{
											iLocal_390 = 1;
											func_176(3);
											if (iLocal_416 == 1)
											{
												func_174();
											}
										}
									}
									if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 917.3436f, -1554.42f, 29.26611f, 916.8774f, -1556.441f, 33.00661f, 2.25f, 0, 1, 0))
									{
										if (unk_0x95CCECA3948CFE7B(iLocal_35[0]))
										{
											if (!unk_0x2DC9BA2299B45EA6(iLocal_35[0]))
											{
												if (unk_0xA0C23498D8E0BB93(iLocal_35[0], 912.3f, -1542.6f, 30f, 3f, 3f, 3f, 0, 1, 0))
												{
													if (iLocal_29 != 3 && iLocal_29 != 4)
													{
														iLocal_390 = 1;
														func_176(3);
														if (iLocal_416 == 1)
														{
															func_174();
														}
													}
												}
											}
										}
									}
								}
							}
						}
						if (unk_0x95CCECA3948CFE7B(iLocal_35[6]))
						{
							if (!unk_0x2DC9BA2299B45EA6(iLocal_35[6]))
							{
								if (func_158(unk_0xC8B93D94F8954288(), iLocal_35[6], 1) < 20f)
								{
									if ((unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 928.7163f, -1546.671f, 27.34603f, 921.8971f, -1549.752f, 34.04724f, 6.25f, 0, 1, 0) || unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 931.868f, -1545.185f, 27.3653f, 925.8857f, -1547.303f, 34.07205f, 3.5f, 0, 1, 0)) || unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 929.4908f, -1524.829f, 32.84098f, 929.3696f, -1545.288f, 37.34258f, 5f, 0, 1, 0))
									{
										if (unk_0x9AD5716183392F62(iLocal_35[6], unk_0xC8B93D94F8954288()))
										{
											if (Local_119.f_2 > 31f)
											{
												if (iLocal_29 != 3 && iLocal_29 != 4)
												{
													iLocal_428 = 1;
													func_176(3);
													if (iLocal_416 == 1)
													{
														func_174();
													}
												}
											}
											else if (((iLocal_29 != 1 && iLocal_29 != 2) && iLocal_29 != 3) && iLocal_29 != 4)
											{
												func_176(1);
												if (iLocal_416 == 1)
												{
													func_101();
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
							iLocal_68 = unk_0x693EBB4F13506457();
							iLocal_321 = 1;
						}
						if (iLocal_321 == 1)
						{
							if (unk_0x693EBB4F13506457() > iLocal_68 + 4000 || iLocal_29 == 3)
							{
								if (func_158(unk_0xC8B93D94F8954288(), iLocal_35[iLocal_63], 1) < 20f)
								{
									if (unk_0x9AD5716183392F62(iLocal_35[iLocal_63], unk_0xC8B93D94F8954288()))
									{
										if (iLocal_29 != 4)
										{
											func_176(4);
											if (iLocal_416 == 1)
											{
												func_174();
											}
										}
									}
								}
							}
						}
						if (func_158(unk_0xC8B93D94F8954288(), iLocal_35[iLocal_63], 1) < 40f)
						{
							if (unk_0x1E8D3FA42E89ED72(unk_0xC8B93D94F8954288()))
							{
								if (unk_0x9AD5716183392F62(iLocal_35[iLocal_63], unk_0xC8B93D94F8954288()) || unk_0x46E74F6A73335A40(unk_0xA34E7C2A5118D638(), iLocal_35[iLocal_63]))
								{
									if (iLocal_29 != 4)
									{
										func_176(4);
										if (iLocal_416 == 1)
										{
											func_174();
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

int func_173(int iParam0, int iParam1)
{
	if (((func_158(iParam0, iParam1, 1) < 20f && unk_0xAF9BF2C76079B4BF(iParam0, iParam1, 90f)) && !unk_0x2DC9BA2299B45EA6(iParam0)) && unk_0x2DC9BA2299B45EA6(iParam1))
	{
		return 1;
	}
	return 0;
}

void func_174()
{
	Global_14578 = 0;
	func_175();
}

void func_175()
{
	unk_0xE9A2B98CC2F095D6();
	Global_16723 = 0;
	if (unk_0x2964A62922189B93())
	{
		unk_0xB518E9C8553B1D2B(0);
		Global_15712 = 6;
	}
}

void func_176(int iParam0)
{
	iLocal_29 = iParam0;
	iLocal_67 = 0;
}

void func_177(int iParam0)
{
	iLocal_65 = 0;
	while (iLocal_65 <= 6)
	{
		if (iParam0 == iLocal_35[iLocal_65])
		{
			if (func_158(unk_0xC8B93D94F8954288(), iParam0, 1) < 20f && unk_0x9AD5716183392F62(iParam0, unk_0xC8B93D94F8954288()))
			{
				if (iLocal_339[iLocal_65] == 0)
				{
					unk_0xE48D9147BC1F4CD7(iParam0, unk_0xC8B93D94F8954288(), -1, 1072, 3);
					iLocal_339[iLocal_65] = 1;
				}
			}
			else if (iLocal_339[iLocal_65] == 1)
			{
				unk_0xE48D9147BC1F4CD7(iParam0, unk_0xC8B93D94F8954288(), 1, 1072, 3);
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
				unk_0xAAD662D7E0D59F4C(iParam0, 1);
				if (iParam0 == iLocal_35[0])
				{
					if (unk_0xAD158329EB26D8F4(912.2f, -1542.5f, 29.8f, 3f, 0))
					{
						if (unk_0x090C65D5190A249D(iLocal_35[0], 1647992574) != 1 && unk_0x090C65D5190A249D(iLocal_35[0], -1680762137) != 1)
						{
							unk_0xD1324A3D06EF0A56(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[1])
				{
					if (unk_0xAD158329EB26D8F4(917.4f, -1517.4f, 30f, 3f, 0))
					{
						if (unk_0x090C65D5190A249D(iLocal_35[1], 1647992574) != 1 && unk_0x090C65D5190A249D(iLocal_35[1], -1680762137) != 1)
						{
							unk_0xD1324A3D06EF0A56(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[2])
				{
					if (unk_0xAD158329EB26D8F4(869.8f, -1541.2f, 29.4f, 3f, 0))
					{
						if (unk_0x090C65D5190A249D(iLocal_35[2], 1647992574) != 1 && unk_0x090C65D5190A249D(iLocal_35[2], -1680762137) != 1)
						{
							unk_0xD1324A3D06EF0A56(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[3])
				{
					if (unk_0xAD158329EB26D8F4(884.2f, -1574.1f, 30f, 3f, 0))
					{
						if (unk_0x090C65D5190A249D(iLocal_35[3], 1647992574) != 1 && unk_0x090C65D5190A249D(iLocal_35[3], -1680762137) != 1)
						{
							unk_0xD1324A3D06EF0A56(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[4])
				{
					if (unk_0xAD158329EB26D8F4(904f, -1575f, 30f, 3f, 0))
					{
						if (unk_0x090C65D5190A249D(iLocal_35[4], 1647992574) != 1 && unk_0x090C65D5190A249D(iLocal_35[4], -1680762137) != 1)
						{
							unk_0xD1324A3D06EF0A56(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[5])
				{
					if (unk_0xAD158329EB26D8F4(905.9f, -1574.8f, 29.9f, 3f, 0))
					{
						if (unk_0x090C65D5190A249D(iLocal_35[5], 1647992574) != 1 && unk_0x090C65D5190A249D(iLocal_35[5], -1680762137) != 1)
						{
							unk_0xD1324A3D06EF0A56(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[6])
				{
					if (unk_0xAD158329EB26D8F4(889.5f, -1562f, 29.7f, 3f, 0))
					{
						if (unk_0x090C65D5190A249D(iLocal_35[6], 1647992574) != 1 && unk_0x090C65D5190A249D(iLocal_35[6], -1680762137) != 1)
						{
							unk_0xD1324A3D06EF0A56(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
						}
					}
				}
				iLocal_67++;
			}
			if (iLocal_67 == 1)
			{
				if (unk_0x95CCECA3948CFE7B(iLocal_35[4]))
				{
					if (!unk_0x2DC9BA2299B45EA6(iLocal_35[4]))
					{
						if (unk_0x95CCECA3948CFE7B(iLocal_35[5]))
						{
							if (!unk_0x2DC9BA2299B45EA6(iLocal_35[5]))
							{
								if (func_158(unk_0xC8B93D94F8954288(), iLocal_35[4], 1) < 25f)
								{
									if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 926.455f, -1582.384f, 29.32759f, 909.6322f, -1581.374f, 31.58907f, 9.5f, 0, 1, 0) || Local_119.f_1 > -1573f)
									{
										if (iLocal_416 == 0)
										{
											func_119(&uLocal_137, 3, iLocal_35[4], "CONSTRUCTION2", 0, 1);
											func_119(&uLocal_137, 5, iLocal_35[5], "CONSTRUCTION3", 0, 1);
											unk_0xE48D9147BC1F4CD7(iLocal_35[4], iLocal_35[5], -1, 0, 2);
											unk_0xE48D9147BC1F4CD7(iLocal_35[5], iLocal_35[4], -1, 0, 2);
											if (!func_163())
											{
												if (!unk_0xA3858ADDDBC3CB71() || !unk_0xA77673910115074B())
												{
													if (func_157(&uLocal_137, "SOL1AUD", "SOL1_TALK", 6, 1, 1, 0))
													{
														iLocal_416 = 1;
													}
												}
											}
										}
									}
								}
								if (unk_0xA0C23498D8E0BB93(unk_0xC8B93D94F8954288(), 921.9f, -1556.5f, 30f, 5f, 5f, 5f, 0, 1, 1))
								{
									if (iLocal_423 == 0)
									{
										iLocal_92 = unk_0x693EBB4F13506457();
										iLocal_423 = 1;
									}
									if (iLocal_423 == 1)
									{
										if (unk_0x693EBB4F13506457() > iLocal_92 + 4000)
										{
											if (iLocal_416 == 0)
											{
												func_119(&uLocal_137, 3, iLocal_35[4], "CONSTRUCTION2", 0, 1);
												func_119(&uLocal_137, 5, iLocal_35[5], "CONSTRUCTION3", 0, 1);
												unk_0xE48D9147BC1F4CD7(iLocal_35[4], iLocal_35[5], -1, 0, 2);
												unk_0xE48D9147BC1F4CD7(iLocal_35[5], iLocal_35[4], -1, 0, 2);
												if (!func_163())
												{
													if (!unk_0xA3858ADDDBC3CB71() || !unk_0xA77673910115074B())
													{
														if (func_157(&uLocal_137, "SOL1AUD", "SOL1_TALK", 6, 1, 1, 0))
														{
															iLocal_416 = 1;
														}
													}
												}
											}
										}
									}
								}
								if (iLocal_416 == 1 && !func_163())
								{
									if (iLocal_415 == 0)
									{
										if (unk_0xAD158329EB26D8F4(865f, -1558.1f, 29.5f, 3f, 0))
										{
											unk_0xD1FE26E80A6E2C00(iLocal_35[4]);
											unk_0xD1FE26E80A6E2C00(iLocal_35[5]);
											unk_0x6C43AC8B5408F1BF(iLocal_35[4], 865f, -1558.1f, 29.5f, 3f, 0);
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
							iLocal_93 = unk_0x693EBB4F13506457();
							iLocal_425 = 1;
						}
						if (unk_0x693EBB4F13506457() > iLocal_93 + 30000)
						{
							if (iLocal_424 == 0)
							{
								if (unk_0xAD158329EB26D8F4(925f, -1561f, 30f, 3f, 0))
								{
									unk_0x6C43AC8B5408F1BF(iLocal_35[6], 925f, -1561f, 30f, 3f, 0);
									iLocal_424 = 1;
									iLocal_425 = 0;
								}
							}
						}
					}
					if (iLocal_424 == 1)
					{
						if (unk_0xA0C23498D8E0BB93(iLocal_35[6], 925f, -1561f, 30f, 3f, 3f, 3f, 0, 1, 0))
						{
							if (func_158(unk_0xC8B93D94F8954288(), iLocal_35[6], 1) < 15f && Local_119.f_2 < 40f)
							{
								if (iLocal_426 == 0)
								{
									if (unk_0xAD158329EB26D8F4(909.5f, -1515.5f, 30f, 3f, 0))
									{
										unk_0xD1324A3D06EF0A56(iLocal_35[6], 909.5f, -1515.5f, 30f, 50f, 0);
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
							if (func_158(unk_0xC8B93D94F8954288(), iParam0, 1) < 20f)
							{
								if (iLocal_347[iLocal_65] == 0)
								{
									if (unk_0x9AD5716183392F62(iParam0, unk_0xC8B93D94F8954288()) || unk_0x46E74F6A73335A40(unk_0xA34E7C2A5118D638(), iParam0))
									{
										if (!unk_0xE77F5DDBC2E96204(iParam0))
										{
											unk_0xBA73099E237C7E5E(iParam0);
										}
										if (unk_0xE77F5DDBC2E96204(iParam0))
										{
											unk_0x5124C5FA52D2AF3E(iParam0);
										}
										unk_0x3E2E609450787FFE(&uLocal_57);
										unk_0x1510D3A1E178AAEF(0, unk_0xC8B93D94F8954288(), -1, 2f, 1f, 1073741824, 0);
										unk_0xC518AECFA9CF7722(0, unk_0xC8B93D94F8954288(), 0);
										unk_0x939BC11172AA1303(uLocal_57);
										unk_0xBFE865E3B513451B(iParam0, uLocal_57);
										unk_0xA9351C9309E03069(&uLocal_57);
										unk_0xAAD662D7E0D59F4C(iParam0, 1);
										iLocal_339[iLocal_65] = 0;
										iLocal_347[iLocal_65] = 1;
									}
								}
								if (iLocal_347[iLocal_65] == 1)
								{
									if (!unk_0xAF9BF2C76079B4BF(iParam0, unk_0xC8B93D94F8954288(), 45f))
									{
										unk_0xC518AECFA9CF7722(iParam0, unk_0xC8B93D94F8954288(), 0);
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
									if (unk_0xAD158329EB26D8F4(912.2f, -1542.5f, 29.8f, 3f, 0))
									{
										if (unk_0x090C65D5190A249D(iLocal_35[0], 1647992574) != 1 && unk_0x090C65D5190A249D(iLocal_35[0], -1680762137) != 1)
										{
											unk_0xD1324A3D06EF0A56(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
											unk_0xAAD662D7E0D59F4C(iLocal_35[0], 1);
										}
									}
								}
								if (iParam0 == iLocal_35[1])
								{
									if (unk_0xAD158329EB26D8F4(917.4f, -1517.4f, 30f, 3f, 0))
									{
										if (unk_0x090C65D5190A249D(iLocal_35[1], 1647992574) != 1 && unk_0x090C65D5190A249D(iLocal_35[1], -1680762137) != 1)
										{
											unk_0xD1324A3D06EF0A56(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
											unk_0xAAD662D7E0D59F4C(iLocal_35[1], 1);
										}
									}
								}
								if (iParam0 == iLocal_35[2])
								{
									if (unk_0xAD158329EB26D8F4(869.8f, -1541.2f, 29.4f, 3f, 0))
									{
										if (unk_0x090C65D5190A249D(iLocal_35[2], 1647992574) != 1 && unk_0x090C65D5190A249D(iLocal_35[2], -1680762137) != 1)
										{
											unk_0xD1324A3D06EF0A56(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
											unk_0xAAD662D7E0D59F4C(iLocal_35[2], 1);
										}
									}
								}
								if (iParam0 == iLocal_35[3])
								{
									if (unk_0xAD158329EB26D8F4(884.2f, -1574.1f, 30f, 3f, 0))
									{
										if (unk_0x090C65D5190A249D(iLocal_35[3], 1647992574) != 1 && unk_0x090C65D5190A249D(iLocal_35[3], -1680762137) != 1)
										{
											unk_0xD1324A3D06EF0A56(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
											unk_0xAAD662D7E0D59F4C(iLocal_35[3], 1);
										}
									}
								}
								if (iParam0 == iLocal_35[4])
								{
									if (unk_0xAD158329EB26D8F4(904f, -1575f, 30f, 3f, 0))
									{
										if (unk_0x090C65D5190A249D(iLocal_35[4], 1647992574) != 1 && unk_0x090C65D5190A249D(iLocal_35[4], -1680762137) != 1)
										{
											unk_0xD1324A3D06EF0A56(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
											unk_0xAAD662D7E0D59F4C(iLocal_35[4], 1);
										}
									}
								}
								if (iParam0 == iLocal_35[5])
								{
									if (unk_0xAD158329EB26D8F4(905.9f, -1574.8f, 29.9f, 3f, 0))
									{
										if (unk_0x090C65D5190A249D(iLocal_35[5], 1647992574) != 1 && unk_0x090C65D5190A249D(iLocal_35[5], -1680762137) != 1)
										{
											unk_0xD1324A3D06EF0A56(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
											unk_0xAAD662D7E0D59F4C(iLocal_35[5], 1);
										}
									}
								}
								if (iParam0 == iLocal_35[6])
								{
									if (unk_0xAD158329EB26D8F4(889.5f, -1562f, 29.7f, 3f, 0))
									{
										if (unk_0x090C65D5190A249D(iLocal_35[6], 1647992574) != 1 && unk_0x090C65D5190A249D(iLocal_35[6], -1680762137) != 1)
										{
											unk_0xD1324A3D06EF0A56(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
											unk_0xAAD662D7E0D59F4C(iLocal_35[6], 1);
										}
									}
								}
							}
						}
					}
					else if (iParam0 == iLocal_35[iLocal_65])
					{
						if (func_158(unk_0xC8B93D94F8954288(), iParam0, 1) < 20f)
						{
							if (iLocal_347[iLocal_65] == 0)
							{
								if (unk_0x9AD5716183392F62(iParam0, unk_0xC8B93D94F8954288()) || unk_0x46E74F6A73335A40(unk_0xA34E7C2A5118D638(), iParam0))
								{
									if (!unk_0xE77F5DDBC2E96204(iParam0))
									{
										unk_0xBA73099E237C7E5E(iParam0);
									}
									if (unk_0xE77F5DDBC2E96204(iParam0))
									{
										unk_0x5124C5FA52D2AF3E(iParam0);
									}
									unk_0x3E2E609450787FFE(&uLocal_57);
									unk_0xC518AECFA9CF7722(0, unk_0xC8B93D94F8954288(), 0);
									unk_0xE48D9147BC1F4CD7(0, unk_0xC8B93D94F8954288(), -1, 1072, 3);
									unk_0x939BC11172AA1303(uLocal_57);
									unk_0xBFE865E3B513451B(iParam0, uLocal_57);
									unk_0xA9351C9309E03069(&uLocal_57);
									unk_0xAAD662D7E0D59F4C(iParam0, 1);
									iLocal_339[iLocal_65] = 0;
									iLocal_347[iLocal_65] = 1;
								}
							}
							if (iLocal_347[iLocal_65] == 1)
							{
								if (!unk_0xAF9BF2C76079B4BF(iParam0, unk_0xC8B93D94F8954288(), 45f))
								{
									unk_0xC518AECFA9CF7722(iParam0, unk_0xC8B93D94F8954288(), 0);
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
								if (unk_0xAD158329EB26D8F4(912.2f, -1542.5f, 29.8f, 3f, 0))
								{
									if (unk_0x090C65D5190A249D(iLocal_35[0], 1647992574) != 1 && unk_0x090C65D5190A249D(iLocal_35[0], -1680762137) != 1)
									{
										unk_0xD1324A3D06EF0A56(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
										unk_0xAAD662D7E0D59F4C(iLocal_35[0], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[1])
							{
								if (unk_0xAD158329EB26D8F4(917.4f, -1517.4f, 30f, 3f, 0))
								{
									if (unk_0x090C65D5190A249D(iLocal_35[1], 1647992574) != 1 && unk_0x090C65D5190A249D(iLocal_35[1], -1680762137) != 1)
									{
										unk_0xD1324A3D06EF0A56(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
										unk_0xAAD662D7E0D59F4C(iLocal_35[1], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[2])
							{
								if (unk_0xAD158329EB26D8F4(869.8f, -1541.2f, 29.4f, 3f, 0))
								{
									if (unk_0x090C65D5190A249D(iLocal_35[2], 1647992574) != 1 && unk_0x090C65D5190A249D(iLocal_35[2], -1680762137) != 1)
									{
										unk_0xD1324A3D06EF0A56(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
										unk_0xAAD662D7E0D59F4C(iLocal_35[2], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[3])
							{
								if (unk_0xAD158329EB26D8F4(884.2f, -1574.1f, 30f, 3f, 0))
								{
									if (unk_0x090C65D5190A249D(iLocal_35[3], 1647992574) != 1 && unk_0x090C65D5190A249D(iLocal_35[3], -1680762137) != 1)
									{
										unk_0xD1324A3D06EF0A56(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
										unk_0xAAD662D7E0D59F4C(iLocal_35[3], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[4])
							{
								if (unk_0xAD158329EB26D8F4(904f, -1575f, 30f, 3f, 0))
								{
									if (unk_0x090C65D5190A249D(iLocal_35[4], 1647992574) != 1 && unk_0x090C65D5190A249D(iLocal_35[4], -1680762137) != 1)
									{
										unk_0xD1324A3D06EF0A56(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
										unk_0xAAD662D7E0D59F4C(iLocal_35[4], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[5])
							{
								if (unk_0xAD158329EB26D8F4(905.9f, -1574.8f, 29.9f, 3f, 0))
								{
									if (unk_0x090C65D5190A249D(iLocal_35[5], 1647992574) != 1 && unk_0x090C65D5190A249D(iLocal_35[5], -1680762137) != 1)
									{
										unk_0xD1324A3D06EF0A56(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
										unk_0xAAD662D7E0D59F4C(iLocal_35[5], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[6])
							{
								if (unk_0xAD158329EB26D8F4(889.5f, -1562f, 29.7f, 3f, 0))
								{
									if (unk_0x090C65D5190A249D(iLocal_35[6], 1647992574) != 1 && unk_0x090C65D5190A249D(iLocal_35[6], -1680762137) != 1)
									{
										unk_0xD1324A3D06EF0A56(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
										unk_0xAAD662D7E0D59F4C(iLocal_35[6], 1);
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
				unk_0x6CCF5F545348D54E(5, iLocal_302, joaat("player"));
				iLocal_67++;
			}
			if (iLocal_67 == 1)
			{
				iLocal_65 = 0;
				while (iLocal_65 <= 6)
				{
					if (iParam0 == iLocal_35[iLocal_65])
					{
						if (func_158(iParam0, unk_0xC8B93D94F8954288(), 1) < 15f)
						{
							if (func_158(iParam0, unk_0xC8B93D94F8954288(), 1) > 3f)
							{
								if (unk_0x090C65D5190A249D(iParam0, 242628503) != 0 || unk_0x090C65D5190A249D(iParam0, 242628503) != 1)
								{
									if (!unk_0xE77F5DDBC2E96204(iParam0))
									{
										unk_0xBA73099E237C7E5E(iParam0);
									}
									if (unk_0xE77F5DDBC2E96204(iParam0))
									{
										unk_0x5124C5FA52D2AF3E(iParam0);
									}
									unk_0x3E2E609450787FFE(&uLocal_57);
									unk_0x1510D3A1E178AAEF(0, unk_0xC8B93D94F8954288(), -1, 1f, 1f, 1073741824, 0);
									unk_0xC518AECFA9CF7722(0, unk_0xC8B93D94F8954288(), 0);
									unk_0x939BC11172AA1303(uLocal_57);
									unk_0xBFE865E3B513451B(iParam0, uLocal_57);
									unk_0xA9351C9309E03069(&uLocal_57);
									iLocal_339[iLocal_65] = 0;
								}
							}
						}
						else
						{
							if (iParam0 == iLocal_35[0])
							{
								if (unk_0xAD158329EB26D8F4(912.2f, -1542.5f, 29.8f, 3f, 0))
								{
									if (unk_0x090C65D5190A249D(iLocal_35[0], 1647992574) != 1 && unk_0x090C65D5190A249D(iLocal_35[0], -1680762137) != 1)
									{
										unk_0xD1324A3D06EF0A56(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
										unk_0xAAD662D7E0D59F4C(iLocal_35[0], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[1])
							{
								if (unk_0xAD158329EB26D8F4(917.4f, -1517.4f, 30f, 3f, 0))
								{
									if (unk_0x090C65D5190A249D(iLocal_35[1], 1647992574) != 1 && unk_0x090C65D5190A249D(iLocal_35[1], -1680762137) != 1)
									{
										unk_0xD1324A3D06EF0A56(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
										unk_0xAAD662D7E0D59F4C(iLocal_35[1], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[2])
							{
								if (unk_0xAD158329EB26D8F4(869.8f, -1541.2f, 29.4f, 3f, 0))
								{
									if (unk_0x090C65D5190A249D(iLocal_35[2], 1647992574) != 1 && unk_0x090C65D5190A249D(iLocal_35[2], -1680762137) != 1)
									{
										unk_0xD1324A3D06EF0A56(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
										unk_0xAAD662D7E0D59F4C(iLocal_35[2], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[3])
							{
								if (unk_0xAD158329EB26D8F4(884.2f, -1574.1f, 30f, 3f, 0))
								{
									if (unk_0x090C65D5190A249D(iLocal_35[3], 1647992574) != 1 && unk_0x090C65D5190A249D(iLocal_35[3], -1680762137) != 1)
									{
										unk_0xD1324A3D06EF0A56(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
										unk_0xAAD662D7E0D59F4C(iLocal_35[3], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[4])
							{
								if (unk_0xAD158329EB26D8F4(904f, -1575f, 30f, 3f, 0))
								{
									if (unk_0x090C65D5190A249D(iLocal_35[4], 1647992574) != 1 && unk_0x090C65D5190A249D(iLocal_35[4], -1680762137) != 1)
									{
										unk_0xD1324A3D06EF0A56(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
										unk_0xAAD662D7E0D59F4C(iLocal_35[4], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[5])
							{
								if (unk_0xAD158329EB26D8F4(905.9f, -1574.8f, 29.9f, 3f, 0))
								{
									if (unk_0x090C65D5190A249D(iLocal_35[5], 1647992574) != 1 && unk_0x090C65D5190A249D(iLocal_35[5], -1680762137) != 1)
									{
										unk_0xD1324A3D06EF0A56(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
										unk_0xAAD662D7E0D59F4C(iLocal_35[5], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[6])
							{
								if (unk_0xAD158329EB26D8F4(889.5f, -1562f, 29.7f, 3f, 0))
								{
									if (unk_0x090C65D5190A249D(iLocal_35[6], 1647992574) != 1 && unk_0x090C65D5190A249D(iLocal_35[6], -1680762137) != 1)
									{
										unk_0xD1324A3D06EF0A56(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
										unk_0xAAD662D7E0D59F4C(iLocal_35[6], 1);
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
					iLocal_79 = unk_0x693EBB4F13506457();
					iLocal_394 = 1;
				}
				if (iLocal_394 == 1)
				{
					if (unk_0x693EBB4F13506457() > iLocal_79 + 9000)
					{
						unk_0x60B57BC5E51D2074(5);
						unk_0xFD62177C7242216E(1f);
						unk_0xB47D5A4E4AE9BEAD(unk_0xA34E7C2A5118D638(), 2, 0);
						unk_0x1C9B7C3360143C4C(unk_0xA34E7C2A5118D638(), 0);
						iLocal_393 = 1;
					}
				}
			}
			if (iLocal_67 == 0)
			{
				unk_0x6CCF5F545348D54E(5, iLocal_302, joaat("player"));
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
							if (func_158(iParam0, unk_0xC8B93D94F8954288(), 1) < 100f)
							{
								if (iLocal_355[iLocal_65] == 0)
								{
									unk_0xAAD662D7E0D59F4C(iParam0, 1);
									iLocal_355[iLocal_65] = 1;
								}
								if (iLocal_363[iLocal_65] == 0)
								{
									if (!unk_0xE77F5DDBC2E96204(iParam0))
									{
										unk_0xBA73099E237C7E5E(iParam0);
									}
									if (unk_0xE77F5DDBC2E96204(iParam0))
									{
										unk_0x5124C5FA52D2AF3E(iParam0);
									}
									unk_0x937BE3A0F630EFAD(iParam0, 100f, 0);
									iLocal_339[iLocal_65] = 0;
									iLocal_363[iLocal_65] = 1;
								}
							}
						}
						iLocal_65++;
					}
					if (iLocal_468 == 0)
					{
						if (unk_0x95CCECA3948CFE7B(iLocal_35[0]))
						{
							if (!unk_0x2DC9BA2299B45EA6(iLocal_35[0]))
							{
								if (unk_0x95CCECA3948CFE7B(iLocal_33))
								{
									if (unk_0x5D42322C7DB888D0(iLocal_33, 0))
									{
										if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iLocal_33, 1) && unk_0xA0C23498D8E0BB93(iLocal_33, 919.2f, -1554.4f, 30f, 4f, 4f, 4f, 0, 1, 0))
										{
											if (!unk_0xE77F5DDBC2E96204(iLocal_35[0]))
											{
												unk_0xBA73099E237C7E5E(iLocal_35[0]);
											}
											if (unk_0xE77F5DDBC2E96204(iLocal_35[0]))
											{
												unk_0x5124C5FA52D2AF3E(iLocal_35[0]);
											}
											unk_0x3E2E609450787FFE(&uLocal_57);
											unk_0x81333BEA4837207C(0, 917.8f, -1561f, 29f, 3f, -1, 1048576000, 0, 1193033728);
											unk_0xC518AECFA9CF7722(0, unk_0xC8B93D94F8954288(), 0);
											unk_0x5323F488E6A1B660(0, "misscarsteal4@director_grip", "mcs_2_loop_grip1", 8f, -8f, -1, 1, 0, 0, 0, 0);
											unk_0x939BC11172AA1303(uLocal_57);
											unk_0xBFE865E3B513451B(iLocal_35[0], uLocal_57);
											unk_0xA9351C9309E03069(&uLocal_57);
											iLocal_468 = 1;
										}
									}
								}
							}
						}
					}
					if (iLocal_468 == 1 && iLocal_487 == 0)
					{
						if (unk_0x95CCECA3948CFE7B(iLocal_35[0]))
						{
							if (!unk_0x2DC9BA2299B45EA6(iLocal_35[0]))
							{
								if (unk_0xA0C23498D8E0BB93(iLocal_35[0], 917.8f, -1561f, 29f, 2f, 2f, 2f, 0, 1, 0))
								{
									func_119(&uLocal_137, 3, iLocal_35[0], "FHPrepBWorker", 0, 1);
									func_166(iLocal_35[0], "FHPB_BBAA", "FHPrepBWorker", 4);
									iLocal_487 = 1;
								}
							}
						}
					}
					if (iLocal_467 == 0)
					{
						if (unk_0x693EBB4F13506457() > iLocal_79 + 3000)
						{
							if (unk_0x95CCECA3948CFE7B(iLocal_35[5]))
							{
								if (!unk_0x2DC9BA2299B45EA6(iLocal_35[5]))
								{
									unk_0x5323F488E6A1B660(iLocal_35[5], "cellphone@str", "cellphone_call_listen_c", 4f, -8f, -1, 49, 0, 0, 0, 0);
									iLocal_111 = unk_0x693EBB4F13506457();
									iLocal_467 = 1;
								}
							}
						}
					}
					else if (iLocal_466 == 0)
					{
						if (unk_0x693EBB4F13506457() > iLocal_111 + 5000)
						{
							if (unk_0x95CCECA3948CFE7B(iLocal_35[5]))
							{
								if (!unk_0x2DC9BA2299B45EA6(iLocal_35[5]))
								{
									unk_0x5124C5FA52D2AF3E(iLocal_35[5]);
									unk_0x45EF2026AF681474(iLocal_35[5], unk_0xC8B93D94F8954288(), 0, 16);
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
							if (unk_0x95CCECA3948CFE7B(iParam0))
							{
								if (!unk_0x2DC9BA2299B45EA6(iParam0))
								{
									unk_0xAAD662D7E0D59F4C(iParam0, 1);
									if (unk_0x277ECDA23D8CCEB4(iParam0, 0))
									{
										if (func_158(iParam0, unk_0xC8B93D94F8954288(), 1) > 200f)
										{
											if (!unk_0xE77F5DDBC2E96204(iParam0))
											{
												unk_0xBA73099E237C7E5E(iParam0);
											}
											if (unk_0xE77F5DDBC2E96204(iParam0))
											{
												unk_0x5124C5FA52D2AF3E(iParam0);
											}
											unk_0x622E764F80DBF8B7(iParam0, unk_0xC8B93D94F8954288(), 1000f, -1, 0, 0);
											iLocal_306[iLocal_65] = 1;
										}
									}
									else if (func_158(iParam0, unk_0xC8B93D94F8954288(), 1) > 100f)
									{
										if (!unk_0xE77F5DDBC2E96204(iParam0))
										{
											unk_0xBA73099E237C7E5E(iParam0);
										}
										if (unk_0xE77F5DDBC2E96204(iParam0))
										{
											unk_0x5124C5FA52D2AF3E(iParam0);
										}
										unk_0x622E764F80DBF8B7(iParam0, unk_0xC8B93D94F8954288(), 1000f, -1, 0, 0);
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
							if (unk_0x95CCECA3948CFE7B(iParam0))
							{
								if (!unk_0x2DC9BA2299B45EA6(iParam0))
								{
									if (!unk_0xE77F5DDBC2E96204(iParam0))
									{
										unk_0xBA73099E237C7E5E(iParam0);
									}
									if (unk_0xE77F5DDBC2E96204(iParam0))
									{
										unk_0x5124C5FA52D2AF3E(iParam0);
									}
									unk_0xAAD662D7E0D59F4C(iParam0, 1);
									unk_0x622E764F80DBF8B7(iParam0, unk_0xC8B93D94F8954288(), 1000f, -1, 0, 0);
									unk_0xF1A02DDEC7E15D6E(iParam0, 1);
									unk_0x459A6F82E024C891(&iParam0);
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
					iLocal_79 = unk_0x693EBB4F13506457();
					iLocal_394 = 1;
				}
				if (iLocal_394 == 1)
				{
					if (unk_0x693EBB4F13506457() > iLocal_79 + 6000)
					{
						unk_0x60B57BC5E51D2074(5);
						unk_0xFD62177C7242216E(1f);
						unk_0xB47D5A4E4AE9BEAD(unk_0xA34E7C2A5118D638(), 2, 0);
						unk_0x1C9B7C3360143C4C(unk_0xA34E7C2A5118D638(), 0);
						iLocal_393 = 1;
					}
				}
			}
			if (iLocal_67 == 0)
			{
				unk_0x6CCF5F545348D54E(5, iLocal_302, joaat("player"));
				unk_0xAAD662D7E0D59F4C(iParam0, 1);
				iLocal_67++;
			}
			if (iLocal_67 == 1)
			{
				iLocal_65 = 0;
				while (iLocal_65 <= 6)
				{
					if (unk_0x95CCECA3948CFE7B(iLocal_35[iLocal_65]))
					{
						if (!unk_0x2DC9BA2299B45EA6(iLocal_35[iLocal_65]))
						{
							if (func_158(unk_0xC8B93D94F8954288(), iLocal_35[iLocal_65], 1) < 15f)
							{
								if (func_178(iLocal_35[iLocal_65], 6))
								{
									if (unk_0x9AD5716183392F62(iLocal_35[iLocal_65], unk_0xC8B93D94F8954288()))
									{
										if (iLocal_379[iLocal_65] == 0)
										{
											if (!unk_0xE77F5DDBC2E96204(iLocal_35[iLocal_65]))
											{
												unk_0xBA73099E237C7E5E(iLocal_35[iLocal_65]);
											}
											if (unk_0xE77F5DDBC2E96204(iLocal_35[iLocal_65]))
											{
												unk_0x5124C5FA52D2AF3E(iLocal_35[iLocal_65]);
											}
											unk_0x80486019BE497773(iLocal_35[iLocal_65], -1, unk_0xC8B93D94F8954288(), -1, 0);
											iLocal_379[iLocal_65] = 1;
											iLocal_371[iLocal_65] = 0;
											iLocal_339[iLocal_65] = 0;
											iLocal_91 = unk_0x693EBB4F13506457();
										}
									}
									else if (unk_0x693EBB4F13506457() > iLocal_91 + 300)
									{
										iLocal_371[iLocal_65] = 0;
									}
								}
								else if (iLocal_371[iLocal_65] == 0)
								{
									if (!unk_0xE77F5DDBC2E96204(iLocal_35[iLocal_65]))
									{
										unk_0xBA73099E237C7E5E(iLocal_35[iLocal_65]);
									}
									if (unk_0xE77F5DDBC2E96204(iLocal_35[iLocal_65]))
									{
										unk_0x5124C5FA52D2AF3E(iLocal_35[iLocal_65]);
									}
									unk_0x622E764F80DBF8B7(iLocal_35[iLocal_65], unk_0xC8B93D94F8954288(), 250f, -1, 0, 0);
									iLocal_371[iLocal_65] = 1;
									iLocal_379[iLocal_65] = 0;
								}
							}
							else if (iLocal_371[iLocal_65] == 0)
							{
								if (!unk_0xE77F5DDBC2E96204(iLocal_35[iLocal_65]))
								{
									unk_0xBA73099E237C7E5E(iLocal_35[iLocal_65]);
								}
								if (unk_0xE77F5DDBC2E96204(iLocal_35[iLocal_65]))
								{
									unk_0x5124C5FA52D2AF3E(iLocal_35[iLocal_65]);
								}
								unk_0x622E764F80DBF8B7(iLocal_35[iLocal_65], unk_0xC8B93D94F8954288(), 250f, -1, 0, 0);
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

int func_178(int iParam0, int iParam1)
{
	if (unk_0x95CCECA3948CFE7B(iParam0) && !unk_0x2DC9BA2299B45EA6(iParam0))
	{
		if (unk_0x74BBB84E37C71AAC(unk_0xC8B93D94F8954288(), iParam1))
		{
			if (unk_0xFEDC9F0F78A56158(unk_0xA34E7C2A5118D638(), iParam0) || unk_0x0BBFEAC55291063A(unk_0xA34E7C2A5118D638(), iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_179()
{
	iLocal_46 = func_25(0);
	iLocal_47 = func_25(1);
	iLocal_48 = func_25(2);
	if (func_33(iLocal_46, 0))
	{
		if (!unk_0x2DC9BA2299B45EA6(iLocal_46))
		{
			if (!func_32(iLocal_46))
			{
				if (!func_181())
				{
					if (func_180(iLocal_46))
					{
						if (func_31(iLocal_46, 0))
						{
							unk_0xFD816D0E738EB817(iLocal_46, 1, 1);
							unk_0xAAD662D7E0D59F4C(iLocal_46, 1);
							unk_0x5124C5FA52D2AF3E(iLocal_46);
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
					if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
					{
						iLocal_473 = 1;
					}
					else if (unk_0x277ECDA23D8CCEB4(iLocal_46, 0))
					{
						if (!unk_0x0C7EC810080F0459(iLocal_46, unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), 0))
						{
							iLocal_473 = 1;
						}
					}
				}
				if (iLocal_473 == 0)
				{
					if (func_181())
					{
						iLocal_473 = 1;
					}
				}
				if (iLocal_470 == 1)
				{
					if ((func_180(iLocal_46) && unk_0x1F59F772AA90087D(iLocal_46, 1)) && iLocal_473 == 0)
					{
						Local_122 = { unk_0x44C17CCB85A88A1F(iLocal_46, 1) };
						unk_0x45A1CC0823F31402(Local_122.f_0, Local_122.f_1, Local_116.f_0, Local_116.f_1);
						if (unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) == 0)
						{
							if (iLocal_476 == 0)
							{
								if (unk_0x41D85B8EF93F7B19(Local_122.f_0, Local_122.f_1, Local_116.f_0, Local_116.f_1))
								{
									unk_0x52521828021B7DC5(iLocal_46, unk_0x275BEBE583A163B5(iLocal_46, 0), Local_116, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_479 = 0;
									iLocal_476 = 1;
								}
							}
						}
						else if (unk_0x95CCECA3948CFE7B(unk_0xFD4D1267977B7832(Local_122, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_479 == 0)
							{
								unk_0xBA1C58C1ED9624DD(iLocal_46, unk_0x275BEBE583A163B5(iLocal_46, 0), unk_0xFD4D1267977B7832(Local_122, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, 1);
								iLocal_476 = 0;
								iLocal_479 = 1;
							}
						}
						else if (iLocal_476 == 0)
						{
							if (unk_0x41D85B8EF93F7B19(Local_122.f_0, Local_122.f_1, Local_116.f_0, Local_116.f_1))
							{
								unk_0x52521828021B7DC5(iLocal_46, unk_0x275BEBE583A163B5(iLocal_46, 0), Local_116, 4, 30f, 786468, 3f, 15f, 0);
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
		if (!unk_0x2DC9BA2299B45EA6(iLocal_48))
		{
			if (!func_32(iLocal_48))
			{
				if (!func_181())
				{
					if (func_180(iLocal_48))
					{
						if (func_31(iLocal_48, 0))
						{
							unk_0xFD816D0E738EB817(iLocal_48, 1, 1);
							unk_0xAAD662D7E0D59F4C(iLocal_48, 1);
							unk_0x5124C5FA52D2AF3E(iLocal_48);
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
					if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
					{
						iLocal_475 = 1;
					}
					else if (unk_0x277ECDA23D8CCEB4(iLocal_48, 0))
					{
						if (!unk_0x0C7EC810080F0459(iLocal_48, unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), 0))
						{
							iLocal_475 = 1;
						}
					}
				}
				if (iLocal_475 == 0)
				{
					if (func_181())
					{
						iLocal_475 = 1;
					}
				}
				if (iLocal_471 == 1)
				{
					if ((func_180(iLocal_48) && unk_0x1F59F772AA90087D(iLocal_48, 1)) && iLocal_475 == 0)
					{
						Local_122 = { unk_0x44C17CCB85A88A1F(iLocal_48, 1) };
						unk_0x45A1CC0823F31402(Local_122.f_0, Local_122.f_1, Local_116.f_0, Local_116.f_1);
						if (unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) == 0)
						{
							if (iLocal_477 == 0)
							{
								if (unk_0x41D85B8EF93F7B19(Local_122.f_0, Local_122.f_1, Local_116.f_0, Local_116.f_1))
								{
									unk_0x52521828021B7DC5(iLocal_48, unk_0x275BEBE583A163B5(iLocal_48, 0), Local_116, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_480 = 0;
									iLocal_477 = 1;
								}
							}
						}
						else if (unk_0x95CCECA3948CFE7B(unk_0xFD4D1267977B7832(Local_122, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_480 == 0)
							{
								unk_0xBA1C58C1ED9624DD(iLocal_48, unk_0x275BEBE583A163B5(iLocal_48, 0), unk_0xFD4D1267977B7832(Local_122, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, 1);
								iLocal_477 = 0;
								iLocal_480 = 1;
							}
						}
						else if (iLocal_477 == 0)
						{
							if (unk_0x41D85B8EF93F7B19(Local_122.f_0, Local_122.f_1, Local_116.f_0, Local_116.f_1))
							{
								unk_0x52521828021B7DC5(iLocal_48, unk_0x275BEBE583A163B5(iLocal_48, 0), Local_116, 4, 30f, 786468, 3f, 15f, 0);
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
		if (!unk_0x2DC9BA2299B45EA6(iLocal_47))
		{
			if (!func_32(iLocal_47))
			{
				if (!func_181())
				{
					if (func_180(iLocal_47))
					{
						if (func_31(iLocal_47, 0))
						{
							unk_0xFD816D0E738EB817(iLocal_47, 1, 1);
							unk_0xAAD662D7E0D59F4C(iLocal_47, 1);
							unk_0x5124C5FA52D2AF3E(iLocal_47);
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
					if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
					{
						iLocal_474 = 1;
					}
					else if (unk_0x277ECDA23D8CCEB4(iLocal_47, 0))
					{
						if (!unk_0x0C7EC810080F0459(iLocal_47, unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), 0))
						{
							iLocal_474 = 1;
						}
					}
				}
				if (iLocal_474 == 0)
				{
					if (func_181())
					{
						iLocal_474 = 1;
					}
				}
				if (iLocal_472 == 1)
				{
					if ((func_180(iLocal_47) && unk_0x1F59F772AA90087D(iLocal_47, 1)) && iLocal_474 == 0)
					{
						Local_122 = { unk_0x44C17CCB85A88A1F(iLocal_47, 1) };
						unk_0x45A1CC0823F31402(Local_122.f_0, Local_122.f_1, Local_116.f_0, Local_116.f_1);
						if (unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) == 0)
						{
							if (iLocal_478 == 0)
							{
								if (unk_0x41D85B8EF93F7B19(Local_122.f_0, Local_122.f_1, Local_116.f_0, Local_116.f_1))
								{
									unk_0x52521828021B7DC5(iLocal_47, unk_0x275BEBE583A163B5(iLocal_47, 0), Local_116, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_481 = 0;
									iLocal_478 = 1;
								}
							}
						}
						else if (unk_0x95CCECA3948CFE7B(unk_0xFD4D1267977B7832(Local_122, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_481 == 0)
							{
								unk_0xBA1C58C1ED9624DD(iLocal_47, unk_0x275BEBE583A163B5(iLocal_47, 0), unk_0xFD4D1267977B7832(Local_122, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, 1);
								iLocal_478 = 0;
								iLocal_481 = 1;
							}
						}
						else if (iLocal_478 == 0)
						{
							if (unk_0x41D85B8EF93F7B19(Local_122.f_0, Local_122.f_1, Local_116.f_0, Local_116.f_1))
							{
								unk_0x52521828021B7DC5(iLocal_47, unk_0x275BEBE583A163B5(iLocal_47, 0), Local_116, 4, 30f, 786468, 3f, 15f, 0);
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

int func_180(int iParam0)
{
	if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()) && unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		if (!unk_0x2DC9BA2299B45EA6(iParam0))
		{
			if (unk_0x0C7EC810080F0459(iParam0, unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), 0) && unk_0xC0ADAF0814175B68(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), -1) == iParam0)
			{
				if (unk_0x95CCECA3948CFE7B(iLocal_33))
				{
					if (unk_0x5D42322C7DB888D0(iLocal_33, 0))
					{
						if ((unk_0x0C7EC810080F0459(iParam0, iLocal_33, 0) && unk_0xC0ADAF0814175B68(iLocal_33, -1) == iParam0) && !unk_0xA0C23498D8E0BB93(iLocal_33, Local_116, 3f, 3f, 3f, 0, 1, 0))
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

bool func_181()
{
	return Global_17116;
}

void func_182()
{
	if (unk_0x95CCECA3948CFE7B(iLocal_33))
	{
		if (!unk_0x5D42322C7DB888D0(iLocal_33, 0))
		{
			func_185(3);
			return;
		}
		else
		{
			if (func_184(&iLocal_33))
			{
				func_185(2);
				return;
			}
			if (unk_0x95CCECA3948CFE7B(iLocal_32))
			{
				if (!unk_0x5D42322C7DB888D0(iLocal_32, 0))
				{
					func_185(1);
					return;
				}
				if (unk_0x5D42322C7DB888D0(iLocal_32, 0))
				{
					if (!unk_0xAFBEE714E0240ECC(iLocal_33))
					{
						if ((unk_0xA4EFBED0A0F1C60C(iLocal_32) || func_183(iLocal_32)) || func_184(&iLocal_32))
						{
							func_185(1);
							return;
						}
					}
				}
			}
		}
	}
	if (iLocal_28 == 3 || iLocal_28 == 4)
	{
		if (unk_0x95CCECA3948CFE7B(iLocal_32))
		{
			if (unk_0x5D42322C7DB888D0(iLocal_32, 0))
			{
				if (func_158(iLocal_32, unk_0xC8B93D94F8954288(), 1) > 600f)
				{
					func_185(5);
					return;
				}
			}
		}
	}
	if (unk_0x95CCECA3948CFE7B(iLocal_49))
	{
		if (unk_0x2DC9BA2299B45EA6(iLocal_49))
		{
			func_185(6);
			return;
		}
	}
}

int func_183(int iParam0)
{
	if (unk_0x95CCECA3948CFE7B(uParam0))
	{
		if (unk_0xB6900B8CB0ABBD2B(iParam0))
		{
			return 1;
		}
		else if (!unk_0x5D42322C7DB888D0(iParam0, 0))
		{
			if (!unk_0x79E944054F6C9DCD(iParam0))
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

int func_184(var uParam0)
{
	if (unk_0x5D42322C7DB888D0(*uParam0, 0))
	{
		if (((unk_0x442EE710FCFD5D0D(*uParam0, 0, 7000) || unk_0x442EE710FCFD5D0D(*uParam0, 3, 30000)) || unk_0x442EE710FCFD5D0D(*uParam0, 2, 30000)) || unk_0x442EE710FCFD5D0D(*uParam0, 1, 40000))
		{
			return 1;
		}
	}
	return 0;
}

void func_185(int iParam0)
{
	iLocal_30 = iParam0;
	if (iLocal_28 != 6)
	{
		iLocal_28 = 6;
		iLocal_62 = 0;
	}
}

void func_186(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_100976.f_7719.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_100976.f_7719.f_99.f_58[iParam0] = iParam1;
}

void func_187()
{
	if (iLocal_28 == 5)
	{
		if (iLocal_483 == 0)
		{
			func_188(657);
		}
	}
}

void func_188(int iParam0)
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

bool func_189(bool bParam0)
{
	if (!bParam0 && unk_0xCBC8FFE55DC722B5(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xDCC86F723E82125E(Global_69565, 0);
}

void func_190()
{
	unk_0xBFDE8C755DF4A1ED(unk_0xA34E7C2A5118D638(), 0);
	unk_0xB7FAA1C591A4664F(joaat("packer"), 0);
	unk_0xB7FAA1C591A4664F(joaat("phantom"), 0);
	unk_0x6EFCF0B905A37E0F("FHPRB_START");
	unk_0x6EFCF0B905A37E0F("FHPRB_TRUCK");
	unk_0x6EFCF0B905A37E0F("FHPRB_COPS");
	unk_0x6EFCF0B905A37E0F("FHPRB_LOST");
	unk_0x6EFCF0B905A37E0F("FHPRB_STOP");
	unk_0x9DBF08025225340D(uLocal_51, 0);
	unk_0x9DBF08025225340D(uLocal_52, 0);
	unk_0x9DBF08025225340D(uLocal_53, 0);
	unk_0x9DBF08025225340D(uLocal_54, 0);
	unk_0x9DBF08025225340D(uLocal_55, 0);
	unk_0x9DBF08025225340D(uLocal_56, 0);
	if (unk_0x1AF171BD37579622("SCRAP_SECURITY"))
	{
		if (unk_0xE9583E80BF9231C4("SCRAP_SECURITY"))
		{
			unk_0x5B9B55E417A44413("SCRAP_SECURITY", 0);
		}
	}
	unk_0x60B57BC5E51D2074(5);
	if (unk_0x42277337DA18A497(iLocal_114))
	{
		unk_0xCF381AA7C0D65934(iLocal_114);
	}
	if (unk_0x42277337DA18A497(iLocal_115))
	{
		unk_0xCF381AA7C0D65934(iLocal_115);
	}
	unk_0xA4E0D8FD51F2A6F7();
}

void func_191()
{
	int iVar0;
	
	if (unk_0xD838CD843F6FE18B("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1424);
	}
	if (Global_100976.f_7719 || func_189(0))
	{
		if (!func_192())
		{
			iVar0 = func_13();
			if (iVar0 != -1)
			{
				if (!func_7(iVar0))
				{
					return;
				}
				unk_0x59A0729D503ED758(&(Global_82191[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_12();
		}
	}
}

int func_192()
{
	if (((Global_91106 == 13 || Global_91106 == 10) || Global_91106 == 11) || Global_91106 == 12)
	{
		return 0;
	}
	return 1;
}

