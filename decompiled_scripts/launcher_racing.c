#region Local Var
	int* iLocal_0 = NULL;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	float fLocal_17 = 0f;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	char* sLocal_22 = NULL;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	struct<4> Local_38[10];
	bool bLocal_79 = 0;
	int iLocal_80 = 0;
	struct<6> Local_81 = { 10, 0, -1, 1000, -1, 0 } ;
	struct<3> Local_87 = { 0, 0, 0 } ;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	bool bLocal_97 = 0;
	bool bLocal_98 = 0;
	int iLocal_99 = 0;
	bool bLocal_100 = 0;
	int iLocal_101[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	struct<3> Local_111 = { 0, 0, 0 } ;
	float fLocal_114 = 0f;
	int iLocal_115 = 0;
	struct<3> Local_116 = { 0, 0, 0 } ;
	float fLocal_119 = 0f;
	struct<3> Local_120[3];
	float fLocal_130[3] = { 0f, 0f, 0f };
	struct<3> Local_134[7];
	float fLocal_156[7] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	int iLocal_164[3] = { 0, 0, 0 };
	int iLocal_168[3] = { 0, 0, 0 };
	int iLocal_172[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_180 = 0;
	int iLocal_181 = 0;
	char[] cLocal_182[8] = 0;
	char* sLocal_183[7] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int* iLocal_196 = NULL;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	struct<3> Local_199 = { 0, 0, 0 } ;
	struct<3> Local_202 = { 0, 0, 0 } ;
	struct<3> Local_205 = { 0, 0, 0 } ;
	struct<3> Local_208 = { 0, 0, 0 } ;
	float fLocal_211 = 0f;
	int iLocal_212 = 0;
	int iLocal_213 = 0;
	var uLocal_214 = 8;
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
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
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
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 1;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_5 = 1;
	iLocal_6 = 134;
	iLocal_7 = 134;
	iLocal_8 = 1;
	iLocal_9 = 1;
	iLocal_10 = 1;
	iLocal_11 = 134;
	iLocal_12 = 1;
	iLocal_13 = 12;
	iLocal_14 = 12;
	fLocal_17 = 0.001f;
	sLocal_22 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_91 = 1;
	bLocal_100 = true;
	iLocal_181 = joaat("feltzer2");
	iLocal_191 = 1;
	Local_199 = { 0f, 0f, 0f };
	Local_202 = { 1f, 1f, 1f };
	Local_205 = { 0f, 0f, 0f };
	Local_208 = { 0f, 0f, 0f };
	fLocal_211 = 0f;
	unk_0x6F2135B6129620C1(true);
	Local_87 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0xC968670BFACE42D9(83))
	{
		func_196(0);
	}
	func_193();
	switch (Local_81.f_1)
	{
		case 1:
		case 2:
			if (!func_192(0, 8))
			{
				func_196(0);
			}
			if (!func_191(Local_81.f_0))
			{
				func_196(0);
			}
			break;
		
		case 3:
			if (!func_192(0, 7))
			{
				func_196(0);
			}
			break;
		
		case 0:
			func_196(0);
			break;
	}
	func_185();
	if (!func_161())
	{
		func_196(0);
	}
	func_155();
	while (true)
	{
		func_152(&uLocal_214);
		if (func_161())
		{
			if (unk_0xC5042CC6F5E3D450())
			{
				switch (iLocal_80)
				{
					case 0:
						iLocal_80 = 1;
						break;
					
					case 1:
						func_143();
						func_114();
						break;
					
					case 2:
						func_54();
						break;
					
					case 3:
						func_1();
						break;
				}
			}
			else
			{
				func_196(0);
			}
		}
		else
		{
			func_196(0);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	if (!bLocal_98)
	{
		func_9();
	}
	else
	{
		func_2();
	}
}

void func_2()
{
	func_8(-1);
	func_7(0);
	func_6(Local_87);
	func_5();
	Global_1312344 = 1;
	Global_1312344.f_1 = Local_81.f_0;
	StringCopy(&(Global_1312344.f_2), func_4(), 24);
	StringCopy(&(Global_1312344.f_8), func_3(Local_81.f_0), 32);
	Global_1312344.f_16 = { Local_87 };
	Global_1315901 = 1;
	func_196(1);
}

char* func_3(int iParam0)
{
	char* sVar0;
	
	if (unk_0xCCA1072C29D096C2())
	{
		switch (iParam0)
		{
			case 8:
				sVar0 = "qLp8OsaeTkCjzhK0SZoRVA";
				break;
			
			case 6:
				sVar0 = "JhV_7Ir4ekSQLafj22vFkg";
				break;
			
			case 7:
				sVar0 = "Fuc2Yl2sukOrORoMo1YJ1A";
				break;
			
			case 5:
				sVar0 = "aNlcpqEkhUytgK-8IMbTYQ";
				break;
			
			case 0:
				sVar0 = "9aLp9VEnME25Mp_6XZaw0A";
				break;
			
			case 2:
				sVar0 = "lT9gI2mfrkGDhiW1lSlhbw";
				break;
			
			case 3:
				sVar0 = "YxiNucGMGEu4lCKqizI2lA";
				break;
			
			case 1:
				sVar0 = "szYNFSberECI5goiWsh1bw";
				break;
			
			case 4:
				sVar0 = "nZ4p_4_F0EOFyZa2yKEHGA";
				break;
		}
	}
	else if (unk_0xF6201B4DAF662A9D())
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "dm_test_20";
				break;
			
			case 1:
				sVar0 = "dm_test_18";
				break;
			
			case 2:
				sVar0 = "dm_test_2";
				break;
			
			case 3:
				sVar0 = "dm_test_4";
				break;
			
			case 4:
				sVar0 = "dm_test_5";
				break;
			
			case 5:
				sVar0 = "dm_test_16";
				break;
			
			case 6:
				sVar0 = "dm_test_13";
				break;
			
			case 7:
				sVar0 = "dm_test_15";
				break;
			
			case 8:
				sVar0 = "dm_test_24";
				break;
		}
	}
	else if (unk_0xA72BC0B675B1519E())
	{
		switch (iParam0)
		{
			case 8:
				sVar0 = "qLp8OsaeTkCjzhK0SZoRVA";
				break;
			
			case 6:
				sVar0 = "JhV_7Ir4ekSQLafj22vFkg";
				break;
			
			case 7:
				sVar0 = "Fuc2Yl2sukOrORoMo1YJ1A";
				break;
			
			case 5:
				sVar0 = "aNlcpqEkhUytgK-8IMbTYQ";
				break;
			
			case 0:
				sVar0 = "9aLp9VEnME25Mp_6XZaw0A";
				break;
			
			case 2:
				sVar0 = "lT9gI2mfrkGDhiW1lSlhbw";
				break;
			
			case 3:
				sVar0 = "YxiNucGMGEu4lCKqizI2lA";
				break;
			
			case 1:
				sVar0 = "szYNFSberECI5goiWsh1bw";
				break;
			
			case 4:
				sVar0 = "nZ4p_4_F0EOFyZa2yKEHGA";
				break;
		}
	}
	else if (unk_0x4D982ADB1978442D())
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "dm_test_20";
				break;
			
			case 1:
				sVar0 = "dm_test_18";
				break;
			
			case 2:
				sVar0 = "dm_test_2";
				break;
			
			case 3:
				sVar0 = "dm_test_4";
				break;
			
			case 4:
				sVar0 = "dm_test_5";
				break;
			
			case 5:
				sVar0 = "dm_test_16";
				break;
			
			case 6:
				sVar0 = "dm_test_13";
				break;
			
			case 7:
				sVar0 = "dm_test_15";
				break;
			
			case 8:
				sVar0 = "dm_test_24";
				break;
		}
	}
	else if (unk_0x48AF36444B965238())
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "dm_test_20";
				break;
			
			case 1:
				sVar0 = "dm_test_18";
				break;
			
			case 2:
				sVar0 = "dm_test_2";
				break;
			
			case 3:
				sVar0 = "dm_test_4";
				break;
			
			case 4:
				sVar0 = "dm_test_5";
				break;
			
			case 5:
				sVar0 = "dm_test_16";
				break;
			
			case 6:
				sVar0 = "dm_test_13";
				break;
			
			case 7:
				sVar0 = "dm_test_15";
				break;
			
			case 8:
				sVar0 = "dm_test_24";
				break;
			}
	}
	return sVar0;
}

char* func_4()
{
	char* sVar0;
	
	if (unk_0xCCA1072C29D096C2())
	{
		sVar0 = "SPRACE";
	}
	else if (unk_0xF6201B4DAF662A9D())
	{
		sVar0 = "2535285330962926";
	}
	else if (unk_0xA72BC0B675B1519E())
	{
		sVar0 = "SPRACE";
	}
	else if (unk_0x4D982ADB1978442D())
	{
		sVar0 = "2535285330962926";
	}
	else if (unk_0x48AF36444B965238())
	{
		sVar0 = "SPRACE";
	}
	else
	{
		sVar0 = "SPRACE";
	}
	return sVar0;
}

void func_5()
{
	unk_0x933D6A9EEC1BACD0(&Global_1312424, 0);
}

void func_6(struct<3> Param0)
{
	Global_1312424.f_6 = { Param0 };
}

void func_7(int iParam0)
{
	Global_1312424.f_2 = iParam0;
}

void func_8(int iParam0)
{
	Global_1312424.f_1 = iParam0;
}

void func_9()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	Local_81.f_2 = -1;
	if (func_53(unk_0xD80958FC74E988A6()))
	{
		if (!unk_0xF33BDFE19B309B19(unk_0xD80958FC74E988A6()))
		{
			unk_0x560A43136EB58105(unk_0xD80958FC74E988A6(), false);
		}
	}
	while (!func_47())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (Local_81.f_1 != 3)
	{
		func_15(func_41(), 1, Local_81.f_3);
		iVar0 = unk_0x9CD27B0045628463() + 1500;
		iVar1 = unk_0xB6997A7EB3F5C8C0();
		if (func_13(iVar1))
		{
			while (!func_12(iVar1, 3f, 2, 1056964608, 0, 1) || unk_0x9CD27B0045628463() < iVar0)
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
		iVar2 = unk_0xA5EDC40EF369B48D();
		if (unk_0x5E9564D8246B909A(iVar2))
		{
			unk_0x8D32347D6D4C40A2(iVar2, false, 0);
		}
	}
	func_10();
}

