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
	unk_0x72F04AC2E569C3B9(1);
	Local_89 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0xD4BE58A7E3E102AC(83))
	{
		func_216(0);
	}
	func_213();
	switch (Local_83.f_1)
	{
		case 1:
		case 2:
			if (!func_212(0, 8))
			{
				func_216(0);
			}
			if (!func_211(Local_83.f_0))
			{
				func_216(0);
			}
			break;
		
		case 3:
			if (!func_212(0, 7))
			{
				func_216(0);
			}
			break;
		
		case 0:
			func_216(0);
			break;
	}
	func_205();
	if (!func_181())
	{
		func_216(0);
	}
	func_175();
	while (true)
	{
		func_172(&uLocal_216);
		if (func_181())
		{
			if (unk_0xBE1BAAD38691E6DD())
			{
				switch (iLocal_82)
				{
					case 0:
						iLocal_82 = 1;
						break;
					
					case 1:
						func_163();
						func_132();
						break;
					
					case 2:
						func_66();
						break;
					
					case 3:
						func_1();
						break;
				}
			}
			else
			{
				func_216(0);
			}
		}
		else
		{
			func_216(0);
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
	Global_1312348 = 1;
	Global_1312348.f_1 = Local_83.f_0;
	StringCopy(&(Global_1312348.f_2), func_4(), 24);
	StringCopy(&(Global_1312348.f_8), func_3(Local_83.f_0), 32);
	Global_1312348.f_16 = { Local_89 };
	Global_1312876 = 1;
	func_216(1);
}

char* func_3(int iParam0)
{
	char* sVar0;
	
	if (unk_0xDC143D98E1977B20())
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
	else if (unk_0xDB02E0A2E60C82EB())
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
	else if (unk_0x39FDED461BF385C3())
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
	else if (unk_0x77BA37DB22C66465())
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
	else if (unk_0xE434AB6E3DE89861())
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
	
	if (unk_0xDC143D98E1977B20())
	{
		sVar0 = "SPRACE";
	}
	else if (unk_0xDB02E0A2E60C82EB())
	{
		sVar0 = "2535285330962926";
	}
	else if (unk_0x39FDED461BF385C3())
	{
		sVar0 = "SPRACE";
	}
	else if (unk_0x77BA37DB22C66465())
	{
		sVar0 = "2535285330962926";
	}
	else if (unk_0xE434AB6E3DE89861())
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
	unk_0xA1E7A40E1F56E511(&Global_1312424, 0);
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
	var uVar2;
	
	Local_83.f_2 = -1;
	if (func_65(unk_0x0FA8183DAD2B3203()))
	{
		if (!unk_0xACFB2B501B3CED36(unk_0x0FA8183DAD2B3203()))
		{
			unk_0xE62BE0EB9BC772E3(unk_0x0FA8183DAD2B3203(), 0);
		}
	}
	while (!func_59())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (Local_83.f_1 != 3)
	{
		func_16(func_53(), 1, Local_83.f_3);
		iVar0 = unk_0x9B35D07DCD0F0B43() + 1500;
		iVar1 = unk_0x9B79A29933E4A8FA();
		if (func_14(iVar1))
		{
			while (!func_12(iVar1, 3f, 2, 1056964608, 0, 1, 0) || unk_0x9B35D07DCD0F0B43() < iVar0)
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
		uVar2 = unk_0x7A8732CFB5113E77();
		if (unk_0xD699DB8EAB756F25(uVar2))
		{
			unk_0x3D0DE925C0536CA0(uVar2, 0, 0);
		}
	}
	func_10();
}

void func_10()
{
	if (!func_11(0))
	{
		unk_0x42B7026D73D48D50("mission_Race");
		while (!unk_0x5F74A266852104C3("mission_Race"))
		{
			unk_0x42B7026D73D48D50("mission_Race");
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xB8BA7F44DF1575E1("mission_Race", &Local_83, 6, 29500);
	}
	unk_0x0915CE69760E0654("mission_Race");
	func_216(1);
}

bool func_11(bool bParam0)
{
	if (!bParam0 && unk_0x222F76006659B0EB(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xA2BC31158C8CEFD2(Global_76825, 0);
}

int func_12(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x572062A62138FBA2(0, 71, 1);
	unk_0x572062A62138FBA2(0, 72, 1);
	unk_0x572062A62138FBA2(0, 76, 1);
	unk_0x572062A62138FBA2(0, 73, 1);
	unk_0x572062A62138FBA2(0, 59, 1);
	unk_0x572062A62138FBA2(0, 60, 1);
	if (bParam5)
	{
		unk_0x572062A62138FBA2(0, 75, 1);
	}
	unk_0x572062A62138FBA2(0, 80, 1);
	if (!bParam6)
	{
		unk_0x572062A62138FBA2(0, 69, 1);
		unk_0x572062A62138FBA2(0, 70, 1);
		unk_0x572062A62138FBA2(0, 68, 1);
	}
	unk_0x572062A62138FBA2(0, 74, 1);
	unk_0x572062A62138FBA2(0, 86, 1);
	unk_0x572062A62138FBA2(0, 81, 1);
	unk_0x572062A62138FBA2(0, 82, 1);
	unk_0x572062A62138FBA2(0, 138, 1);
	unk_0x572062A62138FBA2(0, 136, 1);
	unk_0x572062A62138FBA2(0, 114, 1);
	unk_0x572062A62138FBA2(0, 107, 1);
	unk_0x572062A62138FBA2(0, 110, 1);
	unk_0x572062A62138FBA2(0, 89, 1);
	unk_0x572062A62138FBA2(0, 89, 1);
	unk_0x572062A62138FBA2(0, 87, 1);
	unk_0x572062A62138FBA2(0, 88, 1);
	unk_0x572062A62138FBA2(0, 113, 1);
	unk_0x572062A62138FBA2(0, 115, 1);
	unk_0x572062A62138FBA2(0, 116, 1);
	unk_0x572062A62138FBA2(0, 117, 1);
	unk_0x572062A62138FBA2(0, 118, 1);
	unk_0x572062A62138FBA2(0, 119, 1);
	unk_0x572062A62138FBA2(0, 131, 1);
	unk_0x572062A62138FBA2(0, 132, 1);
	unk_0x572062A62138FBA2(0, 123, 1);
	unk_0x572062A62138FBA2(0, 126, 1);
	unk_0x572062A62138FBA2(0, 129, 1);
	unk_0x572062A62138FBA2(0, 130, 1);
	unk_0x572062A62138FBA2(0, 133, 1);
	unk_0x572062A62138FBA2(0, 134, 1);
	unk_0xCD00E3BA36117D4B();
	func_13(iParam0);
	if ((unk_0x9B35D07DCD0F0B43() - Global_29) > 500)
	{
		unk_0x784753B14715F27F(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x9B35D07DCD0F0B43();
	if (!unk_0xF4B969E0807E76C7(iParam0, 0))
	{
		if (unk_0x01CBD71E072E9F33(unk_0xB8D4A2BAA78AB950(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_13(int iParam0)
{
	if (!unk_0xF4B969E0807E76C7(iParam0, 0))
	{
		if (unk_0x270391FCE2D64F64(iParam0))
		{
			if (unk_0x9131E47288B6D66E(iParam0))
			{
				unk_0xDF5180225AFEE790(iParam0, 0);
			}
		}
	}
}

int func_14(int iParam0)
{
	if (func_15(iParam0))
	{
		if (unk_0xD960230552BC4165(iParam0, 0))
		{
			if (!unk_0xCFBE5B663F1567A7(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_15(int iParam0)
{
	if (unk_0xD4B321D9096B01FC(iParam0))
	{
		if (!unk_0xF4B969E0807E76C7(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_16(int iParam0, int iParam1, int iParam2)
{
	if (func_52(iParam0) == 3)
	{
		return 0;
	}
	if (func_52(iParam0) == 4)
	{
		return 0;
	}
	return func_17(func_52(iParam0), 0, iParam1, iParam2, 0);
}

int func_17(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_51();
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
					func_50(99, 1);
					func_49(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_49(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_49(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_33(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_28(5))
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
							func_49(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_49(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_49(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_28(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_49(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_49(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_49(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_49(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_49(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_49(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_49(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_49(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_49(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0xB4D15BCA2CC28DF9())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_49(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_49(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_49(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_49(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_49(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_49(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_28(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_49(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_49(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_49(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_49(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_49(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_49(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_27(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_50(95, iParam3);
					break;
				
				case 1:
					func_50(97, iParam3);
					break;
				
				case 2:
					func_50(96, iParam3);
					break;
			}
			func_50(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_20(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_20(iVar1);
	}
	iVar5 = (Global_58645[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_58645[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_58645[iVar2] = 2147483647;
				}
				else
				{
					Global_58645[iVar2] = (Global_58645[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_49(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_49(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_49(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_58645[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_58645[iVar2];
			Global_58645[iVar2] = (Global_58645[iVar2] - iParam3);
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
		Global_111560.f_20559.f_233[iVar2 /*69*/].f_2[Global_111560.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_111560.f_20559.f_233[iVar2 /*69*/].f_2[Global_111560.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_111560.f_20559.f_233[iVar2 /*69*/].f_2[Global_111560.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_111560.f_20559.f_233[iVar2 /*69*/]++;
		Global_111560.f_20559.f_233[iVar2 /*69*/].f_1++;
		if (Global_111560.f_20559.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_111560.f_20559.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_19(iParam0);
	if (Global_41396 == 15)
	{
		func_18(0);
	}
	return 1;
}

void func_18(bool bParam0)
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
			Global_111560.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_111560.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_111560.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_111560.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_111560.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_111560.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_58653[iVar0 /*3*/][0] = Global_111560.f_20559[iVar0];
		Global_58653.f_31[iVar0 /*3*/][0] = Global_111560.f_20559.f_11[iVar0];
		Global_58653.f_62[iVar0 /*3*/][0] = Global_111560.f_20559.f_22[iVar0];
		Global_58653.f_93[iVar0 /*3*/][0] = Global_111560.f_20559.f_33[iVar0];
		Global_58653.f_124[iVar0 /*3*/][0] = Global_111560.f_20559.f_44[iVar0];
		Global_58653.f_155[iVar0 /*3*/][0] = Global_111560.f_20559.f_55[iVar0];
		Global_58653.f_186[iVar0 /*3*/][0] = Global_111560.f_20559.f_66[iVar0];
		Global_58653.f_217[iVar0 /*3*/][0] = Global_111560.f_20559.f_77[iVar0];
		Global_58653.f_248[iVar0 /*3*/][0] = Global_111560.f_20559.f_88[iVar0];
		if (!bParam0)
		{
			Global_58653[iVar0 /*3*/][1] = Global_111560.f_20559[iVar0];
			Global_58653.f_31[iVar0 /*3*/][1] = Global_111560.f_20559.f_11[iVar0];
			Global_58653.f_62[iVar0 /*3*/][1] = Global_111560.f_20559.f_22[iVar0];
			Global_58653.f_93[iVar0 /*3*/][1] = Global_111560.f_20559.f_33[iVar0];
			Global_58653.f_124[iVar0 /*3*/][1] = Global_111560.f_20559.f_44[iVar0];
			Global_58653.f_155[iVar0 /*3*/][1] = Global_111560.f_20559.f_55[iVar0];
			Global_58653.f_186[iVar0 /*3*/][1] = Global_111560.f_20559.f_66[iVar0];
			Global_58653.f_217[iVar0 /*3*/][1] = Global_111560.f_20559.f_77[iVar0];
			Global_58653.f_248[iVar0 /*3*/][1] = Global_111560.f_20559.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_19(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_58645[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x41410A69AD49AFCD(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x41410A69AD49AFCD(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x41410A69AD49AFCD(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_20(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_26(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_26(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_26(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_26(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_23(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_23(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_23(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_23(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_23(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_23(8274, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!unk_0x393E9918BC37548A())
	{
		if (unk_0xA2BC31158C8CEFD2(Global_111560.f_20559.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x3B76114EC84D5812(&(Global_111560.f_20559.f_471), iParam0);
		}
	}
	else if (unk_0xA2BC31158C8CEFD2(Global_111560.f_20559.f_471, iParam0) || unk_0xA2BC31158C8CEFD2(Global_2097152[func_22() /*10828*/].f_6168.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x3B76114EC84D5812(&(Global_111560.f_20559.f_471), iParam0);
		unk_0x3B76114EC84D5812(&(Global_2097152[func_22() /*10828*/].f_6168.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x6C607B5286DEE8D9("COUP_RED");
		unk_0x0AC9F8E1AFCEC860(func_21(iParam0));
		unk_0x480C449653B881B1(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_21(int iParam0)
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
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
		
		default:
	}
	return "";
}

int func_22()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_23(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_24(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x41410A69AD49AFCD(iVar0, iParam1, iParam3);
	}
}

int func_24(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_25();
		if (iVar1 > -1)
		{
			Global_2542240 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2542240 = 1;
		}
	}
	return iVar0;
}

int func_25()
{
	return Global_1312745;
}

int func_26(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_25();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0x0AF2E9D484CE7B77((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x368CD44C448A9997((iParam0 - 0)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0x0AF2E9D484CE7B77((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x368CD44C448A9997((iParam0 - 192)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0x0AF2E9D484CE7B77((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x368CD44C448A9997((iParam0 - 513)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0x0AF2E9D484CE7B77((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x368CD44C448A9997((iParam0 - 705)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x01BC1C30C6CB2497((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x368CD44C448A9997((iParam0 - 3111)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x01BC1C30C6CB2497((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x368CD44C448A9997((iParam0 - 2919)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0xCD032CF93A7EDD1E((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x368CD44C448A9997((iParam0 - 4207)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0xCD032CF93A7EDD1E((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x368CD44C448A9997((iParam0 - 4335)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0xCD032CF93A7EDD1E((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x368CD44C448A9997((iParam0 - 6029)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0xCD032CF93A7EDD1E((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x368CD44C448A9997((iParam0 - 7385)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0xCD032CF93A7EDD1E((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x368CD44C448A9997((iParam0 - 7321)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0xCD032CF93A7EDD1E((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x368CD44C448A9997((iParam0 - 9361)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0xCD032CF93A7EDD1E((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x368CD44C448A9997((iParam0 - 15369)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0xCD032CF93A7EDD1E((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x368CD44C448A9997((iParam0 - 15562)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0xCD032CF93A7EDD1E((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x368CD44C448A9997((iParam0 - 15946)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0xCD032CF93A7EDD1E((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x368CD44C448A9997((iParam0 - 18098)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0xCD032CF93A7EDD1E((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x368CD44C448A9997((iParam0 - 22066)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = unk_0xCD032CF93A7EDD1E((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x368CD44C448A9997((iParam0 - 24962)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = unk_0xCD032CF93A7EDD1E((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x368CD44C448A9997((iParam0 - 26810)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = unk_0xCD032CF93A7EDD1E((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - unk_0x368CD44C448A9997((iParam0 - 28098)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = unk_0xCD032CF93A7EDD1E((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - unk_0x368CD44C448A9997((iParam0 - 28355)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar22, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_27(int iParam0)
{
	func_50(93, iParam0);
	func_50(29, iParam0);
	func_50(30, iParam0);
}

bool func_28(int iParam0)
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
	
	if (iParam0 == 8)
	{
		return func_30(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_30(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_30(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_30(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0x71EC776E812C6A0A();
		iVar1 = func_29(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0x71EC776E812C6A0A();
		iVar3 = func_29(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0x71EC776E812C6A0A();
		iVar5 = func_29(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0x71EC776E812C6A0A();
		iVar7 = func_29(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0x71EC776E812C6A0A();
		iVar9 = func_29(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0x71EC776E812C6A0A();
		iVar11 = func_29(8274, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!unk_0x393E9918BC37548A())
	{
		return unk_0xA2BC31158C8CEFD2(Global_111560.f_20559.f_471, iParam0);
	}
	return unk_0xA2BC31158C8CEFD2(Global_2097152[func_22() /*10828*/].f_6168.f_10, iParam0);
}

int func_29(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_24(iParam1)];
	if (unk_0x367DA79FE620711B(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_30(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_25();
	}
	iVar1 = func_32(iParam0, iParam1);
	uVar2 = func_31(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x0F1A9E0CCDF4F08D(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_31(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x368CD44C448A9997((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x368CD44C448A9997((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x368CD44C448A9997((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x368CD44C448A9997((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x368CD44C448A9997((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x368CD44C448A9997((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x368CD44C448A9997((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x368CD44C448A9997((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x368CD44C448A9997((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x368CD44C448A9997((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x368CD44C448A9997((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x368CD44C448A9997((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x368CD44C448A9997((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x368CD44C448A9997((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x368CD44C448A9997((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x368CD44C448A9997((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x368CD44C448A9997((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - unk_0x368CD44C448A9997((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - unk_0x368CD44C448A9997((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - unk_0x368CD44C448A9997((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - unk_0x368CD44C448A9997((iParam0 - 28355)) * 64);
	}
	return iVar0;
}

int func_32(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_25();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x0AF2E9D484CE7B77((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x0AF2E9D484CE7B77((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x0AF2E9D484CE7B77((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x0AF2E9D484CE7B77((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x01BC1C30C6CB2497((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x01BC1C30C6CB2497((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 28098), 0, 1, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 28355), 0, 1, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	return iVar0;
}

int func_33(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x17A6988567C0F4A8(27))
	{
		return 0;
	}
	if (unk_0x367DA79FE620711B(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x367DA79FE620711B(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x367DA79FE620711B(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x367DA79FE620711B(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x41410A69AD49AFCD(joaat("num_cash_spent"), iVar1, 1);
		func_48(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_34(27, 1);
	return 1;
}

int func_34(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_35(iParam0, iParam1);
}

int func_35(int iParam0, int iParam1)
{
	if (func_47(14) && !func_46(iParam0))
	{
		return 0;
	}
	if (unk_0x17A6988567C0F4A8(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_30983 != 0 && !Global_76577)
	{
		return 0;
	}
	if (func_45(&Global_4269915))
	{
		if (func_43(&Global_4269915, iParam0))
		{
			return 0;
		}
		if (func_36(&Global_4269915, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xA123C027757634FD(iParam0))
		{
			return 0;
		}
		if (unk_0x17A6988567C0F4A8(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_36(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x17A6988567C0F4A8(iParam1))
	{
		return 0;
	}
	if (func_47(14) && !func_46(iParam1))
	{
		return 0;
	}
	if (func_43(uParam0, iParam1))
	{
		return 0;
	}
	if (func_42(uParam0) < 0f)
	{
		func_41(uParam0, 0);
	}
	func_39(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_37(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_37(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x17A6988567C0F4A8(iParam1))
	{
		return 0;
	}
	if (func_47(14) && !func_46(iParam1))
	{
		return 0;
	}
	if (func_43(uParam0, iParam1))
	{
		return 0;
	}
	if (func_42(uParam0) < 0f)
	{
		func_41(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_38(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_38(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_39(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_40(uParam0, iVar0);
		iVar0++;
	}
	func_41(uParam0, (Global_4269914 - 0.5f));
}

void func_40(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_41(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_42(var uParam0)
{
	return uParam0->f_80;
}

bool func_43(var uParam0, int iParam1)
{
	return func_44(uParam0, iParam1) != -1;
}

int func_44(var uParam0, int iParam1)
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

bool func_45(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_46(int iParam0)
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

bool func_47(int iParam0)
{
	return Global_41396 == iParam0;
}

int func_48(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x7FA0488109D2A795(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x968D4E056664C967(iParam0, iParam1);
	}
	return 0;
}

void func_49(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x367DA79FE620711B(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x41410A69AD49AFCD(iParam0, iVar0, 1);
}

void func_50(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_57213[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x393E9918BC37548A())
	{
		return;
	}
	if (Global_57213[iParam0 /*7*/])
	{
		unk_0x367DA79FE620711B(Global_57213[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x41410A69AD49AFCD(Global_57213[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_51()
{
	int iVar0;
	
	if (unk_0x543B7EB99B8B8637())
	{
		unk_0x367DA79FE620711B(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_58645[0] == iVar0)
		{
			Global_58645[0] = iVar0;
		}
		unk_0x367DA79FE620711B(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_58645[1] == iVar0)
		{
			Global_58645[1] = iVar0;
		}
		unk_0x367DA79FE620711B(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_58645[2] == iVar0)
		{
			Global_58645[2] = iVar0;
		}
	}
}

int func_52(int iParam0)
{
	return Global_1798[iParam0 /*29*/].f_17;
}

int func_53()
{
	func_54();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_54()
{
	int iVar0;
	
	if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
	{
		if (func_57(Global_111560.f_2358.f_539.f_4321) != unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()))
		{
			iVar0 = func_56(unk_0x0FA8183DAD2B3203());
			if (func_55(iVar0) && (!func_47(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_55(Global_111560.f_2358.f_539.f_4321))
				{
					Global_111560.f_2358.f_539.f_4322 = Global_111560.f_2358.f_539.f_4321;
				}
				Global_111560.f_2358.f_539.f_4323 = iVar0;
				Global_111560.f_2358.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111560.f_2358.f_539.f_4321 != 145)
			{
				Global_111560.f_2358.f_539.f_4323 = Global_111560.f_2358.f_539.f_4321;
			}
			return;
		}
	}
	Global_111560.f_2358.f_539.f_4321 = 145;
}

bool func_55(int iParam0)
{
	return iParam0 < 3;
}

int func_56(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD4B321D9096B01FC(uParam0))
	{
		iVar1 = unk_0x7F375072508F738F(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_57(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_57(int iParam0)
{
	if (func_55(iParam0))
	{
		return func_58(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_58(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

int func_59()
{
	int iVar0;
	
	iVar0 = func_60(&(Local_83.f_2), 0, 9, 0, 0);
	if (!iVar0 == 1)
	{
		return 0;
	}
	return 1;
}

int func_60(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_96177.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_64(0))
		{
			return 0;
		}
		Global_41360++;
		*uParam0 = Global_41360;
		unk_0x80DD2AE2084AED15(unk_0x7A8732CFB5113E77(), 0);
		Global_22211.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x74DBD46763D0F643(8);
		}
		Global_41396 = iParam2;
		Global_41358 = *uParam0;
		Global_41359 = iParam4;
		Global_41357 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_41357 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_41357)
			{
				if (Global_41363[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_41358 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_62(iParam2))
		{
			return 0;
		}
		if (Global_41357 == 8)
		{
			return 0;
		}
		Global_41360++;
		*uParam0 = Global_41360;
		Global_41363[Global_41357 /*4*/] = Global_41360;
		Global_41363[Global_41357 /*4*/].f_1 = iParam1;
		Global_41363[Global_41357 /*4*/].f_2 = iParam2;
		Global_41363[Global_41357 /*4*/].f_3 = 0;
		Global_41357++;
		if (iParam4 != 0)
		{
			func_61(uParam0, iParam4);
		}
	}
	return 2;
}

void func_61(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_41357 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_41357)
	{
		if (Global_41363[iVar0 /*4*/] == *uParam0)
		{
			Global_41363[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_62(int iParam0)
{
	return func_63(iParam0, Global_41396);
}

int func_63(int iParam0, int iParam1)
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

int func_64(int iParam0)
{
	if (Global_41396 == 15)
	{
		return 0;
	}
	if (func_62(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_65(int iParam0)
{
	if (func_15(iParam0))
	{
		if (!unk_0x2BF5E63466422C38(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_66()
{
	var uVar0;
	
	switch (iLocal_96)
	{
		case 0:
			if (func_130(0, -1, 0))
			{
				unk_0x0D23E3918F7AF11B(1);
				func_122();
				unk_0x597D844D285B9272(0);
				iLocal_101 = 1;
				bLocal_99 = false;
				bLocal_100 = false;
				iLocal_96 = 1;
			}
			break;
		
		case 1:
			if (func_79())
			{
				iLocal_96 = 2;
			}
			break;
		
		case 2:
			uVar0 = unk_0x7A8732CFB5113E77();
			unk_0x7385F0BCDE320A17(uVar0, 0);
			unk_0x3D0DE925C0536CA0(uVar0, 1, 0);
			func_70(0, 1, 1, 0, 0, 0);
			func_67(1, -1);
			iLocal_96 = 0;
			if (bLocal_99)
			{
				iLocal_82 = 3;
			}
			else
			{
				unk_0x597D844D285B9272(1);
				iLocal_82 = 1;
			}
			break;
	}
}

void func_67(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_69(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_22350.f_8385)
	{
		unk_0x129AB650651225C5(15);
		Global_22350.f_8385 = 0;
	}
	unk_0xF3F61F23853206CB(0f);
	if (Global_22350.f_5628[iVar0])
	{
		unk_0xA95AA80044081B2A(9, false);
		Global_22350.f_5628[iVar0] = 0;
	}
	if (Global_22350.f_5614[iVar0])
	{
		unk_0xD73CEE901CAB1716("CommonMenu");
		Global_22350.f_5614[iVar0] = 0;
	}
	if (Global_22350.f_5621[iVar0])
	{
		unk_0xD73CEE901CAB1716("MPShopSale");
		Global_22350.f_5621[iVar0] = 0;
	}
	if (bParam0)
	{
		func_68(&(Global_22350.f_5660[iVar0 /*10*/]));
		Global_22350.f_5721[iVar0] = 0;
	}
	else
	{
		Global_22350.f_5721[iVar0] = 0;
	}
}

void func_68(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x08EA887200715AD9(*uParam0))
		{
			unk_0x749CA887CB0AFEC9(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_69(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0x393E9918BC37548A() && unk_0xF77CF4BC35906B30())
		{
			iParam2 = unk_0xD048B37B1753D376();
		}
	}
	StringCopy(&cVar0, unk_0x0037AFCBDC61F351(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0xA8C462EF7D9DC564(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_22350.f_5721[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_22350.f_5721[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_22350.f_5721[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_70(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x7FFD059D4FA38133(unk_0x7C7787D2D7139A85());
		unk_0xB3414892E3E6016F(unk_0x7C7787D2D7139A85(), 1);
		unk_0xD5BB07C763F1D1D9(unk_0x7C7787D2D7139A85(), 1);
		func_78(1);
		unk_0x0C90AD17B16DE260();
		unk_0x695A752EE2ABAEDE();
		if (Global_19486.f_1 > 3)
		{
			if (unk_0x31634D65216B86B6())
			{
				unk_0x623942A4F366F9BB(0);
			}
			if (!func_77())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_76(1, iParam3, iParam2, 0);
		Global_61477 = 1;
		Global_73787 = 1;
		Global_76575 = 1;
	}
	else
	{
		func_78(0);
		unk_0x418A0C9B89A8D0B1();
		Global_61477 = 0;
		if (bParam1)
		{
			unk_0x0BDD50D0AE4552F2();
		}
		unk_0xB3414892E3E6016F(unk_0x7C7787D2D7139A85(), 0);
		unk_0xD5BB07C763F1D1D9(unk_0x7C7787D2D7139A85(), 0);
		func_76(0, iParam3, iParam2, 0);
		if (unk_0x393E9918BC37548A())
		{
			if (((((!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()) && !func_74(unk_0x7C7787D2D7139A85())) && !func_72(unk_0x7C7787D2D7139A85(), 0)) && !func_71()) && !bParam4) && !bParam5)
			{
				unk_0x04F5A8AA60EC662B(unk_0x0FA8183DAD2B3203(), 0);
			}
		}
		else if (((!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()) && !func_74(unk_0x7C7787D2D7139A85())) && !bParam4) && !bParam5)
		{
			unk_0x04F5A8AA60EC662B(unk_0x0FA8183DAD2B3203(), 0);
		}
		Global_76575 = 0;
	}
}

bool func_71()
{
	return unk_0xA2BC31158C8CEFD2(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_39.f_18, 14);
}

bool func_72(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x7C7787D2D7139A85())
	{
		bVar0 = func_73(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590446[iParam0 /*871*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xD56C8C2B75BF9665(iParam0))
		{
			bVar0 = unk_0xC69A85EEB9CA3B95(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_73(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_25();
	}
	if (Global_1312853[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_74(int iParam0)
{
	if (func_72(iParam0, 0))
	{
		return 1;
	}
	if (func_75())
	{
		if (iParam0 == unk_0x7C7787D2D7139A85())
		{
			return 1;
		}
	}
	if (unk_0xA2BC31158C8CEFD2(Global_2424073[iParam0 /*421*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_75()
{
	return unk_0xA2BC31158C8CEFD2(Global_2359302, 3);
}

int func_76(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xE434AB6E3DE89861())
	{
		if (unk_0xC4741D7AA5AAF9B6() != iParam0 && uParam2)
		{
			unk_0x0696366AB240E4CD(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_77()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_78(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xA1E7A40E1F56E511(&Global_7356, 13);
	}
	else
	{
		unk_0x3B76114EC84D5812(&Global_7356, 13);
	}
}

int func_79()
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
	
	func_121(&iVar0, &iVar1, &uVar2, &uVar3, 0);
	unk_0x1F4FA01F906F33E5(2, 201);
	unk_0x1F4FA01F906F33E5(2, 202);
	unk_0x1F4FA01F906F33E5(2, 188);
	unk_0x1F4FA01F906F33E5(2, 187);
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
	bVar4 = (iVar1 < -64 || unk_0x26BB91778477F482(2, 188));
	bVar5 = (iVar1 > 64 || unk_0x26BB91778477F482(2, 187));
	bVar6 = unk_0x26BB91778477F482(2, 201);
	bVar7 = unk_0x26BB91778477F482(2, 202);
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
			func_120(iLocal_97, 1, 1);
		}
	}
	func_80(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
	return 0;
}

void func_80(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
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
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	struct<3> Var38;
	bool bVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	float fVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	float fVar51;
	bool bVar52;
	bool bVar53;
	bool bVar54;
	bool bVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	float fVar59;
	int iVar60;
	int iVar61;
	float fVar62;
	float fVar63;
	float fVar64;
	char cVar65[64];
	char cVar81[64];
	float fVar97;
	int iVar98;
	float fVar99;
	float fVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	int iVar106;
	char cVar107[16];
	float fVar111;
	float fVar112;
	float fVar113;
	float fVar114;
	float fVar115;
	
	if (!func_69(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_117(0, bParam6))
	{
		return;
	}
	unk_0xE0EE6551C6D522E7(76, 84);
	unk_0x8CB8831CA90181C0(-0.05f, -0.05f, 0f, 0f);
	fVar57 = 0f;
	fVar58 = 0f;
	if (Global_22350)
	{
		if (func_115(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar57 = fVar37;
			fVar58 = fVar36;
			fVar57 = (fVar57 + 0f);
		}
		else
		{
			Global_22350 = 0;
		}
	}
	if (unk_0xA8C462EF7D9DC564(&(Global_22350.f_1)) == unk_0xA8C462EF7D9DC564("HIDE"))
	{
		fVar59 = Global_22348;
	}
	else
	{
		fVar59 = (((Global_22348 + fVar57) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_22349;
	}
	fVar62 = 1f;
	if (bParam7)
	{
		unk_0x419479F67BC2C70F(&iVar60, &iVar61);
		fVar63 = unk_0x6321488E002E4CEF(0);
		if (func_114())
		{
			iVar60 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar61) * fVar63));
		}
		fVar64 = (unk_0xBBDA792448DB5A89(iVar60) / unk_0xBBDA792448DB5A89(iVar61));
		fVar62 = (fVar64 / fVar63);
		if (func_114())
		{
			fVar62 = 1f;
		}
		iVar60 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar60) / fVar62));
		iVar61 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar61) / fVar62));
	}
	else
	{
		unk_0xFE8958342D00D068(&iVar60, &iVar61);
	}
	if (bParam3)
	{
		if (Global_22350.f_5218 <= 1)
		{
			func_110(Global_22350.f_5218 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0);
			Global_22350.f_6014 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_22350.f_5728)
		{
			if (unk_0xA8C462EF7D9DC564(&(Global_22350.f_1)) == unk_0xA8C462EF7D9DC564("HIDE"))
			{
				fVar51 = Global_22348;
			}
			else
			{
				if (Global_22350)
				{
					StringCopy(&cVar65, func_109(29), 64);
					StringCopy(&cVar81, func_106(29, 1), 64);
					if (unk_0xA8C462EF7D9DC564(&(Global_22350.f_7013[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_105(Global_22347, Global_22348, fParam5, (fVar57 - 0f), 0, 0, 0, 255);
						unk_0x53017FFA0ED0CAF8(&cVar65, &cVar81, (Global_22347 + (fParam5 * 0.5f)), (Global_22348 + ((fVar57 - 0f) * 0.5f)), fVar58, (fVar57 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0x53017FFA0ED0CAF8(&cVar65, &cVar81, (Global_22347 + (fParam5 * 0.5f)), (Global_22348 + ((fVar57 - 0f) * 0.5f)), fParam5, (fVar57 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_22350.f_8355)
				{
					iVar1 = Global_22350.f_8351;
					iVar2 = Global_22350.f_8352;
					iVar3 = Global_22350.f_8353;
					iVar4 = Global_22350.f_8354;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_105(Global_22347, (Global_22348 + fVar57), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar51 = (((Global_22348 + fVar57) + 0.034722f) + 0f);
				if (unk_0xA8C462EF7D9DC564(&(Global_22350.f_1)) != 0)
				{
					func_104();
					unk_0x6EF0D5178A3B92EF(&(Global_22350.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_22350.f_68)
					{
						if (Global_22350.f_5[iVar14] == 2)
						{
							unk_0x6A8B3CC08A759F44(Global_22350.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_22350.f_5[iVar14] == 3)
						{
							unk_0x10D1E89D0C3D279B(Global_22350.f_14[iVar16], Global_22350.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_22350.f_5[iVar14] == 1)
						{
							unk_0x0AC9F8E1AFCEC860(&(Global_22350.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_22350.f_5[iVar14] == 8)
						{
							unk_0x0AC9F8E1AFCEC860(&(Global_22350.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_22350.f_5[iVar14] == 5)
						{
							unk_0xA89C789CC9FEF523(&(Global_22350.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 6)
						{
							unk_0x0AC9F8E1AFCEC860(&(Global_22350.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 7)
						{
							unk_0xA89C789CC9FEF523(&(Global_22350.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 9)
						{
							unk_0xA89C789CC9FEF523(&(Global_22350.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0xBD217E52410D1B67((Global_22347 + 0.00390625f), ((Global_22348 + fVar57) + 0.00416664f), 0);
				}
				if (Global_22350.f_5735)
				{
					func_104();
					func_102((((Global_22347 + fParam5) - 0.00390625f) - func_103("CM_ITEM_COUNT", Global_22350.f_5736, Global_22350.f_5737)), ((Global_22348 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_22350.f_5736, Global_22350.f_5737);
				}
				else if (Global_22350.f_5731 > Global_22350.f_5225)
				{
					if (Global_22350.f_5734 != 0)
					{
						func_104();
						func_102((((Global_22347 + fParam5) - 0.00390625f) - func_103("CM_ITEM_COUNT", Global_22350.f_5734, Global_22350.f_5733)), ((Global_22348 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_22350.f_5734, Global_22350.f_5733);
					}
				}
			}
			iVar6 = Global_22350.f_5738;
			iVar9 = 0;
			fVar97 = fVar51;
			if (Global_22350.f_8365)
			{
				iVar1 = Global_22350.f_8361;
				iVar2 = Global_22350.f_8362;
				iVar3 = Global_22350.f_8363;
				iVar4 = Global_22350.f_8364;
			}
			else
			{
				unk_0xE0A2E1F5E75D9DF8(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_22350.f_5225 && iVar6 <= Global_22350.f_5218)
			{
				if (iVar6 >= 0)
				{
					if (Global_22350.f_5485[iVar6])
					{
						if (Global_22350.f_5356[iVar6] && iVar6 != Global_22350.f_5738)
						{
							fVar51 = (fVar51 + 0.00277776f);
						}
						fVar56 = 0.034722f;
						if (Global_22350.f_5745[iVar6] != 0f)
						{
							fVar56 = Global_22350.f_5745[iVar6];
						}
						fVar51 = (fVar51 + fVar56);
						iVar9++;
					}
				}
				iVar6++;
			}
			unk_0x53017FFA0ED0CAF8("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0.5f)), ((fVar97 + ((fVar51 - fVar97) * 0.5f)) - 0.00138888f), fParam5, (fVar51 - fVar97), 0f, 255, 255, 255, 255, 0);
			if (Global_22350.f_5731 > Global_22350.f_5225)
			{
				if (Global_22350.f_8370)
				{
					iVar1 = Global_22350.f_8366;
					iVar2 = Global_22350.f_8367;
					iVar3 = Global_22350.f_8368;
					iVar4 = Global_22350.f_8369;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_105(Global_22347, (fVar51 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { unk_0x2183E832860E57E6("CommonMenu", "shop_arrows_upANDdown") };
				Var38.f_0 = (Var38.f_0 * (0.5f / fVar62));
				Var38.f_1 = (Var38.f_1 * (0.5f / fVar62));
				if (Global_22350.f_8383)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0xE0A2E1F5E75D9DF8(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x53017FFA0ED0CAF8("CommonMenu", "shop_arrows_upANDdown", (Global_22347 + (fParam5 * 0.5f)), ((fVar51 + 0f) + (0.034722f * 0.5f)), ((Var38.f_0 / 1280f) * fVar62), ((Var38.f_1 / 720f) * fVar62), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar51 = (fVar51 + (0f + 0.034722f));
			}
			if (unk_0xA8C462EF7D9DC564(&(Global_22350.f_4690)) != 0 && Global_22350.f_4766 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_22347 + 0.0046875f);
				if (Global_22350.f_4768 != 0)
				{
					func_115(Global_22350.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_22347 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_101(fVar42);
				unk_0x0DDBAC7CA0B15647(&(Global_22350.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22350.f_4762)
				{
					if (Global_22350.f_4696[iVar14] == 2)
					{
						unk_0x6A8B3CC08A759F44(Global_22350.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_22350.f_4696[iVar14] == 3)
					{
						unk_0x10D1E89D0C3D279B(Global_22350.f_4705[iVar16], Global_22350.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_22350.f_4696[iVar14] == 1)
					{
						unk_0x0AC9F8E1AFCEC860(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 5)
					{
						unk_0xA89C789CC9FEF523(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 6)
					{
						unk_0x0AC9F8E1AFCEC860(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 7)
					{
						unk_0xA89C789CC9FEF523(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 9)
					{
						unk_0xA89C789CC9FEF523(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x1BFB9917FB9E41F8(fVar42, (fVar51 + 0.00277776f));
				unk_0xE0A2E1F5E75D9DF8(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_105(Global_22347, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22350.f_8375)
				{
					iVar1 = Global_22350.f_8371;
					iVar2 = Global_22350.f_8372;
					iVar3 = Global_22350.f_8373;
					iVar4 = Global_22350.f_8374;
				}
				else
				{
					unk_0xE0A2E1F5E75D9DF8(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x53017FFA0ED0CAF8("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0.5f)), ((fVar51 + ((((unk_0x89A357DF53D3A79F(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x89A357DF53D3A79F(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_101(fVar42);
				unk_0x6EF0D5178A3B92EF(&(Global_22350.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22350.f_4762)
				{
					if (Global_22350.f_4696[iVar14] == 2)
					{
						unk_0x6A8B3CC08A759F44(Global_22350.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_22350.f_4696[iVar14] == 3)
					{
						unk_0x10D1E89D0C3D279B(Global_22350.f_4705[iVar16], Global_22350.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_22350.f_4696[iVar14] == 1)
					{
						unk_0x0AC9F8E1AFCEC860(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 5)
					{
						unk_0xA89C789CC9FEF523(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 6)
					{
						unk_0x0AC9F8E1AFCEC860(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 7)
					{
						unk_0xA89C789CC9FEF523(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 9)
					{
						unk_0xA89C789CC9FEF523(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 8)
					{
						unk_0x0AC9F8E1AFCEC860(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xBD217E52410D1B67(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_22350.f_4768 != 0)
				{
					func_115(Global_22350.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					func_100(Global_22350.f_4768, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					unk_0x53017FFA0ED0CAF8(func_109(Global_22350.f_4768), func_106(Global_22350.f_4768, 1), ((Global_22347 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
				}
				fVar51 = (fVar51 + (((unk_0x89A357DF53D3A79F(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_22350.f_4766 > 0)
				{
					if ((unk_0x9B35D07DCD0F0B43() - Global_22350.f_4767) > Global_22350.f_4766)
					{
						StringCopy(&(Global_22350.f_4690), "", 24);
						Global_22350.f_4766 = -1;
					}
				}
			}
			if (unk_0xA8C462EF7D9DC564(&(Global_4268271.f_21)) != 0 && Global_4268271.f_65 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_22347 + 0.0046875f);
				if (Global_4268271.f_67 != 0)
				{
					func_115(Global_4268271.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_22347 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_101(fVar42);
				unk_0x0DDBAC7CA0B15647(&(Global_4268271.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4268271.f_61)
				{
					if (Global_4268271.f_25[iVar14] == 2)
					{
						unk_0x6A8B3CC08A759F44(Global_4268271.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4268271.f_25[iVar14] == 3)
					{
						unk_0x10D1E89D0C3D279B(Global_4268271.f_34[iVar16], Global_4268271.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4268271.f_25[iVar14] == 1)
					{
						unk_0x0AC9F8E1AFCEC860(&(Global_4268271.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268271.f_25[iVar14] == 5)
					{
						unk_0xA89C789CC9FEF523(&(Global_4268271.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268271.f_25[iVar14] == 6)
					{
						unk_0x0AC9F8E1AFCEC860(&(Global_4268271.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268271.f_25[iVar14] == 7)
					{
						unk_0xA89C789CC9FEF523(&(Global_4268271.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268271.f_25[iVar14] == 9)
					{
						unk_0xA89C789CC9FEF523(&(Global_4268271.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268271.f_25[iVar14] == 8)
					{
						unk_0x0AC9F8E1AFCEC860(&(Global_4268271.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x1BFB9917FB9E41F8(fVar42, (fVar51 + 0.00277776f));
				unk_0xE0A2E1F5E75D9DF8(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_105(Global_22347, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22350.f_8375)
				{
					iVar1 = Global_22350.f_8371;
					iVar2 = Global_22350.f_8372;
					iVar3 = Global_22350.f_8373;
					iVar4 = Global_22350.f_8374;
				}
				else
				{
					unk_0xE0A2E1F5E75D9DF8(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x53017FFA0ED0CAF8("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0.5f)), ((fVar51 + ((((unk_0x89A357DF53D3A79F(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x89A357DF53D3A79F(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_101(fVar42);
				unk_0x6EF0D5178A3B92EF(&(Global_4268271.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4268271.f_61)
				{
					if (Global_4268271.f_25[iVar14] == 2)
					{
						unk_0x6A8B3CC08A759F44(Global_4268271.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4268271.f_25[iVar14] == 3)
					{
						unk_0x10D1E89D0C3D279B(Global_4268271.f_34[iVar16], Global_4268271.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4268271.f_25[iVar14] == 1)
					{
						unk_0x0AC9F8E1AFCEC860(&(Global_4268271.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268271.f_25[iVar14] == 8)
					{
						unk_0x0AC9F8E1AFCEC860(&(Global_4268271.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268271.f_25[iVar14] == 5)
					{
						unk_0xA89C789CC9FEF523(&(Global_4268271.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268271.f_25[iVar14] == 6)
					{
						unk_0x0AC9F8E1AFCEC860(&(Global_4268271.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268271.f_25[iVar14] == 7)
					{
						unk_0xA89C789CC9FEF523(&(Global_4268271.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268271.f_25[iVar14] == 9)
					{
						unk_0xA89C789CC9FEF523(&(Global_4268271.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xBD217E52410D1B67(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_4268271.f_67 != 0)
				{
					func_115(Global_4268271.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_100(Global_4268271.f_67, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					unk_0x53017FFA0ED0CAF8(func_109(Global_4268271.f_67), func_106(Global_4268271.f_67, 1), ((Global_22347 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
				}
				fVar51 = (fVar51 + (((unk_0x89A357DF53D3A79F(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4268271.f_65 > 0)
				{
					if ((unk_0x9B35D07DCD0F0B43() - Global_4268271.f_66) > Global_4268271.f_65)
					{
						StringCopy(&(Global_4268271.f_21), "", 16);
						Global_4268271.f_65 = -1;
					}
				}
			}
			func_95(iVar60, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			unk_0xE0EE6551C6D522E7(76, 84);
			unk_0x8CB8831CA90181C0(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_22350.f_5728)
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
			iVar98 = Global_22350.f_5218;
			if (Global_22350.f_5729)
			{
				iVar98 = (Global_22350.f_5732 - 1);
			}
			fVar99 = 0f;
			fVar100 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar98)
			{
				fVar56 = 0.034722f;
				if (Global_22350.f_5745[iVar6] != 0f)
				{
					fVar56 = Global_22350.f_5745[iVar6];
				}
				if (Global_22350.f_5729)
				{
					iVar6 = Global_22350.f_8006[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_22350.f_5738 && iVar9 < Global_22350.f_5225)
				{
					bVar33 = true;
					if (Global_22350.f_5739 == iVar6)
					{
						fVar100 = fVar99;
					}
					if (Global_22350.f_5356[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_22350.f_5879[iVar6] = fVar35;
				fVar34 = (Global_22347 + 0.0046875f);
				bVar41 = false;
				bVar32 = Global_22350.f_5739 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar102 = 255;
					iVar103 = 255;
					iVar104 = 255;
					iVar105 = 255;
					if (Global_22350.f_8377)
					{
						unk_0xE0A2E1F5E75D9DF8(Global_22350.f_8376, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					else
					{
						unk_0xE0A2E1F5E75D9DF8(1, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					unk_0x53017FFA0ED0CAF8("CommonMenu", "Gradient_Nav", (Global_22347 + (fParam5 * 0.5f)), (((fVar59 + fVar100) + (0.00277776f * IntToFloat(iVar12))) + (fVar56 * 0.5f)), fParam5, fVar56, 0f, iVar102, iVar103, iVar104, iVar105, 0);
					Global_22350.f_5877 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_22350.f_5226)
				{
					if (unk_0xA2BC31158C8CEFD2(Global_22350.f_5089[iVar6], iVar8) || Global_22350.f_5056[iVar8] == 5)
					{
						if (Global_22350.f_5729)
						{
							iVar19 = Global_22350.f_8022[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar20 = Global_22350.f_8063[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar21 = Global_22350.f_8104[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar22 = Global_22350.f_8145[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar23 = Global_22350.f_8186[((iVar9 * Global_22350.f_5226) + iVar8)];
						}
						else
						{
							Global_22350.f_8022[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar19;
							Global_22350.f_8063[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar20;
							Global_22350.f_8104[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar21;
							Global_22350.f_8145[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar22;
							Global_22350.f_8186[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar23;
						}
						iVar106 = 0;
						bVar55 = false;
						if (Global_22350.f_6011[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_22350.f_6008[0])
							{
								bVar55 = true;
								iVar106 = 0;
							}
						}
						if (Global_22350.f_6011[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_22350.f_6008[1])
							{
								bVar55 = true;
								iVar106 = 1;
							}
						}
						if (Global_22350.f_5062[iVar8] != -1f)
						{
							fVar34 = ((Global_22347 + 0.0046875f) + Global_22350.f_5062[iVar8]);
						}
						if ((iVar8 < 4 && Global_22350.f_5062[iVar8 + 1] != -1f) && fVar34 < Global_22350.f_5062[iVar8 + 1])
						{
							fVar46 = (Global_22350.f_5062[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar46 = (((Global_22347 + Global_22349) - 0.0046875f) - fVar34);
						}
						if ((Global_22350.f_5075[iVar8] && Global_22350.f_5874) && bVar32)
						{
							bVar54 = true;
						}
						else
						{
							bVar54 = false;
						}
						switch (Global_22350.f_5056[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										fVar43 = 0f;
										fVar44 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (unk_0xA8C462EF7D9DC564(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
										{
											bVar52 = false;
											bVar53 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_22350.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													bVar53 = true;
												}
												else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													bVar52 = true;
												}
												iVar14++;
											}
											func_93(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, iVar106, bVar53, bVar52);
											unk_0xD4445EEB71902566(&(Global_22350.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0xA8C462EF7D9DC564(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x0AC9F8E1AFCEC860(&(Global_22350.f_73[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0xA8C462EF7D9DC564(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x0AC9F8E1AFCEC860(&(Global_22350.f_73[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0xA8C462EF7D9DC564(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xA89C789CC9FEF523(&(Global_2459539[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0xA8C462EF7D9DC564(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x0AC9F8E1AFCEC860(&(Global_2459539[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0xA8C462EF7D9DC564(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xA89C789CC9FEF523(&(Global_2459539[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0xA8C462EF7D9DC564(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xA89C789CC9FEF523(&(Global_2459539[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0xA8C462EF7D9DC564(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x6A8B3CC08A759F44(Global_22350.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0xA8C462EF7D9DC564(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x10D1E89D0C3D279B(Global_22350.f_4175[(iVar21 + iVar27)], Global_22350.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (unk_0xA8C462EF7D9DC564(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
										{
											fVar43 = unk_0x90203BB77E2FECC8(1);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_115(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar44 = (fVar44 + fVar36);
													if (iVar14 > 0)
													{
														fVar44 = (fVar44 - (0.00078125f * 4f));
													}
													if ((Global_22350.f_4433[(iVar22 + iVar14)] == 2 || Global_22350.f_4433[(iVar22 + iVar14)] == 50) || Global_22350.f_4433[(iVar22 + iVar14)] == 60)
													{
														fVar44 = (fVar44 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar42 = 0f;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - (fVar43 + fVar44)) + (0.00078125f * 1f)));
										}
										else if (Global_22350.f_5083[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - ((fVar43 + fVar44) * 0.5f)));
										}
										Global_22350.f_8227[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar42;
										Global_22350.f_8268[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar43;
										Global_22350.f_8309[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar44;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											iVar101 = (iVar8 - 1);
											while (iVar101 >= 0)
											{
												if (Global_22350.f_5083[iVar101] == 2)
												{
													Global_22350.f_8227[((iVar9 * Global_22350.f_5226) + iVar101)] = (Global_22350.f_8227[((iVar9 * Global_22350.f_5226) + iVar101)] - Global_22350.f_5068[iVar8]);
												}
												iVar101 = (iVar101 + -1);
											}
										}
									}
									else
									{
										fVar42 = Global_22350.f_8227[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar43 = Global_22350.f_8268[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar44 = Global_22350.f_8309[((iVar9 * Global_22350.f_5226) + iVar8)];
									}
									if (bVar54)
									{
										if (func_115(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_115(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_100(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0x53017FFA0ED0CAF8(func_109(26), func_106(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										if (func_115(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_115(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_100(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0x53017FFA0ED0CAF8(func_109(27), func_106(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (unk_0xA8C462EF7D9DC564(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar52 = false;
										bVar53 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_22350.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												bVar53 = true;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												bVar52 = true;
											}
											iVar14++;
										}
										func_93(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, bVar53, bVar52);
										if (Global_22350.f_8381 && Global_22350.f_8382 == iVar6)
										{
											func_92(bVar32);
										}
										unk_0x6EF0D5178A3B92EF(&(Global_22350.f_73[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (unk_0xA8C462EF7D9DC564(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x0AC9F8E1AFCEC860(&(Global_22350.f_73[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (unk_0xA8C462EF7D9DC564(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x0AC9F8E1AFCEC860(&(Global_22350.f_73[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 5)
										{
											if (unk_0xA8C462EF7D9DC564(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xA89C789CC9FEF523(&(Global_2459539[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 6)
										{
											if (unk_0xA8C462EF7D9DC564(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x0AC9F8E1AFCEC860(&(Global_2459539[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 7)
										{
											if (unk_0xA8C462EF7D9DC564(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xA89C789CC9FEF523(&(Global_2459539[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 9)
										{
											if (unk_0xA8C462EF7D9DC564(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xA89C789CC9FEF523(&(Global_2459539[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 2)
										{
											if (unk_0xA8C462EF7D9DC564(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x6A8B3CC08A759F44(Global_22350.f_3918[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 3)
										{
											if (unk_0xA8C462EF7D9DC564(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x10D1E89D0C3D279B(Global_22350.f_4175[(iVar21 + iVar27)], Global_22350.f_4304[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_22350.f_4433[(iVar22 + iVar28)] == 2 || Global_22350.f_4433[(iVar22 + iVar28)] == 50) || Global_22350.f_4433[(iVar22 + iVar28)] == 60)
											{
												if (func_115(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (func_115(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_100(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
														if (iVar5 == 1)
														{
															if (Global_22350.f_5083[iVar8] == 2)
															{
																unk_0x53017FFA0ED0CAF8(func_109(Global_22350.f_4433[(iVar22 + iVar28)]), func_106(Global_22350.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else
															{
																unk_0x53017FFA0ED0CAF8(func_109(Global_22350.f_4433[(iVar22 + iVar28)]), func_106(Global_22350.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
														}
														fVar42 = (fVar42 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (unk_0xA8C462EF7D9DC564(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_22350.f_5083[iVar8] == 2)
										{
											unk_0xBD217E52410D1B67(((fVar34 + fVar42) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											unk_0xBD217E52410D1B67((fVar34 + fVar42), fVar35, 0);
											if (func_91() && unk_0x222F76006659B0EB(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													func_93(0, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, bVar53, bVar52);
													StringCopy(&cVar107, "TEST_LABEL", 16);
													fVar111 = 0f;
													fVar112 = 55f;
													fVar113 = 0.0185f;
													fVar114 = 0.004f;
													fVar115 = 0.02f;
													unk_0x8E0F19C19C409DDB(0f, (0.35f * 0.7f));
													unk_0x7DCBD85F58FA8F39(255, 255, 255, 150);
													unk_0x6276EB2A4CC7B039((fVar34 - (fVar115 * 0.6f)), (fVar35 + (fVar113 * 0.75f)), 0.0175f, 0.035f, unk_0xF34EE736CF047844(fVar111), unk_0xF34EE736CF047844(fVar111), unk_0xF34EE736CF047844(fVar111), unk_0xF34EE736CF047844(fVar112), 0);
													unk_0x6EF0D5178A3B92EF(&cVar107);
													unk_0x6A8B3CC08A759F44((Global_22350.f_5738 + iVar30));
													unk_0xBD217E52410D1B67((fVar34 - fVar115), (fVar35 + fVar114), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar42 = (fVar42 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_22350.f_4433[(iVar22 + iVar14)] != 2 && Global_22350.f_4433[(iVar22 + iVar14)] != 50) && Global_22350.f_4433[(iVar22 + iVar14)] != 60)
											{
												if (func_115(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_115(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_100(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
															if (Global_22350.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0x53017FFA0ED0CAF8(func_109(Global_22350.f_4433[(iVar22 + iVar14)]), func_106(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), (Global_22347 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else if (Global_22350.f_5083[iVar8] == 2)
															{
																unk_0x53017FFA0ED0CAF8(func_109(Global_22350.f_4433[(iVar22 + iVar14)]), func_106(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else
															{
																unk_0x53017FFA0ED0CAF8(func_109(Global_22350.f_4433[(iVar22 + iVar14)]), func_106(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
														}
													}
													fVar42 = (fVar42 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar41 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										func_93(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										if (Global_22350.f_8381 && Global_22350.f_8382 == iVar6)
										{
											func_92(bVar32);
										}
										unk_0xD4445EEB71902566("NUMBER");
										unk_0x6A8B3CC08A759F44(Global_22350.f_3918[iVar20]);
										fVar43 = unk_0x90203BB77E2FECC8(1);
										fVar42 = 0f;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_22350.f_5083[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_22350.f_8227[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar42;
										Global_22350.f_8268[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_22350.f_8227[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar43 = Global_22350.f_8268[((iVar9 * Global_22350.f_5226) + iVar8)];
									}
									if (bVar54)
									{
										if (func_115(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_115(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_100(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0x53017FFA0ED0CAF8(func_109(26), func_106(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										if (func_115(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_115(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_100(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0x53017FFA0ED0CAF8(func_109(27), func_106(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_93(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										func_90((fVar34 + fVar42), fVar35, "NUMBER", Global_22350.f_3918[iVar20], 0);
									}
								}
								bVar41 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										func_93(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										if (Global_22350.f_8381 && Global_22350.f_8382 == iVar6)
										{
											func_92(bVar32);
										}
										unk_0xD4445EEB71902566("NUMBER");
										unk_0x10D1E89D0C3D279B(Global_22350.f_4175[iVar21], Global_22350.f_4304[iVar21]);
										fVar43 = unk_0x90203BB77E2FECC8(1);
										fVar42 = 0f;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_22350.f_5083[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_22350.f_8227[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar42;
										Global_22350.f_8268[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_22350.f_8227[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar43 = Global_22350.f_8268[((iVar9 * Global_22350.f_5226) + iVar8)];
									}
									if (bVar54)
									{
										if (func_115(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_115(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_100(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0x53017FFA0ED0CAF8(func_109(26), func_106(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										if (func_115(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_115(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_100(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0x53017FFA0ED0CAF8(func_109(27), func_106(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
									}
									func_93(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
									func_89((fVar34 + fVar42), fVar35, "NUMBER", Global_22350.f_4175[iVar21], Global_22350.f_4304[iVar21]);
								}
								bVar41 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_115(Global_22350.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_22350.f_5729)
										{
											fVar44 = fVar36;
											fVar42 = 0f;
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar44) + (0.00078125f * 1f)));
											}
											else if (Global_22350.f_5083[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar44 * 0.5f)));
											}
											Global_22350.f_8227[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar42;
											Global_22350.f_8309[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar44;
										}
										else
										{
											fVar42 = Global_22350.f_8227[((iVar9 * Global_22350.f_5226) + iVar8)];
											fVar44 = Global_22350.f_8309[((iVar9 * Global_22350.f_5226) + iVar8)];
										}
										if (bVar54)
										{
											if (func_115(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_22350.f_5083[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_115(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_100(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														unk_0x53017FFA0ED0CAF8(func_109(26), func_106(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
													}
												}
											}
											if (func_115(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_115(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_100(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														unk_0x53017FFA0ED0CAF8(func_109(27), func_106(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_115(Global_22350.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_100(Global_22350.f_4433[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
												unk_0x53017FFA0ED0CAF8(func_109(Global_22350.f_4433[iVar22]), func_106(Global_22350.f_4433[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), (fVar36 * func_88(Global_22350.f_4433[iVar22])), (fVar37 * func_88(Global_22350.f_4433[iVar22])), 0f, iVar47, iVar48, iVar49, iVar50, 0);
											}
										}
									}
								}
								bVar41 = true;
								iVar22++;
								break;
							
							case 5:
								bVar41 = true;
								break;
						}
						if (Global_22350.f_5056[iVar8] == 5)
						{
							if (Global_22350.f_5068[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_22350.f_5068[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_22350.f_5068[iVar8]);
							if (Global_22350.f_5075[iVar8])
							{
								if (func_115(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_22350.f_5068[iVar8]);
					}
					iVar8++;
				}
				if (bVar41)
				{
					if (bVar33)
					{
						Global_22350.f_8006[iVar9] = iVar6;
						Global_22350.f_5740 = iVar6;
						iVar9++;
						if (Global_22350.f_5356[iVar6])
						{
							iVar13++;
						}
						if (Global_22350.f_5745[iVar6] != 0f)
						{
							fVar99 = (fVar99 + Global_22350.f_5745[iVar6]);
						}
						else
						{
							fVar99 = (fVar99 + 0.034722f);
						}
					}
					if (!Global_22350.f_5728)
					{
						Global_22350.f_5485[iVar6] = 1;
						if (Global_22350.f_5227[iVar6])
						{
							if (bVar32)
							{
								Global_22350.f_5734 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_22350.f_5734 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_22350.f_5728)
			{
				Global_22350.f_5730 = ((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12)));
				Global_22350.f_5733 = iVar11;
				Global_22350.f_5731 = iVar10;
				Global_22350.f_5728 = 1;
			}
		}
		if (!Global_22350.f_5729)
		{
			Global_22350.f_5732 = iVar9;
			Global_22350.f_5729 = 1;
		}
		iVar5++;
	}
	Global_22350.f_5876 = fVar51;
	Global_22350.f_5878 = unk_0x9B35D07DCD0F0B43();
	unk_0xF3F61F23853206CB(Global_22350.f_5876);
	if (!Global_22350.f_8350)
	{
		func_82(0);
	}
	Global_22350.f_8350 = 0;
	if (bParam2)
	{
		unk_0x0AF55029F939BA65(10);
	}
	unk_0x0AF55029F939BA65(6);
	unk_0x0AF55029F939BA65(7);
	unk_0x0AF55029F939BA65(9);
	unk_0x0AF55029F939BA65(8);
	if (bParam0)
	{
		func_81(1);
	}
	unk_0x01C11ACADC5D0A74();
}

void func_81(int iParam0)
{
	Global_1375006.f_1100 = iParam0;
}

void func_82(int iParam0)
{
	if (func_87())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_86(0))
		{
			func_83(iParam0);
		}
		unk_0xA1E7A40E1F56E511(&Global_7357, 2);
	}
}

void func_83(int iParam0)
{
	if (func_87())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_85())
		{
			func_84(1, 1);
		}
		else
		{
			func_84(0, 0);
		}
	}
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		unk_0xA1E7A40E1F56E511(&Global_7357, 16);
	}
	if (unk_0x31634D65216B86B6())
	{
		unk_0x623942A4F366F9BB(0);
	}
	Global_20805 = 5;
	if (iParam0 == 1)
	{
		unk_0xA1E7A40E1F56E511(&Global_7356, 30);
	}
	else
	{
		unk_0x3B76114EC84D5812(&Global_7356, 30);
	}
	if (!func_77())
	{
		Global_19486.f_1 = 3;
	}
}

void func_84(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_86(0))
		{
			Global_19664 = 1;
			if (bParam1)
			{
				unk_0xB1B52CCC3333E09F(&Global_19423);
			}
			Global_19414 = { Global_19432[Global_19431 /*3*/] };
			unk_0x4577629BF7B43F7F(Global_19414);
		}
	}
	else if (Global_19664 == 1)
	{
		Global_19664 = 0;
		Global_19414 = { Global_19439[Global_19431 /*3*/] };
		if (bParam1)
		{
			unk_0x4577629BF7B43F7F(Global_19423);
		}
		else
		{
			unk_0x4577629BF7B43F7F(Global_19414);
		}
	}
}

bool func_85()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 5);
}

int func_86(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19486.f_1 > 3)
		{
			if (unk_0xA2BC31158C8CEFD2(Global_7356, 14))
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
	if (unk_0x222F76006659B0EB(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_87()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 19);
}

float func_88(int iParam0)
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
		case 52:
		case 43:
		case 44:
		case 45:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_89(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	unk_0x6EF0D5178A3B92EF(sParam2);
	unk_0x10D1E89D0C3D279B(uParam3, uParam4);
	unk_0xBD217E52410D1B67(fParam0, fParam1, 0);
}

void func_90(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x6EF0D5178A3B92EF(sParam2);
	unk_0x6A8B3CC08A759F44(iParam3);
	unk_0xBD217E52410D1B67(fParam0, fParam1, iParam4);
}

var func_91()
{
	return unk_0x9742C47C6EA02281(-1762644250);
}

void func_92(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0xE0A2E1F5E75D9DF8(Global_22350.f_8378[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0xE0A2E1F5E75D9DF8(Global_22350.f_8378[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0x7DCBD85F58FA8F39(iVar0, iVar1, iVar2, 255);
}

void func_93(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_94(Global_22350.f_6011[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0xE0A2E1F5E75D9DF8(1, &iVar0, &iVar1, &iVar2, &iVar3);
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
			unk_0x7DCBD85F58FA8F39(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0xE0A2E1F5E75D9DF8(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x7DCBD85F58FA8F39(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0xE0A2E1F5E75D9DF8(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x7DCBD85F58FA8F39(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0x7DCBD85F58FA8F39(155, 155, 155, 255);
		}
		else
		{
			unk_0x7DCBD85F58FA8F39(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0x7DCBD85F58FA8F39(0, 0, 0, unk_0xF34EE736CF047844((255f * 0.8f)));
		}
		else
		{
			unk_0xE0A2E1F5E75D9DF8(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0x7DCBD85F58FA8F39(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0x7DCBD85F58FA8F39(155, 155, 155, 255);
	}
	else
	{
		unk_0x7DCBD85F58FA8F39(155, 155, 155, 255);
	}
	unk_0x8E0F19C19C409DDB(0f, 0.35f);
	unk_0xC81BF7585F33A61A(1);
	if (bParam5)
	{
		unk_0x8E0F19C19C409DDB(0f, 0.425f);
		unk_0xDBA848DABDEF9021(4);
	}
	else if (bParam6)
	{
		unk_0x8E0F19C19C409DDB(0f, 0.425f);
		unk_0xDBA848DABDEF9021(6);
	}
	else
	{
		unk_0xDBA848DABDEF9021(0);
	}
	unk_0xF3AAD5EF5E952D4E(0f, 1f);
	unk_0xA0147851A8831777(0);
	unk_0xF5B822826ECBA108(0, 0, 0, 0, 0);
	unk_0x0E4AB43BE38970E3(0, 0, 0, 0, 0);
}

void func_94(int iParam0, var uParam1, var uParam2, var uParam3)
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

void func_95(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_69(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_117(bParam4, bParam8))
	{
		return;
	}
	if (func_98())
	{
		return;
	}
	if (unk_0x4ABA84DE907E0474())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_72(unk_0x7C7787D2D7139A85(), 0))
		{
			return;
		}
	}
	if (unk_0xE434AB6E3DE89861())
	{
		if (unk_0x2F972EA053458B78() == 0 || unk_0x4ABA84DE907E0474())
		{
			return;
		}
	}
	if (Global_22350.f_4769 != 0)
	{
		if (unk_0x6BFFC38B3F0D92C2(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_22350.f_4769)
			{
				if (Global_22350.f_5026[iVar1] != 359)
				{
					StringCopy(&(Global_22350.f_4771[iVar1 /*16*/]), unk_0x357127A2E350E9F6(2, Global_22350.f_5026[iVar1], 1), 64);
				}
				else if (Global_22350.f_5039[iVar1] != 32)
				{
					StringCopy(&(Global_22350.f_4771[iVar1 /*16*/]), unk_0xEEC24BCBD00C5C50(2, Global_22350.f_5039[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_22350.f_4770 = 0;
		}
		if (!Global_22350.f_4770)
		{
			unk_0xF1BC72CEC2746995(Global_22350.f_5660[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xAC7C2DE2DDC7AF03();
			unk_0xF1BC72CEC2746995(Global_22350.f_5660[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0xD435957F6275B434((1f - (Global_22350.f_5081 / 100f)));
			unk_0xAC7C2DE2DDC7AF03();
			if (unk_0xE434AB6E3DE89861())
			{
				unk_0xF1BC72CEC2746995(Global_22350.f_5660[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x282C78036676E0C2(1);
				unk_0xAC7C2DE2DDC7AF03();
			}
			iVar1 = 0;
			while (iVar1 < Global_22350.f_4769)
			{
				if (unk_0xA8C462EF7D9DC564(&(Global_22350.f_4964[iVar1 /*4*/])) != unk_0xA8C462EF7D9DC564("PREV"))
				{
					unk_0xF1BC72CEC2746995(Global_22350.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0xD02F24F3E2DB263A(iVar1);
					func_97(&(Global_22350.f_4771[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0xA8C462EF7D9DC564(&(Global_22350.f_4964[iVar2 /*4*/])) == unk_0xA8C462EF7D9DC564("PREV"))
					{
						func_97(&(Global_22350.f_4771[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_22350.f_5013[iVar1] == -1)
					{
						func_96(&(Global_22350.f_4964[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_22350.f_5013[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						unk_0x759AC38FBC6CCA9E(&(Global_22350.f_4964[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0xC5B1209EEC9E6603(iVar3, 70);
						}
						else
						{
							unk_0x6A8B3CC08A759F44(iVar3);
						}
						unk_0x81019766FF500CCA();
					}
					if (unk_0xE434AB6E3DE89861())
					{
						if (Global_22350.f_5026[iVar1] != 359 && unk_0xA2BC31158C8CEFD2(Global_22350.f_5052, iVar1))
						{
							unk_0x282C78036676E0C2(1);
							unk_0xD02F24F3E2DB263A(Global_22350.f_5026[iVar1]);
						}
						else
						{
							unk_0x282C78036676E0C2(0);
							unk_0xD02F24F3E2DB263A(359);
						}
					}
					unk_0xAC7C2DE2DDC7AF03();
				}
				iVar1++;
			}
			if (unk_0xA8C462EF7D9DC564(&(Global_4268271.f_16)) != unk_0xA8C462EF7D9DC564(""))
			{
				unk_0xF1BC72CEC2746995(Global_22350.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0xD02F24F3E2DB263A(Global_22350.f_4769);
				func_97(&Global_4268271);
				if (Global_4268271.f_20 == -1)
				{
					func_96(&(Global_4268271.f_16));
				}
				else
				{
					iVar4 = Global_22350.f_5013[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					unk_0x759AC38FBC6CCA9E(&(Global_4268271.f_16));
					if (bParam5)
					{
						unk_0xC5B1209EEC9E6603(iVar4, 70);
					}
					else
					{
						unk_0x6A8B3CC08A759F44(iVar4);
					}
					unk_0x81019766FF500CCA();
				}
				unk_0xAC7C2DE2DDC7AF03();
			}
			unk_0xF1BC72CEC2746995(Global_22350.f_5660[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0xD02F24F3E2DB263A(0);
			unk_0xD02F24F3E2DB263A(0);
			unk_0xD02F24F3E2DB263A(0);
			unk_0xD02F24F3E2DB263A(80);
			unk_0xAC7C2DE2DDC7AF03();
			unk_0xF1BC72CEC2746995(Global_22350.f_5660[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_22350.f_5082)
			{
				unk_0xD02F24F3E2DB263A(1);
			}
			else
			{
				unk_0xD02F24F3E2DB263A(0);
			}
			unk_0xAC7C2DE2DDC7AF03();
			Global_22350.f_4770 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_22350.f_4769)
		{
			if (Global_22350.f_5013[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0xF1BC72CEC2746995(Global_22350.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0xD02F24F3E2DB263A(iVar1);
					unk_0x759AC38FBC6CCA9E(&(Global_22350.f_4964[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0xC5B1209EEC9E6603(iParam2, 70);
					}
					else
					{
						unk_0x6A8B3CC08A759F44(iParam2);
					}
					unk_0x81019766FF500CCA();
					unk_0xAC7C2DE2DDC7AF03();
				}
			}
			iVar1++;
		}
		if (Global_4268271.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0xF1BC72CEC2746995(Global_22350.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0xD02F24F3E2DB263A(iVar1);
				unk_0x759AC38FBC6CCA9E(&(Global_4268271.f_16));
				if (bParam5)
				{
					unk_0xC5B1209EEC9E6603(iParam2, 70);
				}
				else
				{
					unk_0x6A8B3CC08A759F44(iParam2);
				}
				unk_0x81019766FF500CCA();
				unk_0xAC7C2DE2DDC7AF03();
			}
		}
		unk_0xE0EE6551C6D522E7(76, 66);
		unk_0x8CB8831CA90181C0(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_22350.f_8385)
			{
				unk_0x54A18B54F134D59D(15, 0f, -0.0375f);
				Global_22350.f_8385 = 1;
			}
		}
		else if (Global_22350.f_8385)
		{
			unk_0x129AB650651225C5(15);
			Global_22350.f_8385 = 0;
		}
		unk_0x01C11ACADC5D0A74();
		if (Global_22350.f_5055)
		{
			unk_0xE0EE6551C6D522E7(82, 66);
			unk_0x8CB8831CA90181C0(0f, 0f, 0f, 0f);
			unk_0x1C65AC18AFC2CA39(Global_22350.f_5660[iVar0 /*10*/], Global_22350.f_5053, Global_22350.f_5054, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x01C11ACADC5D0A74();
		}
		else
		{
			unk_0x53F520B89860756C(Global_22350.f_5660[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_96(var uParam0)
{
	unk_0x759AC38FBC6CCA9E(uParam0);
	unk_0x81019766FF500CCA();
}

void func_97(var uParam0)
{
	unk_0x7151302E2AA285DC(uParam0);
}

int func_98()
{
	struct<3> Var0;
	
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	if (func_99())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0xB1B52CCC3333E09F(&Var0);
		if (Global_19431 == 0)
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

int func_99()
{
	if (unk_0x222F76006659B0EB(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_100(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	unk_0xE0A2E1F5E75D9DF8(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
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
		case 52:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
		case 51:
		case 55:
		case 56:
		case 57:
		case 58:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 53:
			*iParam5 = 100;
			break;
		
		case 61:
			*iParam5 = 100;
			break;
		
		case 54:
			unk_0xE0A2E1F5E75D9DF8(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_101(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xE0A2E1F5E75D9DF8(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0xDBA848DABDEF9021(0);
	unk_0x8E0F19C19C409DDB(0f, 0.35f);
	unk_0x60B548852F935BEF(2);
	unk_0x7DCBD85F58FA8F39(iVar0, iVar1, iVar2, iVar3);
	unk_0xF3AAD5EF5E952D4E(fParam0, ((Global_22347 + Global_22349) - 0.0046875f));
	unk_0xA0147851A8831777(0);
	unk_0xF5B822826ECBA108(0, 0, 0, 0, 0);
	unk_0x0E4AB43BE38970E3(0, 0, 0, 0, 0);
}

void func_102(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x6EF0D5178A3B92EF(sParam2);
	unk_0x6A8B3CC08A759F44(uParam3);
	unk_0x6A8B3CC08A759F44(uParam4);
	unk_0xBD217E52410D1B67(fParam0, fParam1, 0);
}

float func_103(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x79FCE4565761C974(sParam0))
	{
		if (unk_0xA8C462EF7D9DC564(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_104();
	unk_0xD4445EEB71902566(sParam0);
	unk_0x6A8B3CC08A759F44(uParam1);
	unk_0x6A8B3CC08A759F44(uParam2);
	return unk_0x90203BB77E2FECC8(1);
}

void func_104()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xE0A2E1F5E75D9DF8(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_22350.f_8360)
	{
		iVar0 = Global_22350.f_8356;
		iVar1 = Global_22350.f_8357;
		iVar2 = Global_22350.f_8358;
		iVar3 = Global_22350.f_8359;
	}
	unk_0xDBA848DABDEF9021(0);
	unk_0x8E0F19C19C409DDB(0f, 0.35f);
	unk_0x7DCBD85F58FA8F39(iVar0, iVar1, iVar2, iVar3);
	unk_0xF3AAD5EF5E952D4E((Global_22347 + 0.0046875f), ((Global_22347 + Global_22349) - 0.0046875f));
	unk_0xA0147851A8831777(0);
	unk_0xF5B822826ECBA108(0, 0, 0, 0, 0);
	unk_0x0E4AB43BE38970E3(0, 0, 0, 0, 0);
}

void func_105(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0x6276EB2A4CC7B039((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_106(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;
	
	if (!unk_0x9591DE0F00127F2A(&(Global_22350.f_7013[iParam0 /*16*/])))
	{
		if (unk_0xA8C462EF7D9DC564(&(Global_22350.f_7013[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var19 = { func_108(unk_0x7C7787D2D7139A85()) };
			if (unk_0x0DFEAFECE4B808CA(&Var19, &uVar3))
			{
				return func_107(&uVar3);
			}
		}
		else
		{
			return func_107(&(Global_22350.f_7013[iParam0 /*16*/]));
		}
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
		
		case 50:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 51:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 53:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 54:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 55:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 56:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 59:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 61:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 60:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
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

var func_107(var uParam0)
{
	return uParam0;
}

struct<13> func_108(var uParam0)
{
	struct<13> Var0;
	
	unk_0x229B5E28267D1B1F(uParam0, &Var0, 13);
	return Var0;
}

char* func_109(int iParam0)
{
	var uVar0;
	struct<13> Var16;
	
	if (!unk_0x9591DE0F00127F2A(&(Global_22350.f_6020[iParam0 /*16*/])))
	{
		if (unk_0xA8C462EF7D9DC564(&(Global_22350.f_6020[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var16 = { func_108(unk_0x7C7787D2D7139A85()) };
			unk_0x0DFEAFECE4B808CA(&Var16, &uVar0);
			return func_107(&uVar0);
		}
		else
		{
			return func_107(&(Global_22350.f_6020[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 50)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_110(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_22350.f_5218 > iParam0)
	{
		return;
	}
	if (Global_22350.f_5218 >= 128)
	{
		return;
	}
	if (Global_22350.f_5220 >= 256)
	{
		return;
	}
	if (Global_22350.f_5743 < Global_22350.f_5741)
	{
		return;
	}
	if (Global_22350.f_5218 != iParam0)
	{
		Global_22350.f_5218 = iParam0;
		Global_22350.f_5219 = 0;
	}
	iVar0 = Global_22350.f_5056[Global_22350.f_5219];
	if (iVar0 != 1)
	{
		while (Global_22350.f_5219 < 4 && iVar0 != 1)
		{
			Global_22350.f_5219++;
			iVar0 = Global_22350.f_5056[Global_22350.f_5219];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_22350.f_73[Global_22350.f_5220 /*6*/]), sParam1, 24);
	if (!unk_0x9591DE0F00127F2A(sParam1) && !unk_0x005AF94672136563(sParam1))
	{
	}
	Global_22350.f_1610[Global_22350.f_5220] = bParam3;
	Global_22350.f_1867[Global_22350.f_5220] = iParam4;
	Global_22350.f_5220++;
	if (!bParam3)
	{
		func_113(Global_22350.f_5218, 1);
	}
	else
	{
		func_113(Global_22350.f_5218, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_112(&(Global_22350.f_73[Global_22350.f_5220 /*6*/]));
		if (Global_22350.f_5075[Global_22350.f_5219])
		{
			func_115(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_22350.f_5068[Global_22350.f_5219])
		{
			Global_22350.f_5068[Global_22350.f_5219] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_111(&(Global_22350.f_73[Global_22350.f_5220 /*6*/]));
			if (fVar4 > Global_22350.f_5745[iParam0])
			{
				Global_22350.f_5745[iParam0] = fVar4;
			}
		}
	}
	unk_0xA1E7A40E1F56E511(&(Global_22350.f_5089[iParam0]), Global_22350.f_5219);
	Global_22350.f_5219++;
	Global_22350.f_5744 = 1;
	Global_22350.f_5742 = (Global_22350.f_5220 - 1);
	Global_22350.f_5743 = 0;
	Global_22350.f_5741 = iParam2;
}

float func_111(char* sParam0)
{
	if (!unk_0x005AF94672136563(sParam0))
	{
	}
	return unk_0x89A357DF53D3A79F(0.35f, 0);
}

float func_112(char* sParam0)
{
	if (!unk_0x79FCE4565761C974(uParam0))
	{
		if (unk_0xA8C462EF7D9DC564(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_93(0, 1, 0, 0, 0, 0, 0);
	unk_0xD4445EEB71902566(sParam0);
	return unk_0x90203BB77E2FECC8(1);
}

void func_113(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 32f));
	if (bParam1)
	{
		unk_0xA1E7A40E1F56E511(&(Global_22350.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0x3B76114EC84D5812(&(Global_22350.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
}

int func_114()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x419479F67BC2C70F(&iVar0, &iVar1);
	fVar2 = (unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_115(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	
	StringCopy(&cVar0, func_109(iParam0), 64);
	StringCopy(&cVar16, func_106(iParam0, bParam1), 64);
	if (unk_0xA8C462EF7D9DC564(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			unk_0x419479F67BC2C70F(&iVar32, &iVar33);
			fVar35 = unk_0x6321488E002E4CEF(0);
			if (func_114())
			{
				iVar32 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar33) * fVar35));
			}
			fVar36 = (unk_0xBBDA792448DB5A89(iVar32) / unk_0xBBDA792448DB5A89(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_114())
			{
				fVar34 = 1f;
			}
			if (unk_0x222F76006659B0EB(joaat("director_mode")) > 0)
			{
				unk_0xFE8958342D00D068(&iVar32, &iVar33);
			}
			iVar32 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar32) / fVar34));
			iVar33 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar33) / fVar34));
		}
		else
		{
			unk_0xFE8958342D00D068(&iVar32, &iVar33);
		}
		Var37 = { unk_0x2183E832860E57E6(&cVar0, &cVar16) };
		Var37.f_0 = (Var37.f_0 * (func_116(iParam0) / fVar34));
		Var37.f_1 = (Var37.f_1 * (func_116(iParam0) / fVar34));
		if (!bParam2)
		{
			Var37.f_0 = (Var37.f_0 - 2f);
			Var37.f_1 = (Var37.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var37.f_0 = 288f;
			Var37.f_1 = 106f;
		}
		if (iParam0 == 29 && unk_0xA8C462EF7D9DC564(&(Global_22350.f_7013[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var37.f_0 = 106f;
			Var37.f_1 = 106f;
		}
		*fParam3 = ((Var37.f_0 / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((Var37.f_1 / IntToFloat(iVar33)) / (Var37.f_0 / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x7B405CE05271A492() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_22349)
			{
				*fParam4 = (*fParam4 * (Global_22349 / *fParam3));
				*fParam3 = Global_22349;
			}
		}
		return 1;
	}
	return 0;
}

float func_116(int iParam0)
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
		case 51:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 61:
			return 0.5f;
			break;
		
		case 60:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_117(bool bParam0, bool bParam1)
{
	if (Global_2437549.f_1893.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0xBF28CCACDDFF5346() || (func_119(8, -1) && func_118() != 65)) || (unk_0x097FC2B62E383500() != 0 && !bParam1)) || (unk_0x16587C6F71675106() && !bParam0)) || unk_0xBEE209BD103A0339()) || Global_76837) || Global_22350.f_8384) || unk_0x8E01A12946ECF396()) || Global_98721.f_1417)
	{
		return 0;
	}
	return 1;
}

int func_118()
{
	return Global_1312808;
}

bool func_119(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1373500.f_203[iParam1];
			}
			break;
	}
	return unk_0xA2BC31158C8CEFD2(Global_1373500.f_1048, iParam0);
}

void func_120(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_22350.f_5739 = iParam0;
	Global_22350.f_5874 = iParam2;
	if (Global_22350.f_5739 < Global_22350.f_5738)
	{
		Global_22350.f_5738 = Global_22350.f_5739;
	}
	else if ((Global_22350.f_5729 && Global_22350.f_5739 > Global_22350.f_5740) || (!Global_22350.f_5729 && Global_22350.f_5739 >= (Global_22350.f_5738 + Global_22350.f_5225)))
	{
		iVar0 = Global_22350.f_5738;
		while (iVar0 <= Global_22350.f_5739)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_22350.f_5089[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_22350.f_5225 && Global_22350.f_5738 < 128)
		{
			Global_22350.f_5738++;
			iVar1 = 0;
			iVar0 = Global_22350.f_5738;
			while (iVar0 <= Global_22350.f_5739)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_22350.f_5089[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_22350.f_5728 = 0;
	Global_22350.f_5729 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_22350.f_4690), "", 24);
		StringCopy(&(Global_4268271.f_21), "", 16);
	}
}

void func_121(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x43499278F7E25871(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x43499278F7E25871(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x43499278F7E25871(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x43499278F7E25871(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0xD920E9E8A05878E9(2, 218) * 127f));
			*uParam1 = unk_0xF34EE736CF047844((unk_0xD920E9E8A05878E9(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0xD920E9E8A05878E9(2, 220) * 127f));
			*uParam3 = unk_0xF34EE736CF047844((unk_0xD920E9E8A05878E9(2, 221) * 127f));
		}
	}
}

void func_122()
{
	func_129(0, 0);
	func_128(1, 0, 0, 0, 0);
	func_127(1, 1, 1, 1, 1);
	if (Local_83.f_1 == 3)
	{
		func_126("SEA_MENU");
	}
	else
	{
		func_126("STREET_MENU");
	}
	func_110(0, "RACES_OPT_SP", 0, 1, 0, 0);
	func_110(1, "RACES_OPT_MP", 0, 1, 0, 0);
	func_125(201, "ITEM_SELECT", -1);
	func_125(202, "ITEM_EXIT", -1);
	func_124(11, "ITEM_SCROLL", -1);
	func_123(0);
	func_120(0, 1, 1);
	iLocal_97 = 0;
}

void func_123(int iParam0)
{
	Global_22350.f_5738 = iParam0;
}

void func_124(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0xEEC24BCBD00C5C50(2, iParam0, 1);
	if (Global_22350.f_4769 >= 12)
	{
		StringCopy(&Global_4268271, sVar0, 64);
		StringCopy(&(Global_4268271.f_16), sParam1, 16);
		Global_4268271.f_20 = iParam2;
		return;
		return;
	}
	unk_0x3B76114EC84D5812(&(Global_22350.f_5052), Global_22350.f_4769);
	StringCopy(&(Global_22350.f_4771[Global_22350.f_4769 /*16*/]), sVar0, 64);
	StringCopy(&(Global_22350.f_4964[Global_22350.f_4769 /*4*/]), sParam1, 16);
	Global_22350.f_5013[Global_22350.f_4769] = iParam2;
	Global_22350.f_5026[Global_22350.f_4769] = 359;
	Global_22350.f_5039[Global_22350.f_4769] = iParam0;
	Global_22350.f_4769++;
}

void func_125(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0x357127A2E350E9F6(2, iParam0, 1);
	if (Global_22350.f_4769 >= 12)
	{
		StringCopy(&Global_4268271, sVar0, 64);
		StringCopy(&(Global_4268271.f_16), sParam1, 16);
		Global_4268271.f_20 = iParam2;
		return;
		return;
	}
	unk_0x3B76114EC84D5812(&(Global_22350.f_5052), Global_22350.f_4769);
	StringCopy(&(Global_22350.f_4771[Global_22350.f_4769 /*16*/]), sVar0, 64);
	StringCopy(&(Global_22350.f_4964[Global_22350.f_4769 /*4*/]), sParam1, 16);
	Global_22350.f_5013[Global_22350.f_4769] = iParam2;
	Global_22350.f_5026[Global_22350.f_4769] = iParam0;
	Global_22350.f_5039[Global_22350.f_4769] = 32;
	Global_22350.f_4769++;
}

void func_126(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_22350.f_1), sParam0, 16);
	Global_22350.f_68 = 0;
	Global_22350.f_69 = 0;
	Global_22350.f_70 = 0;
	Global_22350.f_71 = 0;
	Global_22350.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_127(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22350.f_5083[0] = iParam0;
	Global_22350.f_5083[1] = iParam1;
	Global_22350.f_5083[2] = iParam2;
	Global_22350.f_5083[3] = iParam3;
	Global_22350.f_5083[4] = iParam4;
}

void func_128(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22350.f_5056[0] = iParam0;
	Global_22350.f_5056[1] = iParam1;
	Global_22350.f_5056[2] = iParam2;
	Global_22350.f_5056[3] = iParam3;
	Global_22350.f_5056[4] = iParam4;
	Global_22350.f_5226 = 0;
	if (iParam0 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam1 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam2 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam3 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam4 != 0)
	{
		Global_22350.f_5226++;
	}
}

void func_129(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_22350.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_22350.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2459539[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22350.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22350.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22350.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22350.f_5089[iVar0] = 0;
		Global_22350.f_5227[iVar0] = 0;
		Global_22350.f_5356[iVar0] = 0;
		Global_22350.f_5879[iVar0] = 0f;
		Global_22350.f_5485[iVar0] = 0;
		Global_22350.f_5745[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_22350.f_5056[iVar0] = 0;
		Global_22350.f_5068[iVar0] = 0f;
		Global_22350.f_5062[iVar0] = -1f;
		Global_22350.f_5075[iVar0] = 0;
		Global_22350.f_5083[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_22350.f_4964[iVar0 /*4*/]), "", 16);
		Global_22350.f_5013[iVar0] = -1;
		Global_22350.f_5026[iVar0] = 359;
		Global_22350.f_5039[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 62)
	{
		StringCopy(&(Global_22350.f_6020[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_22350.f_7013[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_22350.f_1610[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4268271.f_16), "", 16);
	Global_4268271.f_20 = -1;
	Global_22350 = 0;
	Global_22350.f_5218 = 0;
	Global_22350.f_5219 = 0;
	Global_22350.f_5220 = 0;
	Global_22350.f_5222 = 0;
	Global_22350.f_5223 = 0;
	Global_22350.f_5224 = 0;
	Global_22350.f_5221 = 0;
	Global_22350.f_5874 = 0;
	Global_22350.f_6014 = 0;
	Global_22350.f_5739 = 0;
	Global_22350.f_5738 = 0;
	Global_22350.f_5740 = 0;
	StringCopy(&(Global_22350.f_4690), "", 24);
	Global_22350.f_4762 = 0;
	Global_22350.f_4763 = 0;
	Global_22350.f_4764 = 0;
	Global_22350.f_4765 = 0;
	Global_22350.f_4766 = 0;
	Global_22350.f_4767 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_4696[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_4768 = 0;
	StringCopy(&(Global_4268271.f_21), "", 16);
	Global_4268271.f_61 = 0;
	Global_4268271.f_62 = 0;
	Global_4268271.f_63 = 0;
	Global_4268271.f_64 = 0;
	Global_4268271.f_65 = 0;
	Global_4268271.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4268271.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4268271.f_67 = 0;
	StringCopy(&(Global_22350.f_1), "", 16);
	Global_22350.f_5074 = 0f;
	Global_22350.f_68 = 0;
	Global_22350.f_69 = 0;
	Global_22350.f_70 = 0;
	Global_22350.f_71 = 0;
	Global_22350.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_5744 = 0;
	Global_22350.f_5743 = 0;
	Global_22350.f_5741 = 0;
	Global_22350.f_5742 = 0;
	Global_22350.f_4769 = 0;
	Global_22350.f_4770 = 0;
	Global_22350.f_5225 = 10;
	Global_22350.f_5226 = 0;
	Global_22350.f_5876 = 0f;
	Global_22350.f_5877 = 0f;
	Global_22350.f_5728 = 0;
	Global_22350.f_5729 = 0;
	Global_22350.f_5730 = 0f;
	Global_22350.f_5731 = 0;
	Global_22350.f_5733 = 0;
	Global_22350.f_5732 = 0;
	Global_22350.f_5734 = 0;
	Global_22350.f_5735 = 0;
	Global_22350.f_5736 = 0;
	Global_22350.f_5737 = 0;
	Global_22350.f_8381 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_22350.f_6008[iVar0] = -1;
		Global_22350.f_6011[iVar0] = -1;
		iVar0++;
	}
	Global_22350.f_5081 = 0f;
	Global_22350.f_5052 = 0;
	Global_22350.f_5082 = 0;
	iVar0 = 0;
	while (iVar0 < Global_22350.f_6015)
	{
		Global_22350.f_6015[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_8360 = 0;
	Global_22350.f_8355 = 0;
	Global_22350.f_8365 = 0;
	Global_22350.f_8370 = 0;
	Global_22350.f_8375 = 0;
	Global_22350.f_8377 = 0;
	Global_22350.f_8383 = 0;
	Global_22347 = 0.05f;
	Global_22348 = 0.05f;
	Global_22349 = 0.225f;
	fVar2 = unk_0x6321488E002E4CEF(0);
	if (bParam0)
	{
		Global_22349 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_22349 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_22349 = 0.225f;
	}
}

bool func_130(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_69(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_22350.f_5635[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0x9591DE0F00127F2A(&(Global_22350.f_5635[iVar0 /*4*/])))
	{
		unk_0x9F815D4FA0C47F97(&(Global_22350.f_5635[iVar0 /*4*/]), 9);
		Global_22350.f_5628[iVar0] = 1;
		if (!unk_0x4F6F8DF9C96926B9(&(Global_22350.f_5635[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0x4F7B74CE562E3EC6("CommonMenu", false);
	Global_22350.f_5614[iVar0] = 1;
	if (!unk_0xF409FD92D37CDEEE("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0x4F7B74CE562E3EC6("MPShopSale", false);
		Global_22350.f_5621[iVar0] = 1;
		if (!unk_0xF409FD92D37CDEEE("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_22350.f_5660[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_131(&(Global_22350.f_5660[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_131(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x08EA887200715AD9(*uParam0))
			{
				*uParam0 = unk_0x1FAFE9BB9D8960C1(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x08EA887200715AD9(*uParam0))
					{
						uParam0->f_8 = unk_0x9B35D07DCD0F0B43();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x9B35D07DCD0F0B43();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x08EA887200715AD9(*uParam0))
			{
				uParam0->f_8 = unk_0x9B35D07DCD0F0B43();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x08EA887200715AD9(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_132()
{
	int iVar0;
	
	if (func_162())
	{
		if (func_145())
		{
			iVar0 = 6;
			if (Local_83.f_1 == 1)
			{
				iVar0 = 4;
			}
			func_143(iVar0);
			if (func_65(uLocal_103[iVar0]))
			{
				if (bLocal_102)
				{
					if (unk_0xF6FD8019402CF03B(uLocal_103[iVar0], cLocal_184, sLocal_185[iVar0], 3))
					{
						unk_0x92A1D522E8613359(uLocal_103[iVar0], cLocal_184, sLocal_185[iVar0], -1056964608);
					}
					func_134(iVar0);
				}
			}
			unk_0x1F4FA01F906F33E5(0, 51);
			if (unk_0x1EB14C6F68B8F915(0, 51))
			{
				iLocal_194 = 1;
				unk_0x0D23E3918F7AF11B(1);
				iLocal_82 = 3;
			}
		}
		else if (!iLocal_93)
		{
			unk_0xAB681892AAC7844A(0);
			iLocal_93 = 1;
		}
	}
	else
	{
		func_133();
		if (!iLocal_93)
		{
			unk_0xAB681892AAC7844A(0);
			iLocal_93 = 1;
		}
	}
}

void func_133()
{
	if (iLocal_92 && unk_0x9B35D07DCD0F0B43() > iLocal_95)
	{
		unk_0x0D23E3918F7AF11B(1);
		iLocal_92 = 0;
	}
}

void func_134(int iParam0)
{
	var uVar0;
	
	if (!unk_0xF4B969E0807E76C7(uLocal_103[iParam0], 0) && !unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
	{
		switch (iLocal_195)
		{
			case 0:
				if (unk_0xB7A628320EFF8E47(unk_0xACE5E491FC1B0D37(uLocal_103[iParam0], 1), unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1)) < 64f)
				{
					iLocal_196 = 0;
					iLocal_197 = 0;
					iLocal_195 = 1;
				}
				break;
			
			case 1:
				unk_0xA12E1659DEF57244(&uVar0);
				unk_0x6E2920E14F5F962C(0, unk_0x0FA8183DAD2B3203(), -1, 0, 2);
				unk_0x845704CC8ADF1918(0, unk_0x0FA8183DAD2B3203(), 0);
				unk_0x15A7B753872B3CE3(uVar0);
				unk_0xC544A8E1032AC1CF(uLocal_103[iParam0], uVar0);
				unk_0x78829A259A6975CD(&uVar0);
				iLocal_195 = 2;
				break;
			
			case 2:
				if (unk_0x411C065ADB822CD9(uLocal_103[iParam0], 242628503) != 1 || unk_0x9B1F9CEC0CB28F35(uLocal_103[iParam0], unk_0x0FA8183DAD2B3203(), 20f))
				{
					unk_0x845704CC8ADF1918(uLocal_103[iParam0], unk_0x0FA8183DAD2B3203(), -1);
					if (!iLocal_197)
					{
						func_141(uLocal_103[iParam0], "PRERACE_CHAT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					else
					{
						func_141(uLocal_103[iParam0], "PRERACE_TAUNT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					iLocal_195 = 3;
				}
				break;
			
			case 3:
				if (!unk_0x01891E23361FD324(uLocal_103[iParam0]))
				{
					func_139(&uLocal_198);
					unk_0x5D672CB011E20B28(uLocal_103[iParam0], "random@street_race", "_streetracer_wait_loop", 4f, -4f, -1, 9, 0, 0, 0, 0);
					iLocal_195 = 4;
				}
				break;
			
			case 4:
				if (unk_0xB7A628320EFF8E47(unk_0xACE5E491FC1B0D37(uLocal_103[iParam0], 1), unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1)) > 225f)
				{
					iLocal_195 = 0;
				}
				if (func_135(&uLocal_198) >= 5f && !iLocal_196)
				{
					iLocal_196 = 1;
					iLocal_195 = 1;
				}
				else if (func_135(&uLocal_198) >= 10f && !iLocal_197)
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

float func_135(var uParam0)
{
	if (func_138(uParam0))
	{
		if (func_137(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_136(unk_0xA2BC31158C8CEFD2(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_136(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x9B35D07DCD0F0B43());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x393E9918BC37548A())
	{
		iVar2 = unk_0x169A8AC9F93C2727();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x9B35D07DCD0F0B43()) / 1000f);
}

bool func_137(var uParam0)
{
	return unk_0xA2BC31158C8CEFD2(*uParam0, 2);
}

bool func_138(var uParam0)
{
	return unk_0xA2BC31158C8CEFD2(*uParam0, 1);
}

void func_139(var uParam0)
{
	func_140(uParam0, 0f);
}

void func_140(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_136(unk_0xA2BC31158C8CEFD2(*uParam0, 4)) - fParam1);
	unk_0xA1E7A40E1F56E511(uParam0, 1);
	unk_0x3B76114EC84D5812(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_141(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x8ED81066343F07B4(uParam0, sParam1, sParam2, func_142(iParam3), 0);
}

int func_142(int iParam0)
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

void func_143(int iParam0)
{
	if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()) && !func_144())
	{
		if (func_65(uLocal_103[iParam0]))
		{
			if (iLocal_93 && unk_0xB8D4A2BAA78AB950(unk_0x0FA8183DAD2B3203()) < 20f)
			{
				unk_0xFFFB9D39E6C8D02D(uLocal_103[iParam0], 0f, 0f, 0f, 1, 2000, 2000, 2000, 0);
				iLocal_93 = 0;
			}
		}
	}
}

int func_144()
{
	if (unk_0x328DC5757076B0D5(unk_0x18638AA8DFAAE787()) == 4)
	{
		return 1;
	}
	return 0;
}

int func_145()
{
	if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
	{
		if (func_161())
		{
			return 0;
		}
		if (func_160(func_53()) < Local_83.f_3)
		{
			if (Local_83.f_1 == 3)
			{
				func_157("SEA_NA_CASH", Local_83.f_3);
			}
			else
			{
				func_157("STREET_NA_CASH", Local_83.f_3);
			}
			iLocal_92 = 1;
			iLocal_95 = unk_0x9B35D07DCD0F0B43() + 1000;
			return 0;
		}
		if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
		{
			func_156(&iLocal_0);
			iLocal_0 = unk_0xA4BF70099C074BA0(unk_0x0FA8183DAD2B3203());
			if (!func_151())
			{
				iLocal_92 = 1;
				iLocal_95 = unk_0x9B35D07DCD0F0B43() + 1000;
				return 0;
			}
			else if ((unk_0x35D31BEBAFD53DE6(iLocal_0) <= 200 || unk_0xCFBE5B663F1567A7(iLocal_0)) || func_150())
			{
				func_149("RACE_VehDmg");
				iLocal_92 = 1;
				iLocal_95 = unk_0x9B35D07DCD0F0B43() + 1000;
				return 0;
			}
			else if (unk_0x300C62F79A4441EB(iLocal_0, -1, 0) != unk_0x0FA8183DAD2B3203())
			{
				func_146();
				return 0;
			}
			else
			{
				if (func_86(0) || unk_0x222F76006659B0EB(joaat("appinternet")) > 0)
				{
					func_133();
					return 0;
				}
				switch (Local_83.f_1)
				{
					case 1:
						func_157("STREET_PLAY_B", Local_83.f_3);
						break;
					
					case 2:
						func_157("STREET_PLAY_C", Local_83.f_3);
						break;
					
					case 3:
						func_149("SEA_PLAY");
						break;
				}
				iLocal_92 = 1;
				iLocal_95 = unk_0x9B35D07DCD0F0B43();
				return 1;
			}
		}
		else
		{
			func_156(&iLocal_0);
			func_146();
			return 0;
		}
	}
	return 0;
}

void func_146()
{
	char* sVar0;
	
	if (Local_83.f_1 == 3)
	{
		if (func_14(iLocal_111))
		{
			sVar0 = "SEA_NA_VEH";
		}
		else
		{
			sVar0 = "SEA_NA_VEH2";
		}
		if (!func_148(sVar0))
		{
			func_147(sVar0);
			iLocal_92 = 1;
			iLocal_95 = unk_0x9B35D07DCD0F0B43() + 1000;
		}
	}
	else if (Local_83.f_1 == 1)
	{
		if (!func_148("STREET_NA_BIKE"))
		{
			func_147("STREET_NA_BIKE");
			iLocal_92 = 1;
			iLocal_95 = unk_0x9B35D07DCD0F0B43() + 1000;
		}
	}
	else if (!func_148("STREET_NA_CAR"))
	{
		func_147("STREET_NA_CAR");
		iLocal_92 = 1;
		iLocal_95 = unk_0x9B35D07DCD0F0B43() + 1000;
	}
}

void func_147(char* sParam0)
{
	unk_0xD95C12E1062B7D5E(sParam0);
	unk_0x40DC0B0D5BD91E06(0, 1, 1, -1);
}

bool func_148(char* sParam0)
{
	unk_0x1EF54B101C71E009(sParam0);
	return unk_0xFA637652FFB4E2E5(0);
}

void func_149(char* sParam0)
{
	if (!func_148(sParam0))
	{
		func_147(sParam0);
	}
}

int func_150()
{
	int iVar0;
	
	iVar0 = unk_0x7F375072508F738F(iLocal_0);
	if (unk_0xF39FF829579D1A21(iVar0))
	{
		if (unk_0x82C6A64BFC7E5440(iLocal_0, 6, 0) || unk_0x82C6A64BFC7E5440(iLocal_0, 7, 0))
		{
			return 1;
		}
	}
	else if (unk_0x2741F9670A602A19(iVar0))
	{
		if (((unk_0x82C6A64BFC7E5440(iLocal_0, 0, 0) || unk_0x82C6A64BFC7E5440(iLocal_0, 1, 0)) || unk_0x82C6A64BFC7E5440(iLocal_0, 4, 0)) || unk_0x82C6A64BFC7E5440(iLocal_0, 5, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_151()
{
	int iVar0;
	char* sVar1;
	
	switch (Local_83.f_1)
	{
		case 1:
			iVar0 = func_155();
			if (iVar0 == 1)
			{
				func_149("STREET_NA_COP");
				return 0;
			}
			else if (iVar0 == 2)
			{
				func_149("STREET_NA_BIKE");
				return 0;
			}
			break;
		
		case 2:
			iVar0 = func_153();
			if (iVar0 == 1)
			{
				func_149("STREET_NA_COP");
				return 0;
			}
			else if (iVar0 == 2)
			{
				func_149("STREET_NA_CAR");
				return 0;
			}
			break;
		
		case 3:
			if (!func_152())
			{
				if (func_14(iLocal_111))
				{
					sVar1 = "SEA_NA_VEH";
				}
				else
				{
					sVar1 = "SEA_NA_VEH2";
				}
				func_149(sVar1);
				return 0;
			}
			break;
	}
	return 1;
}

int func_152()
{
	int iVar0;
	
	if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
	{
		if (unk_0xD4B321D9096B01FC(iLocal_0))
		{
			iVar0 = unk_0x7F375072508F738F(iLocal_0);
			if (iVar0 == joaat("seashark") || iVar0 == joaat("seashark2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_153()
{
	int iVar0;
	int iVar1;
	int iVar2[83];
	
	if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
	{
		if (unk_0xD4B321D9096B01FC(iLocal_0))
		{
			iVar0 = unk_0x7F375072508F738F(iLocal_0);
			if (func_154(iVar0))
			{
				return 1;
			}
			if ((((((((((iVar0 == joaat("police4") || iVar0 == joaat("policeold1")) || iVar0 == joaat("policeold2")) || iVar0 == joaat("fbi")) || iVar0 == joaat("fbi2")) || iVar0 == joaat("lguard")) || iVar0 == joaat("sheriff")) || iVar0 == joaat("sheriff2")) || iVar0 == joaat("pranger")) || iVar0 == joaat("ambulance")) || iVar0 == joaat("firetruk"))
			{
				return 1;
			}
			if (((unk_0xF39FF829579D1A21(iVar0) || unk_0x5EA23EAAAD4E34BF(iVar0)) || unk_0xDC118E11A4081E9A(iVar0)) || unk_0x31337ABC07783F10(iVar0))
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

int func_154(int iParam0)
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

int func_155()
{
	int iVar0;
	
	if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
	{
		if (unk_0xD4B321D9096B01FC(iLocal_0))
		{
			iVar0 = unk_0x7F375072508F738F(iLocal_0);
			if (iVar0 == joaat("policeb"))
			{
				return 1;
			}
			if (unk_0xF39FF829579D1A21(iVar0) && !unk_0xA03B0E2641CE8F87(iVar0))
			{
				return 0;
			}
		}
	}
	return 2;
}

void func_156(int iParam0)
{
	if (unk_0xD4B321D9096B01FC(*iParam0))
	{
		unk_0xF4B969E0807E76C7(*iParam0, 0);
		if (unk_0x00123AB82C5FAC28(*iParam0) && unk_0x532AFD85DAA91F63(*iParam0, 1))
		{
			unk_0xF25956700ADFD77F(iParam0);
		}
	}
}

void func_157(char* sParam0, var uParam1)
{
	if (!func_159(sParam0, uParam1))
	{
		func_158(sParam0, uParam1);
	}
}

void func_158(char* sParam0, int iParam1)
{
	unk_0xD95C12E1062B7D5E(uParam0);
	unk_0x6A8B3CC08A759F44(uParam1);
	unk_0x40DC0B0D5BD91E06(0, 1, 1, -1);
}

bool func_159(char* sParam0, int iParam1)
{
	unk_0x1EF54B101C71E009(uParam0);
	unk_0x6A8B3CC08A759F44(uParam1);
	return unk_0xFA637652FFB4E2E5(0);
}

int func_160(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0x367DA79FE620711B(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0x367DA79FE620711B(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0x367DA79FE620711B(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_161()
{
	int iVar0;
	
	if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
	{
		if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
		{
			iVar0 = unk_0xA4BF70099C074BA0(unk_0x0FA8183DAD2B3203());
			if (func_15(iVar0))
			{
				if (unk_0x916AF183F71F17C1(iVar0))
				{
					if (Local_83.f_1 == 3 && unk_0xE294A1321110B3E9(iVar0))
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

int func_162()
{
	int iVar0;
	
	if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
	{
		iVar0 = 20;
		if (Local_83.f_1 == 3)
		{
			iVar0 = 40;
		}
		if (unk_0xD34AF93E9BCF12F0(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1), Local_89, 1) < IntToFloat(iVar0) && unk_0x1B15167A6E6F7820(unk_0x0FA8183DAD2B3203()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_163()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_168(&uLocal_216))
	{
		if (Local_83.f_1 == 2)
		{
			if (func_165())
			{
				if (!unk_0xD4B321D9096B01FC(iLocal_111))
				{
					if (unk_0x6DF9C43E3CC645BC(iLocal_182) && unk_0x6DF9C43E3CC645BC(iLocal_182))
					{
						iLocal_111 = unk_0x847817A65E16621A(iLocal_182, Local_113, fLocal_116, 1, 1, 0);
						if (unk_0xB7C22D72166D91FA(1) && unk_0xA6096EF4CF557AB1())
						{
							iLocal_112 = unk_0xCCD1E4C10C9B061F(iLocal_111, 1);
							unk_0x5671B0B60CC07A13(iLocal_112, iLocal_111, 1, 99999999);
							unk_0xCC94EE23853F38E4(iLocal_112, 1);
							unk_0x7D81B41B134BD6F2(iLocal_112, 1);
						}
						unk_0x1ECAE5FB4DE78CF8(iLocal_111, 1084227584);
						unk_0xB90231068DCFFBA1(iLocal_111, 1, 1, 0);
						unk_0xF0ACB85418455412(iLocal_111, 1);
						unk_0x4B49D40DB6CF2B2B(iLocal_111, 1);
						unk_0xFA7651EC7C4EB594(unk_0x3F8B5B092A20BEB5(10), 1);
						unk_0x7BA4C90E26839793(iLocal_111, unk_0x3F8B5B092A20BEB5(10));
						unk_0x0B440CF5F7F3A631(iLocal_111, 0);
						unk_0xE0AC40EF164A2569(iLocal_182);
						unk_0x4EDE34FBADD967A6(0);
					}
				}
				if (!unk_0xD4B321D9096B01FC(iLocal_117))
				{
					if (unk_0x6DF9C43E3CC645BC(iLocal_183))
					{
						iLocal_117 = unk_0x847817A65E16621A(iLocal_183, Local_118, fLocal_121, 1, 1, 0);
						unk_0xB90231068DCFFBA1(iLocal_117, 0, 1, 0);
						unk_0xF0ACB85418455412(iLocal_117, 1);
						unk_0x4B49D40DB6CF2B2B(iLocal_117, 1);
						unk_0x1ECAE5FB4DE78CF8(iLocal_117, 1084227584);
						unk_0xFA7651EC7C4EB594(unk_0x3F8B5B092A20BEB5(10), 1);
						unk_0x7BA4C90E26839793(iLocal_117, unk_0x3F8B5B092A20BEB5(10));
						unk_0x0B440CF5F7F3A631(iLocal_117, 0);
						unk_0xE0AC40EF164A2569(iLocal_183);
						unk_0x4EDE34FBADD967A6(0);
					}
				}
				if (unk_0xB25A0D192C6A0A5B(cLocal_184))
				{
					if (iLocal_193)
					{
						iVar0 = 0;
						while (iVar0 <= (iLocal_174 - 1))
						{
							if (unk_0xD4B321D9096B01FC(uLocal_103[iVar0]))
							{
								if (!unk_0xF4B969E0807E76C7(uLocal_103[iVar0], 0) && !func_164(uLocal_103[iVar0], -2017877118))
								{
									unk_0x5D672CB011E20B28(uLocal_103[iVar0], cLocal_184, sLocal_185[iVar0], 1000f, -1000f, -1, 1, 0, 0, 0, 0);
									unk_0x7D81B41B134BD6F2(uLocal_103[iVar0], 1);
								}
							}
							else if (unk_0x6DF9C43E3CC645BC(iLocal_174[iVar0]))
							{
								uLocal_103[iVar0] = unk_0xB983F26E7AFB47BF(25, iLocal_174[iVar0], Local_136[iVar0 /*3*/], fLocal_158[iVar0], 1, 1);
								unk_0xC67026146B0E835A(uLocal_103[iVar0], Local_136[iVar0 /*3*/], 0, 0, 1);
								unk_0xCC94EE23853F38E4(uLocal_103[iVar0], 1);
								unk_0x5D672CB011E20B28(uLocal_103[iVar0], cLocal_184, sLocal_185[iVar0], 1000f, -1000f, -1, 1, 0, 0, 0, 0);
								unk_0x7D81B41B134BD6F2(uLocal_103[iVar0], 1);
							}
							iVar0++;
						}
						if ((((((((func_65(uLocal_103[0]) && func_65(uLocal_103[1])) && func_65(uLocal_103[2])) && func_65(uLocal_103[3])) && func_65(uLocal_103[4])) && func_65(uLocal_103[5])) && func_65(uLocal_103[6])) && func_14(iLocal_111)) && func_14(iLocal_117))
						{
							bLocal_102 = true;
							iVar0 = 0;
							while (iVar0 <= (iLocal_174 - 1))
							{
								unk_0xE0AC40EF164A2569(iLocal_174[iVar0]);
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
			if (func_165())
			{
				if (!unk_0xD4B321D9096B01FC(iLocal_111))
				{
					if (unk_0x6DF9C43E3CC645BC(iLocal_182))
					{
						iLocal_111 = unk_0x847817A65E16621A(iLocal_182, Local_113, fLocal_116, 1, 1, 0);
						if (unk_0xB7C22D72166D91FA(0) && unk_0x795C054948B9951A())
						{
							iLocal_112 = unk_0xCCD1E4C10C9B061F(iLocal_111, 1);
							unk_0x5671B0B60CC07A13(iLocal_112, iLocal_111, 1, 99999999);
							unk_0xCC94EE23853F38E4(iLocal_112, 1);
							unk_0x7D81B41B134BD6F2(iLocal_112, 1);
						}
						unk_0xB90231068DCFFBA1(iLocal_111, 1, 1, 0);
						unk_0xF0ACB85418455412(iLocal_111, 1);
						unk_0x4B49D40DB6CF2B2B(iLocal_111, 1);
						unk_0xFA7651EC7C4EB594(unk_0x3F8B5B092A20BEB5(10), 1);
						unk_0x7BA4C90E26839793(iLocal_111, unk_0x3F8B5B092A20BEB5(10));
						unk_0x0B440CF5F7F3A631(iLocal_111, 0);
						unk_0xE0AC40EF164A2569(iLocal_182);
					}
				}
				if (unk_0xB25A0D192C6A0A5B(cLocal_184))
				{
					if (iLocal_193)
					{
						iVar1 = 0;
						while (iVar1 <= (iLocal_174 - 3))
						{
							if (unk_0xD4B321D9096B01FC(uLocal_103[iVar1]))
							{
								if (!unk_0xF4B969E0807E76C7(uLocal_103[iVar1], 0) && !func_164(uLocal_103[iVar1], -2017877118))
								{
									unk_0xC67026146B0E835A(uLocal_103[iVar1], Local_136[iVar1 /*3*/], 0, 0, 1);
									if (iVar1 != 2 && iVar1 != 3)
									{
										unk_0x5D672CB011E20B28(uLocal_103[iVar1], cLocal_184, sLocal_185[iVar1], 1000f, -1000f, -1, 1, 0, 0, 0, 0);
									}
									else
									{
										unk_0x5D672CB011E20B28(uLocal_103[iVar1], cLocal_184, sLocal_185[iVar1], 1000f, -1000f, -1, 1, 0.5f, 0, 0, 0);
									}
									unk_0x7D81B41B134BD6F2(uLocal_103[iVar1], 1);
								}
							}
							else if (unk_0x6DF9C43E3CC645BC(iLocal_174[iVar1]))
							{
								uLocal_103[iVar1] = unk_0xB983F26E7AFB47BF(25, iLocal_174[iVar1], Local_136[iVar1 /*3*/], fLocal_158[iVar1], 1, 1);
								unk_0xCC94EE23853F38E4(uLocal_103[iVar1], 1);
							}
							iVar1++;
						}
						if ((((func_65(uLocal_103[0]) && func_65(uLocal_103[1])) && func_65(uLocal_103[2])) && func_65(uLocal_103[3])) && func_65(uLocal_103[4]))
						{
							unk_0x6E2920E14F5F962C(uLocal_103[4], unk_0x0FA8183DAD2B3203(), -1, 2048, 4);
							iVar1 = 0;
							while (iVar1 <= (iLocal_174 - 1))
							{
								unk_0xE0AC40EF164A2569(iLocal_174[iVar1]);
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
			if (func_165())
			{
				if (!unk_0xD4B321D9096B01FC(iLocal_111))
				{
					if (unk_0x6DF9C43E3CC645BC(iLocal_182))
					{
						iLocal_111 = unk_0x847817A65E16621A(iLocal_182, Local_113, fLocal_116, 1, 1, 0);
						unk_0x1ECAE5FB4DE78CF8(iLocal_111, 1084227584);
						unk_0x3025EAB211467238(iLocal_111, 0f);
						unk_0xABF555FA2F74B872(iLocal_111, 0);
						unk_0x61C934ECBC3C6193(iLocal_111, 0);
						if (unk_0x023F1F2F1D9E25EB(iLocal_111))
						{
							unk_0xE9E11E3F6F83C771(iLocal_111, 1);
						}
						unk_0xB90231068DCFFBA1(iLocal_111, 0, 1, 0);
					}
				}
				iVar2 = 0;
				iVar2 = 0;
				while (iVar2 < 3)
				{
					if (unk_0xD4B321D9096B01FC(iLocal_166[iVar2]))
					{
						if (unk_0xD4B321D9096B01FC(iLocal_170[iVar2]))
						{
							if (!unk_0x2BF5E63466422C38(iLocal_170[iVar2]) && func_14(iLocal_166[iVar2]))
							{
								if (unk_0xBAA38708D7439CA7(iLocal_166[iVar2], -1, 0))
								{
									unk_0xB425E338F85508A5(iLocal_170[iVar2], iLocal_166[iVar2], -1);
								}
							}
						}
						else if (func_14(iLocal_166[iVar2]) && unk_0x6DF9C43E3CC645BC(joaat("a_m_y_jetski_01")))
						{
							iLocal_170[iVar2] = unk_0x81024A420EDCE2B5(iLocal_166[iVar2], 25, joaat("a_m_y_jetski_01"), -1, 1, 1);
							unk_0x11BA22EEA4D73366(iLocal_170[iVar2], 0);
							unk_0xCC94EE23853F38E4(iLocal_170[iVar2], 1);
						}
					}
					else if (unk_0x6DF9C43E3CC645BC(iLocal_182))
					{
						iLocal_166[iVar2] = unk_0x847817A65E16621A(iLocal_182, Local_122[iVar2 /*3*/], fLocal_132[iVar2], 1, 1, 0);
						unk_0x1ECAE5FB4DE78CF8(iLocal_166[iVar2], 1084227584);
						unk_0x3025EAB211467238(iLocal_166[iVar2], 0f);
						unk_0xABF555FA2F74B872(iLocal_166[iVar2], 1);
						unk_0x61C934ECBC3C6193(iLocal_166[iVar2], 1);
						if (unk_0x023F1F2F1D9E25EB(iLocal_166[iVar2]))
						{
							unk_0xE9E11E3F6F83C771(iLocal_166[iVar2], 1);
						}
						unk_0xB90231068DCFFBA1(iLocal_166[iVar2], 0, 1, 0);
					}
					iVar2++;
				}
				if (((unk_0xD4B321D9096B01FC(iLocal_111) && unk_0xD4B321D9096B01FC(iLocal_166[0])) && unk_0xD4B321D9096B01FC(iLocal_166[1])) && unk_0xD4B321D9096B01FC(iLocal_166[2]))
				{
					unk_0xE0AC40EF164A2569(iLocal_182);
				}
				if ((unk_0xD4B321D9096B01FC(iLocal_170[0]) && unk_0xD4B321D9096B01FC(iLocal_170[1])) && unk_0xD4B321D9096B01FC(iLocal_170[2]))
				{
					unk_0xE0AC40EF164A2569(joaat("a_m_y_jetski_01"));
				}
				unk_0x1DB66BD2267055C0(unk_0x0FA8183DAD2B3203(), 170, 1);
			}
		}
	}
}

int func_164(int iParam0, int iParam1)
{
	if (func_65(iParam0))
	{
		if (unk_0x411C065ADB822CD9(iParam0, iParam1) == 1 || unk_0x411C065ADB822CD9(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_165()
{
	if (!func_167())
	{
		return 0;
	}
	if (func_65(unk_0x0FA8183DAD2B3203()))
	{
		if (!func_166(unk_0x0FA8183DAD2B3203(), Local_113, 100f) || unk_0x260395BA7F0C83CB())
		{
			return 1;
		}
	}
	return 0;
}

bool func_166(int iParam0, struct<3> Param1, float fParam4)
{
	return unk_0xB7A628320EFF8E47(unk_0xACE5E491FC1B0D37(iParam0, 1), Param1) <= (fParam4 * fParam4);
}

int func_167()
{
	if (Local_83.f_1 == 3)
	{
		return 1;
	}
	else if (Local_83.f_1 == 1 || Local_83.f_1 == 2)
	{
		if (unk_0xA63165E74E9A042B() >= 20 || unk_0xA63165E74E9A042B() < 5)
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

int func_168(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_145)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xA2BC31158C8CEFD2((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0xA2BC31158C8CEFD2((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_169(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return 1;
}

bool func_169(var uParam0)
{
	return func_170(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_170(var uParam0, char[4] cParam1, int iParam2)
{
	if (unk_0xA2BC31158C8CEFD2(uParam0, 30))
	{
		if (unk_0xA2BC31158C8CEFD2(uParam0, 29))
		{
			switch (func_171(uParam0))
			{
				case 0:
					return unk_0x6DF9C43E3CC645BC(uParam2);
					break;
				
				case 1:
					return unk_0xB25A0D192C6A0A5B(uParam1);
					break;
				
				case 2:
					return unk_0xD922B64C0E3926F2(cParam1);
					break;
				
				case 3:
					return unk_0xF409FD92D37CDEEE(cParam1);
					break;
				
				case 4:
					return unk_0xDA28050D0A4CAB3A(iParam2, cParam1);
					break;
				
				case 5:
					return unk_0xDFE2DFB40A988E19(cParam1);
					break;
				
				case 6:
					return unk_0x059780A8877D0C70(cParam1, unk_0xA2BC31158C8CEFD2(uParam0, 27), -1);
					break;
				
				case 7:
					return unk_0xA8B25C8AF7D75EB3(iParam2);
					break;
				
				case 8:
					return unk_0xA3D567B14856EDE1(iParam2);
					break;
				
				case 9:
					return unk_0x5B9201742B00334D();
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

int func_171(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xA2BC31158C8CEFD2(uParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_172(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_145)
	{
		if ((unk_0xB3EE417AD9F0CAA2() >= (uParam0->f_146 + uParam0->f_147) || unk_0xA2BC31158C8CEFD2(Global_98669.f_20, 2)) || unk_0xA2BC31158C8CEFD2(Global_98669.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (unk_0xA2BC31158C8CEFD2((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0xA2BC31158C8CEFD2((*uParam0)[iVar0 /*18*/], 29))
					{
						func_173(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = unk_0xB3EE417AD9F0CAA2();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_173(var uParam0)
{
	func_174(uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_174(var uParam0, char* sParam1, int iParam2)
{
	if (unk_0xA2BC31158C8CEFD2(*uParam0, 30))
	{
		switch (func_171(*uParam0))
		{
			case 0:
				unk_0x6BB2B1818CAE531E(uParam2);
				break;
			
			case 1:
				unk_0x36B659209EBDD366(uParam1);
				break;
			
			case 2:
				unk_0x46CFD6B05735CD7E(uParam1);
				break;
			
			case 3:
				unk_0x4F7B74CE562E3EC6(uParam1, unk_0xA2BC31158C8CEFD2(*uParam0, 28));
				break;
			
			case 4:
				unk_0x798362387B375EB6(uParam2, sParam1);
				break;
			
			case 5:
				unk_0x3D070739F9AFB22D(sParam1);
				break;
			
			case 6:
				unk_0x059780A8877D0C70(sParam1, unk_0xA2BC31158C8CEFD2(*uParam0, 27), -1);
				break;
			
			case 7:
				unk_0x6396E7A476BDCE7C(uParam2);
				break;
			
			case 8:
				unk_0x9F815D4FA0C47F97(sParam1, uParam2);
				break;
			
			case 9:
				unk_0x8CD04D2D122523B6();
				break;
			
			default:
				break;
		}
		unk_0xA1E7A40E1F56E511(uParam0, 29);
	}
}

void func_175()
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
		func_180(Local_83.f_0, &Local_207, &Local_210, &fLocal_213);
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
			func_179(&uLocal_216, iLocal_183);
		}
		iLocal_182 = func_178(Local_83.f_1);
		iVar0 = 0;
		while (iVar0 <= (iLocal_174 - 1))
		{
			func_179(&uLocal_216, iLocal_174[iVar0]);
			iVar0++;
		}
		func_179(&uLocal_216, iLocal_182);
		func_176(&uLocal_216, cLocal_184);
		unk_0x12B0949DF0694D4E(Local_201, Local_204, 0, 0);
		unk_0xEAD374C7213329E9(Local_207, Local_210, fLocal_213, 0, 0, 1);
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
		func_179(&uLocal_216, iLocal_182);
		func_179(&uLocal_216, joaat("a_m_y_jetski_01"));
	}
}

void func_176(var uParam0, char* sParam1)
{
	func_177(uParam0, 1, -1, sParam1, 0);
}

void func_177(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xA2BC31158C8CEFD2((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0xA2BC31158C8CEFD2((*uParam0)[iVar0 /*18*/], iParam1))
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
					if (!unk_0x2553916E420E8EF0(sParam3, "NULL"))
					{
						if (unk_0x2553916E420E8EF0(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
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
		if (!unk_0xA2BC31158C8CEFD2((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0xA1E7A40E1F56E511(uParam0[iVar0 /*18*/], iParam1);
			unk_0xA1E7A40E1F56E511(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_178(int iParam0)
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

void func_179(var uParam0, int iParam1)
{
	func_177(uParam0, 0, iParam1, "NULL", 0);
}

void func_180(int iParam0, var uParam1, var uParam2, float fParam3)
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

int func_181()
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	
	if (func_64(9))
	{
		return 0;
	}
	if (func_47(6) || func_47(7))
	{
		return 0;
	}
	if (Global_61465)
	{
		return 0;
	}
	if (func_204())
	{
		return 0;
	}
	if (Local_83.f_1 != 3 && func_53() != 1)
	{
		return 0;
	}
	if (unk_0xC143C4B6E176B56A())
	{
		return 0;
	}
	if (func_65(unk_0x0FA8183DAD2B3203()) && unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
	{
		uVar0 = unk_0x9B79A29933E4A8FA();
		if (((func_14(uVar0) && unk_0x7E6F0519746C2295(unk_0x0FA8183DAD2B3203(), uVar0)) && !func_203(unk_0x0FA8183DAD2B3203(), uVar0, -1)) && unk_0x7F375072508F738F(uVar0) != joaat("taxi"))
		{
			return 0;
		}
	}
	switch (Local_83.f_0)
	{
		case 0:
			if (Global_111534[0])
			{
				return 0;
			}
			break;
		
		case 1:
			if (Global_111534[1])
			{
				return 0;
			}
			break;
		
		case 2:
			if (Global_111534[2])
			{
				return 0;
			}
			break;
		
		case 3:
			if (Global_111534[3])
			{
				return 0;
			}
			break;
		
		case 4:
			if (Global_111534[4])
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_111524[0])
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_111524[1])
			{
				return 0;
			}
			break;
		
		case 7:
			if (Global_111524[2])
			{
				return 0;
			}
			break;
		
		case 8:
			if (Global_111524[3])
			{
				return 0;
			}
			break;
	}
	if (!func_167())
	{
		iVar1 = 0;
		while (iVar1 <= (iLocal_174 - 1))
		{
			if (func_65(uLocal_103[iVar1]))
			{
				unk_0xA12E1659DEF57244(&uVar2);
				unk_0xA1FD592C7589E020(0, iVar1 * 100);
				unk_0xDE8E5CE8855FA963(0, 1193033728, 0);
				unk_0x15A7B753872B3CE3(uVar2);
				unk_0xC544A8E1032AC1CF(uLocal_103[iVar1], uVar2);
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= (iLocal_170 - 1))
		{
			if (func_65(iLocal_170[iVar1]))
			{
				unk_0xA12E1659DEF57244(&uVar2);
				unk_0xA1FD592C7589E020(0, iVar1 * 110);
				if (func_14(iLocal_166[iVar1]) && unk_0x95ED3BD0F52D542A(iLocal_170[iVar1], iLocal_166[iVar1], 0))
				{
					unk_0x24BD9CEBA5D40F00(0, iLocal_166[iVar1], 30f, 786597);
				}
				else
				{
					unk_0xDE8E5CE8855FA963(0, 1193033728, 0);
				}
				unk_0x15A7B753872B3CE3(uVar2);
				unk_0xC544A8E1032AC1CF(iLocal_170[iVar1], uVar2);
			}
			iVar1++;
		}
		if (func_65(iLocal_112))
		{
			if (func_14(iLocal_111) && unk_0x95ED3BD0F52D542A(iLocal_112, iLocal_111, 0))
			{
				unk_0x24BD9CEBA5D40F00(iLocal_112, iLocal_111, 30f, 786597);
			}
			else
			{
				unk_0xDE8E5CE8855FA963(iLocal_112, 1193033728, 0);
			}
		}
		return 0;
	}
	if (func_183())
	{
		iVar4 = 0;
		while (iVar4 <= (iLocal_174 - 1))
		{
			if (func_65(uLocal_103[iVar4]))
			{
				unk_0xA12E1659DEF57244(&uVar3);
				unk_0xA1FD592C7589E020(0, iVar4 * 50);
				unk_0xF0E9590A910B74BE(0, unk_0x0FA8183DAD2B3203(), 500f, -1, 0, 0);
				unk_0x15A7B753872B3CE3(uVar3);
				if ((iVar4 % 2) == 0)
				{
					func_182(uLocal_103[iVar4], 1);
				}
				unk_0xC544A8E1032AC1CF(uLocal_103[iVar4], uVar3);
			}
			iVar4++;
		}
		iVar4 = 0;
		while (iVar4 <= (iLocal_170 - 1))
		{
			if (func_14(iLocal_166[iVar4]) && Local_83.f_1 == 3)
			{
				unk_0xE9E11E3F6F83C771(iLocal_166[iVar4], 0);
			}
			if (func_65(iLocal_170[iVar4]))
			{
				unk_0xA12E1659DEF57244(&uVar3);
				unk_0xA1FD592C7589E020(0, iVar4 * 60);
				if (func_14(iLocal_166[iVar4]) && unk_0x95ED3BD0F52D542A(iLocal_170[iVar4], iLocal_166[iVar4], 0))
				{
					unk_0x24BD9CEBA5D40F00(0, iLocal_166[iVar4], 50f, 786468);
				}
				else
				{
					unk_0xF0E9590A910B74BE(0, unk_0x0FA8183DAD2B3203(), 500f, -1, 0, 0);
				}
				unk_0x15A7B753872B3CE3(uVar3);
				unk_0xC544A8E1032AC1CF(iLocal_170[iVar4], uVar3);
				if ((iVar4 % 2) == 0)
				{
					func_182(iLocal_170[iVar4], 1);
				}
			}
			iVar4++;
		}
		if (func_14(iLocal_111) && Local_83.f_1 == 3)
		{
			unk_0xE9E11E3F6F83C771(iLocal_111, 0);
		}
		if (func_65(iLocal_112))
		{
			if (func_14(iLocal_111) && unk_0x95ED3BD0F52D542A(iLocal_112, iLocal_111, 0))
			{
				unk_0x24BD9CEBA5D40F00(iLocal_112, iLocal_111, 50f, 786468);
			}
			else
			{
				unk_0xF0E9590A910B74BE(iLocal_112, unk_0x0FA8183DAD2B3203(), 500f, -1, 0, 0);
			}
		}
		switch (Local_83.f_0)
		{
			case 0:
				Global_111534[0] = 1;
				Global_111540[0] = unk_0x9B35D07DCD0F0B43();
				break;
			
			case 1:
				Global_111534[1] = 1;
				Global_111540[1] = unk_0x9B35D07DCD0F0B43();
				break;
			
			case 2:
				Global_111534[2] = 1;
				Global_111540[2] = unk_0x9B35D07DCD0F0B43();
				break;
			
			case 3:
				Global_111534[3] = 1;
				Global_111540[3] = unk_0x9B35D07DCD0F0B43();
				break;
			
			case 4:
				Global_111534[4] = 1;
				Global_111540[4] = unk_0x9B35D07DCD0F0B43();
				break;
			
			case 5:
				Global_111524[0] = 1;
				Global_111529[0] = unk_0x9B35D07DCD0F0B43();
				break;
			
			case 6:
				Global_111524[1] = 1;
				Global_111529[1] = unk_0x9B35D07DCD0F0B43();
				break;
			
			case 7:
				Global_111524[2] = 1;
				Global_111529[2] = unk_0x9B35D07DCD0F0B43();
				break;
			
			case 8:
				Global_111524[3] = 1;
				Global_111529[3] = unk_0x9B35D07DCD0F0B43();
				break;
		}
		return 0;
	}
	return 1;
}

void func_182(var uParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	if (func_65(uParam0))
	{
		iVar1 = 2;
		if (bParam1)
		{
			iVar1 = 3;
		}
		iVar2 = unk_0xBAC643F143880136(0, iVar1);
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
		if (unk_0x0F81A86FA23D44FA(uParam0))
		{
			func_141(uParam0, sVar0, "WAVELOAD_PAIN_MALE", 24);
		}
		else
		{
			func_141(uParam0, sVar0, "WAVELOAD_PAIN_FEMALE", 24);
		}
	}
}

int func_183()
{
	int iVar0;
	
	if (unk_0x586E95A1CE46FC21(unk_0x7C7787D2D7139A85(), 0))
	{
		return 1;
	}
	if (Local_83.f_1 == 3)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_170 - 1))
		{
			if (unk_0xD4B321D9096B01FC(iLocal_170[iVar0]))
			{
				if (unk_0x2BF5E63466422C38(iLocal_170[iVar0]))
				{
					return 1;
				}
				else if (func_184(iLocal_170[iVar0], 1, 1116471296, 1126825984, 0, 0, 0, 0) || unk_0xCFE0D93B7A6809C1(iLocal_170[iVar0]))
				{
					return 1;
				}
			}
			if (unk_0xD4B321D9096B01FC(iLocal_166[iVar0]))
			{
				if (unk_0xF4B969E0807E76C7(iLocal_166[iVar0], 0))
				{
					return 1;
				}
				else if (unk_0x3656B691E303FDE0(iLocal_166[iVar0], unk_0x0FA8183DAD2B3203(), 1) && unk_0x35D31BEBAFD53DE6(iLocal_166[iVar0]) < 900)
				{
					return 1;
				}
			}
			iVar0++;
		}
		if (unk_0xD4B321D9096B01FC(iLocal_111))
		{
			if (unk_0xF4B969E0807E76C7(iLocal_111, 0))
			{
				return 1;
			}
			else if (unk_0x3656B691E303FDE0(iLocal_111, unk_0x0FA8183DAD2B3203(), 1) && unk_0x35D31BEBAFD53DE6(iLocal_111) < 900)
			{
				return 1;
			}
		}
		return 0;
	}
	if (func_166(unk_0x0FA8183DAD2B3203(), Local_89, 50f) && unk_0x90D8021D13215A35(unk_0x0FA8183DAD2B3203()))
	{
		return 1;
	}
	if (unk_0xD4B321D9096B01FC(iLocal_112))
	{
		if (unk_0x2BF5E63466422C38(iLocal_112))
		{
			return 1;
		}
		else if (func_184(iLocal_112, 1, 1116471296, 1126825984, 0, 0, 0, 0))
		{
			return 1;
		}
		else if (unk_0xCFE0D93B7A6809C1(iLocal_112))
		{
			unk_0xCC94EE23853F38E4(iLocal_112, 0);
			return 1;
		}
	}
	if (unk_0xD4B321D9096B01FC(iLocal_111))
	{
		if (unk_0xF4B969E0807E76C7(iLocal_111, 0))
		{
			return 1;
		}
		else if (unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), iLocal_111, 1) || unk_0x3656B691E303FDE0(iLocal_111, unk_0x0FA8183DAD2B3203(), 1))
		{
			return 1;
		}
	}
	if (unk_0xD4B321D9096B01FC(iLocal_117))
	{
		if (unk_0xF4B969E0807E76C7(iLocal_117, 0))
		{
			return 1;
		}
		else if (unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), iLocal_117, 1) || unk_0x3656B691E303FDE0(iLocal_117, unk_0x0FA8183DAD2B3203(), 1))
		{
			return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_174 - 1))
	{
		if (unk_0xD4B321D9096B01FC(uLocal_103[iVar0]))
		{
			if (unk_0x2BF5E63466422C38(uLocal_103[iVar0]))
			{
				return 1;
			}
			else if (func_184(uLocal_103[iVar0], 1, 1116471296, 1126825984, 0, 0, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_184(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	struct<3> Var0;
	
	if (func_15(unk_0x0FA8183DAD2B3203()) && func_15(iParam0))
	{
		if (unk_0x3656B691E303FDE0(iParam0, unk_0x0FA8183DAD2B3203(), 1))
		{
			return 1;
		}
		if (func_198(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!unk_0x9DCEF22792B5C15C(unk_0x0FA8183DAD2B3203(), 6))
		{
			if (unk_0x132DF66D50A7DE4E(unk_0x0FA8183DAD2B3203()))
			{
				Var0 = { unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1) - unk_0xACE5E491FC1B0D37(iParam0, 1) };
				if ((((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <= 5f)
				{
					return func_197(unk_0x0FA8183DAD2B3203(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_185(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_185(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_15(unk_0x0FA8183DAD2B3203()) && func_15(iParam0))
	{
		if (func_196(iParam0) || unk_0x4412340828EC2614(unk_0x7C7787D2D7139A85(), iParam0))
		{
			if (unk_0x9DCEF22792B5C15C(unk_0x0FA8183DAD2B3203(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0x9B69E0F5342BA1A8(unk_0x0FA8183DAD2B3203(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_186(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_186(int iParam0, float fParam1)
{
	return func_187(iParam0, unk_0x0FA8183DAD2B3203(), fParam1, 1, 250, 7);
}

bool func_187(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_195(iParam0, iParam1);
	if (!func_15(iParam0) || !func_15(iParam1))
	{
		if (iVar4 != -1)
		{
			func_194(&(Local_40[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!func_191(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_190();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_40[iVar4 /*4*/].f_1 = iParam0;
		Local_40[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { unk_0x0E516C24C87F5D0C(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_188(&(Local_40[iVar4 /*4*/]), Var1, iParam1, &(Local_40[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x9B35D07DCD0F0B43() - Local_40[iVar4 /*4*/].f_3) < iParam4);
}

int func_188(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7)
{
	var uVar0;
	struct<3> Var1;
	var uVar4;
	int iVar7;
	int iVar8;
	
	iVar7 = 0;
	if (!func_15(iParam4))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_189(iParam4, iParam7) };
		*uParam0 = unk_0xE595A27685A9E166(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = unk_0x19D3834206AE7960(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
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
	if (unk_0x4625051E51BA911B(iVar7))
	{
		func_15(iVar7);
		if (unk_0x3D464779B732760F(iVar7) == iParam4)
		{
			if (bLocal_81)
			{
				unk_0x7C20DD165B7C40CB(Param1, unk_0xACE5E491FC1B0D37(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = unk_0x9B35D07DCD0F0B43();
			return 1;
		}
		return 0;
	}
	if (unk_0x905FBA24E7FA8D23(iVar7))
	{
		func_15(iVar7);
		if (unk_0x5294582CE404D3F4(iParam4, 0))
		{
			if (unk_0xD05B0DA3866791D0(iVar7) == unk_0x4D57D3E5ECE15A41(iParam4, 0))
			{
				if (bLocal_81)
				{
					unk_0x7C20DD165B7C40CB(Param1, unk_0xACE5E491FC1B0D37(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = unk_0x9B35D07DCD0F0B43();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_189(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = unk_0xBAC643F143880136(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0xACE5E491FC1B0D37(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0x0E516C24C87F5D0C(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0x0E516C24C87F5D0C(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0x0E516C24C87F5D0C(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0x0E516C24C87F5D0C(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0x0E516C24C87F5D0C(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0x0E516C24C87F5D0C(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0xACE5E491FC1B0D37(iParam0, 1);
}

int func_190()
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

int func_191(int iParam0, int iParam1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_193(unk_0xACE5E491FC1B0D37(iParam1, 1) - unk_0xACE5E491FC1B0D37(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var3 = { unk_0xDF29CF810DF94B60(iParam0) };
	}
	else
	{
		Var3 = { func_193(unk_0x0E516C24C87F5D0C(iParam0, 31086, 0f, 5f, 0f) - unk_0x0E516C24C87F5D0C(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_192(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_192(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_193(struct<3> Param0)
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

void func_194(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_195(int iParam0, int iParam1)
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

int func_196(int iParam0)
{
	if (unk_0x2A06948F22A49FC3(unk_0x7C7787D2D7139A85(), iParam0) && unk_0x9DCEF22792B5C15C(unk_0x0FA8183DAD2B3203(), 6))
	{
		return 1;
	}
	return 0;
}

bool func_197(int iParam0, int iParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0xDF29CF810DF94B60(iParam0) };
	Var3 = { unk_0xACE5E491FC1B0D37(iParam1, 1) - unk_0xACE5E491FC1B0D37(iParam0, 1) };
	return (((Var0.f_0 * Var3.f_0) + (Var0.f_1 * Var3.f_1)) / unk_0x2A488C176D52CCA5(Var3, 0f, 0f, 0f)) > unk_0xD0FFB162F40A139C(fParam2);
}

int func_198(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (func_15(unk_0x0FA8183DAD2B3203()) && func_15(iParam0))
	{
		unk_0x63EA4FAF7CDEFEC7(unk_0x0FA8183DAD2B3203(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_202(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_199(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (unk_0x64F825FCEFC07239(unk_0x0FA8183DAD2B3203()))
			{
				if (unk_0x90D8021D13215A35(unk_0x0FA8183DAD2B3203()))
				{
					if (unk_0x6C979EE77983FC04(unk_0xACE5E491FC1B0D37(iParam0, 1), fVar0, 1))
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
				if (func_202(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_199(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_199(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0xACE5E491FC1B0D37(iParam0, 1) };
	Var3 = { Var0 };
	Var0.f_0 = (Var0.f_0 - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var3.f_0 = (Var3.f_0 + fParam1);
	Var3.f_1 = (Var3.f_1 + fParam1);
	Var3.f_2 = (Var3.f_2 + fParam1);
	if (bParam2)
	{
		if (((unk_0xC6596EAF5F50B53A(unk_0xACE5E491FC1B0D37(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || unk_0xC6596EAF5F50B53A(unk_0xACE5E491FC1B0D37(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || unk_0xC6596EAF5F50B53A(unk_0xACE5E491FC1B0D37(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0xC6596EAF5F50B53A(unk_0xACE5E491FC1B0D37(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_200(iParam0, fParam1))
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
			if (func_200(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x6E611F4ABF5BABF1(Var0, Var3, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_200(var uParam0, float fParam1)
{
	var uVar0;
	struct<3> Var1;
	
	if ((((unk_0x6267AE5438BF1CCD(uParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || unk_0x6267AE5438BF1CCD(uParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || unk_0x6267AE5438BF1CCD(uParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || unk_0x6267AE5438BF1CCD(uParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || unk_0x6267AE5438BF1CCD(uParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
	{
		if (func_201(uParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_201(int iParam0, struct<3> Param1, float fParam4, int iParam5)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_193(Param1 - unk_0xACE5E491FC1B0D37(uParam0, 1)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		Var3 = { unk_0xDF29CF810DF94B60(iParam0) };
	}
	else
	{
		Var3 = { func_193(unk_0x0E516C24C87F5D0C(iParam0, 31086, 0f, 5f, 0f) - unk_0x0E516C24C87F5D0C(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_192(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam4 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_202(int iParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (unk_0x90D8021D13215A35(unk_0x0FA8183DAD2B3203()))
		{
			if (unk_0x9B69E0F5342BA1A8(unk_0x0FA8183DAD2B3203(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0x6C979EE77983FC04(unk_0xACE5E491FC1B0D37(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_203(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0xF4B969E0807E76C7(iParam0, 0) && !unk_0xF4B969E0807E76C7(uParam1, 0))
	{
		if (unk_0x7E6F0519746C2295(iParam0, iParam1))
		{
			if (unk_0x300C62F79A4441EB(iParam1, iParam2, 0) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_204()
{
	switch (Local_83.f_0)
	{
		case 5:
			return unk_0xA2BC31158C8CEFD2(Global_111560.f_24971.f_2, 0);
			break;
		
		case 6:
			return unk_0xA2BC31158C8CEFD2(Global_111560.f_24971.f_2, 1);
			break;
		
		case 7:
			return unk_0xA2BC31158C8CEFD2(Global_111560.f_24971.f_2, 2);
			break;
		
		case 8:
			return unk_0xA2BC31158C8CEFD2(Global_111560.f_24971.f_2, 3);
			break;
		
		case 0:
			return unk_0xA2BC31158C8CEFD2(Global_111560.f_24974.f_3, 0);
			break;
		
		case 1:
			return unk_0xA2BC31158C8CEFD2(Global_111560.f_24974.f_3, 1);
			break;
		
		case 2:
			return unk_0xA2BC31158C8CEFD2(Global_111560.f_24974.f_3, 2);
			break;
		
		case 3:
			return unk_0xA2BC31158C8CEFD2(Global_111560.f_24974.f_3, 3);
			break;
		
		case 4:
			return unk_0xA2BC31158C8CEFD2(Global_111560.f_24974.f_3, 4);
			break;
	}
	return 0;
}

void func_205()
{
	iLocal_82 = 0;
	iLocal_92 = 0;
	bLocal_99 = false;
	bLocal_100 = false;
	iLocal_96 = 0;
	iLocal_97 = 0;
	iLocal_98 = 0;
	func_207(1);
	unk_0x8EB1E7594B0F5A9C("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", 0);
	unk_0x8EB1E7594B0F5A9C("WORLD_VEHICLE_PARK_PARALLEL", 0);
	if (Local_83.f_0 == 1)
	{
		uLocal_215 = func_206(374.0083f, 279.5919f, 102.3306f, 40f);
		unk_0x7FB505C34A14BAAA(374.0083f, 279.5919f, 102.3306f, 25f, 0, 0, 0, 0, 0, 0);
	}
	if (Local_83.f_1 == 1 || Local_83.f_1 == 2)
	{
		uLocal_214 = func_206(Local_89, 60f);
	}
}

var func_206(struct<3> Param0, float fParam3)
{
	struct<3> Var0;
	
	Var0 = { (fParam3 / 2f), (fParam3 / 2f), (fParam3 / 2f) };
	return unk_0x740FE9B7B3FE1CE5(Param0 - Var0, Param0 + Var0, 0, 1, 1, 1);
}

void func_207(bool bParam0)
{
	if (bParam0)
	{
		switch (Local_83.f_0)
		{
			case 0:
			case 1:
			case 2:
			case 3:
				func_179(&uLocal_216, joaat("banshee"));
				func_179(&uLocal_216, joaat("feltzer2"));
				func_179(&uLocal_216, joaat("sentinel"));
				break;
			
			case 4:
				func_179(&uLocal_216, joaat("bati"));
				func_179(&uLocal_216, joaat("ruffian"));
				break;
			
			case 5:
			case 6:
			case 7:
			case 8:
				func_179(&uLocal_216, joaat("seashark"));
				break;
		}
	}
	else
	{
		func_208(&uLocal_216);
	}
}

void func_208(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xA2BC31158C8CEFD2((*uParam0)[iVar0 /*18*/], 30))
		{
			func_209(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}

void func_209(var uParam0)
{
	func_210(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_210(var uParam0, char* sParam1, int iParam2)
{
	if (unk_0xA2BC31158C8CEFD2(uParam0, 30))
	{
		switch (func_171(uParam0))
		{
			case 0:
				unk_0xE0AC40EF164A2569(uParam2);
				break;
			
			case 1:
				unk_0x7D74D6A091150B86(uParam1);
				break;
			
			case 2:
				unk_0x3B3234F5138A2131(uParam1);
				break;
			
			case 3:
				unk_0xD73CEE901CAB1716(uParam1);
				break;
			
			case 4:
				unk_0x497FAD093E19504A(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x3F8C4865FB100A5A(sParam1);
				break;
			
			case 6:
				unk_0x22177E6DE081D074();
				break;
			
			case 7:
				unk_0xD67693566398B2F9(iParam2);
				break;
			
			case 8:
				unk_0xA95AA80044081B2A(iParam2, unk_0xA2BC31158C8CEFD2(uParam0, 26));
				break;
			
			case 9:
				unk_0xD9E853CD947E590B();
				break;
			
			default:
				break;
		}
	}
}

int func_211(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return unk_0xA2BC31158C8CEFD2(Global_111560.f_24974.f_1, 0);
			break;
		
		case 1:
			return unk_0xA2BC31158C8CEFD2(Global_111560.f_24974.f_1, 1);
			break;
		
		case 2:
			return unk_0xA2BC31158C8CEFD2(Global_111560.f_24974.f_1, 2);
			break;
		
		case 3:
			return unk_0xA2BC31158C8CEFD2(Global_111560.f_24974.f_1, 3);
			break;
		
		case 4:
			return unk_0xA2BC31158C8CEFD2(Global_111560.f_24974.f_1, 4);
			break;
	}
	return 0;
}

bool func_212(int iParam0, int iParam1)
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
	bVar0 = unk_0xA2BC31158C8CEFD2(Global_111560.f_9080.f_99.f_219[iParam0], iParam1);
	return bVar0;
}

void func_213()
{
	if (func_214(func_215(86, 0), Local_89, 1f, 0))
	{
		Local_83.f_0 = 0;
		Local_83.f_1 = 2;
		Local_83.f_3 = 100;
		Local_83.f_4 = 20;
	}
	else if (func_214(func_215(87, 0), Local_89, 1f, 0))
	{
		Local_83.f_0 = 1;
		Local_83.f_1 = 2;
		Local_83.f_3 = 500;
		Local_83.f_4 = 18;
	}
	else if (func_214(func_215(88, 0), Local_89, 1f, 0))
	{
		Local_83.f_0 = 2;
		Local_83.f_1 = 2;
		Local_83.f_3 = 1000;
		Local_83.f_4 = 2;
	}
	else if (func_214(func_215(89, 0), Local_89, 1f, 0))
	{
		Local_83.f_0 = 3;
		Local_83.f_1 = 2;
		Local_83.f_3 = 1250;
		Local_83.f_4 = 4;
	}
	else if (func_214(func_215(90, 0), Local_89, 1f, 0))
	{
		Local_83.f_0 = 4;
		Local_83.f_1 = 1;
		Local_83.f_3 = 1500;
		Local_83.f_4 = 5;
	}
	else if (func_214(func_215(82, 0), Local_89, 1f, 0))
	{
		Local_83.f_0 = 5;
		Local_83.f_1 = 3;
		Local_83.f_3 = 0;
		Local_83.f_4 = 16;
	}
	else if (func_214(func_215(83, 0), Local_89, 1f, 0))
	{
		Local_83.f_0 = 6;
		Local_83.f_1 = 3;
		Local_83.f_3 = 0;
		Local_83.f_4 = 13;
	}
	else if (func_214(func_215(84, 0), Local_89, 1f, 0))
	{
		Local_83.f_0 = 7;
		Local_83.f_1 = 3;
		Local_83.f_3 = 0;
		Local_83.f_4 = 15;
		Local_83.f_5 = 1;
	}
	else if (func_214(func_215(85, 0), Local_89, 1f, 0))
	{
		Local_83.f_0 = 8;
		Local_83.f_1 = 3;
		Local_83.f_4 = 24;
		Local_83.f_3 = 0;
		Local_83.f_5 = 1;
	}
	else
	{
		func_216(0);
	}
}

int func_214(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x01CBD71E072E9F33((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x01CBD71E072E9F33((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x01CBD71E072E9F33((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x01CBD71E072E9F33((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x01CBD71E072E9F33((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_215(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0f, 0f, 0f;
	}
	return Global_31111[iVar0 /*23*/][iParam1 /*3*/];
}

void func_216(bool bParam0)
{
	int iVar0;
	var uVar1;
	
	if (!iLocal_93)
	{
		unk_0xAB681892AAC7844A(0);
		iLocal_93 = 1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (func_15(uLocal_103[iVar0]))
		{
			unk_0xC6612209077465DD(uLocal_103[iVar0]);
			unk_0xDE8E5CE8855FA963(uLocal_103[iVar0], 1193033728, 0);
			unk_0xCC94EE23853F38E4(uLocal_103[iVar0], 0);
			unk_0x0FFB05DA97E810B5(&(uLocal_103[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_15(iLocal_170[iVar0]))
		{
			if (func_15(iLocal_166[iVar0]))
			{
				unk_0xC6612209077465DD(iLocal_170[iVar0]);
				if (unk_0x5EA23EAAAD4E34BF(unk_0x7F375072508F738F(iLocal_166[iVar0])))
				{
					unk_0xE9E11E3F6F83C771(iLocal_166[iVar0], 0);
				}
				unk_0x24BD9CEBA5D40F00(iLocal_170[iVar0], iLocal_166[iVar0], 20f, 786599);
				unk_0x7D81B41B134BD6F2(iLocal_170[iVar0], 1);
				unk_0xCC94EE23853F38E4(iLocal_170[iVar0], 0);
				unk_0x0FFB05DA97E810B5(&(iLocal_170[iVar0]));
				unk_0xF25956700ADFD77F(&(iLocal_166[iVar0]));
			}
		}
		iVar0++;
	}
	if (func_15(iLocal_112))
	{
		if (func_15(iLocal_111))
		{
			unk_0xC6612209077465DD(iLocal_112);
			unk_0xDEB0AA30ABFDCF48(iLocal_112, 1, 1);
			unk_0x24BD9CEBA5D40F00(iLocal_112, iLocal_111, 15f, 786599);
			unk_0x7D81B41B134BD6F2(iLocal_112, 1);
			unk_0xCC94EE23853F38E4(iLocal_112, 0);
			unk_0x0FFB05DA97E810B5(&iLocal_112);
			unk_0xF25956700ADFD77F(&iLocal_111);
		}
	}
	if (func_15(iLocal_117))
	{
		unk_0xF25956700ADFD77F(&iLocal_117);
	}
	switch (Local_83.f_0)
	{
		case 5:
			func_219(82, 0, 0);
			unk_0xA1E7A40E1F56E511(&(Global_111560.f_24971.f_2), 0);
			break;
		
		case 6:
			func_219(83, 0, 0);
			unk_0xA1E7A40E1F56E511(&(Global_111560.f_24971.f_2), 1);
			break;
		
		case 7:
			func_219(84, 0, 0);
			unk_0xA1E7A40E1F56E511(&(Global_111560.f_24971.f_2), 2);
			break;
		
		case 8:
			func_219(85, 0, 0);
			unk_0xA1E7A40E1F56E511(&(Global_111560.f_24971.f_2), 3);
			break;
		
		case 0:
			func_219(86, 0, 0);
			unk_0xA1E7A40E1F56E511(&(Global_111560.f_24974.f_3), 0);
			break;
		
		case 1:
			func_219(87, 0, 0);
			unk_0xA1E7A40E1F56E511(&(Global_111560.f_24974.f_3), 1);
			break;
		
		case 2:
			func_219(88, 0, 0);
			unk_0xA1E7A40E1F56E511(&(Global_111560.f_24974.f_3), 2);
			break;
		
		case 3:
			func_219(89, 0, 0);
			unk_0xA1E7A40E1F56E511(&(Global_111560.f_24974.f_3), 3);
			break;
		
		case 4:
			func_219(90, 0, 0);
			unk_0xA1E7A40E1F56E511(&(Global_111560.f_24974.f_3), 4);
			break;
	}
	if (iLocal_92)
	{
		unk_0x0D23E3918F7AF11B(1);
	}
	unk_0xFA7651EC7C4EB594(unk_0x3F8B5B092A20BEB5(10), 0);
	if (iLocal_101)
	{
		unk_0x597D844D285B9272(1);
	}
	if (iLocal_194 && !bParam0)
	{
		uVar1 = unk_0x7A8732CFB5113E77();
		if (unk_0xD699DB8EAB756F25(uVar1))
		{
			if (!unk_0xB3E4EBF4EFCF92BD(iVar1))
			{
				unk_0x3D0DE925C0536CA0(iVar1, 1, 0);
			}
		}
	}
	if (!bParam0)
	{
		func_207(0);
	}
	if (iLocal_94)
	{
		unk_0x82B7F5D3562E186D(Local_201, Local_204, 1);
		unk_0x5FA16012EC432077(Local_207, Local_210, fLocal_213, 1);
		iLocal_94 = 0;
	}
	unk_0x8EB1E7594B0F5A9C("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", 1);
	unk_0x8EB1E7594B0F5A9C("WORLD_VEHICLE_PARK_PARALLEL", 1);
	if (Local_83.f_0 == 1)
	{
		unk_0x9E64FD43AF331B00(uLocal_215, 0);
	}
	if (Local_83.f_1 == 1 || Local_83.f_1 == 2)
	{
		unk_0x9E64FD43AF331B00(uLocal_214, 0);
	}
	else
	{
		unk_0x1DB66BD2267055C0(unk_0x0FA8183DAD2B3203(), 170, 0);
	}
	func_217(&uLocal_216, 0);
	unk_0x9C9E32388A7886A2();
}

void func_217(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_208(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_218(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
}

void func_218(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_219(int iParam0, bool bParam1, bool bParam2)
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
		iVar1 = unk_0xA2BC31158C8CEFD2(Global_31111[iVar0 /*23*/].f_11, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0xA2BC31158C8CEFD2(Global_31111[iVar0 /*23*/].f_11, 0))
	{
		unk_0xA1E7A40E1F56E511(&(Global_31111[iVar0 /*23*/].f_11), 18);
		if (Global_31108 == 1)
		{
			Global_31109 = 1;
		}
		Global_31108 = 1;
	}
	if (bParam1)
	{
		unk_0xA1E7A40E1F56E511(&(Global_31111[iVar0 /*23*/].f_11), 0);
		unk_0xA1E7A40E1F56E511(&(Global_31111[iVar0 /*23*/].f_11), 15);
		unk_0xA1E7A40E1F56E511(&(Global_31111[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0x3B76114EC84D5812(&(Global_31111[iVar0 /*23*/].f_11), 0);
		unk_0x3B76114EC84D5812(&(Global_31111[iVar0 /*23*/].f_11), 15);
	}
	if (!unk_0xA2BC31158C8CEFD2(Global_31111[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0x39A01A052D9B5FF0(Global_31111[iVar0 /*23*/].f_19))
		{
			unk_0xDD4C465128988283(1);
			unk_0xAA2276003B2ADF1B(&(Global_31111[iVar0 /*23*/].f_19));
			unk_0xDD4C465128988283(0);
		}
	}
}

