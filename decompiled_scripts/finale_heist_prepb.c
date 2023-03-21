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
	if (unk_0x76BF814AB8D4CAB8(3))
	{
		unk_0x9BEA833CAF67289C("FHPRB_STOP");
		func_203();
		func_202();
	}
	if (func_201(0))
	{
		unk_0x8E058779F430F4D7("FINPRB", 0);
	}
	unk_0x48E76A4B7B58B77A("WorkerPedMainGroup", &iLocal_302);
	unk_0x48E76A4B7B58B77A("GuardMainGroup", &iLocal_303);
	unk_0x116D235ABEF5CE46(joaat("packer"), 1);
	unk_0xFB5F4D76105A21B5(5, iLocal_303, joaat("player"));
	unk_0xFB5F4D76105A21B5(5, iLocal_302, joaat("player"));
	unk_0xFB5F4D76105A21B5(1, iLocal_303, iLocal_302);
	unk_0xFB5F4D76105A21B5(1, iLocal_302, iLocal_303);
	unk_0xFB5F4D76105A21B5(1, iLocal_303, joaat("COP"));
	unk_0xFB5F4D76105A21B5(1, joaat("COP"), iLocal_303);
	unk_0xFB5F4D76105A21B5(1, iLocal_302, joaat("COP"));
	unk_0xFB5F4D76105A21B5(1, joaat("COP"), iLocal_302);
	while (true)
	{
		unk_0x89FD0BC32FAB9F88("M_FINPRB", 0);
		if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
		{
			unk_0x764AFC5A3A16C2B0(unk_0x18F7BE9ACB7D08F4(), 230, 0);
		}
		func_199();
		if (iLocal_317 == 0)
		{
			if (unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) > 0)
			{
				func_198(27, 1);
				iLocal_317 = 1;
			}
		}
		if (iLocal_396 == 1)
		{
			func_194();
		}
		func_191();
		func_184();
		func_176();
		func_171();
		func_168();
		switch (iLocal_28)
		{
			case 0:
				func_167();
				break;
			
			case 1:
				func_164();
				break;
			
			case 2:
				func_140();
				break;
			
			case 3:
				func_138();
				break;
			
			case 4:
				func_114();
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
			unk_0x08FC50794202A47C();
			unk_0xEFF1F12403847394(1);
			unk_0x9BEA833CAF67289C("FHPRA_FAIL");
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
				func_202();
			}
			break;
	}
}

int func_2()
{
	if (Global_92829 == 7)
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
	if (Global_92829 == 7 || Global_92829 == 8)
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
	if (!unk_0xFAFFA408239A026B(sParam0))
	{
		if (unk_0xD0437E6CE31A3AC9(sParam0) <= 16)
		{
			StringCopy(&Global_71084, sParam0, 16);
			StringCopy(&Global_71088, "", 16);
			if (unk_0xA7255C604D37FB1D())
			{
				unk_0x0AA13E237790EE7C();
			}
		}
	}
}

void func_6(int iParam0)
{
	int iVar0;
	
	if (Global_104551.f_9055 || func_201(0))
	{
		iVar0 = func_13();
		if (!func_7(iVar0))
		{
			return;
		}
		unk_0xD2A9C3F486236CC5(&(Global_83726[iVar0 /*5*/].f_1), 5);
		Global_92865 = iParam0;
	}
}

int func_7(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_12();
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		unk_0x9B5795DB2523F9E4(5000);
	}
	iVar0 = Global_83726[iParam0 /*5*/];
	iVar1 = Global_71121.f_109[iVar0 /*4*/];
	func_11(iVar1, 1);
	unk_0x4C07032A7F363326(unk_0x8CFC7D6E1DA5D304());
	unk_0xD3DA12823F23AEE1(unk_0x8CFC7D6E1DA5D304());
	func_8(&(Global_104551.f_2353.f_539), iVar1);
	if (Global_87149 == Global_92866)
	{
		Global_104551.f_9055.f_330[iVar1 /*6*/].f_1++;
	}
	if (!unk_0xB03A1684359C50A1(Global_83762[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
		{
			unk_0x3388DD13675FEE27(0);
		}
	}
	Global_104551.f_9055.f_330[iVar1 /*6*/].f_2++;
	Global_87149 = Global_92866;
	if (iParam0 == -1)
	{
		if (Global_104551.f_9055)
		{
		}
		return 0;
	}
	if (unk_0xB03A1684359C50A1(Global_83726[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0xB03A1684359C50A1(Global_83726[iParam0 /*5*/].f_1, 5))
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
		iVar1 = Global_104551.f_18503[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0xB03A1684359C50A1(Global_104551.f_9055.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_10(Global_104551.f_18503[iVar0], &Var2, &fVar5))
			{
				Global_104551.f_18503[iVar0] = 318;
				func_9(&(uParam0->f_2276[iVar0]));
				uParam0->f_2280[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2290[iVar0] = 0f;
				uParam0->f_2294[iVar0] = 0;
				uParam0->f_2298[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2308[iVar0] = 0;
				Global_90364[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_90364[iVar0 /*29*/].f_9 = 0f;
				Global_90364[iVar0 /*29*/].f_12 = 0f;
				Global_90364[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_90364[iVar0 /*29*/].f_10 = 0f;
				Global_90364[iVar0 /*29*/].f_13 = 0f;
				Global_90364[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_90364[iVar0 /*29*/].f_11 = 0f;
				Global_90364[iVar0 /*29*/].f_14 = 0f;
				Global_90364[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_90364[iVar0 /*29*/].f_26 = 0f;
				Global_90364[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_90364[iVar0 /*29*/].f_27 = 0f;
				Global_90364[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_90364[iVar0 /*29*/].f_28 = 0f;
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
			Global_86959[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_86959[iParam0 /*2*/] = 0;
	}
}

void func_12()
{
	Global_92864 = 1;
	if (unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1))
	{
		if (unk_0xFAFFA408239A026B(&Global_71084))
		{
			switch (func_14())
			{
				case 0:
					StringCopy(&Global_71084, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_71084, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_71084, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_71088, "", 16);
		}
		Global_92864 = 0;
	}
	else if (!unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		if (unk_0xFAFFA408239A026B(&Global_71084))
		{
			switch (func_14())
			{
				case 0:
					StringCopy(&Global_71084, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_71084, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_71084, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_71088, "", 16);
		}
		Global_92864 = 0;
		unk_0xD2A9C3F486236CC5(&(Global_92829.f_20), 25);
	}
}

int func_13()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0xB03A1684359C50A1(Global_83726[iVar0 /*5*/].f_1, 2))
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
	return Global_104551.f_2353.f_539.f_4301;
}

void func_15()
{
	int iVar0;
	
	if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
	{
		if (func_19(Global_104551.f_2353.f_539.f_4301) != unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()))
		{
			iVar0 = func_18(unk_0x18F7BE9ACB7D08F4());
			if (func_17(iVar0) && (!func_16(14) || Global_103502))
			{
				if (Global_104551.f_2353.f_539.f_4301 != iVar0 && func_17(Global_104551.f_2353.f_539.f_4301))
				{
					Global_104551.f_2353.f_539.f_4302 = Global_104551.f_2353.f_539.f_4301;
				}
				Global_104551.f_2353.f_539.f_4303 = iVar0;
				Global_104551.f_2353.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104551.f_2353.f_539.f_4301 != 145)
			{
				Global_104551.f_2353.f_539.f_4303 = Global_104551.f_2353.f_539.f_4301;
			}
			return;
		}
	}
	Global_104551.f_2353.f_539.f_4301 = 145;
}

bool func_16(int iParam0)
{
	return Global_35859 == iParam0;
}

bool func_17(int iParam0)
{
	return iParam0 < 3;
}

int func_18(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x31F12808DC47A9E5(iParam0))
	{
		iVar1 = unk_0x4F69FBD64CDF125B(iParam0);
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
		return Global_104551.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_20()
{
	func_168();
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
		unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 0, 0);
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
		if (unk_0xEC0ECEF2AF3FDA8D())
		{
			if (!func_30())
			{
				unk_0xFDDA52BDEC2D820F(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1));
			}
			func_27(iLocal_33, -1, 1);
		}
		if (!unk_0xC8AB6A5E6C1E6613())
		{
			unk_0x8359CF51370FC969(800);
		}
		iLocal_396 = 1;
		iLocal_62 = 1;
	}
	if (iLocal_62 == 1)
	{
		if (unk_0x31F12808DC47A9E5(iLocal_33))
		{
			if (unk_0xC4B84EB67F78C1F0(iLocal_33, 0))
			{
				if (func_14() == 0)
				{
					if (func_33(iLocal_48, 0))
					{
						if (unk_0x88B79D32B518C327(iLocal_48, iLocal_33, 0))
						{
							unk_0x267F7A2DFDFFB077(iLocal_48);
							unk_0x95B1A64E8455A478(iLocal_48);
							unk_0x40E2910BAF39B1C7(iLocal_48, 1);
							unk_0xD7A975DB04C06BA4(iLocal_48, iLocal_33, 0);
						}
					}
					if (func_33(iLocal_47, 0))
					{
						if (unk_0x88B79D32B518C327(iLocal_47, iLocal_33, 0))
						{
							unk_0x267F7A2DFDFFB077(iLocal_47);
							unk_0x95B1A64E8455A478(iLocal_47);
							unk_0x40E2910BAF39B1C7(iLocal_47, 1);
							unk_0xD7A975DB04C06BA4(iLocal_47, iLocal_33, 0);
						}
					}
				}
				if (func_14() == 2)
				{
					if (func_33(iLocal_46, 0))
					{
						if (unk_0x88B79D32B518C327(iLocal_46, iLocal_33, 0))
						{
							unk_0x267F7A2DFDFFB077(iLocal_46);
							unk_0x95B1A64E8455A478(iLocal_46);
							unk_0x40E2910BAF39B1C7(iLocal_46, 1);
							unk_0xD7A975DB04C06BA4(iLocal_46, iLocal_33, 0);
						}
					}
					if (func_33(iLocal_47, 0))
					{
						if (unk_0x88B79D32B518C327(iLocal_47, iLocal_33, 0))
						{
							unk_0x267F7A2DFDFFB077(iLocal_47);
							unk_0x95B1A64E8455A478(iLocal_47);
							unk_0x40E2910BAF39B1C7(iLocal_47, 1);
							unk_0xD7A975DB04C06BA4(iLocal_47, iLocal_33, 0);
						}
					}
				}
				if (func_14() == 1)
				{
					if (func_33(iLocal_46, 0))
					{
						if (unk_0x88B79D32B518C327(iLocal_46, iLocal_33, 0))
						{
							unk_0x267F7A2DFDFFB077(iLocal_46);
							unk_0x95B1A64E8455A478(iLocal_46);
							unk_0x40E2910BAF39B1C7(iLocal_46, 1);
							unk_0xD7A975DB04C06BA4(iLocal_46, iLocal_33, 0);
						}
					}
					if (func_33(iLocal_48, 0))
					{
						if (unk_0x88B79D32B518C327(iLocal_48, iLocal_33, 0))
						{
							unk_0x267F7A2DFDFFB077(iLocal_48);
							unk_0x95B1A64E8455A478(iLocal_48);
							unk_0x40E2910BAF39B1C7(iLocal_48, 1);
							unk_0xD7A975DB04C06BA4(iLocal_48, iLocal_33, 0);
						}
					}
				}
				if (unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iLocal_33, 0))
				{
					unk_0xD7A975DB04C06BA4(unk_0x18F7BE9ACB7D08F4(), iLocal_33, 0);
				}
			}
		}
		unk_0x5AE11BC36633DE4E(0);
		iLocal_62 = 2;
	}
	if (iLocal_62 == 2)
	{
		if (unk_0x31F12808DC47A9E5(iLocal_33))
		{
			if (unk_0xC4B84EB67F78C1F0(iLocal_33, 0))
			{
				if (iLocal_320 == 0)
				{
					if (func_14() == 0)
					{
						if (func_33(iLocal_48, 0))
						{
							if (!unk_0x88B79D32B518C327(iLocal_48, iLocal_33, 0))
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
							if (!unk_0x88B79D32B518C327(iLocal_47, iLocal_33, 0))
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
							if (!unk_0x88B79D32B518C327(iLocal_46, iLocal_33, 0))
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
							if (!unk_0x88B79D32B518C327(iLocal_47, iLocal_33, 0))
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
							if (!unk_0x88B79D32B518C327(iLocal_46, iLocal_33, 0))
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
							if (!unk_0x88B79D32B518C327(iLocal_48, iLocal_33, 0))
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
				else if (!unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iLocal_33, 1))
				{
					unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 1, 0);
					unk_0x5AE11BC36633DE4E(0);
					iLocal_62 = 3;
				}
			}
		}
	}
	if (iLocal_62 == 3)
	{
		if (unk_0x31F12808DC47A9E5(iLocal_33))
		{
			if (unk_0xC4B84EB67F78C1F0(iLocal_33, 0))
			{
				unk_0x16255149C63FBEEC(iLocal_33, 0);
				unk_0xA2B45B1D3EE42178(iLocal_33, 2);
				unk_0x73D7E57BF0ED7FEB(iLocal_33, 1);
			}
		}
		if (unk_0x31F12808DC47A9E5(iLocal_32))
		{
			if (unk_0xC4B84EB67F78C1F0(iLocal_32, 0))
			{
				unk_0x73D7E57BF0ED7FEB(iLocal_32, 1);
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
	func_202();
}

void func_22(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_55903)
	{
		Global_55903 = iParam1;
	}
	if (bParam0)
	{
		if ((func_201(0) && Global_71098.f_1 == 1) && func_23(Global_71098))
		{
		}
		else
		{
			Global_55901 = 1;
		}
	}
	if (Global_104551.f_9055 || func_201(0))
	{
		iVar0 = func_13();
		iVar1 = Global_83726[iVar0 /*5*/];
		uVar2 = Global_71121.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_104551.f_9055)
			{
			}
			return;
		}
		if (unk_0xB03A1684359C50A1(Global_83726[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0xB03A1684359C50A1(Global_83726[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0xD2A9C3F486236CC5(&(Global_83726[iVar0 /*5*/].f_1), 4);
		unk_0xD2A9C3F486236CC5(&Global_71100, 1);
		Global_71116 = uVar2;
		Global_71117 = unk_0x5AFB8ED811F05E4D();
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
	if (!unk_0x0FAE113CE72ED842(iParam0))
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
		if (!unk_0xB03A1684359C50A1(Global_88828, iVar0))
		{
			return 0;
		}
		unk_0x62148293B793073B(&Global_88828, iVar0);
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
		return unk_0x18F7BE9ACB7D08F4();
	}
	return Global_90452[func_26(iParam0)];
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
		while (Global_92824 != 6)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xDF94C6DB72E69D64(0);
		if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
		{
			if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
			{
				unk_0x052A14525D6B2CEB(unk_0x18F7BE9ACB7D08F4());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0x31F12808DC47A9E5(iParam0))
				{
					if (unk_0xC4B84EB67F78C1F0(iParam0, 0))
					{
						if (!unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iParam0, 0))
						{
							unk_0x8D77EFA08616AD64(unk_0x18F7BE9ACB7D08F4(), iParam0, iParam1);
							unk_0x4CCECEB2EA5D6A82(0f, 1065353216);
							unk_0xA3F41A1968319181(0f);
							unk_0x4EDE34FBADD967A6(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
			{
				unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 1, 0);
			}
		}
		unk_0x67795DDFE2BBA4DC();
		func_28(0);
	}
}

void func_28(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xD2A9C3F486236CC5(&(Global_92829.f_20), 13);
	}
	else
	{
		unk_0x62148293B793073B(&(Global_92829.f_20), 13);
	}
}

int func_29()
{
	if (Global_92829 == 10 || Global_92829 == 9)
	{
		return 1;
	}
	return 0;
}

bool func_30()
{
	return unk_0xB03A1684359C50A1(Global_92829.f_20, 13);
}

int func_31(int iParam0, int iParam1)
{
	int iVar0;
	
	return 0;
	if (!unk_0x0FAE113CE72ED842(iParam0))
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
		if (unk_0xB03A1684359C50A1(Global_88828, iVar0))
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0x18F7BE9ACB7D08F4())
			{
				return 0;
			}
		}
		if (unk_0xB03A1684359C50A1(Global_88827, iVar0))
		{
			unk_0xD40396189960FC45(iParam0, 0, 0);
			unk_0x503DF1366BC3493D(iParam0, 0, 1);
			unk_0xD2A9C3F486236CC5(&Global_88828, iVar0);
			return 1;
		}
	}
	return 0;
}

int func_32(int iParam0)
{
	int iVar0;
	
	return 0;
	if (!unk_0x0FAE113CE72ED842(iParam0))
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
		if (unk_0xB03A1684359C50A1(Global_88828, iVar0))
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
	if (!unk_0x0FAE113CE72ED842(iParam0))
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
			if (iParam0 == unk_0x18F7BE9ACB7D08F4())
			{
				return 0;
			}
		}
		if (unk_0xB03A1684359C50A1(Global_88827, iVar0))
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
	unk_0x7A7F48A495EAC394(unk_0x8CFC7D6E1DA5D304(), 0, 0);
	unk_0xE223A1A4864F355C(unk_0x8CFC7D6E1DA5D304(), 0);
	if (!unk_0xEC0ECEF2AF3FDA8D())
	{
		unk_0xFF91FEC6E57575E4(0);
	}
	func_112();
	unk_0x08FC50794202A47C();
	func_111();
	func_110();
	func_36();
	if (!func_30())
	{
		func_35();
	}
	unk_0xA3F41A1968319181(0f);
}

void func_35()
{
	switch (iLocal_28)
	{
		case 2:
			unk_0x990FFD4FB6ADD630(unk_0x18F7BE9ACB7D08F4(), 856.9501f, -1573.177f, 29.4751f, 1, 0, 0, 1);
			unk_0xB88121FF8A34A66F(unk_0x18F7BE9ACB7D08F4(), 288.3586f);
			break;
		
		case 3:
			unk_0x990FFD4FB6ADD630(unk_0x18F7BE9ACB7D08F4(), 856.9501f, -1573.177f, 29.4751f, 1, 0, 0, 1);
			unk_0xB88121FF8A34A66F(unk_0x18F7BE9ACB7D08F4(), 288.3586f);
			break;
		
		case 4:
			if (unk_0x31F12808DC47A9E5(iLocal_33))
			{
				if (unk_0xC4B84EB67F78C1F0(iLocal_33, 0))
				{
					if (!unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iLocal_33, 0))
					{
						unk_0x8D77EFA08616AD64(unk_0x18F7BE9ACB7D08F4(), iLocal_33, -1);
					}
				}
			}
			break;
		
		case 5:
			if (unk_0x31F12808DC47A9E5(iLocal_33))
			{
				if (unk_0xC4B84EB67F78C1F0(iLocal_33, 0))
				{
					if (!unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iLocal_33, 0))
					{
						unk_0x8D77EFA08616AD64(unk_0x18F7BE9ACB7D08F4(), iLocal_33, -1);
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
			func_106();
			if (func_105() && func_102(7f, 7f, 7f, 1))
			{
				func_100();
				while (!func_99())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				iLocal_34 = func_37(818.8139f, -1610.406f, 30.7951f, 264.412f);
			}
			unk_0x8BB3FA32294185BB(0.01f);
			break;
		
		case 4:
			iLocal_418 = 0;
			iLocal_419 = 0;
			iLocal_420 = 0;
			func_106();
			if (unk_0x31F12808DC47A9E5(iLocal_33))
			{
				if (unk_0xC4B84EB67F78C1F0(iLocal_33, 0))
				{
					unk_0x990FFD4FB6ADD630(iLocal_33, 89.2131f, -596.9456f, 30.6224f, 1, 0, 0, 1);
					unk_0xB88121FF8A34A66F(iLocal_33, 161.1163f);
				}
			}
			unk_0x7EE425AE3317BA69(41f, -615f, 30f, 50f, 1, 1, 0, 0);
			break;
		
		case 5:
			iLocal_418 = 1;
			iLocal_419 = 1;
			iLocal_420 = 1;
			func_106();
			unk_0x7EE425AE3317BA69(41f, -615f, 30f, 50f, 1, 1, 0, 0);
			if (unk_0x31F12808DC47A9E5(iLocal_33))
			{
				if (unk_0xC4B84EB67F78C1F0(iLocal_33, 0))
				{
					unk_0x990FFD4FB6ADD630(iLocal_33, 28.4065f, -608.9371f, 30.6293f, 1, 0, 0, 1);
					unk_0xB88121FF8A34A66F(iLocal_33, 70.7778f);
				}
			}
			unk_0x9016574B77A748EE(joaat("s_m_m_security_01"));
			while (!unk_0xEDFE27D1AEA0EA7F(joaat("s_m_m_security_01")))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			if (!unk_0x31F12808DC47A9E5(iLocal_49))
			{
				iLocal_49 = unk_0x364B87C5C64BD100(26, joaat("s_m_m_security_01"), 64.904f, -617.9949f, 30.7028f, 223.555f, 1, 1);
				unk_0x419C9117019F2E5A(joaat("s_m_m_security_01"));
				unk_0x764AFC5A3A16C2B0(iLocal_49, 324, 1);
			}
			break;
	}
}

int func_37(struct<3> Param0, float fParam3)
{
	return func_38(&(Global_95145.f_2875), Param0, fParam3, 0);
}

int func_38(var uParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	var uVar5;
	int iVar8;
	
	if (func_98(uParam0))
	{
		if (func_97(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { *uParam0 };
			fParam4 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall"))
		{
			if (unk_0xBD0ECFC2907D1982(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, 1))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam4 = 89.5f;
			}
		}
		if (func_96(uParam0))
		{
			unk_0x7EE425AE3317BA69(Param1, 5f, 1, 0, 0, 0);
			func_95(Param1, 5f, 0);
			iVar0 = unk_0x3064CCF56C6C32BC(uParam0->f_12.f_66, Param1, fParam4, 1, 1, 0);
			if (unk_0x31F12808DC47A9E5(iVar0))
			{
				Var1 = { unk_0x761660F5CE986DC4(iVar0, 1) };
				if (unk_0xB7A628320EFF8E47(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					unk_0x3FF1EE7D5FD7094C(iVar0, Param1, 0, 0, 1);
				}
				func_78(iVar0, &(uParam0->f_12), 0, 1);
				bVar4 = true;
				if (unk_0x9605D2F02FA93911(uParam0->f_12.f_66) || unk_0x9178C1B23106F7AA(uParam0->f_12.f_66))
				{
					if (!unk_0xA0440E89AEA9CA58(Param1.f_0, Param1.f_1, (Param1.f_2 + 30f), Param1.f_0, Param1.f_1, (Param1.f_2 - 30f), &uVar5))
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					unk_0x9B53B2691E2B1F79(iVar0, 1084227584);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam5)
					{
						if (unk_0x881022B41FD53CD6(unk_0x4F69FBD64CDF125B(iVar0)))
						{
							func_77(uParam0->f_11, 1);
						}
						else if (unk_0x422717A3330EA45D(unk_0x4F69FBD64CDF125B(iVar0)))
						{
							func_77(uParam0->f_11, 2);
						}
					}
					unk_0x20DA875A55437C52(iVar0, 0);
					unk_0x363C972963D518BE(iVar0, 0);
					unk_0xE58E53D56F33BF17(iVar0, 1);
					func_76(iVar0, uParam0->f_11);
				}
				else if ((!func_73(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && unk_0x9D39145AD645E383(unk_0xFCA64981FEF7C913(), "startup_positioning"))
				{
					iVar8 = func_72(iVar0);
					if (iVar8 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_65(iVar8);
					}
				}
				if (((Global_92829 != 13 && Global_92829 != 10) && Global_92829 != 11) && Global_92829 != 12)
				{
					if (unk_0x6E987D62C8535B6E(&(Global_92829.f_3)) == Global_70662)
					{
						if (uParam0->f_12.f_66 == Global_104551.f_32429.f_69[21 /*78*/].f_66)
						{
							func_62(24, 0);
							func_65(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_39(iVar0, uParam0->f_11);
				}
				unk_0x419C9117019F2E5A(uParam0->f_12.f_66);
				Var1 = { unk_0x761660F5CE986DC4(iVar0, 1) };
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
		iVar0 = unk_0x4983F8C51A0C0AF3(iParam0, -1, 0);
		if (!unk_0x31F12808DC47A9E5(iVar0))
		{
			iVar0 = unk_0x75FAFA6C74F1ACCD(iParam0, -1);
		}
		if (unk_0x31F12808DC47A9E5(iVar0) && !unk_0x0FAE113CE72ED842(iVar0))
		{
			if (unk_0x4F69FBD64CDF125B(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x4F69FBD64CDF125B(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x4F69FBD64CDF125B(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_104551.f_2353.f_539.f_4301;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x4F69FBD64CDF125B(iParam0) == Global_104551.f_32429.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xFAFFA408239A026B(&(Global_104551.f_32429.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x9D39145AD645E383(unk_0xE6A2C60E19ABFD84(iParam0), &(Global_104551.f_32429.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_104551.f_32429.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_104551.f_32429.f_5592[iVar1] = iVar2;
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
		if (unk_0x4F69FBD64CDF125B(iParam0) == Global_104551.f_32429.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xFAFFA408239A026B(&(Global_104551.f_32429.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x9D39145AD645E383(unk_0xE6A2C60E19ABFD84(iParam0), &(Global_104551.f_32429.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_104551.f_32429.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_104551.f_32429.f_5590 = iParam1;
	Global_70579 = iParam0;
	Global_104551.f_32429.f_5588 = 1;
	func_40(iParam0, &(Global_104551.f_32429.f_5510));
}

void func_40(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		func_43(uParam1);
		uParam1->f_66 = unk_0x4F69FBD64CDF125B(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xE6A2C60E19ABFD84(iParam0), 16);
		*uParam1 = unk_0x2B07F86D9BC57D14(iParam0);
		unk_0xC2CED850D0B7AE40(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x939E5110724C9FF5(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x5DEE36C41FD07639(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x5B416ECA8172648C(iParam0);
		uParam1->f_67 = unk_0x178913209B5C278C(iParam0);
		uParam1->f_69 = unk_0x459703DBCA7E4F90(iParam0);
		uParam1->f_70 = unk_0xA15463616D2BE67B(iParam0);
		unk_0x868FCC1ABD0392E2(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0xC501B2A5F74552E1(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x6BF5E4054292013A(iParam0, 2))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 28);
		}
		if (unk_0x6BF5E4054292013A(iParam0, 3))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 29);
		}
		if (unk_0x6BF5E4054292013A(iParam0, 0))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 30);
		}
		if (unk_0x6BF5E4054292013A(iParam0, 1))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x7C094ED2B27D253F(iParam0, 0))
		{
			uParam1->f_68 = unk_0xB5305F9F7739856F(iParam0);
		}
		if (unk_0xD8BB60C76D29E4BB(uParam1->f_66))
		{
			if (unk_0xAD1AE6AEE26C1B5B(iParam0))
			{
				switch (unk_0xF0623119822BFA16(iParam0))
				{
					case 2:
					case 0:
						unk_0x62148293B793073B(&(uParam1->f_77), 23);
						unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0x62148293B793073B(&(uParam1->f_77), 23);
						unk_0x62148293B793073B(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0xDCACEB538A650DBE(iParam0))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 9);
		}
		if (unk_0x43AB555BD9D432EA(iParam0))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 10);
		}
		if (unk_0x598942D690303B92(iParam0))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 13);
			unk_0x9F7E6674DE4C23B5(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0xFD2F81E6B2E852DA(iParam0))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 12);
		}
		func_42(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x6276BF0E9518E43A(iParam0, iVar0 + 1))
			{
				unk_0xD2A9C3F486236CC5(&(uParam1->f_77), func_41(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x6D111CD3D2767A08(iParam0, 0))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x62148293B793073B(&(uParam1->f_77), 11);
		}
		if (unk_0x788C6B35BB3FCF53(iParam0, "IgnoredByQuickSave") && unk_0x3C32210A85B95B19(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x62148293B793073B(&(uParam1->f_77), 27);
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
	
	if (!unk_0xC4B84EB67F78C1F0(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x8A27C3C945C9E921(*iParam0) == 0)
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
			if (unk_0xFA82454B8C070DBB(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x2FA7EA3CA1AD2BF9(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x8730A3E327DA8627(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x8730A3E327DA8627(*iParam0, iVar0);
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
	if ((((((((((!unk_0x31F12808DC47A9E5(iParam0) || !unk_0xC4B84EB67F78C1F0(iParam0, 0)) || func_60(iParam0, 0, 0)) || func_60(iParam0, 1, 0)) || func_60(iParam0, 2, 0)) || func_59(iParam0) != 145) || func_58(iParam0)) || func_57(iParam0)) || func_56(iParam0)) || func_55(iParam0)) || !func_45(unk_0x4F69FBD64CDF125B(iParam0)))
	{
		if (func_57(iParam0))
		{
		}
		if (func_57(iParam0))
		{
		}
		if (func_60(iParam0, 0, 0))
		{
		}
		if (func_60(iParam0, 1, 0))
		{
		}
		if (func_60(iParam0, 2, 0))
		{
		}
		if (func_59(iParam0) != 145)
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
	if (((unk_0x9605D2F02FA93911(iParam0) || unk_0xD8BB60C76D29E4BB(iParam0)) || unk_0xB6353CAE3EBC0919(iParam0)) || unk_0xA403D842C198CAFF(iParam0))
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
	if (!unk_0xDC3C87280F94833B(iParam0))
	{
		return 0;
	}
	if ((((((iParam0 == joaat("dominator2") && !unk_0x44243F2E2F58B8E3()) || (iParam0 == joaat("buffalo3") && !unk_0x44243F2E2F58B8E3())) || (iParam0 == joaat("gauntlet2") && !unk_0x44243F2E2F58B8E3())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x44243F2E2F58B8E3())) || iParam0 == joaat("blista3"))
	{
		if (!func_54())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x469F77B2A79C2220())
		{
			if (unk_0x2164A4E269B646EB(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x0663FFD85FC79E8F(Var1.f_0))
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
		if ((((!func_53() && !func_52()) && !func_51()) && !func_50()) && !func_54())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x929A0C5D6A986B4F() || unk_0xC339C5C5B5E8BC5B()) || unk_0x0A8A596EB9C068FA())
		{
		}
		else if (!func_51())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_49(iParam0))
		{
			return 0;
		}
	}
	if (!func_47(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_47(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_48())
	{
		return 1;
	}
	unk_0xFA7CFD9BFC4E130D(&iVar0, &uVar1);
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
	if (!unk_0x393CD2FA300F18B3(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_48()
{
	if (unk_0xC339C5C5B5E8BC5B())
	{
		return unk_0x7D2708796355B20B();
	}
	return 0;
}

int func_49(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2491976)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0xE6E19D6A1FC25165();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5836 && !Global_262145.f_12069) && iVar1 < Global_262145.f_12070)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_13367 && iVar1 < Global_262145.f_13379)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_13363 && iVar1 < Global_262145.f_13375)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_13364 && iVar1 < Global_262145.f_13376)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_13365 && iVar1 < Global_262145.f_13377)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_13366 && iVar1 < Global_262145.f_13378)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_13368 && iVar1 < Global_262145.f_13380)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_13369 && iVar1 < Global_262145.f_13372)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_13370 && iVar1 < Global_262145.f_13373)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_13371 && iVar1 < Global_262145.f_13374)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_15998 && iVar1 < Global_262145.f_15963)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_15993 && iVar1 < Global_262145.f_15958)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_15997 && iVar1 < Global_262145.f_15962)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_15996 && iVar1 < Global_262145.f_15961)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_15990 && iVar1 < Global_262145.f_15955)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_15991 && iVar1 < Global_262145.f_15956)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_15994 && iVar1 < Global_262145.f_15959)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_15995 && iVar1 < Global_262145.f_15960)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_15992 && iVar1 < Global_262145.f_15957)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16000 && iVar1 < Global_262145.f_15965)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16001 && iVar1 < Global_262145.f_15966)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_15989 && iVar1 < Global_262145.f_15954)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_15988 && iVar1 < Global_262145.f_15953)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_15987 && iVar1 < Global_262145.f_15952)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_15999 && iVar1 < Global_262145.f_15964)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16002 && iVar1 < Global_262145.f_15967)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16003 && iVar1 < Global_262145.f_15968)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16004 && iVar1 < Global_262145.f_15969)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16005 && iVar1 < Global_262145.f_15970)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_16150 && iVar1 < Global_262145.f_16172)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_16151 && iVar1 < Global_262145.f_16173)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_16152 && iVar1 < Global_262145.f_16174)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_16153 && iVar1 < Global_262145.f_16175)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_16154 && iVar1 < Global_262145.f_16176)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_16155 && iVar1 < Global_262145.f_16177)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_16157 && iVar1 < Global_262145.f_16178)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_16158 && iVar1 < Global_262145.f_16179)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_16159 && iVar1 < Global_262145.f_16180)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_16160 && iVar1 < Global_262145.f_16181)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_16161 && iVar1 < Global_262145.f_16182)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_16162 && iVar1 < Global_262145.f_16183)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_16163 && iVar1 < Global_262145.f_16184)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_16169 && iVar1 < Global_262145.f_16191)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_16166 && iVar1 < Global_262145.f_16187)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_16167 && iVar1 < Global_262145.f_16188)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_16168 && iVar1 < Global_262145.f_16189)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_16156 && iVar1 < Global_262145.f_16190)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_16170 && iVar1 < Global_262145.f_16192)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_16164 && iVar1 < Global_262145.f_16185)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_16165 && iVar1 < Global_262145.f_16186)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_16171 && iVar1 < Global_262145.f_16193)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_17799 && iVar1 < Global_262145.f_17859)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_17800 && iVar1 < Global_262145.f_17860)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_17801 && iVar1 < Global_262145.f_17861)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_17802 && iVar1 < Global_262145.f_17862)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_17803 && iVar1 < Global_262145.f_17863)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_17804 && iVar1 < Global_262145.f_17864)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_17805 && iVar1 < Global_262145.f_17865)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_17806 && iVar1 < Global_262145.f_17866)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_17807 && iVar1 < Global_262145.f_17867)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_17808 && iVar1 < Global_262145.f_17868)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_17809 && iVar1 < Global_262145.f_17869)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_17810 && iVar1 < Global_262145.f_17870)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_17811 && iVar1 < Global_262145.f_17871)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_17812 && iVar1 < Global_262145.f_17872)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_17813 && iVar1 < Global_262145.f_17873)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_17814 && iVar1 < Global_262145.f_17874)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_17815 && iVar1 < Global_262145.f_17875)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_17816 && iVar1 < Global_262145.f_17876)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_17817 && iVar1 < Global_262145.f_17877)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_17818 && iVar1 < Global_262145.f_17878)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_17819 && iVar1 < Global_262145.f_17879)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_17820 && iVar1 < Global_262145.f_17880)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_17821 && iVar1 < Global_262145.f_17881)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_17822 && iVar1 < Global_262145.f_17882)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_17823 && iVar1 < Global_262145.f_17883)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_18845 && iVar1 < Global_262145.f_18841)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_18846 && iVar1 < Global_262145.f_18842)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_18847 && iVar1 < Global_262145.f_18843)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_18848 && iVar1 < Global_262145.f_18844)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_19688 && iVar1 < Global_262145.f_19696)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_19689 && iVar1 < Global_262145.f_19697)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_19690 && iVar1 < Global_262145.f_19698)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_19691 && iVar1 < Global_262145.f_19699)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_19692 && iVar1 < Global_262145.f_19700)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_19693 && iVar1 < Global_262145.f_19701)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_20464 && iVar1 < Global_262145.f_20484)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_20476 && iVar1 < Global_262145.f_20496)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_20467 && iVar1 < Global_262145.f_20487)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_20477 && iVar1 < Global_262145.f_20497)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_20465 && iVar1 < Global_262145.f_20485)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_20481 && iVar1 < Global_262145.f_20501)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_20479 && iVar1 < Global_262145.f_20499)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_20480 && iVar1 < Global_262145.f_20500)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_20475 && iVar1 < Global_262145.f_20495)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_20482 && iVar1 < Global_262145.f_20502)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_20478 && iVar1 < Global_262145.f_20498)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_20474 && iVar1 < Global_262145.f_20494)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_20466 && iVar1 < Global_262145.f_20486)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_20468 && iVar1 < Global_262145.f_20488)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_20469 && iVar1 < Global_262145.f_20489)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_20470 && iVar1 < Global_262145.f_20490)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_20471 && iVar1 < Global_262145.f_20491)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_20472 && iVar1 < Global_262145.f_20492)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_20473 && iVar1 < Global_262145.f_20493)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_21425 && iVar1 < Global_262145.f_21453)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_21426 && iVar1 < Global_262145.f_21454)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_21427 && iVar1 < Global_262145.f_21455)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_21428 && iVar1 < Global_262145.f_21456)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_21429 && iVar1 < Global_262145.f_21457)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_21430 && iVar1 < Global_262145.f_21458)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_21431 && iVar1 < Global_262145.f_21459)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_21432 && iVar1 < Global_262145.f_21460)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_21433 && iVar1 < Global_262145.f_21461)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_21434 && iVar1 < Global_262145.f_21462)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_21435 && iVar1 < Global_262145.f_21463)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_21436 && iVar1 < Global_262145.f_21464)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_21437 && iVar1 < Global_262145.f_21465)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_21438 && iVar1 < Global_262145.f_21466)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_21439 && iVar1 < Global_262145.f_21467)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_21440 && iVar1 < Global_262145.f_21468)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_21441 && iVar1 < Global_262145.f_21469)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_21442 && iVar1 < Global_262145.f_21470)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_21443 && iVar1 < Global_262145.f_21471)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_21444 && iVar1 < Global_262145.f_21472)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_21445 && iVar1 < Global_262145.f_21473)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_21446 && iVar1 < Global_262145.f_21474)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_21447 && iVar1 < Global_262145.f_21475)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_21448 && iVar1 < Global_262145.f_21476)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_21449 && iVar1 < Global_262145.f_21477)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_21450 && iVar1 < Global_262145.f_21478)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_21451 && iVar1 < Global_262145.f_21479)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_21452 && iVar1 < Global_262145.f_21480)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_50()
{
	return 0;
}

