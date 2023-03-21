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
	unk_0x3AFF990CF9565D40(1);
	Local_89 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0x76BF814AB8D4CAB8(83))
	{
		func_209(0);
	}
	func_206();
	switch (Local_83.f_1)
	{
		case 1:
		case 2:
			if (!func_205(0, 8))
			{
				func_209(0);
			}
			if (!func_204(Local_83.f_0))
			{
				func_209(0);
			}
			break;
		
		case 3:
			if (!func_205(0, 7))
			{
				func_209(0);
			}
			break;
		
		case 0:
			func_209(0);
			break;
	}
	func_198();
	if (!func_174())
	{
		func_209(0);
	}
	func_168();
	while (true)
	{
		func_165(&uLocal_216);
		if (func_174())
		{
			if (unk_0x6E65FD9B611945AD())
			{
				switch (iLocal_82)
				{
					case 0:
						iLocal_82 = 1;
						break;
					
					case 1:
						func_156();
						func_125();
						break;
					
					case 2:
						func_61();
						break;
					
					case 3:
						func_1();
						break;
				}
			}
			else
			{
				func_209(0);
			}
		}
		else
		{
			func_209(0);
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
	Global_1312857 = 1;
	func_209(1);
}

char* func_3(int iParam0)
{
	char* sVar0;
	
	if (unk_0xC57A05B38A912073())
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
	else if (unk_0x35D499EE14C3D367())
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
	else if (unk_0x0A8A596EB9C068FA())
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
	else if (unk_0x929A0C5D6A986B4F())
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
	else if (unk_0xC339C5C5B5E8BC5B())
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
	
	if (unk_0xC57A05B38A912073())
	{
		sVar0 = "SPRACE";
	}
	else if (unk_0x35D499EE14C3D367())
	{
		sVar0 = "2535285330962926";
	}
	else if (unk_0x0A8A596EB9C068FA())
	{
		sVar0 = "SPRACE";
	}
	else if (unk_0x929A0C5D6A986B4F())
	{
		sVar0 = "2535285330962926";
	}
	else if (unk_0xC339C5C5B5E8BC5B())
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
	unk_0xD2A9C3F486236CC5(&Global_1312423, 0);
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
	if (func_60(unk_0x18F7BE9ACB7D08F4()))
	{
		if (!unk_0x2E64174C91365575(unk_0x18F7BE9ACB7D08F4()))
		{
			unk_0xC741149CBDE5831B(unk_0x18F7BE9ACB7D08F4(), 0);
		}
	}
	while (!func_54())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (Local_83.f_1 != 3)
	{
		func_16(func_49(), 1, Local_83.f_3);
		iVar0 = unk_0x5AFB8ED811F05E4D() + 1500;
		iVar1 = unk_0x952F33F151D40D1A();
		if (func_14(iVar1))
		{
			while (!func_12(iVar1, 3f, 2, 1056964608, 0, 1, 0) || unk_0x5AFB8ED811F05E4D() < iVar0)
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
		uVar2 = unk_0x0A91D180DDC7A1B8();
		if (unk_0x557001354138B7FB(uVar2))
		{
			unk_0xF70DE7344EBF0825(uVar2, 0, 0);
		}
	}
	func_10();
}

void func_10()
{
	if (!func_11(0))
	{
		unk_0xC8A5933869E73673("mission_Race");
		while (!unk_0xC040FCA5F6E73B3E("mission_Race"))
		{
			unk_0xC8A5933869E73673("mission_Race");
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xB8BA7F44DF1575E1("mission_Race", &Local_83, 6, 22000);
	}
	unk_0x2130D1396EE39C8E("mission_Race");
	func_209(1);
}

bool func_11(bool bParam0)
{
	if (!bParam0 && unk_0xE7FAF8E78F7D3A73(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB03A1684359C50A1(Global_71100, 0);
}

int func_12(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_13(iParam0);
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

void func_13(int iParam0)
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

int func_14(int iParam0)
{
	if (func_15(iParam0))
	{
		if (unk_0xC4B84EB67F78C1F0(iParam0, 0))
		{
			if (!unk_0x25A40FAC128F45B0(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_15(int iParam0)
{
	if (unk_0x31F12808DC47A9E5(iParam0))
	{
		if (!unk_0x74C2FE037DFC8B4A(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_16(int iParam0, int iParam1, int iParam2)
{
	if (Global_104551.f_28020[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_104551.f_28020[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_17(Global_104551.f_28020[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_17(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_48();
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
					func_47(99, 1);
					func_46(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_46(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_46(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_30(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_26(5))
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
							func_46(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_46(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_46(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_26(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_46(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_46(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_46(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_46(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_46(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_46(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_46(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_46(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_46(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x088BDDE9EE449CE6())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_46(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_46(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_46(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_46(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_46(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_46(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_26(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_46(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_46(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_46(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_46(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_46(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_46(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_25(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_47(95, iParam3);
					break;
				
				case 1:
					func_47(97, iParam3);
					break;
				
				case 2:
					func_47(96, iParam3);
					break;
			}
			func_47(98, iParam3);
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
	iVar5 = (Global_53075[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_53075[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_53075[iVar2] = 2147483647;
				}
				else
				{
					Global_53075[iVar2] = (Global_53075[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_46(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_46(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_46(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_53075[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_53075[iVar2];
			Global_53075[iVar2] = (Global_53075[iVar2] - iParam3);
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
		Global_104551.f_20534.f_233[iVar2 /*69*/].f_2[Global_104551.f_20534.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_104551.f_20534.f_233[iVar2 /*69*/].f_2[Global_104551.f_20534.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_104551.f_20534.f_233[iVar2 /*69*/].f_2[Global_104551.f_20534.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_104551.f_20534.f_233[iVar2 /*69*/]++;
		Global_104551.f_20534.f_233[iVar2 /*69*/].f_1++;
		if (Global_104551.f_20534.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_104551.f_20534.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_19(iParam0);
	if (Global_35859 == 15)
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
			Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53083[iVar0 /*3*/][0] = Global_104551.f_20534[iVar0];
		Global_53083.f_31[iVar0 /*3*/][0] = Global_104551.f_20534.f_11[iVar0];
		Global_53083.f_62[iVar0 /*3*/][0] = Global_104551.f_20534.f_22[iVar0];
		Global_53083.f_93[iVar0 /*3*/][0] = Global_104551.f_20534.f_33[iVar0];
		Global_53083.f_124[iVar0 /*3*/][0] = Global_104551.f_20534.f_44[iVar0];
		Global_53083.f_155[iVar0 /*3*/][0] = Global_104551.f_20534.f_55[iVar0];
		Global_53083.f_186[iVar0 /*3*/][0] = Global_104551.f_20534.f_66[iVar0];
		Global_53083.f_217[iVar0 /*3*/][0] = Global_104551.f_20534.f_77[iVar0];
		Global_53083.f_248[iVar0 /*3*/][0] = Global_104551.f_20534.f_88[iVar0];
		if (!bParam0)
		{
			Global_53083[iVar0 /*3*/][1] = Global_104551.f_20534[iVar0];
			Global_53083.f_31[iVar0 /*3*/][1] = Global_104551.f_20534.f_11[iVar0];
			Global_53083.f_62[iVar0 /*3*/][1] = Global_104551.f_20534.f_22[iVar0];
			Global_53083.f_93[iVar0 /*3*/][1] = Global_104551.f_20534.f_33[iVar0];
			Global_53083.f_124[iVar0 /*3*/][1] = Global_104551.f_20534.f_44[iVar0];
			Global_53083.f_155[iVar0 /*3*/][1] = Global_104551.f_20534.f_55[iVar0];
			Global_53083.f_186[iVar0 /*3*/][1] = Global_104551.f_20534.f_66[iVar0];
			Global_53083.f_217[iVar0 /*3*/][1] = Global_104551.f_20534.f_77[iVar0];
			Global_53083.f_248[iVar0 /*3*/][1] = Global_104551.f_20534.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_19(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_53075[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xD92C8D8AF3C67820(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xD92C8D8AF3C67820(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xD92C8D8AF3C67820(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_20(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_23(129, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!unk_0x44243F2E2F58B8E3())
	{
		if (unk_0xB03A1684359C50A1(Global_104551.f_20534.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x62148293B793073B(&(Global_104551.f_20534.f_471), iParam0);
		}
	}
	else if (unk_0xB03A1684359C50A1(Global_104551.f_20534.f_471, iParam0) || unk_0xB03A1684359C50A1(Global_2097152[func_22() /*12062*/].f_7637.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x62148293B793073B(&(Global_104551.f_20534.f_471), iParam0);
		unk_0x62148293B793073B(&(Global_2097152[func_22() /*12062*/].f_7637.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x55E6536147AC42E6("COUP_RED");
		unk_0xBEFD1ED9B6BE5127(func_21(iParam0));
		unk_0xB317125F2A5746EB(&cVar1, &cVar1, 1, 0, "", 0);
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

int func_23(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_24();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0x88E3F30217D2CB3E((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xC83BD3A121E79D9F((iParam0 - 0)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0x88E3F30217D2CB3E((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xC83BD3A121E79D9F((iParam0 - 192)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0x88E3F30217D2CB3E((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xC83BD3A121E79D9F((iParam0 - 513)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0x88E3F30217D2CB3E((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xC83BD3A121E79D9F((iParam0 - 705)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0xBAF51F55DF57C4B2((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xC83BD3A121E79D9F((iParam0 - 3111)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0xBAF51F55DF57C4B2((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xC83BD3A121E79D9F((iParam0 - 2919)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x45DE926FA3E8434A((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xC83BD3A121E79D9F((iParam0 - 4207)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x45DE926FA3E8434A((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xC83BD3A121E79D9F((iParam0 - 4335)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x45DE926FA3E8434A((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xC83BD3A121E79D9F((iParam0 - 6029)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x45DE926FA3E8434A((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xC83BD3A121E79D9F((iParam0 - 7385)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x45DE926FA3E8434A((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xC83BD3A121E79D9F((iParam0 - 7321)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x45DE926FA3E8434A((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xC83BD3A121E79D9F((iParam0 - 9361)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x45DE926FA3E8434A((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0xC83BD3A121E79D9F((iParam0 - 15369)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x45DE926FA3E8434A((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0xC83BD3A121E79D9F((iParam0 - 15562)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x45DE926FA3E8434A((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0xC83BD3A121E79D9F((iParam0 - 15946)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x45DE926FA3E8434A((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0xC83BD3A121E79D9F((iParam0 - 18098)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar17, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_24()
{
	return Global_1312736;
}

void func_25(int iParam0)
{
	func_47(93, iParam0);
	func_47(29, iParam0);
	func_47(30, iParam0);
}

bool func_26(int iParam0)
{
	if (iParam0 == 8)
	{
		return func_27(129, -1, -1);
	}
	if (!unk_0x44243F2E2F58B8E3())
	{
		return unk_0xB03A1684359C50A1(Global_104551.f_20534.f_471, iParam0);
	}
	return unk_0xB03A1684359C50A1(Global_2097152[func_22() /*12062*/].f_7637.f_10, iParam0);
}

int func_27(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_24();
	}
	iVar1 = func_29(iParam0, iParam1);
	uVar2 = func_28(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x4E4286C35FED641E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_28(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0xC83BD3A121E79D9F((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0xC83BD3A121E79D9F((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0xC83BD3A121E79D9F((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0xC83BD3A121E79D9F((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0xC83BD3A121E79D9F((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0xC83BD3A121E79D9F((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0xC83BD3A121E79D9F((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0xC83BD3A121E79D9F((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0xC83BD3A121E79D9F((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0xC83BD3A121E79D9F((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0xC83BD3A121E79D9F((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0xC83BD3A121E79D9F((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0xC83BD3A121E79D9F((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0xC83BD3A121E79D9F((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0xC83BD3A121E79D9F((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0xC83BD3A121E79D9F((iParam0 - 18098)) * 64);
	}
	return iVar0;
}

int func_29(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_24();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xBAF51F55DF57C4B2((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xBAF51F55DF57C4B2((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	return iVar0;
}

int func_30(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x391A4DC2CC8A9143(27))
	{
		return 0;
	}
	if (unk_0xD194C635833AC189(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xD194C635833AC189(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xD194C635833AC189(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0xD194C635833AC189(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xD92C8D8AF3C67820(joaat("num_cash_spent"), iVar1, 1);
		func_45(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_31(27, 1);
	return 1;
}

int func_31(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_32(iParam0, iParam1);
}

int func_32(int iParam0, int iParam1)
{
	if (func_44(14) && !func_43(iParam0))
	{
		return 0;
	}
	if (unk_0x391A4DC2CC8A9143(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25479 != 0 && !Global_70852)
	{
		return 0;
	}
	if (func_42(&Global_4267379))
	{
		if (func_40(&Global_4267379, iParam0))
		{
			return 0;
		}
		if (func_33(&Global_4267379, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x4815E9FF4A7078A5(iParam0))
		{
			return 0;
		}
		if (unk_0x391A4DC2CC8A9143(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_33(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x391A4DC2CC8A9143(iParam1))
	{
		return 0;
	}
	if (func_44(14) && !func_43(iParam1))
	{
		return 0;
	}
	if (func_40(uParam0, iParam1))
	{
		return 0;
	}
	if (func_39(uParam0) < 0f)
	{
		func_38(uParam0, 0);
	}
	func_36(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_34(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_34(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x391A4DC2CC8A9143(iParam1))
	{
		return 0;
	}
	if (func_44(14) && !func_43(iParam1))
	{
		return 0;
	}
	if (func_40(uParam0, iParam1))
	{
		return 0;
	}
	if (func_39(uParam0) < 0f)
	{
		func_38(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_35(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_35(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_36(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_37(uParam0, iVar0);
		iVar0++;
	}
	func_38(uParam0, (Global_4267378 - 0.5f));
}

void func_37(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_38(var uParam0, float fParam1)
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

float func_39(var uParam0)
{
	return uParam0->f_80;
}

bool func_40(var uParam0, int iParam1)
{
	return func_41(uParam0, iParam1) != -1;
}

int func_41(var uParam0, int iParam1)
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

bool func_42(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_43(int iParam0)
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

bool func_44(int iParam0)
{
	return Global_35859 == iParam0;
}

int func_45(int iParam0, int iParam1)
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
	iVar0 = unk_0x5D740A70A96E81DD(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x1CAB2C92E22EBFB2(iParam0, iParam1);
	}
	return 0;
}

void func_46(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xD194C635833AC189(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xD92C8D8AF3C67820(iParam0, iVar0, 1);
}

void func_47(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51643[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x44243F2E2F58B8E3())
	{
		return;
	}
	if (Global_51643[iParam0 /*7*/])
	{
		unk_0xD194C635833AC189(Global_51643[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xD92C8D8AF3C67820(Global_51643[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_48()
{
	int iVar0;
	
	if (unk_0x1F30842E4146CE70())
	{
		unk_0xD194C635833AC189(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_53075[0] == iVar0)
		{
			Global_53075[0] = iVar0;
		}
		unk_0xD194C635833AC189(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_53075[1] == iVar0)
		{
			Global_53075[1] = iVar0;
		}
		unk_0xD194C635833AC189(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_53075[2] == iVar0)
		{
			Global_53075[2] = iVar0;
		}
	}
}

int func_49()
{
	func_50();
	return Global_104551.f_2353.f_539.f_4301;
}

void func_50()
{
	int iVar0;
	
	if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
	{
		if (func_53(Global_104551.f_2353.f_539.f_4301) != unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()))
		{
			iVar0 = func_52(unk_0x18F7BE9ACB7D08F4());
			if (func_51(iVar0) && (!func_44(14) || Global_103502))
			{
				if (Global_104551.f_2353.f_539.f_4301 != iVar0 && func_51(Global_104551.f_2353.f_539.f_4301))
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

bool func_51(int iParam0)
{
	return iParam0 < 3;
}

int func_52(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x31F12808DC47A9E5(uParam0))
	{
		iVar1 = unk_0x4F69FBD64CDF125B(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_53(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_53(int iParam0)
{
	if (func_51(iParam0))
	{
		return Global_104551.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_54()
{
	int iVar0;
	
	iVar0 = func_55(&(Local_83.f_2), 0, 9, 0, 0);
	if (!iVar0 == 1)
	{
		return 0;
	}
	return 1;
}

int func_55(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_90452.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_59(0))
		{
			return 0;
		}
		Global_35823++;
		*uParam0 = Global_35823;
		unk_0x36643EAE6212D16F(unk_0x0A91D180DDC7A1B8(), 0);
		Global_17162.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x9BEC17E13AB1F07F(8);
		}
		Global_35859 = iParam2;
		Global_35821 = *uParam0;
		Global_35822 = iParam4;
		Global_35820 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35820 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35820)
			{
				if (Global_35826[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35821 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_57(iParam2))
		{
			return 0;
		}
		if (Global_35820 == 8)
		{
			return 0;
		}
		Global_35823++;
		*uParam0 = Global_35823;
		Global_35826[Global_35820 /*4*/] = Global_35823;
		Global_35826[Global_35820 /*4*/].f_1 = iParam1;
		Global_35826[Global_35820 /*4*/].f_2 = iParam2;
		Global_35826[Global_35820 /*4*/].f_3 = 0;
		Global_35820++;
		if (iParam4 != 0)
		{
			func_56(uParam0, iParam4);
		}
	}
	return 2;
}

void func_56(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35820 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35820)
	{
		if (Global_35826[iVar0 /*4*/] == *uParam0)
		{
			Global_35826[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_57(int iParam0)
{
	return func_58(iParam0, Global_35859);
}

int func_58(int iParam0, int iParam1)
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

int func_59(int iParam0)
{
	if (Global_35859 == 15)
	{
		return 0;
	}
	if (func_57(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_60(int iParam0)
{
	if (func_15(iParam0))
	{
		if (!unk_0x0FAE113CE72ED842(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_61()
{
	var uVar0;
	
	switch (iLocal_96)
	{
		case 0:
			if (func_123(0, -1, 0))
			{
				unk_0xEFF1F12403847394(1);
				func_111();
				unk_0x9A70D1B91A853FDD(0);
				iLocal_101 = 1;
				bLocal_99 = false;
				bLocal_100 = false;
				iLocal_96 = 1;
			}
			break;
		
		case 1:
			if (func_74())
			{
				iLocal_96 = 2;
			}
			break;
		
		case 2:
			uVar0 = unk_0x0A91D180DDC7A1B8();
			unk_0x08C4F0937B57CB88(uVar0, 0);
			unk_0xF70DE7344EBF0825(uVar0, 1, 0);
			func_65(0, 1, 1, 0);
			func_62(1, -1);
			iLocal_96 = 0;
			if (bLocal_99)
			{
				iLocal_82 = 3;
			}
			else
			{
				unk_0x9A70D1B91A853FDD(1);
				iLocal_82 = 1;
			}
			break;
	}
}

void func_62(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_64(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17301.f_7931)
	{
		unk_0xB9C0BA93B50CE575(15);
		Global_17301.f_7931 = 0;
	}
	unk_0x882C4E3F687152C5(0f);
	if (Global_17301.f_5498[iVar0])
	{
		unk_0x000ED7BEBF44F5EA(9, false);
		Global_17301.f_5498[iVar0] = 0;
	}
	if (Global_17301.f_5484[iVar0])
	{
		unk_0x1D492DC0B64A955F("CommonMenu");
		Global_17301.f_5484[iVar0] = 0;
	}
	if (Global_17301.f_5491[iVar0])
	{
		unk_0x1D492DC0B64A955F("MPShopSale");
		Global_17301.f_5491[iVar0] = 0;
	}
	if (bParam0)
	{
		func_63(&(Global_17301.f_5530[iVar0 /*10*/]));
		Global_17301.f_5591[iVar0] = 0;
	}
	else
	{
		Global_17301.f_5591[iVar0] = 0;
	}
}

void func_63(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x5C716BBF766E1C70(*uParam0))
		{
			unk_0xEBE532BFFE618875(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_64(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0x44243F2E2F58B8E3() && unk_0xD8E9E28C65F6D7A9())
		{
			iParam2 = unk_0x3910797658D84EE9();
		}
	}
	StringCopy(&cVar0, unk_0xFCA64981FEF7C913(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0x6E987D62C8535B6E(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_17301.f_5591[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_17301.f_5591[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_17301.f_5591[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_65(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x23E72737746790F6(unk_0x8CFC7D6E1DA5D304());
		unk_0x9A63F1CF5AD1028E(unk_0x8CFC7D6E1DA5D304(), 1);
		unk_0x10196728B08EFD0D(unk_0x8CFC7D6E1DA5D304(), 1);
		func_73(1);
		unk_0x11E17A11B13AC43A();
		unk_0x6F202559EF4E43CE();
		if (Global_14453.f_1 > 3)
		{
			if (unk_0x36328FCBA2944E1F())
			{
				unk_0xBE97F4E2B659331B(0);
			}
			if (!func_72())
			{
				Global_14453.f_1 = 3;
			}
			Global_15756 = 5;
		}
		func_71(1, iParam3, iParam2, 0);
		Global_55907 = 1;
		Global_68216 = 1;
		Global_70850 = 1;
	}
	else
	{
		func_73(0);
		unk_0x100AF4FA3B247263();
		Global_55907 = 0;
		if (bParam1)
		{
			unk_0x5D7F2DFCC7EFF8A1();
		}
		unk_0x9A63F1CF5AD1028E(unk_0x8CFC7D6E1DA5D304(), 0);
		unk_0x10196728B08EFD0D(unk_0x8CFC7D6E1DA5D304(), 0);
		func_71(0, iParam3, iParam2, 0);
		if (unk_0x44243F2E2F58B8E3())
		{
			if (((!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) && !func_69(unk_0x8CFC7D6E1DA5D304())) && !func_67(unk_0x8CFC7D6E1DA5D304(), 0)) && !func_66())
			{
				unk_0xF74B493CCF90C997(unk_0x18F7BE9ACB7D08F4(), 0);
			}
		}
		else if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) && !func_69(unk_0x8CFC7D6E1DA5D304()))
		{
			unk_0xF74B493CCF90C997(unk_0x18F7BE9ACB7D08F4(), 0);
		}
		Global_70850 = 0;
	}
}

bool func_66()
{
	return unk_0xB03A1684359C50A1(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_39.f_18, 14);
}

bool func_67(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x8CFC7D6E1DA5D304())
	{
		bVar0 = func_68(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1595681[iParam0 /*678*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x4AF13BCD120BCDBC(iParam0))
		{
			bVar0 = unk_0x1BE7B010C9B9841E(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_68(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_24();
	}
	if (Global_1312834[iVar1] == 1)
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

int func_69(int iParam0)
{
	if (func_67(iParam0, 0))
	{
		return 1;
	}
	if (func_70())
	{
		if (iParam0 == unk_0x8CFC7D6E1DA5D304())
		{
			return 1;
		}
	}
	if (unk_0xB03A1684359C50A1(Global_2422724[iParam0 /*420*/].f_210, 2))
	{
		return 1;
	}
	return 0;
}

bool func_70()
{
	return unk_0xB03A1684359C50A1(Global_2359302, 3);
}

int func_71(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xC339C5C5B5E8BC5B())
	{
		if (unk_0x511092EDBCB2F66B() != iParam0 && uParam2)
		{
			unk_0x0602616B0914EF8A(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_72()
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_73(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xD2A9C3F486236CC5(&Global_2323, 13);
	}
	else
	{
		unk_0x62148293B793073B(&Global_2323, 13);
	}
}

int func_74()
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
	
	func_110(&iVar0, &iVar1, &uVar2, &uVar3, 0);
	unk_0xFCBDBEB257C6D3FB(2, 201);
	unk_0xFCBDBEB257C6D3FB(2, 202);
	unk_0xFCBDBEB257C6D3FB(2, 188);
	unk_0xFCBDBEB257C6D3FB(2, 187);
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
	bVar4 = (iVar1 < -64 || unk_0xFC0C00F9DE2AEC93(2, 188));
	bVar5 = (iVar1 > 64 || unk_0xFC0C00F9DE2AEC93(2, 187));
	bVar6 = unk_0xFC0C00F9DE2AEC93(2, 201);
	bVar7 = unk_0xFC0C00F9DE2AEC93(2, 202);
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
			func_109(iLocal_97, 1, 1);
		}
	}
	func_75(1, -1, 1, 0, 1, -1082130432, 0, 0);
	return 0;
}

void func_75(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
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
	int iVar55;
	bool bVar56;
	float fVar57;
	float fVar58;
	float fVar59;
	float fVar60;
	int iVar61;
	int iVar62;
	float fVar63;
	float fVar64;
	float fVar65;
	char cVar66[64];
	char cVar82[64];
	float fVar98;
	int iVar99;
	float fVar100;
	float fVar101;
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
	
	if (!func_64(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_106(0, bParam6))
	{
		return;
	}
	unk_0x09EF2EB55114981C(76, 84);
	unk_0xBECA8293AEA680BD(-0.05f, -0.05f, 0f, 0f);
	fVar58 = 0f;
	fVar59 = 0f;
	if (Global_17301)
	{
		if (func_104(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar58 = fVar37;
			fVar59 = fVar36;
			fVar58 = (fVar58 + 0f);
		}
		else
		{
			Global_17301 = 0;
		}
	}
	if (unk_0x6E987D62C8535B6E(&(Global_17301.f_1)) == unk_0x6E987D62C8535B6E("HIDE"))
	{
		fVar60 = Global_17299;
	}
	else
	{
		fVar60 = (((Global_17299 + fVar58) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_17300;
	}
	fVar63 = 1f;
	if (bParam7)
	{
		unk_0xA320869CAE52B097(&iVar61, &iVar62);
		fVar64 = unk_0x47DA03BCFF902E84(0);
		if (func_103())
		{
			iVar61 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar62) * fVar64));
		}
		fVar65 = (unk_0xBBDA792448DB5A89(iVar61) / unk_0xBBDA792448DB5A89(iVar62));
		fVar63 = (fVar65 / fVar64);
		if (func_103())
		{
			fVar63 = 1f;
		}
		iVar61 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar61) / fVar63));
		iVar62 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar62) / fVar63));
	}
	else
	{
		unk_0x22D0D3B91B10E6E4(&iVar61, &iVar62);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17301.f_5598)
		{
			if (unk_0x6E987D62C8535B6E(&(Global_17301.f_1)) == unk_0x6E987D62C8535B6E("HIDE"))
			{
				fVar51 = Global_17299;
			}
			else
			{
				if (Global_17301)
				{
					StringCopy(&cVar66, func_102(29), 64);
					StringCopy(&cVar82, func_99(29, 1), 64);
					if (unk_0x6E987D62C8535B6E(&(Global_17301.f_6719[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_98(Global_17298, Global_17299, fParam5, (fVar58 - 0f), 0, 0, 0, 255);
						unk_0x27CD91E03FF596E2(&cVar66, &cVar82, (Global_17298 + (fParam5 * 0.5f)), (Global_17299 + ((fVar58 - 0f) * 0.5f)), fVar59, (fVar58 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0x27CD91E03FF596E2(&cVar66, &cVar82, (Global_17298 + (fParam5 * 0.5f)), (Global_17299 + ((fVar58 - 0f) * 0.5f)), fParam5, (fVar58 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_17301.f_7901)
				{
					iVar1 = Global_17301.f_7897;
					iVar2 = Global_17301.f_7898;
					iVar3 = Global_17301.f_7899;
					iVar4 = Global_17301.f_7900;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_98(Global_17298, (Global_17299 + fVar58), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar51 = (((Global_17299 + fVar58) + 0.034722f) + 0f);
				if (unk_0x6E987D62C8535B6E(&(Global_17301.f_1)) != 0)
				{
					func_97();
					unk_0xD74B746610C55548(&(Global_17301.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17301.f_68)
					{
						if (Global_17301.f_5[iVar14] == 2)
						{
							unk_0x3A12001DBF78DC62(Global_17301.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17301.f_5[iVar14] == 3)
						{
							unk_0xEF512794542297CA(Global_17301.f_14[iVar16], Global_17301.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17301.f_5[iVar14] == 1)
						{
							unk_0xBEFD1ED9B6BE5127(&(Global_17301.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17301.f_5[iVar14] == 8)
						{
							unk_0xBEFD1ED9B6BE5127(&(Global_17301.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17301.f_5[iVar14] == 5)
						{
							unk_0xB4179F7E88F4C4BF(&(Global_17301.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17301.f_5[iVar14] == 6)
						{
							unk_0xBEFD1ED9B6BE5127(&(Global_17301.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17301.f_5[iVar14] == 7)
						{
							unk_0xB4179F7E88F4C4BF(&(Global_17301.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17301.f_5[iVar14] == 9)
						{
							unk_0xB4179F7E88F4C4BF(&(Global_17301.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0x5D7608D88BED248F((Global_17298 + 0.00390625f), ((Global_17299 + fVar58) + 0.00416664f), 0);
				}
				if (Global_17301.f_5601 > Global_17301.f_5095)
				{
					if (Global_17301.f_5604 != 0)
					{
						func_97();
						func_95((((Global_17298 + fParam5) - 0.00390625f) - func_96("CM_ITEM_COUNT", Global_17301.f_5604, Global_17301.f_5603)), ((Global_17299 + fVar58) + 0.00416664f), "CM_ITEM_COUNT", Global_17301.f_5604, Global_17301.f_5603);
					}
				}
			}
			iVar6 = Global_17301.f_5605;
			iVar9 = 0;
			fVar98 = fVar51;
			if (Global_17301.f_7911)
			{
				iVar1 = Global_17301.f_7907;
				iVar2 = Global_17301.f_7908;
				iVar3 = Global_17301.f_7909;
				iVar4 = Global_17301.f_7910;
			}
			else
			{
				unk_0x954894782056D6CB(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17301.f_5095 && iVar6 <= Global_17301.f_5088)
			{
				if (iVar6 >= 0)
				{
					if (Global_17301.f_5355[iVar6])
					{
						if (Global_17301.f_5226[iVar6] && iVar6 != Global_17301.f_5605)
						{
							fVar51 = (fVar51 + 0.00277776f);
						}
						fVar57 = 0.034722f;
						if (Global_17301.f_5612[iVar6] != 0f)
						{
							fVar57 = Global_17301.f_5612[iVar6];
						}
						fVar51 = (fVar51 + fVar57);
						iVar9++;
					}
				}
				iVar6++;
			}
			if (bParam3)
			{
				if (iVar9 <= 1)
				{
					fVar57 = 0.034722f;
					fVar51 = (fVar51 + fVar57);
					iVar9++;
					if (Global_17301.f_5088 <= 1)
					{
						Global_17301.f_5088++;
					}
					iVar55 = 1;
				}
			}
			unk_0x27CD91E03FF596E2("CommonMenu", "Gradient_Bgd", (Global_17298 + (fParam5 * 0.5f)), ((fVar98 + ((fVar51 - fVar98) * 0.5f)) - 0.00138888f), fParam5, (fVar51 - fVar98), 0f, 255, 255, 255, 255, 0);
			if (Global_17301.f_5601 > Global_17301.f_5095)
			{
				if (Global_17301.f_7916)
				{
					iVar1 = Global_17301.f_7912;
					iVar2 = Global_17301.f_7913;
					iVar3 = Global_17301.f_7914;
					iVar4 = Global_17301.f_7915;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_98(Global_17298, (fVar51 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { unk_0xC1E91F9C48368605("CommonMenu", "shop_arrows_upANDdown") };
				Var38.f_0 = (Var38.f_0 * (0.5f / fVar63));
				Var38.f_1 = (Var38.f_1 * (0.5f / fVar63));
				if (Global_17301.f_7929)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0x954894782056D6CB(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x27CD91E03FF596E2("CommonMenu", "shop_arrows_upANDdown", (Global_17298 + (fParam5 * 0.5f)), ((fVar51 + 0f) + (0.034722f * 0.5f)), ((Var38.f_0 / 1280f) * fVar63), ((Var38.f_1 / 720f) * fVar63), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar51 = (fVar51 + (0f + 0.034722f));
			}
			if (unk_0x6E987D62C8535B6E(&(Global_17301.f_4562)) != 0 && Global_17301.f_4636 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_17298 + 0.0046875f);
				if (Global_17301.f_4638 != 0)
				{
					func_104(Global_17301.f_4638, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_17298 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_94(fVar42);
				unk_0x780BA79C46FB8FF0(&(Global_17301.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17301.f_4632)
				{
					if (Global_17301.f_4566[iVar14] == 2)
					{
						unk_0x3A12001DBF78DC62(Global_17301.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17301.f_4566[iVar14] == 3)
					{
						unk_0xEF512794542297CA(Global_17301.f_4575[iVar16], Global_17301.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17301.f_4566[iVar14] == 1)
					{
						unk_0xBEFD1ED9B6BE5127(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 5)
					{
						unk_0xB4179F7E88F4C4BF(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 6)
					{
						unk_0xBEFD1ED9B6BE5127(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 7)
					{
						unk_0xB4179F7E88F4C4BF(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 9)
					{
						unk_0xB4179F7E88F4C4BF(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x72FADEA10CAEDC8D(fVar42, (fVar51 + 0.00277776f));
				unk_0x954894782056D6CB(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_98(Global_17298, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17301.f_7921)
				{
					iVar1 = Global_17301.f_7917;
					iVar2 = Global_17301.f_7918;
					iVar3 = Global_17301.f_7919;
					iVar4 = Global_17301.f_7920;
				}
				else
				{
					unk_0x954894782056D6CB(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x27CD91E03FF596E2("CommonMenu", "Gradient_Bgd", (Global_17298 + (fParam5 * 0.5f)), ((fVar51 + ((((unk_0x97BF326E4F5CD20E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x97BF326E4F5CD20E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_94(fVar42);
				unk_0xD74B746610C55548(&(Global_17301.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17301.f_4632)
				{
					if (Global_17301.f_4566[iVar14] == 2)
					{
						unk_0x3A12001DBF78DC62(Global_17301.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17301.f_4566[iVar14] == 3)
					{
						unk_0xEF512794542297CA(Global_17301.f_4575[iVar16], Global_17301.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17301.f_4566[iVar14] == 1)
					{
						unk_0xBEFD1ED9B6BE5127(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 5)
					{
						unk_0xB4179F7E88F4C4BF(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 6)
					{
						unk_0xBEFD1ED9B6BE5127(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 7)
					{
						unk_0xB4179F7E88F4C4BF(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 9)
					{
						unk_0xB4179F7E88F4C4BF(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 8)
					{
						unk_0xBEFD1ED9B6BE5127(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x5D7608D88BED248F(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_17301.f_4638 != 0)
				{
					func_104(Global_17301.f_4638, 1, 1, &fVar36, &fVar37, bParam7);
					func_93(Global_17301.f_4638, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					unk_0x27CD91E03FF596E2(func_102(Global_17301.f_4638), func_99(Global_17301.f_4638, 1), ((Global_17298 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
				}
				fVar51 = (fVar51 + (((unk_0x97BF326E4F5CD20E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17301.f_4636 > 0)
				{
					if ((unk_0x5AFB8ED811F05E4D() - Global_17301.f_4637) > Global_17301.f_4636)
					{
						StringCopy(&(Global_17301.f_4562), "", 16);
						Global_17301.f_4636 = -1;
					}
				}
			}
			if (unk_0x6E987D62C8535B6E(&(Global_4265799.f_21)) != 0 && Global_4265799.f_65 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_17298 + 0.0046875f);
				if (Global_4265799.f_67 != 0)
				{
					func_104(Global_4265799.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_17298 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_94(fVar42);
				unk_0x780BA79C46FB8FF0(&(Global_4265799.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4265799.f_61)
				{
					if (Global_4265799.f_25[iVar14] == 2)
					{
						unk_0x3A12001DBF78DC62(Global_4265799.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4265799.f_25[iVar14] == 3)
					{
						unk_0xEF512794542297CA(Global_4265799.f_34[iVar16], Global_4265799.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4265799.f_25[iVar14] == 1)
					{
						unk_0xBEFD1ED9B6BE5127(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 5)
					{
						unk_0xB4179F7E88F4C4BF(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 6)
					{
						unk_0xBEFD1ED9B6BE5127(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 7)
					{
						unk_0xB4179F7E88F4C4BF(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 9)
					{
						unk_0xB4179F7E88F4C4BF(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 8)
					{
						unk_0xBEFD1ED9B6BE5127(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x72FADEA10CAEDC8D(fVar42, (fVar51 + 0.00277776f));
				unk_0x954894782056D6CB(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_98(Global_17298, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17301.f_7921)
				{
					iVar1 = Global_17301.f_7917;
					iVar2 = Global_17301.f_7918;
					iVar3 = Global_17301.f_7919;
					iVar4 = Global_17301.f_7920;
				}
				else
				{
					unk_0x954894782056D6CB(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x27CD91E03FF596E2("CommonMenu", "Gradient_Bgd", (Global_17298 + (fParam5 * 0.5f)), ((fVar51 + ((((unk_0x97BF326E4F5CD20E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x97BF326E4F5CD20E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_94(fVar42);
				unk_0xD74B746610C55548(&(Global_4265799.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4265799.f_61)
				{
					if (Global_4265799.f_25[iVar14] == 2)
					{
						unk_0x3A12001DBF78DC62(Global_4265799.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4265799.f_25[iVar14] == 3)
					{
						unk_0xEF512794542297CA(Global_4265799.f_34[iVar16], Global_4265799.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4265799.f_25[iVar14] == 1)
					{
						unk_0xBEFD1ED9B6BE5127(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 8)
					{
						unk_0xBEFD1ED9B6BE5127(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 5)
					{
						unk_0xB4179F7E88F4C4BF(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 6)
					{
						unk_0xBEFD1ED9B6BE5127(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 7)
					{
						unk_0xB4179F7E88F4C4BF(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 9)
					{
						unk_0xB4179F7E88F4C4BF(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x5D7608D88BED248F(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_4265799.f_67 != 0)
				{
					func_104(Global_4265799.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_93(Global_4265799.f_67, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					unk_0x27CD91E03FF596E2(func_102(Global_4265799.f_67), func_99(Global_4265799.f_67, 1), ((Global_17298 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
				}
				fVar51 = (fVar51 + (((unk_0x97BF326E4F5CD20E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4265799.f_65 > 0)
				{
					if ((unk_0x5AFB8ED811F05E4D() - Global_4265799.f_66) > Global_4265799.f_65)
					{
						StringCopy(&(Global_4265799.f_21), "", 16);
						Global_4265799.f_65 = -1;
					}
				}
			}
			func_88(iVar61, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			unk_0x09EF2EB55114981C(76, 84);
			unk_0xBECA8293AEA680BD(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17301.f_5598)
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
			iVar99 = Global_17301.f_5088;
			if (Global_17301.f_5599)
			{
				iVar99 = (Global_17301.f_5602 - 1);
			}
			fVar100 = 0f;
			fVar101 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar99)
			{
				fVar57 = 0.034722f;
				if (Global_17301.f_5612[iVar6] != 0f)
				{
					fVar57 = Global_17301.f_5612[iVar6];
				}
				if (Global_17301.f_5599)
				{
					iVar6 = Global_17301.f_7552[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_17301.f_5605 && iVar9 < Global_17301.f_5095)
				{
					bVar33 = true;
					if (Global_17301.f_5606 == iVar6)
					{
						fVar101 = fVar100;
					}
					if (Global_17301.f_5226[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar60 + fVar100) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_17301.f_5746[iVar6] = fVar35;
				fVar34 = (Global_17298 + 0.0046875f);
				bVar41 = false;
				bVar32 = Global_17301.f_5606 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar102 = 255;
					iVar103 = 255;
					iVar104 = 255;
					iVar105 = 255;
					if (Global_17301.f_7923)
					{
						unk_0x954894782056D6CB(Global_17301.f_7922, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					else
					{
						unk_0x954894782056D6CB(1, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					unk_0x27CD91E03FF596E2("CommonMenu", "Gradient_Nav", (Global_17298 + (fParam5 * 0.5f)), (((fVar60 + fVar101) + (0.00277776f * IntToFloat(iVar12))) + (fVar57 * 0.5f)), fParam5, fVar57, 0f, iVar102, iVar103, iVar104, iVar105, 0);
					Global_17301.f_5744 = fVar35;
				}
				if (iVar55 && iVar7 == iVar99)
				{
					func_86(bVar32, 1, 0, 0, 0, 0, 0);
					unk_0xD74B746610C55548("DFLT_MNU_OPT");
					unk_0x5D7608D88BED248F(fVar34, fVar35, 0);
					bVar41 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_17301.f_5096)
					{
						if (unk_0xB03A1684359C50A1(Global_17301.f_4959[iVar6], iVar8) || Global_17301.f_4926[iVar8] == 5)
						{
							if (Global_17301.f_5599)
							{
								iVar19 = Global_17301.f_7568[((iVar9 * Global_17301.f_5096) + iVar8)];
								iVar20 = Global_17301.f_7609[((iVar9 * Global_17301.f_5096) + iVar8)];
								iVar21 = Global_17301.f_7650[((iVar9 * Global_17301.f_5096) + iVar8)];
								iVar22 = Global_17301.f_7691[((iVar9 * Global_17301.f_5096) + iVar8)];
								iVar23 = Global_17301.f_7732[((iVar9 * Global_17301.f_5096) + iVar8)];
							}
							else
							{
								Global_17301.f_7568[((iVar9 * Global_17301.f_5096) + iVar8)] = iVar19;
								Global_17301.f_7609[((iVar9 * Global_17301.f_5096) + iVar8)] = iVar20;
								Global_17301.f_7650[((iVar9 * Global_17301.f_5096) + iVar8)] = iVar21;
								Global_17301.f_7691[((iVar9 * Global_17301.f_5096) + iVar8)] = iVar22;
								Global_17301.f_7732[((iVar9 * Global_17301.f_5096) + iVar8)] = iVar23;
							}
							iVar106 = 0;
							bVar56 = false;
							if (Global_17301.f_5878[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17301.f_5875[0])
								{
									bVar56 = true;
									iVar106 = 0;
								}
							}
							if (Global_17301.f_5878[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17301.f_5875[1])
								{
									bVar56 = true;
									iVar106 = 1;
								}
							}
							if (Global_17301.f_4932[iVar8] != -1f)
							{
								fVar34 = ((Global_17298 + 0.0046875f) + Global_17301.f_4932[iVar8]);
							}
							if ((iVar8 < 4 && Global_17301.f_4932[iVar8 + 1] != -1f) && fVar34 < Global_17301.f_4932[iVar8 + 1])
							{
								fVar46 = (Global_17301.f_4932[iVar8 + 1] - fVar34);
							}
							else
							{
								fVar46 = (((Global_17298 + Global_17300) - 0.0046875f) - fVar34);
							}
							if ((Global_17301.f_4945[iVar8] && Global_17301.f_5741) && bVar32)
							{
								bVar54 = true;
							}
							else
							{
								bVar54 = false;
							}
							switch (Global_17301.f_4926[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_17301.f_5599)
										{
											fVar43 = 0f;
											fVar44 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
											{
												bVar52 = false;
												bVar53 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17301.f_2124[iVar24 /*5*/][iVar14] == 8)
													{
														bVar53 = true;
													}
													else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 9)
													{
														bVar52 = true;
													}
													iVar14++;
												}
												func_86(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar56, iVar106, bVar53, bVar52);
												unk_0xA5738E964D2E2159(&(Global_17301.f_73[iVar24 /*6*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xBEFD1ED9B6BE5127(&(Global_17301.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xBEFD1ED9B6BE5127(&(Global_17301.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 5)
												{
													if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xB4179F7E88F4C4BF(&(Global_2457316[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 6)
												{
													if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xBEFD1ED9B6BE5127(&(Global_2457316[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 7)
												{
													if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xB4179F7E88F4C4BF(&(Global_2457316[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xB4179F7E88F4C4BF(&(Global_2457316[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 2)
												{
													if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x3A12001DBF78DC62(Global_17301.f_3918[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 3)
												{
													if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xEF512794542297CA(Global_17301.f_4175[(iVar21 + iVar27)], Global_17301.f_4304[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
											{
												fVar43 = unk_0x1BD3A365A7E4BA14(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_104(Global_17301.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar44 = (fVar44 + fVar36);
														if (iVar14 > 0)
														{
															fVar44 = (fVar44 - (0.00078125f * 4f));
														}
														if (Global_17301.f_4433[(iVar22 + iVar14)] == 2 || Global_17301.f_4433[(iVar22 + iVar14)] == 48)
														{
															fVar44 = (fVar44 - (0.00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar42 = 0f;
											if (Global_17301.f_4953[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - (fVar43 + fVar44)) + (0.00078125f * 1f)));
											}
											else if (Global_17301.f_4953[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - ((fVar43 + fVar44) * 0.5f)));
											}
											Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar42;
											Global_17301.f_7814[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar43;
											Global_17301.f_7855[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar44;
										}
										else
										{
											fVar42 = Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)];
											fVar43 = Global_17301.f_7814[((iVar9 * Global_17301.f_5096) + iVar8)];
											fVar44 = Global_17301.f_7855[((iVar9 * Global_17301.f_5096) + iVar8)];
										}
										if (bVar54)
										{
											if (func_104(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_17301.f_4953[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_104(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_93(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													unk_0x27CD91E03FF596E2(func_102(26), func_99(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
											if (func_104(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_104(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_93(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													unk_0x27CD91E03FF596E2(func_102(27), func_99(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar31 = 0;
										if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
										{
											bVar52 = false;
											bVar53 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17301.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													bVar53 = true;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													bVar52 = true;
												}
												iVar14++;
											}
											func_86(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar56, 0, bVar53, bVar52);
											if (Global_17301.f_7927 && Global_17301.f_7928 == iVar6)
											{
												func_85(bVar32);
											}
											unk_0xD74B746610C55548(&(Global_17301.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xBEFD1ED9B6BE5127(&(Global_17301.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar31 = 1;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xBEFD1ED9B6BE5127(&(Global_17301.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar31 = 8;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xB4179F7E88F4C4BF(&(Global_2457316[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 5;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xBEFD1ED9B6BE5127(&(Global_2457316[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 6;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xB4179F7E88F4C4BF(&(Global_2457316[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 7;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xB4179F7E88F4C4BF(&(Global_2457316[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 9;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x3A12001DBF78DC62(Global_17301.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar31 = 2;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xEF512794542297CA(Global_17301.f_4175[(iVar21 + iVar27)], Global_17301.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar31 = 3;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_17301.f_4433[(iVar22 + iVar28)] == 2 || Global_17301.f_4433[(iVar22 + iVar28)] == 48)
												{
													if (func_104(Global_17301.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar42 = (fVar42 + (fVar36 * 0.5f));
														if (func_104(Global_17301.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_93(Global_17301.f_4433[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
															if (Global_17301.f_4953[iVar8] == 2)
															{
																unk_0x27CD91E03FF596E2(func_102(Global_17301.f_4433[(iVar22 + iVar28)]), func_99(Global_17301.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else
															{
																unk_0x27CD91E03FF596E2(func_102(Global_17301.f_4433[(iVar22 + iVar28)]), func_99(Global_17301.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
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
										if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
										{
											if (iVar31 == 4 && Global_17301.f_4953[iVar8] == 2)
											{
												unk_0x5D7608D88BED248F(((fVar34 + fVar42) + (0.00078125f * 7f)), fVar35, 0);
											}
											else
											{
												unk_0x5D7608D88BED248F((fVar34 + fVar42), fVar35, 0);
												if (func_84() && unk_0xE7FAF8E78F7D3A73(joaat("fm_mission_creator")) > 0)
												{
													if (iVar8 == 0)
													{
														func_86(0, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar56, 0, bVar53, bVar52);
														StringCopy(&cVar107, "TEST_LABEL", 16);
														fVar111 = 0f;
														fVar112 = 55f;
														fVar113 = 0.0185f;
														fVar114 = 0.004f;
														fVar115 = 0.02f;
														unk_0x61EA61920DAA51B8(0f, (0.35f * 0.7f));
														unk_0xE14EBFD640A207D8(255, 255, 255, 150);
														unk_0x754933C14FFBA8EB((fVar34 - (fVar115 * 0.6f)), (fVar35 + (fVar113 * 0.75f)), 0.0175f, 0.035f, unk_0xF34EE736CF047844(fVar111), unk_0xF34EE736CF047844(fVar111), unk_0xF34EE736CF047844(fVar111), unk_0xF34EE736CF047844(fVar112), 0);
														unk_0xD74B746610C55548(&cVar107);
														unk_0x3A12001DBF78DC62((Global_17301.f_5605 + iVar30));
														unk_0x5D7608D88BED248F((fVar34 - fVar115), (fVar35 + fVar114), 0);
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
												if (Global_17301.f_4433[(iVar22 + iVar14)] != 2 && Global_17301.f_4433[(iVar22 + iVar14)] != 48)
												{
													if (func_104(Global_17301.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar42 = (fVar42 + (fVar36 * 0.5f));
														if (func_104(Global_17301.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_93(Global_17301.f_4433[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
															if (Global_17301.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0x27CD91E03FF596E2(func_102(Global_17301.f_4433[(iVar22 + iVar14)]), func_99(Global_17301.f_4433[(iVar22 + iVar14)], bVar32), (Global_17298 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else if (Global_17301.f_4953[iVar8] == 2)
															{
																unk_0x27CD91E03FF596E2(func_102(Global_17301.f_4433[(iVar22 + iVar14)]), func_99(Global_17301.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else
															{
																unk_0x27CD91E03FF596E2(func_102(Global_17301.f_4433[(iVar22 + iVar14)]), func_99(Global_17301.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
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
										if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 9)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_17301.f_5599)
										{
											func_86(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar56, 0, 0, 0);
											if (Global_17301.f_7927 && Global_17301.f_7928 == iVar6)
											{
												func_85(bVar32);
											}
											unk_0xA5738E964D2E2159("NUMBER");
											unk_0x3A12001DBF78DC62(Global_17301.f_3918[iVar20]);
											fVar43 = unk_0x1BD3A365A7E4BA14(1);
											fVar42 = 0f;
											if (Global_17301.f_4953[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
											}
											else if (Global_17301.f_4953[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
											}
											Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar42;
											Global_17301.f_7814[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar43;
										}
										else
										{
											fVar42 = Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)];
											fVar43 = Global_17301.f_7814[((iVar9 * Global_17301.f_5096) + iVar8)];
										}
										if (bVar54)
										{
											if (func_104(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_17301.f_4953[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_104(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_93(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													unk_0x27CD91E03FF596E2(func_102(26), func_99(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
											if (func_104(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_104(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_93(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													unk_0x27CD91E03FF596E2(func_102(27), func_99(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										func_86(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar56, 0, 0, 0);
										func_83((fVar34 + fVar42), fVar35, "NUMBER", Global_17301.f_3918[iVar20], 0);
									}
									bVar41 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_17301.f_5599)
										{
											func_86(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar56, 0, 0, 0);
											if (Global_17301.f_7927 && Global_17301.f_7928 == iVar6)
											{
												func_85(bVar32);
											}
											unk_0xA5738E964D2E2159("NUMBER");
											unk_0xEF512794542297CA(Global_17301.f_4175[iVar21], Global_17301.f_4304[iVar21]);
											fVar43 = unk_0x1BD3A365A7E4BA14(1);
											fVar42 = 0f;
											if (Global_17301.f_4953[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
											}
											else if (Global_17301.f_4953[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
											}
											Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar42;
											Global_17301.f_7814[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar43;
										}
										else
										{
											fVar42 = Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)];
											fVar43 = Global_17301.f_7814[((iVar9 * Global_17301.f_5096) + iVar8)];
										}
										if (bVar54)
										{
											if (func_104(26, 1, 0, &fVar36, &fVar37, 0))
											{
												if (Global_17301.f_4953[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_104(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_93(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													unk_0x27CD91E03FF596E2(func_102(26), func_99(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
											if (func_104(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_104(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_93(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													unk_0x27CD91E03FF596E2(func_102(27), func_99(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										func_86(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar56, 0, 0, 0);
										func_82((fVar34 + fVar42), fVar35, "NUMBER", Global_17301.f_4175[iVar21], Global_17301.f_4304[iVar21]);
									}
									bVar41 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar33)
									{
										if (func_104(Global_17301.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
										{
											if (!Global_17301.f_5599)
											{
												fVar44 = fVar36;
												fVar42 = 0f;
												if (Global_17301.f_4953[iVar8] == 2)
												{
													fVar42 = (fVar42 + ((fVar46 - fVar44) + (0.00078125f * 1f)));
												}
												else if (Global_17301.f_4953[iVar8] == 0)
												{
													fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar44 * 0.5f)));
												}
												Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar42;
												Global_17301.f_7855[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar44;
											}
											else
											{
												fVar42 = Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)];
												fVar44 = Global_17301.f_7855[((iVar9 * Global_17301.f_5096) + iVar8)];
											}
											if (bVar54)
											{
												if (func_104(26, 1, 0, &fVar36, &fVar37, bParam7))
												{
													if (Global_17301.f_4953[iVar8] == 2)
													{
														fVar42 = (fVar42 - (fVar36 * 2f));
													}
													fVar45 = (fVar36 * 0.5f);
													if (func_104(26, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_93(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
														unk_0x27CD91E03FF596E2(func_102(26), func_99(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
													}
												}
												if (func_104(27, 1, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + fVar36);
													fVar45 = (fVar36 * 0.5f);
													if (func_104(27, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_93(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
														unk_0x27CD91E03FF596E2(func_102(27), func_99(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
													}
												}
											}
											if (func_104(Global_17301.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_93(Global_17301.f_4433[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
												unk_0x27CD91E03FF596E2(func_102(Global_17301.f_4433[iVar22]), func_99(Global_17301.f_4433[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), (fVar36 * func_81(Global_17301.f_4433[iVar22])), (fVar37 * func_81(Global_17301.f_4433[iVar22])), 0f, iVar47, iVar48, iVar49, iVar50, 0);
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
							if (Global_17301.f_4926[iVar8] == 5)
							{
								if (Global_17301.f_4938[iVar8] > 0.05f)
								{
									fVar34 = (fVar34 + Global_17301.f_4938[iVar8]);
								}
								else
								{
									fVar34 = (fVar34 + 0.05f);
								}
							}
							else
							{
								fVar34 = (fVar34 + Global_17301.f_4938[iVar8]);
								if (Global_17301.f_4945[iVar8])
								{
									if (func_104(26, 1, 1, &fVar36, &fVar37, bParam7))
									{
										fVar34 = (fVar34 - fVar36);
									}
								}
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_17301.f_4938[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar41)
				{
					if (bVar33)
					{
						Global_17301.f_7552[iVar9] = iVar6;
						Global_17301.f_5607 = iVar6;
						iVar9++;
						if (Global_17301.f_5226[iVar6])
						{
							iVar13++;
						}
						if (Global_17301.f_5612[iVar6] != 0f)
						{
							fVar100 = (fVar100 + Global_17301.f_5612[iVar6]);
						}
						else
						{
							fVar100 = (fVar100 + 0.034722f);
						}
					}
					if (!Global_17301.f_5598)
					{
						Global_17301.f_5355[iVar6] = 1;
						if (Global_17301.f_5097[iVar6])
						{
							if (bVar32)
							{
								Global_17301.f_5604 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_17301.f_5604 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17301.f_5598)
			{
				Global_17301.f_5600 = ((fVar60 + fVar100) + (0.00277776f * IntToFloat(iVar12)));
				Global_17301.f_5603 = iVar11;
				Global_17301.f_5601 = iVar10;
				Global_17301.f_5598 = 1;
			}
		}
		iVar5++;
	}
	if (!Global_17301.f_5599)
	{
		Global_17301.f_5602 = iVar9;
		Global_17301.f_5599 = 1;
	}
	Global_17301.f_5743 = fVar51;
	Global_17301.f_5745 = unk_0x5AFB8ED811F05E4D();
	unk_0x882C4E3F687152C5(Global_17301.f_5743);
	if (!Global_17301.f_7896)
	{
		func_77(0);
	}
	Global_17301.f_7896 = 0;
	if (bParam2)
	{
		unk_0xE05212008FE9A018(10);
	}
	unk_0xE05212008FE9A018(6);
	unk_0xE05212008FE9A018(7);
	unk_0xE05212008FE9A018(9);
	unk_0xE05212008FE9A018(8);
	if (bParam0)
	{
		func_76(1);
	}
	unk_0x3E233EDF605C23C0();
}

void func_76(int iParam0)
{
	Global_1358718.f_1079 = iParam0;
}

void func_77(int iParam0)
{
	if (!Global_14453.f_1 == 1)
	{
		if (func_80(0))
		{
			func_78(iParam0);
		}
		unk_0xD2A9C3F486236CC5(&Global_2324, 2);
	}
}

void func_78(int iParam0)
{
	if (Global_14615)
	{
		func_79(0, 0);
	}
	if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
	{
		unk_0xD2A9C3F486236CC5(&Global_2324, 16);
	}
	if (unk_0x36328FCBA2944E1F())
	{
		unk_0xBE97F4E2B659331B(0);
	}
	Global_15756 = 5;
	if (iParam0 == 1)
	{
		unk_0xD2A9C3F486236CC5(&Global_2323, 30);
	}
	else
	{
		unk_0x62148293B793073B(&Global_2323, 30);
	}
	if (!func_72())
	{
		Global_14453.f_1 = 3;
	}
}

void func_79(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_80(0))
		{
			Global_14615 = 1;
			if (bParam1)
			{
				unk_0xE0F240E99D061E79(&Global_14390);
			}
			Global_14381 = { Global_14399[Global_14398 /*3*/] };
			unk_0x1F7EA74AE820583A(Global_14381);
		}
	}
	else if (Global_14615 == 1)
	{
		Global_14615 = 0;
		Global_14381 = { Global_14406[Global_14398 /*3*/] };
		if (bParam1)
		{
			unk_0x1F7EA74AE820583A(Global_14390);
		}
		else
		{
			unk_0x1F7EA74AE820583A(Global_14381);
		}
	}
}

int func_80(int iParam0)
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

float func_81(int iParam0)
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

void func_82(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	unk_0xD74B746610C55548(sParam2);
	unk_0xEF512794542297CA(uParam3, uParam4);
	unk_0x5D7608D88BED248F(fParam0, fParam1, 0);
}

void func_83(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0xD74B746610C55548(sParam2);
	unk_0x3A12001DBF78DC62(iParam3);
	unk_0x5D7608D88BED248F(fParam0, fParam1, iParam4);
}

var func_84()
{
	return unk_0x5E02CD27DBE77D67(-1762644250);
}

void func_85(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0x954894782056D6CB(Global_17301.f_7924[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0x954894782056D6CB(Global_17301.f_7924[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0xE14EBFD640A207D8(iVar0, iVar1, iVar2, 255);
}

void func_86(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_87(Global_17301.f_5878[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0x954894782056D6CB(1, &iVar0, &iVar1, &iVar2, &iVar3);
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
			unk_0xE14EBFD640A207D8(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0x954894782056D6CB(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xE14EBFD640A207D8(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0x954894782056D6CB(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xE14EBFD640A207D8(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0xE14EBFD640A207D8(155, 155, 155, 255);
		}
		else
		{
			unk_0xE14EBFD640A207D8(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0xE14EBFD640A207D8(0, 0, 0, unk_0xF34EE736CF047844((255f * 0.8f)));
		}
		else
		{
			unk_0x954894782056D6CB(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0xE14EBFD640A207D8(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0xE14EBFD640A207D8(155, 155, 155, 255);
	}
	else
	{
		unk_0xE14EBFD640A207D8(155, 155, 155, 255);
	}
	unk_0x61EA61920DAA51B8(0f, 0.35f);
	unk_0xA3F605DDB63EE4B8(1);
	if (bParam5)
	{
		unk_0x61EA61920DAA51B8(0f, 0.425f);
		unk_0x03FBCA33C223558B(4);
	}
	else if (bParam6)
	{
		unk_0x61EA61920DAA51B8(0f, 0.425f);
		unk_0x03FBCA33C223558B(6);
	}
	else
	{
		unk_0x03FBCA33C223558B(0);
	}
	unk_0x36D27769309D1050(0f, 1f);
	unk_0xD2E1707404EC2AFA(0);
	unk_0xFA8404C1F8556E42(0, 0, 0, 0, 0);
	unk_0xF1BEA13DBF04FF12(0, 0, 0, 0, 0);
}

void func_87(int iParam0, var uParam1, var uParam2, var uParam3)
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

void func_88(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_64(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_106(bParam4, bParam8))
	{
		return;
	}
	if (func_91())
	{
		return;
	}
	if (unk_0x91A08229665C71F1())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_67(unk_0x8CFC7D6E1DA5D304(), 0))
		{
			return;
		}
	}
	if (unk_0xC339C5C5B5E8BC5B())
	{
		if (unk_0x73A445C7E1EAA5D2() == 0 || unk_0x91A08229665C71F1())
		{
			return;
		}
	}
	if (Global_17301.f_4639 != 0)
	{
		if (unk_0x32085AF1EB302CDD(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17301.f_4639)
			{
				if (Global_17301.f_4896[iVar1] != 358)
				{
					StringCopy(&(Global_17301.f_4641[iVar1 /*16*/]), unk_0x305BC30EAC3E9BF4(2, Global_17301.f_4896[iVar1], 1), 64);
				}
				else if (Global_17301.f_4909[iVar1] != 32)
				{
					StringCopy(&(Global_17301.f_4641[iVar1 /*16*/]), unk_0x33206AC5E51B4373(2, Global_17301.f_4909[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_17301.f_4640 = 0;
		}
		if (!Global_17301.f_4640)
		{
			unk_0x76F4FB5EFF5BDED5(Global_17301.f_5530[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xE2B30EB9B14EEAB2();
			unk_0x76F4FB5EFF5BDED5(Global_17301.f_5530[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x954263F3D07BEFC2((1f - (Global_17301.f_4951 / 100f)));
			unk_0xE2B30EB9B14EEAB2();
			if (unk_0xC339C5C5B5E8BC5B())
			{
				unk_0x76F4FB5EFF5BDED5(Global_17301.f_5530[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0xD6F1BD29497A51C8(1);
				unk_0xE2B30EB9B14EEAB2();
			}
			iVar1 = 0;
			while (iVar1 < Global_17301.f_4639)
			{
				if (unk_0x6E987D62C8535B6E(&(Global_17301.f_4834[iVar1 /*4*/])) != unk_0x6E987D62C8535B6E("PREV"))
				{
					unk_0x76F4FB5EFF5BDED5(Global_17301.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x22DD5585E00B80C3(iVar1);
					func_90(&(Global_17301.f_4641[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x6E987D62C8535B6E(&(Global_17301.f_4834[iVar2 /*4*/])) == unk_0x6E987D62C8535B6E("PREV"))
					{
						func_90(&(Global_17301.f_4641[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17301.f_4883[iVar1] == -1)
					{
						func_89(&(Global_17301.f_4834[iVar1 /*4*/]));
					}
					else
					{
						unk_0x0ECBA72FAFCEBA59(&(Global_17301.f_4834[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x1635DC214B2BB352(iParam2, 70);
						}
						else
						{
							unk_0x3A12001DBF78DC62(iParam2);
						}
						unk_0xC30401186AC91B01();
					}
					if (unk_0xC339C5C5B5E8BC5B())
					{
						if (Global_17301.f_4896[iVar1] != 358 && unk_0xB03A1684359C50A1(Global_17301.f_4922, iVar1))
						{
							unk_0xD6F1BD29497A51C8(1);
							unk_0x22DD5585E00B80C3(Global_17301.f_4896[iVar1]);
						}
						else
						{
							unk_0xD6F1BD29497A51C8(0);
							unk_0x22DD5585E00B80C3(358);
						}
					}
					unk_0xE2B30EB9B14EEAB2();
				}
				iVar1++;
			}
			if (unk_0x6E987D62C8535B6E(&(Global_4265799.f_16)) != unk_0x6E987D62C8535B6E(""))
			{
				unk_0x76F4FB5EFF5BDED5(Global_17301.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x22DD5585E00B80C3(Global_17301.f_4639);
				func_90(&Global_4265799);
				if (Global_4265799.f_20 == -1)
				{
					func_89(&(Global_4265799.f_16));
				}
				else
				{
					unk_0x0ECBA72FAFCEBA59(&(Global_4265799.f_16));
					if (bParam5)
					{
						unk_0x1635DC214B2BB352(iParam2, 70);
					}
					else
					{
						unk_0x3A12001DBF78DC62(iParam2);
					}
					unk_0xC30401186AC91B01();
				}
				unk_0xE2B30EB9B14EEAB2();
			}
			unk_0x76F4FB5EFF5BDED5(Global_17301.f_5530[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x22DD5585E00B80C3(0);
			unk_0x22DD5585E00B80C3(0);
			unk_0x22DD5585E00B80C3(0);
			unk_0x22DD5585E00B80C3(80);
			unk_0xE2B30EB9B14EEAB2();
			unk_0x76F4FB5EFF5BDED5(Global_17301.f_5530[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17301.f_4952)
			{
				unk_0x22DD5585E00B80C3(1);
			}
			else
			{
				unk_0x22DD5585E00B80C3(0);
			}
			unk_0xE2B30EB9B14EEAB2();
			Global_17301.f_4640 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17301.f_4639)
		{
			if (Global_17301.f_4883[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0x76F4FB5EFF5BDED5(Global_17301.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x22DD5585E00B80C3(iVar1);
					unk_0x0ECBA72FAFCEBA59(&(Global_17301.f_4834[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x1635DC214B2BB352(iParam2, 70);
					}
					else
					{
						unk_0x3A12001DBF78DC62(iParam2);
					}
					unk_0xC30401186AC91B01();
					unk_0xE2B30EB9B14EEAB2();
				}
			}
			iVar1++;
		}
		if (Global_4265799.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0x76F4FB5EFF5BDED5(Global_17301.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x22DD5585E00B80C3(iVar1);
				unk_0x0ECBA72FAFCEBA59(&(Global_4265799.f_16));
				if (bParam5)
				{
					unk_0x1635DC214B2BB352(iParam2, 70);
				}
				else
				{
					unk_0x3A12001DBF78DC62(iParam2);
				}
				unk_0xC30401186AC91B01();
				unk_0xE2B30EB9B14EEAB2();
			}
		}
		unk_0x09EF2EB55114981C(76, 66);
		unk_0xBECA8293AEA680BD(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17301.f_7931)
			{
				unk_0x83B36F3602F99423(15, 0f, -0.0375f);
				Global_17301.f_7931 = 1;
			}
		}
		else if (Global_17301.f_7931)
		{
			unk_0xB9C0BA93B50CE575(15);
			Global_17301.f_7931 = 0;
		}
		unk_0x3E233EDF605C23C0();
		if (Global_17301.f_4925)
		{
			unk_0x09EF2EB55114981C(82, 66);
			unk_0xBECA8293AEA680BD(0f, 0f, 0f, 0f);
			unk_0xC1C40A3B8772D9BA(Global_17301.f_5530[iVar0 /*10*/], Global_17301.f_4923, Global_17301.f_4924, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x3E233EDF605C23C0();
		}
		else
		{
			unk_0x5E70D9959D6F2350(Global_17301.f_5530[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_89(var uParam0)
{
	unk_0x0ECBA72FAFCEBA59(uParam0);
	unk_0xC30401186AC91B01();
}

void func_90(var uParam0)
{
	unk_0xC34A54899652DAAF(uParam0);
}

int func_91()
{
	struct<3> Var0;
	
	if (Global_14453.f_1 > 3)
	{
		return 1;
	}
	if (func_92())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0xE0F240E99D061E79(&Var0);
		if (Global_14398 == 0)
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

int func_92()
{
	if (unk_0xE7FAF8E78F7D3A73(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_93(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	unk_0x954894782056D6CB(1, iParam2, iParam3, iParam4, iParam5);
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

void func_94(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x954894782056D6CB(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x03FBCA33C223558B(0);
	unk_0x61EA61920DAA51B8(0f, 0.35f);
	unk_0x758E707C181FC6C1(2);
	unk_0xE14EBFD640A207D8(iVar0, iVar1, iVar2, iVar3);
	unk_0x36D27769309D1050(fParam0, ((Global_17298 + Global_17300) - 0.0046875f));
	unk_0xD2E1707404EC2AFA(0);
	unk_0xFA8404C1F8556E42(0, 0, 0, 0, 0);
	unk_0xF1BEA13DBF04FF12(0, 0, 0, 0, 0);
}

void func_95(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0xD74B746610C55548(sParam2);
	unk_0x3A12001DBF78DC62(uParam3);
	unk_0x3A12001DBF78DC62(uParam4);
	unk_0x5D7608D88BED248F(fParam0, fParam1, 0);
}

float func_96(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0xE0C4A595CD61B7F2(sParam0))
	{
		if (unk_0x6E987D62C8535B6E(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_97();
	unk_0xA5738E964D2E2159(sParam0);
	unk_0x3A12001DBF78DC62(uParam1);
	unk_0x3A12001DBF78DC62(uParam2);
	return unk_0x1BD3A365A7E4BA14(1);
}

void func_97()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x954894782056D6CB(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17301.f_7906)
	{
		iVar0 = Global_17301.f_7902;
		iVar1 = Global_17301.f_7903;
		iVar2 = Global_17301.f_7904;
		iVar3 = Global_17301.f_7905;
	}
	unk_0x03FBCA33C223558B(0);
	unk_0x61EA61920DAA51B8(0f, 0.35f);
	unk_0xE14EBFD640A207D8(iVar0, iVar1, iVar2, iVar3);
	unk_0x36D27769309D1050((Global_17298 + 0.0046875f), ((Global_17298 + Global_17300) - 0.0046875f));
	unk_0xD2E1707404EC2AFA(0);
	unk_0xFA8404C1F8556E42(0, 0, 0, 0, 0);
	unk_0xF1BEA13DBF04FF12(0, 0, 0, 0, 0);
}

void func_98(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0x754933C14FFBA8EB((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_99(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;
	
	if (!unk_0xFAFFA408239A026B(&(Global_17301.f_6719[iParam0 /*16*/])))
	{
		if (unk_0x6E987D62C8535B6E(&(Global_17301.f_6719[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var19 = { func_101(unk_0x8CFC7D6E1DA5D304()) };
			if (unk_0xF9999DB826286D77(&Var19, &uVar3))
			{
				return func_100(&uVar3);
			}
		}
		else
		{
			return func_100(&(Global_17301.f_6719[iParam0 /*16*/]));
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

var func_100(var uParam0)
{
	return uParam0;
}

struct<13> func_101(var uParam0)
{
	struct<13> Var0;
	
	unk_0xAFA03929DD14DF46(uParam0, &Var0, 13);
	return Var0;
}

char* func_102(int iParam0)
{
	var uVar0;
	struct<13> Var16;
	
	if (!unk_0xFAFFA408239A026B(&(Global_17301.f_5886[iParam0 /*16*/])))
	{
		if (unk_0x6E987D62C8535B6E(&(Global_17301.f_5886[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var16 = { func_101(unk_0x8CFC7D6E1DA5D304()) };
			unk_0xF9999DB826286D77(&Var16, &uVar0);
			return func_100(&uVar0);
		}
		else
		{
			return func_100(&(Global_17301.f_5886[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

int func_103()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0xA320869CAE52B097(&iVar0, &iVar1);
	fVar2 = (unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_104(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	
	StringCopy(&cVar0, func_102(iParam0), 64);
	StringCopy(&cVar16, func_99(iParam0, bParam1), 64);
	if (unk_0x6E987D62C8535B6E(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			unk_0xA320869CAE52B097(&iVar32, &iVar33);
			fVar35 = unk_0x47DA03BCFF902E84(0);
			if (func_103())
			{
				iVar32 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar33) * fVar35));
			}
			fVar36 = (unk_0xBBDA792448DB5A89(iVar32) / unk_0xBBDA792448DB5A89(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_103())
			{
				fVar34 = 1f;
			}
			if (unk_0xE7FAF8E78F7D3A73(joaat("director_mode")) > 0)
			{
				unk_0x22D0D3B91B10E6E4(&iVar32, &iVar33);
			}
			iVar32 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar32) / fVar34));
			iVar33 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar33) / fVar34));
		}
		else
		{
			unk_0x22D0D3B91B10E6E4(&iVar32, &iVar33);
		}
		Var37 = { unk_0xC1E91F9C48368605(&cVar0, &cVar16) };
		Var37.f_0 = (Var37.f_0 * (func_105(iParam0) / fVar34));
		Var37.f_1 = (Var37.f_1 * (func_105(iParam0) / fVar34));
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
		if (iParam0 == 29 && unk_0x6E987D62C8535B6E(&(Global_17301.f_6719[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var37.f_0 = 106f;
			Var37.f_1 = 106f;
		}
		*fParam3 = ((Var37.f_0 / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((Var37.f_1 / IntToFloat(iVar33)) / (Var37.f_0 / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x33CE899911FC2AD8() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17300)
			{
				*fParam4 = (*fParam4 * (Global_17300 / *fParam3));
				*fParam3 = Global_17300;
			}
		}
		return 1;
	}
	return 0;
}

float func_105(int iParam0)
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

int func_106(bool bParam0, bool bParam1)
{
	if (Global_2436169.f_1777.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0xC8AB6A5E6C1E6613() || (func_108(8, -1) && func_107() != 64)) || (unk_0xAF5EF4AF56129D79() != 0 && !bParam1)) || (unk_0x51CFE20A158947F4() && !bParam0)) || unk_0x09BCD61076F4FCCE()) || Global_71112) || Global_17301.f_7930) || unk_0xF45F7A07410EF1F5()) || Global_92881.f_1377)
	{
		return 0;
	}
	return 1;
}

int func_107()
{
	return Global_1312789;
}

bool func_108(int iParam0, int iParam1)
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

void func_109(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_17301.f_5606 = iParam0;
	Global_17301.f_5741 = iParam2;
	if (Global_17301.f_5606 < Global_17301.f_5605)
	{
		Global_17301.f_5605 = Global_17301.f_5606;
	}
	else if ((Global_17301.f_5599 && Global_17301.f_5606 > Global_17301.f_5607) || (!Global_17301.f_5599 && Global_17301.f_5606 >= (Global_17301.f_5605 + Global_17301.f_5095)))
	{
		iVar0 = Global_17301.f_5605;
		while (iVar0 <= Global_17301.f_5606)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_17301.f_4959[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17301.f_5095 && Global_17301.f_5605 < 128)
		{
			Global_17301.f_5605++;
			iVar1 = 0;
			iVar0 = Global_17301.f_5605;
			while (iVar0 <= Global_17301.f_5606)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_17301.f_4959[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17301.f_5598 = 0;
	Global_17301.f_5599 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_17301.f_4562), "", 16);
		StringCopy(&(Global_4265799.f_21), "", 16);
	}
}

void func_110(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x53E8174ABB57602F(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x53E8174ABB57602F(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x53E8174ABB57602F(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x53E8174ABB57602F(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x9163677583862019(2, 218) * 127f));
			*uParam1 = unk_0xF34EE736CF047844((unk_0x9163677583862019(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x9163677583862019(2, 220) * 127f));
			*uParam3 = unk_0xF34EE736CF047844((unk_0x9163677583862019(2, 221) * 127f));
		}
	}
}

void func_111()
{
	func_122(0);
	func_121(1, 0, 0, 0, 0);
	func_120(1, 1, 1, 1, 1);
	if (Local_83.f_1 == 3)
	{
		func_119("SEA_MENU");
	}
	else
	{
		func_119("STREET_MENU");
	}
	func_115(0, "RACES_OPT_SP", 0, 1, 0, 0);
	func_115(1, "RACES_OPT_MP", 0, 1, 0, 0);
	func_114(201, "ITEM_SELECT", -1);
	func_114(202, "ITEM_EXIT", -1);
	func_113(11, "ITEM_SCROLL", -1);
	func_112(0);
	func_109(0, 1, 1);
	iLocal_97 = 0;
}

void func_112(int iParam0)
{
	Global_17301.f_5605 = iParam0;
}

void func_113(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0x33206AC5E51B4373(2, iParam0, 1);
	if (Global_17301.f_4639 >= 12)
	{
		StringCopy(&Global_4265799, sVar0, 64);
		StringCopy(&(Global_4265799.f_16), sParam1, 16);
		Global_4265799.f_20 = iParam2;
		return;
		return;
	}
	unk_0x62148293B793073B(&(Global_17301.f_4922), Global_17301.f_4639);
	StringCopy(&(Global_17301.f_4641[Global_17301.f_4639 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17301.f_4834[Global_17301.f_4639 /*4*/]), sParam1, 16);
	Global_17301.f_4883[Global_17301.f_4639] = iParam2;
	Global_17301.f_4896[Global_17301.f_4639] = 358;
	Global_17301.f_4909[Global_17301.f_4639] = iParam0;
	Global_17301.f_4639++;
}

void func_114(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0x305BC30EAC3E9BF4(2, iParam0, 1);
	if (Global_17301.f_4639 >= 12)
	{
		StringCopy(&Global_4265799, sVar0, 64);
		StringCopy(&(Global_4265799.f_16), sParam1, 16);
		Global_4265799.f_20 = iParam2;
		return;
		return;
	}
	unk_0x62148293B793073B(&(Global_17301.f_4922), Global_17301.f_4639);
	StringCopy(&(Global_17301.f_4641[Global_17301.f_4639 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17301.f_4834[Global_17301.f_4639 /*4*/]), sParam1, 16);
	Global_17301.f_4883[Global_17301.f_4639] = iParam2;
	Global_17301.f_4896[Global_17301.f_4639] = iParam0;
	Global_17301.f_4909[Global_17301.f_4639] = 32;
	Global_17301.f_4639++;
}

void func_115(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17301.f_5088 > iParam0)
	{
		return;
	}
	if (Global_17301.f_5088 >= 128)
	{
		return;
	}
	if (Global_17301.f_5090 >= 256)
	{
		return;
	}
	if (Global_17301.f_5610 < Global_17301.f_5608)
	{
		return;
	}
	if (Global_17301.f_5088 != iParam0)
	{
		Global_17301.f_5088 = iParam0;
		Global_17301.f_5089 = 0;
	}
	iVar0 = Global_17301.f_4926[Global_17301.f_5089];
	if (iVar0 != 1)
	{
		while (Global_17301.f_5089 < 4 && iVar0 != 1)
		{
			Global_17301.f_5089++;
			iVar0 = Global_17301.f_4926[Global_17301.f_5089];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_17301.f_73[Global_17301.f_5090 /*6*/]), sParam1, 24);
	if (!unk_0xFAFFA408239A026B(sParam1) && !unk_0xD76CFACBF6A6F21E(sParam1))
	{
	}
	Global_17301.f_1610[Global_17301.f_5090] = bParam3;
	Global_17301.f_1867[Global_17301.f_5090] = iParam4;
	Global_17301.f_5090++;
	if (!bParam3)
	{
		func_118(Global_17301.f_5088, 1);
	}
	else
	{
		func_118(Global_17301.f_5088, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_117(&(Global_17301.f_73[Global_17301.f_5090 /*6*/]));
		if (Global_17301.f_4945[Global_17301.f_5089])
		{
			func_104(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_17301.f_4938[Global_17301.f_5089])
		{
			Global_17301.f_4938[Global_17301.f_5089] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_116(&(Global_17301.f_73[Global_17301.f_5090 /*6*/]));
			if (fVar4 > Global_17301.f_5612[iParam0])
			{
				Global_17301.f_5612[iParam0] = fVar4;
			}
		}
	}
	unk_0xD2A9C3F486236CC5(&(Global_17301.f_4959[iParam0]), Global_17301.f_5089);
	Global_17301.f_5089++;
	Global_17301.f_5611 = 1;
	Global_17301.f_5609 = (Global_17301.f_5090 - 1);
	Global_17301.f_5610 = 0;
	Global_17301.f_5608 = iParam2;
}

float func_116(char* sParam0)
{
	if (!unk_0xD76CFACBF6A6F21E(sParam0))
	{
	}
	return unk_0x97BF326E4F5CD20E(0.35f, 0);
}

float func_117(char* sParam0)
{
	if (!unk_0xE0C4A595CD61B7F2(uParam0))
	{
		if (unk_0x6E987D62C8535B6E(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_86(0, 1, 0, 0, 0, 0, 0);
	unk_0xA5738E964D2E2159(sParam0);
	return unk_0x1BD3A365A7E4BA14(1);
}

void func_118(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 32f));
	if (bParam1)
	{
		unk_0xD2A9C3F486236CC5(&(Global_17301.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0x62148293B793073B(&(Global_17301.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_119(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_17301.f_1), sParam0, 16);
	Global_17301.f_68 = 0;
	Global_17301.f_69 = 0;
	Global_17301.f_70 = 0;
	Global_17301.f_71 = 0;
	Global_17301.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17301.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_120(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17301.f_4953[0] = iParam0;
	Global_17301.f_4953[1] = iParam1;
	Global_17301.f_4953[2] = iParam2;
	Global_17301.f_4953[3] = iParam3;
	Global_17301.f_4953[4] = iParam4;
}

void func_121(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17301.f_4926[0] = iParam0;
	Global_17301.f_4926[1] = iParam1;
	Global_17301.f_4926[2] = iParam2;
	Global_17301.f_4926[3] = iParam3;
	Global_17301.f_4926[4] = iParam4;
	Global_17301.f_5096 = 0;
	if (iParam0 != 0)
	{
		Global_17301.f_5096++;
	}
	if (iParam1 != 0)
	{
		Global_17301.f_5096++;
	}
	if (iParam2 != 0)
	{
		Global_17301.f_5096++;
	}
	if (iParam3 != 0)
	{
		Global_17301.f_5096++;
	}
	if (iParam4 != 0)
	{
		Global_17301.f_5096++;
	}
}

void func_122(bool bParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_17301.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_17301.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2457316[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_17301.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17301.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17301.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17301.f_4959[iVar0] = 0;
		Global_17301.f_5097[iVar0] = 0;
		Global_17301.f_5226[iVar0] = 0;
		Global_17301.f_5746[iVar0] = 0f;
		Global_17301.f_5355[iVar0] = 0;
		Global_17301.f_5612[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17301.f_4926[iVar0] = 0;
		Global_17301.f_4938[iVar0] = 0f;
		Global_17301.f_4932[iVar0] = -1f;
		Global_17301.f_4945[iVar0] = 0;
		Global_17301.f_4953[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17301.f_4834[iVar0 /*4*/]), "", 16);
		Global_17301.f_4883[iVar0] = -1;
		Global_17301.f_4896[iVar0] = 358;
		Global_17301.f_4909[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 52)
	{
		StringCopy(&(Global_17301.f_5886[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17301.f_6719[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	StringCopy(&(Global_4265799.f_16), "", 16);
	Global_4265799.f_20 = -1;
	Global_17301 = 0;
	Global_17301.f_5088 = 0;
	Global_17301.f_5089 = 0;
	Global_17301.f_5090 = 0;
	Global_17301.f_5092 = 0;
	Global_17301.f_5093 = 0;
	Global_17301.f_5094 = 0;
	Global_17301.f_5091 = 0;
	Global_17301.f_5741 = 0;
	Global_17301.f_5606 = 0;
	Global_17301.f_5605 = 0;
	Global_17301.f_5607 = 0;
	StringCopy(&(Global_17301.f_4562), "", 16);
	Global_17301.f_4632 = 0;
	Global_17301.f_4633 = 0;
	Global_17301.f_4634 = 0;
	Global_17301.f_4635 = 0;
	Global_17301.f_4636 = 0;
	Global_17301.f_4637 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17301.f_4566[iVar0] = 0;
		iVar0++;
	}
	Global_17301.f_4638 = 0;
	StringCopy(&(Global_4265799.f_21), "", 16);
	Global_4265799.f_61 = 0;
	Global_4265799.f_62 = 0;
	Global_4265799.f_63 = 0;
	Global_4265799.f_64 = 0;
	Global_4265799.f_65 = 0;
	Global_4265799.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4265799.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4265799.f_67 = 0;
	StringCopy(&(Global_17301.f_1), "", 16);
	Global_17301.f_4944 = 0f;
	Global_17301.f_68 = 0;
	Global_17301.f_69 = 0;
	Global_17301.f_70 = 0;
	Global_17301.f_71 = 0;
	Global_17301.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17301.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_17301.f_5611 = 0;
	Global_17301.f_5610 = 0;
	Global_17301.f_5608 = 0;
	Global_17301.f_5609 = 0;
	Global_17301.f_4639 = 0;
	Global_17301.f_4640 = 0;
	Global_17301.f_5095 = 10;
	Global_17301.f_5096 = 0;
	Global_17301.f_5743 = 0f;
	Global_17301.f_5744 = 0f;
	Global_17301.f_5598 = 0;
	Global_17301.f_5599 = 0;
	Global_17301.f_5600 = 0f;
	Global_17301.f_5601 = 0;
	Global_17301.f_5603 = 0;
	Global_17301.f_5602 = 0;
	Global_17301.f_5604 = 0;
	Global_17301.f_7927 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_17301.f_5875[iVar0] = -1;
		Global_17301.f_5878[iVar0] = -1;
		iVar0++;
	}
	Global_17301.f_4951 = 0f;
	Global_17301.f_4922 = 0;
	Global_17301.f_4952 = 0;
	iVar0 = 0;
	while (iVar0 < Global_17301.f_5881)
	{
		Global_17301.f_5881[iVar0] = 0;
		iVar0++;
	}
	Global_17301.f_7906 = 0;
	Global_17301.f_7901 = 0;
	Global_17301.f_7911 = 0;
	Global_17301.f_7916 = 0;
	Global_17301.f_7921 = 0;
	Global_17301.f_7923 = 0;
	Global_17301.f_7929 = 0;
	Global_17298 = 0.05f;
	Global_17299 = 0.05f;
	Global_17300 = 0.225f;
	fVar2 = unk_0x47DA03BCFF902E84(0);
	if (bParam0)
	{
		Global_17300 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_17300 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_17300 = 0.225f;
	}
}

bool func_123(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_64(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17301.f_5505[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xFAFFA408239A026B(&(Global_17301.f_5505[iVar0 /*4*/])))
	{
		unk_0x8E058779F430F4D7(&(Global_17301.f_5505[iVar0 /*4*/]), 9);
		Global_17301.f_5498[iVar0] = 1;
		if (!unk_0x04BF76BDE53874AF(&(Global_17301.f_5505[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0x1E7BE791ACBDDC05("CommonMenu", false);
	Global_17301.f_5484[iVar0] = 1;
	if (!unk_0x1865CC0DAB5F6A86("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0x1E7BE791ACBDDC05("MPShopSale", false);
		Global_17301.f_5491[iVar0] = 1;
		if (!unk_0x1865CC0DAB5F6A86("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_17301.f_5530[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_124(&(Global_17301.f_5530[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_124(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x5C716BBF766E1C70(*uParam0))
			{
				*uParam0 = unk_0xBD7D7877C82BE42F(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x5C716BBF766E1C70(*uParam0))
					{
						uParam0->f_8 = unk_0x5AFB8ED811F05E4D();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x5AFB8ED811F05E4D();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x5C716BBF766E1C70(*uParam0))
			{
				uParam0->f_8 = unk_0x5AFB8ED811F05E4D();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x5C716BBF766E1C70(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_125()
{
	int iVar0;
	
	if (func_155())
	{
		if (func_138())
		{
			iVar0 = 6;
			if (Local_83.f_1 == 1)
			{
				iVar0 = 4;
			}
			func_136(iVar0);
			if (func_60(uLocal_103[iVar0]))
			{
				if (bLocal_102)
				{
					if (unk_0xDFEB6D8BCE2B43F6(uLocal_103[iVar0], cLocal_184, sLocal_185[iVar0], 3))
					{
						unk_0xD68991AB42CA7042(uLocal_103[iVar0], cLocal_184, sLocal_185[iVar0], -1056964608);
					}
					func_127(iVar0);
				}
			}
			unk_0xFCBDBEB257C6D3FB(0, 51);
			if (unk_0x3469AD51EA8B9583(0, 51))
			{
				iLocal_194 = 1;
				unk_0xEFF1F12403847394(1);
				iLocal_82 = 3;
			}
		}
		else if (!iLocal_93)
		{
			unk_0xBC3C2A3068412290(0);
			iLocal_93 = 1;
		}
	}
	else
	{
		func_126();
		if (!iLocal_93)
		{
			unk_0xBC3C2A3068412290(0);
			iLocal_93 = 1;
		}
	}
}

void func_126()
{
	if (iLocal_92 && unk_0x5AFB8ED811F05E4D() > iLocal_95)
	{
		unk_0xEFF1F12403847394(1);
		iLocal_92 = 0;
	}
}

void func_127(int iParam0)
{
	var uVar0;
	
	if (!unk_0x74C2FE037DFC8B4A(uLocal_103[iParam0], 0) && !unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		switch (iLocal_195)
		{
			case 0:
				if (unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(uLocal_103[iParam0], 1), unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1)) < 64f)
				{
					iLocal_196 = 0;
					iLocal_197 = 0;
					iLocal_195 = 1;
				}
				break;
			
			case 1:
				unk_0xC8BEB049F3BFC0AB(&uVar0);
				unk_0x6016A20BFEAEFE11(0, unk_0x18F7BE9ACB7D08F4(), -1, 0, 2);
				unk_0x8F467CFC5FBBCE77(0, unk_0x18F7BE9ACB7D08F4(), 0);
				unk_0xAFDA7B8F83B2CA58(uVar0);
				unk_0x73F69DD57B7E92A9(uLocal_103[iParam0], uVar0);
				unk_0x56C7B20E11B37066(&uVar0);
				iLocal_195 = 2;
				break;
			
			case 2:
				if (unk_0x2BBAA45ECDE3DAE2(uLocal_103[iParam0], 242628503) != 1 || unk_0x3821A75ECC8A0D5B(uLocal_103[iParam0], unk_0x18F7BE9ACB7D08F4(), 20f))
				{
					unk_0x8F467CFC5FBBCE77(uLocal_103[iParam0], unk_0x18F7BE9ACB7D08F4(), -1);
					if (!iLocal_197)
					{
						func_134(uLocal_103[iParam0], "PRERACE_CHAT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					else
					{
						func_134(uLocal_103[iParam0], "PRERACE_TAUNT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					iLocal_195 = 3;
				}
				break;
			
			case 3:
				if (!unk_0x5C96F75B17C7C048(uLocal_103[iParam0]))
				{
					func_132(&uLocal_198);
					unk_0xB5746603774C4C9D(uLocal_103[iParam0], "random@street_race", "_streetracer_wait_loop", 4f, -4f, -1, 9, 0, 0, 0, 0);
					iLocal_195 = 4;
				}
				break;
			
			case 4:
				if (unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(uLocal_103[iParam0], 1), unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1)) > 225f)
				{
					iLocal_195 = 0;
				}
				if (func_128(&uLocal_198) >= 5f && !iLocal_196)
				{
					iLocal_196 = 1;
					iLocal_195 = 1;
				}
				else if (func_128(&uLocal_198) >= 10f && !iLocal_197)
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

float func_128(var uParam0)
{
	if (func_131(uParam0))
	{
		if (func_130(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_129(unk_0xB03A1684359C50A1(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_129(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x5AFB8ED811F05E4D());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x44243F2E2F58B8E3())
	{
		iVar2 = unk_0xE92FCF3C05C2EF1D();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x5AFB8ED811F05E4D()) / 1000f);
}

bool func_130(var uParam0)
{
	return unk_0xB03A1684359C50A1(*uParam0, 2);
}

bool func_131(var uParam0)
{
	return unk_0xB03A1684359C50A1(*uParam0, 1);
}

void func_132(var uParam0)
{
	func_133(uParam0, 0f);
}

void func_133(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_129(unk_0xB03A1684359C50A1(*uParam0, 4)) - fParam1);
	unk_0xD2A9C3F486236CC5(uParam0, 1);
	unk_0x62148293B793073B(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_134(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x40033E3EAE3C63BB(uParam0, sParam1, sParam2, func_135(iParam3), 0);
}

int func_135(int iParam0)
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

void func_136(int iParam0)
{
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()) && !func_137())
	{
		if (func_60(uLocal_103[iParam0]))
		{
			if (iLocal_93 && unk_0x2A72627520A107B5(unk_0x18F7BE9ACB7D08F4()) < 20f)
			{
				unk_0x211B8384E5838644(uLocal_103[iParam0], 0f, 0f, 0f, 1, 2000, 2000, 2000, 0);
				iLocal_93 = 0;
			}
		}
	}
}

int func_137()
{
	if (unk_0xC345D9AB8BB3AB24(unk_0xEBE31BF57A0E4641()) == 4)
	{
		return 1;
	}
	return 0;
}

int func_138()
{
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		if (func_154())
		{
			return 0;
		}
		if (func_153(func_49()) < Local_83.f_3)
		{
			if (Local_83.f_1 == 3)
			{
				func_150("SEA_NA_CASH", Local_83.f_3);
			}
			else
			{
				func_150("STREET_NA_CASH", Local_83.f_3);
			}
			iLocal_92 = 1;
			iLocal_95 = unk_0x5AFB8ED811F05E4D() + 1000;
			return 0;
		}
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			func_149(&iLocal_0);
			iLocal_0 = unk_0x0B495402BD092DEB(unk_0x18F7BE9ACB7D08F4());
			if (!func_144())
			{
				iLocal_92 = 1;
				iLocal_95 = unk_0x5AFB8ED811F05E4D() + 1000;
				return 0;
			}
			else if ((unk_0x0A088F357EF627CA(iLocal_0) <= 200 || unk_0x25A40FAC128F45B0(iLocal_0)) || func_143())
			{
				func_142("RACE_VehDmg");
				iLocal_92 = 1;
				iLocal_95 = unk_0x5AFB8ED811F05E4D() + 1000;
				return 0;
			}
			else if (unk_0x4983F8C51A0C0AF3(iLocal_0, -1, 0) != unk_0x18F7BE9ACB7D08F4())
			{
				func_139();
				return 0;
			}
			else
			{
				if (func_80(0) || unk_0xE7FAF8E78F7D3A73(joaat("appinternet")) > 0)
				{
					func_126();
					return 0;
				}
				switch (Local_83.f_1)
				{
					case 1:
						func_150("STREET_PLAY_B", Local_83.f_3);
						break;
					
					case 2:
						func_150("STREET_PLAY_C", Local_83.f_3);
						break;
					
					case 3:
						func_142("SEA_PLAY");
						break;
				}
				iLocal_92 = 1;
				iLocal_95 = unk_0x5AFB8ED811F05E4D();
				return 1;
			}
		}
		else
		{
			func_149(&iLocal_0);
			func_139();
			return 0;
		}
	}
	return 0;
}

void func_139()
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
		if (!func_141(sVar0))
		{
			func_140(sVar0);
			iLocal_92 = 1;
			iLocal_95 = unk_0x5AFB8ED811F05E4D() + 1000;
		}
	}
	else if (Local_83.f_1 == 1)
	{
		if (!func_141("STREET_NA_BIKE"))
		{
			func_140("STREET_NA_BIKE");
			iLocal_92 = 1;
			iLocal_95 = unk_0x5AFB8ED811F05E4D() + 1000;
		}
	}
	else if (!func_141("STREET_NA_CAR"))
	{
		func_140("STREET_NA_CAR");
		iLocal_92 = 1;
		iLocal_95 = unk_0x5AFB8ED811F05E4D() + 1000;
	}
}

void func_140(char* sParam0)
{
	unk_0x2202872EA73499C3(sParam0);
	unk_0xF764171B43EBA5E4(0, 1, 1, -1);
}

bool func_141(char* sParam0)
{
	unk_0x24BB6189982CE7D6(sParam0);
	return unk_0xF2850FB50EE28440(0);
}

void func_142(char* sParam0)
{
	if (!func_141(sParam0))
	{
		func_140(sParam0);
	}
}

int func_143()
{
	int iVar0;
	
	iVar0 = unk_0x4F69FBD64CDF125B(iLocal_0);
	if (unk_0x422717A3330EA45D(iVar0))
	{
		if (unk_0x9308517E4356A987(iLocal_0, 6, 0) || unk_0x9308517E4356A987(iLocal_0, 7, 0))
		{
			return 1;
		}
	}
	else if (unk_0x881022B41FD53CD6(iVar0))
	{
		if (((unk_0x9308517E4356A987(iLocal_0, 0, 0) || unk_0x9308517E4356A987(iLocal_0, 1, 0)) || unk_0x9308517E4356A987(iLocal_0, 4, 0)) || unk_0x9308517E4356A987(iLocal_0, 5, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_144()
{
	int iVar0;
	char* sVar1;
	
	switch (Local_83.f_1)
	{
		case 1:
			iVar0 = func_148();
			if (iVar0 == 1)
			{
				func_142("STREET_NA_COP");
				return 0;
			}
			else if (iVar0 == 2)
			{
				func_142("STREET_NA_BIKE");
				return 0;
			}
			break;
		
		case 2:
			iVar0 = func_146();
			if (iVar0 == 1)
			{
				func_142("STREET_NA_COP");
				return 0;
			}
			else if (iVar0 == 2)
			{
				func_142("STREET_NA_CAR");
				return 0;
			}
			break;
		
		case 3:
			if (!func_145())
			{
				if (func_14(iLocal_111))
				{
					sVar1 = "SEA_NA_VEH";
				}
				else
				{
					sVar1 = "SEA_NA_VEH2";
				}
				func_142(sVar1);
				return 0;
			}
			break;
	}
	return 1;
}

int func_145()
{
	int iVar0;
	
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		if (unk_0x31F12808DC47A9E5(iLocal_0))
		{
			iVar0 = unk_0x4F69FBD64CDF125B(iLocal_0);
			if (iVar0 == joaat("seashark") || iVar0 == joaat("seashark2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_146()
{
	int iVar0;
	int iVar1;
	int iVar2[83];
	
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		if (unk_0x31F12808DC47A9E5(iLocal_0))
		{
			iVar0 = unk_0x4F69FBD64CDF125B(iLocal_0);
			if (func_147(iVar0))
			{
				return 1;
			}
			if ((((((((((iVar0 == joaat("police4") || iVar0 == joaat("policeold1")) || iVar0 == joaat("policeold2")) || iVar0 == joaat("fbi")) || iVar0 == joaat("fbi2")) || iVar0 == joaat("lguard")) || iVar0 == joaat("sheriff")) || iVar0 == joaat("sheriff2")) || iVar0 == joaat("pranger")) || iVar0 == joaat("ambulance")) || iVar0 == joaat("firetruk"))
			{
				return 1;
			}
			if (((unk_0x422717A3330EA45D(iVar0) || unk_0x9605D2F02FA93911(iVar0)) || unk_0xB6353CAE3EBC0919(iVar0)) || unk_0xD8BB60C76D29E4BB(iVar0))
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

int func_147(int iParam0)
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

int func_148()
{
	int iVar0;
	
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		if (unk_0x31F12808DC47A9E5(iLocal_0))
		{
			iVar0 = unk_0x4F69FBD64CDF125B(iLocal_0);
			if (iVar0 == joaat("policeb"))
			{
				return 1;
			}
			if (unk_0x422717A3330EA45D(iVar0) && !unk_0x93CA7A248A4D402A(iVar0))
			{
				return 0;
			}
		}
	}
	return 2;
}

void func_149(int iParam0)
{
	if (unk_0x31F12808DC47A9E5(*iParam0))
	{
		unk_0x74C2FE037DFC8B4A(*iParam0, 0);
		if (unk_0x90D1FDC9D31B7BE1(*iParam0) && unk_0xE54DCC6B21FDC95A(*iParam0, 1))
		{
			unk_0x4F5FF3F3FDCAB15D(iParam0);
		}
	}
}

void func_150(char* sParam0, var uParam1)
{
	if (!func_152(sParam0, uParam1))
	{
		func_151(sParam0, uParam1);
	}
}

void func_151(char* sParam0, int iParam1)
{
	unk_0x2202872EA73499C3(uParam0);
	unk_0x3A12001DBF78DC62(uParam1);
	unk_0xF764171B43EBA5E4(0, 1, 1, -1);
}

bool func_152(char* sParam0, int iParam1)
{
	unk_0x24BB6189982CE7D6(uParam0);
	unk_0x3A12001DBF78DC62(uParam1);
	return unk_0xF2850FB50EE28440(0);
}

int func_153(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0xD194C635833AC189(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0xD194C635833AC189(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0xD194C635833AC189(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_154()
{
	int iVar0;
	
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			iVar0 = unk_0x0B495402BD092DEB(unk_0x18F7BE9ACB7D08F4());
			if (func_15(iVar0))
			{
				if (unk_0x2409C4B1759B2661(iVar0))
				{
					if (Local_83.f_1 == 3 && unk_0xE1F715CDDC50FD7F(iVar0))
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

int func_155()
{
	int iVar0;
	
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		iVar0 = 20;
		if (Local_83.f_1 == 3)
		{
			iVar0 = 40;
		}
		if (unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), Local_89, 1) < IntToFloat(iVar0) && unk_0x338C4427806FEB6D(unk_0x18F7BE9ACB7D08F4()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_156()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_161(&uLocal_216))
	{
		if (Local_83.f_1 == 2)
		{
			if (func_158())
			{
				if (!unk_0x31F12808DC47A9E5(iLocal_111))
				{
					if (unk_0xEDFE27D1AEA0EA7F(iLocal_182) && unk_0xEDFE27D1AEA0EA7F(iLocal_182))
					{
						iLocal_111 = unk_0x3064CCF56C6C32BC(iLocal_182, Local_113, fLocal_116, 1, 1, 0);
						if (unk_0x05324A2652D822EC(1) && unk_0xA6B3A90CF632FBBD())
						{
							iLocal_112 = unk_0xD3597BA57609B2F7(iLocal_111, 1);
							unk_0x3A40A65D5EFEA1B4(iLocal_112, iLocal_111, 1, 99999999);
							unk_0x40E2910BAF39B1C7(iLocal_112, 1);
							unk_0x10F31830C95ED2E5(iLocal_112, 1);
						}
						unk_0x9B53B2691E2B1F79(iLocal_111, 1084227584);
						unk_0x0F3F86C855582784(iLocal_111, 1, 1, 0);
						unk_0xA0611ED281CB47AA(iLocal_111, 1);
						unk_0x45DD2A11584F4EC4(iLocal_111, 1);
						unk_0xDFF6E88FD5145E7B(unk_0xCE57E1A0D0E093AA(10), 1);
						unk_0x0C479E1994DA8B57(iLocal_111, unk_0xCE57E1A0D0E093AA(10));
						unk_0x20DA875A55437C52(iLocal_111, 0);
						unk_0x419C9117019F2E5A(iLocal_182);
						unk_0x4EDE34FBADD967A6(0);
					}
				}
				if (!unk_0x31F12808DC47A9E5(iLocal_117))
				{
					if (unk_0xEDFE27D1AEA0EA7F(iLocal_183))
					{
						iLocal_117 = unk_0x3064CCF56C6C32BC(iLocal_183, Local_118, fLocal_121, 1, 1, 0);
						unk_0x0F3F86C855582784(iLocal_117, 0, 1, 0);
						unk_0xA0611ED281CB47AA(iLocal_117, 1);
						unk_0x45DD2A11584F4EC4(iLocal_117, 1);
						unk_0x9B53B2691E2B1F79(iLocal_117, 1084227584);
						unk_0xDFF6E88FD5145E7B(unk_0xCE57E1A0D0E093AA(10), 1);
						unk_0x0C479E1994DA8B57(iLocal_117, unk_0xCE57E1A0D0E093AA(10));
						unk_0x20DA875A55437C52(iLocal_117, 0);
						unk_0x419C9117019F2E5A(iLocal_183);
						unk_0x4EDE34FBADD967A6(0);
					}
				}
				if (unk_0x028356968FDD2DF2(cLocal_184))
				{
					if (iLocal_193)
					{
						iVar0 = 0;
						while (iVar0 <= (iLocal_174 - 1))
						{
							if (unk_0x31F12808DC47A9E5(uLocal_103[iVar0]))
							{
								if (!unk_0x74C2FE037DFC8B4A(uLocal_103[iVar0], 0) && !func_157(uLocal_103[iVar0], -2017877118))
								{
									unk_0xB5746603774C4C9D(uLocal_103[iVar0], cLocal_184, sLocal_185[iVar0], 1000f, -1000f, -1, 1, 0, 0, 0, 0);
									unk_0x10F31830C95ED2E5(uLocal_103[iVar0], 1);
								}
							}
							else if (unk_0xEDFE27D1AEA0EA7F(iLocal_174[iVar0]))
							{
								uLocal_103[iVar0] = unk_0x364B87C5C64BD100(25, iLocal_174[iVar0], Local_136[iVar0 /*3*/], fLocal_158[iVar0], 1, 1);
								unk_0x3FF1EE7D5FD7094C(uLocal_103[iVar0], Local_136[iVar0 /*3*/], 0, 0, 1);
								unk_0x40E2910BAF39B1C7(uLocal_103[iVar0], 1);
								unk_0xB5746603774C4C9D(uLocal_103[iVar0], cLocal_184, sLocal_185[iVar0], 1000f, -1000f, -1, 1, 0, 0, 0, 0);
								unk_0x10F31830C95ED2E5(uLocal_103[iVar0], 1);
							}
							iVar0++;
						}
						if ((((((((func_60(uLocal_103[0]) && func_60(uLocal_103[1])) && func_60(uLocal_103[2])) && func_60(uLocal_103[3])) && func_60(uLocal_103[4])) && func_60(uLocal_103[5])) && func_60(uLocal_103[6])) && func_14(iLocal_111)) && func_14(iLocal_117))
						{
							bLocal_102 = true;
							iVar0 = 0;
							while (iVar0 <= (iLocal_174 - 1))
							{
								unk_0x419C9117019F2E5A(iLocal_174[iVar0]);
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
			if (func_158())
			{
				if (!unk_0x31F12808DC47A9E5(iLocal_111))
				{
					if (unk_0xEDFE27D1AEA0EA7F(iLocal_182))
					{
						iLocal_111 = unk_0x3064CCF56C6C32BC(iLocal_182, Local_113, fLocal_116, 1, 1, 0);
						if (unk_0x05324A2652D822EC(0) && unk_0xC181417B80CDE7F3())
						{
							iLocal_112 = unk_0xD3597BA57609B2F7(iLocal_111, 1);
							unk_0x3A40A65D5EFEA1B4(iLocal_112, iLocal_111, 1, 99999999);
							unk_0x40E2910BAF39B1C7(iLocal_112, 1);
							unk_0x10F31830C95ED2E5(iLocal_112, 1);
						}
						unk_0x0F3F86C855582784(iLocal_111, 1, 1, 0);
						unk_0xA0611ED281CB47AA(iLocal_111, 1);
						unk_0x45DD2A11584F4EC4(iLocal_111, 1);
						unk_0xDFF6E88FD5145E7B(unk_0xCE57E1A0D0E093AA(10), 1);
						unk_0x0C479E1994DA8B57(iLocal_111, unk_0xCE57E1A0D0E093AA(10));
						unk_0x20DA875A55437C52(iLocal_111, 0);
						unk_0x419C9117019F2E5A(iLocal_182);
					}
				}
				if (unk_0x028356968FDD2DF2(cLocal_184))
				{
					if (iLocal_193)
					{
						iVar1 = 0;
						while (iVar1 <= (iLocal_174 - 3))
						{
							if (unk_0x31F12808DC47A9E5(uLocal_103[iVar1]))
							{
								if (!unk_0x74C2FE037DFC8B4A(uLocal_103[iVar1], 0) && !func_157(uLocal_103[iVar1], -2017877118))
								{
									unk_0x3FF1EE7D5FD7094C(uLocal_103[iVar1], Local_136[iVar1 /*3*/], 0, 0, 1);
									if (iVar1 != 2 && iVar1 != 3)
									{
										unk_0xB5746603774C4C9D(uLocal_103[iVar1], cLocal_184, sLocal_185[iVar1], 1000f, -1000f, -1, 1, 0, 0, 0, 0);
									}
									else
									{
										unk_0xB5746603774C4C9D(uLocal_103[iVar1], cLocal_184, sLocal_185[iVar1], 1000f, -1000f, -1, 1, 0.5f, 0, 0, 0);
									}
									unk_0x10F31830C95ED2E5(uLocal_103[iVar1], 1);
								}
							}
							else if (unk_0xEDFE27D1AEA0EA7F(iLocal_174[iVar1]))
							{
								uLocal_103[iVar1] = unk_0x364B87C5C64BD100(25, iLocal_174[iVar1], Local_136[iVar1 /*3*/], fLocal_158[iVar1], 1, 1);
								unk_0x40E2910BAF39B1C7(uLocal_103[iVar1], 1);
							}
							iVar1++;
						}
						if ((((func_60(uLocal_103[0]) && func_60(uLocal_103[1])) && func_60(uLocal_103[2])) && func_60(uLocal_103[3])) && func_60(uLocal_103[4]))
						{
							unk_0x6016A20BFEAEFE11(uLocal_103[4], unk_0x18F7BE9ACB7D08F4(), -1, 2048, 4);
							iVar1 = 0;
							while (iVar1 <= (iLocal_174 - 1))
							{
								unk_0x419C9117019F2E5A(iLocal_174[iVar1]);
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
			if (func_158())
			{
				if (!unk_0x31F12808DC47A9E5(iLocal_111))
				{
					if (unk_0xEDFE27D1AEA0EA7F(iLocal_182))
					{
						iLocal_111 = unk_0x3064CCF56C6C32BC(iLocal_182, Local_113, fLocal_116, 1, 1, 0);
						unk_0x9B53B2691E2B1F79(iLocal_111, 1084227584);
						unk_0x82FF658846AADA0A(iLocal_111, 0f);
						unk_0xE75B9BFABE5CEEE9(iLocal_111, 0);
						unk_0x4632C730B6B67C06(iLocal_111, 0);
						if (unk_0xAFD55F40B4655583(iLocal_111))
						{
							unk_0x2596D3899EEA8EF4(iLocal_111, 1);
						}
						unk_0x0F3F86C855582784(iLocal_111, 0, 1, 0);
					}
				}
				iVar2 = 0;
				iVar2 = 0;
				while (iVar2 < 3)
				{
					if (unk_0x31F12808DC47A9E5(iLocal_166[iVar2]))
					{
						if (unk_0x31F12808DC47A9E5(iLocal_170[iVar2]))
						{
							if (!unk_0x0FAE113CE72ED842(iLocal_170[iVar2]) && func_14(iLocal_166[iVar2]))
							{
								if (unk_0x74B8CA477787A438(iLocal_166[iVar2], -1, 0))
								{
									unk_0x8D77EFA08616AD64(iLocal_170[iVar2], iLocal_166[iVar2], -1);
								}
							}
						}
						else if (func_14(iLocal_166[iVar2]) && unk_0xEDFE27D1AEA0EA7F(joaat("a_m_y_jetski_01")))
						{
							iLocal_170[iVar2] = unk_0xC52E83A4C0F88DAB(iLocal_166[iVar2], 25, joaat("a_m_y_jetski_01"), -1, 1, 1);
							unk_0xAE24027C5F456397(iLocal_170[iVar2], 0);
							unk_0x40E2910BAF39B1C7(iLocal_170[iVar2], 1);
						}
					}
					else if (unk_0xEDFE27D1AEA0EA7F(iLocal_182))
					{
						iLocal_166[iVar2] = unk_0x3064CCF56C6C32BC(iLocal_182, Local_122[iVar2 /*3*/], fLocal_132[iVar2], 1, 1, 0);
						unk_0x9B53B2691E2B1F79(iLocal_166[iVar2], 1084227584);
						unk_0x82FF658846AADA0A(iLocal_166[iVar2], 0f);
						unk_0xE75B9BFABE5CEEE9(iLocal_166[iVar2], 1);
						unk_0x4632C730B6B67C06(iLocal_166[iVar2], 1);
						if (unk_0xAFD55F40B4655583(iLocal_166[iVar2]))
						{
							unk_0x2596D3899EEA8EF4(iLocal_166[iVar2], 1);
						}
						unk_0x0F3F86C855582784(iLocal_166[iVar2], 0, 1, 0);
					}
					iVar2++;
				}
				if (((unk_0x31F12808DC47A9E5(iLocal_111) && unk_0x31F12808DC47A9E5(iLocal_166[0])) && unk_0x31F12808DC47A9E5(iLocal_166[1])) && unk_0x31F12808DC47A9E5(iLocal_166[2]))
				{
					unk_0x419C9117019F2E5A(iLocal_182);
				}
				if ((unk_0x31F12808DC47A9E5(iLocal_170[0]) && unk_0x31F12808DC47A9E5(iLocal_170[1])) && unk_0x31F12808DC47A9E5(iLocal_170[2]))
				{
					unk_0x419C9117019F2E5A(joaat("a_m_y_jetski_01"));
				}
				unk_0x764AFC5A3A16C2B0(unk_0x18F7BE9ACB7D08F4(), 170, 1);
			}
		}
	}
}

int func_157(int iParam0, int iParam1)
{
	if (func_60(iParam0))
	{
		if (unk_0x2BBAA45ECDE3DAE2(iParam0, iParam1) == 1 || unk_0x2BBAA45ECDE3DAE2(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_158()
{
	if (!func_160())
	{
		return 0;
	}
	if (func_60(unk_0x18F7BE9ACB7D08F4()))
	{
		if (!func_159(unk_0x18F7BE9ACB7D08F4(), Local_113, 100f) || unk_0xEC0ECEF2AF3FDA8D())
		{
			return 1;
		}
	}
	return 0;
}

bool func_159(int iParam0, struct<3> Param1, float fParam4)
{
	return unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(iParam0, 1), Param1) <= (fParam4 * fParam4);
}

int func_160()
{
	if (Local_83.f_1 == 3)
	{
		return 1;
	}
	else if (Local_83.f_1 == 1 || Local_83.f_1 == 2)
	{
		if (unk_0xF0B96EE16BA9FBE8() >= 20 || unk_0xF0B96EE16BA9FBE8() < 5)
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

int func_161(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_145)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xB03A1684359C50A1((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0xB03A1684359C50A1((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_162(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return 1;
}

bool func_162(var uParam0)
{
	return func_163(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_163(var uParam0, char[4] cParam1, int iParam2)
{
	if (unk_0xB03A1684359C50A1(uParam0, 30))
	{
		if (unk_0xB03A1684359C50A1(uParam0, 29))
		{
			switch (func_164(uParam0))
			{
				case 0:
					return unk_0xEDFE27D1AEA0EA7F(uParam2);
					break;
				
				case 1:
					return unk_0x028356968FDD2DF2(uParam1);
					break;
				
				case 2:
					return unk_0x302010EE1D40EBC3(cParam1);
					break;
				
				case 3:
					return unk_0x1865CC0DAB5F6A86(cParam1);
					break;
				
				case 4:
					return unk_0x53500A7D168BF5F6(iParam2, cParam1);
					break;
				
				case 5:
					return unk_0x9BE1DFFE71D3D3DA(cParam1);
					break;
				
				case 6:
					return unk_0xFF22FE9205F44FB6(cParam1, unk_0xB03A1684359C50A1(uParam0, 27), -1);
					break;
				
				case 7:
					return unk_0x943750A69922D35E(iParam2);
					break;
				
				case 8:
					return unk_0x9F22E45F3CF7EACA(iParam2);
					break;
				
				case 9:
					return unk_0x8851E7053F291F92();
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

int func_164(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xB03A1684359C50A1(uParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_165(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_145)
	{
		if ((unk_0x756DE011CEDBBD7E() >= (uParam0->f_146 + uParam0->f_147) || unk_0xB03A1684359C50A1(Global_92829.f_20, 2)) || unk_0xB03A1684359C50A1(Global_92829.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (unk_0xB03A1684359C50A1((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0xB03A1684359C50A1((*uParam0)[iVar0 /*18*/], 29))
					{
						func_166(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = unk_0x756DE011CEDBBD7E();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_166(var uParam0)
{
	func_167(uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_167(var uParam0, char* sParam1, int iParam2)
{
	if (unk_0xB03A1684359C50A1(*uParam0, 30))
	{
		switch (func_164(*uParam0))
		{
			case 0:
				unk_0x9016574B77A748EE(uParam2);
				break;
			
			case 1:
				unk_0x831CD0FBFB26EC7E(uParam1);
				break;
			
			case 2:
				unk_0x385AB5B1656B03B3(uParam1);
				break;
			
			case 3:
				unk_0x1E7BE791ACBDDC05(uParam1, unk_0xB03A1684359C50A1(*uParam0, 28));
				break;
			
			case 4:
				unk_0xAE5F484E08487A0F(uParam2, sParam1);
				break;
			
			case 5:
				unk_0x556D5BBBB0AC3BCB(sParam1);
				break;
			
			case 6:
				unk_0xFF22FE9205F44FB6(sParam1, unk_0xB03A1684359C50A1(*uParam0, 27), -1);
				break;
			
			case 7:
				unk_0xEB608F49F9230874(uParam2);
				break;
			
			case 8:
				unk_0x8E058779F430F4D7(sParam1, uParam2);
				break;
			
			case 9:
				unk_0xF43D99776B580DA7();
				break;
			
			default:
				break;
		}
		unk_0xD2A9C3F486236CC5(uParam0, 29);
	}
}

void func_168()
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
		func_173(Local_83.f_0, &Local_207, &Local_210, &fLocal_213);
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
			func_172(&uLocal_216, iLocal_183);
		}
		iLocal_182 = func_171(Local_83.f_1);
		iVar0 = 0;
		while (iVar0 <= (iLocal_174 - 1))
		{
			func_172(&uLocal_216, iLocal_174[iVar0]);
			iVar0++;
		}
		func_172(&uLocal_216, iLocal_182);
		func_169(&uLocal_216, cLocal_184);
		unk_0xCC2F97DB4D4340C4(Local_201, Local_204, 0, 0);
		unk_0xEDE582F2B0825317(Local_207, Local_210, fLocal_213, 0, 0, 1);
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
		func_172(&uLocal_216, iLocal_182);
		func_172(&uLocal_216, joaat("a_m_y_jetski_01"));
	}
}

void func_169(var uParam0, char* sParam1)
{
	func_170(uParam0, 1, -1, sParam1, 0);
}

void func_170(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xB03A1684359C50A1((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0xB03A1684359C50A1((*uParam0)[iVar0 /*18*/], iParam1))
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
					if (!unk_0x9D39145AD645E383(sParam3, "NULL"))
					{
						if (unk_0x9D39145AD645E383(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
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
		if (!unk_0xB03A1684359C50A1((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0xD2A9C3F486236CC5(uParam0[iVar0 /*18*/], iParam1);
			unk_0xD2A9C3F486236CC5(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_171(int iParam0)
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

void func_172(var uParam0, int iParam1)
{
	func_170(uParam0, 0, iParam1, "NULL", 0);
}

void func_173(int iParam0, var uParam1, var uParam2, float fParam3)
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

int func_174()
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	
	if (func_59(9))
	{
		return 0;
	}
	if (func_44(6) || func_44(7))
	{
		return 0;
	}
	if (Global_55895)
	{
		return 0;
	}
	if (func_197())
	{
		return 0;
	}
	if (Local_83.f_1 != 3 && func_49() != 1)
	{
		return 0;
	}
	if (unk_0x0F0887D98558C496())
	{
		return 0;
	}
	if (func_60(unk_0x18F7BE9ACB7D08F4()) && unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		uVar0 = unk_0x952F33F151D40D1A();
		if (((func_14(uVar0) && unk_0x160400EAEE246B4D(unk_0x18F7BE9ACB7D08F4(), uVar0)) && !func_196(unk_0x18F7BE9ACB7D08F4(), uVar0, -1)) && unk_0x4F69FBD64CDF125B(uVar0) != joaat("taxi"))
		{
			return 0;
		}
	}
	switch (Local_83.f_0)
	{
		case 0:
			if (Global_104525[0])
			{
				return 0;
			}
			break;
		
		case 1:
			if (Global_104525[1])
			{
				return 0;
			}
			break;
		
		case 2:
			if (Global_104525[2])
			{
				return 0;
			}
			break;
		
		case 3:
			if (Global_104525[3])
			{
				return 0;
			}
			break;
		
		case 4:
			if (Global_104525[4])
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_104515[0])
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_104515[1])
			{
				return 0;
			}
			break;
		
		case 7:
			if (Global_104515[2])
			{
				return 0;
			}
			break;
		
		case 8:
			if (Global_104515[3])
			{
				return 0;
			}
			break;
	}
	if (!func_160())
	{
		iVar1 = 0;
		while (iVar1 <= (iLocal_174 - 1))
		{
			if (func_60(uLocal_103[iVar1]))
			{
				unk_0xC8BEB049F3BFC0AB(&uVar2);
				unk_0x7605F5E6C5C7EF01(0, iVar1 * 100);
				unk_0x1A564F5D3F5B4476(0, 1193033728, 0);
				unk_0xAFDA7B8F83B2CA58(uVar2);
				unk_0x73F69DD57B7E92A9(uLocal_103[iVar1], uVar2);
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= (iLocal_170 - 1))
		{
			if (func_60(iLocal_170[iVar1]))
			{
				unk_0xC8BEB049F3BFC0AB(&uVar2);
				unk_0x7605F5E6C5C7EF01(0, iVar1 * 110);
				if (func_14(iLocal_166[iVar1]) && unk_0x88B79D32B518C327(iLocal_170[iVar1], iLocal_166[iVar1], 0))
				{
					unk_0x21D24CE144A81296(0, iLocal_166[iVar1], 30f, 786597);
				}
				else
				{
					unk_0x1A564F5D3F5B4476(0, 1193033728, 0);
				}
				unk_0xAFDA7B8F83B2CA58(uVar2);
				unk_0x73F69DD57B7E92A9(iLocal_170[iVar1], uVar2);
			}
			iVar1++;
		}
		if (func_60(iLocal_112))
		{
			if (func_14(iLocal_111) && unk_0x88B79D32B518C327(iLocal_112, iLocal_111, 0))
			{
				unk_0x21D24CE144A81296(iLocal_112, iLocal_111, 30f, 786597);
			}
			else
			{
				unk_0x1A564F5D3F5B4476(iLocal_112, 1193033728, 0);
			}
		}
		return 0;
	}
	if (func_176())
	{
		iVar4 = 0;
		while (iVar4 <= (iLocal_174 - 1))
		{
			if (func_60(uLocal_103[iVar4]))
			{
				unk_0xC8BEB049F3BFC0AB(&uVar3);
				unk_0x7605F5E6C5C7EF01(0, iVar4 * 50);
				unk_0x9603FB72C3126396(0, unk_0x18F7BE9ACB7D08F4(), 500f, -1, 0, 0);
				unk_0xAFDA7B8F83B2CA58(uVar3);
				if ((iVar4 % 2) == 0)
				{
					func_175(uLocal_103[iVar4], 1);
				}
				unk_0x73F69DD57B7E92A9(uLocal_103[iVar4], uVar3);
			}
			iVar4++;
		}
		iVar4 = 0;
		while (iVar4 <= (iLocal_170 - 1))
		{
			if (func_14(iLocal_166[iVar4]) && Local_83.f_1 == 3)
			{
				unk_0x2596D3899EEA8EF4(iLocal_166[iVar4], 0);
			}
			if (func_60(iLocal_170[iVar4]))
			{
				unk_0xC8BEB049F3BFC0AB(&uVar3);
				unk_0x7605F5E6C5C7EF01(0, iVar4 * 60);
				if (func_14(iLocal_166[iVar4]) && unk_0x88B79D32B518C327(iLocal_170[iVar4], iLocal_166[iVar4], 0))
				{
					unk_0x21D24CE144A81296(0, iLocal_166[iVar4], 50f, 786468);
				}
				else
				{
					unk_0x9603FB72C3126396(0, unk_0x18F7BE9ACB7D08F4(), 500f, -1, 0, 0);
				}
				unk_0xAFDA7B8F83B2CA58(uVar3);
				unk_0x73F69DD57B7E92A9(iLocal_170[iVar4], uVar3);
				if ((iVar4 % 2) == 0)
				{
					func_175(iLocal_170[iVar4], 1);
				}
			}
			iVar4++;
		}
		if (func_14(iLocal_111) && Local_83.f_1 == 3)
		{
			unk_0x2596D3899EEA8EF4(iLocal_111, 0);
		}
		if (func_60(iLocal_112))
		{
			if (func_14(iLocal_111) && unk_0x88B79D32B518C327(iLocal_112, iLocal_111, 0))
			{
				unk_0x21D24CE144A81296(iLocal_112, iLocal_111, 50f, 786468);
			}
			else
			{
				unk_0x9603FB72C3126396(iLocal_112, unk_0x18F7BE9ACB7D08F4(), 500f, -1, 0, 0);
			}
		}
		switch (Local_83.f_0)
		{
			case 0:
				Global_104525[0] = 1;
				Global_104531[0] = unk_0x5AFB8ED811F05E4D();
				break;
			
			case 1:
				Global_104525[1] = 1;
				Global_104531[1] = unk_0x5AFB8ED811F05E4D();
				break;
			
			case 2:
				Global_104525[2] = 1;
				Global_104531[2] = unk_0x5AFB8ED811F05E4D();
				break;
			
			case 3:
				Global_104525[3] = 1;
				Global_104531[3] = unk_0x5AFB8ED811F05E4D();
				break;
			
			case 4:
				Global_104525[4] = 1;
				Global_104531[4] = unk_0x5AFB8ED811F05E4D();
				break;
			
			case 5:
				Global_104515[0] = 1;
				Global_104520[0] = unk_0x5AFB8ED811F05E4D();
				break;
			
			case 6:
				Global_104515[1] = 1;
				Global_104520[1] = unk_0x5AFB8ED811F05E4D();
				break;
			
			case 7:
				Global_104515[2] = 1;
				Global_104520[2] = unk_0x5AFB8ED811F05E4D();
				break;
			
			case 8:
				Global_104515[3] = 1;
				Global_104520[3] = unk_0x5AFB8ED811F05E4D();
				break;
		}
		return 0;
	}
	return 1;
}

void func_175(var uParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	if (func_60(uParam0))
	{
		iVar1 = 2;
		if (bParam1)
		{
			iVar1 = 3;
		}
		iVar2 = unk_0x61E9B3BFA06B017B(0, iVar1);
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
		if (unk_0xC1A23BED641FA58E(uParam0))
		{
			func_134(uParam0, sVar0, "WAVELOAD_PAIN_MALE", 24);
		}
		else
		{
			func_134(uParam0, sVar0, "WAVELOAD_PAIN_FEMALE", 24);
		}
	}
}

int func_176()
{
	int iVar0;
	
	if (unk_0xAAC7941A7E0EE97A(unk_0x8CFC7D6E1DA5D304(), 0))
	{
		return 1;
	}
	if (Local_83.f_1 == 3)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_170 - 1))
		{
			if (unk_0x31F12808DC47A9E5(iLocal_170[iVar0]))
			{
				if (unk_0x0FAE113CE72ED842(iLocal_170[iVar0]))
				{
					return 1;
				}
				else if (func_177(iLocal_170[iVar0], 1, 1116471296, 1126825984, 0, 0, 0, 0) || unk_0x422DF8890E5A5CBB(iLocal_170[iVar0]))
				{
					return 1;
				}
			}
			if (unk_0x31F12808DC47A9E5(iLocal_166[iVar0]))
			{
				if (unk_0x74C2FE037DFC8B4A(iLocal_166[iVar0], 0))
				{
					return 1;
				}
				else if (unk_0x1B843A60307EECA4(iLocal_166[iVar0], unk_0x18F7BE9ACB7D08F4(), 1) && unk_0x0A088F357EF627CA(iLocal_166[iVar0]) < 900)
				{
					return 1;
				}
			}
			iVar0++;
		}
		if (unk_0x31F12808DC47A9E5(iLocal_111))
		{
			if (unk_0x74C2FE037DFC8B4A(iLocal_111, 0))
			{
				return 1;
			}
			else if (unk_0x1B843A60307EECA4(iLocal_111, unk_0x18F7BE9ACB7D08F4(), 1) && unk_0x0A088F357EF627CA(iLocal_111) < 900)
			{
				return 1;
			}
		}
		return 0;
	}
	if (func_159(unk_0x18F7BE9ACB7D08F4(), Local_89, 50f) && unk_0xAADA5865C8BFAE94(unk_0x18F7BE9ACB7D08F4()))
	{
		return 1;
	}
	if (unk_0x31F12808DC47A9E5(iLocal_112))
	{
		if (unk_0x0FAE113CE72ED842(iLocal_112))
		{
			return 1;
		}
		else if (func_177(iLocal_112, 1, 1116471296, 1126825984, 0, 0, 0, 0))
		{
			return 1;
		}
		else if (unk_0x422DF8890E5A5CBB(iLocal_112))
		{
			unk_0x40E2910BAF39B1C7(iLocal_112, 0);
			return 1;
		}
	}
	if (unk_0x31F12808DC47A9E5(iLocal_111))
	{
		if (unk_0x74C2FE037DFC8B4A(iLocal_111, 0))
		{
			return 1;
		}
		else if (unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iLocal_111, 1) || unk_0x1B843A60307EECA4(iLocal_111, unk_0x18F7BE9ACB7D08F4(), 1))
		{
			return 1;
		}
	}
	if (unk_0x31F12808DC47A9E5(iLocal_117))
	{
		if (unk_0x74C2FE037DFC8B4A(iLocal_117, 0))
		{
			return 1;
		}
		else if (unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iLocal_117, 1) || unk_0x1B843A60307EECA4(iLocal_117, unk_0x18F7BE9ACB7D08F4(), 1))
		{
			return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_174 - 1))
	{
		if (unk_0x31F12808DC47A9E5(uLocal_103[iVar0]))
		{
			if (unk_0x0FAE113CE72ED842(uLocal_103[iVar0]))
			{
				return 1;
			}
			else if (func_177(uLocal_103[iVar0], 1, 1116471296, 1126825984, 0, 0, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_177(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	struct<3> Var0;
	
	if (func_15(unk_0x18F7BE9ACB7D08F4()) && func_15(iParam0))
	{
		if (unk_0x1B843A60307EECA4(iParam0, unk_0x18F7BE9ACB7D08F4(), 1))
		{
			return 1;
		}
		if (func_191(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!unk_0x9381BBF272130ED6(unk_0x18F7BE9ACB7D08F4(), 6))
		{
			if (unk_0x38000067CDE001D0(unk_0x18F7BE9ACB7D08F4()))
			{
				Var0 = { unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1) - unk_0x761660F5CE986DC4(iParam0, 1) };
				if ((((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <= 5f)
				{
					return func_190(unk_0x18F7BE9ACB7D08F4(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_178(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_178(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_15(unk_0x18F7BE9ACB7D08F4()) && func_15(iParam0))
	{
		if (func_189(iParam0) || unk_0xF905401F186A9803(unk_0x8CFC7D6E1DA5D304(), iParam0))
		{
			if (unk_0x9381BBF272130ED6(unk_0x18F7BE9ACB7D08F4(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0xEA07F07380ABC460(unk_0x18F7BE9ACB7D08F4(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_179(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_179(int iParam0, float fParam1)
{
	return func_180(iParam0, unk_0x18F7BE9ACB7D08F4(), fParam1, 1, 250, 7);
}

bool func_180(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_188(iParam0, iParam1);
	if (!func_15(iParam0) || !func_15(iParam1))
	{
		if (iVar4 != -1)
		{
			func_187(&(Local_40[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!func_184(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_183();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_40[iVar4 /*4*/].f_1 = iParam0;
		Local_40[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { unk_0x433176BD83D09D7E(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_181(&(Local_40[iVar4 /*4*/]), Var1, iParam1, &(Local_40[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x5AFB8ED811F05E4D() - Local_40[iVar4 /*4*/].f_3) < iParam4);
}

int func_181(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7)
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
		Var1 = { func_182(iParam4, iParam7) };
		*uParam0 = unk_0x96011BB04BED3CD0(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = unk_0xA3F56DCC3ACBDEC5(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
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
	if (unk_0xB6C2454233C8F532(iVar7))
	{
		func_15(iVar7);
		if (unk_0x6DE4035D8BAB73B4(iVar7) == iParam4)
		{
			if (bLocal_81)
			{
				unk_0xD2F8DE21E0732141(Param1, unk_0x761660F5CE986DC4(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = unk_0x5AFB8ED811F05E4D();
			return 1;
		}
		return 0;
	}
	if (unk_0x978B4E1292EBBE41(iVar7))
	{
		func_15(iVar7);
		if (unk_0x657B649BA2AD3582(iParam4, 0))
		{
			if (unk_0x00ABCA0241A97143(iVar7) == unk_0x5AD687C3474F04B4(iParam4, 0))
			{
				if (bLocal_81)
				{
					unk_0xD2F8DE21E0732141(Param1, unk_0x761660F5CE986DC4(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = unk_0x5AFB8ED811F05E4D();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_182(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = unk_0x61E9B3BFA06B017B(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0x761660F5CE986DC4(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0x433176BD83D09D7E(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0x433176BD83D09D7E(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0x433176BD83D09D7E(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0x433176BD83D09D7E(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0x433176BD83D09D7E(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0x433176BD83D09D7E(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0x761660F5CE986DC4(iParam0, 1);
}

int func_183()
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

int func_184(int iParam0, int iParam1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_186(unk_0x761660F5CE986DC4(iParam1, 1) - unk_0x761660F5CE986DC4(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var3 = { unk_0x9B40AD9E8738972C(iParam0) };
	}
	else
	{
		Var3 = { func_186(unk_0x433176BD83D09D7E(iParam0, 31086, 0f, 5f, 0f) - unk_0x433176BD83D09D7E(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_185(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_185(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_186(struct<3> Param0)
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

void func_187(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_188(int iParam0, int iParam1)
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

int func_189(int iParam0)
{
	if (unk_0x6703CD13741C39C5(unk_0x8CFC7D6E1DA5D304(), iParam0) && unk_0x9381BBF272130ED6(unk_0x18F7BE9ACB7D08F4(), 6))
	{
		return 1;
	}
	return 0;
}

bool func_190(int iParam0, int iParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0x9B40AD9E8738972C(iParam0) };
	Var3 = { unk_0x761660F5CE986DC4(iParam1, 1) - unk_0x761660F5CE986DC4(iParam0, 1) };
	return (((Var0.f_0 * Var3.f_0) + (Var0.f_1 * Var3.f_1)) / unk_0x2A488C176D52CCA5(Var3, 0f, 0f, 0f)) > unk_0xD0FFB162F40A139C(fParam2);
}

int func_191(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (func_15(unk_0x18F7BE9ACB7D08F4()) && func_15(iParam0))
	{
		unk_0x75CE6F8BEC2654E3(unk_0x18F7BE9ACB7D08F4(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_195(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_192(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (unk_0x11879DABC3CC8D46(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0xAADA5865C8BFAE94(unk_0x18F7BE9ACB7D08F4()))
				{
					if (unk_0x70832328F090DD95(unk_0x761660F5CE986DC4(iParam0, 1), fVar0, 1))
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
				if (func_195(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_192(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_192(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0x761660F5CE986DC4(iParam0, 1) };
	Var3 = { Var0 };
	Var0.f_0 = (Var0.f_0 - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var3.f_0 = (Var3.f_0 + fParam1);
	Var3.f_1 = (Var3.f_1 + fParam1);
	Var3.f_2 = (Var3.f_2 + fParam1);
	if (bParam2)
	{
		if (((unk_0xC803706E49FF7A7F(unk_0x761660F5CE986DC4(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || unk_0xC803706E49FF7A7F(unk_0x761660F5CE986DC4(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || unk_0xC803706E49FF7A7F(unk_0x761660F5CE986DC4(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0xC803706E49FF7A7F(unk_0x761660F5CE986DC4(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_193(iParam0, fParam1))
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
			if (func_193(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xAB3BDB14DC75494C(Var0, Var3, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_193(var uParam0, float fParam1)
{
	var uVar0;
	struct<3> Var1;
	
	if ((((unk_0x7110E50212169A23(uParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || unk_0x7110E50212169A23(uParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || unk_0x7110E50212169A23(uParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || unk_0x7110E50212169A23(uParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || unk_0x7110E50212169A23(uParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
	{
		if (func_194(uParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_194(int iParam0, struct<3> Param1, float fParam4, int iParam5)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_186(Param1 - unk_0x761660F5CE986DC4(uParam0, 1)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		Var3 = { unk_0x9B40AD9E8738972C(iParam0) };
	}
	else
	{
		Var3 = { func_186(unk_0x433176BD83D09D7E(iParam0, 31086, 0f, 5f, 0f) - unk_0x433176BD83D09D7E(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_185(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam4 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_195(int iParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (unk_0xAADA5865C8BFAE94(unk_0x18F7BE9ACB7D08F4()))
		{
			if (unk_0xEA07F07380ABC460(unk_0x18F7BE9ACB7D08F4(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0x70832328F090DD95(unk_0x761660F5CE986DC4(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_196(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x74C2FE037DFC8B4A(iParam0, 0) && !unk_0x74C2FE037DFC8B4A(uParam1, 0))
	{
		if (unk_0x160400EAEE246B4D(iParam0, iParam1))
		{
			if (unk_0x4983F8C51A0C0AF3(iParam1, iParam2, 0) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_197()
{
	switch (Local_83.f_0)
	{
		case 5:
			return unk_0xB03A1684359C50A1(Global_104551.f_24946.f_2, 0);
			break;
		
		case 6:
			return unk_0xB03A1684359C50A1(Global_104551.f_24946.f_2, 1);
			break;
		
		case 7:
			return unk_0xB03A1684359C50A1(Global_104551.f_24946.f_2, 2);
			break;
		
		case 8:
			return unk_0xB03A1684359C50A1(Global_104551.f_24946.f_2, 3);
			break;
		
		case 0:
			return unk_0xB03A1684359C50A1(Global_104551.f_24949.f_3, 0);
			break;
		
		case 1:
			return unk_0xB03A1684359C50A1(Global_104551.f_24949.f_3, 1);
			break;
		
		case 2:
			return unk_0xB03A1684359C50A1(Global_104551.f_24949.f_3, 2);
			break;
		
		case 3:
			return unk_0xB03A1684359C50A1(Global_104551.f_24949.f_3, 3);
			break;
		
		case 4:
			return unk_0xB03A1684359C50A1(Global_104551.f_24949.f_3, 4);
			break;
	}
	return 0;
}

void func_198()
{
	iLocal_82 = 0;
	iLocal_92 = 0;
	bLocal_99 = false;
	bLocal_100 = false;
	iLocal_96 = 0;
	iLocal_97 = 0;
	iLocal_98 = 0;
	func_200(1);
	unk_0x6D7801DE0E52AE2C("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", 0);
	unk_0x6D7801DE0E52AE2C("WORLD_VEHICLE_PARK_PARALLEL", 0);
	if (Local_83.f_0 == 1)
	{
		uLocal_215 = func_199(374.0083f, 279.5919f, 102.3306f, 40f);
		unk_0xE54597236B7D8C63(374.0083f, 279.5919f, 102.3306f, 25f, 0, 0, 0, 0, 0, 0);
	}
	if (Local_83.f_1 == 1 || Local_83.f_1 == 2)
	{
		uLocal_214 = func_199(Local_89, 60f);
	}
}

var func_199(struct<3> Param0, float fParam3)
{
	struct<3> Var0;
	
	Var0 = { (fParam3 / 2f), (fParam3 / 2f), (fParam3 / 2f) };
	return unk_0x1701E0E6A11D6B65(Param0 - Var0, Param0 + Var0, 0, 1, 1, 1);
}

void func_200(bool bParam0)
{
	if (bParam0)
	{
		switch (Local_83.f_0)
		{
			case 0:
			case 1:
			case 2:
			case 3:
				func_172(&uLocal_216, joaat("banshee"));
				func_172(&uLocal_216, joaat("feltzer2"));
				func_172(&uLocal_216, joaat("sentinel"));
				break;
			
			case 4:
				func_172(&uLocal_216, joaat("bati"));
				func_172(&uLocal_216, joaat("ruffian"));
				break;
			
			case 5:
			case 6:
			case 7:
			case 8:
				func_172(&uLocal_216, joaat("seashark"));
				break;
		}
	}
	else
	{
		func_201(&uLocal_216);
	}
}

void func_201(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xB03A1684359C50A1((*uParam0)[iVar0 /*18*/], 30))
		{
			func_202(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}

void func_202(var uParam0)
{
	func_203(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_203(var uParam0, char* sParam1, int iParam2)
{
	if (unk_0xB03A1684359C50A1(uParam0, 30))
	{
		switch (func_164(uParam0))
		{
			case 0:
				unk_0x419C9117019F2E5A(uParam2);
				break;
			
			case 1:
				unk_0x334F1DD67B2EC86A(uParam1);
				break;
			
			case 2:
				unk_0xB7B15F3C9DD17B22(uParam1);
				break;
			
			case 3:
				unk_0x1D492DC0B64A955F(uParam1);
				break;
			
			case 4:
				unk_0xFD32699B58C2E7EF(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x8E7D27D1F47D1D08(sParam1);
				break;
			
			case 6:
				unk_0x6279F6030B6B0475();
				break;
			
			case 7:
				unk_0x2009DF0140702794(iParam2);
				break;
			
			case 8:
				unk_0x000ED7BEBF44F5EA(iParam2, unk_0xB03A1684359C50A1(uParam0, 26));
				break;
			
			case 9:
				unk_0xDB38C3D40ACF4B3D();
				break;
			
			default:
				break;
		}
	}
}

int func_204(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return unk_0xB03A1684359C50A1(Global_104551.f_24949.f_1, 0);
			break;
		
		case 1:
			return unk_0xB03A1684359C50A1(Global_104551.f_24949.f_1, 1);
			break;
		
		case 2:
			return unk_0xB03A1684359C50A1(Global_104551.f_24949.f_1, 2);
			break;
		
		case 3:
			return unk_0xB03A1684359C50A1(Global_104551.f_24949.f_1, 3);
			break;
		
		case 4:
			return unk_0xB03A1684359C50A1(Global_104551.f_24949.f_1, 4);
			break;
	}
	return 0;
}

bool func_205(int iParam0, int iParam1)
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
	bVar0 = unk_0xB03A1684359C50A1(Global_104551.f_9055.f_99.f_219[iParam0], iParam1);
	return bVar0;
}

void func_206()
{
	if (func_207(func_208(86, 0), Local_89, 1f, 0))
	{
		Local_83.f_0 = 0;
		Local_83.f_1 = 2;
		Local_83.f_3 = 100;
		Local_83.f_4 = 20;
	}
	else if (func_207(func_208(87, 0), Local_89, 1f, 0))
	{
		Local_83.f_0 = 1;
		Local_83.f_1 = 2;
		Local_83.f_3 = 500;
		Local_83.f_4 = 18;
	}
	else if (func_207(func_208(88, 0), Local_89, 1f, 0))
	{
		Local_83.f_0 = 2;
		Local_83.f_1 = 2;
		Local_83.f_3 = 1000;
		Local_83.f_4 = 2;
	}
	else if (func_207(func_208(89, 0), Local_89, 1f, 0))
	{
		Local_83.f_0 = 3;
		Local_83.f_1 = 2;
		Local_83.f_3 = 1250;
		Local_83.f_4 = 4;
	}
	else if (func_207(func_208(90, 0), Local_89, 1f, 0))
	{
		Local_83.f_0 = 4;
		Local_83.f_1 = 1;
		Local_83.f_3 = 1500;
		Local_83.f_4 = 5;
	}
	else if (func_207(func_208(82, 0), Local_89, 1f, 0))
	{
		Local_83.f_0 = 5;
		Local_83.f_1 = 3;
		Local_83.f_3 = 0;
		Local_83.f_4 = 16;
	}
	else if (func_207(func_208(83, 0), Local_89, 1f, 0))
	{
		Local_83.f_0 = 6;
		Local_83.f_1 = 3;
		Local_83.f_3 = 0;
		Local_83.f_4 = 13;
	}
	else if (func_207(func_208(84, 0), Local_89, 1f, 0))
	{
		Local_83.f_0 = 7;
		Local_83.f_1 = 3;
		Local_83.f_3 = 0;
		Local_83.f_4 = 15;
		Local_83.f_5 = 1;
	}
	else if (func_207(func_208(85, 0), Local_89, 1f, 0))
	{
		Local_83.f_0 = 8;
		Local_83.f_1 = 3;
		Local_83.f_4 = 24;
		Local_83.f_3 = 0;
		Local_83.f_5 = 1;
	}
	else
	{
		func_209(0);
	}
}

int func_207(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
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

Vector3 func_208(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0f, 0f, 0f;
	}
	return Global_25576[iVar0 /*23*/][iParam1 /*3*/];
}

void func_209(bool bParam0)
{
	int iVar0;
	var uVar1;
	
	if (!iLocal_93)
	{
		unk_0xBC3C2A3068412290(0);
		iLocal_93 = 1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (func_15(uLocal_103[iVar0]))
		{
			unk_0x267F7A2DFDFFB077(uLocal_103[iVar0]);
			unk_0x1A564F5D3F5B4476(uLocal_103[iVar0], 1193033728, 0);
			unk_0x40E2910BAF39B1C7(uLocal_103[iVar0], 0);
			unk_0xDBE64C5761554FBF(&(uLocal_103[iVar0]));
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
				unk_0x267F7A2DFDFFB077(iLocal_170[iVar0]);
				if (unk_0x9605D2F02FA93911(unk_0x4F69FBD64CDF125B(iLocal_166[iVar0])))
				{
					unk_0x2596D3899EEA8EF4(iLocal_166[iVar0], 0);
				}
				unk_0x21D24CE144A81296(iLocal_170[iVar0], iLocal_166[iVar0], 20f, 786599);
				unk_0x10F31830C95ED2E5(iLocal_170[iVar0], 1);
				unk_0x40E2910BAF39B1C7(iLocal_170[iVar0], 0);
				unk_0xDBE64C5761554FBF(&(iLocal_170[iVar0]));
				unk_0x4F5FF3F3FDCAB15D(&(iLocal_166[iVar0]));
			}
		}
		iVar0++;
	}
	if (func_15(iLocal_112))
	{
		if (func_15(iLocal_111))
		{
			unk_0x267F7A2DFDFFB077(iLocal_112);
			unk_0x273FE09AE985A00A(iLocal_112, 1, 1);
			unk_0x21D24CE144A81296(iLocal_112, iLocal_111, 15f, 786599);
			unk_0x10F31830C95ED2E5(iLocal_112, 1);
			unk_0x40E2910BAF39B1C7(iLocal_112, 0);
			unk_0xDBE64C5761554FBF(&iLocal_112);
			unk_0x4F5FF3F3FDCAB15D(&iLocal_111);
		}
	}
	if (func_15(iLocal_117))
	{
		unk_0x4F5FF3F3FDCAB15D(&iLocal_117);
	}
	switch (Local_83.f_0)
	{
		case 5:
			func_212(82, 0, 0);
			unk_0xD2A9C3F486236CC5(&(Global_104551.f_24946.f_2), 0);
			break;
		
		case 6:
			func_212(83, 0, 0);
			unk_0xD2A9C3F486236CC5(&(Global_104551.f_24946.f_2), 1);
			break;
		
		case 7:
			func_212(84, 0, 0);
			unk_0xD2A9C3F486236CC5(&(Global_104551.f_24946.f_2), 2);
			break;
		
		case 8:
			func_212(85, 0, 0);
			unk_0xD2A9C3F486236CC5(&(Global_104551.f_24946.f_2), 3);
			break;
		
		case 0:
			func_212(86, 0, 0);
			unk_0xD2A9C3F486236CC5(&(Global_104551.f_24949.f_3), 0);
			break;
		
		case 1:
			func_212(87, 0, 0);
			unk_0xD2A9C3F486236CC5(&(Global_104551.f_24949.f_3), 1);
			break;
		
		case 2:
			func_212(88, 0, 0);
			unk_0xD2A9C3F486236CC5(&(Global_104551.f_24949.f_3), 2);
			break;
		
		case 3:
			func_212(89, 0, 0);
			unk_0xD2A9C3F486236CC5(&(Global_104551.f_24949.f_3), 3);
			break;
		
		case 4:
			func_212(90, 0, 0);
			unk_0xD2A9C3F486236CC5(&(Global_104551.f_24949.f_3), 4);
			break;
	}
	if (iLocal_92)
	{
		unk_0xEFF1F12403847394(1);
	}
	unk_0xDFF6E88FD5145E7B(unk_0xCE57E1A0D0E093AA(10), 0);
	if (iLocal_101)
	{
		unk_0x9A70D1B91A853FDD(1);
	}
	if (iLocal_194 && !bParam0)
	{
		uVar1 = unk_0x0A91D180DDC7A1B8();
		if (unk_0x557001354138B7FB(uVar1))
		{
			if (!unk_0xA126D857D0E10968(iVar1))
			{
				unk_0xF70DE7344EBF0825(iVar1, 1, 0);
			}
		}
	}
	if (!bParam0)
	{
		func_200(0);
	}
	if (iLocal_94)
	{
		unk_0xB069E1EDB2DC07C3(Local_201, Local_204, 1);
		unk_0x1CA52524A2283CF0(Local_207, Local_210, fLocal_213, 1);
		iLocal_94 = 0;
	}
	unk_0x6D7801DE0E52AE2C("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", 1);
	unk_0x6D7801DE0E52AE2C("WORLD_VEHICLE_PARK_PARALLEL", 1);
	if (Local_83.f_0 == 1)
	{
		unk_0x7E1D02126DA8A751(uLocal_215, 0);
	}
	if (Local_83.f_1 == 1 || Local_83.f_1 == 2)
	{
		unk_0x7E1D02126DA8A751(uLocal_214, 0);
	}
	else
	{
		unk_0x764AFC5A3A16C2B0(unk_0x18F7BE9ACB7D08F4(), 170, 0);
	}
	func_210(&uLocal_216, 0);
	unk_0x810C5D6462DD69E6();
}

void func_210(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_201(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_211(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
}

void func_211(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_212(int iParam0, bool bParam1, bool bParam2)
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
		iVar1 = unk_0xB03A1684359C50A1(Global_25576[iVar0 /*23*/].f_11, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0xB03A1684359C50A1(Global_25576[iVar0 /*23*/].f_11, 0))
	{
		unk_0xD2A9C3F486236CC5(&(Global_25576[iVar0 /*23*/].f_11), 18);
		if (Global_25573 == 1)
		{
			Global_25574 = 1;
		}
		Global_25573 = 1;
	}
	if (bParam1)
	{
		unk_0xD2A9C3F486236CC5(&(Global_25576[iVar0 /*23*/].f_11), 0);
		unk_0xD2A9C3F486236CC5(&(Global_25576[iVar0 /*23*/].f_11), 15);
		unk_0xD2A9C3F486236CC5(&(Global_25576[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0x62148293B793073B(&(Global_25576[iVar0 /*23*/].f_11), 0);
		unk_0x62148293B793073B(&(Global_25576[iVar0 /*23*/].f_11), 15);
	}
	if (!unk_0xB03A1684359C50A1(Global_25576[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0xE769D9B5158D0F11(Global_25576[iVar0 /*23*/].f_19))
		{
			unk_0x07CAA82A92028773(1);
			unk_0x40D517D991458154(&(Global_25576[iVar0 /*23*/].f_19));
			unk_0x07CAA82A92028773(0);
		}
	}
}

