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
	unk_0x1A41D12A38E6D79F(1);
	if (unk_0xD4BE58A7E3E102AC(3))
	{
		func_94(2);
		func_93();
	}
	func_87();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (func_86())
		{
			iLocal_239 = -1;
		}
		else if (iLocal_239 == -1)
		{
			iLocal_239 = unk_0x9B35D07DCD0F0B43();
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
			unk_0x6BB2B1818CAE531E(Local_37.f_10);
			if (Local_37.f_11 != 0)
			{
				unk_0x6BB2B1818CAE531E(Local_37.f_11);
			}
			unk_0x9F815D4FA0C47F97("PRECOV", 0);
			if (unk_0xA3D567B14856EDE1(0))
			{
				if (unk_0xD4B321D9096B01FC(Global_110270.f_222[0]) && unk_0xD960230552BC4165(Global_110270.f_222[0], 0))
				{
					iLocal_244 = Global_110270.f_222[0];
					Global_110270.f_222[0] = 0;
					unk_0xE5C667CF3B4642D2(iLocal_244, 1, 1);
					Local_37.f_7 = unk_0x7F375072508F738F(iLocal_244);
					unk_0xE0AC40EF164A2569(Local_37.f_7);
					unk_0x0A43D5D11052D038(Local_37.f_7, 1);
				}
				if (unk_0xD4B321D9096B01FC(Global_110270.f_225[0]))
				{
					iLocal_245 = Global_110270.f_225[0];
					Global_110270.f_225[0] = 0;
					unk_0xE5C667CF3B4642D2(iLocal_245, 1, 1);
					Local_37.f_8 = unk_0x7F375072508F738F(iLocal_245);
					unk_0xDB889DCC8B0139E6(iLocal_245, iLocal_251);
					unk_0x6E84F47D0D3E5BC9(iLocal_245, 0);
					unk_0x160AF5DE0B0878EE(iLocal_245, 5);
					unk_0x7D81B41B134BD6F2(iLocal_245, 1);
					unk_0xDEB0AA30ABFDCF48(iLocal_245, 23, 1);
					if (unk_0xF39FF829579D1A21(Local_37.f_7))
					{
						if (Local_37.f_26)
						{
							unk_0xE62BE0EB9BC772E3(iLocal_245, 1);
							unk_0x19B5693CAD014B0F(iLocal_245, 1, 4096, -1);
						}
						else
						{
							unk_0xE62BE0EB9BC772E3(iLocal_245, 0);
						}
					}
					if (Local_37.f_20)
					{
						unk_0xC167C31F20B1FD61(iLocal_245, joaat("weapon_pistol"), 120, 0, 0);
						unk_0xC167C31F20B1FD61(iLocal_245, joaat("weapon_microsmg"), 120, 1, 1);
					}
					unk_0xE0AC40EF164A2569(Local_37.f_8);
					unk_0x3427075D3608A3BB(iLocal_245, 0, 0, 0, Local_37.f_27, 0, 0, 0, 0);
					func_85(&uLocal_73, 3, iLocal_245, "ABIGAIL", 0, 1);
				}
				if (unk_0xD4B321D9096B01FC(Global_110270.f_225[1]))
				{
					iLocal_246 = Global_110270.f_225[1];
					Global_110270.f_225[1] = 0;
					unk_0xE5C667CF3B4642D2(iLocal_246, 1, 1);
					Local_37.f_9 = unk_0x7F375072508F738F(iLocal_246);
					unk_0xDB889DCC8B0139E6(iLocal_246, iLocal_251);
					unk_0x6E84F47D0D3E5BC9(iLocal_246, 0);
					unk_0x160AF5DE0B0878EE(iLocal_246, 5);
					unk_0x7D81B41B134BD6F2(iLocal_246, 1);
					unk_0xDEB0AA30ABFDCF48(iLocal_246, 23, 1);
					if (unk_0xF39FF829579D1A21(Local_37.f_7))
					{
						if (Local_37.f_26)
						{
							unk_0xE62BE0EB9BC772E3(iLocal_246, 1);
							unk_0x19B5693CAD014B0F(iLocal_246, 1, 4096, -1);
						}
						else
						{
							unk_0xE62BE0EB9BC772E3(iLocal_246, 0);
						}
					}
					unk_0xE0AC40EF164A2569(Local_37.f_9);
					unk_0x3427075D3608A3BB(iLocal_246, 0, 0, 0, Local_37.f_27, 0, 0, 0, 0);
				}
				if ((!unk_0xD4B321D9096B01FC(iLocal_245) || !unk_0x2BF5E63466422C38(iLocal_245)) && (!unk_0xD4B321D9096B01FC(iLocal_246) || !unk_0x2BF5E63466422C38(iLocal_246)))
				{
					uLocal_249 = func_84(iLocal_244, 1, 0);
					StringCopy(&cVar0, "STOP_THIEF_", 32);
					StringConCat(&cVar0, &(Local_37.f_12), 32);
					func_83(&cVar0, 7500, 1);
					func_82(&(Local_37.f_22), 10000);
					iLocal_238 = 0;
					iLocal_68 = 0;
					iLocal_69 = 0;
					if (Local_37.f_19 != -1)
					{
						iLocal_67 = (unk_0x9B35D07DCD0F0B43() + Local_37.f_19);
					}
				}
				iLocal_36++;
			}
			break;
		
		case 1:
			if (((((unk_0xD4B321D9096B01FC(iLocal_245) && unk_0x2BF5E63466422C38(iLocal_245)) || (unk_0xD4B321D9096B01FC(iLocal_246) && unk_0x2BF5E63466422C38(iLocal_246))) || ((Local_37.f_17 && unk_0xF39FF829579D1A21(Local_37.f_7)) && !unk_0x95ED3BD0F52D542A(iLocal_245, iLocal_244, 0))) || ((Local_37.f_17 && unk_0xF39FF829579D1A21(Local_37.f_7)) && !unk_0x95ED3BD0F52D542A(iLocal_246, iLocal_244, 0))) || ((Local_37.f_18 && !unk_0x95ED3BD0F52D542A(iLocal_245, iLocal_244, 0)) && func_81(iLocal_245)))
			{
				if (Local_37.f_17 && unk_0xF39FF829579D1A21(Local_37.f_7))
				{
					if (!unk_0x2BF5E63466422C38(iLocal_245) && unk_0x95ED3BD0F52D542A(iLocal_245, iLocal_244, 0))
					{
						unk_0x74DCEB05B4DA59AD(iLocal_245);
					}
					if (!unk_0x2BF5E63466422C38(iLocal_246) && unk_0x95ED3BD0F52D542A(iLocal_246, iLocal_244, 0))
					{
						unk_0x74DCEB05B4DA59AD(iLocal_246);
					}
				}
				if (unk_0xA99E47125B44409B())
				{
					unk_0x1C9DBC28A851F0A6();
				}
				if (unk_0x0945988C02AF3025())
				{
					unk_0x0D23E3918F7AF11B(1);
				}
				if (func_86())
				{
					func_79();
				}
				iLocal_238 = -1;
				if (unk_0x6DF9C43E3CC645BC(Local_37.f_10) && (Local_37.f_11 == 0 || unk_0x6DF9C43E3CC645BC(Local_37.f_11)))
				{
					if (unk_0xD4B321D9096B01FC(iLocal_245))
					{
						Var8 = { unk_0x6041B7CE99522084(iLocal_245, 1067030938, 1069547520) };
						uLocal_247 = unk_0xFE261C9FF385EA5E(joaat("pickup_money_med_bag"), Var8, Local_37.f_28, -1, 1, Local_37.f_10);
						unk_0xE0AC40EF164A2569(Local_37.f_10);
						if (unk_0x39A01A052D9B5FF0(uLocal_249))
						{
							unk_0xAA2276003B2ADF1B(&uLocal_249);
						}
						uLocal_249 = func_78(uLocal_247);
					}
					if (unk_0xD4B321D9096B01FC(iLocal_246) && Local_37.f_11 != 0)
					{
						Var8 = { unk_0x6041B7CE99522084(iLocal_246, 1067030938, 1069547520) };
						uLocal_248 = unk_0xFE261C9FF385EA5E(joaat("pickup_money_med_bag"), Var8, Local_37.f_29, -1, 1, Local_37.f_11);
						unk_0xE0AC40EF164A2569(Local_37.f_11);
						if (unk_0x39A01A052D9B5FF0(uLocal_250))
						{
							unk_0xAA2276003B2ADF1B(&uLocal_250);
						}
						uLocal_250 = func_78(uLocal_248);
					}
					func_77(&uLocal_254, 0, 0);
					iLocal_242 = 1;
					iLocal_36++;
				}
			}
			else
			{
				if (unk_0x5294582CE404D3F4(iLocal_245, 0))
				{
					if (unk_0x39A01A052D9B5FF0(uLocal_250))
					{
						unk_0xAA2276003B2ADF1B(&uLocal_250);
					}
					if (!unk_0x39A01A052D9B5FF0(uLocal_249))
					{
						uLocal_249 = func_84(unk_0x4D57D3E5ECE15A41(iLocal_245, 0), 1, 0);
					}
				}
				else
				{
					if (unk_0x39A01A052D9B5FF0(uLocal_249))
					{
						unk_0xAA2276003B2ADF1B(&uLocal_249);
					}
					if (!unk_0x39A01A052D9B5FF0(uLocal_250))
					{
						uLocal_250 = func_74(iLocal_245, 1, 145);
					}
				}
				func_46(&uLocal_254, iLocal_245, 0, 0, 1, 1, 1);
				if (iLocal_67 != -1)
				{
					if (unk_0x9B35D07DCD0F0B43() > iLocal_67)
					{
						func_45();
					}
					else
					{
						iVar11 = func_44(unk_0x25A1A0BF87F74E56((iLocal_67 - unk_0x9B35D07DCD0F0B43())), 0, Local_37.f_19);
						if (iVar11 <= 10000)
						{
							func_40((Local_37.f_19 - iVar11), Local_37.f_19, "UPLOAD", 9, 10000, 1, 2);
						}
						else
						{
							func_40((Local_37.f_19 - iVar11), Local_37.f_19, "UPLOAD", 9, 0, 1, 2);
						}
					}
				}
				if (unk_0xD4B321D9096B01FC(iLocal_245))
				{
					if (func_39(unk_0x0FA8183DAD2B3203(), iLocal_245, 1) > 500f)
					{
						func_45();
					}
					else if (unk_0x39A01A052D9B5FF0(uLocal_249))
					{
						func_38(uLocal_249, iLocal_245, 500f, 0.8f, 0);
					}
				}
				if (unk_0xD4B321D9096B01FC(iLocal_246))
				{
					if (func_39(unk_0x0FA8183DAD2B3203(), iLocal_246, 1) > 500f)
					{
						func_45();
					}
					else if (unk_0x39A01A052D9B5FF0(uLocal_250))
					{
						func_38(uLocal_250, iLocal_246, 500f, 0.8f, 0);
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x71FE36FB85146FC0(uLocal_247) || unk_0x21AD65E0E8A26E8C(uLocal_247))
			{
				if (unk_0x71FE36FB85146FC0(uLocal_247))
				{
					unk_0xCCD1554A33E9185B(uLocal_247);
				}
				if (unk_0x39A01A052D9B5FF0(uLocal_249))
				{
					unk_0xAA2276003B2ADF1B(&uLocal_249);
				}
			}
			if (!unk_0x71FE36FB85146FC0(uLocal_248) || unk_0x21AD65E0E8A26E8C(uLocal_248))
			{
				if (unk_0x71FE36FB85146FC0(uLocal_248))
				{
					unk_0xCCD1554A33E9185B(uLocal_248);
				}
				if (unk_0x39A01A052D9B5FF0(uLocal_250))
				{
					unk_0xAA2276003B2ADF1B(&uLocal_250);
				}
			}
			if (!unk_0x39A01A052D9B5FF0(uLocal_249) && !unk_0x39A01A052D9B5FF0(uLocal_250))
			{
				if (unk_0x586E95A1CE46FC21(unk_0x7C7787D2D7139A85(), 0))
				{
					if (!iLocal_71)
					{
						func_83("LOSE_WANTED", 7500, 1);
						iLocal_71 = 1;
					}
				}
				else
				{
					unk_0x1C9DBC28A851F0A6();
					func_37();
				}
			}
			else if ((unk_0x71FE36FB85146FC0(uLocal_247) && func_36(unk_0x0FA8183DAD2B3203(), unk_0x1E451C0025BB4589(uLocal_247), 1) > 500f) || (unk_0x71FE36FB85146FC0(uLocal_248) && func_36(unk_0x0FA8183DAD2B3203(), unk_0x1E451C0025BB4589(uLocal_248), 1) > 500f))
			{
				func_45();
			}
			else if (iLocal_242 && func_34())
			{
				unk_0x1C9DBC28A851F0A6();
				StringCopy(&cVar0, "PKUP_", 32);
				StringConCat(&cVar0, &(Local_37.f_12), 32);
				func_83(&cVar0, 7500, 1);
				iLocal_242 = 0;
			}
			break;
	}
	if (unk_0xD4B321D9096B01FC(iLocal_245) && !unk_0x2BF5E63466422C38(iLocal_245))
	{
		if ((unk_0xD4B321D9096B01FC(iLocal_244) && unk_0xD960230552BC4165(iLocal_244, 0)) && !iLocal_68)
		{
			if (!func_33(iLocal_245, 242628503, 1))
			{
				unk_0xA12E1659DEF57244(&uLocal_243);
				unk_0x5671B0B60CC07A13(0, iLocal_244, 31, 10000);
				unk_0x12038E5513D763A5(0, iLocal_244, unk_0x0FA8183DAD2B3203(), 8, 30f, Local_37.f_16, 1000f, 0f, 1);
				unk_0x15A7B753872B3CE3(uLocal_243);
				unk_0xC544A8E1032AC1CF(iLocal_245, uLocal_243);
				unk_0x78829A259A6975CD(&uLocal_243);
				iLocal_68 = 1;
			}
		}
		else if (((func_33(iLocal_245, 242628503, 1) && unk_0x3942FAEA4AF15467(iLocal_245) < 1) && !iLocal_69) && (((((unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), Local_37, Local_37.f_3, Local_37.f_6, 0, 1, 0) || unk_0x41F11D4118027EC7(iLocal_245, 124)) || unk_0x41F11D4118027EC7(iLocal_245, 125)) || unk_0x41F11D4118027EC7(iLocal_245, 126)) || unk_0x41F11D4118027EC7(iLocal_245, 23)) || func_32(Global_110270.f_35, 134217728)))
		{
			unk_0x12038E5513D763A5(iLocal_245, iLocal_244, unk_0x0FA8183DAD2B3203(), 8, 30f, Local_37.f_16, 1000f, 0f, 1);
			iLocal_69 = 1;
		}
		else if ((!func_33(iLocal_245, 242628503, 1) && !func_33(iLocal_245, -1273030092, 1)) || !unk_0x5294582CE404D3F4(iLocal_245, 0))
		{
			if (!func_33(iLocal_245, 1805844857, 1))
			{
				unk_0xF0E9590A910B74BE(iLocal_245, unk_0x0FA8183DAD2B3203(), 1000f, -1, 0, 1);
			}
		}
		else if (unk_0x95ED3BD0F52D542A(iLocal_245, iLocal_244, 1) && (((unk_0x812D517F863583BE(iLocal_244, 0, 3000) || unk_0x812D517F863583BE(iLocal_244, 1, 3000)) || unk_0x812D517F863583BE(iLocal_244, 2, 8000)) || unk_0x812D517F863583BE(iLocal_244, 3, 8000)))
		{
			if (!func_33(iLocal_245, 451360105, 1))
			{
				unk_0x3D1E9B6872B0AE00(iLocal_245, iLocal_244, 0);
			}
		}
		if (Local_37.f_20)
		{
			if (!bLocal_70)
			{
				if ((((unk_0x3656B691E303FDE0(iLocal_245, unk_0x0FA8183DAD2B3203(), 1) || unk_0x3656B691E303FDE0(iLocal_244, unk_0x0FA8183DAD2B3203(), 1)) || unk_0x41F11D4118027EC7(iLocal_245, 124)) || unk_0x41F11D4118027EC7(iLocal_245, 125)) || unk_0x41F11D4118027EC7(iLocal_245, 126))
				{
					bLocal_70 = true;
				}
			}
			if (bLocal_70)
			{
				if ((unk_0x411C065ADB822CD9(iLocal_245, 242628503) == 1 && unk_0x3942FAEA4AF15467(iLocal_245) == 1) || unk_0x411C065ADB822CD9(iLocal_245, -1273030092) == 1)
				{
					if (!unk_0xC1DE23AF7092A700(iLocal_245))
					{
						unk_0x10C684A48D05C17B(iLocal_245, joaat("weapon_microsmg"));
						unk_0x2B43009F97DE1D72(iLocal_245, unk_0x0FA8183DAD2B3203(), 0, 0f, 0f, 0f, 1000f, 100, 1, -753768974);
					}
				}
			}
		}
		if (unk_0xD4B321D9096B01FC(iLocal_244) && unk_0xD960230552BC4165(iLocal_244, 0))
		{
			if (!iLocal_72)
			{
				if ((func_33(iLocal_245, 242628503, 1) && unk_0x3942FAEA4AF15467(iLocal_245) == 1) || func_33(iLocal_245, -1273030092, 1))
				{
					if (unk_0x059780A8877D0C70("TAKINGS", 0, -1))
					{
						unk_0x5F5C6A264C2CA8B1(-1, "TAKINGS_TIRES_PEELAWAY_master", iLocal_244, 0, 0, 0);
						iLocal_72 = 1;
					}
				}
			}
		}
	}
	if (unk_0xD4B321D9096B01FC(iLocal_246) && !unk_0x2BF5E63466422C38(iLocal_246))
	{
		if (!unk_0x5294582CE404D3F4(iLocal_246, 0) && !func_33(iLocal_246, 1805844857, 1))
		{
			unk_0xF0E9590A910B74BE(iLocal_246, unk_0x0FA8183DAD2B3203(), 1000f, -1, 0, 1);
		}
	}
	if (unk_0xD4B321D9096B01FC(iLocal_245) && !unk_0x2BF5E63466422C38(iLocal_245))
	{
		if (unk_0x916AF183F71F17C1(iLocal_245) && !unk_0x5294582CE404D3F4(iLocal_245, 0))
		{
			if (func_86())
			{
				func_79();
			}
		}
		else if (func_39(unk_0x0FA8183DAD2B3203(), iLocal_245, 1) < 15f)
		{
			switch (iLocal_238)
			{
				case 0:
					if (func_31())
					{
						MemCopy(&cVar0, {Local_37.f_12}, 8);
						StringConCat(&cVar0, "_1", 32);
						MemCopy(&cVar0, {func_30(&cVar0)}, 8);
						if (func_7(&uLocal_73, &cLocal_240, &cVar0, 8, 0, 0, 0))
						{
							StringCopy(&cVar0, "", 32);
							iLocal_238++;
						}
					}
					break;
				
				case 1:
					if (func_31())
					{
						if (!unk_0x01891E23361FD324(iLocal_245))
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
					if (func_31() && (unk_0x9B35D07DCD0F0B43() - iLocal_239) > 3500)
					{
						MemCopy(&cVar0, {Local_37.f_12}, 8);
						StringConCat(&cVar0, "_3", 32);
						MemCopy(&cVar0, {func_30(&cVar0)}, 8);
						if (func_7(&uLocal_73, &cLocal_240, &cVar0, 8, 0, 0, 0))
						{
							StringCopy(&cVar0, "", 32);
							iLocal_238++;
						}
					}
					break;
				
				case 3:
					if (func_31() && (unk_0x9B35D07DCD0F0B43() - iLocal_239) > 1500)
					{
						if (!unk_0x01891E23361FD324(iLocal_245))
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
	if (unk_0xD4B321D9096B01FC(iLocal_245))
	{
		if (unk_0x2BF5E63466422C38(iLocal_245))
		{
			if (Local_37.f_21)
			{
				func_2(1);
				func_45();
			}
		}
		else if (Local_37.f_27)
		{
			if (iLocal_252 == -1)
			{
				if (!unk_0x916AF183F71F17C1(iLocal_245))
				{
					iLocal_252 = unk_0x9B35D07DCD0F0B43();
				}
			}
			else if ((unk_0x9B35D07DCD0F0B43() - iLocal_252) > 2000)
			{
				unk_0x3427075D3608A3BB(iLocal_245, 0, 0, 0, 0, 0, 0, 0, 0);
			}
		}
	}
	if (unk_0xD4B321D9096B01FC(iLocal_246))
	{
		if (unk_0x2BF5E63466422C38(iLocal_246))
		{
			if (Local_37.f_21)
			{
				func_2(1);
				func_45();
			}
		}
		else if (Local_37.f_27)
		{
			if (iLocal_253 == -1)
			{
				if (!unk_0x916AF183F71F17C1(iLocal_246))
				{
					iLocal_253 = unk_0x9B35D07DCD0F0B43();
				}
			}
			else if ((unk_0x9B35D07DCD0F0B43() - iLocal_253) > 2000)
			{
				unk_0x3427075D3608A3BB(iLocal_246, 0, 0, 0, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_2(int iParam0)
{
	Global_110270.f_220 = iParam0;
}

void func_3(int iParam0, char[4] cParam1, int iParam2)
{
	unk_0x39F932B751C1253B(iParam0, cParam1, func_4(iParam2), 1);
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
	return func_6(Global_110270.f_20, Global_110270.f_29);
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
	func_29(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_20812 = 0;
	Global_20814 = 0;
	Global_20819 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_2621441 = 0;
	return func_8(sParam2, iParam3, 0);
}

int func_8(char* sParam0, int iParam1, bool bParam2)
{
	Global_20806 = 0;
	if (Global_20805 == 0 || Global_20807 == 2)
	{
		if (Global_20805 != 0)
		{
			if (iParam1 > Global_20807)
			{
				if (Global_20812 == 0)
				{
					unk_0x623942A4F366F9BB(0);
					Global_19486.f_1 = 3;
					Global_20805 = 0;
					Global_20806 = 1;
					Global_20858 = 0;
					Global_20801 = 0;
					Global_20802 = 0;
					Global_20816 = 0;
					Global_20815 = 0;
					Global_19485 = 0;
				}
				else
				{
					func_28();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x04C7A9862FF737E9())
		{
			return 0;
		}
		if (func_27(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_26();
		Global_20094 = { Global_20259 };
		Global_20811 = Global_20812;
		Global_20818 = Global_20819;
		Global_2621442 = Global_2621441;
		Global_20820 = { Global_20836 };
		Global_20813 = Global_20814;
		Global_21795 = Global_21796;
		Global_21803 = { Global_21809 };
		Global_21797 = Global_21798;
		Global_21799 = Global_21800;
		Global_21801 = Global_21802;
		Global_20424.f_370 = Global_21794;
		Global_20424.f_368 = Global_21792;
		Global_20424.f_369 = Global_21793;
		Global_20801 = Global_20802;
		if (Global_20811)
		{
			unk_0x3B76114EC84D5812(&Global_7356, 20);
			unk_0x3B76114EC84D5812(&Global_7357, 17);
			unk_0x3B76114EC84D5812(&Global_7358, 0);
			if (bParam2)
			{
				func_18();
				if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19486.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19452 == 1)
			{
				return 0;
			}
			if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
			{
				if (unk_0x132DF66D50A7DE4E(unk_0x0FA8183DAD2B3203()))
				{
					return 0;
				}
				if (func_17())
				{
					return 0;
				}
				if (unk_0x6B6CB57338FA0319(unk_0x0FA8183DAD2B3203()))
				{
					return 0;
				}
				if (unk_0x3DAA08BFD9A801FD(unk_0x0FA8183DAD2B3203()))
				{
					return 0;
				}
				if (unk_0x604F402D213D3BE5(unk_0x0FA8183DAD2B3203()))
				{
					return 0;
				}
				if (unk_0xA6DAB995F3A28615(unk_0x0FA8183DAD2B3203(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_76577)
				{
					if (unk_0xE294A1321110B3E9(unk_0x0FA8183DAD2B3203()))
					{
						return 0;
					}
					if (unk_0x10200426BBC4B4F1(unk_0x7C7787D2D7139A85()))
					{
						return 0;
					}
					if (unk_0x7E1657C6CCABF258(unk_0x0FA8183DAD2B3203()))
					{
						return 0;
					}
					if (unk_0xD2E3AF497D091872(unk_0x7C7787D2D7139A85()))
					{
						return 0;
					}
				}
			}
			if (func_16())
			{
				return 0;
			}
			else
			{
				switch (Global_19486.f_1)
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
				if (unk_0xA2BC31158C8CEFD2(Global_7356, 9))
				{
					return 0;
				}
			}
			func_15();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_14();
		func_9();
		return 1;
	}
	if (Global_20805 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_20807 || iParam1 == Global_20807)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_28();
	}
	return 0;
}

void func_9()
{
	if (!func_10())
	{
		return;
	}
	if (Global_20811)
	{
		MemCopy(&(Global_1703200.f_1), {Global_20424}, 4);
		Global_1703200 = Global_6671;
		Global_1703200.f_6 = Global_20815;
	}
}

int func_10()
{
	if (!Global_262145.f_28013)
	{
		return 0;
	}
	if (!Global_76577)
	{
		return 0;
	}
	if (unk_0x7C7787D2D7139A85() == func_13())
	{
		return 0;
	}
	if (func_11(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	if (unk_0xA2BC31158C8CEFD2(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0xA51CBC95AC3A4B14())
	{
		return 0;
	}
	return 1;
}

bool func_11(int iParam0)
{
	return func_12(iParam0, 20);
}

bool func_12(int iParam0, int iParam1)
{
	return unk_0xA2BC31158C8CEFD2(Global_1628955[iParam0 /*614*/].f_11.f_4, iParam1);
}

int func_13()
{
	return -1;
}

void func_14()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19673[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x623942A4F366F9BB(0);
	Global_20805 = 1;
}

void func_15()
{
	Global_20858 = Global_20857;
	Global_20852 = Global_20853;
	Global_20899 = { Global_20887 };
	Global_20905 = { Global_20893 };
	Global_20860 = Global_20859;
	Global_20929 = { Global_20911 };
	Global_20935 = { Global_20917 };
	Global_20941 = { Global_20923 };
	Global_20947 = { Global_20953 };
	Global_6671 = Global_6672;
	Global_6673 = Global_6674;
	Global_20816 = Global_20817;
	Global_20818 = Global_20819;
	Global_20820 = { Global_20836 };
	Global_20809 = Global_20810;
	Global_21821 = 0;
	Global_20854 = 0;
	Global_20855 = 0;
	unk_0x3B76114EC84D5812(&Global_7357, 16);
}

int func_16()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_17()
{
	int iVar0;
	int iVar1;
	
	if (Global_76577)
	{
		iVar0 = 0;
		unk_0x63EA4FAF7CDEFEC7(unk_0x0FA8183DAD2B3203(), &iVar1, 1);
		if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x9044F3A001B2AC43() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
	{
		if (unk_0xB99AB40226A0C08E(unk_0x0FA8183DAD2B3203(), 78, 1))
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

void func_18()
{
	if (func_25(14))
	{
		if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
		{
			if (unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()) == Global_111560.f_28045[0 /*29*/])
			{
				Global_19486 = 0;
			}
			else if (unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()) == Global_111560.f_28045[1 /*29*/])
			{
				Global_19486 = 1;
			}
			else if (unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()) == Global_111560.f_28045[2 /*29*/])
			{
				Global_19486 = 2;
			}
			else
			{
				Global_19486 = 0;
			}
		}
	}
	else
	{
		Global_19486 = func_19();
		if (Global_19486 == 145)
		{
			Global_19486 = 3;
		}
		if (Global_76577)
		{
			Global_19486 = 3;
		}
		if (Global_19486 > 3)
		{
			Global_19486 = 3;
		}
	}
}

int func_19()
{
	func_20();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_20()
{
	int iVar0;
	
	if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
	{
		if (func_23(Global_111560.f_2358.f_539.f_4321) != unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()))
		{
			iVar0 = func_22(unk_0x0FA8183DAD2B3203());
			if (func_21(iVar0) && (!func_25(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_21(Global_111560.f_2358.f_539.f_4321))
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

bool func_21(int iParam0)
{
	return iParam0 < 3;
}

int func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD4B321D9096B01FC(uParam0))
	{
		iVar1 = unk_0x7F375072508F738F(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_23(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_23(int iParam0)
{
	if (func_21(iParam0))
	{
		return func_24(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_24(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_25(int iParam0)
{
	return Global_41396 == iParam0;
}

void func_26()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20094[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20094[iVar0 /*10*/].f_1), "", 24);
		Global_20094[iVar0 /*10*/].f_7 = 0;
		Global_20094[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20094.f_161 = -99;
	Global_20094.f_162 = { 0f, 0f, 0f };
}

bool func_27(int iParam0, int iParam1)
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

void func_28()
{
	unk_0xE4F88BFF8FB3D84C();
	Global_21816 = 0;
	if ((unk_0x31634D65216B86B6() || Global_19486.f_1 == 9) || Global_19485 == 1)
	{
		unk_0x623942A4F366F9BB(0);
		Global_20805 = 6;
		Global_19486.f_1 = 3;
		return;
	}
	if (unk_0x04C7A9862FF737E9())
	{
		unk_0x623942A4F366F9BB(1);
		Global_20805 = 6;
		return;
	}
}

void func_29(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = uParam5;
	if (iParam3 == 0)
	{
		Global_21792 = 1;
		Global_21790 = 0;
	}
	else
	{
		Global_21792 = 0;
		Global_21790 = 1;
	}
	if (iParam4 == 0)
	{
		Global_21793 = 1;
		Global_21791 = 0;
	}
	else
	{
		Global_21793 = 0;
		Global_21791 = 1;
	}
}

struct<4> func_30(char* sParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam0, 16);
	switch (func_19())
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

int func_31()
{
	if (func_86())
	{
		return 0;
	}
	if (unk_0x0E7925961F4058CF())
	{
		if (unk_0xA99E47125B44409B())
		{
			return 0;
		}
	}
	return 1;
}

bool func_32(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_33(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x411C065ADB822CD9(iParam0, iParam1);
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

int func_34()
{
	if (unk_0xA99E47125B44409B())
	{
		return 0;
	}
	if (unk_0x0E7925961F4058CF())
	{
		if (func_86() && !func_35())
		{
			return 0;
		}
	}
	return 1;
}

int func_35()
{
	if (Global_21816 == 1)
	{
		return 1;
	}
	return 0;
}

float func_36(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xF4B969E0807E76C7(iParam0, 0))
	{
		Var0 = { unk_0xACE5E491FC1B0D37(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xACE5E491FC1B0D37(iParam0, 0) };
	}
	return unk_0xD34AF93E9BCF12F0(Var0, Param1, iParam4);
}

void func_37()
{
	func_94(1);
	func_93();
}

void func_38(var uParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (unk_0x39A01A052D9B5FF0(uParam0))
	{
		if ((unk_0xD4B321D9096B01FC(iParam1) && unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203())) && !unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
		{
			if (unk_0x905FBA24E7FA8D23(iParam1))
			{
				if (unk_0xD960230552BC4165(unk_0xD05B0DA3866791D0(iParam1), 0))
				{
					fVar1 = unk_0xD34AF93E9BCF12F0(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1), unk_0xACE5E491FC1B0D37(iParam1, 1), 1);
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
						unk_0x6B29681A8280DB75(uParam0, 1);
						unk_0x9C47809EE2CC69F5(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0x6B29681A8280DB75(uParam0, 0);
						unk_0x9C47809EE2CC69F5(uParam0, 255);
					}
				}
			}
			else if (unk_0x4625051E51BA911B(iParam1))
			{
				if (!unk_0x2BF5E63466422C38(unk_0x3D464779B732760F(iParam1)))
				{
					fVar1 = unk_0xD34AF93E9BCF12F0(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1), unk_0xACE5E491FC1B0D37(iParam1, 1), 1);
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
						unk_0x6B29681A8280DB75(uParam0, 1);
						unk_0x9C47809EE2CC69F5(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0x6B29681A8280DB75(uParam0, 0);
						unk_0x9C47809EE2CC69F5(uParam0, 255);
					}
				}
			}
		}
	}
}

float func_39(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xF4B969E0807E76C7(iParam0, 0))
	{
		Var0 = { unk_0xACE5E491FC1B0D37(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xACE5E491FC1B0D37(iParam0, 0) };
	}
	if (!unk_0xF4B969E0807E76C7(iParam1, 0))
	{
		Var3 = { unk_0xACE5E491FC1B0D37(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xACE5E491FC1B0D37(iParam1, 0) };
	}
	return unk_0xD34AF93E9BCF12F0(Var0, Var3, iParam2);
}

void func_40(int iParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_41(iParam0, uParam1, sParam2, iParam3, iParam4, iParam6, -1f, -1f, 0, iParam5, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1);
}

void func_41(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, int iParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_43(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1375006.f_1 = 1;
		func_42(0, iVar0);
		Global_1375006.f_1114[iVar0] = uParam0;
		Global_1375006.f_1114.f_11[iVar0] = uParam1;
		StringCopy(&(Global_1375006.f_1114.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1375006.f_1114.f_194[iVar0] = uParam3;
		Global_1375006.f_1114.f_183[iVar0] = uParam4;
		Global_1375006.f_1114.f_216[iVar0] = uParam5;
		Global_1375006.f_1114.f_227[iVar0 /*3*/] = fParam6;
		Global_1375006.f_1114.f_227[iVar0 /*3*/].f_1 = fParam7;
		Global_1375006.f_1114.f_258[iVar0] = iParam8;
		Global_1375006.f_1114.f_269[iVar0] = uParam9;
		Global_1375006.f_1114.f_312[iVar0] = iParam10;
		Global_1375006.f_1114.f_323[iVar0] = iParam11;
		Global_1375006.f_1114.f_334[iVar0] = iParam12;
		Global_1375006.f_1114.f_345[iVar0] = iParam13;
		Global_1375006.f_1109 = 1;
		Global_1375006.f_1114.f_356[iVar0] = iParam14;
		Global_1375006.f_1114.f_367[iVar0] = iParam15;
		Global_1375006.f_1114.f_378[iVar0] = iParam16;
		Global_1375006.f_1114.f_389[iVar0] = iParam17;
		Global_1375006.f_1114.f_400[iVar0] = iParam18;
		Global_1375006.f_1114.f_411[iVar0] = iParam19;
		Global_1375006.f_1114.f_422[iVar0] = iParam20;
		Global_1375006.f_1114.f_433[iVar0] = iParam21;
		Global_1375006.f_1114.f_444[iVar0] = iParam22;
		Global_1375006.f_1114.f_455[iVar0] = iParam23;
		Global_1375006.f_1114.f_466[iVar0] = iParam24;
		Global_1375006.f_1114.f_205[iVar0] = iParam25;
	}
}

void func_42(int iParam0, int iParam1)
{
	unk_0xA1E7A40E1F56E511(&(Global_1375006.f_6184[iParam0]), iParam1);
}

bool func_43(int iParam0, int iParam1)
{
	return unk_0xA2BC31158C8CEFD2(Global_1375006.f_6184[iParam0], iParam1);
}

int func_44(int iParam0, int iParam1, int iParam2)
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

void func_45()
{
	func_94(2);
	func_93();
}

void func_46(var uParam0, var uParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	uParam0->f_6 = 0;
	func_47(uParam0, uParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_47(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0xE5409F09171D0BEE())
	{
		if (unk_0x9B35D07DCD0F0B43() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0x79FCE4565761C974(iVar0))
	{
		if (!unk_0x393E9918BC37548A())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_73(iVar0))
	{
		func_72();
	}
	if (func_71(uParam1) && unk_0x0975E9E48EA2CC7B(uParam1))
	{
		iVar1 = 0;
		if (unk_0x4625051E51BA911B(uParam1))
		{
			unk_0x82A2F38195C2E953(unk_0x3D464779B732760F(iParam1));
			unk_0x443D0DA3964A4371(unk_0x3D464779B732760F(iParam1), 1);
			if (unk_0x9DEA7CC8D17DB89A(unk_0x3D464779B732760F(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x905FBA24E7FA8D23(iParam1))
		{
			unk_0x374DFF939ADCCC9A(unk_0xD05B0DA3866791D0(iParam1));
			if (unk_0x2C7F1A82D57EBB18(unk_0xD05B0DA3866791D0(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x0F100E7952E44923(iParam1))
		{
			unk_0xA0CB3588697ABD83(unk_0xF0EFBC96AEA7ABA1(iParam1));
			if (unk_0xB12EB2EC44BBAC6B(unk_0xF0EFBC96AEA7ABA1(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0xE5409F09171D0BEE())
		{
			if (func_66(uParam0, bParam7, bParam9, 0))
			{
				func_62(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_51(iVar0))
				{
					if ((unk_0x79FCE4565761C974(uParam0->f_3) && !unk_0x79FCE4565761C974(iVar0)) && unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
					{
						if ((iVar1 && !unk_0x0945988C02AF3025()) && uParam8)
						{
							if (!func_73(iVar0))
							{
								func_82(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x2553916E420E8EF0("CMN_HINT", iVar0))
								{
									func_50(1);
								}
							}
						}
					}
				}
			}
			else if (func_51(iVar0))
			{
				if (unk_0x79FCE4565761C974(uParam0->f_3) && !unk_0x79FCE4565761C974(iVar0))
				{
					if (((unk_0x62E95D2FED28E41C(iParam1) && iVar1) && !unk_0x0945988C02AF3025()) && uParam8)
					{
						if (!func_73(iVar0))
						{
							func_82(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x2553916E420E8EF0("CMN_HINT", iVar0))
							{
								func_50(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x79FCE4565761C974(sParam5))
			{
				if (func_73(sParam5))
				{
					unk_0x0D23E3918F7AF11B(1);
				}
			}
			if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1))
			{
				if (unk_0xE6B36186AADE8F35(unk_0x0FA8183DAD2B3203()))
				{
					if (unk_0x328DC5757076B0D5(3) == 3 || unk_0x328DC5757076B0D5(3) == 4)
					{
						func_77(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xCE4D7B70DA8B0C86(unk_0x0FA8183DAD2B3203()))
				{
					if (unk_0x328DC5757076B0D5(6) == 3 || unk_0x328DC5757076B0D5(6) == 4)
					{
						func_77(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x0B8262712AD6841C(unk_0x0FA8183DAD2B3203()))
				{
					if (unk_0x328DC5757076B0D5(4) == 3 || unk_0x328DC5757076B0D5(4) == 4)
					{
						func_77(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x15B60611100CF0E3(unk_0x0FA8183DAD2B3203()))
				{
					if (unk_0x328DC5757076B0D5(5) == 3 || unk_0x328DC5757076B0D5(5) == 4)
					{
						func_77(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xFE3D760E77944F94(unk_0x0FA8183DAD2B3203()))
				{
					if (unk_0x328DC5757076B0D5(2) == 3 || unk_0x328DC5757076B0D5(2) == 4)
					{
						func_77(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xC7EAF5DCD508410E() == 3 || unk_0xC7EAF5DCD508410E() == 4)
				{
					func_77(uParam0, iVar0, 1);
				}
			}
			if (!func_66(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_49(uParam0))
				{
					func_48(uParam0);
				}
			}
		}
	}
	else
	{
		func_77(uParam0, iVar0, 0);
	}
}

void func_48(var uParam0)
{
	if (func_71(unk_0x0FA8183DAD2B3203()))
	{
		unk_0xECC035CAE5B59E06(unk_0x0FA8183DAD2B3203());
	}
	if (unk_0xE5409F09171D0BEE())
	{
		unk_0x538F8D7D228037B6(1);
		unk_0xAB681892AAC7844A(0);
		unk_0x8E3496DF5BF7F24D("HINT_CAM_SCENE");
		unk_0xF530F03252D7AEE0("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x3E5A3FD805488EB9("FocusOut", 0, 0);
			unk_0x9964F5BBD9415AB7(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_49(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x9B35D07DCD0F0B43()
		{
			return 1;
		}
	}
	return 0;
}

int func_50(bool bParam0)
{
	switch (Global_41396)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_111560.f_10044.f_100++;
			}
			return Global_111560.f_10044.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_111560.f_10044.f_101++;
			}
			return Global_111560.f_10044.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_111560.f_10044.f_102++;
			}
			return Global_111560.f_10044.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_51(char* sParam0)
{
	if (!func_52(1, 1, 0))
	{
		if ((!unk_0x9591DE0F00127F2A(sParam0) && func_73(sParam0)) || func_73("CMN_HINT"))
		{
			unk_0x0D23E3918F7AF11B(1);
		}
		return 0;
	}
	switch (Global_41396)
	{
		case 0:
		case 3:
			if (func_50(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_50(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_50(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_52(bool bParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!unk_0xB3E4EBF4EFCF92BD(unk_0x7C7787D2D7139A85()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x16587C6F71675106())
	{
		return 0;
	}
	if (func_61(0))
	{
		return 0;
	}
	if (func_60())
	{
		return 0;
	}
	if (unk_0x4ABA84DE907E0474())
	{
		return 0;
	}
	if (Global_73784)
	{
		return 0;
	}
	if (unk_0x222F76006659B0EB(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_58652)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1))
		{
			if (unk_0xE6B36186AADE8F35(unk_0x0FA8183DAD2B3203()))
			{
				if (unk_0x328DC5757076B0D5(3) == 3 || unk_0x328DC5757076B0D5(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xCE4D7B70DA8B0C86(unk_0x0FA8183DAD2B3203()))
			{
				if (unk_0x328DC5757076B0D5(6) == 3 || unk_0x328DC5757076B0D5(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x0B8262712AD6841C(unk_0x0FA8183DAD2B3203()))
			{
				if (unk_0x328DC5757076B0D5(4) == 3 || unk_0x328DC5757076B0D5(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x15B60611100CF0E3(unk_0x0FA8183DAD2B3203()))
			{
				if (unk_0x328DC5757076B0D5(5) == 3 || unk_0x328DC5757076B0D5(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xFE3D760E77944F94(unk_0x0FA8183DAD2B3203()))
			{
				if (unk_0x328DC5757076B0D5(2) == 3 || unk_0x328DC5757076B0D5(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xC7EAF5DCD508410E() == 3 || unk_0xC7EAF5DCD508410E() == 4)
			{
				return 0;
			}
			if (unk_0x9522187D5FDEA6E4())
			{
				return 0;
			}
		}
	}
	if ((func_59() || func_58(Global_4456448.f_190930)) || func_57())
	{
		if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
		{
			uVar0 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
			iVar1 = func_56(unk_0x0FA8183DAD2B3203(), 0);
			if (((unk_0x2068C310844A89D8(uVar0, iVar1) || (unk_0x7F375072508F738F(uVar0) == joaat("apc") && iVar1 != -1)) || (unk_0x7F375072508F738F(iVar0) == joaat("akula") && iVar1 != -1)) || (((unk_0x7F375072508F738F(iVar0) == joaat("riot2") && iVar1 == 0) && func_55(iVar0, 10)) && unk_0xF05B9E4C6631EA28(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1686915)
	{
		return 0;
	}
	if (func_53(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	return 1;
}

int func_53(int iParam0)
{
	if (iParam0 != func_13())
	{
		if (func_54(iParam0, 1, 1))
		{
			return Global_2424073[iParam0 /*421*/].f_309.f_5 != -1;
		}
		else if ((Global_1312873 && iParam0 == unk_0x7C7787D2D7139A85()) && func_54(iParam0, 1, 0))
		{
			return Global_2424073[iParam0 /*421*/].f_309.f_5 != -1;
		}
	}
	return 0;
}

int func_54(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xD56C8C2B75BF9665(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xD699DB8EAB756F25(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2437549.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_55(int iParam0, int iParam1)
{
	if (unk_0xD960230552BC4165(uParam0, 0))
	{
		if (unk_0x6AA7F87D45193D03(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (unk_0x94FA12918F306658(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_56(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x2BF5E63466422C38(iParam0))
	{
		if (unk_0x5294582CE404D3F4(iParam0, iParam1))
		{
			uVar0 = unk_0x4D57D3E5ECE15A41(iParam0, iParam1);
			if (unk_0xD4B321D9096B01FC(uVar0))
			{
				iVar1 = unk_0x26BC048DC7E3F551(unk_0x7F375072508F738F(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0xBAA38708D7439CA7(iVar0, iVar3, 0))
					{
						if (unk_0x300C62F79A4441EB(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

var func_57()
{
	return Global_2448961.f_17;
}

bool func_58(int iParam0)
{
	return iParam0 == 51;
}

var func_59()
{
	return Global_2448961.f_16;
}

bool func_60()
{
	return unk_0x9B35D07DCD0F0B43() <= Global_22350.f_5878 + 100;
}

int func_61(int iParam0)
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

void func_62(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1319113 == 1)
	{
		return;
	}
	if (unk_0xF4B969E0807E76C7(uParam1, 0))
	{
		func_77(uParam0, 0, 0);
	}
	if (func_65(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x4625051E51BA911B(iParam1))
		{
			iVar0 = unk_0x3D464779B732760F(iParam1);
			if (!unk_0x5294582CE404D3F4(iVar0, 0))
			{
				if (unk_0x7FA2061748BA645E(iVar0))
				{
					if (!func_63())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0x0F81A86FA23D44FA(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x538F8D7D228037B6(0);
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
	unk_0xFFFB9D39E6C8D02D(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x6E2920E14F5F962C(unk_0x0FA8183DAD2B3203(), iParam1, -1, iVar3, iVar4);
	unk_0x3E5A3FD805488EB9("FocusIn", 0, 0);
	unk_0x7D17F1A2E0EEDBB9("HINT_CAM_SCENE");
	unk_0x9964F5BBD9415AB7(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x9B35D07DCD0F0B43();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_63()
{
	return func_64(unk_0x7C7787D2D7139A85());
}

int func_64(int iParam0)
{
	if (unk_0x7F375072508F738F(unk_0x23625FE58BACEBFD(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_65(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_66(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x9B35D07DCD0F0B43() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1))
				{
					if (func_70(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9B35D07DCD0F0B43();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_69(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9B35D07DCD0F0B43();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_69(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9B35D07DCD0F0B43();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_70(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9B35D07DCD0F0B43();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_49(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x9B35D07DCD0F0B43() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1))
					{
						if (!func_70(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x9B35D07DCD0F0B43();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_69(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9B35D07DCD0F0B43();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_69(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9B35D07DCD0F0B43();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_70(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9B35D07DCD0F0B43();
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
				if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1))
				{
					if (!func_70(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_69(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_69(bParam1, bParam2, bParam3) || unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1) || unk_0x5AFC77A2CEA0DE1E(unk_0x0FA8183DAD2B3203(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_70(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x9B35D07DCD0F0B43() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1))
					{
						if (func_68(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_67(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1) || func_67(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1) || unk_0x5AFC77A2CEA0DE1E(unk_0x0FA8183DAD2B3203(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_68(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_49(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_52(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_72();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_67(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_52(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
	{
		if (!unk_0x5F5EDE61626C58B9(unk_0x7C7787D2D7139A85()))
		{
			unk_0x572062A62138FBA2(0, 140, 1);
			unk_0x572062A62138FBA2(0, 80, 1);
			if (unk_0x38CEC20C56D8586B(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_68(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_52(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
	{
		unk_0x572062A62138FBA2(0, 80, 1);
		if (unk_0xD04F46D3CD9D946F())
		{
			if (unk_0x38CEC20C56D8586B(0, 80))
			{
				unk_0x538F8D7D228037B6(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_69(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_52(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
	{
		if (!unk_0x5F5EDE61626C58B9(unk_0x7C7787D2D7139A85()))
		{
			unk_0x572062A62138FBA2(0, 140, 1);
			unk_0x572062A62138FBA2(0, 80, 1);
			if (unk_0x0B6782DED1C4B3B1(0, 80) && unk_0x9B35D07DCD0F0B43() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_70(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_52(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
	{
		unk_0x572062A62138FBA2(0, 80, 1);
		if (unk_0xD04F46D3CD9D946F())
		{
			if (unk_0x0B6782DED1C4B3B1(0, 80) && unk_0x9B35D07DCD0F0B43() > Global_116)
			{
				unk_0x538F8D7D228037B6(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_71(int iParam0)
{
	if (unk_0xD4B321D9096B01FC(iParam0))
	{
		if (unk_0x905FBA24E7FA8D23(iParam0))
		{
			if (unk_0xD960230552BC4165(unk_0xD05B0DA3866791D0(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x4625051E51BA911B(iParam0))
		{
			if (!unk_0x2BF5E63466422C38(unk_0x3D464779B732760F(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x0F100E7952E44923(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_72()
{
	unk_0xA1E7A40E1F56E511(&Global_7357, 4);
}

bool func_73(char* sParam0)
{
	unk_0x1EF54B101C71E009(sParam0);
	return unk_0xFA637652FFB4E2E5(0);
}

var func_74(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_75(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x39A01A052D9B5FF0(uVar0)) && unk_0x005AF94672136563(&(Global_1798[iParam2 /*29*/].f_3)))
	{
		unk_0x058B6969CEED705F(uVar0, &(Global_1798[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_75(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xD4B321D9096B01FC(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xADA89D4F1A58FCBA(iParam0);
	if (unk_0x905FBA24E7FA8D23(iParam0))
	{
		unk_0xBC0D06064C5B5413(uVar0, func_76(unk_0x393E9918BC37548A(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x14C335BB2F079BD4(uVar0, bParam1);
		}
		else
		{
			unk_0x088577CF98F96D05(uVar0, 2);
		}
	}
	else if (unk_0x4625051E51BA911B(iParam0))
	{
		unk_0xBC0D06064C5B5413(uVar0, func_76(unk_0x393E9918BC37548A(), 0.7f, 0.7f));
		unk_0x14C335BB2F079BD4(uVar0, bParam1);
	}
	else if (unk_0x0F100E7952E44923(iParam0))
	{
		unk_0xBC0D06064C5B5413(uVar0, func_76(unk_0x393E9918BC37548A(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_76(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_77(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x393E9918BC37548A())
	{
		if (unk_0xA2BC31158C8CEFD2(Global_2531497.f_4591, 26))
		{
			return;
		}
	}
	if (unk_0xE5409F09171D0BEE())
	{
		unk_0xAB681892AAC7844A(iParam2);
		unk_0xF530F03252D7AEE0("FocusIn");
		unk_0x8E3496DF5BF7F24D("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x3E5A3FD805488EB9("FocusOut", 0, 0);
			unk_0x9964F5BBD9415AB7(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x538F8D7D228037B6(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x79FCE4565761C974(sVar0))
	{
		if (!unk_0x393E9918BC37548A())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x79FCE4565761C974(uParam0->f_3))
	{
		if (func_73(uParam0->f_3))
		{
			unk_0x0D23E3918F7AF11B(1);
		}
	}
	if (!unk_0x79FCE4565761C974(sVar0))
	{
		if (func_73(sVar0))
		{
			unk_0x0D23E3918F7AF11B(1);
		}
	}
}

int func_78(var uParam0)
{
	var uVar0;
	
	if (!unk_0x71FE36FB85146FC0(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x088D4F782E93F9E5(uParam0);
	unk_0xBC0D06064C5B5413(uVar0, func_76(unk_0x393E9918BC37548A(), 0.7f, 0.7f));
	return uVar0;
}

void func_79()
{
	Global_19671 = 0;
	func_80();
}

void func_80()
{
	unk_0xE4F88BFF8FB3D84C();
	Global_21816 = 0;
	if (unk_0x04C7A9862FF737E9())
	{
		unk_0x623942A4F366F9BB(0);
		Global_20805 = 6;
	}
}

int func_81(int iParam0)
{
	if (((((unk_0x41F11D4118027EC7(uParam0, 124) || unk_0x41F11D4118027EC7(iParam0, 125)) || unk_0x41F11D4118027EC7(iParam0, 126)) || unk_0x41F11D4118027EC7(iParam0, 42)) || (unk_0x5EFDDC42B42A7D98(iParam0, unk_0x0FA8183DAD2B3203()) && unk_0x41F11D4118027EC7(iParam0, 29))) || unk_0x3656B691E303FDE0(iParam0, unk_0x0FA8183DAD2B3203(), 1))
	{
		return 1;
	}
	else
	{
		unk_0x7FF38BFB318C1A86(iParam0);
	}
	return 0;
}

void func_82(char* sParam0, int iParam1)
{
	unk_0xD95C12E1062B7D5E(sParam0);
	unk_0x40DC0B0D5BD91E06(0, 0, 1, iParam1);
}

void func_83(char[4] cParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xE1A3A3468E806677(cParam0);
	unk_0x743C4524DF783B2F(iParam1, 1);
}

int func_84(var uParam0, bool bParam1, bool bParam2)
{
	return func_75(uParam0, !bParam1, bParam2);
}

void func_85(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_76577)
	{
		if (!unk_0x2BF5E63466422C38(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x773434A2783CA924(iParam2, 0);
			}
			else
			{
				unk_0x773434A2783CA924(iParam2, 1);
			}
		}
		if (!unk_0x2BF5E63466422C38(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xB35478A1AA54EA1A(iParam2, 0);
			}
			else
			{
				unk_0xB35478A1AA54EA1A(iParam2, 1);
			}
		}
	}
}

int func_86()
{
	if (Global_20805 != 0 || unk_0x04C7A9862FF737E9())
	{
		return 1;
	}
	return 0;
}

void func_87()
{
	func_88(&Local_37);
	unk_0x8CBD7ED64E4A522F("relThief", &iLocal_251);
	unk_0x9B54A3CCAAB4F5FB(5, joaat("player"), iLocal_251);
	unk_0x9B54A3CCAAB4F5FB(5, iLocal_251, joaat("player"));
	switch (func_19())
	{
		case 0:
			func_85(&uLocal_73, 0, unk_0x0FA8183DAD2B3203(), "MICHAEL", 0, 1);
			break;
		
		case 1:
			func_85(&uLocal_73, 1, unk_0x0FA8183DAD2B3203(), "FRANKLIN", 0, 1);
			break;
		
		case 2:
			func_85(&uLocal_73, 2, unk_0x0FA8183DAD2B3203(), "TREVOR", 0, 1);
			break;
	}
	unk_0xB7F4DA52DE3AAF24(0.1f);
}

void func_88(var uParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	Var0 = { unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 0) };
	Var0.f_2 = 0f;
	iVar3 = 0;
	iVar4 = 0;
	unk_0xA1E7A40E1F56E511(&iVar3, 3);
	unk_0xA1E7A40E1F56E511(&iVar3, 4);
	unk_0xA1E7A40E1F56E511(&iVar4, 3);
	unk_0xA1E7A40E1F56E511(&iVar4, 4);
	unk_0xA1E7A40E1F56E511(&iVar4, 8);
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
	switch (func_92())
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
			if (func_89(func_92(), Var0))
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
			if (func_89(func_92(), Var0))
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
			if (func_89(func_92(), Var0))
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

int func_89(int iParam0, struct<3> Param1)
{
	switch (iParam0)
	{
		case 5:
			if (func_90(func_91(Param1 - Vector(0f, 174.58f, 335.5574f)), func_91(Vector(0f, 174.8707f, 334.8261f) - Vector(0f, 174.58f, 335.5574f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 6:
			if (func_90(func_91(Param1 - Vector(0f, -711.023f, 393.0992f)), func_91(Vector(0f, -715.4372f, 393.1879f) - Vector(0f, -711.023f, 393.0992f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 7:
			if (func_90(func_91(Param1 - Vector(0f, -215.2002f, -1423.254f)), func_91(Vector(0f, -215.1443f, -1420.71f) - Vector(0f, -215.2002f, -1423.254f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 11:
			if (func_90(func_91(Param1 - Vector(0f, 274.9096f, -564.5655f)), func_91(Vector(0f, 275.0867f, -567.1105f) - Vector(0f, 274.9096f, -564.5655f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 12:
			if (func_90(func_91(Param1 - Vector(0f, 338.8084f, 225.5057f)), func_91(Vector(0f, 338.4193f, 226.8374f) - Vector(0f, 338.8084f, 225.5057f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 13:
			if (func_90(func_91(Param1 - Vector(0f, 6256.5f, -299.9329f)), func_91(Vector(0f, 6255.179f, -301.1977f) - Vector(0f, 6256.5f, -299.9329f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 14:
			if (func_90(func_91(Param1 - Vector(0f, 4287.951f, -2200.204f)), func_91(Vector(0f, 4289.739f, -2199.26f) - Vector(0f, 4287.951f, -2200.204f))) < 0f)
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

float func_90(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_91(struct<3> Param0)
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

int func_92()
{
	return Global_110270.f_20;
}

void func_93()
{
	if (unk_0xD4B321D9096B01FC(iLocal_245))
	{
		if (!unk_0x2BF5E63466422C38(iLocal_245))
		{
			unk_0xF0E9590A910B74BE(iLocal_245, unk_0x0FA8183DAD2B3203(), 1000f, -1, 0, 1);
		}
		unk_0x0FFB05DA97E810B5(&iLocal_245);
	}
	if (unk_0xD4B321D9096B01FC(iLocal_246))
	{
		if (!unk_0x2BF5E63466422C38(iLocal_246))
		{
			unk_0xF0E9590A910B74BE(iLocal_246, unk_0x0FA8183DAD2B3203(), 1000f, -1, 0, 1);
		}
		unk_0x0FFB05DA97E810B5(&iLocal_246);
	}
	if (unk_0xD4B321D9096B01FC(iLocal_244))
	{
		unk_0xF25956700ADFD77F(&iLocal_244);
	}
	if (unk_0x71FE36FB85146FC0(uLocal_247))
	{
		unk_0xCCD1554A33E9185B(uLocal_247);
	}
	if (unk_0x71FE36FB85146FC0(uLocal_248))
	{
		unk_0xCCD1554A33E9185B(uLocal_248);
	}
	if (unk_0x39A01A052D9B5FF0(uLocal_249))
	{
		unk_0xAA2276003B2ADF1B(&uLocal_249);
	}
	if (unk_0x39A01A052D9B5FF0(uLocal_250))
	{
		unk_0xAA2276003B2ADF1B(&uLocal_250);
	}
	unk_0x0A43D5D11052D038(Local_37.f_7, 0);
	unk_0xB7F4DA52DE3AAF24(1f);
	unk_0x7A9453C2EDBAFB80(iLocal_251);
	unk_0x9C9E32388A7886A2();
}

void func_94(int iParam0)
{
	Global_110270.f_22 = iParam0;
}

