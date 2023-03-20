#region Local Var
	int iLocal_0 = 0;
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
	int iLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	char* sLocal_23 = NULL;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	struct<4> Local_40[10];
	bool bLocal_81 = 0;
	int iLocal_82 = 0;
	struct<6> Local_83 = { 10, 0, -1, 1000, -1, 0 } ;
	struct<3> Local_89 = { 0, 0, 0 } ;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	bool bLocal_99 = 0;
	bool bLocal_100 = 0;
	int iLocal_101 = 0;
	bool bLocal_102 = 0;
	var uLocal_103[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	struct<3> Local_113 = { 0, 0, 0 } ;
	float fLocal_116 = 0f;
	int iLocal_117 = 0;
	struct<3> Local_118 = { 0, 0, 0 } ;
	float fLocal_121 = 0f;
	struct<3> Local_122[3];
	float fLocal_132[3] = { 0f, 0f, 0f };
	struct<3> Local_136[7];
	float fLocal_158[7] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	int iLocal_166[3] = { 0, 0, 0 };
	int iLocal_170[3] = { 0, 0, 0 };
	int iLocal_174[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	char[] cLocal_184[8] = 0;
	char* sLocal_185[7] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	struct<3> Local_201 = { 0, 0, 0 } ;
	struct<3> Local_204 = { 0, 0, 0 } ;
	struct<3> Local_207 = { 0, 0, 0 } ;
	struct<3> Local_210 = { 0, 0, 0 } ;
	float fLocal_213 = 0f;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 8;
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
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 1;
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
	iLocal_20 = -1;
	sLocal_23 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	iLocal_93 = 1;
	bLocal_102 = true;
	iLocal_183 = joaat("feltzer2");
	iLocal_193 = 1;
	Local_201 = { 0f, 0f, 0f };
	Local_204 = { 1f, 1f, 1f };
	Local_207 = { 0f, 0f, 0f };
	Local_210 = { 0f, 0f, 0f };
	fLocal_213 = 0f;
	unk_0xAD6C1412D05CFBD7(1);
	Local_89 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0x9CEB376419A71A96(83))
	{
		func_202(0);
	}
	func_199();
	switch (Local_83.f_1)
	{
		case 1:
		case 2:
			if (!func_198(0, 8))
			{
				func_202(0);
			}
			if (!func_197(Local_83.f_0))
			{
				func_202(0);
			}
			break;
		
		case 3:
			if (!func_198(0, 7))
			{
				func_202(0);
			}
			break;
		
		case 0:
			func_202(0);
			break;
	}
	func_191();
	if (!func_167())
	{
		func_202(0);
	}
	func_161();
	while (true)
	{
		func_158(&uLocal_216);
		if (func_167())
		{
			if (unk_0x920167EE0888FA4E())
			{
				switch (iLocal_82)
				{
					case 0:
						iLocal_82 = 1;
						break;
					
					case 1:
						func_149();
						func_118();
						break;
					
					case 2:
						func_55();
						break;
					
					case 3:
						func_1();
						break;
				}
			}
			else
			{
				func_202(0);
			}
		}
		else
		{
			func_202(0);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	if (!bLocal_100)
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
	func_6(Local_89);
	func_5();
	Global_1312344 = 1;
	Global_1312344.f_1 = Local_83.f_0;
	StringCopy(&(Global_1312344.f_2), func_4(), 24);
	StringCopy(&(Global_1312344.f_8), func_3(Local_83.f_0), 32);
	Global_1312344.f_16 = { Local_89 };
	Global_1315916 = 1;
	func_202(1);
}

char* func_3(int iParam0)
{
	char* sVar0;
	
	if (unk_0x7E8E236FA7C5423B())
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
	else if (unk_0x438D260E2A787A5B())
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
	else if (unk_0x8B003E1580113906())
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
	else if (unk_0xB6FEE919E18FF45B())
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
	else if (unk_0x55812CD5A331E1F8())
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
	
	if (unk_0x7E8E236FA7C5423B())
	{
		sVar0 = "SPRACE";
	}
	else if (unk_0x438D260E2A787A5B())
	{
		sVar0 = "2535285330962926";
	}
	else if (unk_0x8B003E1580113906())
	{
		sVar0 = "SPRACE";
	}
	else if (unk_0xB6FEE919E18FF45B())
	{
		sVar0 = "2535285330962926";
	}
	else if (unk_0x55812CD5A331E1F8())
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
	unk_0xE27C8E42A97895CF(&Global_1312423, 0);
}

void func_6(struct<3> Param0)
{
	Global_1312423.f_6 = { Param0 };
}

void func_7(int iParam0)
{
	Global_1312423.f_2 = iParam0;
}

void func_8(int iParam0)
{
	Global_1312423.f_1 = iParam0;
}

void func_9()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	Local_83.f_2 = -1;
	if (func_54(unk_0x06736567F820A39E()))
	{
		if (!unk_0x94ECEF15011F1A34(unk_0x06736567F820A39E()))
		{
			unk_0x711BF7DCF9AE7AC2(unk_0x06736567F820A39E(), 0);
		}
	}
	while (!func_48())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (Local_83.f_1 != 3)
	{
		func_15(func_43(), 1, Local_83.f_3);
		iVar0 = unk_0x1ADBAAC322D61F73() + 1500;
		iVar1 = unk_0xF222904387CE4946();
		if (func_13(iVar1))
		{
			while (!func_12(iVar1, 3f, 2, 1056964608, 0, 1, 0) || unk_0x1ADBAAC322D61F73() < iVar0)
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
		uVar2 = unk_0xBC628C78D8ECD5F1();
		if (unk_0x7868479D9B6694C0(uVar2))
		{
			unk_0x4E7DF84FE130E1D6(uVar2, 0, 0);
		}
	}
	func_10();
}

void func_10()
{
	if (!func_11(0))
	{
		unk_0x47CCE1B84DDCD2A7("mission_Race");
		while (!unk_0x04D070195A8178CD("mission_Race"))
		{
			unk_0x47CCE1B84DDCD2A7("mission_Race");
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xB8BA7F44DF1575E1("mission_Race", &Local_83, 6, 18500);
	}
	unk_0x3F380364F30A5C6B("mission_Race");
	func_202(1);
}

bool func_11(bool bParam0)
{
	if (!bParam0 && unk_0x98934607F8D0FB03(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x7DA173D4FD42F36B(Global_69769, 0);
}

int func_12(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0xC80D2B3478FFF428(0, 71, 1);
	unk_0xC80D2B3478FFF428(0, 72, 1);
	unk_0xC80D2B3478FFF428(0, 76, 1);
	unk_0xC80D2B3478FFF428(0, 73, 1);
	unk_0xC80D2B3478FFF428(0, 59, 1);
	unk_0xC80D2B3478FFF428(0, 60, 1);
	if (bParam5)
	{
		unk_0xC80D2B3478FFF428(0, 75, 1);
	}
	unk_0xC80D2B3478FFF428(0, 80, 1);
	if (!bParam6)
	{
		unk_0xC80D2B3478FFF428(0, 69, 1);
		unk_0xC80D2B3478FFF428(0, 70, 1);
		unk_0xC80D2B3478FFF428(0, 68, 1);
	}
	unk_0xC80D2B3478FFF428(0, 74, 1);
	unk_0xC80D2B3478FFF428(0, 86, 1);
	unk_0xC80D2B3478FFF428(0, 81, 1);
	unk_0xC80D2B3478FFF428(0, 82, 1);
	unk_0xC80D2B3478FFF428(0, 138, 1);
	unk_0xC80D2B3478FFF428(0, 136, 1);
	unk_0xC80D2B3478FFF428(0, 114, 1);
	unk_0xC80D2B3478FFF428(0, 107, 1);
	unk_0xC80D2B3478FFF428(0, 110, 1);
	unk_0xC80D2B3478FFF428(0, 89, 1);
	unk_0xC80D2B3478FFF428(0, 89, 1);
	unk_0xC80D2B3478FFF428(0, 87, 1);
	unk_0xC80D2B3478FFF428(0, 88, 1);
	unk_0xC80D2B3478FFF428(0, 113, 1);
	unk_0xC80D2B3478FFF428(0, 115, 1);
	unk_0xC80D2B3478FFF428(0, 116, 1);
	unk_0xC80D2B3478FFF428(0, 117, 1);
	unk_0xC80D2B3478FFF428(0, 118, 1);
	unk_0xC80D2B3478FFF428(0, 119, 1);
	unk_0xC80D2B3478FFF428(0, 131, 1);
	unk_0xC80D2B3478FFF428(0, 132, 1);
	unk_0xC80D2B3478FFF428(0, 123, 1);
	unk_0xC80D2B3478FFF428(0, 126, 1);
	unk_0xC80D2B3478FFF428(0, 129, 1);
	unk_0xC80D2B3478FFF428(0, 130, 1);
	unk_0xC80D2B3478FFF428(0, 133, 1);
	unk_0xC80D2B3478FFF428(0, 134, 1);
	unk_0xEEB3EB1EAE3ADA8E();
	if ((unk_0x1ADBAAC322D61F73() - Global_29) > 500)
	{
		unk_0xD5739C1C2A4441D5(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x1ADBAAC322D61F73();
	if (!unk_0xBDA1F5E8A36BFA07(iParam0, 0))
	{
		if (unk_0xF87C669B882D93C0(unk_0x137B8B7A1CAD742A(iParam0)) <= fParam3)
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
		if (unk_0x1B6292EA51632C25(iParam0, 0))
		{
			if (!unk_0x64B7FCF50C031E4A(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_14(int iParam0)
{
	if (unk_0xC1EDB61CE0A4B94E(iParam0))
	{
		if (!unk_0xBDA1F5E8A36BFA07(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_15(int iParam0, int iParam1, int iParam2)
{
	if (Global_101186.f_32651[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_101186.f_32651[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_16(Global_101186.f_32651[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_16(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_42();
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
					func_41(99, 1);
					func_40(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_40(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_40(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_24(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
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
							func_40(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_40(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_40(joaat("sp2_money_spent_on_tattoos"), iParam3);
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
							func_40(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_40(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_40(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_40(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_40(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_40(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 98:
				case 99:
				case 100:
				case 101:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
					switch (iParam0)
					{
						case 0:
							func_40(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_40(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_40(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0xFC71FD0B03208C77())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_40(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_40(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_40(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_40(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_40(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_40(joaat("sp2_money_spent_on_hairdos"), iParam3);
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
									func_40(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_40(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_40(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_40(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_40(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_40(joaat("sp2_money_spent_car_mods"), iParam3);
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
					func_41(95, iParam3);
					break;
				
				case 1:
					func_41(97, iParam3);
					break;
				
				case 2:
					func_41(96, iParam3);
					break;
			}
			func_41(98, iParam3);
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
	iVar5 = (Global_52954[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_52954[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52954[iVar2] = 2147483647;
				}
				else
				{
					Global_52954[iVar2] = (Global_52954[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_40(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_40(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_40(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_52954[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_52954[iVar2];
			Global_52954[iVar2] = (Global_52954[iVar2] - iParam3);
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
		Global_101186.f_25165.f_233[iVar2 /*69*/].f_2[Global_101186.f_25165.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_101186.f_25165.f_233[iVar2 /*69*/].f_2[Global_101186.f_25165.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_101186.f_25165.f_233[iVar2 /*69*/].f_2[Global_101186.f_25165.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_101186.f_25165.f_233[iVar2 /*69*/]++;
		Global_101186.f_25165.f_233[iVar2 /*69*/].f_1++;
		if (Global_101186.f_25165.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_101186.f_25165.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_18(iParam0);
	if (Global_35742 == 15)
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
			Global_101186.f_25165.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_101186.f_25165.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_101186.f_25165.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_101186.f_25165.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_101186.f_25165.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_101186.f_25165.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_52962[iVar0 /*3*/][0] = Global_101186.f_25165[iVar0];
		Global_52962.f_31[iVar0 /*3*/][0] = Global_101186.f_25165.f_11[iVar0];
		Global_52962.f_62[iVar0 /*3*/][0] = Global_101186.f_25165.f_22[iVar0];
		Global_52962.f_93[iVar0 /*3*/][0] = Global_101186.f_25165.f_33[iVar0];
		Global_52962.f_124[iVar0 /*3*/][0] = Global_101186.f_25165.f_44[iVar0];
		Global_52962.f_155[iVar0 /*3*/][0] = Global_101186.f_25165.f_55[iVar0];
		Global_52962.f_186[iVar0 /*3*/][0] = Global_101186.f_25165.f_66[iVar0];
		Global_52962.f_217[iVar0 /*3*/][0] = Global_101186.f_25165.f_77[iVar0];
		Global_52962.f_248[iVar0 /*3*/][0] = Global_101186.f_25165.f_88[iVar0];
		if (!bParam0)
		{
			Global_52962[iVar0 /*3*/][1] = Global_101186.f_25165[iVar0];
			Global_52962.f_31[iVar0 /*3*/][1] = Global_101186.f_25165.f_11[iVar0];
			Global_52962.f_62[iVar0 /*3*/][1] = Global_101186.f_25165.f_22[iVar0];
			Global_52962.f_93[iVar0 /*3*/][1] = Global_101186.f_25165.f_33[iVar0];
			Global_52962.f_124[iVar0 /*3*/][1] = Global_101186.f_25165.f_44[iVar0];
			Global_52962.f_155[iVar0 /*3*/][1] = Global_101186.f_25165.f_55[iVar0];
			Global_52962.f_186[iVar0 /*3*/][1] = Global_101186.f_25165.f_66[iVar0];
			Global_52962.f_217[iVar0 /*3*/][1] = Global_101186.f_25165.f_77[iVar0];
			Global_52962.f_248[iVar0 /*3*/][1] = Global_101186.f_25165.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_18(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52954[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x57B5A527FBAC251E(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x57B5A527FBAC251E(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x57B5A527FBAC251E(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_19(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x17CC0D5008835470())
	{
		if (unk_0x7DA173D4FD42F36B(Global_101186.f_25165.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x99BCB15F954AF579(&(Global_101186.f_25165.f_471), iParam0);
		}
	}
	else if (unk_0x7DA173D4FD42F36B(Global_101186.f_25165.f_471, iParam0) || unk_0x7DA173D4FD42F36B(Global_2097152[func_21() /*10510*/].f_7704.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x99BCB15F954AF579(&(Global_101186.f_25165.f_471), iParam0);
		unk_0x99BCB15F954AF579(&(Global_2097152[func_21() /*10510*/].f_7704.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x999E5F6D1B49D87B("COUP_RED");
		unk_0x4C5D86B5B659C953(func_20(iParam0));
		unk_0x850E49B6757F562E(&cVar1, &cVar1, 1, 0, "", 0);
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
	func_41(93, iParam0);
	func_41(29, iParam0);
	func_41(30, iParam0);
}

bool func_23(int iParam0)
{
	if (!unk_0x17CC0D5008835470())
	{
		return unk_0x7DA173D4FD42F36B(Global_101186.f_25165.f_471, iParam0);
	}
	return unk_0x7DA173D4FD42F36B(Global_2097152[func_21() /*10510*/].f_7704.f_10, iParam0);
}

int func_24(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x3BC5AA36405F01BF(27))
	{
		return 0;
	}
	if (unk_0xFF4D252D25F54A29(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xFF4D252D25F54A29(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xFF4D252D25F54A29(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0xFF4D252D25F54A29(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x57B5A527FBAC251E(joaat("num_cash_spent"), iVar1, 1);
		func_39(27, iVar1);
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
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_26(iParam0, iParam1);
}

int func_26(int iParam0, int iParam1)
{
	if (func_38(14) && !func_37(iParam0))
	{
		return 0;
	}
	if (unk_0x3BC5AA36405F01BF(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25398 != 0 && !Global_69521)
	{
		return 0;
	}
	if (func_36(&Global_2568285))
	{
		if (func_34(&Global_2568285, iParam0))
		{
			return 0;
		}
		if (func_27(&Global_2568285, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x4B72953FB5C2CF5B(iParam0))
		{
			return 0;
		}
		if (unk_0x3BC5AA36405F01BF(iParam0))
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
	var uVar1[70];
	
	if (unk_0x3BC5AA36405F01BF(iParam1))
	{
		return 0;
	}
	if (func_38(14) && !func_37(iParam1))
	{
		return 0;
	}
	if (func_34(uParam0, iParam1))
	{
		return 0;
	}
	if (func_33(uParam0) < 0f)
	{
		func_32(uParam0, 0);
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
	
	if (unk_0x3BC5AA36405F01BF(iParam1))
	{
		return 0;
	}
	if (func_38(14) && !func_37(iParam1))
	{
		return 0;
	}
	if (func_34(uParam0, iParam1))
	{
		return 0;
	}
	if (func_33(uParam0) < 0f)
	{
		func_32(uParam0, 0);
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
	return (*uParam0)[iParam1] == 70;
}

void func_30(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_31(uParam0, iVar0);
		iVar0++;
	}
	func_32(uParam0, (Global_2568284 - 0.5f));
}

void func_31(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_32(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_72 = 0f;
	}
	else
	{
		uParam0->f_72 = fParam1;
	}
}

float func_33(var uParam0)
{
	return uParam0->f_72;
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
	return uParam0->f_71 == 1;
}

int func_37(int iParam0)
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
		
		default:
	}
	return 0;
}

bool func_38(int iParam0)
{
	return Global_35742 == iParam0;
}

int func_39(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 70)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x752CB313BE10D01F(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xEFFB38447380C1DE(iParam0, iParam1);
	}
	return 0;
}

void func_40(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xFF4D252D25F54A29(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x57B5A527FBAC251E(iParam0, iVar0, 1);
}

void func_41(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51522[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x17CC0D5008835470())
	{
		return;
	}
	if (Global_51522[iParam0 /*7*/])
	{
		unk_0xFF4D252D25F54A29(Global_51522[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x57B5A527FBAC251E(Global_51522[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_42()
{
	int iVar0;
	
	if (unk_0x37C879A6840008F2())
	{
		unk_0xFF4D252D25F54A29(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52954[0] == iVar0)
		{
			Global_52954[0] = iVar0;
		}
		unk_0xFF4D252D25F54A29(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52954[1] == iVar0)
		{
			Global_52954[1] = iVar0;
		}
		unk_0xFF4D252D25F54A29(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52954[2] == iVar0)
		{
			Global_52954[2] = iVar0;
		}
	}
}

int func_43()
{
	func_44();
	return Global_101186.f_1902.f_539.f_3549;
}

void func_44()
{
	int iVar0;
	
	if (unk_0xC1EDB61CE0A4B94E(unk_0x06736567F820A39E()))
	{
		if (func_47(Global_101186.f_1902.f_539.f_3549) != unk_0x79469DA5833EACA8(unk_0x06736567F820A39E()))
		{
			iVar0 = func_46(unk_0x06736567F820A39E());
			if (func_45(iVar0) && (!func_38(14) || Global_100138))
			{
				if (Global_101186.f_1902.f_539.f_3549 != iVar0 && func_45(Global_101186.f_1902.f_539.f_3549))
				{
					Global_101186.f_1902.f_539.f_3550 = Global_101186.f_1902.f_539.f_3549;
				}
				Global_101186.f_1902.f_539.f_3551 = iVar0;
				Global_101186.f_1902.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101186.f_1902.f_539.f_3549 != 145)
			{
				Global_101186.f_1902.f_539.f_3551 = Global_101186.f_1902.f_539.f_3549;
			}
			return;
		}
	}
	Global_101186.f_1902.f_539.f_3549 = 145;
}

bool func_45(int iParam0)
{
	return iParam0 < 3;
}

int func_46(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC1EDB61CE0A4B94E(uParam0))
	{
		iVar1 = unk_0x79469DA5833EACA8(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_47(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_47(int iParam0)
{
	if (func_45(iParam0))
	{
		return Global_101186.f_32651[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_48()
{
	int iVar0;
	
	iVar0 = func_49(&(Local_83.f_2), 0, 9, 0, 0);
	if (!iVar0 == 1)
	{
		return 0;
	}
	return 1;
}

int func_49(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_89121.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_53(0))
		{
			return 0;
		}
		Global_35706++;
		*uParam0 = Global_35706;
		unk_0xFEC8E17ADA862FEA(unk_0xBC628C78D8ECD5F1(), 0);
		Global_17118.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x0C174B9E4848D171(8);
		}
		Global_35742 = iParam2;
		Global_35704 = *uParam0;
		Global_35705 = iParam4;
		Global_35703 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35703 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35703)
			{
				if (Global_35709[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35704 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_51(iParam2))
		{
			return 0;
		}
		if (Global_35703 == 8)
		{
			return 0;
		}
		Global_35706++;
		*uParam0 = Global_35706;
		Global_35709[Global_35703 /*4*/] = Global_35706;
		Global_35709[Global_35703 /*4*/].f_1 = iParam1;
		Global_35709[Global_35703 /*4*/].f_2 = iParam2;
		Global_35709[Global_35703 /*4*/].f_3 = 0;
		Global_35703++;
		if (iParam4 != 0)
		{
			func_50(uParam0, iParam4);
		}
	}
	return 2;
}

void func_50(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35703 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35703)
	{
		if (Global_35709[iVar0 /*4*/] == *uParam0)
		{
			Global_35709[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_51(int iParam0)
{
	return func_52(iParam0, Global_35742);
}

int func_52(int iParam0, int iParam1)
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

int func_53(int iParam0)
{
	if (Global_35742 == 15)
	{
		return 0;
	}
	if (func_51(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_54(int iParam0)
{
	if (func_14(iParam0))
	{
		if (!unk_0xCFC04A38F256EE06(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_55()
{
	var uVar0;
	
	switch (iLocal_96)
	{
		case 0:
			if (func_116(0, -1, 0))
			{
				unk_0x310F6B4E168A8F5D(1);
				func_104();
				unk_0x5BC661D1FF0D731E(0);
				iLocal_101 = 1;
				bLocal_99 = false;
				bLocal_100 = false;
				iLocal_96 = 1;
			}
			break;
		
		case 1:
			if (func_69())
			{
				iLocal_96 = 2;
			}
			break;
		
		case 2:
			uVar0 = unk_0xBC628C78D8ECD5F1();
			unk_0x0C311FF9A3F34E72(uVar0, 0);
			unk_0x4E7DF84FE130E1D6(uVar0, 1, 0);
			func_59(0, 1, 1, 0);
			func_56(1, -1);
			iLocal_96 = 0;
			if (bLocal_99)
			{
				iLocal_82 = 3;
			}
			else
			{
				unk_0x5BC661D1FF0D731E(1);
				iLocal_82 = 1;
			}
			break;
	}
}

void func_56(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_58(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17257.f_7894)
	{
		unk_0x3DFBDB0A85A67077(15);
		Global_17257.f_7894 = 0;
	}
	unk_0x681D62E6F663F7E0(0f);
	if (Global_17257.f_5498[iVar0])
	{
		unk_0x035F40534E3C26BD(9, false);
		Global_17257.f_5498[iVar0] = 0;
	}
	if (Global_17257.f_5484[iVar0])
	{
		unk_0x0DBF9B65543A44DC("CommonMenu");
		Global_17257.f_5484[iVar0] = 0;
	}
	if (Global_17257.f_5491[iVar0])
	{
		unk_0x0DBF9B65543A44DC("MPShopSale");
		Global_17257.f_5491[iVar0] = 0;
	}
	if (bParam0)
	{
		func_57(&(Global_17257.f_5530[iVar0 /*10*/]));
		Global_17257.f_5591[iVar0] = 0;
	}
	else
	{
		Global_17257.f_5591[iVar0] = 0;
	}
}

void func_57(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x6A87921801178186(*uParam0))
		{
			unk_0x0E4537BE1D04DAC7(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_58(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0x17CC0D5008835470() && unk_0x992E302DC36A4251())
		{
			iParam2 = unk_0xE56012EB15CF2833();
		}
	}
	StringCopy(&cVar0, unk_0x47B34031F915C179(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0x9F7CDE7B20BCB675(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_17257.f_5591[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_17257.f_5591[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_17257.f_5591[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_59(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x0E7D7A2D525FF714(unk_0xE0BDAFA1A39552D6());
		unk_0x1B9B62BFD193B2DC(unk_0xE0BDAFA1A39552D6(), 1);
		unk_0xA7151FEC760FCDE4(unk_0xE0BDAFA1A39552D6(), 1);
		func_68(1);
		unk_0xBB767E7625FB7ED6();
		unk_0xCE3C0BD3070B4018();
		if (Global_14413.f_1 > 3)
		{
			if (unk_0x1FB728BC68674B71())
			{
				unk_0xC48487554D051523(0);
			}
			if (!func_67())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_66(1, iParam3, iParam2, 0);
		Global_55786 = 1;
		Global_68092 = 1;
		Global_69519 = 1;
	}
	else
	{
		func_68(0);
		unk_0x8355AD5145EA3FA6();
		Global_55786 = 0;
		if (bParam1)
		{
			unk_0xEC46418588F2FEF5();
		}
		unk_0x1B9B62BFD193B2DC(unk_0xE0BDAFA1A39552D6(), 0);
		unk_0xA7151FEC760FCDE4(unk_0xE0BDAFA1A39552D6(), 0);
		func_66(0, iParam3, iParam2, 0);
		if (unk_0x17CC0D5008835470())
		{
			if (((!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()) && !func_64(unk_0xE0BDAFA1A39552D6())) && !func_61(unk_0xE0BDAFA1A39552D6(), 0)) && !func_60())
			{
				unk_0xB2C123C54D84E6A7(unk_0x06736567F820A39E(), 0);
			}
		}
		else if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()) && !func_64(unk_0xE0BDAFA1A39552D6()))
		{
			unk_0xB2C123C54D84E6A7(unk_0x06736567F820A39E(), 0);
		}
		Global_69519 = 0;
	}
}

bool func_60()
{
	return unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_39.f_18, 14);
}

bool func_61(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xE0BDAFA1A39552D6())
	{
		bVar0 = func_62(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1587816[iParam0 /*444*/].f_195 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xA27C9E8196C79D22(iParam0))
		{
			bVar0 = unk_0xF749B19A9F9B3DBF(iParam0) == 8;
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
	if (Global_1315891[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312741[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_63()
{
	return Global_1312747;
}

int func_64(int iParam0)
{
	if (func_61(iParam0, 0))
	{
		return 1;
	}
	if (func_65())
	{
		if (iParam0 == unk_0xE0BDAFA1A39552D6())
		{
			return 1;
		}
	}
	if (unk_0x7DA173D4FD42F36B(Global_2418529[iParam0 /*313*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_65()
{
	return unk_0x7DA173D4FD42F36B(Global_2359301, 3);
}

int func_66(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x55812CD5A331E1F8())
	{
		if (unk_0x640152C8EE973B5B() != iParam0 && uParam2)
		{
			unk_0x1ECC86329E4F43F8(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_67()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_68(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xE27C8E42A97895CF(&Global_2283, 13);
	}
	else
	{
		unk_0x99BCB15F954AF579(&Global_2283, 13);
	}
}

int func_69()
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
	
	func_103(&iVar0, &iVar1, &uVar2, &uVar3, 0);
	unk_0xD3D729A98DEDDAFB(2, 201);
	unk_0xD3D729A98DEDDAFB(2, 202);
	unk_0xD3D729A98DEDDAFB(2, 188);
	unk_0xD3D729A98DEDDAFB(2, 187);
	if (iLocal_98 != 0)
	{
		if (unk_0x83666F9FB8FEBD4B() > 800 || (((iVar1 > -64 && iVar1 < 64) && iVar0 > -64) && iVar0 < 64))
		{
			iLocal_98 = 0;
		}
		else
		{
			iVar0 = 0;
			iVar1 = 0;
		}
	}
	bVar4 = (iVar1 < -64 || unk_0xD471C64C0898A7BF(2, 188));
	bVar5 = (iVar1 > 64 || unk_0xD471C64C0898A7BF(2, 187));
	bVar6 = unk_0xD471C64C0898A7BF(2, 201);
	bVar7 = unk_0xD471C64C0898A7BF(2, 202);
	bVar8 = (iVar1 < -64 || iVar1 > 64);
	if (bVar6)
	{
		if (iLocal_97 == 1)
		{
			bLocal_100 = true;
		}
		else
		{
			bLocal_100 = false;
		}
		bLocal_99 = true;
		return 1;
	}
	else if (bVar7)
	{
		iLocal_194 = 0;
		bLocal_99 = false;
		return 1;
	}
	else
	{
		if (bVar5)
		{
			if (iLocal_97 == 0)
			{
				iLocal_97 = 1;
			}
			else if (iLocal_97 == 0)
			{
			}
		}
		else if (bVar4)
		{
			if (iLocal_97 == 1)
			{
				iLocal_97 = 0;
			}
			else if (iLocal_97 == 1)
			{
			}
		}
		if (bVar5 || bVar4)
		{
			if (bVar8)
			{
				unk_0xC1B1E9A034A63A62(0);
				iLocal_98 = 1;
			}
			func_102(iLocal_97, 1, 1);
		}
	}
	func_70(1, -1, 1, 0, 1, -1082130432, 0, 0);
	return 0;
}

void func_70(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
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
	int iVar46;
	int iVar47;
	int iVar48;
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
	float fVar60;
	float fVar61;
	float fVar62;
	int iVar63;
	float fVar64;
	float fVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	
	if (!func_58(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_99(0, bParam6))
	{
		return;
	}
	unk_0xF2C2AA10F5F1DDB2(76, 84);
	unk_0x44D592DED3924902(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	if (Global_17257)
	{
		if (func_97(29, 1, 1, &fVar35, &fVar36, bParam7))
		{
			fVar55 = fVar36;
			fVar55 = (fVar55 + 0f);
		}
		else
		{
			Global_17257 = 0;
		}
	}
	if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_1)) == unk_0x9F7CDE7B20BCB675("HIDE"))
	{
		fVar56 = Global_17255;
	}
	else
	{
		fVar56 = (((Global_17255 + fVar55) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_17256;
	}
	fVar59 = 1f;
	if (bParam7)
	{
		unk_0x4C6D647F0AAA9B5B(&iVar57, &iVar58);
		fVar60 = unk_0x5050DF014C100DFF(0);
		if (func_96())
		{
			iVar57 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar58) * fVar60));
		}
		fVar61 = (unk_0xBBDA792448DB5A89(iVar57) / unk_0xBBDA792448DB5A89(iVar58));
		fVar59 = (fVar61 / fVar60);
		if (func_96())
		{
			fVar59 = 1f;
		}
		iVar57 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar57) / fVar59));
		iVar58 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar58) / fVar59));
	}
	else
	{
		unk_0x50BF5AC65F0CC3B4(&iVar57, &iVar58);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17257.f_5598)
		{
			if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_1)) == unk_0x9F7CDE7B20BCB675("HIDE"))
			{
				fVar49 = Global_17255;
			}
			else
			{
				if (Global_17257)
				{
					unk_0x35CAAB894D008C00(func_95(29), func_93(29, 1), (Global_17254 + (fParam5 * 0.5f)), (Global_17255 + ((fVar55 - 0f) * 0.5f)), fParam5, (fVar55 - 0f), 0f, 255, 255, 255, 255, 0);
				}
				if (Global_17257.f_7864)
				{
					iVar1 = Global_17257.f_7860;
					iVar2 = Global_17257.f_7861;
					iVar3 = Global_17257.f_7862;
					iVar4 = Global_17257.f_7863;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_92(Global_17254, (Global_17255 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_17255 + fVar55) + 0.034722f) + 0f);
				if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_1)) != 0)
				{
					func_91();
					unk_0x049CCB8537E77D8B(&(Global_17257.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17257.f_68)
					{
						if (Global_17257.f_5[iVar14] == 2)
						{
							unk_0xD92C45283BCDA624(Global_17257.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17257.f_5[iVar14] == 3)
						{
							unk_0xCB4A32D75D69162C(Global_17257.f_14[iVar16], Global_17257.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17257.f_5[iVar14] == 1)
						{
							unk_0x4C5D86B5B659C953(&(Global_17257.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17257.f_5[iVar14] == 8)
						{
							unk_0x4C5D86B5B659C953(&(Global_17257.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17257.f_5[iVar14] == 5)
						{
							unk_0x9C174A0D56FFB64A(&(Global_17257.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17257.f_5[iVar14] == 6)
						{
							unk_0x4C5D86B5B659C953(&(Global_17257.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17257.f_5[iVar14] == 7)
						{
							unk_0x9C174A0D56FFB64A(&(Global_17257.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0xBF7878373D9EA4E7((Global_17254 + 0.00390625f), ((Global_17255 + fVar55) + 0.00416664f), 0);
				}
				if (Global_17257.f_5601 > Global_17257.f_5095)
				{
					if (Global_17257.f_5604 != 0)
					{
						func_91();
						func_89((((Global_17254 + fParam5) - 0.00390625f) - func_90("CM_ITEM_COUNT", Global_17257.f_5604, Global_17257.f_5603)), ((Global_17255 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_17257.f_5604, Global_17257.f_5603);
					}
				}
			}
			iVar6 = Global_17257.f_5605;
			iVar9 = 0;
			fVar62 = fVar49;
			if (Global_17257.f_7874)
			{
				iVar1 = Global_17257.f_7870;
				iVar2 = Global_17257.f_7871;
				iVar3 = Global_17257.f_7872;
				iVar4 = Global_17257.f_7873;
			}
			else
			{
				unk_0xD06A5371300291A8(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17257.f_5095 && iVar6 <= Global_17257.f_5088)
			{
				if (iVar6 >= 0)
				{
					if (Global_17257.f_5355[iVar6])
					{
						if (Global_17257.f_5226[iVar6] && iVar6 != Global_17257.f_5605)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_17257.f_5612[iVar6] != 0f)
						{
							fVar54 = Global_17257.f_5612[iVar6];
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
					if (Global_17257.f_5088 <= 1)
					{
						Global_17257.f_5088++;
					}
					iVar52 = 1;
				}
			}
			unk_0x35CAAB894D008C00("CommonMenu", "Gradient_Bgd", (Global_17254 + (fParam5 * 0.5f)), ((fVar62 + ((fVar49 - fVar62) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar62), 0f, 255, 255, 255, 255, 0);
			if (Global_17257.f_5601 > Global_17257.f_5095)
			{
				if (Global_17257.f_7879)
				{
					iVar1 = Global_17257.f_7875;
					iVar2 = Global_17257.f_7876;
					iVar3 = Global_17257.f_7877;
					iVar4 = Global_17257.f_7878;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_92(Global_17254, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var37 = { unk_0xDD8A228E30DDC5CF("CommonMenu", "shop_arrows_upANDdown") };
				Var37.f_0 = (Var37.f_0 * (0.5f / fVar59));
				Var37.f_1 = (Var37.f_1 * (0.5f / fVar59));
				if (Global_17257.f_7892)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0xD06A5371300291A8(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x35CAAB894D008C00("CommonMenu", "shop_arrows_upANDdown", (Global_17254 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((Var37.f_0 / 1280f) * fVar59), ((Var37.f_1 / 720f) * fVar59), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_4562)) != 0 && Global_17257.f_4636 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17254 + 0.0046875f);
				if (Global_17257.f_4638 != 0)
				{
					func_97(Global_17257.f_4638, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17254 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_88(fVar41);
				unk_0x60AE73633EFC8075(&(Global_17257.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17257.f_4632)
				{
					if (Global_17257.f_4566[iVar14] == 2)
					{
						unk_0xD92C45283BCDA624(Global_17257.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17257.f_4566[iVar14] == 3)
					{
						unk_0xCB4A32D75D69162C(Global_17257.f_4575[iVar16], Global_17257.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17257.f_4566[iVar14] == 1)
					{
						unk_0x4C5D86B5B659C953(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 5)
					{
						unk_0x9C174A0D56FFB64A(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 6)
					{
						unk_0x4C5D86B5B659C953(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 7)
					{
						unk_0x9C174A0D56FFB64A(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xB6CF857C474AB165(fVar41, (fVar49 + 0.00277776f));
				unk_0xD06A5371300291A8(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_92(Global_17254, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17257.f_7884)
				{
					iVar1 = Global_17257.f_7880;
					iVar2 = Global_17257.f_7881;
					iVar3 = Global_17257.f_7882;
					iVar4 = Global_17257.f_7883;
				}
				else
				{
					unk_0xD06A5371300291A8(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x35CAAB894D008C00("CommonMenu", "Gradient_Bgd", (Global_17254 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0xC615314B52B8C80D(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xC615314B52B8C80D(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_88(fVar41);
				unk_0x049CCB8537E77D8B(&(Global_17257.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17257.f_4632)
				{
					if (Global_17257.f_4566[iVar14] == 2)
					{
						unk_0xD92C45283BCDA624(Global_17257.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17257.f_4566[iVar14] == 3)
					{
						unk_0xCB4A32D75D69162C(Global_17257.f_4575[iVar16], Global_17257.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17257.f_4566[iVar14] == 1)
					{
						unk_0x4C5D86B5B659C953(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 5)
					{
						unk_0x9C174A0D56FFB64A(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 6)
					{
						unk_0x4C5D86B5B659C953(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 7)
					{
						unk_0x9C174A0D56FFB64A(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 8)
					{
						unk_0x4C5D86B5B659C953(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xBF7878373D9EA4E7(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_17257.f_4638 != 0)
				{
					func_97(Global_17257.f_4638, 1, 1, &fVar35, &fVar36, bParam7);
					func_87(Global_17257.f_4638, 1, &iVar46, &iVar47, &iVar48);
					unk_0x35CAAB894D008C00(func_95(Global_17257.f_4638), func_93(Global_17257.f_4638, 1), ((Global_17254 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0xC615314B52B8C80D(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17257.f_4636 > 0)
				{
					if ((unk_0x1ADBAAC322D61F73() - Global_17257.f_4637) > Global_17257.f_4636)
					{
						StringCopy(&(Global_17257.f_4562), "", 16);
						Global_17257.f_4636 = -1;
					}
				}
			}
			if (unk_0x9F7CDE7B20BCB675(&(Global_2566711.f_21)) != 0 && Global_2566711.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17254 + 0.0046875f);
				if (Global_2566711.f_67 != 0)
				{
					func_97(Global_2566711.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17254 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_88(fVar41);
				unk_0x60AE73633EFC8075(&(Global_2566711.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2566711.f_61)
				{
					if (Global_2566711.f_25[iVar14] == 2)
					{
						unk_0xD92C45283BCDA624(Global_2566711.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2566711.f_25[iVar14] == 3)
					{
						unk_0xCB4A32D75D69162C(Global_2566711.f_34[iVar16], Global_2566711.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2566711.f_25[iVar14] == 1)
					{
						unk_0x4C5D86B5B659C953(&(Global_2566711.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2566711.f_25[iVar14] == 5)
					{
						unk_0x9C174A0D56FFB64A(&(Global_2566711.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2566711.f_25[iVar14] == 6)
					{
						unk_0x4C5D86B5B659C953(&(Global_2566711.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2566711.f_25[iVar14] == 7)
					{
						unk_0x9C174A0D56FFB64A(&(Global_2566711.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2566711.f_25[iVar14] == 8)
					{
						unk_0x4C5D86B5B659C953(&(Global_2566711.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xB6CF857C474AB165(fVar41, (fVar49 + 0.00277776f));
				unk_0xD06A5371300291A8(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_92(Global_17254, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17257.f_7884)
				{
					iVar1 = Global_17257.f_7880;
					iVar2 = Global_17257.f_7881;
					iVar3 = Global_17257.f_7882;
					iVar4 = Global_17257.f_7883;
				}
				else
				{
					unk_0xD06A5371300291A8(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x35CAAB894D008C00("CommonMenu", "Gradient_Bgd", (Global_17254 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0xC615314B52B8C80D(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xC615314B52B8C80D(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_88(fVar41);
				unk_0x049CCB8537E77D8B(&(Global_2566711.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2566711.f_61)
				{
					if (Global_2566711.f_25[iVar14] == 2)
					{
						unk_0xD92C45283BCDA624(Global_2566711.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2566711.f_25[iVar14] == 3)
					{
						unk_0xCB4A32D75D69162C(Global_2566711.f_34[iVar16], Global_2566711.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2566711.f_25[iVar14] == 1)
					{
						unk_0x4C5D86B5B659C953(&(Global_2566711.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2566711.f_25[iVar14] == 8)
					{
						unk_0x4C5D86B5B659C953(&(Global_2566711.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2566711.f_25[iVar14] == 5)
					{
						unk_0x9C174A0D56FFB64A(&(Global_2566711.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2566711.f_25[iVar14] == 6)
					{
						unk_0x4C5D86B5B659C953(&(Global_2566711.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2566711.f_25[iVar14] == 7)
					{
						unk_0x9C174A0D56FFB64A(&(Global_2566711.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xBF7878373D9EA4E7(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_2566711.f_67 != 0)
				{
					func_97(Global_2566711.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					func_87(Global_2566711.f_67, 1, &iVar46, &iVar47, &iVar48);
					unk_0x35CAAB894D008C00(func_95(Global_2566711.f_67), func_93(Global_2566711.f_67, 1), ((Global_17254 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0xC615314B52B8C80D(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_2566711.f_65 > 0)
				{
					if ((unk_0x1ADBAAC322D61F73() - Global_2566711.f_66) > Global_2566711.f_65)
					{
						StringCopy(&(Global_2566711.f_21), "", 16);
						Global_2566711.f_65 = -1;
					}
				}
			}
			func_82(iVar57, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			unk_0xF2C2AA10F5F1DDB2(76, 84);
			unk_0x44D592DED3924902(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17257.f_5598)
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
			iVar63 = Global_17257.f_5088;
			if (Global_17257.f_5599)
			{
				iVar63 = (Global_17257.f_5602 - 1);
			}
			fVar64 = 0f;
			fVar65 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar63)
			{
				fVar54 = 0.034722f;
				if (Global_17257.f_5612[iVar6] != 0f)
				{
					fVar54 = Global_17257.f_5612[iVar6];
				}
				if (Global_17257.f_5599)
				{
					iVar6 = Global_17257.f_7520[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar32 = false;
				if (iVar6 >= Global_17257.f_5605 && iVar9 < Global_17257.f_5095)
				{
					bVar32 = true;
					if (Global_17257.f_5606 == iVar6)
					{
						fVar65 = fVar64;
					}
					if (Global_17257.f_5226[iVar6])
					{
						iVar12++;
					}
					fVar34 = (((fVar56 + fVar64) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_17257.f_5746[iVar6] = fVar34;
				fVar33 = (Global_17254 + 0.0046875f);
				bVar40 = false;
				bVar31 = Global_17257.f_5606 == iVar6;
				if ((bVar31 && iVar5 == 1) && bVar32)
				{
					iVar66 = 255;
					iVar67 = 255;
					iVar68 = 255;
					iVar69 = 255;
					if (Global_17257.f_7886)
					{
						unk_0xD06A5371300291A8(Global_17257.f_7885, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					else
					{
						unk_0xD06A5371300291A8(1, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					unk_0x35CAAB894D008C00("CommonMenu", "Gradient_Nav", (Global_17254 + (fParam5 * 0.5f)), (((fVar56 + fVar65) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar66, iVar67, iVar68, iVar69, 0);
					Global_17257.f_5744 = fVar34;
				}
				if (iVar52 && iVar7 == iVar63)
				{
					func_80(bVar31, 1, 0, 0, 0, 0);
					unk_0x049CCB8537E77D8B("DFLT_MNU_OPT");
					unk_0xBF7878373D9EA4E7(fVar33, fVar34, 0);
					bVar40 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_17257.f_5096)
					{
						if (unk_0x7DA173D4FD42F36B(Global_17257.f_4959[iVar6], iVar8) || Global_17257.f_4926[iVar8] == 5)
						{
							if (Global_17257.f_5599)
							{
								iVar19 = Global_17257.f_7531[((iVar9 * Global_17257.f_5096) + iVar8)];
								iVar20 = Global_17257.f_7572[((iVar9 * Global_17257.f_5096) + iVar8)];
								iVar21 = Global_17257.f_7613[((iVar9 * Global_17257.f_5096) + iVar8)];
								iVar22 = Global_17257.f_7654[((iVar9 * Global_17257.f_5096) + iVar8)];
								iVar23 = Global_17257.f_7695[((iVar9 * Global_17257.f_5096) + iVar8)];
							}
							else
							{
								Global_17257.f_7531[((iVar9 * Global_17257.f_5096) + iVar8)] = iVar19;
								Global_17257.f_7572[((iVar9 * Global_17257.f_5096) + iVar8)] = iVar20;
								Global_17257.f_7613[((iVar9 * Global_17257.f_5096) + iVar8)] = iVar21;
								Global_17257.f_7654[((iVar9 * Global_17257.f_5096) + iVar8)] = iVar22;
								Global_17257.f_7695[((iVar9 * Global_17257.f_5096) + iVar8)] = iVar23;
							}
							iVar70 = 0;
							bVar53 = false;
							if (Global_17257.f_5878[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17257.f_5875[0])
								{
									bVar53 = true;
									iVar70 = 0;
								}
							}
							if (Global_17257.f_5878[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17257.f_5875[1])
								{
									bVar53 = true;
									iVar70 = 1;
								}
							}
							if (Global_17257.f_4932[iVar8] != -1f)
							{
								fVar33 = ((Global_17254 + 0.0046875f) + Global_17257.f_4932[iVar8]);
							}
							if ((iVar8 < 4 && Global_17257.f_4932[iVar8 + 1] != -1f) && fVar33 < Global_17257.f_4932[iVar8 + 1])
							{
								fVar45 = (Global_17257.f_4932[iVar8 + 1] - fVar33);
							}
							else
							{
								fVar45 = (((Global_17254 + Global_17256) - 0.0046875f) - fVar33);
							}
							if ((Global_17257.f_4945[iVar8] && Global_17257.f_5741) && bVar31)
							{
								bVar51 = true;
							}
							else
							{
								bVar51 = false;
							}
							switch (Global_17257.f_4926[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17257.f_5599)
										{
											fVar42 = 0f;
											fVar43 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
											{
												bVar50 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
													{
														bVar50 = true;
													}
													iVar14++;
												}
												func_80(bVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], bVar53, iVar70, bVar50);
												unk_0x9974146F2F7730D1(&(Global_17257.f_73[iVar24 /*6*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x4C5D86B5B659C953(&(Global_17257.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x4C5D86B5B659C953(&(Global_17257.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5)
												{
													if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x9C174A0D56FFB64A(&(Global_2444596[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 6)
												{
													if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x4C5D86B5B659C953(&(Global_2444596[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 7)
												{
													if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x9C174A0D56FFB64A(&(Global_2444596[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 2)
												{
													if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xD92C45283BCDA624(Global_17257.f_3918[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 3)
												{
													if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xCB4A32D75D69162C(Global_17257.f_4175[(iVar21 + iVar27)], Global_17257.f_4304[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
											{
												fVar42 = unk_0x4D3BCE911B81A969(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_97(Global_17257.f_4433[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar43 = (fVar43 + fVar35);
														if (iVar14 > 0)
														{
															fVar43 = (fVar43 - (0.00078125f * 4f));
														}
														if (Global_17257.f_4433[(iVar22 + iVar14)] == 2 || Global_17257.f_4433[(iVar22 + iVar14)] == 48)
														{
															fVar43 = (fVar43 - (0.00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar41 = 0f;
											if (Global_17257.f_4953[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - (fVar42 + fVar43)) + (0.00078125f * 1f)));
											}
											else if (Global_17257.f_4953[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - ((fVar42 + fVar43) * 0.5f)));
											}
											Global_17257.f_7736[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar41;
											Global_17257.f_7777[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar42;
											Global_17257.f_7818[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar43;
										}
										else
										{
											fVar41 = Global_17257.f_7736[((iVar9 * Global_17257.f_5096) + iVar8)];
											fVar42 = Global_17257.f_7777[((iVar9 * Global_17257.f_5096) + iVar8)];
											fVar43 = Global_17257.f_7818[((iVar9 * Global_17257.f_5096) + iVar8)];
										}
										if (bVar51)
										{
											if (func_97(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17257.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_97(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_87(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0x35CAAB894D008C00(func_95(26), func_93(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_97(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_97(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_87(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0x35CAAB894D008C00(func_95(27), func_93(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar30 = 0;
										if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											func_80(bVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], bVar53, 0, bVar50);
											if (Global_17257.f_7890 && Global_17257.f_7891 == iVar6)
											{
												func_79(bVar31);
											}
											unk_0x049CCB8537E77D8B(&(Global_17257.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x4C5D86B5B659C953(&(Global_17257.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar30 = 1;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x4C5D86B5B659C953(&(Global_17257.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar30 = 8;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x9C174A0D56FFB64A(&(Global_2444596[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 5;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x4C5D86B5B659C953(&(Global_2444596[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x9C174A0D56FFB64A(&(Global_2444596[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xD92C45283BCDA624(Global_17257.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar30 = 2;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xCB4A32D75D69162C(Global_17257.f_4175[(iVar21 + iVar27)], Global_17257.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar30 = 3;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_17257.f_4433[(iVar22 + iVar28)] == 2 || Global_17257.f_4433[(iVar22 + iVar28)] == 48)
												{
													if (func_97(Global_17257.f_4433[(iVar22 + iVar28)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_97(Global_17257.f_4433[(iVar22 + iVar28)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_87(Global_17257.f_4433[(iVar22 + iVar28)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17257.f_4953[iVar8] == 2)
															{
																unk_0x35CAAB894D008C00(func_95(Global_17257.f_4433[(iVar22 + iVar28)]), func_93(Global_17257.f_4433[(iVar22 + iVar28)], bVar31), (((fVar33 + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0x35CAAB894D008C00(func_95(Global_17257.f_4433[(iVar22 + iVar28)]), func_93(Global_17257.f_4433[(iVar22 + iVar28)], bVar31), ((fVar33 + fVar41) - (0.00078125f * 8f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
										if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
										{
											if (iVar30 == 4 && Global_17257.f_4953[iVar8] == 2)
											{
												unk_0xBF7878373D9EA4E7(((fVar33 + fVar41) + (0.00078125f * 7f)), fVar34, 0);
											}
											else
											{
												unk_0xBF7878373D9EA4E7((fVar33 + fVar41), fVar34, 0);
											}
										}
										if (iVar28 > 0)
										{
											fVar41 = (fVar41 + (6f * 0.00078125f));
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_17257.f_4433[(iVar22 + iVar14)] != 2 && Global_17257.f_4433[(iVar22 + iVar14)] != 48)
												{
													if (func_97(Global_17257.f_4433[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_97(Global_17257.f_4433[(iVar22 + iVar14)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_87(Global_17257.f_4433[(iVar22 + iVar14)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17257.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0x35CAAB894D008C00(func_95(Global_17257.f_4433[(iVar22 + iVar14)]), func_93(Global_17257.f_4433[(iVar22 + iVar14)], bVar31), (Global_17254 + (fVar35 * 0.5f)), (((fVar34 + 0.00277776f) + (fVar36 * 0.5f)) - (0.00078125f * 11f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else if (Global_17257.f_4953[iVar8] == 2)
															{
																unk_0x35CAAB894D008C00(func_95(Global_17257.f_4433[(iVar22 + iVar14)]), func_93(Global_17257.f_4433[(iVar22 + iVar14)], bVar31), ((((fVar33 + fVar41) + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0x35CAAB894D008C00(func_95(Global_17257.f_4433[(iVar22 + iVar14)]), func_93(Global_17257.f_4433[(iVar22 + iVar14)], bVar31), (((fVar33 + fVar41) + fVar42) - (0.00078125f * 12f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
										if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17257.f_5599)
										{
											func_80(bVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], bVar53, 0, 0);
											if (Global_17257.f_7890 && Global_17257.f_7891 == iVar6)
											{
												func_79(bVar31);
											}
											unk_0x9974146F2F7730D1("NUMBER");
											unk_0xD92C45283BCDA624(Global_17257.f_3918[iVar20]);
											fVar42 = unk_0x4D3BCE911B81A969(1);
											fVar41 = 0f;
											if (Global_17257.f_4953[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17257.f_4953[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17257.f_7736[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar41;
											Global_17257.f_7777[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17257.f_7736[((iVar9 * Global_17257.f_5096) + iVar8)];
											fVar42 = Global_17257.f_7777[((iVar9 * Global_17257.f_5096) + iVar8)];
										}
										if (bVar51)
										{
											if (func_97(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17257.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_97(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_87(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0x35CAAB894D008C00(func_95(26), func_93(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_97(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_97(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_87(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0x35CAAB894D008C00(func_95(27), func_93(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_80(bVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], bVar53, 0, 0);
										func_78((fVar33 + fVar41), fVar34, "NUMBER", Global_17257.f_3918[iVar20], 0);
									}
									bVar40 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17257.f_5599)
										{
											func_80(bVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], bVar53, 0, 0);
											if (Global_17257.f_7890 && Global_17257.f_7891 == iVar6)
											{
												func_79(bVar31);
											}
											unk_0x9974146F2F7730D1("NUMBER");
											unk_0xCB4A32D75D69162C(Global_17257.f_4175[iVar21], Global_17257.f_4304[iVar21]);
											fVar42 = unk_0x4D3BCE911B81A969(1);
											fVar41 = 0f;
											if (Global_17257.f_4953[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17257.f_4953[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17257.f_7736[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar41;
											Global_17257.f_7777[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17257.f_7736[((iVar9 * Global_17257.f_5096) + iVar8)];
											fVar42 = Global_17257.f_7777[((iVar9 * Global_17257.f_5096) + iVar8)];
										}
										if (bVar51)
										{
											if (func_97(26, 1, 0, &fVar35, &fVar36, 0))
											{
												if (Global_17257.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_97(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_87(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0x35CAAB894D008C00(func_95(26), func_93(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_97(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_97(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_87(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0x35CAAB894D008C00(func_95(27), func_93(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_80(bVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], bVar53, 0, 0);
										func_77((fVar33 + fVar41), fVar34, "NUMBER", Global_17257.f_4175[iVar21], Global_17257.f_4304[iVar21]);
									}
									bVar40 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar32)
									{
										if (func_97(Global_17257.f_4433[iVar22], bVar31, 0, &fVar35, &fVar36, bParam7))
										{
											if (!Global_17257.f_5599)
											{
												fVar43 = fVar35;
												fVar41 = 0f;
												if (Global_17257.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 + ((fVar45 - fVar43) + (0.00078125f * 1f)));
												}
												else if (Global_17257.f_4953[iVar8] == 0)
												{
													fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar43 * 0.5f)));
												}
												Global_17257.f_7736[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar41;
												Global_17257.f_7818[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar43;
											}
											else
											{
												fVar41 = Global_17257.f_7736[((iVar9 * Global_17257.f_5096) + iVar8)];
												fVar43 = Global_17257.f_7818[((iVar9 * Global_17257.f_5096) + iVar8)];
											}
											if (bVar51)
											{
												if (func_97(26, 1, 0, &fVar35, &fVar36, bParam7))
												{
													if (Global_17257.f_4953[iVar8] == 2)
													{
														fVar41 = (fVar41 - (fVar35 * 2f));
													}
													fVar44 = (fVar35 * 0.5f);
													if (func_97(26, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_87(26, 1, &iVar46, &iVar47, &iVar48);
														unk_0x35CAAB894D008C00(func_95(26), func_93(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
												if (func_97(27, 1, 0, &fVar35, &fVar36, bParam7))
												{
													fVar41 = (fVar41 + fVar35);
													fVar44 = (fVar35 * 0.5f);
													if (func_97(27, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_87(27, 1, &iVar46, &iVar47, &iVar48);
														unk_0x35CAAB894D008C00(func_95(27), func_93(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
											}
											if (func_97(Global_17257.f_4433[iVar22], bVar31, 1, &fVar35, &fVar36, bParam7))
											{
												func_87(Global_17257.f_4433[iVar22], bVar31, &iVar46, &iVar47, &iVar48);
												unk_0x35CAAB894D008C00(func_95(Global_17257.f_4433[iVar22]), func_93(Global_17257.f_4433[iVar22], bVar31), ((fVar33 + fVar41) + (fVar35 * 0.5f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), (fVar35 * func_76(Global_17257.f_4433[iVar22])), (fVar36 * func_76(Global_17257.f_4433[iVar22])), 0f, iVar46, iVar47, iVar48, 255, 0);
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
							if (Global_17257.f_4926[iVar8] == 5)
							{
								if (Global_17257.f_4938[iVar8] > 0.05f)
								{
									fVar33 = (fVar33 + Global_17257.f_4938[iVar8]);
								}
								else
								{
									fVar33 = (fVar33 + 0.05f);
								}
							}
							else
							{
								fVar33 = (fVar33 + Global_17257.f_4938[iVar8]);
								if (Global_17257.f_4945[iVar8])
								{
									if (func_97(26, 1, 1, &fVar35, &fVar36, bParam7))
									{
										fVar33 = (fVar33 - fVar35);
									}
								}
							}
						}
						else
						{
							fVar33 = (fVar33 + Global_17257.f_4938[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar40)
				{
					if (bVar32)
					{
						Global_17257.f_7520[iVar9] = iVar6;
						Global_17257.f_5607 = iVar6;
						iVar9++;
						if (Global_17257.f_5226[iVar6])
						{
							iVar13++;
						}
						if (Global_17257.f_5612[iVar6] != 0f)
						{
							fVar64 = (fVar64 + Global_17257.f_5612[iVar6]);
						}
						else
						{
							fVar64 = (fVar64 + 0.034722f);
						}
					}
					if (!Global_17257.f_5598)
					{
						Global_17257.f_5355[iVar6] = 1;
						if (Global_17257.f_5097[iVar6])
						{
							if (bVar31)
							{
								Global_17257.f_5604 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar31)
							{
								Global_17257.f_5604 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17257.f_5598)
			{
				Global_17257.f_5600 = ((fVar56 + fVar64) + (0.00277776f * IntToFloat(iVar12)));
				Global_17257.f_5603 = iVar11;
				Global_17257.f_5601 = iVar10;
				Global_17257.f_5598 = 1;
			}
		}
		iVar5++;
	}
	if (!Global_17257.f_5599)
	{
		Global_17257.f_5602 = iVar9;
		Global_17257.f_5599 = 1;
	}
	Global_17257.f_5743 = fVar49;
	Global_17257.f_5745 = unk_0x1ADBAAC322D61F73();
	unk_0x681D62E6F663F7E0(Global_17257.f_5743);
	if (!Global_17257.f_7859)
	{
		func_72();
	}
	Global_17257.f_7859 = 0;
	if (bParam2)
	{
		unk_0x9AD5FF38501E64A6(10);
	}
	unk_0x9AD5FF38501E64A6(6);
	unk_0x9AD5FF38501E64A6(7);
	unk_0x9AD5FF38501E64A6(9);
	unk_0x9AD5FF38501E64A6(8);
	if (bParam0)
	{
		func_71(1);
	}
	unk_0x50E2186E0E0244C6();
}

void func_71(int iParam0)
{
	Global_1339962.f_932 = iParam0;
}

void func_72()
{
	if (!Global_14413.f_1 == 1)
	{
		if (func_75(0))
		{
			func_73(0);
		}
		unk_0xE27C8E42A97895CF(&Global_2284, 2);
	}
}

void func_73(int iParam0)
{
	if (Global_14571)
	{
		func_74(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		unk_0xE27C8E42A97895CF(&Global_2284, 16);
	}
	if (unk_0x1FB728BC68674B71())
	{
		unk_0xC48487554D051523(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0xE27C8E42A97895CF(&Global_2283, 30);
	}
	else
	{
		unk_0x99BCB15F954AF579(&Global_2283, 30);
	}
	if (!func_67())
	{
		Global_14413.f_1 = 3;
	}
}

void func_74(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_75(0))
		{
			Global_14571 = 1;
			if (bParam1)
			{
				unk_0x3919EC2F8BB0A522(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0x362168BE71696AF1(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0x362168BE71696AF1(Global_14350);
		}
		else
		{
			unk_0x362168BE71696AF1(Global_14341);
		}
	}
}

int func_75(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0x7DA173D4FD42F36B(Global_2283, 14))
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
	if (unk_0x98934607F8D0FB03(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

float func_76(int iParam0)
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
		case 50:
		case 43:
		case 44:
		case 45:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_77(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	unk_0x049CCB8537E77D8B(sParam2);
	unk_0xCB4A32D75D69162C(uParam3, uParam4);
	unk_0xBF7878373D9EA4E7(fParam0, fParam1, 0);
}

void func_78(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x049CCB8537E77D8B(sParam2);
	unk_0xD92C45283BCDA624(iParam3);
	unk_0xBF7878373D9EA4E7(fParam0, fParam1, iParam4);
}

void func_79(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0xD06A5371300291A8(Global_17257.f_7887[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0xD06A5371300291A8(Global_17257.f_7887[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0x0D1D7FED407C809B(iVar0, iVar1, iVar2, 255);
}

void func_80(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_81(Global_17257.f_5878[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0xD06A5371300291A8(1, &iVar0, &iVar1, &iVar2, &iVar3);
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
			unk_0x0D1D7FED407C809B(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0xD06A5371300291A8(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x0D1D7FED407C809B(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0xD06A5371300291A8(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x0D1D7FED407C809B(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0x0D1D7FED407C809B(155, 155, 155, 255);
		}
		else
		{
			unk_0x0D1D7FED407C809B(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0x0D1D7FED407C809B(0, 0, 0, unk_0xF34EE736CF047844((255f * 0.8f)));
		}
		else
		{
			unk_0xD06A5371300291A8(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0x0D1D7FED407C809B(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0x0D1D7FED407C809B(155, 155, 155, 255);
	}
	else
	{
		unk_0x0D1D7FED407C809B(155, 155, 155, 255);
	}
	unk_0xE885E03E7032CE54(0f, 0.35f);
	unk_0x5B16E11B05BF6A76(1);
	if (bParam5)
	{
		unk_0xE885E03E7032CE54(0f, 0.425f);
		unk_0xC5AD19EFC0358776(4);
	}
	else
	{
		unk_0xC5AD19EFC0358776(0);
	}
	unk_0x12CC1234B1B7BFC5(0f, 1f);
	unk_0x85221773A398B339(0);
	unk_0x8A3F04304575D6B1(0, 0, 0, 0, 0);
	unk_0x0E14ECE9ADDF3B75(0, 0, 0, 0, 0);
}

void func_81(int iParam0, var uParam1, var uParam2, var uParam3)
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

void func_82(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_58(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_99(bParam4, bParam8))
	{
		return;
	}
	if (func_85())
	{
		return;
	}
	if (unk_0x28E650D9BD8DC870())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_61(unk_0xE0BDAFA1A39552D6(), 0))
		{
			return;
		}
	}
	if (unk_0x55812CD5A331E1F8())
	{
		if (unk_0xB2E6456B1BD1C186() == 0 || unk_0x28E650D9BD8DC870())
		{
			return;
		}
	}
	if (Global_17257.f_4639 != 0)
	{
		if (unk_0x6FA5125835DABC72(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17257.f_4639)
			{
				if (Global_17257.f_4896[iVar1] != 345)
				{
					StringCopy(&(Global_17257.f_4641[iVar1 /*16*/]), unk_0xB1C8DCF6DB548BFD(2, Global_17257.f_4896[iVar1], 1), 64);
				}
				else if (Global_17257.f_4909[iVar1] != 32)
				{
					StringCopy(&(Global_17257.f_4641[iVar1 /*16*/]), unk_0x120C6DB43AE50AE1(2, Global_17257.f_4909[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_17257.f_4640 = 0;
		}
		if (!Global_17257.f_4640)
		{
			unk_0x2B859AD680983623(Global_17257.f_5530[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xE97F1B22C5E8989F();
			unk_0x2B859AD680983623(Global_17257.f_5530[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0xB62735E5BEC5ABF8((1f - (Global_17257.f_4951 / 100f)));
			unk_0xE97F1B22C5E8989F();
			if (unk_0x55812CD5A331E1F8())
			{
				unk_0x2B859AD680983623(Global_17257.f_5530[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x504EDFAAB39BF764(1);
				unk_0xE97F1B22C5E8989F();
			}
			iVar1 = 0;
			while (iVar1 < Global_17257.f_4639)
			{
				if (unk_0x9F7CDE7B20BCB675(&(Global_17257.f_4834[iVar1 /*4*/])) != unk_0x9F7CDE7B20BCB675("PREV"))
				{
					unk_0x2B859AD680983623(Global_17257.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x7AF283DA3BA078CD(iVar1);
					func_84(&(Global_17257.f_4641[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x9F7CDE7B20BCB675(&(Global_17257.f_4834[iVar2 /*4*/])) == unk_0x9F7CDE7B20BCB675("PREV"))
					{
						func_84(&(Global_17257.f_4641[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17257.f_4883[iVar1] == -1)
					{
						func_83(&(Global_17257.f_4834[iVar1 /*4*/]));
					}
					else
					{
						unk_0x7291E2F821FCFC04(&(Global_17257.f_4834[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x474EBA999C39492E(iParam2, 70);
						}
						else
						{
							unk_0xD92C45283BCDA624(iParam2);
						}
						unk_0xD6360E18957BCDD3();
					}
					if (unk_0x55812CD5A331E1F8())
					{
						if (Global_17257.f_4896[iVar1] != 345 && unk_0x7DA173D4FD42F36B(Global_17257.f_4922, iVar1))
						{
							unk_0x504EDFAAB39BF764(1);
							unk_0x7AF283DA3BA078CD(Global_17257.f_4896[iVar1]);
						}
						else
						{
							unk_0x504EDFAAB39BF764(0);
							unk_0x7AF283DA3BA078CD(345);
						}
					}
					unk_0xE97F1B22C5E8989F();
				}
				iVar1++;
			}
			if (unk_0x9F7CDE7B20BCB675(&(Global_2566711.f_16)) != unk_0x9F7CDE7B20BCB675(""))
			{
				unk_0x2B859AD680983623(Global_17257.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x7AF283DA3BA078CD(Global_17257.f_4639);
				func_84(&Global_2566711);
				if (Global_2566711.f_20 == -1)
				{
					func_83(&(Global_2566711.f_16));
				}
				else
				{
					unk_0x7291E2F821FCFC04(&(Global_2566711.f_16));
					if (bParam5)
					{
						unk_0x474EBA999C39492E(iParam2, 70);
					}
					else
					{
						unk_0xD92C45283BCDA624(iParam2);
					}
					unk_0xD6360E18957BCDD3();
				}
				unk_0xE97F1B22C5E8989F();
			}
			unk_0x2B859AD680983623(Global_17257.f_5530[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x7AF283DA3BA078CD(0);
			unk_0x7AF283DA3BA078CD(0);
			unk_0x7AF283DA3BA078CD(0);
			unk_0x7AF283DA3BA078CD(80);
			unk_0xE97F1B22C5E8989F();
			unk_0x2B859AD680983623(Global_17257.f_5530[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17257.f_4952)
			{
				unk_0x7AF283DA3BA078CD(1);
			}
			else
			{
				unk_0x7AF283DA3BA078CD(0);
			}
			unk_0xE97F1B22C5E8989F();
			Global_17257.f_4640 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17257.f_4639)
		{
			if (Global_17257.f_4883[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0x2B859AD680983623(Global_17257.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x7AF283DA3BA078CD(iVar1);
					unk_0x7291E2F821FCFC04(&(Global_17257.f_4834[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x474EBA999C39492E(iParam2, 70);
					}
					else
					{
						unk_0xD92C45283BCDA624(iParam2);
					}
					unk_0xD6360E18957BCDD3();
					unk_0xE97F1B22C5E8989F();
				}
			}
			iVar1++;
		}
		if (Global_2566711.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0x2B859AD680983623(Global_17257.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x7AF283DA3BA078CD(iVar1);
				unk_0x7291E2F821FCFC04(&(Global_2566711.f_16));
				if (bParam5)
				{
					unk_0x474EBA999C39492E(iParam2, 70);
				}
				else
				{
					unk_0xD92C45283BCDA624(iParam2);
				}
				unk_0xD6360E18957BCDD3();
				unk_0xE97F1B22C5E8989F();
			}
		}
		unk_0xF2C2AA10F5F1DDB2(76, 66);
		unk_0x44D592DED3924902(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17257.f_7894)
			{
				unk_0x038CBA517D66D25E(15, 0f, -0.0375f);
				Global_17257.f_7894 = 1;
			}
		}
		else if (Global_17257.f_7894)
		{
			unk_0x3DFBDB0A85A67077(15);
			Global_17257.f_7894 = 0;
		}
		unk_0x50E2186E0E0244C6();
		if (Global_17257.f_4925)
		{
			unk_0xF2C2AA10F5F1DDB2(82, 66);
			unk_0x44D592DED3924902(0f, 0f, 0f, 0f);
			unk_0x85DC3CB6F30C7FE7(Global_17257.f_5530[iVar0 /*10*/], Global_17257.f_4923, Global_17257.f_4924, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x50E2186E0E0244C6();
		}
		else
		{
			unk_0xA5C0BA1772140603(Global_17257.f_5530[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_83(var uParam0)
{
	unk_0x7291E2F821FCFC04(uParam0);
	unk_0xD6360E18957BCDD3();
}

void func_84(var uParam0)
{
	unk_0x8C64B9C850F2EFB2(uParam0);
}

int func_85()
{
	struct<3> Var0;
	
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	if (func_86())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0x3919EC2F8BB0A522(&Var0);
		if (Global_14358 == 0)
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

int func_86()
{
	if (unk_0x98934607F8D0FB03(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_87(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	
	unk_0xD06A5371300291A8(1, iParam2, iParam3, iParam4, &uVar0);
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
		case 50:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
		case 49:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
	}
}

void func_88(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xD06A5371300291A8(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0xC5AD19EFC0358776(0);
	unk_0xE885E03E7032CE54(0f, 0.35f);
	unk_0xF734D47C5786C762(2);
	unk_0x0D1D7FED407C809B(iVar0, iVar1, iVar2, iVar3);
	unk_0x12CC1234B1B7BFC5(fParam0, ((Global_17254 + Global_17256) - 0.0046875f));
	unk_0x85221773A398B339(0);
	unk_0x8A3F04304575D6B1(0, 0, 0, 0, 0);
	unk_0x0E14ECE9ADDF3B75(0, 0, 0, 0, 0);
}

void func_89(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x049CCB8537E77D8B(sParam2);
	unk_0xD92C45283BCDA624(uParam3);
	unk_0xD92C45283BCDA624(uParam4);
	unk_0xBF7878373D9EA4E7(fParam0, fParam1, 0);
}

float func_90(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x60D87DA27F70EBBC(sParam0))
	{
		if (unk_0x9F7CDE7B20BCB675(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_91();
	unk_0x9974146F2F7730D1(sParam0);
	unk_0xD92C45283BCDA624(uParam1);
	unk_0xD92C45283BCDA624(uParam2);
	return unk_0x4D3BCE911B81A969(1);
}

void func_91()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xD06A5371300291A8(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17257.f_7869)
	{
		iVar0 = Global_17257.f_7865;
		iVar1 = Global_17257.f_7866;
		iVar2 = Global_17257.f_7867;
		iVar3 = Global_17257.f_7868;
	}
	unk_0xC5AD19EFC0358776(0);
	unk_0xE885E03E7032CE54(0f, 0.35f);
	unk_0x0D1D7FED407C809B(iVar0, iVar1, iVar2, iVar3);
	unk_0x12CC1234B1B7BFC5((Global_17254 + 0.0046875f), ((Global_17254 + Global_17256) - 0.0046875f));
	unk_0x85221773A398B339(0);
	unk_0x8A3F04304575D6B1(0, 0, 0, 0, 0);
	unk_0x0E14ECE9ADDF3B75(0, 0, 0, 0, 0);
}

void func_92(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0xF2277E9F99F5ECC1((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_93(int iParam0, bool bParam1)
{
	char* sVar0[2];
	
	if (!unk_0x226FA58470A21AEF(&(Global_17257.f_6703[iParam0 /*16*/])))
	{
		return func_94(&(Global_17257.f_6703[iParam0 /*16*/]));
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
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 49:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
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

var func_94(var uParam0)
{
	return uParam0;
}

char* func_95(int iParam0)
{
	if (!unk_0x226FA58470A21AEF(&(Global_17257.f_5886[iParam0 /*16*/])))
	{
		return func_94(&(Global_17257.f_5886[iParam0 /*16*/]));
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

int func_96()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x4C6D647F0AAA9B5B(&iVar0, &iVar1);
	fVar2 = (unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_97(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	
	uVar0 = func_95(iParam0);
	uVar1 = func_93(iParam0, bParam1);
	if (unk_0x9F7CDE7B20BCB675(uVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0x4C6D647F0AAA9B5B(&iVar2, &iVar3);
			fVar5 = unk_0x5050DF014C100DFF(0);
			if (func_96())
			{
				iVar2 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar3) * fVar5));
			}
			fVar6 = (unk_0xBBDA792448DB5A89(iVar2) / unk_0xBBDA792448DB5A89(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_96())
			{
				fVar4 = 1f;
			}
			if (unk_0x98934607F8D0FB03(joaat("director_mode")) > 0)
			{
				unk_0x50BF5AC65F0CC3B4(&iVar2, &iVar3);
			}
			iVar2 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar2) / fVar4));
			iVar3 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar3) / fVar4));
		}
		else
		{
			unk_0x50BF5AC65F0CC3B4(&iVar2, &iVar3);
		}
		Var7 = { unk_0xDD8A228E30DDC5CF(uVar0, sVar1) };
		Var7.f_0 = (Var7.f_0 * (func_98(iParam0) / fVar4));
		Var7.f_1 = (Var7.f_1 * (func_98(iParam0) / fVar4));
		if (!bParam2)
		{
			Var7.f_0 = (Var7.f_0 - 2f);
			Var7.f_1 = (Var7.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var7.f_0 = 288f;
			Var7.f_1 = 106f;
		}
		*fParam3 = ((Var7.f_0 / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((Var7.f_1 / IntToFloat(iVar3)) / (Var7.f_0 / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x62FCA7A01B5D2726() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17256)
			{
				*fParam4 = (*fParam4 * (Global_17256 / *fParam3));
				*fParam3 = Global_17256;
			}
		}
		return 1;
	}
	return 0;
}

float func_98(int iParam0)
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
		case 49:
			return 0.5f;
			break;
	}
	return 1f;
}

int func_99(bool bParam0, bool bParam1)
{
	if (Global_2428549.f_1378.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0xDF916BCF4D39E8C2() || (func_101(8, -1) && func_100() != 64)) || (unk_0x0FDDFFBD775C7598() != 0 && !bParam1)) || (unk_0xAD79840A082ADD7F() && !bParam0)) || unk_0x8F805F2A5D16C0F9()) || Global_69781) || Global_17257.f_7893) || unk_0x526F2ADD5C54B89E()) || Global_91362.f_1352)
	{
		return 0;
	}
	return 1;
}

int func_100()
{
	return Global_1315846;
}

bool func_101(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338622.f_203[iParam1];
			}
			break;
	}
	return unk_0x7DA173D4FD42F36B(Global_1338622.f_949, iParam0);
}

void func_102(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_17257.f_5606 = iParam0;
	Global_17257.f_5741 = iParam2;
	if (Global_17257.f_5606 < Global_17257.f_5605)
	{
		Global_17257.f_5605 = Global_17257.f_5606;
	}
	else if ((Global_17257.f_5599 && Global_17257.f_5606 > Global_17257.f_5607) || (!Global_17257.f_5599 && Global_17257.f_5606 >= (Global_17257.f_5605 + Global_17257.f_5095)))
	{
		iVar0 = Global_17257.f_5605;
		while (iVar0 <= Global_17257.f_5606)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_17257.f_4959[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17257.f_5095 && Global_17257.f_5605 < 128)
		{
			Global_17257.f_5605++;
			iVar1 = 0;
			iVar0 = Global_17257.f_5605;
			while (iVar0 <= Global_17257.f_5606)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_17257.f_4959[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17257.f_5598 = 0;
	Global_17257.f_5599 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_17257.f_4562), "", 16);
		StringCopy(&(Global_2566711.f_21), "", 16);
	}
}

void func_103(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x8482814342BB3160(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x8482814342BB3160(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x8482814342BB3160(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x8482814342BB3160(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x43AD8FF2B73AC2B6(2, 218) * 127f));
			*uParam1 = unk_0xF34EE736CF047844((unk_0x43AD8FF2B73AC2B6(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x43AD8FF2B73AC2B6(2, 220) * 127f));
			*uParam3 = unk_0xF34EE736CF047844((unk_0x43AD8FF2B73AC2B6(2, 221) * 127f));
		}
	}
}

void func_104()
{
	func_115(0);
	func_114(1, 0, 0, 0, 0);
	func_113(1, 1, 1, 1, 1);
	if (Local_83.f_1 == 3)
	{
		func_112("SEA_MENU");
	}
	else
	{
		func_112("STREET_MENU");
	}
	func_108(0, "RACES_OPT_SP", 0, 1, 0, 0);
	func_108(1, "RACES_OPT_MP", 0, 1, 0, 0);
	func_107(201, "ITEM_SELECT", -1);
	func_107(202, "ITEM_EXIT", -1);
	func_106(11, "ITEM_SCROLL", -1);
	func_105(0);
	func_102(0, 1, 1);
	iLocal_97 = 0;
}

void func_105(int iParam0)
{
	Global_17257.f_5605 = iParam0;
}

void func_106(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0x120C6DB43AE50AE1(2, iParam0, 1);
	if (Global_17257.f_4639 >= 12)
	{
		StringCopy(&Global_2566711, sVar0, 64);
		StringCopy(&(Global_2566711.f_16), sParam1, 16);
		Global_2566711.f_20 = iParam2;
		return;
		return;
	}
	unk_0x99BCB15F954AF579(&(Global_17257.f_4922), Global_17257.f_4639);
	StringCopy(&(Global_17257.f_4641[Global_17257.f_4639 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17257.f_4834[Global_17257.f_4639 /*4*/]), sParam1, 16);
	Global_17257.f_4883[Global_17257.f_4639] = iParam2;
	Global_17257.f_4896[Global_17257.f_4639] = 345;
	Global_17257.f_4909[Global_17257.f_4639] = iParam0;
	Global_17257.f_4639++;
}

void func_107(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0xB1C8DCF6DB548BFD(2, iParam0, 1);
	if (Global_17257.f_4639 >= 12)
	{
		StringCopy(&Global_2566711, sVar0, 64);
		StringCopy(&(Global_2566711.f_16), sParam1, 16);
		Global_2566711.f_20 = iParam2;
		return;
		return;
	}
	unk_0x99BCB15F954AF579(&(Global_17257.f_4922), Global_17257.f_4639);
	StringCopy(&(Global_17257.f_4641[Global_17257.f_4639 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17257.f_4834[Global_17257.f_4639 /*4*/]), sParam1, 16);
	Global_17257.f_4883[Global_17257.f_4639] = iParam2;
	Global_17257.f_4896[Global_17257.f_4639] = iParam0;
	Global_17257.f_4909[Global_17257.f_4639] = 32;
	Global_17257.f_4639++;
}

void func_108(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17257.f_5088 > iParam0)
	{
		return;
	}
	if (Global_17257.f_5088 >= 128)
	{
		return;
	}
	if (Global_17257.f_5090 >= 256)
	{
		return;
	}
	if (Global_17257.f_5610 < Global_17257.f_5608)
	{
		return;
	}
	if (Global_17257.f_5088 != iParam0)
	{
		Global_17257.f_5088 = iParam0;
		Global_17257.f_5089 = 0;
	}
	iVar0 = Global_17257.f_4926[Global_17257.f_5089];
	if (iVar0 != 1)
	{
		while (Global_17257.f_5089 < 4 && iVar0 != 1)
		{
			Global_17257.f_5089++;
			iVar0 = Global_17257.f_4926[Global_17257.f_5089];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_17257.f_73[Global_17257.f_5090 /*6*/]), sParam1, 24);
	if (!unk_0x226FA58470A21AEF(sParam1) && !unk_0xDC1F9F222D09400F(sParam1))
	{
	}
	Global_17257.f_1610[Global_17257.f_5090] = bParam3;
	Global_17257.f_1867[Global_17257.f_5090] = iParam4;
	Global_17257.f_5090++;
	if (!bParam3)
	{
		func_111(Global_17257.f_5088, 1);
	}
	else
	{
		func_111(Global_17257.f_5088, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_110(&(Global_17257.f_73[Global_17257.f_5090 /*6*/]));
		if (Global_17257.f_4945[Global_17257.f_5089])
		{
			func_97(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_17257.f_4938[Global_17257.f_5089])
		{
			Global_17257.f_4938[Global_17257.f_5089] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_109(&(Global_17257.f_73[Global_17257.f_5090 /*6*/]));
			if (fVar4 > Global_17257.f_5612[iParam0])
			{
				Global_17257.f_5612[iParam0] = fVar4;
			}
		}
	}
	unk_0xE27C8E42A97895CF(&(Global_17257.f_4959[iParam0]), Global_17257.f_5089);
	Global_17257.f_5089++;
	Global_17257.f_5611 = 1;
	Global_17257.f_5609 = (Global_17257.f_5090 - 1);
	Global_17257.f_5610 = 0;
	Global_17257.f_5608 = iParam2;
}

float func_109(char* sParam0)
{
	if (!unk_0xDC1F9F222D09400F(sParam0))
	{
	}
	return unk_0xC615314B52B8C80D(0.35f, 0);
}

float func_110(char* sParam0)
{
	if (!unk_0x60D87DA27F70EBBC(uParam0))
	{
		if (unk_0x9F7CDE7B20BCB675(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_80(0, 1, 0, 0, 0, 0);
	unk_0x9974146F2F7730D1(sParam0);
	return unk_0x4D3BCE911B81A969(1);
}

void func_111(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 32f));
	if (bParam1)
	{
		unk_0xE27C8E42A97895CF(&(Global_17257.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0x99BCB15F954AF579(&(Global_17257.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_112(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_17257.f_1), sParam0, 16);
	Global_17257.f_68 = 0;
	Global_17257.f_69 = 0;
	Global_17257.f_70 = 0;
	Global_17257.f_71 = 0;
	Global_17257.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17257.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_113(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17257.f_4953[0] = iParam0;
	Global_17257.f_4953[1] = iParam1;
	Global_17257.f_4953[2] = iParam2;
	Global_17257.f_4953[3] = iParam3;
	Global_17257.f_4953[4] = iParam4;
}

void func_114(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17257.f_4926[0] = iParam0;
	Global_17257.f_4926[1] = iParam1;
	Global_17257.f_4926[2] = iParam2;
	Global_17257.f_4926[3] = iParam3;
	Global_17257.f_4926[4] = iParam4;
	Global_17257.f_5096 = 0;
	if (iParam0 != 0)
	{
		Global_17257.f_5096++;
	}
	if (iParam1 != 0)
	{
		Global_17257.f_5096++;
	}
	if (iParam2 != 0)
	{
		Global_17257.f_5096++;
	}
	if (iParam3 != 0)
	{
		Global_17257.f_5096++;
	}
	if (iParam4 != 0)
	{
		Global_17257.f_5096++;
	}
}

void func_115(bool bParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_17257.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_17257.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2444596[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_17257.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17257.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17257.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17257.f_4959[iVar0] = 0;
		Global_17257.f_5097[iVar0] = 0;
		Global_17257.f_5226[iVar0] = 0;
		Global_17257.f_5746[iVar0] = 0f;
		Global_17257.f_5355[iVar0] = 0;
		Global_17257.f_5612[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17257.f_4926[iVar0] = 0;
		Global_17257.f_4938[iVar0] = 0f;
		Global_17257.f_4932[iVar0] = -1f;
		Global_17257.f_4945[iVar0] = 0;
		Global_17257.f_4953[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17257.f_4834[iVar0 /*4*/]), "", 16);
		Global_17257.f_4883[iVar0] = -1;
		Global_17257.f_4896[iVar0] = 345;
		Global_17257.f_4909[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 51)
	{
		StringCopy(&(Global_17257.f_5886[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17257.f_6703[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	StringCopy(&(Global_2566711.f_16), "", 16);
	Global_2566711.f_20 = -1;
	Global_17257 = 0;
	Global_17257.f_5088 = 0;
	Global_17257.f_5089 = 0;
	Global_17257.f_5090 = 0;
	Global_17257.f_5092 = 0;
	Global_17257.f_5093 = 0;
	Global_17257.f_5094 = 0;
	Global_17257.f_5091 = 0;
	Global_17257.f_5741 = 0;
	Global_17257.f_5606 = 0;
	Global_17257.f_5605 = 0;
	Global_17257.f_5607 = 0;
	StringCopy(&(Global_17257.f_4562), "", 16);
	Global_17257.f_4632 = 0;
	Global_17257.f_4633 = 0;
	Global_17257.f_4634 = 0;
	Global_17257.f_4635 = 0;
	Global_17257.f_4636 = 0;
	Global_17257.f_4637 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17257.f_4566[iVar0] = 0;
		iVar0++;
	}
	Global_17257.f_4638 = 0;
	StringCopy(&(Global_2566711.f_21), "", 16);
	Global_2566711.f_61 = 0;
	Global_2566711.f_62 = 0;
	Global_2566711.f_63 = 0;
	Global_2566711.f_64 = 0;
	Global_2566711.f_65 = 0;
	Global_2566711.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_2566711.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_2566711.f_67 = 0;
	StringCopy(&(Global_17257.f_1), "", 16);
	Global_17257.f_4944 = 0f;
	Global_17257.f_68 = 0;
	Global_17257.f_69 = 0;
	Global_17257.f_70 = 0;
	Global_17257.f_71 = 0;
	Global_17257.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17257.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_17257.f_5611 = 0;
	Global_17257.f_5610 = 0;
	Global_17257.f_5608 = 0;
	Global_17257.f_5609 = 0;
	Global_17257.f_4639 = 0;
	Global_17257.f_4640 = 0;
	Global_17257.f_5095 = 10;
	Global_17257.f_5096 = 0;
	Global_17257.f_5743 = 0f;
	Global_17257.f_5744 = 0f;
	Global_17257.f_5598 = 0;
	Global_17257.f_5599 = 0;
	Global_17257.f_5600 = 0f;
	Global_17257.f_5601 = 0;
	Global_17257.f_5603 = 0;
	Global_17257.f_5602 = 0;
	Global_17257.f_5604 = 0;
	Global_17257.f_7890 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_17257.f_5875[iVar0] = -1;
		Global_17257.f_5878[iVar0] = -1;
		iVar0++;
	}
	Global_17257.f_4951 = 0f;
	Global_17257.f_4922 = 0;
	Global_17257.f_4952 = 0;
	iVar0 = 0;
	while (iVar0 < Global_17257.f_5881)
	{
		Global_17257.f_5881[iVar0] = 0;
		iVar0++;
	}
	Global_17257.f_7869 = 0;
	Global_17257.f_7864 = 0;
	Global_17257.f_7874 = 0;
	Global_17257.f_7879 = 0;
	Global_17257.f_7884 = 0;
	Global_17257.f_7886 = 0;
	Global_17257.f_7892 = 0;
	Global_17254 = 0.05f;
	Global_17255 = 0.05f;
	Global_17256 = 0.225f;
	fVar2 = unk_0x5050DF014C100DFF(0);
	if (bParam0)
	{
		Global_17256 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_17256 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_17256 = 0.225f;
	}
}

bool func_116(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_58(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17257.f_5505[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0x226FA58470A21AEF(&(Global_17257.f_5505[iVar0 /*4*/])))
	{
		unk_0x18DF389F542183A3(&(Global_17257.f_5505[iVar0 /*4*/]), 9);
		Global_17257.f_5498[iVar0] = 1;
		if (!unk_0xC39E0E322B2CBB14(&(Global_17257.f_5505[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0xC35C76B8E0A47F9F("CommonMenu", false);
	Global_17257.f_5484[iVar0] = 1;
	if (!unk_0xF3DECB9D15F48CFF("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0xC35C76B8E0A47F9F("MPShopSale", false);
		Global_17257.f_5491[iVar0] = 1;
		if (!unk_0xF3DECB9D15F48CFF("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_17257.f_5530[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_117(&(Global_17257.f_5530[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_117(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x6A87921801178186(*uParam0))
			{
				*uParam0 = unk_0xDDEDAA5105426019(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x6A87921801178186(*uParam0))
					{
						uParam0->f_8 = unk_0x1ADBAAC322D61F73();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x1ADBAAC322D61F73();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x6A87921801178186(*uParam0))
			{
				uParam0->f_8 = unk_0x1ADBAAC322D61F73();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x6A87921801178186(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_118()
{
	int iVar0;
	
	if (func_148())
	{
		if (func_131())
		{
			iVar0 = 6;
			if (Local_83.f_1 == 1)
			{
				iVar0 = 4;
			}
			func_129(iVar0);
			if (func_54(uLocal_103[iVar0]))
			{
				if (bLocal_102)
				{
					if (unk_0x46E9388908C80483(uLocal_103[iVar0], cLocal_184, sLocal_185[iVar0], 3))
					{
						unk_0xCF392B3BBDE04CED(uLocal_103[iVar0], cLocal_184, sLocal_185[iVar0], -1056964608);
					}
					func_120(iVar0);
				}
			}
			unk_0xD3D729A98DEDDAFB(0, 51);
			if (unk_0xCE4A7178C782F52B(0, 51))
			{
				iLocal_194 = 1;
				unk_0x310F6B4E168A8F5D(1);
				iLocal_82 = 3;
			}
		}
		else if (!iLocal_93)
		{
			unk_0xC07D0B27D5ABBE46(0);
			iLocal_93 = 1;
		}
	}
	else
	{
		func_119();
		if (!iLocal_93)
		{
			unk_0xC07D0B27D5ABBE46(0);
			iLocal_93 = 1;
		}
	}
}

void func_119()
{
	if (iLocal_92 && unk_0x1ADBAAC322D61F73() > iLocal_95)
	{
		unk_0x310F6B4E168A8F5D(1);
		iLocal_92 = 0;
	}
}

void func_120(int iParam0)
{
	var uVar0;
	
	if (!unk_0xBDA1F5E8A36BFA07(uLocal_103[iParam0], 0) && !unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0))
	{
		switch (iLocal_195)
		{
			case 0:
				if (unk_0xB7A628320EFF8E47(unk_0xF4745590D18D14B8(uLocal_103[iParam0], 1), unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1)) < 64f)
				{
					iLocal_196 = 0;
					iLocal_197 = 0;
					iLocal_195 = 1;
				}
				break;
			
			case 1:
				unk_0xD6763C9F81772BAE(&uVar0);
				unk_0x3195125C126B79C6(0, unk_0x06736567F820A39E(), -1, 0, 2);
				unk_0x608A9ECA218C4D24(0, unk_0x06736567F820A39E(), 0);
				unk_0x6F275D9063DAF754(uVar0);
				unk_0x457C4844450FF70E(uLocal_103[iParam0], uVar0);
				unk_0xDD1A4EE55D86FE71(&uVar0);
				iLocal_195 = 2;
				break;
			
			case 2:
				if (unk_0xFB900D9EE2ACC400(uLocal_103[iParam0], 242628503) != 1 || unk_0xE722F1A5D8B43C06(uLocal_103[iParam0], unk_0x06736567F820A39E(), 20f))
				{
					unk_0x608A9ECA218C4D24(uLocal_103[iParam0], unk_0x06736567F820A39E(), -1);
					if (!iLocal_197)
					{
						func_127(uLocal_103[iParam0], "PRERACE_CHAT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					else
					{
						func_127(uLocal_103[iParam0], "PRERACE_TAUNT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					iLocal_195 = 3;
				}
				break;
			
			case 3:
				if (!unk_0x5CB2DFF52F4D972D(uLocal_103[iParam0]))
				{
					func_125(&uLocal_198);
					unk_0x28B5966B12DC5B0F(uLocal_103[iParam0], "random@street_race", "_streetracer_wait_loop", 4f, -4f, -1, 9, 0, 0, 0, 0);
					iLocal_195 = 4;
				}
				break;
			
			case 4:
				if (unk_0xB7A628320EFF8E47(unk_0xF4745590D18D14B8(uLocal_103[iParam0], 1), unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1)) > 225f)
				{
					iLocal_195 = 0;
				}
				if (func_121(&uLocal_198) >= 5f && !iLocal_196)
				{
					iLocal_196 = 1;
					iLocal_195 = 1;
				}
				else if (func_121(&uLocal_198) >= 10f && !iLocal_197)
				{
					iLocal_197 = 1;
					iLocal_195 = 1;
				}
				break;
			
			case 5:
				break;
			}
	}
}

float func_121(var uParam0)
{
	if (func_124(uParam0))
	{
		if (func_123(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_122(unk_0x7DA173D4FD42F36B(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_122(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x1ADBAAC322D61F73());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x17CC0D5008835470())
	{
		iVar2 = unk_0x201D90648B2AE3CE();
		return (unk_0xBBDA792448DB5A89(iVar2) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x1ADBAAC322D61F73()) / 1000f);
}

bool func_123(var uParam0)
{
	return unk_0x7DA173D4FD42F36B(*uParam0, 2);
}

bool func_124(var uParam0)
{
	return unk_0x7DA173D4FD42F36B(*uParam0, 1);
}

void func_125(var uParam0)
{
	func_126(uParam0, 0f);
}

void func_126(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_122(unk_0x7DA173D4FD42F36B(*uParam0, 4)) - fParam1);
	unk_0xE27C8E42A97895CF(uParam0, 1);
	unk_0x99BCB15F954AF579(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_127(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x00BD2542D40FB0C9(uParam0, sParam1, sParam2, func_128(iParam3), 0);
}

int func_128(int iParam0)
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

void func_129(int iParam0)
{
	if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()) && !func_130())
	{
		if (func_54(uLocal_103[iParam0]))
		{
			if (iLocal_93 && unk_0x137B8B7A1CAD742A(unk_0x06736567F820A39E()) < 20f)
			{
				unk_0x0FE275F91FA13532(uLocal_103[iParam0], 0f, 0f, 0f, 1, 2000, 2000, 2000, 0);
				iLocal_93 = 0;
			}
		}
	}
}

int func_130()
{
	if (unk_0x20EC647BB13B981D(unk_0x132F78245A5DBB0A()) == 4)
	{
		return 1;
	}
	return 0;
}

int func_131()
{
	if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
	{
		if (func_147())
		{
			return 0;
		}
		if (func_146(func_43()) < Local_83.f_3)
		{
			if (Local_83.f_1 == 3)
			{
				func_143("SEA_NA_CASH", Local_83.f_3);
			}
			else
			{
				func_143("STREET_NA_CASH", Local_83.f_3);
			}
			iLocal_92 = 1;
			iLocal_95 = unk_0x1ADBAAC322D61F73() + 1000;
			return 0;
		}
		if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
		{
			func_142(&iLocal_0);
			iLocal_0 = unk_0xEB18AC70F95C0F8C(unk_0x06736567F820A39E());
			if (!func_137())
			{
				iLocal_92 = 1;
				iLocal_95 = unk_0x1ADBAAC322D61F73() + 1000;
				return 0;
			}
			else if ((unk_0x6267527E254067CA(iLocal_0) <= 200 || unk_0x64B7FCF50C031E4A(iLocal_0)) || func_136())
			{
				func_135("RACE_VehDmg");
				iLocal_92 = 1;
				iLocal_95 = unk_0x1ADBAAC322D61F73() + 1000;
				return 0;
			}
			else if (unk_0x4321FC7479614822(iLocal_0, -1) != unk_0x06736567F820A39E())
			{
				func_132();
				return 0;
			}
			else
			{
				if (func_75(0) || unk_0x98934607F8D0FB03(joaat("appinternet")) > 0)
				{
					func_119();
					return 0;
				}
				switch (Local_83.f_1)
				{
					case 1:
						func_143("STREET_PLAY_B", Local_83.f_3);
						break;
					
					case 2:
						func_143("STREET_PLAY_C", Local_83.f_3);
						break;
					
					case 3:
						func_135("SEA_PLAY");
						break;
				}
				iLocal_92 = 1;
				iLocal_95 = unk_0x1ADBAAC322D61F73();
				return 1;
			}
		}
		else
		{
			func_142(&iLocal_0);
			func_132();
			return 0;
		}
	}
	return 0;
}

void func_132()
{
	char* sVar0;
	
	if (Local_83.f_1 == 3)
	{
		if (func_13(iLocal_111))
		{
			sVar0 = "SEA_NA_VEH";
		}
		else
		{
			sVar0 = "SEA_NA_VEH2";
		}
		if (!func_134(sVar0))
		{
			func_133(sVar0);
			iLocal_92 = 1;
			iLocal_95 = unk_0x1ADBAAC322D61F73() + 1000;
		}
	}
	else if (Local_83.f_1 == 1)
	{
		if (!func_134("STREET_NA_BIKE"))
		{
			func_133("STREET_NA_BIKE");
			iLocal_92 = 1;
			iLocal_95 = unk_0x1ADBAAC322D61F73() + 1000;
		}
	}
	else if (!func_134("STREET_NA_CAR"))
	{
		func_133("STREET_NA_CAR");
		iLocal_92 = 1;
		iLocal_95 = unk_0x1ADBAAC322D61F73() + 1000;
	}
}

void func_133(char* sParam0)
{
	unk_0x15835437CE85AEA4(sParam0);
	unk_0x65FD8FA7D3B7F717(0, 1, 1, -1);
}

bool func_134(char* sParam0)
{
	unk_0xC11856C04AAC5813(sParam0);
	return unk_0xBA2B1F42B35E6698(0);
}

void func_135(char* sParam0)
{
	if (!func_134(sParam0))
	{
		func_133(sParam0);
	}
}

int func_136()
{
	int iVar0;
	
	iVar0 = unk_0x79469DA5833EACA8(iLocal_0);
	if (unk_0x4040DD4BD789089F(iVar0))
	{
		if (unk_0x80067D81CF30A39F(iLocal_0, 6, 0) || unk_0x80067D81CF30A39F(iLocal_0, 7, 0))
		{
			return 1;
		}
	}
	else if (unk_0xEA39662D9CF7CF75(iVar0))
	{
		if (((unk_0x80067D81CF30A39F(iLocal_0, 0, 0) || unk_0x80067D81CF30A39F(iLocal_0, 1, 0)) || unk_0x80067D81CF30A39F(iLocal_0, 4, 0)) || unk_0x80067D81CF30A39F(iLocal_0, 5, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_137()
{
	int iVar0;
	char* sVar1;
	
	switch (Local_83.f_1)
	{
		case 1:
			iVar0 = func_141();
			if (iVar0 == 1)
			{
				func_135("STREET_NA_COP");
				return 0;
			}
			else if (iVar0 == 2)
			{
				func_135("STREET_NA_BIKE");
				return 0;
			}
			break;
		
		case 2:
			iVar0 = func_139();
			if (iVar0 == 1)
			{
				func_135("STREET_NA_COP");
				return 0;
			}
			else if (iVar0 == 2)
			{
				func_135("STREET_NA_CAR");
				return 0;
			}
			break;
		
		case 3:
			if (!func_138())
			{
				if (func_13(iLocal_111))
				{
					sVar1 = "SEA_NA_VEH";
				}
				else
				{
					sVar1 = "SEA_NA_VEH2";
				}
				func_135(sVar1);
				return 0;
			}
			break;
	}
	return 1;
}

int func_138()
{
	int iVar0;
	
	if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
	{
		if (unk_0xC1EDB61CE0A4B94E(iLocal_0))
		{
			iVar0 = unk_0x79469DA5833EACA8(iLocal_0);
			if (iVar0 == joaat("seashark") || iVar0 == joaat("seashark2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_139()
{
	int iVar0;
	int iVar1;
	int iVar2[83];
	
	if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
	{
		if (unk_0xC1EDB61CE0A4B94E(iLocal_0))
		{
			iVar0 = unk_0x79469DA5833EACA8(iLocal_0);
			if (func_140(iVar0))
			{
				return 1;
			}
			if ((((((((((iVar0 == joaat("police4") || iVar0 == joaat("policeold1")) || iVar0 == joaat("policeold2")) || iVar0 == joaat("fbi")) || iVar0 == joaat("fbi2")) || iVar0 == joaat("lguard")) || iVar0 == joaat("sheriff")) || iVar0 == joaat("sheriff2")) || iVar0 == joaat("pranger")) || iVar0 == joaat("ambulance")) || iVar0 == joaat("firetruk"))
			{
				return 1;
			}
			if (((unk_0x4040DD4BD789089F(iVar0) || unk_0xE39DC239584B3B40(iVar0)) || unk_0xEF439FAE899F725F(iVar0)) || unk_0x759D601DDE232B39(iVar0))
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

int func_140(int iParam0)
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

int func_141()
{
	int iVar0;
	
	if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
	{
		if (unk_0xC1EDB61CE0A4B94E(iLocal_0))
		{
			iVar0 = unk_0x79469DA5833EACA8(iLocal_0);
			if (iVar0 == joaat("policeb"))
			{
				return 1;
			}
			if (unk_0x4040DD4BD789089F(iVar0) && !unk_0x6AC2CA535DF8275D(iVar0))
			{
				return 0;
			}
		}
	}
	return 2;
}

void func_142(int iParam0)
{
	if (unk_0xC1EDB61CE0A4B94E(*iParam0))
	{
		unk_0xBDA1F5E8A36BFA07(*iParam0, 0);
		if (unk_0xC9A01F9792B3D486(*iParam0) && unk_0x7292AF41BC6C644F(*iParam0, 1))
		{
			unk_0x768B37F1452D4834(iParam0);
		}
	}
}

void func_143(char* sParam0, var uParam1)
{
	if (!func_145(sParam0, uParam1))
	{
		func_144(sParam0, uParam1);
	}
}

void func_144(char* sParam0, int iParam1)
{
	unk_0x15835437CE85AEA4(uParam0);
	unk_0xD92C45283BCDA624(uParam1);
	unk_0x65FD8FA7D3B7F717(0, 1, 1, -1);
}

bool func_145(char* sParam0, int iParam1)
{
	unk_0xC11856C04AAC5813(uParam0);
	unk_0xD92C45283BCDA624(uParam1);
	return unk_0xBA2B1F42B35E6698(0);
}

int func_146(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0xFF4D252D25F54A29(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0xFF4D252D25F54A29(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0xFF4D252D25F54A29(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_147()
{
	int iVar0;
	
	if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
	{
		if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
		{
			iVar0 = unk_0xEB18AC70F95C0F8C(unk_0x06736567F820A39E());
			if (func_14(iVar0))
			{
				if (unk_0x1C3F1A4FF0A66BD0(iVar0))
				{
					if (Local_83.f_1 == 3 && unk_0xC774E76B3D78AD45(iVar0))
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

int func_148()
{
	int iVar0;
	
	if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
	{
		iVar0 = 20;
		if (Local_83.f_1 == 3)
		{
			iVar0 = 40;
		}
		if (unk_0xA1F52EC3ECE1D42E(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), Local_89, 1) < IntToFloat(iVar0) && unk_0x9F99187B9EC3128C(unk_0x06736567F820A39E()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_149()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_154(&uLocal_216))
	{
		if (Local_83.f_1 == 2)
		{
			if (func_151())
			{
				if (!unk_0xC1EDB61CE0A4B94E(iLocal_111))
				{
					if (unk_0x5C9FE32E2FF37989(iLocal_182) && unk_0x5C9FE32E2FF37989(iLocal_182))
					{
						iLocal_111 = unk_0x75409DE1FC985A9D(iLocal_182, Local_113, fLocal_116, 1, 1);
						if (unk_0x02C790484607F3FA(1) && unk_0xAE401BE68040DDE6())
						{
							iLocal_112 = unk_0x9164F16AA607099C(iLocal_111, 1);
							unk_0x82E2E577EC002BA8(iLocal_112, iLocal_111, 1, 99999999);
							unk_0xBA63517ADBC1E5E3(iLocal_112, 1);
							unk_0x97C5D2BB8E47131D(iLocal_112, 1);
						}
						unk_0xCE889B96E78E6DC5(iLocal_111);
						unk_0x68018E1A807B2CF1(iLocal_111, 1, 1, 0);
						unk_0x4E7950157F2754DF(iLocal_111, 1);
						unk_0xC2878B0B2B5199B0(iLocal_111, 1);
						unk_0x5D7849E25365760A(unk_0x2E6EA44CA237AF31(10), 1);
						unk_0x0D5D5D170FEB16A5(iLocal_111, unk_0x2E6EA44CA237AF31(10));
						unk_0x138864BBB52966DB(iLocal_111, 0);
						unk_0x0B87AFC0B2EECA19(iLocal_182);
						unk_0x4EDE34FBADD967A6(0);
					}
				}
				if (!unk_0xC1EDB61CE0A4B94E(iLocal_117))
				{
					if (unk_0x5C9FE32E2FF37989(iLocal_183))
					{
						iLocal_117 = unk_0x75409DE1FC985A9D(iLocal_183, Local_118, fLocal_121, 1, 1);
						unk_0x68018E1A807B2CF1(iLocal_117, 0, 1, 0);
						unk_0x4E7950157F2754DF(iLocal_117, 1);
						unk_0xC2878B0B2B5199B0(iLocal_117, 1);
						unk_0xCE889B96E78E6DC5(iLocal_117);
						unk_0x5D7849E25365760A(unk_0x2E6EA44CA237AF31(10), 1);
						unk_0x0D5D5D170FEB16A5(iLocal_117, unk_0x2E6EA44CA237AF31(10));
						unk_0x138864BBB52966DB(iLocal_117, 0);
						unk_0x0B87AFC0B2EECA19(iLocal_183);
						unk_0x4EDE34FBADD967A6(0);
					}
				}
				if (unk_0x7B43775D6E0D7325(cLocal_184))
				{
					if (iLocal_193)
					{
						iVar0 = 0;
						while (iVar0 <= (iLocal_174 - 1))
						{
							if (unk_0xC1EDB61CE0A4B94E(uLocal_103[iVar0]))
							{
								if (!unk_0xBDA1F5E8A36BFA07(uLocal_103[iVar0], 0) && !func_150(uLocal_103[iVar0], -2017877118))
								{
									unk_0x28B5966B12DC5B0F(uLocal_103[iVar0], cLocal_184, sLocal_185[iVar0], 1000f, -1000f, -1, 1, 0, 0, 0, 0);
									unk_0x97C5D2BB8E47131D(uLocal_103[iVar0], 1);
								}
							}
							else if (unk_0x5C9FE32E2FF37989(iLocal_174[iVar0]))
							{
								uLocal_103[iVar0] = unk_0xB500796AAD639F82(25, iLocal_174[iVar0], Local_136[iVar0 /*3*/], fLocal_158[iVar0], 1, 1);
								unk_0x7C15BF0B58B608BA(uLocal_103[iVar0], Local_136[iVar0 /*3*/], 0, 0, 1);
								unk_0xBA63517ADBC1E5E3(uLocal_103[iVar0], 1);
								unk_0x28B5966B12DC5B0F(uLocal_103[iVar0], cLocal_184, sLocal_185[iVar0], 1000f, -1000f, -1, 1, 0, 0, 0, 0);
								unk_0x97C5D2BB8E47131D(uLocal_103[iVar0], 1);
							}
							iVar0++;
						}
						if ((((((((func_54(uLocal_103[0]) && func_54(uLocal_103[1])) && func_54(uLocal_103[2])) && func_54(uLocal_103[3])) && func_54(uLocal_103[4])) && func_54(uLocal_103[5])) && func_54(uLocal_103[6])) && func_13(iLocal_111)) && func_13(iLocal_117))
						{
							bLocal_102 = true;
							iVar0 = 0;
							while (iVar0 <= (iLocal_174 - 1))
							{
								unk_0x0B87AFC0B2EECA19(iLocal_174[iVar0]);
								iVar0++;
							}
							iLocal_193 = 0;
						}
					}
				}
			}
		}
		else if (Local_83.f_1 == 1)
		{
			if (func_151())
			{
				if (!unk_0xC1EDB61CE0A4B94E(iLocal_111))
				{
					if (unk_0x5C9FE32E2FF37989(iLocal_182))
					{
						iLocal_111 = unk_0x75409DE1FC985A9D(iLocal_182, Local_113, fLocal_116, 1, 1);
						if (unk_0x02C790484607F3FA(0) && unk_0xFDB5138554057592())
						{
							iLocal_112 = unk_0x9164F16AA607099C(iLocal_111, 1);
							unk_0x82E2E577EC002BA8(iLocal_112, iLocal_111, 1, 99999999);
							unk_0xBA63517ADBC1E5E3(iLocal_112, 1);
							unk_0x97C5D2BB8E47131D(iLocal_112, 1);
						}
						unk_0x68018E1A807B2CF1(iLocal_111, 1, 1, 0);
						unk_0x4E7950157F2754DF(iLocal_111, 1);
						unk_0xC2878B0B2B5199B0(iLocal_111, 1);
						unk_0x5D7849E25365760A(unk_0x2E6EA44CA237AF31(10), 1);
						unk_0x0D5D5D170FEB16A5(iLocal_111, unk_0x2E6EA44CA237AF31(10));
						unk_0x138864BBB52966DB(iLocal_111, 0);
						unk_0x0B87AFC0B2EECA19(iLocal_182);
					}
				}
				if (unk_0x7B43775D6E0D7325(cLocal_184))
				{
					if (iLocal_193)
					{
						iVar1 = 0;
						while (iVar1 <= (iLocal_174 - 3))
						{
							if (unk_0xC1EDB61CE0A4B94E(uLocal_103[iVar1]))
							{
								if (!unk_0xBDA1F5E8A36BFA07(uLocal_103[iVar1], 0) && !func_150(uLocal_103[iVar1], -2017877118))
								{
									unk_0x7C15BF0B58B608BA(uLocal_103[iVar1], Local_136[iVar1 /*3*/], 0, 0, 1);
									if (iVar1 != 2 && iVar1 != 3)
									{
										unk_0x28B5966B12DC5B0F(uLocal_103[iVar1], cLocal_184, sLocal_185[iVar1], 1000f, -1000f, -1, 1, 0, 0, 0, 0);
									}
									else
									{
										unk_0x28B5966B12DC5B0F(uLocal_103[iVar1], cLocal_184, sLocal_185[iVar1], 1000f, -1000f, -1, 1, 0.5f, 0, 0, 0);
									}
									unk_0x97C5D2BB8E47131D(uLocal_103[iVar1], 1);
								}
							}
							else if (unk_0x5C9FE32E2FF37989(iLocal_174[iVar1]))
							{
								uLocal_103[iVar1] = unk_0xB500796AAD639F82(25, iLocal_174[iVar1], Local_136[iVar1 /*3*/], fLocal_158[iVar1], 1, 1);
								unk_0xBA63517ADBC1E5E3(uLocal_103[iVar1], 1);
							}
							iVar1++;
						}
						if ((((func_54(uLocal_103[0]) && func_54(uLocal_103[1])) && func_54(uLocal_103[2])) && func_54(uLocal_103[3])) && func_54(uLocal_103[4]))
						{
							unk_0x3195125C126B79C6(uLocal_103[4], unk_0x06736567F820A39E(), -1, 2048, 4);
							iVar1 = 0;
							while (iVar1 <= (iLocal_174 - 1))
							{
								unk_0x0B87AFC0B2EECA19(iLocal_174[iVar1]);
								iVar1++;
							}
							iLocal_193 = 0;
						}
					}
				}
			}
		}
		else if (Local_83.f_1 == 3)
		{
			if (func_151())
			{
				if (!unk_0xC1EDB61CE0A4B94E(iLocal_111))
				{
					if (unk_0x5C9FE32E2FF37989(iLocal_182))
					{
						iLocal_111 = unk_0x75409DE1FC985A9D(iLocal_182, Local_113, fLocal_116, 1, 1);
						unk_0xCE889B96E78E6DC5(iLocal_111);
						unk_0x5A44A75EB797B111(iLocal_111, 0f);
						unk_0xFBE68DB48E11C9E8(iLocal_111, 0);
						unk_0x7803AEFEE660D357(iLocal_111, 0);
						if (unk_0x40FF9C7E18FABEBE(iLocal_111))
						{
							unk_0x2C78AAA55C9DFB82(iLocal_111, 1);
						}
						unk_0x68018E1A807B2CF1(iLocal_111, 0, 1, 0);
					}
				}
				iVar2 = 0;
				iVar2 = 0;
				while (iVar2 < 3)
				{
					if (unk_0xC1EDB61CE0A4B94E(iLocal_166[iVar2]))
					{
						if (unk_0xC1EDB61CE0A4B94E(iLocal_170[iVar2]))
						{
							if (!unk_0xCFC04A38F256EE06(iLocal_170[iVar2]) && func_13(iLocal_166[iVar2]))
							{
								if (unk_0x5B4FEA5F286F0C8F(iLocal_166[iVar2], -1))
								{
									unk_0xE47DEDA2D353E92B(iLocal_170[iVar2], iLocal_166[iVar2], -1);
								}
							}
						}
						else if (func_13(iLocal_166[iVar2]) && unk_0x5C9FE32E2FF37989(joaat("a_m_y_jetski_01")))
						{
							iLocal_170[iVar2] = unk_0x064835636E49C34D(iLocal_166[iVar2], 25, joaat("a_m_y_jetski_01"), -1, 1, 1);
							unk_0xEDA1E7EBC96811E2(iLocal_170[iVar2], 0);
							unk_0xBA63517ADBC1E5E3(iLocal_170[iVar2], 1);
						}
					}
					else if (unk_0x5C9FE32E2FF37989(iLocal_182))
					{
						iLocal_166[iVar2] = unk_0x75409DE1FC985A9D(iLocal_182, Local_122[iVar2 /*3*/], fLocal_132[iVar2], 1, 1);
						unk_0xCE889B96E78E6DC5(iLocal_166[iVar2]);
						unk_0x5A44A75EB797B111(iLocal_166[iVar2], 0f);
						unk_0xFBE68DB48E11C9E8(iLocal_166[iVar2], 1);
						unk_0x7803AEFEE660D357(iLocal_166[iVar2], 1);
						if (unk_0x40FF9C7E18FABEBE(iLocal_166[iVar2]))
						{
							unk_0x2C78AAA55C9DFB82(iLocal_166[iVar2], 1);
						}
						unk_0x68018E1A807B2CF1(iLocal_166[iVar2], 0, 1, 0);
					}
					iVar2++;
				}
				if (((unk_0xC1EDB61CE0A4B94E(iLocal_111) && unk_0xC1EDB61CE0A4B94E(iLocal_166[0])) && unk_0xC1EDB61CE0A4B94E(iLocal_166[1])) && unk_0xC1EDB61CE0A4B94E(iLocal_166[2]))
				{
					unk_0x0B87AFC0B2EECA19(iLocal_182);
				}
				if ((unk_0xC1EDB61CE0A4B94E(iLocal_170[0]) && unk_0xC1EDB61CE0A4B94E(iLocal_170[1])) && unk_0xC1EDB61CE0A4B94E(iLocal_170[2]))
				{
					unk_0x0B87AFC0B2EECA19(joaat("a_m_y_jetski_01"));
				}
				unk_0x6553935614875699(unk_0x06736567F820A39E(), 170, 1);
			}
		}
	}
}

int func_150(int iParam0, int iParam1)
{
	if (func_54(iParam0))
	{
		if (unk_0xFB900D9EE2ACC400(iParam0, iParam1) == 1 || unk_0xFB900D9EE2ACC400(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_151()
{
	if (!func_153())
	{
		return 0;
	}
	if (func_54(unk_0x06736567F820A39E()))
	{
		if (!func_152(unk_0x06736567F820A39E(), Local_113, 100f) || unk_0x4FF34B5B023875E1())
		{
			return 1;
		}
	}
	return 0;
}

bool func_152(int iParam0, struct<3> Param1, float fParam4)
{
	return unk_0xB7A628320EFF8E47(unk_0xF4745590D18D14B8(iParam0, 1), Param1) <= (fParam4 * fParam4);
}

int func_153()
{
	if (Local_83.f_1 == 3)
	{
		return 1;
	}
	else if (Local_83.f_1 == 1 || Local_83.f_1 == 2)
	{
		if (unk_0xEC5C0F25A9A364A0() >= 20 || unk_0xEC5C0F25A9A364A0() < 5)
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

int func_154(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_145)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0x7DA173D4FD42F36B((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0x7DA173D4FD42F36B((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_155(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return 1;
}

bool func_155(var uParam0)
{
	return func_156(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_156(var uParam0, char[4] cParam1, int iParam2)
{
	if (unk_0x7DA173D4FD42F36B(uParam0, 30))
	{
		if (unk_0x7DA173D4FD42F36B(uParam0, 29))
		{
			switch (func_157(uParam0))
			{
				case 0:
					return unk_0x5C9FE32E2FF37989(uParam2);
					break;
				
				case 1:
					return unk_0x7B43775D6E0D7325(uParam1);
					break;
				
				case 2:
					return unk_0xA1BA689A4F0EEFFA(cParam1);
					break;
				
				case 3:
					return unk_0xF3DECB9D15F48CFF(cParam1);
					break;
				
				case 4:
					return unk_0xD71BD2B3964F6EDA(iParam2, cParam1);
					break;
				
				case 5:
					return unk_0x2AC46029737589CC(cParam1);
					break;
				
				case 6:
					return unk_0x63BA14E731F141F2(cParam1, unk_0x7DA173D4FD42F36B(uParam0, 27), -1);
					break;
				
				case 7:
					return unk_0x9FEA346640601D2C(iParam2);
					break;
				
				case 8:
					return unk_0x7710127C9E7C52D8(iParam2);
					break;
				
				case 9:
					return unk_0x137D26BF6B6827A1();
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

int func_157(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x7DA173D4FD42F36B(uParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_158(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_145)
	{
		if ((unk_0x58269F25C361D8C5() >= (uParam0->f_146 + uParam0->f_147) || unk_0x7DA173D4FD42F36B(Global_91310.f_20, 2)) || unk_0x7DA173D4FD42F36B(Global_91310.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (unk_0x7DA173D4FD42F36B((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0x7DA173D4FD42F36B((*uParam0)[iVar0 /*18*/], 29))
					{
						func_159(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = unk_0x58269F25C361D8C5();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_159(var uParam0)
{
	func_160(uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_160(var uParam0, char* sParam1, int iParam2)
{
	if (unk_0x7DA173D4FD42F36B(*uParam0, 30))
	{
		switch (func_157(*uParam0))
		{
			case 0:
				unk_0xBECC89ACB4E5D4ED(uParam2);
				break;
			
			case 1:
				unk_0x198E497B820DA913(uParam1);
				break;
			
			case 2:
				unk_0xEF31CD7E99173A29(uParam1);
				break;
			
			case 3:
				unk_0xC35C76B8E0A47F9F(uParam1, unk_0x7DA173D4FD42F36B(*uParam0, 28));
				break;
			
			case 4:
				unk_0x59D46EE810784603(uParam2, sParam1);
				break;
			
			case 5:
				unk_0x53CCB63EA1A462EE(sParam1);
				break;
			
			case 6:
				unk_0x63BA14E731F141F2(sParam1, unk_0x7DA173D4FD42F36B(*uParam0, 27), -1);
				break;
			
			case 7:
				unk_0xCEDDB3DA12B8D291(uParam2);
				break;
			
			case 8:
				unk_0x18DF389F542183A3(sParam1, uParam2);
				break;
			
			case 9:
				unk_0x400383B21251468A();
				break;
			
			default:
				break;
		}
		unk_0xE27C8E42A97895CF(uParam0, 29);
	}
}

void func_161()
{
	int iVar0;
	
	if (Local_83.f_1 == 1 || Local_83.f_1 == 2)
	{
		switch (Local_83.f_0)
		{
			case 0:
				Local_113 = { -158.67f, -1555.16f, 34.63f };
				fLocal_116 = 187.71f;
				Local_118 = { -155.15f, -1550.83f, 34.53f };
				fLocal_121 = 213.13f;
				Local_201 = { -68.87878f, -1818.903f, 24.55311f };
				Local_204 = { -56.0098f, -1807.029f, 27.85417f };
				Local_136[0 /*3*/] = { -157.19f, -1555.36f, 35.07f };
				Local_136[1 /*3*/] = { -157.04f, -1557.57f, 35.11f };
				Local_136[2 /*3*/] = { -159.83f, -1557.39f, 34.96f };
				Local_136[3 /*3*/] = { -156.64f, -1551.96f, 34.92f };
				Local_136[4 /*3*/] = { -156.25f, -1552.58f, 34.93f };
				Local_136[5 /*3*/] = { -153.23f, -1553.05f, 34.93f };
				Local_136[6 /*3*/] = { -155.3f, -1556.41f, 35.13f };
				fLocal_158[0] = 101.91f;
				fLocal_158[1] = 38.48f;
				fLocal_158[2] = -36.7f;
				fLocal_158[3] = -52.93f;
				fLocal_158[4] = -75.07f;
				fLocal_158[5] = 33.13f;
				fLocal_158[6] = -170.02f;
				break;
			
			case 1:
				Local_113 = { 368.72f, 294.06f, 102.96f };
				fLocal_116 = 25.17f;
				Local_118 = { 373.71f, 290.72f, 102.89f };
				fLocal_121 = 33.24f;
				Local_201 = { -523.5497f, 262.2986f, 80.01991f };
				Local_204 = { -509.1013f, 272.478f, 86.17713f };
				Local_136[0 /*3*/] = { 367.24f, 293.81f, 103.41f };
				Local_136[1 /*3*/] = { 368.73f, 296.89f, 103.41f };
				Local_136[2 /*3*/] = { 366.94f, 296.34f, 103.43f };
				Local_136[3 /*3*/] = { 375.21f, 291.85f, 103.25f };
				Local_136[4 /*3*/] = { 374.81f, 292.47f, 103.26f };
				Local_136[5 /*3*/] = { 371.51f, 291.85f, 103.31f };
				Local_136[6 /*3*/] = { 373.86f, 296.3f, 103.31f };
				fLocal_158[0] = -64.83f;
				fLocal_158[1] = -163.04f;
				fLocal_158[2] = -118.77f;
				fLocal_158[3] = 127.18f;
				fLocal_158[4] = 105.04f;
				fLocal_158[5] = -146.75f;
				fLocal_158[6] = 10.11f;
				break;
			
			case 2:
				Local_113 = { -807.98f, -2555.14f, 13.34f };
				fLocal_116 = 3.35f;
				Local_118 = { -810.1f, -2560.85f, 13.38f };
				fLocal_121 = 43.57f;
				Local_201 = { -1000.759f, -2436.092f, 17.16946f };
				Local_204 = { -986.7399f, -2424.87f, 22.16946f };
				Local_136[0 /*3*/] = { -809.45f, -2554.82f, 13.76f };
				Local_136[1 /*3*/] = { -808.47f, -2552.43f, 13.76f };
				Local_136[2 /*3*/] = { -806.32f, -2552.87f, 13.76f };
				Local_136[3 /*3*/] = { -808.59f, -2559.5f, 13.76f };
				Local_136[4 /*3*/] = { -809.1f, -2558.97f, 13.76f };
				Local_136[5 /*3*/] = { -812.82f, -2559.48f, 13.76f };
				Local_136[6 /*3*/] = { -810.72f, -2555.37f, 13.76f };
				fLocal_158[0] = -86.65f;
				fLocal_158[1] = -130.05f;
				fLocal_158[2] = 150.04f;
				fLocal_158[3] = 137.51f;
				fLocal_158[4] = 115.37f;
				fLocal_158[5] = -136.43f;
				fLocal_158[6] = 20.43f;
				break;
			
			case 3:
				Local_113 = { 778.59f, -1160.2f, 28.35f };
				fLocal_116 = 302.47f;
				Local_118 = { 778.47f, -1164.01f, 28.25f };
				fLocal_121 = 287.97f;
				Local_201 = { -1000.759f, -2436.092f, 17.16946f };
				Local_204 = { -986.7399f, -2424.87f, 22.16946f };
				Local_136[0 /*3*/] = { 778.16f, -1158.78f, 28.88f };
				Local_136[1 /*3*/] = { 780.82f, -1158.1f, 28.73f };
				Local_136[2 /*3*/] = { 781.52f, -1158.81f, 28.7f };
				Local_136[3 /*3*/] = { 779.16f, -1165.74f, 28.72f };
				Local_136[4 /*3*/] = { 779.86f, -1165.52f, 28.72f };
				Local_136[5 /*3*/] = { 780.75f, -1161.99f, 28.65f };
				Local_136[6 /*3*/] = { 783.8f, -1165.61f, 28.74f };
				fLocal_158[0] = -147.53f;
				fLocal_158[1] = 171.51f;
				fLocal_158[2] = 104.94f;
				fLocal_158[3] = 21.91f;
				fLocal_158[4] = -0.22f;
				fLocal_158[5] = 107.91f;
				fLocal_158[6] = -95.23f;
				break;
			
			case 4:
				Local_113 = { -1066.59f, -1151.04f, 1.71f };
				fLocal_116 = 258.32f;
				Local_136[0 /*3*/] = { -1065.07f, -1151.02f, 2.16f };
				Local_136[1 /*3*/] = { -1065.35f, -1149.36f, 2.16f };
				Local_136[2 /*3*/] = { -1067.13f, -1151.68f, 2.16f };
				Local_136[3 /*3*/] = { -1066.3f, -1149.38f, 2.16f };
				Local_136[4 /*3*/] = { -1066.01f, -1152.26f, 2.16f };
				fLocal_158[0] = 75.06f;
				fLocal_158[1] = 134.25f;
				fLocal_158[2] = -52.71f;
				fLocal_158[3] = -93.39f;
				fLocal_158[4] = -141.52f;
				Local_201 = { -1265.744f, -1057.199f, 5.410841f };
				Local_204 = { -1258.679f, -1049.919f, 9.443882f };
				break;
		}
		func_166(Local_83.f_0, &Local_207, &Local_210, &fLocal_213);
		iLocal_174[0] = joaat("a_f_y_hipster_02");
		iLocal_174[1] = joaat("a_m_y_hipster_02");
		iLocal_174[2] = joaat("a_m_y_hipster_02");
		iLocal_174[3] = joaat("a_f_y_hipster_02");
		iLocal_174[4] = joaat("a_m_y_hipster_02");
		iLocal_174[5] = joaat("a_m_y_hipster_02");
		iLocal_174[6] = joaat("a_m_y_hipster_02");
		if (Local_83.f_1 == 1)
		{
			cLocal_184 = "random@street_race";
			sLocal_185[0] = "_car_b_chatting_female";
			sLocal_185[1] = "_car_b_chatting_male";
			sLocal_185[2] = "_car_b_chatting_male";
			sLocal_185[3] = "_car_b_chatting_female";
			sLocal_185[4] = "_car_b_lookout";
		}
		else
		{
			cLocal_184 = "random@street_race";
			sLocal_185[0] = "_car_a_flirt_girl";
			sLocal_185[1] = "_car_a_gawker_male_a";
			sLocal_185[2] = "_car_a_gawker_male_b";
			sLocal_185[3] = "_car_b_chatting_female";
			sLocal_185[4] = "_car_b_chatting_male";
			sLocal_185[5] = "_car_b_driver";
			sLocal_185[6] = "_car_b_lookout";
			func_165(&uLocal_216, iLocal_183);
		}
		iLocal_182 = func_164(Local_83.f_1);
		iVar0 = 0;
		while (iVar0 <= (iLocal_174 - 1))
		{
			func_165(&uLocal_216, iLocal_174[iVar0]);
			iVar0++;
		}
		func_165(&uLocal_216, iLocal_182);
		func_162(&uLocal_216, cLocal_184);
		unk_0x3AA0B9D7D8B436A9(Local_201, Local_204, 0, 0);
		unk_0x973B08346B11E10C(Local_207, Local_210, fLocal_213, 0, 0, 1);
		iLocal_94 = 1;
	}
	else if (Local_83.f_1 == 3)
	{
		switch (Local_83.f_0)
		{
			case 5:
				Local_113 = { 3066.63f, 650.9f, 0.17f };
				fLocal_116 = 351.81f;
				Local_122[0 /*3*/] = { 3073.57f, 648.09f, 0.01f };
				fLocal_132[0] = 5.72f;
				Local_122[1 /*3*/] = { 3071.53f, 648.79f, -0.09f };
				fLocal_132[1] = 351.33f;
				Local_122[2 /*3*/] = { 3068.73f, 645.53f, -0.07f };
				fLocal_132[2] = 348.18f;
				break;
			
			case 6:
				Local_113 = { 3462.11f, 5192.15f, -0.04f };
				fLocal_116 = 222.9f;
				Local_122[0 /*3*/] = { 3456.64f, 5195.91f, 0.12f };
				fLocal_132[0] = 211.54f;
				Local_122[1 /*3*/] = { 3453.19f, 5192.84f, -0.17f };
				fLocal_132[1] = 201.55f;
				Local_122[2 /*3*/] = { 3451.06f, 5189.43f, -0.3f };
				fLocal_132[2] = 221.55f;
				break;
			
			case 7:
				Local_113 = { 194.64f, 3621.27f, 29.91f };
				fLocal_116 = 163.95f;
				Local_122[0 /*3*/] = { 198.62f, 3620.46f, 29.91f };
				fLocal_132[0] = 175.4f;
				Local_122[1 /*3*/] = { 202.78f, 3619.69f, 29.87f };
				fLocal_132[1] = 163.69f;
				Local_122[2 /*3*/] = { 210.14f, 3618.88f, 29.87f };
				fLocal_132[2] = 175.31f;
				break;
			
			case 8:
				Local_113 = { 627.58f, -2138.06f, -0.07f };
				fLocal_116 = 180.09f;
				Local_122[0 /*3*/] = { 643.09f, -2146.11f, -0.09f };
				fLocal_132[0] = 143.89f;
				Local_122[1 /*3*/] = { 638.21f, -2145.3f, -0.1f };
				fLocal_132[1] = 172.41f;
				Local_122[2 /*3*/] = { 633.56f, -2143.83f, -0.04f };
				fLocal_132[2] = 191.97f;
				break;
		}
		iLocal_182 = joaat("seashark");
		func_165(&uLocal_216, iLocal_182);
		func_165(&uLocal_216, joaat("a_m_y_jetski_01"));
	}
}

void func_162(var uParam0, char* sParam1)
{
	func_163(uParam0, 1, -1, sParam1, 0);
}

void func_163(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0x7DA173D4FD42F36B((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0x7DA173D4FD42F36B((*uParam0)[iVar0 /*18*/], iParam1))
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
					if (!unk_0x2F6869889D97DFED(sParam3, "NULL"))
					{
						if (unk_0x2F6869889D97DFED(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
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
		if (!unk_0x7DA173D4FD42F36B((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0xE27C8E42A97895CF(uParam0[iVar0 /*18*/], iParam1);
			unk_0xE27C8E42A97895CF(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_164(int iParam0)
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

void func_165(var uParam0, int iParam1)
{
	func_163(uParam0, 0, iParam1, "NULL", 0);
}

void func_166(int iParam0, var uParam1, var uParam2, float fParam3)
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

int func_167()
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	
	if (func_53(9))
	{
		return 0;
	}
	if (func_38(6) || func_38(7))
	{
		return 0;
	}
	if (Global_55774)
	{
		return 0;
	}
	if (func_190())
	{
		return 0;
	}
	if (Local_83.f_1 != 3 && func_43() != 1)
	{
		return 0;
	}
	if (unk_0xBF04DD936AAD574D())
	{
		return 0;
	}
	if (func_54(unk_0x06736567F820A39E()) && unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
	{
		uVar0 = unk_0xF222904387CE4946();
		if (((func_13(uVar0) && unk_0x954A6C5EBD942B9E(unk_0x06736567F820A39E(), uVar0)) && !func_189(unk_0x06736567F820A39E(), uVar0, -1)) && unk_0x79469DA5833EACA8(uVar0) != joaat("taxi"))
		{
			return 0;
		}
	}
	switch (Local_83.f_0)
	{
		case 0:
			if (Global_101160[0])
			{
				return 0;
			}
			break;
		
		case 1:
			if (Global_101160[1])
			{
				return 0;
			}
			break;
		
		case 2:
			if (Global_101160[2])
			{
				return 0;
			}
			break;
		
		case 3:
			if (Global_101160[3])
			{
				return 0;
			}
			break;
		
		case 4:
			if (Global_101160[4])
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_101150[0])
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_101150[1])
			{
				return 0;
			}
			break;
		
		case 7:
			if (Global_101150[2])
			{
				return 0;
			}
			break;
		
		case 8:
			if (Global_101150[3])
			{
				return 0;
			}
			break;
	}
	if (!func_153())
	{
		iVar1 = 0;
		while (iVar1 <= (iLocal_174 - 1))
		{
			if (func_54(uLocal_103[iVar1]))
			{
				unk_0xD6763C9F81772BAE(&uVar2);
				unk_0x33E1C998A7239394(0, iVar1 * 100);
				unk_0x841E84F12BA2CFC5(0, 1193033728, 0);
				unk_0x6F275D9063DAF754(uVar2);
				unk_0x457C4844450FF70E(uLocal_103[iVar1], uVar2);
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= (iLocal_170 - 1))
		{
			if (func_54(iLocal_170[iVar1]))
			{
				unk_0xD6763C9F81772BAE(&uVar2);
				unk_0x33E1C998A7239394(0, iVar1 * 110);
				if (func_13(iLocal_166[iVar1]) && unk_0x93E49C491856D7AD(iLocal_170[iVar1], iLocal_166[iVar1], 0))
				{
					unk_0x2AF5979C8A445B16(0, iLocal_166[iVar1], 30f, 786597);
				}
				else
				{
					unk_0x841E84F12BA2CFC5(0, 1193033728, 0);
				}
				unk_0x6F275D9063DAF754(uVar2);
				unk_0x457C4844450FF70E(iLocal_170[iVar1], uVar2);
			}
			iVar1++;
		}
		if (func_54(iLocal_112))
		{
			if (func_13(iLocal_111) && unk_0x93E49C491856D7AD(iLocal_112, iLocal_111, 0))
			{
				unk_0x2AF5979C8A445B16(iLocal_112, iLocal_111, 30f, 786597);
			}
			else
			{
				unk_0x841E84F12BA2CFC5(iLocal_112, 1193033728, 0);
			}
		}
		return 0;
	}
	if (func_169())
	{
		iVar4 = 0;
		while (iVar4 <= (iLocal_174 - 1))
		{
			if (func_54(uLocal_103[iVar4]))
			{
				unk_0xD6763C9F81772BAE(&uVar3);
				unk_0x33E1C998A7239394(0, iVar4 * 50);
				unk_0xFEDD46326A41DB46(0, unk_0x06736567F820A39E(), 500f, -1, 0, 0);
				unk_0x6F275D9063DAF754(uVar3);
				if ((iVar4 % 2) == 0)
				{
					func_168(uLocal_103[iVar4], 1);
				}
				unk_0x457C4844450FF70E(uLocal_103[iVar4], uVar3);
			}
			iVar4++;
		}
		iVar4 = 0;
		while (iVar4 <= (iLocal_170 - 1))
		{
			if (func_13(iLocal_166[iVar4]) && Local_83.f_1 == 3)
			{
				unk_0x2C78AAA55C9DFB82(iLocal_166[iVar4], 0);
			}
			if (func_54(iLocal_170[iVar4]))
			{
				unk_0xD6763C9F81772BAE(&uVar3);
				unk_0x33E1C998A7239394(0, iVar4 * 60);
				if (func_13(iLocal_166[iVar4]) && unk_0x93E49C491856D7AD(iLocal_170[iVar4], iLocal_166[iVar4], 0))
				{
					unk_0x2AF5979C8A445B16(0, iLocal_166[iVar4], 50f, 786468);
				}
				else
				{
					unk_0xFEDD46326A41DB46(0, unk_0x06736567F820A39E(), 500f, -1, 0, 0);
				}
				unk_0x6F275D9063DAF754(uVar3);
				unk_0x457C4844450FF70E(iLocal_170[iVar4], uVar3);
				if ((iVar4 % 2) == 0)
				{
					func_168(iLocal_170[iVar4], 1);
				}
			}
			iVar4++;
		}
		if (func_13(iLocal_111) && Local_83.f_1 == 3)
		{
			unk_0x2C78AAA55C9DFB82(iLocal_111, 0);
		}
		if (func_54(iLocal_112))
		{
			if (func_13(iLocal_111) && unk_0x93E49C491856D7AD(iLocal_112, iLocal_111, 0))
			{
				unk_0x2AF5979C8A445B16(iLocal_112, iLocal_111, 50f, 786468);
			}
			else
			{
				unk_0xFEDD46326A41DB46(iLocal_112, unk_0x06736567F820A39E(), 500f, -1, 0, 0);
			}
		}
		switch (Local_83.f_0)
		{
			case 0:
				Global_101160[0] = 1;
				Global_101166[0] = unk_0x1ADBAAC322D61F73();
				break;
			
			case 1:
				Global_101160[1] = 1;
				Global_101166[1] = unk_0x1ADBAAC322D61F73();
				break;
			
			case 2:
				Global_101160[2] = 1;
				Global_101166[2] = unk_0x1ADBAAC322D61F73();
				break;
			
			case 3:
				Global_101160[3] = 1;
				Global_101166[3] = unk_0x1ADBAAC322D61F73();
				break;
			
			case 4:
				Global_101160[4] = 1;
				Global_101166[4] = unk_0x1ADBAAC322D61F73();
				break;
			
			case 5:
				Global_101150[0] = 1;
				Global_101155[0] = unk_0x1ADBAAC322D61F73();
				break;
			
			case 6:
				Global_101150[1] = 1;
				Global_101155[1] = unk_0x1ADBAAC322D61F73();
				break;
			
			case 7:
				Global_101150[2] = 1;
				Global_101155[2] = unk_0x1ADBAAC322D61F73();
				break;
			
			case 8:
				Global_101150[3] = 1;
				Global_101155[3] = unk_0x1ADBAAC322D61F73();
				break;
		}
		return 0;
	}
	return 1;
}

void func_168(var uParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	if (func_54(uParam0))
	{
		iVar1 = 2;
		if (bParam1)
		{
			iVar1 = 3;
		}
		iVar2 = unk_0xA6055C735E3DD877(0, iVar1);
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
		if (unk_0xFB27C72734065835(uParam0))
		{
			func_127(uParam0, sVar0, "WAVELOAD_PAIN_MALE", 24);
		}
		else
		{
			func_127(uParam0, sVar0, "WAVELOAD_PAIN_FEMALE", 24);
		}
	}
}

int func_169()
{
	int iVar0;
	
	if (unk_0xAA2F2E1D7A88C64E(unk_0xE0BDAFA1A39552D6(), 0))
	{
		return 1;
	}
	if (Local_83.f_1 == 3)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_170 - 1))
		{
			if (unk_0xC1EDB61CE0A4B94E(iLocal_170[iVar0]))
			{
				if (unk_0xCFC04A38F256EE06(iLocal_170[iVar0]))
				{
					return 1;
				}
				else if (func_170(iLocal_170[iVar0], 1, 1116471296, 1126825984, 0, 0, 0, 0) || unk_0x681E099FF604FDCE(iLocal_170[iVar0]))
				{
					return 1;
				}
			}
			if (unk_0xC1EDB61CE0A4B94E(iLocal_166[iVar0]))
			{
				if (unk_0xBDA1F5E8A36BFA07(iLocal_166[iVar0], 0))
				{
					return 1;
				}
				else if (unk_0x1D58D319587D567F(iLocal_166[iVar0], unk_0x06736567F820A39E(), 1) && unk_0x6267527E254067CA(iLocal_166[iVar0]) < 900)
				{
					return 1;
				}
			}
			iVar0++;
		}
		if (unk_0xC1EDB61CE0A4B94E(iLocal_111))
		{
			if (unk_0xBDA1F5E8A36BFA07(iLocal_111, 0))
			{
				return 1;
			}
			else if (unk_0x1D58D319587D567F(iLocal_111, unk_0x06736567F820A39E(), 1) && unk_0x6267527E254067CA(iLocal_111) < 900)
			{
				return 1;
			}
		}
		return 0;
	}
	if (func_152(unk_0x06736567F820A39E(), Local_89, 50f) && unk_0x98D424FE7497139D(unk_0x06736567F820A39E()))
	{
		return 1;
	}
	if (unk_0xC1EDB61CE0A4B94E(iLocal_112))
	{
		if (unk_0xCFC04A38F256EE06(iLocal_112))
		{
			return 1;
		}
		else if (func_170(iLocal_112, 1, 1116471296, 1126825984, 0, 0, 0, 0))
		{
			return 1;
		}
		else if (unk_0x681E099FF604FDCE(iLocal_112))
		{
			unk_0xBA63517ADBC1E5E3(iLocal_112, 0);
			return 1;
		}
	}
	if (unk_0xC1EDB61CE0A4B94E(iLocal_111))
	{
		if (unk_0xBDA1F5E8A36BFA07(iLocal_111, 0))
		{
			return 1;
		}
		else if (unk_0x93E49C491856D7AD(unk_0x06736567F820A39E(), iLocal_111, 1) || unk_0x1D58D319587D567F(iLocal_111, unk_0x06736567F820A39E(), 1))
		{
			return 1;
		}
	}
	if (unk_0xC1EDB61CE0A4B94E(iLocal_117))
	{
		if (unk_0xBDA1F5E8A36BFA07(iLocal_117, 0))
		{
			return 1;
		}
		else if (unk_0x93E49C491856D7AD(unk_0x06736567F820A39E(), iLocal_117, 1) || unk_0x1D58D319587D567F(iLocal_117, unk_0x06736567F820A39E(), 1))
		{
			return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_174 - 1))
	{
		if (unk_0xC1EDB61CE0A4B94E(uLocal_103[iVar0]))
		{
			if (unk_0xCFC04A38F256EE06(uLocal_103[iVar0]))
			{
				return 1;
			}
			else if (func_170(uLocal_103[iVar0], 1, 1116471296, 1126825984, 0, 0, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_170(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	struct<3> Var0;
	
	if (func_14(unk_0x06736567F820A39E()) && func_14(iParam0))
	{
		if (unk_0x1D58D319587D567F(iParam0, unk_0x06736567F820A39E(), 1))
		{
			return 1;
		}
		if (func_184(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!unk_0x09AED05FAA64E81C(unk_0x06736567F820A39E(), 6))
		{
			if (unk_0x29A1618738394E16(unk_0x06736567F820A39E()))
			{
				Var0 = { unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1) - unk_0xF4745590D18D14B8(iParam0, 1) };
				if ((((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <= 5f)
				{
					return func_183(unk_0x06736567F820A39E(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_171(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_171(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_14(unk_0x06736567F820A39E()) && func_14(iParam0))
	{
		if (func_182(iParam0) || unk_0x225B26AE60B121A0(unk_0xE0BDAFA1A39552D6(), iParam0))
		{
			if (unk_0x09AED05FAA64E81C(unk_0x06736567F820A39E(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0x53B456945AE5C7DE(unk_0x06736567F820A39E(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_172(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_172(int iParam0, float fParam1)
{
	return func_173(iParam0, unk_0x06736567F820A39E(), fParam1, 1, 250, 7);
}

bool func_173(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_181(iParam0, iParam1);
	if (!func_14(iParam0) || !func_14(iParam1))
	{
		if (iVar4 != -1)
		{
			func_180(&(Local_40[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!func_177(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_176();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_40[iVar4 /*4*/].f_1 = iParam0;
		Local_40[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { unk_0xB90C4C04BACF96A1(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_174(&(Local_40[iVar4 /*4*/]), Var1, iParam1, &(Local_40[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x1ADBAAC322D61F73() - Local_40[iVar4 /*4*/].f_3) < iParam4);
}

int func_174(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7)
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
		Var1 = { func_175(iParam4, iParam7) };
		*uParam0 = unk_0x290E65F6C850B833(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = unk_0x31BBF34543BA157F(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
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
	if (unk_0x77CB3F400804EDD1(iVar7))
	{
		func_14(iVar7);
		if (unk_0x406B8F450D0105AB(iVar7) == iParam4)
		{
			if (bLocal_81)
			{
				unk_0x7906A03DA17FC0A2(Param1, unk_0xF4745590D18D14B8(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = unk_0x1ADBAAC322D61F73();
			return 1;
		}
		return 0;
	}
	if (unk_0xFCBEC4C2079B0872(iVar7))
	{
		func_14(iVar7);
		if (unk_0x0FDFEC0DD29106EE(iParam4, 0))
		{
			if (unk_0x43AB2E726FCE3BF7(iVar7) == unk_0x34E1EF1E8BCD1BFC(iParam4, 0))
			{
				if (bLocal_81)
				{
					unk_0x7906A03DA17FC0A2(Param1, unk_0xF4745590D18D14B8(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = unk_0x1ADBAAC322D61F73();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_175(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = unk_0xA6055C735E3DD877(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0xF4745590D18D14B8(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0xB90C4C04BACF96A1(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0xB90C4C04BACF96A1(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0xB90C4C04BACF96A1(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0xB90C4C04BACF96A1(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0xB90C4C04BACF96A1(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0xB90C4C04BACF96A1(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0xF4745590D18D14B8(iParam0, 1);
}

int func_176()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_40.f_0)
	{
		if ((Local_40[iVar0 /*4*/] == 0 && Local_40[iVar0 /*4*/].f_1 == 0) && Local_40[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_177(int iParam0, int iParam1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_179(unk_0xF4745590D18D14B8(iParam1, 1) - unk_0xF4745590D18D14B8(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var3 = { unk_0x1210C9F87A32AFD5(iParam0) };
	}
	else
	{
		Var3 = { func_179(unk_0xB90C4C04BACF96A1(iParam0, 31086, 0f, 5f, 0f) - unk_0xB90C4C04BACF96A1(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_178(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_178(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_179(struct<3> Param0)
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

void func_180(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_181(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_40.f_0)
	{
		if (Local_40[iVar0 /*4*/].f_1 == iParam0 && Local_40[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_182(int iParam0)
{
	if (unk_0x1D7CB59C357D17AB(unk_0xE0BDAFA1A39552D6(), iParam0) && unk_0x09AED05FAA64E81C(unk_0x06736567F820A39E(), 6))
	{
		return 1;
	}
	return 0;
}

bool func_183(int iParam0, int iParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0x1210C9F87A32AFD5(iParam0) };
	Var3 = { unk_0xF4745590D18D14B8(iParam1, 1) - unk_0xF4745590D18D14B8(iParam0, 1) };
	return (((Var0.f_0 * Var3.f_0) + (Var0.f_1 * Var3.f_1)) / unk_0x2A488C176D52CCA5(Var3, 0f, 0f, 0f)) > unk_0xD0FFB162F40A139C(fParam2);
}

int func_184(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (func_14(unk_0x06736567F820A39E()) && func_14(iParam0))
	{
		unk_0x47BF380FF078FA9F(unk_0x06736567F820A39E(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_188(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_185(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (unk_0x82D364243A5848A1(unk_0x06736567F820A39E()))
			{
				if (unk_0x98D424FE7497139D(unk_0x06736567F820A39E()))
				{
					if (unk_0xDECA6CE314913AC1(unk_0xF4745590D18D14B8(iParam0, 1), fVar0, 1))
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
				if (func_188(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_185(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_185(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0xF4745590D18D14B8(iParam0, 1) };
	Var3 = { Var0 };
	Var0.f_0 = (Var0.f_0 - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var3.f_0 = (Var3.f_0 + fParam1);
	Var3.f_1 = (Var3.f_1 + fParam1);
	Var3.f_2 = (Var3.f_2 + fParam1);
	if (bParam2)
	{
		if (((unk_0x9BF2CF8F84C73E12(unk_0xF4745590D18D14B8(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || unk_0x9BF2CF8F84C73E12(unk_0xF4745590D18D14B8(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || unk_0x9BF2CF8F84C73E12(unk_0xF4745590D18D14B8(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0x9BF2CF8F84C73E12(unk_0xF4745590D18D14B8(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_186(iParam0, fParam1))
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
			if (func_186(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x8CE40F22CEFDEA99(Var0, Var3, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_186(var uParam0, float fParam1)
{
	var uVar0;
	struct<3> Var1;
	
	if ((((unk_0xF35A6559ED6A44AB(uParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || unk_0xF35A6559ED6A44AB(uParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || unk_0xF35A6559ED6A44AB(uParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || unk_0xF35A6559ED6A44AB(uParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || unk_0xF35A6559ED6A44AB(uParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
	{
		if (func_187(uParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_187(int iParam0, struct<3> Param1, float fParam4, int iParam5)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_179(Param1 - unk_0xF4745590D18D14B8(uParam0, 1)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		Var3 = { unk_0x1210C9F87A32AFD5(iParam0) };
	}
	else
	{
		Var3 = { func_179(unk_0xB90C4C04BACF96A1(iParam0, 31086, 0f, 5f, 0f) - unk_0xB90C4C04BACF96A1(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_178(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam4 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_188(int iParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (unk_0x98D424FE7497139D(unk_0x06736567F820A39E()))
		{
			if (unk_0x53B456945AE5C7DE(unk_0x06736567F820A39E(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0xDECA6CE314913AC1(unk_0xF4745590D18D14B8(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_189(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0xBDA1F5E8A36BFA07(iParam0, 0) && !unk_0xBDA1F5E8A36BFA07(uParam1, 0))
	{
		if (unk_0x954A6C5EBD942B9E(iParam0, iParam1))
		{
			if (unk_0x4321FC7479614822(iParam1, iParam2) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_190()
{
	switch (Local_83.f_0)
	{
		case 5:
			return unk_0x7DA173D4FD42F36B(Global_101186.f_29577.f_2, 0);
			break;
		
		case 6:
			return unk_0x7DA173D4FD42F36B(Global_101186.f_29577.f_2, 1);
			break;
		
		case 7:
			return unk_0x7DA173D4FD42F36B(Global_101186.f_29577.f_2, 2);
			break;
		
		case 8:
			return unk_0x7DA173D4FD42F36B(Global_101186.f_29577.f_2, 3);
			break;
		
		case 0:
			return unk_0x7DA173D4FD42F36B(Global_101186.f_29580.f_3, 0);
			break;
		
		case 1:
			return unk_0x7DA173D4FD42F36B(Global_101186.f_29580.f_3, 1);
			break;
		
		case 2:
			return unk_0x7DA173D4FD42F36B(Global_101186.f_29580.f_3, 2);
			break;
		
		case 3:
			return unk_0x7DA173D4FD42F36B(Global_101186.f_29580.f_3, 3);
			break;
		
		case 4:
			return unk_0x7DA173D4FD42F36B(Global_101186.f_29580.f_3, 4);
			break;
	}
	return 0;
}

void func_191()
{
	iLocal_82 = 0;
	iLocal_92 = 0;
	bLocal_99 = false;
	bLocal_100 = false;
	iLocal_96 = 0;
	iLocal_97 = 0;
	iLocal_98 = 0;
	func_193(1);
	unk_0x7977497872120078("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", 0);
	unk_0x7977497872120078("WORLD_VEHICLE_PARK_PARALLEL", 0);
	if (Local_83.f_0 == 1)
	{
		uLocal_215 = func_192(374.0083f, 279.5919f, 102.3306f, 40f);
		unk_0x6C4DEE9BDB093DC6(374.0083f, 279.5919f, 102.3306f, 25f, 0, 0, 0, 0, 0);
	}
	if (Local_83.f_1 == 1 || Local_83.f_1 == 2)
	{
		uLocal_214 = func_192(Local_89, 60f);
	}
}

var func_192(struct<3> Param0, float fParam3)
{
	struct<3> Var0;
	
	Var0 = { (fParam3 / 2f), (fParam3 / 2f), (fParam3 / 2f) };
	return unk_0x33189531E55C7E33(Param0 - Var0, Param0 + Var0, 0, 1, 1, 1);
}

void func_193(bool bParam0)
{
	if (bParam0)
	{
		switch (Local_83.f_0)
		{
			case 0:
			case 1:
			case 2:
			case 3:
				func_165(&uLocal_216, joaat("banshee"));
				func_165(&uLocal_216, joaat("feltzer2"));
				func_165(&uLocal_216, joaat("sentinel"));
				break;
			
			case 4:
				func_165(&uLocal_216, joaat("bati"));
				func_165(&uLocal_216, joaat("ruffian"));
				break;
			
			case 5:
			case 6:
			case 7:
			case 8:
				func_165(&uLocal_216, joaat("seashark"));
				break;
		}
	}
	else
	{
		func_194(&uLocal_216);
	}
}

void func_194(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0x7DA173D4FD42F36B((*uParam0)[iVar0 /*18*/], 30))
		{
			func_195(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}

void func_195(var uParam0)
{
	func_196(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_196(var uParam0, char* sParam1, int iParam2)
{
	if (unk_0x7DA173D4FD42F36B(uParam0, 30))
	{
		switch (func_157(uParam0))
		{
			case 0:
				unk_0x0B87AFC0B2EECA19(uParam2);
				break;
			
			case 1:
				unk_0x6B09668CBB188BED(uParam1);
				break;
			
			case 2:
				unk_0x12F6DF5DDA266BDC(uParam1);
				break;
			
			case 3:
				unk_0x0DBF9B65543A44DC(uParam1);
				break;
			
			case 4:
				unk_0x271ED3A59A006150(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x828EA6BAF1847352(sParam1);
				break;
			
			case 6:
				unk_0xD0C4079F23F3A690();
				break;
			
			case 7:
				unk_0x2AE938938932EDE0(iParam2);
				break;
			
			case 8:
				unk_0x035F40534E3C26BD(iParam2, unk_0x7DA173D4FD42F36B(uParam0, 26));
				break;
			
			case 9:
				unk_0xA4684B3EB6CAC9B9();
				break;
			
			default:
				break;
		}
	}
}

int func_197(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return unk_0x7DA173D4FD42F36B(Global_101186.f_29580.f_1, 0);
			break;
		
		case 1:
			return unk_0x7DA173D4FD42F36B(Global_101186.f_29580.f_1, 1);
			break;
		
		case 2:
			return unk_0x7DA173D4FD42F36B(Global_101186.f_29580.f_1, 2);
			break;
		
		case 3:
			return unk_0x7DA173D4FD42F36B(Global_101186.f_29580.f_1, 3);
			break;
		
		case 4:
			return unk_0x7DA173D4FD42F36B(Global_101186.f_29580.f_1, 4);
			break;
	}
	return 0;
}

bool func_198(int iParam0, int iParam1)
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
	bVar0 = unk_0x7DA173D4FD42F36B(Global_101186.f_7851.f_99.f_219[iParam0], iParam1);
	return bVar0;
}

void func_199()
{
	if (func_200(func_201(86, 0), Local_89, 1f, 0))
	{
		Local_83.f_0 = 0;
		Local_83.f_1 = 2;
		Local_83.f_3 = 100;
		Local_83.f_4 = 20;
	}
	else if (func_200(func_201(87, 0), Local_89, 1f, 0))
	{
		Local_83.f_0 = 1;
		Local_83.f_1 = 2;
		Local_83.f_3 = 500;
		Local_83.f_4 = 18;
	}
	else if (func_200(func_201(88, 0), Local_89, 1f, 0))
	{
		Local_83.f_0 = 2;
		Local_83.f_1 = 2;
		Local_83.f_3 = 1000;
		Local_83.f_4 = 2;
	}
	else if (func_200(func_201(89, 0), Local_89, 1f, 0))
	{
		Local_83.f_0 = 3;
		Local_83.f_1 = 2;
		Local_83.f_3 = 1250;
		Local_83.f_4 = 4;
	}
	else if (func_200(func_201(90, 0), Local_89, 1f, 0))
	{
		Local_83.f_0 = 4;
		Local_83.f_1 = 1;
		Local_83.f_3 = 1500;
		Local_83.f_4 = 5;
	}
	else if (func_200(func_201(82, 0), Local_89, 1f, 0))
	{
		Local_83.f_0 = 5;
		Local_83.f_1 = 3;
		Local_83.f_3 = 0;
		Local_83.f_4 = 16;
	}
	else if (func_200(func_201(83, 0), Local_89, 1f, 0))
	{
		Local_83.f_0 = 6;
		Local_83.f_1 = 3;
		Local_83.f_3 = 0;
		Local_83.f_4 = 13;
	}
	else if (func_200(func_201(84, 0), Local_89, 1f, 0))
	{
		Local_83.f_0 = 7;
		Local_83.f_1 = 3;
		Local_83.f_3 = 0;
		Local_83.f_4 = 15;
		Local_83.f_5 = 1;
	}
	else if (func_200(func_201(85, 0), Local_89, 1f, 0))
	{
		Local_83.f_0 = 8;
		Local_83.f_1 = 3;
		Local_83.f_4 = 24;
		Local_83.f_3 = 0;
		Local_83.f_5 = 1;
	}
	else
	{
		func_202(0);
	}
}

int func_200(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0xF87C669B882D93C0((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0xF87C669B882D93C0((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0xF87C669B882D93C0((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xF87C669B882D93C0((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0xF87C669B882D93C0((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_201(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0f, 0f, 0f;
	}
	return Global_25464[iVar0 /*23*/][iParam1 /*3*/];
}

void func_202(bool bParam0)
{
	int iVar0;
	var uVar1;
	
	if (!iLocal_93)
	{
		unk_0xC07D0B27D5ABBE46(0);
		iLocal_93 = 1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (func_14(uLocal_103[iVar0]))
		{
			unk_0x1F6717C33A02B7AC(uLocal_103[iVar0]);
			unk_0x841E84F12BA2CFC5(uLocal_103[iVar0], 1193033728, 0);
			unk_0xBA63517ADBC1E5E3(uLocal_103[iVar0], 0);
			unk_0x5318F6C4C2B82FA7(&(uLocal_103[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_14(iLocal_170[iVar0]))
		{
			if (func_14(iLocal_166[iVar0]))
			{
				unk_0x1F6717C33A02B7AC(iLocal_170[iVar0]);
				if (unk_0xE39DC239584B3B40(unk_0x79469DA5833EACA8(iLocal_166[iVar0])))
				{
					unk_0x2C78AAA55C9DFB82(iLocal_166[iVar0], 0);
				}
				unk_0x2AF5979C8A445B16(iLocal_170[iVar0], iLocal_166[iVar0], 20f, 786599);
				unk_0x97C5D2BB8E47131D(iLocal_170[iVar0], 1);
				unk_0xBA63517ADBC1E5E3(iLocal_170[iVar0], 0);
				unk_0x5318F6C4C2B82FA7(&(iLocal_170[iVar0]));
				unk_0x768B37F1452D4834(&(iLocal_166[iVar0]));
			}
		}
		iVar0++;
	}
	if (func_14(iLocal_112))
	{
		if (func_14(iLocal_111))
		{
			unk_0x1F6717C33A02B7AC(iLocal_112);
			unk_0xD14E5ED9D5665519(iLocal_112, 1, 1);
			unk_0x2AF5979C8A445B16(iLocal_112, iLocal_111, 15f, 786599);
			unk_0x97C5D2BB8E47131D(iLocal_112, 1);
			unk_0xBA63517ADBC1E5E3(iLocal_112, 0);
			unk_0x5318F6C4C2B82FA7(&iLocal_112);
			unk_0x768B37F1452D4834(&iLocal_111);
		}
	}
	if (func_14(iLocal_117))
	{
		unk_0x768B37F1452D4834(&iLocal_117);
	}
	switch (Local_83.f_0)
	{
		case 5:
			func_205(82, 0, 0);
			unk_0xE27C8E42A97895CF(&(Global_101186.f_29577.f_2), 0);
			break;
		
		case 6:
			func_205(83, 0, 0);
			unk_0xE27C8E42A97895CF(&(Global_101186.f_29577.f_2), 1);
			break;
		
		case 7:
			func_205(84, 0, 0);
			unk_0xE27C8E42A97895CF(&(Global_101186.f_29577.f_2), 2);
			break;
		
		case 8:
			func_205(85, 0, 0);
			unk_0xE27C8E42A97895CF(&(Global_101186.f_29577.f_2), 3);
			break;
		
		case 0:
			func_205(86, 0, 0);
			unk_0xE27C8E42A97895CF(&(Global_101186.f_29580.f_3), 0);
			break;
		
		case 1:
			func_205(87, 0, 0);
			unk_0xE27C8E42A97895CF(&(Global_101186.f_29580.f_3), 1);
			break;
		
		case 2:
			func_205(88, 0, 0);
			unk_0xE27C8E42A97895CF(&(Global_101186.f_29580.f_3), 2);
			break;
		
		case 3:
			func_205(89, 0, 0);
			unk_0xE27C8E42A97895CF(&(Global_101186.f_29580.f_3), 3);
			break;
		
		case 4:
			func_205(90, 0, 0);
			unk_0xE27C8E42A97895CF(&(Global_101186.f_29580.f_3), 4);
			break;
	}
	if (iLocal_92)
	{
		unk_0x310F6B4E168A8F5D(1);
	}
	unk_0x5D7849E25365760A(unk_0x2E6EA44CA237AF31(10), 0);
	if (iLocal_101)
	{
		unk_0x5BC661D1FF0D731E(1);
	}
	if (iLocal_194 && !bParam0)
	{
		uVar1 = unk_0xBC628C78D8ECD5F1();
		if (unk_0x7868479D9B6694C0(uVar1))
		{
			if (!unk_0x6F54F6E4D3F3FD07(iVar1))
			{
				unk_0x4E7DF84FE130E1D6(iVar1, 1, 0);
			}
		}
	}
	if (!bParam0)
	{
		func_193(0);
	}
	if (iLocal_94)
	{
		unk_0xACE85C2D4B916D93(Local_201, Local_204, 1);
		unk_0x2CC7DF532DFC8592(Local_207, Local_210, fLocal_213, 1);
		iLocal_94 = 0;
	}
	unk_0x7977497872120078("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", 1);
	unk_0x7977497872120078("WORLD_VEHICLE_PARK_PARALLEL", 1);
	if (Local_83.f_0 == 1)
	{
		unk_0x8659A4920DA95096(uLocal_215, 0);
	}
	if (Local_83.f_1 == 1 || Local_83.f_1 == 2)
	{
		unk_0x8659A4920DA95096(uLocal_214, 0);
	}
	else
	{
		unk_0x6553935614875699(unk_0x06736567F820A39E(), 170, 0);
	}
	func_203(&uLocal_216, 0);
	unk_0xF5DF8F3392CDD07B();
}

void func_203(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_194(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_204(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
}

void func_204(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_205(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		iVar1 = unk_0x7DA173D4FD42F36B(Global_25464[iVar0 /*23*/].f_11, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0x7DA173D4FD42F36B(Global_25464[iVar0 /*23*/].f_11, 0))
	{
		unk_0xE27C8E42A97895CF(&(Global_25464[iVar0 /*23*/].f_11), 18);
		if (Global_25461 == 1)
		{
			Global_25462 = 1;
		}
		Global_25461 = 1;
	}
	if (bParam1)
	{
		unk_0xE27C8E42A97895CF(&(Global_25464[iVar0 /*23*/].f_11), 0);
		unk_0xE27C8E42A97895CF(&(Global_25464[iVar0 /*23*/].f_11), 15);
		unk_0xE27C8E42A97895CF(&(Global_25464[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0x99BCB15F954AF579(&(Global_25464[iVar0 /*23*/].f_11), 0);
		unk_0x99BCB15F954AF579(&(Global_25464[iVar0 /*23*/].f_11), 15);
	}
	if (!unk_0x7DA173D4FD42F36B(Global_25464[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0xCDB4C4200A9B478A(Global_25464[iVar0 /*23*/].f_19))
		{
			unk_0x1FA4101587A541CE(1);
			unk_0x2239ED27B231AE2E(&(Global_25464[iVar0 /*23*/].f_19));
			unk_0x1FA4101587A541CE(0);
		}
	}
}

