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
	unk_0x767EEB287EFBBF01(1);
	Local_89 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0x2EC83C7ACA23E8A4(83))
	{
		func_203(0);
	}
	func_200();
	switch (Local_83.f_1)
	{
		case 1:
		case 2:
			if (!func_199(0, 8))
			{
				func_203(0);
			}
			if (!func_198(Local_83.f_0))
			{
				func_203(0);
			}
			break;
		
		case 3:
			if (!func_199(0, 7))
			{
				func_203(0);
			}
			break;
		
		case 0:
			func_203(0);
			break;
	}
	func_192();
	if (!func_168())
	{
		func_203(0);
	}
	func_162();
	while (true)
	{
		func_159(&uLocal_216);
		if (func_168())
		{
			if (unk_0x43045253AC4C7FF5())
			{
				switch (iLocal_82)
				{
					case 0:
						iLocal_82 = 1;
						break;
					
					case 1:
						func_150();
						func_119();
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
				func_203(0);
			}
		}
		else
		{
			func_203(0);
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
	Global_1315232 = 1;
	func_203(1);
}

char* func_3(int iParam0)
{
	char* sVar0;
	
	if (unk_0xBECAD780226FC009())
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
	else if (unk_0x65121BA303717C5B())
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
	else if (unk_0xD95D58B9AAC86D55())
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
	else if (unk_0x15B0CAB107CFCDE1())
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
	else if (unk_0x955B8C8F89CC3AC0())
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
	
	if (unk_0xBECAD780226FC009())
	{
		sVar0 = "SPRACE";
	}
	else if (unk_0x65121BA303717C5B())
	{
		sVar0 = "2535285330962926";
	}
	else if (unk_0xD95D58B9AAC86D55())
	{
		sVar0 = "SPRACE";
	}
	else if (unk_0x15B0CAB107CFCDE1())
	{
		sVar0 = "2535285330962926";
	}
	else if (unk_0x955B8C8F89CC3AC0())
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
	unk_0x88B0F0DC270164B7(&Global_1312419, 0);
}

void func_6(struct<3> Param0)
{
	Global_1312419.f_6 = { Param0 };
}

void func_7(int iParam0)
{
	Global_1312419.f_2 = iParam0;
}

void func_8(int iParam0)
{
	Global_1312419.f_1 = iParam0;
}

void func_9()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	Local_83.f_2 = -1;
	if (func_54(unk_0xA0081090911D13E5()))
	{
		if (!unk_0x42F7F3EE791EDE08(unk_0xA0081090911D13E5()))
		{
			unk_0x4519324BAE580305(unk_0xA0081090911D13E5(), 0);
		}
	}
	while (!func_48())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (Local_83.f_1 != 3)
	{
		func_15(func_43(), 1, Local_83.f_3);
		iVar0 = unk_0xDF658EB6CA91DFBC() + 1500;
		iVar1 = unk_0x525584039F375488();
		if (func_13(iVar1))
		{
			while (!func_12(iVar1, 3f, 2, 1056964608, 0, 1, 0) || unk_0xDF658EB6CA91DFBC() < iVar0)
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
		uVar2 = unk_0x4A0FB18E33FE5805();
		if (unk_0xC0691D80D21C989D(uVar2))
		{
			unk_0xFDEC0B505BCB00C0(uVar2, 0, 0);
		}
	}
	func_10();
}

void func_10()
{
	if (!func_11(0))
	{
		unk_0xE568CE38FF8C1318("mission_Race");
		while (!unk_0x71DF55A4DE7565D5("mission_Race"))
		{
			unk_0xE568CE38FF8C1318("mission_Race");
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xB8BA7F44DF1575E1("mission_Race", &Local_83, 6, 19000);
	}
	unk_0x3CFCF109465A1DA6("mission_Race");
	func_203(1);
}

bool func_11(bool bParam0)
{
	if (!bParam0 && unk_0xA96867DD0A63C62C(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x08BA6DD398CA197C(Global_69865, 0);
}

int func_12(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0xABC36CFE4F3421A0(0, 71, 1);
	unk_0xABC36CFE4F3421A0(0, 72, 1);
	unk_0xABC36CFE4F3421A0(0, 76, 1);
	unk_0xABC36CFE4F3421A0(0, 73, 1);
	unk_0xABC36CFE4F3421A0(0, 59, 1);
	unk_0xABC36CFE4F3421A0(0, 60, 1);
	if (bParam5)
	{
		unk_0xABC36CFE4F3421A0(0, 75, 1);
	}
	unk_0xABC36CFE4F3421A0(0, 80, 1);
	if (!bParam6)
	{
		unk_0xABC36CFE4F3421A0(0, 69, 1);
		unk_0xABC36CFE4F3421A0(0, 70, 1);
		unk_0xABC36CFE4F3421A0(0, 68, 1);
	}
	unk_0xABC36CFE4F3421A0(0, 74, 1);
	unk_0xABC36CFE4F3421A0(0, 86, 1);
	unk_0xABC36CFE4F3421A0(0, 81, 1);
	unk_0xABC36CFE4F3421A0(0, 82, 1);
	unk_0xABC36CFE4F3421A0(0, 138, 1);
	unk_0xABC36CFE4F3421A0(0, 136, 1);
	unk_0xABC36CFE4F3421A0(0, 114, 1);
	unk_0xABC36CFE4F3421A0(0, 107, 1);
	unk_0xABC36CFE4F3421A0(0, 110, 1);
	unk_0xABC36CFE4F3421A0(0, 89, 1);
	unk_0xABC36CFE4F3421A0(0, 89, 1);
	unk_0xABC36CFE4F3421A0(0, 87, 1);
	unk_0xABC36CFE4F3421A0(0, 88, 1);
	unk_0xABC36CFE4F3421A0(0, 113, 1);
	unk_0xABC36CFE4F3421A0(0, 115, 1);
	unk_0xABC36CFE4F3421A0(0, 116, 1);
	unk_0xABC36CFE4F3421A0(0, 117, 1);
	unk_0xABC36CFE4F3421A0(0, 118, 1);
	unk_0xABC36CFE4F3421A0(0, 119, 1);
	unk_0xABC36CFE4F3421A0(0, 131, 1);
	unk_0xABC36CFE4F3421A0(0, 132, 1);
	unk_0xABC36CFE4F3421A0(0, 123, 1);
	unk_0xABC36CFE4F3421A0(0, 126, 1);
	unk_0xABC36CFE4F3421A0(0, 129, 1);
	unk_0xABC36CFE4F3421A0(0, 130, 1);
	unk_0xABC36CFE4F3421A0(0, 133, 1);
	unk_0xABC36CFE4F3421A0(0, 134, 1);
	unk_0xB18D6B85BBC9224A();
	if ((unk_0xDF658EB6CA91DFBC() - Global_29) > 500)
	{
		unk_0xAAE246A3BA63EEF6(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0xDF658EB6CA91DFBC();
	if (!unk_0x912AD5A10E7633F0(iParam0, 0))
	{
		if (unk_0x7466327978A6A24C(unk_0x39053CCA2C4B5DA1(iParam0)) <= fParam3)
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
		if (unk_0x1F1B2B6E500380C5(iParam0, 0))
		{
			if (!unk_0x601CCD1205C6523F(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_14(int iParam0)
{
	if (unk_0xD3FACCDA4D66AEAD(iParam0))
	{
		if (!unk_0x912AD5A10E7633F0(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_15(int iParam0, int iParam1, int iParam2)
{
	if (Global_101553.f_32740[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_101553.f_32740[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_16(Global_101553.f_32740[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
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
					switch (unk_0xD24F6522EB082914())
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
	iVar5 = (Global_52990[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_52990[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52990[iVar2] = 2147483647;
				}
				else
				{
					Global_52990[iVar2] = (Global_52990[iVar2] + iParam3);
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
				if ((Global_52990[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_52990[iVar2];
			Global_52990[iVar2] = (Global_52990[iVar2] - iParam3);
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
		Global_101553.f_25254.f_233[iVar2 /*69*/].f_2[Global_101553.f_25254.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_101553.f_25254.f_233[iVar2 /*69*/].f_2[Global_101553.f_25254.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_101553.f_25254.f_233[iVar2 /*69*/].f_2[Global_101553.f_25254.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_101553.f_25254.f_233[iVar2 /*69*/]++;
		Global_101553.f_25254.f_233[iVar2 /*69*/].f_1++;
		if (Global_101553.f_25254.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_101553.f_25254.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_18(iParam0);
	if (Global_35775 == 15)
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
			Global_101553.f_25254.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_101553.f_25254.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_101553.f_25254.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_101553.f_25254.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_101553.f_25254.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_101553.f_25254.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_52998[iVar0 /*3*/][0] = Global_101553.f_25254[iVar0];
		Global_52998.f_31[iVar0 /*3*/][0] = Global_101553.f_25254.f_11[iVar0];
		Global_52998.f_62[iVar0 /*3*/][0] = Global_101553.f_25254.f_22[iVar0];
		Global_52998.f_93[iVar0 /*3*/][0] = Global_101553.f_25254.f_33[iVar0];
		Global_52998.f_124[iVar0 /*3*/][0] = Global_101553.f_25254.f_44[iVar0];
		Global_52998.f_155[iVar0 /*3*/][0] = Global_101553.f_25254.f_55[iVar0];
		Global_52998.f_186[iVar0 /*3*/][0] = Global_101553.f_25254.f_66[iVar0];
		Global_52998.f_217[iVar0 /*3*/][0] = Global_101553.f_25254.f_77[iVar0];
		Global_52998.f_248[iVar0 /*3*/][0] = Global_101553.f_25254.f_88[iVar0];
		if (!bParam0)
		{
			Global_52998[iVar0 /*3*/][1] = Global_101553.f_25254[iVar0];
			Global_52998.f_31[iVar0 /*3*/][1] = Global_101553.f_25254.f_11[iVar0];
			Global_52998.f_62[iVar0 /*3*/][1] = Global_101553.f_25254.f_22[iVar0];
			Global_52998.f_93[iVar0 /*3*/][1] = Global_101553.f_25254.f_33[iVar0];
			Global_52998.f_124[iVar0 /*3*/][1] = Global_101553.f_25254.f_44[iVar0];
			Global_52998.f_155[iVar0 /*3*/][1] = Global_101553.f_25254.f_55[iVar0];
			Global_52998.f_186[iVar0 /*3*/][1] = Global_101553.f_25254.f_66[iVar0];
			Global_52998.f_217[iVar0 /*3*/][1] = Global_101553.f_25254.f_77[iVar0];
			Global_52998.f_248[iVar0 /*3*/][1] = Global_101553.f_25254.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_18(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52990[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x10CE8769EE2626C7(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x10CE8769EE2626C7(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x10CE8769EE2626C7(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_19(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0xA86CA03D9749EEB3())
	{
		if (unk_0x08BA6DD398CA197C(Global_101553.f_25254.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x09C86C0C5CA26B1E(&(Global_101553.f_25254.f_471), iParam0);
		}
	}
	else if (unk_0x08BA6DD398CA197C(Global_101553.f_25254.f_471, iParam0) || unk_0x08BA6DD398CA197C(Global_2097152[func_21() /*10106*/].f_7120.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x09C86C0C5CA26B1E(&(Global_101553.f_25254.f_471), iParam0);
		unk_0x09C86C0C5CA26B1E(&(Global_2097152[func_21() /*10106*/].f_7120.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x754E61FE98961B39("COUP_RED");
		unk_0xBDE6EEC5F6BDC060(func_20(iParam0));
		unk_0xDAB775768F2B11B1(&cVar1, &cVar1, 1, 0, "", 0);
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
	if (!unk_0xA86CA03D9749EEB3())
	{
		return unk_0x08BA6DD398CA197C(Global_101553.f_25254.f_471, iParam0);
	}
	return unk_0x08BA6DD398CA197C(Global_2097152[func_21() /*10106*/].f_7120.f_10, iParam0);
}

int func_24(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x3C91BC99A9AE5C7D(27))
	{
		return 0;
	}
	if (unk_0x8A3351ECF43DB941(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x8A3351ECF43DB941(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x8A3351ECF43DB941(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x8A3351ECF43DB941(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x10CE8769EE2626C7(joaat("num_cash_spent"), iVar1, 1);
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
	if (unk_0x3C91BC99A9AE5C7D(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25431 != 0 && !Global_69617)
	{
		return 0;
	}
	if (func_36(&Global_2578151))
	{
		if (func_34(&Global_2578151, iParam0))
		{
			return 0;
		}
		if (func_27(&Global_2578151, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x2CCFD9D11EFFE8B6(iParam0))
		{
			return 0;
		}
		if (unk_0x3C91BC99A9AE5C7D(iParam0))
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
	
	if (unk_0x3C91BC99A9AE5C7D(iParam1))
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
	
	if (unk_0x3C91BC99A9AE5C7D(iParam1))
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
	func_32(uParam0, (Global_2578150 - 0.5f));
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
	return Global_35775 == iParam0;
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
	iVar0 = unk_0xC7B7B86D55D4C17E(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xC77B359C84812EFE(iParam0, iParam1);
	}
	return 0;
}

void func_40(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x8A3351ECF43DB941(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x10CE8769EE2626C7(iParam0, iVar0, 1);
}

void func_41(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51558[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0xA86CA03D9749EEB3())
	{
		return;
	}
	if (Global_51558[iParam0 /*7*/])
	{
		unk_0x8A3351ECF43DB941(Global_51558[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x10CE8769EE2626C7(Global_51558[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_42()
{
	int iVar0;
	
	if (unk_0x446ED6C2B9B18A21())
	{
		unk_0x8A3351ECF43DB941(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52990[0] == iVar0)
		{
			Global_52990[0] = iVar0;
		}
		unk_0x8A3351ECF43DB941(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52990[1] == iVar0)
		{
			Global_52990[1] = iVar0;
		}
		unk_0x8A3351ECF43DB941(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52990[2] == iVar0)
		{
			Global_52990[2] = iVar0;
		}
	}
}

int func_43()
{
	func_44();
	return Global_101553.f_1991.f_539.f_3549;
}

void func_44()
{
	int iVar0;
	
	if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()))
	{
		if (func_47(Global_101553.f_1991.f_539.f_3549) != unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()))
		{
			iVar0 = func_46(unk_0xA0081090911D13E5());
			if (func_45(iVar0) && (!func_38(14) || Global_100505))
			{
				if (Global_101553.f_1991.f_539.f_3549 != iVar0 && func_45(Global_101553.f_1991.f_539.f_3549))
				{
					Global_101553.f_1991.f_539.f_3550 = Global_101553.f_1991.f_539.f_3549;
				}
				Global_101553.f_1991.f_539.f_3551 = iVar0;
				Global_101553.f_1991.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101553.f_1991.f_539.f_3549 != 145)
			{
				Global_101553.f_1991.f_539.f_3551 = Global_101553.f_1991.f_539.f_3549;
			}
			return;
		}
	}
	Global_101553.f_1991.f_539.f_3549 = 145;
}

bool func_45(int iParam0)
{
	return iParam0 < 3;
}

int func_46(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		iVar1 = unk_0x705BC1BB91F530B5(iParam0);
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
		return Global_101553.f_32740[iParam0 /*29*/];
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
		if (Global_89217.f_44 == 1)
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
		Global_35739++;
		*uParam0 = Global_35739;
		unk_0x8F2CF88C37D4A413(unk_0x4A0FB18E33FE5805(), 0);
		Global_17151.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xD74A648A7073D681(8);
		}
		Global_35775 = iParam2;
		Global_35737 = *uParam0;
		Global_35738 = iParam4;
		Global_35736 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35736 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35736)
			{
				if (Global_35742[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35737 == *uParam0)
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
		if (Global_35736 == 8)
		{
			return 0;
		}
		Global_35739++;
		*uParam0 = Global_35739;
		Global_35742[Global_35736 /*4*/] = Global_35739;
		Global_35742[Global_35736 /*4*/].f_1 = iParam1;
		Global_35742[Global_35736 /*4*/].f_2 = iParam2;
		Global_35742[Global_35736 /*4*/].f_3 = 0;
		Global_35736++;
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
	
	if (Global_35736 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35736)
	{
		if (Global_35742[iVar0 /*4*/] == *uParam0)
		{
			Global_35742[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_51(int iParam0)
{
	return func_52(iParam0, Global_35775);
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
	if (Global_35775 == 15)
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
		if (!unk_0xEB361B4BD195A4D3(iParam0))
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
			if (func_117(0, -1, 0))
			{
				unk_0x94724F7C938EBE34(1);
				func_105();
				unk_0x5A6B86444D23FCA8(0);
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
			uVar0 = unk_0x4A0FB18E33FE5805();
			unk_0xA28FB996DF5377EF(uVar0, 0);
			unk_0xFDEC0B505BCB00C0(uVar0, 1, 0);
			func_59(0, 1, 1, 0);
			func_56(1, -1);
			iLocal_96 = 0;
			if (bLocal_99)
			{
				iLocal_82 = 3;
			}
			else
			{
				unk_0x5A6B86444D23FCA8(1);
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
	if (Global_17290.f_7894)
	{
		unk_0xC667A7C5CE24C569(15);
		Global_17290.f_7894 = 0;
	}
	unk_0xDA81B130FA38800A(0f);
	if (Global_17290.f_5498[iVar0])
	{
		unk_0x89B76C6241C0104D(9, false);
		Global_17290.f_5498[iVar0] = 0;
	}
	if (Global_17290.f_5484[iVar0])
	{
		unk_0xB14EE32074164477("CommonMenu");
		Global_17290.f_5484[iVar0] = 0;
	}
	if (Global_17290.f_5491[iVar0])
	{
		unk_0xB14EE32074164477("MPShopSale");
		Global_17290.f_5491[iVar0] = 0;
	}
	if (bParam0)
	{
		func_57(&(Global_17290.f_5530[iVar0 /*10*/]));
		Global_17290.f_5591[iVar0] = 0;
	}
	else
	{
		Global_17290.f_5591[iVar0] = 0;
	}
}

void func_57(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x1E3F61C2C1E29520(*uParam0))
		{
			unk_0xA12A0D38735CCBF2(uParam0);
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
		if (unk_0xA86CA03D9749EEB3() && unk_0x391BEA92ECF1B445())
		{
			iParam2 = unk_0x434A417780753DD9();
		}
	}
	StringCopy(&cVar0, unk_0x367152330DB70D69(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0x3BB8D1C5FAAB25B3(&cVar0);
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

void func_59(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x864EAABAADAAA1E3(unk_0x0C1D3C552325765B());
		unk_0x1C491D82EC5FDAD5(unk_0x0C1D3C552325765B(), 1);
		unk_0x4044446FF404F021(unk_0x0C1D3C552325765B(), 1);
		func_68(1);
		unk_0x3437639A811EF082();
		unk_0xB5B3F40B585C8D07();
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xC6CB0C1523C73C77())
			{
				unk_0x588D9B1F6CF36C3C(0);
			}
			if (!func_67())
			{
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_66(1, iParam3, iParam2, 0);
		Global_55822 = 1;
		Global_68128 = 1;
		Global_69615 = 1;
	}
	else
	{
		func_68(0);
		unk_0x2D1364CCF7771349();
		Global_55822 = 0;
		if (bParam1)
		{
			unk_0xF100005CC9E0A614();
		}
		unk_0x1C491D82EC5FDAD5(unk_0x0C1D3C552325765B(), 0);
		unk_0x4044446FF404F021(unk_0x0C1D3C552325765B(), 0);
		func_66(0, iParam3, iParam2, 0);
		if (unk_0xA86CA03D9749EEB3())
		{
			if (((!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()) && !func_64(unk_0x0C1D3C552325765B())) && !func_61(unk_0x0C1D3C552325765B(), 0)) && !func_60())
			{
				unk_0x39800A40136ECF37(unk_0xA0081090911D13E5(), 0);
			}
		}
		else if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()) && !func_64(unk_0x0C1D3C552325765B()))
		{
			unk_0x39800A40136ECF37(unk_0xA0081090911D13E5(), 0);
		}
		Global_69615 = 0;
	}
}

bool func_60()
{
	return unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_18, 14);
}

bool func_61(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x0C1D3C552325765B())
	{
		bVar0 = func_62(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1588660[iParam0 /*532*/].f_201 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xCB129F9A01D14082(iParam0))
		{
			bVar0 = unk_0x10B1B072E9514664(iParam0) == 8;
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
	if (Global_1315209[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312725[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_63()
{
	return Global_1312731;
}

int func_64(int iParam0)
{
	if (func_61(iParam0, 0))
	{
		return 1;
	}
	if (func_65())
	{
		if (iParam0 == unk_0x0C1D3C552325765B())
		{
			return 1;
		}
	}
	if (unk_0x08BA6DD398CA197C(Global_2421327[iParam0 /*353*/].f_196, 2))
	{
		return 1;
	}
	return 0;
}

bool func_65()
{
	return unk_0x08BA6DD398CA197C(Global_2359301, 3);
}

int func_66(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x955B8C8F89CC3AC0())
	{
		if (unk_0xD0570FF450787B16() != iParam0 && uParam2)
		{
			unk_0x0898502403A5CFE2(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_67()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_68(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x88B0F0DC270164B7(&Global_2313, 13);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&Global_2313, 13);
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
	
	func_104(&iVar0, &iVar1, &uVar2, &uVar3, 0);
	unk_0xCEEF85C0FC6A898F(2, 201);
	unk_0xCEEF85C0FC6A898F(2, 202);
	unk_0xCEEF85C0FC6A898F(2, 188);
	unk_0xCEEF85C0FC6A898F(2, 187);
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
	bVar4 = (iVar1 < -64 || unk_0x2A57AED61E15C7C7(2, 188));
	bVar5 = (iVar1 > 64 || unk_0x2A57AED61E15C7C7(2, 187));
	bVar6 = unk_0x2A57AED61E15C7C7(2, 201);
	bVar7 = unk_0x2A57AED61E15C7C7(2, 202);
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
			func_103(iLocal_97, 1, 1);
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
	bool bVar52;
	int iVar53;
	bool bVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	int iVar59;
	int iVar60;
	float fVar61;
	float fVar62;
	float fVar63;
	char cVar64[64];
	char cVar80[64];
	float fVar96;
	int iVar97;
	float fVar98;
	float fVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	
	if (!func_58(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_100(0, bParam6))
	{
		return;
	}
	unk_0xCF4C2CE3511D92EA(76, 84);
	unk_0x9EB94F4B302F02C5(-0.05f, -0.05f, 0f, 0f);
	fVar56 = 0f;
	fVar57 = 0f;
	if (Global_17290)
	{
		if (func_98(29, 1, 1, &fVar35, &fVar36, bParam7))
		{
			fVar56 = fVar36;
			fVar57 = fVar35;
			fVar56 = (fVar56 + 0f);
		}
		else
		{
			Global_17290 = 0;
		}
	}
	if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_1)) == unk_0x3BB8D1C5FAAB25B3("HIDE"))
	{
		fVar58 = Global_17288;
	}
	else
	{
		fVar58 = (((Global_17288 + fVar56) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_17289;
	}
	fVar61 = 1f;
	if (bParam7)
	{
		unk_0x28EBEB55C44FD509(&iVar59, &iVar60);
		fVar62 = unk_0x900671749E93DC05(0);
		if (func_97())
		{
			iVar59 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar60) * fVar62));
		}
		fVar63 = (unk_0xBBDA792448DB5A89(iVar59) / unk_0xBBDA792448DB5A89(iVar60));
		fVar61 = (fVar63 / fVar62);
		if (func_97())
		{
			fVar61 = 1f;
		}
		iVar59 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar59) / fVar61));
		iVar60 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar60) / fVar61));
	}
	else
	{
		unk_0xB1F1D8A3052317AC(&iVar59, &iVar60);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17290.f_5598)
		{
			if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_1)) == unk_0x3BB8D1C5FAAB25B3("HIDE"))
			{
				fVar49 = Global_17288;
			}
			else
			{
				if (Global_17290)
				{
					StringCopy(&cVar64, func_96(29), 64);
					StringCopy(&cVar80, func_93(29, 1), 64);
					if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_6703[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_92(Global_17287, Global_17288, fParam5, (fVar56 - 0f), 0, 0, 0, 255);
						unk_0xBD42180765457DB6(&cVar64, &cVar80, (Global_17287 + (fParam5 * 0.5f)), (Global_17288 + ((fVar56 - 0f) * 0.5f)), fVar57, (fVar56 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0xBD42180765457DB6(&cVar64, &cVar80, (Global_17287 + (fParam5 * 0.5f)), (Global_17288 + ((fVar56 - 0f) * 0.5f)), fParam5, (fVar56 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_17290.f_7864)
				{
					iVar1 = Global_17290.f_7860;
					iVar2 = Global_17290.f_7861;
					iVar3 = Global_17290.f_7862;
					iVar4 = Global_17290.f_7863;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_92(Global_17287, (Global_17288 + fVar56), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_17288 + fVar56) + 0.034722f) + 0f);
				if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_1)) != 0)
				{
					func_91();
					unk_0x09BF2ADDAAD5BC05(&(Global_17290.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17290.f_68)
					{
						if (Global_17290.f_5[iVar14] == 2)
						{
							unk_0x3F9D1B882EC0B8AF(Global_17290.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17290.f_5[iVar14] == 3)
						{
							unk_0x63A04EB63F481124(Global_17290.f_14[iVar16], Global_17290.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17290.f_5[iVar14] == 1)
						{
							unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17290.f_5[iVar14] == 8)
						{
							unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17290.f_5[iVar14] == 5)
						{
							unk_0xDA35BDB37E728640(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 6)
						{
							unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 7)
						{
							unk_0xDA35BDB37E728640(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 9)
						{
							unk_0xDA35BDB37E728640(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0x80F8A2A91BE5A679((Global_17287 + 0.00390625f), ((Global_17288 + fVar56) + 0.00416664f), 0);
				}
				if (Global_17290.f_5601 > Global_17290.f_5095)
				{
					if (Global_17290.f_5604 != 0)
					{
						func_91();
						func_89((((Global_17287 + fParam5) - 0.00390625f) - func_90("CM_ITEM_COUNT", Global_17290.f_5604, Global_17290.f_5603)), ((Global_17288 + fVar56) + 0.00416664f), "CM_ITEM_COUNT", Global_17290.f_5604, Global_17290.f_5603);
					}
				}
			}
			iVar6 = Global_17290.f_5605;
			iVar9 = 0;
			fVar96 = fVar49;
			if (Global_17290.f_7874)
			{
				iVar1 = Global_17290.f_7870;
				iVar2 = Global_17290.f_7871;
				iVar3 = Global_17290.f_7872;
				iVar4 = Global_17290.f_7873;
			}
			else
			{
				unk_0x29F530EB20218AC0(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17290.f_5095 && iVar6 <= Global_17290.f_5088)
			{
				if (iVar6 >= 0)
				{
					if (Global_17290.f_5355[iVar6])
					{
						if (Global_17290.f_5226[iVar6] && iVar6 != Global_17290.f_5605)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar55 = 0.034722f;
						if (Global_17290.f_5612[iVar6] != 0f)
						{
							fVar55 = Global_17290.f_5612[iVar6];
						}
						fVar49 = (fVar49 + fVar55);
						iVar9++;
					}
				}
				iVar6++;
			}
			if (bParam3)
			{
				if (iVar9 <= 1)
				{
					fVar55 = 0.034722f;
					fVar49 = (fVar49 + fVar55);
					iVar9++;
					if (Global_17290.f_5088 <= 1)
					{
						Global_17290.f_5088++;
					}
					iVar53 = 1;
				}
			}
			unk_0xBD42180765457DB6("CommonMenu", "Gradient_Bgd", (Global_17287 + (fParam5 * 0.5f)), ((fVar96 + ((fVar49 - fVar96) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar96), 0f, 255, 255, 255, 255, 0);
			if (Global_17290.f_5601 > Global_17290.f_5095)
			{
				if (Global_17290.f_7879)
				{
					iVar1 = Global_17290.f_7875;
					iVar2 = Global_17290.f_7876;
					iVar3 = Global_17290.f_7877;
					iVar4 = Global_17290.f_7878;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_92(Global_17287, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var37 = { unk_0x4F70A6A4752B71C7("CommonMenu", "shop_arrows_upANDdown") };
				Var37.f_0 = (Var37.f_0 * (0.5f / fVar61));
				Var37.f_1 = (Var37.f_1 * (0.5f / fVar61));
				if (Global_17290.f_7892)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0x29F530EB20218AC0(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xBD42180765457DB6("CommonMenu", "shop_arrows_upANDdown", (Global_17287 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((Var37.f_0 / 1280f) * fVar61), ((Var37.f_1 / 720f) * fVar61), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_4562)) != 0 && Global_17290.f_4636 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17287 + 0.0046875f);
				if (Global_17290.f_4638 != 0)
				{
					func_98(Global_17290.f_4638, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17287 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_88(fVar41);
				unk_0x26962CC488F25A87(&(Global_17290.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17290.f_4632)
				{
					if (Global_17290.f_4566[iVar14] == 2)
					{
						unk_0x3F9D1B882EC0B8AF(Global_17290.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17290.f_4566[iVar14] == 3)
					{
						unk_0x63A04EB63F481124(Global_17290.f_4575[iVar16], Global_17290.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17290.f_4566[iVar14] == 1)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 5)
					{
						unk_0xDA35BDB37E728640(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 6)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 7)
					{
						unk_0xDA35BDB37E728640(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 9)
					{
						unk_0xDA35BDB37E728640(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xC05C59027C3AD7C0(fVar41, (fVar49 + 0.00277776f));
				unk_0x29F530EB20218AC0(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_92(Global_17287, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17290.f_7884)
				{
					iVar1 = Global_17290.f_7880;
					iVar2 = Global_17290.f_7881;
					iVar3 = Global_17290.f_7882;
					iVar4 = Global_17290.f_7883;
				}
				else
				{
					unk_0x29F530EB20218AC0(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xBD42180765457DB6("CommonMenu", "Gradient_Bgd", (Global_17287 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x167B696877E49A32(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x167B696877E49A32(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_88(fVar41);
				unk_0x09BF2ADDAAD5BC05(&(Global_17290.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17290.f_4632)
				{
					if (Global_17290.f_4566[iVar14] == 2)
					{
						unk_0x3F9D1B882EC0B8AF(Global_17290.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17290.f_4566[iVar14] == 3)
					{
						unk_0x63A04EB63F481124(Global_17290.f_4575[iVar16], Global_17290.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17290.f_4566[iVar14] == 1)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 5)
					{
						unk_0xDA35BDB37E728640(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 6)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 7)
					{
						unk_0xDA35BDB37E728640(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 9)
					{
						unk_0xDA35BDB37E728640(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 8)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x80F8A2A91BE5A679(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_17290.f_4638 != 0)
				{
					func_98(Global_17290.f_4638, 1, 1, &fVar35, &fVar36, bParam7);
					func_87(Global_17290.f_4638, 1, &iVar46, &iVar47, &iVar48);
					unk_0xBD42180765457DB6(func_96(Global_17290.f_4638), func_93(Global_17290.f_4638, 1), ((Global_17287 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0x167B696877E49A32(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17290.f_4636 > 0)
				{
					if ((unk_0xDF658EB6CA91DFBC() - Global_17290.f_4637) > Global_17290.f_4636)
					{
						StringCopy(&(Global_17290.f_4562), "", 16);
						Global_17290.f_4636 = -1;
					}
				}
			}
			if (unk_0x3BB8D1C5FAAB25B3(&(Global_2576577.f_21)) != 0 && Global_2576577.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17287 + 0.0046875f);
				if (Global_2576577.f_67 != 0)
				{
					func_98(Global_2576577.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17287 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_88(fVar41);
				unk_0x26962CC488F25A87(&(Global_2576577.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2576577.f_61)
				{
					if (Global_2576577.f_25[iVar14] == 2)
					{
						unk_0x3F9D1B882EC0B8AF(Global_2576577.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2576577.f_25[iVar14] == 3)
					{
						unk_0x63A04EB63F481124(Global_2576577.f_34[iVar16], Global_2576577.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2576577.f_25[iVar14] == 1)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2576577.f_25[iVar14] == 5)
					{
						unk_0xDA35BDB37E728640(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2576577.f_25[iVar14] == 6)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2576577.f_25[iVar14] == 7)
					{
						unk_0xDA35BDB37E728640(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2576577.f_25[iVar14] == 9)
					{
						unk_0xDA35BDB37E728640(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2576577.f_25[iVar14] == 8)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xC05C59027C3AD7C0(fVar41, (fVar49 + 0.00277776f));
				unk_0x29F530EB20218AC0(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_92(Global_17287, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17290.f_7884)
				{
					iVar1 = Global_17290.f_7880;
					iVar2 = Global_17290.f_7881;
					iVar3 = Global_17290.f_7882;
					iVar4 = Global_17290.f_7883;
				}
				else
				{
					unk_0x29F530EB20218AC0(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xBD42180765457DB6("CommonMenu", "Gradient_Bgd", (Global_17287 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x167B696877E49A32(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x167B696877E49A32(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_88(fVar41);
				unk_0x09BF2ADDAAD5BC05(&(Global_2576577.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2576577.f_61)
				{
					if (Global_2576577.f_25[iVar14] == 2)
					{
						unk_0x3F9D1B882EC0B8AF(Global_2576577.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2576577.f_25[iVar14] == 3)
					{
						unk_0x63A04EB63F481124(Global_2576577.f_34[iVar16], Global_2576577.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2576577.f_25[iVar14] == 1)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2576577.f_25[iVar14] == 8)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2576577.f_25[iVar14] == 5)
					{
						unk_0xDA35BDB37E728640(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2576577.f_25[iVar14] == 6)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2576577.f_25[iVar14] == 7)
					{
						unk_0xDA35BDB37E728640(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2576577.f_25[iVar14] == 9)
					{
						unk_0xDA35BDB37E728640(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x80F8A2A91BE5A679(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_2576577.f_67 != 0)
				{
					func_98(Global_2576577.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					func_87(Global_2576577.f_67, 1, &iVar46, &iVar47, &iVar48);
					unk_0xBD42180765457DB6(func_96(Global_2576577.f_67), func_93(Global_2576577.f_67, 1), ((Global_17287 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0x167B696877E49A32(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_2576577.f_65 > 0)
				{
					if ((unk_0xDF658EB6CA91DFBC() - Global_2576577.f_66) > Global_2576577.f_65)
					{
						StringCopy(&(Global_2576577.f_21), "", 16);
						Global_2576577.f_65 = -1;
					}
				}
			}
			func_82(iVar59, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			unk_0xCF4C2CE3511D92EA(76, 84);
			unk_0x9EB94F4B302F02C5(-0.05f, -0.05f, 0f, 0f);
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
			iVar97 = Global_17290.f_5088;
			if (Global_17290.f_5599)
			{
				iVar97 = (Global_17290.f_5602 - 1);
			}
			fVar98 = 0f;
			fVar99 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar97)
			{
				fVar55 = 0.034722f;
				if (Global_17290.f_5612[iVar6] != 0f)
				{
					fVar55 = Global_17290.f_5612[iVar6];
				}
				if (Global_17290.f_5599)
				{
					iVar6 = Global_17290.f_7520[iVar7];
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
						fVar99 = fVar98;
					}
					if (Global_17290.f_5226[iVar6])
					{
						iVar12++;
					}
					fVar34 = (((fVar58 + fVar98) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_17290.f_5746[iVar6] = fVar34;
				fVar33 = (Global_17287 + 0.0046875f);
				bVar40 = false;
				bVar31 = Global_17290.f_5606 == iVar6;
				if ((bVar31 && iVar5 == 1) && bVar32)
				{
					iVar100 = 255;
					iVar101 = 255;
					iVar102 = 255;
					iVar103 = 255;
					if (Global_17290.f_7886)
					{
						unk_0x29F530EB20218AC0(Global_17290.f_7885, &iVar100, &iVar101, &iVar102, &iVar103);
					}
					else
					{
						unk_0x29F530EB20218AC0(1, &iVar100, &iVar101, &iVar102, &iVar103);
					}
					unk_0xBD42180765457DB6("CommonMenu", "Gradient_Nav", (Global_17287 + (fParam5 * 0.5f)), (((fVar58 + fVar99) + (0.00277776f * IntToFloat(iVar12))) + (fVar55 * 0.5f)), fParam5, fVar55, 0f, iVar100, iVar101, iVar102, iVar103, 0);
					Global_17290.f_5744 = fVar34;
				}
				if (iVar53 && iVar7 == iVar97)
				{
					func_80(bVar31, 1, 0, 0, 0, 0, 0);
					unk_0x09BF2ADDAAD5BC05("DFLT_MNU_OPT");
					unk_0x80F8A2A91BE5A679(fVar33, fVar34, 0);
					bVar40 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_17290.f_5096)
					{
						if (unk_0x08BA6DD398CA197C(Global_17290.f_4959[iVar6], iVar8) || Global_17290.f_4926[iVar8] == 5)
						{
							if (Global_17290.f_5599)
							{
								iVar19 = Global_17290.f_7531[((iVar9 * Global_17290.f_5096) + iVar8)];
								iVar20 = Global_17290.f_7572[((iVar9 * Global_17290.f_5096) + iVar8)];
								iVar21 = Global_17290.f_7613[((iVar9 * Global_17290.f_5096) + iVar8)];
								iVar22 = Global_17290.f_7654[((iVar9 * Global_17290.f_5096) + iVar8)];
								iVar23 = Global_17290.f_7695[((iVar9 * Global_17290.f_5096) + iVar8)];
							}
							else
							{
								Global_17290.f_7531[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar19;
								Global_17290.f_7572[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar20;
								Global_17290.f_7613[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar21;
								Global_17290.f_7654[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar22;
								Global_17290.f_7695[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar23;
							}
							iVar104 = 0;
							bVar54 = false;
							if (Global_17290.f_5878[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17290.f_5875[0])
								{
									bVar54 = true;
									iVar104 = 0;
								}
							}
							if (Global_17290.f_5878[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17290.f_5875[1])
								{
									bVar54 = true;
									iVar104 = 1;
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
								bVar52 = true;
							}
							else
							{
								bVar52 = false;
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
											if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
											{
												bVar50 = false;
												bVar51 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
													{
														bVar51 = true;
													}
													else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
													{
														bVar50 = true;
													}
													iVar14++;
												}
												func_80(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar54, iVar104, bVar51, bVar50);
												unk_0x2F736F028E87FCBF(&(Global_17290.f_73[iVar24 /*6*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5)
												{
													if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xDA35BDB37E728640(&(Global_2452282[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 6)
												{
													if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xBDE6EEC5F6BDC060(&(Global_2452282[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 7)
												{
													if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xDA35BDB37E728640(&(Global_2452282[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xDA35BDB37E728640(&(Global_2452282[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 2)
												{
													if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x3F9D1B882EC0B8AF(Global_17290.f_3918[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 3)
												{
													if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x63A04EB63F481124(Global_17290.f_4175[(iVar21 + iVar27)], Global_17290.f_4304[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
											{
												fVar42 = unk_0xCEAFBE1E102E8742(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_98(Global_17290.f_4433[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
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
											Global_17290.f_7736[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar41;
											Global_17290.f_7777[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar42;
											Global_17290.f_7818[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar43;
										}
										else
										{
											fVar41 = Global_17290.f_7736[((iVar9 * Global_17290.f_5096) + iVar8)];
											fVar42 = Global_17290.f_7777[((iVar9 * Global_17290.f_5096) + iVar8)];
											fVar43 = Global_17290.f_7818[((iVar9 * Global_17290.f_5096) + iVar8)];
										}
										if (bVar52)
										{
											if (func_98(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17290.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_98(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_87(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xBD42180765457DB6(func_96(26), func_93(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_98(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_98(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_87(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xBD42180765457DB6(func_96(27), func_93(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar30 = 0;
										if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											bVar51 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													bVar51 = true;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											func_80(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar54, 0, bVar51, bVar50);
											if (Global_17290.f_7890 && Global_17290.f_7891 == iVar6)
											{
												func_79(bVar31);
											}
											unk_0x09BF2ADDAAD5BC05(&(Global_17290.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar30 = 1;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar30 = 8;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xDA35BDB37E728640(&(Global_2452282[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 5;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xBDE6EEC5F6BDC060(&(Global_2452282[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xDA35BDB37E728640(&(Global_2452282[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 7;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xDA35BDB37E728640(&(Global_2452282[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 9;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x3F9D1B882EC0B8AF(Global_17290.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar30 = 2;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x63A04EB63F481124(Global_17290.f_4175[(iVar21 + iVar27)], Global_17290.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar30 = 3;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_17290.f_4433[(iVar22 + iVar28)] == 2 || Global_17290.f_4433[(iVar22 + iVar28)] == 48)
												{
													if (func_98(Global_17290.f_4433[(iVar22 + iVar28)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_98(Global_17290.f_4433[(iVar22 + iVar28)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_87(Global_17290.f_4433[(iVar22 + iVar28)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17290.f_4953[iVar8] == 2)
															{
																unk_0xBD42180765457DB6(func_96(Global_17290.f_4433[(iVar22 + iVar28)]), func_93(Global_17290.f_4433[(iVar22 + iVar28)], bVar31), (((fVar33 + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0xBD42180765457DB6(func_96(Global_17290.f_4433[(iVar22 + iVar28)]), func_93(Global_17290.f_4433[(iVar22 + iVar28)], bVar31), ((fVar33 + fVar41) - (0.00078125f * 8f)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
										if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
										{
											if (iVar30 == 4 && Global_17290.f_4953[iVar8] == 2)
											{
												unk_0x80F8A2A91BE5A679(((fVar33 + fVar41) + (0.00078125f * 7f)), fVar34, 0);
											}
											else
											{
												unk_0x80F8A2A91BE5A679((fVar33 + fVar41), fVar34, 0);
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
													if (func_98(Global_17290.f_4433[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_98(Global_17290.f_4433[(iVar22 + iVar14)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_87(Global_17290.f_4433[(iVar22 + iVar14)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17290.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0xBD42180765457DB6(func_96(Global_17290.f_4433[(iVar22 + iVar14)]), func_93(Global_17290.f_4433[(iVar22 + iVar14)], bVar31), (Global_17287 + (fVar35 * 0.5f)), (((fVar34 + 0.00277776f) + (fVar36 * 0.5f)) - (0.00078125f * 11f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else if (Global_17290.f_4953[iVar8] == 2)
															{
																unk_0xBD42180765457DB6(func_96(Global_17290.f_4433[(iVar22 + iVar14)]), func_93(Global_17290.f_4433[(iVar22 + iVar14)], bVar31), ((((fVar33 + fVar41) + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0xBD42180765457DB6(func_96(Global_17290.f_4433[(iVar22 + iVar14)]), func_93(Global_17290.f_4433[(iVar22 + iVar14)], bVar31), (((fVar33 + fVar41) + fVar42) - (0.00078125f * 12f)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
											func_80(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar54, 0, 0, 0);
											if (Global_17290.f_7890 && Global_17290.f_7891 == iVar6)
											{
												func_79(bVar31);
											}
											unk_0x2F736F028E87FCBF("NUMBER");
											unk_0x3F9D1B882EC0B8AF(Global_17290.f_3918[iVar20]);
											fVar42 = unk_0xCEAFBE1E102E8742(1);
											fVar41 = 0f;
											if (Global_17290.f_4953[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17290.f_4953[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17290.f_7736[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar41;
											Global_17290.f_7777[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17290.f_7736[((iVar9 * Global_17290.f_5096) + iVar8)];
											fVar42 = Global_17290.f_7777[((iVar9 * Global_17290.f_5096) + iVar8)];
										}
										if (bVar52)
										{
											if (func_98(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17290.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_98(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_87(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xBD42180765457DB6(func_96(26), func_93(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_98(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_98(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_87(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xBD42180765457DB6(func_96(27), func_93(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_80(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar54, 0, 0, 0);
										func_78((fVar33 + fVar41), fVar34, "NUMBER", Global_17290.f_3918[iVar20], 0);
									}
									bVar40 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17290.f_5599)
										{
											func_80(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar54, 0, 0, 0);
											if (Global_17290.f_7890 && Global_17290.f_7891 == iVar6)
											{
												func_79(bVar31);
											}
											unk_0x2F736F028E87FCBF("NUMBER");
											unk_0x63A04EB63F481124(Global_17290.f_4175[iVar21], Global_17290.f_4304[iVar21]);
											fVar42 = unk_0xCEAFBE1E102E8742(1);
											fVar41 = 0f;
											if (Global_17290.f_4953[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17290.f_4953[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17290.f_7736[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar41;
											Global_17290.f_7777[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17290.f_7736[((iVar9 * Global_17290.f_5096) + iVar8)];
											fVar42 = Global_17290.f_7777[((iVar9 * Global_17290.f_5096) + iVar8)];
										}
										if (bVar52)
										{
											if (func_98(26, 1, 0, &fVar35, &fVar36, 0))
											{
												if (Global_17290.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_98(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_87(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xBD42180765457DB6(func_96(26), func_93(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_98(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_98(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_87(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xBD42180765457DB6(func_96(27), func_93(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_80(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar54, 0, 0, 0);
										func_77((fVar33 + fVar41), fVar34, "NUMBER", Global_17290.f_4175[iVar21], Global_17290.f_4304[iVar21]);
									}
									bVar40 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar32)
									{
										if (func_98(Global_17290.f_4433[iVar22], bVar31, 0, &fVar35, &fVar36, bParam7))
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
												Global_17290.f_7736[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar41;
												Global_17290.f_7818[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar43;
											}
											else
											{
												fVar41 = Global_17290.f_7736[((iVar9 * Global_17290.f_5096) + iVar8)];
												fVar43 = Global_17290.f_7818[((iVar9 * Global_17290.f_5096) + iVar8)];
											}
											if (bVar52)
											{
												if (func_98(26, 1, 0, &fVar35, &fVar36, bParam7))
												{
													if (Global_17290.f_4953[iVar8] == 2)
													{
														fVar41 = (fVar41 - (fVar35 * 2f));
													}
													fVar44 = (fVar35 * 0.5f);
													if (func_98(26, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_87(26, 1, &iVar46, &iVar47, &iVar48);
														unk_0xBD42180765457DB6(func_96(26), func_93(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
												if (func_98(27, 1, 0, &fVar35, &fVar36, bParam7))
												{
													fVar41 = (fVar41 + fVar35);
													fVar44 = (fVar35 * 0.5f);
													if (func_98(27, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_87(27, 1, &iVar46, &iVar47, &iVar48);
														unk_0xBD42180765457DB6(func_96(27), func_93(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
											}
											if (func_98(Global_17290.f_4433[iVar22], bVar31, 1, &fVar35, &fVar36, bParam7))
											{
												func_87(Global_17290.f_4433[iVar22], bVar31, &iVar46, &iVar47, &iVar48);
												unk_0xBD42180765457DB6(func_96(Global_17290.f_4433[iVar22]), func_93(Global_17290.f_4433[iVar22], bVar31), ((fVar33 + fVar41) + (fVar35 * 0.5f)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), (fVar35 * func_76(Global_17290.f_4433[iVar22])), (fVar36 * func_76(Global_17290.f_4433[iVar22])), 0f, iVar46, iVar47, iVar48, 255, 0);
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
									if (func_98(26, 1, 1, &fVar35, &fVar36, bParam7))
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
						Global_17290.f_7520[iVar9] = iVar6;
						Global_17290.f_5607 = iVar6;
						iVar9++;
						if (Global_17290.f_5226[iVar6])
						{
							iVar13++;
						}
						if (Global_17290.f_5612[iVar6] != 0f)
						{
							fVar98 = (fVar98 + Global_17290.f_5612[iVar6]);
						}
						else
						{
							fVar98 = (fVar98 + 0.034722f);
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
				Global_17290.f_5600 = ((fVar58 + fVar98) + (0.00277776f * IntToFloat(iVar12)));
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
	Global_17290.f_5743 = fVar49;
	Global_17290.f_5745 = unk_0xDF658EB6CA91DFBC();
	unk_0xDA81B130FA38800A(Global_17290.f_5743);
	if (!Global_17290.f_7859)
	{
		func_72();
	}
	Global_17290.f_7859 = 0;
	if (bParam2)
	{
		unk_0x7ABD1B29E6C2963D(10);
	}
	unk_0x7ABD1B29E6C2963D(6);
	unk_0x7ABD1B29E6C2963D(7);
	unk_0x7ABD1B29E6C2963D(9);
	unk_0x7ABD1B29E6C2963D(8);
	if (bParam0)
	{
		func_71(1);
	}
	unk_0x9AA8EEC80385B281();
}

void func_71(int iParam0)
{
	Global_1344178.f_932 = iParam0;
}

void func_72()
{
	if (!Global_14443.f_1 == 1)
	{
		if (func_75(0))
		{
			func_73(0);
		}
		unk_0x88B0F0DC270164B7(&Global_2314, 2);
	}
}

void func_73(int iParam0)
{
	if (Global_14604)
	{
		func_74(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0x88B0F0DC270164B7(&Global_2314, 16);
	}
	if (unk_0xC6CB0C1523C73C77())
	{
		unk_0x588D9B1F6CF36C3C(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0x88B0F0DC270164B7(&Global_2313, 30);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&Global_2313, 30);
	}
	if (!func_67())
	{
		Global_14443.f_1 = 3;
	}
}

void func_74(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_75(0))
		{
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0x4788913DF846A969(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x6D68EB69A9260608(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x6D68EB69A9260608(Global_14380);
		}
		else
		{
			unk_0x6D68EB69A9260608(Global_14371);
		}
	}
}

int func_75(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x08BA6DD398CA197C(Global_2313, 14))
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
	if (unk_0xA96867DD0A63C62C(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
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
	unk_0x09BF2ADDAAD5BC05(sParam2);
	unk_0x63A04EB63F481124(uParam3, uParam4);
	unk_0x80F8A2A91BE5A679(fParam0, fParam1, 0);
}

void func_78(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x09BF2ADDAAD5BC05(sParam2);
	unk_0x3F9D1B882EC0B8AF(iParam3);
	unk_0x80F8A2A91BE5A679(fParam0, fParam1, iParam4);
}

void func_79(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0x29F530EB20218AC0(Global_17290.f_7887[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0x29F530EB20218AC0(Global_17290.f_7887[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0xDEB22FE9E351379F(iVar0, iVar1, iVar2, 255);
}

void func_80(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_81(Global_17290.f_5878[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0x29F530EB20218AC0(1, &iVar0, &iVar1, &iVar2, &iVar3);
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
			unk_0xDEB22FE9E351379F(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0x29F530EB20218AC0(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xDEB22FE9E351379F(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0x29F530EB20218AC0(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xDEB22FE9E351379F(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0xDEB22FE9E351379F(155, 155, 155, 255);
		}
		else
		{
			unk_0xDEB22FE9E351379F(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0xDEB22FE9E351379F(0, 0, 0, unk_0xF34EE736CF047844((255f * 0.8f)));
		}
		else
		{
			unk_0x29F530EB20218AC0(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0xDEB22FE9E351379F(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0xDEB22FE9E351379F(155, 155, 155, 255);
	}
	else
	{
		unk_0xDEB22FE9E351379F(155, 155, 155, 255);
	}
	unk_0xBF14E70921AA4E54(0f, 0.35f);
	unk_0x00D7EEE9B3B84E1C(1);
	if (bParam5)
	{
		unk_0xBF14E70921AA4E54(0f, 0.425f);
		unk_0x03FEF1B70B6CD8DA(4);
	}
	else if (bParam6)
	{
		unk_0xBF14E70921AA4E54(0f, 0.425f);
		unk_0x03FEF1B70B6CD8DA(6);
	}
	else
	{
		unk_0x03FEF1B70B6CD8DA(0);
	}
	unk_0x366FF85701018BC1(0f, 1f);
	unk_0x81111C63B56D4B25(0);
	unk_0x996F92DB3D314DB1(0, 0, 0, 0, 0);
	unk_0x7744A5D6F8CE8FA9(0, 0, 0, 0, 0);
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
	if (iParam3 && !func_100(bParam4, bParam8))
	{
		return;
	}
	if (func_85())
	{
		return;
	}
	if (unk_0x04781D6F82022E77())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_61(unk_0x0C1D3C552325765B(), 0))
		{
			return;
		}
	}
	if (unk_0x955B8C8F89CC3AC0())
	{
		if (unk_0xC5400265B5C1CEB3() == 0 || unk_0x04781D6F82022E77())
		{
			return;
		}
	}
	if (Global_17290.f_4639 != 0)
	{
		if (unk_0xFF9B577A7F80CFDD(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17290.f_4639)
			{
				if (Global_17290.f_4896[iVar1] != 348)
				{
					StringCopy(&(Global_17290.f_4641[iVar1 /*16*/]), unk_0x62B1FF1B5EE703A7(2, Global_17290.f_4896[iVar1], 1), 64);
				}
				else if (Global_17290.f_4909[iVar1] != 32)
				{
					StringCopy(&(Global_17290.f_4641[iVar1 /*16*/]), unk_0x611F82FE2F038F7C(2, Global_17290.f_4909[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_17290.f_4640 = 0;
		}
		if (!Global_17290.f_4640)
		{
			unk_0xB9D4F4DE7E7EC038(Global_17290.f_5530[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xE73340DA551C95E1();
			unk_0xB9D4F4DE7E7EC038(Global_17290.f_5530[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x0FFE3C1DBBA72236((1f - (Global_17290.f_4951 / 100f)));
			unk_0xE73340DA551C95E1();
			if (unk_0x955B8C8F89CC3AC0())
			{
				unk_0xB9D4F4DE7E7EC038(Global_17290.f_5530[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x5CC02BB872FEF340(1);
				unk_0xE73340DA551C95E1();
			}
			iVar1 = 0;
			while (iVar1 < Global_17290.f_4639)
			{
				if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_4834[iVar1 /*4*/])) != unk_0x3BB8D1C5FAAB25B3("PREV"))
				{
					unk_0xB9D4F4DE7E7EC038(Global_17290.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x7CBFB9F4AF33C67E(iVar1);
					func_84(&(Global_17290.f_4641[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_4834[iVar2 /*4*/])) == unk_0x3BB8D1C5FAAB25B3("PREV"))
					{
						func_84(&(Global_17290.f_4641[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17290.f_4883[iVar1] == -1)
					{
						func_83(&(Global_17290.f_4834[iVar1 /*4*/]));
					}
					else
					{
						unk_0x709662CF2BD061A4(&(Global_17290.f_4834[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x37F0707A16E921F7(iParam2, 70);
						}
						else
						{
							unk_0x3F9D1B882EC0B8AF(iParam2);
						}
						unk_0x1E77BE8F4283FA05();
					}
					if (unk_0x955B8C8F89CC3AC0())
					{
						if (Global_17290.f_4896[iVar1] != 348 && unk_0x08BA6DD398CA197C(Global_17290.f_4922, iVar1))
						{
							unk_0x5CC02BB872FEF340(1);
							unk_0x7CBFB9F4AF33C67E(Global_17290.f_4896[iVar1]);
						}
						else
						{
							unk_0x5CC02BB872FEF340(0);
							unk_0x7CBFB9F4AF33C67E(348);
						}
					}
					unk_0xE73340DA551C95E1();
				}
				iVar1++;
			}
			if (unk_0x3BB8D1C5FAAB25B3(&(Global_2576577.f_16)) != unk_0x3BB8D1C5FAAB25B3(""))
			{
				unk_0xB9D4F4DE7E7EC038(Global_17290.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x7CBFB9F4AF33C67E(Global_17290.f_4639);
				func_84(&Global_2576577);
				if (Global_2576577.f_20 == -1)
				{
					func_83(&(Global_2576577.f_16));
				}
				else
				{
					unk_0x709662CF2BD061A4(&(Global_2576577.f_16));
					if (bParam5)
					{
						unk_0x37F0707A16E921F7(iParam2, 70);
					}
					else
					{
						unk_0x3F9D1B882EC0B8AF(iParam2);
					}
					unk_0x1E77BE8F4283FA05();
				}
				unk_0xE73340DA551C95E1();
			}
			unk_0xB9D4F4DE7E7EC038(Global_17290.f_5530[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x7CBFB9F4AF33C67E(0);
			unk_0x7CBFB9F4AF33C67E(0);
			unk_0x7CBFB9F4AF33C67E(0);
			unk_0x7CBFB9F4AF33C67E(80);
			unk_0xE73340DA551C95E1();
			unk_0xB9D4F4DE7E7EC038(Global_17290.f_5530[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17290.f_4952)
			{
				unk_0x7CBFB9F4AF33C67E(1);
			}
			else
			{
				unk_0x7CBFB9F4AF33C67E(0);
			}
			unk_0xE73340DA551C95E1();
			Global_17290.f_4640 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17290.f_4639)
		{
			if (Global_17290.f_4883[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0xB9D4F4DE7E7EC038(Global_17290.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x7CBFB9F4AF33C67E(iVar1);
					unk_0x709662CF2BD061A4(&(Global_17290.f_4834[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x37F0707A16E921F7(iParam2, 70);
					}
					else
					{
						unk_0x3F9D1B882EC0B8AF(iParam2);
					}
					unk_0x1E77BE8F4283FA05();
					unk_0xE73340DA551C95E1();
				}
			}
			iVar1++;
		}
		if (Global_2576577.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0xB9D4F4DE7E7EC038(Global_17290.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x7CBFB9F4AF33C67E(iVar1);
				unk_0x709662CF2BD061A4(&(Global_2576577.f_16));
				if (bParam5)
				{
					unk_0x37F0707A16E921F7(iParam2, 70);
				}
				else
				{
					unk_0x3F9D1B882EC0B8AF(iParam2);
				}
				unk_0x1E77BE8F4283FA05();
				unk_0xE73340DA551C95E1();
			}
		}
		unk_0xCF4C2CE3511D92EA(76, 66);
		unk_0x9EB94F4B302F02C5(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17290.f_7894)
			{
				unk_0x9EAFA57A34157CEF(15, 0f, -0.0375f);
				Global_17290.f_7894 = 1;
			}
		}
		else if (Global_17290.f_7894)
		{
			unk_0xC667A7C5CE24C569(15);
			Global_17290.f_7894 = 0;
		}
		unk_0x9AA8EEC80385B281();
		if (Global_17290.f_4925)
		{
			unk_0xCF4C2CE3511D92EA(82, 66);
			unk_0x9EB94F4B302F02C5(0f, 0f, 0f, 0f);
			unk_0x04F50370A3D0809C(Global_17290.f_5530[iVar0 /*10*/], Global_17290.f_4923, Global_17290.f_4924, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x9AA8EEC80385B281();
		}
		else
		{
			unk_0x0F83039847376F53(Global_17290.f_5530[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_83(var uParam0)
{
	unk_0x709662CF2BD061A4(uParam0);
	unk_0x1E77BE8F4283FA05();
}

void func_84(var uParam0)
{
	unk_0x481EA0389B099920(uParam0);
}

int func_85()
{
	struct<3> Var0;
	
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	if (func_86())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0x4788913DF846A969(&Var0);
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

int func_86()
{
	if (unk_0xA96867DD0A63C62C(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_87(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	
	unk_0x29F530EB20218AC0(1, iParam2, iParam3, iParam4, &uVar0);
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
	
	unk_0x29F530EB20218AC0(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x03FEF1B70B6CD8DA(0);
	unk_0xBF14E70921AA4E54(0f, 0.35f);
	unk_0x2FBB13D1590A874B(2);
	unk_0xDEB22FE9E351379F(iVar0, iVar1, iVar2, iVar3);
	unk_0x366FF85701018BC1(fParam0, ((Global_17287 + Global_17289) - 0.0046875f));
	unk_0x81111C63B56D4B25(0);
	unk_0x996F92DB3D314DB1(0, 0, 0, 0, 0);
	unk_0x7744A5D6F8CE8FA9(0, 0, 0, 0, 0);
}

void func_89(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x09BF2ADDAAD5BC05(sParam2);
	unk_0x3F9D1B882EC0B8AF(uParam3);
	unk_0x3F9D1B882EC0B8AF(uParam4);
	unk_0x80F8A2A91BE5A679(fParam0, fParam1, 0);
}

float func_90(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0xD28EDDD3F7264249(sParam0))
	{
		if (unk_0x3BB8D1C5FAAB25B3(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_91();
	unk_0x2F736F028E87FCBF(sParam0);
	unk_0x3F9D1B882EC0B8AF(uParam1);
	unk_0x3F9D1B882EC0B8AF(uParam2);
	return unk_0xCEAFBE1E102E8742(1);
}

void func_91()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x29F530EB20218AC0(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17290.f_7869)
	{
		iVar0 = Global_17290.f_7865;
		iVar1 = Global_17290.f_7866;
		iVar2 = Global_17290.f_7867;
		iVar3 = Global_17290.f_7868;
	}
	unk_0x03FEF1B70B6CD8DA(0);
	unk_0xBF14E70921AA4E54(0f, 0.35f);
	unk_0xDEB22FE9E351379F(iVar0, iVar1, iVar2, iVar3);
	unk_0x366FF85701018BC1((Global_17287 + 0.0046875f), ((Global_17287 + Global_17289) - 0.0046875f));
	unk_0x81111C63B56D4B25(0);
	unk_0x996F92DB3D314DB1(0, 0, 0, 0, 0);
	unk_0x7744A5D6F8CE8FA9(0, 0, 0, 0, 0);
}

void func_92(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0x676A3D7F15838EEA((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_93(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;
	
	if (!unk_0x509383441597090D(&(Global_17290.f_6703[iParam0 /*16*/])))
	{
		if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_6703[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var19 = { func_95(unk_0x0C1D3C552325765B()) };
			if (unk_0xFD20D4DB68C4280F(&Var19, &uVar3))
			{
				return func_94(&uVar3);
			}
		}
		else
		{
			return func_94(&(Global_17290.f_6703[iParam0 /*16*/]));
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

struct<13> func_95(var uParam0)
{
	struct<13> Var0;
	
	unk_0xCA4A074601307AB8(uParam0, &Var0, 13);
	return Var0;
}

char* func_96(int iParam0)
{
	var uVar0;
	struct<13> Var16;
	
	if (!unk_0x509383441597090D(&(Global_17290.f_5886[iParam0 /*16*/])))
	{
		if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_5886[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var16 = { func_95(unk_0x0C1D3C552325765B()) };
			unk_0xFD20D4DB68C4280F(&Var16, &uVar0);
			return func_94(&uVar0);
		}
		else
		{
			return func_94(&(Global_17290.f_5886[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

int func_97()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x28EBEB55C44FD509(&iVar0, &iVar1);
	fVar2 = (unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_98(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	
	StringCopy(&cVar0, func_96(iParam0), 64);
	StringCopy(&cVar16, func_93(iParam0, bParam1), 64);
	if (unk_0x3BB8D1C5FAAB25B3(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			unk_0x28EBEB55C44FD509(&iVar32, &iVar33);
			fVar35 = unk_0x900671749E93DC05(0);
			if (func_97())
			{
				iVar32 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar33) * fVar35));
			}
			fVar36 = (unk_0xBBDA792448DB5A89(iVar32) / unk_0xBBDA792448DB5A89(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_97())
			{
				fVar34 = 1f;
			}
			if (unk_0xA96867DD0A63C62C(joaat("director_mode")) > 0)
			{
				unk_0xB1F1D8A3052317AC(&iVar32, &iVar33);
			}
			iVar32 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar32) / fVar34));
			iVar33 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar33) / fVar34));
		}
		else
		{
			unk_0xB1F1D8A3052317AC(&iVar32, &iVar33);
		}
		Var37 = { unk_0x4F70A6A4752B71C7(&cVar0, &cVar16) };
		Var37.f_0 = (Var37.f_0 * (func_99(iParam0) / fVar34));
		Var37.f_1 = (Var37.f_1 * (func_99(iParam0) / fVar34));
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
		if (iParam0 == 29 && unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_6703[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var37.f_0 = 106f;
			Var37.f_1 = 106f;
		}
		*fParam3 = ((Var37.f_0 / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((Var37.f_1 / IntToFloat(iVar33)) / (Var37.f_0 / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x626C2E82CA013B68() && iParam0 != 30)
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

float func_99(int iParam0)
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

int func_100(bool bParam0, bool bParam1)
{
	if (Global_2432628.f_1384.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0xB20CA7A3EE29687A() || (func_102(8, -1) && func_101() != 64)) || (unk_0xAD490CD811854704() != 0 && !bParam1)) || (unk_0xC740F8182E7E9681() && !bParam0)) || unk_0x0BC39FA2C6867467()) || Global_69877) || Global_17290.f_7893) || unk_0xCD755B20D2481736()) || Global_91458.f_1361)
	{
		return 0;
	}
	return 1;
}

int func_101()
{
	return Global_1315164;
}

bool func_102(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1342783.f_203[iParam1];
			}
			break;
	}
	return unk_0x08BA6DD398CA197C(Global_1342783.f_982, iParam0);
}

void func_103(int iParam0, bool bParam1, int iParam2)
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
		StringCopy(&(Global_2576577.f_21), "", 16);
	}
}

void func_104(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x6822B498C2270E88(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x6822B498C2270E88(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x6822B498C2270E88(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x6822B498C2270E88(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x7648D90D868BBF55(2, 218) * 127f));
			*uParam1 = unk_0xF34EE736CF047844((unk_0x7648D90D868BBF55(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x7648D90D868BBF55(2, 220) * 127f));
			*uParam3 = unk_0xF34EE736CF047844((unk_0x7648D90D868BBF55(2, 221) * 127f));
		}
	}
}

void func_105()
{
	func_116(0);
	func_115(1, 0, 0, 0, 0);
	func_114(1, 1, 1, 1, 1);
	if (Local_83.f_1 == 3)
	{
		func_113("SEA_MENU");
	}
	else
	{
		func_113("STREET_MENU");
	}
	func_109(0, "RACES_OPT_SP", 0, 1, 0, 0);
	func_109(1, "RACES_OPT_MP", 0, 1, 0, 0);
	func_108(201, "ITEM_SELECT", -1);
	func_108(202, "ITEM_EXIT", -1);
	func_107(11, "ITEM_SCROLL", -1);
	func_106(0);
	func_103(0, 1, 1);
	iLocal_97 = 0;
}

void func_106(int iParam0)
{
	Global_17290.f_5605 = iParam0;
}

void func_107(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0x611F82FE2F038F7C(2, iParam0, 1);
	if (Global_17290.f_4639 >= 12)
	{
		StringCopy(&Global_2576577, sVar0, 64);
		StringCopy(&(Global_2576577.f_16), sParam1, 16);
		Global_2576577.f_20 = iParam2;
		return;
		return;
	}
	unk_0x09C86C0C5CA26B1E(&(Global_17290.f_4922), Global_17290.f_4639);
	StringCopy(&(Global_17290.f_4641[Global_17290.f_4639 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17290.f_4834[Global_17290.f_4639 /*4*/]), sParam1, 16);
	Global_17290.f_4883[Global_17290.f_4639] = iParam2;
	Global_17290.f_4896[Global_17290.f_4639] = 348;
	Global_17290.f_4909[Global_17290.f_4639] = iParam0;
	Global_17290.f_4639++;
}

void func_108(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0x62B1FF1B5EE703A7(2, iParam0, 1);
	if (Global_17290.f_4639 >= 12)
	{
		StringCopy(&Global_2576577, sVar0, 64);
		StringCopy(&(Global_2576577.f_16), sParam1, 16);
		Global_2576577.f_20 = iParam2;
		return;
		return;
	}
	unk_0x09C86C0C5CA26B1E(&(Global_17290.f_4922), Global_17290.f_4639);
	StringCopy(&(Global_17290.f_4641[Global_17290.f_4639 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17290.f_4834[Global_17290.f_4639 /*4*/]), sParam1, 16);
	Global_17290.f_4883[Global_17290.f_4639] = iParam2;
	Global_17290.f_4896[Global_17290.f_4639] = iParam0;
	Global_17290.f_4909[Global_17290.f_4639] = 32;
	Global_17290.f_4639++;
}

void func_109(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
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
	if (!unk_0x509383441597090D(sParam1) && !unk_0x7179DC5DD4B8EEBC(sParam1))
	{
	}
	Global_17290.f_1610[Global_17290.f_5090] = bParam3;
	Global_17290.f_1867[Global_17290.f_5090] = iParam4;
	Global_17290.f_5090++;
	if (!bParam3)
	{
		func_112(Global_17290.f_5088, 1);
	}
	else
	{
		func_112(Global_17290.f_5088, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_111(&(Global_17290.f_73[Global_17290.f_5090 /*6*/]));
		if (Global_17290.f_4945[Global_17290.f_5089])
		{
			func_98(26, 1, 0, &fVar2, &uVar3, 0);
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
			fVar4 = func_110(&(Global_17290.f_73[Global_17290.f_5090 /*6*/]));
			if (fVar4 > Global_17290.f_5612[iParam0])
			{
				Global_17290.f_5612[iParam0] = fVar4;
			}
		}
	}
	unk_0x88B0F0DC270164B7(&(Global_17290.f_4959[iParam0]), Global_17290.f_5089);
	Global_17290.f_5089++;
	Global_17290.f_5611 = 1;
	Global_17290.f_5609 = (Global_17290.f_5090 - 1);
	Global_17290.f_5610 = 0;
	Global_17290.f_5608 = iParam2;
}

float func_110(char* sParam0)
{
	if (!unk_0x7179DC5DD4B8EEBC(sParam0))
	{
	}
	return unk_0x167B696877E49A32(0.35f, 0);
}

float func_111(char* sParam0)
{
	if (!unk_0xD28EDDD3F7264249(uParam0))
	{
		if (unk_0x3BB8D1C5FAAB25B3(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_80(0, 1, 0, 0, 0, 0, 0);
	unk_0x2F736F028E87FCBF(sParam0);
	return unk_0xCEAFBE1E102E8742(1);
}

void func_112(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 32f));
	if (bParam1)
	{
		unk_0x88B0F0DC270164B7(&(Global_17290.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&(Global_17290.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_113(char* sParam0)
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

void func_114(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17290.f_4953[0] = iParam0;
	Global_17290.f_4953[1] = iParam1;
	Global_17290.f_4953[2] = iParam2;
	Global_17290.f_4953[3] = iParam3;
	Global_17290.f_4953[4] = iParam4;
}

void func_115(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_116(bool bParam0)
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
		StringCopy(&(Global_2452282[iVar0 /*16*/]), "", 64);
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
		Global_17290.f_4896[iVar0] = 348;
		Global_17290.f_4909[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 51)
	{
		StringCopy(&(Global_17290.f_5886[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17290.f_6703[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	StringCopy(&(Global_2576577.f_16), "", 16);
	Global_2576577.f_20 = -1;
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
	StringCopy(&(Global_2576577.f_21), "", 16);
	Global_2576577.f_61 = 0;
	Global_2576577.f_62 = 0;
	Global_2576577.f_63 = 0;
	Global_2576577.f_64 = 0;
	Global_2576577.f_65 = 0;
	Global_2576577.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_2576577.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_2576577.f_67 = 0;
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
	Global_17290.f_7890 = 0;
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
	Global_17290.f_7869 = 0;
	Global_17290.f_7864 = 0;
	Global_17290.f_7874 = 0;
	Global_17290.f_7879 = 0;
	Global_17290.f_7884 = 0;
	Global_17290.f_7886 = 0;
	Global_17290.f_7892 = 0;
	Global_17287 = 0.05f;
	Global_17288 = 0.05f;
	Global_17289 = 0.225f;
	fVar2 = unk_0x900671749E93DC05(0);
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

bool func_117(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_58(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17290.f_5505[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0x509383441597090D(&(Global_17290.f_5505[iVar0 /*4*/])))
	{
		unk_0x7BCE93123FE81E45(&(Global_17290.f_5505[iVar0 /*4*/]), 9);
		Global_17290.f_5498[iVar0] = 1;
		if (!unk_0x15CD8FB3CF6BE10D(&(Global_17290.f_5505[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0xC41E276F33F448DD("CommonMenu", false);
	Global_17290.f_5484[iVar0] = 1;
	if (!unk_0xC04F047A523E9370("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0xC41E276F33F448DD("MPShopSale", false);
		Global_17290.f_5491[iVar0] = 1;
		if (!unk_0xC04F047A523E9370("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_17290.f_5530[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_118(&(Global_17290.f_5530[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_118(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x1E3F61C2C1E29520(*uParam0))
			{
				*uParam0 = unk_0x474309DF4921072A(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x1E3F61C2C1E29520(*uParam0))
					{
						uParam0->f_8 = unk_0xDF658EB6CA91DFBC();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0xDF658EB6CA91DFBC();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x1E3F61C2C1E29520(*uParam0))
			{
				uParam0->f_8 = unk_0xDF658EB6CA91DFBC();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x1E3F61C2C1E29520(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_119()
{
	int iVar0;
	
	if (func_149())
	{
		if (func_132())
		{
			iVar0 = 6;
			if (Local_83.f_1 == 1)
			{
				iVar0 = 4;
			}
			func_130(iVar0);
			if (func_54(uLocal_103[iVar0]))
			{
				if (bLocal_102)
				{
					if (unk_0x2FB5C9A04733E5EF(uLocal_103[iVar0], cLocal_184, sLocal_185[iVar0], 3))
					{
						unk_0xACD556E2EA6F25CF(uLocal_103[iVar0], cLocal_184, sLocal_185[iVar0], -1056964608);
					}
					func_121(iVar0);
				}
			}
			unk_0xCEEF85C0FC6A898F(0, 51);
			if (unk_0x382DB2E6C29D0F23(0, 51))
			{
				iLocal_194 = 1;
				unk_0x94724F7C938EBE34(1);
				iLocal_82 = 3;
			}
		}
		else if (!iLocal_93)
		{
			unk_0xB3FF3FBDAFD0ADCF(0);
			iLocal_93 = 1;
		}
	}
	else
	{
		func_120();
		if (!iLocal_93)
		{
			unk_0xB3FF3FBDAFD0ADCF(0);
			iLocal_93 = 1;
		}
	}
}

void func_120()
{
	if (iLocal_92 && unk_0xDF658EB6CA91DFBC() > iLocal_95)
	{
		unk_0x94724F7C938EBE34(1);
		iLocal_92 = 0;
	}
}

void func_121(int iParam0)
{
	var uVar0;
	
	if (!unk_0x912AD5A10E7633F0(uLocal_103[iParam0], 0) && !unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
	{
		switch (iLocal_195)
		{
			case 0:
				if (unk_0xB7A628320EFF8E47(unk_0xC59DF10B4FC39DF8(uLocal_103[iParam0], 1), unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1)) < 64f)
				{
					iLocal_196 = 0;
					iLocal_197 = 0;
					iLocal_195 = 1;
				}
				break;
			
			case 1:
				unk_0x95C55738CAE00A20(&uVar0);
				unk_0xD5DC2873808A9CB5(0, unk_0xA0081090911D13E5(), -1, 0, 2);
				unk_0xCD49DDA254A161AF(0, unk_0xA0081090911D13E5(), 0);
				unk_0x70B222EEA46C37FA(uVar0);
				unk_0x3998B29E786DFD96(uLocal_103[iParam0], uVar0);
				unk_0x7DFD14B8B873D6B5(&uVar0);
				iLocal_195 = 2;
				break;
			
			case 2:
				if (unk_0x21178DF77817BF39(uLocal_103[iParam0], 242628503) != 1 || unk_0x85F24E93D5789C43(uLocal_103[iParam0], unk_0xA0081090911D13E5(), 20f))
				{
					unk_0xCD49DDA254A161AF(uLocal_103[iParam0], unk_0xA0081090911D13E5(), -1);
					if (!iLocal_197)
					{
						func_128(uLocal_103[iParam0], "PRERACE_CHAT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					else
					{
						func_128(uLocal_103[iParam0], "PRERACE_TAUNT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					iLocal_195 = 3;
				}
				break;
			
			case 3:
				if (!unk_0x124290C0A019B083(uLocal_103[iParam0]))
				{
					func_126(&uLocal_198);
					unk_0xC9567EA69F3CC4C2(uLocal_103[iParam0], "random@street_race", "_streetracer_wait_loop", 4f, -4f, -1, 9, 0, 0, 0, 0);
					iLocal_195 = 4;
				}
				break;
			
			case 4:
				if (unk_0xB7A628320EFF8E47(unk_0xC59DF10B4FC39DF8(uLocal_103[iParam0], 1), unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1)) > 225f)
				{
					iLocal_195 = 0;
				}
				if (func_122(&uLocal_198) >= 5f && !iLocal_196)
				{
					iLocal_196 = 1;
					iLocal_195 = 1;
				}
				else if (func_122(&uLocal_198) >= 10f && !iLocal_197)
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

float func_122(var uParam0)
{
	if (func_125(uParam0))
	{
		if (func_124(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_123(unk_0x08BA6DD398CA197C(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_123(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0xDF658EB6CA91DFBC());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0xA86CA03D9749EEB3())
	{
		iVar2 = unk_0x4B50AAB32FBE0483();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0xDF658EB6CA91DFBC()) / 1000f);
}

bool func_124(var uParam0)
{
	return unk_0x08BA6DD398CA197C(*uParam0, 2);
}

bool func_125(var uParam0)
{
	return unk_0x08BA6DD398CA197C(*uParam0, 1);
}

void func_126(var uParam0)
{
	func_127(uParam0, 0f);
}

void func_127(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_123(unk_0x08BA6DD398CA197C(*uParam0, 4)) - fParam1);
	unk_0x88B0F0DC270164B7(uParam0, 1);
	unk_0x09C86C0C5CA26B1E(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_128(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x9A1116B636E7177A(uParam0, sParam1, sParam2, func_129(iParam3), 0);
}

int func_129(int iParam0)
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

void func_130(int iParam0)
{
	if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()) && !func_131())
	{
		if (func_54(uLocal_103[iParam0]))
		{
			if (iLocal_93 && unk_0x39053CCA2C4B5DA1(unk_0xA0081090911D13E5()) < 20f)
			{
				unk_0x7F06EF9578636ADC(uLocal_103[iParam0], 0f, 0f, 0f, 1, 2000, 2000, 2000, 0);
				iLocal_93 = 0;
			}
		}
	}
}

int func_131()
{
	if (unk_0x819C3E64C255229B(unk_0xCCC8FE2C71D0E93E()) == 4)
	{
		return 1;
	}
	return 0;
}

int func_132()
{
	if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
	{
		if (func_148())
		{
			return 0;
		}
		if (func_147(func_43()) < Local_83.f_3)
		{
			if (Local_83.f_1 == 3)
			{
				func_144("SEA_NA_CASH", Local_83.f_3);
			}
			else
			{
				func_144("STREET_NA_CASH", Local_83.f_3);
			}
			iLocal_92 = 1;
			iLocal_95 = unk_0xDF658EB6CA91DFBC() + 1000;
			return 0;
		}
		if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
		{
			func_143(&iLocal_0);
			iLocal_0 = unk_0x02056DA113641E74(unk_0xA0081090911D13E5());
			if (!func_138())
			{
				iLocal_92 = 1;
				iLocal_95 = unk_0xDF658EB6CA91DFBC() + 1000;
				return 0;
			}
			else if ((unk_0xC6FE0F623405BFA8(iLocal_0) <= 200 || unk_0x601CCD1205C6523F(iLocal_0)) || func_137())
			{
				func_136("RACE_VehDmg");
				iLocal_92 = 1;
				iLocal_95 = unk_0xDF658EB6CA91DFBC() + 1000;
				return 0;
			}
			else if (unk_0x8FD32443A080784B(iLocal_0, -1, 0) != unk_0xA0081090911D13E5())
			{
				func_133();
				return 0;
			}
			else
			{
				if (func_75(0) || unk_0xA96867DD0A63C62C(joaat("appinternet")) > 0)
				{
					func_120();
					return 0;
				}
				switch (Local_83.f_1)
				{
					case 1:
						func_144("STREET_PLAY_B", Local_83.f_3);
						break;
					
					case 2:
						func_144("STREET_PLAY_C", Local_83.f_3);
						break;
					
					case 3:
						func_136("SEA_PLAY");
						break;
				}
				iLocal_92 = 1;
				iLocal_95 = unk_0xDF658EB6CA91DFBC();
				return 1;
			}
		}
		else
		{
			func_143(&iLocal_0);
			func_133();
			return 0;
		}
	}
	return 0;
}

void func_133()
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
		if (!func_135(sVar0))
		{
			func_134(sVar0);
			iLocal_92 = 1;
			iLocal_95 = unk_0xDF658EB6CA91DFBC() + 1000;
		}
	}
	else if (Local_83.f_1 == 1)
	{
		if (!func_135("STREET_NA_BIKE"))
		{
			func_134("STREET_NA_BIKE");
			iLocal_92 = 1;
			iLocal_95 = unk_0xDF658EB6CA91DFBC() + 1000;
		}
	}
	else if (!func_135("STREET_NA_CAR"))
	{
		func_134("STREET_NA_CAR");
		iLocal_92 = 1;
		iLocal_95 = unk_0xDF658EB6CA91DFBC() + 1000;
	}
}

void func_134(char* sParam0)
{
	unk_0x55B5433015A91E85(sParam0);
	unk_0x85AE92859C5AADE3(0, 1, 1, -1);
}

bool func_135(char* sParam0)
{
	unk_0xA277242E6FB38513(sParam0);
	return unk_0x52387FFD63E8D8FC(0);
}

void func_136(char* sParam0)
{
	if (!func_135(sParam0))
	{
		func_134(sParam0);
	}
}

int func_137()
{
	int iVar0;
	
	iVar0 = unk_0x705BC1BB91F530B5(iLocal_0);
	if (unk_0xBFD32C1D4D54E09B(iVar0))
	{
		if (unk_0x3E474FAD80A0FADB(iLocal_0, 6, 0) || unk_0x3E474FAD80A0FADB(iLocal_0, 7, 0))
		{
			return 1;
		}
	}
	else if (unk_0x0778B61C8A904D0B(iVar0))
	{
		if (((unk_0x3E474FAD80A0FADB(iLocal_0, 0, 0) || unk_0x3E474FAD80A0FADB(iLocal_0, 1, 0)) || unk_0x3E474FAD80A0FADB(iLocal_0, 4, 0)) || unk_0x3E474FAD80A0FADB(iLocal_0, 5, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_138()
{
	int iVar0;
	char* sVar1;
	
	switch (Local_83.f_1)
	{
		case 1:
			iVar0 = func_142();
			if (iVar0 == 1)
			{
				func_136("STREET_NA_COP");
				return 0;
			}
			else if (iVar0 == 2)
			{
				func_136("STREET_NA_BIKE");
				return 0;
			}
			break;
		
		case 2:
			iVar0 = func_140();
			if (iVar0 == 1)
			{
				func_136("STREET_NA_COP");
				return 0;
			}
			else if (iVar0 == 2)
			{
				func_136("STREET_NA_CAR");
				return 0;
			}
			break;
		
		case 3:
			if (!func_139())
			{
				if (func_13(iLocal_111))
				{
					sVar1 = "SEA_NA_VEH";
				}
				else
				{
					sVar1 = "SEA_NA_VEH2";
				}
				func_136(sVar1);
				return 0;
			}
			break;
	}
	return 1;
}

int func_139()
{
	int iVar0;
	
	if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
	{
		if (unk_0xD3FACCDA4D66AEAD(iLocal_0))
		{
			iVar0 = unk_0x705BC1BB91F530B5(iLocal_0);
			if (iVar0 == joaat("seashark") || iVar0 == joaat("seashark2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_140()
{
	int iVar0;
	int iVar1;
	int iVar2[83];
	
	if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
	{
		if (unk_0xD3FACCDA4D66AEAD(iLocal_0))
		{
			iVar0 = unk_0x705BC1BB91F530B5(iLocal_0);
			if (func_141(iVar0))
			{
				return 1;
			}
			if ((((((((((iVar0 == joaat("police4") || iVar0 == joaat("policeold1")) || iVar0 == joaat("policeold2")) || iVar0 == joaat("fbi")) || iVar0 == joaat("fbi2")) || iVar0 == joaat("lguard")) || iVar0 == joaat("sheriff")) || iVar0 == joaat("sheriff2")) || iVar0 == joaat("pranger")) || iVar0 == joaat("ambulance")) || iVar0 == joaat("firetruk"))
			{
				return 1;
			}
			if (((unk_0xBFD32C1D4D54E09B(iVar0) || unk_0xE3C6E31B7236489F(iVar0)) || unk_0xFC4346F9DE2AB4AE(iVar0)) || unk_0x1E3C80E7C4B8041B(iVar0))
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

int func_141(int iParam0)
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

int func_142()
{
	int iVar0;
	
	if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
	{
		if (unk_0xD3FACCDA4D66AEAD(iLocal_0))
		{
			iVar0 = unk_0x705BC1BB91F530B5(iLocal_0);
			if (iVar0 == joaat("policeb"))
			{
				return 1;
			}
			if (unk_0xBFD32C1D4D54E09B(iVar0) && !unk_0xC388189407833D70(iVar0))
			{
				return 0;
			}
		}
	}
	return 2;
}

void func_143(int iParam0)
{
	if (unk_0xD3FACCDA4D66AEAD(*iParam0))
	{
		unk_0x912AD5A10E7633F0(*iParam0, 0);
		if (unk_0x18C670321BC98FDA(*iParam0) && unk_0x687CB62D355FD7FD(*iParam0, 1))
		{
			unk_0x615DE34FC732CF11(iParam0);
		}
	}
}

void func_144(char* sParam0, var uParam1)
{
	if (!func_146(sParam0, uParam1))
	{
		func_145(sParam0, uParam1);
	}
}

void func_145(char* sParam0, int iParam1)
{
	unk_0x55B5433015A91E85(uParam0);
	unk_0x3F9D1B882EC0B8AF(uParam1);
	unk_0x85AE92859C5AADE3(0, 1, 1, -1);
}

bool func_146(char* sParam0, int iParam1)
{
	unk_0xA277242E6FB38513(uParam0);
	unk_0x3F9D1B882EC0B8AF(uParam1);
	return unk_0x52387FFD63E8D8FC(0);
}

int func_147(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0x8A3351ECF43DB941(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0x8A3351ECF43DB941(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0x8A3351ECF43DB941(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_148()
{
	int iVar0;
	
	if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
	{
		if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
		{
			iVar0 = unk_0x02056DA113641E74(unk_0xA0081090911D13E5());
			if (func_14(iVar0))
			{
				if (unk_0x630BD2AFB0686BBA(iVar0))
				{
					if (Local_83.f_1 == 3 && unk_0xB46E03E529421E99(iVar0))
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

int func_149()
{
	int iVar0;
	
	if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
	{
		iVar0 = 20;
		if (Local_83.f_1 == 3)
		{
			iVar0 = 40;
		}
		if (unk_0x999A157665D69393(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), Local_89, 1) < IntToFloat(iVar0) && unk_0x16A396814EC162D8(unk_0xA0081090911D13E5()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_150()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_155(&uLocal_216))
	{
		if (Local_83.f_1 == 2)
		{
			if (func_152())
			{
				if (!unk_0xD3FACCDA4D66AEAD(iLocal_111))
				{
					if (unk_0x2C1B5A0D3E233FC3(iLocal_182) && unk_0x2C1B5A0D3E233FC3(iLocal_182))
					{
						iLocal_111 = unk_0xE044C77D0FC9DB66(iLocal_182, Local_113, fLocal_116, 1, 1);
						if (unk_0x3E2D5709B2B80AB8(1) && unk_0x1EE212CF424A139C())
						{
							iLocal_112 = unk_0x6222225CA508E41C(iLocal_111, 1);
							unk_0xC7A9E9D688D679E8(iLocal_112, iLocal_111, 1, 99999999);
							unk_0xFF5CE2ECB4FBD4A8(iLocal_112, 1);
							unk_0x77637031DE326F70(iLocal_112, 1);
						}
						unk_0x74207974B5483203(iLocal_111);
						unk_0x6F40E1EE32FE6A5E(iLocal_111, 1, 1, 0);
						unk_0xF3E3BC1FD7FDE221(iLocal_111, 1);
						unk_0x474EEA7CEFBBC727(iLocal_111, 1);
						unk_0xA149AF899ECC5C89(unk_0x91715E28C0CEA779(10), 1);
						unk_0x4DA90A8B408EBB18(iLocal_111, unk_0x91715E28C0CEA779(10));
						unk_0x62F8A663774DA6EA(iLocal_111, 0);
						unk_0x2C07692AA3545079(iLocal_182);
						unk_0x4EDE34FBADD967A6(0);
					}
				}
				if (!unk_0xD3FACCDA4D66AEAD(iLocal_117))
				{
					if (unk_0x2C1B5A0D3E233FC3(iLocal_183))
					{
						iLocal_117 = unk_0xE044C77D0FC9DB66(iLocal_183, Local_118, fLocal_121, 1, 1);
						unk_0x6F40E1EE32FE6A5E(iLocal_117, 0, 1, 0);
						unk_0xF3E3BC1FD7FDE221(iLocal_117, 1);
						unk_0x474EEA7CEFBBC727(iLocal_117, 1);
						unk_0x74207974B5483203(iLocal_117);
						unk_0xA149AF899ECC5C89(unk_0x91715E28C0CEA779(10), 1);
						unk_0x4DA90A8B408EBB18(iLocal_117, unk_0x91715E28C0CEA779(10));
						unk_0x62F8A663774DA6EA(iLocal_117, 0);
						unk_0x2C07692AA3545079(iLocal_183);
						unk_0x4EDE34FBADD967A6(0);
					}
				}
				if (unk_0xAD21C77209FD2024(cLocal_184))
				{
					if (iLocal_193)
					{
						iVar0 = 0;
						while (iVar0 <= (iLocal_174 - 1))
						{
							if (unk_0xD3FACCDA4D66AEAD(uLocal_103[iVar0]))
							{
								if (!unk_0x912AD5A10E7633F0(uLocal_103[iVar0], 0) && !func_151(uLocal_103[iVar0], -2017877118))
								{
									unk_0xC9567EA69F3CC4C2(uLocal_103[iVar0], cLocal_184, sLocal_185[iVar0], 1000f, -1000f, -1, 1, 0, 0, 0, 0);
									unk_0x77637031DE326F70(uLocal_103[iVar0], 1);
								}
							}
							else if (unk_0x2C1B5A0D3E233FC3(iLocal_174[iVar0]))
							{
								uLocal_103[iVar0] = unk_0xF8418B3B87CFCCBF(25, iLocal_174[iVar0], Local_136[iVar0 /*3*/], fLocal_158[iVar0], 1, 1);
								unk_0xB8EF5851A40C2867(uLocal_103[iVar0], Local_136[iVar0 /*3*/], 0, 0, 1);
								unk_0xFF5CE2ECB4FBD4A8(uLocal_103[iVar0], 1);
								unk_0xC9567EA69F3CC4C2(uLocal_103[iVar0], cLocal_184, sLocal_185[iVar0], 1000f, -1000f, -1, 1, 0, 0, 0, 0);
								unk_0x77637031DE326F70(uLocal_103[iVar0], 1);
							}
							iVar0++;
						}
						if ((((((((func_54(uLocal_103[0]) && func_54(uLocal_103[1])) && func_54(uLocal_103[2])) && func_54(uLocal_103[3])) && func_54(uLocal_103[4])) && func_54(uLocal_103[5])) && func_54(uLocal_103[6])) && func_13(iLocal_111)) && func_13(iLocal_117))
						{
							bLocal_102 = true;
							iVar0 = 0;
							while (iVar0 <= (iLocal_174 - 1))
							{
								unk_0x2C07692AA3545079(iLocal_174[iVar0]);
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
			if (func_152())
			{
				if (!unk_0xD3FACCDA4D66AEAD(iLocal_111))
				{
					if (unk_0x2C1B5A0D3E233FC3(iLocal_182))
					{
						iLocal_111 = unk_0xE044C77D0FC9DB66(iLocal_182, Local_113, fLocal_116, 1, 1);
						if (unk_0x3E2D5709B2B80AB8(0) && unk_0xB7649D1F13B61AC9())
						{
							iLocal_112 = unk_0x6222225CA508E41C(iLocal_111, 1);
							unk_0xC7A9E9D688D679E8(iLocal_112, iLocal_111, 1, 99999999);
							unk_0xFF5CE2ECB4FBD4A8(iLocal_112, 1);
							unk_0x77637031DE326F70(iLocal_112, 1);
						}
						unk_0x6F40E1EE32FE6A5E(iLocal_111, 1, 1, 0);
						unk_0xF3E3BC1FD7FDE221(iLocal_111, 1);
						unk_0x474EEA7CEFBBC727(iLocal_111, 1);
						unk_0xA149AF899ECC5C89(unk_0x91715E28C0CEA779(10), 1);
						unk_0x4DA90A8B408EBB18(iLocal_111, unk_0x91715E28C0CEA779(10));
						unk_0x62F8A663774DA6EA(iLocal_111, 0);
						unk_0x2C07692AA3545079(iLocal_182);
					}
				}
				if (unk_0xAD21C77209FD2024(cLocal_184))
				{
					if (iLocal_193)
					{
						iVar1 = 0;
						while (iVar1 <= (iLocal_174 - 3))
						{
							if (unk_0xD3FACCDA4D66AEAD(uLocal_103[iVar1]))
							{
								if (!unk_0x912AD5A10E7633F0(uLocal_103[iVar1], 0) && !func_151(uLocal_103[iVar1], -2017877118))
								{
									unk_0xB8EF5851A40C2867(uLocal_103[iVar1], Local_136[iVar1 /*3*/], 0, 0, 1);
									if (iVar1 != 2 && iVar1 != 3)
									{
										unk_0xC9567EA69F3CC4C2(uLocal_103[iVar1], cLocal_184, sLocal_185[iVar1], 1000f, -1000f, -1, 1, 0, 0, 0, 0);
									}
									else
									{
										unk_0xC9567EA69F3CC4C2(uLocal_103[iVar1], cLocal_184, sLocal_185[iVar1], 1000f, -1000f, -1, 1, 0.5f, 0, 0, 0);
									}
									unk_0x77637031DE326F70(uLocal_103[iVar1], 1);
								}
							}
							else if (unk_0x2C1B5A0D3E233FC3(iLocal_174[iVar1]))
							{
								uLocal_103[iVar1] = unk_0xF8418B3B87CFCCBF(25, iLocal_174[iVar1], Local_136[iVar1 /*3*/], fLocal_158[iVar1], 1, 1);
								unk_0xFF5CE2ECB4FBD4A8(uLocal_103[iVar1], 1);
							}
							iVar1++;
						}
						if ((((func_54(uLocal_103[0]) && func_54(uLocal_103[1])) && func_54(uLocal_103[2])) && func_54(uLocal_103[3])) && func_54(uLocal_103[4]))
						{
							unk_0xD5DC2873808A9CB5(uLocal_103[4], unk_0xA0081090911D13E5(), -1, 2048, 4);
							iVar1 = 0;
							while (iVar1 <= (iLocal_174 - 1))
							{
								unk_0x2C07692AA3545079(iLocal_174[iVar1]);
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
			if (func_152())
			{
				if (!unk_0xD3FACCDA4D66AEAD(iLocal_111))
				{
					if (unk_0x2C1B5A0D3E233FC3(iLocal_182))
					{
						iLocal_111 = unk_0xE044C77D0FC9DB66(iLocal_182, Local_113, fLocal_116, 1, 1);
						unk_0x74207974B5483203(iLocal_111);
						unk_0x4EE245C2A6A9DCA1(iLocal_111, 0f);
						unk_0xC78B0CE1A5C15B34(iLocal_111, 0);
						unk_0xA7CCC6EC6AF0626D(iLocal_111, 0);
						if (unk_0x4804D51795E820C2(iLocal_111))
						{
							unk_0xCB50578868A841C2(iLocal_111, 1);
						}
						unk_0x6F40E1EE32FE6A5E(iLocal_111, 0, 1, 0);
					}
				}
				iVar2 = 0;
				iVar2 = 0;
				while (iVar2 < 3)
				{
					if (unk_0xD3FACCDA4D66AEAD(iLocal_166[iVar2]))
					{
						if (unk_0xD3FACCDA4D66AEAD(iLocal_170[iVar2]))
						{
							if (!unk_0xEB361B4BD195A4D3(iLocal_170[iVar2]) && func_13(iLocal_166[iVar2]))
							{
								if (unk_0x6315EBE95A97CADF(iLocal_166[iVar2], -1, 0))
								{
									unk_0xC7E3E32FBCC0DCD6(iLocal_170[iVar2], iLocal_166[iVar2], -1);
								}
							}
						}
						else if (func_13(iLocal_166[iVar2]) && unk_0x2C1B5A0D3E233FC3(joaat("a_m_y_jetski_01")))
						{
							iLocal_170[iVar2] = unk_0x667A2CFA1914073C(iLocal_166[iVar2], 25, joaat("a_m_y_jetski_01"), -1, 1, 1);
							unk_0x181C1956DD1F0598(iLocal_170[iVar2], 0);
							unk_0xFF5CE2ECB4FBD4A8(iLocal_170[iVar2], 1);
						}
					}
					else if (unk_0x2C1B5A0D3E233FC3(iLocal_182))
					{
						iLocal_166[iVar2] = unk_0xE044C77D0FC9DB66(iLocal_182, Local_122[iVar2 /*3*/], fLocal_132[iVar2], 1, 1);
						unk_0x74207974B5483203(iLocal_166[iVar2]);
						unk_0x4EE245C2A6A9DCA1(iLocal_166[iVar2], 0f);
						unk_0xC78B0CE1A5C15B34(iLocal_166[iVar2], 1);
						unk_0xA7CCC6EC6AF0626D(iLocal_166[iVar2], 1);
						if (unk_0x4804D51795E820C2(iLocal_166[iVar2]))
						{
							unk_0xCB50578868A841C2(iLocal_166[iVar2], 1);
						}
						unk_0x6F40E1EE32FE6A5E(iLocal_166[iVar2], 0, 1, 0);
					}
					iVar2++;
				}
				if (((unk_0xD3FACCDA4D66AEAD(iLocal_111) && unk_0xD3FACCDA4D66AEAD(iLocal_166[0])) && unk_0xD3FACCDA4D66AEAD(iLocal_166[1])) && unk_0xD3FACCDA4D66AEAD(iLocal_166[2]))
				{
					unk_0x2C07692AA3545079(iLocal_182);
				}
				if ((unk_0xD3FACCDA4D66AEAD(iLocal_170[0]) && unk_0xD3FACCDA4D66AEAD(iLocal_170[1])) && unk_0xD3FACCDA4D66AEAD(iLocal_170[2]))
				{
					unk_0x2C07692AA3545079(joaat("a_m_y_jetski_01"));
				}
				unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 170, 1);
			}
		}
	}
}

int func_151(int iParam0, int iParam1)
{
	if (func_54(iParam0))
	{
		if (unk_0x21178DF77817BF39(iParam0, iParam1) == 1 || unk_0x21178DF77817BF39(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_152()
{
	if (!func_154())
	{
		return 0;
	}
	if (func_54(unk_0xA0081090911D13E5()))
	{
		if (!func_153(unk_0xA0081090911D13E5(), Local_113, 100f) || unk_0x2C22E7D1C80A53EF())
		{
			return 1;
		}
	}
	return 0;
}

bool func_153(int iParam0, struct<3> Param1, float fParam4)
{
	return unk_0xB7A628320EFF8E47(unk_0xC59DF10B4FC39DF8(iParam0, 1), Param1) <= (fParam4 * fParam4);
}

int func_154()
{
	if (Local_83.f_1 == 3)
	{
		return 1;
	}
	else if (Local_83.f_1 == 1 || Local_83.f_1 == 2)
	{
		if (unk_0x7C42343912622BB6() >= 20 || unk_0x7C42343912622BB6() < 5)
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

int func_155(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_145)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0x08BA6DD398CA197C((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0x08BA6DD398CA197C((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_156(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return 1;
}

bool func_156(var uParam0)
{
	return func_157(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_157(var uParam0, char[4] cParam1, int iParam2)
{
	if (unk_0x08BA6DD398CA197C(uParam0, 30))
	{
		if (unk_0x08BA6DD398CA197C(uParam0, 29))
		{
			switch (func_158(uParam0))
			{
				case 0:
					return unk_0x2C1B5A0D3E233FC3(uParam2);
					break;
				
				case 1:
					return unk_0xAD21C77209FD2024(uParam1);
					break;
				
				case 2:
					return unk_0x322CE47298FFA4A7(cParam1);
					break;
				
				case 3:
					return unk_0xC04F047A523E9370(cParam1);
					break;
				
				case 4:
					return unk_0x48B13379A3313D29(iParam2, cParam1);
					break;
				
				case 5:
					return unk_0x3E85D449D6D4832B(cParam1);
					break;
				
				case 6:
					return unk_0xDD9B91529459212C(cParam1, unk_0x08BA6DD398CA197C(uParam0, 27), -1);
					break;
				
				case 7:
					return unk_0x1CC9F840F1FBB51F(iParam2);
					break;
				
				case 8:
					return unk_0x985A6C5313B2276C(iParam2);
					break;
				
				case 9:
					return unk_0xA83726F584E77AA5();
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

int func_158(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x08BA6DD398CA197C(uParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_159(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_145)
	{
		if ((unk_0xFDE3C5D948890F7C() >= (uParam0->f_146 + uParam0->f_147) || unk_0x08BA6DD398CA197C(Global_91406.f_20, 2)) || unk_0x08BA6DD398CA197C(Global_91406.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (unk_0x08BA6DD398CA197C((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0x08BA6DD398CA197C((*uParam0)[iVar0 /*18*/], 29))
					{
						func_160(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = unk_0xFDE3C5D948890F7C();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_160(var uParam0)
{
	func_161(uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_161(var uParam0, char* sParam1, int iParam2)
{
	if (unk_0x08BA6DD398CA197C(*uParam0, 30))
	{
		switch (func_158(*uParam0))
		{
			case 0:
				unk_0x491067A8E906F22D(uParam2);
				break;
			
			case 1:
				unk_0xA9DC3948106CC3E4(uParam1);
				break;
			
			case 2:
				unk_0x7E1EB8ACEBE481B1(uParam1);
				break;
			
			case 3:
				unk_0xC41E276F33F448DD(uParam1, unk_0x08BA6DD398CA197C(*uParam0, 28));
				break;
			
			case 4:
				unk_0x77051FBD916D3170(uParam2, sParam1);
				break;
			
			case 5:
				unk_0x4D45DF6114075356(sParam1);
				break;
			
			case 6:
				unk_0xDD9B91529459212C(sParam1, unk_0x08BA6DD398CA197C(*uParam0, 27), -1);
				break;
			
			case 7:
				unk_0x97BA1BB955E49665(uParam2);
				break;
			
			case 8:
				unk_0x7BCE93123FE81E45(sParam1, uParam2);
				break;
			
			case 9:
				unk_0x9DFBA65465F4DEE5();
				break;
			
			default:
				break;
		}
		unk_0x88B0F0DC270164B7(uParam0, 29);
	}
}

void func_162()
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
		func_167(Local_83.f_0, &Local_207, &Local_210, &fLocal_213);
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
			func_166(&uLocal_216, iLocal_183);
		}
		iLocal_182 = func_165(Local_83.f_1);
		iVar0 = 0;
		while (iVar0 <= (iLocal_174 - 1))
		{
			func_166(&uLocal_216, iLocal_174[iVar0]);
			iVar0++;
		}
		func_166(&uLocal_216, iLocal_182);
		func_163(&uLocal_216, cLocal_184);
		unk_0x6CC6C8E74EBB04E4(Local_201, Local_204, 0, 0);
		unk_0xC4B3EC24D2EFC927(Local_207, Local_210, fLocal_213, 0, 0, 1);
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
		func_166(&uLocal_216, iLocal_182);
		func_166(&uLocal_216, joaat("a_m_y_jetski_01"));
	}
}

void func_163(var uParam0, char* sParam1)
{
	func_164(uParam0, 1, -1, sParam1, 0);
}

void func_164(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0x08BA6DD398CA197C((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0x08BA6DD398CA197C((*uParam0)[iVar0 /*18*/], iParam1))
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
					if (!unk_0x28C1B9853548BD8E(sParam3, "NULL"))
					{
						if (unk_0x28C1B9853548BD8E(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
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
		if (!unk_0x08BA6DD398CA197C((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0x88B0F0DC270164B7(uParam0[iVar0 /*18*/], iParam1);
			unk_0x88B0F0DC270164B7(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_165(int iParam0)
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

void func_166(var uParam0, int iParam1)
{
	func_164(uParam0, 0, iParam1, "NULL", 0);
}

void func_167(int iParam0, var uParam1, var uParam2, float fParam3)
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

int func_168()
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
	if (Global_55810)
	{
		return 0;
	}
	if (func_191())
	{
		return 0;
	}
	if (Local_83.f_1 != 3 && func_43() != 1)
	{
		return 0;
	}
	if (unk_0x780D34E966DDA53A())
	{
		return 0;
	}
	if (func_54(unk_0xA0081090911D13E5()) && unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
	{
		uVar0 = unk_0x525584039F375488();
		if (((func_13(uVar0) && unk_0x72550A6F2BC0E12B(unk_0xA0081090911D13E5(), uVar0)) && !func_190(unk_0xA0081090911D13E5(), uVar0, -1)) && unk_0x705BC1BB91F530B5(uVar0) != joaat("taxi"))
		{
			return 0;
		}
	}
	switch (Local_83.f_0)
	{
		case 0:
			if (Global_101527[0])
			{
				return 0;
			}
			break;
		
		case 1:
			if (Global_101527[1])
			{
				return 0;
			}
			break;
		
		case 2:
			if (Global_101527[2])
			{
				return 0;
			}
			break;
		
		case 3:
			if (Global_101527[3])
			{
				return 0;
			}
			break;
		
		case 4:
			if (Global_101527[4])
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_101517[0])
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_101517[1])
			{
				return 0;
			}
			break;
		
		case 7:
			if (Global_101517[2])
			{
				return 0;
			}
			break;
		
		case 8:
			if (Global_101517[3])
			{
				return 0;
			}
			break;
	}
	if (!func_154())
	{
		iVar1 = 0;
		while (iVar1 <= (iLocal_174 - 1))
		{
			if (func_54(uLocal_103[iVar1]))
			{
				unk_0x95C55738CAE00A20(&uVar2);
				unk_0xA1C77F22802A787B(0, iVar1 * 100);
				unk_0x971ED137B3AF56D8(0, 1193033728, 0);
				unk_0x70B222EEA46C37FA(uVar2);
				unk_0x3998B29E786DFD96(uLocal_103[iVar1], uVar2);
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= (iLocal_170 - 1))
		{
			if (func_54(iLocal_170[iVar1]))
			{
				unk_0x95C55738CAE00A20(&uVar2);
				unk_0xA1C77F22802A787B(0, iVar1 * 110);
				if (func_13(iLocal_166[iVar1]) && unk_0x1FD87E888EB4FC00(iLocal_170[iVar1], iLocal_166[iVar1], 0))
				{
					unk_0x1F1428EF73399830(0, iLocal_166[iVar1], 30f, 786597);
				}
				else
				{
					unk_0x971ED137B3AF56D8(0, 1193033728, 0);
				}
				unk_0x70B222EEA46C37FA(uVar2);
				unk_0x3998B29E786DFD96(iLocal_170[iVar1], uVar2);
			}
			iVar1++;
		}
		if (func_54(iLocal_112))
		{
			if (func_13(iLocal_111) && unk_0x1FD87E888EB4FC00(iLocal_112, iLocal_111, 0))
			{
				unk_0x1F1428EF73399830(iLocal_112, iLocal_111, 30f, 786597);
			}
			else
			{
				unk_0x971ED137B3AF56D8(iLocal_112, 1193033728, 0);
			}
		}
		return 0;
	}
	if (func_170())
	{
		iVar4 = 0;
		while (iVar4 <= (iLocal_174 - 1))
		{
			if (func_54(uLocal_103[iVar4]))
			{
				unk_0x95C55738CAE00A20(&uVar3);
				unk_0xA1C77F22802A787B(0, iVar4 * 50);
				unk_0x69E46DC398F0B2BD(0, unk_0xA0081090911D13E5(), 500f, -1, 0, 0);
				unk_0x70B222EEA46C37FA(uVar3);
				if ((iVar4 % 2) == 0)
				{
					func_169(uLocal_103[iVar4], 1);
				}
				unk_0x3998B29E786DFD96(uLocal_103[iVar4], uVar3);
			}
			iVar4++;
		}
		iVar4 = 0;
		while (iVar4 <= (iLocal_170 - 1))
		{
			if (func_13(iLocal_166[iVar4]) && Local_83.f_1 == 3)
			{
				unk_0xCB50578868A841C2(iLocal_166[iVar4], 0);
			}
			if (func_54(iLocal_170[iVar4]))
			{
				unk_0x95C55738CAE00A20(&uVar3);
				unk_0xA1C77F22802A787B(0, iVar4 * 60);
				if (func_13(iLocal_166[iVar4]) && unk_0x1FD87E888EB4FC00(iLocal_170[iVar4], iLocal_166[iVar4], 0))
				{
					unk_0x1F1428EF73399830(0, iLocal_166[iVar4], 50f, 786468);
				}
				else
				{
					unk_0x69E46DC398F0B2BD(0, unk_0xA0081090911D13E5(), 500f, -1, 0, 0);
				}
				unk_0x70B222EEA46C37FA(uVar3);
				unk_0x3998B29E786DFD96(iLocal_170[iVar4], uVar3);
				if ((iVar4 % 2) == 0)
				{
					func_169(iLocal_170[iVar4], 1);
				}
			}
			iVar4++;
		}
		if (func_13(iLocal_111) && Local_83.f_1 == 3)
		{
			unk_0xCB50578868A841C2(iLocal_111, 0);
		}
		if (func_54(iLocal_112))
		{
			if (func_13(iLocal_111) && unk_0x1FD87E888EB4FC00(iLocal_112, iLocal_111, 0))
			{
				unk_0x1F1428EF73399830(iLocal_112, iLocal_111, 50f, 786468);
			}
			else
			{
				unk_0x69E46DC398F0B2BD(iLocal_112, unk_0xA0081090911D13E5(), 500f, -1, 0, 0);
			}
		}
		switch (Local_83.f_0)
		{
			case 0:
				Global_101527[0] = 1;
				Global_101533[0] = unk_0xDF658EB6CA91DFBC();
				break;
			
			case 1:
				Global_101527[1] = 1;
				Global_101533[1] = unk_0xDF658EB6CA91DFBC();
				break;
			
			case 2:
				Global_101527[2] = 1;
				Global_101533[2] = unk_0xDF658EB6CA91DFBC();
				break;
			
			case 3:
				Global_101527[3] = 1;
				Global_101533[3] = unk_0xDF658EB6CA91DFBC();
				break;
			
			case 4:
				Global_101527[4] = 1;
				Global_101533[4] = unk_0xDF658EB6CA91DFBC();
				break;
			
			case 5:
				Global_101517[0] = 1;
				Global_101522[0] = unk_0xDF658EB6CA91DFBC();
				break;
			
			case 6:
				Global_101517[1] = 1;
				Global_101522[1] = unk_0xDF658EB6CA91DFBC();
				break;
			
			case 7:
				Global_101517[2] = 1;
				Global_101522[2] = unk_0xDF658EB6CA91DFBC();
				break;
			
			case 8:
				Global_101517[3] = 1;
				Global_101522[3] = unk_0xDF658EB6CA91DFBC();
				break;
		}
		return 0;
	}
	return 1;
}

void func_169(var uParam0, bool bParam1)
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
		iVar2 = unk_0xB5BF1B58C833F7A9(0, iVar1);
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
		if (unk_0x1F1602FD864AA4C1(uParam0))
		{
			func_128(uParam0, sVar0, "WAVELOAD_PAIN_MALE", 24);
		}
		else
		{
			func_128(uParam0, sVar0, "WAVELOAD_PAIN_FEMALE", 24);
		}
	}
}

int func_170()
{
	int iVar0;
	
	if (unk_0xBD7EFE00EBB42D77(unk_0x0C1D3C552325765B(), 0))
	{
		return 1;
	}
	if (Local_83.f_1 == 3)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_170 - 1))
		{
			if (unk_0xD3FACCDA4D66AEAD(iLocal_170[iVar0]))
			{
				if (unk_0xEB361B4BD195A4D3(iLocal_170[iVar0]))
				{
					return 1;
				}
				else if (func_171(iLocal_170[iVar0], 1, 1116471296, 1126825984, 0, 0, 0, 0) || unk_0x12AE3D700F6A2545(iLocal_170[iVar0]))
				{
					return 1;
				}
			}
			if (unk_0xD3FACCDA4D66AEAD(iLocal_166[iVar0]))
			{
				if (unk_0x912AD5A10E7633F0(iLocal_166[iVar0], 0))
				{
					return 1;
				}
				else if (unk_0x4AEC0F4FC7FE62C7(iLocal_166[iVar0], unk_0xA0081090911D13E5(), 1) && unk_0xC6FE0F623405BFA8(iLocal_166[iVar0]) < 900)
				{
					return 1;
				}
			}
			iVar0++;
		}
		if (unk_0xD3FACCDA4D66AEAD(iLocal_111))
		{
			if (unk_0x912AD5A10E7633F0(iLocal_111, 0))
			{
				return 1;
			}
			else if (unk_0x4AEC0F4FC7FE62C7(iLocal_111, unk_0xA0081090911D13E5(), 1) && unk_0xC6FE0F623405BFA8(iLocal_111) < 900)
			{
				return 1;
			}
		}
		return 0;
	}
	if (func_153(unk_0xA0081090911D13E5(), Local_89, 50f) && unk_0x4B626BBA5EE1CFF0(unk_0xA0081090911D13E5()))
	{
		return 1;
	}
	if (unk_0xD3FACCDA4D66AEAD(iLocal_112))
	{
		if (unk_0xEB361B4BD195A4D3(iLocal_112))
		{
			return 1;
		}
		else if (func_171(iLocal_112, 1, 1116471296, 1126825984, 0, 0, 0, 0))
		{
			return 1;
		}
		else if (unk_0x12AE3D700F6A2545(iLocal_112))
		{
			unk_0xFF5CE2ECB4FBD4A8(iLocal_112, 0);
			return 1;
		}
	}
	if (unk_0xD3FACCDA4D66AEAD(iLocal_111))
	{
		if (unk_0x912AD5A10E7633F0(iLocal_111, 0))
		{
			return 1;
		}
		else if (unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), iLocal_111, 1) || unk_0x4AEC0F4FC7FE62C7(iLocal_111, unk_0xA0081090911D13E5(), 1))
		{
			return 1;
		}
	}
	if (unk_0xD3FACCDA4D66AEAD(iLocal_117))
	{
		if (unk_0x912AD5A10E7633F0(iLocal_117, 0))
		{
			return 1;
		}
		else if (unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), iLocal_117, 1) || unk_0x4AEC0F4FC7FE62C7(iLocal_117, unk_0xA0081090911D13E5(), 1))
		{
			return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_174 - 1))
	{
		if (unk_0xD3FACCDA4D66AEAD(uLocal_103[iVar0]))
		{
			if (unk_0xEB361B4BD195A4D3(uLocal_103[iVar0]))
			{
				return 1;
			}
			else if (func_171(uLocal_103[iVar0], 1, 1116471296, 1126825984, 0, 0, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_171(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	struct<3> Var0;
	
	if (func_14(unk_0xA0081090911D13E5()) && func_14(iParam0))
	{
		if (unk_0x4AEC0F4FC7FE62C7(iParam0, unk_0xA0081090911D13E5(), 1))
		{
			return 1;
		}
		if (func_185(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!unk_0xD791ED8E9ADE270C(unk_0xA0081090911D13E5(), 6))
		{
			if (unk_0x7B5A014A9AC61FB3(unk_0xA0081090911D13E5()))
			{
				Var0 = { unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1) - unk_0xC59DF10B4FC39DF8(iParam0, 1) };
				if ((((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <= 5f)
				{
					return func_184(unk_0xA0081090911D13E5(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_172(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_172(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_14(unk_0xA0081090911D13E5()) && func_14(iParam0))
	{
		if (func_183(iParam0) || unk_0x352F748C85BFEDC5(unk_0x0C1D3C552325765B(), iParam0))
		{
			if (unk_0xD791ED8E9ADE270C(unk_0xA0081090911D13E5(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0x7298BA0C4D4A4C9E(unk_0xA0081090911D13E5(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_173(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_173(int iParam0, float fParam1)
{
	return func_174(iParam0, unk_0xA0081090911D13E5(), fParam1, 1, 250, 7);
}

bool func_174(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_182(iParam0, iParam1);
	if (!func_14(iParam0) || !func_14(iParam1))
	{
		if (iVar4 != -1)
		{
			func_181(&(Local_40[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!func_178(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_177();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_40[iVar4 /*4*/].f_1 = iParam0;
		Local_40[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { unk_0x7560B9B6FB83879C(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_175(&(Local_40[iVar4 /*4*/]), Var1, iParam1, &(Local_40[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0xDF658EB6CA91DFBC() - Local_40[iVar4 /*4*/].f_3) < iParam4);
}

int func_175(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7)
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
		Var1 = { func_176(iParam4, iParam7) };
		*uParam0 = unk_0x985511F0122BF34F(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = unk_0x41C19A4A352B09E1(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
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
	if (unk_0x60F161681C368C4E(iVar7))
	{
		func_14(iVar7);
		if (unk_0x90897FA118314142(iVar7) == iParam4)
		{
			if (bLocal_81)
			{
				unk_0x952173F2EA797FE5(Param1, unk_0xC59DF10B4FC39DF8(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = unk_0xDF658EB6CA91DFBC();
			return 1;
		}
		return 0;
	}
	if (unk_0x264883409423C6C3(iVar7))
	{
		func_14(iVar7);
		if (unk_0x39FEE545B315414E(iParam4, 0))
		{
			if (unk_0x5293F3C38E4842B3(iVar7) == unk_0xF8DB47D339B8B953(iParam4, 0))
			{
				if (bLocal_81)
				{
					unk_0x952173F2EA797FE5(Param1, unk_0xC59DF10B4FC39DF8(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = unk_0xDF658EB6CA91DFBC();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_176(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = unk_0xB5BF1B58C833F7A9(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0xC59DF10B4FC39DF8(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0x7560B9B6FB83879C(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0x7560B9B6FB83879C(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0x7560B9B6FB83879C(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0x7560B9B6FB83879C(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0x7560B9B6FB83879C(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0x7560B9B6FB83879C(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0xC59DF10B4FC39DF8(iParam0, 1);
}

int func_177()
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

int func_178(int iParam0, int iParam1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_180(unk_0xC59DF10B4FC39DF8(iParam1, 1) - unk_0xC59DF10B4FC39DF8(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var3 = { unk_0xB86A69343E7FBB9A(iParam0) };
	}
	else
	{
		Var3 = { func_180(unk_0x7560B9B6FB83879C(iParam0, 31086, 0f, 5f, 0f) - unk_0x7560B9B6FB83879C(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_179(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_179(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_180(struct<3> Param0)
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

void func_181(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_182(int iParam0, int iParam1)
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

int func_183(int iParam0)
{
	if (unk_0x97209242946B9B9F(unk_0x0C1D3C552325765B(), iParam0) && unk_0xD791ED8E9ADE270C(unk_0xA0081090911D13E5(), 6))
	{
		return 1;
	}
	return 0;
}

bool func_184(int iParam0, int iParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0xB86A69343E7FBB9A(iParam0) };
	Var3 = { unk_0xC59DF10B4FC39DF8(iParam1, 1) - unk_0xC59DF10B4FC39DF8(iParam0, 1) };
	return (((Var0.f_0 * Var3.f_0) + (Var0.f_1 * Var3.f_1)) / unk_0x2A488C176D52CCA5(Var3, 0f, 0f, 0f)) > unk_0xD0FFB162F40A139C(fParam2);
}

int func_185(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (func_14(unk_0xA0081090911D13E5()) && func_14(iParam0))
	{
		unk_0x79DEFA3570360EAF(unk_0xA0081090911D13E5(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_189(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_186(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (unk_0x4CD028B657AD22EA(unk_0xA0081090911D13E5()))
			{
				if (unk_0x4B626BBA5EE1CFF0(unk_0xA0081090911D13E5()))
				{
					if (unk_0xB53CC268A7051C62(unk_0xC59DF10B4FC39DF8(iParam0, 1), fVar0, 1))
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
				if (func_189(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_186(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_186(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0xC59DF10B4FC39DF8(iParam0, 1) };
	Var3 = { Var0 };
	Var0.f_0 = (Var0.f_0 - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var3.f_0 = (Var3.f_0 + fParam1);
	Var3.f_1 = (Var3.f_1 + fParam1);
	Var3.f_2 = (Var3.f_2 + fParam1);
	if (bParam2)
	{
		if (((unk_0x99C534E6423CB828(unk_0xC59DF10B4FC39DF8(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || unk_0x99C534E6423CB828(unk_0xC59DF10B4FC39DF8(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || unk_0x99C534E6423CB828(unk_0xC59DF10B4FC39DF8(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0x99C534E6423CB828(unk_0xC59DF10B4FC39DF8(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_187(iParam0, fParam1))
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
			if (func_187(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xF9043F0F074A61B5(Var0, Var3, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_187(var uParam0, float fParam1)
{
	var uVar0;
	struct<3> Var1;
	
	if ((((unk_0x46FBC6ABCDD0C247(uParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || unk_0x46FBC6ABCDD0C247(uParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || unk_0x46FBC6ABCDD0C247(uParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || unk_0x46FBC6ABCDD0C247(uParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || unk_0x46FBC6ABCDD0C247(uParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
	{
		if (func_188(uParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_188(int iParam0, struct<3> Param1, float fParam4, int iParam5)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_180(Param1 - unk_0xC59DF10B4FC39DF8(uParam0, 1)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		Var3 = { unk_0xB86A69343E7FBB9A(iParam0) };
	}
	else
	{
		Var3 = { func_180(unk_0x7560B9B6FB83879C(iParam0, 31086, 0f, 5f, 0f) - unk_0x7560B9B6FB83879C(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_179(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam4 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_189(int iParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (unk_0x4B626BBA5EE1CFF0(unk_0xA0081090911D13E5()))
		{
			if (unk_0x7298BA0C4D4A4C9E(unk_0xA0081090911D13E5(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0xB53CC268A7051C62(unk_0xC59DF10B4FC39DF8(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_190(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x912AD5A10E7633F0(iParam0, 0) && !unk_0x912AD5A10E7633F0(uParam1, 0))
	{
		if (unk_0x72550A6F2BC0E12B(iParam0, iParam1))
		{
			if (unk_0x8FD32443A080784B(iParam1, iParam2, 0) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_191()
{
	switch (Local_83.f_0)
	{
		case 5:
			return unk_0x08BA6DD398CA197C(Global_101553.f_29666.f_2, 0);
			break;
		
		case 6:
			return unk_0x08BA6DD398CA197C(Global_101553.f_29666.f_2, 1);
			break;
		
		case 7:
			return unk_0x08BA6DD398CA197C(Global_101553.f_29666.f_2, 2);
			break;
		
		case 8:
			return unk_0x08BA6DD398CA197C(Global_101553.f_29666.f_2, 3);
			break;
		
		case 0:
			return unk_0x08BA6DD398CA197C(Global_101553.f_29669.f_3, 0);
			break;
		
		case 1:
			return unk_0x08BA6DD398CA197C(Global_101553.f_29669.f_3, 1);
			break;
		
		case 2:
			return unk_0x08BA6DD398CA197C(Global_101553.f_29669.f_3, 2);
			break;
		
		case 3:
			return unk_0x08BA6DD398CA197C(Global_101553.f_29669.f_3, 3);
			break;
		
		case 4:
			return unk_0x08BA6DD398CA197C(Global_101553.f_29669.f_3, 4);
			break;
	}
	return 0;
}

void func_192()
{
	iLocal_82 = 0;
	iLocal_92 = 0;
	bLocal_99 = false;
	bLocal_100 = false;
	iLocal_96 = 0;
	iLocal_97 = 0;
	iLocal_98 = 0;
	func_194(1);
	unk_0x29E97C2751856A2F("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", 0);
	unk_0x29E97C2751856A2F("WORLD_VEHICLE_PARK_PARALLEL", 0);
	if (Local_83.f_0 == 1)
	{
		uLocal_215 = func_193(374.0083f, 279.5919f, 102.3306f, 40f);
		unk_0xD74B8343DB9FEFD5(374.0083f, 279.5919f, 102.3306f, 25f, 0, 0, 0, 0, 0);
	}
	if (Local_83.f_1 == 1 || Local_83.f_1 == 2)
	{
		uLocal_214 = func_193(Local_89, 60f);
	}
}

var func_193(struct<3> Param0, float fParam3)
{
	struct<3> Var0;
	
	Var0 = { (fParam3 / 2f), (fParam3 / 2f), (fParam3 / 2f) };
	return unk_0x6A173E5A316F6DE8(Param0 - Var0, Param0 + Var0, 0, 1, 1, 1);
}

void func_194(bool bParam0)
{
	if (bParam0)
	{
		switch (Local_83.f_0)
		{
			case 0:
			case 1:
			case 2:
			case 3:
				func_166(&uLocal_216, joaat("banshee"));
				func_166(&uLocal_216, joaat("feltzer2"));
				func_166(&uLocal_216, joaat("sentinel"));
				break;
			
			case 4:
				func_166(&uLocal_216, joaat("bati"));
				func_166(&uLocal_216, joaat("ruffian"));
				break;
			
			case 5:
			case 6:
			case 7:
			case 8:
				func_166(&uLocal_216, joaat("seashark"));
				break;
		}
	}
	else
	{
		func_195(&uLocal_216);
	}
}

void func_195(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0x08BA6DD398CA197C((*uParam0)[iVar0 /*18*/], 30))
		{
			func_196(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}

void func_196(var uParam0)
{
	func_197(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_197(var uParam0, char* sParam1, int iParam2)
{
	if (unk_0x08BA6DD398CA197C(uParam0, 30))
	{
		switch (func_158(uParam0))
		{
			case 0:
				unk_0x2C07692AA3545079(uParam2);
				break;
			
			case 1:
				unk_0x04269E768DDAF940(uParam1);
				break;
			
			case 2:
				unk_0x0877822DCC67FC54(uParam1);
				break;
			
			case 3:
				unk_0xB14EE32074164477(uParam1);
				break;
			
			case 4:
				unk_0x11DDC8BDE5CBDCB5(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x3134206142001736(sParam1);
				break;
			
			case 6:
				unk_0xAE8BF3C10F9D171E();
				break;
			
			case 7:
				unk_0xD49603A9729A6576(iParam2);
				break;
			
			case 8:
				unk_0x89B76C6241C0104D(iParam2, unk_0x08BA6DD398CA197C(uParam0, 26));
				break;
			
			case 9:
				unk_0x10314C97FA558501();
				break;
			
			default:
				break;
		}
	}
}

int func_198(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return unk_0x08BA6DD398CA197C(Global_101553.f_29669.f_1, 0);
			break;
		
		case 1:
			return unk_0x08BA6DD398CA197C(Global_101553.f_29669.f_1, 1);
			break;
		
		case 2:
			return unk_0x08BA6DD398CA197C(Global_101553.f_29669.f_1, 2);
			break;
		
		case 3:
			return unk_0x08BA6DD398CA197C(Global_101553.f_29669.f_1, 3);
			break;
		
		case 4:
			return unk_0x08BA6DD398CA197C(Global_101553.f_29669.f_1, 4);
			break;
	}
	return 0;
}

bool func_199(int iParam0, int iParam1)
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
	bVar0 = unk_0x08BA6DD398CA197C(Global_101553.f_7940.f_99.f_219[iParam0], iParam1);
	return bVar0;
}

void func_200()
{
	if (func_201(func_202(86, 0), Local_89, 1f, 0))
	{
		Local_83.f_0 = 0;
		Local_83.f_1 = 2;
		Local_83.f_3 = 100;
		Local_83.f_4 = 20;
	}
	else if (func_201(func_202(87, 0), Local_89, 1f, 0))
	{
		Local_83.f_0 = 1;
		Local_83.f_1 = 2;
		Local_83.f_3 = 500;
		Local_83.f_4 = 18;
	}
	else if (func_201(func_202(88, 0), Local_89, 1f, 0))
	{
		Local_83.f_0 = 2;
		Local_83.f_1 = 2;
		Local_83.f_3 = 1000;
		Local_83.f_4 = 2;
	}
	else if (func_201(func_202(89, 0), Local_89, 1f, 0))
	{
		Local_83.f_0 = 3;
		Local_83.f_1 = 2;
		Local_83.f_3 = 1250;
		Local_83.f_4 = 4;
	}
	else if (func_201(func_202(90, 0), Local_89, 1f, 0))
	{
		Local_83.f_0 = 4;
		Local_83.f_1 = 1;
		Local_83.f_3 = 1500;
		Local_83.f_4 = 5;
	}
	else if (func_201(func_202(82, 0), Local_89, 1f, 0))
	{
		Local_83.f_0 = 5;
		Local_83.f_1 = 3;
		Local_83.f_3 = 0;
		Local_83.f_4 = 16;
	}
	else if (func_201(func_202(83, 0), Local_89, 1f, 0))
	{
		Local_83.f_0 = 6;
		Local_83.f_1 = 3;
		Local_83.f_3 = 0;
		Local_83.f_4 = 13;
	}
	else if (func_201(func_202(84, 0), Local_89, 1f, 0))
	{
		Local_83.f_0 = 7;
		Local_83.f_1 = 3;
		Local_83.f_3 = 0;
		Local_83.f_4 = 15;
		Local_83.f_5 = 1;
	}
	else if (func_201(func_202(85, 0), Local_89, 1f, 0))
	{
		Local_83.f_0 = 8;
		Local_83.f_1 = 3;
		Local_83.f_4 = 24;
		Local_83.f_3 = 0;
		Local_83.f_5 = 1;
	}
	else
	{
		func_203(0);
	}
}

int func_201(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x7466327978A6A24C((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x7466327978A6A24C((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x7466327978A6A24C((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x7466327978A6A24C((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x7466327978A6A24C((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_202(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0f, 0f, 0f;
	}
	return Global_25497[iVar0 /*23*/][iParam1 /*3*/];
}

void func_203(bool bParam0)
{
	int iVar0;
	var uVar1;
	
	if (!iLocal_93)
	{
		unk_0xB3FF3FBDAFD0ADCF(0);
		iLocal_93 = 1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (func_14(uLocal_103[iVar0]))
		{
			unk_0xD3032BAC1ECE011F(uLocal_103[iVar0]);
			unk_0x971ED137B3AF56D8(uLocal_103[iVar0], 1193033728, 0);
			unk_0xFF5CE2ECB4FBD4A8(uLocal_103[iVar0], 0);
			unk_0x0689C659BF2D3BF7(&(uLocal_103[iVar0]));
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
				unk_0xD3032BAC1ECE011F(iLocal_170[iVar0]);
				if (unk_0xE3C6E31B7236489F(unk_0x705BC1BB91F530B5(iLocal_166[iVar0])))
				{
					unk_0xCB50578868A841C2(iLocal_166[iVar0], 0);
				}
				unk_0x1F1428EF73399830(iLocal_170[iVar0], iLocal_166[iVar0], 20f, 786599);
				unk_0x77637031DE326F70(iLocal_170[iVar0], 1);
				unk_0xFF5CE2ECB4FBD4A8(iLocal_170[iVar0], 0);
				unk_0x0689C659BF2D3BF7(&(iLocal_170[iVar0]));
				unk_0x615DE34FC732CF11(&(iLocal_166[iVar0]));
			}
		}
		iVar0++;
	}
	if (func_14(iLocal_112))
	{
		if (func_14(iLocal_111))
		{
			unk_0xD3032BAC1ECE011F(iLocal_112);
			unk_0x87BBAE0EE5DD7680(iLocal_112, 1, 1);
			unk_0x1F1428EF73399830(iLocal_112, iLocal_111, 15f, 786599);
			unk_0x77637031DE326F70(iLocal_112, 1);
			unk_0xFF5CE2ECB4FBD4A8(iLocal_112, 0);
			unk_0x0689C659BF2D3BF7(&iLocal_112);
			unk_0x615DE34FC732CF11(&iLocal_111);
		}
	}
	if (func_14(iLocal_117))
	{
		unk_0x615DE34FC732CF11(&iLocal_117);
	}
	switch (Local_83.f_0)
	{
		case 5:
			func_206(82, 0, 0);
			unk_0x88B0F0DC270164B7(&(Global_101553.f_29666.f_2), 0);
			break;
		
		case 6:
			func_206(83, 0, 0);
			unk_0x88B0F0DC270164B7(&(Global_101553.f_29666.f_2), 1);
			break;
		
		case 7:
			func_206(84, 0, 0);
			unk_0x88B0F0DC270164B7(&(Global_101553.f_29666.f_2), 2);
			break;
		
		case 8:
			func_206(85, 0, 0);
			unk_0x88B0F0DC270164B7(&(Global_101553.f_29666.f_2), 3);
			break;
		
		case 0:
			func_206(86, 0, 0);
			unk_0x88B0F0DC270164B7(&(Global_101553.f_29669.f_3), 0);
			break;
		
		case 1:
			func_206(87, 0, 0);
			unk_0x88B0F0DC270164B7(&(Global_101553.f_29669.f_3), 1);
			break;
		
		case 2:
			func_206(88, 0, 0);
			unk_0x88B0F0DC270164B7(&(Global_101553.f_29669.f_3), 2);
			break;
		
		case 3:
			func_206(89, 0, 0);
			unk_0x88B0F0DC270164B7(&(Global_101553.f_29669.f_3), 3);
			break;
		
		case 4:
			func_206(90, 0, 0);
			unk_0x88B0F0DC270164B7(&(Global_101553.f_29669.f_3), 4);
			break;
	}
	if (iLocal_92)
	{
		unk_0x94724F7C938EBE34(1);
	}
	unk_0xA149AF899ECC5C89(unk_0x91715E28C0CEA779(10), 0);
	if (iLocal_101)
	{
		unk_0x5A6B86444D23FCA8(1);
	}
	if (iLocal_194 && !bParam0)
	{
		uVar1 = unk_0x4A0FB18E33FE5805();
		if (unk_0xC0691D80D21C989D(uVar1))
		{
			if (!unk_0xDC48E9E2CC7437D3(iVar1))
			{
				unk_0xFDEC0B505BCB00C0(iVar1, 1, 0);
			}
		}
	}
	if (!bParam0)
	{
		func_194(0);
	}
	if (iLocal_94)
	{
		unk_0x900EE3A4DBB8D930(Local_201, Local_204, 1);
		unk_0x1757D2CC022D31AD(Local_207, Local_210, fLocal_213, 1);
		iLocal_94 = 0;
	}
	unk_0x29E97C2751856A2F("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", 1);
	unk_0x29E97C2751856A2F("WORLD_VEHICLE_PARK_PARALLEL", 1);
	if (Local_83.f_0 == 1)
	{
		unk_0x322323456FCFAB4D(uLocal_215, 0);
	}
	if (Local_83.f_1 == 1 || Local_83.f_1 == 2)
	{
		unk_0x322323456FCFAB4D(uLocal_214, 0);
	}
	else
	{
		unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 170, 0);
	}
	func_204(&uLocal_216, 0);
	unk_0x78C587487CD40B92();
}

void func_204(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_195(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_205(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
}

void func_205(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_206(int iParam0, bool bParam1, bool bParam2)
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
		iVar1 = unk_0x08BA6DD398CA197C(Global_25497[iVar0 /*23*/].f_11, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0x08BA6DD398CA197C(Global_25497[iVar0 /*23*/].f_11, 0))
	{
		unk_0x88B0F0DC270164B7(&(Global_25497[iVar0 /*23*/].f_11), 18);
		if (Global_25494 == 1)
		{
			Global_25495 = 1;
		}
		Global_25494 = 1;
	}
	if (bParam1)
	{
		unk_0x88B0F0DC270164B7(&(Global_25497[iVar0 /*23*/].f_11), 0);
		unk_0x88B0F0DC270164B7(&(Global_25497[iVar0 /*23*/].f_11), 15);
		unk_0x88B0F0DC270164B7(&(Global_25497[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&(Global_25497[iVar0 /*23*/].f_11), 0);
		unk_0x09C86C0C5CA26B1E(&(Global_25497[iVar0 /*23*/].f_11), 15);
	}
	if (!unk_0x08BA6DD398CA197C(Global_25497[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0x16833EFAA58E63DB(Global_25497[iVar0 /*23*/].f_19))
		{
			unk_0x9B1D45E9C3D735E8(1);
			unk_0x0B57C567D698C373(&(Global_25497[iVar0 /*23*/].f_19));
			unk_0x9B1D45E9C3D735E8(0);
		}
	}
}

