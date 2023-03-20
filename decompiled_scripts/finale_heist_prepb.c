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
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_42[2] = { 0, 0 };
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
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
	var uLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_76 = 0;
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
	int iLocal_95[2] = { 0, 0 };
	int iLocal_98[2] = { 0, 0 };
	int iLocal_101[2] = { 0, 0 };
	int iLocal_104[2] = { 0, 0 };
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	struct<3> Local_115 = { 0, 0, 0 } ;
	struct<3> Local_118 = { 0, 0, 0 } ;
	struct<3> Local_121 = { 0, 0, 0 } ;
	struct<3> Local_124[2];
	struct<3> Local_131 = { 0, 0, 0 } ;
	float fLocal_134 = 0f;
	char* sLocal_135 = NULL;
	var uLocal_136 = 16;
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
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_329[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_337 = 0;
	int iLocal_338[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_346[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_354[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_362[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_370[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_378[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_386 = 0;
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
	int iLocal_403[2] = { 0, 0 };
	int iLocal_406[2] = { 0, 0 };
	int iLocal_409 = 0;
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
	int iLocal_432[2] = { 0, 0 };
	int iLocal_435[2] = { 0, 0 };
	int iLocal_438[2] = { 0, 0 };
	int iLocal_441[2] = { 0, 0 };
	int iLocal_444[2] = { 0, 0 };
	int iLocal_447[2] = { 0, 0 };
	int iLocal_450[2] = { 0, 0 };
	int iLocal_453 = 0;
	int iLocal_454 = 0;
	int iLocal_455 = 0;
	int iLocal_456 = 0;
	int iLocal_457 = 0;
	int iLocal_458[2] = { 0, 0 };
	int iLocal_461[2] = { 0, 0 };
	int iLocal_464 = 0;
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
	int iLocal_483[2] = { 0, 0 };
	int iLocal_486 = 0;
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
	Local_115 = { 27.7189f, -608.7927f, 30.6293f };
	Local_131 = { 903.1f, -1548.8f, 29.8f };
	fLocal_134 = 0f;
	if (unk_0x7547D7CF93115D6D(3))
	{
		unk_0xF74C93D9036BCC1E("FHPRB_STOP");
		func_187();
		func_186();
	}
	if (func_185(0))
	{
		unk_0x481B0AD01AC057F7("FINPRB", 0);
	}
	unk_0x46B6351EE89452C8("WorkerPedMainGroup", &iLocal_301);
	unk_0x46B6351EE89452C8("GuardMainGroup", &iLocal_302);
	unk_0x941F924D5E9C2140(joaat("packer"), 1);
	unk_0xCA4EA7D4F6DCCD43(5, iLocal_302, joaat("player"));
	unk_0xCA4EA7D4F6DCCD43(5, iLocal_301, joaat("player"));
	unk_0xCA4EA7D4F6DCCD43(1, iLocal_302, iLocal_301);
	unk_0xCA4EA7D4F6DCCD43(1, iLocal_301, iLocal_302);
	unk_0xCA4EA7D4F6DCCD43(1, iLocal_302, joaat("COP"));
	unk_0xCA4EA7D4F6DCCD43(1, joaat("COP"), iLocal_302);
	unk_0xCA4EA7D4F6DCCD43(1, iLocal_301, joaat("COP"));
	unk_0xCA4EA7D4F6DCCD43(1, joaat("COP"), iLocal_301);
	while (true)
	{
		unk_0xC0B91B09CAEBF5AE("M_FINPRB", 0);
		if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
		{
			unk_0x7FEDD088E489CE41(unk_0x507DA4994C3D8EBD(), 230, 0);
		}
		func_183();
		if (iLocal_316 == 0)
		{
			if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) > 0)
			{
				func_182(27, 1);
				iLocal_316 = 1;
			}
		}
		if (iLocal_395 == 1)
		{
			func_178();
		}
		func_175();
		func_168();
		func_160();
		func_155();
		func_152();
		switch (iLocal_27)
		{
			case 0:
				func_151();
				break;
			
			case 1:
				func_148();
				break;
			
			case 2:
				func_124();
				break;
			
			case 3:
				func_122();
				break;
			
			case 4:
				func_99();
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
	switch (iLocal_61)
	{
		case 0:
			unk_0x3DF5706BBD8F5B5B();
			unk_0x4A4C1A1BC79EFE8F(1);
			unk_0xF74C93D9036BCC1E("FHPRA_FAIL");
			switch (iLocal_29)
			{
				case 0:
					break;
				
				case 4:
					sLocal_135 = "FPB_FAIL1";
					break;
				
				case 3:
					sLocal_135 = "FPB_FAIL2";
					break;
				
				case 1:
					sLocal_135 = "FPB_FAIL3";
					break;
				
				case 2:
					sLocal_135 = "FPB_FAIL10";
					break;
				
				case 5:
					if (func_14() == 0)
					{
						sLocal_135 = "FPB_FAIL7";
					}
					if (func_14() == 2)
					{
						sLocal_135 = "FPB_FAIL8";
					}
					if (func_14() == 1)
					{
						sLocal_135 = "FPB_FAIL9";
					}
					break;
				
				case 6:
					sLocal_135 = "FPB_FAIL11";
					break;
			}
			if (iLocal_29 == 0)
			{
				func_6(0);
			}
			else
			{
				func_4(sLocal_135);
			}
			iLocal_61 = 1;
			break;
		
		case 1:
			if (func_3())
			{
				if (func_2())
				{
				}
				func_186();
			}
			break;
	}
}

int func_2()
{
	if (Global_89784 == 7)
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
	if (Global_89784 == 7 || Global_89784 == 8)
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
	if (!unk_0x8FA72E132AAFA62F(sParam0))
	{
		if (unk_0x23955AB7E3D629F7(sParam0) <= 16)
		{
			StringCopy(&Global_68299, sParam0, 16);
			StringCopy(&Global_68303, "", 16);
			if (unk_0x0BCA771AC3E1639D())
			{
				unk_0x2DAF1B9AD39829E1();
			}
		}
	}
}

void func_6(int iParam0)
{
	int iVar0;
	
	if (Global_97173.f_7311 || func_185(0))
	{
		iVar0 = func_13();
		if (!func_7(iVar0))
		{
			return;
		}
		unk_0x3DBE2A7AF9E71C82(&(Global_80941[iVar0 /*5*/].f_1), 5);
		Global_89820 = iParam0;
	}
}

int func_7(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_12();
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		unk_0x22AF53B3D19EC31A(5000);
	}
	iVar0 = Global_80941[iParam0 /*5*/];
	iVar1 = Global_68336.f_109[iVar0 /*4*/];
	func_11(iVar1, 1);
	unk_0xB263FA96BED3FA47(unk_0xAF65E5A58BE87D95());
	unk_0x781B097139B80D2A(unk_0xAF65E5A58BE87D95());
	func_8(&(Global_97173.f_1729.f_539), iVar1);
	if (Global_84364 == Global_89821)
	{
		Global_97173.f_7311.f_325[iVar1 /*6*/].f_1++;
	}
	if (!unk_0x61D8FEAF64881CDA(Global_80977[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
		{
			unk_0x842A97A1C98339FF(0);
		}
	}
	Global_97173.f_7311.f_325[iVar1 /*6*/].f_2++;
	Global_84364 = Global_89821;
	if (iParam0 == -1)
	{
		if (Global_97173.f_7311)
		{
		}
		return 0;
	}
	if (unk_0x61D8FEAF64881CDA(Global_80941[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0x61D8FEAF64881CDA(Global_80941[iParam0 /*5*/].f_1, 5))
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
		iVar1 = Global_97173.f_16754[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0x61D8FEAF64881CDA(Global_97173.f_7311.f_99.f_214[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_10(Global_97173.f_16754[iVar0], &Var2, &fVar5))
			{
				Global_97173.f_16754[iVar0] = 318;
				func_9(&(uParam0->f_1524[iVar0]));
				uParam0->f_1528[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1538[iVar0] = 0f;
				uParam0->f_1542[iVar0] = 0;
				uParam0->f_1546[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1556[iVar0] = 0;
				Global_87579[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_87579[iVar0 /*29*/].f_9 = 0f;
				Global_87579[iVar0 /*29*/].f_12 = 0f;
				Global_87579[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_87579[iVar0 /*29*/].f_10 = 0f;
				Global_87579[iVar0 /*29*/].f_13 = 0f;
				Global_87579[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_87579[iVar0 /*29*/].f_11 = 0f;
				Global_87579[iVar0 /*29*/].f_14 = 0f;
				Global_87579[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_87579[iVar0 /*29*/].f_26 = 0f;
				Global_87579[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_87579[iVar0 /*29*/].f_27 = 0f;
				Global_87579[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_87579[iVar0 /*29*/].f_28 = 0f;
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
			Global_84174[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_84174[iParam0 /*2*/] = 0;
	}
}

void func_12()
{
	Global_89819 = 1;
	if (unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1))
	{
		if (unk_0x8FA72E132AAFA62F(&Global_68299))
		{
			switch (func_14())
			{
				case 0:
					StringCopy(&Global_68299, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_68299, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_68299, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_68303, "", 16);
		}
		Global_89819 = 0;
	}
	else if (!unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		if (unk_0x8FA72E132AAFA62F(&Global_68299))
		{
			switch (func_14())
			{
				case 0:
					StringCopy(&Global_68299, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_68299, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_68299, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_68303, "", 16);
		}
		Global_89819 = 0;
	}
}

int func_13()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0x61D8FEAF64881CDA(Global_80941[iVar0 /*5*/].f_1, 2))
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
	return Global_97173.f_1729.f_539.f_3213;
}

void func_15()
{
	int iVar0;
	
	if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
	{
		if (func_19(Global_97173.f_1729.f_539.f_3213) != unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()))
		{
			iVar0 = func_18(unk_0x507DA4994C3D8EBD());
			if (func_17(iVar0) && (!func_16(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_17(Global_97173.f_1729.f_539.f_3213))
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

bool func_16(int iParam0)
{
	return Global_34909 == iParam0;
}

bool func_17(int iParam0)
{
	return iParam0 < 3;
}

int func_18(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFD68187442384158(iParam0))
	{
		iVar1 = unk_0x26EA758C2A691D06(iParam0);
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
		return Global_97173.f_29699[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_20()
{
	func_152();
	if (iLocal_61 == 0)
	{
		if (iLocal_303 == 1)
		{
			func_34();
			iLocal_303 = 0;
		}
		iLocal_317 = 0;
		iLocal_318 = 0;
		iLocal_319 = 0;
		unk_0xFAAA53BBE1EEF174(unk_0xAF65E5A58BE87D95(), 0, 0);
		if (func_33(iLocal_45, 0))
		{
			if (!func_32(iLocal_45))
			{
				while (!func_31(iLocal_45, 0))
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
		if (unk_0xC2C705ED6124A7C2())
		{
			if (!func_30())
			{
				unk_0xACF6EF3086F35588(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1));
			}
			func_27(iLocal_32, -1, 1);
		}
		if (!unk_0x8D4100BAA46EE198())
		{
			unk_0x662E87A876F1069D(800);
		}
		iLocal_395 = 1;
		iLocal_61 = 1;
	}
	if (iLocal_61 == 1)
	{
		if (unk_0xFD68187442384158(iLocal_32))
		{
			if (unk_0xCA8794CE207FC6D5(iLocal_32, 0))
			{
				if (func_14() == 0)
				{
					if (func_33(iLocal_47, 0))
					{
						if (unk_0x53170344050F2301(iLocal_47, iLocal_32, 0))
						{
							unk_0xAC57FBF981AB03F4(iLocal_47);
							unk_0xA2A854DDCAB3A06F(iLocal_47);
							unk_0x2DC5B31EBB810396(iLocal_47, 1);
							unk_0x9632B185BE7E73E6(iLocal_47, iLocal_32, 0);
						}
					}
					if (func_33(iLocal_46, 0))
					{
						if (unk_0x53170344050F2301(iLocal_46, iLocal_32, 0))
						{
							unk_0xAC57FBF981AB03F4(iLocal_46);
							unk_0xA2A854DDCAB3A06F(iLocal_46);
							unk_0x2DC5B31EBB810396(iLocal_46, 1);
							unk_0x9632B185BE7E73E6(iLocal_46, iLocal_32, 0);
						}
					}
				}
				if (func_14() == 2)
				{
					if (func_33(iLocal_45, 0))
					{
						if (unk_0x53170344050F2301(iLocal_45, iLocal_32, 0))
						{
							unk_0xAC57FBF981AB03F4(iLocal_45);
							unk_0xA2A854DDCAB3A06F(iLocal_45);
							unk_0x2DC5B31EBB810396(iLocal_45, 1);
							unk_0x9632B185BE7E73E6(iLocal_45, iLocal_32, 0);
						}
					}
					if (func_33(iLocal_46, 0))
					{
						if (unk_0x53170344050F2301(iLocal_46, iLocal_32, 0))
						{
							unk_0xAC57FBF981AB03F4(iLocal_46);
							unk_0xA2A854DDCAB3A06F(iLocal_46);
							unk_0x2DC5B31EBB810396(iLocal_46, 1);
							unk_0x9632B185BE7E73E6(iLocal_46, iLocal_32, 0);
						}
					}
				}
				if (func_14() == 1)
				{
					if (func_33(iLocal_45, 0))
					{
						if (unk_0x53170344050F2301(iLocal_45, iLocal_32, 0))
						{
							unk_0xAC57FBF981AB03F4(iLocal_45);
							unk_0xA2A854DDCAB3A06F(iLocal_45);
							unk_0x2DC5B31EBB810396(iLocal_45, 1);
							unk_0x9632B185BE7E73E6(iLocal_45, iLocal_32, 0);
						}
					}
					if (func_33(iLocal_47, 0))
					{
						if (unk_0x53170344050F2301(iLocal_47, iLocal_32, 0))
						{
							unk_0xAC57FBF981AB03F4(iLocal_47);
							unk_0xA2A854DDCAB3A06F(iLocal_47);
							unk_0x2DC5B31EBB810396(iLocal_47, 1);
							unk_0x9632B185BE7E73E6(iLocal_47, iLocal_32, 0);
						}
					}
				}
				if (unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), iLocal_32, 0))
				{
					unk_0x9632B185BE7E73E6(unk_0x507DA4994C3D8EBD(), iLocal_32, 0);
				}
			}
		}
		unk_0x5AE11BC36633DE4E(0);
		iLocal_61 = 2;
	}
	if (iLocal_61 == 2)
	{
		if (unk_0xFD68187442384158(iLocal_32))
		{
			if (unk_0xCA8794CE207FC6D5(iLocal_32, 0))
			{
				if (iLocal_319 == 0)
				{
					if (func_14() == 0)
					{
						if (func_33(iLocal_47, 0))
						{
							if (!unk_0x53170344050F2301(iLocal_47, iLocal_32, 0))
							{
								if (func_32(iLocal_47))
								{
									if (func_24(iLocal_47))
									{
										iLocal_319 = 1;
									}
								}
								else
								{
									iLocal_319 = 1;
								}
							}
						}
						else
						{
							iLocal_317 = 1;
						}
						if (func_33(iLocal_46, 0))
						{
							if (!unk_0x53170344050F2301(iLocal_46, iLocal_32, 0))
							{
								if (func_32(iLocal_46))
								{
									if (func_24(iLocal_46))
									{
										iLocal_319 = 1;
									}
								}
								else
								{
									iLocal_319 = 1;
								}
							}
						}
						else
						{
							iLocal_318 = 1;
						}
					}
					if (func_14() == 2)
					{
						if (func_33(iLocal_45, 0))
						{
							if (!unk_0x53170344050F2301(iLocal_45, iLocal_32, 0))
							{
								if (func_32(iLocal_45))
								{
									if (func_24(iLocal_45))
									{
										iLocal_319 = 1;
									}
								}
								else
								{
									iLocal_319 = 1;
								}
							}
						}
						else
						{
							iLocal_317 = 1;
						}
						if (func_33(iLocal_46, 0))
						{
							if (!unk_0x53170344050F2301(iLocal_46, iLocal_32, 0))
							{
								if (func_32(iLocal_46))
								{
									if (func_24(iLocal_46))
									{
										iLocal_319 = 1;
									}
								}
								else
								{
									iLocal_319 = 1;
								}
							}
						}
						else
						{
							iLocal_318 = 1;
						}
					}
					if (func_14() == 1)
					{
						if (func_33(iLocal_45, 0))
						{
							if (!unk_0x53170344050F2301(iLocal_45, iLocal_32, 0))
							{
								if (func_32(iLocal_45))
								{
									if (func_24(iLocal_45))
									{
										iLocal_319 = 1;
									}
								}
								else
								{
									iLocal_319 = 1;
								}
							}
						}
						else
						{
							iLocal_317 = 1;
						}
						if (func_33(iLocal_47, 0))
						{
							if (!unk_0x53170344050F2301(iLocal_47, iLocal_32, 0))
							{
								if (func_32(iLocal_47))
								{
									if (func_24(iLocal_47))
									{
										iLocal_319 = 1;
									}
								}
								else
								{
									iLocal_319 = 1;
								}
							}
						}
						else
						{
							iLocal_318 = 1;
						}
					}
					if (iLocal_317 == 1 && iLocal_318 == 1)
					{
						iLocal_319 = 1;
					}
				}
				else if (!unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), iLocal_32, 1))
				{
					unk_0xFAAA53BBE1EEF174(unk_0xAF65E5A58BE87D95(), 1, 0);
					unk_0x5AE11BC36633DE4E(0);
					iLocal_61 = 3;
				}
			}
		}
	}
	if (iLocal_61 == 3)
	{
		if (unk_0xFD68187442384158(iLocal_32))
		{
			if (unk_0xCA8794CE207FC6D5(iLocal_32, 0))
			{
				unk_0x6F4AC9499C730CF0(iLocal_32, 0);
				unk_0xCDC1FD4387DA32EC(iLocal_32, 2);
				unk_0x479E7EEEBDEE245D(iLocal_32, 1);
			}
		}
		if (unk_0xFD68187442384158(iLocal_31))
		{
			if (unk_0xCA8794CE207FC6D5(iLocal_31, 0))
			{
				unk_0x479E7EEEBDEE245D(iLocal_31, 1);
			}
		}
		iLocal_61 = 4;
	}
	if (iLocal_61 == 4)
	{
		func_21();
	}
}

void func_21()
{
	func_22(0, 0);
	func_186();
}

void func_22(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_54574)
	{
		Global_54574 = iParam1;
	}
	if (bParam0)
	{
		if ((func_185(0) && Global_68313.f_1 == 1) && func_23(Global_68313))
		{
		}
		else
		{
			Global_54572 = 1;
		}
	}
	if (Global_97173.f_7311 || func_185(0))
	{
		iVar0 = func_13();
		iVar1 = Global_80941[iVar0 /*5*/];
		uVar2 = Global_68336.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_97173.f_7311)
			{
			}
			return;
		}
		if (unk_0x61D8FEAF64881CDA(Global_80941[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0x61D8FEAF64881CDA(Global_80941[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0x3DBE2A7AF9E71C82(&(Global_80941[iVar0 /*5*/].f_1), 4);
		unk_0x3DBE2A7AF9E71C82(&Global_68315, 1);
		Global_68331 = uVar2;
		Global_68332 = unk_0xF976C624234A4AA8();
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
	if (!unk_0x9F94F2CFDCA78C55(iParam0))
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
		if (!unk_0x61D8FEAF64881CDA(Global_86043, iVar0))
		{
			return 0;
		}
		unk_0xCD27BF29FB9012E2(&Global_86043, iVar0);
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
		return unk_0x507DA4994C3D8EBD();
	}
	return Global_87667[func_26(iParam0)];
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
		while (Global_89779 != 6)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x1757405122DE8566(0);
		if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
		{
			if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
			{
				unk_0x309CA1336CB83196(unk_0x507DA4994C3D8EBD());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
			{
				if (unk_0xFD68187442384158(iParam0))
				{
					if (unk_0xCA8794CE207FC6D5(iParam0, 0))
					{
						if (!unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), iParam0, 0))
						{
							unk_0x11460EBE0487B44F(unk_0x507DA4994C3D8EBD(), iParam0, iParam1);
							unk_0x77CB1AAAF31275BE(0f, 1065353216);
							unk_0xBE5E0E5A454F4D6A(0f);
							unk_0x4EDE34FBADD967A6(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
			{
				unk_0xFAAA53BBE1EEF174(unk_0xAF65E5A58BE87D95(), 1, 0);
			}
		}
		unk_0xA18B52A0F825A53B();
		func_28(0);
	}
}

void func_28(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x3DBE2A7AF9E71C82(&(Global_89784.f_20), 13);
	}
	else
	{
		unk_0xCD27BF29FB9012E2(&(Global_89784.f_20), 13);
	}
}

int func_29()
{
	if (Global_89784 == 10 || Global_89784 == 9)
	{
		return 1;
	}
	return 0;
}

bool func_30()
{
	return unk_0x61D8FEAF64881CDA(Global_89784.f_20, 13);
}

int func_31(int iParam0, int iParam1)
{
	int iVar0;
	
	return 0;
	if (!unk_0x9F94F2CFDCA78C55(iParam0))
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
		if (unk_0x61D8FEAF64881CDA(Global_86043, iVar0))
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0x507DA4994C3D8EBD())
			{
				return 0;
			}
		}
		if (unk_0x61D8FEAF64881CDA(Global_86042, iVar0))
		{
			unk_0x278C9D6141B17BA8(iParam0, 0, 0);
			unk_0x3C2614E45AB2F499(iParam0, 0);
			unk_0x3DBE2A7AF9E71C82(&Global_86043, iVar0);
			return 1;
		}
	}
	return 0;
}

int func_32(int iParam0)
{
	int iVar0;
	
	return 0;
	if (!unk_0x9F94F2CFDCA78C55(iParam0))
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
		if (unk_0x61D8FEAF64881CDA(Global_86043, iVar0))
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
	if (!unk_0x9F94F2CFDCA78C55(iParam0))
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
			if (iParam0 == unk_0x507DA4994C3D8EBD())
			{
				return 0;
			}
		}
		if (unk_0x61D8FEAF64881CDA(Global_86042, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_34()
{
	iLocal_395 = 0;
	iLocal_455 = 0;
	unk_0x050E86400BAF39B2(unk_0xAF65E5A58BE87D95(), 0, 0);
	unk_0x4DFE220122919594(unk_0xAF65E5A58BE87D95(), 0);
	if (!unk_0xC2C705ED6124A7C2())
	{
		unk_0x7C69A4879766A867(0);
	}
	func_97();
	unk_0x3DF5706BBD8F5B5B();
	func_96();
	func_95();
	func_36();
	if (!func_30())
	{
		func_35();
	}
	unk_0xBE5E0E5A454F4D6A(0f);
}

void func_35()
{
	switch (iLocal_27)
	{
		case 2:
			unk_0xF85858E5CBF4D9F0(unk_0x507DA4994C3D8EBD(), 856.9501f, -1573.177f, 29.4751f, 1, 0, 0, 1);
			unk_0x248DC16118AE5035(unk_0x507DA4994C3D8EBD(), 288.3586f);
			break;
		
		case 3:
			unk_0xF85858E5CBF4D9F0(unk_0x507DA4994C3D8EBD(), 856.9501f, -1573.177f, 29.4751f, 1, 0, 0, 1);
			unk_0x248DC16118AE5035(unk_0x507DA4994C3D8EBD(), 288.3586f);
			break;
		
		case 4:
			if (unk_0xFD68187442384158(iLocal_32))
			{
				if (unk_0xCA8794CE207FC6D5(iLocal_32, 0))
				{
					if (!unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), iLocal_32, 0))
					{
						unk_0x11460EBE0487B44F(unk_0x507DA4994C3D8EBD(), iLocal_32, -1);
					}
				}
			}
			break;
		
		case 5:
			if (unk_0xFD68187442384158(iLocal_32))
			{
				if (unk_0xCA8794CE207FC6D5(iLocal_32, 0))
				{
					if (!unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), iLocal_32, 0))
					{
						unk_0x11460EBE0487B44F(unk_0x507DA4994C3D8EBD(), iLocal_32, -1);
					}
				}
			}
			break;
	}
}

void func_36()
{
	switch (iLocal_27)
	{
		case 3:
			iLocal_417 = 0;
			iLocal_418 = 0;
			iLocal_419 = 0;
			func_91();
			if (func_90() && func_87(7f, 7f, 7f, 1))
			{
				func_85();
				while (!func_84())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				iLocal_33 = func_37(818.8139f, -1610.406f, 30.7951f, 264.412f);
			}
			unk_0xA54C914AEB391F49(0.01f);
			break;
		
		case 4:
			iLocal_417 = 0;
			iLocal_418 = 0;
			iLocal_419 = 0;
			func_91();
			if (unk_0xFD68187442384158(iLocal_32))
			{
				if (unk_0xCA8794CE207FC6D5(iLocal_32, 0))
				{
					unk_0xF85858E5CBF4D9F0(iLocal_32, 89.2131f, -596.9456f, 30.6224f, 1, 0, 0, 1);
					unk_0x248DC16118AE5035(iLocal_32, 161.1163f);
				}
			}
			unk_0x4BCBC9058A5CECE1(41f, -615f, 30f, 50f, 1, 1, 0, 0);
			break;
		
		case 5:
			iLocal_417 = 1;
			iLocal_418 = 1;
			iLocal_419 = 1;
			func_91();
			unk_0x4BCBC9058A5CECE1(41f, -615f, 30f, 50f, 1, 1, 0, 0);
			if (unk_0xFD68187442384158(iLocal_32))
			{
				if (unk_0xCA8794CE207FC6D5(iLocal_32, 0))
				{
					unk_0xF85858E5CBF4D9F0(iLocal_32, 28.4065f, -608.9371f, 30.6293f, 1, 0, 0, 1);
					unk_0x248DC16118AE5035(iLocal_32, 70.7778f);
				}
			}
			unk_0xCBE6AC5010E5CE5C(joaat("s_m_m_security_01"));
			while (!unk_0xD291857D0C9C7FEC(joaat("s_m_m_security_01")))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			if (!unk_0xFD68187442384158(iLocal_48))
			{
				iLocal_48 = unk_0x7B88529CAE3B7F15(26, joaat("s_m_m_security_01"), 64.904f, -617.9949f, 30.7028f, 223.555f, 1, 1);
				unk_0xFF467904A8A12BBE(joaat("s_m_m_security_01"));
				unk_0x7FEDD088E489CE41(iLocal_48, 324, 1);
			}
			break;
	}
}

int func_37(struct<3> Param0, float fParam3)
{
	return func_38(&(Global_91172.f_2167), Param0, fParam3, 0);
}

int func_38(var uParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	var uVar5;
	int iVar8;
	
	if (func_83(uParam0))
	{
		if (func_82(Param1, 0f, 0f, 0f))
		{
			Param1 = { *uParam0 };
			fParam4 = uParam0->f_6;
		}
		if (uParam0->f_12.f_42 == joaat("monster") || uParam0->f_12.f_42 == joaat("marshall"))
		{
			if (unk_0x65EC44693BF9CB43(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, 1))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam4 = 89.5f;
			}
		}
		if (func_81(uParam0))
		{
			unk_0x4BCBC9058A5CECE1(Param1, 5f, 1, 0, 0, 0);
			func_80(Param1, 5f, 0);
			iVar0 = unk_0x546974B676313326(uParam0->f_12.f_42, Param1, fParam4, 1, 1);
			if (unk_0xFD68187442384158(iVar0))
			{
				func_75(iVar0, &(uParam0->f_12), 0, 1);
				bVar4 = true;
				if (unk_0x9C14CED64BA9A516(uParam0->f_12.f_42) || unk_0x3B8F7829EC2D058B(uParam0->f_12.f_42))
				{
					if (!unk_0x48538B9EA42C034F(Param1.f_0, Param1.f_1, (Param1.f_2 + 30f), Param1.f_0, Param1.f_1, (Param1.f_2 - 30f), &uVar5))
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					unk_0xD90C30D269B19096(iVar0);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam5)
					{
						if (unk_0x4658BA5921D40213(unk_0x26EA758C2A691D06(iVar0)))
						{
							func_74(uParam0->f_11, 1);
						}
						else if (unk_0xA34706B20AE53D17(unk_0x26EA758C2A691D06(iVar0)))
						{
							func_74(uParam0->f_11, 2);
						}
					}
					unk_0xBA20637A88AFB259(iVar0, 0);
					unk_0xB5168D28656DA503(iVar0, 0);
					unk_0xC158AF2A8304483D(iVar0, 1);
					func_73(iVar0, uParam0->f_11);
				}
				else if ((!func_70(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && unk_0xA858564DC37EED5E(unk_0x3ED5FA3F61EC9E68(), "startup_positioning"))
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
				if (((Global_89784 != 13 && Global_89784 != 10) && Global_89784 != 11) && Global_89784 != 12)
				{
					if (unk_0x3BA42EA02A10243D(&(Global_89784.f_3)) == Global_67924)
					{
						if (uParam0->f_12.f_42 == Global_97173.f_18338.f_69[21 /*54*/].f_42)
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
				unk_0xFF467904A8A12BBE(uParam0->f_12.f_42);
				Var1 = { unk_0xBF1B13057E5119A4(iVar0, 1) };
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
		iVar0 = unk_0xE634CB9EE7094537(iParam0, -1);
		if (!unk_0xFD68187442384158(iVar0))
		{
			iVar0 = unk_0xF417BF3AE09AE69A(iParam0, -1);
		}
		if (unk_0xFD68187442384158(iVar0) && !unk_0x9F94F2CFDCA78C55(iVar0))
		{
			if (unk_0x26EA758C2A691D06(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x26EA758C2A691D06(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x26EA758C2A691D06(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_97173.f_1729.f_539.f_3213;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x26EA758C2A691D06(iParam0) == Global_97173.f_18338.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_42)
			{
				if (!unk_0x8FA72E132AAFA62F(&(Global_97173.f_18338.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
				{
					if (unk_0xA858564DC37EED5E(unk_0x3907ED4361C53248(iParam0), &(Global_97173.f_18338.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
					{
						Global_97173.f_18338.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_42 = 0;
						Global_97173.f_18338.f_4800[iVar1] = iVar2;
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
		if (unk_0x26EA758C2A691D06(iParam0) == Global_97173.f_18338.f_4808[iVar1 /*54*/].f_42)
		{
			if (!unk_0x8FA72E132AAFA62F(&(Global_97173.f_18338.f_4808[iVar1 /*54*/].f_1)))
			{
				if (unk_0xA858564DC37EED5E(unk_0x3907ED4361C53248(iParam0), &(Global_97173.f_18338.f_4808[iVar1 /*54*/].f_1)))
				{
					Global_97173.f_18338.f_4808[iVar1 /*54*/].f_42 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_97173.f_18338.f_4798 = iParam1;
	Global_67865 = iParam0;
	Global_97173.f_18338.f_4796 = 1;
	func_40(iParam0, &(Global_97173.f_18338.f_4742));
}

void func_40(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xCA8794CE207FC6D5(iParam0, 0))
	{
		func_43(uParam1);
		uParam1->f_42 = unk_0x26EA758C2A691D06(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x3907ED4361C53248(iParam0), 16);
		*uParam1 = unk_0x19BB097358BFF0AF(iParam0);
		unk_0x1603516D6065B48F(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xA350E44A87923312(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x8239CD0D53DFB0BC(iParam0, &(uParam1->f_38), &(uParam1->f_39), &(uParam1->f_40));
		uParam1->f_41 = unk_0x0612606EF85B26EA(iParam0);
		uParam1->f_43 = unk_0x4CA0AD498EF66914(iParam0);
		uParam1->f_45 = unk_0x7650202B3E229E02(iParam0);
		uParam1->f_46 = unk_0x407FC6F2E81C15C7(iParam0);
		unk_0x5A28251CF7DB43BF(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		unk_0xF5E00BA0DEA3A55A(iParam0, &(uParam1->f_50), &(uParam1->f_51), &(uParam1->f_52));
		if (unk_0xD9DD35FE09967D1F(iParam0, 2))
		{
			unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 28);
		}
		if (unk_0xD9DD35FE09967D1F(iParam0, 3))
		{
			unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 29);
		}
		if (unk_0xD9DD35FE09967D1F(iParam0, 0))
		{
			unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 30);
		}
		if (unk_0xD9DD35FE09967D1F(iParam0, 1))
		{
			unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 31);
		}
		if (uParam1->f_41 == -1 && uParam1->f_42 != joaat("granger"))
		{
			uParam1->f_41 = 0;
		}
		if (unk_0x850813D10502D655(iParam0, 0))
		{
			uParam1->f_44 = unk_0x92632E4A1274BB2C(iParam0);
		}
		if (unk_0x9652AA5F22572EA4(uParam1->f_42))
		{
			if (unk_0xE72A4DAD5B1689BE(iParam0))
			{
				switch (unk_0x91068745EF3E0ADA(iParam0))
				{
					case 2:
					case 0:
						unk_0xCD27BF29FB9012E2(&(uParam1->f_53), 23);
						unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 22);
						break;
					
					case 3:
					case 1:
						unk_0xCD27BF29FB9012E2(&(uParam1->f_53), 23);
						unk_0xCD27BF29FB9012E2(&(uParam1->f_53), 22);
						break;
					
					case 4:
						unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 23);
						break;
				}
			}
			else
			{
				unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 23);
			}
		}
		if (!unk_0x4FA9345A8F43BDAC(iParam0))
		{
			unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 9);
		}
		if (unk_0xFE579AAF18C374AC(iParam0))
		{
			unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 10);
		}
		if (unk_0xEC9139D75F13D0D3(iParam0))
		{
			unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 13);
			unk_0x036299CCFE91E283(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		}
		if (unk_0x4FD71373746F04E1(iParam0))
		{
			unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 12);
		}
		func_42(&iParam0, &(uParam1->f_9), &(uParam1->f_35));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x64D04C2170ADD5A9(iParam0, iVar0 + 1))
			{
				unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), func_41(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0xC0D8A6AB4509755B(iParam0, 0))
		{
			unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 11);
		}
		else
		{
			unk_0xCD27BF29FB9012E2(&(uParam1->f_53), 11);
		}
		if (unk_0xD665B29FEC987319(iParam0, "IgnoredByQuickSave") && unk_0x44A72A39C7AE7EDD(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 27);
		}
		else
		{
			unk_0xCD27BF29FB9012E2(&(uParam1->f_53), 27);
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
	
	if (!unk_0xCA8794CE207FC6D5(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xFE85A2A6EE40ADA0(*iParam0) == 0)
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
			if (unk_0x44C699E5DC7A51EA(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x892B3EDA66236D64(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x194DFCDAD36ABECC(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x194DFCDAD36ABECC(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_43(var uParam0)
{
	int iVar0;
	
	uParam0->f_42 = 0;
	uParam0->f_53 = 0;
	uParam0->f_41 = 0;
	uParam0->f_38 = 0;
	uParam0->f_39 = 0;
	uParam0->f_40 = 0;
	uParam0->f_50 = 0;
	uParam0->f_51 = 0;
	uParam0->f_52 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_35[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_45 = 0;
	uParam0->f_46 = 1;
	uParam0->f_47 = 0;
	uParam0->f_48 = 0;
	uParam0->f_49 = 0;
}

int func_44(int iParam0)
{
	if ((((((((((!unk_0xFD68187442384158(iParam0) || !unk_0xCA8794CE207FC6D5(iParam0, 0)) || func_57(iParam0, 0, 0)) || func_57(iParam0, 1, 0)) || func_57(iParam0, 2, 0)) || func_56(iParam0) != 145) || func_55(iParam0)) || func_54(iParam0)) || func_53(iParam0)) || func_52(iParam0)) || !func_45(unk_0x26EA758C2A691D06(iParam0)))
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
	if (((unk_0x9C14CED64BA9A516(iParam0) || unk_0x9652AA5F22572EA4(iParam0)) || unk_0x6149FC3B1572A5B9(iParam0)) || unk_0x0A0852014FD513B3(iParam0))
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
	if (!unk_0x4E583EB6802F4DA9(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0xD95428C8AA1DBBF2())) || (iParam0 == joaat("buffalo3") && !unk_0xD95428C8AA1DBBF2())) || (iParam0 == joaat("gauntlet2") && !unk_0xD95428C8AA1DBBF2())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0xD95428C8AA1DBBF2())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_51())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x4FC8D240D0A0F8E5())
		{
			if (unk_0x010E2F747F94CA7D(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x33C8EAC2E4509403(Var1.f_0))
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
		if ((unk_0x5D64B4BDB6FCA4F0() || unk_0x80AD636AD4184F2B()) || unk_0xA09FDB4B3C001CAB())
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
	if (unk_0xFBD0BD8E550E0625(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_51()
{
	var uVar0;
	
	if (unk_0x85B80D0F84A3F70C())
	{
		if (unk_0x61D8FEAF64881CDA(unk_0x227FB8F9C772BAFB(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0xD95428C8AA1DBBF2())
	{
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131417 == 2)
	{
		return 1;
	}
	if (unk_0xA730AA29D1C70932())
	{
		if (unk_0x72B3C5483AF02F51())
		{
			if (unk_0xFA66FD5789959E48())
			{
				if (unk_0x85B80D0F84A3F70C())
				{
					uVar0 = unk_0x227FB8F9C772BAFB(866);
					unk_0x3DBE2A7AF9E71C82(&uVar0, 0);
					unk_0x6C25B3CA27EB626F(uVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_52(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0x26EA758C2A691D06(iParam0);
	uVar1 = unk_0x3907ED4361C53248(iParam0);
	if (iVar0 == joaat("speedo") && unk_0xA858564DC37EED5E(uVar1, "LAMAR G "))
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
		if (unk_0xFD68187442384158(Global_87550[iVar0]))
		{
			if (Global_87550[iVar0] == iParam0)
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
	
	if (unk_0xFD68187442384158(iParam0) && unk_0xCA8794CE207FC6D5(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0xFD68187442384158(Global_87520[iVar0]) && unk_0xCA8794CE207FC6D5(Global_87520[iVar0], 0))
			{
				if (Global_87520[iVar0] == iParam0 && unk_0x26EA758C2A691D06(Global_87520[iVar0]) == unk_0x26EA758C2A691D06(iParam0))
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
	
	if (unk_0xFD68187442384158(Global_66960.f_484[24]))
	{
		if (iParam0 == Global_66960.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xFD68187442384158(Global_66960.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_66960.f_484[iVar0])
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
	
	if (!unk_0xFD68187442384158(iParam0))
	{
		return 145;
	}
	if (!unk_0xCA8794CE207FC6D5(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xFD68187442384158(Global_87520[iVar0]))
		{
			if (Global_87520[iVar0] == iParam0)
			{
				return Global_87530[iVar0];
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
	
	if (!unk_0xFD68187442384158(iParam0) || !unk_0xCA8794CE207FC6D5(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_58(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0x61D8FEAF64881CDA(Global_97173.f_5486[iVar9], 0))
		{
			if (unk_0xA5A6C7F14D300E6C(&sVar1, iParam0))
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
			Global_66960[iParam0] = 1;
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
		unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_18338[iParam0]), iParam1);
	}
	else
	{
		unk_0xCD27BF29FB9012E2(&(Global_97173.f_18338[iParam0]), iParam1);
	}
}

bool func_61(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x61D8FEAF64881CDA(Global_97173.f_18338[iParam0], iParam1);
}

void func_62(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_66(&(Global_66960.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xFD68187442384158(Global_66960.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
			{
				if (unk_0xCA8794CE207FC6D5(Global_66960.f_139[iParam0], 0))
				{
					if (unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), Global_66960.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0xBAE5DF507EEC53C8(Global_66960.f_139[iParam0], 1, 1);
				unk_0x10EA498723DC5A09(&(Global_66960.f_139[iParam0]));
			}
		}
		Global_66960[iParam0] = 1;
		if (unk_0x61D8FEAF64881CDA(Global_66960.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_61(iParam0, 0)) && Global_67869.f_42 == 0) && Global_97173.f_18338.f_1406[Global_66960.f_555[0 /*21*/].f_14] != 0) && Global_97173.f_18338.f_1406[Global_66960.f_555[0 /*21*/].f_14] > 3) && (!func_64(0, Global_66960.f_555[0 /*21*/].f_12) || !func_64(1, Global_66960.f_555[0 /*21*/].f_12)))
			{
				func_63(Global_97173.f_18338.f_69[Global_66960.f_555[0 /*21*/].f_14 /*54*/], &Global_67869);
				Global_67923 = Global_97173.f_18338.f_4799;
			}
			func_59(iParam0, 0);
		}
	}
}

void func_63(struct<54> Param0, var uParam54)
{
	uParam54->f_42 = Param0.f_42;
	*uParam54 = Param0.f_0;
	uParam54->f_1 = { Param0.f_1 };
	uParam54->f_5 = Param0.f_5;
	uParam54->f_6 = Param0.f_6;
	uParam54->f_7 = Param0.f_7;
	uParam54->f_8 = Param0.f_8;
	uParam54->f_9 = { Param0.f_9 };
	uParam54->f_35 = { Param0.f_35 };
	uParam54->f_38 = Param0.f_38;
	uParam54->f_39 = Param0.f_39;
	uParam54->f_40 = Param0.f_40;
	uParam54->f_41 = Param0.f_41;
	uParam54->f_53 = Param0.f_53;
	uParam54->f_43 = Param0.f_43;
	uParam54->f_45 = Param0.f_45;
	uParam54->f_44 = Param0.f_44;
	uParam54->f_47 = Param0.f_47;
	uParam54->f_48 = Param0.f_48;
	uParam54->f_49 = Param0.f_49;
	uParam54->f_50 = Param0.f_50;
	uParam54->f_51 = Param0.f_51;
	uParam54->f_52 = Param0.f_52;
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
	if (iParam0 < 0 || iParam0 >= func_65(&(Global_97173.f_18338.f_4414[iVar0 /*109*/])))
	{
		return 0;
	}
	return func_46(Global_97173.f_18338.f_4414[iVar0 /*109*/][iParam0 /*54*/].f_42);
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
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 20);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_67(0, 1);
			uParam0->f_12 = 0;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 20);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_67(1, 1);
			uParam0->f_12 = 1;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 20);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_67(1, 2);
			uParam0->f_12 = 1;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 19);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_67(1, 1);
			uParam0->f_12 = 1;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 20);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_67(1, 2);
			uParam0->f_12 = 1;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 19);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_67(2, 1);
			uParam0->f_12 = 2;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 20);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_67(2, 1);
			uParam0->f_12 = 2;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 20);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_67(2, 1);
			uParam0->f_12 = 2;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 20);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 0);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 21);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 14);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 10);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 12);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 0);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 21);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 14);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 10);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 12);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 0);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 21);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 14);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 10);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 12);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 0);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 21);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 14);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 10);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 12);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 22);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 0);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 21);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 14);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 10);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 12);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 22);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 0);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 21);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 14);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 10);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 12);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 22);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 0);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 21);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 14);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 10);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 12);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 0);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 21);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 14);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 10);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 12);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 0);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 21);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 14);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 10);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 12);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 23);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 0);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 21);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 14);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 10);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 12);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 24);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 28);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 0);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 21);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 14);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 10);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 12);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 24);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 28);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 0);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 21);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 14);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 10);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 12);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 24);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 28);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 29);
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
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 10);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 12);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 27);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 24);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 29);
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
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 10);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 12);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 27);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 24);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 29);
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
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 10);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 12);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 27);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 24);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 10);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 11);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 13);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 10);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 11);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 13);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 9);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 9);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 23);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 23);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 23);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 8);
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
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 2);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 30);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 2);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 22);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 6);
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
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 13);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 2);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 1);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 23);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 21);
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
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 13);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 2);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 1);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 23);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 0);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 21);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 23);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 6);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 30);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 23);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 30);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 23);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0x61D8FEAF64881CDA(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_97173.f_18338.f_69[uParam0->f_14 /*54*/].f_42;
		if (iParam1 == 14)
		{
			if ((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_82(Global_97173.f_18338.f_1312[uParam0->f_14 /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_97173.f_18338.f_1312[uParam0->f_14 /*3*/] };
		}
		if (Global_97173.f_18338.f_1382[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_97173.f_18338.f_1382[uParam0->f_14];
		}
	}
	if (unk_0x61D8FEAF64881CDA(uParam0->f_9, 19))
	{
		if (!func_82(Global_97173.f_1729.f_539.f_2528[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_97173.f_1729.f_539.f_2528[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_97173.f_1729.f_539.f_2549[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0x61D8FEAF64881CDA(uParam0->f_9, 20))
	{
		if (!func_82(Global_97173.f_1729.f_539.f_2528[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_97173.f_1729.f_539.f_2528[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_97173.f_1729.f_539.f_2549[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_67(int iParam0, int iParam1)
{
	struct<58> Var0;
	
	if (func_17(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 25;
		Var0.f_57 = 2;
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
	struct<74> Var1;
	
	Var1.f_11 = 12;
	Var1.f_31 = 25;
	Var1.f_57 = 2;
	Var1.f_64 = 1;
	Var1.f_60 = 255;
	Var1.f_61 = 255;
	Var1.f_62 = 255;
	Var1.f_73 = 1;
	Var1.f_3 = 1000;
	Var1.f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_97173.f_7311.f_99.f_58[128] && !Global_97173.f_7311.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 3f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					Var1.f_11[0] = 1;
					StringCopy(&(Var1.f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 14.9f;
					Var1.f_5 = 43;
					Var1.f_6 = 43;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 14f;
					Var1.f_5 = 32;
					Var1.f_6 = 0;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					StringCopy(&(Var1.f_27), "BETTY 32", 16);
					if (Global_97173.f_7311.f_99.f_58[119])
					{
						Var1.f_11[1] = 1;
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
			else if (Global_97173.f_7311.f_99.f_58[118])
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
					Var1.f_0 = iVar0;
					Var1.f_2 = 6f;
					Var1.f_5 = 53;
					Var1.f_6 = 0;
					Var1.f_7 = 59;
					Var1.f_8 = 156;
					StringCopy(&(Var1.f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_5 = 111;
					Var1.f_6 = 111;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					Var1.f_10 = 1;
					StringCopy(&(Var1.f_27), "FC1988", 16);
					Var1.f_11[0] = 1;
					Var1.f_11[1] = 1;
					Var1.f_11[2] = 1;
					Var1.f_11[3] = 1;
					Var1.f_11[4] = 1;
					Var1.f_11[5] = 1;
					Var1.f_11[6] = 1;
					Var1.f_11[7] = 1;
					Var1.f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
	*uParam1 = { Var1 };
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
		if ((unk_0xFD68187442384158(Global_66960.f_484[iVar0]) && !unk_0xE5D56342B0FF1D0D(Global_66960.f_484[iVar0])) && unk_0xCA8794CE207FC6D5(Global_66960.f_484[iVar0], 0))
		{
			unk_0x1603516D6065B48F(iParam0, &iVar1, &iVar2);
			unk_0x1603516D6065B48F(Global_66960.f_484[iVar0], &iVar3, &iVar4);
			if (((unk_0x26EA758C2A691D06(iParam0) == unk_0x26EA758C2A691D06(Global_66960.f_484[iVar0]) && unk_0x4CA0AD498EF66914(iParam0) == unk_0x4CA0AD498EF66914(Global_66960.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
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
	
	iVar0 = unk_0x26EA758C2A691D06(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_72(iParam0, Global_66960.f_139[38], 0))
			{
				func_62(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_72(iParam0, Global_66960.f_139[43], 1))
			{
				func_62(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar5 = unk_0x44110552833E1A96(unk_0x507DA4994C3D8EBD(), &uVar1);
			iVar6 = 0;
			while (iVar6 <= (iVar5 - 1))
			{
				if (func_72(iParam0, uVar1[iVar6], 1) && func_71(unk_0xBF1B13057E5119A4(uVar1[iVar6], 1), 2136.133f, 4780.563f, 39.9702f, 5f))
				{
					if ((!bParam4 || func_82(Param1, 0f, 0f, 0f)) || unk_0x8FE221761D524CFE(unk_0xBF1B13057E5119A4(iParam0, 1), unk_0xBF1B13057E5119A4(uVar1[iVar6], 1), 1) < 10f)
					{
						unk_0x10EA498723DC5A09(&iParam0);
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
	}
	return 0;
}

int func_71(struct<3> Param0, struct<3> Param3, float fParam6)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (unk_0x75E01E8585722F89((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x75E01E8585722F89((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			if (unk_0x75E01E8585722F89((Param0.f_2 - Param3.f_2)) <= fParam6)
			{
				return 1;
			}
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
	
	if ((unk_0xFD68187442384158(iParam1) && !unk_0xE5D56342B0FF1D0D(iParam1)) && unk_0xCA8794CE207FC6D5(iParam1, 0))
	{
		if (bParam2)
		{
			unk_0x1603516D6065B48F(iParam0, &iVar0, &iVar1);
			unk_0x1603516D6065B48F(iParam1, &iVar2, &iVar3);
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
		if (!unk_0xFD68187442384158(Global_87520[iVar0]))
		{
			Global_87520[iVar0] = iParam0;
			Global_87530[iVar0] = iParam1;
			Global_87540[iVar0] = unk_0x26EA758C2A691D06(iParam0);
			if (unk_0x4658BA5921D40213(Global_87540[iVar0]))
			{
				Global_87568[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_87568[iParam1 /*3*/][1] = -1;
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
		if (unk_0xFD68187442384158(Global_87520[iVar0]))
		{
			if (iParam0 == 145 || Global_87530[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0x26EA758C2A691D06(Global_87520[iVar0]) == func_67(iParam0, iParam1))
				{
					if (!unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), Global_87520[iVar0], 0))
					{
						unk_0xBAE5DF507EEC53C8(Global_87520[iVar0], 0, 1);
						unk_0x10EA498723DC5A09(&(Global_87520[iVar0]));
						Global_87530[iVar0] = 145;
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
	
	if (unk_0xCA8794CE207FC6D5(iParam0, 0))
	{
		if (unk_0x3BA42EA02A10243D(&(uParam1->f_1)) != 0)
		{
			unk_0x0BC897C4AD5A4F17(iParam0, &(uParam1->f_1));
		}
		if (*uParam1 >= 0 && *uParam1 < unk_0x8063ADDF06EDB6B8())
		{
			unk_0x4181147B4609CD58(iParam0, *uParam1);
		}
		if (unk_0x61D8FEAF64881CDA(uParam1->f_53, 13))
		{
			unk_0x86140F88A4D4237B(iParam0, uParam1->f_47, uParam1->f_48, uParam1->f_49);
		}
		else
		{
			unk_0x47486E10E526890E(iParam0);
		}
		if (unk_0x61D8FEAF64881CDA(uParam1->f_53, 12))
		{
			unk_0xF7A065BFB9BF72C6(iParam0, uParam1->f_47, uParam1->f_48, uParam1->f_49);
		}
		else
		{
			unk_0xCBF5684487475533(iParam0);
		}
		unk_0x2972E055244638AD(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0xA3A489EE6DDCCD16(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0x61D8FEAF64881CDA(uParam1->f_53, 15) || func_79(iParam0)) || (((uParam1->f_38 == 0 && uParam1->f_39 == 0) && uParam1->f_40 == 0) && uParam1->f_9[20] > 0)) && func_78())
		{
			uParam1->f_38 = 0;
			uParam1->f_39 = 0;
			uParam1->f_40 = 0;
		}
		else if ((uParam1->f_38 == 0 && uParam1->f_39 == 0) && uParam1->f_40 == 0)
		{
			uParam1->f_38 = 255;
			uParam1->f_39 = 255;
			uParam1->f_40 = 255;
		}
		unk_0xBB5E99AAAB5C5476(iParam0, uParam1->f_38, uParam1->f_39, uParam1->f_40);
		if (uParam1->f_41 == -1 && uParam1->f_42 != joaat("granger"))
		{
			unk_0xE181A03438FED412(iParam0, 0);
		}
		else
		{
			unk_0xE181A03438FED412(iParam0, 0);
			unk_0xE181A03438FED412(iParam0, uParam1->f_41);
		}
		unk_0x668C5F7E7EE6BF09(iParam0, !unk_0x61D8FEAF64881CDA(uParam1->f_53, 9));
		if (bParam2)
		{
			unk_0xCDC1FD4387DA32EC(iParam0, uParam1->f_46);
		}
		unk_0x51A9720CD1E345DB(iParam0, uParam1->f_50, uParam1->f_51, uParam1->f_52);
		unk_0x64FB83DE98A88D4A(iParam0, 2, unk_0x61D8FEAF64881CDA(uParam1->f_53, 28));
		unk_0x64FB83DE98A88D4A(iParam0, 3, unk_0x61D8FEAF64881CDA(uParam1->f_53, 29));
		unk_0x64FB83DE98A88D4A(iParam0, 0, unk_0x61D8FEAF64881CDA(uParam1->f_53, 30));
		unk_0x64FB83DE98A88D4A(iParam0, 1, unk_0x61D8FEAF64881CDA(uParam1->f_53, 31));
		unk_0x464A1A49361CDE18(iParam0, unk_0x61D8FEAF64881CDA(uParam1->f_53, 10));
		if (unk_0xF889AB56F9A8D5E3(iParam0) > 1 && uParam1->f_43 >= 0)
		{
			unk_0x2BACAD26E4CE1EDA(iParam0, uParam1->f_43);
		}
		if (uParam1->f_45 > -1 && uParam1->f_45 < 255)
		{
			if (!unk_0xD70F47541E70FD47(unk_0x26EA758C2A691D06(iParam0)))
			{
				if (unk_0xA34706B20AE53D17(unk_0x26EA758C2A691D06(iParam0)))
				{
					if (uParam1->f_45 == 6)
					{
						unk_0x3B1F287A5A67026D(iParam0, uParam1->f_45);
					}
				}
				else
				{
					unk_0x3B1F287A5A67026D(iParam0, uParam1->f_45);
				}
			}
		}
		if (unk_0x850813D10502D655(iParam0, 0))
		{
			if ((uParam1->f_44 == 0 || uParam1->f_44 == 3) || uParam1->f_44 == 5)
			{
				unk_0x2575047F91291C9B(iParam0, 1);
			}
			else
			{
				unk_0xB094F261B9D8440F(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_76(&iParam0, &(uParam1->f_9), &(uParam1->f_35));
		}
		if (!unk_0x6149FC3B1572A5B9(uParam1->f_42) && !unk_0x9C14CED64BA9A516(uParam1->f_42))
		{
			iVar0 = 0;
			while (iVar0 <= 11)
			{
				if (unk_0x61D8FEAF64881CDA(uParam1->f_53, func_41(iVar0 + 1)))
				{
					if (!unk_0x64D04C2170ADD5A9(iParam0, iVar0 + 1))
					{
						unk_0x25A5C91E8079E04E(iParam0, iVar0 + 1, 0);
					}
				}
				else if (unk_0x64D04C2170ADD5A9(iParam0, iVar0 + 1))
				{
					unk_0x25A5C91E8079E04E(iParam0, iVar0 + 1, 1);
				}
				iVar0++;
			}
		}
		if (unk_0x9652AA5F22572EA4(uParam1->f_42))
		{
			if (!unk_0x61D8FEAF64881CDA(uParam1->f_53, 23))
			{
				if (unk_0x61D8FEAF64881CDA(uParam1->f_53, 22))
				{
					unk_0xF14E53754BC84C29(iParam0, 2);
				}
				else
				{
					unk_0xF14E53754BC84C29(iParam0, 3);
				}
			}
			else
			{
				unk_0xF14E53754BC84C29(iParam0, 4);
			}
		}
		if (unk_0x61D8FEAF64881CDA(uParam1->f_53, 27))
		{
			unk_0x2A2AF8EC19CD5CF5(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0x2A2AF8EC19CD5CF5(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_76(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xCA8794CE207FC6D5(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xFE85A2A6EE40ADA0(*iParam0) == 0)
	{
		return 0;
	}
	unk_0xB7A7C917CF0448E6(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			unk_0xA157CC58CEE29910(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (unk_0x892B3EDA66236D64(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0xEB013E50B9C4917A(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0x5D4B50E2007354F0(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0x5D4B50E2007354F0(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0x5D4B50E2007354F0(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_77(*iParam0))
	{
		unk_0xA175CED361F78A04(*iParam0, 1);
		unk_0xC158AF2A8304483D(*iParam0, 1);
	}
	return 1;
}

int func_77(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0xFD68187442384158(iParam0) && unk_0xCA8794CE207FC6D5(iParam0, 0)) && unk_0xFE85A2A6EE40ADA0(iParam0) > 0)
	{
		unk_0xB7A7C917CF0448E6(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 25)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x892B3EDA66236D64(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0xF1BAAAC0BE911525(iParam0, iVar1, unk_0x892B3EDA66236D64(iParam0, iVar1)), 16);
				iVar2 = unk_0x3BA42EA02A10243D(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x3BA42EA02A10243D("MNU_CAGE") || iVar2 == unk_0x3BA42EA02A10243D("SABRE_CAG"))
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

bool func_78()
{
	return unk_0xFBD0BD8E550E0625(joaat("mpindependence"));
}

int func_79(int iParam0)
{
	var uVar0;
	
	if (unk_0xFD68187442384158(iParam0))
	{
		if (unk_0xCA8794CE207FC6D5(iParam0, 0))
		{
			if (unk_0x02F5CF849AAF443C("MPBitset", 3))
			{
				if (unk_0xD665B29FEC987319(iParam0, "MPBitset"))
				{
					uVar0 = unk_0xB98156B7389A5A3F(iParam0, "MPBitset");
				}
				return unk_0x61D8FEAF64881CDA(uVar0, 4);
			}
		}
	}
	return 0;
}

void func_80(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_66(&(Global_66960.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0x8FE221761D524CFE(Param0, Global_66960.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_62(iVar0);
			}
		}
		iVar0++;
	}
}

int func_81(var uParam0)
{
	if (func_83(uParam0))
	{
		if (unk_0xD291857D0C9C7FEC(uParam0->f_12.f_42))
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

bool func_82(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_83(var uParam0)
{
	if (uParam0->f_12.f_42 == 0)
	{
		return 0;
	}
	if (!func_46(uParam0->f_12.f_42))
	{
		return 0;
	}
	return 1;
}

bool func_84()
{
	return func_81(&(Global_91172.f_2167));
}

void func_85()
{
	func_86(&(Global_91172.f_2167));
}

void func_86(var uParam0)
{
	if (func_83(uParam0))
	{
		unk_0xCBE6AC5010E5CE5C(uParam0->f_12.f_42);
	}
}

int func_87(struct<3> Param0, int iParam3)
{
	return func_88(Global_91172.f_2167.f_12.f_42, Param0, iParam3);
}

int func_88(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam4 == 1)
	{
		Param1 = { func_89() };
	}
	unk_0xB72AA272E2B242A6(iParam0, &Var0, &Var3);
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

Vector3 func_89()
{
	return 2.55f, 5.59f, 2.55f;
}

int func_90()
{
	return func_83(&(Global_91172.f_2167));
}

void func_91()
{
	unk_0xCBE6AC5010E5CE5C(joaat("armytrailer2"));
	unk_0xCBE6AC5010E5CE5C(joaat("packer"));
	unk_0xCBE6AC5010E5CE5C(joaat("s_m_y_construct_01"));
	unk_0xCBE6AC5010E5CE5C(joaat("s_m_m_security_01"));
	unk_0xCBE6AC5010E5CE5C(joaat("bison2"));
	while ((((!unk_0xD291857D0C9C7FEC(joaat("armytrailer2")) || !unk_0xD291857D0C9C7FEC(joaat("packer"))) || !unk_0xD291857D0C9C7FEC(joaat("s_m_y_construct_01"))) || !unk_0xD291857D0C9C7FEC(joaat("s_m_m_security_01"))) || !unk_0xD291857D0C9C7FEC(joaat("bison2")))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0xFD68187442384158(iLocal_31))
	{
		if (unk_0xFD68187442384158(Global_86686[1]))
		{
			unk_0xBAE5DF507EEC53C8(Global_86686[1], 1, 1);
			iLocal_31 = Global_86686[1];
			unk_0x6C5479F57AAC2554(iLocal_31);
		}
		else
		{
			iLocal_31 = unk_0x546974B676313326(joaat("armytrailer2"), 919.303f, -1553.88f, 29.7789f, 167.1917f, 1, 1);
			unk_0x6C5479F57AAC2554(iLocal_31);
		}
	}
	if (!unk_0xFD68187442384158(iLocal_32))
	{
		if (unk_0xFD68187442384158(Global_86686[2]))
		{
			unk_0xBAE5DF507EEC53C8(Global_86686[2], 1, 1);
			iLocal_32 = Global_86686[2];
			unk_0xC158AF2A8304483D(iLocal_32, 1);
			unk_0xCDC1FD4387DA32EC(iLocal_32, 7);
			func_94(iLocal_32, -1);
			func_93(iLocal_32, -1);
		}
		else
		{
			iLocal_32 = unk_0x546974B676313326(joaat("packer"), 919.303f, -1553.88f, 29.7789f, 167.1917f, 1, 1);
			unk_0xC158AF2A8304483D(iLocal_32, 1);
			unk_0xCDC1FD4387DA32EC(iLocal_32, 7);
			func_94(iLocal_32, -1);
			func_93(iLocal_32, -1);
		}
	}
	unk_0xF2010391989F2D52(iLocal_32, iLocal_31, 0.5f);
	unk_0xFF467904A8A12BBE(joaat("armytrailer2"));
	unk_0xFF467904A8A12BBE(joaat("packer"));
	unk_0xFF467904A8A12BBE(joaat("bison2"));
	if (!unk_0xFD68187442384158(iLocal_34[0]))
	{
		if (unk_0xFD68187442384158(Global_86686.f_9[0]))
		{
			unk_0xBAE5DF507EEC53C8(Global_86686.f_9[0], 1, 1);
			iLocal_34[0] = Global_86686.f_9[0];
			unk_0xE440546F94B26235(iLocal_34[0], iLocal_301);
			func_92(iLocal_34[0], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x2DC5B31EBB810396(iLocal_34[0], 1);
		}
		else
		{
			iLocal_34[0] = unk_0x7B88529CAE3B7F15(26, joaat("s_m_y_construct_01"), 912.34f, -1543.297f, 29.6469f, 16.169f, 1, 1);
			unk_0xE440546F94B26235(iLocal_34[0], iLocal_301);
			if (unk_0xE08642374BA21D0D(912.3f, -1542.6f, 30.4f, 3f, 0))
			{
				unk_0xB9CCB1B9F8BDAE90(iLocal_34[0], 912.3f, -1542.6f, 30.4f, 5f, 0);
			}
			unk_0x2DC5B31EBB810396(iLocal_34[0], 1);
			func_92(iLocal_34[0], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
		}
	}
	if (!unk_0xFD68187442384158(iLocal_34[1]))
	{
		if (unk_0xFD68187442384158(Global_86686.f_9[1]))
		{
			unk_0xBAE5DF507EEC53C8(Global_86686.f_9[1], 1, 1);
			iLocal_34[1] = Global_86686.f_9[1];
			unk_0xE440546F94B26235(iLocal_34[1], iLocal_301);
			func_92(iLocal_34[1], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x2DC5B31EBB810396(iLocal_34[1], 1);
		}
		else
		{
			iLocal_34[1] = unk_0x7B88529CAE3B7F15(26, joaat("s_m_y_construct_01"), 917.5028f, -1517.401f, 29.9673f, 158.5738f, 1, 1);
			unk_0xE440546F94B26235(iLocal_34[1], iLocal_301);
			if (unk_0xE08642374BA21D0D(917.5028f, -1517.401f, 29.9673f, 3f, 0))
			{
				unk_0xB9CCB1B9F8BDAE90(iLocal_34[1], 917.5028f, -1517.401f, 29.9673f, 5f, 0);
			}
			func_92(iLocal_34[1], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x2DC5B31EBB810396(iLocal_34[1], 1);
		}
	}
	if (!unk_0xFD68187442384158(iLocal_34[2]))
	{
		if (unk_0xFD68187442384158(Global_86686.f_9[2]))
		{
			unk_0xBAE5DF507EEC53C8(Global_86686.f_9[2], 1, 1);
			iLocal_34[2] = Global_86686.f_9[2];
			unk_0xE440546F94B26235(iLocal_34[2], iLocal_301);
			func_92(iLocal_34[2], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x2DC5B31EBB810396(iLocal_34[2], 1);
		}
		else
		{
			iLocal_34[2] = unk_0x7B88529CAE3B7F15(26, joaat("s_m_y_construct_01"), 869.6423f, -1541.423f, 29.2516f, 346.9848f, 1, 1);
			unk_0xE440546F94B26235(iLocal_34[2], iLocal_301);
			if (unk_0xE08642374BA21D0D(869.6423f, -1541.423f, 29.2516f, 3f, 0))
			{
				unk_0xB9CCB1B9F8BDAE90(iLocal_34[2], 869.6423f, -1541.423f, 29.2516f, 5f, 0);
			}
			func_92(iLocal_34[2], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x2DC5B31EBB810396(iLocal_34[2], 1);
		}
	}
	if (!unk_0xFD68187442384158(iLocal_34[3]))
	{
		if (unk_0xFD68187442384158(Global_86686.f_9[3]))
		{
			unk_0xBAE5DF507EEC53C8(Global_86686.f_9[3], 1, 1);
			iLocal_34[3] = Global_86686.f_9[3];
			unk_0xE440546F94B26235(iLocal_34[3], iLocal_301);
			func_92(iLocal_34[3], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x2DC5B31EBB810396(iLocal_34[3], 1);
		}
		else
		{
			iLocal_34[3] = unk_0x7B88529CAE3B7F15(26, joaat("s_m_y_construct_01"), 884.3046f, -1573.188f, 29.8247f, 182.9722f, 1, 1);
			unk_0xE440546F94B26235(iLocal_34[3], iLocal_301);
			if (unk_0xE08642374BA21D0D(884.3046f, -1573.188f, 29.8247f, 3f, 0))
			{
				unk_0xB9CCB1B9F8BDAE90(iLocal_34[3], 884.3046f, -1573.188f, 29.8247f, 5f, 0);
			}
			func_92(iLocal_34[3], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x2DC5B31EBB810396(iLocal_34[3], 1);
		}
	}
	if (!unk_0xFD68187442384158(iLocal_34[4]))
	{
		if (unk_0xFD68187442384158(Global_86686.f_9[4]))
		{
			unk_0xBAE5DF507EEC53C8(Global_86686.f_9[4], 1, 1);
			iLocal_34[4] = Global_86686.f_9[4];
			unk_0xE440546F94B26235(iLocal_34[4], iLocal_301);
			func_92(iLocal_34[4], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x2DC5B31EBB810396(iLocal_34[4], 1);
		}
		else
		{
			iLocal_34[4] = unk_0x7B88529CAE3B7F15(26, joaat("s_m_y_construct_01"), 903.8805f, -1575.02f, 29.8327f, 308.1952f, 1, 1);
			unk_0xE440546F94B26235(iLocal_34[4], iLocal_301);
			if (unk_0xE08642374BA21D0D(903.8805f, -1575.02f, 29.8327f, 3f, 0))
			{
				unk_0xB9CCB1B9F8BDAE90(iLocal_34[4], 903.8805f, -1575.02f, 29.8327f, 5f, 0);
			}
			func_92(iLocal_34[4], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x2DC5B31EBB810396(iLocal_34[4], 1);
		}
	}
	if (!unk_0xFD68187442384158(iLocal_34[5]))
	{
		if (unk_0xFD68187442384158(Global_86686.f_9[5]))
		{
			unk_0xBAE5DF507EEC53C8(Global_86686.f_9[5], 1, 1);
			iLocal_34[5] = Global_86686.f_9[5];
			unk_0xE440546F94B26235(iLocal_34[5], iLocal_301);
			func_92(iLocal_34[5], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x2DC5B31EBB810396(iLocal_34[5], 1);
		}
		else
		{
			iLocal_34[5] = unk_0x7B88529CAE3B7F15(26, joaat("s_m_y_construct_01"), 906.2186f, -1575.108f, 29.8125f, 55.9906f, 1, 1);
			unk_0xE440546F94B26235(iLocal_34[5], iLocal_301);
			if (unk_0xE08642374BA21D0D(906.2186f, -1575.108f, 29.8125f, 3f, 0))
			{
				unk_0xB9CCB1B9F8BDAE90(iLocal_34[5], 906.2186f, -1575.108f, 29.8125f, 5f, 0);
			}
			func_92(iLocal_34[5], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x2DC5B31EBB810396(iLocal_34[5], 1);
		}
	}
	if (!unk_0xFD68187442384158(iLocal_34[6]))
	{
		if (unk_0xFD68187442384158(Global_86686.f_9[8]))
		{
			unk_0xBAE5DF507EEC53C8(Global_86686.f_9[8], 1, 1);
			iLocal_34[6] = Global_86686.f_9[8];
			unk_0xE440546F94B26235(iLocal_34[6], iLocal_301);
			func_92(iLocal_34[6], 20f, 5f, 120f, -45f, 45f);
			unk_0x2DC5B31EBB810396(iLocal_34[6], 1);
		}
		else
		{
			iLocal_34[6] = unk_0x7B88529CAE3B7F15(26, joaat("s_m_y_construct_01"), 889.285f, -1561.485f, 29.6539f, 22.2456f, 1, 1);
			unk_0xE440546F94B26235(iLocal_34[6], iLocal_301);
			if (unk_0xE08642374BA21D0D(889.285f, -1561.485f, 29.6539f, 3f, 0))
			{
				unk_0xB9CCB1B9F8BDAE90(iLocal_34[6], 889.285f, -1561.485f, 29.6539f, 5f, 0);
			}
			func_92(iLocal_34[6], 20f, 5f, 120f, -45f, 45f);
			unk_0x2DC5B31EBB810396(iLocal_34[6], 1);
		}
	}
	if (!unk_0xFD68187442384158(iLocal_42[0]))
	{
		if (unk_0xFD68187442384158(Global_86686.f_9[6]))
		{
			unk_0xBAE5DF507EEC53C8(Global_86686.f_9[6], 1, 1);
			iLocal_42[0] = Global_86686.f_9[6];
			unk_0xE440546F94B26235(iLocal_42[0], iLocal_302);
			func_92(iLocal_42[0], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x2DC5B31EBB810396(iLocal_42[0], 1);
			unk_0x3F9EDC2D18464273(iLocal_42[0], joaat("weapon_pistol"), 100, 0, 0);
			unk_0x454E090239AFF6E8(iLocal_42[0], "S_M_M_GENERICSECURITY_01_LATINO_MINI_01");
		}
		else
		{
			iLocal_42[0] = unk_0x7B88529CAE3B7F15(26, joaat("s_m_m_security_01"), 863.1551f, -1564.572f, 29.3231f, 130.7946f, 1, 1);
			unk_0xE440546F94B26235(iLocal_42[0], iLocal_302);
			func_92(iLocal_42[0], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x2DC5B31EBB810396(iLocal_42[0], 1);
			unk_0x3F9EDC2D18464273(iLocal_42[0], joaat("weapon_pistol"), 100, 0, 0);
			unk_0x454E090239AFF6E8(iLocal_42[0], "S_M_M_GENERICSECURITY_01_LATINO_MINI_01");
		}
	}
	if (!unk_0xFD68187442384158(iLocal_42[1]))
	{
		if (unk_0xFD68187442384158(Global_86686.f_9[7]))
		{
			unk_0xBAE5DF507EEC53C8(Global_86686.f_9[7], 1, 1);
			iLocal_42[1] = Global_86686.f_9[7];
			unk_0xE440546F94B26235(iLocal_42[1], iLocal_302);
			func_92(iLocal_42[1], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x2DC5B31EBB810396(iLocal_42[1], 1);
			unk_0x3F9EDC2D18464273(iLocal_42[1], joaat("weapon_pistol"), 100, 0, 0);
			unk_0x454E090239AFF6E8(iLocal_42[1], "S_M_M_GENERICSECURITY_01_LATINO_MINI_02");
		}
		else
		{
			iLocal_42[1] = unk_0x7B88529CAE3B7F15(26, joaat("s_m_m_security_01"), 940.2881f, -1573.877f, 29.3866f, 269.1856f, 1, 1);
			unk_0xE440546F94B26235(iLocal_42[1], iLocal_302);
			func_92(iLocal_42[1], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x2DC5B31EBB810396(iLocal_42[1], 1);
			unk_0x3F9EDC2D18464273(iLocal_42[1], joaat("weapon_pistol"), 100, 0, 0);
			unk_0x454E090239AFF6E8(iLocal_42[1], "S_M_M_GENERICSECURITY_01_LATINO_MINI_02");
		}
	}
	unk_0xFF467904A8A12BBE(joaat("s_m_y_construct_01"));
	unk_0xFF467904A8A12BBE(joaat("s_m_m_security_01"));
}

void func_92(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5)
{
	if (!unk_0x9F94F2CFDCA78C55(iParam0))
	{
		unk_0x2F82BB8951419B6D(iParam0, fParam1);
		unk_0x5C8F1CDF678A827B(iParam0, iParam2);
		unk_0xBCC4F1BC92CC5FEB(iParam0, (fParam3 / 2f));
		unk_0xA207807C07A63952(iParam0, iParam4);
		unk_0xF90C94CA25D31B90(iParam0, iParam5);
	}
}

void func_93(int iParam0, int iParam1)
{
	Global_54583 = iParam0;
	Global_54584 = iParam1;
}

void func_94(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_54585 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_66667)
	{
		if (iParam1 == -1 || Global_66668[iVar0 /*9*/] == iParam1)
		{
			if (Global_66668[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_66668[iVar0 /*9*/].f_6 = iParam0;
				Global_66668[iVar0 /*9*/].f_7 = 1;
				Global_66668[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_95()
{
	iLocal_62 = 0;
	while (iLocal_62 <= 6)
	{
		if (unk_0xFD68187442384158(iLocal_34[iLocal_62]) && unk_0x51BC2FF711F8CF71(iLocal_34[iLocal_62], 1))
		{
			unk_0x8019BB3BA236A900(&(iLocal_34[iLocal_62]));
		}
		iLocal_62++;
	}
	if (unk_0xFD68187442384158(iLocal_42[0]) && unk_0x51BC2FF711F8CF71(iLocal_42[0], 1))
	{
		unk_0x8019BB3BA236A900(&(iLocal_42[0]));
	}
	if (unk_0xFD68187442384158(iLocal_42[1]) && unk_0x51BC2FF711F8CF71(iLocal_42[1], 1))
	{
		unk_0x8019BB3BA236A900(&(iLocal_42[1]));
	}
	if (unk_0xFD68187442384158(iLocal_45) && unk_0x51BC2FF711F8CF71(iLocal_45, 1))
	{
		unk_0x8019BB3BA236A900(&iLocal_45);
	}
	if (unk_0xFD68187442384158(iLocal_46) && unk_0x51BC2FF711F8CF71(iLocal_46, 1))
	{
		unk_0x8019BB3BA236A900(&iLocal_46);
	}
	if (unk_0xFD68187442384158(iLocal_47) && unk_0x51BC2FF711F8CF71(iLocal_47, 1))
	{
		unk_0x8019BB3BA236A900(&iLocal_47);
	}
	if (unk_0xFD68187442384158(iLocal_48) && unk_0x51BC2FF711F8CF71(iLocal_48, 1))
	{
		unk_0x8019BB3BA236A900(&iLocal_48);
	}
	if (!func_30())
	{
		unk_0xF85858E5CBF4D9F0(unk_0x507DA4994C3D8EBD(), 519.1906f, -2980.994f, 5.0443f, 1, 0, 0, 1);
		unk_0x248DC16118AE5035(unk_0x507DA4994C3D8EBD(), 270.1911f);
	}
	if (unk_0xFD68187442384158(iLocal_31) && unk_0x51BC2FF711F8CF71(iLocal_31, 1))
	{
		unk_0x10EA498723DC5A09(&iLocal_31);
	}
	if (unk_0xFD68187442384158(Global_86686[3]))
	{
		unk_0xBAE5DF507EEC53C8(Global_86686[3], 1, 0);
		unk_0x10EA498723DC5A09(&(Global_86686[3]));
	}
	if (unk_0xFD68187442384158(iLocal_32) && unk_0x51BC2FF711F8CF71(iLocal_32, 1))
	{
		unk_0x10EA498723DC5A09(&iLocal_32);
	}
	unk_0xA878656BC39BBC51("cellphone@str");
	unk_0xA878656BC39BBC51("misscarsteal4@director_grip");
	unk_0x12B3DEDD1DB99EFA("FHPRB_START");
	unk_0x12B3DEDD1DB99EFA("FHPRB_TRUCK");
	unk_0x12B3DEDD1DB99EFA("FHPRB_COPS");
	unk_0x12B3DEDD1DB99EFA("FHPRB_LOST");
	unk_0x12B3DEDD1DB99EFA("FHPRB_STOP");
	unk_0x4BCBC9058A5CECE1(889.5f, -1553.8f, 30f, 150f, 1, 0, 0, 0);
}

void func_96()
{
	if (unk_0xD361727124133DF3(uLocal_57))
	{
		unk_0xA0A65B537B1F11EC(&uLocal_57);
	}
	if (unk_0xD361727124133DF3(uLocal_58))
	{
		unk_0xA0A65B537B1F11EC(&uLocal_58);
	}
	if (unk_0xD361727124133DF3(uLocal_59))
	{
		unk_0xA0A65B537B1F11EC(&uLocal_59);
	}
	if (unk_0xD361727124133DF3(uLocal_60))
	{
		unk_0xA0A65B537B1F11EC(&uLocal_60);
	}
}

void func_97()
{
	Global_14558 = 0;
	func_98();
}

void func_98()
{
	unk_0xA2A4AD85BA2F7ADD();
	Global_16703 = 0;
	if ((unk_0x49BDC46D7CAD9C63() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0xD858EC6FECDB4B3F(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0xF611D1BB58990143())
	{
		unk_0xD858EC6FECDB4B3F(1);
		Global_15692 = 6;
		return;
	}
}

void func_99()
{
	func_116();
	if (iLocal_61 == 0)
	{
		if (iLocal_303 == 1)
		{
			func_34();
			iLocal_303 = 0;
		}
		iLocal_304 = 0;
		iLocal_313 = 0;
		iLocal_468 = 0;
		iLocal_108 = 0;
		iLocal_109 = 0;
		unk_0x53C0659721DC11EC(5);
		unk_0xA878656BC39BBC51("cellphone@str");
		unk_0xA878656BC39BBC51("misscarsteal4@director_grip");
		if (!unk_0x8D4100BAA46EE198())
		{
			unk_0xACF6EF3086F35588(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1));
			unk_0x662E87A876F1069D(800);
		}
		unk_0xA54C914AEB391F49(1f);
		unk_0x47B990AE184F491B(10f, 5f, 4);
		iLocal_395 = 1;
		iLocal_61 = 1;
	}
	if (iLocal_61 == 1)
	{
		func_115(&uLocal_136, 3, 0, "LESTER", 0, 1);
		if (func_14() == 0)
		{
			func_115(&uLocal_136, 0, unk_0x507DA4994C3D8EBD(), "MICHAEL", 0, 1);
		}
		if (func_14() == 1)
		{
			func_115(&uLocal_136, 1, unk_0x507DA4994C3D8EBD(), "FRANKLIN", 0, 1);
		}
		if (func_14() == 2)
		{
			func_115(&uLocal_136, 2, unk_0x507DA4994C3D8EBD(), "TREVOR", 0, 1);
		}
		iLocal_61 = 2;
	}
	if (iLocal_61 == 2)
	{
		if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) == 0)
		{
			if (func_14() == 0)
			{
				if (func_105(&uLocal_136, 12, "FHPBAUD", "FHPB_CHAT1", 7, 1, 0, 0, 0))
				{
					unk_0x47B990AE184F491B(5f, 5f, 4);
					unk_0xC1B1E9A034A63A62(0);
					iLocal_61 = 3;
				}
			}
			if (func_14() == 1)
			{
				if (func_105(&uLocal_136, 12, "FHPBAUD", "FHPB_CHAT3", 7, 1, 0, 0, 0))
				{
					unk_0x47B990AE184F491B(5f, 5f, 4);
					unk_0xC1B1E9A034A63A62(0);
					iLocal_61 = 3;
				}
			}
			if (func_14() == 2)
			{
				if (func_105(&uLocal_136, 12, "FHPBAUD", "FHPB_CHAT2", 7, 1, 0, 0, 0))
				{
					unk_0x47B990AE184F491B(5f, 5f, 4);
					unk_0xC1B1E9A034A63A62(0);
					iLocal_61 = 3;
				}
			}
		}
	}
	if (iLocal_61 == 3)
	{
		if (!unk_0xD361727124133DF3(uLocal_58))
		{
			if (!func_104())
			{
				if (unk_0x83666F9FB8FEBD4B() > 10500)
				{
					uLocal_58 = func_102(Local_115, 1);
				}
			}
		}
		if (func_104())
		{
			iLocal_61 = 4;
		}
	}
	if (iLocal_61 == 4)
	{
		if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) == 0)
		{
			if (unk_0xCA8794CE207FC6D5(iLocal_32, 0))
			{
				if (unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), iLocal_32, 0))
				{
					if (unk_0xA04CA7D6710299C3(iLocal_32))
					{
						if (unk_0x594EB70937EC1486(unk_0x507DA4994C3D8EBD(), Local_115, 4f, 4f, 2f, 1, 1, 2))
						{
							if (func_101(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0), 4f, 3, 0.5f, 0, 1))
							{
								unk_0xF74C93D9036BCC1E("FHPRB_STOP");
								if (unk_0xD361727124133DF3(uLocal_58))
								{
									unk_0xA0A65B537B1F11EC(&uLocal_58);
								}
								unk_0x47B990AE184F491B(5f, 5f, 4);
								func_100(0, -1);
								iLocal_61 = 0;
								iLocal_27 = 5;
							}
						}
					}
				}
			}
		}
	}
}

void func_100(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_54580)
	{
	}
	Global_54580 = 0;
	if (bParam0)
	{
		Global_54581 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_66667)
		{
			if (Global_54797[Global_66668[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_66668[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_66667)
		{
			if (Global_66668[iVar0 /*9*/] > 0)
			{
				if (Global_66668[iVar0 /*9*/] == iParam1)
				{
					Global_66668[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

int func_101(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5)
{
	unk_0x500F4CA776CEBD0A(0, 71, 1);
	unk_0x500F4CA776CEBD0A(0, 72, 1);
	unk_0x500F4CA776CEBD0A(0, 76, 1);
	unk_0x500F4CA776CEBD0A(0, 73, 1);
	unk_0x500F4CA776CEBD0A(0, 59, 1);
	unk_0x500F4CA776CEBD0A(0, 60, 1);
	if (bParam5)
	{
		unk_0x500F4CA776CEBD0A(0, 75, 1);
	}
	unk_0x500F4CA776CEBD0A(0, 80, 1);
	unk_0x500F4CA776CEBD0A(0, 69, 1);
	unk_0x500F4CA776CEBD0A(0, 70, 1);
	unk_0x500F4CA776CEBD0A(0, 68, 1);
	unk_0x500F4CA776CEBD0A(0, 74, 1);
	unk_0x500F4CA776CEBD0A(0, 86, 1);
	unk_0x500F4CA776CEBD0A(0, 81, 1);
	unk_0x500F4CA776CEBD0A(0, 82, 1);
	unk_0x500F4CA776CEBD0A(0, 138, 1);
	unk_0x500F4CA776CEBD0A(0, 136, 1);
	unk_0x500F4CA776CEBD0A(0, 114, 1);
	unk_0x500F4CA776CEBD0A(0, 107, 1);
	unk_0x500F4CA776CEBD0A(0, 110, 1);
	unk_0x500F4CA776CEBD0A(0, 89, 1);
	unk_0x500F4CA776CEBD0A(0, 89, 1);
	unk_0x500F4CA776CEBD0A(0, 87, 1);
	unk_0x500F4CA776CEBD0A(0, 88, 1);
	unk_0x500F4CA776CEBD0A(0, 113, 1);
	unk_0x500F4CA776CEBD0A(0, 115, 1);
	unk_0x500F4CA776CEBD0A(0, 116, 1);
	unk_0x500F4CA776CEBD0A(0, 117, 1);
	unk_0x500F4CA776CEBD0A(0, 118, 1);
	unk_0x500F4CA776CEBD0A(0, 119, 1);
	unk_0x500F4CA776CEBD0A(0, 131, 1);
	unk_0x500F4CA776CEBD0A(0, 132, 1);
	unk_0x500F4CA776CEBD0A(0, 123, 1);
	unk_0x500F4CA776CEBD0A(0, 126, 1);
	unk_0x500F4CA776CEBD0A(0, 129, 1);
	unk_0x500F4CA776CEBD0A(0, 130, 1);
	unk_0x500F4CA776CEBD0A(0, 133, 1);
	unk_0x500F4CA776CEBD0A(0, 134, 1);
	unk_0x65C671B5F3251D24();
	if ((unk_0xF976C624234A4AA8() - Global_28) > 500)
	{
		unk_0x7674FE6F22323056(iParam0, fParam1, iParam2, iParam4);
	}
	Global_28 = unk_0xF976C624234A4AA8();
	if (!unk_0xE5D56342B0FF1D0D(iParam0))
	{
		if (unk_0x75E01E8585722F89(unk_0x11F6A4A45943670E(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

var func_102(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x7BFA7BEBF46363DE(Param0);
	unk_0x1D8833C0F155BFE7(uVar0, func_103(unk_0xD95428C8AA1DBBF2(), 1f, 1f));
	unk_0x43F7D508C655CBA3(uVar0, iParam3);
	return uVar0;
}

float func_103(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_104()
{
	if (Global_15692 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_105(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_114(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
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
	return func_106(sParam3, iParam4, bParam8);
}

int func_106(char* sParam0, int iParam1, bool bParam2)
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
					unk_0xD858EC6FECDB4B3F(0);
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
					func_98();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xF611D1BB58990143())
		{
			return 0;
		}
		if (func_113(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_112();
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
			unk_0xCD27BF29FB9012E2(&Global_2263, 20);
			unk_0xCD27BF29FB9012E2(&Global_2264, 17);
			unk_0xCD27BF29FB9012E2(&Global_2265, 0);
			if (bParam2)
			{
				func_111();
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
			if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
			{
				if (unk_0x6A5400407F3E1292(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (func_110())
				{
					return 0;
				}
				if (unk_0x485BBA43A75711BE(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (unk_0xB42AA529845BA2A3(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (unk_0xCB79AB67F7DF0E8F(unk_0x507DA4994C3D8EBD(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68067)
				{
					if (unk_0x26FE3F0A2045AA7E(unk_0x507DA4994C3D8EBD()))
					{
						return 0;
					}
					if (unk_0x3AA78AB1897C2B94(unk_0xAF65E5A58BE87D95()))
					{
						return 0;
					}
					if (unk_0xA43F7819FA056045(unk_0x507DA4994C3D8EBD()))
					{
						return 0;
					}
					if (unk_0x5636DF02874259EA(unk_0xAF65E5A58BE87D95()))
					{
						return 0;
					}
				}
			}
			if (func_109())
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
				if (unk_0x61D8FEAF64881CDA(Global_2263, 9))
				{
					return 0;
				}
			}
			func_108();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_107();
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
		func_98();
	}
	return 0;
}

void func_107()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD858EC6FECDB4B3F(0);
	Global_15692 = 1;
}

void func_108()
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
	unk_0xCD27BF29FB9012E2(&Global_2264, 16);
}

int func_109()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_110()
{
	int iVar0;
	int iVar1;
	
	if (Global_68067)
	{
		iVar0 = 0;
		unk_0xAE0CD3052D6ED1ED(unk_0x507DA4994C3D8EBD(), &iVar1, 1);
		if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xC0C709777CCE070F() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		if (unk_0xA7C37587D6D77CA4(unk_0x507DA4994C3D8EBD(), 78, 1))
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

void func_111()
{
	if (func_16(14))
	{
		if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[2 /*29*/])
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
		Global_14393 = func_14();
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

void func_112()
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

bool func_113(int iParam0, int iParam1)
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
	return unk_0x61D8FEAF64881CDA(Global_1327591.f_949, iParam0);
}

void func_114(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15146 = { *uParam0 };
	Global_1579 = iParam1;
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

void func_115(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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
		if (!unk_0x9F94F2CFDCA78C55(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xC9CD9F3D2675F791(iParam2, 0);
			}
			else
			{
				unk_0xC9CD9F3D2675F791(iParam2, 1);
			}
		}
		if (!unk_0x9F94F2CFDCA78C55(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xABDE52C59BE3C61A(iParam2, 0);
			}
			else
			{
				unk_0xABDE52C59BE3C61A(iParam2, 1);
			}
		}
	}
}

void func_116()
{
	if (unk_0xCA8794CE207FC6D5(iLocal_32, 0))
	{
		if (unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), iLocal_32, 0))
		{
			if (unk_0xA04CA7D6710299C3(iLocal_32))
			{
				if (func_121("HELP_1"))
				{
					unk_0x4A4C1A1BC79EFE8F(1);
				}
				if (unk_0xD361727124133DF3(uLocal_57))
				{
					unk_0xA0A65B537B1F11EC(&uLocal_57);
				}
				if (unk_0xD361727124133DF3(uLocal_60))
				{
					if (iLocal_394 == 1)
					{
						if (unk_0xF976C624234A4AA8() < iLocal_108 + 7500)
						{
							unk_0x3DF5706BBD8F5B5B();
						}
					}
					unk_0xA0A65B537B1F11EC(&uLocal_60);
				}
				if (iLocal_27 == 4)
				{
					if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) == 0)
					{
						if (iLocal_468 == 0)
						{
							unk_0x12B3DEDD1DB99EFA("FHPRB_COPS");
							unk_0xF74C93D9036BCC1E("FHPRB_LOST");
							iLocal_468 = 1;
						}
						if (iLocal_313 == 1)
						{
							if (unk_0xF976C624234A4AA8() < iLocal_109 + 7500)
							{
								unk_0x3DF5706BBD8F5B5B();
							}
							iLocal_313 = 0;
						}
						if (iLocal_61 > 3)
						{
							if (!unk_0xD361727124133DF3(uLocal_58))
							{
								uLocal_58 = func_102(Local_115, 1);
							}
							if (iLocal_304 == 0)
							{
								if (!unk_0x44057438DAE1BD45())
								{
									func_120("GOD_2", 7500, 1);
									iLocal_304 = 1;
								}
							}
						}
					}
					else
					{
						if (unk_0xD361727124133DF3(uLocal_58))
						{
							unk_0xA0A65B537B1F11EC(&uLocal_58);
						}
						if (iLocal_313 == 0)
						{
							unk_0x3DF5706BBD8F5B5B();
							func_120("GOD_4", 7500, -1);
							unk_0xF74C93D9036BCC1E("FHPRB_COPS");
							iLocal_109 = unk_0xF976C624234A4AA8();
							iLocal_313 = 1;
							iLocal_468 = 0;
						}
					}
				}
			}
			else
			{
				if (unk_0xD361727124133DF3(uLocal_57))
				{
					unk_0xA0A65B537B1F11EC(&uLocal_57);
				}
				if (unk_0xD361727124133DF3(uLocal_58))
				{
					unk_0xA0A65B537B1F11EC(&uLocal_58);
				}
				if (unk_0xCA8794CE207FC6D5(iLocal_31, 0))
				{
					if (!unk_0xD361727124133DF3(uLocal_60))
					{
						uLocal_60 = func_118(iLocal_31, 0, 0);
						unk_0x109908E4511B0839(uLocal_60, 1);
						if (unk_0x44057438DAE1BD45())
						{
							unk_0x3DF5706BBD8F5B5B();
						}
						if (iLocal_394 == 0)
						{
							func_120("GOD_6", 7500, -1);
							iLocal_108 = unk_0xF976C624234A4AA8();
							iLocal_394 = 1;
						}
						if (!func_121("HELP_1"))
						{
							func_117("HELP_1");
						}
					}
				}
			}
		}
		else
		{
			if (unk_0xD361727124133DF3(uLocal_60))
			{
				unk_0xA0A65B537B1F11EC(&uLocal_60);
			}
			if (unk_0xD361727124133DF3(uLocal_58))
			{
				unk_0xA0A65B537B1F11EC(&uLocal_58);
			}
			if (unk_0xCA8794CE207FC6D5(iLocal_32, 0))
			{
				if (!unk_0xD361727124133DF3(uLocal_57))
				{
					uLocal_57 = func_118(iLocal_32, 0, 0);
					unk_0x109908E4511B0839(uLocal_57, 1);
				}
			}
			if (iLocal_314 == 0)
			{
				unk_0x3DF5706BBD8F5B5B();
				func_120("GOD_5", 7500, -1);
				iLocal_314 = 1;
			}
		}
	}
}

void func_117(char* sParam0)
{
	unk_0x1ACC22C365D06AAE(sParam0);
	unk_0x9F84D1B39B1E5B59(0, 1, 1, -1);
}

int func_118(int iParam0, bool bParam1, bool bParam2)
{
	return func_119(iParam0, !bParam1, bParam2);
}

int func_119(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xFD68187442384158(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xB6F075D13B917FBE(iParam0);
	if (unk_0x1BA544973A67E699(iParam0))
	{
		unk_0x1D8833C0F155BFE7(uVar0, func_103(unk_0xD95428C8AA1DBBF2(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x109908E4511B0839(uVar0, bParam1);
		}
		else
		{
			unk_0xEDB3DD98D55452E4(uVar0, 2);
		}
	}
	else if (unk_0x91F594068DF4424F(iParam0))
	{
		unk_0x1D8833C0F155BFE7(uVar0, func_103(unk_0xD95428C8AA1DBBF2(), 0.7f, 0.7f));
		unk_0x109908E4511B0839(uVar0, bParam1);
	}
	else if (unk_0xBCF2529C09F7A239(iParam0))
	{
		unk_0x1D8833C0F155BFE7(uVar0, func_103(unk_0xD95428C8AA1DBBF2(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_120(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x328FE98BE3FE17FC(sParam0);
	unk_0x6719DEAA365F81B2(iParam1, 1);
}

bool func_121(char* sParam0)
{
	unk_0x74C587863BEFBDD0(sParam0);
	return unk_0x5D488553935013A9(0);
}

void func_122()
{
	if (iLocal_61 > 1)
	{
		func_116();
	}
	if (iLocal_61 == 0)
	{
		if (iLocal_303 == 1)
		{
			func_34();
			iLocal_303 = 0;
		}
		iLocal_396 = 0;
		iLocal_397 = 0;
		iLocal_398 = 0;
		iLocal_399 = 0;
		iLocal_400 = 0;
		iLocal_401 = 0;
		iLocal_402 = 0;
		iLocal_403[0] = 0;
		iLocal_403[1] = 0;
		iLocal_406[0] = 0;
		iLocal_406[1] = 0;
		iLocal_409 = 0;
		iLocal_410 = 0;
		iLocal_411 = 0;
		iLocal_412 = 0;
		iLocal_413 = 0;
		iLocal_414 = 0;
		iLocal_415 = 0;
		iLocal_422 = 0;
		iLocal_423 = 0;
		iLocal_424 = 0;
		iLocal_425 = 0;
		iLocal_426 = 0;
		iLocal_427 = 0;
		iLocal_428 = 0;
		iLocal_429 = 0;
		iLocal_430 = 0;
		iLocal_431 = 0;
		iLocal_432[0] = 0;
		iLocal_432[1] = 0;
		iLocal_435[0] = 0;
		iLocal_435[1] = 0;
		iLocal_438[0] = 0;
		iLocal_438[1] = 0;
		iLocal_441[0] = 0;
		iLocal_441[1] = 0;
		iLocal_444[0] = 0;
		iLocal_444[1] = 0;
		iLocal_447[0] = 0;
		iLocal_447[1] = 0;
		iLocal_450[0] = 0;
		iLocal_450[1] = 0;
		iLocal_454 = 0;
		iLocal_457 = 0;
		iLocal_458[0] = 0;
		iLocal_461[0] = 0;
		iLocal_458[1] = 0;
		iLocal_461[1] = 0;
		iLocal_465 = 0;
		iLocal_466 = 0;
		iLocal_467 = 0;
		iLocal_481 = 0;
		iLocal_314 = 0;
		iLocal_315 = 0;
		iLocal_320 = 0;
		iLocal_386 = 0;
		iLocal_387 = 0;
		iLocal_388 = 0;
		iLocal_389 = 0;
		iLocal_390 = 0;
		iLocal_391 = 0;
		iLocal_392 = 0;
		iLocal_393 = 0;
		iLocal_394 = 0;
		iLocal_416 = 0;
		iLocal_464 = 0;
		iLocal_482 = 0;
		iLocal_486 = 0;
		iLocal_453 = 0;
		iLocal_108 = 0;
		iLocal_109 = 0;
		iLocal_62 = 0;
		while (iLocal_62 <= 6)
		{
			iLocal_305[iLocal_62] = 0;
			iLocal_354[iLocal_62] = 0;
			iLocal_370[iLocal_62] = 0;
			iLocal_378[iLocal_62] = 0;
			iLocal_362[iLocal_62] = 0;
			iLocal_62++;
		}
		unk_0x395C5D98343F0040("cellphone@str");
		unk_0x395C5D98343F0040("misscarsteal4@director_grip");
		if (unk_0xCA8794CE207FC6D5(iLocal_32, 0))
		{
			if (!unk_0xD361727124133DF3(uLocal_57))
			{
				uLocal_57 = func_118(iLocal_32, 0, 0);
				unk_0x109908E4511B0839(uLocal_57, true);
			}
		}
		unk_0x53C0659721DC11EC(0);
		if (unk_0xC2C705ED6124A7C2())
		{
			if (!func_30())
			{
				unk_0xACF6EF3086F35588(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1));
			}
			if (unk_0xFD68187442384158(iLocal_33))
			{
				func_27(iLocal_33, -1, 1);
				unk_0xB67623A401171555(&iLocal_33);
			}
			else
			{
				func_27(0, -1, 1);
			}
		}
		if (!unk_0x8D4100BAA46EE198())
		{
			unk_0x662E87A876F1069D(800);
		}
		unk_0xF74C93D9036BCC1E("FHPRB_START");
		unk_0x4BCBC9058A5CECE1(43.5f, -615.8f, 32.4f, 50f, 1, 0, 0, 0);
		iLocal_395 = 1;
		iLocal_61 = 1;
	}
	if (iLocal_61 == 1)
	{
		if (iLocal_464 == 0)
		{
			if (!unk_0x44057438DAE1BD45())
			{
				unk_0x47B990AE184F491B(5f, 8f, 4);
				func_120("GOD_1", 7500, 1);
				iLocal_464 = 1;
			}
		}
		if (unk_0xCA8794CE207FC6D5(iLocal_32, 0))
		{
			if (unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), iLocal_32, 0))
			{
				unk_0xF74C93D9036BCC1E("FHPRB_TRUCK");
				if (unk_0xD361727124133DF3(uLocal_57))
				{
					unk_0xA0A65B537B1F11EC(&uLocal_57);
				}
				func_123(656, 0);
				unk_0xA54C914AEB391F49(1f);
				iLocal_61 = 2;
			}
		}
	}
	if (iLocal_61 == 2)
	{
		if (unk_0xCA8794CE207FC6D5(iLocal_32, 0))
		{
			if (unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), iLocal_32, 0))
			{
				if (unk_0xA04CA7D6710299C3(iLocal_32))
				{
					if (func_121("HELP_1"))
					{
						unk_0x4A4C1A1BC79EFE8F(1);
					}
					if (unk_0xD361727124133DF3(uLocal_57))
					{
						unk_0xA0A65B537B1F11EC(&uLocal_57);
					}
					if (unk_0xD361727124133DF3(uLocal_60))
					{
						unk_0xA0A65B537B1F11EC(&uLocal_60);
					}
					if (unk_0x8FE221761D524CFE(Local_118, Local_131, 1) < 100f)
					{
						if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) == 0)
						{
							if (iLocal_315 == 1)
							{
								if (unk_0xF976C624234A4AA8() < iLocal_109 + 7500)
								{
									unk_0x3DF5706BBD8F5B5B();
									iLocal_315 = 0;
								}
							}
							if (iLocal_416 == 0)
							{
								unk_0x47B990AE184F491B(5f, 8f, 4);
								func_120("GOD_7", 7500, -1);
								iLocal_416 = 1;
							}
						}
						else if (iLocal_315 == 0)
						{
							unk_0x47B990AE184F491B(5f, 8f, 4);
							unk_0xAF922A0CB6DC60D9("SCRIPTED_SCANNER_REPORT_BS_PREP_B_01", 0f);
							iLocal_109 = unk_0xF976C624234A4AA8();
							func_120("GOD_4", 7500, -1);
							iLocal_315 = 1;
						}
					}
					else if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) == 0)
					{
						iLocal_61 = 0;
						iLocal_27 = 4;
					}
				}
				else
				{
					if (unk_0xD361727124133DF3(uLocal_57))
					{
						unk_0xA0A65B537B1F11EC(&uLocal_57);
					}
					if (unk_0xCA8794CE207FC6D5(iLocal_31, 0))
					{
						if (!unk_0xD361727124133DF3(uLocal_60))
						{
							uLocal_60 = func_118(iLocal_31, 0, 0);
							unk_0x109908E4511B0839(uLocal_60, true);
							if (unk_0x44057438DAE1BD45())
							{
								unk_0x3DF5706BBD8F5B5B();
							}
							if (iLocal_394 == 0)
							{
								func_120("GOD_6", 7500, -1);
								iLocal_394 = 1;
							}
							if (!func_121("HELP_1"))
							{
								func_117("HELP_1");
							}
						}
					}
				}
			}
			else
			{
				if (unk_0xD361727124133DF3(uLocal_60))
				{
					unk_0xA0A65B537B1F11EC(&uLocal_60);
				}
				if (unk_0xCA8794CE207FC6D5(iLocal_32, 0))
				{
					if (!unk_0xD361727124133DF3(uLocal_57))
					{
						uLocal_57 = func_118(iLocal_32, 0, 0);
						unk_0x109908E4511B0839(uLocal_57, true);
					}
				}
				if (iLocal_314 == 0)
				{
					unk_0x3DF5706BBD8F5B5B();
					func_120("GOD_5", 7500, -1);
					iLocal_314 = 1;
				}
			}
		}
	}
}

void func_123(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_54582 = iParam0;
	if (!Global_54580)
	{
		Global_54580 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_66667)
		{
			if (Global_66668[iVar0 /*9*/] == iParam0)
			{
				Global_66668[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_124()
{
	if (iLocal_61 == 0)
	{
		if (iLocal_303 == 1)
		{
			func_34();
			iLocal_303 = 0;
		}
		func_147();
		func_91();
		if (!unk_0x8D4100BAA46EE198())
		{
			unk_0xACF6EF3086F35588(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1));
			unk_0x662E87A876F1069D(800);
		}
		if (unk_0xFD68187442384158(Global_86686[3]))
		{
			if (unk_0xCA8794CE207FC6D5(Global_86686[3], 0))
			{
				if (unk_0x6149FC3B1572A5B9(unk_0x26EA758C2A691D06(Global_86686[3])))
				{
					unk_0xBAE5DF507EEC53C8(Global_86686[3], 1, 1);
					func_126(1.0095f, -631.9655f, 34.7259f, 349.0681f, 0, 145);
				}
				if (((unk_0x4658BA5921D40213(unk_0x26EA758C2A691D06(Global_86686[3])) || unk_0xA34706B20AE53D17(unk_0x26EA758C2A691D06(Global_86686[3]))) || unk_0xD70F47541E70FD47(unk_0x26EA758C2A691D06(Global_86686[3]))) || unk_0x99F5A208CDBDA518(unk_0x26EA758C2A691D06(Global_86686[3])))
				{
					unk_0xBAE5DF507EEC53C8(Global_86686[3], 1, 1);
					func_126(49.0052f, -599.5534f, 30.6299f, 158.5544f, 0, 145);
				}
			}
		}
		func_125(79);
		iLocal_395 = 1;
		iLocal_61 = 1;
	}
	if (iLocal_61 == 1)
	{
		iLocal_61 = 0;
		iLocal_27 = 3;
	}
}

void func_125(int iParam0)
{
	if (Global_87111 != -1)
	{
		if (iParam0 == Global_87111)
		{
			Global_87115 = 1;
			return;
		}
	}
}

void func_126(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	struct<3> Var0;
	var uVar3;
	
	if (unk_0xFD68187442384158(Global_91172.f_4))
	{
		if (unk_0xCA8794CE207FC6D5(Global_91172.f_4, 0))
		{
			if (func_146(24) != Global_91172.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_143(unk_0xBF1B13057E5119A4(Global_91172.f_4, 1), iParam5, &Var0, &uVar3))
					{
						Param0 = { Var0 };
						fParam3 = uVar3;
					}
				}
				func_127(Global_91172.f_4, Param0, fParam3, 24, 0);
			}
		}
	}
}

void func_127(int iParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6)
{
	struct<54> Var0;
	
	if (unk_0xFD68187442384158(iParam0) && unk_0xCA8794CE207FC6D5(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0xFD68187442384158(Global_66960.f_484[25]) && unk_0xCA8794CE207FC6D5(Global_66960.f_484[25], 0))
			{
				if (Global_66960.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0x9BEA3FC192D22438(iParam0) || unk_0x26EA758C2A691D06(iParam0) == joaat("bus")) || unk_0x26EA758C2A691D06(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_142(iParam5);
		Var0.f_9 = 25;
		Var0.f_35 = 2;
		func_40(iParam0, &Var0);
		if (func_82(Param1, 0f, 0f, 0f))
		{
			Param1 = { unk_0xBF1B13057E5119A4(iParam0, 1) };
			uParam4 = unk_0xA9D6B28E708753B6(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0x3BA42EA02A10243D(unk_0x3ED5FA3F61EC9E68()) != joaat("vehicle_gen_controller"))
			{
				Global_67924 = unk_0x3BA42EA02A10243D(unk_0x3ED5FA3F61EC9E68());
			}
		}
		func_140(iParam5, Var0, Param1, uParam4, func_56(iParam0));
		func_128(iParam5, iParam0, 0);
	}
}

void func_128(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_66(&(Global_66960.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0x61D8FEAF64881CDA(Global_66960.f_555[0 /*21*/].f_9, 12) && !unk_0x61D8FEAF64881CDA(Global_66960.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_66960.f_555[0 /*21*/].f_4 != unk_0x26EA758C2A691D06(iParam1))
		{
			return;
		}
	}
	if (Global_67867 != -1 && Global_67867 != iParam0)
	{
		return;
	}
	if (unk_0xFD68187442384158(iParam1))
	{
		if (unk_0xCA8794CE207FC6D5(iParam1, 0))
		{
			if (!unk_0x73E2404DC70203CD(iParam1))
			{
				unk_0xBAE5DF507EEC53C8(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_97173.f_18338.f_4249 = func_129();
			}
			if (iParam1 != Global_66960.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_146(iParam0);
					if ((unk_0xFD68187442384158(iVar0) && unk_0xCA8794CE207FC6D5(iVar0, 0)) && iParam1 != iVar0)
					{
						func_39(iVar0, 145);
					}
				}
				Global_67866 = iParam1;
				Global_67867 = iParam0;
				Global_67868 = iParam2;
			}
		}
	}
}

var func_129()
{
	var uVar0;
	
	func_139(&uVar0, unk_0x2784A8234E9B4202());
	func_138(&uVar0, unk_0x06F66CEDC24218A4());
	func_137(&uVar0, unk_0xE76C684D1C903A71());
	func_132(&uVar0, unk_0xA277D6C04B4B44C8());
	func_131(&uVar0, unk_0x1285C2DD1E4945FF());
	func_130(&uVar0, unk_0xCFC08A7C99F98C5B());
	return uVar0;
}

void func_130(var uParam0, int iParam1)
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

void func_131(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_132(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_136(*uParam0);
	iVar1 = func_134(*uParam0);
	if (iParam1 < 1 || iParam1 > func_133(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_133(int iParam0, int iParam1)
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

var func_134(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_135(unk_0x61D8FEAF64881CDA(iParam0, 31), -1, 1)) + 2011;
}

int func_135(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_136(var uParam0)
{
	return uParam0 & 15;
}

void func_137(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_138(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_139(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

void func_140(int iParam0, struct<54> Param1, struct<3> Param55, var uParam58, int iParam59)
{
	if (func_66(&(Global_66960.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x61D8FEAF64881CDA(Global_66960.f_555[0 /*21*/].f_9, 10))
		{
			func_141(iParam0);
			func_63(Param1, &(Global_97173.f_18338.f_69[Global_66960.f_555[0 /*21*/].f_14 /*54*/]));
			if (unk_0x61D8FEAF64881CDA(Global_66960.f_555[0 /*21*/].f_9, 11))
			{
				Global_97173.f_18338.f_1312[Global_66960.f_555[0 /*21*/].f_14 /*3*/] = { Param55 };
				Global_97173.f_18338.f_1382[Global_66960.f_555[0 /*21*/].f_14] = uParam58;
			}
			else
			{
				Global_97173.f_18338.f_1312[Global_66960.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_97173.f_18338.f_1382[Global_66960.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_97173.f_18338.f_1406[Global_66960.f_555[0 /*21*/].f_14] = iParam59 + 1;
			func_59(iParam0, 1);
		}
	}
}

void func_141(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_66(&(Global_66960.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xFD68187442384158(Global_66960.f_139[iParam0]))
		{
			unk_0xBAE5DF507EEC53C8(Global_66960.f_139[iParam0], 1, 1);
			unk_0xB67623A401171555(&(Global_66960.f_139[iParam0]));
			Global_66960.f_139[iParam0] = 0;
		}
		if (unk_0x61D8FEAF64881CDA(Global_66960.f_555[0 /*21*/].f_9, 13))
		{
			func_59(iParam0, 0);
		}
	}
}

void func_142(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_141(iParam0);
	func_59(iParam0, 0);
}

int func_143(struct<3> Param0, int iParam3, var uParam4, var uParam5)
{
	int iVar0;
	
	iVar0 = func_144(Param0, iParam3, 1);
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

int func_144(struct<3> Param0, int iParam3, int iParam4)
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
		if (Global_85227[iVar0 /*10*/].f_7 != 262)
		{
			if (Global_85227[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_145(iVar0) || iParam4 == 0)
				{
					fVar1 = unk_0x8FE221761D524CFE(Param0, Global_85227[iVar0 /*10*/].f_3, 1);
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

bool func_145(int iParam0)
{
	return unk_0x61D8FEAF64881CDA(Global_97173.f_5486[iParam0], 0);
}

int func_146(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_66960.f_139[iParam0];
}

void func_147()
{
	Global_84367 = 1;
}

void func_148()
{
	unk_0x85561C2D9ACBDF0D(unk_0xAF65E5A58BE87D95(), 1);
	unk_0xA54C914AEB391F49(0.01f);
	uLocal_52 = unk_0x92832F671263F8E0(861.6f, -1599.7f, 27.9f, 961.8f, -1476.4f, 49.7f, 0, 1, 1, 1);
	uLocal_53 = unk_0x92832F671263F8E0(851.2f, -1598.2f, 29.7f, 855.7f, -1587.1f, 33f, 0, 1, 1, 1);
	uLocal_54 = unk_0x92832F671263F8E0(859.4f, -1569.6f, 32.3f, 865.4f, -1561f, 28.7f, 0, 1, 1, 1);
	uLocal_55 = unk_0x92832F671263F8E0(939f, -1576.8f, 33f, 943.8f, -1571.3f, 28.9f, 0, 1, 1, 1);
	uLocal_50 = unk_0x92832F671263F8E0(5.4f, -588f, 39.1f, 57.4f, -678.8f, 25.4f, 0, 1, 1, 1);
	uLocal_51 = unk_0x92832F671263F8E0(50.9f, -641.6f, 37.7f, 81.1f, -608.4f, 29.5f, 0, 1, 1, 1);
	if (func_29())
	{
		if (Global_84366 == 1)
		{
			func_150(28.4065f, -608.9371f, 30.6293f, 70.7778f, 1, 0);
			iLocal_482 = 1;
			iLocal_303 = 1;
			iLocal_61 = 0;
			iLocal_27 = 5;
		}
		else if (func_149() == 0)
		{
			if (func_90() && func_87(7f, 7f, 7f, 1))
			{
				func_150(818.8139f, -1610.406f, 30.7951f, 264.412f, 1, 0);
			}
			else
			{
				func_150(825.5603f, -1605.825f, 30.9548f, 312.5221f, 1, 0);
			}
			iLocal_303 = 1;
			iLocal_482 = 1;
			iLocal_61 = 0;
			iLocal_27 = 3;
		}
	}
	else if (func_185(0))
	{
		iLocal_303 = 1;
		iLocal_482 = 1;
		iLocal_61 = 0;
		iLocal_27 = 3;
	}
	else
	{
		iLocal_61 = 0;
		iLocal_27 = 2;
	}
}

int func_149()
{
	if (!Global_89784 == 10 && !Global_89784 == 9)
	{
		return 0;
	}
	return Global_89784.f_2;
}

void func_150(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	if (func_29())
	{
		unk_0xB43679BBB30F1391(0);
		unk_0xCD27BF29FB9012E2(&(Global_89784.f_20), 2);
		unk_0x1757405122DE8566(1);
		if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
		{
			unk_0xFAAA53BBE1EEF174(unk_0xAF65E5A58BE87D95(), 0, 0);
		}
		Global_89780 = { Param0 };
		Global_89783 = fParam3;
		Global_89779 = 1;
		if (iParam4 == 1)
		{
			unk_0x3DBE2A7AF9E71C82(&(Global_89784.f_20), 14);
		}
		else
		{
			unk_0xCD27BF29FB9012E2(&(Global_89784.f_20), 14);
		}
		if (iParam5 == 1)
		{
			unk_0x3DBE2A7AF9E71C82(&(Global_89784.f_20), 24);
		}
		else
		{
			unk_0xCD27BF29FB9012E2(&(Global_89784.f_20), 24);
		}
		func_28(1);
	}
}

void func_151()
{
	if (!func_29())
	{
		iLocal_27 = 1;
	}
	else
	{
		iLocal_27 = 1;
	}
}

void func_152()
{
	if (!unk_0xFD68187442384158(iLocal_48))
	{
		if (unk_0x8FE221761D524CFE(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), 45f, -616.2f, 30.8f, 1) < 150f)
		{
			unk_0xCBE6AC5010E5CE5C(joaat("s_m_m_security_01"));
			if (unk_0xD291857D0C9C7FEC(joaat("s_m_m_security_01")))
			{
				iLocal_48 = unk_0x7B88529CAE3B7F15(26, joaat("s_m_m_security_01"), 64.904f, -617.9949f, 30.7028f, 223.555f, 1, 1);
				unk_0x7FEDD088E489CE41(iLocal_48, 324, 1);
			}
			unk_0xFF467904A8A12BBE(joaat("s_m_m_security_01"));
		}
	}
	if (unk_0xFD68187442384158(iLocal_48))
	{
		if (!unk_0x9F94F2CFDCA78C55(iLocal_48))
		{
			if (unk_0xE08642374BA21D0D(65.2f, -617.2f, 30.8f, 5f, 0))
			{
				if (iLocal_455 == 0)
				{
					if (unk_0x9226425D9E480D72(iLocal_48))
					{
						unk_0xAC57FBF981AB03F4(iLocal_48);
					}
					else
					{
						unk_0xCEBD1B99CF343672(iLocal_48);
					}
					unk_0x03BE6E1931460594(iLocal_48, 65.2f, -617.2f, 31f, 2f, 0);
					unk_0xA1E4BA3B17C6D931(iLocal_48, 1);
					iLocal_112 = unk_0xF976C624234A4AA8();
					iLocal_455 = 1;
				}
				else if (unk_0xF976C624234A4AA8() > iLocal_112 + 5000)
				{
					if (!unk_0x00F5FF2C22C19B44(iLocal_48))
					{
						iLocal_455 = 0;
					}
				}
			}
			if (func_154(unk_0x507DA4994C3D8EBD(), iLocal_48, 1) < 20f)
			{
				if (iLocal_420 == 0)
				{
					unk_0x8E759206778E571F(iLocal_48, unk_0x507DA4994C3D8EBD(), -1, 1072, 3);
					iLocal_420 = 1;
				}
			}
			else if (iLocal_420 == 1)
			{
				unk_0x8E759206778E571F(iLocal_48, unk_0x507DA4994C3D8EBD(), 1, 0, 2);
				iLocal_420 = 0;
			}
		}
	}
	if (unk_0x8FE221761D524CFE(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), 45f, -616.2f, 30.8f, 1) < 50f)
	{
		if (iLocal_456 == 0)
		{
			iLocal_113 = 498972213;
			iLocal_114 = -512924631;
			unk_0x047AAC79564A8EB7(iLocal_113, joaat("prop_sec_barrier_ld_01a"), 61f, -633f, 32f, 1, 1, 0);
			unk_0x047AAC79564A8EB7(iLocal_114, joaat("prop_sec_barrier_ld_01a"), 66f, -618f, 32f, 1, 1, 0);
			iLocal_456 = 1;
		}
		if (iLocal_456 == 1)
		{
			if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) == 0)
			{
				if (Local_118.f_0 > 35f)
				{
					if (fLocal_134 < 1f)
					{
						fLocal_134 = (fLocal_134 + 0.02f);
					}
					else
					{
						fLocal_134 = 1f;
					}
					if (fLocal_134 <= 1f)
					{
						unk_0xDA14050EE6A337B7(iLocal_113, fLocal_134, 0, 1);
						unk_0xDA14050EE6A337B7(iLocal_114, fLocal_134, 0, 1);
						unk_0x9D9DF796E80DD27E(iLocal_113, 4, 0, 1);
						unk_0x9D9DF796E80DD27E(iLocal_114, 4, 0, 1);
						iLocal_421 = 0;
					}
				}
				if (Local_118.f_0 < 35f)
				{
					if (fLocal_134 > 0f)
					{
						fLocal_134 = (fLocal_134 - 0.02f);
					}
					else
					{
						fLocal_134 = 0f;
					}
					if (fLocal_134 >= 0f)
					{
						unk_0xDA14050EE6A337B7(iLocal_113, fLocal_134, 0, 1);
						unk_0xDA14050EE6A337B7(iLocal_114, fLocal_134, 0, 1);
						unk_0x9D9DF796E80DD27E(iLocal_113, 4, 0, 1);
						unk_0x9D9DF796E80DD27E(iLocal_114, 4, 0, 1);
						iLocal_421 = 0;
					}
				}
			}
			else if (iLocal_421 == 0)
			{
				if (Local_118.f_0 < 35f)
				{
					if (fLocal_134 > 0f)
					{
						fLocal_134 = (fLocal_134 - 0.02f);
					}
					else
					{
						fLocal_134 = 0f;
					}
					if (fLocal_134 >= 0f)
					{
						unk_0xDA14050EE6A337B7(iLocal_113, fLocal_134, 0, 1);
						unk_0xDA14050EE6A337B7(iLocal_114, fLocal_134, 0, 1);
						unk_0x9D9DF796E80DD27E(iLocal_113, 4, 0, 1);
						unk_0x9D9DF796E80DD27E(iLocal_114, 4, 0, 1);
						iLocal_421 = 1;
					}
				}
			}
		}
		if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 62.90151f, -638.6329f, 29.9188f, 70.78919f, -617.1338f, 36.91788f, 10.75f, 0, 1, 0))
		{
			if (unk_0xFD68187442384158(iLocal_48))
			{
				if (!unk_0x9F94F2CFDCA78C55(iLocal_48))
				{
					if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) == 0)
					{
						if (iLocal_418 == 0)
						{
							if (iLocal_417 == 0)
							{
								func_115(&uLocal_136, 4, iLocal_48, "FHPBSecGuard", 0, 1);
								if (func_153(&uLocal_136, "FHPBAUD", "FHPB_CHAT20", 7, 0, 0, 0))
								{
									iLocal_417 = 1;
								}
							}
						}
						else if (iLocal_419 == 0)
						{
							func_115(&uLocal_136, 4, iLocal_48, "FHPBSecGuard", 0, 1);
							if (func_153(&uLocal_136, "FHPBAUD", "FHPB_CHAT22", 7, 0, 0, 0))
							{
								iLocal_419 = 1;
							}
						}
					}
					else if (iLocal_418 == 0)
					{
						func_115(&uLocal_136, 4, iLocal_48, "FHPBSecGuard", 0, 1);
						if (func_153(&uLocal_136, "FHPBAUD", "FHPB_CHAT21", 7, 0, 0, 0))
						{
							iLocal_418 = 1;
						}
					}
				}
			}
		}
	}
}

bool func_153(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_114(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15699 = 0;
	Global_15701 = 0;
	Global_15706 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_2621441 = 0;
	return func_106(sParam2, iParam3, 0);
}

float func_154(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xE5D56342B0FF1D0D(iParam0))
	{
		Var0 = { unk_0xBF1B13057E5119A4(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xBF1B13057E5119A4(iParam0, 0) };
	}
	if (!unk_0xE5D56342B0FF1D0D(iParam1))
	{
		Var3 = { unk_0xBF1B13057E5119A4(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xBF1B13057E5119A4(iParam1, 0) };
	}
	return unk_0x8FE221761D524CFE(Var0, Var3, iParam2);
}

void func_155()
{
	int iVar0;
	
	if (!unk_0x44057438DAE1BD45())
	{
		if (!func_159() || !unk_0x45C61809C43FF0B3())
		{
			if (iLocal_27 == 3)
			{
				if (!unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0) && iLocal_30 == 0)
				{
					if (func_14() == 0)
					{
						if (iLocal_28 == 1)
						{
							if (iLocal_391 == 0)
							{
								if (func_157() && func_156())
								{
									if (func_153(&uLocal_136, "SOL1AUD", "SOL1_SEE5", 7, 0, 0, 0))
									{
										iLocal_111 = unk_0xF976C624234A4AA8();
										iLocal_391 = 1;
									}
								}
							}
						}
						if (iLocal_28 == 1)
						{
							if (iLocal_391 == 1 && unk_0xF976C624234A4AA8() > iLocal_111 + 7000)
							{
								if (func_157() && func_156())
								{
									if (func_153(&uLocal_136, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
									{
										iLocal_111 = unk_0xF976C624234A4AA8();
									}
								}
							}
						}
					}
					if (iLocal_28 == 2)
					{
						if (iLocal_429 == 0)
						{
							if (func_157())
							{
								if (func_153(&uLocal_136, "SOL1AUD", "SOL1_SEC3", 7, 0, 0, 0))
								{
									iLocal_94 = unk_0xF976C624234A4AA8();
									iLocal_429 = 1;
								}
							}
						}
					}
				}
				else if (iLocal_30 == 2 && iLocal_28 == 1)
				{
					if (iLocal_454 == 0)
					{
						if (func_157() && func_156())
						{
							if (func_153(&uLocal_136, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
							{
								iLocal_107 = unk_0xF976C624234A4AA8();
								iLocal_454 = 1;
							}
						}
					}
					else if (unk_0xF976C624234A4AA8() > iLocal_107 + 8000)
					{
						if (func_157() && func_156())
						{
							if (func_153(&uLocal_136, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
							{
								iLocal_107 = unk_0xF976C624234A4AA8();
							}
						}
					}
				}
				if (iLocal_28 == 4)
				{
					if (iLocal_390 == 0)
					{
						func_97();
						if (func_157())
						{
							unk_0xAE0CD3052D6ED1ED(unk_0x507DA4994C3D8EBD(), &iVar0, 1);
							if (iVar0 != joaat("weapon_unarmed") && iVar0 != 0)
							{
								if (func_153(&uLocal_136, "SOL1AUD", "SOL1_ARM3", 7, 0, 0, 0))
								{
									iLocal_76 = unk_0xF976C624234A4AA8();
									iLocal_386 = 1;
									iLocal_390 = 1;
								}
							}
							else
							{
								iLocal_76 = unk_0xF976C624234A4AA8();
								iLocal_386 = 1;
								iLocal_390 = 1;
							}
						}
					}
					if (iLocal_390 == 1)
					{
						if (iLocal_386 == 0)
						{
							iLocal_76 = unk_0xF976C624234A4AA8();
							iLocal_386 = 1;
						}
						if (iLocal_386 == 1)
						{
							if (unk_0xF976C624234A4AA8() > iLocal_76 + 9000)
							{
								if (func_157())
								{
									if (func_153(&uLocal_136, "SOL1AUD", "SOL1_PAN3", 7, 0, 0, 0))
									{
										iLocal_386 = 0;
									}
								}
							}
						}
					}
				}
				if (iLocal_28 == 3)
				{
					if (iLocal_426 == 1)
					{
						if (iLocal_388 == 0)
						{
							if (iLocal_389 == 1)
							{
								if (func_157())
								{
									if (func_153(&uLocal_136, "SOL1AUD", "SOL1_STEAL3", 7, 0, 0, 0))
									{
										iLocal_388 = 1;
									}
								}
							}
						}
					}
					if (iLocal_387 == 0)
					{
						if (unk_0xFD68187442384158(iLocal_32))
						{
							if (unk_0xCA8794CE207FC6D5(iLocal_32, 0))
							{
								if (unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), iLocal_32, 0))
								{
									if (func_157())
									{
										if (func_153(&uLocal_136, "SOL1AUD", "SOL1_OUT3", 7, 0, 0, 0))
										{
											iLocal_77 = unk_0xF976C624234A4AA8();
											iLocal_388 = 1;
										}
									}
								}
							}
						}
					}
					if (unk_0xF976C624234A4AA8() > iLocal_77 + 10000)
					{
						if (unk_0xFD68187442384158(iLocal_32))
						{
							if (unk_0xCA8794CE207FC6D5(iLocal_32, 0))
							{
								if (unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), iLocal_32, 0))
								{
									if (func_157())
									{
										if (func_153(&uLocal_136, "SOL1AUD", "SOL1_OUT3", 7, 0, 0, 0))
										{
											iLocal_77 = unk_0xF976C624234A4AA8();
										}
									}
								}
							}
						}
					}
					if (iLocal_427 == 1)
					{
						if (iLocal_428 == 0)
						{
							if (func_157())
							{
								if (func_153(&uLocal_136, "SOL1AUD", "SOL1_SEC3", 7, 0, 0, 0))
								{
									iLocal_428 = 1;
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_156()
{
	if (func_14() == 0)
	{
		func_115(&uLocal_136, 0, unk_0x507DA4994C3D8EBD(), "MICHAEL", 0, 1);
		return 1;
	}
	if (func_14() == 1)
	{
		func_115(&uLocal_136, 1, unk_0x507DA4994C3D8EBD(), "FRANKLIN", 0, 1);
		return 1;
	}
	if (func_14() == 2)
	{
		func_115(&uLocal_136, 2, unk_0x507DA4994C3D8EBD(), "TREVOR", 0, 1);
		return 1;
	}
	return 0;
}

int func_157()
{
	int iVar0;
	
	iLocal_65 = 0;
	while (iLocal_65 <= 6)
	{
		if (unk_0xFD68187442384158(iLocal_34[iLocal_65]))
		{
			if (!unk_0x9F94F2CFDCA78C55(iLocal_34[iLocal_65]))
			{
				iVar0 = func_158(unk_0x507DA4994C3D8EBD(), iLocal_301, 0, 0, -1);
				if (unk_0xFD68187442384158(iVar0))
				{
					if (!unk_0x9F94F2CFDCA78C55(iVar0))
					{
					}
				}
				if (iVar0 == iLocal_34[iLocal_65] && func_154(unk_0x507DA4994C3D8EBD(), iVar0, 1) < 15f)
				{
					func_115(&uLocal_136, 5, iLocal_34[iLocal_65], "CONSTRUCTION3", 0, 1);
					return 1;
				}
			}
		}
		iLocal_65++;
	}
	return 0;
}

int func_158(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0[16];
	int iVar17;
	
	iVar17 = 0;
	if (!unk_0x9F94F2CFDCA78C55(iParam0))
	{
		unk_0x0C92E7719639C64A(iParam0, &iVar0, iParam4);
		iVar17 = 0;
		while (iVar17 <= (iVar0 - 1))
		{
			if (unk_0xFD68187442384158(iVar0[iVar17]))
			{
				if (!unk_0x9F94F2CFDCA78C55(iVar0[iVar17]))
				{
					if (unk_0x2F429CA4FEA3DA65(iVar0[iVar17]) == iParam1)
					{
						if (iParam2 <= 0)
						{
							if (iParam3 == 1)
							{
								if (unk_0x9226425D9E480D72(iVar0[iVar17]))
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
							if (unk_0xFD68187442384158(iVar0[(iVar17 + iParam2)]))
							{
								if (!unk_0x9F94F2CFDCA78C55(iVar0[(iVar17 + iParam2)]))
								{
									if (unk_0x2F429CA4FEA3DA65(iVar0[(iVar17 + iParam2)]) == iParam1)
									{
										if (iParam3 == 1)
										{
											if (unk_0x9226425D9E480D72(iVar0[(iVar17 + iParam2)]))
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

int func_159()
{
	if (Global_15692 != 0 || unk_0xF611D1BB58990143())
	{
		return 1;
	}
	return 0;
}

void func_160()
{
	if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		if (unk_0xB6CDBC1E2904184A(unk_0x507DA4994C3D8EBD()) && unk_0xEB4AE93098956715(unk_0x507DA4994C3D8EBD()))
		{
			unk_0xA54C914AEB391F49(0f);
		}
		else
		{
			unk_0xA54C914AEB391F49(1f);
		}
	}
	func_167();
	if (iLocal_403[0])
	{
		if (func_154(unk_0x507DA4994C3D8EBD(), iLocal_42[0], 1) < 20f && unk_0x2A71687AF0AE817B(iLocal_42[0], unk_0x507DA4994C3D8EBD()))
		{
			if (iLocal_432[0] == 0)
			{
				unk_0x8E759206778E571F(iLocal_42[0], unk_0x507DA4994C3D8EBD(), -1, 1072, 3);
				iLocal_432[0] = 1;
			}
			if (iLocal_432[0] == 1)
			{
				if (unk_0xEC043AB2FEE0E94F(iLocal_42[0], 150319005) != 0 || unk_0xEC043AB2FEE0E94F(iLocal_42[0], 150319005) != 1)
				{
					iLocal_432[0] = 0;
				}
			}
		}
		else if (iLocal_432[0] == 1)
		{
			unk_0x8E759206778E571F(iLocal_42[0], unk_0x507DA4994C3D8EBD(), 1, 0, 2);
			iLocal_432[0] = 0;
		}
	}
	if (iLocal_403[1])
	{
		if (func_154(unk_0x507DA4994C3D8EBD(), iLocal_42[1], 1) < 20f && unk_0x2A71687AF0AE817B(iLocal_42[1], unk_0x507DA4994C3D8EBD()))
		{
			if (iLocal_432[1] == 0)
			{
				unk_0x8E759206778E571F(iLocal_42[1], unk_0x507DA4994C3D8EBD(), -1, 1072, 3);
				iLocal_432[1] = 1;
			}
			if (iLocal_432[1] == 1)
			{
				if (unk_0xEC043AB2FEE0E94F(iLocal_42[1], 150319005) != 0 || unk_0xEC043AB2FEE0E94F(iLocal_42[1], 150319005) != 1)
				{
					iLocal_432[1] = 0;
				}
			}
		}
		else if (iLocal_432[1] == 1)
		{
			unk_0x8E759206778E571F(iLocal_42[1], unk_0x507DA4994C3D8EBD(), 1, 0, 2);
			iLocal_432[1] = 0;
		}
	}
	if (iLocal_403[0] && iLocal_403[1])
	{
		if (func_154(unk_0x507DA4994C3D8EBD(), iLocal_42[0], 1) < func_154(unk_0x507DA4994C3D8EBD(), iLocal_42[1], 1))
		{
			iLocal_398 = 1;
			iLocal_399 = 0;
		}
		else
		{
			iLocal_398 = 0;
			iLocal_399 = 1;
		}
	}
	else
	{
		if (iLocal_403[0] && !iLocal_403[1])
		{
			iLocal_398 = 1;
			iLocal_399 = 0;
		}
		if (iLocal_403[1] && !iLocal_403[0])
		{
			iLocal_398 = 0;
			iLocal_399 = 1;
		}
	}
	switch (iLocal_30)
	{
		case 0:
			if (unk_0xD9CD5BC005208DE9("SCRAP_SECURITY"))
			{
				if (!unk_0x0D607451E86AE237("SCRAP_SECURITY"))
				{
					unk_0x05430610676C3EDD("SCRAP_SECURITY", 1);
				}
				if (unk_0x0D607451E86AE237("SCRAP_SECURITY"))
				{
					if (unk_0xFD68187442384158(iLocal_42[0]))
					{
						if (!unk_0x9F94F2CFDCA78C55(iLocal_42[0]))
						{
							if (!unk_0x3165359F7146B860(iLocal_42[0]))
							{
								if (unk_0xE08642374BA21D0D(863.1551f, -1564.572f, 29.3231f, 5f, 1))
								{
									iLocal_104[0] = unk_0xF976C624234A4AA8();
									if (!unk_0x548BA5F69EA895F7(iLocal_42[0]))
									{
										if (iLocal_461[0] == 0)
										{
											unk_0xA6D0F8A56436D220(iLocal_42[0], 863.1551f, -1564.572f, 29.3231f, 5f, 0);
											iLocal_458[0] = 0;
											iLocal_461[0] = 1;
										}
									}
								}
								else if (unk_0xF976C624234A4AA8() > iLocal_104[0] + 2000)
								{
									if (unk_0x8FE221761D524CFE(unk_0xBF1B13057E5119A4(iLocal_42[0], 1), 863.1551f, -1564.572f, 29.3231f, 1) > 3f)
									{
										if (iLocal_458[0] == 0)
										{
											unk_0x3F07E364A21EBC20(iLocal_42[0], 863.1551f, -1564.572f, 29.3231f, 1f, -1, 1048576000, 0, 1193033728);
											iLocal_461[0] = 0;
											iLocal_458[0] = 1;
										}
									}
								}
							}
						}
					}
					if (unk_0xFD68187442384158(iLocal_42[1]))
					{
						if (!unk_0x9F94F2CFDCA78C55(iLocal_42[1]))
						{
							if (!unk_0x3165359F7146B860(iLocal_42[1]))
							{
								if (unk_0xE08642374BA21D0D(940.2881f, -1573.877f, 29.3866f, 5f, 1))
								{
									iLocal_104[1] = unk_0xF976C624234A4AA8();
									if (!unk_0x548BA5F69EA895F7(iLocal_42[1]))
									{
										if (iLocal_461[1] == 0)
										{
											unk_0xA6D0F8A56436D220(iLocal_42[1], 940.2881f, -1573.877f, 29.3866f, 5f, 0);
											iLocal_458[1] = 0;
											iLocal_461[1] = 1;
										}
									}
								}
								else if (unk_0xF976C624234A4AA8() > iLocal_104[1] + 2000)
								{
									if (unk_0x8FE221761D524CFE(unk_0xBF1B13057E5119A4(iLocal_42[1], 1), 940.2881f, -1573.877f, 29.3866f, 1) > 3f)
									{
										if (iLocal_458[1] == 0)
										{
											unk_0x3F07E364A21EBC20(iLocal_42[1], 940.2881f, -1573.877f, 29.3866f, 1f, -1, 1048576000, 0, 1193033728);
											iLocal_461[1] = 0;
											iLocal_458[1] = 1;
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
			if (unk_0xFD68187442384158(iLocal_42[0]))
			{
				if (!unk_0x9F94F2CFDCA78C55(iLocal_42[0]))
				{
					if (func_154(unk_0x507DA4994C3D8EBD(), iLocal_42[0], 1) < 20f)
					{
						if ((func_166(unk_0x507DA4994C3D8EBD()) == joaat("weapon_unarmed") || unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0)) || func_165(0))
						{
							if (unk_0x849DBD2D635C99D5(unk_0x507DA4994C3D8EBD(), iLocal_42[0], 100f) || unk_0x2A71687AF0AE817B(iLocal_42[0], unk_0x507DA4994C3D8EBD()))
							{
								if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 860.4606f, -1563.58f, 28.81788f, 865.0807f, -1575.088f, 30.93324f, 5.75f, 0, 1, 0) || unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, 1, 0))
								{
									if (iLocal_450[0] == 0)
									{
										if (!unk_0x849DBD2D635C99D5(iLocal_42[0], unk_0x507DA4994C3D8EBD(), 45f))
										{
											if (!unk_0x9226425D9E480D72(iLocal_42[0]))
											{
												unk_0xCEBD1B99CF343672(iLocal_42[0]);
											}
											else
											{
												unk_0xAC57FBF981AB03F4(iLocal_42[0]);
											}
											unk_0xDE75E9DE5B6221E1(iLocal_42[0], unk_0x507DA4994C3D8EBD(), 5000);
											iLocal_101[0] = unk_0xF976C624234A4AA8();
											func_164(iLocal_42[0]);
											iLocal_450[0] = 1;
										}
									}
									if (iLocal_450[0] == 1)
									{
										if (unk_0xF976C624234A4AA8() > iLocal_101[0] + 5000)
										{
											iLocal_450[0] = 0;
										}
									}
									if (iLocal_406[0] == 0 && iLocal_406[1] == 0)
									{
										if (iLocal_402 == 0)
										{
											func_162(iLocal_42[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 6);
											iLocal_81 = unk_0xF976C624234A4AA8();
											iLocal_402 = 1;
										}
										else if (unk_0xF976C624234A4AA8() > iLocal_81 + 15000)
										{
											func_162(iLocal_42[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
											iLocal_81 = unk_0xF976C624234A4AA8();
										}
									}
									else
									{
										if (iLocal_406[0] == 1)
										{
											if (iLocal_409 == 0)
											{
												func_162(iLocal_42[0], "PROVOKE_GEBERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_87 = unk_0xF976C624234A4AA8();
												iLocal_409 = 1;
											}
											else if (unk_0xF976C624234A4AA8() > iLocal_87 + 15000)
											{
												func_162(iLocal_42[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_87 = unk_0xF976C624234A4AA8();
											}
										}
										if (iLocal_406[1] == 1)
										{
											if (iLocal_410 == 0)
											{
												func_162(iLocal_42[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_88 = unk_0xF976C624234A4AA8();
												iLocal_410 = 1;
											}
											else if (unk_0xF976C624234A4AA8() > iLocal_88 + 15000)
											{
												func_162(iLocal_42[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_88 = unk_0xF976C624234A4AA8();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			if (unk_0xFD68187442384158(iLocal_42[1]))
			{
				if (!unk_0x9F94F2CFDCA78C55(iLocal_42[1]))
				{
					if (func_154(unk_0x507DA4994C3D8EBD(), iLocal_42[1], 1) < 15f)
					{
						if ((func_166(unk_0x507DA4994C3D8EBD()) == joaat("weapon_unarmed") || unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0)) || func_165(0))
						{
							if (unk_0x849DBD2D635C99D5(unk_0x507DA4994C3D8EBD(), iLocal_42[1], 100f))
							{
								if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 939.8862f, -1575.635f, 28.59783f, 952.9254f, -1575.484f, 33.19459f, 13.75f, 0, 1, 0))
								{
									if (iLocal_450[1] == 0)
									{
										if (!unk_0x849DBD2D635C99D5(iLocal_42[1], unk_0x507DA4994C3D8EBD(), 45f))
										{
											if (!unk_0x9226425D9E480D72(iLocal_42[1]))
											{
												unk_0xCEBD1B99CF343672(iLocal_42[1]);
											}
											else
											{
												unk_0xAC57FBF981AB03F4(iLocal_42[1]);
											}
											unk_0xDE75E9DE5B6221E1(iLocal_42[1], unk_0x507DA4994C3D8EBD(), 5000);
											iLocal_101[1] = unk_0xF976C624234A4AA8();
											func_164(iLocal_42[1]);
											iLocal_450[1] = 1;
										}
									}
									if (iLocal_450[1] == 1)
									{
										if (unk_0xF976C624234A4AA8() > iLocal_101[1] + 5000)
										{
											iLocal_450[1] = 0;
										}
									}
									if (iLocal_406[0] == 0 && iLocal_406[1] == 0)
									{
										if (iLocal_402 == 0)
										{
											func_162(iLocal_42[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
											iLocal_81 = unk_0xF976C624234A4AA8();
											iLocal_402 = 1;
										}
										else if (unk_0xF976C624234A4AA8() > iLocal_81 + 15000)
										{
											func_162(iLocal_42[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
											iLocal_81 = unk_0xF976C624234A4AA8();
										}
									}
									else
									{
										if (iLocal_406[1] == 1)
										{
											if (iLocal_409 == 0)
											{
												func_162(iLocal_42[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
												iLocal_87 = unk_0xF976C624234A4AA8();
												iLocal_409 = 1;
											}
											else if (unk_0xF976C624234A4AA8() > iLocal_87 + 15000)
											{
												func_162(iLocal_42[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_87 = unk_0xF976C624234A4AA8();
											}
										}
										if (iLocal_406[0] == 1)
										{
											if (iLocal_410 == 0)
											{
												func_162(iLocal_42[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
												iLocal_88 = unk_0xF976C624234A4AA8();
												iLocal_410 = 1;
											}
											else if (unk_0xF976C624234A4AA8() > iLocal_88 + 15000)
											{
												func_162(iLocal_42[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_88 = unk_0xF976C624234A4AA8();
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
			if (iLocal_482 == 0)
			{
				iLocal_482 = 1;
			}
			if (func_161() || iLocal_397 == 1)
			{
				if (unk_0xFD68187442384158(iLocal_42[0]))
				{
					if (!unk_0x9F94F2CFDCA78C55(iLocal_42[0]))
					{
						if (unk_0x2A71687AF0AE817B(iLocal_42[0], unk_0x507DA4994C3D8EBD()))
						{
							iLocal_98[0] = unk_0xF976C624234A4AA8();
							iLocal_444[0] = 1;
							if (iLocal_441[0] == 0)
							{
								if (unk_0x9226425D9E480D72(iLocal_42[0]))
								{
									unk_0xAC57FBF981AB03F4(iLocal_42[0]);
								}
								else
								{
									unk_0xCEBD1B99CF343672(iLocal_42[0]);
								}
								unk_0x3A1E687904400847(iLocal_42[0], 50, 1);
								unk_0x247B2966C6C2A4C1(iLocal_42[0], unk_0x507DA4994C3D8EBD(), 0, 16);
								func_164(iLocal_42[0]);
								iLocal_441[0] = 1;
							}
						}
						else if (iLocal_447[0] == 0)
						{
							if (iLocal_444[0] == 0)
							{
								if (unk_0x9226425D9E480D72(iLocal_42[0]))
								{
									unk_0xAC57FBF981AB03F4(iLocal_42[0]);
								}
								else
								{
									unk_0xCEBD1B99CF343672(iLocal_42[0]);
								}
								unk_0x3F07E364A21EBC20(iLocal_42[0], unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), 3f, -1, 1048576000, 0, 1193033728);
								func_164(iLocal_42[0]);
								iLocal_447[0] = 1;
							}
							if (iLocal_444[0] == 1)
							{
								if (unk_0xF976C624234A4AA8() > iLocal_98[0] + 500)
								{
									if (unk_0x9226425D9E480D72(iLocal_42[0]))
									{
										unk_0xAC57FBF981AB03F4(iLocal_42[0]);
									}
									else
									{
										unk_0xCEBD1B99CF343672(iLocal_42[0]);
									}
									unk_0x3F07E364A21EBC20(iLocal_42[0], unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), 3f, -1, 1048576000, 0, 1193033728);
									func_164(iLocal_42[0]);
									iLocal_447[0] = 1;
								}
							}
						}
					}
				}
				if (unk_0xFD68187442384158(iLocal_42[1]))
				{
					if (!unk_0x9F94F2CFDCA78C55(iLocal_42[1]))
					{
						if (unk_0x2A71687AF0AE817B(iLocal_42[1], unk_0x507DA4994C3D8EBD()))
						{
							iLocal_98[1] = unk_0xF976C624234A4AA8();
							iLocal_444[1] = 1;
							if (iLocal_441[1] == 0)
							{
								if (unk_0x9226425D9E480D72(iLocal_42[1]))
								{
									unk_0xAC57FBF981AB03F4(iLocal_42[1]);
								}
								else
								{
									unk_0xCEBD1B99CF343672(iLocal_42[1]);
								}
								unk_0x3A1E687904400847(iLocal_42[1], 50, 1);
								unk_0x247B2966C6C2A4C1(iLocal_42[1], unk_0x507DA4994C3D8EBD(), 0, 16);
								func_164(iLocal_42[1]);
								iLocal_441[1] = 1;
							}
						}
						else if (iLocal_447[1] == 0)
						{
							if (iLocal_444[1] == 0)
							{
								if (unk_0x9226425D9E480D72(iLocal_42[1]))
								{
									unk_0xAC57FBF981AB03F4(iLocal_42[1]);
								}
								else
								{
									unk_0xCEBD1B99CF343672(iLocal_42[1]);
								}
								unk_0x3F07E364A21EBC20(iLocal_42[1], unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), 3f, -1, 1048576000, 0, 1193033728);
								func_164(iLocal_42[1]);
								iLocal_447[1] = 1;
							}
							if (iLocal_444[1] == 1)
							{
								if (unk_0xF976C624234A4AA8() > iLocal_98[1] + 500)
								{
									if (unk_0x9226425D9E480D72(iLocal_42[1]))
									{
										unk_0xAC57FBF981AB03F4(iLocal_42[1]);
									}
									else
									{
										unk_0xCEBD1B99CF343672(iLocal_42[1]);
									}
									unk_0x3F07E364A21EBC20(iLocal_42[1], unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), 3f, -1, 1048576000, 0, 1193033728);
									func_164(iLocal_42[1]);
									iLocal_447[1] = 1;
								}
							}
						}
					}
				}
				if (func_161())
				{
					if (iLocal_411 == 0)
					{
						if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) < 2)
						{
							unk_0x53C0659721DC11EC(5);
							unk_0xA54C914AEB391F49(1f);
							unk_0x050E86400BAF39B2(unk_0xAF65E5A58BE87D95(), 2, 0);
							unk_0x4DFE220122919594(unk_0xAF65E5A58BE87D95(), 0);
							iLocal_411 = 1;
						}
					}
					if (iLocal_398 == 1)
					{
						if (iLocal_400 == 0)
						{
							if (func_154(unk_0x507DA4994C3D8EBD(), iLocal_42[0], 1) < 20f)
							{
								if (!unk_0x135ED76D25C24E67(iLocal_42[0]))
								{
									func_162(iLocal_42[0], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
									iLocal_86 = unk_0xF976C624234A4AA8();
									iLocal_400 = 1;
								}
							}
						}
						else if (unk_0xF976C624234A4AA8() > iLocal_86 + 7000)
						{
							if (func_154(unk_0x507DA4994C3D8EBD(), iLocal_42[0], 1) < 20f)
							{
								if (!unk_0x135ED76D25C24E67(iLocal_42[0]))
								{
									func_162(iLocal_42[0], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
									iLocal_86 = unk_0xF976C624234A4AA8();
								}
							}
						}
					}
					if (iLocal_399 == 1)
					{
						if (iLocal_400 == 0)
						{
							if (func_154(unk_0x507DA4994C3D8EBD(), iLocal_42[1], 1) < 20f)
							{
								if (!unk_0x135ED76D25C24E67(iLocal_42[1]))
								{
									func_162(iLocal_42[1], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
									iLocal_86 = unk_0xF976C624234A4AA8();
									iLocal_400 = 1;
								}
							}
						}
						else if (unk_0xF976C624234A4AA8() > iLocal_86 + 7000)
						{
							if (func_154(unk_0x507DA4994C3D8EBD(), iLocal_42[1], 1) < 20f)
							{
								if (!unk_0x135ED76D25C24E67(iLocal_42[1]))
								{
									func_162(iLocal_42[1], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
									iLocal_86 = unk_0xF976C624234A4AA8();
								}
							}
						}
					}
				}
				else
				{
					if (iLocal_457 == 0)
					{
						iLocal_49 = func_158(unk_0x507DA4994C3D8EBD(), joaat("COP"), 0, 0, 28);
						if (iLocal_49 != 0)
						{
							if (unk_0xFD68187442384158(iLocal_49))
							{
								if (!unk_0x9F94F2CFDCA78C55(iLocal_49))
								{
									if (func_154(unk_0x507DA4994C3D8EBD(), iLocal_49, 1) < 35f)
									{
										iLocal_457 = 1;
									}
								}
							}
						}
					}
					if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) > 0 && iLocal_457 == 0)
					{
						if (iLocal_398 == 1)
						{
							if (iLocal_401 == 0)
							{
								if (func_154(unk_0x507DA4994C3D8EBD(), iLocal_42[0], 1) < 20f)
								{
									if (!unk_0x135ED76D25C24E67(iLocal_42[0]))
									{
										func_162(iLocal_42[0], "GENERIC_INSULT_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
										iLocal_85 = unk_0xF976C624234A4AA8();
										iLocal_401 = 1;
									}
								}
							}
							else if (unk_0xF976C624234A4AA8() > iLocal_85 + 7000)
							{
								if (func_154(unk_0x507DA4994C3D8EBD(), iLocal_42[0], 1) < 20f)
								{
									if (!unk_0x135ED76D25C24E67(iLocal_42[0]))
									{
										func_162(iLocal_42[0], "GENERIC_CURSE_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
										iLocal_85 = unk_0xF976C624234A4AA8();
									}
								}
							}
						}
						if (iLocal_399 == 1)
						{
							if (iLocal_401 == 0)
							{
								if (func_154(unk_0x507DA4994C3D8EBD(), iLocal_42[1], 1) < 20f)
								{
									if (!unk_0x135ED76D25C24E67(iLocal_42[1]))
									{
										func_162(iLocal_42[1], "GENERIC_INSULT_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
										iLocal_85 = unk_0xF976C624234A4AA8();
										iLocal_401 = 1;
									}
								}
							}
							else if (unk_0xF976C624234A4AA8() > iLocal_85 + 7000)
							{
								if (func_154(unk_0x507DA4994C3D8EBD(), iLocal_42[1], 1) < 20f)
								{
									if (!unk_0x135ED76D25C24E67(iLocal_42[1]))
									{
										func_162(iLocal_42[1], "GENERIC_CURSE_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
										iLocal_85 = unk_0xF976C624234A4AA8();
									}
								}
							}
						}
					}
				}
			}
			if (!func_161())
			{
				if (iLocal_413 == 0)
				{
					if (unk_0x8FE221761D524CFE(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), 893.2f, -1556.5f, 30f, 1) < 18f)
					{
						if (unk_0xFD68187442384158(iLocal_42[0]))
						{
							if (!unk_0x9F94F2CFDCA78C55(iLocal_42[0]))
							{
								if (unk_0x2A71687AF0AE817B(iLocal_42[0], unk_0x507DA4994C3D8EBD()))
								{
									iLocal_80 = unk_0xF976C624234A4AA8();
									iLocal_413 = 1;
								}
							}
						}
						if (unk_0xFD68187442384158(iLocal_42[1]))
						{
							if (!unk_0x9F94F2CFDCA78C55(iLocal_42[1]))
							{
								if (unk_0x2A71687AF0AE817B(iLocal_42[1], unk_0x507DA4994C3D8EBD()))
								{
									iLocal_80 = unk_0xF976C624234A4AA8();
									iLocal_413 = 1;
								}
							}
						}
					}
				}
				if (iLocal_397 == 0)
				{
					if (unk_0xFD68187442384158(iLocal_42[0]))
					{
						if (!unk_0x9F94F2CFDCA78C55(iLocal_42[0]))
						{
							if (func_154(unk_0x507DA4994C3D8EBD(), iLocal_42[0], 1) > 4f)
							{
								if (unk_0x2A71687AF0AE817B(iLocal_42[0], unk_0x507DA4994C3D8EBD()))
								{
									if (iLocal_435[0] == 0)
									{
										if (unk_0x9226425D9E480D72(iLocal_42[0]))
										{
											unk_0xAC57FBF981AB03F4(iLocal_42[0]);
										}
										else
										{
											unk_0xCEBD1B99CF343672(iLocal_42[0]);
										}
										unk_0xA3C87095904A382C(iLocal_42[0], unk_0x507DA4994C3D8EBD(), -1, 0.5f, 2f, 1073741824, 0);
										func_164(iLocal_42[0]);
										iLocal_435[0] = 1;
									}
									iLocal_95[0] = unk_0xF976C624234A4AA8();
								}
								else if (unk_0xF976C624234A4AA8() > iLocal_95[0] + 500)
								{
									if (iLocal_438[0] == 0)
									{
										if (unk_0x9226425D9E480D72(iLocal_42[0]))
										{
											unk_0xAC57FBF981AB03F4(iLocal_42[0]);
										}
										else
										{
											unk_0xCEBD1B99CF343672(iLocal_42[0]);
										}
										unk_0x3F07E364A21EBC20(iLocal_42[0], unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), 2f, -1, 1048576000, 0, 1193033728);
										func_164(iLocal_42[0]);
										iLocal_438[0] = 1;
									}
								}
							}
							else if (iLocal_483[0] == 0)
							{
								if (unk_0x9226425D9E480D72(iLocal_42[0]))
								{
									unk_0xAC57FBF981AB03F4(iLocal_42[0]);
								}
								else
								{
									unk_0xCEBD1B99CF343672(iLocal_42[0]);
								}
								unk_0xB5DC017AFD430D1B(&uLocal_56);
								unk_0xDE75E9DE5B6221E1(0, unk_0x507DA4994C3D8EBD(), 0);
								unk_0xEA828B9C078AFB05(0, 2000);
								unk_0xC3DFF4EEE866DBF6(uLocal_56, 1);
								unk_0x6EE8A5CF9AC75F12(uLocal_56);
								unk_0x8229311A391A4EC6(iLocal_42[0], uLocal_56);
								unk_0x9F77DFFC61FCB68C(&uLocal_56);
								func_164(iLocal_42[0]);
								iLocal_483[0] = 1;
							}
							if (iLocal_453 == 0)
							{
								if (iLocal_430 == 0 || iLocal_402 == 1)
								{
									if (iLocal_396 == 0)
									{
										if (func_154(unk_0x507DA4994C3D8EBD(), iLocal_42[0], 1) < 10f)
										{
											if (!unk_0x135ED76D25C24E67(iLocal_42[0]))
											{
												func_162(iLocal_42[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 1);
												iLocal_82 = unk_0xF976C624234A4AA8();
												iLocal_83 = unk_0xF976C624234A4AA8();
												iLocal_80 = unk_0xF976C624234A4AA8();
												iLocal_413 = 1;
												iLocal_396 = 1;
												iLocal_406[0] = 1;
											}
										}
									}
									else if (unk_0xF976C624234A4AA8() > iLocal_82 + 7000)
									{
										if (func_154(unk_0x507DA4994C3D8EBD(), iLocal_42[0], 1) < 10f)
										{
											if (!unk_0x135ED76D25C24E67(iLocal_42[0]))
											{
												func_162(iLocal_42[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
												iLocal_82 = unk_0xF976C624234A4AA8();
											}
										}
									}
								}
								else if (iLocal_402 == 0)
								{
									if (iLocal_431 == 0)
									{
										if (func_154(unk_0x507DA4994C3D8EBD(), iLocal_42[0], 1) < 10f)
										{
											if (!unk_0x135ED76D25C24E67(iLocal_42[0]))
											{
												func_162(iLocal_42[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 8);
												iLocal_396 = 1;
												iLocal_431 = 1;
											}
										}
									}
								}
							}
							else if (unk_0xF976C624234A4AA8() > iLocal_83 + 7000)
							{
								if (func_154(unk_0x507DA4994C3D8EBD(), iLocal_42[0], 1) < 15f)
								{
									if (!unk_0x135ED76D25C24E67(iLocal_42[0]))
									{
										func_162(iLocal_42[0], "FIGHT", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
										iLocal_83 = unk_0xF976C624234A4AA8();
									}
								}
							}
						}
					}
					if (unk_0xFD68187442384158(iLocal_42[1]))
					{
						if (!unk_0x9F94F2CFDCA78C55(iLocal_42[1]))
						{
							if (func_154(unk_0x507DA4994C3D8EBD(), iLocal_42[1], 1) > 4f)
							{
								if (unk_0x2A71687AF0AE817B(iLocal_42[1], unk_0x507DA4994C3D8EBD()))
								{
									if (iLocal_435[1] == 0)
									{
										if (unk_0x9226425D9E480D72(iLocal_42[1]))
										{
											unk_0xAC57FBF981AB03F4(iLocal_42[1]);
										}
										else
										{
											unk_0xCEBD1B99CF343672(iLocal_42[1]);
										}
										unk_0xA3C87095904A382C(iLocal_42[1], unk_0x507DA4994C3D8EBD(), -1, 0.5f, 2f, 1073741824, 0);
										func_164(iLocal_42[1]);
										iLocal_435[1] = 1;
									}
									iLocal_95[1] = unk_0xF976C624234A4AA8();
								}
								else if (unk_0xF976C624234A4AA8() > iLocal_95[1] + 500)
								{
									if (iLocal_438[1] == 0)
									{
										if (unk_0x9226425D9E480D72(iLocal_42[1]))
										{
											unk_0xAC57FBF981AB03F4(iLocal_42[1]);
										}
										else
										{
											unk_0xCEBD1B99CF343672(iLocal_42[1]);
										}
										unk_0x3F07E364A21EBC20(iLocal_42[1], unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), 2f, -1, 1048576000, 0, 1193033728);
										func_164(iLocal_42[1]);
										iLocal_438[1] = 1;
									}
								}
							}
							else if (iLocal_483[1] == 0)
							{
								if (unk_0x9226425D9E480D72(iLocal_42[1]))
								{
									unk_0xAC57FBF981AB03F4(iLocal_42[1]);
								}
								else
								{
									unk_0xCEBD1B99CF343672(iLocal_42[1]);
								}
								unk_0xB5DC017AFD430D1B(&uLocal_56);
								unk_0xDE75E9DE5B6221E1(0, unk_0x507DA4994C3D8EBD(), 0);
								unk_0xEA828B9C078AFB05(0, 2000);
								unk_0xC3DFF4EEE866DBF6(uLocal_56, 1);
								unk_0x6EE8A5CF9AC75F12(uLocal_56);
								unk_0x8229311A391A4EC6(iLocal_42[1], uLocal_56);
								unk_0x9F77DFFC61FCB68C(&uLocal_56);
								func_164(iLocal_42[1]);
								iLocal_483[1] = 1;
							}
							if (iLocal_453 == 0)
							{
								if (iLocal_430 == 0 || iLocal_402 == 1)
								{
									if (iLocal_396 == 0)
									{
										if (func_154(unk_0x507DA4994C3D8EBD(), iLocal_42[1], 1) < 10f)
										{
											if (!unk_0x135ED76D25C24E67(iLocal_42[1]))
											{
												func_162(iLocal_42[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_82 = unk_0xF976C624234A4AA8();
												iLocal_84 = unk_0xF976C624234A4AA8();
												iLocal_80 = unk_0xF976C624234A4AA8();
												iLocal_413 = 1;
												iLocal_396 = 1;
												iLocal_406[1] = 1;
											}
										}
									}
									else if (unk_0xF976C624234A4AA8() > iLocal_82 + 7000)
									{
										if (func_154(unk_0x507DA4994C3D8EBD(), iLocal_42[1], 1) < 10f)
										{
											if (!unk_0x135ED76D25C24E67(iLocal_42[1]))
											{
												func_162(iLocal_42[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 11);
												iLocal_82 = unk_0xF976C624234A4AA8();
											}
										}
									}
								}
								else if (iLocal_402 == 0)
								{
									if (iLocal_431 == 0)
									{
										if (func_154(unk_0x507DA4994C3D8EBD(), iLocal_42[1], 1) < 10f)
										{
											if (!unk_0x135ED76D25C24E67(iLocal_42[1]))
											{
												func_162(iLocal_42[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 8);
												iLocal_396 = 1;
												iLocal_431 = 1;
											}
										}
									}
								}
							}
							else if (unk_0xF976C624234A4AA8() > iLocal_84 + 7000)
							{
								if (func_154(unk_0x507DA4994C3D8EBD(), iLocal_42[1], 1) < 10f)
								{
									if (!unk_0x135ED76D25C24E67(iLocal_42[1]))
									{
										func_162(iLocal_42[1], "FIGHT", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 11);
										iLocal_84 = unk_0xF976C624234A4AA8();
									}
								}
							}
						}
					}
					if (iLocal_413 == 1)
					{
						if (iLocal_453 == 0)
						{
							if (unk_0xF976C624234A4AA8() > iLocal_80 + 22000)
							{
								iLocal_453 = 1;
							}
						}
					}
					if (iLocal_413 == 1)
					{
						if (iLocal_397 == 0)
						{
							if (unk_0xF976C624234A4AA8() > iLocal_80 + 30000)
							{
								unk_0x050E86400BAF39B2(unk_0xAF65E5A58BE87D95(), 2, 0);
								iLocal_397 = 1;
							}
						}
					}
					if (unk_0xFD68187442384158(iLocal_32))
					{
						if (unk_0xCA8794CE207FC6D5(iLocal_32, 0))
						{
							if (unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), iLocal_32, 1))
							{
								if (unk_0x2A71687AF0AE817B(iLocal_42[0], unk_0x507DA4994C3D8EBD()) || unk_0x2A71687AF0AE817B(iLocal_42[1], unk_0x507DA4994C3D8EBD()))
								{
									iLocal_397 = 1;
								}
							}
							if (func_154(unk_0x507DA4994C3D8EBD(), iLocal_32, 1) < 5f && unk_0xADFF42956B1E6E0F(unk_0x507DA4994C3D8EBD()))
							{
								if (unk_0x2A71687AF0AE817B(iLocal_42[0], unk_0x507DA4994C3D8EBD()) || unk_0x2A71687AF0AE817B(iLocal_42[1], unk_0x507DA4994C3D8EBD()))
								{
									iLocal_397 = 1;
								}
							}
						}
					}
					if (unk_0xFD68187442384158(iLocal_42[0]))
					{
						if (!unk_0x9F94F2CFDCA78C55(iLocal_42[0]))
						{
							if (unk_0x6A5400407F3E1292(unk_0x507DA4994C3D8EBD()))
							{
								if (unk_0xFB97925DF1115C38(unk_0x507DA4994C3D8EBD()))
								{
									if (unk_0x2A71687AF0AE817B(iLocal_42[0], unk_0x507DA4994C3D8EBD()))
									{
										iLocal_397 = 1;
									}
								}
							}
						}
					}
					if (unk_0xFD68187442384158(iLocal_42[1]))
					{
						if (!unk_0x9F94F2CFDCA78C55(iLocal_42[1]))
						{
							if (unk_0x6A5400407F3E1292(unk_0x507DA4994C3D8EBD()))
							{
								if (unk_0xFB97925DF1115C38(unk_0x507DA4994C3D8EBD()))
								{
									if (unk_0x2A71687AF0AE817B(iLocal_42[1], unk_0x507DA4994C3D8EBD()))
									{
										iLocal_397 = 1;
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

int func_161()
{
	if (!unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		iLocal_79 = 0;
		while (iLocal_79 <= 6)
		{
			if (unk_0xFD68187442384158(iLocal_34[iLocal_79]))
			{
				if (!unk_0x9F94F2CFDCA78C55(iLocal_34[iLocal_79]))
				{
					if (func_166(unk_0x507DA4994C3D8EBD()) != joaat("weapon_unarmed") && !func_165(0))
					{
						if (unk_0x2A71687AF0AE817B(iLocal_34[iLocal_79], unk_0x507DA4994C3D8EBD()))
						{
							return 1;
						}
					}
				}
			}
			iLocal_79++;
		}
		if (unk_0xFD68187442384158(iLocal_42[0]))
		{
			if (!unk_0x9F94F2CFDCA78C55(iLocal_42[0]))
			{
				if (func_166(unk_0x507DA4994C3D8EBD()) != joaat("weapon_unarmed") && !func_165(0))
				{
					if (unk_0x2A71687AF0AE817B(iLocal_42[0], unk_0x507DA4994C3D8EBD()))
					{
						return 1;
					}
				}
			}
		}
		if (unk_0xFD68187442384158(iLocal_42[1]))
		{
			if (!unk_0x9F94F2CFDCA78C55(iLocal_42[1]))
			{
				if (func_166(unk_0x507DA4994C3D8EBD()) != joaat("weapon_unarmed") && !func_165(0))
				{
					if (unk_0x2A71687AF0AE817B(iLocal_42[1], unk_0x507DA4994C3D8EBD()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_162(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xD5197208E9370D3D(uParam0, sParam1, sParam2, func_163(iParam3), 0);
}

int func_163(int iParam0)
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

void func_164(int iParam0)
{
	if (iParam0 == iLocal_42[0])
	{
		iLocal_432[0] = 0;
		iLocal_458[0] = 0;
		iLocal_461[0] = 0;
		iLocal_450[0] = 0;
		iLocal_441[0] = 0;
		iLocal_447[0] = 0;
		iLocal_435[0] = 0;
		iLocal_438[0] = 0;
		iLocal_483[0] = 0;
	}
	if (iParam0 == iLocal_42[1])
	{
		iLocal_432[1] = 0;
		iLocal_458[1] = 0;
		iLocal_461[1] = 0;
		iLocal_450[1] = 0;
		iLocal_441[1] = 0;
		iLocal_447[1] = 0;
		iLocal_435[1] = 0;
		iLocal_438[1] = 0;
		iLocal_483[1] = 0;
	}
}

int func_165(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x61D8FEAF64881CDA(Global_2263, 14))
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
	if (unk_0x25531002BCF0D968(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_166(int iParam0)
{
	var uVar0;
	
	unk_0xAE0CD3052D6ED1ED(iParam0, &uVar0, 1);
	return uVar0;
}

void func_167()
{
	if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
	{
		if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
		{
			Local_118 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
		}
	}
	if (unk_0xFD68187442384158(iLocal_42[0]))
	{
		if (!unk_0x9F94F2CFDCA78C55(iLocal_42[0]))
		{
			Local_124[0 /*3*/] = { unk_0xBF1B13057E5119A4(iLocal_42[0], 1) };
		}
	}
	if (unk_0xFD68187442384158(iLocal_42[1]))
	{
		if (!unk_0x9F94F2CFDCA78C55(iLocal_42[1]))
		{
			Local_124[1 /*3*/] = { unk_0xBF1B13057E5119A4(iLocal_42[1], 1) };
		}
	}
	if (unk_0xFD68187442384158(iLocal_42[0]))
	{
		if (!unk_0x9F94F2CFDCA78C55(iLocal_42[0]))
		{
			iLocal_403[0] = 1;
		}
		else
		{
			iLocal_403[0] = 0;
		}
	}
	else
	{
		iLocal_403[0] = 0;
	}
	if (unk_0xFD68187442384158(iLocal_42[1]))
	{
		if (!unk_0x9F94F2CFDCA78C55(iLocal_42[1]))
		{
			iLocal_403[1] = 1;
		}
		else
		{
			iLocal_403[1] = 0;
		}
	}
	else
	{
		iLocal_403[1] = 0;
	}
	if (iLocal_30 != 0)
	{
		if (iLocal_30 == 1)
		{
			if (iLocal_403[0] == 1)
			{
				if (iLocal_403[1] == 1)
				{
					if (func_154(unk_0x507DA4994C3D8EBD(), iLocal_42[0], 1) < func_154(unk_0x507DA4994C3D8EBD(), iLocal_42[1], 1))
					{
						if (func_154(unk_0x507DA4994C3D8EBD(), iLocal_42[0], 1) < 20f)
						{
							if (((Local_118.f_0 < Local_124[0 /*3*/] && !unk_0x849DBD2D635C99D5(unk_0x507DA4994C3D8EBD(), iLocal_42[0], 90f)) && !unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, 1, 0)) && !unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, 1, 0))
							{
								iLocal_30 = 0;
								iLocal_458[0] = 0;
								iLocal_461[0] = 0;
								iLocal_458[1] = 0;
								iLocal_461[1] = 0;
								iLocal_104[0] = unk_0xF976C624234A4AA8();
								iLocal_104[1] = unk_0xF976C624234A4AA8();
							}
						}
						else if (Local_118.f_0 < Local_124[0 /*3*/])
						{
							iLocal_30 = 0;
							iLocal_458[0] = 0;
							iLocal_461[0] = 0;
							iLocal_458[1] = 0;
							iLocal_461[1] = 0;
							iLocal_104[0] = unk_0xF976C624234A4AA8();
							iLocal_104[1] = unk_0xF976C624234A4AA8();
						}
					}
					else if (func_154(unk_0x507DA4994C3D8EBD(), iLocal_42[1], 1) < 15f)
					{
						if ((Local_118.f_0 > Local_124[1 /*3*/] && !unk_0x849DBD2D635C99D5(unk_0x507DA4994C3D8EBD(), iLocal_42[1], 90f)) && !unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0))
						{
							iLocal_30 = 0;
							iLocal_458[0] = 0;
							iLocal_461[0] = 0;
							iLocal_458[1] = 0;
							iLocal_461[1] = 0;
							iLocal_104[0] = unk_0xF976C624234A4AA8();
							iLocal_104[1] = unk_0xF976C624234A4AA8();
						}
					}
					else if (Local_118.f_0 > Local_124[1 /*3*/])
					{
						iLocal_30 = 0;
						iLocal_458[0] = 0;
						iLocal_461[0] = 0;
						iLocal_458[1] = 0;
						iLocal_461[1] = 0;
						iLocal_104[0] = unk_0xF976C624234A4AA8();
						iLocal_104[1] = unk_0xF976C624234A4AA8();
					}
				}
				else if (func_154(unk_0x507DA4994C3D8EBD(), iLocal_42[0], 1) < func_154(unk_0x507DA4994C3D8EBD(), iLocal_42[1], 1))
				{
					if (func_154(unk_0x507DA4994C3D8EBD(), iLocal_42[0], 1) < 15f)
					{
						if ((Local_118.f_0 < Local_124[0 /*3*/] && !unk_0x849DBD2D635C99D5(unk_0x507DA4994C3D8EBD(), iLocal_42[0], 90f)) && !unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, 1, 0))
						{
							iLocal_30 = 0;
							iLocal_458[0] = 0;
							iLocal_461[0] = 0;
							iLocal_458[1] = 0;
							iLocal_461[1] = 0;
							iLocal_104[0] = unk_0xF976C624234A4AA8();
							iLocal_104[1] = unk_0xF976C624234A4AA8();
						}
					}
					else if (Local_118.f_0 < Local_124[0 /*3*/])
					{
						iLocal_30 = 0;
						iLocal_458[0] = 0;
						iLocal_461[0] = 0;
						iLocal_458[1] = 0;
						iLocal_461[1] = 0;
						iLocal_104[0] = unk_0xF976C624234A4AA8();
						iLocal_104[1] = unk_0xF976C624234A4AA8();
					}
				}
			}
			else if (iLocal_403[1] == 1)
			{
				if (func_154(unk_0x507DA4994C3D8EBD(), iLocal_42[1], 1) < 15f)
				{
					if ((Local_118.f_0 > Local_124[1 /*3*/] && !unk_0x849DBD2D635C99D5(unk_0x507DA4994C3D8EBD(), iLocal_42[1], 90f)) && !unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0))
					{
						iLocal_30 = 0;
						iLocal_458[0] = 0;
						iLocal_461[0] = 0;
						iLocal_458[1] = 0;
						iLocal_461[1] = 0;
						iLocal_104[0] = unk_0xF976C624234A4AA8();
						iLocal_104[1] = unk_0xF976C624234A4AA8();
					}
				}
				else if (Local_118.f_0 > Local_124[1 /*3*/])
				{
					iLocal_30 = 0;
					iLocal_458[0] = 0;
					iLocal_461[0] = 0;
					iLocal_458[1] = 0;
					iLocal_461[1] = 0;
					iLocal_104[0] = unk_0xF976C624234A4AA8();
					iLocal_104[1] = unk_0xF976C624234A4AA8();
				}
			}
		}
		if (iLocal_30 == 2)
		{
			if (iLocal_397 == 0)
			{
				if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0) || Local_118.f_0 > 942f)
				{
					if (!unk_0x9F94F2CFDCA78C55(iLocal_42[1]))
					{
						if (Local_118.f_0 > Local_124[1 /*3*/])
						{
							if (!unk_0x849DBD2D635C99D5(unk_0x507DA4994C3D8EBD(), iLocal_42[1], 90f))
							{
								iLocal_30 = 0;
								iLocal_458[0] = 0;
								iLocal_461[0] = 0;
								iLocal_458[1] = 0;
								iLocal_461[1] = 0;
								iLocal_104[0] = unk_0xF976C624234A4AA8();
								iLocal_104[1] = unk_0xF976C624234A4AA8();
							}
						}
					}
					else if (Local_118.f_0 > 942f)
					{
						if (!unk_0x849DBD2D635C99D5(unk_0x507DA4994C3D8EBD(), iLocal_42[1], 90f))
						{
							iLocal_30 = 0;
							iLocal_458[0] = 0;
							iLocal_461[0] = 0;
							iLocal_458[1] = 0;
							iLocal_461[1] = 0;
							iLocal_104[0] = unk_0xF976C624234A4AA8();
							iLocal_104[1] = unk_0xF976C624234A4AA8();
						}
					}
				}
				if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, 1, 0) || Local_118.f_0 < 860f)
				{
					if (!unk_0x9F94F2CFDCA78C55(iLocal_42[0]))
					{
						if (Local_118.f_0 < Local_124[0 /*3*/])
						{
							if (!unk_0x849DBD2D635C99D5(unk_0x507DA4994C3D8EBD(), iLocal_42[0], 90f))
							{
								iLocal_30 = 0;
								iLocal_458[0] = 0;
								iLocal_461[0] = 0;
								iLocal_458[1] = 0;
								iLocal_461[1] = 0;
								iLocal_104[0] = unk_0xF976C624234A4AA8();
								iLocal_104[1] = unk_0xF976C624234A4AA8();
							}
						}
					}
					else if (Local_118.f_0 < 860f)
					{
						if (!unk_0x849DBD2D635C99D5(unk_0x507DA4994C3D8EBD(), iLocal_42[0], 90f))
						{
							iLocal_30 = 0;
							iLocal_458[0] = 0;
							iLocal_461[0] = 0;
							iLocal_458[1] = 0;
							iLocal_461[1] = 0;
							iLocal_104[0] = unk_0xF976C624234A4AA8();
							iLocal_104[1] = unk_0xF976C624234A4AA8();
						}
					}
				}
			}
		}
	}
	if (iLocal_30 != 1)
	{
		if (iLocal_30 != 2)
		{
			if (iLocal_403[0] == 1)
			{
				if (func_154(unk_0x507DA4994C3D8EBD(), iLocal_42[0], 1) < 20f)
				{
					if ((func_166(unk_0x507DA4994C3D8EBD()) == joaat("weapon_unarmed") || unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0)) || func_165(0))
					{
						if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 860.4606f, -1563.58f, 28.81788f, 865.0807f, -1575.088f, 30.93324f, 5.75f, 0, 1, 0))
						{
							if (Local_118.f_0 > Local_124[0 /*3*/] || unk_0x849DBD2D635C99D5(unk_0x507DA4994C3D8EBD(), iLocal_42[0], 90f))
							{
								iLocal_30 = 1;
							}
						}
						if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, 1, 0))
						{
							iLocal_30 = 1;
						}
					}
				}
			}
			if (iLocal_403[1] == 1)
			{
				if (func_154(unk_0x507DA4994C3D8EBD(), iLocal_42[1], 1) < 15f)
				{
					if ((func_166(unk_0x507DA4994C3D8EBD()) == joaat("weapon_unarmed") || unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0)) || func_165(0))
					{
						if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 939.8862f, -1575.635f, 28.59783f, 952.9254f, -1575.484f, 33.19459f, 13.75f, 0, 1, 0))
						{
							if (Local_118.f_0 < Local_124[1 /*3*/] || unk_0x849DBD2D635C99D5(unk_0x507DA4994C3D8EBD(), iLocal_42[1], 90f))
							{
								iLocal_30 = 1;
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_30 != 2)
	{
		if (unk_0x6588804F7BCB1101(-1, 892.9f, -1552.4f, 30f, 40f))
		{
			iLocal_30 = 2;
			iLocal_397 = 1;
		}
		if (iLocal_481 == 1)
		{
			iLocal_30 = 2;
			iLocal_397 = 1;
		}
		if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) != 0)
		{
			if (unk_0xFD68187442384158(iLocal_42[0]))
			{
				if (!unk_0x9F94F2CFDCA78C55(iLocal_42[0]))
				{
					if (unk_0x2A71687AF0AE817B(iLocal_42[0], unk_0x507DA4994C3D8EBD()))
					{
						iLocal_30 = 2;
						iLocal_397 = 1;
					}
				}
			}
			if (unk_0xFD68187442384158(iLocal_42[1]))
			{
				if (!unk_0x9F94F2CFDCA78C55(iLocal_42[1]))
				{
					if (unk_0x2A71687AF0AE817B(iLocal_42[1], unk_0x507DA4994C3D8EBD()))
					{
						iLocal_30 = 2;
						iLocal_397 = 1;
					}
				}
			}
		}
		if (iLocal_430 == 0)
		{
			if (iLocal_429 == 1)
			{
				if (unk_0xF976C624234A4AA8() > iLocal_94 + 4000)
				{
					iLocal_93 = 0;
					while (iLocal_93 <= 6)
					{
						if (func_159())
						{
							if (unk_0xFD68187442384158(iLocal_34[iLocal_93]))
							{
								if (!unk_0x9F94F2CFDCA78C55(iLocal_34[iLocal_93]))
								{
									if (unk_0x5117626A8E215F91(iLocal_34[iLocal_93]))
									{
										iLocal_30 = 2;
										iLocal_430 = 1;
									}
								}
							}
						}
						iLocal_93++;
					}
				}
			}
		}
		if ((iLocal_28 == 4 || iLocal_28 == 3) || iLocal_429 == 1)
		{
			iLocal_30 = 2;
			iLocal_426 = 1;
			iLocal_397 = 1;
		}
		if (!unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
		{
			if (iLocal_403[0] == 1)
			{
				if (func_166(unk_0x507DA4994C3D8EBD()) != joaat("weapon_unarmed") && !func_165(0))
				{
					if (unk_0x2A71687AF0AE817B(iLocal_42[0], unk_0x507DA4994C3D8EBD()))
					{
						iLocal_30 = 2;
					}
				}
			}
			if (iLocal_403[1] == 1)
			{
				if (func_166(unk_0x507DA4994C3D8EBD()) != joaat("weapon_unarmed") && !func_165(0))
				{
					if (unk_0x2A71687AF0AE817B(iLocal_42[1], unk_0x507DA4994C3D8EBD()))
					{
						iLocal_30 = 2;
					}
				}
			}
		}
		if (unk_0x8FE221761D524CFE(Local_118, Local_131, 1) < 36f)
		{
			if (iLocal_403[0] == 1)
			{
				if (unk_0x2A71687AF0AE817B(iLocal_42[0], unk_0x507DA4994C3D8EBD()))
				{
					iLocal_30 = 2;
				}
				if (func_154(iLocal_42[0], unk_0x507DA4994C3D8EBD(), 1) < 20f)
				{
					if (unk_0xE131581629473E8F(unk_0xAF65E5A58BE87D95(), iLocal_42[0]))
					{
						iLocal_30 = 2;
					}
				}
			}
			if (iLocal_403[1] == 1)
			{
				if (Local_118.f_2 < 36f || unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
				{
					if (unk_0x2A71687AF0AE817B(iLocal_42[1], unk_0x507DA4994C3D8EBD()))
					{
						iLocal_30 = 2;
					}
					if (func_154(iLocal_42[1], unk_0x507DA4994C3D8EBD(), 1) < 20f)
					{
						if (unk_0xE131581629473E8F(unk_0xAF65E5A58BE87D95(), iLocal_42[1]))
						{
							iLocal_30 = 2;
						}
					}
				}
			}
		}
		if (iLocal_403[0] == 1)
		{
			if (func_154(unk_0x507DA4994C3D8EBD(), iLocal_42[0], 1) < 20f)
			{
				if (Local_118.f_0 > Local_124[0 /*3*/] && unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, 1, 0))
				{
					if (unk_0x2A71687AF0AE817B(iLocal_42[0], unk_0x507DA4994C3D8EBD()) || unk_0xE131581629473E8F(unk_0xAF65E5A58BE87D95(), iLocal_42[0]))
					{
						iLocal_30 = 2;
					}
				}
			}
		}
		if (iLocal_403[1] == 1)
		{
			if (func_154(unk_0x507DA4994C3D8EBD(), iLocal_42[1], 1) < 20f)
			{
				if (Local_118.f_0 < Local_124[1 /*3*/] && unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0))
				{
					if (unk_0x2A71687AF0AE817B(iLocal_42[1], unk_0x507DA4994C3D8EBD()) || unk_0xE131581629473E8F(unk_0xAF65E5A58BE87D95(), iLocal_42[1]))
					{
						iLocal_30 = 2;
					}
				}
			}
		}
	}
}

void func_168()
{
	iLocal_63 = 0;
	while (iLocal_63 <= 6)
	{
		if (unk_0xFD68187442384158(iLocal_34[iLocal_63]))
		{
			if (!unk_0x9F94F2CFDCA78C55(iLocal_34[iLocal_63]))
			{
				if (iLocal_329[iLocal_63] == 0)
				{
					if (func_154(unk_0x507DA4994C3D8EBD(), iLocal_34[iLocal_63], 1) > 20f)
					{
						iLocal_329[iLocal_63] = 1;
					}
				}
				if (iLocal_329[iLocal_63] == 1)
				{
					if (func_154(unk_0x507DA4994C3D8EBD(), iLocal_34[iLocal_63], 1) < 20f)
					{
						iLocal_329[iLocal_63] = 0;
					}
				}
			}
			else if (iLocal_329[iLocal_63] == 0)
			{
				iLocal_329[iLocal_63] = 1;
			}
		}
		else if (iLocal_329[iLocal_63] == 0)
		{
			iLocal_329[iLocal_63] = 1;
		}
		iLocal_63++;
	}
	if (((((iLocal_329[0] == 1 && iLocal_329[1] == 1) && iLocal_329[2] == 1) && iLocal_329[3] == 1) && iLocal_329[4] == 1) && iLocal_329[5] == 1)
	{
		iLocal_337 = 1;
	}
	else
	{
		iLocal_337 = 0;
	}
	iLocal_62 = 0;
	while (iLocal_62 <= 6)
	{
		if (unk_0xFD68187442384158(iLocal_34[iLocal_62]))
		{
			if (!unk_0x9F94F2CFDCA78C55(iLocal_34[iLocal_62]))
			{
				func_173(iLocal_34[iLocal_62]);
				if (iLocal_27 == 3 || iLocal_27 == 4)
				{
					if (iLocal_30 == 2 && iLocal_28 == 0)
					{
						func_172(1);
						if (iLocal_415 == 1)
						{
							func_97();
						}
					}
					if (unk_0x22E454ACC745B58C(iLocal_34[iLocal_62], 18))
					{
						if (iLocal_28 != 4)
						{
							func_172(4);
							if (iLocal_415 == 1)
							{
								func_170();
							}
							iLocal_481 = 1;
						}
					}
					if (iLocal_28 != 4)
					{
						if (unk_0x6588804F7BCB1101(-1, 892.9f, -1552.4f, 30f, 40f))
						{
							func_172(4);
							if (iLocal_415 == 1)
							{
								func_170();
							}
						}
					}
					if ((((((((func_169(iLocal_34[iLocal_62], iLocal_34[0]) || func_169(iLocal_34[iLocal_62], iLocal_34[1])) || func_169(iLocal_34[iLocal_62], iLocal_34[2])) || func_169(iLocal_34[iLocal_62], iLocal_34[3])) || func_169(iLocal_34[iLocal_62], iLocal_34[4])) || func_169(iLocal_34[iLocal_62], iLocal_34[5])) || func_169(iLocal_34[iLocal_62], iLocal_34[6])) || func_169(iLocal_34[iLocal_62], iLocal_42[0])) || func_169(iLocal_34[iLocal_62], iLocal_42[1]))
					{
						if (iLocal_28 != 4)
						{
							func_172(4);
							if (iLocal_415 == 1)
							{
								func_170();
							}
							iLocal_481 = 1;
						}
					}
					if ((func_166(unk_0x507DA4994C3D8EBD()) == joaat("weapon_unarmed") || unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1)) || func_165(0))
					{
						if (iLocal_397 == 0)
						{
							if (func_154(unk_0x507DA4994C3D8EBD(), iLocal_34[iLocal_62], 1) > 20f)
							{
								if (iLocal_321[iLocal_62] == 1)
								{
									iLocal_321[iLocal_62] = 0;
								}
								if (((((iLocal_337 == 1 && iLocal_28 != 0) && iLocal_28 != 2) && iLocal_28 != 3) && iLocal_28 != 4) && iLocal_30 != 2)
								{
									func_172(0);
								}
							}
							if (func_154(unk_0x507DA4994C3D8EBD(), iLocal_34[iLocal_62], 1) < 20f && unk_0x2A71687AF0AE817B(iLocal_34[iLocal_62], unk_0x507DA4994C3D8EBD()))
							{
								if (((iLocal_28 != 1 && iLocal_28 != 2) && iLocal_28 != 3) && iLocal_28 != 4)
								{
									if (iLocal_430 == 0 && iLocal_397 == 0)
									{
										func_172(1);
										if (iLocal_415 == 1)
										{
											func_97();
										}
									}
									else
									{
										func_172(3);
										if (iLocal_415 == 1)
										{
											func_170();
										}
									}
								}
							}
							if (func_154(unk_0x507DA4994C3D8EBD(), iLocal_34[iLocal_62], 1) < 20f && unk_0x2A71687AF0AE817B(iLocal_34[iLocal_62], unk_0x507DA4994C3D8EBD()))
							{
								if (iLocal_321[iLocal_62] == 0)
								{
									iLocal_68[iLocal_62] = unk_0xF976C624234A4AA8();
									iLocal_321[iLocal_62] = 1;
								}
								if (iLocal_321[iLocal_62] == 1)
								{
									if (unk_0xF976C624234A4AA8() > iLocal_68[iLocal_62] + 24000)
									{
										if ((iLocal_28 != 2 && iLocal_28 != 3) && iLocal_28 != 4)
										{
											func_172(2);
											if (iLocal_415 == 1)
											{
												func_170();
											}
										}
									}
								}
							}
						}
						if (iLocal_397 == 1)
						{
							if (func_154(unk_0x507DA4994C3D8EBD(), iLocal_34[iLocal_62], 1) < 20f && unk_0x2A71687AF0AE817B(iLocal_34[iLocal_62], unk_0x507DA4994C3D8EBD()))
							{
								if (iLocal_28 != 3 && iLocal_28 != 4)
								{
									func_172(3);
									if (iLocal_415 == 1)
									{
										func_170();
									}
								}
							}
						}
						if (unk_0x6A5400407F3E1292(unk_0x507DA4994C3D8EBD()))
						{
							if (iLocal_412 == 0)
							{
								iLocal_89 = unk_0xF976C624234A4AA8();
								iLocal_412 = 1;
							}
							else if (unk_0xF976C624234A4AA8() > iLocal_89 + 3000)
							{
								if (func_154(unk_0x507DA4994C3D8EBD(), iLocal_34[iLocal_62], 1) < 20f && unk_0x2A71687AF0AE817B(iLocal_34[iLocal_62], unk_0x507DA4994C3D8EBD()))
								{
									if (iLocal_28 != 3 && iLocal_28 != 4)
									{
										func_172(3);
										if (iLocal_415 == 1)
										{
											func_170();
										}
									}
								}
							}
						}
						else if (iLocal_412 == 1)
						{
							iLocal_412 = 0;
						}
						if (unk_0xFD68187442384158(iLocal_32))
						{
							if (unk_0xCA8794CE207FC6D5(iLocal_32, 0))
							{
								if (unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), iLocal_32, 1))
								{
									if (unk_0x2A71687AF0AE817B(iLocal_34[iLocal_62], unk_0x507DA4994C3D8EBD()))
									{
										if (iLocal_28 != 3 && iLocal_28 != 4)
										{
											iLocal_389 = 1;
											func_172(3);
											if (iLocal_415 == 1)
											{
												func_170();
											}
										}
									}
								}
								if (func_154(unk_0x507DA4994C3D8EBD(), iLocal_32, 1) < 5f && unk_0xADFF42956B1E6E0F(unk_0x507DA4994C3D8EBD()))
								{
									if (unk_0x2A71687AF0AE817B(iLocal_34[iLocal_62], unk_0x507DA4994C3D8EBD()))
									{
										if (iLocal_28 != 3 && iLocal_28 != 4)
										{
											iLocal_389 = 1;
											func_172(3);
											if (iLocal_415 == 1)
											{
												func_170();
											}
										}
									}
									if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 917.3436f, -1554.42f, 29.26611f, 916.8774f, -1556.441f, 33.00661f, 2.25f, 0, 1, 0))
									{
										if (unk_0xFD68187442384158(iLocal_34[0]))
										{
											if (!unk_0x9F94F2CFDCA78C55(iLocal_34[0]))
											{
												if (unk_0x594EB70937EC1486(iLocal_34[0], 912.3f, -1542.6f, 30f, 3f, 3f, 3f, 0, 1, 0))
												{
													if (iLocal_28 != 3 && iLocal_28 != 4)
													{
														iLocal_389 = 1;
														func_172(3);
														if (iLocal_415 == 1)
														{
															func_170();
														}
													}
												}
											}
										}
									}
								}
							}
						}
						if (unk_0xFD68187442384158(iLocal_34[6]))
						{
							if (!unk_0x9F94F2CFDCA78C55(iLocal_34[6]))
							{
								if (func_154(unk_0x507DA4994C3D8EBD(), iLocal_34[6], 1) < 20f)
								{
									if ((unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 928.7163f, -1546.671f, 27.34603f, 921.8971f, -1549.752f, 34.04724f, 6.25f, 0, 1, 0) || unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 931.868f, -1545.185f, 27.3653f, 925.8857f, -1547.303f, 34.07205f, 3.5f, 0, 1, 0)) || unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 929.4908f, -1524.829f, 32.84098f, 929.3696f, -1545.288f, 37.34258f, 5f, 0, 1, 0))
									{
										if (unk_0x2A71687AF0AE817B(iLocal_34[6], unk_0x507DA4994C3D8EBD()))
										{
											if (Local_118.f_2 > 31f)
											{
												if (iLocal_28 != 3 && iLocal_28 != 4)
												{
													iLocal_427 = 1;
													func_172(3);
													if (iLocal_415 == 1)
													{
														func_170();
													}
												}
											}
											else if (((iLocal_28 != 1 && iLocal_28 != 2) && iLocal_28 != 3) && iLocal_28 != 4)
											{
												func_172(1);
												if (iLocal_415 == 1)
												{
													func_97();
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
						if (iLocal_320 == 0)
						{
							iLocal_67 = unk_0xF976C624234A4AA8();
							iLocal_320 = 1;
						}
						if (iLocal_320 == 1)
						{
							if (unk_0xF976C624234A4AA8() > iLocal_67 + 4000 || iLocal_28 == 3)
							{
								if (func_154(unk_0x507DA4994C3D8EBD(), iLocal_34[iLocal_62], 1) < 20f)
								{
									if (unk_0x2A71687AF0AE817B(iLocal_34[iLocal_62], unk_0x507DA4994C3D8EBD()))
									{
										if (iLocal_28 != 4)
										{
											func_172(4);
											if (iLocal_415 == 1)
											{
												func_170();
											}
										}
									}
								}
							}
						}
						if (func_154(unk_0x507DA4994C3D8EBD(), iLocal_34[iLocal_62], 1) < 40f)
						{
							if (unk_0xEB4AE93098956715(unk_0x507DA4994C3D8EBD()))
							{
								if (unk_0x2A71687AF0AE817B(iLocal_34[iLocal_62], unk_0x507DA4994C3D8EBD()) || unk_0xE131581629473E8F(unk_0xAF65E5A58BE87D95(), iLocal_34[iLocal_62]))
								{
									if (iLocal_28 != 4)
									{
										func_172(4);
										if (iLocal_415 == 1)
										{
											func_170();
										}
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_62++;
	}
}

int func_169(int iParam0, int iParam1)
{
	if (((func_154(iParam0, iParam1, 1) < 20f && unk_0x849DBD2D635C99D5(iParam0, iParam1, 90f)) && !unk_0x9F94F2CFDCA78C55(iParam0)) && unk_0x9F94F2CFDCA78C55(iParam1))
	{
		return 1;
	}
	return 0;
}

void func_170()
{
	Global_14558 = 0;
	func_171();
}

void func_171()
{
	unk_0xA2A4AD85BA2F7ADD();
	Global_16703 = 0;
	if (unk_0xF611D1BB58990143())
	{
		unk_0xD858EC6FECDB4B3F(0);
		Global_15692 = 6;
	}
}

void func_172(int iParam0)
{
	iLocal_28 = iParam0;
	iLocal_66 = 0;
}

void func_173(int iParam0)
{
	iLocal_64 = 0;
	while (iLocal_64 <= 6)
	{
		if (iParam0 == iLocal_34[iLocal_64])
		{
			if (func_154(unk_0x507DA4994C3D8EBD(), iParam0, 1) < 20f && unk_0x2A71687AF0AE817B(iParam0, unk_0x507DA4994C3D8EBD()))
			{
				if (iLocal_338[iLocal_64] == 0)
				{
					unk_0x8E759206778E571F(iParam0, unk_0x507DA4994C3D8EBD(), -1, 1072, 3);
					iLocal_338[iLocal_64] = 1;
				}
			}
			else if (iLocal_338[iLocal_64] == 1)
			{
				unk_0x8E759206778E571F(iParam0, unk_0x507DA4994C3D8EBD(), 1, 1072, 3);
				iLocal_338[iLocal_64] = 0;
			}
		}
		iLocal_64++;
	}
	switch (iLocal_28)
	{
		case 0:
			if (iLocal_66 == 0)
			{
				unk_0x2DC5B31EBB810396(iParam0, 1);
				if (iParam0 == iLocal_34[0])
				{
					if (unk_0xE08642374BA21D0D(912.2f, -1542.5f, 29.8f, 3f, 0))
					{
						if (unk_0xEC043AB2FEE0E94F(iLocal_34[0], 1647992574) != 1 && unk_0xEC043AB2FEE0E94F(iLocal_34[0], -1680762137) != 1)
						{
							unk_0xA6D0F8A56436D220(iLocal_34[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_34[1])
				{
					if (unk_0xE08642374BA21D0D(917.4f, -1517.4f, 30f, 3f, 0))
					{
						if (unk_0xEC043AB2FEE0E94F(iLocal_34[1], 1647992574) != 1 && unk_0xEC043AB2FEE0E94F(iLocal_34[1], -1680762137) != 1)
						{
							unk_0xA6D0F8A56436D220(iLocal_34[1], 917.4f, -1517.4f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_34[2])
				{
					if (unk_0xE08642374BA21D0D(869.8f, -1541.2f, 29.4f, 3f, 0))
					{
						if (unk_0xEC043AB2FEE0E94F(iLocal_34[2], 1647992574) != 1 && unk_0xEC043AB2FEE0E94F(iLocal_34[2], -1680762137) != 1)
						{
							unk_0xA6D0F8A56436D220(iLocal_34[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_34[3])
				{
					if (unk_0xE08642374BA21D0D(884.2f, -1574.1f, 30f, 3f, 0))
					{
						if (unk_0xEC043AB2FEE0E94F(iLocal_34[3], 1647992574) != 1 && unk_0xEC043AB2FEE0E94F(iLocal_34[3], -1680762137) != 1)
						{
							unk_0xA6D0F8A56436D220(iLocal_34[3], 884.2f, -1574.1f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_34[4])
				{
					if (unk_0xE08642374BA21D0D(904f, -1575f, 30f, 3f, 0))
					{
						if (unk_0xEC043AB2FEE0E94F(iLocal_34[4], 1647992574) != 1 && unk_0xEC043AB2FEE0E94F(iLocal_34[4], -1680762137) != 1)
						{
							unk_0xA6D0F8A56436D220(iLocal_34[4], 904f, -1575f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_34[5])
				{
					if (unk_0xE08642374BA21D0D(905.9f, -1574.8f, 29.9f, 3f, 0))
					{
						if (unk_0xEC043AB2FEE0E94F(iLocal_34[5], 1647992574) != 1 && unk_0xEC043AB2FEE0E94F(iLocal_34[5], -1680762137) != 1)
						{
							unk_0xA6D0F8A56436D220(iLocal_34[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_34[6])
				{
					if (unk_0xE08642374BA21D0D(889.5f, -1562f, 29.7f, 3f, 0))
					{
						if (unk_0xEC043AB2FEE0E94F(iLocal_34[6], 1647992574) != 1 && unk_0xEC043AB2FEE0E94F(iLocal_34[6], -1680762137) != 1)
						{
							unk_0xA6D0F8A56436D220(iLocal_34[6], 889.5f, -1562f, 29.7f, 20f, 0);
						}
					}
				}
				iLocal_66++;
			}
			if (iLocal_66 == 1)
			{
				if (unk_0xFD68187442384158(iLocal_34[4]))
				{
					if (!unk_0x9F94F2CFDCA78C55(iLocal_34[4]))
					{
						if (unk_0xFD68187442384158(iLocal_34[5]))
						{
							if (!unk_0x9F94F2CFDCA78C55(iLocal_34[5]))
							{
								if (func_154(unk_0x507DA4994C3D8EBD(), iLocal_34[4], 1) < 25f)
								{
									if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 926.455f, -1582.384f, 29.32759f, 909.6322f, -1581.374f, 31.58907f, 9.5f, 0, 1, 0) || Local_118.f_1 > -1573f)
									{
										if (iLocal_415 == 0)
										{
											func_115(&uLocal_136, 3, iLocal_34[4], "CONSTRUCTION2", 0, 1);
											func_115(&uLocal_136, 5, iLocal_34[5], "CONSTRUCTION3", 0, 1);
											unk_0x8E759206778E571F(iLocal_34[4], iLocal_34[5], -1, 0, 2);
											unk_0x8E759206778E571F(iLocal_34[5], iLocal_34[4], -1, 0, 2);
											if (!func_159())
											{
												if (!unk_0x44057438DAE1BD45() || !unk_0x45C61809C43FF0B3())
												{
													if (func_153(&uLocal_136, "SOL1AUD", "SOL1_TALK", 6, 1, 1, 0))
													{
														iLocal_415 = 1;
													}
												}
											}
										}
									}
								}
								if (unk_0x594EB70937EC1486(unk_0x507DA4994C3D8EBD(), 921.9f, -1556.5f, 30f, 5f, 5f, 5f, 0, 1, 1))
								{
									if (iLocal_422 == 0)
									{
										iLocal_91 = unk_0xF976C624234A4AA8();
										iLocal_422 = 1;
									}
									if (iLocal_422 == 1)
									{
										if (unk_0xF976C624234A4AA8() > iLocal_91 + 4000)
										{
											if (iLocal_415 == 0)
											{
												func_115(&uLocal_136, 3, iLocal_34[4], "CONSTRUCTION2", 0, 1);
												func_115(&uLocal_136, 5, iLocal_34[5], "CONSTRUCTION3", 0, 1);
												unk_0x8E759206778E571F(iLocal_34[4], iLocal_34[5], -1, 0, 2);
												unk_0x8E759206778E571F(iLocal_34[5], iLocal_34[4], -1, 0, 2);
												if (!func_159())
												{
													if (!unk_0x44057438DAE1BD45() || !unk_0x45C61809C43FF0B3())
													{
														if (func_153(&uLocal_136, "SOL1AUD", "SOL1_TALK", 6, 1, 1, 0))
														{
															iLocal_415 = 1;
														}
													}
												}
											}
										}
									}
								}
								if (iLocal_415 == 1 && !func_159())
								{
									if (iLocal_414 == 0)
									{
										if (unk_0xE08642374BA21D0D(865f, -1558.1f, 29.5f, 3f, 0))
										{
											unk_0xCBA47B699F417E4D(iLocal_34[4]);
											unk_0xCBA47B699F417E4D(iLocal_34[5]);
											unk_0x03BE6E1931460594(iLocal_34[4], 865f, -1558.1f, 29.5f, 3f, 0);
											iLocal_414 = 1;
										}
									}
								}
							}
						}
					}
				}
				if (iParam0 == iLocal_34[6])
				{
					if (iLocal_423 == 0)
					{
						if (iLocal_424 == 0)
						{
							iLocal_92 = unk_0xF976C624234A4AA8();
							iLocal_424 = 1;
						}
						if (unk_0xF976C624234A4AA8() > iLocal_92 + 30000)
						{
							if (iLocal_423 == 0)
							{
								if (unk_0xE08642374BA21D0D(925f, -1561f, 30f, 3f, 0))
								{
									unk_0x03BE6E1931460594(iLocal_34[6], 925f, -1561f, 30f, 3f, 0);
									iLocal_423 = 1;
									iLocal_424 = 0;
								}
							}
						}
					}
					if (iLocal_423 == 1)
					{
						if (unk_0x594EB70937EC1486(iLocal_34[6], 925f, -1561f, 30f, 3f, 3f, 3f, 0, 1, 0))
						{
							if (func_154(unk_0x507DA4994C3D8EBD(), iLocal_34[6], 1) < 15f && Local_118.f_2 < 40f)
							{
								if (iLocal_425 == 0)
								{
									if (unk_0xE08642374BA21D0D(909.5f, -1515.5f, 30f, 3f, 0))
									{
										unk_0xA6D0F8A56436D220(iLocal_34[6], 909.5f, -1515.5f, 30f, 50f, 0);
										iLocal_425 = 1;
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_66 == 0)
			{
				iLocal_64 = 0;
				while (iLocal_64 <= 6)
				{
					if (iLocal_30 == 0)
					{
						if (iParam0 == iLocal_34[iLocal_64])
						{
							if (func_154(unk_0x507DA4994C3D8EBD(), iParam0, 1) < 20f)
							{
								if (iLocal_346[iLocal_64] == 0)
								{
									if (unk_0x2A71687AF0AE817B(iParam0, unk_0x507DA4994C3D8EBD()) || unk_0xE131581629473E8F(unk_0xAF65E5A58BE87D95(), iParam0))
									{
										if (!unk_0x9226425D9E480D72(iParam0))
										{
											unk_0xCEBD1B99CF343672(iParam0);
										}
										if (unk_0x9226425D9E480D72(iParam0))
										{
											unk_0xAC57FBF981AB03F4(iParam0);
										}
										unk_0xB5DC017AFD430D1B(&uLocal_56);
										unk_0xA3C87095904A382C(0, unk_0x507DA4994C3D8EBD(), -1, 2f, 1f, 1073741824, 0);
										unk_0xDE75E9DE5B6221E1(0, unk_0x507DA4994C3D8EBD(), 0);
										unk_0x6EE8A5CF9AC75F12(uLocal_56);
										unk_0x8229311A391A4EC6(iParam0, uLocal_56);
										unk_0x9F77DFFC61FCB68C(&uLocal_56);
										unk_0x2DC5B31EBB810396(iParam0, 1);
										iLocal_338[iLocal_64] = 0;
										iLocal_346[iLocal_64] = 1;
									}
								}
								if (iLocal_346[iLocal_64] == 1)
								{
									if (!unk_0x849DBD2D635C99D5(iParam0, unk_0x507DA4994C3D8EBD(), 45f))
									{
										unk_0xDE75E9DE5B6221E1(iParam0, unk_0x507DA4994C3D8EBD(), 0);
										iLocal_346[iLocal_64] = 0;
									}
								}
							}
							else
							{
								if (iLocal_346[iLocal_64] == 1)
								{
									iLocal_346[iLocal_64] = 0;
								}
								if (iParam0 == iLocal_34[0])
								{
									if (unk_0xE08642374BA21D0D(912.2f, -1542.5f, 29.8f, 3f, 0))
									{
										if (unk_0xEC043AB2FEE0E94F(iLocal_34[0], 1647992574) != 1 && unk_0xEC043AB2FEE0E94F(iLocal_34[0], -1680762137) != 1)
										{
											unk_0xA6D0F8A56436D220(iLocal_34[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
											unk_0x2DC5B31EBB810396(iLocal_34[0], 1);
										}
									}
								}
								if (iParam0 == iLocal_34[1])
								{
									if (unk_0xE08642374BA21D0D(917.4f, -1517.4f, 30f, 3f, 0))
									{
										if (unk_0xEC043AB2FEE0E94F(iLocal_34[1], 1647992574) != 1 && unk_0xEC043AB2FEE0E94F(iLocal_34[1], -1680762137) != 1)
										{
											unk_0xA6D0F8A56436D220(iLocal_34[1], 917.4f, -1517.4f, 30f, 20f, 0);
											unk_0x2DC5B31EBB810396(iLocal_34[1], 1);
										}
									}
								}
								if (iParam0 == iLocal_34[2])
								{
									if (unk_0xE08642374BA21D0D(869.8f, -1541.2f, 29.4f, 3f, 0))
									{
										if (unk_0xEC043AB2FEE0E94F(iLocal_34[2], 1647992574) != 1 && unk_0xEC043AB2FEE0E94F(iLocal_34[2], -1680762137) != 1)
										{
											unk_0xA6D0F8A56436D220(iLocal_34[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
											unk_0x2DC5B31EBB810396(iLocal_34[2], 1);
										}
									}
								}
								if (iParam0 == iLocal_34[3])
								{
									if (unk_0xE08642374BA21D0D(884.2f, -1574.1f, 30f, 3f, 0))
									{
										if (unk_0xEC043AB2FEE0E94F(iLocal_34[3], 1647992574) != 1 && unk_0xEC043AB2FEE0E94F(iLocal_34[3], -1680762137) != 1)
										{
											unk_0xA6D0F8A56436D220(iLocal_34[3], 884.2f, -1574.1f, 30f, 20f, 0);
											unk_0x2DC5B31EBB810396(iLocal_34[3], 1);
										}
									}
								}
								if (iParam0 == iLocal_34[4])
								{
									if (unk_0xE08642374BA21D0D(904f, -1575f, 30f, 3f, 0))
									{
										if (unk_0xEC043AB2FEE0E94F(iLocal_34[4], 1647992574) != 1 && unk_0xEC043AB2FEE0E94F(iLocal_34[4], -1680762137) != 1)
										{
											unk_0xA6D0F8A56436D220(iLocal_34[4], 904f, -1575f, 30f, 20f, 0);
											unk_0x2DC5B31EBB810396(iLocal_34[4], 1);
										}
									}
								}
								if (iParam0 == iLocal_34[5])
								{
									if (unk_0xE08642374BA21D0D(905.9f, -1574.8f, 29.9f, 3f, 0))
									{
										if (unk_0xEC043AB2FEE0E94F(iLocal_34[5], 1647992574) != 1 && unk_0xEC043AB2FEE0E94F(iLocal_34[5], -1680762137) != 1)
										{
											unk_0xA6D0F8A56436D220(iLocal_34[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
											unk_0x2DC5B31EBB810396(iLocal_34[5], 1);
										}
									}
								}
								if (iParam0 == iLocal_34[6])
								{
									if (unk_0xE08642374BA21D0D(889.5f, -1562f, 29.7f, 3f, 0))
									{
										if (unk_0xEC043AB2FEE0E94F(iLocal_34[6], 1647992574) != 1 && unk_0xEC043AB2FEE0E94F(iLocal_34[6], -1680762137) != 1)
										{
											unk_0xA6D0F8A56436D220(iLocal_34[6], 889.5f, -1562f, 29.7f, 20f, 0);
											unk_0x2DC5B31EBB810396(iLocal_34[6], 1);
										}
									}
								}
							}
						}
					}
					else if (iParam0 == iLocal_34[iLocal_64])
					{
						if (func_154(unk_0x507DA4994C3D8EBD(), iParam0, 1) < 20f)
						{
							if (iLocal_346[iLocal_64] == 0)
							{
								if (unk_0x2A71687AF0AE817B(iParam0, unk_0x507DA4994C3D8EBD()) || unk_0xE131581629473E8F(unk_0xAF65E5A58BE87D95(), iParam0))
								{
									if (!unk_0x9226425D9E480D72(iParam0))
									{
										unk_0xCEBD1B99CF343672(iParam0);
									}
									if (unk_0x9226425D9E480D72(iParam0))
									{
										unk_0xAC57FBF981AB03F4(iParam0);
									}
									unk_0xB5DC017AFD430D1B(&uLocal_56);
									unk_0xDE75E9DE5B6221E1(0, unk_0x507DA4994C3D8EBD(), 0);
									unk_0x8E759206778E571F(0, unk_0x507DA4994C3D8EBD(), -1, 1072, 3);
									unk_0x6EE8A5CF9AC75F12(uLocal_56);
									unk_0x8229311A391A4EC6(iParam0, uLocal_56);
									unk_0x9F77DFFC61FCB68C(&uLocal_56);
									unk_0x2DC5B31EBB810396(iParam0, 1);
									iLocal_338[iLocal_64] = 0;
									iLocal_346[iLocal_64] = 1;
								}
							}
							if (iLocal_346[iLocal_64] == 1)
							{
								if (!unk_0x849DBD2D635C99D5(iParam0, unk_0x507DA4994C3D8EBD(), 45f))
								{
									unk_0xDE75E9DE5B6221E1(iParam0, unk_0x507DA4994C3D8EBD(), 0);
									iLocal_346[iLocal_64] = 0;
								}
							}
						}
						else
						{
							if (iLocal_346[iLocal_64] == 1)
							{
								iLocal_346[iLocal_64] = 0;
							}
							if (iParam0 == iLocal_34[0])
							{
								if (unk_0xE08642374BA21D0D(912.2f, -1542.5f, 29.8f, 3f, 0))
								{
									if (unk_0xEC043AB2FEE0E94F(iLocal_34[0], 1647992574) != 1 && unk_0xEC043AB2FEE0E94F(iLocal_34[0], -1680762137) != 1)
									{
										unk_0xA6D0F8A56436D220(iLocal_34[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
										unk_0x2DC5B31EBB810396(iLocal_34[0], 1);
									}
								}
							}
							if (iParam0 == iLocal_34[1])
							{
								if (unk_0xE08642374BA21D0D(917.4f, -1517.4f, 30f, 3f, 0))
								{
									if (unk_0xEC043AB2FEE0E94F(iLocal_34[1], 1647992574) != 1 && unk_0xEC043AB2FEE0E94F(iLocal_34[1], -1680762137) != 1)
									{
										unk_0xA6D0F8A56436D220(iLocal_34[1], 917.4f, -1517.4f, 30f, 20f, 0);
										unk_0x2DC5B31EBB810396(iLocal_34[1], 1);
									}
								}
							}
							if (iParam0 == iLocal_34[2])
							{
								if (unk_0xE08642374BA21D0D(869.8f, -1541.2f, 29.4f, 3f, 0))
								{
									if (unk_0xEC043AB2FEE0E94F(iLocal_34[2], 1647992574) != 1 && unk_0xEC043AB2FEE0E94F(iLocal_34[2], -1680762137) != 1)
									{
										unk_0xA6D0F8A56436D220(iLocal_34[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
										unk_0x2DC5B31EBB810396(iLocal_34[2], 1);
									}
								}
							}
							if (iParam0 == iLocal_34[3])
							{
								if (unk_0xE08642374BA21D0D(884.2f, -1574.1f, 30f, 3f, 0))
								{
									if (unk_0xEC043AB2FEE0E94F(iLocal_34[3], 1647992574) != 1 && unk_0xEC043AB2FEE0E94F(iLocal_34[3], -1680762137) != 1)
									{
										unk_0xA6D0F8A56436D220(iLocal_34[3], 884.2f, -1574.1f, 30f, 20f, 0);
										unk_0x2DC5B31EBB810396(iLocal_34[3], 1);
									}
								}
							}
							if (iParam0 == iLocal_34[4])
							{
								if (unk_0xE08642374BA21D0D(904f, -1575f, 30f, 3f, 0))
								{
									if (unk_0xEC043AB2FEE0E94F(iLocal_34[4], 1647992574) != 1 && unk_0xEC043AB2FEE0E94F(iLocal_34[4], -1680762137) != 1)
									{
										unk_0xA6D0F8A56436D220(iLocal_34[4], 904f, -1575f, 30f, 20f, 0);
										unk_0x2DC5B31EBB810396(iLocal_34[4], 1);
									}
								}
							}
							if (iParam0 == iLocal_34[5])
							{
								if (unk_0xE08642374BA21D0D(905.9f, -1574.8f, 29.9f, 3f, 0))
								{
									if (unk_0xEC043AB2FEE0E94F(iLocal_34[5], 1647992574) != 1 && unk_0xEC043AB2FEE0E94F(iLocal_34[5], -1680762137) != 1)
									{
										unk_0xA6D0F8A56436D220(iLocal_34[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
										unk_0x2DC5B31EBB810396(iLocal_34[5], 1);
									}
								}
							}
							if (iParam0 == iLocal_34[6])
							{
								if (unk_0xE08642374BA21D0D(889.5f, -1562f, 29.7f, 3f, 0))
								{
									if (unk_0xEC043AB2FEE0E94F(iLocal_34[6], 1647992574) != 1 && unk_0xEC043AB2FEE0E94F(iLocal_34[6], -1680762137) != 1)
									{
										unk_0xA6D0F8A56436D220(iLocal_34[6], 889.5f, -1562f, 29.7f, 20f, 0);
										unk_0x2DC5B31EBB810396(iLocal_34[6], 1);
									}
								}
							}
						}
					}
					iLocal_64++;
				}
			}
			break;
		
		case 2:
			if (iLocal_482 == 0)
			{
				iLocal_482 = 1;
			}
			if (iLocal_66 == 0)
			{
				unk_0xCA4EA7D4F6DCCD43(5, iLocal_301, joaat("player"));
				iLocal_66++;
			}
			if (iLocal_66 == 1)
			{
				iLocal_64 = 0;
				while (iLocal_64 <= 6)
				{
					if (iParam0 == iLocal_34[iLocal_64])
					{
						if (func_154(iParam0, unk_0x507DA4994C3D8EBD(), 1) < 15f)
						{
							if (func_154(iParam0, unk_0x507DA4994C3D8EBD(), 1) > 3f)
							{
								if (unk_0xEC043AB2FEE0E94F(iParam0, 242628503) != 0 || unk_0xEC043AB2FEE0E94F(iParam0, 242628503) != 1)
								{
									if (!unk_0x9226425D9E480D72(iParam0))
									{
										unk_0xCEBD1B99CF343672(iParam0);
									}
									if (unk_0x9226425D9E480D72(iParam0))
									{
										unk_0xAC57FBF981AB03F4(iParam0);
									}
									unk_0xB5DC017AFD430D1B(&uLocal_56);
									unk_0xA3C87095904A382C(0, unk_0x507DA4994C3D8EBD(), -1, 1f, 1f, 1073741824, 0);
									unk_0xDE75E9DE5B6221E1(0, unk_0x507DA4994C3D8EBD(), 0);
									unk_0x6EE8A5CF9AC75F12(uLocal_56);
									unk_0x8229311A391A4EC6(iParam0, uLocal_56);
									unk_0x9F77DFFC61FCB68C(&uLocal_56);
									iLocal_338[iLocal_64] = 0;
								}
							}
						}
						else
						{
							if (iParam0 == iLocal_34[0])
							{
								if (unk_0xE08642374BA21D0D(912.2f, -1542.5f, 29.8f, 3f, 0))
								{
									if (unk_0xEC043AB2FEE0E94F(iLocal_34[0], 1647992574) != 1 && unk_0xEC043AB2FEE0E94F(iLocal_34[0], -1680762137) != 1)
									{
										unk_0xA6D0F8A56436D220(iLocal_34[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
										unk_0x2DC5B31EBB810396(iLocal_34[0], 1);
									}
								}
							}
							if (iParam0 == iLocal_34[1])
							{
								if (unk_0xE08642374BA21D0D(917.4f, -1517.4f, 30f, 3f, 0))
								{
									if (unk_0xEC043AB2FEE0E94F(iLocal_34[1], 1647992574) != 1 && unk_0xEC043AB2FEE0E94F(iLocal_34[1], -1680762137) != 1)
									{
										unk_0xA6D0F8A56436D220(iLocal_34[1], 917.4f, -1517.4f, 30f, 20f, 0);
										unk_0x2DC5B31EBB810396(iLocal_34[1], 1);
									}
								}
							}
							if (iParam0 == iLocal_34[2])
							{
								if (unk_0xE08642374BA21D0D(869.8f, -1541.2f, 29.4f, 3f, 0))
								{
									if (unk_0xEC043AB2FEE0E94F(iLocal_34[2], 1647992574) != 1 && unk_0xEC043AB2FEE0E94F(iLocal_34[2], -1680762137) != 1)
									{
										unk_0xA6D0F8A56436D220(iLocal_34[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
										unk_0x2DC5B31EBB810396(iLocal_34[2], 1);
									}
								}
							}
							if (iParam0 == iLocal_34[3])
							{
								if (unk_0xE08642374BA21D0D(884.2f, -1574.1f, 30f, 3f, 0))
								{
									if (unk_0xEC043AB2FEE0E94F(iLocal_34[3], 1647992574) != 1 && unk_0xEC043AB2FEE0E94F(iLocal_34[3], -1680762137) != 1)
									{
										unk_0xA6D0F8A56436D220(iLocal_34[3], 884.2f, -1574.1f, 30f, 20f, 0);
										unk_0x2DC5B31EBB810396(iLocal_34[3], 1);
									}
								}
							}
							if (iParam0 == iLocal_34[4])
							{
								if (unk_0xE08642374BA21D0D(904f, -1575f, 30f, 3f, 0))
								{
									if (unk_0xEC043AB2FEE0E94F(iLocal_34[4], 1647992574) != 1 && unk_0xEC043AB2FEE0E94F(iLocal_34[4], -1680762137) != 1)
									{
										unk_0xA6D0F8A56436D220(iLocal_34[4], 904f, -1575f, 30f, 20f, 0);
										unk_0x2DC5B31EBB810396(iLocal_34[4], 1);
									}
								}
							}
							if (iParam0 == iLocal_34[5])
							{
								if (unk_0xE08642374BA21D0D(905.9f, -1574.8f, 29.9f, 3f, 0))
								{
									if (unk_0xEC043AB2FEE0E94F(iLocal_34[5], 1647992574) != 1 && unk_0xEC043AB2FEE0E94F(iLocal_34[5], -1680762137) != 1)
									{
										unk_0xA6D0F8A56436D220(iLocal_34[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
										unk_0x2DC5B31EBB810396(iLocal_34[5], 1);
									}
								}
							}
							if (iParam0 == iLocal_34[6])
							{
								if (unk_0xE08642374BA21D0D(889.5f, -1562f, 29.7f, 3f, 0))
								{
									if (unk_0xEC043AB2FEE0E94F(iLocal_34[6], 1647992574) != 1 && unk_0xEC043AB2FEE0E94F(iLocal_34[6], -1680762137) != 1)
									{
										unk_0xA6D0F8A56436D220(iLocal_34[6], 889.5f, -1562f, 29.7f, 20f, 0);
										unk_0x2DC5B31EBB810396(iLocal_34[6], 1);
									}
								}
							}
						}
					}
					iLocal_64++;
				}
			}
			break;
		
		case 3:
			if (iLocal_482 == 0)
			{
				iLocal_482 = 1;
			}
			if (iLocal_392 == 0)
			{
				if (iLocal_393 == 0)
				{
					iLocal_78 = unk_0xF976C624234A4AA8();
					iLocal_393 = 1;
				}
				if (iLocal_393 == 1)
				{
					if (unk_0xF976C624234A4AA8() > iLocal_78 + 9000)
					{
						unk_0x53C0659721DC11EC(5);
						unk_0xA54C914AEB391F49(1f);
						unk_0x050E86400BAF39B2(unk_0xAF65E5A58BE87D95(), 2, 0);
						unk_0x4DFE220122919594(unk_0xAF65E5A58BE87D95(), 0);
						iLocal_392 = 1;
					}
				}
			}
			if (iLocal_66 == 0)
			{
				unk_0xCA4EA7D4F6DCCD43(5, iLocal_301, joaat("player"));
				iLocal_66++;
			}
			if (iLocal_66 == 1)
			{
				if (iLocal_27 == 3)
				{
					iLocal_64 = 0;
					while (iLocal_64 <= 6)
					{
						if (iParam0 == iLocal_34[iLocal_64])
						{
							if (func_154(iParam0, unk_0x507DA4994C3D8EBD(), 1) < 100f)
							{
								if (iLocal_354[iLocal_64] == 0)
								{
									unk_0x2DC5B31EBB810396(iParam0, 1);
									iLocal_354[iLocal_64] = 1;
								}
								if (iLocal_362[iLocal_64] == 0)
								{
									if (!unk_0x9226425D9E480D72(iParam0))
									{
										unk_0xCEBD1B99CF343672(iParam0);
									}
									if (unk_0x9226425D9E480D72(iParam0))
									{
										unk_0xAC57FBF981AB03F4(iParam0);
									}
									unk_0xF266F4D5C3D0BAE2(iParam0, 100f, 0);
									iLocal_338[iLocal_64] = 0;
									iLocal_362[iLocal_64] = 1;
								}
							}
						}
						iLocal_64++;
					}
					if (iLocal_467 == 0)
					{
						if (unk_0xFD68187442384158(iLocal_34[0]))
						{
							if (!unk_0x9F94F2CFDCA78C55(iLocal_34[0]))
							{
								if (unk_0xFD68187442384158(iLocal_32))
								{
									if (unk_0xCA8794CE207FC6D5(iLocal_32, 0))
									{
										if (unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), iLocal_32, 1) && unk_0x594EB70937EC1486(iLocal_32, 919.2f, -1554.4f, 30f, 4f, 4f, 4f, 0, 1, 0))
										{
											if (!unk_0x9226425D9E480D72(iLocal_34[0]))
											{
												unk_0xCEBD1B99CF343672(iLocal_34[0]);
											}
											if (unk_0x9226425D9E480D72(iLocal_34[0]))
											{
												unk_0xAC57FBF981AB03F4(iLocal_34[0]);
											}
											unk_0xB5DC017AFD430D1B(&uLocal_56);
											unk_0x3F07E364A21EBC20(0, 917.8f, -1561f, 29f, 3f, -1, 1048576000, 0, 1193033728);
											unk_0xDE75E9DE5B6221E1(0, unk_0x507DA4994C3D8EBD(), 0);
											unk_0xEC0A546609840086(0, "misscarsteal4@director_grip", "mcs_2_loop_grip1", 8f, -8f, -1, 1, 0, 0, 0, 0);
											unk_0x6EE8A5CF9AC75F12(uLocal_56);
											unk_0x8229311A391A4EC6(iLocal_34[0], uLocal_56);
											unk_0x9F77DFFC61FCB68C(&uLocal_56);
											iLocal_467 = 1;
										}
									}
								}
							}
						}
					}
					if (iLocal_467 == 1 && iLocal_486 == 0)
					{
						if (unk_0xFD68187442384158(iLocal_34[0]))
						{
							if (!unk_0x9F94F2CFDCA78C55(iLocal_34[0]))
							{
								if (unk_0x594EB70937EC1486(iLocal_34[0], 917.8f, -1561f, 29f, 2f, 2f, 2f, 0, 1, 0))
								{
									func_115(&uLocal_136, 3, iLocal_34[0], "FHPrepBWorker", 0, 1);
									func_162(iLocal_34[0], "FHPB_BBAA", "FHPrepBWorker", 4);
									iLocal_486 = 1;
								}
							}
						}
					}
					if (iLocal_466 == 0)
					{
						if (unk_0xF976C624234A4AA8() > iLocal_78 + 3000)
						{
							if (unk_0xFD68187442384158(iLocal_34[5]))
							{
								if (!unk_0x9F94F2CFDCA78C55(iLocal_34[5]))
								{
									unk_0xEC0A546609840086(iLocal_34[5], "cellphone@str", "cellphone_call_listen_c", 4f, -8f, -1, 49, 0, 0, 0, 0);
									iLocal_110 = unk_0xF976C624234A4AA8();
									iLocal_466 = 1;
								}
							}
						}
					}
					else if (iLocal_465 == 0)
					{
						if (unk_0xF976C624234A4AA8() > iLocal_110 + 5000)
						{
							if (unk_0xFD68187442384158(iLocal_34[5]))
							{
								if (!unk_0x9F94F2CFDCA78C55(iLocal_34[5]))
								{
									unk_0xAC57FBF981AB03F4(iLocal_34[5]);
									unk_0x247B2966C6C2A4C1(iLocal_34[5], unk_0x507DA4994C3D8EBD(), 0, 16);
									iLocal_465 = 1;
								}
							}
						}
					}
				}
				iLocal_64 = 0;
				while (iLocal_64 <= 6)
				{
					if (iLocal_305[iLocal_64] == 0)
					{
						if (iParam0 == iLocal_34[iLocal_64])
						{
							if (unk_0xFD68187442384158(iParam0))
							{
								if (!unk_0x9F94F2CFDCA78C55(iParam0))
								{
									unk_0x2DC5B31EBB810396(iParam0, 1);
									if (unk_0x2A24448FF232F834(iParam0, 0))
									{
										if (func_154(iParam0, unk_0x507DA4994C3D8EBD(), 1) > 200f)
										{
											if (!unk_0x9226425D9E480D72(iParam0))
											{
												unk_0xCEBD1B99CF343672(iParam0);
											}
											if (unk_0x9226425D9E480D72(iParam0))
											{
												unk_0xAC57FBF981AB03F4(iParam0);
											}
											unk_0xA859D289EEB2D72A(iParam0, unk_0x507DA4994C3D8EBD(), 1000f, -1, 0, 0);
											iLocal_305[iLocal_64] = 1;
										}
									}
									else if (func_154(iParam0, unk_0x507DA4994C3D8EBD(), 1) > 100f)
									{
										if (!unk_0x9226425D9E480D72(iParam0))
										{
											unk_0xCEBD1B99CF343672(iParam0);
										}
										if (unk_0x9226425D9E480D72(iParam0))
										{
											unk_0xAC57FBF981AB03F4(iParam0);
										}
										unk_0xA859D289EEB2D72A(iParam0, unk_0x507DA4994C3D8EBD(), 1000f, -1, 0, 0);
										iLocal_305[iLocal_64] = 1;
									}
								}
							}
						}
					}
					iLocal_64++;
				}
			}
			if (iLocal_27 == 4)
			{
				iLocal_64 = 0;
				while (iLocal_64 <= 6)
				{
					if (iLocal_305[iLocal_64] == 0)
					{
						if (iParam0 == iLocal_34[iLocal_64])
						{
							if (unk_0xFD68187442384158(iParam0))
							{
								if (!unk_0x9F94F2CFDCA78C55(iParam0))
								{
									if (!unk_0x9226425D9E480D72(iParam0))
									{
										unk_0xCEBD1B99CF343672(iParam0);
									}
									if (unk_0x9226425D9E480D72(iParam0))
									{
										unk_0xAC57FBF981AB03F4(iParam0);
									}
									unk_0x2DC5B31EBB810396(iParam0, 1);
									unk_0xA859D289EEB2D72A(iParam0, unk_0x507DA4994C3D8EBD(), 1000f, -1, 0, 0);
									unk_0xA1E4BA3B17C6D931(iParam0, 1);
									unk_0xCA4DD92F1F2931F3(&iParam0);
									iLocal_305[iLocal_64] = 1;
								}
							}
						}
					}
					iLocal_64++;
				}
			}
			break;
		
		case 4:
			if (iLocal_482 == 0)
			{
				iLocal_482 = 1;
			}
			if (iLocal_392 == 0)
			{
				if (iLocal_393 == 0)
				{
					iLocal_78 = unk_0xF976C624234A4AA8();
					iLocal_393 = 1;
				}
				if (iLocal_393 == 1)
				{
					if (unk_0xF976C624234A4AA8() > iLocal_78 + 6000)
					{
						unk_0x53C0659721DC11EC(5);
						unk_0xA54C914AEB391F49(1f);
						unk_0x050E86400BAF39B2(unk_0xAF65E5A58BE87D95(), 2, 0);
						unk_0x4DFE220122919594(unk_0xAF65E5A58BE87D95(), 0);
						iLocal_392 = 1;
					}
				}
			}
			if (iLocal_66 == 0)
			{
				unk_0xCA4EA7D4F6DCCD43(5, iLocal_301, joaat("player"));
				unk_0x2DC5B31EBB810396(iParam0, 1);
				iLocal_66++;
			}
			if (iLocal_66 == 1)
			{
				iLocal_64 = 0;
				while (iLocal_64 <= 6)
				{
					if (unk_0xFD68187442384158(iLocal_34[iLocal_64]))
					{
						if (!unk_0x9F94F2CFDCA78C55(iLocal_34[iLocal_64]))
						{
							if (func_154(unk_0x507DA4994C3D8EBD(), iLocal_34[iLocal_64], 1) < 15f)
							{
								if (func_174(iLocal_34[iLocal_64], 6))
								{
									if (unk_0x2A71687AF0AE817B(iLocal_34[iLocal_64], unk_0x507DA4994C3D8EBD()))
									{
										if (iLocal_378[iLocal_64] == 0)
										{
											if (!unk_0x9226425D9E480D72(iLocal_34[iLocal_64]))
											{
												unk_0xCEBD1B99CF343672(iLocal_34[iLocal_64]);
											}
											if (unk_0x9226425D9E480D72(iLocal_34[iLocal_64]))
											{
												unk_0xAC57FBF981AB03F4(iLocal_34[iLocal_64]);
											}
											unk_0x6A1BC4DBA3899CCB(iLocal_34[iLocal_64], -1, unk_0x507DA4994C3D8EBD(), -1, 0);
											iLocal_378[iLocal_64] = 1;
											iLocal_370[iLocal_64] = 0;
											iLocal_338[iLocal_64] = 0;
											iLocal_90 = unk_0xF976C624234A4AA8();
										}
									}
									else if (unk_0xF976C624234A4AA8() > iLocal_90 + 300)
									{
										iLocal_370[iLocal_64] = 0;
									}
								}
								else if (iLocal_370[iLocal_64] == 0)
								{
									if (!unk_0x9226425D9E480D72(iLocal_34[iLocal_64]))
									{
										unk_0xCEBD1B99CF343672(iLocal_34[iLocal_64]);
									}
									if (unk_0x9226425D9E480D72(iLocal_34[iLocal_64]))
									{
										unk_0xAC57FBF981AB03F4(iLocal_34[iLocal_64]);
									}
									unk_0xA859D289EEB2D72A(iLocal_34[iLocal_64], unk_0x507DA4994C3D8EBD(), 250f, -1, 0, 0);
									iLocal_370[iLocal_64] = 1;
									iLocal_378[iLocal_64] = 0;
								}
							}
							else if (iLocal_370[iLocal_64] == 0)
							{
								if (!unk_0x9226425D9E480D72(iLocal_34[iLocal_64]))
								{
									unk_0xCEBD1B99CF343672(iLocal_34[iLocal_64]);
								}
								if (unk_0x9226425D9E480D72(iLocal_34[iLocal_64]))
								{
									unk_0xAC57FBF981AB03F4(iLocal_34[iLocal_64]);
								}
								unk_0xA859D289EEB2D72A(iLocal_34[iLocal_64], unk_0x507DA4994C3D8EBD(), 250f, -1, 0, 0);
								iLocal_370[iLocal_64] = 1;
								iLocal_378[iLocal_64] = 0;
							}
						}
					}
					iLocal_64++;
				}
			}
			break;
	}
}

int func_174(int iParam0, int iParam1)
{
	if (unk_0xFD68187442384158(iParam0) && !unk_0x9F94F2CFDCA78C55(iParam0))
	{
		if (unk_0x73741D3DABB81B29(unk_0x507DA4994C3D8EBD(), iParam1))
		{
			if (unk_0xB89DCD342FB7AC95(unk_0xAF65E5A58BE87D95(), iParam0) || unk_0x8DEF14B60C4A9D01(unk_0xAF65E5A58BE87D95(), iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_175()
{
	iLocal_45 = func_25(0);
	iLocal_46 = func_25(1);
	iLocal_47 = func_25(2);
	if (func_33(iLocal_45, 0))
	{
		if (!unk_0x9F94F2CFDCA78C55(iLocal_45))
		{
			if (!func_32(iLocal_45))
			{
				if (!func_177())
				{
					if (func_176(iLocal_45))
					{
						if (func_31(iLocal_45, 0))
						{
							unk_0xBAE5DF507EEC53C8(iLocal_45, 1, 1);
							unk_0x2DC5B31EBB810396(iLocal_45, 1);
							unk_0xAC57FBF981AB03F4(iLocal_45);
							iLocal_472 = 0;
							iLocal_475 = 0;
							iLocal_478 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_472 == 0)
				{
					if (!unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
					{
						iLocal_472 = 1;
					}
					else if (unk_0x2A24448FF232F834(iLocal_45, 0))
					{
						if (!unk_0x53170344050F2301(iLocal_45, unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0), 0))
						{
							iLocal_472 = 1;
						}
					}
				}
				if (iLocal_472 == 0)
				{
					if (func_177())
					{
						iLocal_472 = 1;
					}
				}
				if (iLocal_469 == 1)
				{
					if ((func_176(iLocal_45) && unk_0x51BC2FF711F8CF71(iLocal_45, 1)) && iLocal_472 == 0)
					{
						Local_121 = { unk_0xBF1B13057E5119A4(iLocal_45, 1) };
						unk_0x32BB0750E9174D6C(Local_121.f_0, Local_121.f_1, Local_115.f_0, Local_115.f_1);
						if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) == 0)
						{
							if (iLocal_475 == 0)
							{
								if (unk_0x65AB4C5AAF640EB0(Local_121.f_0, Local_121.f_1, Local_115.f_0, Local_115.f_1))
								{
									unk_0xFF2E41BCADB4BDD3(iLocal_45, unk_0x78AB10B64129B3D5(iLocal_45, 0), Local_115, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_478 = 0;
									iLocal_475 = 1;
								}
							}
						}
						else if (unk_0xFD68187442384158(unk_0x9A67DC5FE3A03F32(Local_121, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_478 == 0)
							{
								unk_0xD09813BDAA102212(iLocal_45, unk_0x78AB10B64129B3D5(iLocal_45, 0), unk_0x9A67DC5FE3A03F32(Local_121, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, 1);
								iLocal_475 = 0;
								iLocal_478 = 1;
							}
						}
						else if (iLocal_475 == 0)
						{
							if (unk_0x65AB4C5AAF640EB0(Local_121.f_0, Local_121.f_1, Local_115.f_0, Local_115.f_1))
							{
								unk_0xFF2E41BCADB4BDD3(iLocal_45, unk_0x78AB10B64129B3D5(iLocal_45, 0), Local_115, 4, 30f, 786468, 3f, 15f, 0);
								iLocal_478 = 0;
								iLocal_475 = 1;
							}
						}
					}
					else
					{
						iLocal_472 = 1;
					}
				}
				if (iLocal_472 == 1)
				{
					if (func_24(iLocal_45))
					{
						iLocal_472 = 0;
					}
				}
			}
		}
	}
	if (func_33(iLocal_47, 0))
	{
		if (!unk_0x9F94F2CFDCA78C55(iLocal_47))
		{
			if (!func_32(iLocal_47))
			{
				if (!func_177())
				{
					if (func_176(iLocal_47))
					{
						if (func_31(iLocal_47, 0))
						{
							unk_0xBAE5DF507EEC53C8(iLocal_47, 1, 1);
							unk_0x2DC5B31EBB810396(iLocal_47, 1);
							unk_0xAC57FBF981AB03F4(iLocal_47);
							iLocal_474 = 0;
							iLocal_476 = 0;
							iLocal_479 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_474 == 0)
				{
					if (!unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
					{
						iLocal_474 = 1;
					}
					else if (unk_0x2A24448FF232F834(iLocal_47, 0))
					{
						if (!unk_0x53170344050F2301(iLocal_47, unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0), 0))
						{
							iLocal_474 = 1;
						}
					}
				}
				if (iLocal_474 == 0)
				{
					if (func_177())
					{
						iLocal_474 = 1;
					}
				}
				if (iLocal_470 == 1)
				{
					if ((func_176(iLocal_47) && unk_0x51BC2FF711F8CF71(iLocal_47, 1)) && iLocal_474 == 0)
					{
						Local_121 = { unk_0xBF1B13057E5119A4(iLocal_47, 1) };
						unk_0x32BB0750E9174D6C(Local_121.f_0, Local_121.f_1, Local_115.f_0, Local_115.f_1);
						if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) == 0)
						{
							if (iLocal_476 == 0)
							{
								if (unk_0x65AB4C5AAF640EB0(Local_121.f_0, Local_121.f_1, Local_115.f_0, Local_115.f_1))
								{
									unk_0xFF2E41BCADB4BDD3(iLocal_47, unk_0x78AB10B64129B3D5(iLocal_47, 0), Local_115, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_479 = 0;
									iLocal_476 = 1;
								}
							}
						}
						else if (unk_0xFD68187442384158(unk_0x9A67DC5FE3A03F32(Local_121, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_479 == 0)
							{
								unk_0xD09813BDAA102212(iLocal_47, unk_0x78AB10B64129B3D5(iLocal_47, 0), unk_0x9A67DC5FE3A03F32(Local_121, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, 1);
								iLocal_476 = 0;
								iLocal_479 = 1;
							}
						}
						else if (iLocal_476 == 0)
						{
							if (unk_0x65AB4C5AAF640EB0(Local_121.f_0, Local_121.f_1, Local_115.f_0, Local_115.f_1))
							{
								unk_0xFF2E41BCADB4BDD3(iLocal_47, unk_0x78AB10B64129B3D5(iLocal_47, 0), Local_115, 4, 30f, 786468, 3f, 15f, 0);
								iLocal_479 = 0;
								iLocal_476 = 1;
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
	if (func_33(iLocal_46, 0))
	{
		if (!unk_0x9F94F2CFDCA78C55(iLocal_46))
		{
			if (!func_32(iLocal_46))
			{
				if (!func_177())
				{
					if (func_176(iLocal_46))
					{
						if (func_31(iLocal_46, 0))
						{
							unk_0xBAE5DF507EEC53C8(iLocal_46, 1, 1);
							unk_0x2DC5B31EBB810396(iLocal_46, 1);
							unk_0xAC57FBF981AB03F4(iLocal_46);
							iLocal_473 = 0;
							iLocal_477 = 0;
							iLocal_480 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_473 == 0)
				{
					if (!unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
					{
						iLocal_473 = 1;
					}
					else if (unk_0x2A24448FF232F834(iLocal_46, 0))
					{
						if (!unk_0x53170344050F2301(iLocal_46, unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0), 0))
						{
							iLocal_473 = 1;
						}
					}
				}
				if (iLocal_473 == 0)
				{
					if (func_177())
					{
						iLocal_473 = 1;
					}
				}
				if (iLocal_471 == 1)
				{
					if ((func_176(iLocal_46) && unk_0x51BC2FF711F8CF71(iLocal_46, 1)) && iLocal_473 == 0)
					{
						Local_121 = { unk_0xBF1B13057E5119A4(iLocal_46, 1) };
						unk_0x32BB0750E9174D6C(Local_121.f_0, Local_121.f_1, Local_115.f_0, Local_115.f_1);
						if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) == 0)
						{
							if (iLocal_477 == 0)
							{
								if (unk_0x65AB4C5AAF640EB0(Local_121.f_0, Local_121.f_1, Local_115.f_0, Local_115.f_1))
								{
									unk_0xFF2E41BCADB4BDD3(iLocal_46, unk_0x78AB10B64129B3D5(iLocal_46, 0), Local_115, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_480 = 0;
									iLocal_477 = 1;
								}
							}
						}
						else if (unk_0xFD68187442384158(unk_0x9A67DC5FE3A03F32(Local_121, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_480 == 0)
							{
								unk_0xD09813BDAA102212(iLocal_46, unk_0x78AB10B64129B3D5(iLocal_46, 0), unk_0x9A67DC5FE3A03F32(Local_121, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, 1);
								iLocal_477 = 0;
								iLocal_480 = 1;
							}
						}
						else if (iLocal_477 == 0)
						{
							if (unk_0x65AB4C5AAF640EB0(Local_121.f_0, Local_121.f_1, Local_115.f_0, Local_115.f_1))
							{
								unk_0xFF2E41BCADB4BDD3(iLocal_46, unk_0x78AB10B64129B3D5(iLocal_46, 0), Local_115, 4, 30f, 786468, 3f, 15f, 0);
								iLocal_480 = 0;
								iLocal_477 = 1;
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
}

int func_176(int iParam0)
{
	if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()) && unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		if (!unk_0x9F94F2CFDCA78C55(iParam0))
		{
			if (unk_0x53170344050F2301(iParam0, unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0), 0) && unk_0xE634CB9EE7094537(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0), -1) == iParam0)
			{
				if (unk_0xFD68187442384158(iLocal_32))
				{
					if (unk_0xCA8794CE207FC6D5(iLocal_32, 0))
					{
						if ((unk_0x53170344050F2301(iParam0, iLocal_32, 0) && unk_0xE634CB9EE7094537(iLocal_32, -1) == iParam0) && !unk_0x594EB70937EC1486(iLocal_32, Local_115, 3f, 3f, 3f, 0, 1, 0))
						{
							if (iParam0 == iLocal_45)
							{
								iLocal_469 = 1;
							}
							if (iParam0 == iLocal_47)
							{
								iLocal_470 = 1;
							}
							if (iParam0 == iLocal_46)
							{
								iLocal_471 = 1;
							}
							return 1;
						}
					}
				}
			}
		}
	}
	if (iParam0 == iLocal_45)
	{
		iLocal_469 = 0;
	}
	if (iParam0 == iLocal_47)
	{
		iLocal_470 = 0;
	}
	if (iParam0 == iLocal_46)
	{
		iLocal_471 = 0;
	}
	return 0;
}

bool func_177()
{
	return Global_17096;
}

void func_178()
{
	if (unk_0xFD68187442384158(iLocal_32))
	{
		if (!unk_0xCA8794CE207FC6D5(iLocal_32, 0))
		{
			func_181(3);
			return;
		}
		else
		{
			if (func_180(&iLocal_32))
			{
				func_181(2);
				return;
			}
			if (unk_0xFD68187442384158(iLocal_31))
			{
				if (!unk_0xCA8794CE207FC6D5(iLocal_31, 0))
				{
					func_181(1);
					return;
				}
				if (unk_0xCA8794CE207FC6D5(iLocal_31, 0))
				{
					if (!unk_0xA04CA7D6710299C3(iLocal_32))
					{
						if ((unk_0xFE5C9C2629E1907A(iLocal_31) || func_179(iLocal_31)) || func_180(&iLocal_31))
						{
							func_181(1);
							return;
						}
					}
				}
			}
		}
	}
	if (iLocal_27 == 3 || iLocal_27 == 4)
	{
		if (unk_0xFD68187442384158(iLocal_31))
		{
			if (unk_0xCA8794CE207FC6D5(iLocal_31, 0))
			{
				if (func_154(iLocal_31, unk_0x507DA4994C3D8EBD(), 1) > 600f)
				{
					func_181(5);
					return;
				}
			}
		}
	}
	if (unk_0xFD68187442384158(iLocal_48))
	{
		if (unk_0x9F94F2CFDCA78C55(iLocal_48))
		{
			func_181(6);
			return;
		}
	}
}

int func_179(int iParam0)
{
	if (unk_0xFD68187442384158(uParam0))
	{
		if (unk_0xE5D56342B0FF1D0D(iParam0))
		{
			return 1;
		}
		else if (!unk_0xCA8794CE207FC6D5(iParam0, 0))
		{
			if (!unk_0xEF57771119A32DB2(iParam0))
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

int func_180(var uParam0)
{
	if (unk_0xCA8794CE207FC6D5(*uParam0, 0))
	{
		if (((unk_0xD803509E70F20530(*uParam0, 0, 7000) || unk_0xD803509E70F20530(*uParam0, 3, 30000)) || unk_0xD803509E70F20530(*uParam0, 2, 30000)) || unk_0xD803509E70F20530(*uParam0, 1, 40000))
		{
			return 1;
		}
	}
	return 0;
}

void func_181(int iParam0)
{
	iLocal_29 = iParam0;
	if (iLocal_27 != 6)
	{
		iLocal_27 = 6;
		iLocal_61 = 0;
	}
}

void func_182(int iParam0, int iParam1)
{
	if (iParam0 == 141 || iParam0 == -1)
	{
		return;
	}
	if (Global_97173.f_7311.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_97173.f_7311.f_99.f_58[iParam0] = iParam1;
}

void func_183()
{
	if (iLocal_27 == 5)
	{
		if (iLocal_482 == 0)
		{
			func_184(657);
		}
	}
}

void func_184(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	Global_54573 = 0;
	if (!Global_54797[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_66667)
	{
		if (Global_66668[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_66668[iVar1 /*9*/].f_1 = 1;
			Global_66668[iVar1 /*9*/].f_2 = 0f;
			if (Global_66668[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

bool func_185(bool bParam0)
{
	if (!bParam0 && unk_0x25531002BCF0D968(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x61D8FEAF64881CDA(Global_68315, 0);
}

void func_186()
{
	unk_0x85561C2D9ACBDF0D(unk_0xAF65E5A58BE87D95(), 0);
	unk_0x941F924D5E9C2140(joaat("packer"), 0);
	unk_0x941F924D5E9C2140(joaat("phantom"), 0);
	unk_0x12B3DEDD1DB99EFA("FHPRB_START");
	unk_0x12B3DEDD1DB99EFA("FHPRB_TRUCK");
	unk_0x12B3DEDD1DB99EFA("FHPRB_COPS");
	unk_0x12B3DEDD1DB99EFA("FHPRB_LOST");
	unk_0x12B3DEDD1DB99EFA("FHPRB_STOP");
	unk_0x1D6153ECFEB26B2A(uLocal_50, 0);
	unk_0x1D6153ECFEB26B2A(uLocal_51, 0);
	unk_0x1D6153ECFEB26B2A(uLocal_52, 0);
	unk_0x1D6153ECFEB26B2A(uLocal_53, 0);
	unk_0x1D6153ECFEB26B2A(uLocal_54, 0);
	unk_0x1D6153ECFEB26B2A(uLocal_55, 0);
	if (unk_0xD9CD5BC005208DE9("SCRAP_SECURITY"))
	{
		if (unk_0x0D607451E86AE237("SCRAP_SECURITY"))
		{
			unk_0x05430610676C3EDD("SCRAP_SECURITY", 0);
		}
	}
	unk_0x53C0659721DC11EC(5);
	if (unk_0x0494E5E4C0E87278(iLocal_113))
	{
		unk_0xC0693A4E5A09EA40(iLocal_113);
	}
	if (unk_0x0494E5E4C0E87278(iLocal_114))
	{
		unk_0xC0693A4E5A09EA40(iLocal_114);
	}
	unk_0x883793591E631A3B();
}

void func_187()
{
	int iVar0;
	
	if (unk_0x4C903C3B660A5023("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1424);
	}
	if (Global_97173.f_7311 || func_185(0))
	{
		if (!func_188())
		{
			iVar0 = func_13();
			if (iVar0 != -1)
			{
				if (!func_7(iVar0))
				{
					return;
				}
				unk_0x3DBE2A7AF9E71C82(&(Global_80941[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_12();
		}
	}
}

int func_188()
{
	if (((Global_89784 == 13 || Global_89784 == 10) || Global_89784 == 11) || Global_89784 == 12)
	{
		return 0;
	}
	return 1;
}

