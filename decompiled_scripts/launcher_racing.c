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
	unk_0x4DAF097F502FDE9B(1);
	Local_89 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0xB9B05E900D325C36(83))
	{
		func_204(0);
	}
	func_201();
	switch (Local_83.f_1)
	{
		case 1:
		case 2:
			if (!func_200(0, 8))
			{
				func_204(0);
			}
			if (!func_199(Local_83.f_0))
			{
				func_204(0);
			}
			break;
		
		case 3:
			if (!func_200(0, 7))
			{
				func_204(0);
			}
			break;
		
		case 0:
			func_204(0);
			break;
	}
	func_193();
	if (!func_169())
	{
		func_204(0);
	}
	func_163();
	while (true)
	{
		func_160(&uLocal_216);
		if (func_169())
		{
			if (unk_0x7FAAAEBD3B7CE5DA())
			{
				switch (iLocal_82)
				{
					case 0:
						iLocal_82 = 1;
						break;
					
					case 1:
						func_151();
						func_120();
						break;
					
					case 2:
						func_56();
						break;
					
					case 3:
						func_1();
						break;
				}
			}
			else
			{
				func_204(0);
			}
		}
		else
		{
			func_204(0);
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
	Global_1312856 = 1;
	func_204(1);
}

char* func_3(int iParam0)
{
	char* sVar0;
	
	if (unk_0x6EC0C21CF01F429C())
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
	else if (unk_0x8BCF3CDD10AB0F3C())
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
	else if (unk_0x43F4A6D2081CC5ED())
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
	else if (unk_0x9D3EA2635512FD6B())
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
	else if (unk_0x20551D6D924ED04B())
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
	
	if (unk_0x6EC0C21CF01F429C())
	{
		sVar0 = "SPRACE";
	}
	else if (unk_0x8BCF3CDD10AB0F3C())
	{
		sVar0 = "2535285330962926";
	}
	else if (unk_0x43F4A6D2081CC5ED())
	{
		sVar0 = "SPRACE";
	}
	else if (unk_0x9D3EA2635512FD6B())
	{
		sVar0 = "2535285330962926";
	}
	else if (unk_0x20551D6D924ED04B())
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
	unk_0xCD7E92DE2BFA0B0D(&Global_1312423, 0);
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
	if (func_55(unk_0x0031992CA618A445()))
	{
		if (!unk_0x10E51EA4FB366520(unk_0x0031992CA618A445()))
		{
			unk_0x49C384CAABA72CC6(unk_0x0031992CA618A445(), 0);
		}
	}
	while (!func_49())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (Local_83.f_1 != 3)
	{
		func_16(func_44(), 1, Local_83.f_3);
		iVar0 = unk_0x31CD6E9F83C10233() + 1500;
		iVar1 = unk_0x7899A2987EB03783();
		if (func_14(iVar1))
		{
			while (!func_12(iVar1, 3f, 2, 1056964608, 0, 1, 0) || unk_0x31CD6E9F83C10233() < iVar0)
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
		uVar2 = unk_0xED1168B8D2D313FA();
		if (unk_0x4B0365EB2D59E6FA(uVar2))
		{
			unk_0xB568492AC80B8832(uVar2, 0, 0);
		}
	}
	func_10();
}

void func_10()
{
	if (!func_11(0))
	{
		unk_0xC397DDF7C577BD55("mission_Race");
		while (!unk_0xBE2C96D0FF6F8282("mission_Race"))
		{
			unk_0xC397DDF7C577BD55("mission_Race");
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xB8BA7F44DF1575E1("mission_Race", &Local_83, 6, 20500);
	}
	unk_0xADA0A4C226503297("mission_Race");
	func_204(1);
}

bool func_11(bool bParam0)
{
	if (!bParam0 && unk_0x7832F791572D5809(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x2A3398C6222EB190(Global_71033, 0);
}

int func_12(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0xC9621A9AD282CC14(0, 71, 1);
	unk_0xC9621A9AD282CC14(0, 72, 1);
	unk_0xC9621A9AD282CC14(0, 76, 1);
	unk_0xC9621A9AD282CC14(0, 73, 1);
	unk_0xC9621A9AD282CC14(0, 59, 1);
	unk_0xC9621A9AD282CC14(0, 60, 1);
	if (bParam5)
	{
		unk_0xC9621A9AD282CC14(0, 75, 1);
	}
	unk_0xC9621A9AD282CC14(0, 80, 1);
	if (!bParam6)
	{
		unk_0xC9621A9AD282CC14(0, 69, 1);
		unk_0xC9621A9AD282CC14(0, 70, 1);
		unk_0xC9621A9AD282CC14(0, 68, 1);
	}
	unk_0xC9621A9AD282CC14(0, 74, 1);
	unk_0xC9621A9AD282CC14(0, 86, 1);
	unk_0xC9621A9AD282CC14(0, 81, 1);
	unk_0xC9621A9AD282CC14(0, 82, 1);
	unk_0xC9621A9AD282CC14(0, 138, 1);
	unk_0xC9621A9AD282CC14(0, 136, 1);
	unk_0xC9621A9AD282CC14(0, 114, 1);
	unk_0xC9621A9AD282CC14(0, 107, 1);
	unk_0xC9621A9AD282CC14(0, 110, 1);
	unk_0xC9621A9AD282CC14(0, 89, 1);
	unk_0xC9621A9AD282CC14(0, 89, 1);
	unk_0xC9621A9AD282CC14(0, 87, 1);
	unk_0xC9621A9AD282CC14(0, 88, 1);
	unk_0xC9621A9AD282CC14(0, 113, 1);
	unk_0xC9621A9AD282CC14(0, 115, 1);
	unk_0xC9621A9AD282CC14(0, 116, 1);
	unk_0xC9621A9AD282CC14(0, 117, 1);
	unk_0xC9621A9AD282CC14(0, 118, 1);
	unk_0xC9621A9AD282CC14(0, 119, 1);
	unk_0xC9621A9AD282CC14(0, 131, 1);
	unk_0xC9621A9AD282CC14(0, 132, 1);
	unk_0xC9621A9AD282CC14(0, 123, 1);
	unk_0xC9621A9AD282CC14(0, 126, 1);
	unk_0xC9621A9AD282CC14(0, 129, 1);
	unk_0xC9621A9AD282CC14(0, 130, 1);
	unk_0xC9621A9AD282CC14(0, 133, 1);
	unk_0xC9621A9AD282CC14(0, 134, 1);
	unk_0x36EF10C45CB5F97A();
	func_13(iParam0);
	if ((unk_0x31CD6E9F83C10233() - Global_29) > 500)
	{
		unk_0x0821297CFC3D8B81(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x31CD6E9F83C10233();
	if (!unk_0x7A6C051038031EFA(iParam0, 0))
	{
		if (unk_0x229F35E7CDDBF757(unk_0x38A3CC71471EC547(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_13(int iParam0)
{
	if (!unk_0x7A6C051038031EFA(iParam0, 0))
	{
		if (unk_0x51C1CCFBBE8CC4D1(iParam0))
		{
			if (unk_0x6753D44917FA47E9(iParam0))
			{
				unk_0x0323C8DAEC297D2A(iParam0, 0);
			}
		}
	}
}

int func_14(int iParam0)
{
	if (func_15(iParam0))
	{
		if (unk_0x432757A9E7AAFA96(iParam0, 0))
		{
			if (!unk_0xB3D4A3F00B489CC7(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_15(int iParam0)
{
	if (unk_0x76B3C79DE564AFC6(iParam0))
	{
		if (!unk_0x7A6C051038031EFA(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_16(int iParam0, int iParam1, int iParam2)
{
	if (Global_104439.f_27911[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_104439.f_27911[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_17(Global_104439.f_27911[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_17(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_43();
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
					func_42(99, 1);
					func_41(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_41(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_41(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_25(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_24(5))
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
							func_41(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_41(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_41(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_24(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_41(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_41(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_41(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_41(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_41(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_41(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_41(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_41(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_41(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0xA1719FD655B44EB2())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_41(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_41(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_41(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_41(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_41(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_41(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_24(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_41(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_41(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_41(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_41(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_41(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_41(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_23(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_42(95, iParam3);
					break;
				
				case 1:
					func_42(97, iParam3);
					break;
				
				case 2:
					func_42(96, iParam3);
					break;
			}
			func_42(98, iParam3);
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
	iVar5 = (Global_53028[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_53028[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_53028[iVar2] = 2147483647;
				}
				else
				{
					Global_53028[iVar2] = (Global_53028[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_41(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_41(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_41(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_53028[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_53028[iVar2];
			Global_53028[iVar2] = (Global_53028[iVar2] - iParam3);
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
		Global_104439.f_20425.f_233[iVar2 /*69*/].f_2[Global_104439.f_20425.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_104439.f_20425.f_233[iVar2 /*69*/].f_2[Global_104439.f_20425.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_104439.f_20425.f_233[iVar2 /*69*/].f_2[Global_104439.f_20425.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_104439.f_20425.f_233[iVar2 /*69*/]++;
		Global_104439.f_20425.f_233[iVar2 /*69*/].f_1++;
		if (Global_104439.f_20425.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_104439.f_20425.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_19(iParam0);
	if (Global_35813 == 15)
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
			Global_104439.f_20425.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_104439.f_20425.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_104439.f_20425.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_104439.f_20425.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_104439.f_20425.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_104439.f_20425.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53036[iVar0 /*3*/][0] = Global_104439.f_20425[iVar0];
		Global_53036.f_31[iVar0 /*3*/][0] = Global_104439.f_20425.f_11[iVar0];
		Global_53036.f_62[iVar0 /*3*/][0] = Global_104439.f_20425.f_22[iVar0];
		Global_53036.f_93[iVar0 /*3*/][0] = Global_104439.f_20425.f_33[iVar0];
		Global_53036.f_124[iVar0 /*3*/][0] = Global_104439.f_20425.f_44[iVar0];
		Global_53036.f_155[iVar0 /*3*/][0] = Global_104439.f_20425.f_55[iVar0];
		Global_53036.f_186[iVar0 /*3*/][0] = Global_104439.f_20425.f_66[iVar0];
		Global_53036.f_217[iVar0 /*3*/][0] = Global_104439.f_20425.f_77[iVar0];
		Global_53036.f_248[iVar0 /*3*/][0] = Global_104439.f_20425.f_88[iVar0];
		if (!bParam0)
		{
			Global_53036[iVar0 /*3*/][1] = Global_104439.f_20425[iVar0];
			Global_53036.f_31[iVar0 /*3*/][1] = Global_104439.f_20425.f_11[iVar0];
			Global_53036.f_62[iVar0 /*3*/][1] = Global_104439.f_20425.f_22[iVar0];
			Global_53036.f_93[iVar0 /*3*/][1] = Global_104439.f_20425.f_33[iVar0];
			Global_53036.f_124[iVar0 /*3*/][1] = Global_104439.f_20425.f_44[iVar0];
			Global_53036.f_155[iVar0 /*3*/][1] = Global_104439.f_20425.f_55[iVar0];
			Global_53036.f_186[iVar0 /*3*/][1] = Global_104439.f_20425.f_66[iVar0];
			Global_53036.f_217[iVar0 /*3*/][1] = Global_104439.f_20425.f_77[iVar0];
			Global_53036.f_248[iVar0 /*3*/][1] = Global_104439.f_20425.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_19(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_53028[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xE931A869061F7BD2(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xE931A869061F7BD2(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xE931A869061F7BD2(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_20(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x27CA09C6DFAB1E79())
	{
		if (unk_0x2A3398C6222EB190(Global_104439.f_20425.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xD804ACF2A7171150(&(Global_104439.f_20425.f_471), iParam0);
		}
	}
	else if (unk_0x2A3398C6222EB190(Global_104439.f_20425.f_471, iParam0) || unk_0x2A3398C6222EB190(Global_2097152[func_22() /*11035*/].f_7550.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xD804ACF2A7171150(&(Global_104439.f_20425.f_471), iParam0);
		unk_0xD804ACF2A7171150(&(Global_2097152[func_22() /*11035*/].f_7550.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xC8EBA5D7FC75C1C0("COUP_RED");
		unk_0x7C8A7ECFBAD2C8C4(func_21(iParam0));
		unk_0x10DFDE006F19F20F(&cVar1, &cVar1, 1, 0, "", 0);
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

void func_23(int iParam0)
{
	func_42(93, iParam0);
	func_42(29, iParam0);
	func_42(30, iParam0);
}

bool func_24(int iParam0)
{
	if (!unk_0x27CA09C6DFAB1E79())
	{
		return unk_0x2A3398C6222EB190(Global_104439.f_20425.f_471, iParam0);
	}
	return unk_0x2A3398C6222EB190(Global_2097152[func_22() /*11035*/].f_7550.f_10, iParam0);
}

int func_25(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x38260021B4E87C3F(27))
	{
		return 0;
	}
	if (unk_0x2553A7EB99AABF55(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x2553A7EB99AABF55(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x2553A7EB99AABF55(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x2553A7EB99AABF55(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xE931A869061F7BD2(joaat("num_cash_spent"), iVar1, 1);
		func_40(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_26(27, 1);
	return 1;
}

int func_26(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_27(iParam0, iParam1);
}

int func_27(int iParam0, int iParam1)
{
	if (func_39(14) && !func_38(iParam0))
	{
		return 0;
	}
	if (unk_0x38260021B4E87C3F(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25468 != 0 && !Global_70785)
	{
		return 0;
	}
	if (func_37(&Global_2608378))
	{
		if (func_35(&Global_2608378, iParam0))
		{
			return 0;
		}
		if (func_28(&Global_2608378, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x16E13F8FE3B91C92(iParam0))
		{
			return 0;
		}
		if (unk_0x38260021B4E87C3F(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_28(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0x38260021B4E87C3F(iParam1))
	{
		return 0;
	}
	if (func_39(14) && !func_38(iParam1))
	{
		return 0;
	}
	if (func_35(uParam0, iParam1))
	{
		return 0;
	}
	if (func_34(uParam0) < 0f)
	{
		func_33(uParam0, 0);
	}
	func_31(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_29(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_29(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x38260021B4E87C3F(iParam1))
	{
		return 0;
	}
	if (func_39(14) && !func_38(iParam1))
	{
		return 0;
	}
	if (func_35(uParam0, iParam1))
	{
		return 0;
	}
	if (func_34(uParam0) < 0f)
	{
		func_33(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_30(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_30(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 70;
}

void func_31(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_32(uParam0, iVar0);
		iVar0++;
	}
	func_33(uParam0, (Global_2608377 - 0.5f));
}

void func_32(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_33(var uParam0, float fParam1)
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

float func_34(var uParam0)
{
	return uParam0->f_72;
}

bool func_35(var uParam0, int iParam1)
{
	return func_36(uParam0, iParam1) != -1;
}

int func_36(var uParam0, int iParam1)
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

bool func_37(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_38(int iParam0)
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

bool func_39(int iParam0)
{
	return Global_35813 == iParam0;
}

int func_40(int iParam0, int iParam1)
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
	iVar0 = unk_0x354C8180327FFAF0(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xA1A7D8193599FBBC(iParam0, iParam1);
	}
	return 0;
}

void func_41(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x2553A7EB99AABF55(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xE931A869061F7BD2(iParam0, iVar0, 1);
}

void func_42(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51596[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x27CA09C6DFAB1E79())
	{
		return;
	}
	if (Global_51596[iParam0 /*7*/])
	{
		unk_0x2553A7EB99AABF55(Global_51596[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xE931A869061F7BD2(Global_51596[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_43()
{
	int iVar0;
	
	if (unk_0x5D07CD56579C6131())
	{
		unk_0x2553A7EB99AABF55(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_53028[0] == iVar0)
		{
			Global_53028[0] = iVar0;
		}
		unk_0x2553A7EB99AABF55(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_53028[1] == iVar0)
		{
			Global_53028[1] = iVar0;
		}
		unk_0x2553A7EB99AABF55(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_53028[2] == iVar0)
		{
			Global_53028[2] = iVar0;
		}
	}
}

int func_44()
{
	func_45();
	return Global_104439.f_2244.f_539.f_4301;
}

void func_45()
{
	int iVar0;
	
	if (unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445()))
	{
		if (func_48(Global_104439.f_2244.f_539.f_4301) != unk_0xE9559A12052415BE(unk_0x0031992CA618A445()))
		{
			iVar0 = func_47(unk_0x0031992CA618A445());
			if (func_46(iVar0) && (!func_39(14) || Global_103390))
			{
				if (Global_104439.f_2244.f_539.f_4301 != iVar0 && func_46(Global_104439.f_2244.f_539.f_4301))
				{
					Global_104439.f_2244.f_539.f_4302 = Global_104439.f_2244.f_539.f_4301;
				}
				Global_104439.f_2244.f_539.f_4303 = iVar0;
				Global_104439.f_2244.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104439.f_2244.f_539.f_4301 != 145)
			{
				Global_104439.f_2244.f_539.f_4303 = Global_104439.f_2244.f_539.f_4301;
			}
			return;
		}
	}
	Global_104439.f_2244.f_539.f_4301 = 145;
}

bool func_46(int iParam0)
{
	return iParam0 < 3;
}

int func_47(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x76B3C79DE564AFC6(uParam0))
	{
		iVar1 = unk_0xE9559A12052415BE(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_48(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_48(int iParam0)
{
	if (func_46(iParam0))
	{
		return Global_104439.f_27911[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_49()
{
	int iVar0;
	
	iVar0 = func_50(&(Local_83.f_2), 0, 9, 0, 0);
	if (!iVar0 == 1)
	{
		return 0;
	}
	return 1;
}

int func_50(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_90385.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_54(0))
		{
			return 0;
		}
		Global_35777++;
		*uParam0 = Global_35777;
		unk_0x94EB0EFC2C10DAF6(unk_0xED1168B8D2D313FA(), 0);
		Global_17151.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x7EF668988342648C(8);
		}
		Global_35813 = iParam2;
		Global_35775 = *uParam0;
		Global_35776 = iParam4;
		Global_35774 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35774 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35774)
			{
				if (Global_35780[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35775 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_52(iParam2))
		{
			return 0;
		}
		if (Global_35774 == 8)
		{
			return 0;
		}
		Global_35777++;
		*uParam0 = Global_35777;
		Global_35780[Global_35774 /*4*/] = Global_35777;
		Global_35780[Global_35774 /*4*/].f_1 = iParam1;
		Global_35780[Global_35774 /*4*/].f_2 = iParam2;
		Global_35780[Global_35774 /*4*/].f_3 = 0;
		Global_35774++;
		if (iParam4 != 0)
		{
			func_51(uParam0, iParam4);
		}
	}
	return 2;
}

void func_51(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35774 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35774)
	{
		if (Global_35780[iVar0 /*4*/] == *uParam0)
		{
			Global_35780[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_52(int iParam0)
{
	return func_53(iParam0, Global_35813);
}

int func_53(int iParam0, int iParam1)
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

int func_54(int iParam0)
{
	if (Global_35813 == 15)
	{
		return 0;
	}
	if (func_52(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_55(int iParam0)
{
	if (func_15(iParam0))
	{
		if (!unk_0x8682D8A6269E52C9(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_56()
{
	var uVar0;
	
	switch (iLocal_96)
	{
		case 0:
			if (func_118(0, -1, 0))
			{
				unk_0x8C361F37C04084F4(1);
				func_106();
				unk_0x62316D43A8F729C6(0);
				iLocal_101 = 1;
				bLocal_99 = false;
				bLocal_100 = false;
				iLocal_96 = 1;
			}
			break;
		
		case 1:
			if (func_70())
			{
				iLocal_96 = 2;
			}
			break;
		
		case 2:
			uVar0 = unk_0xED1168B8D2D313FA();
			unk_0x6650FC093AC9B178(uVar0, 0);
			unk_0xB568492AC80B8832(uVar0, 1, 0);
			func_60(0, 1, 1, 0);
			func_57(1, -1);
			iLocal_96 = 0;
			if (bLocal_99)
			{
				iLocal_82 = 3;
			}
			else
			{
				unk_0x62316D43A8F729C6(1);
				iLocal_82 = 1;
			}
			break;
	}
}

void func_57(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_59(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17290.f_7931)
	{
		unk_0xC030DF4B187326D7(15);
		Global_17290.f_7931 = 0;
	}
	unk_0x4288569892059474(0f);
	if (Global_17290.f_5498[iVar0])
	{
		unk_0x84D19A34E1A97ABC(9, false);
		Global_17290.f_5498[iVar0] = 0;
	}
	if (Global_17290.f_5484[iVar0])
	{
		unk_0x40C8D24AE8508DEC("CommonMenu");
		Global_17290.f_5484[iVar0] = 0;
	}
	if (Global_17290.f_5491[iVar0])
	{
		unk_0x40C8D24AE8508DEC("MPShopSale");
		Global_17290.f_5491[iVar0] = 0;
	}
	if (bParam0)
	{
		func_58(&(Global_17290.f_5530[iVar0 /*10*/]));
		Global_17290.f_5591[iVar0] = 0;
	}
	else
	{
		Global_17290.f_5591[iVar0] = 0;
	}
}

void func_58(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x77FA56883245AD26(*uParam0))
		{
			unk_0x7F165E259CFAC8B8(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_59(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0x27CA09C6DFAB1E79() && unk_0x93BDC21B9F2C5E43())
		{
			iParam2 = unk_0xFBECB0811993DE21();
		}
	}
	StringCopy(&cVar0, unk_0x49CAADAD1ABAB70A(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0x50B7853132D8438E(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_17290.f_5591[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_17290.f_5591[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_17290.f_5591[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_60(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x19118E4FD77F8B01(unk_0x3D35F9864E4640B1());
		unk_0x49499782410B8CE3(unk_0x3D35F9864E4640B1(), 1);
		unk_0x064117622D142B20(unk_0x3D35F9864E4640B1(), 1);
		func_69(1);
		unk_0x94C26352258B001C();
		unk_0x7E403E6B20B0F65E();
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xCAD6D8C85D0F329B())
			{
				unk_0x683F0CB6CA4C99D0(0);
			}
			if (!func_68())
			{
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_67(1, iParam3, iParam2, 0);
		Global_55860 = 1;
		Global_68168 = 1;
		Global_70783 = 1;
	}
	else
	{
		func_69(0);
		unk_0xA82338775E53641E();
		Global_55860 = 0;
		if (bParam1)
		{
			unk_0x074C8061E9FD0B90();
		}
		unk_0x49499782410B8CE3(unk_0x3D35F9864E4640B1(), 0);
		unk_0x064117622D142B20(unk_0x3D35F9864E4640B1(), 0);
		func_67(0, iParam3, iParam2, 0);
		if (unk_0x27CA09C6DFAB1E79())
		{
			if (((!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()) && !func_65(unk_0x3D35F9864E4640B1())) && !func_62(unk_0x3D35F9864E4640B1(), 0)) && !func_61())
			{
				unk_0xC20B73867395D06D(unk_0x0031992CA618A445(), 0);
			}
		}
		else if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()) && !func_65(unk_0x3D35F9864E4640B1()))
		{
			unk_0xC20B73867395D06D(unk_0x0031992CA618A445(), 0);
		}
		Global_70783 = 0;
	}
}

bool func_61()
{
	return unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_39.f_18, 14);
}

bool func_62(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x3D35F9864E4640B1())
	{
		bVar0 = func_63(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1593076[iParam0 /*647*/].f_204 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x80BA8E3CC61A8625(iParam0))
		{
			bVar0 = unk_0xB5E2A107E006EC7A(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_63(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_64();
	}
	if (Global_1312833[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312729[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_64()
{
	return Global_1312735;
}

int func_65(int iParam0)
{
	if (func_62(iParam0, 0))
	{
		return 1;
	}
	if (func_66())
	{
		if (iParam0 == unk_0x3D35F9864E4640B1())
		{
			return 1;
		}
	}
	if (unk_0x2A3398C6222EB190(Global_2422142[iParam0 /*399*/].f_204, 2))
	{
		return 1;
	}
	return 0;
}

bool func_66()
{
	return unk_0x2A3398C6222EB190(Global_2359302, 3);
}

int func_67(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x20551D6D924ED04B())
	{
		if (unk_0xF1246FB9A9397227() != iParam0 && uParam2)
		{
			unk_0xC17B06EB7D180D8E(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_68()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_69(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xCD7E92DE2BFA0B0D(&Global_2313, 13);
	}
	else
	{
		unk_0xD804ACF2A7171150(&Global_2313, 13);
	}
}

int func_70()
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
	
	func_105(&iVar0, &iVar1, &uVar2, &uVar3, 0);
	unk_0x8662FAB20C4C3CFB(2, 201);
	unk_0x8662FAB20C4C3CFB(2, 202);
	unk_0x8662FAB20C4C3CFB(2, 188);
	unk_0x8662FAB20C4C3CFB(2, 187);
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
	bVar4 = (iVar1 < -64 || unk_0xD887E21676314450(2, 188));
	bVar5 = (iVar1 > 64 || unk_0xD887E21676314450(2, 187));
	bVar6 = unk_0xD887E21676314450(2, 201);
	bVar7 = unk_0xD887E21676314450(2, 202);
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
			func_104(iLocal_97, 1, 1);
		}
	}
	func_71(1, -1, 1, 0, 1, -1082130432, 0, 0);
	return 0;
}

void func_71(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
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
	int iVar49;
	float fVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	int iVar54;
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
	
	if (!func_59(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_101(0, bParam6))
	{
		return;
	}
	unk_0x661705F074A804D1(76, 84);
	unk_0x399D1A0AE11E61E3(-0.05f, -0.05f, 0f, 0f);
	fVar57 = 0f;
	fVar58 = 0f;
	if (Global_17290)
	{
		if (func_99(29, 1, 1, &fVar35, &fVar36, bParam7))
		{
			fVar57 = fVar36;
			fVar58 = fVar35;
			fVar57 = (fVar57 + 0f);
		}
		else
		{
			Global_17290 = 0;
		}
	}
	if (unk_0x50B7853132D8438E(&(Global_17290.f_1)) == unk_0x50B7853132D8438E("HIDE"))
	{
		fVar59 = Global_17288;
	}
	else
	{
		fVar59 = (((Global_17288 + fVar57) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_17289;
	}
	fVar62 = 1f;
	if (bParam7)
	{
		unk_0xD9151D5BCEE2689C(&iVar60, &iVar61);
		fVar63 = unk_0x5E61619C36D9095B(0);
		if (func_98())
		{
			iVar60 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar61) * fVar63));
		}
		fVar64 = (unk_0xBBDA792448DB5A89(iVar60) / unk_0xBBDA792448DB5A89(iVar61));
		fVar62 = (fVar64 / fVar63);
		if (func_98())
		{
			fVar62 = 1f;
		}
		iVar60 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar60) / fVar62));
		iVar61 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar61) / fVar62));
	}
	else
	{
		unk_0x68824FF629FFAE6D(&iVar60, &iVar61);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17290.f_5598)
		{
			if (unk_0x50B7853132D8438E(&(Global_17290.f_1)) == unk_0x50B7853132D8438E("HIDE"))
			{
				fVar50 = Global_17288;
			}
			else
			{
				if (Global_17290)
				{
					StringCopy(&cVar65, func_97(29), 64);
					StringCopy(&cVar81, func_94(29, 1), 64);
					if (unk_0x50B7853132D8438E(&(Global_17290.f_6719[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_93(Global_17287, Global_17288, fParam5, (fVar57 - 0f), 0, 0, 0, 255);
						unk_0x1638116285563DAD(&cVar65, &cVar81, (Global_17287 + (fParam5 * 0.5f)), (Global_17288 + ((fVar57 - 0f) * 0.5f)), fVar58, (fVar57 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0x1638116285563DAD(&cVar65, &cVar81, (Global_17287 + (fParam5 * 0.5f)), (Global_17288 + ((fVar57 - 0f) * 0.5f)), fParam5, (fVar57 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_17290.f_7901)
				{
					iVar1 = Global_17290.f_7897;
					iVar2 = Global_17290.f_7898;
					iVar3 = Global_17290.f_7899;
					iVar4 = Global_17290.f_7900;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_93(Global_17287, (Global_17288 + fVar57), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar50 = (((Global_17288 + fVar57) + 0.034722f) + 0f);
				if (unk_0x50B7853132D8438E(&(Global_17290.f_1)) != 0)
				{
					func_92();
					unk_0x0B8B91F21AE25854(&(Global_17290.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17290.f_68)
					{
						if (Global_17290.f_5[iVar14] == 2)
						{
							unk_0x96577CAA1D1E72DB(Global_17290.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17290.f_5[iVar14] == 3)
						{
							unk_0x5E66471E79E6D3ED(Global_17290.f_14[iVar16], Global_17290.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17290.f_5[iVar14] == 1)
						{
							unk_0x7C8A7ECFBAD2C8C4(&(Global_17290.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17290.f_5[iVar14] == 8)
						{
							unk_0x7C8A7ECFBAD2C8C4(&(Global_17290.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17290.f_5[iVar14] == 5)
						{
							unk_0x50B3C23D0902259F(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 6)
						{
							unk_0x7C8A7ECFBAD2C8C4(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 7)
						{
							unk_0x50B3C23D0902259F(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 9)
						{
							unk_0x50B3C23D0902259F(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0x7E43DE6F9866B44B((Global_17287 + 0.00390625f), ((Global_17288 + fVar57) + 0.00416664f), 0);
				}
				if (Global_17290.f_5601 > Global_17290.f_5095)
				{
					if (Global_17290.f_5604 != 0)
					{
						func_92();
						func_90((((Global_17287 + fParam5) - 0.00390625f) - func_91("CM_ITEM_COUNT", Global_17290.f_5604, Global_17290.f_5603)), ((Global_17288 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_17290.f_5604, Global_17290.f_5603);
					}
				}
			}
			iVar6 = Global_17290.f_5605;
			iVar9 = 0;
			fVar97 = fVar50;
			if (Global_17290.f_7911)
			{
				iVar1 = Global_17290.f_7907;
				iVar2 = Global_17290.f_7908;
				iVar3 = Global_17290.f_7909;
				iVar4 = Global_17290.f_7910;
			}
			else
			{
				unk_0xB922891BFD232C45(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17290.f_5095 && iVar6 <= Global_17290.f_5088)
			{
				if (iVar6 >= 0)
				{
					if (Global_17290.f_5355[iVar6])
					{
						if (Global_17290.f_5226[iVar6] && iVar6 != Global_17290.f_5605)
						{
							fVar50 = (fVar50 + 0.00277776f);
						}
						fVar56 = 0.034722f;
						if (Global_17290.f_5612[iVar6] != 0f)
						{
							fVar56 = Global_17290.f_5612[iVar6];
						}
						fVar50 = (fVar50 + fVar56);
						iVar9++;
					}
				}
				iVar6++;
			}
			if (bParam3)
			{
				if (iVar9 <= 1)
				{
					fVar56 = 0.034722f;
					fVar50 = (fVar50 + fVar56);
					iVar9++;
					if (Global_17290.f_5088 <= 1)
					{
						Global_17290.f_5088++;
					}
					iVar54 = 1;
				}
			}
			unk_0x1638116285563DAD("CommonMenu", "Gradient_Bgd", (Global_17287 + (fParam5 * 0.5f)), ((fVar97 + ((fVar50 - fVar97) * 0.5f)) - 0.00138888f), fParam5, (fVar50 - fVar97), 0f, 255, 255, 255, 255, 0);
			if (Global_17290.f_5601 > Global_17290.f_5095)
			{
				if (Global_17290.f_7916)
				{
					iVar1 = Global_17290.f_7912;
					iVar2 = Global_17290.f_7913;
					iVar3 = Global_17290.f_7914;
					iVar4 = Global_17290.f_7915;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_93(Global_17287, (fVar50 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var37 = { unk_0xB9E4A5FCB2BE22B7("CommonMenu", "shop_arrows_upANDdown") };
				Var37.f_0 = (Var37.f_0 * (0.5f / fVar62));
				Var37.f_1 = (Var37.f_1 * (0.5f / fVar62));
				if (Global_17290.f_7929)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0xB922891BFD232C45(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x1638116285563DAD("CommonMenu", "shop_arrows_upANDdown", (Global_17287 + (fParam5 * 0.5f)), ((fVar50 + 0f) + (0.034722f * 0.5f)), ((Var37.f_0 / 1280f) * fVar62), ((Var37.f_1 / 720f) * fVar62), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar50 = (fVar50 + (0f + 0.034722f));
			}
			if (unk_0x50B7853132D8438E(&(Global_17290.f_4562)) != 0 && Global_17290.f_4636 != -1)
			{
				fVar50 = (fVar50 + (0.00277776f * 2f));
				fVar41 = (Global_17287 + 0.0046875f);
				if (Global_17290.f_4638 != 0)
				{
					func_99(Global_17290.f_4638, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17287 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_89(fVar41);
				unk_0x1099CBF49396B795(&(Global_17290.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17290.f_4632)
				{
					if (Global_17290.f_4566[iVar14] == 2)
					{
						unk_0x96577CAA1D1E72DB(Global_17290.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17290.f_4566[iVar14] == 3)
					{
						unk_0x5E66471E79E6D3ED(Global_17290.f_4575[iVar16], Global_17290.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17290.f_4566[iVar14] == 1)
					{
						unk_0x7C8A7ECFBAD2C8C4(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 5)
					{
						unk_0x50B3C23D0902259F(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 6)
					{
						unk_0x7C8A7ECFBAD2C8C4(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 7)
					{
						unk_0x50B3C23D0902259F(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 9)
					{
						unk_0x50B3C23D0902259F(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xDCC26C786B8D41DB(fVar41, (fVar50 + 0.00277776f));
				unk_0xB922891BFD232C45(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_93(Global_17287, (fVar50 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17290.f_7921)
				{
					iVar1 = Global_17290.f_7917;
					iVar2 = Global_17290.f_7918;
					iVar3 = Global_17290.f_7919;
					iVar4 = Global_17290.f_7920;
				}
				else
				{
					unk_0xB922891BFD232C45(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x1638116285563DAD("CommonMenu", "Gradient_Bgd", (Global_17287 + (fParam5 * 0.5f)), ((fVar50 + ((((unk_0x4A373026C2688C78(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x4A373026C2688C78(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_89(fVar41);
				unk_0x0B8B91F21AE25854(&(Global_17290.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17290.f_4632)
				{
					if (Global_17290.f_4566[iVar14] == 2)
					{
						unk_0x96577CAA1D1E72DB(Global_17290.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17290.f_4566[iVar14] == 3)
					{
						unk_0x5E66471E79E6D3ED(Global_17290.f_4575[iVar16], Global_17290.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17290.f_4566[iVar14] == 1)
					{
						unk_0x7C8A7ECFBAD2C8C4(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 5)
					{
						unk_0x50B3C23D0902259F(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 6)
					{
						unk_0x7C8A7ECFBAD2C8C4(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 7)
					{
						unk_0x50B3C23D0902259F(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 9)
					{
						unk_0x50B3C23D0902259F(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 8)
					{
						unk_0x7C8A7ECFBAD2C8C4(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x7E43DE6F9866B44B(fVar41, (fVar50 + 0.00277776f), 0);
				if (Global_17290.f_4638 != 0)
				{
					func_99(Global_17290.f_4638, 1, 1, &fVar35, &fVar36, bParam7);
					func_88(Global_17290.f_4638, 1, &iVar46, &iVar47, &iVar48, &iVar49);
					unk_0x1638116285563DAD(func_97(Global_17290.f_4638), func_94(Global_17290.f_4638, 1), ((Global_17287 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar50 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
				}
				fVar50 = (fVar50 + (((unk_0x4A373026C2688C78(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17290.f_4636 > 0)
				{
					if ((unk_0x31CD6E9F83C10233() - Global_17290.f_4637) > Global_17290.f_4636)
					{
						StringCopy(&(Global_17290.f_4562), "", 16);
						Global_17290.f_4636 = -1;
					}
				}
			}
			if (unk_0x50B7853132D8438E(&(Global_2606798.f_21)) != 0 && Global_2606798.f_65 != -1)
			{
				fVar50 = (fVar50 + (0.00277776f * 2f));
				fVar41 = (Global_17287 + 0.0046875f);
				if (Global_2606798.f_67 != 0)
				{
					func_99(Global_2606798.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17287 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_89(fVar41);
				unk_0x1099CBF49396B795(&(Global_2606798.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2606798.f_61)
				{
					if (Global_2606798.f_25[iVar14] == 2)
					{
						unk_0x96577CAA1D1E72DB(Global_2606798.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2606798.f_25[iVar14] == 3)
					{
						unk_0x5E66471E79E6D3ED(Global_2606798.f_34[iVar16], Global_2606798.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2606798.f_25[iVar14] == 1)
					{
						unk_0x7C8A7ECFBAD2C8C4(&(Global_2606798.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2606798.f_25[iVar14] == 5)
					{
						unk_0x50B3C23D0902259F(&(Global_2606798.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2606798.f_25[iVar14] == 6)
					{
						unk_0x7C8A7ECFBAD2C8C4(&(Global_2606798.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2606798.f_25[iVar14] == 7)
					{
						unk_0x50B3C23D0902259F(&(Global_2606798.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2606798.f_25[iVar14] == 9)
					{
						unk_0x50B3C23D0902259F(&(Global_2606798.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2606798.f_25[iVar14] == 8)
					{
						unk_0x7C8A7ECFBAD2C8C4(&(Global_2606798.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xDCC26C786B8D41DB(fVar41, (fVar50 + 0.00277776f));
				unk_0xB922891BFD232C45(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_93(Global_17287, (fVar50 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17290.f_7921)
				{
					iVar1 = Global_17290.f_7917;
					iVar2 = Global_17290.f_7918;
					iVar3 = Global_17290.f_7919;
					iVar4 = Global_17290.f_7920;
				}
				else
				{
					unk_0xB922891BFD232C45(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x1638116285563DAD("CommonMenu", "Gradient_Bgd", (Global_17287 + (fParam5 * 0.5f)), ((fVar50 + ((((unk_0x4A373026C2688C78(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x4A373026C2688C78(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_89(fVar41);
				unk_0x0B8B91F21AE25854(&(Global_2606798.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2606798.f_61)
				{
					if (Global_2606798.f_25[iVar14] == 2)
					{
						unk_0x96577CAA1D1E72DB(Global_2606798.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2606798.f_25[iVar14] == 3)
					{
						unk_0x5E66471E79E6D3ED(Global_2606798.f_34[iVar16], Global_2606798.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2606798.f_25[iVar14] == 1)
					{
						unk_0x7C8A7ECFBAD2C8C4(&(Global_2606798.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2606798.f_25[iVar14] == 8)
					{
						unk_0x7C8A7ECFBAD2C8C4(&(Global_2606798.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2606798.f_25[iVar14] == 5)
					{
						unk_0x50B3C23D0902259F(&(Global_2606798.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2606798.f_25[iVar14] == 6)
					{
						unk_0x7C8A7ECFBAD2C8C4(&(Global_2606798.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2606798.f_25[iVar14] == 7)
					{
						unk_0x50B3C23D0902259F(&(Global_2606798.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2606798.f_25[iVar14] == 9)
					{
						unk_0x50B3C23D0902259F(&(Global_2606798.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x7E43DE6F9866B44B(fVar41, (fVar50 + 0.00277776f), 0);
				if (Global_2606798.f_67 != 0)
				{
					func_99(Global_2606798.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					func_88(Global_2606798.f_67, 1, &iVar46, &iVar47, &iVar48, &iVar49);
					unk_0x1638116285563DAD(func_97(Global_2606798.f_67), func_94(Global_2606798.f_67, 1), ((Global_17287 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar50 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
				}
				fVar50 = (fVar50 + (((unk_0x4A373026C2688C78(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_2606798.f_65 > 0)
				{
					if ((unk_0x31CD6E9F83C10233() - Global_2606798.f_66) > Global_2606798.f_65)
					{
						StringCopy(&(Global_2606798.f_21), "", 16);
						Global_2606798.f_65 = -1;
					}
				}
			}
			func_83(iVar60, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			unk_0x661705F074A804D1(76, 84);
			unk_0x399D1A0AE11E61E3(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17290.f_5598)
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
			iVar98 = Global_17290.f_5088;
			if (Global_17290.f_5599)
			{
				iVar98 = (Global_17290.f_5602 - 1);
			}
			fVar99 = 0f;
			fVar100 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar98)
			{
				fVar56 = 0.034722f;
				if (Global_17290.f_5612[iVar6] != 0f)
				{
					fVar56 = Global_17290.f_5612[iVar6];
				}
				if (Global_17290.f_5599)
				{
					iVar6 = Global_17290.f_7552[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar32 = false;
				if (iVar6 >= Global_17290.f_5605 && iVar9 < Global_17290.f_5095)
				{
					bVar32 = true;
					if (Global_17290.f_5606 == iVar6)
					{
						fVar100 = fVar99;
					}
					if (Global_17290.f_5226[iVar6])
					{
						iVar12++;
					}
					fVar34 = (((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_17290.f_5746[iVar6] = fVar34;
				fVar33 = (Global_17287 + 0.0046875f);
				bVar40 = false;
				bVar31 = Global_17290.f_5606 == iVar6;
				if ((bVar31 && iVar5 == 1) && bVar32)
				{
					iVar101 = 255;
					iVar102 = 255;
					iVar103 = 255;
					iVar104 = 255;
					if (Global_17290.f_7923)
					{
						unk_0xB922891BFD232C45(Global_17290.f_7922, &iVar101, &iVar102, &iVar103, &iVar104);
					}
					else
					{
						unk_0xB922891BFD232C45(1, &iVar101, &iVar102, &iVar103, &iVar104);
					}
					unk_0x1638116285563DAD("CommonMenu", "Gradient_Nav", (Global_17287 + (fParam5 * 0.5f)), (((fVar59 + fVar100) + (0.00277776f * IntToFloat(iVar12))) + (fVar56 * 0.5f)), fParam5, fVar56, 0f, iVar101, iVar102, iVar103, iVar104, 0);
					Global_17290.f_5744 = fVar34;
				}
				if (iVar54 && iVar7 == iVar98)
				{
					func_81(bVar31, 1, 0, 0, 0, 0, 0);
					unk_0x0B8B91F21AE25854("DFLT_MNU_OPT");
					unk_0x7E43DE6F9866B44B(fVar33, fVar34, 0);
					bVar40 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_17290.f_5096)
					{
						if (unk_0x2A3398C6222EB190(Global_17290.f_4959[iVar6], iVar8) || Global_17290.f_4926[iVar8] == 5)
						{
							if (Global_17290.f_5599)
							{
								iVar19 = Global_17290.f_7568[((iVar9 * Global_17290.f_5096) + iVar8)];
								iVar20 = Global_17290.f_7609[((iVar9 * Global_17290.f_5096) + iVar8)];
								iVar21 = Global_17290.f_7650[((iVar9 * Global_17290.f_5096) + iVar8)];
								iVar22 = Global_17290.f_7691[((iVar9 * Global_17290.f_5096) + iVar8)];
								iVar23 = Global_17290.f_7732[((iVar9 * Global_17290.f_5096) + iVar8)];
							}
							else
							{
								Global_17290.f_7568[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar19;
								Global_17290.f_7609[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar20;
								Global_17290.f_7650[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar21;
								Global_17290.f_7691[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar22;
								Global_17290.f_7732[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar23;
							}
							iVar105 = 0;
							bVar55 = false;
							if (Global_17290.f_5878[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17290.f_5875[0])
								{
									bVar55 = true;
									iVar105 = 0;
								}
							}
							if (Global_17290.f_5878[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17290.f_5875[1])
								{
									bVar55 = true;
									iVar105 = 1;
								}
							}
							if (Global_17290.f_4932[iVar8] != -1f)
							{
								fVar33 = ((Global_17287 + 0.0046875f) + Global_17290.f_4932[iVar8]);
							}
							if ((iVar8 < 4 && Global_17290.f_4932[iVar8 + 1] != -1f) && fVar33 < Global_17290.f_4932[iVar8 + 1])
							{
								fVar45 = (Global_17290.f_4932[iVar8 + 1] - fVar33);
							}
							else
							{
								fVar45 = (((Global_17287 + Global_17289) - 0.0046875f) - fVar33);
							}
							if ((Global_17290.f_4945[iVar8] && Global_17290.f_5741) && bVar31)
							{
								bVar53 = true;
							}
							else
							{
								bVar53 = false;
							}
							switch (Global_17290.f_4926[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17290.f_5599)
										{
											fVar42 = 0f;
											fVar43 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
											{
												bVar51 = false;
												bVar52 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
													{
														bVar52 = true;
													}
													else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
													{
														bVar51 = true;
													}
													iVar14++;
												}
												func_81(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar55, iVar105, bVar52, bVar51);
												unk_0x54412EEBDB162F5C(&(Global_17290.f_73[iVar24 /*6*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x7C8A7ECFBAD2C8C4(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x7C8A7ECFBAD2C8C4(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5)
												{
													if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x50B3C23D0902259F(&(Global_2455648[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 6)
												{
													if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x7C8A7ECFBAD2C8C4(&(Global_2455648[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 7)
												{
													if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x50B3C23D0902259F(&(Global_2455648[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x50B3C23D0902259F(&(Global_2455648[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 2)
												{
													if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x96577CAA1D1E72DB(Global_17290.f_3918[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 3)
												{
													if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x5E66471E79E6D3ED(Global_17290.f_4175[(iVar21 + iVar27)], Global_17290.f_4304[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
											{
												fVar42 = unk_0x51C2CBAC9E5D95A4(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_99(Global_17290.f_4433[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar43 = (fVar43 + fVar35);
														if (iVar14 > 0)
														{
															fVar43 = (fVar43 - (0.00078125f * 4f));
														}
														if (Global_17290.f_4433[(iVar22 + iVar14)] == 2 || Global_17290.f_4433[(iVar22 + iVar14)] == 48)
														{
															fVar43 = (fVar43 - (0.00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar41 = 0f;
											if (Global_17290.f_4953[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - (fVar42 + fVar43)) + (0.00078125f * 1f)));
											}
											else if (Global_17290.f_4953[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - ((fVar42 + fVar43) * 0.5f)));
											}
											Global_17290.f_7773[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar41;
											Global_17290.f_7814[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar42;
											Global_17290.f_7855[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar43;
										}
										else
										{
											fVar41 = Global_17290.f_7773[((iVar9 * Global_17290.f_5096) + iVar8)];
											fVar42 = Global_17290.f_7814[((iVar9 * Global_17290.f_5096) + iVar8)];
											fVar43 = Global_17290.f_7855[((iVar9 * Global_17290.f_5096) + iVar8)];
										}
										if (bVar53)
										{
											if (func_99(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17290.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_99(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_88(26, 1, &iVar46, &iVar47, &iVar48, &iVar49);
													unk_0x1638116285563DAD(func_97(26), func_94(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
												}
											}
											if (func_99(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_99(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_88(27, 1, &iVar46, &iVar47, &iVar48, &iVar49);
													unk_0x1638116285563DAD(func_97(27), func_94(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar30 = 0;
										if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
										{
											bVar51 = false;
											bVar52 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													bVar52 = true;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													bVar51 = true;
												}
												iVar14++;
											}
											func_81(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar55, 0, bVar52, bVar51);
											if (Global_17290.f_7927 && Global_17290.f_7928 == iVar6)
											{
												func_80(bVar31);
											}
											unk_0x0B8B91F21AE25854(&(Global_17290.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x7C8A7ECFBAD2C8C4(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar30 = 1;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x7C8A7ECFBAD2C8C4(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar30 = 8;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x50B3C23D0902259F(&(Global_2455648[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 5;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x7C8A7ECFBAD2C8C4(&(Global_2455648[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x50B3C23D0902259F(&(Global_2455648[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 7;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x50B3C23D0902259F(&(Global_2455648[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 9;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x96577CAA1D1E72DB(Global_17290.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar30 = 2;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x5E66471E79E6D3ED(Global_17290.f_4175[(iVar21 + iVar27)], Global_17290.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar30 = 3;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_17290.f_4433[(iVar22 + iVar28)] == 2 || Global_17290.f_4433[(iVar22 + iVar28)] == 48)
												{
													if (func_99(Global_17290.f_4433[(iVar22 + iVar28)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_99(Global_17290.f_4433[(iVar22 + iVar28)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_88(Global_17290.f_4433[(iVar22 + iVar28)], bVar31, &iVar46, &iVar47, &iVar48, &iVar49);
															if (Global_17290.f_4953[iVar8] == 2)
															{
																unk_0x1638116285563DAD(func_97(Global_17290.f_4433[(iVar22 + iVar28)]), func_94(Global_17290.f_4433[(iVar22 + iVar28)], bVar31), (((fVar33 + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
															}
															else
															{
																unk_0x1638116285563DAD(func_97(Global_17290.f_4433[(iVar22 + iVar28)]), func_94(Global_17290.f_4433[(iVar22 + iVar28)], bVar31), ((fVar33 + fVar41) - (0.00078125f * 8f)), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
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
										if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
										{
											if (iVar30 == 4 && Global_17290.f_4953[iVar8] == 2)
											{
												unk_0x7E43DE6F9866B44B(((fVar33 + fVar41) + (0.00078125f * 7f)), fVar34, 0);
											}
											else
											{
												unk_0x7E43DE6F9866B44B((fVar33 + fVar41), fVar34, 0);
											}
										}
										if (iVar28 > 0)
										{
											fVar41 = (fVar41 + (6f * 0.00078125f));
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_17290.f_4433[(iVar22 + iVar14)] != 2 && Global_17290.f_4433[(iVar22 + iVar14)] != 48)
												{
													if (func_99(Global_17290.f_4433[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_99(Global_17290.f_4433[(iVar22 + iVar14)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_88(Global_17290.f_4433[(iVar22 + iVar14)], bVar31, &iVar46, &iVar47, &iVar48, &iVar49);
															if (Global_17290.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0x1638116285563DAD(func_97(Global_17290.f_4433[(iVar22 + iVar14)]), func_94(Global_17290.f_4433[(iVar22 + iVar14)], bVar31), (Global_17287 + (fVar35 * 0.5f)), (((fVar34 + 0.00277776f) + (fVar36 * 0.5f)) - (0.00078125f * 11f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
															}
															else if (Global_17290.f_4953[iVar8] == 2)
															{
																unk_0x1638116285563DAD(func_97(Global_17290.f_4433[(iVar22 + iVar14)]), func_94(Global_17290.f_4433[(iVar22 + iVar14)], bVar31), ((((fVar33 + fVar41) + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
															}
															else
															{
																unk_0x1638116285563DAD(func_97(Global_17290.f_4433[(iVar22 + iVar14)]), func_94(Global_17290.f_4433[(iVar22 + iVar14)], bVar31), (((fVar33 + fVar41) + fVar42) - (0.00078125f * 12f)), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
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
										if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17290.f_5599)
										{
											func_81(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar55, 0, 0, 0);
											if (Global_17290.f_7927 && Global_17290.f_7928 == iVar6)
											{
												func_80(bVar31);
											}
											unk_0x54412EEBDB162F5C("NUMBER");
											unk_0x96577CAA1D1E72DB(Global_17290.f_3918[iVar20]);
											fVar42 = unk_0x51C2CBAC9E5D95A4(1);
											fVar41 = 0f;
											if (Global_17290.f_4953[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17290.f_4953[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17290.f_7773[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar41;
											Global_17290.f_7814[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17290.f_7773[((iVar9 * Global_17290.f_5096) + iVar8)];
											fVar42 = Global_17290.f_7814[((iVar9 * Global_17290.f_5096) + iVar8)];
										}
										if (bVar53)
										{
											if (func_99(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17290.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_99(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_88(26, 1, &iVar46, &iVar47, &iVar48, &iVar49);
													unk_0x1638116285563DAD(func_97(26), func_94(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
												}
											}
											if (func_99(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_99(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_88(27, 1, &iVar46, &iVar47, &iVar48, &iVar49);
													unk_0x1638116285563DAD(func_97(27), func_94(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
												}
											}
										}
										func_81(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar55, 0, 0, 0);
										func_79((fVar33 + fVar41), fVar34, "NUMBER", Global_17290.f_3918[iVar20], 0);
									}
									bVar40 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17290.f_5599)
										{
											func_81(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar55, 0, 0, 0);
											if (Global_17290.f_7927 && Global_17290.f_7928 == iVar6)
											{
												func_80(bVar31);
											}
											unk_0x54412EEBDB162F5C("NUMBER");
											unk_0x5E66471E79E6D3ED(Global_17290.f_4175[iVar21], Global_17290.f_4304[iVar21]);
											fVar42 = unk_0x51C2CBAC9E5D95A4(1);
											fVar41 = 0f;
											if (Global_17290.f_4953[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17290.f_4953[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17290.f_7773[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar41;
											Global_17290.f_7814[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17290.f_7773[((iVar9 * Global_17290.f_5096) + iVar8)];
											fVar42 = Global_17290.f_7814[((iVar9 * Global_17290.f_5096) + iVar8)];
										}
										if (bVar53)
										{
											if (func_99(26, 1, 0, &fVar35, &fVar36, 0))
											{
												if (Global_17290.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_99(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_88(26, 1, &iVar46, &iVar47, &iVar48, &iVar49);
													unk_0x1638116285563DAD(func_97(26), func_94(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
												}
											}
											if (func_99(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_99(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_88(27, 1, &iVar46, &iVar47, &iVar48, &iVar49);
													unk_0x1638116285563DAD(func_97(27), func_94(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
												}
											}
										}
										func_81(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar55, 0, 0, 0);
										func_78((fVar33 + fVar41), fVar34, "NUMBER", Global_17290.f_4175[iVar21], Global_17290.f_4304[iVar21]);
									}
									bVar40 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar32)
									{
										if (func_99(Global_17290.f_4433[iVar22], bVar31, 0, &fVar35, &fVar36, bParam7))
										{
											if (!Global_17290.f_5599)
											{
												fVar43 = fVar35;
												fVar41 = 0f;
												if (Global_17290.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 + ((fVar45 - fVar43) + (0.00078125f * 1f)));
												}
												else if (Global_17290.f_4953[iVar8] == 0)
												{
													fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar43 * 0.5f)));
												}
												Global_17290.f_7773[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar41;
												Global_17290.f_7855[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar43;
											}
											else
											{
												fVar41 = Global_17290.f_7773[((iVar9 * Global_17290.f_5096) + iVar8)];
												fVar43 = Global_17290.f_7855[((iVar9 * Global_17290.f_5096) + iVar8)];
											}
											if (bVar53)
											{
												if (func_99(26, 1, 0, &fVar35, &fVar36, bParam7))
												{
													if (Global_17290.f_4953[iVar8] == 2)
													{
														fVar41 = (fVar41 - (fVar35 * 2f));
													}
													fVar44 = (fVar35 * 0.5f);
													if (func_99(26, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_88(26, 1, &iVar46, &iVar47, &iVar48, &iVar49);
														unk_0x1638116285563DAD(func_97(26), func_94(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
													}
												}
												if (func_99(27, 1, 0, &fVar35, &fVar36, bParam7))
												{
													fVar41 = (fVar41 + fVar35);
													fVar44 = (fVar35 * 0.5f);
													if (func_99(27, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_88(27, 1, &iVar46, &iVar47, &iVar48, &iVar49);
														unk_0x1638116285563DAD(func_97(27), func_94(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
													}
												}
											}
											if (func_99(Global_17290.f_4433[iVar22], bVar31, 1, &fVar35, &fVar36, bParam7))
											{
												func_88(Global_17290.f_4433[iVar22], bVar31, &iVar46, &iVar47, &iVar48, &iVar49);
												unk_0x1638116285563DAD(func_97(Global_17290.f_4433[iVar22]), func_94(Global_17290.f_4433[iVar22], bVar31), ((fVar33 + fVar41) + (fVar35 * 0.5f)), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), (fVar35 * func_77(Global_17290.f_4433[iVar22])), (fVar36 * func_77(Global_17290.f_4433[iVar22])), 0f, iVar46, iVar47, iVar48, iVar49, 0);
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
							if (Global_17290.f_4926[iVar8] == 5)
							{
								if (Global_17290.f_4938[iVar8] > 0.05f)
								{
									fVar33 = (fVar33 + Global_17290.f_4938[iVar8]);
								}
								else
								{
									fVar33 = (fVar33 + 0.05f);
								}
							}
							else
							{
								fVar33 = (fVar33 + Global_17290.f_4938[iVar8]);
								if (Global_17290.f_4945[iVar8])
								{
									if (func_99(26, 1, 1, &fVar35, &fVar36, bParam7))
									{
										fVar33 = (fVar33 - fVar35);
									}
								}
							}
						}
						else
						{
							fVar33 = (fVar33 + Global_17290.f_4938[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar40)
				{
					if (bVar32)
					{
						Global_17290.f_7552[iVar9] = iVar6;
						Global_17290.f_5607 = iVar6;
						iVar9++;
						if (Global_17290.f_5226[iVar6])
						{
							iVar13++;
						}
						if (Global_17290.f_5612[iVar6] != 0f)
						{
							fVar99 = (fVar99 + Global_17290.f_5612[iVar6]);
						}
						else
						{
							fVar99 = (fVar99 + 0.034722f);
						}
					}
					if (!Global_17290.f_5598)
					{
						Global_17290.f_5355[iVar6] = 1;
						if (Global_17290.f_5097[iVar6])
						{
							if (bVar31)
							{
								Global_17290.f_5604 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar31)
							{
								Global_17290.f_5604 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17290.f_5598)
			{
				Global_17290.f_5600 = ((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12)));
				Global_17290.f_5603 = iVar11;
				Global_17290.f_5601 = iVar10;
				Global_17290.f_5598 = 1;
			}
		}
		iVar5++;
	}
	if (!Global_17290.f_5599)
	{
		Global_17290.f_5602 = iVar9;
		Global_17290.f_5599 = 1;
	}
	Global_17290.f_5743 = fVar50;
	Global_17290.f_5745 = unk_0x31CD6E9F83C10233();
	unk_0x4288569892059474(Global_17290.f_5743);
	if (!Global_17290.f_7896)
	{
		func_73(0);
	}
	Global_17290.f_7896 = 0;
	if (bParam2)
	{
		unk_0xBD1C47D856010F09(10);
	}
	unk_0xBD1C47D856010F09(6);
	unk_0xBD1C47D856010F09(7);
	unk_0xBD1C47D856010F09(9);
	unk_0xBD1C47D856010F09(8);
	if (bParam0)
	{
		func_72(1);
	}
	unk_0x26742F01C78031C2();
}

void func_72(int iParam0)
{
	Global_1356070.f_1079 = iParam0;
}

void func_73(int iParam0)
{
	if (!Global_14443.f_1 == 1)
	{
		if (func_76(0))
		{
			func_74(iParam0);
		}
		unk_0xCD7E92DE2BFA0B0D(&Global_2314, 2);
	}
}

void func_74(int iParam0)
{
	if (Global_14604)
	{
		func_75(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0xCD7E92DE2BFA0B0D(&Global_2314, 16);
	}
	if (unk_0xCAD6D8C85D0F329B())
	{
		unk_0x683F0CB6CA4C99D0(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xCD7E92DE2BFA0B0D(&Global_2313, 30);
	}
	else
	{
		unk_0xD804ACF2A7171150(&Global_2313, 30);
	}
	if (!func_68())
	{
		Global_14443.f_1 = 3;
	}
}

void func_75(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_76(0))
		{
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0x4EBACDA5E9A0E784(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x99C19CAA37B6F6D3(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x99C19CAA37B6F6D3(Global_14380);
		}
		else
		{
			unk_0x99C19CAA37B6F6D3(Global_14371);
		}
	}
}

int func_76(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x2A3398C6222EB190(Global_2313, 14))
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
	if (unk_0x7832F791572D5809(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

float func_77(int iParam0)
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

void func_78(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	unk_0x0B8B91F21AE25854(sParam2);
	unk_0x5E66471E79E6D3ED(uParam3, uParam4);
	unk_0x7E43DE6F9866B44B(fParam0, fParam1, 0);
}

void func_79(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x0B8B91F21AE25854(sParam2);
	unk_0x96577CAA1D1E72DB(iParam3);
	unk_0x7E43DE6F9866B44B(fParam0, fParam1, iParam4);
}

void func_80(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0xB922891BFD232C45(Global_17290.f_7924[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0xB922891BFD232C45(Global_17290.f_7924[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0x52D4D0409C49DF8C(iVar0, iVar1, iVar2, 255);
}

void func_81(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_82(Global_17290.f_5878[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0xB922891BFD232C45(1, &iVar0, &iVar1, &iVar2, &iVar3);
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
			unk_0x52D4D0409C49DF8C(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0xB922891BFD232C45(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x52D4D0409C49DF8C(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0xB922891BFD232C45(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x52D4D0409C49DF8C(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0x52D4D0409C49DF8C(155, 155, 155, 255);
		}
		else
		{
			unk_0x52D4D0409C49DF8C(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0x52D4D0409C49DF8C(0, 0, 0, unk_0xF34EE736CF047844((255f * 0.8f)));
		}
		else
		{
			unk_0xB922891BFD232C45(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0x52D4D0409C49DF8C(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0x52D4D0409C49DF8C(155, 155, 155, 255);
	}
	else
	{
		unk_0x52D4D0409C49DF8C(155, 155, 155, 255);
	}
	unk_0xD1F2C9FF58856AEC(0f, 0.35f);
	unk_0x41D772AFFBD36843(1);
	if (bParam5)
	{
		unk_0xD1F2C9FF58856AEC(0f, 0.425f);
		unk_0x4E250FE9E4D8720F(4);
	}
	else if (bParam6)
	{
		unk_0xD1F2C9FF58856AEC(0f, 0.425f);
		unk_0x4E250FE9E4D8720F(6);
	}
	else
	{
		unk_0x4E250FE9E4D8720F(0);
	}
	unk_0x7A1F4BBECE23C9E3(0f, 1f);
	unk_0xAC1B647E90E8412A(0);
	unk_0xDB70E58A218CFD6A(0, 0, 0, 0, 0);
	unk_0x1EA8206824200C12(0, 0, 0, 0, 0);
}

void func_82(int iParam0, var uParam1, var uParam2, var uParam3)
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

void func_83(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_59(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_101(bParam4, bParam8))
	{
		return;
	}
	if (func_86())
	{
		return;
	}
	if (unk_0xFCFC2645B6CF6425())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_62(unk_0x3D35F9864E4640B1(), 0))
		{
			return;
		}
	}
	if (unk_0x20551D6D924ED04B())
	{
		if (unk_0xB74983234B4F06A7() == 0 || unk_0xFCFC2645B6CF6425())
		{
			return;
		}
	}
	if (Global_17290.f_4639 != 0)
	{
		if (unk_0xDE25F26B6B16CF7A(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17290.f_4639)
			{
				if (Global_17290.f_4896[iVar1] != 355)
				{
					StringCopy(&(Global_17290.f_4641[iVar1 /*16*/]), unk_0xE344F89A3A395F9C(2, Global_17290.f_4896[iVar1], 1), 64);
				}
				else if (Global_17290.f_4909[iVar1] != 32)
				{
					StringCopy(&(Global_17290.f_4641[iVar1 /*16*/]), unk_0x295E4023D39A7295(2, Global_17290.f_4909[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_17290.f_4640 = 0;
		}
		if (!Global_17290.f_4640)
		{
			unk_0xEBD23F68B1A617FC(Global_17290.f_5530[iVar0 /*10*/], "CLEAR_ALL");
			unk_0x1C703A54AB4B12F6();
			unk_0xEBD23F68B1A617FC(Global_17290.f_5530[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x90495002CD46BD88((1f - (Global_17290.f_4951 / 100f)));
			unk_0x1C703A54AB4B12F6();
			if (unk_0x20551D6D924ED04B())
			{
				unk_0xEBD23F68B1A617FC(Global_17290.f_5530[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0xE8240315678FDE8E(1);
				unk_0x1C703A54AB4B12F6();
			}
			iVar1 = 0;
			while (iVar1 < Global_17290.f_4639)
			{
				if (unk_0x50B7853132D8438E(&(Global_17290.f_4834[iVar1 /*4*/])) != unk_0x50B7853132D8438E("PREV"))
				{
					unk_0xEBD23F68B1A617FC(Global_17290.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x32F9127910F63DFA(iVar1);
					func_85(&(Global_17290.f_4641[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x50B7853132D8438E(&(Global_17290.f_4834[iVar2 /*4*/])) == unk_0x50B7853132D8438E("PREV"))
					{
						func_85(&(Global_17290.f_4641[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17290.f_4883[iVar1] == -1)
					{
						func_84(&(Global_17290.f_4834[iVar1 /*4*/]));
					}
					else
					{
						unk_0x9BC6C9E77AAC792E(&(Global_17290.f_4834[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0xC2D818A5754306C0(iParam2, 70);
						}
						else
						{
							unk_0x96577CAA1D1E72DB(iParam2);
						}
						unk_0xCC5EB3A492FB7D4B();
					}
					if (unk_0x20551D6D924ED04B())
					{
						if (Global_17290.f_4896[iVar1] != 355 && unk_0x2A3398C6222EB190(Global_17290.f_4922, iVar1))
						{
							unk_0xE8240315678FDE8E(1);
							unk_0x32F9127910F63DFA(Global_17290.f_4896[iVar1]);
						}
						else
						{
							unk_0xE8240315678FDE8E(0);
							unk_0x32F9127910F63DFA(355);
						}
					}
					unk_0x1C703A54AB4B12F6();
				}
				iVar1++;
			}
			if (unk_0x50B7853132D8438E(&(Global_2606798.f_16)) != unk_0x50B7853132D8438E(""))
			{
				unk_0xEBD23F68B1A617FC(Global_17290.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x32F9127910F63DFA(Global_17290.f_4639);
				func_85(&Global_2606798);
				if (Global_2606798.f_20 == -1)
				{
					func_84(&(Global_2606798.f_16));
				}
				else
				{
					unk_0x9BC6C9E77AAC792E(&(Global_2606798.f_16));
					if (bParam5)
					{
						unk_0xC2D818A5754306C0(iParam2, 70);
					}
					else
					{
						unk_0x96577CAA1D1E72DB(iParam2);
					}
					unk_0xCC5EB3A492FB7D4B();
				}
				unk_0x1C703A54AB4B12F6();
			}
			unk_0xEBD23F68B1A617FC(Global_17290.f_5530[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x32F9127910F63DFA(0);
			unk_0x32F9127910F63DFA(0);
			unk_0x32F9127910F63DFA(0);
			unk_0x32F9127910F63DFA(80);
			unk_0x1C703A54AB4B12F6();
			unk_0xEBD23F68B1A617FC(Global_17290.f_5530[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17290.f_4952)
			{
				unk_0x32F9127910F63DFA(1);
			}
			else
			{
				unk_0x32F9127910F63DFA(0);
			}
			unk_0x1C703A54AB4B12F6();
			Global_17290.f_4640 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17290.f_4639)
		{
			if (Global_17290.f_4883[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0xEBD23F68B1A617FC(Global_17290.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x32F9127910F63DFA(iVar1);
					unk_0x9BC6C9E77AAC792E(&(Global_17290.f_4834[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0xC2D818A5754306C0(iParam2, 70);
					}
					else
					{
						unk_0x96577CAA1D1E72DB(iParam2);
					}
					unk_0xCC5EB3A492FB7D4B();
					unk_0x1C703A54AB4B12F6();
				}
			}
			iVar1++;
		}
		if (Global_2606798.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0xEBD23F68B1A617FC(Global_17290.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x32F9127910F63DFA(iVar1);
				unk_0x9BC6C9E77AAC792E(&(Global_2606798.f_16));
				if (bParam5)
				{
					unk_0xC2D818A5754306C0(iParam2, 70);
				}
				else
				{
					unk_0x96577CAA1D1E72DB(iParam2);
				}
				unk_0xCC5EB3A492FB7D4B();
				unk_0x1C703A54AB4B12F6();
			}
		}
		unk_0x661705F074A804D1(76, 66);
		unk_0x399D1A0AE11E61E3(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17290.f_7931)
			{
				unk_0xB8281495D778DB56(15, 0f, -0.0375f);
				Global_17290.f_7931 = 1;
			}
		}
		else if (Global_17290.f_7931)
		{
			unk_0xC030DF4B187326D7(15);
			Global_17290.f_7931 = 0;
		}
		unk_0x26742F01C78031C2();
		if (Global_17290.f_4925)
		{
			unk_0x661705F074A804D1(82, 66);
			unk_0x399D1A0AE11E61E3(0f, 0f, 0f, 0f);
			unk_0x45822700F324A838(Global_17290.f_5530[iVar0 /*10*/], Global_17290.f_4923, Global_17290.f_4924, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x26742F01C78031C2();
		}
		else
		{
			unk_0x4237E72FB80FD332(Global_17290.f_5530[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_84(var uParam0)
{
	unk_0x9BC6C9E77AAC792E(uParam0);
	unk_0xCC5EB3A492FB7D4B();
}

void func_85(var uParam0)
{
	unk_0x8E394933209D820A(uParam0);
}

int func_86()
{
	struct<3> Var0;
	
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	if (func_87())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0x4EBACDA5E9A0E784(&Var0);
		if (Global_14388 == 0)
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

int func_87()
{
	if (unk_0x7832F791572D5809(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_88(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	unk_0xB922891BFD232C45(1, iParam2, iParam3, iParam4, iParam5);
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
		
		case 51:
			*iParam5 = 100;
			break;
	}
}

void func_89(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xB922891BFD232C45(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x4E250FE9E4D8720F(0);
	unk_0xD1F2C9FF58856AEC(0f, 0.35f);
	unk_0x77F7F57845720991(2);
	unk_0x52D4D0409C49DF8C(iVar0, iVar1, iVar2, iVar3);
	unk_0x7A1F4BBECE23C9E3(fParam0, ((Global_17287 + Global_17289) - 0.0046875f));
	unk_0xAC1B647E90E8412A(0);
	unk_0xDB70E58A218CFD6A(0, 0, 0, 0, 0);
	unk_0x1EA8206824200C12(0, 0, 0, 0, 0);
}

void func_90(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x0B8B91F21AE25854(sParam2);
	unk_0x96577CAA1D1E72DB(uParam3);
	unk_0x96577CAA1D1E72DB(uParam4);
	unk_0x7E43DE6F9866B44B(fParam0, fParam1, 0);
}

float func_91(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x996B09F758C57FBE(sParam0))
	{
		if (unk_0x50B7853132D8438E(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_92();
	unk_0x54412EEBDB162F5C(sParam0);
	unk_0x96577CAA1D1E72DB(uParam1);
	unk_0x96577CAA1D1E72DB(uParam2);
	return unk_0x51C2CBAC9E5D95A4(1);
}

void func_92()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xB922891BFD232C45(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17290.f_7906)
	{
		iVar0 = Global_17290.f_7902;
		iVar1 = Global_17290.f_7903;
		iVar2 = Global_17290.f_7904;
		iVar3 = Global_17290.f_7905;
	}
	unk_0x4E250FE9E4D8720F(0);
	unk_0xD1F2C9FF58856AEC(0f, 0.35f);
	unk_0x52D4D0409C49DF8C(iVar0, iVar1, iVar2, iVar3);
	unk_0x7A1F4BBECE23C9E3((Global_17287 + 0.0046875f), ((Global_17287 + Global_17289) - 0.0046875f));
	unk_0xAC1B647E90E8412A(0);
	unk_0xDB70E58A218CFD6A(0, 0, 0, 0, 0);
	unk_0x1EA8206824200C12(0, 0, 0, 0, 0);
}

void func_93(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0x45A34FA87FBE9599((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_94(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;
	
	if (!unk_0x0BD3CCFB6C6CFA91(&(Global_17290.f_6719[iParam0 /*16*/])))
	{
		if (unk_0x50B7853132D8438E(&(Global_17290.f_6719[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var19 = { func_96(unk_0x3D35F9864E4640B1()) };
			if (unk_0xFCA40B20F5AC75B0(&Var19, &uVar3))
			{
				return func_95(&uVar3);
			}
		}
		else
		{
			return func_95(&(Global_17290.f_6719[iParam0 /*16*/]));
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
		
		case 48:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 49:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 51:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
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

var func_95(var uParam0)
{
	return uParam0;
}

struct<13> func_96(var uParam0)
{
	struct<13> Var0;
	
	unk_0xA82433D60351864D(uParam0, &Var0, 13);
	return Var0;
}

char* func_97(int iParam0)
{
	var uVar0;
	struct<13> Var16;
	
	if (!unk_0x0BD3CCFB6C6CFA91(&(Global_17290.f_5886[iParam0 /*16*/])))
	{
		if (unk_0x50B7853132D8438E(&(Global_17290.f_5886[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var16 = { func_96(unk_0x3D35F9864E4640B1()) };
			unk_0xFCA40B20F5AC75B0(&Var16, &uVar0);
			return func_95(&uVar0);
		}
		else
		{
			return func_95(&(Global_17290.f_5886[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

int func_98()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0xD9151D5BCEE2689C(&iVar0, &iVar1);
	fVar2 = (unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_99(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	
	StringCopy(&cVar0, func_97(iParam0), 64);
	StringCopy(&cVar16, func_94(iParam0, bParam1), 64);
	if (unk_0x50B7853132D8438E(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			unk_0xD9151D5BCEE2689C(&iVar32, &iVar33);
			fVar35 = unk_0x5E61619C36D9095B(0);
			if (func_98())
			{
				iVar32 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar33) * fVar35));
			}
			fVar36 = (unk_0xBBDA792448DB5A89(iVar32) / unk_0xBBDA792448DB5A89(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_98())
			{
				fVar34 = 1f;
			}
			if (unk_0x7832F791572D5809(joaat("director_mode")) > 0)
			{
				unk_0x68824FF629FFAE6D(&iVar32, &iVar33);
			}
			iVar32 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar32) / fVar34));
			iVar33 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar33) / fVar34));
		}
		else
		{
			unk_0x68824FF629FFAE6D(&iVar32, &iVar33);
		}
		Var37 = { unk_0xB9E4A5FCB2BE22B7(&cVar0, &cVar16) };
		Var37.f_0 = (Var37.f_0 * (func_100(iParam0) / fVar34));
		Var37.f_1 = (Var37.f_1 * (func_100(iParam0) / fVar34));
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
		if (iParam0 == 29 && unk_0x50B7853132D8438E(&(Global_17290.f_6719[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var37.f_0 = 106f;
			Var37.f_1 = 106f;
		}
		*fParam3 = ((Var37.f_0 / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((Var37.f_1 / IntToFloat(iVar33)) / (Var37.f_0 / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x3CCF948E5BFC63FE() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17289)
			{
				*fParam4 = (*fParam4 * (Global_17289 / *fParam3));
				*fParam3 = Global_17289;
			}
		}
		return 1;
	}
	return 0;
}

float func_100(int iParam0)
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

int func_101(bool bParam0, bool bParam1)
{
	if (Global_2434915.f_1670.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0xF9FC07CC13402AEF() || (func_103(8, -1) && func_102() != 64)) || (unk_0xA095EFC51C188A82() != 0 && !bParam1)) || (unk_0x003E46CBEF6CE07A() && !bParam0)) || unk_0x744CE10646868EAC()) || Global_71045) || Global_17290.f_7930) || unk_0x0CF4609684193305()) || Global_92814.f_1369)
	{
		return 0;
	}
	return 1;
}

int func_102()
{
	return Global_1312788;
}

bool func_103(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1354565.f_203[iParam1];
			}
			break;
	}
	return unk_0x2A3398C6222EB190(Global_1354565.f_1048, iParam0);
}

void func_104(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_17290.f_5606 = iParam0;
	Global_17290.f_5741 = iParam2;
	if (Global_17290.f_5606 < Global_17290.f_5605)
	{
		Global_17290.f_5605 = Global_17290.f_5606;
	}
	else if ((Global_17290.f_5599 && Global_17290.f_5606 > Global_17290.f_5607) || (!Global_17290.f_5599 && Global_17290.f_5606 >= (Global_17290.f_5605 + Global_17290.f_5095)))
	{
		iVar0 = Global_17290.f_5605;
		while (iVar0 <= Global_17290.f_5606)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_17290.f_4959[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17290.f_5095 && Global_17290.f_5605 < 128)
		{
			Global_17290.f_5605++;
			iVar1 = 0;
			iVar0 = Global_17290.f_5605;
			while (iVar0 <= Global_17290.f_5606)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_17290.f_4959[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17290.f_5598 = 0;
	Global_17290.f_5599 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_17290.f_4562), "", 16);
		StringCopy(&(Global_2606798.f_21), "", 16);
	}
}

void func_105(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0xB3878AEB2FF752C6(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0xB3878AEB2FF752C6(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0xB3878AEB2FF752C6(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0xB3878AEB2FF752C6(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0xF227625A36477D1C(2, 218) * 127f));
			*uParam1 = unk_0xF34EE736CF047844((unk_0xF227625A36477D1C(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0xF227625A36477D1C(2, 220) * 127f));
			*uParam3 = unk_0xF34EE736CF047844((unk_0xF227625A36477D1C(2, 221) * 127f));
		}
	}
}

void func_106()
{
	func_117(0);
	func_116(1, 0, 0, 0, 0);
	func_115(1, 1, 1, 1, 1);
	if (Local_83.f_1 == 3)
	{
		func_114("SEA_MENU");
	}
	else
	{
		func_114("STREET_MENU");
	}
	func_110(0, "RACES_OPT_SP", 0, 1, 0, 0);
	func_110(1, "RACES_OPT_MP", 0, 1, 0, 0);
	func_109(201, "ITEM_SELECT", -1);
	func_109(202, "ITEM_EXIT", -1);
	func_108(11, "ITEM_SCROLL", -1);
	func_107(0);
	func_104(0, 1, 1);
	iLocal_97 = 0;
}

void func_107(int iParam0)
{
	Global_17290.f_5605 = iParam0;
}

void func_108(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0x295E4023D39A7295(2, iParam0, 1);
	if (Global_17290.f_4639 >= 12)
	{
		StringCopy(&Global_2606798, sVar0, 64);
		StringCopy(&(Global_2606798.f_16), sParam1, 16);
		Global_2606798.f_20 = iParam2;
		return;
		return;
	}
	unk_0xD804ACF2A7171150(&(Global_17290.f_4922), Global_17290.f_4639);
	StringCopy(&(Global_17290.f_4641[Global_17290.f_4639 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17290.f_4834[Global_17290.f_4639 /*4*/]), sParam1, 16);
	Global_17290.f_4883[Global_17290.f_4639] = iParam2;
	Global_17290.f_4896[Global_17290.f_4639] = 355;
	Global_17290.f_4909[Global_17290.f_4639] = iParam0;
	Global_17290.f_4639++;
}

void func_109(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0xE344F89A3A395F9C(2, iParam0, 1);
	if (Global_17290.f_4639 >= 12)
	{
		StringCopy(&Global_2606798, sVar0, 64);
		StringCopy(&(Global_2606798.f_16), sParam1, 16);
		Global_2606798.f_20 = iParam2;
		return;
		return;
	}
	unk_0xD804ACF2A7171150(&(Global_17290.f_4922), Global_17290.f_4639);
	StringCopy(&(Global_17290.f_4641[Global_17290.f_4639 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17290.f_4834[Global_17290.f_4639 /*4*/]), sParam1, 16);
	Global_17290.f_4883[Global_17290.f_4639] = iParam2;
	Global_17290.f_4896[Global_17290.f_4639] = iParam0;
	Global_17290.f_4909[Global_17290.f_4639] = 32;
	Global_17290.f_4639++;
}

void func_110(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17290.f_5088 > iParam0)
	{
		return;
	}
	if (Global_17290.f_5088 >= 128)
	{
		return;
	}
	if (Global_17290.f_5090 >= 256)
	{
		return;
	}
	if (Global_17290.f_5610 < Global_17290.f_5608)
	{
		return;
	}
	if (Global_17290.f_5088 != iParam0)
	{
		Global_17290.f_5088 = iParam0;
		Global_17290.f_5089 = 0;
	}
	iVar0 = Global_17290.f_4926[Global_17290.f_5089];
	if (iVar0 != 1)
	{
		while (Global_17290.f_5089 < 4 && iVar0 != 1)
		{
			Global_17290.f_5089++;
			iVar0 = Global_17290.f_4926[Global_17290.f_5089];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_17290.f_73[Global_17290.f_5090 /*6*/]), sParam1, 24);
	if (!unk_0x0BD3CCFB6C6CFA91(sParam1) && !unk_0xA56C5821F50C3275(sParam1))
	{
	}
	Global_17290.f_1610[Global_17290.f_5090] = bParam3;
	Global_17290.f_1867[Global_17290.f_5090] = iParam4;
	Global_17290.f_5090++;
	if (!bParam3)
	{
		func_113(Global_17290.f_5088, 1);
	}
	else
	{
		func_113(Global_17290.f_5088, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_112(&(Global_17290.f_73[Global_17290.f_5090 /*6*/]));
		if (Global_17290.f_4945[Global_17290.f_5089])
		{
			func_99(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_17290.f_4938[Global_17290.f_5089])
		{
			Global_17290.f_4938[Global_17290.f_5089] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_111(&(Global_17290.f_73[Global_17290.f_5090 /*6*/]));
			if (fVar4 > Global_17290.f_5612[iParam0])
			{
				Global_17290.f_5612[iParam0] = fVar4;
			}
		}
	}
	unk_0xCD7E92DE2BFA0B0D(&(Global_17290.f_4959[iParam0]), Global_17290.f_5089);
	Global_17290.f_5089++;
	Global_17290.f_5611 = 1;
	Global_17290.f_5609 = (Global_17290.f_5090 - 1);
	Global_17290.f_5610 = 0;
	Global_17290.f_5608 = iParam2;
}

float func_111(char* sParam0)
{
	if (!unk_0xA56C5821F50C3275(sParam0))
	{
	}
	return unk_0x4A373026C2688C78(0.35f, 0);
}

float func_112(char* sParam0)
{
	if (!unk_0x996B09F758C57FBE(uParam0))
	{
		if (unk_0x50B7853132D8438E(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_81(0, 1, 0, 0, 0, 0, 0);
	unk_0x54412EEBDB162F5C(sParam0);
	return unk_0x51C2CBAC9E5D95A4(1);
}

void func_113(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 32f));
	if (bParam1)
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_17290.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0xD804ACF2A7171150(&(Global_17290.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_114(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_17290.f_1), sParam0, 16);
	Global_17290.f_68 = 0;
	Global_17290.f_69 = 0;
	Global_17290.f_70 = 0;
	Global_17290.f_71 = 0;
	Global_17290.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17290.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_115(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17290.f_4953[0] = iParam0;
	Global_17290.f_4953[1] = iParam1;
	Global_17290.f_4953[2] = iParam2;
	Global_17290.f_4953[3] = iParam3;
	Global_17290.f_4953[4] = iParam4;
}

void func_116(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17290.f_4926[0] = iParam0;
	Global_17290.f_4926[1] = iParam1;
	Global_17290.f_4926[2] = iParam2;
	Global_17290.f_4926[3] = iParam3;
	Global_17290.f_4926[4] = iParam4;
	Global_17290.f_5096 = 0;
	if (iParam0 != 0)
	{
		Global_17290.f_5096++;
	}
	if (iParam1 != 0)
	{
		Global_17290.f_5096++;
	}
	if (iParam2 != 0)
	{
		Global_17290.f_5096++;
	}
	if (iParam3 != 0)
	{
		Global_17290.f_5096++;
	}
	if (iParam4 != 0)
	{
		Global_17290.f_5096++;
	}
}

void func_117(bool bParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_17290.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_17290.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2455648[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_17290.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17290.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17290.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17290.f_4959[iVar0] = 0;
		Global_17290.f_5097[iVar0] = 0;
		Global_17290.f_5226[iVar0] = 0;
		Global_17290.f_5746[iVar0] = 0f;
		Global_17290.f_5355[iVar0] = 0;
		Global_17290.f_5612[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17290.f_4926[iVar0] = 0;
		Global_17290.f_4938[iVar0] = 0f;
		Global_17290.f_4932[iVar0] = -1f;
		Global_17290.f_4945[iVar0] = 0;
		Global_17290.f_4953[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17290.f_4834[iVar0 /*4*/]), "", 16);
		Global_17290.f_4883[iVar0] = -1;
		Global_17290.f_4896[iVar0] = 355;
		Global_17290.f_4909[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 52)
	{
		StringCopy(&(Global_17290.f_5886[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17290.f_6719[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	StringCopy(&(Global_2606798.f_16), "", 16);
	Global_2606798.f_20 = -1;
	Global_17290 = 0;
	Global_17290.f_5088 = 0;
	Global_17290.f_5089 = 0;
	Global_17290.f_5090 = 0;
	Global_17290.f_5092 = 0;
	Global_17290.f_5093 = 0;
	Global_17290.f_5094 = 0;
	Global_17290.f_5091 = 0;
	Global_17290.f_5741 = 0;
	Global_17290.f_5606 = 0;
	Global_17290.f_5605 = 0;
	Global_17290.f_5607 = 0;
	StringCopy(&(Global_17290.f_4562), "", 16);
	Global_17290.f_4632 = 0;
	Global_17290.f_4633 = 0;
	Global_17290.f_4634 = 0;
	Global_17290.f_4635 = 0;
	Global_17290.f_4636 = 0;
	Global_17290.f_4637 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17290.f_4566[iVar0] = 0;
		iVar0++;
	}
	Global_17290.f_4638 = 0;
	StringCopy(&(Global_2606798.f_21), "", 16);
	Global_2606798.f_61 = 0;
	Global_2606798.f_62 = 0;
	Global_2606798.f_63 = 0;
	Global_2606798.f_64 = 0;
	Global_2606798.f_65 = 0;
	Global_2606798.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_2606798.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_2606798.f_67 = 0;
	StringCopy(&(Global_17290.f_1), "", 16);
	Global_17290.f_4944 = 0f;
	Global_17290.f_68 = 0;
	Global_17290.f_69 = 0;
	Global_17290.f_70 = 0;
	Global_17290.f_71 = 0;
	Global_17290.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17290.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_17290.f_5611 = 0;
	Global_17290.f_5610 = 0;
	Global_17290.f_5608 = 0;
	Global_17290.f_5609 = 0;
	Global_17290.f_4639 = 0;
	Global_17290.f_4640 = 0;
	Global_17290.f_5095 = 10;
	Global_17290.f_5096 = 0;
	Global_17290.f_5743 = 0f;
	Global_17290.f_5744 = 0f;
	Global_17290.f_5598 = 0;
	Global_17290.f_5599 = 0;
	Global_17290.f_5600 = 0f;
	Global_17290.f_5601 = 0;
	Global_17290.f_5603 = 0;
	Global_17290.f_5602 = 0;
	Global_17290.f_5604 = 0;
	Global_17290.f_7927 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_17290.f_5875[iVar0] = -1;
		Global_17290.f_5878[iVar0] = -1;
		iVar0++;
	}
	Global_17290.f_4951 = 0f;
	Global_17290.f_4922 = 0;
	Global_17290.f_4952 = 0;
	iVar0 = 0;
	while (iVar0 < Global_17290.f_5881)
	{
		Global_17290.f_5881[iVar0] = 0;
		iVar0++;
	}
	Global_17290.f_7906 = 0;
	Global_17290.f_7901 = 0;
	Global_17290.f_7911 = 0;
	Global_17290.f_7916 = 0;
	Global_17290.f_7921 = 0;
	Global_17290.f_7923 = 0;
	Global_17290.f_7929 = 0;
	Global_17287 = 0.05f;
	Global_17288 = 0.05f;
	Global_17289 = 0.225f;
	fVar2 = unk_0x5E61619C36D9095B(0);
	if (bParam0)
	{
		Global_17289 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_17289 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_17289 = 0.225f;
	}
}

bool func_118(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_59(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17290.f_5505[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0x0BD3CCFB6C6CFA91(&(Global_17290.f_5505[iVar0 /*4*/])))
	{
		unk_0x1D69C39ECF71C85C(&(Global_17290.f_5505[iVar0 /*4*/]), 9);
		Global_17290.f_5498[iVar0] = 1;
		if (!unk_0x880B947519D91525(&(Global_17290.f_5505[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0x59B2F61C9D01132B("CommonMenu", false);
	Global_17290.f_5484[iVar0] = 1;
	if (!unk_0xB56F0E1C89B9E069("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0x59B2F61C9D01132B("MPShopSale", false);
		Global_17290.f_5491[iVar0] = 1;
		if (!unk_0xB56F0E1C89B9E069("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_17290.f_5530[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_119(&(Global_17290.f_5530[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_119(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x77FA56883245AD26(*uParam0))
			{
				*uParam0 = unk_0xB1E69EFAB6CB45A3(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x77FA56883245AD26(*uParam0))
					{
						uParam0->f_8 = unk_0x31CD6E9F83C10233();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x31CD6E9F83C10233();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x77FA56883245AD26(*uParam0))
			{
				uParam0->f_8 = unk_0x31CD6E9F83C10233();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x77FA56883245AD26(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_120()
{
	int iVar0;
	
	if (func_150())
	{
		if (func_133())
		{
			iVar0 = 6;
			if (Local_83.f_1 == 1)
			{
				iVar0 = 4;
			}
			func_131(iVar0);
			if (func_55(uLocal_103[iVar0]))
			{
				if (bLocal_102)
				{
					if (unk_0x4CB2F72EA418C083(uLocal_103[iVar0], cLocal_184, sLocal_185[iVar0], 3))
					{
						unk_0xEBC568297077D190(uLocal_103[iVar0], cLocal_184, sLocal_185[iVar0], -1056964608);
					}
					func_122(iVar0);
				}
			}
			unk_0x8662FAB20C4C3CFB(0, 51);
			if (unk_0xBF946CEEECD8C935(0, 51))
			{
				iLocal_194 = 1;
				unk_0x8C361F37C04084F4(1);
				iLocal_82 = 3;
			}
		}
		else if (!iLocal_93)
		{
			unk_0x59FA14CE9944B95A(0);
			iLocal_93 = 1;
		}
	}
	else
	{
		func_121();
		if (!iLocal_93)
		{
			unk_0x59FA14CE9944B95A(0);
			iLocal_93 = 1;
		}
	}
}

void func_121()
{
	if (iLocal_92 && unk_0x31CD6E9F83C10233() > iLocal_95)
	{
		unk_0x8C361F37C04084F4(1);
		iLocal_92 = 0;
	}
}

void func_122(int iParam0)
{
	var uVar0;
	
	if (!unk_0x7A6C051038031EFA(uLocal_103[iParam0], 0) && !unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
	{
		switch (iLocal_195)
		{
			case 0:
				if (unk_0xB7A628320EFF8E47(unk_0xF177E0DA126D71C8(uLocal_103[iParam0], 1), unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1)) < 64f)
				{
					iLocal_196 = 0;
					iLocal_197 = 0;
					iLocal_195 = 1;
				}
				break;
			
			case 1:
				unk_0x173325AAF2CD766A(&uVar0);
				unk_0x43EC517AF665D2B9(0, unk_0x0031992CA618A445(), -1, 0, 2);
				unk_0x3933C434ECC3BB69(0, unk_0x0031992CA618A445(), 0);
				unk_0xF81AD3C937316CCA(uVar0);
				unk_0xEDD5437C49B7B1F8(uLocal_103[iParam0], uVar0);
				unk_0x1F5B34056C3CB80B(&uVar0);
				iLocal_195 = 2;
				break;
			
			case 2:
				if (unk_0xF57D21B49780A7A8(uLocal_103[iParam0], 242628503) != 1 || unk_0x51D10CE903646C26(uLocal_103[iParam0], unk_0x0031992CA618A445(), 20f))
				{
					unk_0x3933C434ECC3BB69(uLocal_103[iParam0], unk_0x0031992CA618A445(), -1);
					if (!iLocal_197)
					{
						func_129(uLocal_103[iParam0], "PRERACE_CHAT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					else
					{
						func_129(uLocal_103[iParam0], "PRERACE_TAUNT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					iLocal_195 = 3;
				}
				break;
			
			case 3:
				if (!unk_0x903C2842D53DEC75(uLocal_103[iParam0]))
				{
					func_127(&uLocal_198);
					unk_0xBE0E7D38FE7C495C(uLocal_103[iParam0], "random@street_race", "_streetracer_wait_loop", 4f, -4f, -1, 9, 0, 0, 0, 0);
					iLocal_195 = 4;
				}
				break;
			
			case 4:
				if (unk_0xB7A628320EFF8E47(unk_0xF177E0DA126D71C8(uLocal_103[iParam0], 1), unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1)) > 225f)
				{
					iLocal_195 = 0;
				}
				if (func_123(&uLocal_198) >= 5f && !iLocal_196)
				{
					iLocal_196 = 1;
					iLocal_195 = 1;
				}
				else if (func_123(&uLocal_198) >= 10f && !iLocal_197)
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

float func_123(var uParam0)
{
	if (func_126(uParam0))
	{
		if (func_125(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_124(unk_0x2A3398C6222EB190(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_124(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x31CD6E9F83C10233());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x27CA09C6DFAB1E79())
	{
		iVar2 = unk_0x898811EA80D35DE2();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x31CD6E9F83C10233()) / 1000f);
}

bool func_125(var uParam0)
{
	return unk_0x2A3398C6222EB190(*uParam0, 2);
}

bool func_126(var uParam0)
{
	return unk_0x2A3398C6222EB190(*uParam0, 1);
}

void func_127(var uParam0)
{
	func_128(uParam0, 0f);
}

void func_128(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_124(unk_0x2A3398C6222EB190(*uParam0, 4)) - fParam1);
	unk_0xCD7E92DE2BFA0B0D(uParam0, 1);
	unk_0xD804ACF2A7171150(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_129(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x90A3B3322B687517(uParam0, sParam1, sParam2, func_130(iParam3), 0);
}

int func_130(int iParam0)
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

void func_131(int iParam0)
{
	if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()) && !func_132())
	{
		if (func_55(uLocal_103[iParam0]))
		{
			if (iLocal_93 && unk_0x38A3CC71471EC547(unk_0x0031992CA618A445()) < 20f)
			{
				unk_0xF539A9F1BCA8C0E9(uLocal_103[iParam0], 0f, 0f, 0f, 1, 2000, 2000, 2000, 0);
				iLocal_93 = 0;
			}
		}
	}
}

int func_132()
{
	if (unk_0xE2378BA63E191ED9(unk_0x72A1F054E4BCA1A8()) == 4)
	{
		return 1;
	}
	return 0;
}

int func_133()
{
	if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
	{
		if (func_149())
		{
			return 0;
		}
		if (func_148(func_44()) < Local_83.f_3)
		{
			if (Local_83.f_1 == 3)
			{
				func_145("SEA_NA_CASH", Local_83.f_3);
			}
			else
			{
				func_145("STREET_NA_CASH", Local_83.f_3);
			}
			iLocal_92 = 1;
			iLocal_95 = unk_0x31CD6E9F83C10233() + 1000;
			return 0;
		}
		if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
		{
			func_144(&iLocal_0);
			iLocal_0 = unk_0x89A8BEEC1AA87D33(unk_0x0031992CA618A445());
			if (!func_139())
			{
				iLocal_92 = 1;
				iLocal_95 = unk_0x31CD6E9F83C10233() + 1000;
				return 0;
			}
			else if ((unk_0x8DB158934E64B062(iLocal_0) <= 200 || unk_0xB3D4A3F00B489CC7(iLocal_0)) || func_138())
			{
				func_137("RACE_VehDmg");
				iLocal_92 = 1;
				iLocal_95 = unk_0x31CD6E9F83C10233() + 1000;
				return 0;
			}
			else if (unk_0x3251C2B06497863C(iLocal_0, -1, 0) != unk_0x0031992CA618A445())
			{
				func_134();
				return 0;
			}
			else
			{
				if (func_76(0) || unk_0x7832F791572D5809(joaat("appinternet")) > 0)
				{
					func_121();
					return 0;
				}
				switch (Local_83.f_1)
				{
					case 1:
						func_145("STREET_PLAY_B", Local_83.f_3);
						break;
					
					case 2:
						func_145("STREET_PLAY_C", Local_83.f_3);
						break;
					
					case 3:
						func_137("SEA_PLAY");
						break;
				}
				iLocal_92 = 1;
				iLocal_95 = unk_0x31CD6E9F83C10233();
				return 1;
			}
		}
		else
		{
			func_144(&iLocal_0);
			func_134();
			return 0;
		}
	}
	return 0;
}

void func_134()
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
		if (!func_136(sVar0))
		{
			func_135(sVar0);
			iLocal_92 = 1;
			iLocal_95 = unk_0x31CD6E9F83C10233() + 1000;
		}
	}
	else if (Local_83.f_1 == 1)
	{
		if (!func_136("STREET_NA_BIKE"))
		{
			func_135("STREET_NA_BIKE");
			iLocal_92 = 1;
			iLocal_95 = unk_0x31CD6E9F83C10233() + 1000;
		}
	}
	else if (!func_136("STREET_NA_CAR"))
	{
		func_135("STREET_NA_CAR");
		iLocal_92 = 1;
		iLocal_95 = unk_0x31CD6E9F83C10233() + 1000;
	}
}

void func_135(char* sParam0)
{
	unk_0x5FFD0DFFE53FB210(sParam0);
	unk_0xF3AF8AF4E207A0FD(0, 1, 1, -1);
}

bool func_136(char* sParam0)
{
	unk_0x92C5C77953D80467(sParam0);
	return unk_0x602E6661A0F13A13(0);
}

void func_137(char* sParam0)
{
	if (!func_136(sParam0))
	{
		func_135(sParam0);
	}
}

int func_138()
{
	int iVar0;
	
	iVar0 = unk_0xE9559A12052415BE(iLocal_0);
	if (unk_0x34C854420D02F57B(iVar0))
	{
		if (unk_0xD5667AC07F79E531(iLocal_0, 6, 0) || unk_0xD5667AC07F79E531(iLocal_0, 7, 0))
		{
			return 1;
		}
	}
	else if (unk_0x2076012573940835(iVar0))
	{
		if (((unk_0xD5667AC07F79E531(iLocal_0, 0, 0) || unk_0xD5667AC07F79E531(iLocal_0, 1, 0)) || unk_0xD5667AC07F79E531(iLocal_0, 4, 0)) || unk_0xD5667AC07F79E531(iLocal_0, 5, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_139()
{
	int iVar0;
	char* sVar1;
	
	switch (Local_83.f_1)
	{
		case 1:
			iVar0 = func_143();
			if (iVar0 == 1)
			{
				func_137("STREET_NA_COP");
				return 0;
			}
			else if (iVar0 == 2)
			{
				func_137("STREET_NA_BIKE");
				return 0;
			}
			break;
		
		case 2:
			iVar0 = func_141();
			if (iVar0 == 1)
			{
				func_137("STREET_NA_COP");
				return 0;
			}
			else if (iVar0 == 2)
			{
				func_137("STREET_NA_CAR");
				return 0;
			}
			break;
		
		case 3:
			if (!func_140())
			{
				if (func_14(iLocal_111))
				{
					sVar1 = "SEA_NA_VEH";
				}
				else
				{
					sVar1 = "SEA_NA_VEH2";
				}
				func_137(sVar1);
				return 0;
			}
			break;
	}
	return 1;
}

int func_140()
{
	int iVar0;
	
	if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
	{
		if (unk_0x76B3C79DE564AFC6(iLocal_0))
		{
			iVar0 = unk_0xE9559A12052415BE(iLocal_0);
			if (iVar0 == joaat("seashark") || iVar0 == joaat("seashark2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_141()
{
	int iVar0;
	int iVar1;
	int iVar2[83];
	
	if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
	{
		if (unk_0x76B3C79DE564AFC6(iLocal_0))
		{
			iVar0 = unk_0xE9559A12052415BE(iLocal_0);
			if (func_142(iVar0))
			{
				return 1;
			}
			if ((((((((((iVar0 == joaat("police4") || iVar0 == joaat("policeold1")) || iVar0 == joaat("policeold2")) || iVar0 == joaat("fbi")) || iVar0 == joaat("fbi2")) || iVar0 == joaat("lguard")) || iVar0 == joaat("sheriff")) || iVar0 == joaat("sheriff2")) || iVar0 == joaat("pranger")) || iVar0 == joaat("ambulance")) || iVar0 == joaat("firetruk"))
			{
				return 1;
			}
			if (((unk_0x34C854420D02F57B(iVar0) || unk_0x9C4740BA7F0AF553(iVar0)) || unk_0x1DBFCF939B3B47D0(iVar0)) || unk_0xF9CDF5CA6A1D6756(iVar0))
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

int func_142(int iParam0)
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

int func_143()
{
	int iVar0;
	
	if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
	{
		if (unk_0x76B3C79DE564AFC6(iLocal_0))
		{
			iVar0 = unk_0xE9559A12052415BE(iLocal_0);
			if (iVar0 == joaat("policeb"))
			{
				return 1;
			}
			if (unk_0x34C854420D02F57B(iVar0) && !unk_0x1B9B48622A4D3FC0(iVar0))
			{
				return 0;
			}
		}
	}
	return 2;
}

void func_144(int iParam0)
{
	if (unk_0x76B3C79DE564AFC6(*iParam0))
	{
		unk_0x7A6C051038031EFA(*iParam0, 0);
		if (unk_0xCC234795142FC2D2(*iParam0) && unk_0xC9FBF92709010AC3(*iParam0, 1))
		{
			unk_0x28BB69BE14577487(iParam0);
		}
	}
}

void func_145(char* sParam0, var uParam1)
{
	if (!func_147(sParam0, uParam1))
	{
		func_146(sParam0, uParam1);
	}
}

void func_146(char* sParam0, int iParam1)
{
	unk_0x5FFD0DFFE53FB210(uParam0);
	unk_0x96577CAA1D1E72DB(uParam1);
	unk_0xF3AF8AF4E207A0FD(0, 1, 1, -1);
}

bool func_147(char* sParam0, int iParam1)
{
	unk_0x92C5C77953D80467(uParam0);
	unk_0x96577CAA1D1E72DB(uParam1);
	return unk_0x602E6661A0F13A13(0);
}

int func_148(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0x2553A7EB99AABF55(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0x2553A7EB99AABF55(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0x2553A7EB99AABF55(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_149()
{
	int iVar0;
	
	if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
	{
		if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
		{
			iVar0 = unk_0x89A8BEEC1AA87D33(unk_0x0031992CA618A445());
			if (func_15(iVar0))
			{
				if (unk_0xF6C6ED9F9C63AEC0(iVar0))
				{
					if (Local_83.f_1 == 3 && unk_0x7019CC495F72B3AC(iVar0))
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

int func_150()
{
	int iVar0;
	
	if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
	{
		iVar0 = 20;
		if (Local_83.f_1 == 3)
		{
			iVar0 = 40;
		}
		if (unk_0x1410333E912D4EC6(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), Local_89, 1) < IntToFloat(iVar0) && unk_0xF9E96260CEF7C23C(unk_0x0031992CA618A445()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_151()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_156(&uLocal_216))
	{
		if (Local_83.f_1 == 2)
		{
			if (func_153())
			{
				if (!unk_0x76B3C79DE564AFC6(iLocal_111))
				{
					if (unk_0x772F801619C83779(iLocal_182) && unk_0x772F801619C83779(iLocal_182))
					{
						iLocal_111 = unk_0x5129A9193468FF77(iLocal_182, Local_113, fLocal_116, 1, 1, 0);
						if (unk_0xF5AA235BC4233469(1) && unk_0x60CFAEF1BF8BF4AE())
						{
							iLocal_112 = unk_0xACEEB8B67A5D3904(iLocal_111, 1);
							unk_0x162D4638D393BAB6(iLocal_112, iLocal_111, 1, 99999999);
							unk_0xEB9B39274C401888(iLocal_112, 1);
							unk_0x390D16BCBFB23E1A(iLocal_112, 1);
						}
						unk_0x24B72A49849215AE(iLocal_111, 1084227584);
						unk_0x56B418F469976565(iLocal_111, 1, 1, 0);
						unk_0xF73BCDB7C058F04E(iLocal_111, 1);
						unk_0x8B226AF43C5C1AD3(iLocal_111, 1);
						unk_0x798703F9C96DE0E5(unk_0x3B6901D890F3121F(10), 1);
						unk_0x3A34071ED707A472(iLocal_111, unk_0x3B6901D890F3121F(10));
						unk_0xDEE5A73213F56CF3(iLocal_111, 0);
						unk_0x9793B48C4C8275F8(iLocal_182);
						unk_0x4EDE34FBADD967A6(0);
					}
				}
				if (!unk_0x76B3C79DE564AFC6(iLocal_117))
				{
					if (unk_0x772F801619C83779(iLocal_183))
					{
						iLocal_117 = unk_0x5129A9193468FF77(iLocal_183, Local_118, fLocal_121, 1, 1, 0);
						unk_0x56B418F469976565(iLocal_117, 0, 1, 0);
						unk_0xF73BCDB7C058F04E(iLocal_117, 1);
						unk_0x8B226AF43C5C1AD3(iLocal_117, 1);
						unk_0x24B72A49849215AE(iLocal_117, 1084227584);
						unk_0x798703F9C96DE0E5(unk_0x3B6901D890F3121F(10), 1);
						unk_0x3A34071ED707A472(iLocal_117, unk_0x3B6901D890F3121F(10));
						unk_0xDEE5A73213F56CF3(iLocal_117, 0);
						unk_0x9793B48C4C8275F8(iLocal_183);
						unk_0x4EDE34FBADD967A6(0);
					}
				}
				if (unk_0xB3379AC2E71D1E7E(cLocal_184))
				{
					if (iLocal_193)
					{
						iVar0 = 0;
						while (iVar0 <= (iLocal_174 - 1))
						{
							if (unk_0x76B3C79DE564AFC6(uLocal_103[iVar0]))
							{
								if (!unk_0x7A6C051038031EFA(uLocal_103[iVar0], 0) && !func_152(uLocal_103[iVar0], -2017877118))
								{
									unk_0xBE0E7D38FE7C495C(uLocal_103[iVar0], cLocal_184, sLocal_185[iVar0], 1000f, -1000f, -1, 1, 0, 0, 0, 0);
									unk_0x390D16BCBFB23E1A(uLocal_103[iVar0], 1);
								}
							}
							else if (unk_0x772F801619C83779(iLocal_174[iVar0]))
							{
								uLocal_103[iVar0] = unk_0x5618B819E5B9C053(25, iLocal_174[iVar0], Local_136[iVar0 /*3*/], fLocal_158[iVar0], 1, 1);
								unk_0x0AF5FA388AAEFF13(uLocal_103[iVar0], Local_136[iVar0 /*3*/], 0, 0, 1);
								unk_0xEB9B39274C401888(uLocal_103[iVar0], 1);
								unk_0xBE0E7D38FE7C495C(uLocal_103[iVar0], cLocal_184, sLocal_185[iVar0], 1000f, -1000f, -1, 1, 0, 0, 0, 0);
								unk_0x390D16BCBFB23E1A(uLocal_103[iVar0], 1);
							}
							iVar0++;
						}
						if ((((((((func_55(uLocal_103[0]) && func_55(uLocal_103[1])) && func_55(uLocal_103[2])) && func_55(uLocal_103[3])) && func_55(uLocal_103[4])) && func_55(uLocal_103[5])) && func_55(uLocal_103[6])) && func_14(iLocal_111)) && func_14(iLocal_117))
						{
							bLocal_102 = true;
							iVar0 = 0;
							while (iVar0 <= (iLocal_174 - 1))
							{
								unk_0x9793B48C4C8275F8(iLocal_174[iVar0]);
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
			if (func_153())
			{
				if (!unk_0x76B3C79DE564AFC6(iLocal_111))
				{
					if (unk_0x772F801619C83779(iLocal_182))
					{
						iLocal_111 = unk_0x5129A9193468FF77(iLocal_182, Local_113, fLocal_116, 1, 1, 0);
						if (unk_0xF5AA235BC4233469(0) && unk_0xE407D35CBD1DE676())
						{
							iLocal_112 = unk_0xACEEB8B67A5D3904(iLocal_111, 1);
							unk_0x162D4638D393BAB6(iLocal_112, iLocal_111, 1, 99999999);
							unk_0xEB9B39274C401888(iLocal_112, 1);
							unk_0x390D16BCBFB23E1A(iLocal_112, 1);
						}
						unk_0x56B418F469976565(iLocal_111, 1, 1, 0);
						unk_0xF73BCDB7C058F04E(iLocal_111, 1);
						unk_0x8B226AF43C5C1AD3(iLocal_111, 1);
						unk_0x798703F9C96DE0E5(unk_0x3B6901D890F3121F(10), 1);
						unk_0x3A34071ED707A472(iLocal_111, unk_0x3B6901D890F3121F(10));
						unk_0xDEE5A73213F56CF3(iLocal_111, 0);
						unk_0x9793B48C4C8275F8(iLocal_182);
					}
				}
				if (unk_0xB3379AC2E71D1E7E(cLocal_184))
				{
					if (iLocal_193)
					{
						iVar1 = 0;
						while (iVar1 <= (iLocal_174 - 3))
						{
							if (unk_0x76B3C79DE564AFC6(uLocal_103[iVar1]))
							{
								if (!unk_0x7A6C051038031EFA(uLocal_103[iVar1], 0) && !func_152(uLocal_103[iVar1], -2017877118))
								{
									unk_0x0AF5FA388AAEFF13(uLocal_103[iVar1], Local_136[iVar1 /*3*/], 0, 0, 1);
									if (iVar1 != 2 && iVar1 != 3)
									{
										unk_0xBE0E7D38FE7C495C(uLocal_103[iVar1], cLocal_184, sLocal_185[iVar1], 1000f, -1000f, -1, 1, 0, 0, 0, 0);
									}
									else
									{
										unk_0xBE0E7D38FE7C495C(uLocal_103[iVar1], cLocal_184, sLocal_185[iVar1], 1000f, -1000f, -1, 1, 0.5f, 0, 0, 0);
									}
									unk_0x390D16BCBFB23E1A(uLocal_103[iVar1], 1);
								}
							}
							else if (unk_0x772F801619C83779(iLocal_174[iVar1]))
							{
								uLocal_103[iVar1] = unk_0x5618B819E5B9C053(25, iLocal_174[iVar1], Local_136[iVar1 /*3*/], fLocal_158[iVar1], 1, 1);
								unk_0xEB9B39274C401888(uLocal_103[iVar1], 1);
							}
							iVar1++;
						}
						if ((((func_55(uLocal_103[0]) && func_55(uLocal_103[1])) && func_55(uLocal_103[2])) && func_55(uLocal_103[3])) && func_55(uLocal_103[4]))
						{
							unk_0x43EC517AF665D2B9(uLocal_103[4], unk_0x0031992CA618A445(), -1, 2048, 4);
							iVar1 = 0;
							while (iVar1 <= (iLocal_174 - 1))
							{
								unk_0x9793B48C4C8275F8(iLocal_174[iVar1]);
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
			if (func_153())
			{
				if (!unk_0x76B3C79DE564AFC6(iLocal_111))
				{
					if (unk_0x772F801619C83779(iLocal_182))
					{
						iLocal_111 = unk_0x5129A9193468FF77(iLocal_182, Local_113, fLocal_116, 1, 1, 0);
						unk_0x24B72A49849215AE(iLocal_111, 1084227584);
						unk_0x03E3DB9E908BFFE2(iLocal_111, 0f);
						unk_0x6C06041FFFFE41AC(iLocal_111, 0);
						unk_0xB80E20BFFCDF6D98(iLocal_111, 0);
						if (unk_0x17E6BF40FED605C1(iLocal_111))
						{
							unk_0xCFB9AB2B03B3D7C9(iLocal_111, 1);
						}
						unk_0x56B418F469976565(iLocal_111, 0, 1, 0);
					}
				}
				iVar2 = 0;
				iVar2 = 0;
				while (iVar2 < 3)
				{
					if (unk_0x76B3C79DE564AFC6(iLocal_166[iVar2]))
					{
						if (unk_0x76B3C79DE564AFC6(iLocal_170[iVar2]))
						{
							if (!unk_0x8682D8A6269E52C9(iLocal_170[iVar2]) && func_14(iLocal_166[iVar2]))
							{
								if (unk_0x00E962E9D49FD6C4(iLocal_166[iVar2], -1, 0))
								{
									unk_0x7E3C622EB2D4D2E2(iLocal_170[iVar2], iLocal_166[iVar2], -1);
								}
							}
						}
						else if (func_14(iLocal_166[iVar2]) && unk_0x772F801619C83779(joaat("a_m_y_jetski_01")))
						{
							iLocal_170[iVar2] = unk_0x4E2448BB7576232A(iLocal_166[iVar2], 25, joaat("a_m_y_jetski_01"), -1, 1, 1);
							unk_0x47719B470B88CAC0(iLocal_170[iVar2], 0);
							unk_0xEB9B39274C401888(iLocal_170[iVar2], 1);
						}
					}
					else if (unk_0x772F801619C83779(iLocal_182))
					{
						iLocal_166[iVar2] = unk_0x5129A9193468FF77(iLocal_182, Local_122[iVar2 /*3*/], fLocal_132[iVar2], 1, 1, 0);
						unk_0x24B72A49849215AE(iLocal_166[iVar2], 1084227584);
						unk_0x03E3DB9E908BFFE2(iLocal_166[iVar2], 0f);
						unk_0x6C06041FFFFE41AC(iLocal_166[iVar2], 1);
						unk_0xB80E20BFFCDF6D98(iLocal_166[iVar2], 1);
						if (unk_0x17E6BF40FED605C1(iLocal_166[iVar2]))
						{
							unk_0xCFB9AB2B03B3D7C9(iLocal_166[iVar2], 1);
						}
						unk_0x56B418F469976565(iLocal_166[iVar2], 0, 1, 0);
					}
					iVar2++;
				}
				if (((unk_0x76B3C79DE564AFC6(iLocal_111) && unk_0x76B3C79DE564AFC6(iLocal_166[0])) && unk_0x76B3C79DE564AFC6(iLocal_166[1])) && unk_0x76B3C79DE564AFC6(iLocal_166[2]))
				{
					unk_0x9793B48C4C8275F8(iLocal_182);
				}
				if ((unk_0x76B3C79DE564AFC6(iLocal_170[0]) && unk_0x76B3C79DE564AFC6(iLocal_170[1])) && unk_0x76B3C79DE564AFC6(iLocal_170[2]))
				{
					unk_0x9793B48C4C8275F8(joaat("a_m_y_jetski_01"));
				}
				unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 170, 1);
			}
		}
	}
}

int func_152(int iParam0, int iParam1)
{
	if (func_55(iParam0))
	{
		if (unk_0xF57D21B49780A7A8(iParam0, iParam1) == 1 || unk_0xF57D21B49780A7A8(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_153()
{
	if (!func_155())
	{
		return 0;
	}
	if (func_55(unk_0x0031992CA618A445()))
	{
		if (!func_154(unk_0x0031992CA618A445(), Local_113, 100f) || unk_0x5114FCEE2A997B95())
		{
			return 1;
		}
	}
	return 0;
}

bool func_154(int iParam0, struct<3> Param1, float fParam4)
{
	return unk_0xB7A628320EFF8E47(unk_0xF177E0DA126D71C8(iParam0, 1), Param1) <= (fParam4 * fParam4);
}

int func_155()
{
	if (Local_83.f_1 == 3)
	{
		return 1;
	}
	else if (Local_83.f_1 == 1 || Local_83.f_1 == 2)
	{
		if (unk_0x41413FABD538FC3A() >= 20 || unk_0x41413FABD538FC3A() < 5)
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

int func_156(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_145)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0x2A3398C6222EB190((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0x2A3398C6222EB190((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_157(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return 1;
}

bool func_157(var uParam0)
{
	return func_158(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_158(var uParam0, char[4] cParam1, int iParam2)
{
	if (unk_0x2A3398C6222EB190(uParam0, 30))
	{
		if (unk_0x2A3398C6222EB190(uParam0, 29))
		{
			switch (func_159(uParam0))
			{
				case 0:
					return unk_0x772F801619C83779(uParam2);
					break;
				
				case 1:
					return unk_0xB3379AC2E71D1E7E(uParam1);
					break;
				
				case 2:
					return unk_0x88D617EDD6923CC0(cParam1);
					break;
				
				case 3:
					return unk_0xB56F0E1C89B9E069(cParam1);
					break;
				
				case 4:
					return unk_0x4B59C07015859DF4(iParam2, cParam1);
					break;
				
				case 5:
					return unk_0x44731FF13F4F33EF(cParam1);
					break;
				
				case 6:
					return unk_0x1F1D255CB6501243(cParam1, unk_0x2A3398C6222EB190(uParam0, 27), -1);
					break;
				
				case 7:
					return unk_0x388802672AA51883(iParam2);
					break;
				
				case 8:
					return unk_0xF376F1492C8D737F(iParam2);
					break;
				
				case 9:
					return unk_0x980AD2F46D0AFC4E();
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

int func_159(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x2A3398C6222EB190(uParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_160(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_145)
	{
		if ((unk_0xA83FFA3FA7711E6D() >= (uParam0->f_146 + uParam0->f_147) || unk_0x2A3398C6222EB190(Global_92762.f_20, 2)) || unk_0x2A3398C6222EB190(Global_92762.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (unk_0x2A3398C6222EB190((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0x2A3398C6222EB190((*uParam0)[iVar0 /*18*/], 29))
					{
						func_161(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = unk_0xA83FFA3FA7711E6D();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_161(var uParam0)
{
	func_162(uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_162(var uParam0, char* sParam1, int iParam2)
{
	if (unk_0x2A3398C6222EB190(*uParam0, 30))
	{
		switch (func_159(*uParam0))
		{
			case 0:
				unk_0xBE91026C1FC72180(uParam2);
				break;
			
			case 1:
				unk_0x9F62787D280BF2EC(uParam1);
				break;
			
			case 2:
				unk_0x9CA1D58A37E9394C(uParam1);
				break;
			
			case 3:
				unk_0x59B2F61C9D01132B(uParam1, unk_0x2A3398C6222EB190(*uParam0, 28));
				break;
			
			case 4:
				unk_0xB1F4C6EA4D59C5D0(uParam2, sParam1);
				break;
			
			case 5:
				unk_0x8EC6855B27DBF450(sParam1);
				break;
			
			case 6:
				unk_0x1F1D255CB6501243(sParam1, unk_0x2A3398C6222EB190(*uParam0, 27), -1);
				break;
			
			case 7:
				unk_0x089FF988344A3611(uParam2);
				break;
			
			case 8:
				unk_0x1D69C39ECF71C85C(sParam1, uParam2);
				break;
			
			case 9:
				unk_0xE21C454556502C7D();
				break;
			
			default:
				break;
		}
		unk_0xCD7E92DE2BFA0B0D(uParam0, 29);
	}
}

void func_163()
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
		func_168(Local_83.f_0, &Local_207, &Local_210, &fLocal_213);
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
			func_167(&uLocal_216, iLocal_183);
		}
		iLocal_182 = func_166(Local_83.f_1);
		iVar0 = 0;
		while (iVar0 <= (iLocal_174 - 1))
		{
			func_167(&uLocal_216, iLocal_174[iVar0]);
			iVar0++;
		}
		func_167(&uLocal_216, iLocal_182);
		func_164(&uLocal_216, cLocal_184);
		unk_0x5CEBAD207A41641E(Local_201, Local_204, 0, 0);
		unk_0xF3AB35ADAA20C9A9(Local_207, Local_210, fLocal_213, 0, 0, 1);
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
		func_167(&uLocal_216, iLocal_182);
		func_167(&uLocal_216, joaat("a_m_y_jetski_01"));
	}
}

void func_164(var uParam0, char* sParam1)
{
	func_165(uParam0, 1, -1, sParam1, 0);
}

void func_165(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0x2A3398C6222EB190((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0x2A3398C6222EB190((*uParam0)[iVar0 /*18*/], iParam1))
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
					if (!unk_0xB3404E397FF56B3B(sParam3, "NULL"))
					{
						if (unk_0xB3404E397FF56B3B(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
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
		if (!unk_0x2A3398C6222EB190((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0xCD7E92DE2BFA0B0D(uParam0[iVar0 /*18*/], iParam1);
			unk_0xCD7E92DE2BFA0B0D(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_166(int iParam0)
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

void func_167(var uParam0, int iParam1)
{
	func_165(uParam0, 0, iParam1, "NULL", 0);
}

void func_168(int iParam0, var uParam1, var uParam2, float fParam3)
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

int func_169()
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	
	if (func_54(9))
	{
		return 0;
	}
	if (func_39(6) || func_39(7))
	{
		return 0;
	}
	if (Global_55848)
	{
		return 0;
	}
	if (func_192())
	{
		return 0;
	}
	if (Local_83.f_1 != 3 && func_44() != 1)
	{
		return 0;
	}
	if (unk_0xB7F75BFA1C7C2AF6())
	{
		return 0;
	}
	if (func_55(unk_0x0031992CA618A445()) && unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
	{
		uVar0 = unk_0x7899A2987EB03783();
		if (((func_14(uVar0) && unk_0x26D7BF365BA84F9C(unk_0x0031992CA618A445(), uVar0)) && !func_191(unk_0x0031992CA618A445(), uVar0, -1)) && unk_0xE9559A12052415BE(uVar0) != joaat("taxi"))
		{
			return 0;
		}
	}
	switch (Local_83.f_0)
	{
		case 0:
			if (Global_104413[0])
			{
				return 0;
			}
			break;
		
		case 1:
			if (Global_104413[1])
			{
				return 0;
			}
			break;
		
		case 2:
			if (Global_104413[2])
			{
				return 0;
			}
			break;
		
		case 3:
			if (Global_104413[3])
			{
				return 0;
			}
			break;
		
		case 4:
			if (Global_104413[4])
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_104403[0])
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_104403[1])
			{
				return 0;
			}
			break;
		
		case 7:
			if (Global_104403[2])
			{
				return 0;
			}
			break;
		
		case 8:
			if (Global_104403[3])
			{
				return 0;
			}
			break;
	}
	if (!func_155())
	{
		iVar1 = 0;
		while (iVar1 <= (iLocal_174 - 1))
		{
			if (func_55(uLocal_103[iVar1]))
			{
				unk_0x173325AAF2CD766A(&uVar2);
				unk_0x8C0D2C1D41B04158(0, iVar1 * 100);
				unk_0x9BE63CB00B240063(0, 1193033728, 0);
				unk_0xF81AD3C937316CCA(uVar2);
				unk_0xEDD5437C49B7B1F8(uLocal_103[iVar1], uVar2);
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= (iLocal_170 - 1))
		{
			if (func_55(iLocal_170[iVar1]))
			{
				unk_0x173325AAF2CD766A(&uVar2);
				unk_0x8C0D2C1D41B04158(0, iVar1 * 110);
				if (func_14(iLocal_166[iVar1]) && unk_0xA32DC7E16AD1DFB7(iLocal_170[iVar1], iLocal_166[iVar1], 0))
				{
					unk_0xF48F6EEC1EBEB012(0, iLocal_166[iVar1], 30f, 786597);
				}
				else
				{
					unk_0x9BE63CB00B240063(0, 1193033728, 0);
				}
				unk_0xF81AD3C937316CCA(uVar2);
				unk_0xEDD5437C49B7B1F8(iLocal_170[iVar1], uVar2);
			}
			iVar1++;
		}
		if (func_55(iLocal_112))
		{
			if (func_14(iLocal_111) && unk_0xA32DC7E16AD1DFB7(iLocal_112, iLocal_111, 0))
			{
				unk_0xF48F6EEC1EBEB012(iLocal_112, iLocal_111, 30f, 786597);
			}
			else
			{
				unk_0x9BE63CB00B240063(iLocal_112, 1193033728, 0);
			}
		}
		return 0;
	}
	if (func_171())
	{
		iVar4 = 0;
		while (iVar4 <= (iLocal_174 - 1))
		{
			if (func_55(uLocal_103[iVar4]))
			{
				unk_0x173325AAF2CD766A(&uVar3);
				unk_0x8C0D2C1D41B04158(0, iVar4 * 50);
				unk_0x53E150F8F0AD7101(0, unk_0x0031992CA618A445(), 500f, -1, 0, 0);
				unk_0xF81AD3C937316CCA(uVar3);
				if ((iVar4 % 2) == 0)
				{
					func_170(uLocal_103[iVar4], 1);
				}
				unk_0xEDD5437C49B7B1F8(uLocal_103[iVar4], uVar3);
			}
			iVar4++;
		}
		iVar4 = 0;
		while (iVar4 <= (iLocal_170 - 1))
		{
			if (func_14(iLocal_166[iVar4]) && Local_83.f_1 == 3)
			{
				unk_0xCFB9AB2B03B3D7C9(iLocal_166[iVar4], 0);
			}
			if (func_55(iLocal_170[iVar4]))
			{
				unk_0x173325AAF2CD766A(&uVar3);
				unk_0x8C0D2C1D41B04158(0, iVar4 * 60);
				if (func_14(iLocal_166[iVar4]) && unk_0xA32DC7E16AD1DFB7(iLocal_170[iVar4], iLocal_166[iVar4], 0))
				{
					unk_0xF48F6EEC1EBEB012(0, iLocal_166[iVar4], 50f, 786468);
				}
				else
				{
					unk_0x53E150F8F0AD7101(0, unk_0x0031992CA618A445(), 500f, -1, 0, 0);
				}
				unk_0xF81AD3C937316CCA(uVar3);
				unk_0xEDD5437C49B7B1F8(iLocal_170[iVar4], uVar3);
				if ((iVar4 % 2) == 0)
				{
					func_170(iLocal_170[iVar4], 1);
				}
			}
			iVar4++;
		}
		if (func_14(iLocal_111) && Local_83.f_1 == 3)
		{
			unk_0xCFB9AB2B03B3D7C9(iLocal_111, 0);
		}
		if (func_55(iLocal_112))
		{
			if (func_14(iLocal_111) && unk_0xA32DC7E16AD1DFB7(iLocal_112, iLocal_111, 0))
			{
				unk_0xF48F6EEC1EBEB012(iLocal_112, iLocal_111, 50f, 786468);
			}
			else
			{
				unk_0x53E150F8F0AD7101(iLocal_112, unk_0x0031992CA618A445(), 500f, -1, 0, 0);
			}
		}
		switch (Local_83.f_0)
		{
			case 0:
				Global_104413[0] = 1;
				Global_104419[0] = unk_0x31CD6E9F83C10233();
				break;
			
			case 1:
				Global_104413[1] = 1;
				Global_104419[1] = unk_0x31CD6E9F83C10233();
				break;
			
			case 2:
				Global_104413[2] = 1;
				Global_104419[2] = unk_0x31CD6E9F83C10233();
				break;
			
			case 3:
				Global_104413[3] = 1;
				Global_104419[3] = unk_0x31CD6E9F83C10233();
				break;
			
			case 4:
				Global_104413[4] = 1;
				Global_104419[4] = unk_0x31CD6E9F83C10233();
				break;
			
			case 5:
				Global_104403[0] = 1;
				Global_104408[0] = unk_0x31CD6E9F83C10233();
				break;
			
			case 6:
				Global_104403[1] = 1;
				Global_104408[1] = unk_0x31CD6E9F83C10233();
				break;
			
			case 7:
				Global_104403[2] = 1;
				Global_104408[2] = unk_0x31CD6E9F83C10233();
				break;
			
			case 8:
				Global_104403[3] = 1;
				Global_104408[3] = unk_0x31CD6E9F83C10233();
				break;
		}
		return 0;
	}
	return 1;
}

void func_170(var uParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	if (func_55(uParam0))
	{
		iVar1 = 2;
		if (bParam1)
		{
			iVar1 = 3;
		}
		iVar2 = unk_0x3AF262D7332EEDF5(0, iVar1);
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
		if (unk_0xA7D1AE4528FB3B74(uParam0))
		{
			func_129(uParam0, sVar0, "WAVELOAD_PAIN_MALE", 24);
		}
		else
		{
			func_129(uParam0, sVar0, "WAVELOAD_PAIN_FEMALE", 24);
		}
	}
}

int func_171()
{
	int iVar0;
	
	if (unk_0x587694641947BA55(unk_0x3D35F9864E4640B1(), 0))
	{
		return 1;
	}
	if (Local_83.f_1 == 3)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_170 - 1))
		{
			if (unk_0x76B3C79DE564AFC6(iLocal_170[iVar0]))
			{
				if (unk_0x8682D8A6269E52C9(iLocal_170[iVar0]))
				{
					return 1;
				}
				else if (func_172(iLocal_170[iVar0], 1, 1116471296, 1126825984, 0, 0, 0, 0) || unk_0x20BE8D7B7834CA2D(iLocal_170[iVar0]))
				{
					return 1;
				}
			}
			if (unk_0x76B3C79DE564AFC6(iLocal_166[iVar0]))
			{
				if (unk_0x7A6C051038031EFA(iLocal_166[iVar0], 0))
				{
					return 1;
				}
				else if (unk_0x7CA73A79B30385F3(iLocal_166[iVar0], unk_0x0031992CA618A445(), 1) && unk_0x8DB158934E64B062(iLocal_166[iVar0]) < 900)
				{
					return 1;
				}
			}
			iVar0++;
		}
		if (unk_0x76B3C79DE564AFC6(iLocal_111))
		{
			if (unk_0x7A6C051038031EFA(iLocal_111, 0))
			{
				return 1;
			}
			else if (unk_0x7CA73A79B30385F3(iLocal_111, unk_0x0031992CA618A445(), 1) && unk_0x8DB158934E64B062(iLocal_111) < 900)
			{
				return 1;
			}
		}
		return 0;
	}
	if (func_154(unk_0x0031992CA618A445(), Local_89, 50f) && unk_0xD08ED8D7088059C5(unk_0x0031992CA618A445()))
	{
		return 1;
	}
	if (unk_0x76B3C79DE564AFC6(iLocal_112))
	{
		if (unk_0x8682D8A6269E52C9(iLocal_112))
		{
			return 1;
		}
		else if (func_172(iLocal_112, 1, 1116471296, 1126825984, 0, 0, 0, 0))
		{
			return 1;
		}
		else if (unk_0x20BE8D7B7834CA2D(iLocal_112))
		{
			unk_0xEB9B39274C401888(iLocal_112, 0);
			return 1;
		}
	}
	if (unk_0x76B3C79DE564AFC6(iLocal_111))
	{
		if (unk_0x7A6C051038031EFA(iLocal_111, 0))
		{
			return 1;
		}
		else if (unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), iLocal_111, 1) || unk_0x7CA73A79B30385F3(iLocal_111, unk_0x0031992CA618A445(), 1))
		{
			return 1;
		}
	}
	if (unk_0x76B3C79DE564AFC6(iLocal_117))
	{
		if (unk_0x7A6C051038031EFA(iLocal_117, 0))
		{
			return 1;
		}
		else if (unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), iLocal_117, 1) || unk_0x7CA73A79B30385F3(iLocal_117, unk_0x0031992CA618A445(), 1))
		{
			return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_174 - 1))
	{
		if (unk_0x76B3C79DE564AFC6(uLocal_103[iVar0]))
		{
			if (unk_0x8682D8A6269E52C9(uLocal_103[iVar0]))
			{
				return 1;
			}
			else if (func_172(uLocal_103[iVar0], 1, 1116471296, 1126825984, 0, 0, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_172(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	struct<3> Var0;
	
	if (func_15(unk_0x0031992CA618A445()) && func_15(iParam0))
	{
		if (unk_0x7CA73A79B30385F3(iParam0, unk_0x0031992CA618A445(), 1))
		{
			return 1;
		}
		if (func_186(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!unk_0x1F510E862BD5CD12(unk_0x0031992CA618A445(), 6))
		{
			if (unk_0xAE94A7B1ED25B103(unk_0x0031992CA618A445()))
			{
				Var0 = { unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1) - unk_0xF177E0DA126D71C8(iParam0, 1) };
				if ((((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <= 5f)
				{
					return func_185(unk_0x0031992CA618A445(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_173(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_173(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_15(unk_0x0031992CA618A445()) && func_15(iParam0))
	{
		if (func_184(iParam0) || unk_0x35992691C50DF43E(unk_0x3D35F9864E4640B1(), iParam0))
		{
			if (unk_0x1F510E862BD5CD12(unk_0x0031992CA618A445(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0x830CAE5496B8AD6B(unk_0x0031992CA618A445(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_174(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_174(int iParam0, float fParam1)
{
	return func_175(iParam0, unk_0x0031992CA618A445(), fParam1, 1, 250, 7);
}

bool func_175(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_183(iParam0, iParam1);
	if (!func_15(iParam0) || !func_15(iParam1))
	{
		if (iVar4 != -1)
		{
			func_182(&(Local_40[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!func_179(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_178();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_40[iVar4 /*4*/].f_1 = iParam0;
		Local_40[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { unk_0x616B55A822407A37(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_176(&(Local_40[iVar4 /*4*/]), Var1, iParam1, &(Local_40[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x31CD6E9F83C10233() - Local_40[iVar4 /*4*/].f_3) < iParam4);
}

int func_176(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7)
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
		Var1 = { func_177(iParam4, iParam7) };
		*uParam0 = unk_0xB654849962F7FBC3(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = unk_0xF645F030F8429492(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
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
	if (unk_0x269F274F1955DE87(iVar7))
	{
		func_15(iVar7);
		if (unk_0x4849801147A2BA1E(iVar7) == iParam4)
		{
			if (bLocal_81)
			{
				unk_0x15DCE0232A265CCA(Param1, unk_0xF177E0DA126D71C8(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = unk_0x31CD6E9F83C10233();
			return 1;
		}
		return 0;
	}
	if (unk_0x036E1D5EA494CEB2(iVar7))
	{
		func_15(iVar7);
		if (unk_0x90219307C9D2728D(iParam4, 0))
		{
			if (unk_0x89C1AD6422029361(iVar7) == unk_0xCFA31F1E461A6BB5(iParam4, 0))
			{
				if (bLocal_81)
				{
					unk_0x15DCE0232A265CCA(Param1, unk_0xF177E0DA126D71C8(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = unk_0x31CD6E9F83C10233();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_177(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = unk_0x3AF262D7332EEDF5(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0xF177E0DA126D71C8(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0x616B55A822407A37(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0x616B55A822407A37(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0x616B55A822407A37(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0x616B55A822407A37(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0x616B55A822407A37(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0x616B55A822407A37(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0xF177E0DA126D71C8(iParam0, 1);
}

int func_178()
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

int func_179(int iParam0, int iParam1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_181(unk_0xF177E0DA126D71C8(iParam1, 1) - unk_0xF177E0DA126D71C8(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var3 = { unk_0xE9EAE230056F8FA1(iParam0) };
	}
	else
	{
		Var3 = { func_181(unk_0x616B55A822407A37(iParam0, 31086, 0f, 5f, 0f) - unk_0x616B55A822407A37(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_180(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_180(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_181(struct<3> Param0)
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

void func_182(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_183(int iParam0, int iParam1)
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

int func_184(int iParam0)
{
	if (unk_0x14D51A9D0DDF4807(unk_0x3D35F9864E4640B1(), iParam0) && unk_0x1F510E862BD5CD12(unk_0x0031992CA618A445(), 6))
	{
		return 1;
	}
	return 0;
}

bool func_185(int iParam0, int iParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0xE9EAE230056F8FA1(iParam0) };
	Var3 = { unk_0xF177E0DA126D71C8(iParam1, 1) - unk_0xF177E0DA126D71C8(iParam0, 1) };
	return (((Var0.f_0 * Var3.f_0) + (Var0.f_1 * Var3.f_1)) / unk_0x2A488C176D52CCA5(Var3, 0f, 0f, 0f)) > unk_0xD0FFB162F40A139C(fParam2);
}

int func_186(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (func_15(unk_0x0031992CA618A445()) && func_15(iParam0))
	{
		unk_0x1306828A757A10AC(unk_0x0031992CA618A445(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_190(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_187(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (unk_0x57550D8981DAEF6C(unk_0x0031992CA618A445()))
			{
				if (unk_0xD08ED8D7088059C5(unk_0x0031992CA618A445()))
				{
					if (unk_0xA836CB82D16639AD(unk_0xF177E0DA126D71C8(iParam0, 1), fVar0, 1))
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
				if (func_190(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_187(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_187(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0xF177E0DA126D71C8(iParam0, 1) };
	Var3 = { Var0 };
	Var0.f_0 = (Var0.f_0 - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var3.f_0 = (Var3.f_0 + fParam1);
	Var3.f_1 = (Var3.f_1 + fParam1);
	Var3.f_2 = (Var3.f_2 + fParam1);
	if (bParam2)
	{
		if (((unk_0x755518C724FBCB30(unk_0xF177E0DA126D71C8(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || unk_0x755518C724FBCB30(unk_0xF177E0DA126D71C8(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || unk_0x755518C724FBCB30(unk_0xF177E0DA126D71C8(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0x755518C724FBCB30(unk_0xF177E0DA126D71C8(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_188(iParam0, fParam1))
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
			if (func_188(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x358ED862352D8DB6(Var0, Var3, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_188(var uParam0, float fParam1)
{
	var uVar0;
	struct<3> Var1;
	
	if ((((unk_0x324758F5AB79458C(uParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || unk_0x324758F5AB79458C(uParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || unk_0x324758F5AB79458C(uParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || unk_0x324758F5AB79458C(uParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || unk_0x324758F5AB79458C(uParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
	{
		if (func_189(uParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_189(int iParam0, struct<3> Param1, float fParam4, int iParam5)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_181(Param1 - unk_0xF177E0DA126D71C8(uParam0, 1)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		Var3 = { unk_0xE9EAE230056F8FA1(iParam0) };
	}
	else
	{
		Var3 = { func_181(unk_0x616B55A822407A37(iParam0, 31086, 0f, 5f, 0f) - unk_0x616B55A822407A37(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_180(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam4 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_190(int iParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (unk_0xD08ED8D7088059C5(unk_0x0031992CA618A445()))
		{
			if (unk_0x830CAE5496B8AD6B(unk_0x0031992CA618A445(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0xA836CB82D16639AD(unk_0xF177E0DA126D71C8(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_191(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x7A6C051038031EFA(iParam0, 0) && !unk_0x7A6C051038031EFA(uParam1, 0))
	{
		if (unk_0x26D7BF365BA84F9C(iParam0, iParam1))
		{
			if (unk_0x3251C2B06497863C(iParam1, iParam2, 0) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_192()
{
	switch (Local_83.f_0)
	{
		case 5:
			return unk_0x2A3398C6222EB190(Global_104439.f_24837.f_2, 0);
			break;
		
		case 6:
			return unk_0x2A3398C6222EB190(Global_104439.f_24837.f_2, 1);
			break;
		
		case 7:
			return unk_0x2A3398C6222EB190(Global_104439.f_24837.f_2, 2);
			break;
		
		case 8:
			return unk_0x2A3398C6222EB190(Global_104439.f_24837.f_2, 3);
			break;
		
		case 0:
			return unk_0x2A3398C6222EB190(Global_104439.f_24840.f_3, 0);
			break;
		
		case 1:
			return unk_0x2A3398C6222EB190(Global_104439.f_24840.f_3, 1);
			break;
		
		case 2:
			return unk_0x2A3398C6222EB190(Global_104439.f_24840.f_3, 2);
			break;
		
		case 3:
			return unk_0x2A3398C6222EB190(Global_104439.f_24840.f_3, 3);
			break;
		
		case 4:
			return unk_0x2A3398C6222EB190(Global_104439.f_24840.f_3, 4);
			break;
	}
	return 0;
}

void func_193()
{
	iLocal_82 = 0;
	iLocal_92 = 0;
	bLocal_99 = false;
	bLocal_100 = false;
	iLocal_96 = 0;
	iLocal_97 = 0;
	iLocal_98 = 0;
	func_195(1);
	unk_0xB8EFDF266981AB1A("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", 0);
	unk_0xB8EFDF266981AB1A("WORLD_VEHICLE_PARK_PARALLEL", 0);
	if (Local_83.f_0 == 1)
	{
		uLocal_215 = func_194(374.0083f, 279.5919f, 102.3306f, 40f);
		unk_0xE882E0C18562237F(374.0083f, 279.5919f, 102.3306f, 25f, 0, 0, 0, 0, 0, 0);
	}
	if (Local_83.f_1 == 1 || Local_83.f_1 == 2)
	{
		uLocal_214 = func_194(Local_89, 60f);
	}
}

var func_194(struct<3> Param0, float fParam3)
{
	struct<3> Var0;
	
	Var0 = { (fParam3 / 2f), (fParam3 / 2f), (fParam3 / 2f) };
	return unk_0x765BE154A2FACB3E(Param0 - Var0, Param0 + Var0, 0, 1, 1, 1);
}

void func_195(bool bParam0)
{
	if (bParam0)
	{
		switch (Local_83.f_0)
		{
			case 0:
			case 1:
			case 2:
			case 3:
				func_167(&uLocal_216, joaat("banshee"));
				func_167(&uLocal_216, joaat("feltzer2"));
				func_167(&uLocal_216, joaat("sentinel"));
				break;
			
			case 4:
				func_167(&uLocal_216, joaat("bati"));
				func_167(&uLocal_216, joaat("ruffian"));
				break;
			
			case 5:
			case 6:
			case 7:
			case 8:
				func_167(&uLocal_216, joaat("seashark"));
				break;
		}
	}
	else
	{
		func_196(&uLocal_216);
	}
}

void func_196(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0x2A3398C6222EB190((*uParam0)[iVar0 /*18*/], 30))
		{
			func_197(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}

void func_197(var uParam0)
{
	func_198(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_198(var uParam0, char* sParam1, int iParam2)
{
	if (unk_0x2A3398C6222EB190(uParam0, 30))
	{
		switch (func_159(uParam0))
		{
			case 0:
				unk_0x9793B48C4C8275F8(uParam2);
				break;
			
			case 1:
				unk_0xBE238DB7614E8074(uParam1);
				break;
			
			case 2:
				unk_0xC6D00BD1BEFACD9B(uParam1);
				break;
			
			case 3:
				unk_0x40C8D24AE8508DEC(uParam1);
				break;
			
			case 4:
				unk_0x0EA5304CED5FD5D1(iParam2, sParam1);
				break;
			
			case 5:
				unk_0xD4B8FC41ABE48E25(sParam1);
				break;
			
			case 6:
				unk_0x616FBCC20E22C43A();
				break;
			
			case 7:
				unk_0x601546C2E8935047(iParam2);
				break;
			
			case 8:
				unk_0x84D19A34E1A97ABC(iParam2, unk_0x2A3398C6222EB190(uParam0, 26));
				break;
			
			case 9:
				unk_0xAC4E213EC292CE4D();
				break;
			
			default:
				break;
		}
	}
}

int func_199(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return unk_0x2A3398C6222EB190(Global_104439.f_24840.f_1, 0);
			break;
		
		case 1:
			return unk_0x2A3398C6222EB190(Global_104439.f_24840.f_1, 1);
			break;
		
		case 2:
			return unk_0x2A3398C6222EB190(Global_104439.f_24840.f_1, 2);
			break;
		
		case 3:
			return unk_0x2A3398C6222EB190(Global_104439.f_24840.f_1, 3);
			break;
		
		case 4:
			return unk_0x2A3398C6222EB190(Global_104439.f_24840.f_1, 4);
			break;
	}
	return 0;
}

bool func_200(int iParam0, int iParam1)
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
	bVar0 = unk_0x2A3398C6222EB190(Global_104439.f_8946.f_99.f_219[iParam0], iParam1);
	return bVar0;
}

void func_201()
{
	if (func_202(func_203(86, 0), Local_89, 1f, 0))
	{
		Local_83.f_0 = 0;
		Local_83.f_1 = 2;
		Local_83.f_3 = 100;
		Local_83.f_4 = 20;
	}
	else if (func_202(func_203(87, 0), Local_89, 1f, 0))
	{
		Local_83.f_0 = 1;
		Local_83.f_1 = 2;
		Local_83.f_3 = 500;
		Local_83.f_4 = 18;
	}
	else if (func_202(func_203(88, 0), Local_89, 1f, 0))
	{
		Local_83.f_0 = 2;
		Local_83.f_1 = 2;
		Local_83.f_3 = 1000;
		Local_83.f_4 = 2;
	}
	else if (func_202(func_203(89, 0), Local_89, 1f, 0))
	{
		Local_83.f_0 = 3;
		Local_83.f_1 = 2;
		Local_83.f_3 = 1250;
		Local_83.f_4 = 4;
	}
	else if (func_202(func_203(90, 0), Local_89, 1f, 0))
	{
		Local_83.f_0 = 4;
		Local_83.f_1 = 1;
		Local_83.f_3 = 1500;
		Local_83.f_4 = 5;
	}
	else if (func_202(func_203(82, 0), Local_89, 1f, 0))
	{
		Local_83.f_0 = 5;
		Local_83.f_1 = 3;
		Local_83.f_3 = 0;
		Local_83.f_4 = 16;
	}
	else if (func_202(func_203(83, 0), Local_89, 1f, 0))
	{
		Local_83.f_0 = 6;
		Local_83.f_1 = 3;
		Local_83.f_3 = 0;
		Local_83.f_4 = 13;
	}
	else if (func_202(func_203(84, 0), Local_89, 1f, 0))
	{
		Local_83.f_0 = 7;
		Local_83.f_1 = 3;
		Local_83.f_3 = 0;
		Local_83.f_4 = 15;
		Local_83.f_5 = 1;
	}
	else if (func_202(func_203(85, 0), Local_89, 1f, 0))
	{
		Local_83.f_0 = 8;
		Local_83.f_1 = 3;
		Local_83.f_4 = 24;
		Local_83.f_3 = 0;
		Local_83.f_5 = 1;
	}
	else
	{
		func_204(0);
	}
}

int func_202(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x229F35E7CDDBF757((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x229F35E7CDDBF757((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x229F35E7CDDBF757((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x229F35E7CDDBF757((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x229F35E7CDDBF757((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_203(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0f, 0f, 0f;
	}
	return Global_25533[iVar0 /*23*/][iParam1 /*3*/];
}

void func_204(bool bParam0)
{
	int iVar0;
	var uVar1;
	
	if (!iLocal_93)
	{
		unk_0x59FA14CE9944B95A(0);
		iLocal_93 = 1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (func_15(uLocal_103[iVar0]))
		{
			unk_0xD706D9D85701BFBD(uLocal_103[iVar0]);
			unk_0x9BE63CB00B240063(uLocal_103[iVar0], 1193033728, 0);
			unk_0xEB9B39274C401888(uLocal_103[iVar0], 0);
			unk_0x056049D9941BD43D(&(uLocal_103[iVar0]));
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
				unk_0xD706D9D85701BFBD(iLocal_170[iVar0]);
				if (unk_0x9C4740BA7F0AF553(unk_0xE9559A12052415BE(iLocal_166[iVar0])))
				{
					unk_0xCFB9AB2B03B3D7C9(iLocal_166[iVar0], 0);
				}
				unk_0xF48F6EEC1EBEB012(iLocal_170[iVar0], iLocal_166[iVar0], 20f, 786599);
				unk_0x390D16BCBFB23E1A(iLocal_170[iVar0], 1);
				unk_0xEB9B39274C401888(iLocal_170[iVar0], 0);
				unk_0x056049D9941BD43D(&(iLocal_170[iVar0]));
				unk_0x28BB69BE14577487(&(iLocal_166[iVar0]));
			}
		}
		iVar0++;
	}
	if (func_15(iLocal_112))
	{
		if (func_15(iLocal_111))
		{
			unk_0xD706D9D85701BFBD(iLocal_112);
			unk_0xA8A16396F3E7CD41(iLocal_112, 1, 1);
			unk_0xF48F6EEC1EBEB012(iLocal_112, iLocal_111, 15f, 786599);
			unk_0x390D16BCBFB23E1A(iLocal_112, 1);
			unk_0xEB9B39274C401888(iLocal_112, 0);
			unk_0x056049D9941BD43D(&iLocal_112);
			unk_0x28BB69BE14577487(&iLocal_111);
		}
	}
	if (func_15(iLocal_117))
	{
		unk_0x28BB69BE14577487(&iLocal_117);
	}
	switch (Local_83.f_0)
	{
		case 5:
			func_207(82, 0, 0);
			unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_24837.f_2), 0);
			break;
		
		case 6:
			func_207(83, 0, 0);
			unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_24837.f_2), 1);
			break;
		
		case 7:
			func_207(84, 0, 0);
			unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_24837.f_2), 2);
			break;
		
		case 8:
			func_207(85, 0, 0);
			unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_24837.f_2), 3);
			break;
		
		case 0:
			func_207(86, 0, 0);
			unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_24840.f_3), 0);
			break;
		
		case 1:
			func_207(87, 0, 0);
			unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_24840.f_3), 1);
			break;
		
		case 2:
			func_207(88, 0, 0);
			unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_24840.f_3), 2);
			break;
		
		case 3:
			func_207(89, 0, 0);
			unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_24840.f_3), 3);
			break;
		
		case 4:
			func_207(90, 0, 0);
			unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_24840.f_3), 4);
			break;
	}
	if (iLocal_92)
	{
		unk_0x8C361F37C04084F4(1);
	}
	unk_0x798703F9C96DE0E5(unk_0x3B6901D890F3121F(10), 0);
	if (iLocal_101)
	{
		unk_0x62316D43A8F729C6(1);
	}
	if (iLocal_194 && !bParam0)
	{
		uVar1 = unk_0xED1168B8D2D313FA();
		if (unk_0x4B0365EB2D59E6FA(uVar1))
		{
			if (!unk_0x46F4AE18D5506B08(iVar1))
			{
				unk_0xB568492AC80B8832(iVar1, 1, 0);
			}
		}
	}
	if (!bParam0)
	{
		func_195(0);
	}
	if (iLocal_94)
	{
		unk_0x98D14485479FED5C(Local_201, Local_204, 1);
		unk_0xCE9A728371D47759(Local_207, Local_210, fLocal_213, 1);
		iLocal_94 = 0;
	}
	unk_0xB8EFDF266981AB1A("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", 1);
	unk_0xB8EFDF266981AB1A("WORLD_VEHICLE_PARK_PARALLEL", 1);
	if (Local_83.f_0 == 1)
	{
		unk_0x04021FF677078694(uLocal_215, 0);
	}
	if (Local_83.f_1 == 1 || Local_83.f_1 == 2)
	{
		unk_0x04021FF677078694(uLocal_214, 0);
	}
	else
	{
		unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 170, 0);
	}
	func_205(&uLocal_216, 0);
	unk_0xBEE2834559A8897A();
}

void func_205(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_196(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_206(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
}

void func_206(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_207(int iParam0, bool bParam1, bool bParam2)
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
		iVar1 = unk_0x2A3398C6222EB190(Global_25533[iVar0 /*23*/].f_11, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0x2A3398C6222EB190(Global_25533[iVar0 /*23*/].f_11, 0))
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_25533[iVar0 /*23*/].f_11), 18);
		if (Global_25530 == 1)
		{
			Global_25531 = 1;
		}
		Global_25530 = 1;
	}
	if (bParam1)
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_25533[iVar0 /*23*/].f_11), 0);
		unk_0xCD7E92DE2BFA0B0D(&(Global_25533[iVar0 /*23*/].f_11), 15);
		unk_0xCD7E92DE2BFA0B0D(&(Global_25533[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0xD804ACF2A7171150(&(Global_25533[iVar0 /*23*/].f_11), 0);
		unk_0xD804ACF2A7171150(&(Global_25533[iVar0 /*23*/].f_11), 15);
	}
	if (!unk_0x2A3398C6222EB190(Global_25533[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0xA761A0B6072010C8(Global_25533[iVar0 /*23*/].f_19))
		{
			unk_0xDECD64DB818CE695(1);
			unk_0x0C4BDC77192798AE(&(Global_25533[iVar0 /*23*/].f_19));
			unk_0xDECD64DB818CE695(0);
		}
	}
}