void func_10()
{
	if (!func_11(0))
	{
		unk_0x6EB5F71AA68F2E8E("mission_Race");
		while (!unk_0xE6CC9F3BA0FB9EF1("mission_Race"))
		{
			unk_0x6EB5F71AA68F2E8E("mission_Race");
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xB8BA7F44DF1575E1("mission_Race", &Local_81, 6, 17000);
	}
	unk_0xC90D2DCACD56184C("mission_Race");
	func_196(1);
}

bool func_11(bool bParam0)
{
	if (!bParam0 && unk_0x2C83A9DA6BFFC4F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xA921AA820C25702F(Global_68315, 0);
}

int func_12(int iParam0, float fParam1, int iParam2, float fParam3, bool bParam4, bool bParam5)
{
	unk_0xFE99B66D079CF6BC(0, 71, true);
	unk_0xFE99B66D079CF6BC(0, 72, true);
	unk_0xFE99B66D079CF6BC(0, 76, true);
	unk_0xFE99B66D079CF6BC(0, 73, true);
	unk_0xFE99B66D079CF6BC(0, 59, true);
	unk_0xFE99B66D079CF6BC(0, 60, true);
	if (bParam5)
	{
		unk_0xFE99B66D079CF6BC(0, 75, true);
	}
	unk_0xFE99B66D079CF6BC(0, 80, true);
	unk_0xFE99B66D079CF6BC(0, 69, true);
	unk_0xFE99B66D079CF6BC(0, 70, true);
	unk_0xFE99B66D079CF6BC(0, 68, true);
	unk_0xFE99B66D079CF6BC(0, 74, true);
	unk_0xFE99B66D079CF6BC(0, 86, true);
	unk_0xFE99B66D079CF6BC(0, 81, true);
	unk_0xFE99B66D079CF6BC(0, 82, true);
	unk_0xFE99B66D079CF6BC(0, 138, true);
	unk_0xFE99B66D079CF6BC(0, 136, true);
	unk_0xFE99B66D079CF6BC(0, 114, true);
	unk_0xFE99B66D079CF6BC(0, 107, true);
	unk_0xFE99B66D079CF6BC(0, 110, true);
	unk_0xFE99B66D079CF6BC(0, 89, true);
	unk_0xFE99B66D079CF6BC(0, 89, true);
	unk_0xFE99B66D079CF6BC(0, 87, true);
	unk_0xFE99B66D079CF6BC(0, 88, true);
	unk_0xFE99B66D079CF6BC(0, 113, true);
	unk_0xFE99B66D079CF6BC(0, 115, true);
	unk_0xFE99B66D079CF6BC(0, 116, true);
	unk_0xFE99B66D079CF6BC(0, 117, true);
	unk_0xFE99B66D079CF6BC(0, 118, true);
	unk_0xFE99B66D079CF6BC(0, 119, true);
	unk_0xFE99B66D079CF6BC(0, 131, true);
	unk_0xFE99B66D079CF6BC(0, 132, true);
	unk_0xFE99B66D079CF6BC(0, 123, true);
	unk_0xFE99B66D079CF6BC(0, 126, true);
	unk_0xFE99B66D079CF6BC(0, 129, true);
	unk_0xFE99B66D079CF6BC(0, 130, true);
	unk_0xFE99B66D079CF6BC(0, 133, true);
	unk_0xFE99B66D079CF6BC(0, 134, true);
	unk_0x17FCA7199A530203();
	if ((unk_0x9CD27B0045628463() - Global_28) > 500)
	{
		unk_0x260BE8F09E326A20(iParam0, fParam1, iParam2, bParam4);
	}
	Global_28 = unk_0x9CD27B0045628463();
	if (!unk_0x5F9532F3B5CC2551(iParam0))
	{
		if (unk_0x73D57CFFDD12C355(unk_0xD5037BA82E12416F(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_13(int iParam0)
{
	if (func_14(iParam0))
	{
		if (unk_0x4C241E39B23DF959(iParam0, false))
		{
			if (!unk_0x28D3FED7190D3A0B(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_14(int iParam0)
{
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (!unk_0x5F9532F3B5CC2551(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_15(int iParam0, int iParam1, int iParam2)
{
	if (Global_97173.f_29699[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_97173.f_29699[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_16(Global_97173.f_29699[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_16(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_40();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_39(99, 1);
					func_38(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_38(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_38(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_24(0);
			switch (iParam2)
			{
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
					if (func_23(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_38(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_38(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_38(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_23(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_38(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_38(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_38(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_38(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_38(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_38(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 97:
				case 98:
				case 99:
				case 100:
				case 102:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
					switch (iParam0)
					{
						case 0:
							func_38(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_38(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_38(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x8A1C8B1738FFE87E())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_38(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_38(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_38(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_38(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_38(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_38(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_23(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_38(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_38(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_38(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_38(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_38(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_38(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_22(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_39(95, iParam3);
					break;
				
				case 1:
					func_39(97, iParam3);
					break;
				
				case 2:
					func_39(96, iParam3);
					break;
			}
			func_39(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_19(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_19(iVar1);
	}
	iVar5 = (Global_51747[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_51747[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_51747[iVar2] = 2147483647;
				}
				else
				{
					Global_51747[iVar2] = (Global_51747[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_38(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_38(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_38(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_51747[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_51747[iVar2];
			Global_51747[iVar2] = (Global_51747[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_97173.f_23756.f_233[iVar2 /*69*/].f_2[Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_97173.f_23756.f_233[iVar2 /*69*/].f_2[Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_97173.f_23756.f_233[iVar2 /*69*/].f_2[Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_97173.f_23756.f_233[iVar2 /*69*/]++;
		Global_97173.f_23756.f_233[iVar2 /*69*/].f_1++;
		if (Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_18(iParam0);
	if (Global_34909 == 15)
	{
		func_17(0);
	}
	return 1;
}

void func_17(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_51755[iVar0 /*3*/][0] = Global_97173.f_23756[iVar0];
		Global_51755.f_31[iVar0 /*3*/][0] = Global_97173.f_23756.f_11[iVar0];
		Global_51755.f_62[iVar0 /*3*/][0] = Global_97173.f_23756.f_22[iVar0];
		Global_51755.f_93[iVar0 /*3*/][0] = Global_97173.f_23756.f_33[iVar0];
		Global_51755.f_124[iVar0 /*3*/][0] = Global_97173.f_23756.f_44[iVar0];
		Global_51755.f_155[iVar0 /*3*/][0] = Global_97173.f_23756.f_55[iVar0];
		Global_51755.f_186[iVar0 /*3*/][0] = Global_97173.f_23756.f_66[iVar0];
		Global_51755.f_217[iVar0 /*3*/][0] = Global_97173.f_23756.f_77[iVar0];
		Global_51755.f_248[iVar0 /*3*/][0] = Global_97173.f_23756.f_88[iVar0];
		if (!bParam0)
		{
			Global_51755[iVar0 /*3*/][1] = Global_97173.f_23756[iVar0];
			Global_51755.f_31[iVar0 /*3*/][1] = Global_97173.f_23756.f_11[iVar0];
			Global_51755.f_62[iVar0 /*3*/][1] = Global_97173.f_23756.f_22[iVar0];
			Global_51755.f_93[iVar0 /*3*/][1] = Global_97173.f_23756.f_33[iVar0];
			Global_51755.f_124[iVar0 /*3*/][1] = Global_97173.f_23756.f_44[iVar0];
			Global_51755.f_155[iVar0 /*3*/][1] = Global_97173.f_23756.f_55[iVar0];
			Global_51755.f_186[iVar0 /*3*/][1] = Global_97173.f_23756.f_66[iVar0];
			Global_51755.f_217[iVar0 /*3*/][1] = Global_97173.f_23756.f_77[iVar0];
			Global_51755.f_248[iVar0 /*3*/][1] = Global_97173.f_23756.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_18(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_51747[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xB3271D7AB655B441(joaat("sp0_total_cash"), iVar0, true);
			break;
		
		case 1:
			unk_0xB3271D7AB655B441(joaat("sp1_total_cash"), iVar0, true);
			break;
		
		case 2:
			unk_0xB3271D7AB655B441(joaat("sp2_total_cash"), iVar0, true);
			break;
	}
}

void func_19(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x10FAB35428CCC9D7())
	{
		if (unk_0xA921AA820C25702F(Global_97173.f_23756.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xE80492A9AC099A93(&(Global_97173.f_23756.f_471), iParam0);
		}
	}
	else if (unk_0xA921AA820C25702F(Global_97173.f_23756.f_471, iParam0) || unk_0xA921AA820C25702F(Global_2097152[func_21() /*8053*/].f_5756.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xE80492A9AC099A93(&(Global_97173.f_23756.f_471), iParam0);
		unk_0xE80492A9AC099A93(&(Global_2097152[func_21() /*8053*/].f_5756.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x202709F4C58A0424("COUP_RED");
		unk_0xC63CD5D2920ACBE7(func_20(iParam0));
		unk_0x1CCD9A37359072CF(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_20(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		default:
	}
	return "";
}

int func_21()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_22(int iParam0)
{
	func_39(93, iParam0);
	func_39(29, iParam0);
	func_39(30, iParam0);
}

bool func_23(int iParam0)
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		return unk_0xA921AA820C25702F(Global_97173.f_23756.f_471, iParam0);
	}
	return unk_0xA921AA820C25702F(Global_2097152[func_21() /*8053*/].f_5756.f_10, iParam0);
}

int func_24(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x867365E111A3B6EB(27))
	{
		return 0;
	}
	if (unk_0x767FBC2AC802EF3D(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x767FBC2AC802EF3D(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x767FBC2AC802EF3D(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x767FBC2AC802EF3D(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xB3271D7AB655B441(joaat("num_cash_spent"), iVar1, true);
		func_37(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_25(27, 1);
	return 1;
}

int func_25(int iParam0, int iParam1)
{
	if (iParam0 >= 61)
	{
		return 0;
	}
	return func_26(iParam0, iParam1);
}

int func_26(int iParam0, int iParam1)
{
	if (unk_0x867365E111A3B6EB(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_24690 != 0 && !Global_68067)
	{
		return 0;
	}
	if (func_36(&Global_2543696))
	{
		if (func_34(&Global_2543696, iParam0))
		{
			return 0;
		}
		if (func_27(&Global_2543696, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xBEC7076D64130195(iParam0))
		{
			return 0;
		}
		if (unk_0x867365E111A3B6EB(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_27(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[61];
	
	if (unk_0x867365E111A3B6EB(iParam1))
	{
		return 0;
	}
	if (func_34(uParam0, iParam1))
	{
		return 0;
	}
	func_30(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_28(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_28(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x867365E111A3B6EB(iParam1))
	{
		return 0;
	}
	if (func_34(uParam0, iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_29(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_29(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 61;
}

void func_30(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_33(uParam0, iVar0);
		iVar0++;
	}
	func_31(&(uParam0->f_62), (8f - 0.5f));
}

void func_31(int* iParam0, float fParam1)
{
	iParam0->f_1 = (func_32() - fParam1);
	unk_0x933D6A9EEC1BACD0(iParam0, 1);
	unk_0xE80492A9AC099A93(iParam0, 2);
	iParam0->f_2 = 0f;
}

float func_32()
{
	int iVar0;
	
	if (unk_0x10FAB35428CCC9D7())
	{
		iVar0 = unk_0x7A5487FE9FAA6B48();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x9CD27B0045628463()) / 1000f);
}

void func_33(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 61;
}

bool func_34(var uParam0, int iParam1)
{
	return func_35(uParam0, iParam1) != -1;
}

int func_35(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_36(var uParam0)
{
	return uParam0->f_68 == 1;
}

int func_37(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 61)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x1C186837D0619335(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xC2AFFFDABBDC2C5C(iParam0, iParam1);
	}
	return 0;
}

void func_38(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x767FBC2AC802EF3D(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xB3271D7AB655B441(iParam0, iVar0, true);
}

void func_39(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_50315[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x10FAB35428CCC9D7())
	{
		return;
	}
	if (Global_50315[iParam0 /*7*/])
	{
		unk_0x767FBC2AC802EF3D(Global_50315[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xB3271D7AB655B441(Global_50315[iParam0 /*7*/].f_1, iVar0, true);
	}
}

void func_40()
{
	int iVar0;
	
	if (unk_0x054354A99211EB96())
	{
		unk_0x767FBC2AC802EF3D(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_51747[0] == iVar0)
		{
			Global_51747[0] = iVar0;
		}
		unk_0x767FBC2AC802EF3D(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_51747[1] == iVar0)
		{
			Global_51747[1] = iVar0;
		}
		unk_0x767FBC2AC802EF3D(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_51747[2] == iVar0)
		{
			Global_51747[2] = iVar0;
		}
	}
}

int func_41()
{
	func_42();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_42()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_46(Global_97173.f_1729.f_539.f_3213) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_45(unk_0xD80958FC74E988A6());
			if (func_44(iVar0) && (!func_43(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_44(Global_97173.f_1729.f_539.f_3213))
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

bool func_43(int iParam0)
{
	return Global_34909 == iParam0;
}

bool func_44(int iParam0)
{
	return iParam0 < 3;
}

int func_45(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		iVar1 = unk_0x9F47B058362C84B5(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_46(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_46(int iParam0)
{
	if (func_44(iParam0))
	{
		return Global_97173.f_29699[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_47()
{
	int iVar0;
	
	iVar0 = func_48(&(Local_81.f_2), 0, 9, 0, 0);
	if (!iVar0 == 1)
	{
		return 0;
	}
	return 1;
}

int func_48(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_87667.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_52(0))
		{
			return 0;
		}
		Global_34873++;
		*uParam0 = Global_34873;
		unk_0x239528EACDC3E7DE(unk_0xA5EDC40EF369B48D(), false);
		Global_17098.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xBC8983F38F78ED51(8);
		}
		Global_34909 = iParam2;
		Global_34871 = *uParam0;
		Global_34872 = iParam4;
		Global_34870 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_34870 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_34870)
			{
				if (Global_34876[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_34871 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_50(iParam2))
		{
			return 0;
		}
		if (Global_34870 == 8)
		{
			return 0;
		}
		Global_34873++;
		*uParam0 = Global_34873;
		Global_34876[Global_34870 /*4*/] = Global_34873;
		Global_34876[Global_34870 /*4*/].f_1 = iParam1;
		Global_34876[Global_34870 /*4*/].f_2 = iParam2;
		Global_34876[Global_34870 /*4*/].f_3 = 0;
		Global_34870++;
		if (iParam4 != 0)
		{
			func_49(uParam0, iParam4);
		}
	}
	return 2;
}

void func_49(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_34870 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_34870)
	{
		if (Global_34876[iVar0 /*4*/] == *uParam0)
		{
			Global_34876[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_50(int iParam0)
{
	return func_51(iParam0, Global_34909);
}

int func_51(int iParam0, int iParam1)
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

int func_52(int iParam0)
{
	if (Global_34909 == 15)
	{
		return 0;
	}
	if (func_50(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_53(int iParam0)
{
	if (func_14(iParam0))
	{
		if (!unk_0x84A2DD9AC37C35C1(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_54()
{
	int iVar0;
	
	switch (iLocal_94)
	{
		case 0:
			if (func_112(0, -1))
			{
				unk_0x8DFCED7A656F8802(true);
				func_101();
				unk_0x19F21E63AE6EAE4E(false);
				iLocal_99 = 1;
				bLocal_97 = false;
				bLocal_98 = false;
				iLocal_94 = 1;
			}
			break;
		
		case 1:
			if (func_67())
			{
				iLocal_94 = 2;
			}
			break;
		
		case 2:
			iVar0 = unk_0xA5EDC40EF369B48D();
			unk_0x8EEDA153AD141BA4(iVar0, false);
			unk_0x8D32347D6D4C40A2(iVar0, true, 0);
			func_58(0, 1, 1, 0);
			func_55(1, -1);
			iLocal_94 = 0;
			if (bLocal_97)
			{
				iLocal_80 = 3;
			}
			else
			{
				unk_0x19F21E63AE6EAE4E(true);
				iLocal_80 = 1;
			}
			break;
	}
}

void func_55(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_57(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17236.f_7207)
	{
		unk_0x450930E616475D0D(15);
		Global_17236.f_7207 = 0;
	}
	unk_0x55598D21339CB998(0f);
	if (Global_17236.f_4886[iVar0])
	{
		unk_0x2A179DF17CCF04CD(9, false);
		Global_17236.f_4886[iVar0] = 0;
	}
	if (Global_17236.f_4879[iVar0])
	{
		unk_0xBE2CACCF5A8AA805("CommonMenu");
		Global_17236.f_4879[iVar0] = 0;
	}
	if (bParam0)
	{
		func_56(&(Global_17236.f_4918[iVar0 /*10*/]));
		Global_17236.f_4979[iVar0] = 0;
	}
	else
	{
		Global_17236.f_4979[iVar0] = 0;
	}
}

void func_56(int* iParam0)
{
	if (iParam0->f_9 != 0)
	{
		if (unk_0x85F01B8D5B90570E(*iParam0))
		{
			unk_0x1D132D614DD86811(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_57(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0x10FAB35428CCC9D7() && unk_0x2910669969E9535E())
		{
			iParam2 = unk_0x638A3A81733086DB();
		}
	}
	StringCopy(&cVar0, unk_0x442E0A7EDE4A738A(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0xD24D37CC275948CC(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_17236.f_4979[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_17236.f_4979[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_17236.f_4979[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_58(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (bParam0)
	{
		unk_0x9CB5CE07A3968D5A(unk_0x4F8644AF03D0E0D6());
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), true);
		unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), true);
		func_66(1);
		unk_0xFDB423997FA30340();
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x7497D2CE2C30D24C())
			{
				unk_0xD79DEEFB53455EBA(false);
			}
			if (!func_65())
			{
				Global_14393.f_1 = 3;
			}
			Global_15692 = 5;
		}
		func_64(1, bParam3, iParam2);
		Global_54578 = 1;
		Global_66883 = 1;
		Global_68065 = 1;
	}
	else
	{
		func_66(0);
		unk_0xE1CD1E48E025E661();
		Global_54578 = 0;
		if (bParam1)
		{
			unk_0x03FC694AE06C5A20();
		}
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), false);
		unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), false);
		func_64(0, bParam3, iParam2);
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && !func_59(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0x3882114BDE571AD4(unk_0xD80958FC74E988A6(), false);
		}
		Global_68065 = 0;
	}
}

int func_59(int iParam0)
{
	if (func_61(iParam0, 0))
	{
		return 1;
	}
	if (func_60())
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

bool func_60()
{
	return unk_0xA921AA820C25702F(Global_2359301, 3);
}

bool func_61(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x4F8644AF03D0E0D6())
	{
		bVar0 = func_62(-1, 0) == 8;
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

int func_62(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_63();
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

int func_63()
{
	return Global_1312736;
}

int func_64(bool bParam0, bool bParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x48AF36444B965238())
	{
		if (unk_0xA0FE76168A189DDB() != bParam0 && uParam2)
		{
			unk_0x20746F7B1032A3C7(bParam0, bParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_65()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_66(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_2263, 13);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_2263, 13);
	}
}

int func_67()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	
	func_100(&iVar0, &iVar1, &uVar2, &uVar3, 0);
	unk_0xEDE476E5EE29EDB1(2, 201);
	unk_0xEDE476E5EE29EDB1(2, 202);
	unk_0xEDE476E5EE29EDB1(2, 188);
	unk_0xEDE476E5EE29EDB1(2, 187);
	if (iLocal_96 != 0)
	{
		if (unk_0x83666F9FB8FEBD4B() > 800 || (((iVar1 > -64 && iVar1 < 64) && iVar0 > -64) && iVar0 < 64))
		{
			iLocal_96 = 0;
		}
		else
		{
			iVar0 = 0;
			iVar1 = 0;
		}
	}
	bVar4 = (iVar1 < -64 || unk_0x580417101DDB492F(2, 188));
	bVar5 = (iVar1 > 64 || unk_0x580417101DDB492F(2, 187));
	bVar6 = unk_0x580417101DDB492F(2, 201);
	bVar7 = unk_0x580417101DDB492F(2, 202);
	bVar8 = (iVar1 < -64 || iVar1 > 64);
	if (bVar6)
	{
		if (iLocal_95 == 1)
		{
			bLocal_98 = true;
		}
		else
		{
			bLocal_98 = false;
		}
		bLocal_97 = true;
		return 1;
	}
	else if (bVar7)
	{
		iLocal_192 = 0;
		bLocal_97 = false;
		return 1;
	}
	else
	{
		if (bVar5)
		{
			if (iLocal_95 == 0)
			{
				iLocal_95 = 1;
			}
			else if (iLocal_95 == 0)
			{
			}
		}
		else if (bVar4)
		{
			if (iLocal_95 == 1)
			{
				iLocal_95 = 0;
			}
			else if (iLocal_95 == 1)
			{
			}
		}
		if (bVar5 || bVar4)
		{
			if (bVar8)
			{
				unk_0xC1B1E9A034A63A62(0);
				iLocal_96 = 1;
			}
			func_99(iLocal_95, 1, 1);
		}
	}
	func_68(1, -1, 1, 0, 1, -1082130432, 0);
	return 0;
}

void func_68(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6)
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
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	bool bVar31;
	bool bVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	bool bVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	int* iVar46;
	int* iVar47;
	int* iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	int iVar52;
	bool bVar53;
	float fVar54;
	float fVar55;
	float fVar56;
	int iVar57;
	int iVar58;
	float fVar59;
	int iVar60;
	float fVar61;
	float fVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	int iVar67;
	
	if (!func_57(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_96(0, bParam6))
	{
		return;
	}
	unk_0xB8A850F20A067EB6(76, 84);
	unk_0xF5A2C681787E579D(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	if (Global_17236)
	{
		if (func_94(29, 1, 1, &fVar35, &fVar36))
		{
			fVar55 = fVar36;
			fVar55 = (fVar55 + 0f);
		}
		else
		{
			Global_17236 = 0;
		}
	}
	if (unk_0xD24D37CC275948CC(&(Global_17236.f_1)) == unk_0xD24D37CC275948CC("HIDE"))
	{
		fVar56 = Global_17234;
	}
	else
	{
		fVar56 = (((Global_17234 + fVar55) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_17235;
	}
	unk_0x888D57E407E63624(&iVar57, &iVar58);
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17236.f_4986)
		{
			if (unk_0xD24D37CC275948CC(&(Global_17236.f_1)) == unk_0xD24D37CC275948CC("HIDE"))
			{
				fVar49 = Global_17234;
			}
			else
			{
				if (Global_17236)
				{
					unk_0xE7FFAE5EBF23D890(func_93(29), func_91(29, 1), (Global_17233 + (fParam5 * 0.5f)), (Global_17234 + ((fVar55 - 0f) * 0.5f)), fParam5, (fVar55 - 0f), 0f, 255, 255, 255, 255, false);
				}
				if (Global_17236.f_7177)
				{
					iVar1 = Global_17236.f_7173;
					iVar2 = Global_17236.f_7174;
					iVar3 = Global_17236.f_7175;
					iVar4 = Global_17236.f_7176;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_90(Global_17233, (Global_17234 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_17234 + fVar55) + 0.034722f) + 0f);
				if (unk_0xD24D37CC275948CC(&(Global_17236.f_1)) != 0)
				{
					func_89();
					unk_0x25FBB336DF1804CB(&(Global_17236.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17236.f_68)
					{
						if (Global_17236.f_5[iVar14] == 2)
						{
							unk_0x03B504CF259931BC(Global_17236.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17236.f_5[iVar14] == 3)
						{
							unk_0xE7DCB5B874BCD96E(Global_17236.f_14[iVar16], Global_17236.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17236.f_5[iVar14] == 1)
						{
							unk_0xC63CD5D2920ACBE7(&(Global_17236.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17236.f_5[iVar14] == 8)
						{
							unk_0xC63CD5D2920ACBE7(&(Global_17236.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17236.f_5[iVar14] == 5)
						{
							unk_0x6C188BE134E074AA(&(Global_17236.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17236.f_5[iVar14] == 6)
						{
							unk_0xC63CD5D2920ACBE7(&(Global_17236.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17236.f_5[iVar14] == 7)
						{
							unk_0x6C188BE134E074AA(&(Global_17236.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0xCD015E5BB0D96A57((Global_17233 + 0.00390625f), ((Global_17234 + fVar55) + 0.00416664f), 0);
				}
				if (Global_17236.f_4989 > Global_17236.f_4499)
				{
					if (Global_17236.f_4992 != 0)
					{
						func_89();
						func_87((((Global_17233 + fParam5) - 0.00390625f) - func_88("CM_ITEM_COUNT", Global_17236.f_4992, Global_17236.f_4991)), ((Global_17234 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_17236.f_4992, Global_17236.f_4991);
					}
				}
			}
			iVar6 = Global_17236.f_4993;
			iVar9 = 0;
			fVar59 = fVar49;
			if (Global_17236.f_7187)
			{
				iVar1 = Global_17236.f_7183;
				iVar2 = Global_17236.f_7184;
				iVar3 = Global_17236.f_7185;
				iVar4 = Global_17236.f_7186;
			}
			else
			{
				unk_0x7C9C91AB74A0360F(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17236.f_4499 && iVar6 <= Global_17236.f_4492)
			{
				if (iVar6 >= 0)
				{
					if (Global_17236.f_4753[iVar6])
					{
						if (Global_17236.f_4627[iVar6] && iVar6 != Global_17236.f_4993)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_17236.f_5000[iVar6] != 0f)
						{
							fVar54 = Global_17236.f_5000[iVar6];
						}
						fVar49 = (fVar49 + fVar54);
						iVar9++;
					}
				}
				iVar6++;
			}
			if (bParam3)
			{
				if (iVar9 <= 1)
				{
					fVar54 = 0.034722f;
					fVar49 = (fVar49 + fVar54);
					iVar9++;
					if (Global_17236.f_4492 <= 1)
					{
						Global_17236.f_4492++;
					}
					iVar52 = 1;
				}
			}
			unk_0xE7FFAE5EBF23D890("CommonMenu", "Gradient_Bgd", (Global_17233 + (fParam5 * 0.5f)), ((fVar59 + ((fVar49 - fVar59) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar59), 0f, 255, 255, 255, 255, false);
			if (Global_17236.f_4989 > Global_17236.f_4499)
			{
				if (Global_17236.f_7192)
				{
					iVar1 = Global_17236.f_7188;
					iVar2 = Global_17236.f_7189;
					iVar3 = Global_17236.f_7190;
					iVar4 = Global_17236.f_7191;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_90(Global_17233, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var37 = { unk_0x35736EE65BD00C11("CommonMenu", "shop_arrows_upANDdown") };
				Var37.f_0 = (Var37.f_0 * 0.5f);
				Var37.f_1 = (Var37.f_1 * 0.5f);
				if (Global_17236.f_7205)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0x7C9C91AB74A0360F(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xE7FFAE5EBF23D890("CommonMenu", "shop_arrows_upANDdown", (Global_17233 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), (Var37.f_0 / IntToFloat(iVar57)), (Var37.f_1 / IntToFloat(iVar58)), 0f, iVar1, iVar2, iVar3, iVar4, false);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0xD24D37CC275948CC(&(Global_17236.f_3969)) != 0 && Global_17236.f_4043 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17233 + 0.0046875f);
				if (Global_17236.f_4045 != 0)
				{
					func_94(Global_17236.f_4045, 1, 1, &fVar35, &fVar36);
					fVar41 = (((Global_17233 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_86(fVar41);
				unk_0x521FB041D93DD0E4(&(Global_17236.f_3969));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17236.f_4039)
				{
					if (Global_17236.f_3973[iVar14] == 2)
					{
						unk_0x03B504CF259931BC(Global_17236.f_3978[iVar15]);
						iVar15++;
					}
					else if (Global_17236.f_3973[iVar14] == 3)
					{
						unk_0xE7DCB5B874BCD96E(Global_17236.f_3982[iVar16], Global_17236.f_3986[iVar16]);
						iVar16++;
					}
					else if (Global_17236.f_3973[iVar14] == 1)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 5)
					{
						unk_0x6C188BE134E074AA(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 6)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 7)
					{
						unk_0x6C188BE134E074AA(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x9040DFB09BE75706(fVar41, (fVar49 + 0.00277776f));
				unk_0x7C9C91AB74A0360F(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_90(Global_17233, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17236.f_7197)
				{
					iVar1 = Global_17236.f_7193;
					iVar2 = Global_17236.f_7194;
					iVar3 = Global_17236.f_7195;
					iVar4 = Global_17236.f_7196;
				}
				else
				{
					unk_0x7C9C91AB74A0360F(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xE7FFAE5EBF23D890("CommonMenu", "Gradient_Bgd", (Global_17233 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0xDB88A37483346780(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xDB88A37483346780(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false);
				func_86(fVar41);
				unk_0x25FBB336DF1804CB(&(Global_17236.f_3969));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17236.f_4039)
				{
					if (Global_17236.f_3973[iVar14] == 2)
					{
						unk_0x03B504CF259931BC(Global_17236.f_3978[iVar15]);
						iVar15++;
					}
					else if (Global_17236.f_3973[iVar14] == 3)
					{
						unk_0xE7DCB5B874BCD96E(Global_17236.f_3982[iVar16], Global_17236.f_3986[iVar16]);
						iVar16++;
					}
					else if (Global_17236.f_3973[iVar14] == 1)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 5)
					{
						unk_0x6C188BE134E074AA(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 6)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 7)
					{
						unk_0x6C188BE134E074AA(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 8)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xCD015E5BB0D96A57(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_17236.f_4045 != 0)
				{
					func_94(Global_17236.f_4045, 1, 1, &fVar35, &fVar36);
					func_85(Global_17236.f_4045, 1, &iVar46, &iVar47, &iVar48);
					unk_0xE7FFAE5EBF23D890(func_93(Global_17236.f_4045), func_91(Global_17236.f_4045, 1), ((Global_17233 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, false);
				}
				fVar49 = (fVar49 + (((unk_0xDB88A37483346780(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17236.f_4043 > 0)
				{
					if ((unk_0x9CD27B0045628463() - Global_17236.f_4044) > Global_17236.f_4043)
					{
						StringCopy(&(Global_17236.f_3969), "", 16);
						Global_17236.f_4043 = -1;
					}
				}
			}
			if (unk_0xD24D37CC275948CC(&(Global_2542145.f_21)) != 0 && Global_2542145.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17233 + 0.0046875f);
				if (Global_2542145.f_67 != 0)
				{
					func_94(Global_2542145.f_67, 1, 1, &fVar35, &fVar36);
					fVar41 = (((Global_17233 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_86(fVar41);
				unk_0x521FB041D93DD0E4(&(Global_2542145.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2542145.f_61)
				{
					if (Global_2542145.f_25[iVar14] == 2)
					{
						unk_0x03B504CF259931BC(Global_2542145.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2542145.f_25[iVar14] == 3)
					{
						unk_0xE7DCB5B874BCD96E(Global_2542145.f_34[iVar16], Global_2542145.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2542145.f_25[iVar14] == 1)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_2542145.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2542145.f_25[iVar14] == 5)
					{
						unk_0x6C188BE134E074AA(&(Global_2542145.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2542145.f_25[iVar14] == 6)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_2542145.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2542145.f_25[iVar14] == 7)
					{
						unk_0x6C188BE134E074AA(&(Global_2542145.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2542145.f_25[iVar14] == 8)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_2542145.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x9040DFB09BE75706(fVar41, (fVar49 + 0.00277776f));
				unk_0x7C9C91AB74A0360F(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_90(Global_17233, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17236.f_7197)
				{
					iVar1 = Global_17236.f_7193;
					iVar2 = Global_17236.f_7194;
					iVar3 = Global_17236.f_7195;
					iVar4 = Global_17236.f_7196;
				}
				else
				{
					unk_0x7C9C91AB74A0360F(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xE7FFAE5EBF23D890("CommonMenu", "Gradient_Bgd", (Global_17233 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0xDB88A37483346780(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xDB88A37483346780(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false);
				func_86(fVar41);
				unk_0x25FBB336DF1804CB(&(Global_2542145.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2542145.f_61)
				{
					if (Global_2542145.f_25[iVar14] == 2)
					{
						unk_0x03B504CF259931BC(Global_2542145.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2542145.f_25[iVar14] == 3)
					{
						unk_0xE7DCB5B874BCD96E(Global_2542145.f_34[iVar16], Global_2542145.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2542145.f_25[iVar14] == 1)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_2542145.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2542145.f_25[iVar14] == 8)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_2542145.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2542145.f_25[iVar14] == 5)
					{
						unk_0x6C188BE134E074AA(&(Global_2542145.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2542145.f_25[iVar14] == 6)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_2542145.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2542145.f_25[iVar14] == 7)
					{
						unk_0x6C188BE134E074AA(&(Global_2542145.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xCD015E5BB0D96A57(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_2542145.f_67 != 0)
				{
					func_94(Global_2542145.f_67, 1, 1, &fVar35, &fVar36);
					func_85(Global_2542145.f_67, 1, &iVar46, &iVar47, &iVar48);
					unk_0xE7FFAE5EBF23D890(func_93(Global_2542145.f_67), func_91(Global_2542145.f_67, 1), ((Global_17233 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, false);
				}
				fVar49 = (fVar49 + (((unk_0xDB88A37483346780(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_2542145.f_65 > 0)
				{
					if ((unk_0x9CD27B0045628463() - Global_2542145.f_66) > Global_2542145.f_65)
					{
						StringCopy(&(Global_2542145.f_21), "", 16);
						Global_2542145.f_65 = -1;
					}
				}
			}
			func_80(iVar57, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			unk_0xB8A850F20A067EB6(76, 84);
			unk_0xF5A2C681787E579D(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17236.f_4986)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar60 = Global_17236.f_4492;
			if (Global_17236.f_4987)
			{
				iVar60 = (Global_17236.f_4990 - 1);
			}
			fVar61 = 0f;
			fVar62 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar60)
			{
				fVar54 = 0.034722f;
				if (Global_17236.f_5000[iVar6] != 0f)
				{
					fVar54 = Global_17236.f_5000[iVar6];
				}
				if (Global_17236.f_4987)
				{
					iVar6 = Global_17236.f_6833[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar32 = false;
				if (iVar6 >= Global_17236.f_4993 && iVar9 < Global_17236.f_4499)
				{
					bVar32 = true;
					if (Global_17236.f_4994 == iVar6)
					{
						fVar62 = fVar61;
					}
					if (Global_17236.f_4627[iVar6])
					{
						iVar12++;
					}
					fVar34 = (((fVar56 + fVar61) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_17236.f_5131[iVar6] = fVar34;
				fVar33 = (Global_17233 + 0.0046875f);
				bVar40 = false;
				bVar31 = Global_17236.f_4994 == iVar6;
				if ((bVar31 && iVar5 == 1) && bVar32)
				{
					iVar63 = 255;
					iVar64 = 255;
					iVar65 = 255;
					iVar66 = 255;
					if (Global_17236.f_7199)
					{
						unk_0x7C9C91AB74A0360F(Global_17236.f_7198, &iVar63, &iVar64, &iVar65, &iVar66);
					}
					else
					{
						unk_0x7C9C91AB74A0360F(1, &iVar63, &iVar64, &iVar65, &iVar66);
					}
					unk_0xE7FFAE5EBF23D890("CommonMenu", "Gradient_Nav", (Global_17233 + (fParam5 * 0.5f)), (((fVar56 + fVar62) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar63, iVar64, iVar65, iVar66, false);
					Global_17236.f_5129 = fVar34;
				}
				if (iVar52 && iVar7 == iVar60)
				{
					func_78(bVar31, 1, 0, 0, 0, 0);
					unk_0x25FBB336DF1804CB("DFLT_MNU_OPT");
					unk_0xCD015E5BB0D96A57(fVar33, fVar34, 0);
					bVar40 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_17236.f_4500)
					{
						if (unk_0xA921AA820C25702F(Global_17236.f_4366[iVar6], iVar8) || Global_17236.f_4333[iVar8] == 5)
						{
							if (Global_17236.f_4987)
							{
								iVar19 = Global_17236.f_6844[((iVar9 * Global_17236.f_4500) + iVar8)];
								iVar20 = Global_17236.f_6885[((iVar9 * Global_17236.f_4500) + iVar8)];
								iVar21 = Global_17236.f_6926[((iVar9 * Global_17236.f_4500) + iVar8)];
								iVar22 = Global_17236.f_6967[((iVar9 * Global_17236.f_4500) + iVar8)];
								iVar23 = Global_17236.f_7008[((iVar9 * Global_17236.f_4500) + iVar8)];
							}
							else
							{
								Global_17236.f_6844[((iVar9 * Global_17236.f_4500) + iVar8)] = iVar19;
								Global_17236.f_6885[((iVar9 * Global_17236.f_4500) + iVar8)] = iVar20;
								Global_17236.f_6926[((iVar9 * Global_17236.f_4500) + iVar8)] = iVar21;
								Global_17236.f_6967[((iVar9 * Global_17236.f_4500) + iVar8)] = iVar22;
								Global_17236.f_7008[((iVar9 * Global_17236.f_4500) + iVar8)] = iVar23;
							}
							iVar67 = 0;
							bVar53 = false;
							if (Global_17236.f_5260[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17236.f_5257[0])
								{
									bVar53 = true;
									iVar67 = 0;
								}
							}
							if (Global_17236.f_5260[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17236.f_5257[1])
								{
									bVar53 = true;
									iVar67 = 1;
								}
							}
							if (Global_17236.f_4339[iVar8] != -1f)
							{
								fVar33 = ((Global_17233 + 0.0046875f) + Global_17236.f_4339[iVar8]);
							}
							if ((iVar8 < 4 && Global_17236.f_4339[iVar8 + 1] != -1f) && fVar33 < Global_17236.f_4339[iVar8 + 1])
							{
								fVar45 = (Global_17236.f_4339[iVar8 + 1] - fVar33);
							}
							else
							{
								fVar45 = (((Global_17233 + Global_17235) - 0.0046875f) - fVar33);
							}
							if ((Global_17236.f_4352[iVar8] && Global_17236.f_5126) && bVar31)
							{
								bVar51 = true;
							}
							else
							{
								bVar51 = false;
							}
							switch (Global_17236.f_4333[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17236.f_4987)
										{
											fVar42 = 0f;
											fVar43 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (unk_0xD24D37CC275948CC(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
											{
												bVar50 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 5 || Global_17236.f_1576[iVar24 /*5*/][iVar14] == 8)
													{
														bVar50 = true;
													}
													iVar14++;
												}
												func_78(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, iVar67, bVar50);
												unk_0x54CE8AC98E120CAB(&(Global_17236.f_73[iVar24 /*4*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (unk_0xD24D37CC275948CC(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0xC63CD5D2920ACBE7(&(Global_17236.f_73[(iVar24 + iVar25) /*4*/]));
													}
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (unk_0xD24D37CC275948CC(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0xC63CD5D2920ACBE7(&(Global_17236.f_73[(iVar24 + iVar25) /*4*/]));
													}
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 5)
												{
													if (unk_0xD24D37CC275948CC(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0x6C188BE134E074AA(&(Global_2435075[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 6)
												{
													if (unk_0xD24D37CC275948CC(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0xC63CD5D2920ACBE7(&(Global_2435075[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 7)
												{
													if (unk_0xD24D37CC275948CC(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0x6C188BE134E074AA(&(Global_2435075[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 2)
												{
													if (unk_0xD24D37CC275948CC(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0x03B504CF259931BC(Global_17236.f_3340[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 3)
												{
													if (unk_0xD24D37CC275948CC(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0xE7DCB5B874BCD96E(Global_17236.f_3591[(iVar21 + iVar27)], Global_17236.f_3717[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (unk_0xD24D37CC275948CC(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
											{
												fVar42 = unk_0x85F061DA64ED2F67(true);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_94(Global_17236.f_3843[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36))
													{
														fVar43 = (fVar43 + fVar35);
														if (iVar14 > 0)
														{
															fVar43 = (fVar43 - (0.00078125f * 4f));
														}
														if (Global_17236.f_3843[(iVar22 + iVar14)] == 2)
														{
															fVar43 = (fVar43 - (0.00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar41 = 0f;
											if (Global_17236.f_4360[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - (fVar42 + fVar43)) + (0.00078125f * 1f)));
											}
											else if (Global_17236.f_4360[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - ((fVar42 + fVar43) * 0.5f)));
											}
											Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar41;
											Global_17236.f_7090[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar42;
											Global_17236.f_7131[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar43;
										}
										else
										{
											fVar41 = Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)];
											fVar42 = Global_17236.f_7090[((iVar9 * Global_17236.f_4500) + iVar8)];
											fVar43 = Global_17236.f_7131[((iVar9 * Global_17236.f_4500) + iVar8)];
										}
										if (bVar51)
										{
											if (func_94(26, 1, 0, &fVar35, &fVar36))
											{
												if (Global_17236.f_4360[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_94(26, 1, 1, &fVar35, &fVar36))
												{
													func_85(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xE7FFAE5EBF23D890(func_93(26), func_91(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, false);
												}
											}
											if (func_94(27, 1, 0, &fVar35, &fVar36))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_94(27, 1, 1, &fVar35, &fVar36))
												{
													func_85(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xE7FFAE5EBF23D890(func_93(27), func_91(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, false);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar30 = 0;
										if (unk_0xD24D37CC275948CC(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
										{
											bVar50 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 5 || Global_17236.f_1576[iVar24 /*5*/][iVar14] == 8)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											func_78(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, 0, bVar50);
											if (Global_17236.f_7203 && Global_17236.f_7204 == iVar6)
											{
												func_77(bVar31);
											}
											unk_0x25FBB336DF1804CB(&(Global_17236.f_73[iVar24 /*4*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0xD24D37CC275948CC(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0xC63CD5D2920ACBE7(&(Global_17236.f_73[(iVar24 + iVar25) /*4*/]));
												}
												iVar30 = 1;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0xD24D37CC275948CC(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0xC63CD5D2920ACBE7(&(Global_17236.f_73[(iVar24 + iVar25) /*4*/]));
												}
												iVar30 = 8;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0xD24D37CC275948CC(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0x6C188BE134E074AA(&(Global_2435075[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 5;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0xD24D37CC275948CC(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0xC63CD5D2920ACBE7(&(Global_2435075[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0xD24D37CC275948CC(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0x6C188BE134E074AA(&(Global_2435075[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0xD24D37CC275948CC(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0x03B504CF259931BC(Global_17236.f_3340[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar30 = 2;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0xD24D37CC275948CC(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0xE7DCB5B874BCD96E(Global_17236.f_3591[(iVar21 + iVar27)], Global_17236.f_3717[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar30 = 3;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_17236.f_3843[(iVar22 + iVar28)] == 2)
												{
													if (func_94(Global_17236.f_3843[(iVar22 + iVar28)], bVar31, 0, &fVar35, &fVar36))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_94(Global_17236.f_3843[(iVar22 + iVar28)], bVar31, 1, &fVar35, &fVar36))
														{
															func_85(Global_17236.f_3843[(iVar22 + iVar28)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17236.f_4360[iVar8] == 2)
															{
																unk_0xE7FFAE5EBF23D890(func_93(Global_17236.f_3843[(iVar22 + iVar28)]), func_91(Global_17236.f_3843[(iVar22 + iVar28)], bVar31), (((fVar33 + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, false);
															}
															else
															{
																unk_0xE7FFAE5EBF23D890(func_93(Global_17236.f_3843[(iVar22 + iVar28)]), func_91(Global_17236.f_3843[(iVar22 + iVar28)], bVar31), ((fVar33 + fVar41) - (0.00078125f * 8f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, false);
															}
															fVar41 = (fVar41 + (0.00078125f * 3f));
														}
													}
												}
												iVar28++;
												iVar30 = 4;
											}
											iVar14++;
										}
										if (unk_0xD24D37CC275948CC(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
										{
											if (iVar30 == 4 && Global_17236.f_4360[iVar8] == 2)
											{
												unk_0xCD015E5BB0D96A57(((fVar33 + fVar41) + (0.00078125f * 7f)), fVar34, 0);
											}
											else
											{
												unk_0xCD015E5BB0D96A57((fVar33 + fVar41), fVar34, 0);
											}
										}
										if (iVar28 > 0)
										{
											fVar41 = (fVar41 + (6f * 0.00078125f));
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_17236.f_3843[(iVar22 + iVar14)] != 2)
												{
													if (func_94(Global_17236.f_3843[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_94(Global_17236.f_3843[(iVar22 + iVar14)], bVar31, 1, &fVar35, &fVar36))
														{
															func_85(Global_17236.f_3843[(iVar22 + iVar14)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17236.f_3843[(iVar22 + iVar14)] == 30)
															{
																unk_0xE7FFAE5EBF23D890(func_93(Global_17236.f_3843[(iVar22 + iVar14)]), func_91(Global_17236.f_3843[(iVar22 + iVar14)], bVar31), (Global_17233 + (fVar35 * 0.5f)), (((fVar34 + 0.00277776f) + (fVar36 * 0.5f)) - (0.00078125f * 11f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, false);
															}
															else if (Global_17236.f_4360[iVar8] == 2)
															{
																unk_0xE7FFAE5EBF23D890(func_93(Global_17236.f_3843[(iVar22 + iVar14)]), func_91(Global_17236.f_3843[(iVar22 + iVar14)], bVar31), ((((fVar33 + fVar41) + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, false);
															}
															else
															{
																unk_0xE7FFAE5EBF23D890(func_93(Global_17236.f_3843[(iVar22 + iVar14)]), func_91(Global_17236.f_3843[(iVar22 + iVar14)], bVar31), (((fVar33 + fVar41) + fVar42) - (0.00078125f * 12f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, false);
															}
														}
														fVar41 = (fVar41 + (12f * 0.00078125f));
													}
												}
												iVar14++;
											}
										}
									}
									bVar40 = true;
									iVar19++;
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17236.f_4987)
										{
											func_78(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, 0, 0);
											if (Global_17236.f_7203 && Global_17236.f_7204 == iVar6)
											{
												func_77(bVar31);
											}
											unk_0x54CE8AC98E120CAB("NUMBER");
											unk_0x03B504CF259931BC(Global_17236.f_3340[iVar20]);
											fVar42 = unk_0x85F061DA64ED2F67(true);
											fVar41 = 0f;
											if (Global_17236.f_4360[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17236.f_4360[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar41;
											Global_17236.f_7090[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)];
											fVar42 = Global_17236.f_7090[((iVar9 * Global_17236.f_4500) + iVar8)];
										}
										if (bVar51)
										{
											if (func_94(26, 1, 0, &fVar35, &fVar36))
											{
												if (Global_17236.f_4360[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_94(26, 1, 1, &fVar35, &fVar36))
												{
													func_85(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xE7FFAE5EBF23D890(func_93(26), func_91(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, false);
												}
											}
											if (func_94(27, 1, 0, &fVar35, &fVar36))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_94(27, 1, 1, &fVar35, &fVar36))
												{
													func_85(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xE7FFAE5EBF23D890(func_93(27), func_91(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, false);
												}
											}
										}
										func_78(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, 0, 0);
										func_76((fVar33 + fVar41), fVar34, "NUMBER", Global_17236.f_3340[iVar20], 0);
									}
									bVar40 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17236.f_4987)
										{
											func_78(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, 0, 0);
											if (Global_17236.f_7203 && Global_17236.f_7204 == iVar6)
											{
												func_77(bVar31);
											}
											unk_0x54CE8AC98E120CAB("NUMBER");
											unk_0xE7DCB5B874BCD96E(Global_17236.f_3591[iVar21], Global_17236.f_3717[iVar21]);
											fVar42 = unk_0x85F061DA64ED2F67(true);
											fVar41 = 0f;
											if (Global_17236.f_4360[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17236.f_4360[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar41;
											Global_17236.f_7090[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)];
											fVar42 = Global_17236.f_7090[((iVar9 * Global_17236.f_4500) + iVar8)];
										}
										if (bVar51)
										{
											if (func_94(26, 1, 0, &fVar35, &fVar36))
											{
												if (Global_17236.f_4360[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_94(26, 1, 1, &fVar35, &fVar36))
												{
													func_85(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xE7FFAE5EBF23D890(func_93(26), func_91(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, false);
												}
											}
											if (func_94(27, 1, 0, &fVar35, &fVar36))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_94(27, 1, 1, &fVar35, &fVar36))
												{
													func_85(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xE7FFAE5EBF23D890(func_93(27), func_91(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, false);
												}
											}
										}
										func_78(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, 0, 0);
										func_75((fVar33 + fVar41), fVar34, "NUMBER", Global_17236.f_3591[iVar21], Global_17236.f_3717[iVar21]);
									}
									bVar40 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar32)
									{
										if (func_94(Global_17236.f_3843[iVar22], bVar31, 0, &fVar35, &fVar36))
										{
											if (!Global_17236.f_4987)
											{
												fVar43 = fVar35;
												fVar41 = 0f;
												if (Global_17236.f_4360[iVar8] == 2)
												{
													fVar41 = (fVar41 + ((fVar45 - fVar43) + (0.00078125f * 1f)));
												}
												else if (Global_17236.f_4360[iVar8] == 0)
												{
													fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar43 * 0.5f)));
												}
												Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar41;
												Global_17236.f_7131[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar43;
											}
											else
											{
												fVar41 = Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)];
												fVar43 = Global_17236.f_7131[((iVar9 * Global_17236.f_4500) + iVar8)];
											}
											if (bVar51)
											{
												if (func_94(26, 1, 0, &fVar35, &fVar36))
												{
													if (Global_17236.f_4360[iVar8] == 2)
													{
														fVar41 = (fVar41 - (fVar35 * 2f));
													}
													fVar44 = (fVar35 * 0.5f);
													if (func_94(26, 1, 1, &fVar35, &fVar36))
													{
														func_85(26, 1, &iVar46, &iVar47, &iVar48);
														unk_0xE7FFAE5EBF23D890(func_93(26), func_91(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, false);
													}
												}
												if (func_94(27, 1, 0, &fVar35, &fVar36))
												{
													fVar41 = (fVar41 + fVar35);
													fVar44 = (fVar35 * 0.5f);
													if (func_94(27, 1, 1, &fVar35, &fVar36))
													{
														func_85(27, 1, &iVar46, &iVar47, &iVar48);
														unk_0xE7FFAE5EBF23D890(func_93(27), func_91(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, false);
													}
												}
											}
											if (func_94(Global_17236.f_3843[iVar22], bVar31, 1, &fVar35, &fVar36))
											{
												func_85(Global_17236.f_3843[iVar22], bVar31, &iVar46, &iVar47, &iVar48);
												unk_0xE7FFAE5EBF23D890(func_93(Global_17236.f_3843[iVar22]), func_91(Global_17236.f_3843[iVar22], bVar31), ((fVar33 + fVar41) + (fVar35 * 0.5f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), (fVar35 * func_74(Global_17236.f_3843[iVar22])), (fVar36 * func_74(Global_17236.f_3843[iVar22])), 0f, iVar46, iVar47, iVar48, 255, false);
											}
										}
									}
									bVar40 = true;
									iVar22++;
									break;
								
								case 5:
									bVar40 = true;
									break;
							}
							if (Global_17236.f_4333[iVar8] == 5)
							{
								if (Global_17236.f_4345[iVar8] > 0.05f)
								{
									fVar33 = (fVar33 + Global_17236.f_4345[iVar8]);
								}
								else
								{
									fVar33 = (fVar33 + 0.05f);
								}
							}
							else
							{
								fVar33 = (fVar33 + Global_17236.f_4345[iVar8]);
								if (Global_17236.f_4352[iVar8])
								{
									if (func_94(26, 1, 1, &fVar35, &fVar36))
									{
										fVar33 = (fVar33 - fVar35);
									}
								}
							}
						}
						else
						{
							fVar33 = (fVar33 + Global_17236.f_4345[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar40)
				{
					if (bVar32)
					{
						Global_17236.f_6833[iVar9] = iVar6;
						Global_17236.f_4995 = iVar6;
						iVar9++;
						if (Global_17236.f_4627[iVar6])
						{
							iVar13++;
						}
						if (Global_17236.f_5000[iVar6] != 0f)
						{
							fVar61 = (fVar61 + Global_17236.f_5000[iVar6]);
						}
						else
						{
							fVar61 = (fVar61 + 0.034722f);
						}
					}
					if (!Global_17236.f_4986)
					{
						Global_17236.f_4753[iVar6] = 1;
						if (Global_17236.f_4501[iVar6])
						{
							if (bVar31)
							{
								Global_17236.f_4992 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar31)
							{
								Global_17236.f_4992 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17236.f_4986)
			{
				Global_17236.f_4988 = ((fVar56 + fVar61) + (0.00277776f * IntToFloat(iVar12)));
				Global_17236.f_4991 = iVar11;
				Global_17236.f_4989 = iVar10;
				Global_17236.f_4986 = 1;
			}
		}
		iVar5++;
	}
	if (!Global_17236.f_4987)
	{
		Global_17236.f_4990 = iVar9;
		Global_17236.f_4987 = 1;
	}
	Global_17236.f_5128 = fVar49;
	Global_17236.f_5130 = unk_0x9CD27B0045628463();
	unk_0x55598D21339CB998(Global_17236.f_5128);
	if (!Global_17236.f_7172)
	{
		func_70();
	}
	Global_17236.f_7172 = 0;
	if (bParam2)
	{
		unk_0x6806C51AD12B83B8(10);
	}
	unk_0x6806C51AD12B83B8(6);
	unk_0x6806C51AD12B83B8(7);
	unk_0x6806C51AD12B83B8(9);
	unk_0x6806C51AD12B83B8(8);
	if (bParam0)
	{
		func_69(1);
	}
	unk_0xE3A3DB414A373DAB();
}

void func_69(int iParam0)
{
	Global_1328798.f_404 = iParam0;
}

void func_70()
{
	if (!Global_14393.f_1 == 1)
	{
		if (func_73(0))
		{
			func_71(0);
		}
		unk_0x933D6A9EEC1BACD0(&Global_2264, 2);
	}
}

void func_71(int iParam0)
{
	if (Global_14551)
	{
		func_72(0, 0);
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
	if (!func_65())
	{
		Global_14393.f_1 = 3;
	}
}

void func_72(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_73(0))
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

int func_73(int iParam0)
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

float func_74(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_75(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	unk_0x25FBB336DF1804CB(sParam2);
	unk_0xE7DCB5B874BCD96E(fParam3, iParam4);
	unk_0xCD015E5BB0D96A57(fParam0, fParam1, 0);
}

void func_76(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x25FBB336DF1804CB(sParam2);
	unk_0x03B504CF259931BC(iParam3);
	unk_0xCD015E5BB0D96A57(fParam0, fParam1, iParam4);
}

void func_77(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0x7C9C91AB74A0360F(Global_17236.f_7200[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0x7C9C91AB74A0360F(Global_17236.f_7200[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0xBE6B23FFA53FB442(iVar0, iVar1, iVar2, 255);
}

void func_78(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_79(Global_17236.f_5260[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0x7C9C91AB74A0360F(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			unk_0xBE6B23FFA53FB442(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0x7C9C91AB74A0360F(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xBE6B23FFA53FB442(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0x7C9C91AB74A0360F(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xBE6B23FFA53FB442(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0xBE6B23FFA53FB442(155, 155, 155, 255);
		}
		else
		{
			unk_0xBE6B23FFA53FB442(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0xBE6B23FFA53FB442(0, 0, 0, unk_0xF34EE736CF047844((255f * 0.8f)));
		}
		else
		{
			unk_0x7C9C91AB74A0360F(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0xBE6B23FFA53FB442(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0xBE6B23FFA53FB442(155, 155, 155, 255);
	}
	else
	{
		unk_0xBE6B23FFA53FB442(155, 155, 155, 255);
	}
	unk_0x07C837F9A01C34C9(0f, 0.35f);
	unk_0x4E096588B13FFECA(1);
	if (bParam5)
	{
		unk_0x07C837F9A01C34C9(0f, 0.425f);
		unk_0x66E0276CC5F6B9DA(4);
	}
	else
	{
		unk_0x66E0276CC5F6B9DA(0);
	}
	unk_0x63145D9C883A1A70(0f, 1f);
	unk_0xC02F4DBFB51D988B(false);
	unk_0x465C84BC39F1C351(0, 0, 0, 0, 0);
	unk_0x441603240D202FA6(0, 0, 0, 0, 0);
}

void func_79(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_80(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_57(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_96(bParam4, bParam8))
	{
		return;
	}
	if (func_83())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_61(unk_0x4F8644AF03D0E0D6(), 0))
		{
			return;
		}
	}
	if (unk_0x48AF36444B965238())
	{
		if (unk_0x0CF2B696BBF945AE() == 0)
		{
			return;
		}
	}
	if (Global_17236.f_4046 != 0)
	{
		if (unk_0x6CD79468A1E595C6(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17236.f_4046)
			{
				if (Global_17236.f_4303[iVar1] != 332)
				{
					StringCopy(&(Global_17236.f_4048[iVar1 /*16*/]), unk_0x0499D7B09FC9B407(2, Global_17236.f_4303[iVar1], true), 64);
				}
				else if (Global_17236.f_4316[iVar1] != 31)
				{
					StringCopy(&(Global_17236.f_4048[iVar1 /*16*/]), unk_0x80C2FD58D720C801(2, Global_17236.f_4316[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_17236.f_4047 = 0;
		}
		if (!Global_17236.f_4047)
		{
			unk_0xF6E48914C7A8694E(Global_17236.f_4918[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xC6796A8FFA375E53();
			unk_0xF6E48914C7A8694E(Global_17236.f_4918[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0xD69736AAE04DB51A((1f - (Global_17236.f_4358 / 100f)));
			unk_0xC6796A8FFA375E53();
			if (unk_0x48AF36444B965238())
			{
				unk_0xF6E48914C7A8694E(Global_17236.f_4918[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0xC58424BA936EB458(true);
				unk_0xC6796A8FFA375E53();
			}
			iVar1 = 0;
			while (iVar1 < Global_17236.f_4046)
			{
				if (unk_0xD24D37CC275948CC(&(Global_17236.f_4241[iVar1 /*4*/])) != unk_0xD24D37CC275948CC("PREV"))
				{
					unk_0xF6E48914C7A8694E(Global_17236.f_4918[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0xC3D0841A0CC546A6(iVar1);
					func_82(&(Global_17236.f_4048[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0xD24D37CC275948CC(&(Global_17236.f_4241[iVar2 /*4*/])) == unk_0xD24D37CC275948CC("PREV"))
					{
						func_82(&(Global_17236.f_4048[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17236.f_4290[iVar1] == -1)
					{
						func_81(&(Global_17236.f_4241[iVar1 /*4*/]));
					}
					else
					{
						unk_0x80338406F3475E55(&(Global_17236.f_4241[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x1115F16B8AB9E8BF(iParam2, 70);
						}
						else
						{
							unk_0x03B504CF259931BC(iParam2);
						}
						unk_0x362E2D3FE93A9959();
					}
					if (unk_0x48AF36444B965238())
					{
						if (Global_17236.f_4303[iVar1] != 332 && unk_0xA921AA820C25702F(Global_17236.f_4329, iVar1))
						{
							unk_0xC58424BA936EB458(true);
							unk_0xC3D0841A0CC546A6(Global_17236.f_4303[iVar1]);
						}
						else
						{
							unk_0xC58424BA936EB458(false);
							unk_0xC3D0841A0CC546A6(332);
						}
					}
					unk_0xC6796A8FFA375E53();
				}
				iVar1++;
			}
			if (unk_0xD24D37CC275948CC(&(Global_2542145.f_16)) != unk_0xD24D37CC275948CC(""))
			{
				unk_0xF6E48914C7A8694E(Global_17236.f_4918[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0xC3D0841A0CC546A6(Global_17236.f_4046);
				func_82(&Global_2542145);
				if (Global_2542145.f_20 == -1)
				{
					func_81(&(Global_2542145.f_16));
				}
				else
				{
					unk_0x80338406F3475E55(&(Global_2542145.f_16));
					if (bParam5)
					{
						unk_0x1115F16B8AB9E8BF(iParam2, 70);
					}
					else
					{
						unk_0x03B504CF259931BC(iParam2);
					}
					unk_0x362E2D3FE93A9959();
				}
				unk_0xC6796A8FFA375E53();
			}
			unk_0xF6E48914C7A8694E(Global_17236.f_4918[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0xC3D0841A0CC546A6(0);
			unk_0xC3D0841A0CC546A6(0);
			unk_0xC3D0841A0CC546A6(0);
			unk_0xC3D0841A0CC546A6(80);
			unk_0xC6796A8FFA375E53();
			unk_0xF6E48914C7A8694E(Global_17236.f_4918[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17236.f_4359)
			{
				unk_0xC3D0841A0CC546A6(1);
			}
			else
			{
				unk_0xC3D0841A0CC546A6(0);
			}
			unk_0xC6796A8FFA375E53();
			Global_17236.f_4047 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17236.f_4046)
		{
			if (Global_17236.f_4290[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0xF6E48914C7A8694E(Global_17236.f_4918[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0xC3D0841A0CC546A6(iVar1);
					unk_0x80338406F3475E55(&(Global_17236.f_4241[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x1115F16B8AB9E8BF(iParam2, 70);
					}
					else
					{
						unk_0x03B504CF259931BC(iParam2);
					}
					unk_0x362E2D3FE93A9959();
					unk_0xC6796A8FFA375E53();
				}
			}
			iVar1++;
		}
		if (Global_2542145.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0xF6E48914C7A8694E(Global_17236.f_4918[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0xC3D0841A0CC546A6(iVar1);
				unk_0x80338406F3475E55(&(Global_2542145.f_16));
				if (bParam5)
				{
					unk_0x1115F16B8AB9E8BF(iParam2, 70);
				}
				else
				{
					unk_0x03B504CF259931BC(iParam2);
				}
				unk_0x362E2D3FE93A9959();
				unk_0xC6796A8FFA375E53();
			}
		}
		unk_0xB8A850F20A067EB6(76, 66);
		unk_0xF5A2C681787E579D(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17236.f_7207)
			{
				unk_0xAABB1F56E2A17CED(15, 0f, -0.0375f);
				Global_17236.f_7207 = 1;
			}
		}
		else if (Global_17236.f_7207)
		{
			unk_0x450930E616475D0D(15);
			Global_17236.f_7207 = 0;
		}
		unk_0xE3A3DB414A373DAB();
		if (Global_17236.f_4332)
		{
			unk_0xB8A850F20A067EB6(82, 66);
			unk_0xF5A2C681787E579D(0f, 0f, 0f, 0f);
			unk_0x54972ADAF0294A93(Global_17236.f_4918[iVar0 /*10*/], Global_17236.f_4330, Global_17236.f_4331, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0xE3A3DB414A373DAB();
		}
		else
		{
			unk_0x0DF606929C105BE1(Global_17236.f_4918[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_81(char* sParam0)
{
	unk_0x80338406F3475E55(sParam0);
	unk_0x362E2D3FE93A9959();
}

void func_82(char* sParam0)
{
	unk_0xE83A3E3557A56640(sParam0);
}

int func_83()
{
	struct<3> Var0;
	
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	if (func_84())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0x584FDFDA48805B86(&Var0);
		if (Global_14338 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
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

int func_84()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_85(int iParam0, bool bParam1, int* iParam2, int* iParam3, int* iParam4)
{
	var uVar0;
	
	unk_0x7C9C91AB74A0360F(1, iParam2, iParam3, iParam4, &uVar0);
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
	}
}

void func_86(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x7C9C91AB74A0360F(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x66E0276CC5F6B9DA(0);
	unk_0x07C837F9A01C34C9(0f, 0.35f);
	unk_0xA50ABC31E3CDFAFF(2);
	unk_0xBE6B23FFA53FB442(iVar0, iVar1, iVar2, iVar3);
	unk_0x63145D9C883A1A70(fParam0, ((Global_17233 + Global_17235) - 0.0046875f));
	unk_0xC02F4DBFB51D988B(false);
	unk_0x465C84BC39F1C351(0, 0, 0, 0, 0);
	unk_0x441603240D202FA6(0, 0, 0, 0, 0);
}

void func_87(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x25FBB336DF1804CB(sParam2);
	unk_0x03B504CF259931BC(iParam3);
	unk_0x03B504CF259931BC(iParam4);
	unk_0xCD015E5BB0D96A57(fParam0, fParam1, 0);
}

float func_88(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0xF22B6C47C6EAB066(sParam0))
	{
		if (unk_0xD24D37CC275948CC(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_89();
	unk_0x54CE8AC98E120CAB(sParam0);
	unk_0x03B504CF259931BC(iParam1);
	unk_0x03B504CF259931BC(iParam2);
	return unk_0x85F061DA64ED2F67(true);
}

void func_89()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x7C9C91AB74A0360F(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17236.f_7182)
	{
		iVar0 = Global_17236.f_7178;
		iVar1 = Global_17236.f_7179;
		iVar2 = Global_17236.f_7180;
		iVar3 = Global_17236.f_7181;
	}
	unk_0x66E0276CC5F6B9DA(0);
	unk_0x07C837F9A01C34C9(0f, 0.35f);
	unk_0xBE6B23FFA53FB442(iVar0, iVar1, iVar2, iVar3);
	unk_0x63145D9C883A1A70((Global_17233 + 0.0046875f), ((Global_17233 + Global_17235) - 0.0046875f));
	unk_0xC02F4DBFB51D988B(false);
	unk_0x465C84BC39F1C351(0, 0, 0, 0, 0);
	unk_0x441603240D202FA6(0, 0, 0, 0, 0);
}

void func_90(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0x3A618A217E5154F0((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, false);
}

var func_91(int iParam0, bool bParam1)
{
	char* sVar0[2];
	
	if (!unk_0xCA042B6957743895(&(Global_17236.f_6048[iParam0 /*16*/])))
	{
		return func_92(&(Global_17236.f_6048[iParam0 /*16*/]));
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 48:
			sVar0[0] = "Shop_Discount_Icon";
			sVar0[1] = "Shop_Discount_Icon";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_92(var uParam0)
{
	return uParam0;
}

char* func_93(int iParam0)
{
	if (!unk_0xCA042B6957743895(&(Global_17236.f_5263[iParam0 /*16*/])))
	{
		return func_92(&(Global_17236.f_5263[iParam0 /*16*/]));
	}
	return "CommonMenu";
}

int func_94(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4)
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	
	sVar0 = func_93(iParam0);
	sVar1 = func_91(iParam0, bParam1);
	if (unk_0xD24D37CC275948CC(sVar1) != 0)
	{
		unk_0x888D57E407E63624(&iVar2, &iVar3);
		Var4 = { unk_0x35736EE65BD00C11(sVar0, sVar1) };
		Var4.f_0 = (Var4.f_0 * func_95(iParam0));
		Var4.f_1 = (Var4.f_1 * func_95(iParam0));
		if (!bParam2)
		{
			Var4.f_0 = (Var4.f_0 - 2f);
			Var4.f_1 = (Var4.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var4.f_0 = 288f;
			Var4.f_1 = 106f;
		}
		*fParam3 = ((Var4.f_0 / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((Var4.f_1 / IntToFloat(iVar3)) / (Var4.f_0 / IntToFloat(iVar2))) * *fParam3);
		if (!unk_0x30CF4BDA4FCB1905() && iParam0 != 30)
		{
			*fParam3 = (*fParam3 * 1.33f);
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17235)
			{
				*fParam4 = (*fParam4 * (Global_17235 / *fParam3));
				*fParam3 = Global_17235;
			}
		}
		return 1;
	}
	return 0;
}

float func_95(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
			return 0.5f;
			break;
	}
	return 1f;
}

int func_96(bool bParam0, bool bParam1)
{
	if (Global_2421967.f_1309.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x5A859503B0C08678() || (func_98(8, -1) && func_97() != 65)) || (unk_0x272ACD84970869C5() != 0 && !bParam1)) || (unk_0xD9D2CFFF49FAB35F() && !bParam0)) || unk_0x2EAC52B4019E2782()) || Global_68327) || Global_17236.f_7206) || unk_0xE18B138FABC53103()) || Global_89836.f_1318)
	{
		return 0;
	}
	return 1;
}

int func_97()
{
	return Global_1315830;
}

bool func_98(int iParam0, int iParam1)
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

void func_99(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_17236.f_4994 = iParam0;
	Global_17236.f_5126 = iParam2;
	if (Global_17236.f_4994 < Global_17236.f_4993)
	{
		Global_17236.f_4993 = Global_17236.f_4994;
	}
	else if ((Global_17236.f_4987 && Global_17236.f_4994 > Global_17236.f_4995) || (!Global_17236.f_4987 && Global_17236.f_4994 >= (Global_17236.f_4993 + Global_17236.f_4499)))
	{
		iVar0 = Global_17236.f_4993;
		while (iVar0 <= Global_17236.f_4994)
		{
			if (iVar0 >= 0 && iVar0 < 124)
			{
				if (Global_17236.f_4366[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17236.f_4499 && Global_17236.f_4993 < 125)
		{
			Global_17236.f_4993++;
			iVar1 = 0;
			iVar0 = Global_17236.f_4993;
			while (iVar0 <= Global_17236.f_4994)
			{
				if (iVar0 >= 0 && iVar0 < 124)
				{
					if (Global_17236.f_4366[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17236.f_4986 = 0;
	Global_17236.f_4987 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_17236.f_3969), "", 16);
		StringCopy(&(Global_2542145.f_21), "", 16);
	}
}

void func_100(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0xEC3C9B8D5327B563(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0xEC3C9B8D5327B563(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0xEC3C9B8D5327B563(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0xEC3C9B8D5327B563(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x11E65974A982637C(2, 218) * 127f));
			*uParam1 = unk_0xF34EE736CF047844((unk_0x11E65974A982637C(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x11E65974A982637C(2, 220) * 127f));
			*uParam3 = unk_0xF34EE736CF047844((unk_0x11E65974A982637C(2, 221) * 127f));
		}
	}
}

void func_101()
{
	func_111();
	func_110(1, 0, 0, 0, 0);
	func_109(1, 1, 1, 1, 1);
	if (Local_81.f_1 == 3)
	{
		func_108("SEA_MENU");
	}
	else
	{
		func_108("STREET_MENU");
	}
	func_105(0, "RACES_OPT_SP", 0, 1, 0, 0);
	func_105(1, "RACES_OPT_MP", 0, 1, 0, 0);
	func_104(201, "ITEM_SELECT", -1);
	func_104(202, "ITEM_EXIT", -1);
	func_103(11, "ITEM_SCROLL", -1);
	func_102(0);
	func_99(0, 1, 1);
	iLocal_95 = 0;
}

void func_102(int iParam0)
{
	Global_17236.f_4993 = iParam0;
}

void func_103(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0x80C2FD58D720C801(2, iParam0, true);
	if (Global_17236.f_4046 >= 12)
	{
		StringCopy(&Global_2542145, sVar0, 64);
		StringCopy(&(Global_2542145.f_16), sParam1, 16);
		Global_2542145.f_20 = iParam2;
		return;
		return;
	}
	unk_0xE80492A9AC099A93(&(Global_17236.f_4329), Global_17236.f_4046);
	StringCopy(&(Global_17236.f_4048[Global_17236.f_4046 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17236.f_4241[Global_17236.f_4046 /*4*/]), sParam1, 16);
	Global_17236.f_4290[Global_17236.f_4046] = iParam2;
	Global_17236.f_4303[Global_17236.f_4046] = 332;
	Global_17236.f_4316[Global_17236.f_4046] = iParam0;
	Global_17236.f_4046++;
}

void func_104(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0x0499D7B09FC9B407(2, iParam0, true);
	if (Global_17236.f_4046 >= 12)
	{
		StringCopy(&Global_2542145, sVar0, 64);
		StringCopy(&(Global_2542145.f_16), sParam1, 16);
		Global_2542145.f_20 = iParam2;
		return;
		return;
	}
	unk_0xE80492A9AC099A93(&(Global_17236.f_4329), Global_17236.f_4046);
	StringCopy(&(Global_17236.f_4048[Global_17236.f_4046 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17236.f_4241[Global_17236.f_4046 /*4*/]), sParam1, 16);
	Global_17236.f_4290[Global_17236.f_4046] = iParam2;
	Global_17236.f_4303[Global_17236.f_4046] = iParam0;
	Global_17236.f_4316[Global_17236.f_4046] = 31;
	Global_17236.f_4046++;
}

void func_105(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17236.f_4492 > iParam0)
	{
		return;
	}
	if (Global_17236.f_4492 >= 125)
	{
		return;
	}
	if (Global_17236.f_4494 >= 250)
	{
		return;
	}
	if (Global_17236.f_4998 < Global_17236.f_4996)
	{
		return;
	}
	if (Global_17236.f_4492 != iParam0)
	{
		Global_17236.f_4492 = iParam0;
		Global_17236.f_4493 = 0;
	}
	iVar0 = Global_17236.f_4333[Global_17236.f_4493];
	if (iVar0 != 1)
	{
		while (Global_17236.f_4493 < 4 && iVar0 != 1)
		{
			Global_17236.f_4493++;
			iVar0 = Global_17236.f_4333[Global_17236.f_4493];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_17236.f_73[Global_17236.f_4494 /*4*/]), sParam1, 16);
	Global_17236.f_1074[Global_17236.f_4494] = iParam3;
	Global_17236.f_1325[Global_17236.f_4494] = iParam4;
	Global_17236.f_4494++;
	if (iParam2 == 0)
	{
		fVar1 = func_107(sParam1);
		if (Global_17236.f_4352[Global_17236.f_4493])
		{
			func_94(26, 1, 0, &fVar2, &uVar3);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_17236.f_4345[Global_17236.f_4493])
		{
			Global_17236.f_4345[Global_17236.f_4493] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_106(sParam1);
			if (fVar4 > Global_17236.f_5000[iParam0])
			{
				Global_17236.f_5000[iParam0] = fVar4;
			}
		}
	}
	unk_0x933D6A9EEC1BACD0(&(Global_17236.f_4366[iParam0]), Global_17236.f_4493);
	Global_17236.f_4493++;
	Global_17236.f_4999 = 1;
	Global_17236.f_4997 = (Global_17236.f_4494 - 1);
	Global_17236.f_4998 = 0;
	Global_17236.f_4996 = iParam2;
}

float func_106(char* sParam0)
{
	if (!unk_0xAC09CA973C564252(sParam0))
	{
	}
	return unk_0xDB88A37483346780(0.35f, 0);
}

float func_107(char* sParam0)
{
	if (!unk_0xF22B6C47C6EAB066(sParam0))
	{
		if (unk_0xD24D37CC275948CC(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_78(0, 1, 0, 0, 0, 0);
	unk_0x54CE8AC98E120CAB(sParam0);
	return unk_0x85F061DA64ED2F67(true);
}

void func_108(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_17236.f_1), sParam0, 16);
	Global_17236.f_68 = 0;
	Global_17236.f_69 = 0;
	Global_17236.f_70 = 0;
	Global_17236.f_71 = 0;
	Global_17236.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17236.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_109(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17236.f_4360[0] = iParam0;
	Global_17236.f_4360[1] = iParam1;
	Global_17236.f_4360[2] = iParam2;
	Global_17236.f_4360[3] = iParam3;
	Global_17236.f_4360[4] = iParam4;
}

void func_110(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17236.f_4333[0] = iParam0;
	Global_17236.f_4333[1] = iParam1;
	Global_17236.f_4333[2] = iParam2;
	Global_17236.f_4333[3] = iParam3;
	Global_17236.f_4333[4] = iParam4;
	Global_17236.f_4500 = 0;
	if (iParam0 != 0)
	{
		Global_17236.f_4500++;
	}
	if (iParam1 != 0)
	{
		Global_17236.f_4500++;
	}
	if (iParam2 != 0)
	{
		Global_17236.f_4500++;
	}
	if (iParam3 != 0)
	{
		Global_17236.f_4500++;
	}
	if (iParam4 != 0)
	{
		Global_17236.f_4500++;
	}
}

void func_111()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 250)
	{
		StringCopy(&(Global_17236.f_73[iVar0 /*4*/]), "", 16);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_17236.f_1576[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2435075[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 250)
	{
		Global_17236.f_3340[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 125)
	{
		Global_17236.f_3591[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 125)
	{
		Global_17236.f_3843[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 125)
	{
		Global_17236.f_4366[iVar0] = 0;
		Global_17236.f_4501[iVar0] = 0;
		Global_17236.f_4627[iVar0] = 0;
		Global_17236.f_5131[iVar0] = 0f;
		Global_17236.f_4753[iVar0] = 0;
		Global_17236.f_5000[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17236.f_4333[iVar0] = 0;
		Global_17236.f_4345[iVar0] = 0f;
		Global_17236.f_4339[iVar0] = -1f;
		Global_17236.f_4352[iVar0] = 0;
		Global_17236.f_4360[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17236.f_4241[iVar0 /*4*/]), "", 16);
		Global_17236.f_4290[iVar0] = -1;
		Global_17236.f_4303[iVar0] = 332;
		Global_17236.f_4316[iVar0] = 31;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 49)
	{
		StringCopy(&(Global_17236.f_5263[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17236.f_6048[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	StringCopy(&(Global_2542145.f_16), "", 16);
	Global_2542145.f_20 = -1;
	Global_17236 = 0;
	Global_17236.f_4492 = 0;
	Global_17236.f_4493 = 0;
	Global_17236.f_4494 = 0;
	Global_17236.f_4496 = 0;
	Global_17236.f_4497 = 0;
	Global_17236.f_4498 = 0;
	Global_17236.f_4495 = 0;
	Global_17236.f_5126 = 0;
	Global_17236.f_4994 = 0;
	Global_17236.f_4993 = 0;
	Global_17236.f_4995 = 0;
	StringCopy(&(Global_17236.f_3969), "", 16);
	Global_17236.f_4039 = 0;
	Global_17236.f_4040 = 0;
	Global_17236.f_4041 = 0;
	Global_17236.f_4042 = 0;
	Global_17236.f_4043 = 0;
	Global_17236.f_4044 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17236.f_3973[iVar0] = 0;
		iVar0++;
	}
	Global_17236.f_4045 = 0;
	StringCopy(&(Global_2542145.f_21), "", 16);
	Global_2542145.f_61 = 0;
	Global_2542145.f_62 = 0;
	Global_2542145.f_63 = 0;
	Global_2542145.f_64 = 0;
	Global_2542145.f_65 = 0;
	Global_2542145.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_2542145.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_2542145.f_67 = 0;
	StringCopy(&(Global_17236.f_1), "", 16);
	Global_17236.f_4351 = 0f;
	Global_17236.f_68 = 0;
	Global_17236.f_69 = 0;
	Global_17236.f_70 = 0;
	Global_17236.f_71 = 0;
	Global_17236.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17236.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_17236.f_4999 = 0;
	Global_17236.f_4998 = 0;
	Global_17236.f_4996 = 0;
	Global_17236.f_4997 = 0;
	Global_17236.f_4046 = 0;
	Global_17236.f_4047 = 0;
	Global_17236.f_4499 = 10;
	Global_17236.f_4500 = 0;
	Global_17236.f_5128 = 0f;
	Global_17236.f_5129 = 0f;
	Global_17236.f_4986 = 0;
	Global_17236.f_4987 = 0;
	Global_17236.f_4988 = 0f;
	Global_17236.f_4989 = 0;
	Global_17236.f_4991 = 0;
	Global_17236.f_4990 = 0;
	Global_17236.f_4992 = 0;
	Global_17236.f_7203 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_17236.f_5257[iVar0] = -1;
		Global_17236.f_5260[iVar0] = -1;
		iVar0++;
	}
	Global_17236.f_4358 = 0f;
	Global_17236.f_4329 = 0;
	Global_17236.f_4359 = 0;
	Global_17236.f_7182 = 0;
	Global_17236.f_7177 = 0;
	Global_17236.f_7187 = 0;
	Global_17236.f_7192 = 0;
	Global_17236.f_7197 = 0;
	Global_17236.f_7199 = 0;
	Global_17236.f_7205 = 0;
	Global_17233 = 0.05f;
	Global_17234 = 0.05f;
	Global_17235 = 0.225f;
	fVar2 = unk_0xF1307EF624A80D87(false);
	if (fVar2 < 1.77777f)
	{
		Global_17235 = (0.225f * (1.777778f / fVar2));
	}
	else
	{
		Global_17235 = 0.225f;
	}
}

bool func_112(char* sParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_57(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17236.f_4893[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xCA042B6957743895(&(Global_17236.f_4893[iVar0 /*4*/])))
	{
		unk_0x71A78003C8E71424(&(Global_17236.f_4893[iVar0 /*4*/]), 9);
		Global_17236.f_4886[iVar0] = 1;
		if (!unk_0xADBF060E2B30C5BC(&(Global_17236.f_4893[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0xDFA2EF8E04127DD5("CommonMenu", false);
	Global_17236.f_4879[iVar0] = 1;
	if (!unk_0x0145F696AAAAD2E4("CommonMenu"))
	{
		bVar1 = false;
	}
	bVar2 = false;
	StringCopy(&(Global_17236.f_4918[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_113(&(Global_17236.f_4918[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_113(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x85F01B8D5B90570E(*uParam0))
			{
				*uParam0 = unk_0x11FE353CF9733E6F(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x85F01B8D5B90570E(*uParam0))
					{
						uParam0->f_8 = unk_0x9CD27B0045628463();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x9CD27B0045628463();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x85F01B8D5B90570E(*uParam0))
			{
				uParam0->f_8 = unk_0x9CD27B0045628463();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x85F01B8D5B90570E(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_114()
{
	int iVar0;
	
	if (func_142())
	{
		if (func_125())
		{
			iVar0 = 6;
			if (Local_81.f_1 == 1)
			{
				iVar0 = 4;
			}
			func_123(iVar0);
			if (func_53(iLocal_101[iVar0]))
			{
				if (bLocal_100)
				{
					if (unk_0x1F0B79228E461EC9(iLocal_101[iVar0], cLocal_182, sLocal_183[iVar0], 3))
					{
						unk_0x97FF36A1D40EA00A(iLocal_101[iVar0], cLocal_182, sLocal_183[iVar0], -8f);
					}
					func_116(iVar0);
				}
			}
			unk_0xEDE476E5EE29EDB1(0, 51);
			if (unk_0x50F940259D3841E6(0, 51))
			{
				iLocal_192 = 1;
				unk_0x8DFCED7A656F8802(true);
				iLocal_80 = 3;
			}
		}
		else if (!iLocal_91)
		{
			unk_0xF46C581C61718916(false);
			iLocal_91 = 1;
		}
	}
	else
	{
		func_115();
		if (!iLocal_91)
		{
			unk_0xF46C581C61718916(false);
			iLocal_91 = 1;
		}
	}
}

void func_115()
{
	if (iLocal_90 && unk_0x9CD27B0045628463() > iLocal_93)
	{
		unk_0x8DFCED7A656F8802(true);
		iLocal_90 = 0;
	}
}

void func_116(int iParam0)
{
	int iVar0;
	
	if (!unk_0x5F9532F3B5CC2551(iLocal_101[iParam0]) && !unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
	{
		switch (iLocal_193)
		{
			case 0:
				if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(iLocal_101[iParam0], true), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) < 64f)
				{
					iLocal_194 = 0;
					iLocal_195 = 0;
					iLocal_193 = 1;
				}
				break;
			
			case 1:
				unk_0xE8854A4326B9E12B(&iVar0);
				unk_0x69F4BE8C8CC4796C(0, unk_0xD80958FC74E988A6(), -1, 0, 2);
				unk_0x5AD23D40115353AC(0, unk_0xD80958FC74E988A6(), 0);
				unk_0x39E72BC99E6360CB(iVar0);
				unk_0x5ABA3986D90D8A3B(iLocal_101[iParam0], iVar0);
				unk_0x3841422E9C488D8C(&iVar0);
				iLocal_193 = 2;
				break;
			
			case 2:
				if (unk_0x77F1BEB8863288D5(iLocal_101[iParam0], 242628503) != 1 || unk_0xD71649DB0A545AA3(iLocal_101[iParam0], unk_0xD80958FC74E988A6(), 20f))
				{
					unk_0x5AD23D40115353AC(iLocal_101[iParam0], unk_0xD80958FC74E988A6(), -1);
					if (!iLocal_195)
					{
						func_121(iLocal_101[iParam0], "PRERACE_CHAT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					else
					{
						func_121(iLocal_101[iParam0], "PRERACE_TAUNT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					iLocal_193 = 3;
				}
				break;
			
			case 3:
				if (!unk_0x9072C8B49907BFAD(iLocal_101[iParam0]))
				{
					func_120(&iLocal_196);
					unk_0xEA47FE3719165B94(iLocal_101[iParam0], "random@street_race", "_streetracer_wait_loop", 4f, -4f, -1, 9, 0f, false, false, false);
					iLocal_193 = 4;
				}
				break;
			
			case 4:
				if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(iLocal_101[iParam0], true), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) > 225f)
				{
					iLocal_193 = 0;
				}
				if (func_117(&iLocal_196) >= 5f && !iLocal_194)
				{
					iLocal_194 = 1;
					iLocal_193 = 1;
				}
				else if (func_117(&iLocal_196) >= 10f && !iLocal_195)
				{
					iLocal_195 = 1;
					iLocal_193 = 1;
				}
				break;
			
			case 5:
				break;
			}
	}
}

float func_117(int* iParam0)
{
	if (func_119(iParam0))
	{
		if (func_118(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_32() - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

bool func_118(var uParam0)
{
	return unk_0xA921AA820C25702F(*uParam0, 2);
}

bool func_119(var uParam0)
{
	return unk_0xA921AA820C25702F(*uParam0, 1);
}

void func_120(int* iParam0)
{
	func_31(iParam0, 0f);
}

void func_121(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x3523634255FC3318(iParam0, sParam1, sParam2, func_122(iParam3), false);
}

int func_122(int iParam0)
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

void func_123(int iParam0)
{
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !func_124())
	{
		if (func_53(iLocal_101[iParam0]))
		{
			if (iLocal_91 && unk_0xD5037BA82E12416F(unk_0xD80958FC74E988A6()) < 20f)
			{
				unk_0x189E955A8313E298(iLocal_101[iParam0], 0f, 0f, 0f, true, 2000, 2000, 2000, 0);
				iLocal_91 = 0;
			}
		}
	}
}

int func_124()
{
	if (unk_0xEE778F8C7E1142E2(unk_0x19CAFA3C87F7C2FF()) == 4)
	{
		return 1;
	}
	return 0;
}

int func_125()
{
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (func_141())
		{
			return 0;
		}
		if (func_140(func_41()) < Local_81.f_3)
		{
			if (Local_81.f_1 == 3)
			{
				func_137("SEA_NA_CASH", Local_81.f_3);
			}
			else
			{
				func_137("STREET_NA_CASH", Local_81.f_3);
			}
			iLocal_90 = 1;
			iLocal_93 = unk_0x9CD27B0045628463() + 1000;
			return 0;
		}
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			func_136(&iLocal_0);
			iLocal_0 = unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6());
			if (!func_131())
			{
				iLocal_90 = 1;
				iLocal_93 = unk_0x9CD27B0045628463() + 1000;
				return 0;
			}
			else if ((unk_0xEEF059FAD016D209(iLocal_0) <= 200 || unk_0x28D3FED7190D3A0B(iLocal_0)) || func_130())
			{
				func_129("RACE_VehDmg");
				iLocal_90 = 1;
				iLocal_93 = unk_0x9CD27B0045628463() + 1000;
				return 0;
			}
			else if (unk_0xBB40DD2270B65366(iLocal_0, -1) != unk_0xD80958FC74E988A6())
			{
				func_126();
				return 0;
			}
			else
			{
				if (func_73(0) || unk_0x2C83A9DA6BFFC4F9(joaat("appinternet")) > 0)
				{
					func_115();
					return 0;
				}
				switch (Local_81.f_1)
				{
					case 1:
						func_137("STREET_PLAY_B", Local_81.f_3);
						break;
					
					case 2:
						func_137("STREET_PLAY_C", Local_81.f_3);
						break;
					
					case 3:
						func_129("SEA_PLAY");
						break;
				}
				iLocal_90 = 1;
				iLocal_93 = unk_0x9CD27B0045628463();
				return 1;
			}
		}
		else
		{
			func_136(&iLocal_0);
			func_126();
			return 0;
		}
	}
	return 0;
}

void func_126()
{
	char* sVar0;
	
	if (Local_81.f_1 == 3)
	{
		if (func_13(iLocal_109))
		{
			sVar0 = "SEA_NA_VEH";
		}
		else
		{
			sVar0 = "SEA_NA_VEH2";
		}
		if (!func_128(sVar0))
		{
			func_127(sVar0);
			iLocal_90 = 1;
			iLocal_93 = unk_0x9CD27B0045628463() + 1000;
		}
	}
	else if (Local_81.f_1 == 1)
	{
		if (!func_128("STREET_NA_BIKE"))
		{
			func_127("STREET_NA_BIKE");
			iLocal_90 = 1;
			iLocal_93 = unk_0x9CD27B0045628463() + 1000;
		}
	}
	else if (!func_128("STREET_NA_CAR"))
	{
		func_127("STREET_NA_CAR");
		iLocal_90 = 1;
		iLocal_93 = unk_0x9CD27B0045628463() + 1000;
	}
}

void func_127(char* sParam0)
{
	unk_0x8509B634FBE7DA11(sParam0);
	unk_0x238FFE5C7B0498A6(0, true, true, -1);
}

bool func_128(char* sParam0)
{
	unk_0x0A24DA3A41B718F5(sParam0);
	return unk_0x10BDDBFC529428DD(0);
}

void func_129(char* sParam0)
{
	if (!func_128(sParam0))
	{
		func_127(sParam0);
	}
}

int func_130()
{
	int iVar0;
	
	iVar0 = unk_0x9F47B058362C84B5(iLocal_0);
	if (unk_0xB50C0B0CEDC6CE84(iVar0))
	{
		if (unk_0xBA291848A0815CA9(iLocal_0, 6, false) || unk_0xBA291848A0815CA9(iLocal_0, 7, false))
		{
			return 1;
		}
	}
	else if (unk_0x7F6DB52EEFC96DF8(iVar0))
	{
		if (((unk_0xBA291848A0815CA9(iLocal_0, 0, false) || unk_0xBA291848A0815CA9(iLocal_0, 1, false)) || unk_0xBA291848A0815CA9(iLocal_0, 4, false)) || unk_0xBA291848A0815CA9(iLocal_0, 5, false))
		{
			return 1;
		}
	}
	return 0;
}

int func_131()
{
	int iVar0;
	char* sVar1;
	
	switch (Local_81.f_1)
	{
		case 1:
			iVar0 = func_135();
			if (iVar0 == 1)
			{
				func_129("STREET_NA_COP");
				return 0;
			}
			else if (iVar0 == 2)
			{
				func_129("STREET_NA_BIKE");
				return 0;
			}
			break;
		
		case 2:
			iVar0 = func_133();
			if (iVar0 == 1)
			{
				func_129("STREET_NA_COP");
				return 0;
			}
			else if (iVar0 == 2)
			{
				func_129("STREET_NA_CAR");
				return 0;
			}
			break;
		
		case 3:
			if (!func_132())
			{
				if (func_13(iLocal_109))
				{
					sVar1 = "SEA_NA_VEH";
				}
				else
				{
					sVar1 = "SEA_NA_VEH2";
				}
				func_129(sVar1);
				return 0;
			}
			break;
	}
	return 1;
}

int func_132()
{
	int iVar0;
	
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x7239B21A38F536BA(iLocal_0))
		{
			iVar0 = unk_0x9F47B058362C84B5(iLocal_0);
			if (iVar0 == joaat("seashark") || iVar0 == joaat("seashark2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_133()
{
	int iVar0;
	int iVar1;
	int iVar2[83];
	
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x7239B21A38F536BA(iLocal_0))
		{
			iVar0 = unk_0x9F47B058362C84B5(iLocal_0);
			if (func_134(iVar0))
			{
				return 1;
			}
			if ((((((((((iVar0 == joaat("police4") || iVar0 == joaat("policeold1")) || iVar0 == joaat("policeold2")) || iVar0 == joaat("fbi")) || iVar0 == joaat("fbi2")) || iVar0 == joaat("lguard")) || iVar0 == joaat("sheriff")) || iVar0 == joaat("sheriff2")) || iVar0 == joaat("pranger")) || iVar0 == joaat("ambulance")) || iVar0 == joaat("firetruk"))
			{
				return 1;
			}
			if (((unk_0xB50C0B0CEDC6CE84(iVar0) || unk_0x45A9187928F4B9E3(iVar0)) || unk_0xDCE4334788AF94EA(iVar0)) || unk_0xA0948AB42D7BA0DE(iVar0))
			{
				return 2;
			}
			iVar2[0] = joaat("ambulance");
			iVar2[1] = joaat("benson");
			iVar2[2] = joaat("biff");
			iVar2[3] = joaat("bus");
			iVar2[4] = joaat("firetruk");
			iVar2[5] = joaat("forklift");
			iVar2[6] = joaat("mule");
			iVar2[7] = joaat("mule2");
			iVar2[8] = joaat("packer");
			iVar2[9] = joaat("phantom");
			iVar2[10] = joaat("mower");
			iVar2[11] = joaat("stockade");
			iVar2[12] = joaat("squalo");
			iVar2[13] = joaat("maverick");
			iVar2[14] = joaat("polmav");
			iVar2[15] = joaat("airtug");
			iVar2[16] = joaat("boxville3");
			iVar2[17] = joaat("annihilator");
			iVar2[18] = joaat("dinghy");
			iVar2[19] = 0;
			iVar2[20] = joaat("ripley");
			iVar2[21] = joaat("trash");
			iVar2[22] = joaat("burrito");
			iVar2[23] = joaat("pony");
			iVar2[24] = joaat("speedo");
			iVar2[25] = joaat("marquis");
			iVar2[26] = joaat("sanchez");
			iVar2[27] = joaat("airtug");
			iVar2[28] = joaat("taco");
			iVar2[29] = joaat("barracks");
			iVar2[30] = joaat("romero");
			iVar2[31] = joaat("blazer");
			iVar2[32] = joaat("blazer2");
			iVar2[33] = joaat("bodhi2");
			iVar2[34] = joaat("boxville2");
			iVar2[35] = joaat("bulldozer");
			iVar2[36] = joaat("caddy");
			iVar2[37] = joaat("caddy2");
			iVar2[38] = joaat("camper");
			iVar2[39] = joaat("tiptruck");
			iVar2[40] = joaat("tourbus");
			iVar2[41] = joaat("towtruck");
			iVar2[42] = joaat("towtruck2");
			iVar2[43] = joaat("tractor");
			iVar2[44] = joaat("tractor2");
			iVar2[45] = joaat("utillitruck");
			iVar2[46] = joaat("utillitruck2");
			iVar2[47] = joaat("utillitruck3");
			iVar2[48] = joaat("ratloader");
			iVar2[49] = joaat("dloader");
			iVar2[50] = joaat("docktug");
			iVar2[51] = joaat("dump");
			iVar2[52] = joaat("gburrito");
			iVar2[53] = joaat("handler");
			iVar2[54] = joaat("hauler");
			iVar2[55] = joaat("journey");
			iVar2[56] = joaat("rentalbus");
			iVar2[57] = joaat("mixer");
			iVar2[58] = joaat("rhino");
			iVar2[59] = joaat("cutter");
			iVar2[60] = joaat("pounder");
			iVar2[61] = joaat("tiptruck2");
			iVar2[62] = joaat("mixer2");
			iVar2[63] = joaat("rubble");
			iVar2[64] = joaat("scrap");
			iVar2[65] = joaat("armytanker");
			iVar2[66] = joaat("barracks2");
			iVar2[67] = joaat("airbus");
			iVar2[68] = joaat("coach");
			iVar2[69] = joaat("pbus");
			iVar2[70] = joaat("riot");
			iVar2[71] = 0;
			iVar2[72] = joaat("stockade3");
			iVar2[73] = joaat("flatbed");
			iVar2[74] = joaat("boxville");
			iVar2[75] = joaat("burrito2");
			iVar2[76] = joaat("burrito3");
			iVar2[77] = joaat("burrito4");
			iVar2[78] = joaat("rumpo");
			iVar2[79] = joaat("speedo2");
			iVar2[80] = 0;
			iVar2[81] = joaat("blimp");
			iVar2[82] = joaat("blimp2");
			iVar1 = 0;
			while (iVar1 < iVar2)
			{
				if (iVar0 == iVar2[iVar1])
				{
					return 2;
				}
				iVar1++;
			}
		}
	}
	return 0;
}

int func_134(int iParam0)
{
	switch (iParam0)
	{
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("polmav"):
		case joaat("policeb"):
		case joaat("policet"):
		case joaat("policeold2"):
		case joaat("policeold1"):
		case joaat("sheriff"):
		case joaat("sheriff2"):
			return 1;
			break;
	}
	return 0;
}

int func_135()
{
	int iVar0;
	
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x7239B21A38F536BA(iLocal_0))
		{
			iVar0 = unk_0x9F47B058362C84B5(iLocal_0);
			if (iVar0 == joaat("policeb"))
			{
				return 1;
			}
			if (unk_0xB50C0B0CEDC6CE84(iVar0) && !unk_0xBF94DD42F63BDED2(iVar0))
			{
				return 0;
			}
		}
	}
	return 2;
}

void func_136(int* iParam0)
{
	if (unk_0x7239B21A38F536BA(*iParam0))
	{
		unk_0x5F9532F3B5CC2551(*iParam0);
		if (unk_0x0A7B270912999B3C(*iParam0) && unk_0xDDE6DF5AE89981D2(*iParam0, true))
		{
			unk_0x629BFA74418D6239(iParam0);
		}
	}
}

void func_137(char* sParam0, int iParam1)
{
	if (!func_139(sParam0, iParam1))
	{
		func_138(sParam0, iParam1);
	}
}

void func_138(char* sParam0, int iParam1)
{
	unk_0x8509B634FBE7DA11(sParam0);
	unk_0x03B504CF259931BC(iParam1);
	unk_0x238FFE5C7B0498A6(0, true, true, -1);
}

bool func_139(char* sParam0, int iParam1)
{
	unk_0x0A24DA3A41B718F5(sParam0);
	unk_0x03B504CF259931BC(iParam1);
	return unk_0x10BDDBFC529428DD(0);
}

int func_140(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0x767FBC2AC802EF3D(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0x767FBC2AC802EF3D(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0x767FBC2AC802EF3D(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_141()
{
	int iVar0;
	
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			iVar0 = unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6());
			if (func_14(iVar0))
			{
				if (unk_0x886E37EC497200B6(iVar0))
				{
					if (Local_81.f_1 == 3 && unk_0xCFB0A0D8EDD145A3(iVar0))
					{
						return 0;
					}
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
	}
	return 0;
}

int func_142()
{
	int iVar0;
	
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		iVar0 = 20;
		if (Local_81.f_1 == 3)
		{
			iVar0 = 40;
		}
		if (unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_87, true) < IntToFloat(iVar0) && unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_143()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_148(&uLocal_214))
	{
		if (Local_81.f_1 == 2)
		{
			if (func_145())
			{
				if (!unk_0x7239B21A38F536BA(iLocal_109))
				{
					if (unk_0x98A4EB5D89A0C952(iLocal_180) && unk_0x98A4EB5D89A0C952(iLocal_180))
					{
						iLocal_109 = unk_0xAF35D0D2583051B0(iLocal_180, Local_111, fLocal_114, 1, 1);
						if (unk_0x3E8349C08E4B82E4(true) && unk_0xB8EB95E5B4E56978())
						{
							iLocal_110 = unk_0x9B62392B474F44A0(iLocal_109, true);
							unk_0xC429DCEEB339E129(iLocal_110, iLocal_109, 1, 99999999);
							unk_0x9F8AA94D6D97DBF4(iLocal_110, true);
							unk_0x971D38760FBC02EF(iLocal_110, true);
						}
						unk_0x49733E92263139D1(iLocal_109);
						unk_0x2497C4717C8B881E(iLocal_109, 1, 1);
						unk_0x3B988190C0AA6C0B(iLocal_109, true);
						unk_0xBB6F1CAEC68B0BCE(iLocal_109, true);
						unk_0x774BD811F656A122(unk_0xB28ECA15046CA8B9(10), true);
						unk_0x1B9C0099CB942AC6(iLocal_109, unk_0xB28ECA15046CA8B9(10));
						unk_0xAB04325045427AAE(iLocal_109, false);
						unk_0xE532F5D78798DAAB(iLocal_180);
						unk_0x4EDE34FBADD967A6(0);
					}
				}
				if (!unk_0x7239B21A38F536BA(iLocal_115))
				{
					if (unk_0x98A4EB5D89A0C952(iLocal_181))
					{
						iLocal_115 = unk_0xAF35D0D2583051B0(iLocal_181, Local_116, fLocal_119, 1, 1);
						unk_0x2497C4717C8B881E(iLocal_115, 0, 1);
						unk_0x3B988190C0AA6C0B(iLocal_115, true);
						unk_0xBB6F1CAEC68B0BCE(iLocal_115, true);
						unk_0x49733E92263139D1(iLocal_115);
						unk_0x774BD811F656A122(unk_0xB28ECA15046CA8B9(10), true);
						unk_0x1B9C0099CB942AC6(iLocal_115, unk_0xB28ECA15046CA8B9(10));
						unk_0xAB04325045427AAE(iLocal_115, false);
						unk_0xE532F5D78798DAAB(iLocal_181);
						unk_0x4EDE34FBADD967A6(0);
					}
				}
				if (unk_0xD031A9162D01088C(cLocal_182))
				{
					if (iLocal_191)
					{
						iVar0 = 0;
						while (iVar0 <= (iLocal_172 - 1))
						{
							if (unk_0x7239B21A38F536BA(iLocal_101[iVar0]))
							{
								if (!unk_0x5F9532F3B5CC2551(iLocal_101[iVar0]) && !func_144(iLocal_101[iVar0], -2017877118))
								{
									unk_0xEA47FE3719165B94(iLocal_101[iVar0], cLocal_182, sLocal_183[iVar0], 1000f, -1000f, -1, 1, 0f, false, false, false);
									unk_0x971D38760FBC02EF(iLocal_101[iVar0], true);
								}
							}
							else if (unk_0x98A4EB5D89A0C952(iLocal_172[iVar0]))
							{
								iLocal_101[iVar0] = unk_0xD49F9B0955C367DE(25, iLocal_172[iVar0], Local_134[iVar0 /*3*/], fLocal_156[iVar0], true, true);
								unk_0x239A3351AC1DA385(iLocal_101[iVar0], Local_134[iVar0 /*3*/], false, false, true);
								unk_0x9F8AA94D6D97DBF4(iLocal_101[iVar0], true);
								unk_0xEA47FE3719165B94(iLocal_101[iVar0], cLocal_182, sLocal_183[iVar0], 1000f, -1000f, -1, 1, 0f, false, false, false);
								unk_0x971D38760FBC02EF(iLocal_101[iVar0], true);
							}
							iVar0++;
						}
						if ((((((((func_53(iLocal_101[0]) && func_53(iLocal_101[1])) && func_53(iLocal_101[2])) && func_53(iLocal_101[3])) && func_53(iLocal_101[4])) && func_53(iLocal_101[5])) && func_53(iLocal_101[6])) && func_13(iLocal_109)) && func_13(iLocal_115))
						{
							bLocal_100 = true;
							iVar0 = 0;
							while (iVar0 <= (iLocal_172 - 1))
							{
								unk_0xE532F5D78798DAAB(iLocal_172[iVar0]);
								iVar0++;
							}
							iLocal_191 = 0;
						}
					}
				}
			}
		}
		else if (Local_81.f_1 == 1)
		{
			if (func_145())
			{
				if (!unk_0x7239B21A38F536BA(iLocal_109))
				{
					if (unk_0x98A4EB5D89A0C952(iLocal_180))
					{
						iLocal_109 = unk_0xAF35D0D2583051B0(iLocal_180, Local_111, fLocal_114, 1, 1);
						if (unk_0x3E8349C08E4B82E4(false) && unk_0xEACEEDA81751915C())
						{
							iLocal_110 = unk_0x9B62392B474F44A0(iLocal_109, true);
							unk_0xC429DCEEB339E129(iLocal_110, iLocal_109, 1, 99999999);
							unk_0x9F8AA94D6D97DBF4(iLocal_110, true);
							unk_0x971D38760FBC02EF(iLocal_110, true);
						}
						unk_0x2497C4717C8B881E(iLocal_109, 1, 1);
						unk_0x3B988190C0AA6C0B(iLocal_109, true);
						unk_0xBB6F1CAEC68B0BCE(iLocal_109, true);
						unk_0x774BD811F656A122(unk_0xB28ECA15046CA8B9(10), true);
						unk_0x1B9C0099CB942AC6(iLocal_109, unk_0xB28ECA15046CA8B9(10));
						unk_0xAB04325045427AAE(iLocal_109, false);
						unk_0xE532F5D78798DAAB(iLocal_180);
					}
				}
				if (unk_0xD031A9162D01088C(cLocal_182))
				{
					if (iLocal_191)
					{
						iVar1 = 0;
						while (iVar1 <= (iLocal_172 - 3))
						{
							if (unk_0x7239B21A38F536BA(iLocal_101[iVar1]))
							{
								if (!unk_0x5F9532F3B5CC2551(iLocal_101[iVar1]) && !func_144(iLocal_101[iVar1], -2017877118))
								{
									unk_0x239A3351AC1DA385(iLocal_101[iVar1], Local_134[iVar1 /*3*/], false, false, true);
									if (iVar1 != 2 && iVar1 != 3)
									{
										unk_0xEA47FE3719165B94(iLocal_101[iVar1], cLocal_182, sLocal_183[iVar1], 1000f, -1000f, -1, 1, 0f, false, false, false);
									}
									else
									{
										unk_0xEA47FE3719165B94(iLocal_101[iVar1], cLocal_182, sLocal_183[iVar1], 1000f, -1000f, -1, 1, 0.5f, false, false, false);
									}
									unk_0x971D38760FBC02EF(iLocal_101[iVar1], true);
								}
							}
							else if (unk_0x98A4EB5D89A0C952(iLocal_172[iVar1]))
							{
								iLocal_101[iVar1] = unk_0xD49F9B0955C367DE(25, iLocal_172[iVar1], Local_134[iVar1 /*3*/], fLocal_156[iVar1], true, true);
								unk_0x9F8AA94D6D97DBF4(iLocal_101[iVar1], true);
							}
							iVar1++;
						}
						if ((((func_53(iLocal_101[0]) && func_53(iLocal_101[1])) && func_53(iLocal_101[2])) && func_53(iLocal_101[3])) && func_53(iLocal_101[4]))
						{
							unk_0x69F4BE8C8CC4796C(iLocal_101[4], unk_0xD80958FC74E988A6(), -1, 2048, 4);
							iVar1 = 0;
							while (iVar1 <= (iLocal_172 - 1))
							{
								unk_0xE532F5D78798DAAB(iLocal_172[iVar1]);
								iVar1++;
							}
							iLocal_191 = 0;
						}
					}
				}
			}
		}
		else if (Local_81.f_1 == 3)
		{
			if (func_145())
			{
				if (!unk_0x7239B21A38F536BA(iLocal_109))
				{
					if (unk_0x98A4EB5D89A0C952(iLocal_180))
					{
						iLocal_109 = unk_0xAF35D0D2583051B0(iLocal_180, Local_111, fLocal_114, 1, 1);
						unk_0x49733E92263139D1(iLocal_109);
						unk_0xE842A9398079BD82(iLocal_109, 0f);
						unk_0xE3EBAAE484798530(iLocal_109, false);
						unk_0xB28B1FE5BFADD7F5(iLocal_109, false);
						if (unk_0x26C10ECBDA5D043B(iLocal_109))
						{
							unk_0x75DBEC174AEEAD10(iLocal_109, true);
						}
						unk_0x2497C4717C8B881E(iLocal_109, 0, 1);
					}
				}
				iVar2 = 0;
				iVar2 = 0;
				while (iVar2 < 3)
				{
					if (unk_0x7239B21A38F536BA(iLocal_164[iVar2]))
					{
						if (unk_0x7239B21A38F536BA(iLocal_168[iVar2]))
						{
							if (!unk_0x84A2DD9AC37C35C1(iLocal_168[iVar2]) && func_13(iLocal_164[iVar2]))
							{
								if (unk_0x22AC59A870E6A669(iLocal_164[iVar2], -1))
								{
									unk_0xF75B0D629E1C063D(iLocal_168[iVar2], iLocal_164[iVar2], -1);
								}
							}
						}
						else if (func_13(iLocal_164[iVar2]) && unk_0x98A4EB5D89A0C952(joaat("a_m_y_jetski_01")))
						{
							iLocal_168[iVar2] = unk_0x7DD959874C1FD534(iLocal_164[iVar2], 25, joaat("a_m_y_jetski_01"), -1, true, true);
							unk_0x56CEF0AC79073BDE(iLocal_168[iVar2], false);
							unk_0x9F8AA94D6D97DBF4(iLocal_168[iVar2], true);
						}
					}
					else if (unk_0x98A4EB5D89A0C952(iLocal_180))
					{
						iLocal_164[iVar2] = unk_0xAF35D0D2583051B0(iLocal_180, Local_120[iVar2 /*3*/], fLocal_130[iVar2], 1, 1);
						unk_0x49733E92263139D1(iLocal_164[iVar2]);
						unk_0xE842A9398079BD82(iLocal_164[iVar2], 0f);
						unk_0xE3EBAAE484798530(iLocal_164[iVar2], true);
						unk_0xB28B1FE5BFADD7F5(iLocal_164[iVar2], true);
						if (unk_0x26C10ECBDA5D043B(iLocal_164[iVar2]))
						{
							unk_0x75DBEC174AEEAD10(iLocal_164[iVar2], true);
						}
						unk_0x2497C4717C8B881E(iLocal_164[iVar2], 0, 1);
					}
					iVar2++;
				}
				if (((unk_0x7239B21A38F536BA(iLocal_109) && unk_0x7239B21A38F536BA(iLocal_164[0])) && unk_0x7239B21A38F536BA(iLocal_164[1])) && unk_0x7239B21A38F536BA(iLocal_164[2]))
				{
					unk_0xE532F5D78798DAAB(iLocal_180);
				}
				if ((unk_0x7239B21A38F536BA(iLocal_168[0]) && unk_0x7239B21A38F536BA(iLocal_168[1])) && unk_0x7239B21A38F536BA(iLocal_168[2]))
				{
					unk_0xE532F5D78798DAAB(joaat("a_m_y_jetski_01"));
				}
				unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 170, true);
			}
		}
	}
}

int func_144(int iParam0, int iParam1)
{
	if (func_53(iParam0))
	{
		if (unk_0x77F1BEB8863288D5(iParam0, iParam1) == 1 || unk_0x77F1BEB8863288D5(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_145()
{
	if (!func_147())
	{
		return 0;
	}
	if (func_53(unk_0xD80958FC74E988A6()))
	{
		if (!func_146(unk_0xD80958FC74E988A6(), Local_111, 100f) || unk_0xB16FCE9DDC7BA182())
		{
			return 1;
		}
	}
	return 0;
}

bool func_146(int iParam0, struct<3> Param1, float fParam4)
{
	return unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(iParam0, true), Param1) <= (fParam4 * fParam4);
}

int func_147()
{
	if (Local_81.f_1 == 3)
	{
		return 1;
	}
	else if (Local_81.f_1 == 1 || Local_81.f_1 == 2)
	{
		if (unk_0x25223CA6B4D20B7F() >= 20 || unk_0x25223CA6B4D20B7F() < 5)
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

int func_148(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_145)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xA921AA820C25702F((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0xA921AA820C25702F((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_149(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return 1;
}

bool func_149(var uParam0)
{
	return func_150(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_150(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xA921AA820C25702F(iParam0, 30))
	{
		if (unk_0xA921AA820C25702F(iParam0, 29))
		{
			switch (func_151(iParam0))
			{
				case 0:
					return unk_0x98A4EB5D89A0C952(iParam2);
					break;
				
				case 1:
					return unk_0xD031A9162D01088C(sParam1);
					break;
				
				case 2:
					return unk_0x318234F4F3738AF3(sParam1);
					break;
				
				case 3:
					return unk_0x0145F696AAAAD2E4(sParam1);
					break;
				
				case 4:
					return unk_0x300D614A4C785FC4(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0xCB4E8BE8A0063C5D(sParam1);
					break;
				
				case 6:
					return unk_0x2F844A8B08D76685(sParam1, unk_0xA921AA820C25702F(iParam0, 27));
					break;
				
				case 7:
					return unk_0x5F0F0C783EB16C04(iParam2);
					break;
				
				case 8:
					return unk_0x02245FE4BED318B8(iParam2);
					break;
				
				case 9:
					return unk_0xCA7D9B86ECA7481B();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_151(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xA921AA820C25702F(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_152(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_145)
	{
		if ((unk_0xFC8202EFC642E6F2() >= (uParam0->f_146 + uParam0->f_147) || unk_0xA921AA820C25702F(Global_89784.f_20, 2)) || unk_0xA921AA820C25702F(Global_89784.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (unk_0xA921AA820C25702F((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0xA921AA820C25702F((*uParam0)[iVar0 /*18*/], 29))
					{
						func_153(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = unk_0xFC8202EFC642E6F2();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_153(int* iParam0)
{
	func_154(iParam0, &(iParam0->f_2), iParam0->f_1);
}

void func_154(int* iParam0, char* sParam1, int iParam2)
{
	if (unk_0xA921AA820C25702F(*iParam0, 30))
	{
		switch (func_151(*iParam0))
		{
			case 0:
				unk_0x963D27A58DF860AC(iParam2);
				break;
			
			case 1:
				unk_0xD3BD40951412FEF6(sParam1);
				break;
			
			case 2:
				unk_0xD2A71E1A77418A49(sParam1);
				break;
			
			case 3:
				unk_0xDFA2EF8E04127DD5(sParam1, unk_0xA921AA820C25702F(*iParam0, 28));
				break;
			
			case 4:
				unk_0xAF514CABE74CBF15(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x9EEFB62EB27B5792(sParam1);
				break;
			
			case 6:
				unk_0x2F844A8B08D76685(sParam1, unk_0xA921AA820C25702F(*iParam0, 27));
				break;
			
			case 7:
				unk_0xD62A67D26D9653E6(iParam2);
				break;
			
			case 8:
				unk_0x71A78003C8E71424(sParam1, iParam2);
				break;
			
			case 9:
				unk_0x944955FB2A3935C8();
				break;
			
			default:
				break;
		}
		unk_0x933D6A9EEC1BACD0(iParam0, 29);
	}
}

void func_155()
{
	int iVar0;
	
	if (Local_81.f_1 == 1 || Local_81.f_1 == 2)
	{
		switch (Local_81.f_0)
		{
			case 0:
				Local_111 = { -158.67f, -1555.16f, 34.63f };
				fLocal_114 = 187.71f;
				Local_116 = { -155.15f, -1550.83f, 34.53f };
				fLocal_119 = 213.13f;
				Local_199 = { -68.87878f, -1818.903f, 24.55311f };
				Local_202 = { -56.0098f, -1807.029f, 27.85417f };
				Local_134[0 /*3*/] = { -157.19f, -1555.36f, 35.07f };
				Local_134[1 /*3*/] = { -157.04f, -1557.57f, 35.11f };
				Local_134[2 /*3*/] = { -159.83f, -1557.39f, 34.96f };
				Local_134[3 /*3*/] = { -156.64f, -1551.96f, 34.92f };
				Local_134[4 /*3*/] = { -156.25f, -1552.58f, 34.93f };
				Local_134[5 /*3*/] = { -153.23f, -1553.05f, 34.93f };
				Local_134[6 /*3*/] = { -155.3f, -1556.41f, 35.13f };
				fLocal_156[0] = 101.91f;
				fLocal_156[1] = 38.48f;
				fLocal_156[2] = -36.7f;
				fLocal_156[3] = -52.93f;
				fLocal_156[4] = -75.07f;
				fLocal_156[5] = 33.13f;
				fLocal_156[6] = -170.02f;
				break;
			
			case 1:
				Local_111 = { 368.72f, 294.06f, 102.96f };
				fLocal_114 = 25.17f;
				Local_116 = { 373.71f, 290.72f, 102.89f };
				fLocal_119 = 33.24f;
				Local_199 = { -523.5497f, 262.2986f, 80.01991f };
				Local_202 = { -509.1013f, 272.478f, 86.17713f };
				Local_134[0 /*3*/] = { 367.24f, 293.81f, 103.41f };
				Local_134[1 /*3*/] = { 368.73f, 296.89f, 103.41f };
				Local_134[2 /*3*/] = { 366.94f, 296.34f, 103.43f };
				Local_134[3 /*3*/] = { 375.21f, 291.85f, 103.25f };
				Local_134[4 /*3*/] = { 374.81f, 292.47f, 103.26f };
				Local_134[5 /*3*/] = { 371.51f, 291.85f, 103.31f };
				Local_134[6 /*3*/] = { 373.86f, 296.3f, 103.31f };
				fLocal_156[0] = -64.83f;
				fLocal_156[1] = -163.04f;
				fLocal_156[2] = -118.77f;
				fLocal_156[3] = 127.18f;
				fLocal_156[4] = 105.04f;
				fLocal_156[5] = -146.75f;
				fLocal_156[6] = 10.11f;
				break;
			
			case 2:
				Local_111 = { -807.98f, -2555.14f, 13.34f };
				fLocal_114 = 3.35f;
				Local_116 = { -810.1f, -2560.85f, 13.38f };
				fLocal_119 = 43.57f;
				Local_199 = { -1000.759f, -2436.092f, 17.16946f };
				Local_202 = { -986.7399f, -2424.87f, 22.16946f };
				Local_134[0 /*3*/] = { -809.45f, -2554.82f, 13.76f };
				Local_134[1 /*3*/] = { -808.47f, -2552.43f, 13.76f };
				Local_134[2 /*3*/] = { -806.32f, -2552.87f, 13.76f };
				Local_134[3 /*3*/] = { -808.59f, -2559.5f, 13.76f };
				Local_134[4 /*3*/] = { -809.1f, -2558.97f, 13.76f };
				Local_134[5 /*3*/] = { -812.82f, -2559.48f, 13.76f };
				Local_134[6 /*3*/] = { -810.72f, -2555.37f, 13.76f };
				fLocal_156[0] = -86.65f;
				fLocal_156[1] = -130.05f;
				fLocal_156[2] = 150.04f;
				fLocal_156[3] = 137.51f;
				fLocal_156[4] = 115.37f;
				fLocal_156[5] = -136.43f;
				fLocal_156[6] = 20.43f;
				break;
			
			case 3:
				Local_111 = { 778.59f, -1160.2f, 28.35f };
				fLocal_114 = 302.47f;
				Local_116 = { 778.47f, -1164.01f, 28.25f };
				fLocal_119 = 287.97f;
				Local_199 = { -1000.759f, -2436.092f, 17.16946f };
				Local_202 = { -986.7399f, -2424.87f, 22.16946f };
				Local_134[0 /*3*/] = { 778.16f, -1158.78f, 28.88f };
				Local_134[1 /*3*/] = { 780.82f, -1158.1f, 28.73f };
				Local_134[2 /*3*/] = { 781.52f, -1158.81f, 28.7f };
				Local_134[3 /*3*/] = { 779.16f, -1165.74f, 28.72f };
				Local_134[4 /*3*/] = { 779.86f, -1165.52f, 28.72f };
				Local_134[5 /*3*/] = { 780.75f, -1161.99f, 28.65f };
				Local_134[6 /*3*/] = { 783.8f, -1165.61f, 28.74f };
				fLocal_156[0] = -147.53f;
				fLocal_156[1] = 171.51f;
				fLocal_156[2] = 104.94f;
				fLocal_156[3] = 21.91f;
				fLocal_156[4] = -0.22f;
				fLocal_156[5] = 107.91f;
				fLocal_156[6] = -95.23f;
				break;
			
			case 4:
				Local_111 = { -1066.59f, -1151.04f, 1.71f };
				fLocal_114 = 258.32f;
				Local_134[0 /*3*/] = { -1065.07f, -1151.02f, 2.16f };
				Local_134[1 /*3*/] = { -1065.35f, -1149.36f, 2.16f };
				Local_134[2 /*3*/] = { -1067.13f, -1151.68f, 2.16f };
				Local_134[3 /*3*/] = { -1066.3f, -1149.38f, 2.16f };
				Local_134[4 /*3*/] = { -1066.01f, -1152.26f, 2.16f };
				fLocal_156[0] = 75.06f;
				fLocal_156[1] = 134.25f;
				fLocal_156[2] = -52.71f;
				fLocal_156[3] = -93.39f;
				fLocal_156[4] = -141.52f;
				Local_199 = { -1265.744f, -1057.199f, 5.410841f };
				Local_202 = { -1258.679f, -1049.919f, 9.443882f };
				break;
		}
		func_160(Local_81.f_0, &Local_205, &Local_208, &fLocal_211);
		iLocal_172[0] = joaat("a_f_y_hipster_02");
		iLocal_172[1] = joaat("a_m_y_hipster_02");
		iLocal_172[2] = joaat("a_m_y_hipster_02");
		iLocal_172[3] = joaat("a_f_y_hipster_02");
		iLocal_172[4] = joaat("a_m_y_hipster_02");
		iLocal_172[5] = joaat("a_m_y_hipster_02");
		iLocal_172[6] = joaat("a_m_y_hipster_02");
		if (Local_81.f_1 == 1)
		{
			cLocal_182 = "random@street_race";
			sLocal_183[0] = "_car_b_chatting_female";
			sLocal_183[1] = "_car_b_chatting_male";
			sLocal_183[2] = "_car_b_chatting_male";
			sLocal_183[3] = "_car_b_chatting_female";
			sLocal_183[4] = "_car_b_lookout";
		}
		else
		{
			cLocal_182 = "random@street_race";
			sLocal_183[0] = "_car_a_flirt_girl";
			sLocal_183[1] = "_car_a_gawker_male_a";
			sLocal_183[2] = "_car_a_gawker_male_b";
			sLocal_183[3] = "_car_b_chatting_female";
			sLocal_183[4] = "_car_b_chatting_male";
			sLocal_183[5] = "_car_b_driver";
			sLocal_183[6] = "_car_b_lookout";
			func_159(&uLocal_214, iLocal_181);
		}
		iLocal_180 = func_158(Local_81.f_1);
		iVar0 = 0;
		while (iVar0 <= (iLocal_172 - 1))
		{
			func_159(&uLocal_214, iLocal_172[iVar0]);
			iVar0++;
		}
		func_159(&uLocal_214, iLocal_180);
		func_156(&uLocal_214, cLocal_182);
		unk_0x34F060F4BF92E018(Local_199, Local_202, false, 0);
		unk_0x1A5AA1208AF5DB59(Local_205, Local_208, fLocal_211, false, false, true);
		iLocal_92 = 1;
	}
	else if (Local_81.f_1 == 3)
	{
		switch (Local_81.f_0)
		{
			case 5:
				Local_111 = { 3066.63f, 650.9f, 0.17f };
				fLocal_114 = 351.81f;
				Local_120[0 /*3*/] = { 3073.57f, 648.09f, 0.01f };
				fLocal_130[0] = 5.72f;
				Local_120[1 /*3*/] = { 3071.53f, 648.79f, -0.09f };
				fLocal_130[1] = 351.33f;
				Local_120[2 /*3*/] = { 3068.73f, 645.53f, -0.07f };
				fLocal_130[2] = 348.18f;
				break;
			
			case 6:
				Local_111 = { 3462.11f, 5192.15f, -0.04f };
				fLocal_114 = 222.9f;
				Local_120[0 /*3*/] = { 3456.64f, 5195.91f, 0.12f };
				fLocal_130[0] = 211.54f;
				Local_120[1 /*3*/] = { 3453.19f, 5192.84f, -0.17f };
				fLocal_130[1] = 201.55f;
				Local_120[2 /*3*/] = { 3451.06f, 5189.43f, -0.3f };
				fLocal_130[2] = 221.55f;
				break;
			
			case 7:
				Local_111 = { 194.64f, 3621.27f, 29.91f };
				fLocal_114 = 163.95f;
				Local_120[0 /*3*/] = { 198.62f, 3620.46f, 29.91f };
				fLocal_130[0] = 175.4f;
				Local_120[1 /*3*/] = { 202.78f, 3619.69f, 29.87f };
				fLocal_130[1] = 163.69f;
				Local_120[2 /*3*/] = { 210.14f, 3618.88f, 29.87f };
				fLocal_130[2] = 175.31f;
				break;
			
			case 8:
				Local_111 = { 627.58f, -2138.06f, -0.07f };
				fLocal_114 = 180.09f;
				Local_120[0 /*3*/] = { 643.09f, -2146.11f, -0.09f };
				fLocal_130[0] = 143.89f;
				Local_120[1 /*3*/] = { 638.21f, -2145.3f, -0.1f };
				fLocal_130[1] = 172.41f;
				Local_120[2 /*3*/] = { 633.56f, -2143.83f, -0.04f };
				fLocal_130[2] = 191.97f;
				break;
		}
		iLocal_180 = joaat("seashark");
		func_159(&uLocal_214, iLocal_180);
		func_159(&uLocal_214, joaat("a_m_y_jetski_01"));
	}
}

void func_156(var uParam0, char* sParam1)
{
	func_157(uParam0, 1, -1, sParam1, 0);
}

void func_157(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xA921AA820C25702F((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0xA921AA820C25702F((*uParam0)[iVar0 /*18*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 != 4)
				{
					if (!unk_0x0C515FAB3FF9EA92(sParam3, "NULL"))
					{
						if (unk_0x0C515FAB3FF9EA92(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_145)
	{
		uParam0->f_145 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!unk_0xA921AA820C25702F((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0x933D6A9EEC1BACD0(uParam0[iVar0 /*18*/], iParam1);
			unk_0x933D6A9EEC1BACD0(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_158(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 1:
			iVar0 = joaat("bati");
			break;
		
		case 2:
			iVar0 = joaat("ninef");
			break;
		
		case 3:
			iVar0 = joaat("seashark");
			break;
	}
	return iVar0;
}

void func_159(var uParam0, int iParam1)
{
	func_157(uParam0, 0, iParam1, "NULL", 0);
}

void func_160(int iParam0, var uParam1, var uParam2, float fParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 311.1262f, -1896.261f, 20.68329f };
			*uParam2 = { -295.0653f, -1405.53f, 35.3146f };
			*fParam3 = 300f;
			break;
		
		case 1:
			*uParam1 = { 273.185f, 335.2969f, 105.5704f };
			*uParam2 = { 412.2877f, 299.2304f, 101.0724f };
			*fParam3 = 20f;
			break;
		
		case 2:
			*uParam1 = { -823.7157f, -2588f, 13.7691f };
			*uParam2 = { -801.3356f, -2464.007f, 12.42913f };
			*fParam3 = 30f;
			break;
		
		case 3:
			*uParam1 = { 791.8257f, -1423.863f, 24.17954f };
			*uParam2 = { 783.167f, -1015.648f, 50.24134f };
			*fParam3 = 200f;
			break;
		
		case 4:
			*uParam1 = { -1084.03f, -1165.724f, 0.150211f };
			*uParam2 = { -1029.213f, -1134.581f, 2.174534f };
			*fParam3 = 10f;
			break;
	}
}

int func_161()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (func_52(9))
	{
		return 0;
	}
	if (func_43(6) || func_43(7))
	{
		return 0;
	}
	if (Global_54566)
	{
		return 0;
	}
	if (func_184())
	{
		return 0;
	}
	if (Local_81.f_1 != 3 && func_41() != 1)
	{
		return 0;
	}
	if (unk_0x7A3F19700A4D0525())
	{
		return 0;
	}
	if (func_53(unk_0xD80958FC74E988A6()) && unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		iVar0 = unk_0xB6997A7EB3F5C8C0();
		if (((func_13(iVar0) && unk_0xA808AA1D79230FC2(unk_0xD80958FC74E988A6(), iVar0)) && !func_183(unk_0xD80958FC74E988A6(), iVar0, -1)) && unk_0x9F47B058362C84B5(iVar0) != joaat("taxi"))
		{
			return 0;
		}
	}
	switch (Local_81.f_0)
	{
		case 0:
			if (Global_97147[0])
			{
				return 0;
			}
			break;
		
		case 1:
			if (Global_97147[1])
			{
				return 0;
			}
			break;
		
		case 2:
			if (Global_97147[2])
			{
				return 0;
			}
			break;
		
		case 3:
			if (Global_97147[3])
			{
				return 0;
			}
			break;
		
		case 4:
			if (Global_97147[4])
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_97137[0])
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_97137[1])
			{
				return 0;
			}
			break;
		
		case 7:
			if (Global_97137[2])
			{
				return 0;
			}
			break;
		
		case 8:
			if (Global_97137[3])
			{
				return 0;
			}
			break;
	}
	if (!func_147())
	{
		iVar1 = 0;
		while (iVar1 <= (iLocal_172 - 1))
		{
			if (func_53(iLocal_101[iVar1]))
			{
				unk_0xE8854A4326B9E12B(&iVar2);
				unk_0xE73A266DB0CA9042(0, iVar1 * 100);
				unk_0xBB9CE077274F6A1B(0, 40000f, 0);
				unk_0x39E72BC99E6360CB(iVar2);
				unk_0x5ABA3986D90D8A3B(iLocal_101[iVar1], iVar2);
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= (iLocal_168 - 1))
		{
			if (func_53(iLocal_168[iVar1]))
			{
				unk_0xE8854A4326B9E12B(&iVar2);
				unk_0xE73A266DB0CA9042(0, iVar1 * 110);
				if (func_13(iLocal_164[iVar1]) && unk_0xA3EE4A07279BB9DB(iLocal_168[iVar1], iLocal_164[iVar1], false))
				{
					unk_0x480142959D337D00(0, iLocal_164[iVar1], 30f, 786597);
				}
				else
				{
					unk_0xBB9CE077274F6A1B(0, 40000f, 0);
				}
				unk_0x39E72BC99E6360CB(iVar2);
				unk_0x5ABA3986D90D8A3B(iLocal_168[iVar1], iVar2);
			}
			iVar1++;
		}
		if (func_53(iLocal_110))
		{
			if (func_13(iLocal_109) && unk_0xA3EE4A07279BB9DB(iLocal_110, iLocal_109, false))
			{
				unk_0x480142959D337D00(iLocal_110, iLocal_109, 30f, 786597);
			}
			else
			{
				unk_0xBB9CE077274F6A1B(iLocal_110, 40000f, 0);
			}
		}
		return 0;
	}
	if (func_163())
	{
		iVar4 = 0;
		while (iVar4 <= (iLocal_172 - 1))
		{
			if (func_53(iLocal_101[iVar4]))
			{
				unk_0xE8854A4326B9E12B(&iVar3);
				unk_0xE73A266DB0CA9042(0, iVar4 * 50);
				unk_0x22B0D0E37CCB840D(0, unk_0xD80958FC74E988A6(), 500f, -1, false, false);
				unk_0x39E72BC99E6360CB(iVar3);
				if ((iVar4 % 2) == 0)
				{
					func_162(iLocal_101[iVar4], 1);
				}
				unk_0x5ABA3986D90D8A3B(iLocal_101[iVar4], iVar3);
			}
			iVar4++;
		}
		iVar4 = 0;
		while (iVar4 <= (iLocal_168 - 1))
		{
			if (func_13(iLocal_164[iVar4]) && Local_81.f_1 == 3)
			{
				unk_0x75DBEC174AEEAD10(iLocal_164[iVar4], false);
			}
			if (func_53(iLocal_168[iVar4]))
			{
				unk_0xE8854A4326B9E12B(&iVar3);
				unk_0xE73A266DB0CA9042(0, iVar4 * 60);
				if (func_13(iLocal_164[iVar4]) && unk_0xA3EE4A07279BB9DB(iLocal_168[iVar4], iLocal_164[iVar4], false))
				{
					unk_0x480142959D337D00(0, iLocal_164[iVar4], 50f, 786468);
				}
				else
				{
					unk_0x22B0D0E37CCB840D(0, unk_0xD80958FC74E988A6(), 500f, -1, false, false);
				}
				unk_0x39E72BC99E6360CB(iVar3);
				unk_0x5ABA3986D90D8A3B(iLocal_168[iVar4], iVar3);
				if ((iVar4 % 2) == 0)
				{
					func_162(iLocal_168[iVar4], 1);
				}
			}
			iVar4++;
		}
		if (func_13(iLocal_109) && Local_81.f_1 == 3)
		{
			unk_0x75DBEC174AEEAD10(iLocal_109, false);
		}
		if (func_53(iLocal_110))
		{
			if (func_13(iLocal_109) && unk_0xA3EE4A07279BB9DB(iLocal_110, iLocal_109, false))
			{
				unk_0x480142959D337D00(iLocal_110, iLocal_109, 50f, 786468);
			}
			else
			{
				unk_0x22B0D0E37CCB840D(iLocal_110, unk_0xD80958FC74E988A6(), 500f, -1, false, false);
			}
		}
		switch (Local_81.f_0)
		{
			case 0:
				Global_97147[0] = 1;
				Global_97153[0] = unk_0x9CD27B0045628463();
				break;
			
			case 1:
				Global_97147[1] = 1;
				Global_97153[1] = unk_0x9CD27B0045628463();
				break;
			
			case 2:
				Global_97147[2] = 1;
				Global_97153[2] = unk_0x9CD27B0045628463();
				break;
			
			case 3:
				Global_97147[3] = 1;
				Global_97153[3] = unk_0x9CD27B0045628463();
				break;
			
			case 4:
				Global_97147[4] = 1;
				Global_97153[4] = unk_0x9CD27B0045628463();
				break;
			
			case 5:
				Global_97137[0] = 1;
				Global_97142[0] = unk_0x9CD27B0045628463();
				break;
			
			case 6:
				Global_97137[1] = 1;
				Global_97142[1] = unk_0x9CD27B0045628463();
				break;
			
			case 7:
				Global_97137[2] = 1;
				Global_97142[2] = unk_0x9CD27B0045628463();
				break;
			
			case 8:
				Global_97137[3] = 1;
				Global_97142[3] = unk_0x9CD27B0045628463();
				break;
		}
		return 0;
	}
	return 1;
}

void func_162(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	if (func_53(iParam0))
	{
		iVar1 = 2;
		if (bParam1)
		{
			iVar1 = 3;
		}
		iVar2 = unk_0xD53343AA4FB7DD28(0, iVar1);
		if (iVar2 == 0)
		{
			sVar0 = "SCREAM_PANIC";
		}
		else if (iVar2 == 1)
		{
			sVar0 = "SCREAM_TERROR";
		}
		else
		{
			sVar0 = "SUPER_HIGH_FALL";
		}
		if (unk_0x6D9F5FAA7488BA46(iParam0))
		{
			func_121(iParam0, sVar0, "WAVELOAD_PAIN_MALE", 24);
		}
		else
		{
			func_121(iParam0, sVar0, "WAVELOAD_PAIN_FEMALE", 24);
		}
	}
}

int func_163()
{
	int iVar0;
	
	if (unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
	{
		return 1;
	}
	if (Local_81.f_1 == 3)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_168 - 1))
		{
			if (unk_0x7239B21A38F536BA(iLocal_168[iVar0]))
			{
				if (unk_0x84A2DD9AC37C35C1(iLocal_168[iVar0]))
				{
					return 1;
				}
				else if (func_164(iLocal_168[iVar0], 1, 1116471296, 1126825984, 0, 0, 0, 0) || unk_0x9A497FE2DF198913(iLocal_168[iVar0]))
				{
					return 1;
				}
			}
			if (unk_0x7239B21A38F536BA(iLocal_164[iVar0]))
			{
				if (unk_0x5F9532F3B5CC2551(iLocal_164[iVar0]))
				{
					return 1;
				}
				else if (unk_0xC86D67D52A707CF8(iLocal_164[iVar0], unk_0xD80958FC74E988A6(), true) && unk_0xEEF059FAD016D209(iLocal_164[iVar0]) < 900)
				{
					return 1;
				}
			}
			iVar0++;
		}
		if (unk_0x7239B21A38F536BA(iLocal_109))
		{
			if (unk_0x5F9532F3B5CC2551(iLocal_109))
			{
				return 1;
			}
			else if (unk_0xC86D67D52A707CF8(iLocal_109, unk_0xD80958FC74E988A6(), true) && unk_0xEEF059FAD016D209(iLocal_109) < 900)
			{
				return 1;
			}
		}
		return 0;
	}
	if (func_146(unk_0xD80958FC74E988A6(), Local_87, 50f) && unk_0x34616828CD07F1A1(unk_0xD80958FC74E988A6()))
	{
		return 1;
	}
	if (unk_0x7239B21A38F536BA(iLocal_110))
	{
		if (unk_0x84A2DD9AC37C35C1(iLocal_110))
		{
			return 1;
		}
		else if (func_164(iLocal_110, 1, 1116471296, 1126825984, 0, 0, 0, 0))
		{
			return 1;
		}
		else if (unk_0x9A497FE2DF198913(iLocal_110))
		{
			unk_0x9F8AA94D6D97DBF4(iLocal_110, false);
			return 1;
		}
	}
	if (unk_0x7239B21A38F536BA(iLocal_109))
	{
		if (unk_0x5F9532F3B5CC2551(iLocal_109))
		{
			return 1;
		}
		else if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iLocal_109, true) || unk_0xC86D67D52A707CF8(iLocal_109, unk_0xD80958FC74E988A6(), true))
		{
			return 1;
		}
	}
	if (unk_0x7239B21A38F536BA(iLocal_115))
	{
		if (unk_0x5F9532F3B5CC2551(iLocal_115))
		{
			return 1;
		}
		else if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iLocal_115, true) || unk_0xC86D67D52A707CF8(iLocal_115, unk_0xD80958FC74E988A6(), true))
		{
			return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_172 - 1))
	{
		if (unk_0x7239B21A38F536BA(iLocal_101[iVar0]))
		{
			if (unk_0x84A2DD9AC37C35C1(iLocal_101[iVar0]))
			{
				return 1;
			}
			else if (func_164(iLocal_101[iVar0], 1, 1116471296, 1126825984, 0, 0, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_164(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	struct<3> Var0;
	
	if (func_14(unk_0xD80958FC74E988A6()) && func_14(iParam0))
	{
		if (unk_0xC86D67D52A707CF8(iParam0, unk_0xD80958FC74E988A6(), true))
		{
			return 1;
		}
		if (func_178(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 6))
		{
			if (unk_0x4E209B2C1EAD5159(unk_0xD80958FC74E988A6()))
			{
				Var0 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) - unk_0x3FEF770D40960D5A(iParam0, true) };
				if ((((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <= 5f)
				{
					return func_177(unk_0xD80958FC74E988A6(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_165(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_165(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_14(unk_0xD80958FC74E988A6()) && func_14(iParam0))
	{
		if (func_176(iParam0) || unk_0x7912F7FC4F6264B6(unk_0x4F8644AF03D0E0D6(), iParam0))
		{
			if (unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iParam0, fVar0, fVar0, fVar0, false, true, 0))
			{
				if (func_166(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_166(int iParam0, float fParam1)
{
	return func_167(iParam0, unk_0xD80958FC74E988A6(), fParam1, 1, 250, 7);
}

bool func_167(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_175(iParam0, iParam1);
	if (!func_14(iParam0) || !func_14(iParam1))
	{
		if (iVar4 != -1)
		{
			func_174(&(Local_38[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!func_171(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_170();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_38[iVar4 /*4*/].f_1 = iParam0;
		Local_38[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { unk_0x17C07FC640E86B4E(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_168(&(Local_38[iVar4 /*4*/]), Var1, iParam1, &(Local_38[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x9CD27B0045628463() - Local_38[iVar4 /*4*/].f_3) < iParam4);
}

int func_168(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7)
{
	var uVar0;
	struct<3> Var1;
	var uVar4;
	int iVar7;
	int iVar8;
	
	iVar7 = 0;
	if (!func_14(iParam4))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_169(iParam4, iParam7) };
		*uParam0 = unk_0x7EE9F5D83DD4F90E(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = unk_0x3D87450E15D98694(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
	if (iVar8 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar8 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (unk_0x524AC5ECEA15343E(iVar7))
	{
		func_14(iVar7);
		if (unk_0x04A2A40C73395041(iVar7) == iParam4)
		{
			if (bLocal_79)
			{
				unk_0xD8B9A8AC5608FF94(Param1, unk_0x3FEF770D40960D5A(iParam4, true), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = unk_0x9CD27B0045628463();
			return 1;
		}
		return 0;
	}
	if (unk_0x6AC7003FA6E5575E(iVar7))
	{
		func_14(iVar7);
		if (unk_0x997ABD671D25CA0B(iParam4, false))
		{
			if (unk_0x4B53F92932ADFAC0(iVar7) == unk_0x9A9112A0FE9A4713(iParam4, false))
			{
				if (bLocal_79)
				{
					unk_0xD8B9A8AC5608FF94(Param1, unk_0x3FEF770D40960D5A(iParam4, true), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = unk_0x9CD27B0045628463();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_169(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = unk_0xD53343AA4FB7DD28(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0x3FEF770D40960D5A(iParam0, true);
	}
	else if (iParam1 == 1)
	{
		return unk_0x17C07FC640E86B4E(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0x17C07FC640E86B4E(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0x17C07FC640E86B4E(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0x17C07FC640E86B4E(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0x17C07FC640E86B4E(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0x17C07FC640E86B4E(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0x3FEF770D40960D5A(iParam0, true);
}

int func_170()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_38.f_0)
	{
		if ((Local_38[iVar0 /*4*/] == 0 && Local_38[iVar0 /*4*/].f_1 == 0) && Local_38[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_171(int iParam0, int iParam1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_173(unk_0x3FEF770D40960D5A(iParam1, true) - unk_0x3FEF770D40960D5A(iParam0, true)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var3 = { unk_0x0A794A5A57F8DF91(iParam0) };
	}
	else
	{
		Var3 = { func_173(unk_0x17C07FC640E86B4E(iParam0, 31086, 0f, 5f, 0f) - unk_0x17C07FC640E86B4E(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_172(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_172(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_173(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

void func_174(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_175(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_38.f_0)
	{
		if (Local_38[iVar0 /*4*/].f_1 == iParam0 && Local_38[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_176(int iParam0)
{
	if (unk_0x3C06B5C839B38F7B(unk_0x4F8644AF03D0E0D6(), iParam0) && unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 6))
	{
		return 1;
	}
	return 0;
}

bool func_177(int iParam0, int iParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0x0A794A5A57F8DF91(iParam0) };
	Var3 = { unk_0x3FEF770D40960D5A(iParam1, true) - unk_0x3FEF770D40960D5A(iParam0, true) };
	return (((Var0.f_0 * Var3.f_0) + (Var0.f_1 * Var3.f_1)) / unk_0x2A488C176D52CCA5(Var3, 0f, 0f, 0f)) > unk_0xD0FFB162F40A139C(fParam2);
}

int func_178(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_14(unk_0xD80958FC74E988A6()) && func_14(iParam0))
	{
		unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &iVar2, true);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_182(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_179(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (unk_0x65F0C5AE05943EC7(unk_0xD80958FC74E988A6()))
			{
				if (unk_0x34616828CD07F1A1(unk_0xD80958FC74E988A6()))
				{
					if (unk_0x3F2023999AD51C1F(unk_0x3FEF770D40960D5A(iParam0, true), fVar0, true))
					{
						return 1;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_182(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_179(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_179(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0x3FEF770D40960D5A(iParam0, true) };
	Var3 = { Var0 };
	Var0.f_0 = (Var0.f_0 - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var3.f_0 = (Var3.f_0 + fParam1);
	Var3.f_1 = (Var3.f_1 + fParam1);
	Var3.f_2 = (Var3.f_2 + fParam1);
	if (bParam2)
	{
		if (((unk_0x34318593248C8FB2(unk_0x3FEF770D40960D5A(iParam0, true), joaat("weapon_grenade"), fParam1, true) || unk_0x34318593248C8FB2(unk_0x3FEF770D40960D5A(iParam0, true), joaat("weapon_molotov"), fParam1, true)) || unk_0x34318593248C8FB2(unk_0x3FEF770D40960D5A(iParam0, true), joaat("weapon_smokegrenade"), fParam1, true)) || unk_0x34318593248C8FB2(unk_0x3FEF770D40960D5A(iParam0, true), joaat("weapon_stickybomb"), 5f, true))
		{
			if (bParam3)
			{
				if (func_180(iParam0, fParam1))
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
	}
	else
	{
		if (bParam3)
		{
			if (func_180(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x5270A8FBC098C3F8(Var0, Var3, true))
		{
			return 1;
		}
	}
	return 0;
}

int func_180(int iParam0, float fParam1)
{
	var uVar0;
	struct<3> Var1;
	
	if ((((unk_0x82FDE6A57EE4EE44(iParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, false) || unk_0x82FDE6A57EE4EE44(iParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, false)) || unk_0x82FDE6A57EE4EE44(iParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, false)) || unk_0x82FDE6A57EE4EE44(iParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, false)) || unk_0x82FDE6A57EE4EE44(iParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, false))
	{
		if (func_181(iParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_181(int iParam0, struct<3> Param1, float fParam4, int iParam5)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_173(Param1 - unk_0x3FEF770D40960D5A(iParam0, true)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		Var3 = { unk_0x0A794A5A57F8DF91(iParam0) };
	}
	else
	{
		Var3 = { func_173(unk_0x17C07FC640E86B4E(iParam0, 31086, 0f, 5f, 0f) - unk_0x17C07FC640E86B4E(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_172(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam4 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_182(int iParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (unk_0x34616828CD07F1A1(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iParam0, fParam3, fParam3, fParam3, false, true, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0x3F2023999AD51C1F(unk_0x3FEF770D40960D5A(iParam0, true), fParam2, true))
	{
		return 1;
	}
	return 0;
}

int func_183(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x5F9532F3B5CC2551(iParam0) && !unk_0x5F9532F3B5CC2551(iParam1))
	{
		if (unk_0xA808AA1D79230FC2(iParam0, iParam1))
		{
			if (unk_0xBB40DD2270B65366(iParam1, iParam2) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_184()
{
	switch (Local_81.f_0)
	{
		case 5:
			return unk_0xA921AA820C25702F(Global_97173.f_28098.f_2, 0);
			break;
		
		case 6:
			return unk_0xA921AA820C25702F(Global_97173.f_28098.f_2, 1);
			break;
		
		case 7:
			return unk_0xA921AA820C25702F(Global_97173.f_28098.f_2, 2);
			break;
		
		case 8:
			return unk_0xA921AA820C25702F(Global_97173.f_28098.f_2, 3);
			break;
		
		case 0:
			return unk_0xA921AA820C25702F(Global_97173.f_28101.f_3, 0);
			break;
		
		case 1:
			return unk_0xA921AA820C25702F(Global_97173.f_28101.f_3, 1);
			break;
		
		case 2:
			return unk_0xA921AA820C25702F(Global_97173.f_28101.f_3, 2);
			break;
		
		case 3:
			return unk_0xA921AA820C25702F(Global_97173.f_28101.f_3, 3);
			break;
		
		case 4:
			return unk_0xA921AA820C25702F(Global_97173.f_28101.f_3, 4);
			break;
	}
	return 0;
}

void func_185()
{
	iLocal_80 = 0;
	iLocal_90 = 0;
	bLocal_97 = false;
	bLocal_98 = false;
	iLocal_94 = 0;
	iLocal_95 = 0;
	iLocal_96 = 0;
	func_187(1);
	unk_0xEB47EC4E34FB7EE1("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", false);
	unk_0xEB47EC4E34FB7EE1("WORLD_VEHICLE_PARK_PARALLEL", false);
	if (Local_81.f_0 == 1)
	{
		iLocal_213 = func_186(374.0083f, 279.5919f, 102.3306f, 40f);
		unk_0x01C7B9B38428AEB6(374.0083f, 279.5919f, 102.3306f, 25f, 0, 0, 0, 0, 0);
	}
	if (Local_81.f_1 == 1 || Local_81.f_1 == 2)
	{
		iLocal_212 = func_186(Local_87, 60f);
	}
}

int func_186(struct<3> Param0, float fParam3)
{
	struct<3> Var0;
	
	Var0 = { (fParam3 / 2f), (fParam3 / 2f), (fParam3 / 2f) };
	return unk_0x1B5C85C612E5256E(Param0 - Var0, Param0 + Var0, false, true, true, true);
}

void func_187(bool bParam0)
{
	if (bParam0)
	{
		switch (Local_81.f_0)
		{
			case 0:
			case 1:
			case 2:
			case 3:
				func_159(&uLocal_214, joaat("banshee"));
				func_159(&uLocal_214, joaat("feltzer2"));
				func_159(&uLocal_214, joaat("sentinel"));
				break;
			
			case 4:
				func_159(&uLocal_214, joaat("bati"));
				func_159(&uLocal_214, joaat("ruffian"));
				break;
			
			case 5:
			case 6:
			case 7:
			case 8:
				func_159(&uLocal_214, joaat("seashark"));
				break;
		}
	}
	else
	{
		func_188(&uLocal_214);
	}
}

void func_188(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xA921AA820C25702F((*uParam0)[iVar0 /*18*/], 30))
		{
			func_189(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}

void func_189(var uParam0)
{
	func_190(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_190(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xA921AA820C25702F(iParam0, 30))
	{
		switch (func_151(iParam0))
		{
			case 0:
				unk_0xE532F5D78798DAAB(iParam2);
				break;
			
			case 1:
				unk_0xF66A602F829E2A06(sParam1);
				break;
			
			case 2:
				unk_0x01F73A131C18CD94(sParam1);
				break;
			
			case 3:
				unk_0xBE2CACCF5A8AA805(sParam1);
				break;
			
			case 4:
				unk_0xF1160ACCF98A3FC8(iParam2, sParam1);
				break;
			
			case 5:
				unk_0xFF1B8B4AA1C25DC8(sParam1);
				break;
			
			case 6:
				unk_0x7A2D8AD0A9EB9C3F();
				break;
			
			case 7:
				unk_0xC5BC038960E9DB27(iParam2);
				break;
			
			case 8:
				unk_0x2A179DF17CCF04CD(iParam2, unk_0xA921AA820C25702F(iParam0, 26));
				break;
			
			case 9:
				unk_0x88C6814073DD4A73();
				break;
			
			default:
				break;
		}
	}
}

int func_191(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return unk_0xA921AA820C25702F(Global_97173.f_28101.f_1, 0);
			break;
		
		case 1:
			return unk_0xA921AA820C25702F(Global_97173.f_28101.f_1, 1);
			break;
		
		case 2:
			return unk_0xA921AA820C25702F(Global_97173.f_28101.f_1, 2);
			break;
		
		case 3:
			return unk_0xA921AA820C25702F(Global_97173.f_28101.f_1, 3);
			break;
		
		case 4:
			return unk_0xA921AA820C25702F(Global_97173.f_28101.f_1, 4);
			break;
	}
	return 0;
}

bool func_192(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	bVar0 = unk_0xA921AA820C25702F(Global_97173.f_7311.f_99.f_214[iParam0], iParam1);
	return bVar0;
}

void func_193()
{
	if (func_194(func_195(85, 0), Local_87, 1f))
	{
		Local_81.f_0 = 0;
		Local_81.f_1 = 2;
		Local_81.f_3 = 100;
		Local_81.f_4 = 20;
	}
	else if (func_194(func_195(86, 0), Local_87, 1f))
	{
		Local_81.f_0 = 1;
		Local_81.f_1 = 2;
		Local_81.f_3 = 500;
		Local_81.f_4 = 18;
	}
	else if (func_194(func_195(87, 0), Local_87, 1f))
	{
		Local_81.f_0 = 2;
		Local_81.f_1 = 2;
		Local_81.f_3 = 1000;
		Local_81.f_4 = 2;
	}
	else if (func_194(func_195(88, 0), Local_87, 1f))
	{
		Local_81.f_0 = 3;
		Local_81.f_1 = 2;
		Local_81.f_3 = 1250;
		Local_81.f_4 = 4;
	}
	else if (func_194(func_195(89, 0), Local_87, 1f))
	{
		Local_81.f_0 = 4;
		Local_81.f_1 = 1;
		Local_81.f_3 = 1500;
		Local_81.f_4 = 5;
	}
	else if (func_194(func_195(81, 0), Local_87, 1f))
	{
		Local_81.f_0 = 5;
		Local_81.f_1 = 3;
		Local_81.f_3 = 0;
		Local_81.f_4 = 16;
	}
	else if (func_194(func_195(82, 0), Local_87, 1f))
	{
		Local_81.f_0 = 6;
		Local_81.f_1 = 3;
		Local_81.f_3 = 0;
		Local_81.f_4 = 13;
	}
	else if (func_194(func_195(83, 0), Local_87, 1f))
	{
		Local_81.f_0 = 7;
		Local_81.f_1 = 3;
		Local_81.f_3 = 0;
		Local_81.f_4 = 15;
		Local_81.f_5 = 1;
	}
	else if (func_194(func_195(84, 0), Local_87, 1f))
	{
		Local_81.f_0 = 8;
		Local_81.f_1 = 3;
		Local_81.f_4 = 24;
		Local_81.f_3 = 0;
		Local_81.f_5 = 1;
	}
	else
	{
		func_196(0);
	}
}

int func_194(struct<3> Param0, struct<3> Param3, float fParam6)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (unk_0x73D57CFFDD12C355((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x73D57CFFDD12C355((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			if (unk_0x73D57CFFDD12C355((Param0.f_2 - Param3.f_2)) <= fParam6)
			{
				return 1;
			}
		}
	}
	return 0;
}

Vector3 func_195(int iParam0, int iParam1)
{
	if (iParam0 != 262)
	{
		return Global_24745[iParam0 /*23*/][iParam1 /*3*/];
	}
	return 0f, 0f, 0f;
}

void func_196(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	if (!iLocal_91)
	{
		unk_0xF46C581C61718916(false);
		iLocal_91 = 1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (func_14(iLocal_101[iVar0]))
		{
			unk_0xE1EF3C1216AFF2CD(iLocal_101[iVar0]);
			unk_0xBB9CE077274F6A1B(iLocal_101[iVar0], 40000f, 0);
			unk_0x9F8AA94D6D97DBF4(iLocal_101[iVar0], false);
			unk_0x2595DD4236549CE3(&(iLocal_101[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_14(iLocal_168[iVar0]))
		{
			if (func_14(iLocal_164[iVar0]))
			{
				unk_0xE1EF3C1216AFF2CD(iLocal_168[iVar0]);
				if (unk_0x45A9187928F4B9E3(unk_0x9F47B058362C84B5(iLocal_164[iVar0])))
				{
					unk_0x75DBEC174AEEAD10(iLocal_164[iVar0], false);
				}
				unk_0x480142959D337D00(iLocal_168[iVar0], iLocal_164[iVar0], 20f, 786599);
				unk_0x971D38760FBC02EF(iLocal_168[iVar0], true);
				unk_0x9F8AA94D6D97DBF4(iLocal_168[iVar0], false);
				unk_0x2595DD4236549CE3(&(iLocal_168[iVar0]));
				unk_0x629BFA74418D6239(&(iLocal_164[iVar0]));
			}
		}
		iVar0++;
	}
	if (func_14(iLocal_110))
	{
		if (func_14(iLocal_109))
		{
			unk_0xE1EF3C1216AFF2CD(iLocal_110);
			unk_0x9F7794730795E019(iLocal_110, 1, true);
			unk_0x480142959D337D00(iLocal_110, iLocal_109, 15f, 786599);
			unk_0x971D38760FBC02EF(iLocal_110, true);
			unk_0x9F8AA94D6D97DBF4(iLocal_110, false);
			unk_0x2595DD4236549CE3(&iLocal_110);
			unk_0x629BFA74418D6239(&iLocal_109);
		}
	}
	if (func_14(iLocal_115))
	{
		unk_0x629BFA74418D6239(&iLocal_115);
	}
	switch (Local_81.f_0)
	{
		case 5:
			func_199(81, 0, 0);
			unk_0x933D6A9EEC1BACD0(&(Global_97173.f_28098.f_2), 0);
			break;
		
		case 6:
			func_199(82, 0, 0);
			unk_0x933D6A9EEC1BACD0(&(Global_97173.f_28098.f_2), 1);
			break;
		
		case 7:
			func_199(83, 0, 0);
			unk_0x933D6A9EEC1BACD0(&(Global_97173.f_28098.f_2), 2);
			break;
		
		case 8:
			func_199(84, 0, 0);
			unk_0x933D6A9EEC1BACD0(&(Global_97173.f_28098.f_2), 3);
			break;
		
		case 0:
			func_199(85, 0, 0);
			unk_0x933D6A9EEC1BACD0(&(Global_97173.f_28101.f_3), 0);
			break;
		
		case 1:
			func_199(86, 0, 0);
			unk_0x933D6A9EEC1BACD0(&(Global_97173.f_28101.f_3), 1);
			break;
		
		case 2:
			func_199(87, 0, 0);
			unk_0x933D6A9EEC1BACD0(&(Global_97173.f_28101.f_3), 2);
			break;
		
		case 3:
			func_199(88, 0, 0);
			unk_0x933D6A9EEC1BACD0(&(Global_97173.f_28101.f_3), 3);
			break;
		
		case 4:
			func_199(89, 0, 0);
			unk_0x933D6A9EEC1BACD0(&(Global_97173.f_28101.f_3), 4);
			break;
	}
	if (iLocal_90)
	{
		unk_0x8DFCED7A656F8802(true);
	}
	unk_0x774BD811F656A122(unk_0xB28ECA15046CA8B9(10), false);
	if (iLocal_99)
	{
		unk_0x19F21E63AE6EAE4E(true);
	}
	if (iLocal_192 && !bParam0)
	{
		iVar1 = unk_0xA5EDC40EF369B48D();
		if (unk_0x5E9564D8246B909A(iVar1))
		{
			if (!unk_0x49C32D60007AFA47(iVar1))
			{
				unk_0x8D32347D6D4C40A2(iVar1, true, 0);
			}
		}
	}
	if (!bParam0)
	{
		func_187(0);
	}
	if (iLocal_92)
	{
		unk_0xE04B48F2CC926253(Local_199, Local_202, 1);
		unk_0x0027501B9F3B407E(Local_205, Local_208, fLocal_211, 1);
		iLocal_92 = 0;
	}
	unk_0xEB47EC4E34FB7EE1("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", true);
	unk_0xEB47EC4E34FB7EE1("WORLD_VEHICLE_PARK_PARALLEL", true);
	if (Local_81.f_0 == 1)
	{
		unk_0x31D16B74C6E29D66(iLocal_213, false);
	}
	if (Local_81.f_1 == 1 || Local_81.f_1 == 2)
	{
		unk_0x31D16B74C6E29D66(iLocal_212, false);
	}
	else
	{
		unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 170, false);
	}
	func_197(&uLocal_214, 0);
	unk_0x1090044AD1DA76FA();
}

void func_197(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_188(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_198(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
}

void func_198(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_199(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 262)
	{
		return;
	}
	iVar0 = iParam0;
	if (!bParam2)
	{
		bVar1 = unk_0xA921AA820C25702F(Global_24745[iVar0 /*23*/].f_11, 15);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0xA921AA820C25702F(Global_24745[iVar0 /*23*/].f_11, 0))
	{
		unk_0x933D6A9EEC1BACD0(&(Global_24745[iVar0 /*23*/].f_11), 18);
		if (Global_24742 == 1)
		{
			Global_24743 = 1;
		}
		Global_24742 = 1;
	}
	if (bParam1)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_24745[iVar0 /*23*/].f_11), 0);
		unk_0x933D6A9EEC1BACD0(&(Global_24745[iVar0 /*23*/].f_11), 15);
		unk_0x933D6A9EEC1BACD0(&(Global_24745[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_24745[iVar0 /*23*/].f_11), 0);
		unk_0xE80492A9AC099A93(&(Global_24745[iVar0 /*23*/].f_11), 15);
	}
	if (!unk_0xA921AA820C25702F(Global_24745[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0xA6DB27D19ECBB7DA(Global_24745[iVar0 /*23*/].f_19))
		{
			unk_0xB98236CAAECEF897(true);
			unk_0x86A652570E5F25DD(&(Global_24745[iVar0 /*23*/].f_19));
			unk_0xB98236CAAECEF897(false);
		}
	}
}

