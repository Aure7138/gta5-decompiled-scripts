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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	bool bLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	var uLocal_51[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_64[12];
	int iLocal_101 = 0;
	bool bLocal_102 = 0;
	int iLocal_103 = 0;
	var uLocal_104 = 0;
	bool bLocal_105 = 0;
	int iLocal_106[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_117 = 0;
	bool bLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	struct<7> Local_127 = { 0, 0, 1097859072, 1500, 45, 1103626240, 5 } ;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 16;
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
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	struct<3> Local_311 = { 0, 0, 0 } ;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	struct<76> Local_317 = { 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403[3] = { 0, 0, 0 };
	var uLocal_407[3] = { 0, 0, 0 };
	int iLocal_411[3] = { 0, 0, 0 };
	float fLocal_415 = 0f;
	bool bLocal_416 = 0;
	int iLocal_417 = 0;
	int iLocal_418 = 0;
	struct<13> Local_419[10];
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	int iLocal_568 = 0;
	int iLocal_569 = 0;
	var uLocal_570 = 0;
	bool bLocal_571 = 0;
	int iLocal_572 = 0;
	bool bLocal_573 = 0;
	int iLocal_574 = 0;
	var uLocal_575[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_596[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_617 = 0;
	int iLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	struct<3> Local_624 = { 0, 0, 0 } ;
	int iLocal_627 = 0;
	struct<41> Local_628 = { 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 3, 0, 0, 0, 4 } ;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
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
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_415 = 0f;
	bLocal_416 = true;
	Local_624 = { 1683.682f, 2518.867f, 44.5651f };
	if (unk_0x2C897F101BA20806(3))
	{
		func_81();
	}
	uLocal_310 = unk_0xA16EC202D9D35357();
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		unk_0x90EAE1C90152FA2D(unk_0x1788E93557766241());
	}
	while (true)
	{
		if (unk_0xE44A580B551C3645(uLocal_310))
		{
			func_81();
		}
		func_80();
		Local_311 = { unk_0xBF8499F46AD9093A(iLocal_310, 1) };
		switch (iLocal_309)
		{
			case 0:
				func_78();
				iLocal_309 = 1;
				break;
			
			case 1:
				func_77();
				func_76();
				func_75();
				func_73();
				iLocal_309 = 2;
				break;
			
			case 2:
				if ((((func_72() && func_71()) && func_70()) && func_69()) && func_68())
				{
					iLocal_309 = 3;
				}
				break;
			
			case 3:
				func_62();
				unk_0x4EDE34FBADD967A6(0);
				func_61();
				unk_0x4EDE34FBADD967A6(0);
				func_58();
				func_57();
				iLocal_309 = 4;
				break;
			
			case 4:
				if (!Global_24454)
				{
					if (Global_87375)
					{
						func_81();
					}
					func_32();
					func_31();
					func_27();
					func_26();
					func_24();
					func_2();
					func_1();
				}
				break;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	int iVar0;
	bool bVar1;
	
	bVar1 = false;
	if (iLocal_50 == 1)
	{
		if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			if (unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), 1766.972f, 2409.596f, 43.55469f, 1826.647f, 2471.633f, 56.30863f, 12f, 0, 1, 0))
			{
				if (!bLocal_102)
				{
					unk_0x7FB8C8F8994F6273("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x7FB8C8F8994F6273("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_106[0] = 1;
				}
			}
			else
			{
				iLocal_106[0] = 0;
			}
		}
	}
	else if (iLocal_50 == 2)
	{
		if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			if (unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), 1662.31f, 2391.06f, 43.51377f, 1761.362f, 2405.143f, 56.65472f, 12f, 0, 1, 0))
			{
				if (!bLocal_102)
				{
					unk_0x7FB8C8F8994F6273("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x7FB8C8F8994F6273("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_106[1] = 1;
				}
			}
			else
			{
				iLocal_106[1] = 0;
			}
		}
	}
	else if (iLocal_50 == 3)
	{
		if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			if (unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), 1537.369f, 2465.132f, 43.5756f, 1655.663f, 2391.822f, 56.54404f, 12f, 0, 1, 0))
			{
				if (!bLocal_102)
				{
					unk_0x7FB8C8F8994F6273("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x7FB8C8F8994F6273("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_106[2] = 1;
				}
			}
			else
			{
				iLocal_106[2] = 0;
			}
		}
	}
	else if (iLocal_50 == 4)
	{
		if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			if (unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), 1529.153f, 2584.264f, 43.6168f, 1535.014f, 2469.253f, 56.5985f, 12f, 0, 1, 0))
			{
				if (!bLocal_102)
				{
					unk_0x7FB8C8F8994F6273("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x7FB8C8F8994F6273("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_106[3] = 1;
				}
			}
			else
			{
				iLocal_106[3] = 0;
			}
		}
	}
	else if (iLocal_50 == 5)
	{
		if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			if (unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), 1565.045f, 2681.205f, 43.50552f, 1529.915f, 2586.427f, 56.52686f, 12f, 0, 1, 0))
			{
				if (!bLocal_102)
				{
					unk_0x7FB8C8F8994F6273("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x7FB8C8F8994F6273("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_106[4] = 1;
				}
			}
			else
			{
				iLocal_106[4] = 0;
			}
		}
	}
	else if (iLocal_50 == 6)
	{
		if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			if (unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), 1645.169f, 2760.33f, 43.6705f, 1567.113f, 2682.905f, 56.39177f, 12f, 0, 1, 0))
			{
				if (!bLocal_102)
				{
					unk_0x7FB8C8F8994F6273("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x7FB8C8F8994F6273("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_106[5] = 1;
				}
			}
			else
			{
				iLocal_106[5] = 0;
			}
		}
	}
	else if (iLocal_50 == 7)
	{
		if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			if (unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), 1772.306f, 2766.364f, 43.59126f, 1650.228f, 2761.691f, 56.53028f, 12f, 0, 1, 0))
			{
				if (!bLocal_102)
				{
					unk_0x7FB8C8F8994F6273("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x7FB8C8F8994F6273("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_106[6] = 1;
				}
			}
			else
			{
				iLocal_106[6] = 0;
			}
		}
	}
	else if (iLocal_50 == 8)
	{
		if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			if (unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), 1831.435f, 2623.257f, 43.46658f, 1851.659f, 2696.404f, 56.68093f, 12f, 0, 1, 0))
			{
				if (!bLocal_102)
				{
					unk_0x7FB8C8F8994F6273("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x7FB8C8F8994F6273("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_106[7] = 1;
				}
			}
			else
			{
				iLocal_106[7] = 0;
			}
		}
	}
	else if (iLocal_50 == 9)
	{
		if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			if (unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), 1831.435f, 2623.257f, 43.46658f, 1851.659f, 2696.404f, 56.68093f, 12f, 0, 1, 0))
			{
				if (!bLocal_102)
				{
					unk_0x7FB8C8F8994F6273("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x7FB8C8F8994F6273("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_106[8] = 1;
				}
			}
			else
			{
				iLocal_106[8] = 0;
			}
		}
	}
	else if (iLocal_50 == 10)
	{
		if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			if (unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), 1829.468f, 2480.96f, 43.52237f, 1836.998f, 2566.856f, 60.35412f, 20.5f, 0, 1, 0))
			{
				if (!bLocal_102)
				{
					unk_0x7FB8C8F8994F6273("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x7FB8C8F8994F6273("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_106[9] = 1;
				}
			}
			else
			{
				iLocal_106[9] = 0;
			}
		}
	}
	iLocal_50++;
	if (iLocal_50 > 10)
	{
		iLocal_50 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (iLocal_106[iVar0])
			{
				bVar1 = true;
			}
			iVar0++;
		}
		if (!bVar1)
		{
			if (!bLocal_102)
			{
				unk_0x7FB8C8F8994F6273("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 0, 1);
				unk_0x7FB8C8F8994F6273("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 1, 1);
			}
		}
	}
}