int func_51()
{
	return 1;
}

int func_52()
{
	return 1;
}

int func_53()
{
	if (unk_0x5E02CD27DBE77D67(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_54()
{
	var uVar0;
	
	if (unk_0x1F30842E4146CE70())
	{
		if (unk_0xABC550EBCFE96BBC())
		{
			if (unk_0xD51AEB3E72C71D1B())
			{
				unk_0xD194C635833AC189(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xD2A9C3F486236CC5(&uVar0, 2);
				unk_0xD2A9C3F486236CC5(&uVar0, 4);
				unk_0xD2A9C3F486236CC5(&uVar0, 6);
				unk_0xD2A9C3F486236CC5(&Global_25, 2);
				unk_0xD2A9C3F486236CC5(&Global_25, 4);
				unk_0xD2A9C3F486236CC5(&Global_25, 6);
				unk_0xD92C8D8AF3C67820(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x16DC46A28107A94A())
				{
					uVar0 = unk_0x3A75EA627A024B7A(866);
					unk_0xD2A9C3F486236CC5(&uVar0, 0);
					unk_0x167AC4B8CEEB1F11(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_143070 == 2)
	{
		return 1;
	}
	else if (Global_143070 == 3)
	{
		return 0;
	}
	if (unk_0x16DC46A28107A94A())
	{
		if (unk_0xB03A1684359C50A1(unk_0x3A75EA627A024B7A(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_55(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0x4F69FBD64CDF125B(iParam0);
	uVar1 = unk_0xE6A2C60E19ABFD84(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x9D39145AD645E383(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_46(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_56(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x31F12808DC47A9E5(Global_90335[iVar0]))
		{
			if (Global_90335[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_57(int iParam0)
{
	int iVar0;
	
	if (unk_0x31F12808DC47A9E5(iParam0) && unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x31F12808DC47A9E5(Global_90305[iVar0]) && unk_0xC4B84EB67F78C1F0(Global_90305[iVar0], 0))
			{
				if (Global_90305[iVar0] == iParam0 && unk_0x4F69FBD64CDF125B(Global_90305[iVar0]) == unk_0x4F69FBD64CDF125B(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_58(int iParam0)
{
	int iVar0;
	
	if (unk_0x31F12808DC47A9E5(Global_69674.f_484[24]))
	{
		if (iParam0 == Global_69674.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x31F12808DC47A9E5(Global_69674.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_69674.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_59(int iParam0)
{
	int iVar0;
	
	if (!unk_0x31F12808DC47A9E5(iParam0))
	{
		return 145;
	}
	if (!unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x31F12808DC47A9E5(Global_90305[iVar0]))
		{
			if (Global_90305[iVar0] == iParam0)
			{
				return Global_90315[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_60(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x31F12808DC47A9E5(iParam0) || !unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_61(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xB03A1684359C50A1(Global_104551.f_7199[iVar9], 0))
		{
			if (unk_0x31AAECA8242E34AD(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_61(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_62(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_64(iParam0, 0))
		{
			func_63(iParam0, 1, 0);
			func_63(iParam0, 2, 0);
			func_63(iParam0, 3, 0);
			func_63(iParam0, 4, 0);
			func_63(iParam0, 0, 1);
			Global_69674[iParam0] = 1;
		}
	}
	else
	{
		func_63(iParam0, 0, 0);
	}
}

void func_63(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xD2A9C3F486236CC5(&(Global_104551.f_32429[iParam0]), iParam1);
	}
	else
	{
		unk_0x62148293B793073B(&(Global_104551.f_32429[iParam0]), iParam1);
	}
}

bool func_64(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xB03A1684359C50A1(Global_104551.f_32429[iParam0], iParam1);
}

void func_65(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_69(&(Global_69674.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x31F12808DC47A9E5(Global_69674.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0xC4B84EB67F78C1F0(Global_69674.f_139[iParam0], 0))
				{
					if (unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), Global_69674.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0x337F2213526139E0(Global_69674.f_139[iParam0], 1, 1);
				unk_0xBECECD970F645217(&(Global_69674.f_139[iParam0]));
			}
		}
		Global_69674[iParam0] = 1;
		if (unk_0xB03A1684359C50A1(Global_69674.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_64(iParam0, 0)) && Global_70583.f_66 == 0) && Global_104551.f_32429.f_1958[Global_69674.f_555[0 /*21*/].f_14] != 0) && Global_104551.f_32429.f_1958[Global_69674.f_555[0 /*21*/].f_14] > 3) && (!func_67(0, Global_69674.f_555[0 /*21*/].f_12) || !func_67(1, Global_69674.f_555[0 /*21*/].f_12)))
			{
				func_66(&(Global_104551.f_32429.f_69[Global_69674.f_555[0 /*21*/].f_14 /*78*/]), &Global_70583);
				Global_70661 = Global_104551.f_32429.f_5591;
			}
			func_62(iParam0, 0);
		}
	}
}

void func_66(var uParam0, var uParam1)
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

int func_67(int iParam0, int iParam1)
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
	if (iParam0 < 0 || iParam0 >= func_68(&(Global_104551.f_32429.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_46(Global_104551.f_32429.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_68(var uParam0)
{
	return *uParam0;
}

int func_69(var uParam0, int iParam1)
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
			uParam0->f_4 = func_70(0, 1);
			uParam0->f_12 = 0;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 20);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_70(0, 1);
			uParam0->f_12 = 0;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 20);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_70(1, 1);
			uParam0->f_12 = 1;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 20);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_70(1, 2);
			uParam0->f_12 = 1;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 19);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_70(1, 1);
			uParam0->f_12 = 1;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 20);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_70(1, 2);
			uParam0->f_12 = 1;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 19);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_70(2, 1);
			uParam0->f_12 = 2;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 20);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_70(2, 1);
			uParam0->f_12 = 2;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 20);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_70(2, 1);
			uParam0->f_12 = 2;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 20);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 0);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 21);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 14);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 10);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 12);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 0);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 21);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 14);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 10);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 12);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 0);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 21);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 14);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 10);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 12);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 0);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 21);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 14);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 10);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 12);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 22);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 0);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 21);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 14);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 10);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 12);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 22);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 0);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 21);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 14);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 10);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 12);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 22);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 0);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 21);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 14);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 10);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 12);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 0);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 21);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 14);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 10);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 12);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 0);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 21);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 14);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 10);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 12);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 23);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 0);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 21);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 14);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 10);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 12);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 24);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 28);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 0);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 21);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 14);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 10);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 12);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 24);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 28);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 0);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 21);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 14);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 10);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 12);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 24);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 28);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 29);
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
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 10);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 12);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 27);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 24);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 29);
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
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 10);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 12);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 27);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 24);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 29);
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
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 10);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 12);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 27);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 24);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 10);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 11);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 13);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 10);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 11);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 13);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 9);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 9);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 23);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 23);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 23);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 8);
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
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 2);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 30);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 2);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 22);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 6);
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
			if (func_54())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 13);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 2);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 1);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 23);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_54())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 13);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 2);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 1);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 23);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 0);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 21);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 23);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 6);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 30);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 23);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 30);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 23);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0xB03A1684359C50A1(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_104551.f_32429.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_97(Global_104551.f_32429.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_104551.f_32429.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_104551.f_32429.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_104551.f_32429.f_1934[uParam0->f_14];
		}
	}
	if (unk_0xB03A1684359C50A1(uParam0->f_9, 19))
	{
		if (!func_97(Global_104551.f_2353.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_104551.f_2353.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_104551.f_2353.f_539.f_3589[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0xB03A1684359C50A1(uParam0->f_9, 20))
	{
		if (!func_97(Global_104551.f_2353.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_104551.f_2353.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_104551.f_2353.f_539.f_3589[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_70(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_17(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_71(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_71(int iParam0, var uParam1, int iParam2)
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
			if (Global_104551.f_9055.f_99.f_58[128] && !Global_104551.f_9055.f_99.f_58[131])
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
					if (Global_104551.f_9055.f_99.f_58[119])
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
			else if (Global_104551.f_9055.f_99.f_58[118])
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

int func_72(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((unk_0x31F12808DC47A9E5(Global_69674.f_484[iVar0]) && !unk_0x74C2FE037DFC8B4A(Global_69674.f_484[iVar0], 0)) && unk_0xC4B84EB67F78C1F0(Global_69674.f_484[iVar0], 0))
		{
			unk_0xC2CED850D0B7AE40(iParam0, &iVar1, &iVar2);
			unk_0xC2CED850D0B7AE40(Global_69674.f_484[iVar0], &iVar3, &iVar4);
			if (((unk_0x4F69FBD64CDF125B(iParam0) == unk_0x4F69FBD64CDF125B(Global_69674.f_484[iVar0]) && unk_0x178913209B5C278C(iParam0) == unk_0x178913209B5C278C(Global_69674.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_73(int iParam0, struct<3> Param1, bool bParam4)
{
	int iVar0;
	var uVar1[3];
	int iVar5;
	int iVar6;
	
	iVar0 = unk_0x4F69FBD64CDF125B(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_75(iParam0, Global_69674.f_139[38], 0))
			{
				func_65(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_75(iParam0, Global_69674.f_139[43], 1))
			{
				func_65(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar5 = unk_0xC4E133D43C01E0DF(unk_0x18F7BE9ACB7D08F4(), &uVar1);
			iVar6 = 0;
			while (iVar6 <= (iVar5 - 1))
			{
				if (func_75(iParam0, uVar1[iVar6], 1) && func_74(unk_0x761660F5CE986DC4(uVar1[iVar6], 1), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam4 || func_97(Param1, 0f, 0f, 0f, 0)) || unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(iParam0, 1), unk_0x761660F5CE986DC4(uVar1[iVar6], 1), 1) < 10f)
					{
						unk_0xBECECD970F645217(&iParam0);
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
			if ((unk_0x31F12808DC47A9E5(Global_69674.f_484[14]) && unk_0xC4B84EB67F78C1F0(iParam0, 0)) && unk_0xC4B84EB67F78C1F0(Global_69674.f_484[14], 0))
			{
				if (unk_0x4F69FBD64CDF125B(Global_69674.f_484[14]) == joaat("luxor2") && unk_0x178913209B5C278C(iParam0) == unk_0x178913209B5C278C(Global_69674.f_484[14]))
				{
					func_65(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0x31F12808DC47A9E5(Global_69674.f_484[20]) && unk_0xC4B84EB67F78C1F0(iParam0, 0)) && unk_0xC4B84EB67F78C1F0(Global_69674.f_484[20], 0))
			{
				if (unk_0x4F69FBD64CDF125B(Global_69674.f_484[20]) == joaat("swift2") && unk_0x178913209B5C278C(iParam0) == unk_0x178913209B5C278C(Global_69674.f_484[20]))
				{
					func_65(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_74(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x36E1A96E1D63ED91((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x36E1A96E1D63ED91((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x36E1A96E1D63ED91((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x36E1A96E1D63ED91((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x36E1A96E1D63ED91((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_75(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((unk_0x31F12808DC47A9E5(iParam1) && !unk_0x74C2FE037DFC8B4A(iParam1, 0)) && unk_0xC4B84EB67F78C1F0(iParam1, 0))
	{
		if (bParam2)
		{
			unk_0xC2CED850D0B7AE40(iParam0, &iVar0, &iVar1);
			unk_0xC2CED850D0B7AE40(iParam1, &iVar2, &iVar3);
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

void func_76(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0x31F12808DC47A9E5(Global_90305[iVar0]))
		{
			Global_90305[iVar0] = iParam0;
			Global_90315[iVar0] = iParam1;
			Global_90325[iVar0] = unk_0x4F69FBD64CDF125B(iParam0);
			if (unk_0x881022B41FD53CD6(Global_90325[iVar0]))
			{
				Global_90353[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_90353[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_77(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x31F12808DC47A9E5(Global_90305[iVar0]))
		{
			if (iParam0 == 145 || Global_90315[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0x4F69FBD64CDF125B(Global_90305[iVar0]) == func_70(iParam0, iParam1))
				{
					if (!unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), Global_90305[iVar0], 0))
					{
						unk_0x337F2213526139E0(Global_90305[iVar0], 0, 1);
						unk_0xBECECD970F645217(&(Global_90305[iVar0]));
						Global_90315[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_78(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		if (!func_87(iParam0))
		{
			if (unk_0x6E987D62C8535B6E(&(uParam1->f_1)) != 0)
			{
				unk_0x1C4B08C81FA52071(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < unk_0x1F5FE6436A0EC41B())
			{
				unk_0x98347A9DB184A9E3(iParam0, *uParam1);
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
			if (unk_0xB03A1684359C50A1(uParam1->f_77, func_41(iVar0 + 1)))
			{
			}
			else
			{
				unk_0xD2A9C3F486236CC5(&(uParam1->f_77), func_41(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0xB03A1684359C50A1(uParam1->f_77, func_41(iVar1 + 1)))
			{
			}
			else
			{
				unk_0xD2A9C3F486236CC5(&(uParam1->f_77), func_41(iVar1 + 1));
			}
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			unk_0xF423B67DFD20BCA9(iParam0, 0);
			if (unk_0x2FA7EA3CA1AD2BF9(iParam0, 5) != -1)
			{
				unk_0xF423B67DFD20BCA9(iParam0, 1);
			}
		}
		if (unk_0xB03A1684359C50A1(uParam1->f_77, 13))
		{
			unk_0x0A0A6CC3A8BAD4E2(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x922D3A1033F467B3(iParam0);
		}
		if (unk_0xB03A1684359C50A1(uParam1->f_77, 12))
		{
			unk_0xE185F21936CEEAE1(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xBC56E64DD6367C93(iParam0);
		}
		unk_0x62270578972B4C56(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0xD7C3FB938E520431(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0xB03A1684359C50A1(uParam1->f_77, 15) || func_86(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_85())
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
		unk_0xB5F6C7EFD3748488(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			unk_0x9F91D8B05EF0ED7C(iParam0, 0);
		}
		else
		{
			unk_0x9F91D8B05EF0ED7C(iParam0, 0);
			unk_0x9F91D8B05EF0ED7C(iParam0, uParam1->f_65);
		}
		unk_0x5D41CFDE94DA9F49(iParam0, !unk_0xB03A1684359C50A1(uParam1->f_77, 9));
		if (bParam2)
		{
			unk_0xA2B45B1D3EE42178(iParam0, uParam1->f_70);
		}
		unk_0xC7E45A561A9E1BA4(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0x3184374ACA6B725F(iParam0, 2, unk_0xB03A1684359C50A1(uParam1->f_77, 28));
		unk_0x3184374ACA6B725F(iParam0, 3, unk_0xB03A1684359C50A1(uParam1->f_77, 29));
		unk_0x3184374ACA6B725F(iParam0, 0, unk_0xB03A1684359C50A1(uParam1->f_77, 30));
		unk_0x3184374ACA6B725F(iParam0, 1, unk_0xB03A1684359C50A1(uParam1->f_77, 31));
		unk_0x0BF4E270537B1A96(iParam0, unk_0xB03A1684359C50A1(uParam1->f_77, 10));
		if (unk_0x299CF4427BA55484(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0xCB8AD4899214D0E6(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0x93CA7A248A4D402A(unk_0x4F69FBD64CDF125B(iParam0)))
			{
				if (unk_0x422717A3330EA45D(unk_0x4F69FBD64CDF125B(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_84(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_84(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0x7C094ED2B27D253F(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0xEBF8B8510CD7F80B(iParam0, 1);
			}
			else
			{
				unk_0x7EC79A4EBA8F7EF4(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_79(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0xB6353CAE3EBC0919(uParam1->f_66) && !unk_0x9605D2F02FA93911(uParam1->f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0xB03A1684359C50A1(uParam1->f_77, func_41(iVar2 + 1)))
				{
					if (!unk_0x6276BF0E9518E43A(iParam0, iVar2 + 1))
					{
						unk_0xDE2241F5D2C60ED8(iParam0, iVar2 + 1, 0);
					}
				}
				else if (unk_0x6276BF0E9518E43A(iParam0, iVar2 + 1))
				{
					unk_0xDE2241F5D2C60ED8(iParam0, iVar2 + 1, 1);
				}
				iVar2++;
			}
		}
		if ((unk_0x4F69FBD64CDF125B(iParam0) == joaat("sheava") || unk_0x4F69FBD64CDF125B(iParam0) == joaat("omnis")) || unk_0x4F69FBD64CDF125B(iParam0) == joaat("le7b"))
		{
			if (unk_0x2FA7EA3CA1AD2BF9(iParam0, 0) == -1)
			{
				unk_0xDE2241F5D2C60ED8(iParam0, 1, 0);
			}
		}
		if (((unk_0xD8BB60C76D29E4BB(uParam1->f_66) && unk_0x3619CAA2EDF23557(iParam0)) && !unk_0x0665EB554F07889E(iParam0, joaat("avenger"))) && !((Global_1646129.f_49002 == 6 || Global_1646129.f_49002 == 7) && unk_0xB03A1684359C50A1(Global_1646129.f_26, 8)))
		{
			if (!unk_0xB03A1684359C50A1(uParam1->f_77, 23))
			{
				if (unk_0xB03A1684359C50A1(uParam1->f_77, 22))
				{
					unk_0x6E397FC4BBDF1484(iParam0, 2);
				}
				else
				{
					unk_0x6E397FC4BBDF1484(iParam0, 3);
				}
			}
			else
			{
				unk_0x6E397FC4BBDF1484(iParam0, 4);
			}
		}
		if (unk_0xB03A1684359C50A1(uParam1->f_77, 27))
		{
			unk_0x9B3EE748523D62C3(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0x9B3EE748523D62C3(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_79(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xC4B84EB67F78C1F0(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x8A27C3C945C9E921(*iParam0) == 0)
	{
		return 0;
	}
	unk_0xD8A3CA4A1B092413(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			unk_0x4D9CCED3A1C96367(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (unk_0x2FA7EA3CA1AD2BF9(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x814DFE1772D11095(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0x6819ABF1BBD7D728(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0x6819ABF1BBD7D728(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0x6819ABF1BBD7D728(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_83(unk_0x4F69FBD64CDF125B(*iParam0), 1) && unk_0x2FA7EA3CA1AD2BF9(*iParam0, 24) != func_82(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x6819ABF1BBD7D728(*iParam0, 24, func_82(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_81(iParam0);
	if (func_80(*iParam0))
	{
		unk_0xF321DFA4C895508B(*iParam0, 1);
		unk_0xE58E53D56F33BF17(*iParam0, 1);
	}
	return 1;
}

int func_80(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0x31F12808DC47A9E5(iParam0) && unk_0xC4B84EB67F78C1F0(iParam0, 0)) && unk_0x8A27C3C945C9E921(iParam0) > 0)
	{
		unk_0xD8A3CA4A1B092413(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x2FA7EA3CA1AD2BF9(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0xEC0D634C701696DE(iParam0, iVar1, unk_0x2FA7EA3CA1AD2BF9(iParam0, iVar1)), 16);
				iVar2 = unk_0x6E987D62C8535B6E(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x6E987D62C8535B6E("MNU_CAGE") || iVar2 == unk_0x6E987D62C8535B6E("SABRE_CAG"))
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

void func_81(var uParam0)
{
	switch (unk_0x4F69FBD64CDF125B(*uParam0))
	{
		case joaat("starling"):
			if (unk_0x2FA7EA3CA1AD2BF9(*uParam0, 4) == 0)
			{
				unk_0x6819ABF1BBD7D728(*uParam0, 13, 0, false);
			}
			else
			{
				unk_0x814DFE1772D11095(*uParam0, 13);
			}
			break;
	}
}

int func_82(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0x31F12808DC47A9E5(iParam0) && unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		switch (unk_0x4F69FBD64CDF125B(iParam0))
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
		iVar0 = unk_0xEBA4C479CD632515(iParam0, 38);
		iVar1 = unk_0xEBA4C479CD632515(iParam0, 24);
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

int func_83(int iParam0, int iParam1)
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
			if (!Global_262145.f_13364)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_13365)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_13363)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_13366)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_13368)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_13367)
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
			if (Global_262145.f_17809)
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
			if (Global_262145.f_17811)
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
			if (Global_262145.f_17815)
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
			if (Global_262145.f_17812)
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
			if (Global_262145.f_17819)
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
			if (Global_262145.f_17817)
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
			if (Global_262145.f_17822)
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
			if (Global_262145.f_19694)
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
			if (Global_262145.f_19695)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
	}
	return 0;
}

void func_84(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x8A27C3C945C9E921(iParam0) > 0)
	{
		unk_0xD8A3CA4A1B092413(iParam0, 0);
		iVar0 = unk_0x2FA7EA3CA1AD2BF9(iParam0, 24);
		iVar1 = unk_0x8730A3E327DA8627(iParam0, 24);
		unk_0xE047CE9047B91786(iParam0, uParam1);
		if (unk_0x4F69FBD64CDF125B(iParam0) == joaat("tornado6"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			unk_0x814DFE1772D11095(iParam0, 24);
		}
		else
		{
			unk_0x6819ABF1BBD7D728(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_85()
{
	return unk_0x5E02CD27DBE77D67(joaat("mpindependence"));
}

int func_86(int iParam0)
{
	var uVar0;
	
	if (unk_0x31F12808DC47A9E5(iParam0))
	{
		if (unk_0xC4B84EB67F78C1F0(iParam0, 0))
		{
			if (unk_0x23E808B211571A22("MPBitset", 3))
			{
				if (unk_0x788C6B35BB3FCF53(iParam0, "MPBitset"))
				{
					uVar0 = unk_0xFE0F5B815FB9D3D1(iParam0, "MPBitset");
				}
				return unk_0xB03A1684359C50A1(uVar0, 4);
			}
		}
	}
	return 0;
}

int func_87(int iParam0)
{
	if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		if (!func_93(unk_0x8CFC7D6E1DA5D304(), -1))
		{
			iParam0 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
		}
	}
	if (!unk_0x31F12808DC47A9E5(iParam0))
	{
		return 0;
	}
	if (unk_0x74C2FE037DFC8B4A(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		return 0;
	}
	if (func_89(unk_0x8CFC7D6E1DA5D304()) == 3)
	{
		if (unk_0x31F12808DC47A9E5(iParam0) && unk_0xC4B84EB67F78C1F0(iParam0, 0))
		{
			if (func_88(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_88(int iParam0)
{
	if (unk_0x23E808B211571A22("FMDeliverableID", 3))
	{
		if (unk_0x788C6B35BB3FCF53(iParam0, "FMDeliverableID"))
		{
			return unk_0xFE0F5B815FB9D3D1(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_89(int iParam0)
{
	if (func_92(iParam0) == 233)
	{
		return func_90(iParam0);
	}
	return -1;
}

int func_90(int iParam0)
{
	if (func_91(iParam0, 0))
	{
		return Global_1627460[iParam0 /*530*/].f_11.f_176;
	}
	return -1;
}

int func_91(int iParam0, int iParam1)
{
	if (Global_1627460[iParam0 /*530*/].f_11.f_33 != -1 || (iParam1 && Global_1627460[iParam0 /*530*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_92(int iParam0)
{
	if (func_91(iParam0, 0))
	{
		return Global_1627460[iParam0 /*530*/].f_11.f_33;
	}
	return -1;
}

int func_93(var uParam0, int iParam1)
{
	int iVar0;
	
	if (func_94(uParam0, 1, 1))
	{
		if (unk_0x657B649BA2AD3582(unk_0x6604E096142B4B55(uParam0), 0))
		{
			iVar0 = unk_0x5AD687C3474F04B4(unk_0x6604E096142B4B55(uParam0), 0);
			if (unk_0xC4B84EB67F78C1F0(iVar0, 0))
			{
				if (unk_0x18F7BE9ACB7D08F4() == unk_0x4983F8C51A0C0AF3(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_94(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (unk_0x4AF13BCD120BCDBC(uParam0))
		{
			if (bParam1)
			{
				if (!unk_0x557001354138B7FB(uParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2436169.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_95(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_69(&(Global_69674.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0x15EE504466B7BBD3(Param0, Global_69674.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_65(iVar0);
			}
		}
		iVar0++;
	}
}

int func_96(var uParam0)
{
	if (func_98(uParam0))
	{
		if (unk_0xEDFE27D1AEA0EA7F(uParam0->f_12.f_66))
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

bool func_97(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_98(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_46(uParam0->f_12.f_66, 0))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_74(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_99()
{
	return func_96(&(Global_95145.f_2875));
}

void func_100()
{
	func_101(&(Global_95145.f_2875));
}

void func_101(var uParam0)
{
	if (func_98(uParam0))
	{
		unk_0x9016574B77A748EE(uParam0->f_12.f_66);
	}
}

int func_102(struct<3> Param0, int iParam3)
{
	return func_103(Global_95145.f_2875.f_12.f_66, Param0, iParam3);
}

int func_103(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam4 == 1)
	{
		Param1 = { func_104() };
	}
	unk_0x0D8E51F437C55570(iParam0, &Var0, &Var3);
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

Vector3 func_104()
{
	return 2.55f, 5.665f, 2.55f;
}

int func_105()
{
	return func_98(&(Global_95145.f_2875));
}

void func_106()
{
	unk_0x9016574B77A748EE(joaat("armytrailer2"));
	unk_0x9016574B77A748EE(joaat("packer"));
	unk_0x9016574B77A748EE(joaat("s_m_y_construct_01"));
	unk_0x9016574B77A748EE(joaat("s_m_m_security_01"));
	unk_0x9016574B77A748EE(joaat("bison2"));
	while ((((!unk_0xEDFE27D1AEA0EA7F(joaat("armytrailer2")) || !unk_0xEDFE27D1AEA0EA7F(joaat("packer"))) || !unk_0xEDFE27D1AEA0EA7F(joaat("s_m_y_construct_01"))) || !unk_0xEDFE27D1AEA0EA7F(joaat("s_m_m_security_01"))) || !unk_0xEDFE27D1AEA0EA7F(joaat("bison2")))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x31F12808DC47A9E5(iLocal_32))
	{
		if (unk_0x31F12808DC47A9E5(Global_89471[1]))
		{
			unk_0x337F2213526139E0(Global_89471[1], 1, 1);
			iLocal_32 = Global_89471[1];
			unk_0x2859D31D18BD568A(iLocal_32);
		}
		else
		{
			iLocal_32 = unk_0x3064CCF56C6C32BC(joaat("armytrailer2"), 919.303f, -1553.88f, 29.7789f, 167.1917f, 1, 1, 0);
			unk_0x2859D31D18BD568A(iLocal_32);
		}
	}
	if (!unk_0x31F12808DC47A9E5(iLocal_33))
	{
		if (unk_0x31F12808DC47A9E5(Global_89471[2]))
		{
			unk_0x337F2213526139E0(Global_89471[2], 1, 1);
			iLocal_33 = Global_89471[2];
			unk_0xE58E53D56F33BF17(iLocal_33, 1);
			unk_0xA2B45B1D3EE42178(iLocal_33, 7);
			func_109(iLocal_33, -1);
			func_108(iLocal_33, -1);
		}
		else
		{
			iLocal_33 = unk_0x3064CCF56C6C32BC(joaat("packer"), 919.303f, -1553.88f, 29.7789f, 167.1917f, 1, 1, 0);
			unk_0xE58E53D56F33BF17(iLocal_33, 1);
			unk_0xA2B45B1D3EE42178(iLocal_33, 7);
			func_109(iLocal_33, -1);
			func_108(iLocal_33, -1);
		}
	}
	unk_0x947BB7093DF96619(iLocal_33, iLocal_32, 0.5f);
	unk_0x419C9117019F2E5A(joaat("armytrailer2"));
	unk_0x419C9117019F2E5A(joaat("packer"));
	unk_0x419C9117019F2E5A(joaat("bison2"));
	if (!unk_0x31F12808DC47A9E5(iLocal_35[0]))
	{
		if (unk_0x31F12808DC47A9E5(Global_89471.f_9[0]))
		{
			unk_0x337F2213526139E0(Global_89471.f_9[0], 1, 1);
			iLocal_35[0] = Global_89471.f_9[0];
			unk_0x641E77554763EF06(iLocal_35[0], iLocal_302);
			func_107(iLocal_35[0], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x40E2910BAF39B1C7(iLocal_35[0], 1);
		}
		else
		{
			iLocal_35[0] = unk_0x364B87C5C64BD100(26, joaat("s_m_y_construct_01"), 912.34f, -1543.297f, 29.6469f, 16.169f, 1, 1);
			unk_0x641E77554763EF06(iLocal_35[0], iLocal_302);
			if (unk_0xB6B12179F5BB7520(912.3f, -1542.6f, 30.4f, 3f, 0))
			{
				unk_0x8872F6E90127B5D1(iLocal_35[0], 912.3f, -1542.6f, 30.4f, 5f, 0);
			}
			unk_0x40E2910BAF39B1C7(iLocal_35[0], 1);
			func_107(iLocal_35[0], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
		}
	}
	if (!unk_0x31F12808DC47A9E5(iLocal_35[1]))
	{
		if (unk_0x31F12808DC47A9E5(Global_89471.f_9[1]))
		{
			unk_0x337F2213526139E0(Global_89471.f_9[1], 1, 1);
			iLocal_35[1] = Global_89471.f_9[1];
			unk_0x641E77554763EF06(iLocal_35[1], iLocal_302);
			func_107(iLocal_35[1], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x40E2910BAF39B1C7(iLocal_35[1], 1);
		}
		else
		{
			iLocal_35[1] = unk_0x364B87C5C64BD100(26, joaat("s_m_y_construct_01"), 917.5028f, -1517.401f, 29.9673f, 158.5738f, 1, 1);
			unk_0x641E77554763EF06(iLocal_35[1], iLocal_302);
			if (unk_0xB6B12179F5BB7520(917.5028f, -1517.401f, 29.9673f, 3f, 0))
			{
				unk_0x8872F6E90127B5D1(iLocal_35[1], 917.5028f, -1517.401f, 29.9673f, 5f, 0);
			}
			func_107(iLocal_35[1], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x40E2910BAF39B1C7(iLocal_35[1], 1);
		}
	}
	if (!unk_0x31F12808DC47A9E5(iLocal_35[2]))
	{
		if (unk_0x31F12808DC47A9E5(Global_89471.f_9[2]))
		{
			unk_0x337F2213526139E0(Global_89471.f_9[2], 1, 1);
			iLocal_35[2] = Global_89471.f_9[2];
			unk_0x641E77554763EF06(iLocal_35[2], iLocal_302);
			func_107(iLocal_35[2], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x40E2910BAF39B1C7(iLocal_35[2], 1);
		}
		else
		{
			iLocal_35[2] = unk_0x364B87C5C64BD100(26, joaat("s_m_y_construct_01"), 869.6423f, -1541.423f, 29.2516f, 346.9848f, 1, 1);
			unk_0x641E77554763EF06(iLocal_35[2], iLocal_302);
			if (unk_0xB6B12179F5BB7520(869.6423f, -1541.423f, 29.2516f, 3f, 0))
			{
				unk_0x8872F6E90127B5D1(iLocal_35[2], 869.6423f, -1541.423f, 29.2516f, 5f, 0);
			}
			func_107(iLocal_35[2], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x40E2910BAF39B1C7(iLocal_35[2], 1);
		}
	}
	if (!unk_0x31F12808DC47A9E5(iLocal_35[3]))
	{
		if (unk_0x31F12808DC47A9E5(Global_89471.f_9[3]))
		{
			unk_0x337F2213526139E0(Global_89471.f_9[3], 1, 1);
			iLocal_35[3] = Global_89471.f_9[3];
			unk_0x641E77554763EF06(iLocal_35[3], iLocal_302);
			func_107(iLocal_35[3], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x40E2910BAF39B1C7(iLocal_35[3], 1);
		}
		else
		{
			iLocal_35[3] = unk_0x364B87C5C64BD100(26, joaat("s_m_y_construct_01"), 884.3046f, -1573.188f, 29.8247f, 182.9722f, 1, 1);
			unk_0x641E77554763EF06(iLocal_35[3], iLocal_302);
			if (unk_0xB6B12179F5BB7520(884.3046f, -1573.188f, 29.8247f, 3f, 0))
			{
				unk_0x8872F6E90127B5D1(iLocal_35[3], 884.3046f, -1573.188f, 29.8247f, 5f, 0);
			}
			func_107(iLocal_35[3], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x40E2910BAF39B1C7(iLocal_35[3], 1);
		}
	}
	if (!unk_0x31F12808DC47A9E5(iLocal_35[4]))
	{
		if (unk_0x31F12808DC47A9E5(Global_89471.f_9[4]))
		{
			unk_0x337F2213526139E0(Global_89471.f_9[4], 1, 1);
			iLocal_35[4] = Global_89471.f_9[4];
			unk_0x641E77554763EF06(iLocal_35[4], iLocal_302);
			func_107(iLocal_35[4], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x40E2910BAF39B1C7(iLocal_35[4], 1);
		}
		else
		{
			iLocal_35[4] = unk_0x364B87C5C64BD100(26, joaat("s_m_y_construct_01"), 903.8805f, -1575.02f, 29.8327f, 308.1952f, 1, 1);
			unk_0x641E77554763EF06(iLocal_35[4], iLocal_302);
			if (unk_0xB6B12179F5BB7520(903.8805f, -1575.02f, 29.8327f, 3f, 0))
			{
				unk_0x8872F6E90127B5D1(iLocal_35[4], 903.8805f, -1575.02f, 29.8327f, 5f, 0);
			}
			func_107(iLocal_35[4], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x40E2910BAF39B1C7(iLocal_35[4], 1);
		}
	}
	if (!unk_0x31F12808DC47A9E5(iLocal_35[5]))
	{
		if (unk_0x31F12808DC47A9E5(Global_89471.f_9[5]))
		{
			unk_0x337F2213526139E0(Global_89471.f_9[5], 1, 1);
			iLocal_35[5] = Global_89471.f_9[5];
			unk_0x641E77554763EF06(iLocal_35[5], iLocal_302);
			func_107(iLocal_35[5], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x40E2910BAF39B1C7(iLocal_35[5], 1);
		}
		else
		{
			iLocal_35[5] = unk_0x364B87C5C64BD100(26, joaat("s_m_y_construct_01"), 906.2186f, -1575.108f, 29.8125f, 55.9906f, 1, 1);
			unk_0x641E77554763EF06(iLocal_35[5], iLocal_302);
			if (unk_0xB6B12179F5BB7520(906.2186f, -1575.108f, 29.8125f, 3f, 0))
			{
				unk_0x8872F6E90127B5D1(iLocal_35[5], 906.2186f, -1575.108f, 29.8125f, 5f, 0);
			}
			func_107(iLocal_35[5], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x40E2910BAF39B1C7(iLocal_35[5], 1);
		}
	}
	if (!unk_0x31F12808DC47A9E5(iLocal_35[6]))
	{
		if (unk_0x31F12808DC47A9E5(Global_89471.f_9[8]))
		{
			unk_0x337F2213526139E0(Global_89471.f_9[8], 1, 1);
			iLocal_35[6] = Global_89471.f_9[8];
			unk_0x641E77554763EF06(iLocal_35[6], iLocal_302);
			func_107(iLocal_35[6], 20f, 5f, 120f, -45f, 45f);
			unk_0x40E2910BAF39B1C7(iLocal_35[6], 1);
		}
		else
		{
			iLocal_35[6] = unk_0x364B87C5C64BD100(26, joaat("s_m_y_construct_01"), 889.285f, -1561.485f, 29.6539f, 22.2456f, 1, 1);
			unk_0x641E77554763EF06(iLocal_35[6], iLocal_302);
			if (unk_0xB6B12179F5BB7520(889.285f, -1561.485f, 29.6539f, 3f, 0))
			{
				unk_0x8872F6E90127B5D1(iLocal_35[6], 889.285f, -1561.485f, 29.6539f, 5f, 0);
			}
			func_107(iLocal_35[6], 20f, 5f, 120f, -45f, 45f);
			unk_0x40E2910BAF39B1C7(iLocal_35[6], 1);
		}
	}
	if (!unk_0x31F12808DC47A9E5(iLocal_43[0]))
	{
		if (unk_0x31F12808DC47A9E5(Global_89471.f_9[6]))
		{
			unk_0x337F2213526139E0(Global_89471.f_9[6], 1, 1);
			iLocal_43[0] = Global_89471.f_9[6];
			unk_0x641E77554763EF06(iLocal_43[0], iLocal_303);
			func_107(iLocal_43[0], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x40E2910BAF39B1C7(iLocal_43[0], 1);
			unk_0x7D154B840BD03D00(iLocal_43[0], joaat("weapon_pistol"), 100, 0, 0);
			unk_0x2F51E4FCC3B20959(iLocal_43[0], "S_M_M_GENERICSECURITY_01_LATINO_MINI_01");
		}
		else
		{
			iLocal_43[0] = unk_0x364B87C5C64BD100(26, joaat("s_m_m_security_01"), 863.1551f, -1564.572f, 29.3231f, 130.7946f, 1, 1);
			unk_0x641E77554763EF06(iLocal_43[0], iLocal_303);
			func_107(iLocal_43[0], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x40E2910BAF39B1C7(iLocal_43[0], 1);
			unk_0x7D154B840BD03D00(iLocal_43[0], joaat("weapon_pistol"), 100, 0, 0);
			unk_0x2F51E4FCC3B20959(iLocal_43[0], "S_M_M_GENERICSECURITY_01_LATINO_MINI_01");
		}
	}
	if (!unk_0x31F12808DC47A9E5(iLocal_43[1]))
	{
		if (unk_0x31F12808DC47A9E5(Global_89471.f_9[7]))
		{
			unk_0x337F2213526139E0(Global_89471.f_9[7], 1, 1);
			iLocal_43[1] = Global_89471.f_9[7];
			unk_0x641E77554763EF06(iLocal_43[1], iLocal_303);
			func_107(iLocal_43[1], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x40E2910BAF39B1C7(iLocal_43[1], 1);
			unk_0x7D154B840BD03D00(iLocal_43[1], joaat("weapon_pistol"), 100, 0, 0);
			unk_0x2F51E4FCC3B20959(iLocal_43[1], "S_M_M_GENERICSECURITY_01_LATINO_MINI_02");
		}
		else
		{
			iLocal_43[1] = unk_0x364B87C5C64BD100(26, joaat("s_m_m_security_01"), 940.2881f, -1573.877f, 29.3866f, 269.1856f, 1, 1);
			unk_0x641E77554763EF06(iLocal_43[1], iLocal_303);
			func_107(iLocal_43[1], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x40E2910BAF39B1C7(iLocal_43[1], 1);
			unk_0x7D154B840BD03D00(iLocal_43[1], joaat("weapon_pistol"), 100, 0, 0);
			unk_0x2F51E4FCC3B20959(iLocal_43[1], "S_M_M_GENERICSECURITY_01_LATINO_MINI_02");
		}
	}
	unk_0x419C9117019F2E5A(joaat("s_m_y_construct_01"));
	unk_0x419C9117019F2E5A(joaat("s_m_m_security_01"));
}

void func_107(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5)
{
	if (!unk_0x0FAE113CE72ED842(iParam0))
	{
		unk_0x067F16ECAED88B7F(iParam0, fParam1);
		unk_0x1B0727CEEF75B52D(iParam0, iParam2);
		unk_0xB7F566C238287AC2(iParam0, (fParam3 / 2f));
		unk_0xB0C2F128821ED051(iParam0, iParam4);
		unk_0xB7751001C18D55F9(iParam0, iParam5);
	}
}

void func_108(int iParam0, int iParam1)
{
	Global_55912 = iParam0;
	Global_55913 = iParam1;
}

void func_109(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_55914 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_67996)
	{
		if (iParam1 == -1 || Global_67997[iVar0 /*9*/] == iParam1)
		{
			if (Global_67997[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_67997[iVar0 /*9*/].f_6 = iParam0;
				Global_67997[iVar0 /*9*/].f_7 = 1;
				Global_67997[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_110()
{
	iLocal_63 = 0;
	while (iLocal_63 <= 6)
	{
		if (unk_0x31F12808DC47A9E5(iLocal_35[iLocal_63]) && unk_0xE54DCC6B21FDC95A(iLocal_35[iLocal_63], 1))
		{
			unk_0x63C116C2153FAA3C(&(iLocal_35[iLocal_63]));
		}
		iLocal_63++;
	}
	if (unk_0x31F12808DC47A9E5(iLocal_43[0]) && unk_0xE54DCC6B21FDC95A(iLocal_43[0], 1))
	{
		unk_0x63C116C2153FAA3C(&(iLocal_43[0]));
	}
	if (unk_0x31F12808DC47A9E5(iLocal_43[1]) && unk_0xE54DCC6B21FDC95A(iLocal_43[1], 1))
	{
		unk_0x63C116C2153FAA3C(&(iLocal_43[1]));
	}
	if (unk_0x31F12808DC47A9E5(iLocal_46) && unk_0xE54DCC6B21FDC95A(iLocal_46, 1))
	{
		unk_0x63C116C2153FAA3C(&iLocal_46);
	}
	if (unk_0x31F12808DC47A9E5(iLocal_47) && unk_0xE54DCC6B21FDC95A(iLocal_47, 1))
	{
		unk_0x63C116C2153FAA3C(&iLocal_47);
	}
	if (unk_0x31F12808DC47A9E5(iLocal_48) && unk_0xE54DCC6B21FDC95A(iLocal_48, 1))
	{
		unk_0x63C116C2153FAA3C(&iLocal_48);
	}
	if (unk_0x31F12808DC47A9E5(iLocal_49) && unk_0xE54DCC6B21FDC95A(iLocal_49, 1))
	{
		unk_0x63C116C2153FAA3C(&iLocal_49);
	}
	if (!func_30())
	{
		unk_0x990FFD4FB6ADD630(unk_0x18F7BE9ACB7D08F4(), 519.1906f, -2980.994f, 5.0443f, 1, 0, 0, 1);
		unk_0xB88121FF8A34A66F(unk_0x18F7BE9ACB7D08F4(), 270.1911f);
	}
	if (unk_0x31F12808DC47A9E5(iLocal_32) && unk_0xE54DCC6B21FDC95A(iLocal_32, 1))
	{
		unk_0xBECECD970F645217(&iLocal_32);
	}
	if (unk_0x31F12808DC47A9E5(Global_89471[3]))
	{
		unk_0x337F2213526139E0(Global_89471[3], 1, 0);
		unk_0xBECECD970F645217(&(Global_89471[3]));
	}
	if (unk_0x31F12808DC47A9E5(iLocal_33) && unk_0xE54DCC6B21FDC95A(iLocal_33, 1))
	{
		unk_0xBECECD970F645217(&iLocal_33);
	}
	unk_0x334F1DD67B2EC86A("cellphone@str");
	unk_0x334F1DD67B2EC86A("misscarsteal4@director_grip");
	unk_0x633C8E78F68C0DAE("FHPRB_START");
	unk_0x633C8E78F68C0DAE("FHPRB_TRUCK");
	unk_0x633C8E78F68C0DAE("FHPRB_COPS");
	unk_0x633C8E78F68C0DAE("FHPRB_LOST");
	unk_0x633C8E78F68C0DAE("FHPRB_STOP");
	unk_0x7EE425AE3317BA69(889.5f, -1553.8f, 30f, 150f, 1, 0, 0, 0);
}

void func_111()
{
	if (unk_0xE769D9B5158D0F11(uLocal_58))
	{
		unk_0x40D517D991458154(&uLocal_58);
	}
	if (unk_0xE769D9B5158D0F11(uLocal_59))
	{
		unk_0x40D517D991458154(&uLocal_59);
	}
	if (unk_0xE769D9B5158D0F11(uLocal_60))
	{
		unk_0x40D517D991458154(&uLocal_60);
	}
	if (unk_0xE769D9B5158D0F11(uLocal_61))
	{
		unk_0x40D517D991458154(&uLocal_61);
	}
}

void func_112()
{
	Global_14622 = 0;
	func_113();
}

void func_113()
{
	unk_0x815093B4702C59D8();
	Global_16767 = 0;
	if ((unk_0x36328FCBA2944E1F() || Global_14453.f_1 == 9) || Global_14452 == 1)
	{
		unk_0xBE97F4E2B659331B(0);
		Global_15756 = 6;
		Global_14453.f_1 = 3;
		return;
	}
	if (unk_0x85FDEF76CDBAD589())
	{
		unk_0xBE97F4E2B659331B(1);
		Global_15756 = 6;
		return;
	}
}

void func_114()
{
	func_132();
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
		unk_0x945880A1F9FE9E4F(5);
		unk_0x334F1DD67B2EC86A("cellphone@str");
		unk_0x334F1DD67B2EC86A("misscarsteal4@director_grip");
		if (!unk_0xC8AB6A5E6C1E6613())
		{
			unk_0xFDDA52BDEC2D820F(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1));
			unk_0x8359CF51370FC969(800);
		}
		unk_0x8BB3FA32294185BB(1f);
		unk_0xB5BB914B70AA434E(10f, 5f, 4);
		iLocal_396 = 1;
		iLocal_62 = 1;
	}
	if (iLocal_62 == 1)
	{
		func_131(&uLocal_137, 3, 0, "LESTER", 0, 1);
		if (func_14() == 0)
		{
			func_131(&uLocal_137, 0, unk_0x18F7BE9ACB7D08F4(), "MICHAEL", 0, 1);
		}
		if (func_14() == 1)
		{
			func_131(&uLocal_137, 1, unk_0x18F7BE9ACB7D08F4(), "FRANKLIN", 0, 1);
		}
		if (func_14() == 2)
		{
			func_131(&uLocal_137, 2, unk_0x18F7BE9ACB7D08F4(), "TREVOR", 0, 1);
		}
		iLocal_62 = 2;
	}
	if (iLocal_62 == 2)
	{
		if (unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) == 0)
		{
			if (func_14() == 0)
			{
				if (func_121(&uLocal_137, 12, "FHPBAUD", "FHPB_CHAT1", 7, 1, 0, 0, 0))
				{
					unk_0xB5BB914B70AA434E(5f, 5f, 4);
					unk_0xC1B1E9A034A63A62(0);
					iLocal_62 = 3;
				}
			}
			if (func_14() == 1)
			{
				if (func_121(&uLocal_137, 12, "FHPBAUD", "FHPB_CHAT3", 7, 1, 0, 0, 0))
				{
					unk_0xB5BB914B70AA434E(5f, 5f, 4);
					unk_0xC1B1E9A034A63A62(0);
					iLocal_62 = 3;
				}
			}
			if (func_14() == 2)
			{
				if (func_121(&uLocal_137, 12, "FHPBAUD", "FHPB_CHAT2", 7, 1, 0, 0, 0))
				{
					unk_0xB5BB914B70AA434E(5f, 5f, 4);
					unk_0xC1B1E9A034A63A62(0);
					iLocal_62 = 3;
				}
			}
		}
	}
	if (iLocal_62 == 3)
	{
		if (!unk_0xE769D9B5158D0F11(uLocal_59))
		{
			if (!func_120())
			{
				if (unk_0x83666F9FB8FEBD4B() > 10500)
				{
					uLocal_59 = func_118(Local_116, 1);
				}
			}
		}
		if (func_120())
		{
			iLocal_62 = 4;
		}
	}
	if (iLocal_62 == 4)
	{
		if (unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) == 0)
		{
			if (unk_0xC4B84EB67F78C1F0(iLocal_33, 0))
			{
				if (unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iLocal_33, 0))
				{
					if (unk_0xB84B6B13ADF5E3DF(iLocal_33))
					{
						if (unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), Local_116, 4f, 4f, 2f, 1, 1, 2))
						{
							if (func_116(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), 4f, 3, 0.5f, 0, 1, 0))
							{
								unk_0x9BEA833CAF67289C("FHPRB_STOP");
								if (unk_0xE769D9B5158D0F11(uLocal_59))
								{
									unk_0x40D517D991458154(&uLocal_59);
								}
								unk_0xB5BB914B70AA434E(5f, 5f, 4);
								func_115(0, -1);
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

void func_115(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_55909)
	{
	}
	Global_55909 = 0;
	if (bParam0)
	{
		Global_55910 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_67996)
		{
			if (Global_56126[Global_67997[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_67997[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_67996)
		{
			if (Global_67997[iVar0 /*9*/] > 0)
			{
				if (Global_67997[iVar0 /*9*/] == iParam1)
				{
					Global_67997[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

int func_116(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x9C7EE7DE7041A3F4(0, 71, 1);
	unk_0x9C7EE7DE7041A3F4(0, 72, 1);
	unk_0x9C7EE7DE7041A3F4(0, 76, 1);
	unk_0x9C7EE7DE7041A3F4(0, 73, 1);
	unk_0x9C7EE7DE7041A3F4(0, 59, 1);
	unk_0x9C7EE7DE7041A3F4(0, 60, 1);
	if (bParam5)
	{
		unk_0x9C7EE7DE7041A3F4(0, 75, 1);
	}
	unk_0x9C7EE7DE7041A3F4(0, 80, 1);
	if (!bParam6)
	{
		unk_0x9C7EE7DE7041A3F4(0, 69, 1);
		unk_0x9C7EE7DE7041A3F4(0, 70, 1);
		unk_0x9C7EE7DE7041A3F4(0, 68, 1);
	}
	unk_0x9C7EE7DE7041A3F4(0, 74, 1);
	unk_0x9C7EE7DE7041A3F4(0, 86, 1);
	unk_0x9C7EE7DE7041A3F4(0, 81, 1);
	unk_0x9C7EE7DE7041A3F4(0, 82, 1);
	unk_0x9C7EE7DE7041A3F4(0, 138, 1);
	unk_0x9C7EE7DE7041A3F4(0, 136, 1);
	unk_0x9C7EE7DE7041A3F4(0, 114, 1);
	unk_0x9C7EE7DE7041A3F4(0, 107, 1);
	unk_0x9C7EE7DE7041A3F4(0, 110, 1);
	unk_0x9C7EE7DE7041A3F4(0, 89, 1);
	unk_0x9C7EE7DE7041A3F4(0, 89, 1);
	unk_0x9C7EE7DE7041A3F4(0, 87, 1);
	unk_0x9C7EE7DE7041A3F4(0, 88, 1);
	unk_0x9C7EE7DE7041A3F4(0, 113, 1);
	unk_0x9C7EE7DE7041A3F4(0, 115, 1);
	unk_0x9C7EE7DE7041A3F4(0, 116, 1);
	unk_0x9C7EE7DE7041A3F4(0, 117, 1);
	unk_0x9C7EE7DE7041A3F4(0, 118, 1);
	unk_0x9C7EE7DE7041A3F4(0, 119, 1);
	unk_0x9C7EE7DE7041A3F4(0, 131, 1);
	unk_0x9C7EE7DE7041A3F4(0, 132, 1);
	unk_0x9C7EE7DE7041A3F4(0, 123, 1);
	unk_0x9C7EE7DE7041A3F4(0, 126, 1);
	unk_0x9C7EE7DE7041A3F4(0, 129, 1);
	unk_0x9C7EE7DE7041A3F4(0, 130, 1);
	unk_0x9C7EE7DE7041A3F4(0, 133, 1);
	unk_0x9C7EE7DE7041A3F4(0, 134, 1);
	unk_0x95C6D943AF847EEC();
	func_117(iParam0);
	if ((unk_0x5AFB8ED811F05E4D() - Global_29) > 500)
	{
		unk_0x7F8DAED41E5794FC(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x5AFB8ED811F05E4D();
	if (!unk_0x74C2FE037DFC8B4A(iParam0, 0))
	{
		if (unk_0x36E1A96E1D63ED91(unk_0x2A72627520A107B5(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_117(int iParam0)
{
	if (!unk_0x74C2FE037DFC8B4A(iParam0, 0))
	{
		if (unk_0x15E3947C9B9DDEC8(iParam0))
		{
			if (unk_0x1F8B50D0C3034AAE(iParam0))
			{
				unk_0xFE5D726DE23CEFF5(iParam0, 0);
			}
		}
	}
}

var func_118(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x29F0B4D7EFF08BF6(Param0);
	unk_0x0590222010A36CE4(uVar0, func_119(unk_0x44243F2E2F58B8E3(), 1f, 1f));
	unk_0x63EECA6600F1090E(uVar0, iParam3);
	return uVar0;
}

float func_119(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_120()
{
	if (Global_15756 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_121(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_130(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15804 = 0;
	Global_15763 = 1;
	Global_15770 = 0;
	Global_15765 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 0;
	Global_15761 = 0;
	Global_15808 = 0;
	Global_15810 = 0;
	if (iParam5 == 1)
	{
		Global_15768 = 1;
	}
	else
	{
		Global_15768 = 0;
	}
	Global_2621441 = 0;
	return func_122(sParam3, iParam4, bParam8);
}

int func_122(char* sParam0, int iParam1, bool bParam2)
{
	Global_15757 = 0;
	if (Global_15756 == 0 || Global_15758 == 2)
	{
		if (Global_15756 != 0)
		{
			if (iParam1 > Global_15758)
			{
				if (Global_15763 == 0)
				{
					unk_0xBE97F4E2B659331B(0);
					Global_14453.f_1 = 3;
					Global_15756 = 0;
					Global_15757 = 1;
					Global_15809 = 0;
					Global_15752 = 0;
					Global_15753 = 0;
					Global_15767 = 0;
					Global_15766 = 0;
					Global_14452 = 0;
				}
				else
				{
					func_113();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x85FDEF76CDBAD589())
		{
			return 0;
		}
		if (func_129(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_128();
		Global_15045 = { Global_15210 };
		Global_15762 = Global_15763;
		Global_15769 = Global_15770;
		Global_2621442 = Global_2621441;
		Global_15771 = { Global_15787 };
		Global_15764 = Global_15765;
		Global_16746 = Global_16747;
		Global_16754 = { Global_16760 };
		Global_16748 = Global_16749;
		Global_16750 = Global_16751;
		Global_16752 = Global_16753;
		Global_15375.f_370 = Global_16745;
		Global_15375.f_368 = Global_16743;
		Global_15375.f_369 = Global_16744;
		Global_15752 = Global_15753;
		if (Global_15762)
		{
			unk_0x62148293B793073B(&Global_2323, 20);
			unk_0x62148293B793073B(&Global_2324, 17);
			unk_0x62148293B793073B(&Global_2325, 0);
			if (bParam2)
			{
				func_127();
				if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14453.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14419 == 1)
			{
				return 0;
			}
			if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
			{
				if (unk_0x38000067CDE001D0(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (func_126())
				{
					return 0;
				}
				if (unk_0xAE8B7AC0DA6122BC(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (unk_0xDDA45FDD097F5240(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (unk_0x34F40618CEEAB490(unk_0x18F7BE9ACB7D08F4(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70852)
				{
					if (unk_0xE1F715CDDC50FD7F(unk_0x18F7BE9ACB7D08F4()))
					{
						return 0;
					}
					if (unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304()))
					{
						return 0;
					}
					if (unk_0xEEDFFBA2DC1CCDB0(unk_0x18F7BE9ACB7D08F4()))
					{
						return 0;
					}
					if (unk_0xAC991FD3AAB0DC56(unk_0x8CFC7D6E1DA5D304()))
					{
						return 0;
					}
				}
			}
			if (func_125())
			{
				return 0;
			}
			else
			{
				switch (Global_14453.f_1)
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
				if (unk_0xB03A1684359C50A1(Global_2323, 9))
				{
					return 0;
				}
			}
			func_124();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_123();
		return 1;
	}
	if (Global_15756 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15758 || iParam1 == Global_15758)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_113();
	}
	return 0;
}

void func_123()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14624[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xBE97F4E2B659331B(0);
	Global_15756 = 1;
}

void func_124()
{
	Global_15809 = Global_15808;
	Global_15803 = Global_15804;
	Global_15850 = { Global_15838 };
	Global_15856 = { Global_15844 };
	Global_15811 = Global_15810;
	Global_15880 = { Global_15862 };
	Global_15886 = { Global_15868 };
	Global_15892 = { Global_15874 };
	Global_15898 = { Global_15904 };
	Global_1638 = Global_1639;
	Global_1640 = Global_1641;
	Global_15767 = Global_15768;
	Global_15769 = Global_15770;
	Global_15771 = { Global_15787 };
	Global_15760 = Global_15761;
	Global_16772 = 0;
	Global_15805 = 0;
	Global_15806 = 0;
	unk_0x62148293B793073B(&Global_2324, 16);
}

int func_125()
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_126()
{
	int iVar0;
	int iVar1;
	
	if (Global_70852)
	{
		iVar0 = 0;
		unk_0x75CE6F8BEC2654E3(unk_0x18F7BE9ACB7D08F4(), &iVar1, 1);
		if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x4D73A339AD1764B4() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		if (unk_0x637828192EF718F7(unk_0x18F7BE9ACB7D08F4(), 78, 1))
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

void func_127()
{
	if (func_16(14))
	{
		if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[0 /*29*/])
			{
				Global_14453 = 0;
			}
			else if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[1 /*29*/])
			{
				Global_14453 = 1;
			}
			else if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[2 /*29*/])
			{
				Global_14453 = 2;
			}
			else
			{
				Global_14453 = 0;
			}
		}
	}
	else
	{
		Global_14453 = func_14();
		if (Global_14453 == 145)
		{
			Global_14453 = 3;
		}
		if (Global_70852)
		{
			Global_14453 = 3;
		}
		if (Global_14453 > 3)
		{
			Global_14453 = 3;
		}
	}
}

void func_128()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15045[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15045[iVar0 /*10*/].f_1), "", 24);
		Global_15045[iVar0 /*10*/].f_7 = 0;
		Global_15045[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15045.f_161 = -99;
	Global_15045.f_162 = { 0f, 0f, 0f };
}

bool func_129(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1357213.f_203[iParam1];
			}
			break;
	}
	return unk_0xB03A1684359C50A1(Global_1357213.f_1048, iParam0);
}

void func_130(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15210 = { *uParam0 };
	Global_1639 = iParam1;
	StringCopy(&Global_15826, sParam2, 24);
	Global_16745 = iParam5;
	if (iParam3 == 0)
	{
		Global_16743 = 1;
		Global_16741 = 0;
	}
	else
	{
		Global_16743 = 0;
		Global_16741 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16744 = 1;
		Global_16742 = 0;
	}
	else
	{
		Global_16744 = 0;
		Global_16742 = 1;
	}
}

void func_131(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_70852)
	{
		if (!unk_0x0FAE113CE72ED842(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x38ADC0C5F4F08C6D(iParam2, 0);
			}
			else
			{
				unk_0x38ADC0C5F4F08C6D(iParam2, 1);
			}
		}
		if (!unk_0x0FAE113CE72ED842(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x971E3DC2097859E3(iParam2, 0);
			}
			else
			{
				unk_0x971E3DC2097859E3(iParam2, 1);
			}
		}
	}
}

void func_132()
{
	if (unk_0xC4B84EB67F78C1F0(iLocal_33, 0))
	{
		if (unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iLocal_33, 0))
		{
			if (unk_0xB84B6B13ADF5E3DF(iLocal_33))
			{
				if (func_137("HELP_1"))
				{
					unk_0xEFF1F12403847394(1);
				}
				if (unk_0xE769D9B5158D0F11(uLocal_58))
				{
					unk_0x40D517D991458154(&uLocal_58);
				}
				if (unk_0xE769D9B5158D0F11(uLocal_61))
				{
					if (iLocal_395 == 1)
					{
						if (unk_0x5AFB8ED811F05E4D() < iLocal_109 + 7500)
						{
							unk_0x08FC50794202A47C();
						}
					}
					unk_0x40D517D991458154(&uLocal_61);
				}
				if (iLocal_28 == 4)
				{
					if (unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) == 0)
					{
						if (iLocal_469 == 0)
						{
							unk_0x633C8E78F68C0DAE("FHPRB_COPS");
							unk_0x9BEA833CAF67289C("FHPRB_LOST");
							iLocal_469 = 1;
						}
						if (iLocal_314 == 1)
						{
							if (unk_0x5AFB8ED811F05E4D() < iLocal_110 + 7500)
							{
								unk_0x08FC50794202A47C();
							}
							iLocal_314 = 0;
						}
						if (iLocal_62 > 3)
						{
							if (!unk_0xE769D9B5158D0F11(uLocal_59))
							{
								uLocal_59 = func_118(Local_116, 1);
							}
							if (iLocal_305 == 0)
							{
								if (!unk_0xC45919BF593ACF15())
								{
									func_136("GOD_2", 7500, 1);
									iLocal_305 = 1;
								}
							}
						}
					}
					else
					{
						if (unk_0xE769D9B5158D0F11(uLocal_59))
						{
							unk_0x40D517D991458154(&uLocal_59);
						}
						if (iLocal_314 == 0)
						{
							unk_0x08FC50794202A47C();
							func_136("GOD_4", 7500, -1);
							unk_0x9BEA833CAF67289C("FHPRB_COPS");
							iLocal_110 = unk_0x5AFB8ED811F05E4D();
							iLocal_314 = 1;
							iLocal_469 = 0;
						}
					}
				}
			}
			else
			{
				if (unk_0xE769D9B5158D0F11(uLocal_58))
				{
					unk_0x40D517D991458154(&uLocal_58);
				}
				if (unk_0xE769D9B5158D0F11(uLocal_59))
				{
					unk_0x40D517D991458154(&uLocal_59);
				}
				if (unk_0xC4B84EB67F78C1F0(iLocal_32, 0))
				{
					if (!unk_0xE769D9B5158D0F11(uLocal_61))
					{
						uLocal_61 = func_134(iLocal_32, 0, 0);
						unk_0x1DF6703E5077ABE1(uLocal_61, 1);
						if (unk_0xC45919BF593ACF15())
						{
							unk_0x08FC50794202A47C();
						}
						if (iLocal_395 == 0)
						{
							func_136("GOD_6", 7500, -1);
							iLocal_109 = unk_0x5AFB8ED811F05E4D();
							iLocal_395 = 1;
						}
						if (!func_137("HELP_1"))
						{
							func_133("HELP_1");
						}
					}
				}
			}
		}
		else
		{
			if (unk_0xE769D9B5158D0F11(uLocal_61))
			{
				unk_0x40D517D991458154(&uLocal_61);
			}
			if (unk_0xE769D9B5158D0F11(uLocal_59))
			{
				unk_0x40D517D991458154(&uLocal_59);
			}
			if (unk_0xC4B84EB67F78C1F0(iLocal_33, 0))
			{
				if (!unk_0xE769D9B5158D0F11(uLocal_58))
				{
					uLocal_58 = func_134(iLocal_33, 0, 0);
					unk_0x1DF6703E5077ABE1(uLocal_58, 1);
				}
			}
			if (iLocal_315 == 0)
			{
				unk_0x08FC50794202A47C();
				func_136("GOD_5", 7500, -1);
				iLocal_315 = 1;
			}
		}
	}
}

void func_133(char* sParam0)
{
	unk_0x2202872EA73499C3(sParam0);
	unk_0xF764171B43EBA5E4(0, 1, 1, -1);
}

int func_134(int iParam0, bool bParam1, bool bParam2)
{
	return func_135(iParam0, !bParam1, bParam2);
}

int func_135(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x31F12808DC47A9E5(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xA8EDC17CEEA40DFA(iParam0);
	if (unk_0x978B4E1292EBBE41(iParam0))
	{
		unk_0x0590222010A36CE4(uVar0, func_119(unk_0x44243F2E2F58B8E3(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x1DF6703E5077ABE1(uVar0, bParam1);
		}
		else
		{
			unk_0x71925FF3194E84CE(uVar0, 2);
		}
	}
	else if (unk_0xB6C2454233C8F532(iParam0))
	{
		unk_0x0590222010A36CE4(uVar0, func_119(unk_0x44243F2E2F58B8E3(), 0.7f, 0.7f));
		unk_0x1DF6703E5077ABE1(uVar0, bParam1);
	}
	else if (unk_0x2E4A20D66F5AD135(iParam0))
	{
		unk_0x0590222010A36CE4(uVar0, func_119(unk_0x44243F2E2F58B8E3(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_136(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x74D144ED1523F85D(sParam0);
	unk_0x0ADA506C37566A2D(iParam1, 1);
}

bool func_137(char* sParam0)
{
	unk_0x24BB6189982CE7D6(sParam0);
	return unk_0xF2850FB50EE28440(0);
}

void func_138()
{
	if (iLocal_62 > 1)
	{
		func_132();
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
		unk_0x831CD0FBFB26EC7E("cellphone@str");
		unk_0x831CD0FBFB26EC7E("misscarsteal4@director_grip");
		if (unk_0xC4B84EB67F78C1F0(iLocal_33, 0))
		{
			if (!unk_0xE769D9B5158D0F11(uLocal_58))
			{
				uLocal_58 = func_134(iLocal_33, 0, 0);
				unk_0x1DF6703E5077ABE1(uLocal_58, true);
			}
		}
		unk_0x945880A1F9FE9E4F(0);
		if (unk_0xEC0ECEF2AF3FDA8D())
		{
			if (!func_30())
			{
				unk_0xFDDA52BDEC2D820F(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1));
			}
			if (unk_0x31F12808DC47A9E5(iLocal_34))
			{
				func_27(iLocal_34, -1, 1);
				unk_0x4F5FF3F3FDCAB15D(&iLocal_34);
			}
			else
			{
				func_27(0, -1, 1);
			}
		}
		if (!unk_0xC8AB6A5E6C1E6613())
		{
			unk_0x8359CF51370FC969(800);
		}
		unk_0x9BEA833CAF67289C("FHPRB_START");
		unk_0x7EE425AE3317BA69(43.5f, -615.8f, 32.4f, 50f, 1, 0, 0, 0);
		iLocal_396 = 1;
		iLocal_62 = 1;
	}
	if (iLocal_62 == 1)
	{
		if (iLocal_465 == 0)
		{
			if (!unk_0xC45919BF593ACF15())
			{
				unk_0xB5BB914B70AA434E(5f, 8f, 4);
				func_136("GOD_1", 7500, 1);
				iLocal_465 = 1;
			}
		}
		if (unk_0xC4B84EB67F78C1F0(iLocal_33, 0))
		{
			if (unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iLocal_33, 0))
			{
				unk_0x9BEA833CAF67289C("FHPRB_TRUCK");
				if (unk_0xE769D9B5158D0F11(uLocal_58))
				{
					unk_0x40D517D991458154(&uLocal_58);
				}
				func_139(656, 0);
				unk_0x8BB3FA32294185BB(1f);
				iLocal_62 = 2;
			}
		}
	}
	if (iLocal_62 == 2)
	{
		if (unk_0xC4B84EB67F78C1F0(iLocal_33, 0))
		{
			if (unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iLocal_33, 0))
			{
				if (unk_0xB84B6B13ADF5E3DF(iLocal_33))
				{
					if (func_137("HELP_1"))
					{
						unk_0xEFF1F12403847394(1);
					}
					if (unk_0xE769D9B5158D0F11(uLocal_58))
					{
						unk_0x40D517D991458154(&uLocal_58);
					}
					if (unk_0xE769D9B5158D0F11(uLocal_61))
					{
						unk_0x40D517D991458154(&uLocal_61);
					}
					if (unk_0x15EE504466B7BBD3(Local_119, Local_132, 1) < 100f)
					{
						if (unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) == 0)
						{
							if (iLocal_316 == 1)
							{
								if (unk_0x5AFB8ED811F05E4D() < iLocal_110 + 7500)
								{
									unk_0x08FC50794202A47C();
									iLocal_316 = 0;
								}
							}
							if (iLocal_417 == 0)
							{
								unk_0xB5BB914B70AA434E(5f, 8f, 4);
								func_136("GOD_7", 7500, -1);
								iLocal_417 = 1;
							}
						}
						else if (iLocal_316 == 0)
						{
							unk_0xB5BB914B70AA434E(5f, 8f, 4);
							unk_0x9581BDC15A63820A("SCRIPTED_SCANNER_REPORT_BS_PREP_B_01", 0f);
							iLocal_110 = unk_0x5AFB8ED811F05E4D();
							func_136("GOD_4", 7500, -1);
							iLocal_316 = 1;
						}
					}
					else if (unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) == 0)
					{
						iLocal_62 = 0;
						iLocal_28 = 4;
					}
				}
				else
				{
					if (unk_0xE769D9B5158D0F11(uLocal_58))
					{
						unk_0x40D517D991458154(&uLocal_58);
					}
					if (unk_0xC4B84EB67F78C1F0(iLocal_32, 0))
					{
						if (!unk_0xE769D9B5158D0F11(uLocal_61))
						{
							uLocal_61 = func_134(iLocal_32, 0, 0);
							unk_0x1DF6703E5077ABE1(uLocal_61, true);
							if (unk_0xC45919BF593ACF15())
							{
								unk_0x08FC50794202A47C();
							}
							if (iLocal_395 == 0)
							{
								func_136("GOD_6", 7500, -1);
								iLocal_395 = 1;
							}
							if (!func_137("HELP_1"))
							{
								func_133("HELP_1");
							}
						}
					}
				}
			}
			else
			{
				if (unk_0xE769D9B5158D0F11(uLocal_61))
				{
					unk_0x40D517D991458154(&uLocal_61);
				}
				if (unk_0xC4B84EB67F78C1F0(iLocal_33, 0))
				{
					if (!unk_0xE769D9B5158D0F11(uLocal_58))
					{
						uLocal_58 = func_134(iLocal_33, 0, 0);
						unk_0x1DF6703E5077ABE1(uLocal_58, true);
					}
				}
				if (iLocal_315 == 0)
				{
					unk_0x08FC50794202A47C();
					func_136("GOD_5", 7500, -1);
					iLocal_315 = 1;
				}
			}
		}
	}
}

void func_139(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_55911 = iParam0;
	if (!Global_55909)
	{
		Global_55909 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_67996)
		{
			if (Global_67997[iVar0 /*9*/] == iParam0)
			{
				Global_67997[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_140()
{
	if (iLocal_62 == 0)
	{
		if (iLocal_304 == 1)
		{
			func_34();
			iLocal_304 = 0;
		}
		func_163();
		func_106();
		if (!unk_0xC8AB6A5E6C1E6613())
		{
			unk_0xFDDA52BDEC2D820F(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1));
			unk_0x8359CF51370FC969(800);
		}
		if (unk_0x31F12808DC47A9E5(Global_89471[3]))
		{
			if (unk_0xC4B84EB67F78C1F0(Global_89471[3], 0))
			{
				if (unk_0xB6353CAE3EBC0919(unk_0x4F69FBD64CDF125B(Global_89471[3])))
				{
					unk_0x337F2213526139E0(Global_89471[3], 1, 1);
					func_142(1.0095f, -631.9655f, 34.7259f, 349.0681f, 0, 145);
				}
				if (((unk_0x881022B41FD53CD6(unk_0x4F69FBD64CDF125B(Global_89471[3])) || unk_0x422717A3330EA45D(unk_0x4F69FBD64CDF125B(Global_89471[3]))) || unk_0x93CA7A248A4D402A(unk_0x4F69FBD64CDF125B(Global_89471[3]))) || unk_0x309C05EAA86E194E(unk_0x4F69FBD64CDF125B(Global_89471[3])))
				{
					unk_0x337F2213526139E0(Global_89471[3], 1, 1);
					func_142(49.0052f, -599.5534f, 30.6299f, 158.5544f, 0, 145);
				}
			}
		}
		func_141(79);
		iLocal_396 = 1;
		iLocal_62 = 1;
	}
	if (iLocal_62 == 1)
	{
		iLocal_62 = 0;
		iLocal_28 = 3;
	}
}

void func_141(int iParam0)
{
	if (Global_89896 != -1)
	{
		if (iParam0 == Global_89896)
		{
			Global_89900 = 1;
			return;
		}
	}
}

void func_142(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	struct<3> Var0;
	var uVar3;
	
	if (unk_0x31F12808DC47A9E5(Global_95145.f_4))
	{
		if (unk_0xC4B84EB67F78C1F0(Global_95145.f_4, 0))
		{
			if (func_162(24) != Global_95145.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_159(unk_0x761660F5CE986DC4(Global_95145.f_4, 1), iParam5, &Var0, &uVar3))
					{
						Param0 = { Var0 };
						fParam3 = uVar3;
					}
				}
				func_143(Global_95145.f_4, Param0, fParam3, 24, 0);
			}
		}
	}
}

void func_143(int iParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;
	
	if (unk_0x31F12808DC47A9E5(iParam0) && unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0x31F12808DC47A9E5(Global_69674.f_484[25]) && unk_0xC4B84EB67F78C1F0(Global_69674.f_484[25], 0))
			{
				if (Global_69674.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0x88EA695420CF2150(iParam0) || unk_0x4F69FBD64CDF125B(iParam0) == joaat("bus")) || unk_0x4F69FBD64CDF125B(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_158(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_40(iParam0, &Var0);
		if (func_97(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0x761660F5CE986DC4(iParam0, 1) };
			uParam4 = unk_0x93FDA3BF59E7B77F(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0x6E987D62C8535B6E(unk_0xFCA64981FEF7C913()) != joaat("vehicle_gen_controller"))
			{
				Global_70662 = unk_0x6E987D62C8535B6E(unk_0xFCA64981FEF7C913());
			}
		}
		func_156(iParam5, &Var0, Param1, uParam4, func_59(iParam0));
		func_144(iParam5, iParam0, 0);
	}
}

void func_144(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_69(&(Global_69674.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0xB03A1684359C50A1(Global_69674.f_555[0 /*21*/].f_9, 12) && !unk_0xB03A1684359C50A1(Global_69674.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_69674.f_555[0 /*21*/].f_4 != unk_0x4F69FBD64CDF125B(iParam1))
		{
			return;
		}
	}
	if (Global_70581 != -1 && Global_70581 != iParam0)
	{
		return;
	}
	if (unk_0x31F12808DC47A9E5(iParam1))
	{
		if (unk_0xC4B84EB67F78C1F0(iParam1, 0))
		{
			if (!unk_0x90D1FDC9D31B7BE1(iParam1))
			{
				unk_0x337F2213526139E0(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_104551.f_32429.f_4801 = func_145();
			}
			if (iParam1 != Global_69674.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_162(iParam0);
					if ((unk_0x31F12808DC47A9E5(iVar0) && unk_0xC4B84EB67F78C1F0(iVar0, 0)) && iParam1 != iVar0)
					{
						func_39(iVar0, 145);
					}
				}
				Global_70580 = iParam1;
				Global_70581 = iParam0;
				Global_70582 = iParam2;
			}
		}
	}
}

var func_145()
{
	var uVar0;
	
	func_155(&uVar0, unk_0xB093145A4ED05C87());
	func_154(&uVar0, unk_0x4BF279EB036481A0());
	func_153(&uVar0, unk_0xF0B96EE16BA9FBE8());
	func_148(&uVar0, unk_0x518720E0DE404FFC());
	func_147(&uVar0, unk_0x5E3E9A684A609866());
	func_146(&uVar0, unk_0xFBE778F13510E585());
	return uVar0;
}

void func_146(var uParam0, int iParam1)
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

void func_147(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_148(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_152(*uParam0);
	iVar1 = func_150(*uParam0);
	if (iParam1 < 1 || iParam1 > func_149(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_149(int iParam0, int iParam1)
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

var func_150(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_151(unk_0xB03A1684359C50A1(iParam0, 31), -1, 1)) + 2011;
}

int func_151(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_152(var uParam0)
{
	return uParam0 & 15;
}

void func_153(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_154(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_155(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

void func_156(int iParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6)
{
	if (func_69(&(Global_69674.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xB03A1684359C50A1(Global_69674.f_555[0 /*21*/].f_9, 10))
		{
			func_157(iParam0);
			func_66(uParam1, &(Global_104551.f_32429.f_69[Global_69674.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0xB03A1684359C50A1(Global_69674.f_555[0 /*21*/].f_9, 11))
			{
				Global_104551.f_32429.f_1864[Global_69674.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_104551.f_32429.f_1934[Global_69674.f_555[0 /*21*/].f_14] = uParam5;
			}
			else
			{
				Global_104551.f_32429.f_1864[Global_69674.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_104551.f_32429.f_1934[Global_69674.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_104551.f_32429.f_1958[Global_69674.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_62(iParam0, 1);
		}
	}
}

void func_157(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_69(&(Global_69674.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x31F12808DC47A9E5(Global_69674.f_139[iParam0]))
		{
			unk_0x337F2213526139E0(Global_69674.f_139[iParam0], 1, 1);
			unk_0x4F5FF3F3FDCAB15D(&(Global_69674.f_139[iParam0]));
			Global_69674.f_139[iParam0] = 0;
		}
		if (unk_0xB03A1684359C50A1(Global_69674.f_555[0 /*21*/].f_9, 13))
		{
			func_62(iParam0, 0);
		}
	}
}

void func_158(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_157(iParam0);
	func_62(iParam0, 0);
}

int func_159(struct<3> Param0, int iParam3, var uParam4, var uParam5)
{
	int iVar0;
	
	iVar0 = func_160(Param0, iParam3, 1);
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

int func_160(struct<3> Param0, int iParam3, int iParam4)
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
		if (Global_88012[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_88012[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_161(iVar0) || iParam4 == 0)
				{
					fVar1 = unk_0x15EE504466B7BBD3(Param0, Global_88012[iVar0 /*10*/].f_3, 1);
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

bool func_161(int iParam0)
{
	return unk_0xB03A1684359C50A1(Global_104551.f_7199[iParam0], 0);
}

int func_162(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_69674.f_139[iParam0];
}

void func_163()
{
	Global_87152 = 1;
}

void func_164()
{
	unk_0x9A63F1CF5AD1028E(unk_0x8CFC7D6E1DA5D304(), 1);
	unk_0x8BB3FA32294185BB(0.01f);
	uLocal_53 = unk_0x1701E0E6A11D6B65(861.6f, -1599.7f, 27.9f, 961.8f, -1476.4f, 49.7f, 0, 1, 1, 1);
	uLocal_54 = unk_0x1701E0E6A11D6B65(851.2f, -1598.2f, 29.7f, 855.7f, -1587.1f, 33f, 0, 1, 1, 1);
	uLocal_55 = unk_0x1701E0E6A11D6B65(859.4f, -1569.6f, 32.3f, 865.4f, -1561f, 28.7f, 0, 1, 1, 1);
	uLocal_56 = unk_0x1701E0E6A11D6B65(939f, -1576.8f, 33f, 943.8f, -1571.3f, 28.9f, 0, 1, 1, 1);
	uLocal_51 = unk_0x1701E0E6A11D6B65(5.4f, -588f, 39.1f, 57.4f, -678.8f, 25.4f, 0, 1, 1, 1);
	uLocal_52 = unk_0x1701E0E6A11D6B65(50.9f, -641.6f, 37.7f, 81.1f, -608.4f, 29.5f, 0, 1, 1, 1);
	if (func_29())
	{
		if (Global_87151 == 1)
		{
			func_166(28.4065f, -608.9371f, 30.6293f, 70.7778f, 1, 0);
			iLocal_483 = 1;
			iLocal_304 = 1;
			iLocal_62 = 0;
			iLocal_28 = 5;
		}
		else if (func_165() == 0)
		{
			if (func_105() && func_102(7f, 7f, 7f, 1))
			{
				func_166(818.8139f, -1610.406f, 30.7951f, 264.412f, 1, 0);
			}
			else
			{
				func_166(825.5603f, -1605.825f, 30.9548f, 312.5221f, 1, 0);
			}
			iLocal_304 = 1;
			iLocal_483 = 1;
			iLocal_62 = 0;
			iLocal_28 = 3;
		}
	}
	else if (func_201(0))
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

int func_165()
{
	if (!Global_92829 == 10 && !Global_92829 == 9)
	{
		return 0;
	}
	return Global_92829.f_2;
}

void func_166(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	if (func_29())
	{
		unk_0xDA6A6B59F261B209(0);
		unk_0x62148293B793073B(&(Global_92829.f_20), 2);
		unk_0xDF94C6DB72E69D64(1);
		if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
		{
			unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 0, 0);
		}
		Global_92825 = { Param0 };
		Global_92828 = fParam3;
		Global_92824 = 1;
		if (iParam4 == 1)
		{
			unk_0xD2A9C3F486236CC5(&(Global_92829.f_20), 14);
		}
		else
		{
			unk_0x62148293B793073B(&(Global_92829.f_20), 14);
		}
		if (iParam5 == 1)
		{
			unk_0xD2A9C3F486236CC5(&(Global_92829.f_20), 24);
		}
		else
		{
			unk_0x62148293B793073B(&(Global_92829.f_20), 24);
		}
		func_28(1);
	}
}

void func_167()
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

void func_168()
{
	if (!unk_0x31F12808DC47A9E5(iLocal_49))
	{
		if (unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), 45f, -616.2f, 30.8f, 1) < 150f)
		{
			unk_0x9016574B77A748EE(joaat("s_m_m_security_01"));
			if (unk_0xEDFE27D1AEA0EA7F(joaat("s_m_m_security_01")))
			{
				iLocal_49 = unk_0x364B87C5C64BD100(26, joaat("s_m_m_security_01"), 64.904f, -617.9949f, 30.7028f, 223.555f, 1, 1);
				unk_0x764AFC5A3A16C2B0(iLocal_49, 324, 1);
			}
			unk_0x419C9117019F2E5A(joaat("s_m_m_security_01"));
		}
	}
	if (unk_0x31F12808DC47A9E5(iLocal_49))
	{
		if (!unk_0x0FAE113CE72ED842(iLocal_49))
		{
			if (unk_0xB6B12179F5BB7520(65.2f, -617.2f, 30.8f, 5f, 0))
			{
				if (iLocal_456 == 0)
				{
					if (unk_0x3AAE8FF7FB37F69E(iLocal_49))
					{
						unk_0x267F7A2DFDFFB077(iLocal_49);
					}
					else
					{
						unk_0xD9FCA20C1C5553F7(iLocal_49);
					}
					unk_0x71F977266792711C(iLocal_49, 65.2f, -617.2f, 31f, 2f, 0);
					unk_0x10F31830C95ED2E5(iLocal_49, 1);
					iLocal_113 = unk_0x5AFB8ED811F05E4D();
					iLocal_456 = 1;
				}
				else if (unk_0x5AFB8ED811F05E4D() > iLocal_113 + 5000)
				{
					if (!unk_0x828F2092D05A7F39(iLocal_49))
					{
						iLocal_456 = 0;
					}
				}
			}
			if (func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_49, 1) < 20f)
			{
				if (iLocal_421 == 0)
				{
					unk_0x6016A20BFEAEFE11(iLocal_49, unk_0x18F7BE9ACB7D08F4(), -1, 1072, 3);
					iLocal_421 = 1;
				}
			}
			else if (iLocal_421 == 1)
			{
				unk_0x6016A20BFEAEFE11(iLocal_49, unk_0x18F7BE9ACB7D08F4(), 1, 0, 2);
				iLocal_421 = 0;
			}
		}
	}
	if (unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), 45f, -616.2f, 30.8f, 1) < 50f)
	{
		if (iLocal_457 == 0)
		{
			iLocal_114 = 498972213;
			iLocal_115 = -512924631;
			unk_0x3CE3FC30701CFDBF(iLocal_114, joaat("prop_sec_barrier_ld_01a"), 61f, -633f, 32f, 1, 1, 0);
			unk_0x3CE3FC30701CFDBF(iLocal_115, joaat("prop_sec_barrier_ld_01a"), 66f, -618f, 32f, 1, 1, 0);
			iLocal_457 = 1;
		}
		if (iLocal_457 == 1)
		{
			if (unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) == 0)
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
						unk_0xFF035B24ADC36682(iLocal_114, fLocal_135, 0, 1);
						unk_0xFF035B24ADC36682(iLocal_115, fLocal_135, 0, 1);
						unk_0xF23A1E4D6AD3CAD2(iLocal_114, 4, 0, 1);
						unk_0xF23A1E4D6AD3CAD2(iLocal_115, 4, 0, 1);
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
						unk_0xFF035B24ADC36682(iLocal_114, fLocal_135, 0, 1);
						unk_0xFF035B24ADC36682(iLocal_115, fLocal_135, 0, 1);
						unk_0xF23A1E4D6AD3CAD2(iLocal_114, 4, 0, 1);
						unk_0xF23A1E4D6AD3CAD2(iLocal_115, 4, 0, 1);
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
						unk_0xFF035B24ADC36682(iLocal_114, fLocal_135, 0, 1);
						unk_0xFF035B24ADC36682(iLocal_115, fLocal_135, 0, 1);
						unk_0xF23A1E4D6AD3CAD2(iLocal_114, 4, 0, 1);
						unk_0xF23A1E4D6AD3CAD2(iLocal_115, 4, 0, 1);
						iLocal_422 = 1;
					}
				}
			}
		}
		if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 62.90151f, -638.6329f, 29.9188f, 70.78919f, -617.1338f, 36.91788f, 10.75f, 0, 1, 0))
		{
			if (unk_0x31F12808DC47A9E5(iLocal_49))
			{
				if (!unk_0x0FAE113CE72ED842(iLocal_49))
				{
					if (unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) == 0)
					{
						if (iLocal_419 == 0)
						{
							if (iLocal_418 == 0)
							{
								func_131(&uLocal_137, 4, iLocal_49, "FHPBSecGuard", 0, 1);
								if (func_169(&uLocal_137, "FHPBAUD", "FHPB_CHAT20", 7, 0, 0, 0))
								{
									iLocal_418 = 1;
								}
							}
						}
						else if (iLocal_420 == 0)
						{
							func_131(&uLocal_137, 4, iLocal_49, "FHPBSecGuard", 0, 1);
							if (func_169(&uLocal_137, "FHPBAUD", "FHPB_CHAT22", 7, 0, 0, 0))
							{
								iLocal_420 = 1;
							}
						}
					}
					else if (iLocal_419 == 0)
					{
						func_131(&uLocal_137, 4, iLocal_49, "FHPBSecGuard", 0, 1);
						if (func_169(&uLocal_137, "FHPBAUD", "FHPB_CHAT21", 7, 0, 0, 0))
						{
							iLocal_419 = 1;
						}
					}
				}
			}
		}
	}
}

bool func_169(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_130(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15763 = 0;
	Global_15765 = 0;
	Global_15770 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 0;
	Global_2621441 = 0;
	return func_122(sParam2, iParam3, 0);
}

float func_170(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x74C2FE037DFC8B4A(iParam0, 0))
	{
		Var0 = { unk_0x761660F5CE986DC4(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x761660F5CE986DC4(iParam0, 0) };
	}
	if (!unk_0x74C2FE037DFC8B4A(iParam1, 0))
	{
		Var3 = { unk_0x761660F5CE986DC4(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x761660F5CE986DC4(iParam1, 0) };
	}
	return unk_0x15EE504466B7BBD3(Var0, Var3, iParam2);
}

void func_171()
{
	int iVar0;
	
	if (!unk_0xC45919BF593ACF15())
	{
		if (!func_175() || !unk_0xA926FCC2AFC26766())
		{
			if (iLocal_28 == 3)
			{
				if (!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0) && iLocal_31 == 0)
				{
					if (func_14() == 0)
					{
						if (iLocal_29 == 1)
						{
							if (iLocal_392 == 0)
							{
								if (func_173() && func_172())
								{
									if (func_169(&uLocal_137, "SOL1AUD", "SOL1_SEE5", 7, 0, 0, 0))
									{
										iLocal_112 = unk_0x5AFB8ED811F05E4D();
										iLocal_392 = 1;
									}
								}
							}
						}
						if (iLocal_29 == 1)
						{
							if (iLocal_392 == 1 && unk_0x5AFB8ED811F05E4D() > iLocal_112 + 7000)
							{
								if (func_173() && func_172())
								{
									if (func_169(&uLocal_137, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
									{
										iLocal_112 = unk_0x5AFB8ED811F05E4D();
									}
								}
							}
						}
					}
					if (iLocal_29 == 2)
					{
						if (iLocal_430 == 0)
						{
							if (func_173())
							{
								if (func_169(&uLocal_137, "SOL1AUD", "SOL1_SEC3", 7, 0, 0, 0))
								{
									iLocal_95 = unk_0x5AFB8ED811F05E4D();
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
						if (func_173() && func_172())
						{
							if (func_169(&uLocal_137, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
							{
								iLocal_108 = unk_0x5AFB8ED811F05E4D();
								iLocal_455 = 1;
							}
						}
					}
					else if (unk_0x5AFB8ED811F05E4D() > iLocal_108 + 8000)
					{
						if (func_173() && func_172())
						{
							if (func_169(&uLocal_137, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
							{
								iLocal_108 = unk_0x5AFB8ED811F05E4D();
							}
						}
					}
				}
				if (iLocal_29 == 4)
				{
					if (iLocal_391 == 0)
					{
						func_112();
						if (func_173())
						{
							unk_0x75CE6F8BEC2654E3(unk_0x18F7BE9ACB7D08F4(), &iVar0, 1);
							if (iVar0 != joaat("weapon_unarmed") && iVar0 != 0)
							{
								if (func_169(&uLocal_137, "SOL1AUD", "SOL1_ARM3", 7, 0, 0, 0))
								{
									iLocal_77 = unk_0x5AFB8ED811F05E4D();
									iLocal_387 = 1;
									iLocal_391 = 1;
								}
							}
							else
							{
								iLocal_77 = unk_0x5AFB8ED811F05E4D();
								iLocal_387 = 1;
								iLocal_391 = 1;
							}
						}
					}
					if (iLocal_391 == 1)
					{
						if (iLocal_387 == 0)
						{
							iLocal_77 = unk_0x5AFB8ED811F05E4D();
							iLocal_387 = 1;
						}
						if (iLocal_387 == 1)
						{
							if (unk_0x5AFB8ED811F05E4D() > iLocal_77 + 9000)
							{
								if (func_173())
								{
									if (func_169(&uLocal_137, "SOL1AUD", "SOL1_PAN3", 7, 0, 0, 0))
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
								if (func_173())
								{
									if (func_169(&uLocal_137, "SOL1AUD", "SOL1_STEAL3", 7, 0, 0, 0))
									{
										iLocal_389 = 1;
									}
								}
							}
						}
					}
					if (iLocal_388 == 0)
					{
						if (unk_0x31F12808DC47A9E5(iLocal_33))
						{
							if (unk_0xC4B84EB67F78C1F0(iLocal_33, 0))
							{
								if (unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iLocal_33, 0))
								{
									if (func_173())
									{
										if (func_169(&uLocal_137, "SOL1AUD", "SOL1_OUT3", 7, 0, 0, 0))
										{
											iLocal_78 = unk_0x5AFB8ED811F05E4D();
											iLocal_389 = 1;
										}
									}
								}
							}
						}
					}
					if (unk_0x5AFB8ED811F05E4D() > iLocal_78 + 10000)
					{
						if (unk_0x31F12808DC47A9E5(iLocal_33))
						{
							if (unk_0xC4B84EB67F78C1F0(iLocal_33, 0))
							{
								if (unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iLocal_33, 0))
								{
									if (func_173())
									{
										if (func_169(&uLocal_137, "SOL1AUD", "SOL1_OUT3", 7, 0, 0, 0))
										{
											iLocal_78 = unk_0x5AFB8ED811F05E4D();
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
							if (func_173())
							{
								if (func_169(&uLocal_137, "SOL1AUD", "SOL1_SEC3", 7, 0, 0, 0))
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

int func_172()
{
	if (func_14() == 0)
	{
		func_131(&uLocal_137, 0, unk_0x18F7BE9ACB7D08F4(), "MICHAEL", 0, 1);
		return 1;
	}
	if (func_14() == 1)
	{
		func_131(&uLocal_137, 1, unk_0x18F7BE9ACB7D08F4(), "FRANKLIN", 0, 1);
		return 1;
	}
	if (func_14() == 2)
	{
		func_131(&uLocal_137, 2, unk_0x18F7BE9ACB7D08F4(), "TREVOR", 0, 1);
		return 1;
	}
	return 0;
}

int func_173()
{
	int iVar0;
	
	iLocal_66 = 0;
	while (iLocal_66 <= 6)
	{
		if (unk_0x31F12808DC47A9E5(iLocal_35[iLocal_66]))
		{
			if (!unk_0x0FAE113CE72ED842(iLocal_35[iLocal_66]))
			{
				iVar0 = func_174(unk_0x18F7BE9ACB7D08F4(), iLocal_302, 0, 0, -1);
				if (unk_0x31F12808DC47A9E5(iVar0))
				{
					if (!unk_0x0FAE113CE72ED842(iVar0))
					{
					}
				}
				if (iVar0 == iLocal_35[iLocal_66] && func_170(unk_0x18F7BE9ACB7D08F4(), iVar0, 1) < 15f)
				{
					func_131(&uLocal_137, 5, iLocal_35[iLocal_66], "CONSTRUCTION3", 0, 1);
					return 1;
				}
			}
		}
		iLocal_66++;
	}
	return 0;
}

int func_174(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0[16];
	int iVar17;
	
	iVar17 = 0;
	if (!unk_0x0FAE113CE72ED842(iParam0))
	{
		unk_0x74A7D93DBA7322F5(iParam0, &iVar0, iParam4);
		iVar17 = 0;
		while (iVar17 <= (iVar0 - 1))
		{
			if (unk_0x31F12808DC47A9E5(iVar0[iVar17]))
			{
				if (!unk_0x0FAE113CE72ED842(iVar0[iVar17]))
				{
					if (unk_0x773D11D22FA84F6D(iVar0[iVar17]) == iParam1)
					{
						if (iParam2 <= 0)
						{
							if (iParam3 == 1)
							{
								if (unk_0x3AAE8FF7FB37F69E(iVar0[iVar17]))
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
							if (unk_0x31F12808DC47A9E5(iVar0[(iVar17 + iParam2)]))
							{
								if (!unk_0x0FAE113CE72ED842(iVar0[(iVar17 + iParam2)]))
								{
									if (unk_0x773D11D22FA84F6D(iVar0[(iVar17 + iParam2)]) == iParam1)
									{
										if (iParam3 == 1)
										{
											if (unk_0x3AAE8FF7FB37F69E(iVar0[(iVar17 + iParam2)]))
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

int func_175()
{
	if (Global_15756 != 0 || unk_0x85FDEF76CDBAD589())
	{
		return 1;
	}
	return 0;
}

void func_176()
{
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (unk_0x11879DABC3CC8D46(unk_0x18F7BE9ACB7D08F4()) && unk_0xAADA5865C8BFAE94(unk_0x18F7BE9ACB7D08F4()))
		{
			unk_0x8BB3FA32294185BB(0f);
		}
		else
		{
			unk_0x8BB3FA32294185BB(1f);
		}
	}
	func_183();
	if (iLocal_404[0])
	{
		if (func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_43[0], 1) < 20f && unk_0x6A180E89A0F78BEE(iLocal_43[0], unk_0x18F7BE9ACB7D08F4()))
		{
			if (iLocal_433[0] == 0)
			{
				unk_0x6016A20BFEAEFE11(iLocal_43[0], unk_0x18F7BE9ACB7D08F4(), -1, 1072, 3);
				iLocal_433[0] = 1;
			}
			if (iLocal_433[0] == 1)
			{
				if (unk_0x2BBAA45ECDE3DAE2(iLocal_43[0], 150319005) != 0 || unk_0x2BBAA45ECDE3DAE2(iLocal_43[0], 150319005) != 1)
				{
					iLocal_433[0] = 0;
				}
			}
		}
		else if (iLocal_433[0] == 1)
		{
			unk_0x6016A20BFEAEFE11(iLocal_43[0], unk_0x18F7BE9ACB7D08F4(), 1, 0, 2);
			iLocal_433[0] = 0;
		}
	}
	if (iLocal_404[1])
	{
		if (func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_43[1], 1) < 20f && unk_0x6A180E89A0F78BEE(iLocal_43[1], unk_0x18F7BE9ACB7D08F4()))
		{
			if (iLocal_433[1] == 0)
			{
				unk_0x6016A20BFEAEFE11(iLocal_43[1], unk_0x18F7BE9ACB7D08F4(), -1, 1072, 3);
				iLocal_433[1] = 1;
			}
			if (iLocal_433[1] == 1)
			{
				if (unk_0x2BBAA45ECDE3DAE2(iLocal_43[1], 150319005) != 0 || unk_0x2BBAA45ECDE3DAE2(iLocal_43[1], 150319005) != 1)
				{
					iLocal_433[1] = 0;
				}
			}
		}
		else if (iLocal_433[1] == 1)
		{
			unk_0x6016A20BFEAEFE11(iLocal_43[1], unk_0x18F7BE9ACB7D08F4(), 1, 0, 2);
			iLocal_433[1] = 0;
		}
	}
	if (iLocal_404[0] && iLocal_404[1])
	{
		if (func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_43[0], 1) < func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_43[1], 1))
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
			if (unk_0x787E8EECD78022DE("SCRAP_SECURITY"))
			{
				if (!unk_0x33A2D945049A54A7("SCRAP_SECURITY"))
				{
					unk_0x524D5209C3686CCC("SCRAP_SECURITY", 1);
				}
				if (unk_0x33A2D945049A54A7("SCRAP_SECURITY"))
				{
					if (unk_0x31F12808DC47A9E5(iLocal_43[0]))
					{
						if (!unk_0x0FAE113CE72ED842(iLocal_43[0]))
						{
							if (!unk_0x8FE8711DE0342959(iLocal_43[0]))
							{
								if (unk_0xB6B12179F5BB7520(863.1551f, -1564.572f, 29.3231f, 5f, 1))
								{
									iLocal_105[0] = unk_0x5AFB8ED811F05E4D();
									if (!unk_0x1A6BBE20E3A2D0E2(iLocal_43[0]))
									{
										if (iLocal_462[0] == 0)
										{
											unk_0x9B869F23DD5B668A(iLocal_43[0], 863.1551f, -1564.572f, 29.3231f, 5f, 0);
											iLocal_459[0] = 0;
											iLocal_462[0] = 1;
										}
									}
								}
								else if (unk_0x5AFB8ED811F05E4D() > iLocal_105[0] + 2000)
								{
									if (unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(iLocal_43[0], 1), 863.1551f, -1564.572f, 29.3231f, 1) > 3f)
									{
										if (iLocal_459[0] == 0)
										{
											unk_0xA303A4837FBB8DDE(iLocal_43[0], 863.1551f, -1564.572f, 29.3231f, 1f, -1, 1048576000, 0, 1193033728);
											iLocal_462[0] = 0;
											iLocal_459[0] = 1;
										}
									}
								}
							}
						}
					}
					if (unk_0x31F12808DC47A9E5(iLocal_43[1]))
					{
						if (!unk_0x0FAE113CE72ED842(iLocal_43[1]))
						{
							if (!unk_0x8FE8711DE0342959(iLocal_43[1]))
							{
								if (unk_0xB6B12179F5BB7520(940.2881f, -1573.877f, 29.3866f, 5f, 1))
								{
									iLocal_105[1] = unk_0x5AFB8ED811F05E4D();
									if (!unk_0x1A6BBE20E3A2D0E2(iLocal_43[1]))
									{
										if (iLocal_462[1] == 0)
										{
											unk_0x9B869F23DD5B668A(iLocal_43[1], 940.2881f, -1573.877f, 29.3866f, 5f, 0);
											iLocal_459[1] = 0;
											iLocal_462[1] = 1;
										}
									}
								}
								else if (unk_0x5AFB8ED811F05E4D() > iLocal_105[1] + 2000)
								{
									if (unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(iLocal_43[1], 1), 940.2881f, -1573.877f, 29.3866f, 1) > 3f)
									{
										if (iLocal_459[1] == 0)
										{
											unk_0xA303A4837FBB8DDE(iLocal_43[1], 940.2881f, -1573.877f, 29.3866f, 1f, -1, 1048576000, 0, 1193033728);
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
			if (unk_0x31F12808DC47A9E5(iLocal_43[0]))
			{
				if (!unk_0x0FAE113CE72ED842(iLocal_43[0]))
				{
					if (func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_43[0], 1) < 20f)
					{
						if ((func_182(unk_0x18F7BE9ACB7D08F4()) == joaat("weapon_unarmed") || unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0)) || func_181(0))
						{
							if (unk_0x3821A75ECC8A0D5B(unk_0x18F7BE9ACB7D08F4(), iLocal_43[0], 100f) || unk_0x6A180E89A0F78BEE(iLocal_43[0], unk_0x18F7BE9ACB7D08F4()))
							{
								if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 860.4606f, -1563.58f, 28.81788f, 865.0807f, -1575.088f, 30.93324f, 5.75f, 0, 1, 0) || unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, 1, 0))
								{
									if (iLocal_451[0] == 0)
									{
										if (!unk_0x3821A75ECC8A0D5B(iLocal_43[0], unk_0x18F7BE9ACB7D08F4(), 45f))
										{
											if (!unk_0x3AAE8FF7FB37F69E(iLocal_43[0]))
											{
												unk_0xD9FCA20C1C5553F7(iLocal_43[0]);
											}
											else
											{
												unk_0x267F7A2DFDFFB077(iLocal_43[0]);
											}
											unk_0x8F467CFC5FBBCE77(iLocal_43[0], unk_0x18F7BE9ACB7D08F4(), 5000);
											iLocal_102[0] = unk_0x5AFB8ED811F05E4D();
											func_180(iLocal_43[0]);
											iLocal_451[0] = 1;
										}
									}
									if (iLocal_451[0] == 1)
									{
										if (unk_0x5AFB8ED811F05E4D() > iLocal_102[0] + 5000)
										{
											iLocal_451[0] = 0;
										}
									}
									if (iLocal_407[0] == 0 && iLocal_407[1] == 0)
									{
										if (iLocal_403 == 0)
										{
											func_178(iLocal_43[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 6);
											iLocal_82 = unk_0x5AFB8ED811F05E4D();
											iLocal_403 = 1;
										}
										else if (unk_0x5AFB8ED811F05E4D() > iLocal_82 + 15000)
										{
											func_178(iLocal_43[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
											iLocal_82 = unk_0x5AFB8ED811F05E4D();
										}
									}
									else
									{
										if (iLocal_407[0] == 1)
										{
											if (iLocal_410 == 0)
											{
												func_178(iLocal_43[0], "PROVOKE_GEBERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_88 = unk_0x5AFB8ED811F05E4D();
												iLocal_410 = 1;
											}
											else if (unk_0x5AFB8ED811F05E4D() > iLocal_88 + 15000)
											{
												func_178(iLocal_43[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_88 = unk_0x5AFB8ED811F05E4D();
											}
										}
										if (iLocal_407[1] == 1)
										{
											if (iLocal_411 == 0)
											{
												func_178(iLocal_43[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_89 = unk_0x5AFB8ED811F05E4D();
												iLocal_411 = 1;
											}
											else if (unk_0x5AFB8ED811F05E4D() > iLocal_89 + 15000)
											{
												func_178(iLocal_43[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_89 = unk_0x5AFB8ED811F05E4D();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			if (unk_0x31F12808DC47A9E5(iLocal_43[1]))
			{
				if (!unk_0x0FAE113CE72ED842(iLocal_43[1]))
				{
					if (func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_43[1], 1) < 15f)
					{
						if ((func_182(unk_0x18F7BE9ACB7D08F4()) == joaat("weapon_unarmed") || unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0)) || func_181(0))
						{
							if (unk_0x3821A75ECC8A0D5B(unk_0x18F7BE9ACB7D08F4(), iLocal_43[1], 100f))
							{
								if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 939.8862f, -1575.635f, 28.59783f, 952.9254f, -1575.484f, 33.19459f, 13.75f, 0, 1, 0))
								{
									if (iLocal_451[1] == 0)
									{
										if (!unk_0x3821A75ECC8A0D5B(iLocal_43[1], unk_0x18F7BE9ACB7D08F4(), 45f))
										{
											if (!unk_0x3AAE8FF7FB37F69E(iLocal_43[1]))
											{
												unk_0xD9FCA20C1C5553F7(iLocal_43[1]);
											}
											else
											{
												unk_0x267F7A2DFDFFB077(iLocal_43[1]);
											}
											unk_0x8F467CFC5FBBCE77(iLocal_43[1], unk_0x18F7BE9ACB7D08F4(), 5000);
											iLocal_102[1] = unk_0x5AFB8ED811F05E4D();
											func_180(iLocal_43[1]);
											iLocal_451[1] = 1;
										}
									}
									if (iLocal_451[1] == 1)
									{
										if (unk_0x5AFB8ED811F05E4D() > iLocal_102[1] + 5000)
										{
											iLocal_451[1] = 0;
										}
									}
									if (iLocal_407[0] == 0 && iLocal_407[1] == 0)
									{
										if (iLocal_403 == 0)
										{
											func_178(iLocal_43[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
											iLocal_82 = unk_0x5AFB8ED811F05E4D();
											iLocal_403 = 1;
										}
										else if (unk_0x5AFB8ED811F05E4D() > iLocal_82 + 15000)
										{
											func_178(iLocal_43[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
											iLocal_82 = unk_0x5AFB8ED811F05E4D();
										}
									}
									else
									{
										if (iLocal_407[1] == 1)
										{
											if (iLocal_410 == 0)
											{
												func_178(iLocal_43[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
												iLocal_88 = unk_0x5AFB8ED811F05E4D();
												iLocal_410 = 1;
											}
											else if (unk_0x5AFB8ED811F05E4D() > iLocal_88 + 15000)
											{
												func_178(iLocal_43[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_88 = unk_0x5AFB8ED811F05E4D();
											}
										}
										if (iLocal_407[0] == 1)
										{
											if (iLocal_411 == 0)
											{
												func_178(iLocal_43[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
												iLocal_89 = unk_0x5AFB8ED811F05E4D();
												iLocal_411 = 1;
											}
											else if (unk_0x5AFB8ED811F05E4D() > iLocal_89 + 15000)
											{
												func_178(iLocal_43[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_89 = unk_0x5AFB8ED811F05E4D();
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
			if (func_177() || iLocal_398 == 1)
			{
				if (unk_0x31F12808DC47A9E5(iLocal_43[0]))
				{
					if (!unk_0x0FAE113CE72ED842(iLocal_43[0]))
					{
						if (unk_0x6A180E89A0F78BEE(iLocal_43[0], unk_0x18F7BE9ACB7D08F4()))
						{
							iLocal_99[0] = unk_0x5AFB8ED811F05E4D();
							iLocal_445[0] = 1;
							if (iLocal_442[0] == 0)
							{
								if (unk_0x3AAE8FF7FB37F69E(iLocal_43[0]))
								{
									unk_0x267F7A2DFDFFB077(iLocal_43[0]);
								}
								else
								{
									unk_0xD9FCA20C1C5553F7(iLocal_43[0]);
								}
								unk_0x273FE09AE985A00A(iLocal_43[0], 50, 1);
								unk_0x48B25C02FAB9DC81(iLocal_43[0], unk_0x18F7BE9ACB7D08F4(), 0, 16);
								func_180(iLocal_43[0]);
								iLocal_442[0] = 1;
							}
						}
						else if (iLocal_448[0] == 0)
						{
							if (iLocal_445[0] == 0)
							{
								if (unk_0x3AAE8FF7FB37F69E(iLocal_43[0]))
								{
									unk_0x267F7A2DFDFFB077(iLocal_43[0]);
								}
								else
								{
									unk_0xD9FCA20C1C5553F7(iLocal_43[0]);
								}
								unk_0xA303A4837FBB8DDE(iLocal_43[0], unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), 3f, -1, 1048576000, 0, 1193033728);
								func_180(iLocal_43[0]);
								iLocal_448[0] = 1;
							}
							if (iLocal_445[0] == 1)
							{
								if (unk_0x5AFB8ED811F05E4D() > iLocal_99[0] + 500)
								{
									if (unk_0x3AAE8FF7FB37F69E(iLocal_43[0]))
									{
										unk_0x267F7A2DFDFFB077(iLocal_43[0]);
									}
									else
									{
										unk_0xD9FCA20C1C5553F7(iLocal_43[0]);
									}
									unk_0xA303A4837FBB8DDE(iLocal_43[0], unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), 3f, -1, 1048576000, 0, 1193033728);
									func_180(iLocal_43[0]);
									iLocal_448[0] = 1;
								}
							}
						}
					}
				}
				if (unk_0x31F12808DC47A9E5(iLocal_43[1]))
				{
					if (!unk_0x0FAE113CE72ED842(iLocal_43[1]))
					{
						if (unk_0x6A180E89A0F78BEE(iLocal_43[1], unk_0x18F7BE9ACB7D08F4()))
						{
							iLocal_99[1] = unk_0x5AFB8ED811F05E4D();
							iLocal_445[1] = 1;
							if (iLocal_442[1] == 0)
							{
								if (unk_0x3AAE8FF7FB37F69E(iLocal_43[1]))
								{
									unk_0x267F7A2DFDFFB077(iLocal_43[1]);
								}
								else
								{
									unk_0xD9FCA20C1C5553F7(iLocal_43[1]);
								}
								unk_0x273FE09AE985A00A(iLocal_43[1], 50, 1);
								unk_0x48B25C02FAB9DC81(iLocal_43[1], unk_0x18F7BE9ACB7D08F4(), 0, 16);
								func_180(iLocal_43[1]);
								iLocal_442[1] = 1;
							}
						}
						else if (iLocal_448[1] == 0)
						{
							if (iLocal_445[1] == 0)
							{
								if (unk_0x3AAE8FF7FB37F69E(iLocal_43[1]))
								{
									unk_0x267F7A2DFDFFB077(iLocal_43[1]);
								}
								else
								{
									unk_0xD9FCA20C1C5553F7(iLocal_43[1]);
								}
								unk_0xA303A4837FBB8DDE(iLocal_43[1], unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), 3f, -1, 1048576000, 0, 1193033728);
								func_180(iLocal_43[1]);
								iLocal_448[1] = 1;
							}
							if (iLocal_445[1] == 1)
							{
								if (unk_0x5AFB8ED811F05E4D() > iLocal_99[1] + 500)
								{
									if (unk_0x3AAE8FF7FB37F69E(iLocal_43[1]))
									{
										unk_0x267F7A2DFDFFB077(iLocal_43[1]);
									}
									else
									{
										unk_0xD9FCA20C1C5553F7(iLocal_43[1]);
									}
									unk_0xA303A4837FBB8DDE(iLocal_43[1], unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), 3f, -1, 1048576000, 0, 1193033728);
									func_180(iLocal_43[1]);
									iLocal_448[1] = 1;
								}
							}
						}
					}
				}
				if (func_177())
				{
					if (iLocal_412 == 0)
					{
						if (unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) < 2)
						{
							unk_0x945880A1F9FE9E4F(5);
							unk_0x8BB3FA32294185BB(1f);
							unk_0x7A7F48A495EAC394(unk_0x8CFC7D6E1DA5D304(), 2, 0);
							unk_0xE223A1A4864F355C(unk_0x8CFC7D6E1DA5D304(), 0);
							iLocal_412 = 1;
						}
					}
					if (iLocal_399 == 1)
					{
						if (iLocal_401 == 0)
						{
							if (func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_43[0], 1) < 20f)
							{
								if (!unk_0x5C96F75B17C7C048(iLocal_43[0]))
								{
									func_178(iLocal_43[0], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
									iLocal_87 = unk_0x5AFB8ED811F05E4D();
									iLocal_401 = 1;
								}
							}
						}
						else if (unk_0x5AFB8ED811F05E4D() > iLocal_87 + 7000)
						{
							if (func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_43[0], 1) < 20f)
							{
								if (!unk_0x5C96F75B17C7C048(iLocal_43[0]))
								{
									func_178(iLocal_43[0], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
									iLocal_87 = unk_0x5AFB8ED811F05E4D();
								}
							}
						}
					}
					if (iLocal_400 == 1)
					{
						if (iLocal_401 == 0)
						{
							if (func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_43[1], 1) < 20f)
							{
								if (!unk_0x5C96F75B17C7C048(iLocal_43[1]))
								{
									func_178(iLocal_43[1], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
									iLocal_87 = unk_0x5AFB8ED811F05E4D();
									iLocal_401 = 1;
								}
							}
						}
						else if (unk_0x5AFB8ED811F05E4D() > iLocal_87 + 7000)
						{
							if (func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_43[1], 1) < 20f)
							{
								if (!unk_0x5C96F75B17C7C048(iLocal_43[1]))
								{
									func_178(iLocal_43[1], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
									iLocal_87 = unk_0x5AFB8ED811F05E4D();
								}
							}
						}
					}
				}
				else
				{
					if (iLocal_458 == 0)
					{
						iLocal_50 = func_174(unk_0x18F7BE9ACB7D08F4(), joaat("COP"), 0, 0, 28);
						if (iLocal_50 != 0)
						{
							if (unk_0x31F12808DC47A9E5(iLocal_50))
							{
								if (!unk_0x0FAE113CE72ED842(iLocal_50))
								{
									if (func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_50, 1) < 35f)
									{
										iLocal_458 = 1;
									}
								}
							}
						}
					}
					if (unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) > 0 && iLocal_458 == 0)
					{
						if (iLocal_399 == 1)
						{
							if (iLocal_402 == 0)
							{
								if (func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_43[0], 1) < 20f)
								{
									if (!unk_0x5C96F75B17C7C048(iLocal_43[0]))
									{
										func_178(iLocal_43[0], "GENERIC_INSULT_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
										iLocal_86 = unk_0x5AFB8ED811F05E4D();
										iLocal_402 = 1;
									}
								}
							}
							else if (unk_0x5AFB8ED811F05E4D() > iLocal_86 + 7000)
							{
								if (func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_43[0], 1) < 20f)
								{
									if (!unk_0x5C96F75B17C7C048(iLocal_43[0]))
									{
										func_178(iLocal_43[0], "GENERIC_CURSE_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
										iLocal_86 = unk_0x5AFB8ED811F05E4D();
									}
								}
							}
						}
						if (iLocal_400 == 1)
						{
							if (iLocal_402 == 0)
							{
								if (func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_43[1], 1) < 20f)
								{
									if (!unk_0x5C96F75B17C7C048(iLocal_43[1]))
									{
										func_178(iLocal_43[1], "GENERIC_INSULT_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
										iLocal_86 = unk_0x5AFB8ED811F05E4D();
										iLocal_402 = 1;
									}
								}
							}
							else if (unk_0x5AFB8ED811F05E4D() > iLocal_86 + 7000)
							{
								if (func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_43[1], 1) < 20f)
								{
									if (!unk_0x5C96F75B17C7C048(iLocal_43[1]))
									{
										func_178(iLocal_43[1], "GENERIC_CURSE_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
										iLocal_86 = unk_0x5AFB8ED811F05E4D();
									}
								}
							}
						}
					}
				}
			}
			if (!func_177())
			{
				if (iLocal_414 == 0)
				{
					if (unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), 893.2f, -1556.5f, 30f, 1) < 18f)
					{
						if (unk_0x31F12808DC47A9E5(iLocal_43[0]))
						{
							if (!unk_0x0FAE113CE72ED842(iLocal_43[0]))
							{
								if (unk_0x6A180E89A0F78BEE(iLocal_43[0], unk_0x18F7BE9ACB7D08F4()))
								{
									iLocal_81 = unk_0x5AFB8ED811F05E4D();
									iLocal_414 = 1;
								}
							}
						}
						if (unk_0x31F12808DC47A9E5(iLocal_43[1]))
						{
							if (!unk_0x0FAE113CE72ED842(iLocal_43[1]))
							{
								if (unk_0x6A180E89A0F78BEE(iLocal_43[1], unk_0x18F7BE9ACB7D08F4()))
								{
									iLocal_81 = unk_0x5AFB8ED811F05E4D();
									iLocal_414 = 1;
								}
							}
						}
					}
				}
				if (iLocal_398 == 0)
				{
					if (unk_0x31F12808DC47A9E5(iLocal_43[0]))
					{
						if (!unk_0x0FAE113CE72ED842(iLocal_43[0]))
						{
							if (func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_43[0], 1) > 4f)
							{
								if (unk_0x6A180E89A0F78BEE(iLocal_43[0], unk_0x18F7BE9ACB7D08F4()))
								{
									if (iLocal_436[0] == 0)
									{
										if (unk_0x3AAE8FF7FB37F69E(iLocal_43[0]))
										{
											unk_0x267F7A2DFDFFB077(iLocal_43[0]);
										}
										else
										{
											unk_0xD9FCA20C1C5553F7(iLocal_43[0]);
										}
										unk_0x7F948DF34BFB8F5D(iLocal_43[0], unk_0x18F7BE9ACB7D08F4(), -1, 0.5f, 2f, 1073741824, 0);
										func_180(iLocal_43[0]);
										iLocal_436[0] = 1;
									}
									iLocal_96[0] = unk_0x5AFB8ED811F05E4D();
								}
								else if (unk_0x5AFB8ED811F05E4D() > iLocal_96[0] + 500)
								{
									if (iLocal_439[0] == 0)
									{
										if (unk_0x3AAE8FF7FB37F69E(iLocal_43[0]))
										{
											unk_0x267F7A2DFDFFB077(iLocal_43[0]);
										}
										else
										{
											unk_0xD9FCA20C1C5553F7(iLocal_43[0]);
										}
										unk_0xA303A4837FBB8DDE(iLocal_43[0], unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), 2f, -1, 1048576000, 0, 1193033728);
										func_180(iLocal_43[0]);
										iLocal_439[0] = 1;
									}
								}
							}
							else if (iLocal_484[0] == 0)
							{
								if (unk_0x3AAE8FF7FB37F69E(iLocal_43[0]))
								{
									unk_0x267F7A2DFDFFB077(iLocal_43[0]);
								}
								else
								{
									unk_0xD9FCA20C1C5553F7(iLocal_43[0]);
								}
								unk_0xC8BEB049F3BFC0AB(&uLocal_57);
								unk_0x8F467CFC5FBBCE77(0, unk_0x18F7BE9ACB7D08F4(), 0);
								unk_0x73E31FC09D8359DB(0, 2000);
								unk_0x8F251305F4CAD788(uLocal_57, 1);
								unk_0xAFDA7B8F83B2CA58(uLocal_57);
								unk_0x73F69DD57B7E92A9(iLocal_43[0], uLocal_57);
								unk_0x56C7B20E11B37066(&uLocal_57);
								func_180(iLocal_43[0]);
								iLocal_484[0] = 1;
							}
							if (iLocal_454 == 0)
							{
								if (iLocal_431 == 0 || iLocal_403 == 1)
								{
									if (iLocal_397 == 0)
									{
										if (func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_43[0], 1) < 10f)
										{
											if (!unk_0x5C96F75B17C7C048(iLocal_43[0]))
											{
												func_178(iLocal_43[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 1);
												iLocal_83 = unk_0x5AFB8ED811F05E4D();
												iLocal_84 = unk_0x5AFB8ED811F05E4D();
												iLocal_81 = unk_0x5AFB8ED811F05E4D();
												iLocal_414 = 1;
												iLocal_397 = 1;
												iLocal_407[0] = 1;
											}
										}
									}
									else if (unk_0x5AFB8ED811F05E4D() > iLocal_83 + 7000)
									{
										if (func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_43[0], 1) < 10f)
										{
											if (!unk_0x5C96F75B17C7C048(iLocal_43[0]))
											{
												func_178(iLocal_43[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
												iLocal_83 = unk_0x5AFB8ED811F05E4D();
											}
										}
									}
								}
								else if (iLocal_403 == 0)
								{
									if (iLocal_432 == 0)
									{
										if (func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_43[0], 1) < 10f)
										{
											if (!unk_0x5C96F75B17C7C048(iLocal_43[0]))
											{
												func_178(iLocal_43[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 8);
												iLocal_397 = 1;
												iLocal_432 = 1;
											}
										}
									}
								}
							}
							else if (unk_0x5AFB8ED811F05E4D() > iLocal_84 + 7000)
							{
								if (func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_43[0], 1) < 15f)
								{
									if (!unk_0x5C96F75B17C7C048(iLocal_43[0]))
									{
										func_178(iLocal_43[0], "FIGHT", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
										iLocal_84 = unk_0x5AFB8ED811F05E4D();
									}
								}
							}
						}
					}
					if (unk_0x31F12808DC47A9E5(iLocal_43[1]))
					{
						if (!unk_0x0FAE113CE72ED842(iLocal_43[1]))
						{
							if (func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_43[1], 1) > 4f)
							{
								if (unk_0x6A180E89A0F78BEE(iLocal_43[1], unk_0x18F7BE9ACB7D08F4()))
								{
									if (iLocal_436[1] == 0)
									{
										if (unk_0x3AAE8FF7FB37F69E(iLocal_43[1]))
										{
											unk_0x267F7A2DFDFFB077(iLocal_43[1]);
										}
										else
										{
											unk_0xD9FCA20C1C5553F7(iLocal_43[1]);
										}
										unk_0x7F948DF34BFB8F5D(iLocal_43[1], unk_0x18F7BE9ACB7D08F4(), -1, 0.5f, 2f, 1073741824, 0);
										func_180(iLocal_43[1]);
										iLocal_436[1] = 1;
									}
									iLocal_96[1] = unk_0x5AFB8ED811F05E4D();
								}
								else if (unk_0x5AFB8ED811F05E4D() > iLocal_96[1] + 500)
								{
									if (iLocal_439[1] == 0)
									{
										if (unk_0x3AAE8FF7FB37F69E(iLocal_43[1]))
										{
											unk_0x267F7A2DFDFFB077(iLocal_43[1]);
										}
										else
										{
											unk_0xD9FCA20C1C5553F7(iLocal_43[1]);
										}
										unk_0xA303A4837FBB8DDE(iLocal_43[1], unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), 2f, -1, 1048576000, 0, 1193033728);
										func_180(iLocal_43[1]);
										iLocal_439[1] = 1;
									}
								}
							}
							else if (iLocal_484[1] == 0)
							{
								if (unk_0x3AAE8FF7FB37F69E(iLocal_43[1]))
								{
									unk_0x267F7A2DFDFFB077(iLocal_43[1]);
								}
								else
								{
									unk_0xD9FCA20C1C5553F7(iLocal_43[1]);
								}
								unk_0xC8BEB049F3BFC0AB(&uLocal_57);
								unk_0x8F467CFC5FBBCE77(0, unk_0x18F7BE9ACB7D08F4(), 0);
								unk_0x73E31FC09D8359DB(0, 2000);
								unk_0x8F251305F4CAD788(uLocal_57, 1);
								unk_0xAFDA7B8F83B2CA58(uLocal_57);
								unk_0x73F69DD57B7E92A9(iLocal_43[1], uLocal_57);
								unk_0x56C7B20E11B37066(&uLocal_57);
								func_180(iLocal_43[1]);
								iLocal_484[1] = 1;
							}
							if (iLocal_454 == 0)
							{
								if (iLocal_431 == 0 || iLocal_403 == 1)
								{
									if (iLocal_397 == 0)
									{
										if (func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_43[1], 1) < 10f)
										{
											if (!unk_0x5C96F75B17C7C048(iLocal_43[1]))
											{
												func_178(iLocal_43[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_83 = unk_0x5AFB8ED811F05E4D();
												iLocal_85 = unk_0x5AFB8ED811F05E4D();
												iLocal_81 = unk_0x5AFB8ED811F05E4D();
												iLocal_414 = 1;
												iLocal_397 = 1;
												iLocal_407[1] = 1;
											}
										}
									}
									else if (unk_0x5AFB8ED811F05E4D() > iLocal_83 + 7000)
									{
										if (func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_43[1], 1) < 10f)
										{
											if (!unk_0x5C96F75B17C7C048(iLocal_43[1]))
											{
												func_178(iLocal_43[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 11);
												iLocal_83 = unk_0x5AFB8ED811F05E4D();
											}
										}
									}
								}
								else if (iLocal_403 == 0)
								{
									if (iLocal_432 == 0)
									{
										if (func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_43[1], 1) < 10f)
										{
											if (!unk_0x5C96F75B17C7C048(iLocal_43[1]))
											{
												func_178(iLocal_43[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 8);
												iLocal_397 = 1;
												iLocal_432 = 1;
											}
										}
									}
								}
							}
							else if (unk_0x5AFB8ED811F05E4D() > iLocal_85 + 7000)
							{
								if (func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_43[1], 1) < 10f)
								{
									if (!unk_0x5C96F75B17C7C048(iLocal_43[1]))
									{
										func_178(iLocal_43[1], "FIGHT", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 11);
										iLocal_85 = unk_0x5AFB8ED811F05E4D();
									}
								}
							}
						}
					}
					if (iLocal_414 == 1)
					{
						if (iLocal_454 == 0)
						{
							if (unk_0x5AFB8ED811F05E4D() > iLocal_81 + 22000)
							{
								iLocal_454 = 1;
							}
						}
					}
					if (iLocal_414 == 1)
					{
						if (iLocal_398 == 0)
						{
							if (unk_0x5AFB8ED811F05E4D() > iLocal_81 + 30000)
							{
								unk_0x7A7F48A495EAC394(unk_0x8CFC7D6E1DA5D304(), 2, 0);
								iLocal_398 = 1;
							}
						}
					}
					if (unk_0x31F12808DC47A9E5(iLocal_33))
					{
						if (unk_0xC4B84EB67F78C1F0(iLocal_33, 0))
						{
							if (unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iLocal_33, 1))
							{
								if (unk_0x6A180E89A0F78BEE(iLocal_43[0], unk_0x18F7BE9ACB7D08F4()) || unk_0x6A180E89A0F78BEE(iLocal_43[1], unk_0x18F7BE9ACB7D08F4()))
								{
									iLocal_398 = 1;
								}
							}
							if (func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_33, 1) < 5f && unk_0xDB5E52F2078862CA(unk_0x18F7BE9ACB7D08F4()))
							{
								if (unk_0x6A180E89A0F78BEE(iLocal_43[0], unk_0x18F7BE9ACB7D08F4()) || unk_0x6A180E89A0F78BEE(iLocal_43[1], unk_0x18F7BE9ACB7D08F4()))
								{
									iLocal_398 = 1;
								}
							}
						}
					}
					if (unk_0x31F12808DC47A9E5(iLocal_43[0]))
					{
						if (!unk_0x0FAE113CE72ED842(iLocal_43[0]))
						{
							if (unk_0x38000067CDE001D0(unk_0x18F7BE9ACB7D08F4()))
							{
								if (unk_0xD2CD5609CFCDC631(unk_0x18F7BE9ACB7D08F4()))
								{
									if (unk_0x6A180E89A0F78BEE(iLocal_43[0], unk_0x18F7BE9ACB7D08F4()))
									{
										iLocal_398 = 1;
									}
								}
							}
						}
					}
					if (unk_0x31F12808DC47A9E5(iLocal_43[1]))
					{
						if (!unk_0x0FAE113CE72ED842(iLocal_43[1]))
						{
							if (unk_0x38000067CDE001D0(unk_0x18F7BE9ACB7D08F4()))
							{
								if (unk_0xD2CD5609CFCDC631(unk_0x18F7BE9ACB7D08F4()))
								{
									if (unk_0x6A180E89A0F78BEE(iLocal_43[1], unk_0x18F7BE9ACB7D08F4()))
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

int func_177()
{
	if (!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		iLocal_80 = 0;
		while (iLocal_80 <= 6)
		{
			if (unk_0x31F12808DC47A9E5(iLocal_35[iLocal_80]))
			{
				if (!unk_0x0FAE113CE72ED842(iLocal_35[iLocal_80]))
				{
					if (func_182(unk_0x18F7BE9ACB7D08F4()) != joaat("weapon_unarmed") && !func_181(0))
					{
						if (unk_0x6A180E89A0F78BEE(iLocal_35[iLocal_80], unk_0x18F7BE9ACB7D08F4()))
						{
							return 1;
						}
					}
				}
			}
			iLocal_80++;
		}
		if (unk_0x31F12808DC47A9E5(iLocal_43[0]))
		{
			if (!unk_0x0FAE113CE72ED842(iLocal_43[0]))
			{
				if (func_182(unk_0x18F7BE9ACB7D08F4()) != joaat("weapon_unarmed") && !func_181(0))
				{
					if (unk_0x6A180E89A0F78BEE(iLocal_43[0], unk_0x18F7BE9ACB7D08F4()))
					{
						return 1;
					}
				}
			}
		}
		if (unk_0x31F12808DC47A9E5(iLocal_43[1]))
		{
			if (!unk_0x0FAE113CE72ED842(iLocal_43[1]))
			{
				if (func_182(unk_0x18F7BE9ACB7D08F4()) != joaat("weapon_unarmed") && !func_181(0))
				{
					if (unk_0x6A180E89A0F78BEE(iLocal_43[1], unk_0x18F7BE9ACB7D08F4()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_178(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x40033E3EAE3C63BB(uParam0, sParam1, sParam2, func_179(iParam3), 0);
}

int func_179(int iParam0)
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

void func_180(int iParam0)
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

int func_181(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14453.f_1 > 3)
		{
			if (unk_0xB03A1684359C50A1(Global_2323, 14))
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
	if (unk_0xE7FAF8E78F7D3A73(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14453.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_182(int iParam0)
{
	var uVar0;
	
	unk_0x75CE6F8BEC2654E3(iParam0, &uVar0, 1);
	return uVar0;
}

void func_183()
{
	if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
	{
		if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
		{
			Local_119 = { unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1) };
		}
	}
	if (unk_0x31F12808DC47A9E5(iLocal_43[0]))
	{
		if (!unk_0x0FAE113CE72ED842(iLocal_43[0]))
		{
			Local_125[0 /*3*/] = { unk_0x761660F5CE986DC4(iLocal_43[0], 1) };
		}
	}
	if (unk_0x31F12808DC47A9E5(iLocal_43[1]))
	{
		if (!unk_0x0FAE113CE72ED842(iLocal_43[1]))
		{
			Local_125[1 /*3*/] = { unk_0x761660F5CE986DC4(iLocal_43[1], 1) };
		}
	}
	if (unk_0x31F12808DC47A9E5(iLocal_43[0]))
	{
		if (!unk_0x0FAE113CE72ED842(iLocal_43[0]))
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
	if (unk_0x31F12808DC47A9E5(iLocal_43[1]))
	{
		if (!unk_0x0FAE113CE72ED842(iLocal_43[1]))
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
					if (func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_43[0], 1) < func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_43[1], 1))
					{
						if (func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_43[0], 1) < 20f)
						{
							if (((Local_119.f_0 < Local_125[0 /*3*/] && !unk_0x3821A75ECC8A0D5B(unk_0x18F7BE9ACB7D08F4(), iLocal_43[0], 90f)) && !unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, 1, 0)) && !unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, 1, 0))
							{
								iLocal_31 = 0;
								iLocal_459[0] = 0;
								iLocal_462[0] = 0;
								iLocal_459[1] = 0;
								iLocal_462[1] = 0;
								iLocal_105[0] = unk_0x5AFB8ED811F05E4D();
								iLocal_105[1] = unk_0x5AFB8ED811F05E4D();
							}
						}
						else if (Local_119.f_0 < Local_125[0 /*3*/])
						{
							iLocal_31 = 0;
							iLocal_459[0] = 0;
							iLocal_462[0] = 0;
							iLocal_459[1] = 0;
							iLocal_462[1] = 0;
							iLocal_105[0] = unk_0x5AFB8ED811F05E4D();
							iLocal_105[1] = unk_0x5AFB8ED811F05E4D();
						}
					}
					else if (func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_43[1], 1) < 15f)
					{
						if ((Local_119.f_0 > Local_125[1 /*3*/] && !unk_0x3821A75ECC8A0D5B(unk_0x18F7BE9ACB7D08F4(), iLocal_43[1], 90f)) && !unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0))
						{
							iLocal_31 = 0;
							iLocal_459[0] = 0;
							iLocal_462[0] = 0;
							iLocal_459[1] = 0;
							iLocal_462[1] = 0;
							iLocal_105[0] = unk_0x5AFB8ED811F05E4D();
							iLocal_105[1] = unk_0x5AFB8ED811F05E4D();
						}
					}
					else if (Local_119.f_0 > Local_125[1 /*3*/])
					{
						iLocal_31 = 0;
						iLocal_459[0] = 0;
						iLocal_462[0] = 0;
						iLocal_459[1] = 0;
						iLocal_462[1] = 0;
						iLocal_105[0] = unk_0x5AFB8ED811F05E4D();
						iLocal_105[1] = unk_0x5AFB8ED811F05E4D();
					}
				}
				else if (func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_43[0], 1) < func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_43[1], 1))
				{
					if (func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_43[0], 1) < 15f)
					{
						if ((Local_119.f_0 < Local_125[0 /*3*/] && !unk_0x3821A75ECC8A0D5B(unk_0x18F7BE9ACB7D08F4(), iLocal_43[0], 90f)) && !unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, 1, 0))
						{
							iLocal_31 = 0;
							iLocal_459[0] = 0;
							iLocal_462[0] = 0;
							iLocal_459[1] = 0;
							iLocal_462[1] = 0;
							iLocal_105[0] = unk_0x5AFB8ED811F05E4D();
							iLocal_105[1] = unk_0x5AFB8ED811F05E4D();
						}
					}
					else if (Local_119.f_0 < Local_125[0 /*3*/])
					{
						iLocal_31 = 0;
						iLocal_459[0] = 0;
						iLocal_462[0] = 0;
						iLocal_459[1] = 0;
						iLocal_462[1] = 0;
						iLocal_105[0] = unk_0x5AFB8ED811F05E4D();
						iLocal_105[1] = unk_0x5AFB8ED811F05E4D();
					}
				}
			}
			else if (iLocal_404[1] == 1)
			{
				if (func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_43[1], 1) < 15f)
				{
					if ((Local_119.f_0 > Local_125[1 /*3*/] && !unk_0x3821A75ECC8A0D5B(unk_0x18F7BE9ACB7D08F4(), iLocal_43[1], 90f)) && !unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0))
					{
						iLocal_31 = 0;
						iLocal_459[0] = 0;
						iLocal_462[0] = 0;
						iLocal_459[1] = 0;
						iLocal_462[1] = 0;
						iLocal_105[0] = unk_0x5AFB8ED811F05E4D();
						iLocal_105[1] = unk_0x5AFB8ED811F05E4D();
					}
				}
				else if (Local_119.f_0 > Local_125[1 /*3*/])
				{
					iLocal_31 = 0;
					iLocal_459[0] = 0;
					iLocal_462[0] = 0;
					iLocal_459[1] = 0;
					iLocal_462[1] = 0;
					iLocal_105[0] = unk_0x5AFB8ED811F05E4D();
					iLocal_105[1] = unk_0x5AFB8ED811F05E4D();
				}
			}
		}
		if (iLocal_31 == 2)
		{
			if (iLocal_398 == 0)
			{
				if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0) || Local_119.f_0 > 942f)
				{
					if (!unk_0x0FAE113CE72ED842(iLocal_43[1]))
					{
						if (Local_119.f_0 > Local_125[1 /*3*/])
						{
							if (!unk_0x3821A75ECC8A0D5B(unk_0x18F7BE9ACB7D08F4(), iLocal_43[1], 90f))
							{
								iLocal_31 = 0;
								iLocal_459[0] = 0;
								iLocal_462[0] = 0;
								iLocal_459[1] = 0;
								iLocal_462[1] = 0;
								iLocal_105[0] = unk_0x5AFB8ED811F05E4D();
								iLocal_105[1] = unk_0x5AFB8ED811F05E4D();
							}
						}
					}
					else if (Local_119.f_0 > 942f)
					{
						if (!unk_0x3821A75ECC8A0D5B(unk_0x18F7BE9ACB7D08F4(), iLocal_43[1], 90f))
						{
							iLocal_31 = 0;
							iLocal_459[0] = 0;
							iLocal_462[0] = 0;
							iLocal_459[1] = 0;
							iLocal_462[1] = 0;
							iLocal_105[0] = unk_0x5AFB8ED811F05E4D();
							iLocal_105[1] = unk_0x5AFB8ED811F05E4D();
						}
					}
				}
				if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, 1, 0) || Local_119.f_0 < 860f)
				{
					if (!unk_0x0FAE113CE72ED842(iLocal_43[0]))
					{
						if (Local_119.f_0 < Local_125[0 /*3*/])
						{
							if (!unk_0x3821A75ECC8A0D5B(unk_0x18F7BE9ACB7D08F4(), iLocal_43[0], 90f))
							{
								iLocal_31 = 0;
								iLocal_459[0] = 0;
								iLocal_462[0] = 0;
								iLocal_459[1] = 0;
								iLocal_462[1] = 0;
								iLocal_105[0] = unk_0x5AFB8ED811F05E4D();
								iLocal_105[1] = unk_0x5AFB8ED811F05E4D();
							}
						}
					}
					else if (Local_119.f_0 < 860f)
					{
						if (!unk_0x3821A75ECC8A0D5B(unk_0x18F7BE9ACB7D08F4(), iLocal_43[0], 90f))
						{
							iLocal_31 = 0;
							iLocal_459[0] = 0;
							iLocal_462[0] = 0;
							iLocal_459[1] = 0;
							iLocal_462[1] = 0;
							iLocal_105[0] = unk_0x5AFB8ED811F05E4D();
							iLocal_105[1] = unk_0x5AFB8ED811F05E4D();
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
				if (func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_43[0], 1) < 20f)
				{
					if ((func_182(unk_0x18F7BE9ACB7D08F4()) == joaat("weapon_unarmed") || unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0)) || func_181(0))
					{
						if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 860.4606f, -1563.58f, 28.81788f, 865.0807f, -1575.088f, 30.93324f, 5.75f, 0, 1, 0))
						{
							if (Local_119.f_0 > Local_125[0 /*3*/] || unk_0x3821A75ECC8A0D5B(unk_0x18F7BE9ACB7D08F4(), iLocal_43[0], 90f))
							{
								iLocal_31 = 1;
							}
						}
						if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, 1, 0))
						{
							iLocal_31 = 1;
						}
					}
				}
			}
			if (iLocal_404[1] == 1)
			{
				if (func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_43[1], 1) < 15f)
				{
					if ((func_182(unk_0x18F7BE9ACB7D08F4()) == joaat("weapon_unarmed") || unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0)) || func_181(0))
					{
						if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 939.8862f, -1575.635f, 28.59783f, 952.9254f, -1575.484f, 33.19459f, 13.75f, 0, 1, 0))
						{
							if (Local_119.f_0 < Local_125[1 /*3*/] || unk_0x3821A75ECC8A0D5B(unk_0x18F7BE9ACB7D08F4(), iLocal_43[1], 90f))
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
		if (unk_0x7824A0A217B1F7A8(-1, 892.9f, -1552.4f, 30f, 40f))
		{
			iLocal_31 = 2;
			iLocal_398 = 1;
		}
		if (iLocal_482 == 1)
		{
			iLocal_31 = 2;
			iLocal_398 = 1;
		}
		if (unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) != 0)
		{
			if (unk_0x31F12808DC47A9E5(iLocal_43[0]))
			{
				if (!unk_0x0FAE113CE72ED842(iLocal_43[0]))
				{
					if (unk_0x6A180E89A0F78BEE(iLocal_43[0], unk_0x18F7BE9ACB7D08F4()))
					{
						iLocal_31 = 2;
						iLocal_398 = 1;
					}
				}
			}
			if (unk_0x31F12808DC47A9E5(iLocal_43[1]))
			{
				if (!unk_0x0FAE113CE72ED842(iLocal_43[1]))
				{
					if (unk_0x6A180E89A0F78BEE(iLocal_43[1], unk_0x18F7BE9ACB7D08F4()))
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
				if (unk_0x5AFB8ED811F05E4D() > iLocal_95 + 4000)
				{
					iLocal_94 = 0;
					while (iLocal_94 <= 6)
					{
						if (func_175())
						{
							if (unk_0x31F12808DC47A9E5(iLocal_35[iLocal_94]))
							{
								if (!unk_0x0FAE113CE72ED842(iLocal_35[iLocal_94]))
								{
									if (unk_0x235B74E6F6192AE8(iLocal_35[iLocal_94]))
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
		if (!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			if (iLocal_404[0] == 1)
			{
				if (func_182(unk_0x18F7BE9ACB7D08F4()) != joaat("weapon_unarmed") && !func_181(0))
				{
					if (unk_0x6A180E89A0F78BEE(iLocal_43[0], unk_0x18F7BE9ACB7D08F4()))
					{
						iLocal_31 = 2;
					}
				}
			}
			if (iLocal_404[1] == 1)
			{
				if (func_182(unk_0x18F7BE9ACB7D08F4()) != joaat("weapon_unarmed") && !func_181(0))
				{
					if (unk_0x6A180E89A0F78BEE(iLocal_43[1], unk_0x18F7BE9ACB7D08F4()))
					{
						iLocal_31 = 2;
					}
				}
			}
		}
		if (unk_0x15EE504466B7BBD3(Local_119, Local_132, 1) < 36f)
		{
			if (iLocal_404[0] == 1)
			{
				if (unk_0x6A180E89A0F78BEE(iLocal_43[0], unk_0x18F7BE9ACB7D08F4()))
				{
					iLocal_31 = 2;
				}
				if (func_170(iLocal_43[0], unk_0x18F7BE9ACB7D08F4(), 1) < 20f)
				{
					if (unk_0x28E6B7E85E30FD47(unk_0x8CFC7D6E1DA5D304(), iLocal_43[0]))
					{
						iLocal_31 = 2;
					}
				}
			}
			if (iLocal_404[1] == 1)
			{
				if (Local_119.f_2 < 36f || unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
				{
					if (unk_0x6A180E89A0F78BEE(iLocal_43[1], unk_0x18F7BE9ACB7D08F4()))
					{
						iLocal_31 = 2;
					}
					if (func_170(iLocal_43[1], unk_0x18F7BE9ACB7D08F4(), 1) < 20f)
					{
						if (unk_0x28E6B7E85E30FD47(unk_0x8CFC7D6E1DA5D304(), iLocal_43[1]))
						{
							iLocal_31 = 2;
						}
					}
				}
			}
		}
		if (iLocal_404[0] == 1)
		{
			if (func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_43[0], 1) < 20f)
			{
				if (Local_119.f_0 > Local_125[0 /*3*/] && unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, 1, 0))
				{
					if (unk_0x6A180E89A0F78BEE(iLocal_43[0], unk_0x18F7BE9ACB7D08F4()) || unk_0x28E6B7E85E30FD47(unk_0x8CFC7D6E1DA5D304(), iLocal_43[0]))
					{
						iLocal_31 = 2;
					}
				}
			}
		}
		if (iLocal_404[1] == 1)
		{
			if (func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_43[1], 1) < 20f)
			{
				if (Local_119.f_0 < Local_125[1 /*3*/] && unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0))
				{
					if (unk_0x6A180E89A0F78BEE(iLocal_43[1], unk_0x18F7BE9ACB7D08F4()) || unk_0x28E6B7E85E30FD47(unk_0x8CFC7D6E1DA5D304(), iLocal_43[1]))
					{
						iLocal_31 = 2;
					}
				}
			}
		}
	}
}

void func_184()
{
	iLocal_64 = 0;
	while (iLocal_64 <= 6)
	{
		if (unk_0x31F12808DC47A9E5(iLocal_35[iLocal_64]))
		{
			if (!unk_0x0FAE113CE72ED842(iLocal_35[iLocal_64]))
			{
				if (iLocal_330[iLocal_64] == 0)
				{
					if (func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_35[iLocal_64], 1) > 20f)
					{
						iLocal_330[iLocal_64] = 1;
					}
				}
				if (iLocal_330[iLocal_64] == 1)
				{
					if (func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_35[iLocal_64], 1) < 20f)
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
		if (unk_0x31F12808DC47A9E5(iLocal_35[iLocal_63]))
		{
			if (!unk_0x0FAE113CE72ED842(iLocal_35[iLocal_63]))
			{
				func_189(iLocal_35[iLocal_63]);
				if (iLocal_28 == 3 || iLocal_28 == 4)
				{
					if (iLocal_31 == 2 && iLocal_29 == 0)
					{
						func_188(1);
						if (iLocal_416 == 1)
						{
							func_112();
						}
					}
					if (unk_0x36E5EAE8A224786D(iLocal_35[iLocal_63], 18))
					{
						if (iLocal_29 != 4)
						{
							func_188(4);
							if (iLocal_416 == 1)
							{
								func_186();
							}
							iLocal_482 = 1;
						}
					}
					if (iLocal_29 != 4)
					{
						if (unk_0x7824A0A217B1F7A8(-1, 892.9f, -1552.4f, 30f, 40f))
						{
							func_188(4);
							if (iLocal_416 == 1)
							{
								func_186();
							}
						}
					}
					if ((((((((func_185(iLocal_35[iLocal_63], iLocal_35[0]) || func_185(iLocal_35[iLocal_63], iLocal_35[1])) || func_185(iLocal_35[iLocal_63], iLocal_35[2])) || func_185(iLocal_35[iLocal_63], iLocal_35[3])) || func_185(iLocal_35[iLocal_63], iLocal_35[4])) || func_185(iLocal_35[iLocal_63], iLocal_35[5])) || func_185(iLocal_35[iLocal_63], iLocal_35[6])) || func_185(iLocal_35[iLocal_63], iLocal_43[0])) || func_185(iLocal_35[iLocal_63], iLocal_43[1]))
					{
						if (iLocal_29 != 4)
						{
							func_188(4);
							if (iLocal_416 == 1)
							{
								func_186();
							}
							iLocal_482 = 1;
						}
					}
					if ((func_182(unk_0x18F7BE9ACB7D08F4()) == joaat("weapon_unarmed") || unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1)) || func_181(0))
					{
						if (iLocal_398 == 0)
						{
							if (func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_35[iLocal_63], 1) > 20f)
							{
								if (iLocal_322[iLocal_63] == 1)
								{
									iLocal_322[iLocal_63] = 0;
								}
								if (((((iLocal_338 == 1 && iLocal_29 != 0) && iLocal_29 != 2) && iLocal_29 != 3) && iLocal_29 != 4) && iLocal_31 != 2)
								{
									func_188(0);
								}
							}
							if (func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_35[iLocal_63], 1) < 20f && unk_0x6A180E89A0F78BEE(iLocal_35[iLocal_63], unk_0x18F7BE9ACB7D08F4()))
							{
								if (((iLocal_29 != 1 && iLocal_29 != 2) && iLocal_29 != 3) && iLocal_29 != 4)
								{
									if (iLocal_431 == 0 && iLocal_398 == 0)
									{
										func_188(1);
										if (iLocal_416 == 1)
										{
											func_112();
										}
									}
									else
									{
										func_188(3);
										if (iLocal_416 == 1)
										{
											func_186();
										}
									}
								}
							}
							if (func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_35[iLocal_63], 1) < 20f && unk_0x6A180E89A0F78BEE(iLocal_35[iLocal_63], unk_0x18F7BE9ACB7D08F4()))
							{
								if (iLocal_322[iLocal_63] == 0)
								{
									iLocal_69[iLocal_63] = unk_0x5AFB8ED811F05E4D();
									iLocal_322[iLocal_63] = 1;
								}
								if (iLocal_322[iLocal_63] == 1)
								{
									if (unk_0x5AFB8ED811F05E4D() > iLocal_69[iLocal_63] + 24000)
									{
										if ((iLocal_29 != 2 && iLocal_29 != 3) && iLocal_29 != 4)
										{
											func_188(2);
											if (iLocal_416 == 1)
											{
												func_186();
											}
										}
									}
								}
							}
						}
						if (iLocal_398 == 1)
						{
							if (func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_35[iLocal_63], 1) < 20f && unk_0x6A180E89A0F78BEE(iLocal_35[iLocal_63], unk_0x18F7BE9ACB7D08F4()))
							{
								if (iLocal_29 != 3 && iLocal_29 != 4)
								{
									func_188(3);
									if (iLocal_416 == 1)
									{
										func_186();
									}
								}
							}
						}
						if (unk_0x38000067CDE001D0(unk_0x18F7BE9ACB7D08F4()))
						{
							if (iLocal_413 == 0)
							{
								iLocal_90 = unk_0x5AFB8ED811F05E4D();
								iLocal_413 = 1;
							}
							else if (unk_0x5AFB8ED811F05E4D() > iLocal_90 + 3000)
							{
								if (func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_35[iLocal_63], 1) < 20f && unk_0x6A180E89A0F78BEE(iLocal_35[iLocal_63], unk_0x18F7BE9ACB7D08F4()))
								{
									if (iLocal_29 != 3 && iLocal_29 != 4)
									{
										func_188(3);
										if (iLocal_416 == 1)
										{
											func_186();
										}
									}
								}
							}
						}
						else if (iLocal_413 == 1)
						{
							iLocal_413 = 0;
						}
						if (unk_0x31F12808DC47A9E5(iLocal_33))
						{
							if (unk_0xC4B84EB67F78C1F0(iLocal_33, 0))
							{
								if (unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iLocal_33, 1))
								{
									if (unk_0x6A180E89A0F78BEE(iLocal_35[iLocal_63], unk_0x18F7BE9ACB7D08F4()))
									{
										if (iLocal_29 != 3 && iLocal_29 != 4)
										{
											iLocal_390 = 1;
											func_188(3);
											if (iLocal_416 == 1)
											{
												func_186();
											}
										}
									}
								}
								if (func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_33, 1) < 5f && unk_0xDB5E52F2078862CA(unk_0x18F7BE9ACB7D08F4()))
								{
									if (unk_0x6A180E89A0F78BEE(iLocal_35[iLocal_63], unk_0x18F7BE9ACB7D08F4()))
									{
										if (iLocal_29 != 3 && iLocal_29 != 4)
										{
											iLocal_390 = 1;
											func_188(3);
											if (iLocal_416 == 1)
											{
												func_186();
											}
										}
									}
									if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 917.3436f, -1554.42f, 29.26611f, 916.8774f, -1556.441f, 33.00661f, 2.25f, 0, 1, 0))
									{
										if (unk_0x31F12808DC47A9E5(iLocal_35[0]))
										{
											if (!unk_0x0FAE113CE72ED842(iLocal_35[0]))
											{
												if (unk_0x8673F2F1802ADEF7(iLocal_35[0], 912.3f, -1542.6f, 30f, 3f, 3f, 3f, 0, 1, 0))
												{
													if (iLocal_29 != 3 && iLocal_29 != 4)
													{
														iLocal_390 = 1;
														func_188(3);
														if (iLocal_416 == 1)
														{
															func_186();
														}
													}
												}
											}
										}
									}
								}
							}
						}
						if (unk_0x31F12808DC47A9E5(iLocal_35[6]))
						{
							if (!unk_0x0FAE113CE72ED842(iLocal_35[6]))
							{
								if (func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_35[6], 1) < 20f)
								{
									if ((unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 928.7163f, -1546.671f, 27.34603f, 921.8971f, -1549.752f, 34.04724f, 6.25f, 0, 1, 0) || unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 931.868f, -1545.185f, 27.3653f, 925.8857f, -1547.303f, 34.07205f, 3.5f, 0, 1, 0)) || unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 929.4908f, -1524.829f, 32.84098f, 929.3696f, -1545.288f, 37.34258f, 5f, 0, 1, 0))
									{
										if (unk_0x6A180E89A0F78BEE(iLocal_35[6], unk_0x18F7BE9ACB7D08F4()))
										{
											if (Local_119.f_2 > 31f)
											{
												if (iLocal_29 != 3 && iLocal_29 != 4)
												{
													iLocal_428 = 1;
													func_188(3);
													if (iLocal_416 == 1)
													{
														func_186();
													}
												}
											}
											else if (((iLocal_29 != 1 && iLocal_29 != 2) && iLocal_29 != 3) && iLocal_29 != 4)
											{
												func_188(1);
												if (iLocal_416 == 1)
												{
													func_112();
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
							iLocal_68 = unk_0x5AFB8ED811F05E4D();
							iLocal_321 = 1;
						}
						if (iLocal_321 == 1)
						{
							if (unk_0x5AFB8ED811F05E4D() > iLocal_68 + 4000 || iLocal_29 == 3)
							{
								if (func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_35[iLocal_63], 1) < 20f)
								{
									if (unk_0x6A180E89A0F78BEE(iLocal_35[iLocal_63], unk_0x18F7BE9ACB7D08F4()))
									{
										if (iLocal_29 != 4)
										{
											func_188(4);
											if (iLocal_416 == 1)
											{
												func_186();
											}
										}
									}
								}
							}
						}
						if (func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_35[iLocal_63], 1) < 40f)
						{
							if (unk_0xAADA5865C8BFAE94(unk_0x18F7BE9ACB7D08F4()))
							{
								if (unk_0x6A180E89A0F78BEE(iLocal_35[iLocal_63], unk_0x18F7BE9ACB7D08F4()) || unk_0x28E6B7E85E30FD47(unk_0x8CFC7D6E1DA5D304(), iLocal_35[iLocal_63]))
								{
									if (iLocal_29 != 4)
									{
										func_188(4);
										if (iLocal_416 == 1)
										{
											func_186();
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

int func_185(int iParam0, int iParam1)
{
	if (((func_170(iParam0, iParam1, 1) < 20f && unk_0x3821A75ECC8A0D5B(iParam0, iParam1, 90f)) && !unk_0x0FAE113CE72ED842(iParam0)) && unk_0x0FAE113CE72ED842(iParam1))
	{
		return 1;
	}
	return 0;
}

void func_186()
{
	Global_14622 = 0;
	func_187();
}

void func_187()
{
	unk_0x815093B4702C59D8();
	Global_16767 = 0;
	if (unk_0x85FDEF76CDBAD589())
	{
		unk_0xBE97F4E2B659331B(0);
		Global_15756 = 6;
	}
}

void func_188(int iParam0)
{
	iLocal_29 = iParam0;
	iLocal_67 = 0;
}

void func_189(int iParam0)
{
	iLocal_65 = 0;
	while (iLocal_65 <= 6)
	{
		if (iParam0 == iLocal_35[iLocal_65])
		{
			if (func_170(unk_0x18F7BE9ACB7D08F4(), iParam0, 1) < 20f && unk_0x6A180E89A0F78BEE(iParam0, unk_0x18F7BE9ACB7D08F4()))
			{
				if (iLocal_339[iLocal_65] == 0)
				{
					unk_0x6016A20BFEAEFE11(iParam0, unk_0x18F7BE9ACB7D08F4(), -1, 1072, 3);
					iLocal_339[iLocal_65] = 1;
				}
			}
			else if (iLocal_339[iLocal_65] == 1)
			{
				unk_0x6016A20BFEAEFE11(iParam0, unk_0x18F7BE9ACB7D08F4(), 1, 1072, 3);
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
				unk_0x40E2910BAF39B1C7(iParam0, 1);
				if (iParam0 == iLocal_35[0])
				{
					if (unk_0xB6B12179F5BB7520(912.2f, -1542.5f, 29.8f, 3f, 0))
					{
						if (unk_0x2BBAA45ECDE3DAE2(iLocal_35[0], 1647992574) != 1 && unk_0x2BBAA45ECDE3DAE2(iLocal_35[0], -1680762137) != 1)
						{
							unk_0x9B869F23DD5B668A(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[1])
				{
					if (unk_0xB6B12179F5BB7520(917.4f, -1517.4f, 30f, 3f, 0))
					{
						if (unk_0x2BBAA45ECDE3DAE2(iLocal_35[1], 1647992574) != 1 && unk_0x2BBAA45ECDE3DAE2(iLocal_35[1], -1680762137) != 1)
						{
							unk_0x9B869F23DD5B668A(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[2])
				{
					if (unk_0xB6B12179F5BB7520(869.8f, -1541.2f, 29.4f, 3f, 0))
					{
						if (unk_0x2BBAA45ECDE3DAE2(iLocal_35[2], 1647992574) != 1 && unk_0x2BBAA45ECDE3DAE2(iLocal_35[2], -1680762137) != 1)
						{
							unk_0x9B869F23DD5B668A(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[3])
				{
					if (unk_0xB6B12179F5BB7520(884.2f, -1574.1f, 30f, 3f, 0))
					{
						if (unk_0x2BBAA45ECDE3DAE2(iLocal_35[3], 1647992574) != 1 && unk_0x2BBAA45ECDE3DAE2(iLocal_35[3], -1680762137) != 1)
						{
							unk_0x9B869F23DD5B668A(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[4])
				{
					if (unk_0xB6B12179F5BB7520(904f, -1575f, 30f, 3f, 0))
					{
						if (unk_0x2BBAA45ECDE3DAE2(iLocal_35[4], 1647992574) != 1 && unk_0x2BBAA45ECDE3DAE2(iLocal_35[4], -1680762137) != 1)
						{
							unk_0x9B869F23DD5B668A(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[5])
				{
					if (unk_0xB6B12179F5BB7520(905.9f, -1574.8f, 29.9f, 3f, 0))
					{
						if (unk_0x2BBAA45ECDE3DAE2(iLocal_35[5], 1647992574) != 1 && unk_0x2BBAA45ECDE3DAE2(iLocal_35[5], -1680762137) != 1)
						{
							unk_0x9B869F23DD5B668A(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[6])
				{
					if (unk_0xB6B12179F5BB7520(889.5f, -1562f, 29.7f, 3f, 0))
					{
						if (unk_0x2BBAA45ECDE3DAE2(iLocal_35[6], 1647992574) != 1 && unk_0x2BBAA45ECDE3DAE2(iLocal_35[6], -1680762137) != 1)
						{
							unk_0x9B869F23DD5B668A(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
						}
					}
				}
				iLocal_67++;
			}
			if (iLocal_67 == 1)
			{
				if (unk_0x31F12808DC47A9E5(iLocal_35[4]))
				{
					if (!unk_0x0FAE113CE72ED842(iLocal_35[4]))
					{
						if (unk_0x31F12808DC47A9E5(iLocal_35[5]))
						{
							if (!unk_0x0FAE113CE72ED842(iLocal_35[5]))
							{
								if (func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_35[4], 1) < 25f)
								{
									if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 926.455f, -1582.384f, 29.32759f, 909.6322f, -1581.374f, 31.58907f, 9.5f, 0, 1, 0) || Local_119.f_1 > -1573f)
									{
										if (iLocal_416 == 0)
										{
											func_131(&uLocal_137, 3, iLocal_35[4], "CONSTRUCTION2", 0, 1);
											func_131(&uLocal_137, 5, iLocal_35[5], "CONSTRUCTION3", 0, 1);
											unk_0x6016A20BFEAEFE11(iLocal_35[4], iLocal_35[5], -1, 0, 2);
											unk_0x6016A20BFEAEFE11(iLocal_35[5], iLocal_35[4], -1, 0, 2);
											if (!func_175())
											{
												if (!unk_0xC45919BF593ACF15() || !unk_0xA926FCC2AFC26766())
												{
													if (func_169(&uLocal_137, "SOL1AUD", "SOL1_TALK", 6, 1, 1, 0))
													{
														iLocal_416 = 1;
													}
												}
											}
										}
									}
								}
								if (unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), 921.9f, -1556.5f, 30f, 5f, 5f, 5f, 0, 1, 1))
								{
									if (iLocal_423 == 0)
									{
										iLocal_92 = unk_0x5AFB8ED811F05E4D();
										iLocal_423 = 1;
									}
									if (iLocal_423 == 1)
									{
										if (unk_0x5AFB8ED811F05E4D() > iLocal_92 + 4000)
										{
											if (iLocal_416 == 0)
											{
												func_131(&uLocal_137, 3, iLocal_35[4], "CONSTRUCTION2", 0, 1);
												func_131(&uLocal_137, 5, iLocal_35[5], "CONSTRUCTION3", 0, 1);
												unk_0x6016A20BFEAEFE11(iLocal_35[4], iLocal_35[5], -1, 0, 2);
												unk_0x6016A20BFEAEFE11(iLocal_35[5], iLocal_35[4], -1, 0, 2);
												if (!func_175())
												{
													if (!unk_0xC45919BF593ACF15() || !unk_0xA926FCC2AFC26766())
													{
														if (func_169(&uLocal_137, "SOL1AUD", "SOL1_TALK", 6, 1, 1, 0))
														{
															iLocal_416 = 1;
														}
													}
												}
											}
										}
									}
								}
								if (iLocal_416 == 1 && !func_175())
								{
									if (iLocal_415 == 0)
									{
										if (unk_0xB6B12179F5BB7520(865f, -1558.1f, 29.5f, 3f, 0))
										{
											unk_0x81D9C52E2A8DA464(iLocal_35[4]);
											unk_0x81D9C52E2A8DA464(iLocal_35[5]);
											unk_0x71F977266792711C(iLocal_35[4], 865f, -1558.1f, 29.5f, 3f, 0);
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
							iLocal_93 = unk_0x5AFB8ED811F05E4D();
							iLocal_425 = 1;
						}
						if (unk_0x5AFB8ED811F05E4D() > iLocal_93 + 30000)
						{
							if (iLocal_424 == 0)
							{
								if (unk_0xB6B12179F5BB7520(925f, -1561f, 30f, 3f, 0))
								{
									unk_0x71F977266792711C(iLocal_35[6], 925f, -1561f, 30f, 3f, 0);
									iLocal_424 = 1;
									iLocal_425 = 0;
								}
							}
						}
					}
					if (iLocal_424 == 1)
					{
						if (unk_0x8673F2F1802ADEF7(iLocal_35[6], 925f, -1561f, 30f, 3f, 3f, 3f, 0, 1, 0))
						{
							if (func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_35[6], 1) < 15f && Local_119.f_2 < 40f)
							{
								if (iLocal_426 == 0)
								{
									if (unk_0xB6B12179F5BB7520(909.5f, -1515.5f, 30f, 3f, 0))
									{
										unk_0x9B869F23DD5B668A(iLocal_35[6], 909.5f, -1515.5f, 30f, 50f, 0);
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
							if (func_170(unk_0x18F7BE9ACB7D08F4(), iParam0, 1) < 20f)
							{
								if (iLocal_347[iLocal_65] == 0)
								{
									if (unk_0x6A180E89A0F78BEE(iParam0, unk_0x18F7BE9ACB7D08F4()) || unk_0x28E6B7E85E30FD47(unk_0x8CFC7D6E1DA5D304(), iParam0))
									{
										if (!unk_0x3AAE8FF7FB37F69E(iParam0))
										{
											unk_0xD9FCA20C1C5553F7(iParam0);
										}
										if (unk_0x3AAE8FF7FB37F69E(iParam0))
										{
											unk_0x267F7A2DFDFFB077(iParam0);
										}
										unk_0xC8BEB049F3BFC0AB(&uLocal_57);
										unk_0x7F948DF34BFB8F5D(0, unk_0x18F7BE9ACB7D08F4(), -1, 2f, 1f, 1073741824, 0);
										unk_0x8F467CFC5FBBCE77(0, unk_0x18F7BE9ACB7D08F4(), 0);
										unk_0xAFDA7B8F83B2CA58(uLocal_57);
										unk_0x73F69DD57B7E92A9(iParam0, uLocal_57);
										unk_0x56C7B20E11B37066(&uLocal_57);
										unk_0x40E2910BAF39B1C7(iParam0, 1);
										iLocal_339[iLocal_65] = 0;
										iLocal_347[iLocal_65] = 1;
									}
								}
								if (iLocal_347[iLocal_65] == 1)
								{
									if (!unk_0x3821A75ECC8A0D5B(iParam0, unk_0x18F7BE9ACB7D08F4(), 45f))
									{
										unk_0x8F467CFC5FBBCE77(iParam0, unk_0x18F7BE9ACB7D08F4(), 0);
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
									if (unk_0xB6B12179F5BB7520(912.2f, -1542.5f, 29.8f, 3f, 0))
									{
										if (unk_0x2BBAA45ECDE3DAE2(iLocal_35[0], 1647992574) != 1 && unk_0x2BBAA45ECDE3DAE2(iLocal_35[0], -1680762137) != 1)
										{
											unk_0x9B869F23DD5B668A(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
											unk_0x40E2910BAF39B1C7(iLocal_35[0], 1);
										}
									}
								}
								if (iParam0 == iLocal_35[1])
								{
									if (unk_0xB6B12179F5BB7520(917.4f, -1517.4f, 30f, 3f, 0))
									{
										if (unk_0x2BBAA45ECDE3DAE2(iLocal_35[1], 1647992574) != 1 && unk_0x2BBAA45ECDE3DAE2(iLocal_35[1], -1680762137) != 1)
										{
											unk_0x9B869F23DD5B668A(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
											unk_0x40E2910BAF39B1C7(iLocal_35[1], 1);
										}
									}
								}
								if (iParam0 == iLocal_35[2])
								{
									if (unk_0xB6B12179F5BB7520(869.8f, -1541.2f, 29.4f, 3f, 0))
									{
										if (unk_0x2BBAA45ECDE3DAE2(iLocal_35[2], 1647992574) != 1 && unk_0x2BBAA45ECDE3DAE2(iLocal_35[2], -1680762137) != 1)
										{
											unk_0x9B869F23DD5B668A(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
											unk_0x40E2910BAF39B1C7(iLocal_35[2], 1);
										}
									}
								}
								if (iParam0 == iLocal_35[3])
								{
									if (unk_0xB6B12179F5BB7520(884.2f, -1574.1f, 30f, 3f, 0))
									{
										if (unk_0x2BBAA45ECDE3DAE2(iLocal_35[3], 1647992574) != 1 && unk_0x2BBAA45ECDE3DAE2(iLocal_35[3], -1680762137) != 1)
										{
											unk_0x9B869F23DD5B668A(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
											unk_0x40E2910BAF39B1C7(iLocal_35[3], 1);
										}
									}
								}
								if (iParam0 == iLocal_35[4])
								{
									if (unk_0xB6B12179F5BB7520(904f, -1575f, 30f, 3f, 0))
									{
										if (unk_0x2BBAA45ECDE3DAE2(iLocal_35[4], 1647992574) != 1 && unk_0x2BBAA45ECDE3DAE2(iLocal_35[4], -1680762137) != 1)
										{
											unk_0x9B869F23DD5B668A(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
											unk_0x40E2910BAF39B1C7(iLocal_35[4], 1);
										}
									}
								}
								if (iParam0 == iLocal_35[5])
								{
									if (unk_0xB6B12179F5BB7520(905.9f, -1574.8f, 29.9f, 3f, 0))
									{
										if (unk_0x2BBAA45ECDE3DAE2(iLocal_35[5], 1647992574) != 1 && unk_0x2BBAA45ECDE3DAE2(iLocal_35[5], -1680762137) != 1)
										{
											unk_0x9B869F23DD5B668A(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
											unk_0x40E2910BAF39B1C7(iLocal_35[5], 1);
										}
									}
								}
								if (iParam0 == iLocal_35[6])
								{
									if (unk_0xB6B12179F5BB7520(889.5f, -1562f, 29.7f, 3f, 0))
									{
										if (unk_0x2BBAA45ECDE3DAE2(iLocal_35[6], 1647992574) != 1 && unk_0x2BBAA45ECDE3DAE2(iLocal_35[6], -1680762137) != 1)
										{
											unk_0x9B869F23DD5B668A(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
											unk_0x40E2910BAF39B1C7(iLocal_35[6], 1);
										}
									}
								}
							}
						}
					}
					else if (iParam0 == iLocal_35[iLocal_65])
					{
						if (func_170(unk_0x18F7BE9ACB7D08F4(), iParam0, 1) < 20f)
						{
							if (iLocal_347[iLocal_65] == 0)
							{
								if (unk_0x6A180E89A0F78BEE(iParam0, unk_0x18F7BE9ACB7D08F4()) || unk_0x28E6B7E85E30FD47(unk_0x8CFC7D6E1DA5D304(), iParam0))
								{
									if (!unk_0x3AAE8FF7FB37F69E(iParam0))
									{
										unk_0xD9FCA20C1C5553F7(iParam0);
									}
									if (unk_0x3AAE8FF7FB37F69E(iParam0))
									{
										unk_0x267F7A2DFDFFB077(iParam0);
									}
									unk_0xC8BEB049F3BFC0AB(&uLocal_57);
									unk_0x8F467CFC5FBBCE77(0, unk_0x18F7BE9ACB7D08F4(), 0);
									unk_0x6016A20BFEAEFE11(0, unk_0x18F7BE9ACB7D08F4(), -1, 1072, 3);
									unk_0xAFDA7B8F83B2CA58(uLocal_57);
									unk_0x73F69DD57B7E92A9(iParam0, uLocal_57);
									unk_0x56C7B20E11B37066(&uLocal_57);
									unk_0x40E2910BAF39B1C7(iParam0, 1);
									iLocal_339[iLocal_65] = 0;
									iLocal_347[iLocal_65] = 1;
								}
							}
							if (iLocal_347[iLocal_65] == 1)
							{
								if (!unk_0x3821A75ECC8A0D5B(iParam0, unk_0x18F7BE9ACB7D08F4(), 45f))
								{
									unk_0x8F467CFC5FBBCE77(iParam0, unk_0x18F7BE9ACB7D08F4(), 0);
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
								if (unk_0xB6B12179F5BB7520(912.2f, -1542.5f, 29.8f, 3f, 0))
								{
									if (unk_0x2BBAA45ECDE3DAE2(iLocal_35[0], 1647992574) != 1 && unk_0x2BBAA45ECDE3DAE2(iLocal_35[0], -1680762137) != 1)
									{
										unk_0x9B869F23DD5B668A(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
										unk_0x40E2910BAF39B1C7(iLocal_35[0], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[1])
							{
								if (unk_0xB6B12179F5BB7520(917.4f, -1517.4f, 30f, 3f, 0))
								{
									if (unk_0x2BBAA45ECDE3DAE2(iLocal_35[1], 1647992574) != 1 && unk_0x2BBAA45ECDE3DAE2(iLocal_35[1], -1680762137) != 1)
									{
										unk_0x9B869F23DD5B668A(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
										unk_0x40E2910BAF39B1C7(iLocal_35[1], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[2])
							{
								if (unk_0xB6B12179F5BB7520(869.8f, -1541.2f, 29.4f, 3f, 0))
								{
									if (unk_0x2BBAA45ECDE3DAE2(iLocal_35[2], 1647992574) != 1 && unk_0x2BBAA45ECDE3DAE2(iLocal_35[2], -1680762137) != 1)
									{
										unk_0x9B869F23DD5B668A(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
										unk_0x40E2910BAF39B1C7(iLocal_35[2], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[3])
							{
								if (unk_0xB6B12179F5BB7520(884.2f, -1574.1f, 30f, 3f, 0))
								{
									if (unk_0x2BBAA45ECDE3DAE2(iLocal_35[3], 1647992574) != 1 && unk_0x2BBAA45ECDE3DAE2(iLocal_35[3], -1680762137) != 1)
									{
										unk_0x9B869F23DD5B668A(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
										unk_0x40E2910BAF39B1C7(iLocal_35[3], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[4])
							{
								if (unk_0xB6B12179F5BB7520(904f, -1575f, 30f, 3f, 0))
								{
									if (unk_0x2BBAA45ECDE3DAE2(iLocal_35[4], 1647992574) != 1 && unk_0x2BBAA45ECDE3DAE2(iLocal_35[4], -1680762137) != 1)
									{
										unk_0x9B869F23DD5B668A(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
										unk_0x40E2910BAF39B1C7(iLocal_35[4], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[5])
							{
								if (unk_0xB6B12179F5BB7520(905.9f, -1574.8f, 29.9f, 3f, 0))
								{
									if (unk_0x2BBAA45ECDE3DAE2(iLocal_35[5], 1647992574) != 1 && unk_0x2BBAA45ECDE3DAE2(iLocal_35[5], -1680762137) != 1)
									{
										unk_0x9B869F23DD5B668A(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
										unk_0x40E2910BAF39B1C7(iLocal_35[5], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[6])
							{
								if (unk_0xB6B12179F5BB7520(889.5f, -1562f, 29.7f, 3f, 0))
								{
									if (unk_0x2BBAA45ECDE3DAE2(iLocal_35[6], 1647992574) != 1 && unk_0x2BBAA45ECDE3DAE2(iLocal_35[6], -1680762137) != 1)
									{
										unk_0x9B869F23DD5B668A(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
										unk_0x40E2910BAF39B1C7(iLocal_35[6], 1);
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
				unk_0xFB5F4D76105A21B5(5, iLocal_302, joaat("player"));
				iLocal_67++;
			}
			if (iLocal_67 == 1)
			{
				iLocal_65 = 0;
				while (iLocal_65 <= 6)
				{
					if (iParam0 == iLocal_35[iLocal_65])
					{
						if (func_170(iParam0, unk_0x18F7BE9ACB7D08F4(), 1) < 15f)
						{
							if (func_170(iParam0, unk_0x18F7BE9ACB7D08F4(), 1) > 3f)
							{
								if (unk_0x2BBAA45ECDE3DAE2(iParam0, 242628503) != 0 || unk_0x2BBAA45ECDE3DAE2(iParam0, 242628503) != 1)
								{
									if (!unk_0x3AAE8FF7FB37F69E(iParam0))
									{
										unk_0xD9FCA20C1C5553F7(iParam0);
									}
									if (unk_0x3AAE8FF7FB37F69E(iParam0))
									{
										unk_0x267F7A2DFDFFB077(iParam0);
									}
									unk_0xC8BEB049F3BFC0AB(&uLocal_57);
									unk_0x7F948DF34BFB8F5D(0, unk_0x18F7BE9ACB7D08F4(), -1, 1f, 1f, 1073741824, 0);
									unk_0x8F467CFC5FBBCE77(0, unk_0x18F7BE9ACB7D08F4(), 0);
									unk_0xAFDA7B8F83B2CA58(uLocal_57);
									unk_0x73F69DD57B7E92A9(iParam0, uLocal_57);
									unk_0x56C7B20E11B37066(&uLocal_57);
									iLocal_339[iLocal_65] = 0;
								}
							}
						}
						else
						{
							if (iParam0 == iLocal_35[0])
							{
								if (unk_0xB6B12179F5BB7520(912.2f, -1542.5f, 29.8f, 3f, 0))
								{
									if (unk_0x2BBAA45ECDE3DAE2(iLocal_35[0], 1647992574) != 1 && unk_0x2BBAA45ECDE3DAE2(iLocal_35[0], -1680762137) != 1)
									{
										unk_0x9B869F23DD5B668A(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
										unk_0x40E2910BAF39B1C7(iLocal_35[0], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[1])
							{
								if (unk_0xB6B12179F5BB7520(917.4f, -1517.4f, 30f, 3f, 0))
								{
									if (unk_0x2BBAA45ECDE3DAE2(iLocal_35[1], 1647992574) != 1 && unk_0x2BBAA45ECDE3DAE2(iLocal_35[1], -1680762137) != 1)
									{
										unk_0x9B869F23DD5B668A(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
										unk_0x40E2910BAF39B1C7(iLocal_35[1], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[2])
							{
								if (unk_0xB6B12179F5BB7520(869.8f, -1541.2f, 29.4f, 3f, 0))
								{
									if (unk_0x2BBAA45ECDE3DAE2(iLocal_35[2], 1647992574) != 1 && unk_0x2BBAA45ECDE3DAE2(iLocal_35[2], -1680762137) != 1)
									{
										unk_0x9B869F23DD5B668A(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
										unk_0x40E2910BAF39B1C7(iLocal_35[2], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[3])
							{
								if (unk_0xB6B12179F5BB7520(884.2f, -1574.1f, 30f, 3f, 0))
								{
									if (unk_0x2BBAA45ECDE3DAE2(iLocal_35[3], 1647992574) != 1 && unk_0x2BBAA45ECDE3DAE2(iLocal_35[3], -1680762137) != 1)
									{
										unk_0x9B869F23DD5B668A(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
										unk_0x40E2910BAF39B1C7(iLocal_35[3], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[4])
							{
								if (unk_0xB6B12179F5BB7520(904f, -1575f, 30f, 3f, 0))
								{
									if (unk_0x2BBAA45ECDE3DAE2(iLocal_35[4], 1647992574) != 1 && unk_0x2BBAA45ECDE3DAE2(iLocal_35[4], -1680762137) != 1)
									{
										unk_0x9B869F23DD5B668A(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
										unk_0x40E2910BAF39B1C7(iLocal_35[4], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[5])
							{
								if (unk_0xB6B12179F5BB7520(905.9f, -1574.8f, 29.9f, 3f, 0))
								{
									if (unk_0x2BBAA45ECDE3DAE2(iLocal_35[5], 1647992574) != 1 && unk_0x2BBAA45ECDE3DAE2(iLocal_35[5], -1680762137) != 1)
									{
										unk_0x9B869F23DD5B668A(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
										unk_0x40E2910BAF39B1C7(iLocal_35[5], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[6])
							{
								if (unk_0xB6B12179F5BB7520(889.5f, -1562f, 29.7f, 3f, 0))
								{
									if (unk_0x2BBAA45ECDE3DAE2(iLocal_35[6], 1647992574) != 1 && unk_0x2BBAA45ECDE3DAE2(iLocal_35[6], -1680762137) != 1)
									{
										unk_0x9B869F23DD5B668A(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
										unk_0x40E2910BAF39B1C7(iLocal_35[6], 1);
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
					iLocal_79 = unk_0x5AFB8ED811F05E4D();
					iLocal_394 = 1;
				}
				if (iLocal_394 == 1)
				{
					if (unk_0x5AFB8ED811F05E4D() > iLocal_79 + 9000)
					{
						unk_0x945880A1F9FE9E4F(5);
						unk_0x8BB3FA32294185BB(1f);
						unk_0x7A7F48A495EAC394(unk_0x8CFC7D6E1DA5D304(), 2, 0);
						unk_0xE223A1A4864F355C(unk_0x8CFC7D6E1DA5D304(), 0);
						iLocal_393 = 1;
					}
				}
			}
			if (iLocal_67 == 0)
			{
				unk_0xFB5F4D76105A21B5(5, iLocal_302, joaat("player"));
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
							if (func_170(iParam0, unk_0x18F7BE9ACB7D08F4(), 1) < 100f)
							{
								if (iLocal_355[iLocal_65] == 0)
								{
									unk_0x40E2910BAF39B1C7(iParam0, 1);
									iLocal_355[iLocal_65] = 1;
								}
								if (iLocal_363[iLocal_65] == 0)
								{
									if (!unk_0x3AAE8FF7FB37F69E(iParam0))
									{
										unk_0xD9FCA20C1C5553F7(iParam0);
									}
									if (unk_0x3AAE8FF7FB37F69E(iParam0))
									{
										unk_0x267F7A2DFDFFB077(iParam0);
									}
									unk_0xA34053449E1A61FE(iParam0, 100f, 0);
									iLocal_339[iLocal_65] = 0;
									iLocal_363[iLocal_65] = 1;
								}
							}
						}
						iLocal_65++;
					}
					if (iLocal_468 == 0)
					{
						if (unk_0x31F12808DC47A9E5(iLocal_35[0]))
						{
							if (!unk_0x0FAE113CE72ED842(iLocal_35[0]))
							{
								if (unk_0x31F12808DC47A9E5(iLocal_33))
								{
									if (unk_0xC4B84EB67F78C1F0(iLocal_33, 0))
									{
										if (unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iLocal_33, 1) && unk_0x8673F2F1802ADEF7(iLocal_33, 919.2f, -1554.4f, 30f, 4f, 4f, 4f, 0, 1, 0))
										{
											if (!unk_0x3AAE8FF7FB37F69E(iLocal_35[0]))
											{
												unk_0xD9FCA20C1C5553F7(iLocal_35[0]);
											}
											if (unk_0x3AAE8FF7FB37F69E(iLocal_35[0]))
											{
												unk_0x267F7A2DFDFFB077(iLocal_35[0]);
											}
											unk_0xC8BEB049F3BFC0AB(&uLocal_57);
											unk_0xA303A4837FBB8DDE(0, 917.8f, -1561f, 29f, 3f, -1, 1048576000, 0, 1193033728);
											unk_0x8F467CFC5FBBCE77(0, unk_0x18F7BE9ACB7D08F4(), 0);
											unk_0xB5746603774C4C9D(0, "misscarsteal4@director_grip", "mcs_2_loop_grip1", 8f, -8f, -1, 1, 0, 0, 0, 0);
											unk_0xAFDA7B8F83B2CA58(uLocal_57);
											unk_0x73F69DD57B7E92A9(iLocal_35[0], uLocal_57);
											unk_0x56C7B20E11B37066(&uLocal_57);
											iLocal_468 = 1;
										}
									}
								}
							}
						}
					}
					if (iLocal_468 == 1 && iLocal_487 == 0)
					{
						if (unk_0x31F12808DC47A9E5(iLocal_35[0]))
						{
							if (!unk_0x0FAE113CE72ED842(iLocal_35[0]))
							{
								if (unk_0x8673F2F1802ADEF7(iLocal_35[0], 917.8f, -1561f, 29f, 2f, 2f, 2f, 0, 1, 0))
								{
									func_131(&uLocal_137, 3, iLocal_35[0], "FHPrepBWorker", 0, 1);
									func_178(iLocal_35[0], "FHPB_BBAA", "FHPrepBWorker", 4);
									iLocal_487 = 1;
								}
							}
						}
					}
					if (iLocal_467 == 0)
					{
						if (unk_0x5AFB8ED811F05E4D() > iLocal_79 + 3000)
						{
							if (unk_0x31F12808DC47A9E5(iLocal_35[5]))
							{
								if (!unk_0x0FAE113CE72ED842(iLocal_35[5]))
								{
									unk_0xB5746603774C4C9D(iLocal_35[5], "cellphone@str", "cellphone_call_listen_c", 4f, -8f, -1, 49, 0, 0, 0, 0);
									iLocal_111 = unk_0x5AFB8ED811F05E4D();
									iLocal_467 = 1;
								}
							}
						}
					}
					else if (iLocal_466 == 0)
					{
						if (unk_0x5AFB8ED811F05E4D() > iLocal_111 + 5000)
						{
							if (unk_0x31F12808DC47A9E5(iLocal_35[5]))
							{
								if (!unk_0x0FAE113CE72ED842(iLocal_35[5]))
								{
									unk_0x267F7A2DFDFFB077(iLocal_35[5]);
									unk_0x48B25C02FAB9DC81(iLocal_35[5], unk_0x18F7BE9ACB7D08F4(), 0, 16);
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
							if (unk_0x31F12808DC47A9E5(iParam0))
							{
								if (!unk_0x0FAE113CE72ED842(iParam0))
								{
									unk_0x40E2910BAF39B1C7(iParam0, 1);
									if (unk_0x657B649BA2AD3582(iParam0, 0))
									{
										if (func_170(iParam0, unk_0x18F7BE9ACB7D08F4(), 1) > 200f)
										{
											if (!unk_0x3AAE8FF7FB37F69E(iParam0))
											{
												unk_0xD9FCA20C1C5553F7(iParam0);
											}
											if (unk_0x3AAE8FF7FB37F69E(iParam0))
											{
												unk_0x267F7A2DFDFFB077(iParam0);
											}
											unk_0x9603FB72C3126396(iParam0, unk_0x18F7BE9ACB7D08F4(), 1000f, -1, 0, 0);
											iLocal_306[iLocal_65] = 1;
										}
									}
									else if (func_170(iParam0, unk_0x18F7BE9ACB7D08F4(), 1) > 100f)
									{
										if (!unk_0x3AAE8FF7FB37F69E(iParam0))
										{
											unk_0xD9FCA20C1C5553F7(iParam0);
										}
										if (unk_0x3AAE8FF7FB37F69E(iParam0))
										{
											unk_0x267F7A2DFDFFB077(iParam0);
										}
										unk_0x9603FB72C3126396(iParam0, unk_0x18F7BE9ACB7D08F4(), 1000f, -1, 0, 0);
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
							if (unk_0x31F12808DC47A9E5(iParam0))
							{
								if (!unk_0x0FAE113CE72ED842(iParam0))
								{
									if (!unk_0x3AAE8FF7FB37F69E(iParam0))
									{
										unk_0xD9FCA20C1C5553F7(iParam0);
									}
									if (unk_0x3AAE8FF7FB37F69E(iParam0))
									{
										unk_0x267F7A2DFDFFB077(iParam0);
									}
									unk_0x40E2910BAF39B1C7(iParam0, 1);
									unk_0x9603FB72C3126396(iParam0, unk_0x18F7BE9ACB7D08F4(), 1000f, -1, 0, 0);
									unk_0x10F31830C95ED2E5(iParam0, 1);
									unk_0xDBE64C5761554FBF(&iParam0);
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
					iLocal_79 = unk_0x5AFB8ED811F05E4D();
					iLocal_394 = 1;
				}
				if (iLocal_394 == 1)
				{
					if (unk_0x5AFB8ED811F05E4D() > iLocal_79 + 6000)
					{
						unk_0x945880A1F9FE9E4F(5);
						unk_0x8BB3FA32294185BB(1f);
						unk_0x7A7F48A495EAC394(unk_0x8CFC7D6E1DA5D304(), 2, 0);
						unk_0xE223A1A4864F355C(unk_0x8CFC7D6E1DA5D304(), 0);
						iLocal_393 = 1;
					}
				}
			}
			if (iLocal_67 == 0)
			{
				unk_0xFB5F4D76105A21B5(5, iLocal_302, joaat("player"));
				unk_0x40E2910BAF39B1C7(iParam0, 1);
				iLocal_67++;
			}
			if (iLocal_67 == 1)
			{
				iLocal_65 = 0;
				while (iLocal_65 <= 6)
				{
					if (unk_0x31F12808DC47A9E5(iLocal_35[iLocal_65]))
					{
						if (!unk_0x0FAE113CE72ED842(iLocal_35[iLocal_65]))
						{
							if (func_170(unk_0x18F7BE9ACB7D08F4(), iLocal_35[iLocal_65], 1) < 15f)
							{
								if (func_190(iLocal_35[iLocal_65], 6))
								{
									if (unk_0x6A180E89A0F78BEE(iLocal_35[iLocal_65], unk_0x18F7BE9ACB7D08F4()))
									{
										if (iLocal_379[iLocal_65] == 0)
										{
											if (!unk_0x3AAE8FF7FB37F69E(iLocal_35[iLocal_65]))
											{
												unk_0xD9FCA20C1C5553F7(iLocal_35[iLocal_65]);
											}
											if (unk_0x3AAE8FF7FB37F69E(iLocal_35[iLocal_65]))
											{
												unk_0x267F7A2DFDFFB077(iLocal_35[iLocal_65]);
											}
											unk_0x58A1A1507026B918(iLocal_35[iLocal_65], -1, unk_0x18F7BE9ACB7D08F4(), -1, 0);
											iLocal_379[iLocal_65] = 1;
											iLocal_371[iLocal_65] = 0;
											iLocal_339[iLocal_65] = 0;
											iLocal_91 = unk_0x5AFB8ED811F05E4D();
										}
									}
									else if (unk_0x5AFB8ED811F05E4D() > iLocal_91 + 300)
									{
										iLocal_371[iLocal_65] = 0;
									}
								}
								else if (iLocal_371[iLocal_65] == 0)
								{
									if (!unk_0x3AAE8FF7FB37F69E(iLocal_35[iLocal_65]))
									{
										unk_0xD9FCA20C1C5553F7(iLocal_35[iLocal_65]);
									}
									if (unk_0x3AAE8FF7FB37F69E(iLocal_35[iLocal_65]))
									{
										unk_0x267F7A2DFDFFB077(iLocal_35[iLocal_65]);
									}
									unk_0x9603FB72C3126396(iLocal_35[iLocal_65], unk_0x18F7BE9ACB7D08F4(), 250f, -1, 0, 0);
									iLocal_371[iLocal_65] = 1;
									iLocal_379[iLocal_65] = 0;
								}
							}
							else if (iLocal_371[iLocal_65] == 0)
							{
								if (!unk_0x3AAE8FF7FB37F69E(iLocal_35[iLocal_65]))
								{
									unk_0xD9FCA20C1C5553F7(iLocal_35[iLocal_65]);
								}
								if (unk_0x3AAE8FF7FB37F69E(iLocal_35[iLocal_65]))
								{
									unk_0x267F7A2DFDFFB077(iLocal_35[iLocal_65]);
								}
								unk_0x9603FB72C3126396(iLocal_35[iLocal_65], unk_0x18F7BE9ACB7D08F4(), 250f, -1, 0, 0);
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

int func_190(int iParam0, int iParam1)
{
	if (unk_0x31F12808DC47A9E5(iParam0) && !unk_0x0FAE113CE72ED842(iParam0))
	{
		if (unk_0x9381BBF272130ED6(unk_0x18F7BE9ACB7D08F4(), iParam1))
		{
			if (unk_0x6703CD13741C39C5(unk_0x8CFC7D6E1DA5D304(), iParam0) || unk_0xF905401F186A9803(unk_0x8CFC7D6E1DA5D304(), iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_191()
{
	iLocal_46 = func_25(0);
	iLocal_47 = func_25(1);
	iLocal_48 = func_25(2);
	if (func_33(iLocal_46, 0))
	{
		if (!unk_0x0FAE113CE72ED842(iLocal_46))
		{
			if (!func_32(iLocal_46))
			{
				if (!func_193())
				{
					if (func_192(iLocal_46))
					{
						if (func_31(iLocal_46, 0))
						{
							unk_0x337F2213526139E0(iLocal_46, 1, 1);
							unk_0x40E2910BAF39B1C7(iLocal_46, 1);
							unk_0x267F7A2DFDFFB077(iLocal_46);
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
					if (!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
					{
						iLocal_473 = 1;
					}
					else if (unk_0x657B649BA2AD3582(iLocal_46, 0))
					{
						if (!unk_0x88B79D32B518C327(iLocal_46, unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), 0))
						{
							iLocal_473 = 1;
						}
					}
				}
				if (iLocal_473 == 0)
				{
					if (func_193())
					{
						iLocal_473 = 1;
					}
				}
				if (iLocal_470 == 1)
				{
					if ((func_192(iLocal_46) && unk_0xE54DCC6B21FDC95A(iLocal_46, 1)) && iLocal_473 == 0)
					{
						Local_122 = { unk_0x761660F5CE986DC4(iLocal_46, 1) };
						unk_0xEA3ACC77B4C2040A(Local_122.f_0, Local_122.f_1, Local_116.f_0, Local_116.f_1);
						if (unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) == 0)
						{
							if (iLocal_476 == 0)
							{
								if (unk_0x29C76D80E7597FEE(Local_122.f_0, Local_122.f_1, Local_116.f_0, Local_116.f_1))
								{
									unk_0xA0C0358B9D284C3C(iLocal_46, unk_0x5AD687C3474F04B4(iLocal_46, 0), Local_116, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_479 = 0;
									iLocal_476 = 1;
								}
							}
						}
						else if (unk_0x31F12808DC47A9E5(unk_0x048A9E2FC8C538E3(Local_122, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_479 == 0)
							{
								unk_0x8A58BE5F8F3F4E69(iLocal_46, unk_0x5AD687C3474F04B4(iLocal_46, 0), unk_0x048A9E2FC8C538E3(Local_122, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, 1);
								iLocal_476 = 0;
								iLocal_479 = 1;
							}
						}
						else if (iLocal_476 == 0)
						{
							if (unk_0x29C76D80E7597FEE(Local_122.f_0, Local_122.f_1, Local_116.f_0, Local_116.f_1))
							{
								unk_0xA0C0358B9D284C3C(iLocal_46, unk_0x5AD687C3474F04B4(iLocal_46, 0), Local_116, 4, 30f, 786468, 3f, 15f, 0);
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
		if (!unk_0x0FAE113CE72ED842(iLocal_48))
		{
			if (!func_32(iLocal_48))
			{
				if (!func_193())
				{
					if (func_192(iLocal_48))
					{
						if (func_31(iLocal_48, 0))
						{
							unk_0x337F2213526139E0(iLocal_48, 1, 1);
							unk_0x40E2910BAF39B1C7(iLocal_48, 1);
							unk_0x267F7A2DFDFFB077(iLocal_48);
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
					if (!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
					{
						iLocal_475 = 1;
					}
					else if (unk_0x657B649BA2AD3582(iLocal_48, 0))
					{
						if (!unk_0x88B79D32B518C327(iLocal_48, unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), 0))
						{
							iLocal_475 = 1;
						}
					}
				}
				if (iLocal_475 == 0)
				{
					if (func_193())
					{
						iLocal_475 = 1;
					}
				}
				if (iLocal_471 == 1)
				{
					if ((func_192(iLocal_48) && unk_0xE54DCC6B21FDC95A(iLocal_48, 1)) && iLocal_475 == 0)
					{
						Local_122 = { unk_0x761660F5CE986DC4(iLocal_48, 1) };
						unk_0xEA3ACC77B4C2040A(Local_122.f_0, Local_122.f_1, Local_116.f_0, Local_116.f_1);
						if (unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) == 0)
						{
							if (iLocal_477 == 0)
							{
								if (unk_0x29C76D80E7597FEE(Local_122.f_0, Local_122.f_1, Local_116.f_0, Local_116.f_1))
								{
									unk_0xA0C0358B9D284C3C(iLocal_48, unk_0x5AD687C3474F04B4(iLocal_48, 0), Local_116, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_480 = 0;
									iLocal_477 = 1;
								}
							}
						}
						else if (unk_0x31F12808DC47A9E5(unk_0x048A9E2FC8C538E3(Local_122, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_480 == 0)
							{
								unk_0x8A58BE5F8F3F4E69(iLocal_48, unk_0x5AD687C3474F04B4(iLocal_48, 0), unk_0x048A9E2FC8C538E3(Local_122, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, 1);
								iLocal_477 = 0;
								iLocal_480 = 1;
							}
						}
						else if (iLocal_477 == 0)
						{
							if (unk_0x29C76D80E7597FEE(Local_122.f_0, Local_122.f_1, Local_116.f_0, Local_116.f_1))
							{
								unk_0xA0C0358B9D284C3C(iLocal_48, unk_0x5AD687C3474F04B4(iLocal_48, 0), Local_116, 4, 30f, 786468, 3f, 15f, 0);
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
		if (!unk_0x0FAE113CE72ED842(iLocal_47))
		{
			if (!func_32(iLocal_47))
			{
				if (!func_193())
				{
					if (func_192(iLocal_47))
					{
						if (func_31(iLocal_47, 0))
						{
							unk_0x337F2213526139E0(iLocal_47, 1, 1);
							unk_0x40E2910BAF39B1C7(iLocal_47, 1);
							unk_0x267F7A2DFDFFB077(iLocal_47);
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
					if (!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
					{
						iLocal_474 = 1;
					}
					else if (unk_0x657B649BA2AD3582(iLocal_47, 0))
					{
						if (!unk_0x88B79D32B518C327(iLocal_47, unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), 0))
						{
							iLocal_474 = 1;
						}
					}
				}
				if (iLocal_474 == 0)
				{
					if (func_193())
					{
						iLocal_474 = 1;
					}
				}
				if (iLocal_472 == 1)
				{
					if ((func_192(iLocal_47) && unk_0xE54DCC6B21FDC95A(iLocal_47, 1)) && iLocal_474 == 0)
					{
						Local_122 = { unk_0x761660F5CE986DC4(iLocal_47, 1) };
						unk_0xEA3ACC77B4C2040A(Local_122.f_0, Local_122.f_1, Local_116.f_0, Local_116.f_1);
						if (unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) == 0)
						{
							if (iLocal_478 == 0)
							{
								if (unk_0x29C76D80E7597FEE(Local_122.f_0, Local_122.f_1, Local_116.f_0, Local_116.f_1))
								{
									unk_0xA0C0358B9D284C3C(iLocal_47, unk_0x5AD687C3474F04B4(iLocal_47, 0), Local_116, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_481 = 0;
									iLocal_478 = 1;
								}
							}
						}
						else if (unk_0x31F12808DC47A9E5(unk_0x048A9E2FC8C538E3(Local_122, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_481 == 0)
							{
								unk_0x8A58BE5F8F3F4E69(iLocal_47, unk_0x5AD687C3474F04B4(iLocal_47, 0), unk_0x048A9E2FC8C538E3(Local_122, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, 1);
								iLocal_478 = 0;
								iLocal_481 = 1;
							}
						}
						else if (iLocal_478 == 0)
						{
							if (unk_0x29C76D80E7597FEE(Local_122.f_0, Local_122.f_1, Local_116.f_0, Local_116.f_1))
							{
								unk_0xA0C0358B9D284C3C(iLocal_47, unk_0x5AD687C3474F04B4(iLocal_47, 0), Local_116, 4, 30f, 786468, 3f, 15f, 0);
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

int func_192(int iParam0)
{
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) && unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		if (!unk_0x0FAE113CE72ED842(iParam0))
		{
			if (unk_0x88B79D32B518C327(iParam0, unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), 0) && unk_0x4983F8C51A0C0AF3(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), -1, 0) == iParam0)
			{
				if (unk_0x31F12808DC47A9E5(iLocal_33))
				{
					if (unk_0xC4B84EB67F78C1F0(iLocal_33, 0))
					{
						if ((unk_0x88B79D32B518C327(iParam0, iLocal_33, 0) && unk_0x4983F8C51A0C0AF3(iLocal_33, -1, 0) == iParam0) && !unk_0x8673F2F1802ADEF7(iLocal_33, Local_116, 3f, 3f, 3f, 0, 1, 0))
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

bool func_193()
{
	return Global_17160;
}

void func_194()
{
	if (unk_0x31F12808DC47A9E5(iLocal_33))
	{
		if (!unk_0xC4B84EB67F78C1F0(iLocal_33, 0))
		{
			func_197(3);
			return;
		}
		else
		{
			if (func_196(&iLocal_33))
			{
				func_197(2);
				return;
			}
			if (unk_0x31F12808DC47A9E5(iLocal_32))
			{
				if (!unk_0xC4B84EB67F78C1F0(iLocal_32, 0))
				{
					func_197(1);
					return;
				}
				if (unk_0xC4B84EB67F78C1F0(iLocal_32, 0))
				{
					if (!unk_0xB84B6B13ADF5E3DF(iLocal_33))
					{
						if ((unk_0x4F2A29A6E3C00D1D(iLocal_32) || func_195(iLocal_32)) || func_196(&iLocal_32))
						{
							func_197(1);
							return;
						}
					}
				}
			}
		}
	}
	if (iLocal_28 == 3 || iLocal_28 == 4)
	{
		if (unk_0x31F12808DC47A9E5(iLocal_32))
		{
			if (unk_0xC4B84EB67F78C1F0(iLocal_32, 0))
			{
				if (func_170(iLocal_32, unk_0x18F7BE9ACB7D08F4(), 1) > 600f)
				{
					func_197(5);
					return;
				}
			}
		}
	}
	if (unk_0x31F12808DC47A9E5(iLocal_49))
	{
		if (unk_0x0FAE113CE72ED842(iLocal_49))
		{
			func_197(6);
			return;
		}
	}
}

int func_195(int iParam0)
{
	if (unk_0x31F12808DC47A9E5(uParam0))
	{
		if (unk_0x74C2FE037DFC8B4A(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xC4B84EB67F78C1F0(iParam0, 0))
		{
			if (!unk_0x25A40FAC128F45B0(iParam0))
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

int func_196(var uParam0)
{
	if (unk_0xC4B84EB67F78C1F0(*uParam0, 0))
	{
		if (((unk_0x08438F954B83E80B(*uParam0, 0, 7000) || unk_0x08438F954B83E80B(*uParam0, 3, 30000)) || unk_0x08438F954B83E80B(*uParam0, 2, 30000)) || unk_0x08438F954B83E80B(*uParam0, 1, 40000))
		{
			return 1;
		}
	}
	return 0;
}

void func_197(int iParam0)
{
	iLocal_30 = iParam0;
	if (iLocal_28 != 6)
	{
		iLocal_28 = 6;
		iLocal_62 = 0;
	}
}

void func_198(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_104551.f_9055.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_104551.f_9055.f_99.f_58[iParam0] = iParam1;
}

void func_199()
{
	if (iLocal_28 == 5)
	{
		if (iLocal_483 == 0)
		{
			func_200(657);
		}
	}
}

void func_200(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	Global_55902 = 0;
	if (!Global_56126[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_67996)
	{
		if (Global_67997[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_67997[iVar1 /*9*/].f_1 = 1;
			Global_67997[iVar1 /*9*/].f_2 = 0f;
			if (Global_67997[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

bool func_201(bool bParam0)
{
	if (!bParam0 && unk_0xE7FAF8E78F7D3A73(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB03A1684359C50A1(Global_71100, 0);
}

void func_202()
{
	unk_0x9A63F1CF5AD1028E(unk_0x8CFC7D6E1DA5D304(), 0);
	unk_0x116D235ABEF5CE46(joaat("packer"), 0);
	unk_0x116D235ABEF5CE46(joaat("phantom"), 0);
	unk_0x633C8E78F68C0DAE("FHPRB_START");
	unk_0x633C8E78F68C0DAE("FHPRB_TRUCK");
	unk_0x633C8E78F68C0DAE("FHPRB_COPS");
	unk_0x633C8E78F68C0DAE("FHPRB_LOST");
	unk_0x633C8E78F68C0DAE("FHPRB_STOP");
	unk_0x7E1D02126DA8A751(uLocal_51, 0);
	unk_0x7E1D02126DA8A751(uLocal_52, 0);
	unk_0x7E1D02126DA8A751(uLocal_53, 0);
	unk_0x7E1D02126DA8A751(uLocal_54, 0);
	unk_0x7E1D02126DA8A751(uLocal_55, 0);
	unk_0x7E1D02126DA8A751(uLocal_56, 0);
	if (unk_0x787E8EECD78022DE("SCRAP_SECURITY"))
	{
		if (unk_0x33A2D945049A54A7("SCRAP_SECURITY"))
		{
			unk_0x524D5209C3686CCC("SCRAP_SECURITY", 0);
		}
	}
	unk_0x945880A1F9FE9E4F(5);
	if (unk_0x94F13204B7EB050E(iLocal_114))
	{
		unk_0xAF4BA03FA4A37407(iLocal_114);
	}
	if (unk_0x94F13204B7EB050E(iLocal_115))
	{
		unk_0xAF4BA03FA4A37407(iLocal_115);
	}
	unk_0x810C5D6462DD69E6();
}

void func_203()
{
	int iVar0;
	
	if (unk_0xC040FCA5F6E73B3E("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1424);
	}
	if (Global_104551.f_9055 || func_201(0))
	{
		if (!func_204())
		{
			iVar0 = func_13();
			if (iVar0 != -1)
			{
				if (!func_7(iVar0))
				{
					return;
				}
				unk_0xD2A9C3F486236CC5(&(Global_83726[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_12();
		}
	}
}

int func_204()
{
	if (((Global_92829 == 13 || Global_92829 == 10) || Global_92829 == 11) || Global_92829 == 12)
	{
		return 0;
	}
	return 1;
}

