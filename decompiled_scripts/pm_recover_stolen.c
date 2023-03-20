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
	int iLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	struct<28> Local_37 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 786468, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	bool bLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	var uLocal_73 = 16;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
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
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	char[] cLocal_240[8] = 0;
	var uLocal_241 = 0;
	int iLocal_242 = 0;
	var uLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = -1;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 1000;
	var uLocal_264 = 1000;
	var uLocal_265 = 0;
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
	iLocal_20 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_67 = -1;
	iLocal_238 = -1;
	iLocal_239 = -1;
	StringCopy(&cLocal_240, "PMRAUD", 8);
	iLocal_252 = -1;
	iLocal_253 = -1;
	unk_0x7944710FF545C60B(1);
	if (unk_0x2EC83C7ACA23E8A4(3))
	{
		func_81(2);
		func_80();
	}
	func_74();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (func_73())
		{
			iLocal_239 = -1;
		}
		else if (iLocal_239 == -1)
		{
			iLocal_239 = unk_0xDF658EB6CA91DFBC();
		}
		func_1();
	}
}

void func_1()
{
	char cVar0[32];
	struct<3> Var8;
	int iVar11;
	
	switch (iLocal_36)
	{
		case 0:
			unk_0x491067A8E906F22D(Local_37.f_10);
			if (Local_37.f_11 != 0)
			{
				unk_0x491067A8E906F22D(Local_37.f_11);
			}
			unk_0x7BCE93123FE81E45("PRECOV", 0);
			if (unk_0x985A6C5313B2276C(0))
			{
				if (unk_0xD3FACCDA4D66AEAD(Global_100265.f_222[0]) && unk_0x1F1B2B6E500380C5(Global_100265.f_222[0], 0))
				{
					iLocal_244 = Global_100265.f_222[0];
					Global_100265.f_222[0] = 0;
					unk_0x7B17650F15A8876D(iLocal_244, 1, 1);
					Local_37.f_7 = unk_0x705BC1BB91F530B5(iLocal_244);
					unk_0x2C07692AA3545079(Local_37.f_7);
					unk_0x3607936F13065720(Local_37.f_7, 1);
				}
				if (unk_0xD3FACCDA4D66AEAD(Global_100265.f_225[0]))
				{
					iLocal_245 = Global_100265.f_225[0];
					Global_100265.f_225[0] = 0;
					unk_0x7B17650F15A8876D(iLocal_245, 1, 1);
					Local_37.f_8 = unk_0x705BC1BB91F530B5(iLocal_245);
					unk_0x65889F26F311FC55(iLocal_245, iLocal_251);
					unk_0xFB4B028F94A31239(iLocal_245, 0);
					unk_0x76A0FFACB5B58711(iLocal_245, 5);
					unk_0x77637031DE326F70(iLocal_245, 1);
					unk_0x87BBAE0EE5DD7680(iLocal_245, 23, 1);
					if (unk_0xBFD32C1D4D54E09B(Local_37.f_7))
					{
						if (Local_37.f_26)
						{
							unk_0x4519324BAE580305(iLocal_245, 1);
							unk_0xC874C506F7527F84(iLocal_245, 1, 4096, -1);
						}
						else
						{
							unk_0x4519324BAE580305(iLocal_245, 0);
						}
					}
					if (Local_37.f_20)
					{
						unk_0x8942ADC0DB9F81E4(iLocal_245, joaat("weapon_pistol"), 120, 0, 0);
						unk_0x8942ADC0DB9F81E4(iLocal_245, joaat("weapon_microsmg"), 120, 1, 1);
					}
					unk_0x2C07692AA3545079(Local_37.f_8);
					unk_0xC2407AC016215F2D(iLocal_245, 0, 0, 0, Local_37.f_27, 0, 0, 0, 0);
					func_72(&uLocal_73, 3, iLocal_245, "ABIGAIL", 0, 1);
				}
				if (unk_0xD3FACCDA4D66AEAD(Global_100265.f_225[1]))
				{
					iLocal_246 = Global_100265.f_225[1];
					Global_100265.f_225[1] = 0;
					unk_0x7B17650F15A8876D(iLocal_246, 1, 1);
					Local_37.f_9 = unk_0x705BC1BB91F530B5(iLocal_246);
					unk_0x65889F26F311FC55(iLocal_246, iLocal_251);
					unk_0xFB4B028F94A31239(iLocal_246, 0);
					unk_0x76A0FFACB5B58711(iLocal_246, 5);
					unk_0x77637031DE326F70(iLocal_246, 1);
					unk_0x87BBAE0EE5DD7680(iLocal_246, 23, 1);
					if (unk_0xBFD32C1D4D54E09B(Local_37.f_7))
					{
						if (Local_37.f_26)
						{
							unk_0x4519324BAE580305(iLocal_246, 1);
							unk_0xC874C506F7527F84(iLocal_246, 1, 4096, -1);
						}
						else
						{
							unk_0x4519324BAE580305(iLocal_246, 0);
						}
					}
					unk_0x2C07692AA3545079(Local_37.f_9);
					unk_0xC2407AC016215F2D(iLocal_246, 0, 0, 0, Local_37.f_27, 0, 0, 0, 0);
				}
				if ((!unk_0xD3FACCDA4D66AEAD(iLocal_245) || !unk_0xEB361B4BD195A4D3(iLocal_245)) && (!unk_0xD3FACCDA4D66AEAD(iLocal_246) || !unk_0xEB361B4BD195A4D3(iLocal_246)))
				{
					uLocal_249 = func_71(iLocal_244, 1, 0);
					StringCopy(&cVar0, "STOP_THIEF_", 32);
					StringConCat(&cVar0, &(Local_37.f_12), 32);
					func_70(&cVar0, 7500, 1);
					func_69(&(Local_37.f_22), 10000);
					iLocal_238 = 0;
					iLocal_68 = 0;
					iLocal_69 = 0;
					if (Local_37.f_19 != -1)
					{
						iLocal_67 = (unk_0xDF658EB6CA91DFBC() + Local_37.f_19);
					}
				}
				iLocal_36++;
			}
			break;
		
		case 1:
			if (((((unk_0xD3FACCDA4D66AEAD(iLocal_245) && unk_0xEB361B4BD195A4D3(iLocal_245)) || (unk_0xD3FACCDA4D66AEAD(iLocal_246) && unk_0xEB361B4BD195A4D3(iLocal_246))) || ((Local_37.f_17 && unk_0xBFD32C1D4D54E09B(Local_37.f_7)) && !unk_0x1FD87E888EB4FC00(iLocal_245, iLocal_244, 0))) || ((Local_37.f_17 && unk_0xBFD32C1D4D54E09B(Local_37.f_7)) && !unk_0x1FD87E888EB4FC00(iLocal_246, iLocal_244, 0))) || ((Local_37.f_18 && !unk_0x1FD87E888EB4FC00(iLocal_245, iLocal_244, 0)) && func_68(iLocal_245)))
			{
				if (Local_37.f_17 && unk_0xBFD32C1D4D54E09B(Local_37.f_7))
				{
					if (!unk_0xEB361B4BD195A4D3(iLocal_245) && unk_0x1FD87E888EB4FC00(iLocal_245, iLocal_244, 0))
					{
						unk_0x41322B2D7C88AFF1(iLocal_245);
					}
					if (!unk_0xEB361B4BD195A4D3(iLocal_246) && unk_0x1FD87E888EB4FC00(iLocal_246, iLocal_244, 0))
					{
						unk_0x41322B2D7C88AFF1(iLocal_246);
					}
				}
				if (unk_0x43589182CF3243AE())
				{
					unk_0x715FC4B638D9A515();
				}
				if (unk_0x598A9E990F05F82C())
				{
					unk_0x94724F7C938EBE34(1);
				}
				if (func_73())
				{
					func_66();
				}
				iLocal_238 = -1;
				if (unk_0x2C1B5A0D3E233FC3(Local_37.f_10) && (Local_37.f_11 == 0 || unk_0x2C1B5A0D3E233FC3(Local_37.f_11)))
				{
					if (unk_0xD3FACCDA4D66AEAD(iLocal_245))
					{
						Var8 = { unk_0x98C1B5DB039FB606(iLocal_245, 1067030938, 1069547520) };
						uLocal_247 = unk_0x2C909F6674445C8D(joaat("pickup_money_med_bag"), Var8, Local_37.f_28, -1, 1, Local_37.f_10);
						unk_0x2C07692AA3545079(Local_37.f_10);
						if (unk_0x16833EFAA58E63DB(uLocal_249))
						{
							unk_0x0B57C567D698C373(&uLocal_249);
						}
						uLocal_249 = func_65(uLocal_247);
					}
					if (unk_0xD3FACCDA4D66AEAD(iLocal_246) && Local_37.f_11 != 0)
					{
						Var8 = { unk_0x98C1B5DB039FB606(iLocal_246, 1067030938, 1069547520) };
						uLocal_248 = unk_0x2C909F6674445C8D(joaat("pickup_money_med_bag"), Var8, Local_37.f_29, -1, 1, Local_37.f_11);
						unk_0x2C07692AA3545079(Local_37.f_11);
						if (unk_0x16833EFAA58E63DB(uLocal_250))
						{
							unk_0x0B57C567D698C373(&uLocal_250);
						}
						uLocal_250 = func_65(uLocal_248);
					}
					func_64(&uLocal_254, 0, 0);
					iLocal_242 = 1;
					iLocal_36++;
				}
			}
			else
			{
				if (unk_0x39FEE545B315414E(iLocal_245, 0))
				{
					if (unk_0x16833EFAA58E63DB(uLocal_250))
					{
						unk_0x0B57C567D698C373(&uLocal_250);
					}
					if (!unk_0x16833EFAA58E63DB(uLocal_249))
					{
						uLocal_249 = func_71(unk_0xF8DB47D339B8B953(iLocal_245, 0), 1, 0);
					}
				}
				else
				{
					if (unk_0x16833EFAA58E63DB(uLocal_249))
					{
						unk_0x0B57C567D698C373(&uLocal_249);
					}
					if (!unk_0x16833EFAA58E63DB(uLocal_250))
					{
						uLocal_250 = func_61(iLocal_245, 1, 145);
					}
				}
				func_40(&uLocal_254, iLocal_245, 0, 0, 1, 1, 1);
				if (iLocal_67 != -1)
				{
					if (unk_0xDF658EB6CA91DFBC() > iLocal_67)
					{
						func_39();
					}
					else
					{
						iVar11 = func_38(unk_0x9ABCEFB6E400C9FB((iLocal_67 - unk_0xDF658EB6CA91DFBC())), 0, Local_37.f_19);
						if (iVar11 <= 10000)
						{
							func_34((Local_37.f_19 - iVar11), Local_37.f_19, "UPLOAD", 9, 10000, 1, 2);
						}
						else
						{
							func_34((Local_37.f_19 - iVar11), Local_37.f_19, "UPLOAD", 9, 0, 1, 2);
						}
					}
				}
				if (unk_0xD3FACCDA4D66AEAD(iLocal_245))
				{
					if (func_33(unk_0xA0081090911D13E5(), iLocal_245, 1) > 500f)
					{
						func_39();
					}
					else if (unk_0x16833EFAA58E63DB(uLocal_249))
					{
						func_32(uLocal_249, iLocal_245, 500f, 0.8f, 0);
					}
				}
				if (unk_0xD3FACCDA4D66AEAD(iLocal_246))
				{
					if (func_33(unk_0xA0081090911D13E5(), iLocal_246, 1) > 500f)
					{
						func_39();
					}
					else if (unk_0x16833EFAA58E63DB(uLocal_250))
					{
						func_32(uLocal_250, iLocal_246, 500f, 0.8f, 0);
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x04793529D4EC36D1(uLocal_247) || unk_0xC37D05B586FADB2B(uLocal_247))
			{
				if (unk_0x04793529D4EC36D1(uLocal_247))
				{
					unk_0xBA2C7B36DA3F59D3(uLocal_247);
				}
				if (unk_0x16833EFAA58E63DB(uLocal_249))
				{
					unk_0x0B57C567D698C373(&uLocal_249);
				}
			}
			if (!unk_0x04793529D4EC36D1(uLocal_248) || unk_0xC37D05B586FADB2B(uLocal_248))
			{
				if (unk_0x04793529D4EC36D1(uLocal_248))
				{
					unk_0xBA2C7B36DA3F59D3(uLocal_248);
				}
				if (unk_0x16833EFAA58E63DB(uLocal_250))
				{
					unk_0x0B57C567D698C373(&uLocal_250);
				}
			}
			if (!unk_0x16833EFAA58E63DB(uLocal_249) && !unk_0x16833EFAA58E63DB(uLocal_250))
			{
				if (unk_0xBD7EFE00EBB42D77(unk_0x0C1D3C552325765B(), 0))
				{
					if (!iLocal_71)
					{
						func_70("LOSE_WANTED", 7500, 1);
						iLocal_71 = 1;
					}
				}
				else
				{
					unk_0x715FC4B638D9A515();
					func_31();
				}
			}
			else if ((unk_0x04793529D4EC36D1(uLocal_247) && func_30(unk_0xA0081090911D13E5(), unk_0xCA4126970421B696(uLocal_247), 1) > 500f) || (unk_0x04793529D4EC36D1(uLocal_248) && func_30(unk_0xA0081090911D13E5(), unk_0xCA4126970421B696(uLocal_248), 1) > 500f))
			{
				func_39();
			}
			else if (iLocal_242 && func_28())
			{
				unk_0x715FC4B638D9A515();
				StringCopy(&cVar0, "PKUP_", 32);
				StringConCat(&cVar0, &(Local_37.f_12), 32);
				func_70(&cVar0, 7500, 1);
				iLocal_242 = 0;
			}
			break;
	}
	if (unk_0xD3FACCDA4D66AEAD(iLocal_245) && !unk_0xEB361B4BD195A4D3(iLocal_245))
	{
		if ((unk_0xD3FACCDA4D66AEAD(iLocal_244) && unk_0x1F1B2B6E500380C5(iLocal_244, 0)) && !iLocal_68)
		{
			if (!func_27(iLocal_245, 242628503, 1))
			{
				unk_0x95C55738CAE00A20(&uLocal_243);
				unk_0xC7A9E9D688D679E8(0, iLocal_244, 31, 10000);
				unk_0x96F7890AEA06DDAE(0, iLocal_244, unk_0xA0081090911D13E5(), 8, 30f, Local_37.f_16, 1000f, 0f, 1);
				unk_0x70B222EEA46C37FA(uLocal_243);
				unk_0x3998B29E786DFD96(iLocal_245, uLocal_243);
				unk_0x7DFD14B8B873D6B5(&uLocal_243);
				iLocal_68 = 1;
			}
		}
		else if (((func_27(iLocal_245, 242628503, 1) && unk_0x962AB147BBEEBE33(iLocal_245) < 1) && !iLocal_69) && (((((unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), Local_37, Local_37.f_3, Local_37.f_6, 0, 1, 0) || unk_0xCC455F3EA7B162D8(iLocal_245, 122)) || unk_0xCC455F3EA7B162D8(iLocal_245, 123)) || unk_0xCC455F3EA7B162D8(iLocal_245, 124)) || unk_0xCC455F3EA7B162D8(iLocal_245, 23)) || func_26(Global_100265.f_35, 134217728)))
		{
			unk_0x96F7890AEA06DDAE(iLocal_245, iLocal_244, unk_0xA0081090911D13E5(), 8, 30f, Local_37.f_16, 1000f, 0f, 1);
			iLocal_69 = 1;
		}
		else if ((!func_27(iLocal_245, 242628503, 1) && !func_27(iLocal_245, -1273030092, 1)) || !unk_0x39FEE545B315414E(iLocal_245, 0))
		{
			if (!func_27(iLocal_245, 1805844857, 1))
			{
				unk_0x69E46DC398F0B2BD(iLocal_245, unk_0xA0081090911D13E5(), 1000f, -1, 0, 1);
			}
		}
		else if (unk_0x1FD87E888EB4FC00(iLocal_245, iLocal_244, 1) && (((unk_0x9E7343C699F331A6(iLocal_244, 0, 3000) || unk_0x9E7343C699F331A6(iLocal_244, 1, 3000)) || unk_0x9E7343C699F331A6(iLocal_244, 2, 8000)) || unk_0x9E7343C699F331A6(iLocal_244, 3, 8000)))
		{
			if (!func_27(iLocal_245, 451360105, 1))
			{
				unk_0xAB74B3F15710FF7D(iLocal_245, iLocal_244, 0);
			}
		}
		if (Local_37.f_20)
		{
			if (!bLocal_70)
			{
				if ((((unk_0x4AEC0F4FC7FE62C7(iLocal_245, unk_0xA0081090911D13E5(), 1) || unk_0x4AEC0F4FC7FE62C7(iLocal_244, unk_0xA0081090911D13E5(), 1)) || unk_0xCC455F3EA7B162D8(iLocal_245, 122)) || unk_0xCC455F3EA7B162D8(iLocal_245, 123)) || unk_0xCC455F3EA7B162D8(iLocal_245, 124))
				{
					bLocal_70 = true;
				}
			}
			if (bLocal_70)
			{
				if ((unk_0x21178DF77817BF39(iLocal_245, 242628503) == 1 && unk_0x962AB147BBEEBE33(iLocal_245) == 1) || unk_0x21178DF77817BF39(iLocal_245, -1273030092) == 1)
				{
					if (!unk_0xCE5B5C7B05F480D2(iLocal_245))
					{
						unk_0x2ABE838B945DFCD7(iLocal_245, joaat("weapon_microsmg"));
						unk_0x04EAFCCD1700249A(iLocal_245, unk_0xA0081090911D13E5(), 0, 0f, 0f, 0f, 1000f, 100, 1, -753768974);
					}
				}
			}
		}
		if (unk_0xD3FACCDA4D66AEAD(iLocal_244) && unk_0x1F1B2B6E500380C5(iLocal_244, 0))
		{
			if (!iLocal_72)
			{
				if ((func_27(iLocal_245, 242628503, 1) && unk_0x962AB147BBEEBE33(iLocal_245) == 1) || func_27(iLocal_245, -1273030092, 1))
				{
					if (unk_0xDD9B91529459212C("TAKINGS", 0, -1))
					{
						unk_0x7DEFCA77DEA2C174(-1, "TAKINGS_TIRES_PEELAWAY_master", iLocal_244, 0, 0, 0);
						iLocal_72 = 1;
					}
				}
			}
		}
	}
	if (unk_0xD3FACCDA4D66AEAD(iLocal_246) && !unk_0xEB361B4BD195A4D3(iLocal_246))
	{
		if (!unk_0x39FEE545B315414E(iLocal_246, 0) && !func_27(iLocal_246, 1805844857, 1))
		{
			unk_0x69E46DC398F0B2BD(iLocal_246, unk_0xA0081090911D13E5(), 1000f, -1, 0, 1);
		}
	}
	if (unk_0xD3FACCDA4D66AEAD(iLocal_245) && !unk_0xEB361B4BD195A4D3(iLocal_245))
	{
		if (unk_0x630BD2AFB0686BBA(iLocal_245) && !unk_0x39FEE545B315414E(iLocal_245, 0))
		{
			if (func_73())
			{
				func_66();
			}
		}
		else if (func_33(unk_0xA0081090911D13E5(), iLocal_245, 1) < 15f)
		{
			switch (iLocal_238)
			{
				case 0:
					if (func_25())
					{
						MemCopy(&cVar0, {Local_37.f_12}, 8);
						StringConCat(&cVar0, "_1", 32);
						MemCopy(&cVar0, {func_24(&cVar0)}, 8);
						if (func_7(&uLocal_73, &cLocal_240, &cVar0, 8, 0, 0, 0))
						{
							StringCopy(&cVar0, "", 32);
							iLocal_238++;
						}
					}
					break;
				
				case 1:
					if (func_25())
					{
						if (!unk_0x124290C0A019B083(iLocal_245))
						{
							if (func_5() == 0)
							{
								StringCopy(&cVar0, "GENERIC_INSULT_HIGH", 32);
							}
							else if (func_5() == 1)
							{
								StringCopy(&cVar0, "GENERIC_INSULT_MED", 32);
							}
							func_3(iLocal_245, &cVar0, 10);
							iLocal_239 = -1;
							StringCopy(&cVar0, "", 32);
							iLocal_238++;
						}
					}
					break;
				
				case 2:
					if (func_25() && (unk_0xDF658EB6CA91DFBC() - iLocal_239) > 3500)
					{
						MemCopy(&cVar0, {Local_37.f_12}, 8);
						StringConCat(&cVar0, "_3", 32);
						MemCopy(&cVar0, {func_24(&cVar0)}, 8);
						if (func_7(&uLocal_73, &cLocal_240, &cVar0, 8, 0, 0, 0))
						{
							StringCopy(&cVar0, "", 32);
							iLocal_238++;
						}
					}
					break;
				
				case 3:
					if (func_25() && (unk_0xDF658EB6CA91DFBC() - iLocal_239) > 1500)
					{
						if (!unk_0x124290C0A019B083(iLocal_245))
						{
							if (func_5() == 0)
							{
								StringCopy(&cVar0, "GENERIC_INSULT_HIGH", 32);
							}
							else if (func_5() == 1)
							{
								StringCopy(&cVar0, "GENERIC_INSULT_MED", 32);
							}
							func_3(iLocal_245, &cVar0, 10);
							iLocal_239 = -1;
							StringCopy(&cVar0, "", 32);
							iLocal_238 = (iLocal_238 - 1);
						}
					}
					break;
				}
			}
	}
	if (unk_0xD3FACCDA4D66AEAD(iLocal_245))
	{
		if (unk_0xEB361B4BD195A4D3(iLocal_245))
		{
			if (Local_37.f_21)
			{
				func_2(1);
				func_39();
			}
		}
		else if (Local_37.f_27)
		{
			if (iLocal_252 == -1)
			{
				if (!unk_0x630BD2AFB0686BBA(iLocal_245))
				{
					iLocal_252 = unk_0xDF658EB6CA91DFBC();
				}
			}
			else if ((unk_0xDF658EB6CA91DFBC() - iLocal_252) > 2000)
			{
				unk_0xC2407AC016215F2D(iLocal_245, 0, 0, 0, 0, 0, 0, 0, 0);
			}
		}
	}
	if (unk_0xD3FACCDA4D66AEAD(iLocal_246))
	{
		if (unk_0xEB361B4BD195A4D3(iLocal_246))
		{
			if (Local_37.f_21)
			{
				func_2(1);
				func_39();
			}
		}
		else if (Local_37.f_27)
		{
			if (iLocal_253 == -1)
			{
				if (!unk_0x630BD2AFB0686BBA(iLocal_246))
				{
					iLocal_253 = unk_0xDF658EB6CA91DFBC();
				}
			}
			else if ((unk_0xDF658EB6CA91DFBC() - iLocal_253) > 2000)
			{
				unk_0xC2407AC016215F2D(iLocal_246, 0, 0, 0, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_2(int iParam0)
{
	Global_100265.f_220 = iParam0;
}

void func_3(int iParam0, char[4] cParam1, int iParam2)
{
	unk_0xD8A7A2C7456E47C9(iParam0, cParam1, func_4(iParam2), 1);
}

int func_4(int iParam0)
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

int func_5()
{
	return func_6(Global_100265.f_20, Global_100265.f_29);
}

int func_6(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 6:
		case 5:
		case 7:
			return 0;
			break;
		
		case 11:
		case 12:
		case 13:
		case 14:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 1;
					break;
			}
			break;
	}
	return iParam1;
}

bool func_7(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_23(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15752 = 0;
	Global_15754 = 0;
	Global_15759 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_2621441 = 0;
	return func_8(sParam2, iParam3, 0);
}

int func_8(char* sParam0, int iParam1, bool bParam2)
{
	Global_15746 = 0;
	if (Global_15745 == 0 || Global_15747 == 2)
	{
		if (Global_15745 != 0)
		{
			if (iParam1 > Global_15747)
			{
				if (Global_15752 == 0)
				{
					unk_0x588D9B1F6CF36C3C(0);
					Global_14443.f_1 = 3;
					Global_15745 = 0;
					Global_15746 = 1;
					Global_15798 = 0;
					Global_15741 = 0;
					Global_15742 = 0;
					Global_15756 = 0;
					Global_15755 = 0;
					Global_14442 = 0;
				}
				else
				{
					func_22();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xE80581DE0ACF1F8A())
		{
			return 0;
		}
		if (func_21(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_20();
		Global_15034 = { Global_15199 };
		Global_15751 = Global_15752;
		Global_15758 = Global_15759;
		Global_2621442 = Global_2621441;
		Global_15760 = { Global_15776 };
		Global_15753 = Global_15754;
		Global_16735 = Global_16736;
		Global_16743 = { Global_16749 };
		Global_16737 = Global_16738;
		Global_16739 = Global_16740;
		Global_16741 = Global_16742;
		Global_15364.f_370 = Global_16734;
		Global_15364.f_368 = Global_16732;
		Global_15364.f_369 = Global_16733;
		Global_15741 = Global_15742;
		if (Global_15751)
		{
			unk_0x09C86C0C5CA26B1E(&Global_2313, 20);
			unk_0x09C86C0C5CA26B1E(&Global_2314, 17);
			unk_0x09C86C0C5CA26B1E(&Global_2315, 0);
			if (bParam2)
			{
				func_13();
				if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14443.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14409 == 1)
			{
				return 0;
			}
			if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
			{
				if (unk_0x7B5A014A9AC61FB3(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (func_12())
				{
					return 0;
				}
				if (unk_0x8E30A8C5F10F6DD2(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (unk_0xFFE4F37124DBE6D9(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (unk_0xAE4B87F710B7DE76(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (unk_0xB057BAEE46DEDD89(unk_0xA0081090911D13E5(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69617)
				{
					if (unk_0xB46E03E529421E99(unk_0xA0081090911D13E5()))
					{
						return 0;
					}
					if (unk_0x2FFAB3D2307F1BA7(unk_0x0C1D3C552325765B()))
					{
						return 0;
					}
					if (unk_0x7DF282A008F6DC55(unk_0xA0081090911D13E5()))
					{
						return 0;
					}
					if (unk_0x7B09C8C1D3D1F427(unk_0x0C1D3C552325765B()))
					{
						return 0;
					}
				}
			}
			if (func_11())
			{
				return 0;
			}
			else
			{
				switch (Global_14443.f_1)
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
				if (unk_0x08BA6DD398CA197C(Global_2313, 9))
				{
					return 0;
				}
			}
			func_10();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_9();
		return 1;
	}
	if (Global_15745 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15747 || iParam1 == Global_15747)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_22();
	}
	return 0;
}

void func_9()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x588D9B1F6CF36C3C(0);
	Global_15745 = 1;
}

void func_10()
{
	Global_15798 = Global_15797;
	Global_15792 = Global_15793;
	Global_15839 = { Global_15827 };
	Global_15845 = { Global_15833 };
	Global_15800 = Global_15799;
	Global_15869 = { Global_15851 };
	Global_15875 = { Global_15857 };
	Global_15881 = { Global_15863 };
	Global_15887 = { Global_15893 };
	Global_1628 = Global_1629;
	Global_1630 = Global_1631;
	Global_15756 = Global_15757;
	Global_15758 = Global_15759;
	Global_15760 = { Global_15776 };
	Global_15749 = Global_15750;
	Global_16761 = 0;
	Global_15794 = 0;
	Global_15795 = 0;
	unk_0x09C86C0C5CA26B1E(&Global_2314, 16);
}

int func_11()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_12()
{
	int iVar0;
	int iVar1;
	
	if (Global_69617)
	{
		iVar0 = 0;
		unk_0x79DEFA3570360EAF(unk_0xA0081090911D13E5(), &iVar1, 1);
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x62B4986EA88E929B() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
	{
		if (unk_0x8B99D63EA8B2E230(unk_0xA0081090911D13E5(), 78, 1))
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

void func_13()
{
	if (func_19(14))
	{
		if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
		{
			if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[2 /*29*/])
			{
				Global_14443 = 2;
			}
			else
			{
				Global_14443 = 0;
			}
		}
	}
	else
	{
		Global_14443 = func_14();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69617)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

int func_14()
{
	func_15();
	return Global_101553.f_1991.f_539.f_3549;
}

void func_15()
{
	int iVar0;
	
	if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()))
	{
		if (func_18(Global_101553.f_1991.f_539.f_3549) != unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()))
		{
			iVar0 = func_17(unk_0xA0081090911D13E5());
			if (func_16(iVar0) && (!func_19(14) || Global_100505))
			{
				if (Global_101553.f_1991.f_539.f_3549 != iVar0 && func_16(Global_101553.f_1991.f_539.f_3549))
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

bool func_16(int iParam0)
{
	return iParam0 < 3;
}

int func_17(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		iVar1 = unk_0x705BC1BB91F530B5(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_18(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_18(int iParam0)
{
	if (func_16(iParam0))
	{
		return Global_101553.f_32740[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_19(int iParam0)
{
	return Global_35775 == iParam0;
}

void func_20()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15034[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15034[iVar0 /*10*/].f_1), "", 24);
		Global_15034[iVar0 /*10*/].f_7 = 0;
		Global_15034[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15034.f_161 = -99;
	Global_15034.f_162 = { 0f, 0f, 0f };
}

bool func_21(int iParam0, int iParam1)
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

void func_22()
{
	unk_0x8C620099CBB45602();
	Global_16756 = 0;
	if ((unk_0xC6CB0C1523C73C77() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x588D9B1F6CF36C3C(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0xE80581DE0ACF1F8A())
	{
		unk_0x588D9B1F6CF36C3C(1);
		Global_15745 = 6;
		return;
	}
}

void func_23(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15199 = { *uParam0 };
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = uParam5;
	if (iParam3 == 0)
	{
		Global_16732 = 1;
		Global_16730 = 0;
	}
	else
	{
		Global_16732 = 0;
		Global_16730 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16733 = 1;
		Global_16731 = 0;
	}
	else
	{
		Global_16733 = 0;
		Global_16731 = 1;
	}
}

struct<4> func_24(char* sParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam0, 16);
	switch (func_14())
	{
		case 0:
			StringConCat(&Var0, "_M", 16);
			break;
		
		case 1:
			StringConCat(&Var0, "_F", 16);
			break;
		
		case 2:
			StringConCat(&Var0, "_T", 16);
			break;
	}
	return Var0;
}

int func_25()
{
	if (func_73())
	{
		return 0;
	}
	if (unk_0x32FF1663A80B4F87())
	{
		if (unk_0x43589182CF3243AE())
		{
			return 0;
		}
	}
	return 1;
}

bool func_26(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_27(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x21178DF77817BF39(iParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_28()
{
	if (unk_0x43589182CF3243AE())
	{
		return 0;
	}
	if (unk_0x32FF1663A80B4F87())
	{
		if (func_73() && !func_29())
		{
			return 0;
		}
	}
	return 1;
}

int func_29()
{
	if (Global_16756 == 1)
	{
		return 1;
	}
	return 0;
}

float func_30(var uParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x912AD5A10E7633F0(uParam0, 0))
	{
		Var0 = { unk_0xC59DF10B4FC39DF8(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xC59DF10B4FC39DF8(uParam0, 0) };
	}
	return unk_0x999A157665D69393(Var0, Param1, iParam4);
}

void func_31()
{
	func_81(1);
	func_80();
}

void func_32(var uParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (unk_0x16833EFAA58E63DB(uParam0))
	{
		if ((unk_0xD3FACCDA4D66AEAD(uParam1) && unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5())) && !unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
		{
			if (unk_0x264883409423C6C3(iParam1))
			{
				if (unk_0x1F1B2B6E500380C5(unk_0x5293F3C38E4842B3(iParam1), 0))
				{
					fVar1 = unk_0x999A157665D69393(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), unk_0xC59DF10B4FC39DF8(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = unk_0xF2DB717A73826179((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x3AE9C8E8575D2576(uParam0, 1);
						unk_0x9F80CD84AD2B3DA4(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0x3AE9C8E8575D2576(uParam0, 0);
						unk_0x9F80CD84AD2B3DA4(uParam0, 255);
					}
				}
			}
			else if (unk_0x60F161681C368C4E(iParam1))
			{
				if (!unk_0xEB361B4BD195A4D3(unk_0x90897FA118314142(iParam1)))
				{
					fVar1 = unk_0x999A157665D69393(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), unk_0xC59DF10B4FC39DF8(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = unk_0xF2DB717A73826179(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x3AE9C8E8575D2576(uParam0, 1);
						unk_0x9F80CD84AD2B3DA4(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0x3AE9C8E8575D2576(uParam0, 0);
						unk_0x9F80CD84AD2B3DA4(uParam0, 255);
					}
				}
			}
		}
	}
}

float func_33(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x912AD5A10E7633F0(uParam0, 0))
	{
		Var0 = { unk_0xC59DF10B4FC39DF8(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xC59DF10B4FC39DF8(iParam0, 0) };
	}
	if (!unk_0x912AD5A10E7633F0(iParam1, 0))
	{
		Var3 = { unk_0xC59DF10B4FC39DF8(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xC59DF10B4FC39DF8(iParam1, 0) };
	}
	return unk_0x999A157665D69393(Var0, Var3, iParam2);
}

void func_34(int iParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_35(iParam0, uParam1, sParam2, iParam3, iParam4, iParam6, -1f, -1f, 0, iParam5, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0);
}

void func_35(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, int iParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_37(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1344178.f_1 = 1;
		func_36(0, iVar0);
		Global_1344178.f_946[iVar0] = uParam0;
		Global_1344178.f_946.f_11[iVar0] = uParam1;
		StringCopy(&(Global_1344178.f_946.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1344178.f_946.f_194[iVar0] = uParam3;
		Global_1344178.f_946.f_183[iVar0] = uParam4;
		Global_1344178.f_946.f_216[iVar0] = uParam5;
		Global_1344178.f_946.f_227[iVar0 /*3*/] = fParam6;
		Global_1344178.f_946.f_227[iVar0 /*3*/].f_1 = fParam7;
		Global_1344178.f_946.f_258[iVar0] = iParam8;
		Global_1344178.f_946.f_269[iVar0] = uParam9;
		Global_1344178.f_946.f_312[iVar0] = iParam10;
		Global_1344178.f_946.f_323[iVar0] = iParam11;
		Global_1344178.f_946.f_334[iVar0] = iParam12;
		Global_1344178.f_946.f_345[iVar0] = iParam13;
		Global_1344178.f_941 = 1;
		Global_1344178.f_946.f_356[iVar0] = iParam14;
		Global_1344178.f_946.f_367[iVar0] = iParam15;
		Global_1344178.f_946.f_378[iVar0] = iParam16;
		Global_1344178.f_946.f_389[iVar0] = iParam17;
		Global_1344178.f_946.f_400[iVar0] = iParam18;
		Global_1344178.f_946.f_411[iVar0] = iParam19;
		Global_1344178.f_946.f_422[iVar0] = iParam20;
		Global_1344178.f_946.f_433[iVar0] = iParam21;
	}
}

void func_36(int iParam0, int iParam1)
{
	unk_0x88B0F0DC270164B7(&(Global_1344178.f_5139[iParam0]), iParam1);
}

bool func_37(int iParam0, int iParam1)
{
	return unk_0x08BA6DD398CA197C(Global_1344178.f_5139[iParam0], iParam1);
}

int func_38(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_39()
{
	func_81(2);
	func_80();
}

void func_40(var uParam0, var uParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	uParam0->f_6 = 0;
	func_41(uParam0, uParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_41(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0xFA597181B01136F0())
	{
		if (unk_0xDF658EB6CA91DFBC() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0xD28EDDD3F7264249(iVar0))
	{
		if (!unk_0xA86CA03D9749EEB3())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_60(iVar0))
	{
		func_59();
	}
	if (func_58(uParam1) && unk_0x374C36A4A2089997(uParam1))
	{
		iVar1 = 0;
		if (unk_0x60F161681C368C4E(uParam1))
		{
			unk_0xE0E48FD2AE97A676(unk_0x90897FA118314142(iParam1));
			unk_0x8596E031C10DA22B(unk_0x90897FA118314142(iParam1), 1);
			if (unk_0x79C6BB40BB05BB73(unk_0x90897FA118314142(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x264883409423C6C3(iParam1))
		{
			unk_0x6DF8E06AA9365A4A(unk_0x5293F3C38E4842B3(iParam1));
			if (unk_0xC848DCB38697A02D(unk_0x5293F3C38E4842B3(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x1FFA71644D1C7C16(iParam1))
		{
			unk_0x7A68038203474D14(unk_0xD6F8F75E3496EEF6(iParam1));
			if (unk_0x18E8AE05B615030F(unk_0xD6F8F75E3496EEF6(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0xFA597181B01136F0())
		{
			if (func_53(uParam0, bParam7, bParam9, 0))
			{
				func_49(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_45(iVar0))
				{
					if ((unk_0xD28EDDD3F7264249(uParam0->f_3) && !unk_0xD28EDDD3F7264249(iVar0)) && unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
					{
						if ((iVar1 && !unk_0x598A9E990F05F82C()) && uParam8)
						{
							if (!func_60(iVar0))
							{
								func_69(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x28C1B9853548BD8E("CMN_HINT", iVar0))
								{
									func_44(1);
								}
							}
						}
					}
				}
			}
			else if (func_45(iVar0))
			{
				if (unk_0xD28EDDD3F7264249(uParam0->f_3) && !unk_0xD28EDDD3F7264249(iVar0))
				{
					if (((unk_0x7DB334F5F834726A(iParam1) && iVar1) && !unk_0x598A9E990F05F82C()) && uParam8)
					{
						if (!func_60(iVar0))
						{
							func_69(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x28C1B9853548BD8E("CMN_HINT", iVar0))
							{
								func_44(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0xD28EDDD3F7264249(sParam5))
			{
				if (func_60(sParam5))
				{
					unk_0x94724F7C938EBE34(1);
				}
			}
			if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1))
			{
				if (unk_0x0C4D70322C5AB4B5(unk_0xA0081090911D13E5()))
				{
					if (unk_0x819C3E64C255229B(3) == 3 || unk_0x819C3E64C255229B(3) == 4)
					{
						func_64(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x496D383FB5E4FEC8(unk_0xA0081090911D13E5()))
				{
					if (unk_0x819C3E64C255229B(6) == 3 || unk_0x819C3E64C255229B(6) == 4)
					{
						func_64(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xD73333C5744EC59F(unk_0xA0081090911D13E5()))
				{
					if (unk_0x819C3E64C255229B(4) == 3 || unk_0x819C3E64C255229B(4) == 4)
					{
						func_64(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xA8023042566B2548(unk_0xA0081090911D13E5()))
				{
					if (unk_0x819C3E64C255229B(5) == 3 || unk_0x819C3E64C255229B(5) == 4)
					{
						func_64(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xD05DBB55CBEF6ACF(unk_0xA0081090911D13E5()))
				{
					if (unk_0x819C3E64C255229B(2) == 3 || unk_0x819C3E64C255229B(2) == 4)
					{
						func_64(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x9A86F9EDFD899454() == 3 || unk_0x9A86F9EDFD899454() == 4)
				{
					func_64(uParam0, iVar0, 1);
				}
			}
			if (!func_53(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_43(uParam0))
				{
					func_42(uParam0);
				}
			}
		}
	}
	else
	{
		func_64(uParam0, iVar0, 0);
	}
}

void func_42(var uParam0)
{
	if (func_58(unk_0xA0081090911D13E5()))
	{
		unk_0x5CEE5F34DA93AE97(unk_0xA0081090911D13E5());
	}
	if (unk_0xFA597181B01136F0())
	{
		unk_0x841EA440AD1F0294(1);
		unk_0xB3FF3FBDAFD0ADCF(0);
		unk_0x7C1793252FA472B6("HINT_CAM_SCENE");
		unk_0x33F96CD17F6BA7BD("FocusIn");
		if (uParam0->f_11)
		{
			unk_0xFF4920BAFCB15F65("FocusOut", 0, 0);
			unk_0xAB16AADE80707D47(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_43(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0xDF658EB6CA91DFBC()
		{
			return 1;
		}
	}
	return 0;
}

int func_44(bool bParam0)
{
	switch (Global_35775)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_101553.f_8904.f_100++;
			}
			return Global_101553.f_8904.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_101553.f_8904.f_101++;
			}
			return Global_101553.f_8904.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_101553.f_8904.f_102++;
			}
			return Global_101553.f_8904.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_45(char* sParam0)
{
	if (!func_46(1, 1, 0))
	{
		if ((!unk_0x509383441597090D(sParam0) && func_60(sParam0)) || func_60("CMN_HINT"))
		{
			unk_0x94724F7C938EBE34(1);
		}
		return 0;
	}
	switch (Global_35775)
	{
		case 0:
		case 3:
			if (func_44(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_44(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_44(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_46(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!unk_0xDC48E9E2CC7437D3(unk_0x0C1D3C552325765B()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xC740F8182E7E9681())
	{
		return 0;
	}
	if (func_48(0))
	{
		return 0;
	}
	if (func_47())
	{
		return 0;
	}
	if (unk_0x04781D6F82022E77())
	{
		return 0;
	}
	if (Global_68125)
	{
		return 0;
	}
	if (unk_0xA96867DD0A63C62C(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_52997)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1))
		{
			if (unk_0x0C4D70322C5AB4B5(unk_0xA0081090911D13E5()))
			{
				if (unk_0x819C3E64C255229B(3) == 3 || unk_0x819C3E64C255229B(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x496D383FB5E4FEC8(unk_0xA0081090911D13E5()))
			{
				if (unk_0x819C3E64C255229B(6) == 3 || unk_0x819C3E64C255229B(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xD73333C5744EC59F(unk_0xA0081090911D13E5()))
			{
				if (unk_0x819C3E64C255229B(4) == 3 || unk_0x819C3E64C255229B(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xA8023042566B2548(unk_0xA0081090911D13E5()))
			{
				if (unk_0x819C3E64C255229B(5) == 3 || unk_0x819C3E64C255229B(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xD05DBB55CBEF6ACF(unk_0xA0081090911D13E5()))
			{
				if (unk_0x819C3E64C255229B(2) == 3 || unk_0x819C3E64C255229B(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x9A86F9EDFD899454() == 3 || unk_0x9A86F9EDFD899454() == 4)
			{
				return 0;
			}
			if (unk_0x1D8A198427AB65AD())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_47()
{
	return unk_0xDF658EB6CA91DFBC() <= Global_17290.f_5745 + 100;
}

int func_48(int iParam0)
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

void func_49(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x912AD5A10E7633F0(uParam1, 0))
	{
		func_64(uParam0, 0, 0);
	}
	if (func_52(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x60F161681C368C4E(iParam1))
		{
			uVar0 = unk_0x90897FA118314142(iParam1);
			if (!unk_0x39FEE545B315414E(uVar0, 0))
			{
				if (unk_0x54F0AEFB11EA090A(iVar0))
				{
					if (!func_50())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0x1F1602FD864AA4C1(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x841EA440AD1F0294(0);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam5 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	unk_0x7F06EF9578636ADC(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0xD5DC2873808A9CB5(unk_0xA0081090911D13E5(), iParam1, -1, iVar3, iVar4);
	unk_0xFF4920BAFCB15F65("FocusIn", 0, 0);
	unk_0xC94C39C53546E775("HINT_CAM_SCENE");
	unk_0xAB16AADE80707D47(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0xDF658EB6CA91DFBC();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_50()
{
	return func_51(unk_0x0C1D3C552325765B());
}

int func_51(var uParam0)
{
	if (unk_0x705BC1BB91F530B5(unk_0x21F191D9AFF98B5E(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_52(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_53(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0xDF658EB6CA91DFBC() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1))
				{
					if (func_57(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xDF658EB6CA91DFBC();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_56(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xDF658EB6CA91DFBC();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_56(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xDF658EB6CA91DFBC();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_57(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xDF658EB6CA91DFBC();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_43(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0xDF658EB6CA91DFBC() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1))
					{
						if (!func_57(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0xDF658EB6CA91DFBC();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_56(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xDF658EB6CA91DFBC();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_56(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xDF658EB6CA91DFBC();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_57(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xDF658EB6CA91DFBC();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1))
				{
					if (!func_57(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_56(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_56(bParam1, bParam2, bParam3) || unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1) || unk_0x77B21D2C209C7D47(unk_0xA0081090911D13E5(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_57(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0xDF658EB6CA91DFBC() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1))
					{
						if (func_55(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_54(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1) || func_54(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1) || unk_0x77B21D2C209C7D47(unk_0xA0081090911D13E5(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_55(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_43(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_46(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_59();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_54(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_46(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
	{
		if (!unk_0x8EFED6AE8FE72A0D(unk_0x0C1D3C552325765B()))
		{
			unk_0xABC36CFE4F3421A0(0, 140, 1);
			unk_0xABC36CFE4F3421A0(0, 80, 1);
			if (unk_0x7682E36A3D0D896F(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_55(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_46(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
	{
		unk_0xABC36CFE4F3421A0(0, 80, 1);
		if (unk_0x16FD96008A4787C8())
		{
			if (unk_0x7682E36A3D0D896F(0, 80))
			{
				unk_0x841EA440AD1F0294(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_56(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_46(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
	{
		if (!unk_0x8EFED6AE8FE72A0D(unk_0x0C1D3C552325765B()))
		{
			unk_0xABC36CFE4F3421A0(0, 140, 1);
			unk_0xABC36CFE4F3421A0(0, 80, 1);
			if (unk_0xFEB2816B7220E998(0, 80) && unk_0xDF658EB6CA91DFBC() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_57(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_46(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
	{
		unk_0xABC36CFE4F3421A0(0, 80, 1);
		if (unk_0x16FD96008A4787C8())
		{
			if (unk_0xFEB2816B7220E998(0, 80) && unk_0xDF658EB6CA91DFBC() > Global_116)
			{
				unk_0x841EA440AD1F0294(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_58(int iParam0)
{
	if (unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		if (unk_0x264883409423C6C3(iParam0))
		{
			if (unk_0x1F1B2B6E500380C5(unk_0x5293F3C38E4842B3(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x60F161681C368C4E(iParam0))
		{
			if (!unk_0xEB361B4BD195A4D3(unk_0x90897FA118314142(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x1FFA71644D1C7C16(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_59()
{
	unk_0x88B0F0DC270164B7(&Global_2314, 4);
}

bool func_60(char* sParam0)
{
	unk_0xA277242E6FB38513(sParam0);
	return unk_0x52387FFD63E8D8FC(0);
}

var func_61(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_62(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x16833EFAA58E63DB(uVar0)) && unk_0x7179DC5DD4B8EEBC(&(Global_101553.f_32740[iParam2 /*29*/].f_3)))
	{
		unk_0x6F18BFEFE84565FF(uVar0, &(Global_101553.f_32740[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_62(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x91B4D18C6AFDC14C(iParam0);
	if (unk_0x264883409423C6C3(iParam0))
	{
		unk_0xC40118229E47A3D7(uVar0, func_63(unk_0xA86CA03D9749EEB3(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x47C16DAEBDB1E5FD(uVar0, bParam1);
		}
		else
		{
			unk_0x77804F3DCBA01DB5(uVar0, 2);
		}
	}
	else if (unk_0x60F161681C368C4E(iParam0))
	{
		unk_0xC40118229E47A3D7(uVar0, func_63(unk_0xA86CA03D9749EEB3(), 0.7f, 0.7f));
		unk_0x47C16DAEBDB1E5FD(uVar0, bParam1);
	}
	else if (unk_0x1FFA71644D1C7C16(iParam0))
	{
		unk_0xC40118229E47A3D7(uVar0, func_63(unk_0xA86CA03D9749EEB3(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_63(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_64(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0xA86CA03D9749EEB3())
	{
		if (unk_0x08BA6DD398CA197C(Global_2482149.f_4442, 26))
		{
			return;
		}
	}
	if (unk_0xFA597181B01136F0())
	{
		unk_0xB3FF3FBDAFD0ADCF(iParam2);
		unk_0x33F96CD17F6BA7BD("FocusIn");
		unk_0x7C1793252FA472B6("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0xFF4920BAFCB15F65("FocusOut", 0, 0);
			unk_0xAB16AADE80707D47(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x841EA440AD1F0294(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0xD28EDDD3F7264249(sVar0))
	{
		if (!unk_0xA86CA03D9749EEB3())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0xD28EDDD3F7264249(uParam0->f_3))
	{
		if (func_60(uParam0->f_3))
		{
			unk_0x94724F7C938EBE34(1);
		}
	}
	if (!unk_0xD28EDDD3F7264249(sVar0))
	{
		if (func_60(sVar0))
		{
			unk_0x94724F7C938EBE34(1);
		}
	}
}

int func_65(var uParam0)
{
	var uVar0;
	
	if (!unk_0x04793529D4EC36D1(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x7A67617EED9039A0(uParam0);
	unk_0xC40118229E47A3D7(uVar0, func_63(unk_0xA86CA03D9749EEB3(), 0.7f, 0.7f));
	return uVar0;
}

void func_66()
{
	Global_14611 = 0;
	func_67();
}

void func_67()
{
	unk_0x8C620099CBB45602();
	Global_16756 = 0;
	if (unk_0xE80581DE0ACF1F8A())
	{
		unk_0x588D9B1F6CF36C3C(0);
		Global_15745 = 6;
	}
}

int func_68(int iParam0)
{
	if (((((unk_0xCC455F3EA7B162D8(uParam0, 122) || unk_0xCC455F3EA7B162D8(iParam0, 123)) || unk_0xCC455F3EA7B162D8(iParam0, 124)) || unk_0xCC455F3EA7B162D8(iParam0, 41)) || (unk_0x5CA53329DE05CCF7(iParam0, unk_0xA0081090911D13E5()) && unk_0xCC455F3EA7B162D8(iParam0, 29))) || unk_0x4AEC0F4FC7FE62C7(iParam0, unk_0xA0081090911D13E5(), 1))
	{
		return 1;
	}
	else
	{
		unk_0x79EC9CA36480CB01(iParam0);
	}
	return 0;
}

void func_69(char* sParam0, int iParam1)
{
	unk_0x55B5433015A91E85(sParam0);
	unk_0x85AE92859C5AADE3(0, 0, 1, iParam1);
}

void func_70(char[4] cParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x43ADD6E60AA2507B(cParam0);
	unk_0xAA85370CFA6D5384(iParam1, 1);
}

int func_71(var uParam0, bool bParam1, bool bParam2)
{
	return func_62(uParam0, !bParam1, bParam2);
}

void func_72(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69617)
	{
		if (!unk_0xEB361B4BD195A4D3(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xD20DF430E654B489(iParam2, 0);
			}
			else
			{
				unk_0xD20DF430E654B489(iParam2, 1);
			}
		}
		if (!unk_0xEB361B4BD195A4D3(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xD69C027BC6C4334F(iParam2, 0);
			}
			else
			{
				unk_0xD69C027BC6C4334F(iParam2, 1);
			}
		}
	}
}

int func_73()
{
	if (Global_15745 != 0 || unk_0xE80581DE0ACF1F8A())
	{
		return 1;
	}
	return 0;
}

void func_74()
{
	func_75(&Local_37);
	unk_0xD8C3303D0A49D05B("relThief", &iLocal_251);
	unk_0xFDDE2C1A05E64390(5, joaat("player"), iLocal_251);
	unk_0xFDDE2C1A05E64390(5, iLocal_251, joaat("player"));
	switch (func_14())
	{
		case 0:
			func_72(&uLocal_73, 0, unk_0xA0081090911D13E5(), "MICHAEL", 0, 1);
			break;
		
		case 1:
			func_72(&uLocal_73, 1, unk_0xA0081090911D13E5(), "FRANKLIN", 0, 1);
			break;
		
		case 2:
			func_72(&uLocal_73, 2, unk_0xA0081090911D13E5(), "TREVOR", 0, 1);
			break;
	}
	unk_0xACD6D334FD769B0C(0.1f);
}

void func_75(var uParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	Var0 = { unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0) };
	Var0.f_2 = 0f;
	iVar3 = 0;
	iVar4 = 0;
	unk_0x88B0F0DC270164B7(&iVar3, 3);
	unk_0x88B0F0DC270164B7(&iVar3, 4);
	unk_0x88B0F0DC270164B7(&iVar4, 3);
	unk_0x88B0F0DC270164B7(&iVar4, 4);
	unk_0x88B0F0DC270164B7(&iVar4, 8);
	switch (func_5())
	{
		case 0:
			uParam0->f_8 = joaat("a_m_m_eastsa_02");
			uParam0->f_10 = joaat("prop_cs_duffel_01b");
			uParam0->f_16 = 572;
			StringCopy(&(uParam0->f_12), "MON", 16);
			uParam0->f_20 = 1;
			uParam0->f_28 = iVar3;
			break;
		
		case 1:
			uParam0->f_8 = joaat("a_m_m_paparazzi_01");
			uParam0->f_9 = joaat("a_m_m_paparazzi_01");
			uParam0->f_10 = joaat("prop_pap_camera_01");
			uParam0->f_11 = joaat("prop_npc_phone");
			uParam0->f_16 = 60;
			uParam0->f_17 = 1;
			uParam0->f_18 = 1;
			StringCopy(&(uParam0->f_12), "PAP", 16);
			uParam0->f_19 = 60000;
			uParam0->f_21 = 1;
			StringCopy(&(uParam0->f_22), "PAP_HLP", 16);
			uParam0->f_26 = 0;
			uParam0->f_27 = 1;
			uParam0->f_28 = iVar4;
			uParam0->f_29 = iVar3;
			break;
	}
	switch (func_79())
	{
		case 5:
			*uParam0 = { 178.0117f, 202.3507f, 102.9037f };
			uParam0->f_3 = { 514.5839f, 78.78811f, 111.1864f };
			uParam0->f_6 = 131.0625f;
			break;
		
		case 6:
			*uParam0 = { 418.5796f, -636.2899f, 25.43758f };
			uParam0->f_3 = { 400.2468f, -826.1611f, 44.10468f };
			uParam0->f_6 = 95.375f;
			break;
		
		case 7:
			*uParam0 = { -1368.458f, -238.4543f, 40.36241f };
			uParam0->f_3 = { -1475.669f, -127.621f, 65.65466f };
			uParam0->f_6 = 158.25f;
			break;
		
		case 11:
			if (func_76(func_79(), Var0))
			{
				*uParam0 = { -602.3785f, 258.2744f, 79.0293f };
				uParam0->f_3 = { -469.064f, 244.8735f, 97.88577f };
				uParam0->f_6 = 70.125f;
			}
			else
			{
				*uParam0 = { -621.5889f, 262.0915f, 78.67405f };
				uParam0->f_3 = { -494.7666f, 248.2196f, 97.88564f };
				uParam0->f_6 = 70.125f;
			}
			break;
		
		case 12:
			if (func_76(func_79(), Var0))
			{
				*uParam0 = { 137.2073f, 392.7482f, 110.9443f };
				uParam0->f_3 = { 297.2104f, 336.0269f, 120.3525f };
				uParam0->f_6 = 95.375f;
			}
			else
			{
				*uParam0 = { 191.3225f, 364.9949f, 104.5153f };
				uParam0->f_3 = { 320.3688f, 325.2877f, 120.2689f };
				uParam0->f_6 = 70.125f;
			}
			break;
		
		case 13:
			if (func_76(func_79(), Var0))
			{
				*uParam0 = { -221.6586f, 6310.131f, 28.40555f };
				uParam0->f_3 = { -319.8287f, 6211.665f, 46.19521f };
				uParam0->f_6 = 95.375f;
			}
			else
			{
				*uParam0 = { -260.2809f, 6273.981f, 28.42822f };
				uParam0->f_3 = { -371.5657f, 6164.586f, 46.1894f };
				uParam0->f_6 = 95.375f;
			}
			break;
		
		case 14:
			*uParam0 = { -2313.765f, 4159.022f, 29.59011f };
			uParam0->f_3 = { -2140.887f, 4437.057f, 72.619f };
			uParam0->f_6 = 113.5f;
			break;
	}
}

int func_76(int iParam0, struct<3> Param1)
{
	switch (iParam0)
	{
		case 5:
			if (func_77(func_78(Param1 - Vector(0f, 174.58f, 335.5574f)), func_78(Vector(0f, 174.8707f, 334.8261f) - Vector(0f, 174.58f, 335.5574f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 6:
			if (func_77(func_78(Param1 - Vector(0f, -711.023f, 393.0992f)), func_78(Vector(0f, -715.4372f, 393.1879f) - Vector(0f, -711.023f, 393.0992f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 7:
			if (func_77(func_78(Param1 - Vector(0f, -215.2002f, -1423.254f)), func_78(Vector(0f, -215.1443f, -1420.71f) - Vector(0f, -215.2002f, -1423.254f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 11:
			if (func_77(func_78(Param1 - Vector(0f, 274.9096f, -564.5655f)), func_78(Vector(0f, 275.0867f, -567.1105f) - Vector(0f, 274.9096f, -564.5655f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 12:
			if (func_77(func_78(Param1 - Vector(0f, 338.8084f, 225.5057f)), func_78(Vector(0f, 338.4193f, 226.8374f) - Vector(0f, 338.8084f, 225.5057f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 13:
			if (func_77(func_78(Param1 - Vector(0f, 6256.5f, -299.9329f)), func_78(Vector(0f, 6255.179f, -301.1977f) - Vector(0f, 6256.5f, -299.9329f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 14:
			if (func_77(func_78(Param1 - Vector(0f, 4287.951f, -2200.204f)), func_78(Vector(0f, 4289.739f, -2199.26f) - Vector(0f, 4287.951f, -2200.204f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

float func_77(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_78(struct<3> Param0)
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

int func_79()
{
	return Global_100265.f_20;
}

void func_80()
{
	if (unk_0xD3FACCDA4D66AEAD(iLocal_245))
	{
		if (!unk_0xEB361B4BD195A4D3(iLocal_245))
		{
			unk_0x69E46DC398F0B2BD(iLocal_245, unk_0xA0081090911D13E5(), 1000f, -1, 0, 1);
		}
		unk_0x0689C659BF2D3BF7(&iLocal_245);
	}
	if (unk_0xD3FACCDA4D66AEAD(iLocal_246))
	{
		if (!unk_0xEB361B4BD195A4D3(iLocal_246))
		{
			unk_0x69E46DC398F0B2BD(iLocal_246, unk_0xA0081090911D13E5(), 1000f, -1, 0, 1);
		}
		unk_0x0689C659BF2D3BF7(&iLocal_246);
	}
	if (unk_0xD3FACCDA4D66AEAD(iLocal_244))
	{
		unk_0x615DE34FC732CF11(&iLocal_244);
	}
	if (unk_0x04793529D4EC36D1(uLocal_247))
	{
		unk_0xBA2C7B36DA3F59D3(uLocal_247);
	}
	if (unk_0x04793529D4EC36D1(uLocal_248))
	{
		unk_0xBA2C7B36DA3F59D3(uLocal_248);
	}
	if (unk_0x16833EFAA58E63DB(uLocal_249))
	{
		unk_0x0B57C567D698C373(&uLocal_249);
	}
	if (unk_0x16833EFAA58E63DB(uLocal_250))
	{
		unk_0x0B57C567D698C373(&uLocal_250);
	}
	unk_0x3607936F13065720(Local_37.f_7, 0);
	unk_0xACD6D334FD769B0C(1f);
	unk_0x17BC7AF21106B65E(iLocal_251);
	unk_0x78C587487CD40B92();
}

void func_81(int iParam0)
{
	Global_100265.f_22 = iParam0;
}