void func_2()
{
	struct<3> Var0;
	
	switch (iLocal_49)
	{
		case 0:
			unk_0x939DA7EBCC6588FF(joaat("police3"));
			unk_0x939DA7EBCC6588FF(joaat("s_m_y_cop_01"));
			if (unk_0x5494F37F35C1D7D7(joaat("police3")) && unk_0x5494F37F35C1D7D7(joaat("s_m_y_cop_01")))
			{
				iLocal_49++;
			}
			break;
		
		case 1:
			iLocal_123 = unk_0x9BB6F54E415071A1(joaat("police3"), 1797.785f, 2599.697f, 44.5769f, 269.6189f, 1, 1);
			iLocal_125 = unk_0x793482A351850A4F(iLocal_123, 6, joaat("s_m_y_cop_01"), -1, 1, 1);
			func_23(&iLocal_125);
			iLocal_49++;
			break;
		
		case 2:
			if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
			{
				Var0 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
			}
			if ((func_13(iLocal_125, iLocal_123, &Local_127, &uLocal_134, 0, 1, 0, 1, 1) || func_13(iLocal_126, iLocal_124, &Local_127, &uLocal_134, 0, 1, 0, 1, 1)) || (func_12(Var0, 4, 20, 0) && !unk_0x0336D2959717E8D2(unk_0xA16EC202D9D35357())))
			{
				unk_0xA4518FBB522834FE(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, 0, 0f, 50f, 0);
				unk_0xA4518FBB522834FE(joaat("prop_gate_prison_01"), 1819.274f, 2608.537f, 44.6195f, 0, 0f, 50f, 0);
				if (!unk_0xE44A580B551C3645(iLocal_125))
				{
					unk_0x85A1016DBBC5E64B(iLocal_125, unk_0xA16EC202D9D35357(), 0, 16);
				}
				if (!func_11(&uLocal_135))
				{
					func_8(&uLocal_135);
				}
				iLocal_49++;
			}
			break;
		
		case 3:
			if (func_11(&uLocal_135))
			{
				if (func_5(&uLocal_135) > 15f)
				{
					iLocal_124 = unk_0x9BB6F54E415071A1(joaat("police3"), 1755.159f, 2614.456f, 44.5652f, 179.3394f, 1, 1);
					iLocal_126 = unk_0x793482A351850A4F(iLocal_124, 6, joaat("s_m_y_cop_01"), -1, 1, 1);
					func_23(&iLocal_126);
					unk_0x85A1016DBBC5E64B(iLocal_126, unk_0xA16EC202D9D35357(), 0, 16);
					iLocal_49++;
				}
				else if (unk_0xD25129559B94E910(unk_0x1788E93557766241()) == 0)
				{
					if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
					{
						Var0 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
					}
					if (func_4(1818.237f, 2604.927f, 44.57381f, Var0, 1125515264))
					{
						func_3();
						iLocal_49 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (unk_0xD25129559B94E910(unk_0x1788E93557766241()) == 0)
			{
				if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
				{
					Var0 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
				}
				if (func_4(1818.237f, 2604.927f, 44.57381f, Var0, 1125515264))
				{
					func_3();
					iLocal_49 = 0;
				}
			}
			break;
	}
}

void func_3()
{
	if (unk_0x538DF9E5B1DF01EB(iLocal_123))
	{
		unk_0x2F2948A2506AA404(&iLocal_123);
	}
	if (unk_0x538DF9E5B1DF01EB(iLocal_125))
	{
		unk_0x51A89CCC8A5317D0(&iLocal_125);
	}
	if (unk_0x538DF9E5B1DF01EB(iLocal_124))
	{
		unk_0x2F2948A2506AA404(&iLocal_124);
	}
	if (unk_0x538DF9E5B1DF01EB(iLocal_126))
	{
		unk_0x51A89CCC8A5317D0(&iLocal_126);
	}
}

int func_4(struct<3> Param0, struct<3> Param3, float fParam6)
{
	if (unk_0xB7A628320EFF8E47(Param0, Param3) < (fParam6 * fParam6))
	{
		if (((unk_0x538DF9E5B1DF01EB(iLocal_123) && unk_0x538DF9E5B1DF01EB(iLocal_125)) && unk_0x538DF9E5B1DF01EB(iLocal_124)) && unk_0x538DF9E5B1DF01EB(iLocal_126))
		{
			if (unk_0x0E7E162F5A49FAAA(iLocal_123) || !unk_0x98666858610065B8(iLocal_123))
			{
				if (unk_0x0E7E162F5A49FAAA(iLocal_125) || !unk_0x98666858610065B8(iLocal_125))
				{
					if (unk_0x0E7E162F5A49FAAA(iLocal_124) || !unk_0x98666858610065B8(iLocal_124))
					{
						if (unk_0x0E7E162F5A49FAAA(iLocal_126) || !unk_0x98666858610065B8(iLocal_126))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	else if (unk_0xB7A628320EFF8E47(Param0, Param3) > 62500f)
	{
		return 1;
	}
	return 0;
}

float func_5(var uParam0)
{
	if (func_11(uParam0))
	{
		if (func_7(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_6(unk_0x889D01384B54BCE3(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_6(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x09560C7DE2A384BD()) / 1000f);
	}
	if (unk_0x1DAD7CE53BEE7710())
	{
		iVar0 = unk_0x519586565311459B();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x09560C7DE2A384BD()) / 1000f);
}

bool func_7(var uParam0)
{
	return unk_0x889D01384B54BCE3(*uParam0, 2);
}

void func_8(var uParam0)
{
	if (!func_11(uParam0))
	{
		func_9(uParam0);
	}
}

void func_9(var uParam0)
{
	func_10(uParam0, 0f);
}

void func_10(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_6(unk_0x889D01384B54BCE3(*uParam0, 4)) - fParam1);
	unk_0xD0E2BFCE93AE3ABD(uParam0, 1);
	unk_0x29DB79DD4D939B38(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_11(var uParam0)
{
	return unk_0x889D01384B54BCE3(*uParam0, 1);
}

int func_12(struct<3> Param0, int iParam3, int iParam4, bool bParam5)
{
	struct<3> Var0[15];
	struct<3> Var46[15];
	float fVar92[15];
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	
	iVar110 = 0;
	switch (iParam3)
	{
		case 1:
			Var0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			Var46[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar92[0] = 171.25f;
			Var0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			Var46[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar92[1] = 132f;
			Var0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			Var46[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar92[2] = 132f;
			iVar108 = 3;
			break;
		
		case 2:
			Var0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			Var46[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 247f;
			Var0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			Var46[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 149f;
			Var0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			Var46[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 185.5f;
			Var0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			Var46[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 250f;
			Var0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			Var46[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 193.5f;
			Var0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			Var46[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 234.5f;
			Var0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			Var46[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar92[6] = 16f;
			Var0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			Var46[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 80f;
			Var0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			Var46[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 142f;
			Var0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			Var46[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam4)) };
			fVar92[9] = 30.75f;
			Var0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			Var46[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam4)) };
			fVar92[10] = 150f;
			Var0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			Var46[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam4)) };
			fVar92[11] = 29.25f;
			Var0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			Var46[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam4)) };
			fVar92[12] = 43f;
			iVar108 = 13;
			break;
		
		case 3:
			Var0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			Var46[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 250f;
			Var0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			Var46[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 180f;
			Var0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			Var46[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 200f;
			Var0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			Var46[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 86.25f;
			Var0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			Var46[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 140.5f;
			Var0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			Var46[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 140.5f;
			Var0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			Var46[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam4)) };
			fVar92[6] = 90f;
			Var0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			Var46[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 100f;
			Var0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			Var46[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 248.75f;
			Var0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			Var46[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar92[9] = 128f;
			Var0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			Var46[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar92[10] = 127.25f;
			Var0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			Var46[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar92[11] = 16f;
			Var0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			Var46[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar92[12] = 214.25f;
			Var0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			Var46[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar92[13] = 65.75f;
			if (bParam5)
			{
				iVar111 = iParam4;
			}
			else
			{
				iVar111 = 0;
			}
			Var46[9 /*3*/].f_2 = (Var46[9 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[10 /*3*/].f_2 = (Var46[10 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[11 /*3*/].f_2 = (Var46[11 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[12 /*3*/].f_2 = (Var46[12 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[13 /*3*/].f_2 = (Var46[13 /*3*/].f_2 + IntToFloat(iVar111));
			iVar108 = 14;
			break;
		
		case 4:
			Var0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			Var46[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam4)) };
			fVar92[0] = 114f;
			Var0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			Var46[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam4)) };
			fVar92[1] = 88.5f;
			Var0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			Var46[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam4)) };
			fVar92[2] = 133.25f;
			Var0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			Var46[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam4)) };
			fVar92[3] = 104.5f;
			Var0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			Var46[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam4)) };
			fVar92[4] = 121.75f;
			Var0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			Var46[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam4)) };
			fVar92[5] = 84.5f;
			Var0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			Var46[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam4)) };
			fVar92[6] = 103.75f;
			Var0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			Var46[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam4)) };
			fVar92[7] = 104.25f;
			Var0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			Var46[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam4)) };
			fVar92[8] = 91f;
			Var0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			Var46[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam4)) };
			fVar92[9] = 51.25f;
			iVar108 = 10;
			break;
		
		case 5:
			Var0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			Var46[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam4)) };
			fVar92[0] = 45.75f;
			Var0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			Var46[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam4)) };
			fVar92[1] = 99f;
			Var0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			Var46[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam4)) };
			fVar92[2] = 81.5f;
			iVar108 = 3;
			break;
		
		case 6:
			Var0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			Var46[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam4)) };
			fVar92[0] = 120f;
			Var0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			Var46[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar92[1] = 170f;
			Var0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			Var46[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar92[2] = 12.5f;
			Var0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			Var46[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar92[3] = 9.75f;
			iVar108 = 4;
			break;
		
		case 7:
			Var0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			Var46[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam4)) };
			fVar92[0] = 162f;
			Var0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			Var46[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam4)) };
			fVar92[1] = 124f;
			Var0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			Var46[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam4)) };
			fVar92[2] = 55f;
			Var0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			Var46[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam4)) };
			fVar92[3] = 142f;
			iVar108 = 4;
			break;
		
		case 8:
			Var0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			Var46[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar92[0] = 7.75f;
			Var0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			Var46[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar92[1] = 14.75f;
			Var0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			Var46[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar92[2] = 31.5f;
			Var0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			Var46[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar92[3] = 30.5f;
			Var0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			Var46[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar92[4] = 6.75f;
			iVar108 = 5;
			break;
	}
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (unk_0x801B4FC214DEDCB7(Param0, Var0[iVar109 /*3*/], Var46[iVar109 /*3*/], fVar92[iVar109], iVar110, 1))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

int func_13(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0xA16EC202D9D35357();
	if (!unk_0xE44A580B551C3645(iVar0) && !unk_0xE44A580B551C3645(iParam0))
	{
		if (!func_22(*uParam2, 1))
		{
			if (func_21(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_22(*uParam2, 2))
		{
			if (unk_0xD25129559B94E910(unk_0x1788E93557766241()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_22(*uParam2, 4))
		{
			if (func_19(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_22(*uParam2, 8))
		{
			if (func_18(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_22(*uParam2, 128);
		if (bParam4)
		{
			if (func_14(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_22(*uParam2, 16))
		{
			if (func_14(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0x538DF9E5B1DF01EB(iParam0))
	{
		if (iParam7 && unk_0xBF8ADDCADFC4691E(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_14(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar1;
	
	if (bParam3)
	{
		if (!bLocal_44)
		{
			iLocal_45 = unk_0x6360D2FA3AD62AD1(iParam0);
			bLocal_44 = true;
		}
		iLocal_46 = unk_0x6360D2FA3AD62AD1(iParam0);
		iLocal_47 = (iLocal_45 - iLocal_46);
		uVar0 = unk_0xB49BA83A5C224F40();
		if (!unk_0xE44A580B551C3645(uVar0))
		{
			if (unk_0xBF8ADDCADFC4691E(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_47) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_44)
		{
			if (unk_0xBF8ADDCADFC4691E(iParam0, unk_0xA16EC202D9D35357(), 1))
			{
				if (IntToFloat(iLocal_47) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xBF8ADDCADFC4691E(iParam0, unk_0xA16EC202D9D35357(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		uVar1 = unk_0xB49BA83A5C224F40();
		if (!unk_0xE44A580B551C3645(uVar1))
		{
			if (unk_0xBF8ADDCADFC4691E(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0xE44A580B551C3645(iParam0))
		{
			if (unk_0xFE57C063743B552A(iParam0))
			{
				if (unk_0xE399D3F81C1C1426(iParam0) == unk_0xA16EC202D9D35357())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0x15383F5EDB73B6BB(unk_0xA16EC202D9D35357()))
		{
			if (unk_0x965556ACF6A83973(iParam0, unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), 10f, 10f, 10f, 0, 1, 0))
			{
				if (unk_0xE3DA5C92341F5AE4(unk_0x1788E93557766241()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x5AF85B8074B2C7E5(unk_0xA16EC202D9D35357()))
	{
		if (unk_0xA6A618F269FC6FEE(iParam0))
		{
			return 1;
		}
	}
	if (func_17(unk_0xA16EC202D9D35357(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0xEAABEAE1DB589285(iParam0) && func_15(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0x202EF5D8203705EF(iParam0, 0))
		{
			if (unk_0x59C8BF753F6A2D1C(unk_0xA16EC202D9D35357(), unk_0x6ADAC08D70C79DE5(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0x59C8BF753F6A2D1C(unk_0xA16EC202D9D35357(), iParam0))
		{
			return 1;
		}
		if (!unk_0xE44A580B551C3645(uParam1))
		{
			if (unk_0xBF8ADDCADFC4691E(iParam1, unk_0xA16EC202D9D35357(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_15(int iParam0, int iParam1)
{
	return func_16(unk_0xFF34D923BFB5E9FB(unk_0xA495B6AB6F2BF8C7()), iParam0, iParam1);
}

float func_16(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xE44A580B551C3645(uParam0))
	{
		Var0 = { unk_0xBF8499F46AD9093A(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xBF8499F46AD9093A(iParam0, 0) };
	}
	if (!unk_0xE44A580B551C3645(uParam1))
	{
		Var3 = { unk_0xBF8499F46AD9093A(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xBF8499F46AD9093A(iParam1, 0) };
	}
	return unk_0x4970185D4CC64616(Var0, Var3, iParam2);
}

int func_17(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xC00D643B16552C4D(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x7D0624057C8895A0(iParam0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0xBF8499F46AD9093A(iParam0, 1), unk_0xBF8499F46AD9093A(iParam1, 1)) < 2.5f)
			{
				if (unk_0x68E6C2D89A534992(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_18(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x14766EFE923CD38F(uParam0, 4))
	{
		if (unk_0x7D0624057C8895A0(uParam0) && !unk_0xB7761EC96D6D9B92(iParam0))
		{
			if (unk_0x965556ACF6A83973(uParam1, unk_0xBF8499F46AD9093A(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_19(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
	if (!unk_0xE44A580B551C3645(uParam1))
	{
		Var0 = { unk_0xBF8499F46AD9093A(iParam1, 1) };
	}
	if (unk_0xF6BC67E137183D3F(Var0, 4f, 1))
	{
		return 1;
	}
	if (unk_0x68D2C45FB503DDA1(Var0, unk_0xBBDA792448DB5A89(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x14766EFE923CD38F(uParam0, 2))
	{
		if (unk_0x7D0624057C8895A0(uParam0))
		{
			if (unk_0x965556ACF6A83973(iParam1, unk_0xBF8499F46AD9093A(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
			{
				if (unk_0x68E6C2D89A534992(unk_0xA7CC89FF539E1376(iParam1), iParam0, 120f) && unk_0xAA23516DE8E2A707(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0x202EF5D8203705EF(unk_0xA7CC89FF539E1376(iParam1), 0))
			{
				iVar3 = unk_0x6ADAC08D70C79DE5(unk_0xA7CC89FF539E1376(iParam1), 0);
			}
			if (unk_0x24C7291CDBC023F1(iParam0) || func_20(iVar3))
			{
				if (unk_0x965556ACF6A83973(iParam1, unk_0xBF8499F46AD9093A(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
				{
					if (unk_0x68E6C2D89A534992(unk_0xA7CC89FF539E1376(iParam1), iParam0, 120f) && unk_0xAA23516DE8E2A707(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x98B0F512CA1C2670((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_20(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (unk_0x538DF9E5B1DF01EB(iParam0))
	{
		if (unk_0xECFECDAD51A6184F(iParam0, 0))
		{
			if (unk_0xD8A521688BDBE867(iParam0, -1) != 0)
			{
				if (unk_0xC00D643B16552C4D(unk_0xA16EC202D9D35357(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_16(unk_0xA16EC202D9D35357(), iParam0, 1) < 40f)
						{
							if (unk_0xEEE633507C8B2B0F(unk_0x1788E93557766241(), &uVar1))
							{
								if ((unk_0x9FF5D51C24AD2308(uVar1) && unk_0xF22EE5E4C0C2704B(uVar1) == iParam0) || (unk_0xA34B85701D8A1FA8(uVar1) && unk_0xA7CC89FF539E1376(uVar1) == unk_0xD8A521688BDBE867(iParam0, -1)))
								{
									if ((unk_0xB4AD7D9D08986FF5(unk_0xA16EC202D9D35357()) && unk_0xF49761626882E968(0, 24)) || (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0) && unk_0xF49761626882E968(0, 69)))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_21(int iParam0, var uParam1)
{
	if (!unk_0xE44A580B551C3645(uParam0))
	{
		if (unk_0x14766EFE923CD38F(unk_0xA16EC202D9D35357(), 6))
		{
			if (unk_0xD6F1CA758B2B1733(unk_0x1788E93557766241(), iParam0) || unk_0xCE95EFC08A74C6D8(unk_0x1788E93557766241(), iParam0))
			{
				if (unk_0x68E6C2D89A534992(iParam0, unk_0xA16EC202D9D35357(), 90f))
				{
					if (func_15(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0x09560C7DE2A384BD();
						}
						else if ((unk_0x09560C7DE2A384BD() - uParam1->f_1) > uParam1->f_3)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

bool func_22(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_23(int iParam0)
{
	unk_0x39272B2594E03395(*iParam0, joaat("weapon_assaultshotgun"), -1, 0, 1);
	unk_0x2C4E82CF88213975(*iParam0, 1);
	unk_0x15EBFEEB77BF84B7(*iParam0, 13, 1);
	unk_0x15EBFEEB77BF84B7(*iParam0, 0, 1);
	unk_0x383868E60E28653A(*iParam0, 1);
	unk_0x59FF47176A212235(*iParam0, 1);
	unk_0x764EC66D3B10E5C1(*iParam0, 0f);
	unk_0x2686393074E14730(*iParam0, 1);
	unk_0xE97E86766A24F0FA(*iParam0, 100);
	unk_0x23FA15CAC1C1E536(*iParam0, 2);
	unk_0x15EBFEEB77BF84B7(*iParam0, 23, 0);
	unk_0x6D84B26DD44A9CED(*iParam0, 1000f);
	unk_0x15EBFEEB77BF84B7(*iParam0, 1, 1);
}

void func_24()
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (bLocal_573)
	{
		if (!unk_0xE44A580B551C3645(iLocal_568))
		{
			if (!unk_0x6475D37A1CED9761(iLocal_568))
			{
				unk_0x7278B2F5A4AF38A7(iLocal_568, 101, "PrisonHeli", 1);
			}
			if (!unk_0xE44A580B551C3645(iLocal_569))
			{
				Var0 = { unk_0xA783C6007920169C(iLocal_569, 0f, 4f, -2f) };
				unk_0x04B01E250A23095B(iLocal_569, Var0);
			}
			if (bLocal_571)
			{
				if (!func_25())
				{
					bLocal_571 = false;
					unk_0x490CDFE0B49F6FCA(iLocal_568, 0, 0);
				}
			}
			else if (func_25())
			{
				bLocal_571 = true;
				unk_0x490CDFE0B49F6FCA(iLocal_568, 1, 0);
			}
			if (bLocal_571)
			{
				Var3 = { unk_0xBF8499F46AD9093A(iLocal_568, 1) };
				if (unk_0xB7A628320EFF8E47(Local_311, Var3) < 90000f)
				{
					if (!iLocal_572)
					{
						iLocal_572 = 1;
					}
				}
			}
		}
		else if (unk_0x5660C8AFDD9C1721(uLocal_570))
		{
			unk_0xB6FB9702660D84F6(&uLocal_570);
		}
	}
}

int func_25()
{
	if (unk_0xBE59E3811BD4FDD7() >= 20 || unk_0xBE59E3811BD4FDD7() < 6)
	{
		return 1;
	}
	return 0;
}

void func_26()
{
	int iVar0;
	struct<3> Var1;
	
	if (!Local_628.f_18[0])
	{
		if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
		{
			Var1 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
		}
		if (!bLocal_105)
		{
			if (unk_0xB7A628320EFF8E47(Var1, Local_624) < 5625f)
			{
				iLocal_627 = 1;
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x2DE0B96E966FD817(Local_628.f_27[iVar0]))
		{
			if (!Local_628.f_18[iVar0])
			{
				if (func_13(Local_628.f_27[iVar0], 0, &Local_127, &uLocal_134, 1, 1, 0, 1, 1) || iLocal_627)
				{
					unk_0x85A1016DBBC5E64B(Local_628.f_27[iVar0], unk_0xA16EC202D9D35357(), 0, 16);
					Local_628.f_18[iVar0] = 1;
				}
			}
			if (!Local_628.f_18[iVar0])
			{
				if (!unk_0x6D5A11DAA5ECAF2F(Local_628.f_27[iVar0]))
				{
					unk_0x884AE44D5766F70C(Local_628.f_27[iVar0], Local_628.f_14[iVar0], 0, 0, -1);
				}
			}
		}
		else if (unk_0x5660C8AFDD9C1721(Local_628.f_36[iVar0]))
		{
			unk_0xB6FB9702660D84F6(&(Local_628.f_36[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x538DF9E5B1DF01EB(Local_628.f_31[iVar0]))
		{
			if (unk_0x2DE0B96E966FD817(Local_628.f_31[iVar0]))
			{
				if (unk_0x5660C8AFDD9C1721(Local_628.f_40[iVar0]))
				{
					unk_0xB6FB9702660D84F6(&(Local_628.f_40[iVar0]));
				}
			}
		}
		iVar0++;
	}
	if (!Local_628.f_22[0])
	{
		if (!unk_0x2DE0B96E966FD817(Local_628.f_31[0]))
		{
			if ((func_13(Local_628.f_31[0], 0, &Local_127, &uLocal_134, 1, 1, 0, 1, 1) || Local_628.f_18[1] == 1) || iLocal_627)
			{
				unk_0x937785D9C1929236(Local_628.f_31[0]);
				unk_0x85A1016DBBC5E64B(Local_628.f_31[0], unk_0xA16EC202D9D35357(), 0, 16);
				Local_628.f_22[0] = 1;
			}
		}
	}
	if (!Local_628.f_22[1])
	{
		if (!unk_0x2DE0B96E966FD817(Local_628.f_31[1]))
		{
			if ((func_13(Local_628.f_31[1], 0, &Local_127, &uLocal_134, 0, 1, 0, 1, 1) || Local_628.f_18[1] == 1) || iLocal_627)
			{
				unk_0x937785D9C1929236(Local_628.f_31[1]);
				unk_0x85A1016DBBC5E64B(Local_628.f_31[1], unk_0xA16EC202D9D35357(), 0, 16);
				Local_628.f_22[1] = 1;
			}
		}
	}
	if (!Local_628.f_22[2])
	{
		if (!unk_0x2DE0B96E966FD817(Local_628.f_31[2]))
		{
			if ((func_13(Local_628.f_31[2], 0, &Local_127, &uLocal_134, 0, 1, 0, 1, 1) || Local_628.f_18[2] == 1) || iLocal_627)
			{
				unk_0x937785D9C1929236(Local_628.f_31[2]);
				unk_0x85A1016DBBC5E64B(Local_628.f_31[2], unk_0xA16EC202D9D35357(), 0, 16);
				Local_628.f_22[2] = 1;
			}
		}
	}
	if (!Local_628.f_22[3])
	{
		if (!unk_0x2DE0B96E966FD817(Local_628.f_31[3]))
		{
			if ((func_13(Local_628.f_31[3], 0, &Local_127, &uLocal_134, 0, 1, 0, 1, 1) || Local_628.f_18[2] == 1) || iLocal_627)
			{
				unk_0x937785D9C1929236(Local_628.f_31[3]);
				unk_0x85A1016DBBC5E64B(Local_628.f_31[3], unk_0xA16EC202D9D35357(), 0, 16);
				Local_628.f_22[3] = 1;
			}
		}
	}
	if (!unk_0x2DE0B96E966FD817(Local_628.f_27[1]))
	{
		if (unk_0x6D5A11DAA5ECAF2F(Local_628.f_27[1]))
		{
			if (!Local_628.f_22[0])
			{
				if (!unk_0x2DE0B96E966FD817(Local_628.f_31[0]))
				{
					unk_0x99C7091782A79B14(Local_628.f_31[0], Local_628.f_27[1], -2f, 0f, 0f, 1f, -1, 1036831949, 1);
				}
			}
			if (!Local_628.f_22[1])
			{
				if (!unk_0x2DE0B96E966FD817(Local_628.f_31[1]))
				{
					unk_0x99C7091782A79B14(Local_628.f_31[1], Local_628.f_27[1], -1f, 0f, 0f, 1f, -1, 1036831949, 1);
				}
			}
		}
	}
	if (!unk_0x2DE0B96E966FD817(Local_628.f_27[2]))
	{
		if (unk_0x6D5A11DAA5ECAF2F(Local_628.f_27[2]))
		{
			if (!Local_628.f_22[2])
			{
				if (!unk_0x2DE0B96E966FD817(Local_628.f_31[2]))
				{
					unk_0x99C7091782A79B14(Local_628.f_31[2], Local_628.f_27[2], 1f, 0f, 0f, 1f, -1, 1036831949, 1);
				}
			}
			if (!Local_628.f_22[3])
			{
				if (!unk_0x2DE0B96E966FD817(Local_628.f_31[3]))
				{
					unk_0x99C7091782A79B14(Local_628.f_31[3], Local_628.f_27[2], -1f, 0f, 0f, 1f, -1, 1036831949, 1);
				}
			}
		}
	}
}

void func_27()
{
	int iVar0;
	struct<3> Var1;
	
	iLocal_418++;
	if (iLocal_418 >= 30)
	{
		if (!bLocal_105)
		{
			if (func_12(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), 4, 100, 0))
			{
				iVar0 = 0;
				while (iVar0 < 10)
				{
					if (unk_0x538DF9E5B1DF01EB(Local_317.f_64[iVar0]) && !unk_0x2DE0B96E966FD817(Local_317.f_64[iVar0]))
					{
						if (unk_0x9EAFC8B61ACBB2DB(unk_0xA16EC202D9D35357()) != -1)
						{
							if (unk_0x9EAFC8B61ACBB2DB(unk_0xA16EC202D9D35357()) == 1 || unk_0x9EAFC8B61ACBB2DB(unk_0xA16EC202D9D35357()) == 2)
							{
								unk_0xE97E86766A24F0FA(Local_317.f_64[iVar0], 10);
								iLocal_417 = 1;
							}
						}
						else if (unk_0x0336D2959717E8D2(unk_0xA16EC202D9D35357()))
						{
							unk_0xE97E86766A24F0FA(Local_317.f_64[iVar0], 10);
							iLocal_417 = 1;
						}
						else
						{
							unk_0xE97E86766A24F0FA(Local_317.f_64[iVar0], 100);
							iLocal_417 = 1;
						}
					}
					iVar0++;
				}
			}
			else
			{
				iLocal_417 = 0;
			}
		}
		iLocal_418 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x538DF9E5B1DF01EB(Local_317.f_64[iVar0]) && !unk_0x2DE0B96E966FD817(Local_317.f_64[iVar0]))
		{
			if (unk_0xB8E47EB7E42A6AA4(unk_0xA495B6AB6F2BF8C7(), 0))
			{
				unk_0xF9E0EA5A2AF3597D(unk_0x1788E93557766241());
			}
			if ((((func_13(Local_317.f_64[iVar0], 0, &Local_127, &uLocal_134, 0, 1, 0, 1, 1) || unk_0xF6BC67E137183D3F(Local_317[iVar0 /*3*/], 20f, 1)) || unk_0x0B763E4C7521547F(Local_317[iVar0 /*3*/] - Vector(20f, 20f, 20f), Local_317[iVar0 /*3*/] + Vector(20f, 20f, 20f))) || iLocal_417) || func_30(&(Local_317.f_64[iVar0])))
			{
				if (!func_29(5))
				{
					if (unk_0x0336D2959717E8D2(unk_0xA16EC202D9D35357()))
					{
						if (bLocal_118)
						{
							func_28(iVar0);
						}
					}
					else
					{
						func_28(iVar0);
					}
				}
			}
			else if (unk_0xD25129559B94E910(unk_0x1788E93557766241()) == 0)
			{
				if (!unk_0x6D5A11DAA5ECAF2F(Local_317.f_64[iVar0]))
				{
					unk_0x884AE44D5766F70C(Local_317.f_64[iVar0], Local_317.f_42[iVar0], 0, 0, -1);
					Local_317.f_53[iVar0] = 0;
				}
			}
		}
		else if (unk_0x5660C8AFDD9C1721(Local_317.f_75[iVar0]))
		{
			unk_0xB6FB9702660D84F6(&(Local_317.f_75[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (((unk_0x538DF9E5B1DF01EB(uLocal_407[iVar0]) && !unk_0xE44A580B551C3645(uLocal_407[iVar0])) && unk_0x538DF9E5B1DF01EB(uLocal_403[iVar0])) && !unk_0xE44A580B551C3645(uLocal_403[iVar0]))
		{
			Var1 = { unk_0xA783C6007920169C(uLocal_407[iVar0], 0f, 3.5f, -2f) };
			unk_0x04B01E250A23095B(uLocal_407[iVar0], Var1);
			unk_0x6EBB9B0E214CCF0F(uLocal_403[iVar0], 0, 0);
			if (iLocal_411[iVar0])
			{
				if (!func_25())
				{
					if (!unk_0xE44A580B551C3645(uLocal_403[iVar0]))
					{
						iLocal_411[iVar0] = 0;
						unk_0x490CDFE0B49F6FCA(uLocal_403[iVar0], 0, 0);
					}
				}
			}
			else if (func_25())
			{
				if (!unk_0xE44A580B551C3645(uLocal_403[iVar0]))
				{
					iLocal_411[iVar0] = 1;
					unk_0x490CDFE0B49F6FCA(uLocal_403[iVar0], 1, 0);
				}
			}
		}
		iVar0++;
	}
	if (fLocal_415 > 20f)
	{
		bLocal_416 = false;
	}
	else if (fLocal_415 < -20f)
	{
		bLocal_416 = true;
	}
	if (bLocal_416)
	{
		fLocal_415 = (fLocal_415 + 0.25f);
	}
	else
	{
		fLocal_415 = (fLocal_415 - 0.25f);
	}
	if (unk_0x538DF9E5B1DF01EB(uLocal_403[0]))
	{
		unk_0x34639238667C4381(uLocal_403[0], (53f + fLocal_415));
	}
	if (unk_0x538DF9E5B1DF01EB(uLocal_403[1]))
	{
		unk_0x34639238667C4381(uLocal_403[1], (13f + fLocal_415));
	}
	if (unk_0x538DF9E5B1DF01EB(uLocal_403[2]))
	{
		unk_0x34639238667C4381(uLocal_403[2], (250f + fLocal_415));
	}
}

void func_28(int iParam0)
{
	if (!Local_317.f_53[iParam0])
	{
		unk_0x5444536B6219EBBD(Local_317.f_64[iParam0], unk_0xA16EC202D9D35357(), -1, 0);
		unk_0x6D84B26DD44A9CED(Local_317.f_64[iParam0], 1000f);
		unk_0x4744BF390CDA868E(Local_317.f_64[iParam0]);
		Local_317.f_53[iParam0] = 1;
		if (unk_0xD25129559B94E910(unk_0x1788E93557766241()) == 0)
		{
			unk_0x4C1891512E1BE87D(unk_0x1788E93557766241(), 3, 0);
			unk_0x20B787477FD9ECB2(unk_0x1788E93557766241(), 0);
		}
	}
}

bool func_29(int iParam0)
{
	return Global_34915 == iParam0;
}

int func_30(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
	{
		Var0 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
	}
	if (!unk_0xE44A580B551C3645(*uParam0))
	{
		Var3 = { unk_0xBF8499F46AD9093A(*uParam0, 1) };
	}
	if (unk_0xB7A628320EFF8E47(Var0, Var3) < 100f)
	{
		return 1;
	}
	return 0;
}

void func_31()
{
	if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
	{
		if (unk_0xD25129559B94E910(unk_0x1788E93557766241()) >= 2 || func_12(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), 4, 150, 0))
		{
			if (unk_0x942B823036A9B2AE("PRISON_ALARMS"))
			{
				unk_0xFCF458F91A7A3062("PRISON_ALARMS", 0);
			}
		}
		else
		{
			unk_0x7C0AE4B10FB5A304("PRISON_ALARMS", 0);
		}
	}
}

void func_32()
{
	struct<3> Var0;
	
	if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
	{
		if (unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), 1840.23f, 2471.49f, 41.94113f, 1840.553f, 2751.983f, 54.68177f, 84.25f, 0, 1, 0))
		{
			func_55(&Local_127, 2);
		}
		else
		{
			func_53(&Local_127, 2);
		}
	}
	if (iLocal_48 > 20)
	{
		if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			Var0 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
			if (unk_0x0336D2959717E8D2(unk_0xA16EC202D9D35357()))
			{
				if (func_12(Var0, 4, 150, 0))
				{
					func_52(4, 1);
					if (!func_11(&uLocal_141))
					{
						func_8(&uLocal_141);
					}
					if (!bLocal_117)
					{
						if (unk_0x538DF9E5B1DF01EB(iLocal_125) && !unk_0xE44A580B551C3645(iLocal_125))
						{
							func_51(&uLocal_144, 8, iLocal_125, "TANNOY", 0, 1);
							if (func_35(&uLocal_144, "FH1AUD", "FH1_TANNOY", 8, 0, 0, 0))
							{
								bLocal_105 = true;
								bLocal_117 = true;
							}
						}
					}
				}
				else
				{
					func_52(4, 0);
					if (func_11(&uLocal_141))
					{
						func_9(&uLocal_141);
					}
					bLocal_105 = false;
				}
			}
			else
			{
				func_52(4, 0);
				if (func_11(&uLocal_141))
				{
					func_9(&uLocal_141);
				}
				bLocal_105 = false;
			}
			if (bLocal_105)
			{
				if (func_11(&uLocal_141))
				{
					if (func_5(&uLocal_141) > 10f)
					{
						if (unk_0xD25129559B94E910(unk_0x1788E93557766241()) < 4)
						{
							unk_0x4C1891512E1BE87D(unk_0x1788E93557766241(), 4, 0);
							unk_0x20B787477FD9ECB2(unk_0x1788E93557766241(), 0);
							bLocal_118 = true;
							bLocal_105 = false;
							func_52(4, 0);
						}
					}
				}
			}
			if (!bLocal_102)
			{
				if (bLocal_117)
				{
					if (!func_34())
					{
						if (unk_0xB8E47EB7E42A6AA4(unk_0x1788E93557766241(), 0))
						{
							unk_0x7FB8C8F8994F6273("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
							unk_0x7FB8C8F8994F6273("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
							bLocal_102 = true;
						}
					}
				}
				else if (unk_0xB8E47EB7E42A6AA4(unk_0x1788E93557766241(), 0))
				{
					unk_0x7FB8C8F8994F6273("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x7FB8C8F8994F6273("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
					bLocal_102 = true;
				}
			}
			if (!bLocal_105)
			{
				if (func_12(Var0, 4, 100, 0))
				{
					if (!bLocal_102)
					{
						if (bLocal_117)
						{
							if (!func_34())
							{
								unk_0x7FB8C8F8994F6273("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
								unk_0x7FB8C8F8994F6273("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
								bLocal_102 = true;
							}
						}
						else
						{
							unk_0x7FB8C8F8994F6273("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
							unk_0x7FB8C8F8994F6273("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
							bLocal_102 = true;
						}
					}
					func_33();
				}
			}
			iLocal_48 = 0;
		}
	}
	iLocal_48++;
}

void func_33()
{
	int iVar0;
	
	if (!iLocal_101)
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			uLocal_51[iVar0] = unk_0xEE76955AB86583F1(Local_64[iVar0 /*3*/], 10f, 10f, 10f, 0f, 0, 7);
			iVar0++;
		}
		iLocal_101 = 1;
	}
}

int func_34()
{
	if (Global_15693 != 0 || unk_0xD47B332729054512())
	{
		return 1;
	}
	return 0;
}

bool func_35(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_50(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15700 = 0;
	Global_15702 = 0;
	Global_15707 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 0;
	Global_2621441 = 0;
	return func_36(sParam2, iParam3, 0);
}

int func_36(char* sParam0, int iParam1, bool bParam2)
{
	Global_15694 = 0;
	if (Global_15693 == 0 || Global_15695 == 2)
	{
		if (Global_15693 != 0)
		{
			if (iParam1 > Global_15695)
			{
				if (Global_15700 == 0)
				{
					unk_0x0D68C13151B68364(0);
					Global_14394.f_1 = 3;
					Global_15693 = 0;
					Global_15694 = 1;
					Global_15746 = 0;
					Global_15689 = 0;
					Global_15690 = 0;
					Global_15704 = 0;
					Global_15703 = 0;
					Global_14393 = 0;
				}
				else
				{
					func_49();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xD47B332729054512())
		{
			return 0;
		}
		if (func_48(8, -1))
		{
			return 0;
		}
		Global_15769 = { Global_15763 };
		func_47();
		Global_14982 = { Global_15147 };
		Global_15699 = Global_15700;
		Global_15706 = Global_15707;
		Global_2621442 = Global_2621441;
		Global_15708 = { Global_15724 };
		Global_15701 = Global_15702;
		Global_16683 = Global_16684;
		Global_16691 = { Global_16697 };
		Global_16685 = Global_16686;
		Global_16687 = Global_16688;
		Global_16689 = Global_16690;
		Global_15312.f_370 = Global_16682;
		Global_15312.f_368 = Global_16680;
		Global_15312.f_369 = Global_16681;
		Global_15689 = Global_15690;
		if (Global_15699)
		{
			unk_0x29DB79DD4D939B38(&Global_2264, 20);
			unk_0x29DB79DD4D939B38(&Global_2265, 17);
			unk_0x29DB79DD4D939B38(&Global_2266, 0);
			if (bParam2)
			{
				func_41();
				if (Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14394.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14360 == 1)
			{
				return 0;
			}
			if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
			{
				if (unk_0x15383F5EDB73B6BB(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (func_40())
				{
					return 0;
				}
				if (unk_0xD7708B5D68A32CA0(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0xD630B5603A1AED89(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0x262A8E62D7274A0B(unk_0xA16EC202D9D35357(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68325)
				{
					if (unk_0x21FF064386DC6A0A(unk_0xA16EC202D9D35357()))
					{
						return 0;
					}
					if (unk_0x6CA3764368FA4573(unk_0x1788E93557766241()))
					{
						return 0;
					}
					if (unk_0x24C7291CDBC023F1(unk_0xA16EC202D9D35357()))
					{
						return 0;
					}
					if (unk_0x8ECFC7D353C3F775(unk_0x1788E93557766241()))
					{
						return 0;
					}
				}
			}
			if (func_39())
			{
				return 0;
			}
			else
			{
				switch (Global_14394.f_1)
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
				if (unk_0x889D01384B54BCE3(Global_2264, 9))
				{
					return 0;
				}
			}
			func_38();
			Global_15703 = bParam2;
		}
		Global_15695 = iParam1;
		StringCopy(&Global_15312, sParam0, 24);
		Global_14559 = 0;
		func_37();
		return 1;
	}
	if (Global_15693 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15695 || iParam1 == Global_15695)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_49();
	}
	return 0;
}

void func_37()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14561[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x0D68C13151B68364(0);
	Global_15693 = 1;
}

void func_38()
{
	Global_15746 = Global_15745;
	Global_15740 = Global_15741;
	Global_15787 = { Global_15775 };
	Global_15793 = { Global_15781 };
	Global_15748 = Global_15747;
	Global_15817 = { Global_15799 };
	Global_15823 = { Global_15805 };
	Global_15829 = { Global_15811 };
	Global_15835 = { Global_15841 };
	Global_1579 = Global_1580;
	Global_1581 = Global_1582;
	Global_15704 = Global_15705;
	Global_15706 = Global_15707;
	Global_15708 = { Global_15724 };
	Global_15697 = Global_15698;
	Global_16709 = 0;
	Global_15742 = 0;
	Global_15743 = 0;
	unk_0x29DB79DD4D939B38(&Global_2265, 16);
}

int func_39()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_40()
{
	int iVar0;
	int iVar1;
	
	if (Global_68325)
	{
		iVar0 = 0;
		unk_0xC00D643B16552C4D(unk_0xA16EC202D9D35357(), &iVar1, 1);
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x76F7F25F198388A1() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
	{
		if (unk_0xFCCDE3C4E11113D7(unk_0xA16EC202D9D35357(), 78, 1))
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

void func_41()
{
	if (func_29(14))
	{
		if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[0 /*29*/])
			{
				Global_14394 = 0;
			}
			else if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[1 /*29*/])
			{
				Global_14394 = 1;
			}
			else if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[2 /*29*/])
			{
				Global_14394 = 2;
			}
			else
			{
				Global_14394 = 0;
			}
		}
	}
	else
	{
		Global_14394 = func_42();
		if (Global_14394 == 145)
		{
			Global_14394 = 3;
		}
		if (Global_68325)
		{
			Global_14394 = 3;
		}
		if (Global_14394 > 3)
		{
			Global_14394 = 3;
		}
	}
}

var func_42()
{
	func_43();
	return Global_97439.f_1729.f_539.f_3213;
}

void func_43()
{
	int iVar0;
	
	if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
	{
		if (func_46(Global_97439.f_1729.f_539.f_3213) != unk_0xA609E58449080951(unk_0xA16EC202D9D35357()))
		{
			iVar0 = func_45(unk_0xA16EC202D9D35357());
			if (func_44(iVar0) && (!func_29(14) || Global_96391))
			{
				if (Global_97439.f_1729.f_539.f_3213 != iVar0 && func_44(Global_97439.f_1729.f_539.f_3213))
				{
					Global_97439.f_1729.f_539.f_3214 = Global_97439.f_1729.f_539.f_3213;
				}
				Global_97439.f_1729.f_539.f_3215 = iVar0;
				Global_97439.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97439.f_1729.f_539.f_3213 != 145)
			{
				Global_97439.f_1729.f_539.f_3215 = Global_97439.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97439.f_1729.f_539.f_3213 = 145;
}

bool func_44(int iParam0)
{
	return iParam0 < 3;
}

int func_45(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x538DF9E5B1DF01EB(uParam0))
	{
		iVar1 = unk_0xA609E58449080951(iParam0);
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
		return Global_97439.f_29795[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_47()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14982[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14982[iVar0 /*10*/].f_1), "", 24);
		Global_14982[iVar0 /*10*/].f_7 = 0;
		Global_14982[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14982.f_161 = -99;
	Global_14982.f_162 = { 0f, 0f, 0f };
}

bool func_48(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327587.f_203[iParam1];
			}
			break;
	}
	return unk_0x889D01384B54BCE3(Global_1327587.f_949, iParam0);
}

void func_49()
{
	unk_0xD01024485E7AB68C();
	Global_16704 = 0;
	if ((unk_0xBE029393332523D7() || Global_14394.f_1 == 9) || Global_14393 == 1)
	{
		unk_0x0D68C13151B68364(0);
		Global_15693 = 6;
		Global_14394.f_1 = 3;
		return;
	}
	if (unk_0xD47B332729054512())
	{
		unk_0x0D68C13151B68364(1);
		Global_15693 = 6;
		return;
	}
}

void func_50(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15147 = { *uParam0 };
	Global_1580 = iParam1;
	StringCopy(&Global_15763, sParam2, 24);
	Global_16682 = uParam5;
	if (iParam3 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16681 = 1;
		Global_16679 = 0;
	}
	else
	{
		Global_16681 = 0;
		Global_16679 = 1;
	}
}

void func_51(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68325)
	{
		if (!unk_0x2DE0B96E966FD817(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x54CA1F435E64266A(iParam2, 0);
			}
			else
			{
				unk_0x54CA1F435E64266A(iParam2, 1);
			}
		}
		if (!unk_0x2DE0B96E966FD817(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xA7FFC0AE4D5A08F6(iParam2, 0);
			}
			else
			{
				unk_0xA7FFC0AE4D5A08F6(iParam2, 1);
			}
		}
	}
}

void func_52(int iParam0, int iParam1)
{
	unk_0xD0E2BFCE93AE3ABD(&Global_24603, iParam0);
	StringCopy(&(Global_24604[iParam0 /*6*/]), unk_0x7E5A426328F6E635(), 24);
	Global_24659[iParam0] = iParam1;
}

void func_53(var uParam0, int iParam1)
{
	func_54(uParam0, iParam1);
}

void func_54(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_55(var uParam0, int iParam1)
{
	func_56(uParam0, iParam1);
}

void func_56(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_57()
{
	unk_0xEA054561294AEC10(joaat("s_m_m_security_01"));
	unk_0xEA054561294AEC10(joaat("s_m_m_prisguard_01"));
}

void func_58()
{
	func_60();
	func_59();
}

void func_59()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x538DF9E5B1DF01EB(Local_628.f_27[iVar0]) && !unk_0xE44A580B551C3645(Local_628.f_27[iVar0]))
		{
			unk_0x39272B2594E03395(Local_628.f_27[iVar0], joaat("weapon_assaultrifle"), -1, 1, 1);
			unk_0x4BE0FD78EDE6DDE2(Local_628.f_27[iVar0], 1000);
			unk_0xA9465591B42213AE(Local_628.f_27[iVar0], -183807561);
			unk_0xA13A03AD48BA0E80(Local_628.f_27[iVar0], 0);
			unk_0x2C4E82CF88213975(Local_628.f_27[iVar0], 1);
			if (!unk_0x2DE0B96E966FD817(Local_628.f_27[iVar0]))
			{
				unk_0x884AE44D5766F70C(Local_628.f_27[iVar0], Local_628.f_14[iVar0], 0, 0, -1);
			}
		}
		iVar0++;
	}
}

void func_60()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x538DF9E5B1DF01EB(Local_628.f_27[iVar0]))
		{
			Local_628.f_27[iVar0] = unk_0x6F9DE0DE8363ADF1(6, joaat("s_m_m_prisguard_01"), Local_628[iVar0 /*3*/], Local_628.f_10[iVar0], 1, 1);
			unk_0x4EDE34FBADD967A6(0);
		}
		iVar0++;
	}
	Var1 = { unk_0xCC6B7A025E72F529(Local_628[1 /*3*/], Local_628.f_10[1], -2f, 0f, 0f) };
	Var4 = { unk_0xCC6B7A025E72F529(Local_628[1 /*3*/], Local_628.f_10[1], -1f, 0f, 0f) };
	Var7 = { unk_0xCC6B7A025E72F529(Local_628[2 /*3*/], Local_628.f_10[2], 1f, 0f, 0f) };
	Var10 = { unk_0xCC6B7A025E72F529(Local_628[2 /*3*/], Local_628.f_10[2], -1f, 0f, 0f) };
	Local_628.f_31[0] = unk_0x6F9DE0DE8363ADF1(6, joaat("s_m_m_prisguard_01"), Var1, Local_628.f_10[1], 1, 1);
	Local_628.f_31[1] = unk_0x6F9DE0DE8363ADF1(6, joaat("s_m_m_prisguard_01"), Var4, Local_628.f_10[1], 1, 1);
	Local_628.f_31[2] = unk_0x6F9DE0DE8363ADF1(6, joaat("s_m_m_prisguard_01"), Var7, Local_628.f_10[2], 1, 1);
	Local_628.f_31[3] = unk_0x6F9DE0DE8363ADF1(6, joaat("s_m_m_prisguard_01"), Var10, Local_628.f_10[2], 1, 1);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x538DF9E5B1DF01EB(Local_628.f_31[iVar0]))
		{
			unk_0x39272B2594E03395(Local_628.f_31[iVar0], joaat("weapon_assaultrifle"), -1, 1, 1);
			unk_0x4BE0FD78EDE6DDE2(Local_628.f_31[iVar0], 500);
			unk_0xA9465591B42213AE(Local_628.f_31[iVar0], -183807561);
			unk_0x3D40DFF8F3C89C08(Local_628.f_31[iVar0], 0);
			unk_0x2C4E82CF88213975(Local_628.f_31[iVar0], 1);
		}
		iVar0++;
	}
	unk_0xEA054561294AEC10(joaat("s_m_m_prisguard_01"));
}

void func_61()
{
	if (bLocal_573)
	{
		iLocal_568 = unk_0x9BB6F54E415071A1(joaat("polmav"), 10f, 10f, -30f, 0f, 1, 1);
		unk_0x6EBB9B0E214CCF0F(iLocal_568, 1, 1);
		unk_0xEBE442695B64536B(iLocal_568);
		unk_0x9A8988482828F78C(iLocal_568, 0f, 0f, 10f);
		unk_0x4BE0FD78EDE6DDE2(iLocal_568, 500);
		if (func_25())
		{
			bLocal_571 = true;
			unk_0x490CDFE0B49F6FCA(iLocal_568, 1, 0);
		}
		iLocal_569 = unk_0x6F9DE0DE8363ADF1(6, joaat("s_m_m_prisguard_01"), 10f, 10f, -20f, 0f, 1, 1);
		unk_0x3195B1192FB0EA3D(iLocal_569, iLocal_568, -1);
		if (!unk_0xE44A580B551C3645(iLocal_568))
		{
			unk_0x7278B2F5A4AF38A7(iLocal_568, 101, "PrisonHeli", 1);
		}
		unk_0xEA054561294AEC10(joaat("polmav"));
	}
}

void func_62()
{
	func_67();
	func_66();
	func_65();
	func_64();
	func_63();
}

void func_63()
{
	Local_419[0 /*13*/][0 /*3*/] = { 1827.69f, 2474.181f, 61.7202f };
	Local_419[0 /*13*/][1 /*3*/] = { 1826.054f, 2478.934f, 61.7157f };
	Local_419[0 /*13*/][2 /*3*/] = { 1820.909f, 2477.528f, 61.7153f };
	Local_419[0 /*13*/][3 /*3*/] = { 1822.585f, 2472.122f, 61.7167f };
	unk_0x79142AE391FE9892("miss_Tower_01");
	unk_0xCDF5238171A3772D(0, "WORLD_HUMAN_GUARD_STAND", Local_419[0 /*13*/][0 /*3*/], 1879.944f, 2461.988f, 53.5496f, unk_0x444ECD635D5FD45F(5000, 10000));
	unk_0xCDF5238171A3772D(1, "WORLD_HUMAN_GUARD_STAND", Local_419[0 /*13*/][1 /*3*/], 1831.631f, 2522.218f, 54.1376f, unk_0x444ECD635D5FD45F(5000, 10000));
	unk_0xCDF5238171A3772D(2, "WORLD_HUMAN_GUARD_STAND", Local_419[0 /*13*/][2 /*3*/], 1789.07f, 2490.558f, 54.1381f, unk_0x444ECD635D5FD45F(5000, 10000));
	unk_0xCDF5238171A3772D(3, "WORLD_HUMAN_GUARD_STAND", Local_419[0 /*13*/][3 /*3*/], 1789.8f, 2426.876f, 44.7729f, unk_0x444ECD635D5FD45F(5000, 10000));
	unk_0x1B5B21A1ADE59CC8(0, 1);
	unk_0x1B5B21A1ADE59CC8(1, 2);
	unk_0x1B5B21A1ADE59CC8(2, 3);
	unk_0x1B5B21A1ADE59CC8(3, 0);
	unk_0x06580D0850DB2A7F();
	unk_0x0282CE890F1CC8D8();
	Local_419[1 /*13*/][0 /*3*/] = { 1764.729f, 2409.139f, 61.7533f };
	Local_419[1 /*13*/][1 /*3*/] = { 1763.129f, 2413.976f, 61.7328f };
	Local_419[1 /*13*/][2 /*3*/] = { 1758.079f, 2411.984f, 61.7403f };
	Local_419[1 /*13*/][3 /*3*/] = { 1760.213f, 2406.827f, 61.7419f };
	unk_0x79142AE391FE9892("miss_Tower_02");
	unk_0xCDF5238171A3772D(0, "WORLD_HUMAN_GUARD_STAND", Local_419[1 /*13*/][0 /*3*/], 1879.944f, 2461.988f, 53.5496f, unk_0x444ECD635D5FD45F(5000, 10000));
	unk_0xCDF5238171A3772D(1, "WORLD_HUMAN_GUARD_STAND", Local_419[1 /*13*/][1 /*3*/], 1831.631f, 2522.218f, 54.1376f, unk_0x444ECD635D5FD45F(5000, 10000));
	unk_0xCDF5238171A3772D(2, "WORLD_HUMAN_GUARD_STAND", Local_419[1 /*13*/][2 /*3*/], 1789.07f, 2490.558f, 54.1381f, unk_0x444ECD635D5FD45F(5000, 10000));
	unk_0xCDF5238171A3772D(3, "WORLD_HUMAN_GUARD_STAND", Local_419[1 /*13*/][3 /*3*/], 1789.8f, 2426.876f, 44.7729f, unk_0x444ECD635D5FD45F(5000, 10000));
	unk_0x1B5B21A1ADE59CC8(0, 1);
	unk_0x1B5B21A1ADE59CC8(1, 2);
	unk_0x1B5B21A1ADE59CC8(2, 3);
	unk_0x1B5B21A1ADE59CC8(3, 0);
	unk_0x06580D0850DB2A7F();
	unk_0x0282CE890F1CC8D8();
	Local_419[2 /*13*/][0 /*3*/] = { 1658.829f, 2390.888f, 61.7462f };
	Local_419[2 /*13*/][1 /*3*/] = { 1662.521f, 2394.692f, 61.7532f };
	Local_419[2 /*13*/][2 /*3*/] = { 1658.854f, 2398.062f, 61.7573f };
	Local_419[2 /*13*/][3 /*3*/] = { 1655.15f, 2394.705f, 61.7429f };
	unk_0x79142AE391FE9892("miss_Tower_03");
	unk_0xCDF5238171A3772D(0, "WORLD_HUMAN_GUARD_STAND", Local_419[2 /*13*/][0 /*3*/], 1655.908f, 2349.021f, 55.1775f, unk_0x444ECD635D5FD45F(5000, 10000));
	unk_0xCDF5238171A3772D(1, "WORLD_HUMAN_GUARD_STAND", Local_419[2 /*13*/][1 /*3*/], 1733.875f, 2385.521f, 44.9049f, unk_0x444ECD635D5FD45F(5000, 10000));
	unk_0xCDF5238171A3772D(2, "WORLD_HUMAN_GUARD_STAND", Local_419[2 /*13*/][2 /*3*/], 1662.234f, 2446.357f, 44.5652f, unk_0x444ECD635D5FD45F(5000, 10000));
	unk_0xCDF5238171A3772D(3, "WORLD_HUMAN_GUARD_STAND", Local_419[2 /*13*/][3 /*3*/], 1524.631f, 2426.997f, 44.6212f, unk_0x444ECD635D5FD45F(5000, 10000));
	unk_0x1B5B21A1ADE59CC8(0, 1);
	unk_0x1B5B21A1ADE59CC8(1, 2);
	unk_0x1B5B21A1ADE59CC8(2, 3);
	unk_0x1B5B21A1ADE59CC8(3, 0);
	unk_0x06580D0850DB2A7F();
	unk_0x0282CE890F1CC8D8();
	Local_419[3 /*13*/][0 /*3*/] = { 1537.28f, 2468.338f, 61.7497f };
	Local_419[3 /*13*/][1 /*3*/] = { 1542.189f, 2465.756f, 61.7247f };
	Local_419[3 /*13*/][2 /*3*/] = { 1543.899f, 2470.971f, 61.7482f };
	Local_419[3 /*13*/][3 /*3*/] = { 1539.14f, 2473.264f, 61.7359f };
	unk_0x79142AE391FE9892("miss_Tower_04");
	unk_0xCDF5238171A3772D(0, "WORLD_HUMAN_GUARD_STAND", Local_419[3 /*13*/][0 /*3*/], 1455.081f, 2432.642f, 51.3366f, unk_0x444ECD635D5FD45F(5000, 10000));
	unk_0xCDF5238171A3772D(1, "WORLD_HUMAN_GUARD_STAND", Local_419[3 /*13*/][1 /*3*/], 1576.174f, 2407.076f, 44.8143f, unk_0x444ECD635D5FD45F(5000, 10000));
	unk_0xCDF5238171A3772D(2, "WORLD_HUMAN_GUARD_STAND", Local_419[3 /*13*/][2 /*3*/], 1578.1f, 2486.227f, 44.5655f, unk_0x444ECD635D5FD45F(5000, 10000));
	unk_0xCDF5238171A3772D(3, "WORLD_HUMAN_GUARD_STAND", Local_419[3 /*13*/][3 /*3*/], 1512.837f, 2560.419f, 44.8417f, unk_0x444ECD635D5FD45F(5000, 10000));
	unk_0x1B5B21A1ADE59CC8(0, 1);
	unk_0x1B5B21A1ADE59CC8(1, 2);
	unk_0x1B5B21A1ADE59CC8(2, 3);
	unk_0x1B5B21A1ADE59CC8(3, 0);
	unk_0x06580D0850DB2A7F();
	unk_0x0282CE890F1CC8D8();
	Local_419[4 /*13*/][0 /*3*/] = { 1535.098f, 2581.919f, 61.7312f };
	Local_419[4 /*13*/][1 /*3*/] = { 1535.124f, 2581.101f, 61.7002f };
	Local_419[4 /*13*/][2 /*3*/] = { 1538.325f, 2585.722f, 61.7251f };
	Local_419[4 /*13*/][3 /*3*/] = { 1534.679f, 2589.268f, 61.7123f };
	unk_0x79142AE391FE9892("miss_Tower_05");
	unk_0xCDF5238171A3772D(0, "WORLD_HUMAN_GUARD_STAND", Local_419[4 /*13*/][0 /*3*/], 1484.2f, 2584.409f, 51.9283f, unk_0x444ECD635D5FD45F(5000, 10000));
	unk_0xCDF5238171A3772D(1, "WORLD_HUMAN_GUARD_STAND", Local_419[4 /*13*/][1 /*3*/], 1535.154f, 2538.926f, 44.496f, unk_0x444ECD635D5FD45F(5000, 10000));
	unk_0xCDF5238171A3772D(2, "WORLD_HUMAN_GUARD_STAND", Local_419[4 /*13*/][2 /*3*/], 1570.661f, 2587.814f, 44.5655f, unk_0x444ECD635D5FD45F(5000, 10000));
	unk_0xCDF5238171A3772D(3, "WORLD_HUMAN_GUARD_STAND", Local_419[4 /*13*/][3 /*3*/], 1538.227f, 2655.531f, 44.9156f, unk_0x444ECD635D5FD45F(5000, 10000));
	unk_0x1B5B21A1ADE59CC8(0, 1);
	unk_0x1B5B21A1ADE59CC8(1, 2);
	unk_0x1B5B21A1ADE59CC8(2, 3);
	unk_0x1B5B21A1ADE59CC8(3, 0);
	unk_0x06580D0850DB2A7F();
	unk_0x0282CE890F1CC8D8();
	Local_419[5 /*13*/][0 /*3*/] = { 1566.921f, 2682.525f, 61.7716f };
	Local_419[5 /*13*/][1 /*3*/] = { 1567.927f, 2677.463f, 61.7741f };
	Local_419[5 /*13*/][2 /*3*/] = { 1572.574f, 2678.193f, 61.7702f };
	Local_419[5 /*13*/][3 /*3*/] = { 1572.359f, 2683.086f, 61.7664f };
	unk_0x79142AE391FE9892("miss_Tower_06");
	unk_0xCDF5238171A3772D(0, "WORLD_HUMAN_GUARD_STAND", Local_419[5 /*13*/][0 /*3*/], 1505.538f, 2727.242f, 37.6965f, unk_0x444ECD635D5FD45F(5000, 10000));
	unk_0xCDF5238171A3772D(1, "WORLD_HUMAN_GUARD_STAND", Local_419[5 /*13*/][1 /*3*/], 1545.95f, 2632.524f, 44.7178f, unk_0x444ECD635D5FD45F(5000, 10000));
	unk_0xCDF5238171A3772D(2, "WORLD_HUMAN_GUARD_STAND", Local_419[5 /*13*/][2 /*3*/], 1599.355f, 2658.319f, 44.5652f, unk_0x444ECD635D5FD45F(5000, 10000));
	unk_0xCDF5238171A3772D(3, "WORLD_HUMAN_GUARD_STAND", Local_419[5 /*13*/][3 /*3*/], 1599.041f, 2713.393f, 44.4309f, unk_0x444ECD635D5FD45F(5000, 10000));
	unk_0x1B5B21A1ADE59CC8(0, 1);
	unk_0x1B5B21A1ADE59CC8(1, 2);
	unk_0x1B5B21A1ADE59CC8(2, 3);
	unk_0x1B5B21A1ADE59CC8(3, 0);
	unk_0x06580D0850DB2A7F();
	unk_0x0282CE890F1CC8D8();
	Local_419[6 /*13*/][0 /*3*/] = { 1648.104f, 2761.528f, 61.9103f };
	Local_419[6 /*13*/][1 /*3*/] = { 1646.051f, 2756.671f, 61.9091f };
	Local_419[6 /*13*/][2 /*3*/] = { 1651.533f, 2754.668f, 61.9021f };
	Local_419[6 /*13*/][3 /*3*/] = { 1653.125f, 2759.327f, 61.9056f };
	unk_0x79142AE391FE9892("miss_Tower_07");
	unk_0xCDF5238171A3772D(0, "WORLD_HUMAN_GUARD_STAND", Local_419[6 /*13*/][0 /*3*/], 1606.661f, 2815.673f, 37.9512f, unk_0x444ECD635D5FD45F(5000, 10000));
	unk_0xCDF5238171A3772D(1, "WORLD_HUMAN_GUARD_STAND", Local_419[6 /*13*/][1 /*3*/], 1602.887f, 2721.398f, 44.651f, unk_0x444ECD635D5FD45F(5000, 10000));
	unk_0xCDF5238171A3772D(2, "WORLD_HUMAN_GUARD_STAND", Local_419[6 /*13*/][2 /*3*/], 1599.355f, 2658.319f, 44.5652f, unk_0x444ECD635D5FD45F(5000, 10000));
	unk_0xCDF5238171A3772D(3, "WORLD_HUMAN_GUARD_STAND", Local_419[6 /*13*/][3 /*3*/], 1719.225f, 2766.111f, 44.6846f, unk_0x444ECD635D5FD45F(5000, 10000));
	unk_0x1B5B21A1ADE59CC8(0, 1);
	unk_0x1B5B21A1ADE59CC8(1, 2);
	unk_0x1B5B21A1ADE59CC8(2, 3);
	unk_0x1B5B21A1ADE59CC8(3, 0);
	unk_0x06580D0850DB2A7F();
	unk_0x0282CE890F1CC8D8();
	Local_419[7 /*13*/][0 /*3*/] = { 1774.523f, 2766.559f, 61.9143f };
	Local_419[7 /*13*/][1 /*3*/] = { 1769.768f, 2763.816f, 61.9248f };
	Local_419[7 /*13*/][2 /*3*/] = { 1772.442f, 2759.139f, 61.9193f };
	Local_419[7 /*13*/][3 /*3*/] = { 1776.893f, 2762.356f, 61.9258f };
	unk_0x79142AE391FE9892("miss_Tower_08");
	unk_0xCDF5238171A3772D(0, "WORLD_HUMAN_GUARD_STAND", Local_419[7 /*13*/][0 /*3*/], 1783.204f, 2811.375f, 44.4414f, unk_0x444ECD635D5FD45F(5000, 10000));
	unk_0xCDF5238171A3772D(1, "WORLD_HUMAN_GUARD_STAND", Local_419[7 /*13*/][1 /*3*/], 1709.275f, 2764.432f, 44.5747f, unk_0x444ECD635D5FD45F(5000, 10000));
	unk_0xCDF5238171A3772D(2, "WORLD_HUMAN_GUARD_STAND", Local_419[7 /*13*/][2 /*3*/], 1599.355f, 2658.319f, 44.5652f, unk_0x444ECD635D5FD45F(5000, 10000));
	unk_0xCDF5238171A3772D(3, "WORLD_HUMAN_GUARD_STAND", Local_419[7 /*13*/][3 /*3*/], 1822.456f, 2749.189f, 44.9326f, unk_0x444ECD635D5FD45F(5000, 10000));
	unk_0x1B5B21A1ADE59CC8(0, 1);
	unk_0x1B5B21A1ADE59CC8(1, 2);
	unk_0x1B5B21A1ADE59CC8(2, 3);
	unk_0x1B5B21A1ADE59CC8(3, 0);
	unk_0x06580D0850DB2A7F();
	unk_0x0282CE890F1CC8D8();
	Local_419[9 /*13*/][0 /*3*/] = { 1824.288f, 2625.042f, 61.9749f };
	Local_419[9 /*13*/][1 /*3*/] = { 1820.524f, 2621.49f, 61.9951f };
	Local_419[9 /*13*/][2 /*3*/] = { 1820.414f, 2621.544f, 61.9908f };
	Local_419[9 /*13*/][3 /*3*/] = { 1823.45f, 2617.477f, 61.9829f };
	unk_0x79142AE391FE9892("miss_Tower_10");
	unk_0xCDF5238171A3772D(0, "WORLD_HUMAN_GUARD_STAND", Local_419[9 /*13*/][0 /*3*/], 1606.661f, 2815.673f, 37.9512f, unk_0x444ECD635D5FD45F(5000, 10000));
	unk_0xCDF5238171A3772D(1, "WORLD_HUMAN_GUARD_STAND", Local_419[9 /*13*/][1 /*3*/], 1602.887f, 2721.398f, 44.651f, unk_0x444ECD635D5FD45F(5000, 10000));
	unk_0xCDF5238171A3772D(2, "WORLD_HUMAN_GUARD_STAND", Local_419[9 /*13*/][2 /*3*/], 1599.355f, 2658.319f, 44.5652f, unk_0x444ECD635D5FD45F(5000, 10000));
	unk_0xCDF5238171A3772D(3, "WORLD_HUMAN_GUARD_STAND", Local_419[9 /*13*/][3 /*3*/], 1719.225f, 2766.111f, 44.6846f, unk_0x444ECD635D5FD45F(5000, 10000));
	unk_0x1B5B21A1ADE59CC8(0, 1);
	unk_0x1B5B21A1ADE59CC8(1, 2);
	unk_0x1B5B21A1ADE59CC8(2, 3);
	unk_0x1B5B21A1ADE59CC8(3, 0);
	unk_0x06580D0850DB2A7F();
	unk_0x0282CE890F1CC8D8();
}

void func_64()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x538DF9E5B1DF01EB(Local_317.f_64[iVar0]) && !unk_0xE44A580B551C3645(Local_317.f_64[iVar0]))
		{
			unk_0xA9465591B42213AE(Local_317.f_64[iVar0], -183807561);
			unk_0xA1478EBA54DDE31B(Local_317.f_64[iVar0], 132, 1);
			unk_0xE2C7331F9F27B397(Local_317.f_64[iVar0], 300f, 10);
			unk_0x6D84B26DD44A9CED(Local_317.f_64[iVar0], 1000f);
			unk_0x6F219990E5A7C335(Local_317.f_64[iVar0], 1000f);
			unk_0x2AFDCE82B62112C8(Local_317.f_64[iVar0], 1000f);
			unk_0x0CB975C4C6AB2C13(Local_317.f_64[iVar0], 2);
			unk_0x15EBFEEB77BF84B7(Local_317.f_64[iVar0], 13, 1);
			unk_0x15EBFEEB77BF84B7(Local_317.f_64[iVar0], 0, 0);
			unk_0x383868E60E28653A(Local_317.f_64[iVar0], 1);
			unk_0x59FF47176A212235(Local_317.f_64[iVar0], 1);
			unk_0x764EC66D3B10E5C1(Local_317.f_64[iVar0], 0f);
			unk_0x2686393074E14730(Local_317.f_64[iVar0], 1);
			unk_0xE97E86766A24F0FA(Local_317.f_64[iVar0], 20);
			unk_0x23FA15CAC1C1E536(Local_317.f_64[iVar0], 2);
			unk_0x15EBFEEB77BF84B7(Local_317.f_64[iVar0], 23, 0);
			unk_0x39272B2594E03395(Local_317.f_64[iVar0], joaat("weapon_sniperrifle"), -1, 1, 1);
			unk_0x4BE0FD78EDE6DDE2(Local_317.f_64[iVar0], 1000);
			unk_0x2C4E82CF88213975(Local_317.f_64[iVar0], 1);
			unk_0x6D84B26DD44A9CED(Local_317.f_64[iVar0], 1000f);
			if (!unk_0x2DE0B96E966FD817(Local_317.f_64[iVar0]))
			{
				if (iVar0 == 0)
				{
					unk_0x4C826F318DFF4320(Local_317.f_64[iVar0], "miss_Tower_01", 1, 0, 1);
				}
				else if (iVar0 == 1)
				{
					unk_0x4C826F318DFF4320(Local_317.f_64[iVar0], "miss_Tower_02", 1, 0, 1);
				}
				else if (iVar0 == 2)
				{
					unk_0x4C826F318DFF4320(Local_317.f_64[iVar0], "miss_Tower_03", 1, 0, 1);
				}
				else if (iVar0 == 3)
				{
					unk_0x4C826F318DFF4320(Local_317.f_64[iVar0], "miss_Tower_04", 1, 0, 1);
				}
				else if (iVar0 == 4)
				{
					unk_0x4C826F318DFF4320(Local_317.f_64[iVar0], "miss_Tower_05", 1, 0, 1);
				}
				else if (iVar0 == 5)
				{
					unk_0x4C826F318DFF4320(Local_317.f_64[iVar0], "miss_Tower_06", 1, 0, 1);
				}
				else if (iVar0 == 6)
				{
					unk_0x4C826F318DFF4320(Local_317.f_64[iVar0], "miss_Tower_07", 1, 0, 1);
				}
				else if (iVar0 == 7)
				{
					unk_0x4C826F318DFF4320(Local_317.f_64[iVar0], "miss_Tower_08", 1, 0, 1);
				}
				else if (iVar0 == 9)
				{
					unk_0x4C826F318DFF4320(Local_317.f_64[iVar0], "miss_Tower_10", 1, 0, 1);
				}
				else
				{
					unk_0x884AE44D5766F70C(Local_317.f_64[iVar0], Local_317.f_42[iVar0], 0, 0, -1);
				}
			}
		}
		iVar0++;
	}
}

void func_65()
{
	int iVar0;
	
	if (!unk_0x7A98E0DD2E6FAB7A(1823.845f, 2621.267f, 57f, 0.5f))
	{
		uLocal_403[0] = unk_0x9BB6F54E415071A1(joaat("polmav"), 1823.845f, 2621.267f, 57f, 53f, 1, 1);
		if (unk_0x538DF9E5B1DF01EB(uLocal_403[0]) && !unk_0xE44A580B551C3645(uLocal_403[0]))
		{
			uLocal_407[0] = unk_0x793482A351850A4F(uLocal_403[0], 6, joaat("s_m_m_prisguard_01"), -1, 1, 1);
			unk_0x75447E2E94CE161A(uLocal_407[0], 0);
			unk_0xA9465591B42213AE(uLocal_407[0], iLocal_315);
			unk_0x6A23C3306A8CF21B(uLocal_403[0], 0, 0);
			unk_0x423D1EBE54B18555(uLocal_403[0], 0);
			unk_0x75447E2E94CE161A(uLocal_403[0], 0);
			unk_0x3CC3106305C40A28(uLocal_403[0], 1);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x7A98E0DD2E6FAB7A(1761.418f, 2410.378f, 61f, 0.5f))
	{
		uLocal_403[1] = unk_0x9BB6F54E415071A1(joaat("polmav"), 1761.418f, 2410.378f, 61f, 13f, 1, 1);
		if (unk_0x538DF9E5B1DF01EB(uLocal_403[1]) && !unk_0xE44A580B551C3645(uLocal_403[1]))
		{
			uLocal_407[1] = unk_0x793482A351850A4F(uLocal_403[1], 6, joaat("s_m_m_prisguard_01"), -1, 1, 1);
			unk_0x75447E2E94CE161A(uLocal_407[1], 0);
			unk_0xA9465591B42213AE(uLocal_407[1], iLocal_315);
			unk_0x6A23C3306A8CF21B(uLocal_403[1], 0, 0);
			unk_0x423D1EBE54B18555(uLocal_403[1], 0);
			unk_0x75447E2E94CE161A(uLocal_403[1], 0);
			unk_0x3CC3106305C40A28(uLocal_403[1], 1);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x7A98E0DD2E6FAB7A(1534.635f, 2585.162f, 61f, 0.5f))
	{
		uLocal_403[2] = unk_0x9BB6F54E415071A1(joaat("polmav"), 1534.635f, 2585.162f, 61f, 250f, 1, 1);
		if (unk_0x538DF9E5B1DF01EB(uLocal_403[2]) && !unk_0xE44A580B551C3645(uLocal_403[2]))
		{
			uLocal_407[2] = unk_0x793482A351850A4F(uLocal_403[2], 6, joaat("s_m_m_prisguard_01"), -1, 1, 1);
			unk_0x75447E2E94CE161A(uLocal_407[2], 0);
			unk_0xA9465591B42213AE(uLocal_407[2], iLocal_315);
			unk_0x6A23C3306A8CF21B(uLocal_403[2], 0, 0);
			unk_0x423D1EBE54B18555(uLocal_403[2], 0);
			unk_0x75447E2E94CE161A(uLocal_403[2], 0);
			unk_0x3CC3106305C40A28(uLocal_403[2], 1);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((unk_0x538DF9E5B1DF01EB(uLocal_407[iVar0]) && !unk_0xE44A580B551C3645(uLocal_407[iVar0])) && !unk_0xE44A580B551C3645(uLocal_403[iVar0]))
		{
			if (func_25())
			{
				iLocal_411[iVar0] = 1;
				unk_0x490CDFE0B49F6FCA(uLocal_403[iVar0], 1, 0);
			}
		}
		iVar0++;
	}
}

void func_66()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!unk_0x538DF9E5B1DF01EB(Local_317.f_64[iVar0]))
		{
			Local_317.f_64[iVar0] = unk_0x6F9DE0DE8363ADF1(6, joaat("s_m_m_prisguard_01"), Local_317[iVar0 /*3*/], Local_317.f_31[iVar0], 1, 1);
			unk_0xEA054561294AEC10(joaat("s_m_m_prisguard_01"));
			unk_0x4EDE34FBADD967A6(0);
		}
		iVar0++;
	}
}

void func_67()
{
	Local_317[0 /*3*/] = { 1827.69f, 2474.181f, 61.7202f };
	Local_317[1 /*3*/] = { 1764.729f, 2409.139f, 61.7533f };
	Local_317[2 /*3*/] = { 1658.829f, 2390.888f, 61.7462f };
	Local_317[3 /*3*/] = { 1537.28f, 2468.338f, 61.7497f };
	Local_317[4 /*3*/] = { 1530.493f, 2585.172f, 61.7001f };
	Local_317[5 /*3*/] = { 1566.921f, 2682.525f, 61.7716f };
	Local_317[6 /*3*/] = { 1648.104f, 2761.528f, 61.9103f };
	Local_317[7 /*3*/] = { 1774.523f, 2766.559f, 61.9143f };
	Local_317[8 /*3*/] = { 1852.475f, 2697.632f, 61.9547f };
	Local_317[9 /*3*/] = { 1824.288f, 2625.042f, 61.9749f };
	Local_317.f_31[0] = 248.9733f;
	Local_317.f_31[1] = 45.8793f;
	Local_317.f_31[2] = 186.3656f;
	Local_317.f_31[3] = 313.5206f;
	Local_317.f_31[4] = 95.9574f;
	Local_317.f_31[5] = 289.3531f;
	Local_317.f_31[6] = 13.7511f;
	Local_317.f_31[7] = 0f;
	Local_317.f_31[8] = 208.5786f;
	Local_317.f_31[9] = 280.9389f;
}

int func_68()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		while (!unk_0xBE56E3F122265AAC(Local_628.f_14[iVar0]))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		iVar0++;
	}
	return 1;
}

int func_69()
{
	if (bLocal_617)
	{
		if (!unk_0x5494F37F35C1D7D7(joaat("s_m_y_prisoner_01")))
		{
			return 0;
		}
	}
	return 1;
}

int func_70()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!unk_0xBE56E3F122265AAC(Local_317.f_42[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	if (!unk_0x5494F37F35C1D7D7(joaat("polmav")))
	{
		return 0;
	}
	if (!unk_0x5494F37F35C1D7D7(joaat("s_m_m_prisguard_01")))
	{
		return 0;
	}
	return 1;
}

int func_71()
{
	if (bLocal_573)
	{
		if (!unk_0x5494F37F35C1D7D7(joaat("polmav")))
		{
			return 0;
		}
		if (!unk_0x0C73411A25059A28(101, "PrisonHeli"))
		{
			return 0;
		}
	}
	return 1;
}

int func_72()
{
	if (!unk_0x5494F37F35C1D7D7(joaat("s_m_m_security_01")))
	{
		return 0;
	}
	if (!unk_0x5494F37F35C1D7D7(joaat("s_m_m_prisguard_01")))
	{
		return 0;
	}
	if (!unk_0x5494F37F35C1D7D7(joaat("polmav")))
	{
		return 0;
	}
	return 1;
}

void func_73()
{
	int iVar0;
	
	func_74();
	iVar0 = 0;
	while (iVar0 < 3)
	{
		unk_0xB3F2C2105E254F2B(Local_628.f_14[iVar0]);
		iVar0++;
	}
}

void func_74()
{
	Local_628[0 /*3*/] = { 1768.628f, 2538.97f, 44.4054f };
	Local_628[1 /*3*/] = { 1633.613f, 2498.849f, 44.4117f };
	Local_628[2 /*3*/] = { 1622.61f, 2555.683f, 44.4051f };
	Local_628.f_10[0] = 0f;
	Local_628.f_10[1] = 0f;
	Local_628.f_10[2] = 198.4323f;
	Local_628.f_14[0] = "PatrolGuard02";
	Local_628.f_14[1] = "PatrolGuard03";
	Local_628.f_14[2] = "PatrolGuard04";
}

void func_75()
{
	int iVar0;
	
	Local_317.f_42[0] = "TowerGuard01";
	Local_317.f_42[1] = "TowerGuard02";
	Local_317.f_42[2] = "TowerGuard03";
	Local_317.f_42[3] = "TowerGuard04";
	Local_317.f_42[4] = "TowerGuard05";
	Local_317.f_42[5] = "TowerGuard06";
	Local_317.f_42[6] = "TowerGuard07";
	Local_317.f_42[7] = "TowerGuard08";
	Local_317.f_42[8] = "TowerGuard09";
	Local_317.f_42[9] = "TowerGuard10";
	iVar0 = 0;
	while (iVar0 < 10)
	{
		unk_0xB3F2C2105E254F2B(Local_317.f_42[iVar0]);
		iVar0++;
	}
	unk_0x939DA7EBCC6588FF(joaat("polmav"));
	unk_0x939DA7EBCC6588FF(joaat("s_m_m_prisguard_01"));
}

void func_76()
{
	bLocal_573 = false;
	if (func_25())
	{
		iLocal_574 = (unk_0x444ECD635D5FD45F(0, 65535) % 2);
		if (iLocal_574 == 0)
		{
			bLocal_573 = true;
			unk_0x939DA7EBCC6588FF(joaat("polmav"));
			unk_0xDF529DC50AE6BC93(101, "PrisonHeli");
		}
		else
		{
			bLocal_573 = false;
		}
	}
}

void func_77()
{
	unk_0x939DA7EBCC6588FF(joaat("s_m_m_security_01"));
	unk_0x939DA7EBCC6588FF(joaat("s_m_m_prisguard_01"));
	unk_0x939DA7EBCC6588FF(joaat("polmav"));
}

void func_78()
{
	iLocal_314 = iLocal_314;
	iLocal_314 = 0;
	func_79();
	func_32();
	Local_127.f_4 = 75;
	Local_127.f_6 = 15;
	unk_0xA4518FBB522834FE(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, 1, 0, 0, 0);
	unk_0xA4518FBB522834FE(joaat("prop_gate_prison_01"), 1819.274f, 2608.537f, 44.6195f, 1, 0f, 50f, 0);
	unk_0x0B29CE7F19BFE6C0("Prison_Guards", &iLocal_315);
	unk_0x0B29CE7F19BFE6C0("Prison_Prisoners", &iLocal_316);
	unk_0x2966D41514EAE84B(2, iLocal_315, iLocal_316);
	unk_0x2966D41514EAE84B(2, iLocal_316, iLocal_315);
	unk_0x2966D41514EAE84B(1, iLocal_315, joaat("COP"));
	unk_0x2966D41514EAE84B(1, joaat("COP"), iLocal_315);
	unk_0x2966D41514EAE84B(3, joaat("player"), iLocal_316);
	unk_0x2966D41514EAE84B(3, iLocal_316, joaat("player"));
}

void func_79()
{
	Local_64[0 /*3*/] = { 1809.816f, 2482.877f, 44.4744f };
	Local_64[1 /*3*/] = { 1755.823f, 2424.904f, 44.4319f };
	Local_64[2 /*3*/] = { 1661.2f, 2410.096f, 44.4265f };
	Local_64[3 /*3*/] = { 1555.966f, 2476.43f, 44.4042f };
	Local_64[4 /*3*/] = { 1549.141f, 2583.103f, 44.4225f };
	Local_64[5 /*3*/] = { 1581.156f, 2671.974f, 44.481f };
	Local_64[6 /*3*/] = { 1655.49f, 2743.69f, 44.4665f };
	Local_64[7 /*3*/] = { 1768.776f, 2748.527f, 44.4402f };
	Local_64[8 /*3*/] = { 1831.2f, 2696f, 44.4578f };
	Local_64[9 /*3*/] = { 1803.121f, 2617.781f, 44.5082f };
	Local_64[10 /*3*/] = { 1817.221f, 2608.387f, 44.6204f };
	Local_64[11 /*3*/] = { 1843.838f, 2608.361f, 44.6178f };
}

void func_80()
{
	if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
	{
		if ((unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), 1879.956f, 2705.097f, 52.07341f, 1869.859f, 2726.776f, 59.82338f, 24.75f, 0, 1, 0) || unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), 1833.113f, 2520.888f, 52.26086f, 1833.115f, 2554.431f, 61.25998f, 15f, 0, 1, 0)) || unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), 1832.742f, 2568.421f, 48.87375f, 1833.015f, 2596.529f, 57.12439f, 27.75f, 0, 1, 0))
		{
			if (unk_0xD25129559B94E910(unk_0x1788E93557766241()) == 0)
			{
				unk_0x4C1891512E1BE87D(unk_0x1788E93557766241(), 2, 0);
				unk_0x20B787477FD9ECB2(unk_0x1788E93557766241(), 0);
			}
		}
	}
	if (!iLocal_103)
	{
		if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
		{
			if (unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), 1917.889f, 2618.476f, -45.677f, 1822.889f, 2618.476f, 45.677f, 195f, 0, 0, 0))
			{
				if (unk_0x87A6D0A35BD971FB(unk_0x1788E93557766241()))
				{
					unk_0x4C1891512E1BE87D(unk_0x1788E93557766241(), 4, 0);
					unk_0x20B787477FD9ECB2(unk_0x1788E93557766241(), 0);
					unk_0x2966D41514EAE84B(5, joaat("player"), -183807561);
					unk_0x2966D41514EAE84B(5, -183807561, joaat("player"));
					iLocal_103 = 1;
				}
				if ((unk_0xF6BC67E137183D3F(1874.072f, 2605.423f, 44.6723f, 100f, 1) && !unk_0xE3DA5C92341F5AE4(unk_0x1788E93557766241())) || (unk_0x7D0624057C8895A0(unk_0xA16EC202D9D35357()) && !unk_0x87A6D0A35BD971FB(unk_0x1788E93557766241())))
				{
					unk_0x20B787477FD9ECB2(unk_0x1788E93557766241(), 0);
					unk_0x4C1891512E1BE87D(unk_0x1788E93557766241(), 1, 0);
					unk_0x2966D41514EAE84B(5, joaat("player"), -183807561);
					unk_0x2966D41514EAE84B(5, -183807561, joaat("player"));
					iLocal_103 = 1;
				}
			}
		}
	}
}

void func_81()
{
	int iVar0;
	
	func_87();
	func_86();
	func_85();
	func_84();
	func_83();
	func_82();
	unk_0x7C0AE4B10FB5A304("PRISON_ALARMS", 1);
	if (iLocal_103)
	{
		unk_0x2966D41514EAE84B(2, joaat("player"), -183807561);
		unk_0x2966D41514EAE84B(2, -183807561, joaat("player"));
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (unk_0x128AA9A6244413D6(uLocal_51[iVar0]))
		{
			unk_0xE3E1063389C746FB(uLocal_51[iVar0]);
		}
		iVar0++;
	}
	unk_0xA4518FBB522834FE(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, 1, 0, 0, 0);
	unk_0xA4518FBB522834FE(joaat("prop_gate_prison_01"), 1819.274f, 2608.537f, 44.6195f, 1, 0f, 50f, 0);
	unk_0x82706E6C897B0FA1();
}

void func_82()
{
	if (unk_0x538DF9E5B1DF01EB(iLocal_123))
	{
		unk_0x3A3C5A6572B3C611(&iLocal_123);
	}
	if (unk_0x538DF9E5B1DF01EB(iLocal_125))
	{
		unk_0x6B3DDEE91652BE59(&iLocal_125);
	}
	if (unk_0x538DF9E5B1DF01EB(iLocal_124))
	{
		unk_0x3A3C5A6572B3C611(&iLocal_124);
	}
	if (unk_0x538DF9E5B1DF01EB(iLocal_126))
	{
		unk_0x6B3DDEE91652BE59(&iLocal_126);
	}
}

void func_83()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x538DF9E5B1DF01EB(Local_628.f_27[iVar0]))
		{
			if (unk_0x5660C8AFDD9C1721(Local_628.f_36[iVar0]))
			{
				unk_0xB6FB9702660D84F6(&(Local_628.f_36[iVar0]));
			}
			if (unk_0x0E7E162F5A49FAAA(Local_628.f_27[iVar0]))
			{
				unk_0x51A89CCC8A5317D0(&(Local_628.f_27[iVar0]));
			}
			else
			{
				unk_0x6B3DDEE91652BE59(&(Local_628.f_27[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x538DF9E5B1DF01EB(Local_628.f_31[iVar0]))
		{
			if (unk_0x5660C8AFDD9C1721(Local_628.f_40[iVar0]))
			{
				unk_0xB6FB9702660D84F6(&(Local_628.f_40[iVar0]));
			}
			if (unk_0x0E7E162F5A49FAAA(Local_628.f_31[iVar0]))
			{
				unk_0x51A89CCC8A5317D0(&(Local_628.f_31[iVar0]));
			}
			else
			{
				unk_0x6B3DDEE91652BE59(&(Local_628.f_31[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_84()
{
	if (unk_0x5660C8AFDD9C1721(uLocal_620))
	{
		unk_0xB6FB9702660D84F6(&uLocal_620);
	}
	if (unk_0x538DF9E5B1DF01EB(uLocal_618))
	{
		unk_0x2F2948A2506AA404(&iLocal_618);
	}
}

void func_85()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (unk_0x538DF9E5B1DF01EB(uLocal_575[iVar0]))
		{
			if (unk_0x5660C8AFDD9C1721(uLocal_596[iVar0]))
			{
				unk_0xB6FB9702660D84F6(&(uLocal_596[iVar0]));
			}
			unk_0x51A89CCC8A5317D0(&(uLocal_575[iVar0]));
		}
		iVar0++;
	}
}

void func_86()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x538DF9E5B1DF01EB(uLocal_403[iVar0]))
		{
			unk_0x2F2948A2506AA404(&(uLocal_403[iVar0]));
		}
		if (unk_0x538DF9E5B1DF01EB(uLocal_407[iVar0]))
		{
			unk_0x51A89CCC8A5317D0(&(uLocal_407[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x538DF9E5B1DF01EB(Local_317.f_64[iVar0]))
		{
			if (unk_0x5660C8AFDD9C1721(Local_317.f_75[iVar0]))
			{
				unk_0xB6FB9702660D84F6(&(Local_317.f_75[iVar0]));
			}
			if (unk_0x0E7E162F5A49FAAA(Local_317.f_64[iVar0]))
			{
				unk_0x51A89CCC8A5317D0(&(Local_317.f_64[iVar0]));
			}
			else
			{
				unk_0x6B3DDEE91652BE59(&(Local_317.f_64[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_87()
{
	if (unk_0x5660C8AFDD9C1721(uLocal_570))
	{
		unk_0xB6FB9702660D84F6(&uLocal_570);
	}
	if (unk_0x538DF9E5B1DF01EB(iLocal_568))
	{
		if (unk_0x0E7E162F5A49FAAA(iLocal_568))
		{
			unk_0x2F2948A2506AA404(&iLocal_568);
			unk_0x51A89CCC8A5317D0(&iLocal_569);
		}
		else
		{
			func_88(&iLocal_568, &iLocal_569);
			unk_0x3A3C5A6572B3C611(&iLocal_568);
		}
	}
}

void func_88(var uParam0, var uParam1)
{
	if (((unk_0x538DF9E5B1DF01EB(*uParam0) && unk_0x538DF9E5B1DF01EB(*uParam1)) && !unk_0xE44A580B551C3645(*uParam0)) && !unk_0xE44A580B551C3645(*uParam1))
	{
		if (unk_0x7F40BDE5E3EA9E62(*uParam0))
		{
			if (unk_0x6475D37A1CED9761(*uParam0))
			{
				if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
				{
					unk_0x21A3553D368D632F(*uParam1, *uParam0, 0, 0, unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), 8, 50f, -1f, 30f, 100, 50);
				}
			}
		}
	}
}

